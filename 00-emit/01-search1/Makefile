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

