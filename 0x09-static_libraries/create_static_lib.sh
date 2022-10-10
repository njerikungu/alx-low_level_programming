#!/bin/bash 
gcc -c -Wall -Werror -Wextra -pendantic *.c
ar -rc liball.a *.o
