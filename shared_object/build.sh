#!/bin/bash
gcc -c calculate.c -o calculate.o
gcc -o calculate calculate.o -lmmath -L.
gcc -o libmy_math.so -fpic -shared my_math.c
