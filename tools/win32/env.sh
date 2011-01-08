
THIS_PATH=$(dirname $(readlink -f $0))

export CC=i586-mingw32msvc-gcc
export CXX=i586-mingw32msvc-g++
export LD=i586-mingw32msvc-ld
export AR=i586-mingw32msvc-ar
export AS=i586-mingw32msvc-as
export NM=i586-mingw32msvc-nm
export STRIP=i586-mingw32msvc-strip
export RANLIB=i586-mingw32msvc-ranlib
export DLLTOOL=i586-mingw32msvc-dlltool
export OBJDUMP=i586-mingw32msvc-objdump
export RC=i586-mingw32msvc-windres
export WINDRES=i586-mingw32msvc-windres

export PATH=$THIS_PATH/fake-utils:$PATH

export LDFLAGS_YC20="-mwindows "$THIS_PATH/gui.o
export CFLAGS="-O3 -mtune=native -march=native -msse -mfpmath=sse -ffast-math"

if [ ! -f $THIS_PATH/gui.o ]; then
	echo compiling gui.rc
	$WINDRES $THIS_PATH/gui.rc -o $THIS_PATH/gui.o
fi

