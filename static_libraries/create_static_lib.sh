#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c source_0.c source_1.c source_2.c
ar -rc liball.a *.o
