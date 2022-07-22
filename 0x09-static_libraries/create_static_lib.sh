#!/bin/bash

-Wall -Werror -Wextra -pedantic -std=gnu8 -c *.c

ar rc liball.a *.o

ranlib liball.a
