CC      := clang
CFLAGS  := -std=c99

project: hello

hello: hello.c
	$(CC) $(CFLAGS) $^ -o $@	

.PHONY:
clean:
	rm -f hello

