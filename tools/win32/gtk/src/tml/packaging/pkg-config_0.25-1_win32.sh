# This is a shell script that calls functions and scripts from
# tml@iki.fi's personal work environment. It is not expected to be
# usable unmodified by others, and is included only for reference.

MOD=pkg-config
VER=0.25
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

GLIB=`latest --arch=${ARCH} glib`
PROXY_LIBINTL=`latest --arch=${ARCH} proxy-libintl`
PKG_CONFIG=/devel/dist/${ARCH}/`latest --arch=${ARCH} pkg-config`/bin/pkg-config.exe

sed -e 's/need_relink=yes/need_relink=no # no way --tml/' <ltmain.sh >ltmain.temp && mv ltmain.temp ltmain.sh &&

sed -e 's/-lglib-2.0 -liconv -lintl/-lglib-2.0/' <configure >configure.temp && mv configure.temp configure &&

PATH=/devel/dist/$ARCH/$GLIB/bin:$PATH
PKG_CONFIG_PATH=/devel/dist/$ARCH/$GLIB/lib/pkgconfig

CC='gcc -mthreads' \
CPPFLAGS="`$PKG_CONFIG --cflags glib-2.0` \
-I/devel/dist/${ARCH}/${PROXY_LIBINTL}/include" \
LDFLAGS="`$PKG_CONFIG --libs glib-2.0` \
-L/devel/dist/${ARCH}/${PROXY_LIBINTL}/lib -Wl,--exclude-libs=libintl.a" \
CFLAGS=-O2 \
./configure --disable-static --prefix=c:/devel/target/$HEX &&
make -j3 install &&

rm -f /tmp/$RUNZIP /tmp/$DEVZIP

cd /devel/target/$HEX && 
zip /tmp/$RUNZIP bin/pkg-config.exe &&
zip /tmp/$DEVZIP share/man/man1/pkg-config.1 share/aclocal/pkg.m4

) 2>&1 | tee /devel/src/tml/packaging/$THIS.log

(cd /devel && zip /tmp/$DEVZIP src/tml/packaging/$THIS.{sh,log}) &&
manifestify /tmp/$RUNZIP /tmp/$DEVZIP
