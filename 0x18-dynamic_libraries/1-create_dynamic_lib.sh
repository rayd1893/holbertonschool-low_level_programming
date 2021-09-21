#!/bin/bash
gcc -fPIC -c *.c
gcc -fno-common -shared -o liball.so *.o
