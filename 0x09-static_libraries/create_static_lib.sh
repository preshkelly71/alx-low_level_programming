#!/bin/bash
gcc -Wall -Werror -Wextra -c *.c
ar -rc liball.a *.o
ralib liball.a
