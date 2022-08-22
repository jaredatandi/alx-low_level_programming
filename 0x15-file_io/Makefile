#compile all c files

CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
CC=gcc

.PHONY: all
all:
	$(CC) $(CFLAGS) *.c -o files

.PHONY: clean

clean:
	rm -f files *.out
