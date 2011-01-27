#!/bin/bash

export CROSS_PREFIX=i586-mingw32msvc-

cd zlib-1.2.5/

CFLAGS="-O3 -msse -ffast-math -mfpmath=sse" prefix=/foobar/data/win32 ./configure

## remove -lc from Makefile
LDSHAREDLIBC="" make

