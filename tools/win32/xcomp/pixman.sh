#!/bin/bash

cd pixman-0.20.2

CFLAGS="-I/foobar/data/win32/include -O3 -msse -ffast-math -mfpmath=sse" LDFLAGS="-L/foobar/data/win32/lib" ./configure --prefix=/foobar/data/win32 --host=i586-mingw32msvc --build=i686-linux

# remove "test" from the SUBDIRS variable

make

