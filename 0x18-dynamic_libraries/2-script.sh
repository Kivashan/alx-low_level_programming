#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -shared add.c div.c mul.c sub.c mod.c -o 100-operations.so
