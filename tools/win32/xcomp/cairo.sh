#!/bin/bash

export PKG_CONFIG_PATH=/foobar/data/win32/lib/pkgconfig/

cd cairo-1.10.2

#set test_win32_printing="no" after it's tested in configure
# comment out is_paginated and is_printing stuff in src/cairo-win32-surface.c

CFLAGS="-I/foobar/data/win32/include -O3 -msse -ffast-math -mfpmath=sse" LDFLAGS="-L/foobar/data/win32/lib" ./configure --prefix=/foobar/data/win32 --host=i586-mingw32msvc --build=i686-linux --enable-ps=no --enable-fc=no --enable-ft=no --enable-pdf=no --enable-svg=no --enable-xlib=no --enable-interpreter=no


