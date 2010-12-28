PREFIX=/usr/local
CXX=g++
VERSION=

OBJS_NODEPS=src/lv2.o src/foo-yc20.o src/configuration.o src/main-cli.o
OBJS_JACK=src/yc20-jack.o 
OBJS_GTKMM=src/main-gui.o src/foo-yc20-ui.o src/lv2-ui.cpp
OBJS_GTK=src/foo-yc20-ui2.o src/lv2-ui.o
OBJS_DSP=src/faust-dsp.o

LV2_PLUGIN=src/foo-yc20.lv2/foo-yc20.so
LV2_UI=src/foo-yc20.lv2/foo-yc20-lv2ui.so

ifeq ($(CFLAGS),)
ifeq ($(shell uname), Darwin)
CFLAGS=-O3 -mfpmath=sse -msse -msse2 -msse3 -mmmx -m3dnow -ffast-math -ftree-vectorize
else
CFLAGS=-O3 -mtune=native -mfpmath=sse -ffast-math -ftree-vectorize 
endif
endif

CFLAGS_X = $(CFLAGS) -fPIC -DVERSION=$(VERSION) -Isrc/ -Iinclude/ -DPREFIX=$(PREFIX) -Wall

$(OBJS_NODEPS): CFLAGS_use = $(CFLAGS_X) 
$(OBJS_JACK): CFLAGS_use = $(CFLAGS_X) `pkg-config --cflags jack`
$(OBJS_GTKMM): CFLAGS_use = $(CFLAGS_X) `pkg-config --cflags gtkmm-2.4 jack`
$(OBJS_GTK): CFLAGS_use = $(CFLAGS_X) `pkg-config --cflags gtk+-2.0`
$(OBJS_LV2): CFLAGS_use = $(CFLAGS_X)

$(OBJS_DSP): CFLAGS_use = $(CFLAGS_X)

.cpp.o:
	$(CXX) $< $(CFLAGS_use) -c -o $@

all: foo-yc20 foo-yc20-cli lv2

lv2: $(LV2_PLUGIN) $(LV2_UI)

## GUI version
OBJS_FOO_YC20=src/foo-yc20.o src/configuration.o src/yc20-jack.o src/main-gui.o src/foo-yc20-ui.o

foo-yc20: $(OBJS_FOO_YC20) $(OBJS_DSP)
	$(CXX) $(OBJS_FOO_YC20) $(OBJS_DSP) `pkg-config --libs gtkmm-2.4 jack` -o foo-yc20

## CLI version
OBJS_FOO_YC20_CLI=src/foo-yc20.o src/configuration.o src/main-cli.o src/yc20-jack.o

foo-yc20-cli: $(OBJS_FOO_YC20_CLI) $(OBJS_DSP)
	$(CXX) $(OBJS_FOO_YC20_CLI) $(OBJS_DSP) `pkg-config --libs jack` -o foo-yc20-cli

## LV2 version
OBJS_LV2=src/lv2.o src/foo-yc20.o

$(LV2_PLUGIN): $(OBJS_LV2) $(OBJS_DSP)
	$(CXX) $(OBJS_LV2) $(OBJS_DSP) -fPIC -shared -o $(LV2_PLUGIN)

## LV2 UI
OBJS_LV2_UI=src/lv2-ui.o src/foo-yc20-ui2.o

$(LV2_UI): $(OBJS_LV2_UI)
	$(CXX) $(OBJS_LV2_UI) -fPIC -shared `pkg-config --libs gtkmm-2.4` -o $(LV2_UI)

clean:
	rm -f foo-yc20 foo-yc20-cli $(LV2_PLUGIN) $(LV2_UI)
	rm -f $(OBJS_FOO_YC20) $(OBJS_FOO_YC20_CLI) $(OBJS_LV2) $(OBJS_LV2_UI) $(OBJS_DSP)

cb:
	rm -f foo-yc20 foo-yc20-cli $(LV2_PLUGIN) $(LV2_UI)
	rm -f $(OBJS_FOO_YC20) $(OBJS_FOO_YC20_CLI) $(OBJS_LV2) $(OBJS_LV2_UI)
	


install: foo-yc20
	install -Dm 755 foo-yc20 $(DESTDIR)$(PREFIX)/bin/foo-yc20
	install -Dm 755 foo-yc20-cli $(DESTDIR)$(PREFIX)/bin/foo-yc20-cli
	install -d $(DESTDIR)$(PREFIX)/share/foo-yc20/graphics
	install -m 644 graphics/*.png $(DESTDIR)$(PREFIX)/share/foo-yc20/graphics
	cat foo-yc20.desktop.in | sed 's!%PREFIX%!$(PREFIX)!' > foo-yc20.desktop
	install -Dm 644 foo-yc20.desktop $(DESTDIR)$(PREFIX)/share/applications/foo-yc20.desktop
	rm foo-yc20.desktop
	install -d $(DESTDIR)$(PREFIX)/lib/lv2/foo-yc20.lv2
	install -m 755 src/foo-yc20.lv2/*.so $(DESTDIR)$(PREFIX)/lib/lv2/foo-yc20.lv2
	install -m 644 src/foo-yc20.lv2/*.ttl $(DESTDIR)$(PREFIX)/lib/lv2/foo-yc20.lv2


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

$(OBJS_NODEPS) $(OBJS_JACK) $(OBJS_GTKMM) $(OBJS_LV2): include/*.h

src/faust-dsp.o: gen/foo-yc20-dsp.cpp
