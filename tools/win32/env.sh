#!/bin/bash

PROG=$0
if [ x$BASH_ARGV != "x" ]; then
	PROG=$BASH_ARGV
fi


export YC20_TOOL_PATH=$(dirname $(readlink -f $PROG))

export CC=i586-mingw32msvc-gcc
export CXX=i586-mingw32msvc-g++
export LD=i586-mingw32msvc-ld
export AR=i586-mingw32msvc-ar
export AS=i586-mingw32msvc-as
export NM=i586-mingw32msvc-nm
export STRIP=i586-mingw32msvc-strip
export RANLIB=i586-mingw32msvc-ranlib
export DLLTOOL=i586-mingw32msvc-dlltool
export OBJDUMP=i586-mingw32msvc-objdump
export RC=i586-mingw32msvc-windres
export WINDRES=i586-mingw32msvc-windres

export PATH=$YC20_TOOL_PATH/fake-utils:$PATH

export LDFLAGS_YC20="-mwindows "$YC20_TOOL_PATH"/gui.o "$YC20_TOOL_PATH"/ringbuffer.o"
export LDFLAGS_CLI=$YC20_TOOL_PATH"/ringbuffer.o"

export CFLAGS="-O3 -mtune=native -march=native -msse -mfpmath=sse -ffast-math"

echo compiling gui.rc
$WINDRES $YC20_TOOL_PATH/gui.rc -o $YC20_TOOL_PATH/gui.o

echo compiling ringbuffer.c
$CC $YC20_TOOL_PATH/jack-1.9.6/jack-1.9.6/common/ringbuffer.c -I$YC20_TOOL_PATH/jack-1.9.6/jack-1.9.6/windows $CFLAGS -c -o $YC20_TOOL_PATH/ringbuffer.o

