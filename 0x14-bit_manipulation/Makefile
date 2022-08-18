#!/bin/bash

CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89

.PHONY: all

all:
	$(CC) $(CFLAGS) *.c -o bit
.PHONY: clean
clean:
	rm -f bit *.o
