PREFIX=/usr/local
CXX=g++
VERSION=

OBJS=src/foo-yc20.o src/yc20-jack.o src/configuration.o
OBJS_GUI=src/main-gui.o src/foo-yc20-ui.o
OBJS_CLIMAIN=src/main-cli.o
OBJS_DSP=src/faust-dsp.o

ifeq ($(CFLAGS),)
ifeq ($(shell uname), Darwin)
CFLAGS=-O3 -mfpmath=sse -msse -msse2 -msse3 -mmmx -m3dnow -ffast-math -ftree-vectorize -Wall
else
CFLAGS=-O3 -mtune=native -mfpmath=sse -ffast-math -ftree-vectorize 
endif
endif

CFLAGS_X = $(CFLAGS) -DVERSION=$(VERSION) -Isrc/ -DPREFIX=$(PREFIX)

$(OBJS_GUI): CFLAGS_use = $(CFLAGS_X) `pkg-config --cflags gtkmm-2.4 jack`
$(OBJS) $(OBJS_CLIMAIN): CFLAGS_use = $(CFLAGS_X) `pkg-config --cflags jack`
$(OBJS_DSP): CFLAGS_use = $(CFLAGS_X)

.cpp.o:
	$(CXX) $< $(CFLAGS_use) -c -o $@

all: foo-yc20 foo-yc20-cli

foo-yc20: $(OBJS) $(OBJS_GUI) $(OBJS_DSP)
	$(CXX) $(OBJS) $(OBJS_GUI) $(OBJS_DSP) `pkg-config --libs gtkmm-2.4 jack` -o foo-yc20

foo-yc20-cli:$(OBJS) $(OBJS_CLIMAIN) $(OBJS_DSP)
	$(CXX) $(OBJS) $(OBJS_CLIMAIN) $(OBJS_DSP) `pkg-config --libs jack` -o foo-yc20-cli


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


$(OBJS) $(OBJS_CLIMAIN) $(OBJS_GUI): src/*.h

src/faust-dsp.o: gen/foo-yc20-dsp.cpp
