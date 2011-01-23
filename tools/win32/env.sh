#!/bin/bash

PROG=$0
if [ x$BASH_ARGV != "x" ]; then
	PROG=$BASH_ARGV
fi


export YC20_TOOL_PATH=$(dirname $(readlink -f $PROG))

CROSS="i586-mingw32msvc-"
if [ "$MSYSTEM" = "MINGW32" ]; then
	CROSS=""
fi

export CC=${CROSS}gcc
export CXX=${CROSS}g++
export LD=${CROSS}ld
export AR=${CROSS}ar
export AS=${CROSS}as
export NM=${CROSS}nm
export STRIP=${CROSS}strip
export RANLIB=${CROSS}ranlib
export DLLTOOL=${CROSS}dlltool
export OBJDUMP=${CROSS}objdump
export RC=${CROSS}windres
export WINDRES=${CROSS}windres

export PATH=$YC20_TOOL_PATH/fake-utils:$PATH

export VSTSDK=$YC20_TOOL_PATH/vstsdk2.4/

export LDFLAGS_YC20="-mwindows "$YC20_TOOL_PATH"/gui.o "$YC20_TOOL_PATH"/ringbuffer.o"
export LDFLAGS_CLI=$YC20_TOOL_PATH"/ringbuffer.o"
export VSTFLAGS=$YC20_TOOL_PATH"/ringbuffer.o"

export CFLAGS="-O3 -mtune=native -march=native -msse -mfpmath=sse -ffast-math"

echo compiling gui.rc
$WINDRES $YC20_TOOL_PATH/gui.rc -o $YC20_TOOL_PATH/gui.o

echo compiling ringbuffer.c
$CC $YC20_TOOL_PATH/jack-1.9.6/jack-1.9.6/common/ringbuffer.c -I$YC20_TOOL_PATH/jack-1.9.6/jack-1.9.6/windows $CFLAGS -c -o $YC20_TOOL_PATH/ringbuffer.o

if [ ! -d $VSTSDK ]; then
	echo '########## WARNING ############'
	echo cannot build the VST. Please download the VST SDK 2.4 and unpack it so that it appears as $VSTSDK
fi

