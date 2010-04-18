#!/bin/bash

function fail
{
	echo aborting, $BUILDDIR might contain cruft from the interrupted command
	exit
}

VERSION=$1

if [ "$VERSION" = "" ]; then
	echo usage: package.sh version
	exit
fi

BUILDDIR="dist/foo-yc20-"$VERSION

if [ -d $BUILDDIR ]; then
	echo $BUILDDIR: already exists
	exit
fi

trap fail ERR

mkdir -p $BUILDDIR

mkdir $BUILDDIR/gen
mkdir $BUILDDIR/faust
mkdir $BUILDDIR/src
mkdir $BUILDDIR/graphics

cp -n	foo-yc20.desktop.in \
	LICENSE \
	README \
	$BUILDDIR/

cat Makefile | sed 's/VERSION=/VERSION='$VERSION'/' > $BUILDDIR/Makefile

cp -n gen/foo-yc20-dsp.cpp $BUILDDIR/gen

cp -n	src/foo-yc20.cpp \
	src/foo-yc20.h \
	src/polyblep.cpp \
	src/wdgt.h \
	src/yc20_wdgts.h \
	$BUILDDIR/src

cp -n 	graphics/white_[0-3].png \
	graphics/black_[0-3].png \
	graphics/green_[0-3].png \
	graphics/background.png \
	graphics/potentiometer.png \
	graphics/icon.png \
	$BUILDDIR/graphics

