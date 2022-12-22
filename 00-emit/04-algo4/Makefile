CC      := clang
CFLAGS  := -std=c99

project: killer

killer: killer.c
	$(CC) $(CFLAGS) $^ -o $@	

.PHONY:
clean:
	rm -f killer

