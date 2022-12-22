#!/usr/bin/env python3
CC = 'gcc'
CPP = 'g++'
CFLAGS = ['-std=c99', '-Wall']
CPFLAGS = ['-std=c++11', '-Wall']

import os
import sys
argv = sys.argv
if len(argv) != 2:
    print('Usage: ./generate-makefiles.py [path]')
    exit(0)
_, path = argv

try:
    os.chdir(path)
except FileNotFoundError:
    print('Dir not found', flush=sys.stderr)
    exit(-1)

dirs = [filename for filename in os.listdir() if os.path.isdir(filename)]
INDENT = '\t'
CHEADER = ['# This file is generated automatically\n', 'CC      := {}\n'.format(CC), 'CFLAGS  := {}\n'.format(' '.join(CFLAGS))]
CPPHEADER = ['CPP     := {}\n'.format(CPP), 'CPFLAGS := {}\n'.format(' '.join(CPFLAGS))]
FOOTER = ['.PHONY:\n', 'clean:\n', '{}rm -f $(PROJECT)\n\n'.format(INDENT)]
for dir in dirs:
    os.chdir(dir)
    cfiles = [filename for filename in os.listdir() if filename.endswith(r'.c')]
    cppfiles = [filename for filename in os.listdir() if filename.endswith(r'.cpp') or filename.endswith(r'cc')]
    with open('Makefile', 'w') as makefile:
        makefile.writelines(CHEADER)
        if len(cppfiles) > 0:
            makefile.writelines(CPPHEADER)
        target_lst, recipes = [], []
        
        def unique_append(lst: list, target) -> (list, object):
            actual_target = target
            if not target in lst:
                lst.append(actual_target)
                return lst, actual_target
            suffix = 1
            while (target + str(suffix)) in lst:
                suffix += 1
            actual_target = target + str(suffix)
            lst.append(actual_target)
            return lst, actual_target

        for cfile in cfiles:
            target = cfile[:-2]
            target_lst, target = unique_append(target_lst, target)
            recipes.append('{}: {}\n'.format(target, cfile))
            recipes.append('{}$(CC) $(CFLAGS) $^ -o $@\n'.format(INDENT))

        for cppfile in cppfiles:
            target = cppfile[:-4 if cppfile.endswith(r'.cpp') else -3]
            target_lst, target = unique_append(target_lst, target)
            recipes.append('{}: {}\n'.format(target, cppfile))
            recipes.append('{}$(CPP) $(CPFLAGS) $^ -o $@\n'.format(INDENT))
        
        makefile.write('PROJECT := {}\n'.format(' '.join(target_lst)))
        makefile.write('project: $(PROJECT)\n')
        makefile.writelines(recipes)
        makefile.writelines(FOOTER)

        with open('.gitignore', 'w') as ignore:
            target_lst = [t + '\n' for t in target_lst]
            ignore.writelines(target_lst)
    
    os.chdir('..')

os.system('cp ../00-emit/do-make.sh .')
os.system('cp ../00-emit/clean.sh .')

print('Done!')

'''makefile-template
CC      := clang
CPP     := clang++
CFLAGS  := -std=c99
CPFLAGS := -std=c++11

project: solution-c solution-cpp

solution-c: solution.c
	$(CC) $(CFLAGS) $^ -o $@

solution-cpp: solution.cpp
	$(CPP) $(CPFLAGS) $^ -o $@

.PHONY:
clean:
	rm -f solution-c solution-cpp
'''

