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

DISTDIR="dist/"
VERSIONDIR="foo-yc20-"$VERSION
BUILDDIR=$DISTDIR$VERSIONDIR

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

cat Makefile | sed 's/^VERSION=/VERSION='$VERSION'/' > $BUILDDIR/Makefile

cp -n gen/yc20-dsp-plugin.cpp \
      gen/yc20-dsp-standalone.cpp \
      $BUILDDIR/gen

cp -n src/configuration.cpp \
      src/faust-dsp-plugin.cpp \
      src/faust-dsp-standalone.cpp \
      src/foo-yc20.cpp \
      src/foo-yc20-ui2.cpp \
      src/foo-yc20-ui.cpp \
      src/lv2.cpp \
      src/lv2-ui.cpp \
      src/main-cli.cpp \
      src/main-gui.cpp \
      src/polyblep.cpp \
      src/yc20-jack.cpp \
	$BUILDDIR/src

cp -n 	graphics/white_[0-3].png \
	graphics/black_[0-3].png \
	graphics/green_[0-3].png \
	graphics/background.png \
	graphics/potentiometer.png \
	graphics/icon.png \
	$BUILDDIR/graphics

cp -n	faust/biquad.dsp \
	faust/blep.dsp \
	faust/divider.dsp \
	faust/keyboard.dsp \
	faust/mixer.dsp \
	faust/oscillator.dsp \
	faust/percussion.dsp \
	faust/plugin.dsp \
	faust/rc_filter.dsp \
	faust/standalone.dsp \
	faust/vibrato.dsp \
	faust/wave_transformer.dsp \
	faust/yc20.dsp \
	$BUILDDIR/faust


cd $DISTDIR
tar cjf $VERSIONDIR".tar.bz2" $VERSIONDIR

echo $VERSIONDIR".tar.bz2" is ready

