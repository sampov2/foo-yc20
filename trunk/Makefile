PREFIX=/usr/local
CXX=g++
CFLAGS=-O3 -march=native -mfpmath=sse -msse -msse2 -msse3 -ffast-math -ftree-vectorize


foo-yc20: src/foo-yc20.cpp src/foo-yc20.h src/wdgt.h src/yc20_wdgts.h
	$(CXX) -Isrc/ $(CFLAGS) src/foo-yc20.cpp `pkg-config --cflags --libs gtkmm-2.4 jack` -o foo-yc20


generate-source:
	faust -a minimal.cpp faust/yc20.dsp > gen/foo-yc20-dsp.cpp

