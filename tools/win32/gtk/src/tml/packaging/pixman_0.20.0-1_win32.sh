# This is a shell script that is sourced, not executed. It uses
# functions and scripts from tml@iki.fi's work envíronment and is
# included only for reference

MOD=pixman
VER=0.20.0
REV=1
ARCH=win32

THIS=${MOD}_${VER}-${REV}_${ARCH}

RUNZIP=${MOD}_${VER}-${REV}_${ARCH}.zip
DEVZIP=${MOD}-dev_${VER}-${REV}_${ARCH}.zip

HEX=`echo $THIS | md5sum | cut -d' ' -f1`
TARGET=c:/devel/target/$HEX

usedev

(

set -x

BUILDDEPS=`latest --arch=${ARCH} glib pkg-config`

for D in $BUILDDEPS; do
    PATH=/devel/dist/${ARCH}/$D/bin:$PATH
done

CC='gcc -mms-bitfields' CFLAGS=-O2 ./configure --disable-shared --prefix=c:/devel/target/$HEX &&
make &&
make install &&

rm -f /tmp/$RUNZIP /tmp/$DEVZIP &&

(cd /devel/target/$HEX &&

# I build pixman as a static library only, so the "run-time" package
# is actually empty. I create it here anyway to be able to use some
# scripts that assume each library has both a run-time and developer
# version.

zip /tmp/$RUNZIP nul &&
zip -d /tmp/$RUNZIP nul &&
zip -r -D /tmp/$DEVZIP include/pixman-1 &&
zip /tmp/$DEVZIP lib/libpixman-1.a &&
zip -r -D /tmp/$DEVZIP lib/pkgconfig &&

: )

) 2>&1 | tee /devel/src/tml/packaging/$THIS.log &&

(cd /devel && zip /tmp/$DEVZIP src/tml/packaging/$THIS.{sh,log}) &&
manifestify /tmp/$RUNZIP /tmp/$DEVZIP &&

:
