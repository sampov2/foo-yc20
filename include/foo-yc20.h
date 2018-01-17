/*
    Foo-YC20 

Copyright 2010-2011 Sampo Savolainen (v2@iki.fi). All rights reserved.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice, 
      this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.

   3. Neither the name Foo YC20, its author, nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY SAMPO SAVOLAINEN ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
SHALL SAMPO SAVOLAINEN OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHERIN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISEDOF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _FOO_YC20_H
#define _FOO_YC20_H

#include <map>
#include <string>
#include <faust/audio/dsp.h>
#include <faust/gui/UI.h>

#include <faust-dsp.h>

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

class YC20Exposable
{
	public:
		virtual ~YC20Exposable() {};
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
		void addButton(const char* label, FAUSTFLOAT* zone);
		void addVerticalSlider(const char* label, FAUSTFLOAT* zone, FAUSTFLOAT init, FAUSTFLOAT min, FAUSTFLOAT max, FAUSTFLOAT step);
		void addHorizontalSlider(const char* label, FAUSTFLOAT* zone, FAUSTFLOAT init, FAUSTFLOAT min, FAUSTFLOAT max, FAUSTFLOAT step);

		void addNumEntry(const char* label, FAUSTFLOAT* zone, FAUSTFLOAT init, FAUSTFLOAT min, FAUSTFLOAT max, FAUSTFLOAT step) { }
		void addCheckButton(const char* label, FAUSTFLOAT* zone) { }

    		void addHorizontalBargraph(const char* label, FAUSTFLOAT* zone, FAUSTFLOAT min, FAUSTFLOAT max) { }
		void addVerticalBargraph(const char* label, FAUSTFLOAT* zone, FAUSTFLOAT min, FAUSTFLOAT max) { }

		void openFrameBox(const char* label) {};
		void openTabBox(const char* label) {};
		void openHorizontalBox(const char* label) {};
		void openVerticalBox(const char* label) {};
		void closeBox() {};

		void declare(float* zone, const char* key, const char* value) {};

		dsp *getDSP() const { return processor; }
		void setDSP(dsp *);

		// MIDI callback
		void setKey(int key, float value) { *keys[key] = value; }

		float getKey(int key) { return *keys[key]; }

		Control *getControl(const std::string &label) { return controlPerLabel[label]; }

		// Configuration stuff
		void loadConfiguration(std::string &file);
		void loadConfiguration();
		void saveConfiguration();

	protected:

		// Pointers to DSP key values
		float *keys[61];

		// Controls
		std::map<std::string, Control *> controlPerLabel;

		// The actual DSP processor
		dsp *processor;

		// The UI if there is one
		YC20Exposable *ui;

		std::string configFile;
};


#endif /* _FOO_YC20_H */
