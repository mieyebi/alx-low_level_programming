#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -c *.c

gcc -c *.c -o *.o

ar -rcs liball.a *.o

ranlib liball.a
