CC      := clang
CFLAGS  := -std=c99 -Wno-unused-value

project: killer

killer: killer.c
	$(CC) $(CFLAGS) $^ -o $@	

.PHONY:
clean:
	rm -f killer

