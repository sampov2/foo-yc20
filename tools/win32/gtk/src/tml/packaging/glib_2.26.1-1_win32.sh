# This is a shell script that calls functions and scripts from
# tml@iki.fi's personal work environment. It is not expected to be
# usable unmodified by others, and is included only for reference.

MOD=glib
VER=2.26.1
REV=1
ARCH=win32

THIS=${MOD}_${VER}-${REV}_${ARCH}

RUNZIP=${MOD}_${VER}-${REV}_${ARCH}.zip
DEVZIP=${MOD}-dev_${VER}-${REV}_${ARCH}.zip

HEX=`echo $THIS | md5sum | cut -d' ' -f1`
TARGET=c:/devel/target/$HEX

usedev
usemsvs6

(

set -x

dos2unix glib/win_iconv.c

DEPS=`latest --arch=${ARCH} gettext-runtime gettext-tools glib pkg-config`
GETTEXT_RUNTIME=`latest --arch=${ARCH} gettext-runtime`
ZLIB=`latest --arch=${ARCH} zlib`

PKG_CONFIG_PATH=/dummy
for D in $DEPS; do
    PATH=/devel/dist/${ARCH}/$D/bin:$PATH
    [ -d /devel/dist/${ARCH}/$D/lib/pkgconfig ] && PKG_CONFIG_PATH=/devel/dist/${ARCH}/$D/lib/pkgconfig:$PKG_CONFIG_PATH
done

lt_cv_deplibs_check_method='pass_all' \
CC='gcc -mtune=pentium3 -mthreads' \
CPPFLAGS="-I/devel/dist/${ARCH}/${GETTEXT_RUNTIME}/include \
-I/devel/dist/${ARCH}/${ZLIB}/include" \
LDFLAGS="-L/devel/dist/${ARCH}/${GETTEXT_RUNTIME}/lib -Wl,--enable-auto-image-base \
-L/devel/dist/${ARCH}/${ZLIB}/lib" \
CFLAGS=-O2 \
./configure \
--enable-silent-rules \
--disable-gtk-doc \
--prefix=$TARGET &&

(cd glib &&
make glibconfig.h.win32 &&
make glibconfig-stamp &&
mv glibconfig.h glibconfig.h.autogened &&
cp glibconfig.h.win32 glibconfig.h) &&
PATH="/devel/target/$HEX/bin:$PATH" make -j3 install &&

./glib-zip &&

mv /tmp/glib-$VER.zip /tmp/$RUNZIP &&
mv /tmp/glib-dev-$VER.zip /tmp/$DEVZIP

) 2>&1 | tee /devel/src/tml/packaging/$THIS.log

(cd /devel && zip /tmp/$DEVZIP src/tml/packaging/$THIS.{sh,log}) &&
manifestify /tmp/$RUNZIP /tmp/$DEVZIP
