PREFIX=/usr/local
CXX=g++
VERSION=

ifeq ($(CFLAGS),)
ifeq ($(shell uname), Darwin)
CFLAGS=-O3 -mfpmath=sse -msse -msse2 -msse3 -mmmx -m3dnow -ffast-math -ftree-vectorize -Wall
else
CFLAGS=-O3 -march=native -mfpmath=sse -msse -msse2 -msse3 -mmmx -m3dnow -ffast-math -ftree-vectorize -Wall
endif
endif

CFLAGS += -DVERSION=$(VERSION)

foo-yc20: Makefile src/foo-yc20.cpp src/foo-yc20.h src/wdgt.h src/yc20_wdgts.h gen/foo-yc20-dsp.cpp
	$(CXX) -Isrc/ $(CFLAGS) -DPREFIX=$(PREFIX) src/foo-yc20.cpp `pkg-config --cflags --libs gtkmm-2.4 jack` -o foo-yc20


install: foo-yc20
	install -Dm 755 foo-yc20 $(DESTDIR)$(PREFIX)/bin/foo-yc20
	install -d $(DESTDIR)$(PREFIX)/share/foo-yc20/graphics
	install -m 644 graphics/*.png $(DESTDIR)$(PREFIX)/share/foo-yc20/graphics
	cat foo-yc20.desktop.in | sed 's!%PREFIX%!$(PREFIX)!' > foo-yc20.desktop
	install -Dm 644 foo-yc20.desktop $(DESTDIR)$(PREFIX)/share/applications/foo-yc20.desktop
	rm foo-yc20.desktop

uninstall:
	rm $(DESTDIR)$(PREFIX)/bin/foo-yc20
	rm $(DESTDIR)$(PREFIX)/share/applications/foo-yc20.desktop
	rm -r $(DESTDIR)$(PREFIX)/share/foo-yc20


## Targets only for those with Faust installed

generate-source:
	rm -rf faust/yc20-svg/
	faust -svg -a minimal.cpp faust/yc20.dsp > gen/foo-yc20-dsp.cpp

generate-source-vec:
	faust -vec -a minimal.cpp faust/yc20.dsp > gen/foo-yc20-dsp.cpp

generate-source-sch:
	faust -sch -vs 128 -g -a minimal.cpp faust/yc20.dsp > gen/foo-yc20-dsp.cpp

basic-test:
	rm -rf faust/yc20-svg/
	faust -svg -a jack-console.cpp faust/yc20.dsp > gen/basic.cpp
	$(CXX) $(CFLAGS) -Isrc/ gen/basic.cpp -o basic `pkg-config --cflags --libs jack`

## test compilation
# For semi-automated testing, this line is handy:
# make testit && ./testit in.wav out.wav && mhwaveedit out.wav

testit: faust/test.dsp faust/oscillator.dsp src/polyblep.cpp Makefile
	rm -rf faust/test-svg/
	faust -svg -a sndfile.cpp faust/test.dsp > gen/test.cpp
	$(CXX) $(CFLAGS) -Isrc/ gen/test.cpp `pkg-config --cflags --libs sndfile` -o testit

