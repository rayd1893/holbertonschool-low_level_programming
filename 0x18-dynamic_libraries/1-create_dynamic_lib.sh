#!/bin/bash
gcc -lpic -c *.c
gcc -fno-common -shared -o liball.so *.o
