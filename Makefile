PREFIX=/usr/local
CXX=g++

ifeq ($(shell uname), Darwin)
CFLAGS=-O3 -mfpmath=sse -msse -msse2 -msse3 -ffast-math -ftree-vectorize
else
CFLAGS=-O3 -march=native -mfpmath=sse -msse -msse2 -msse3 -ffast-math -ftree-vectorize
endif

foo-yc20: Makefile src/foo-yc20.cpp src/foo-yc20.h src/wdgt.h src/yc20_wdgts.h
	$(CXX) -Isrc/ $(CFLAGS) -DPREFIX=$(PREFIX) src/foo-yc20.cpp `pkg-config --cflags --libs gtkmm-2.4 jack` -o foo-yc20


install: foo-yc20
	install -Dm 755 foo-yc20 $(DESTDIR)$(PREFIX)/bin/foo-yc20
	install -d $(DESTDIR)$(PREFIX)/share/foo-yc20/graphics
	install -m 644 graphics/*.png $(DESTDIR)$(PREFIX)/share/foo-yc20/graphics
	

generate-source:
	faust -a minimal.cpp faust/yc20.dsp > gen/foo-yc20-dsp.cpp

generate-source-sch:
	faust -sch -vs 256 -g -a minimal.cpp faust/yc20.dsp > gen/foo-yc20-dsp.cpp

