#!/bin/sh
#
# usage:
#   ./vsti-package.sh [version-number]
# to force a rebuild (if the executable already exists):
#   RECOMPILE=1 ./package.sh [version-number]
#
# The version-number is optional as it only changes the name of 
# the final .dmg file which can also be set with the
# DMGFILE environment variable.
#

cd `dirname $0`
BUILDDIR=$(pwd)
SRCDIR=${BUILDDIR}/../../trunk/

### compile foo-yc20 OSX/VSTi
cd $SRCDIR
if [ ! -x vstosx -o -n "$RECOMPILE" ]; then

  ### use local GTK installations if any
  if test -d $HOME/gtk/inst/; then
    export PKG_CONFIG_PATH=$HOME/gtk/inst/lib/pkgconfig/:$PKG_CONFIG_PATH
  fi

  CFLAGS="-O3 -ffast-math -ftree-vectorize -arch ppc -arch i386 -DOSXVST" \
  CFLAGS="$CFLAGS -isysroot /Developer/SDKs/MacOSX10.5.sdk \
                  -mmacosx-version-min=10.5 -Wall" \
  make clean vstosx \
    VSTSDK=/Users/rgareus/data/vstsdk2.4/ \
  || exit
fi
cd $BUILDDIR

### config for DMG
export PRODUCT_NAME="foo-yc20"
VOLNAME=foo-yc20-VSTi
if [ -z "$DMGFILE" ]; then
  DMGFILE=$HOME/Desktop/foo-yc20-VSTi${1:+-$1}.dmg  # OUTPUT FILE
fi


##############################################################################
follow_dependencies () {
    libname=$1
    cd "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/Frameworks"
    dependencies=`otool -arch all -L "$libname" | egrep '\/((opt|usr)\/local\/lib|gtk\/inst\/lib)' | awk '{print $1}'`
    for l in $dependencies; do
        depname=`basename $l`
        deppath=`dirname $l`
        if [ ! -f "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/Frameworks/$depname" ]; then
            deploy_lib $depname "$deppath"
        fi
    done
}

update_links () {
    libname=$1
    libpath=$2
    for n in `ls ${LIBS_PATH}/*`; do
        install_name_tool \
            -change "$libpath/$libname" \
            @loader_path/../Frameworks/$libname \
            "$n"
    done
}

deploy_lib () {
    libname=$1
    libpath=$2
    check=`echo $INSTALLED | grep $libname`
    if [ "X$check" = "X" ]; then
        if [ ! -f "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/Frameworks/$libname" ]; then
            cp -f "$libpath/$libname" "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/Frameworks/$libname"
            install_name_tool \
                -id @loader_path/../Frameworks/$libname \
                "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/Frameworks/$libname"
            follow_dependencies $libname
        fi
        export INSTALLED="$INSTALLED $libname"
    fi
    update_links $libname $libpath
}

update_executable() {
    echo "updating executable ${TARGET}"
    LIBS=`otool -arch all -L "$TARGET" | egrep '\/((opt|usr)\/local\/lib|gtk\/inst\/lib)' | awk '{print $1}'`
    for l in $LIBS; do
        libname=`basename $l`
        libpath=`dirname $l`
        deploy_lib $libname $libpath
        #echo "install_name_tool -change $libpath/$libname @loader_path/../Frameworks/$libname \"$TARGET\""
        install_name_tool \
            -change $libpath/$libname \
            @loader_path/../Frameworks/$libname \
            "$TARGET"
    done
}
##############################################################################

### prepare APP bundle
export TARGET_BUILD_DIR="${BUILDDIR}/osxvst/"
export TARGET="$TARGET_BUILD_DIR/${PRODUCT_NAME}.vst/Contents/MacOS/${PRODUCT_NAME}"
export LIBS_PATH="$TARGET_BUILD_DIR/${PRODUCT_NAME}.vst/Contents/Frameworks"

rm -rf ${TARGET_BUILD_DIR}
mkdir -p ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/MacOS
mkdir -p ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/Frameworks
mkdir -p ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/Resources/graphics
install -m 755 ${SRCDIR}/vstosx ${TARGET}
install -m 644 ${SRCDIR}/graphics/*.png ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/Resources/graphics
#strip ${TARGET}

# install OSX icon
install -m 644 resources/$PRODUCT_NAME.icns ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/Resources/

cat > "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/PkgInfo" << EOF
BNDLRGSS
EOF

cat > "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst/Contents/Info.plist" << EOF
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple Computer//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
  <key>CFBundleExecutable</key>
  <string>$PRODUCT_NAME</string>
  <key>CFBundleName</key>
  <string>$PRODUCT_NAME</string>
  <key>CFBundlePackageType</key>
  <string>BNDL</string>
  <key>CFBundleSignature</key>
  <string>RG42</string>
  <key>CFBundleIdentifier</key>
  <string>com.studionumbersix.foo.yc20</string>
  <key>CFBundleVersion</key>
  <string>1.0</string>
  <key>CFBundleIconFile</key>
  <string>$PRODUCT_NAME</string>
  <key>CSResourcesFileMapped</key>
  <true/>
</dict>
</plist>
EOF

### complete the bundle
export INSTALLED=""

echo "------------------------------------"
echo "OUTPUT : ${DMGFILE}"
echo "BASEDIR: ${TARGET_BUILD_DIR}"
echo "TARGET : ${TARGET}"
echo "LIBDIR : ${LIBS_PATH}"
echo "------------------------------------"

mkdir -p $LIBS_PATH
rm -f ${LIBS_PATH}/*.dylib

##############################################################################
### add libs the executable depends on:
update_executable

### add libs that libs depend on.

cd $LIBS_PATH && MORELIBS=`otool -arch all -L * | egrep '\/((opt|usr)\/local\/lib|gtk\/inst\/lib)' | awk '{print $1}'` && cd - > /dev/null
while [ "X$MORELIBS" != "X" ]; do
    for l in $MORELIBS; do
        libname=`basename $l`
        libpath=`dirname $l`
        deploy_lib "$libname" "$libpath"
    done
    cd $LIBS_PATH && MORELIBS=`otool -arch all -L * | egrep '\/((opt|usr)\/local\/lib|gtk\/inst\/lib)'  | awk '{print $1}'` && cd - > /dev/null
done

update_executable

##############################################################################
###roll a DMG
echo "generating DMG.."

TMPFILE=/tmp/footmp.dmg
MNTPATH=/tmp/foomnt/
APPNAME="${PRODUCT_NAME}.vst"

mkdir -p $MNTPATH
if [ -e $TMPFILE -o -e $DMGFILE -o ! -d $MNTPATH ]; then
  echo
  echo "can not create DMG. tmp-file or destination file exists."
  echo "please clean up previous builds."
  exit;
fi


hdiutil create -megabytes 200 $TMPFILE
DiskDevice=$(hdid -nomount "${TMPFILE}" | grep Apple_HFS | cut -f 1 -d ' ')
newfs_hfs -v "${VOLNAME}" "${DiskDevice}"
mount -t hfs "${DiskDevice}" "${MNTPATH}"

cp -r ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.vst ${MNTPATH}/
mkdir ${MNTPATH}/.background
BGFILE=$(basename $BGPIC)
cp -vi ${BGPIC} ${MNTPATH}/.background/${BGFILE}

echo '
   tell application "Finder"
     tell disk "'${VOLNAME}'"
       open
       set current view of container window to icon view
       set toolbar visible of container window to false
       set statusbar visible of container window to false
       set the bounds of container window to {400, 200, 800, 440}
       set theViewOptions to the icon view options of container window
       set arrangement of theViewOptions to not arranged
       set icon size of theViewOptions to 64
       set position of item "'${APPNAME}'" of container window to {100, 100}
       close
       open
       update without registering applications
       delay 5
       eject
     end tell
   end tell
' | osascript

sync

# Umount the image
umount "${DiskDevice}"
hdiutil eject "${DiskDevice}"

# Create a read-only version, use zlib compression
hdiutil convert -format UDZO "${TMPFILE}" -imagekey zlib-level=9 -o "${DMGFILE}"

# Delete the temporary files
if [ -z "$KEEPTMP" ]; then
  rm $TMPFILE
fi
rmdir $MNTPATH

echo
echo "packaging suceeded."
if [ -n "$KEEPTMP" ]; then
 ls -l $TMPFILE
fi
ls -l $DMGFILE
