#!/bin/sh
#
# usage:
#   ./lv2-package.sh [version-number]

PKGVERSION=0.1
OUTFILE=$HOME/Desktop/foo-yc20-lv2${1:+-$1}.pkg  # OUTPUT FILE

###############################################################################
DESTDIR=/tmp/foo-yc20-lv2
BUILDDIR=$(pwd)
SRCDIR=${BUILDDIR}/../../trunk
PREFIX=/usr/local

cd $SRCDIR
if [    ! -e ${SRCDIR}/src/foo-yc20.lv2/foo-yc20-lv2ui.so \
     -o ! -e ${SRCDIR}/src/foo-yc20.lv2/foo-yc20.so \
     -o -n "$RECOMPILE" ]; then

  ### use local GTK installations if any
  if test -d $HOME/gtk/inst/; then
    export PKG_CONFIG_PATH=$HOME/gtk/inst/lib/pkgconfig/:$PKG_CONFIG_PATH
  fi

  CFLAGS="-O3 -ffast-math -ftree-vectorize -arch ppc -arch i386 -arch x86_64" \
  CFLAGS="$CFLAGS -isysroot /Developer/SDKs/MacOSX10.5.sdk -mmacosx-version-min=10.5" \
  CFLAGS="$CFLAGS -I/usr/local/include/ -DOSXLV2" \
  make clean lv2 \
    LDFLAGS_YC20_LV2="-arch i386 -arch ppc -arch x86_64 \
                      -isysroot /Developer/SDKs/MacOSX10.5.sdk \
                      -mmacosx-version-min=10.5" \
  || exit

fi
cd $BUILDDIR

##############################################################################
follow_dependencies () {
    libname=$1
    cd "${TARGET_DIR}"
    dependencies=`otool -arch all -L "$libname"  | egrep '\/((opt|usr)\/local\/lib|gtk\/inst\/lib)' | awk '{print $1}'`
    for l in $dependencies; do
        depname=`basename $l`
        deppath=`dirname $l`
        if [ ! -f "${TARGET_DIR}/$depname" ]; then
            deploy_lib $depname "$deppath"
        fi
    done
}

update_links () {
    libname=`basename $1`
    libfullpath=$1
    for n in `ls ${TARGET_DIR}/*.dylib 2>/dev/null`; do
        install_name_tool \
            -change "$libfullpath" \
            @loader_path/$libname \
            "$n"
    done
}

deploy_lib () {
    libname=$1
    libpath=$2
    check=`echo $INSTALLED | grep $libname`
    if [ "X$check" = "X" ]; then
        if [ ! -f "${TARGET_DIR}/$libname" ]; then
            cp -f "$libpath/$libname" "${TARGET_DIR}/$libname"
            install_name_tool \
                -id @loader_path/$libname \
                "${TARGET_DIR}/$libname"
            export LIBDEPS="$LIBDEPS ${libpath}/${libname}"
            export INSTALLED="$INSTALLED $libname"
            follow_dependencies $libname
        fi
    fi
}

update_executable() {
    echo "updating ${TARGET}"
    export LIBDEPS=""
    LIBS=`otool -arch all -L "$TARGET" | egrep '\/((opt|usr)\/local\/lib|gtk\/inst\/lib)' | awk '{print $1}'`
    for l in $LIBS; do
        libname=`basename $l`
        libpath=`dirname $l`
        deploy_lib $libname $libpath
        install_name_tool \
            -change $libpath/$libname \
            @loader_path/$libname \
            "$TARGET"
    done
    for n in $LIBDEPS; do
        update_links $n
    done;
}

###############################################################################
rm -f $OUTFILE  # XXX
rm -rf $DESTDIR

export TARGET_DIR=${DESTDIR}${PREFIX}/lib/lv2/foo-yc20.lv2

install -d ${DESTDIR}${PREFIX}/share/foo-yc20/graphics
install -m 644 ${SRCDIR}/graphics/*.png ${DESTDIR}${PREFIX}/share/foo-yc20/graphics
install -d ${TARGET_DIR}
install -m 755 ${SRCDIR}/src/foo-yc20.lv2/*.so ${TARGET_DIR}
install -m 644 ${SRCDIR}/src/foo-yc20.lv2/*.ttl ${TARGET_DIR}

###############################################################################
install_name_tool -id ${PREFIX}/lib/lv2/foo-yc20.lv2/foo-yc20-lv2ui.so \
            ${TARGET_DIR}/foo-yc20-lv2ui.so
install_name_tool -id ${PREFIX}/lib/lv2/foo-yc20.lv2/foo-yc20.so \
            ${TARGET_DIR}/foo-yc20.so

export INSTALLED="libjack.0.dylib"
export TARGET=${TARGET_DIR}/foo-yc20.so
update_executable
export TARGET=${TARGET_DIR}/foo-yc20-lv2ui.so
update_executable

###############################################################################
/Developer/usr/bin/packagemaker \
  --id gareus.org.foo-yc20 \
  --out $OUTFILE \
  --target 10.5 \
  --version $PKGVERSION \
  --title "foo-yc20 LV2 Plugin" \
  --target 10.5 --no-relocate --root-volume-only \
  --root $DESTDIR

ls -l $OUTFILE
