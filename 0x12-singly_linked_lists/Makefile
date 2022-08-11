#!/bin/bash

#********* A make to manage the *.c files in this directory******#


#************ Compiler options ***********************#
options=gcc -Wall -Werror -Wextra -pedantic -std=gnu89

.PHONY: list

list: 
	$(options) *.c -o list

.PHONY:RM 
#**************** Cleaner ******************#

RM:
	rm *.o list
