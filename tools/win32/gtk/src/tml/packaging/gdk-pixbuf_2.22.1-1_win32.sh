# This is a shell script that calls functions and scripts from
# tml@iki.fi's personal work envíronment. It is not expected to be
# usable unmodified by others, and is included only for reference.

MOD=gdk-pixbuf
VER=2.22.1
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

DEPS=`latest --arch=${ARCH} zlib glib pkg-config libpng`
GETTEXT_RUNTIME=`latest --arch=${ARCH} gettext-runtime`

PKG_CONFIG_PATH=
for D in $DEPS; do
    PATH=/devel/dist/${ARCH}/$D/bin:$PATH
    [ -d /devel/dist/${ARCH}/$D/lib/pkgconfig ] && PKG_CONFIG_PATH=/devel/dist/${ARCH}/$D/lib/pkgconfig:$PKG_CONFIG_PATH
done

LIBPNG=`latest --arch=${ARCH} libpng`
ZLIB=`latest --arch=${ARCH} zlib`

patch --verbose -p0 --fuzz=0 <<'EOF' &&
--- gdk-pixbuf-2.0.pc.in
+++ gdk-pixbuf-2.0.pc.in
@@ -12,6 +12,6 @@
 Description: Image loading and scaling
 Version: @VERSION@
 Requires: gobject-2.0 gmodule-no-export-2.0 @PNG_DEP_CFLAGS_PACKAGES@
-Libs: -L${libdir} -lgdk_pixbuf-@GDK_PIXBUF_API_VERSION@ @GDK_PIXBUF_EXTRA_LIBS@
+Libs: -L${libdir} -lgdk_pixbuf-@GDK_PIXBUF_API_VERSION@
 Cflags: -I${includedir}/gdk-pixbuf-@GDK_PIXBUF_API_VERSION@ @GDK_PIXBUF_EXTRA_CFLAGS@
 
EOF

patch --verbose -p1 --fuzz=0 <<'EOF' &&
commit 737e577536a54e7ef21e64faf922a6c41dbb06bd
Author: Tor Lillqvist <tml@iki.fi>
Date:   Mon Dec 27 14:51:13 2010 +0200

    Use dynamically constructed replacement for GDK_PIXBUF_LIBDIR on Windows
    
    Instead of the hardcoded configure- and compile-time GDK_PIXBUF_LIBDIR
    which is not expected to exist at run-time at all, use a pathname
    constructed from where the program binary is, and assuming the normal
    conventions.
    
    This gets used in the --update-cache case to construct the pathname of
    the loaders.cache file.
    
    Note that there already is similar code in main() to construct the
    pathname to where the loader DLLs normally are. There is probably some
    degree of overlap there that could be factored out, but I don't care.

diff --git a/gdk-pixbuf/queryloaders.c b/gdk-pixbuf/queryloaders.c
index 037c39a..6087bd8 100644
--- a/gdk-pixbuf/queryloaders.c
+++ b/gdk-pixbuf/queryloaders.c
@@ -212,6 +212,35 @@ query_module (GString *contents, const char *dir, const char *file)
         g_free (path);
 }
 
+#ifdef G_OS_WIN32
+
+static char *
+get_toplevel (void)
+{
+  static char *toplevel = NULL;
+
+  if (toplevel == NULL)
+          toplevel = g_win32_get_package_installation_directory_of_module (NULL);
+
+  return toplevel;
+}
+
+static char *
+get_libdir (void)
+{
+  static char *libdir = NULL;
+
+  if (libdir == NULL)
+          libdir = g_build_filename (get_toplevel (), "lib", NULL);
+
+  return libdir;
+}
+
+#undef GDK_PIXBUF_LIBDIR
+#define GDK_PIXBUF_LIBDIR get_libdir()
+
+#endif
+
 static gchar *
 gdk_pixbuf_get_module_file (void)
 {
EOF

patch --verbose -p1 --fuzz=0 <<'EOF' &&
commit 98d373ed51df92a1c784a91af91d880bf741208e
Author: Tor Lillqvist <tml@iki.fi>
Date:   Mon Dec 27 16:16:59 2010 +0200

    Use run-time message catalog directory on Windows
    
    Construct pathname at run-time instead of using a hardcoded
    GDK_PIXBUF_LOCALEDIR.
    
    Should fix bug #634659.

diff --git a/gdk-pixbuf/gdk-pixbuf-io.c b/gdk-pixbuf/gdk-pixbuf-io.c
index b5e6c4d..d01575c 100644
--- a/gdk-pixbuf/gdk-pixbuf-io.c
+++ b/gdk-pixbuf/gdk-pixbuf-io.c
@@ -244,8 +244,8 @@ DllMain (HINSTANCE hinstDLL,
   return TRUE;
 }
 
-static char *
-get_toplevel (void)
+char *
+_gdk_pixbuf_win32_get_toplevel (void)
 {
   static char *toplevel = NULL;
 
@@ -261,7 +261,7 @@ get_libdir (void)
   static char *libdir = NULL;
 
   if (libdir == NULL)
-          libdir = g_build_filename (get_toplevel (), "lib", NULL);
+          libdir = g_build_filename (_gdk_pixbuf_win32_get_toplevel (), "lib", NULL);
 
   return libdir;
 }
@@ -290,7 +290,7 @@ correct_prefix (gchar **path)
        * installation prefix on this machine.
        */
       tem = *path;
-      *path = g_strconcat (get_toplevel (), tem + strlen (GDK_PIXBUF_PREFIX), NULL);
+      *path = g_strconcat (_gdk_pixbuf_win32_get_toplevel (), tem + strlen (GDK_PIXBUF_PREFIX), NULL);
       g_free (tem);
     }
 }
diff --git a/gdk-pixbuf/gdk-pixbuf-util.c b/gdk-pixbuf/gdk-pixbuf-util.c
index fcac31f..08d09c6 100644
--- a/gdk-pixbuf/gdk-pixbuf-util.c
+++ b/gdk-pixbuf/gdk-pixbuf-util.c
@@ -333,6 +333,32 @@ gdk_pixbuf_apply_embedded_orientation (GdkPixbuf *src)
         return dest;
 }
 
+#ifdef G_OS_WIN32
+
+static const gchar *
+get_localedir (void)
+{
+    gchar *temp;
+    gchar *retval;
+    
+    /* In gdk-pixbuf-io.c */
+    extern char *_gdk_pixbuf_win32_get_toplevel (void);
+
+    temp = g_build_filename (_gdk_pixbuf_win32_get_toplevel (), "share/locale", NULL);
+
+    /* The localedir is passed to bindtextdomain() which isn't
+     * UTF-8-aware.
+     */
+    retval = g_win32_locale_filename_from_utf8 (temp);
+    g_free (temp);
+    return retval;
+}
+
+#undef GDK_PIXBUF_LOCALEDIR
+#define GDK_PIXBUF_LOCALEDIR get_localedir ()
+
+#endif
+
 const gchar *
 gdk_pixbuf_gettext (const gchar *msgid)
 {
EOF


# Don't do any relinking and don't use any wrappers in libtool. It
# just causes trouble, IMHO.

sed -e 's/need_relink=yes/need_relink=no # no way --tml/' \
    -e 's/wrappers_required=yes/wrappers_required=no # no thanks --tml/' \
    <ltmain.sh >ltmain.temp && mv ltmain.temp ltmain.sh

lt_cv_deplibs_check_method='pass_all' \
CC='gcc -mthreads' \
CPPFLAGS="-I/devel/dist/${ARCH}/${LIBPNG}/include \
-I/devel/dist/${ARCH}/${ZLIB}/include \
-I/devel/dist/${ARCH}/${GETTEXT_RUNTIME}/include" \
LDFLAGS="-L/devel/dist/${ARCH}/${LIBPNG}/lib \
-L/devel/dist/${ARCH}/${ZLIB}/lib \
-L/devel/dist/${ARCH}/${GETTEXT_RUNTIME}/lib \
-Wl,--enable-auto-image-base" \
LIBS=-lintl \
LIBPNG=`pkg-config --libs libpng` \
CFLAGS=-O2 \
./configure \
--enable-gdiplus \
--with-included-loaders \
--without-libjasper \
--enable-debug=yes \
--enable-explicit-deps=no \
--disable-gtk-doc \
--disable-static \
--prefix=$TARGET &&

PATH="$PWD/gdk-pixbuf/.libs:/devel/target/$HEX/bin:$PATH" make -j4 install &&

PATH="/devel/target/$HEX/bin:$PATH" gdk-pixbuf-query-loaders >$TARGET/lib/gdk-pixbuf-2.0/2.10.0/loaders.cache &&

(echo '# Note: After adding a new separate gdk-pixbuf loader (for instance the svg one)' &&
    echo '# run gdk-pixbuf-query-loaders.exe redirecting its output into this file.' &&
    echo &&
    echo '# Note that the LoaderDir folder below does not name a folder that is' &&
    echo '# expected to exist. It was just a temporary directory used at build time.' &&
    echo &&
    cat $TARGET/lib/gdk-pixbuf-2.0/2.10.0/loaders.cache ) >$TARGET/lib/gdk-pixbuf-2.0/2.10.0/loaders.cache.temp &&
    mv $TARGET/lib/gdk-pixbuf-2.0/2.10.0/loaders.cache.temp $TARGET/lib/gdk-pixbuf-2.0/2.10.0/loaders.cache &&

rm -f /tmp/$RUNZIP /tmp/$DEVZIP &&

(cd $TARGET &&
zip /tmp/$RUNZIP bin/libgdk_pixbuf-2.0-0.dll &&
zip /tmp/$RUNZIP bin/gdk-pixbuf-query-loaders.exe &&
zip /tmp/$RUNZIP lib/gdk-pixbuf-2.0/2.10.0/loaders/*.dll lib/gdk-pixbuf-2.0/2.10.0/loaders.cache lib/gdk-pixbuf-2.0/2.10.0/loaders &&
zip -r -D /tmp/$RUNZIP share/locale &&

zip -r -D /tmp/$DEVZIP include/gdk-pixbuf-2.0 &&
zip -r -D /tmp/$DEVZIP lib/libgdk_pixbuf-2.0.dll.a lib/gdk_pixbuf-2.0.lib &&
zip -r -D /tmp/$DEVZIP lib/pkgconfig &&
zip /tmp/$DEVZIP bin/gdk-pixbuf-csource.exe &&
zip -r -D /tmp/$DEVZIP share/man share/gtk-doc &&
:) &&

:) 2>&1 | tee /devel/src/tml/packaging/$THIS.log

(cd /devel && zip /tmp/$DEVZIP src/tml/packaging/$THIS.{sh,log}) &&
manifestify /tmp/$RUNZIP /tmp/$DEVZIP
