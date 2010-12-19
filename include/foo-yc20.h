/*
    Foo-YC20 
    Copyright (C) 2010  Sampo Savolainen <v2@iki.fi>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _FOO_YC20_H
#define _FOO_YC20_H

#include <map>
#include <string>

#include "faust-dsp.h"

#ifdef __SSE__
    #include <xmmintrin.h>
    #ifdef __SSE2__
        #define TURNOFFDENORMALS { _mm_setcsr(_mm_getcsr() | 0x8040); }
    #else
        #define TURNOFFDENORMALS { _mm_setcsr(_mm_getcsr() | 0x8000); }
    #endif
#else
    #define TURNOFFDENORMALS 
#endif

#define SHARE_DIR "/share/foo-yc20/"
#define YC20_PNG_DIR "graphics/"


#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)

#define PREFIX_STR STR(PREFIX)
#define VERSION_STR STR(VERSION)

class YC20Exposable
{
	public:
		virtual void queueExpose(int) = 0;
		virtual void updateControlsFromState() = 0;
};

class MidiCC 
{
public:
        MidiCC(int a, int b) { cc = a; value = b;}

        int cc;
        int value;
};

class Control;

class Control
{
	public:

		Control(int cc, float min, float max) { 
			controlChange = cc; minValue = min; maxValue = max; 
		}

		Control(int cc) {
			controlChange = cc; minValue = 0.0; maxValue = 1.0;
		}

		int getCC() const { return controlChange; }
		float getMin() const { return minValue; }
		float getMax() const { return maxValue; }

		void setValueFromCC(int value) const { *zone = minValue + (maxValue - minValue) * ((float)value)/127.0; }
		float *getZone() const { return zone; }
		void  setZone(float *z) { zone = z; }

	private:
		int controlChange;
		float minValue;
		float maxValue;
		float *zone;
};


class YC20Processor : public UI
{
	public:
		YC20Processor();
		virtual ~YC20Processor();

		void setUI(YC20Exposable *interface) { ui = interface; }
	
		// from Faust UI
		void addButton(const char* label, float* zone);
		void addToggleButton(const char* label, float* zone) {};
		void addCheckButton(const char* label, float* zone) {};
		void addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step);
		void addHorizontalSlider(const char* label, float* zone, float init, float min, float max, float step);
		void addNumEntry(const char* label, float* zone, float init, float min, float max, float step) {};

		void openFrameBox(const char* label) {};
		void openTabBox(const char* label) {};
		void openHorizontalBox(const char* label) {};
		void openVerticalBox(const char* label) {};
		void closeBox() {};

		void declare(float* zone, const char* key, const char* value) {};

		dsp *getDSP() const { return processor; }
		void setDSP(dsp *);

		// Midi callback
		void doControlChange(int cc, int value);

		Control *getControl(std::string label) { return controlPerLabel[label]; }

		// Configuration stuff
		void loadConfiguration(std::string file);
		void loadConfiguration();
		void saveConfiguration();

		std::map<std::string, Control *> const getControls() { return controlPerLabel; }

	protected:

		// Pointers to DSP key values
		float *keys[61];

		// Controls
		std::map<std::string, Control *> controlPerLabel;
		Control *controlPerCC[127];

		// The actual DSP processor
		dsp *processor;

		// The UI if there is one
		YC20Exposable *ui;

		std::string configFile;

};


#endif /* _FOO_YC20_H */
