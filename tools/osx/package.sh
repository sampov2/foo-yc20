#!/bin/sh
#
# usage:
#   ./package-osx [version-number]
# to force a rebuild (if the executable already exists):
#   REBUILD=1 ./package-osx [version-number]
#
# The version-number is optional as it only changes the name of 
# the final .dmg file which can also be set with the
# DMGFILE environment variable.
#

cd `dirname $0`
BUILDDIR=$(pwd)
SRCDIR=${BUILDDIR}/../../trunk/

### compile foo-yc20
cd $SRCDIR
if [ ! -x foo-yc20 -o -n "$RECOMPILE" ]; then
  ### use local GTK installations if any
  if test -d $HOME/gtk/inst/; then
    export PKG_CONFIG_PATH=$HOME/gtk/inst/lib/pkgconfig/:$PKG_CONFIG_PATH
  fi

  CFLAGS="-O3 -ffast-math -ftree-vectorize -arch ppc -arch i386" \
  LDFLAGS_YC20="-arch i386 -arch ppc" \
  LDFLAGS_YC20_CLI="-arch i386 -arch ppc" \
  make clean foo-yc20 \
  || exit
fi
cd $BUILDDIR

### config for DMG
export PRODUCT_NAME="foo-yc20"
BGPIC=${BUILDDIR}/resources/dmgbg.png    # background img for DMG
VOLNAME=foo-yc20                    # name of the DMG Installer Volume
if [ -z "$DMGFILE" ]; then
  DMGFILE=$HOME/Desktop/foo-yc20${1:+-$1}.dmg  # OUTPUT FILE
fi


##############################################################################
follow_dependencies () {
    libname=$1
    cd "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/Frameworks"
    dependencies=`otool -arch all -L "$libname"  | egrep '\/(opt|usr)\/local\/lib' | awk '{print $1}'`
    for l in $dependencies; do
        depname=`basename $l`
        deppath=`dirname $l`
        if [ ! -f "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/Frameworks/$depname" ]; then
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
            @executable_path/../Frameworks/$libname \
            "$n"
    done
}

deploy_lib () {
    libname=$1
    libpath=$2
    check=`echo $INSTALLED | grep $libname`
    if [ "X$check" = "X" ]; then
        if [ ! -f "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/Frameworks/$libname" ]; then
            cp -f "$libpath/$libname" "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/Frameworks/$libname"
            install_name_tool \
                -id @executable_path/../Frameworks/$libname \
                "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/Frameworks/$libname"
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
        #echo "install_name_tool -change $libpath/$libname @executable_path/../Frameworks/$libname \"$TARGET\""
        install_name_tool \
            -change $libpath/$libname \
            @executable_path/../Frameworks/$libname \
            "$TARGET"
    done
}
##############################################################################

### prepare APP bundle
export TARGET_BUILD_DIR="${BUILDDIR}/osxapp/"
export TARGET="$TARGET_BUILD_DIR/${PRODUCT_NAME}.app/Contents/MacOS/${PRODUCT_NAME}-bin"
export LIBS_PATH="$TARGET_BUILD_DIR/${PRODUCT_NAME}.app/Contents/Frameworks"

rm -rf ${TARGET_BUILD_DIR}
mkdir -p ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/MacOS
mkdir -p ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/Frameworks
mkdir -p ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/Resources/graphics
install -m 755 ${SRCDIR}/${PRODUCT_NAME} ${TARGET}
install -m 644 ${SRCDIR}/graphics/*.png ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/Resources/graphics
strip ${TARGET}

# install OSX icon
install -m 644 resources/$PRODUCT_NAME.icns ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/Resources/

cat > "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/Info.plist" << EOF
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple Computer//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
  <key>CFBundleExecutable</key>
  <string>$PRODUCT_NAME</string>
  <key>CFBundleName</key>
  <string>$PRODUCT_NAME</string>
  <key>CFBundlePackageType</key>
  <string>APPL</string>
  <key>CFBundleSignature</key>
  <string>~~~~</string>
  <key>CFBundleVersion</key>
  <string>1.0</string>
  <key>CFBundleIconFile</key>
  <string>$PRODUCT_NAME</string>
  <key>CSResourcesFileMapped</key>
  <true/>
</dict>
</plist>
EOF

### complete the APP bundle
export INSTALLED="libjack.0.dylib"

echo "------------------------------------"
echo "OUTPUT : ${DMGFILE}"
echo "BASEDIR: ${TARGET_BUILD_DIR}"
echo "TARGET : ${TARGET}"
echo "LIBDIR : ${LIBS_PATH}"
echo "------------------------------------"

mkdir -p $LIBS_PATH
rm -f ${LIBS_PATH}/*.dylib

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
# stript 64bit versions from frameworks. 
echo 
echo "stripping 64bit versions from dylibs/frameworks"
cd $LIBS_PATH || exit 1
cd ..
mv Frameworks fwold
mkdir Frameworks
for file in $(ls fwold); do
  lipo fwold/$file -remove x86_64 -output Frameworks/$file || \
  cp fwold/$file Frameworks/$file
done
rm -rf fwold

##############################################################################
# create wrapper script
# needed to:
# - changedir to APP dir
# - strip OSX's default '--session...' command-line-arg

cat > "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/MacOS/${PRODUCT_NAME}" << EOF
#!/bin/sh
progname="\$0"
curdir=\`dirname "\$progname"\`
progbase=\`basename "\$progname"\`
execname=\${curdir}/\${progbase}-bin
cd \${curdir}
exec \${execname}
EOF

chmod +x "${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app/Contents/MacOS/${PRODUCT_NAME}"

##############################################################################
###roll a DMG
echo "generating DMG.."

TMPFILE=/tmp/footmp.dmg
MNTPATH=/tmp/foomnt/
APPNAME="${PRODUCT_NAME}.app"

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

cp -r ${TARGET_BUILD_DIR}/${PRODUCT_NAME}.app ${MNTPATH}/
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
       set background picture of theViewOptions to file ".background:'${BGFILE}'"
       make new alias file at container window to POSIX file "/Applications" with properties {name:"Applications"}
       set position of item "'${APPNAME}'" of container window to {100, 100}
       set position of item "Applications" of container window to {310, 100}
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
rm $TMPFILE
rmdir $MNTPATH

echo
echo "packaging suceeded."
ls -l $DMGFILE
