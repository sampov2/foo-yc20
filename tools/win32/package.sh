#!/bin/bash

function fail
{
        echo aborting, $BUILDDIR might contain cruft from the interrupted command
        exit
}

trap fail ERR

DLLS="freetype6.dll intl.dll libatk-1.0-0.dll libcairo-2.dll libexpat-1.dll libfontconfig-1.dll libgdk-win32-2.0-0.dll libgdk_pixbuf-2.0-0.dll libgio-2.0-0.dll libglib-2.0-0.dll libgmodule-2.0-0.dll libgobject-2.0-0.dll libgthread-2.0-0.dll libgtk-win32-2.0-0.dll libpango-1.0-0.dll libpangocairo-1.0-0.dll libpangoft2-1.0-0.dll libpangowin32-1.0-0.dll libpng14-14.dll zlib1.dll"

if [ ! -f Makefile ]; then
	echo run package.sh in the uncompressed source directory
	exit
fi

eval $(cat Makefile | grep ^VERSION)

if [ x$VERSION = "x" ]; then
	echo it makes no sense to build without a version number in the Makefile
	exit
fi

make clean
make foo-yc20 foo-yc20-cli vsti

BUILDDIR=foo-yc20-$VERSION

if [ -f $BUILDDIR ]; then
	echo $BUILDDIR: exists, aborting
	exit
fi

mkdir $BUILDDIR
mkdir $BUILDDIR/graphics
cp -n graphics/*.png $BUILDDIR/graphics

for DLL in $DLLS; do
	TMP=$(find $YC20_TOOL_PATH -name $DLL)
	if [ x$TMP = "x" ]; then
		echo $DLL: cannot find it
		exit
	fi
	cp -n $TMP $BUILDDIR
done

cp -n foo-yc20 $BUILDDIR/foo-yc20.exe
cp -n foo-yc20-cli $BUILDDIR/foo-yc20-cli.exe
cp -n FooYC20.dll $BUILDDIR/

zip -r foo-yc20-$VERSION.zip $BUILDDIR



