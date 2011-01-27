#!/bin/bash

cd libpng-1.4.5


CFLAGS="-I/foobar/data/win32/include -O3 -msse -ffast-math -mfpmath=sse" LDFLAGS="-L/foobar/data/win32/lib" ./configure --prefix=/foobar/data/win32/ --host=i586-mingw32msvc --build=i686-linux 

make
