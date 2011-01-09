/*
    Foo-YC20 VSTi plugin
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

    VST2 SDK Interfaces by (c)1996-1999 Steinberg Soft und Hardware GmbH, All Rights Reserved

*/

#include <iostream> // TODO: get rid of this

#include <audioeffect.cpp>
#include <audioeffectx.h>
#include <audioeffectx.cpp>

#include <foo-yc20.h>

#define NUM_PARAMS 23

#define PARAM_PITCH 0

class FooYC20VSTi : public AudioEffectX
{
	public:
		FooYC20VSTi  (audioMasterCallback, VstInt32, VstInt32);
		~FooYC20VSTi ();

		bool getProductString	(char *);
		bool getVendorString	(char *);
		bool getEffectName	(char *);
		VstInt32 getVendorVersion () {return 1;}

		void setProgramName	(char *);
		void getProgramName	(char *);
		bool getProgramNameIndexed(VstInt32, VstInt32, char*);

		
		bool getOutputProperties(VstInt32, VstPinProperties*);
		void setSampleRate	(float sampleRate);

		void process		(float **, float **, VstInt32);
		void processReplacing	(float **, float **, VstInt32);
		VstInt32 processEvents(VstEvents*);

		void setParameter	(VstInt32, float);
		float getParameter	(VstInt32);
		void getParameterName	(VstInt32, char *);
		void getParameterDisplay(VstInt32, char *);

		
		VstInt32 getNumMidiInputChannels ()  { return 1; };

		YC20Processor *yc20;
		VstEvents* events;			// midi events
		

	private:
		std::string label_for_parameter[NUM_PARAMS];
		char programName[kVstMaxNameLen+1];
};

AudioEffect *createEffectInstance(audioMasterCallback audioMaster)
{ 
	FooYC20VSTi* effect = new FooYC20VSTi (audioMaster, 1, NUM_PARAMS);
	if (effect == 0) return 0;

	return effect;
}


bool
FooYC20VSTi::getProductString(char* text)
{
	vst_strncpy(text, "Foo YC20", kVstMaxProductStrLen);
	return true;
}

bool
FooYC20VSTi::getVendorString(char* text)
{
	vst_strncpy(text, "Sampo Savolainen", kVstMaxVendorStrLen);
	return true;
}

bool
FooYC20VSTi::getEffectName(char* name)
{
	vst_strncpy(name, "YC20 emulation", kVstMaxEffectNameLen);
	return true;
}

void
FooYC20VSTi::setProgramName(char *name)
{ 
	std::cerr << "setProgramName(" << name << ")" << std::endl;
	vst_strncpy(programName, name, kVstMaxNameLen);
	std::cerr << " .. program = '" << programName << "'" << std::endl;
}

void
FooYC20VSTi::getProgramName(char *name)
{
	std::cerr << "getProgramName(" << (int)name << ")" << std::endl;
	vst_strncpy(name, programName, kVstMaxNameLen);
}

bool FooYC20VSTi::getProgramNameIndexed (VstInt32 category, VstInt32 index, char* name)
{
	std::cerr << "getProgramNameIndexed(" << category << ", " << index << ", <ptr>)" << std::endl;
	if (index == 0) {
		vst_strncpy(name, programName, kVstMaxNameLen);
		return true;
	}
	*name = 0;

	return false;
}

FooYC20VSTi::FooYC20VSTi  (audioMasterCallback callback, VstInt32 programs, VstInt32 params)
	: AudioEffectX(callback, programs, params)
{

	setUniqueID ((int)'YC20');
	
	setNumInputs(0);
	setNumOutputs(2);
	canProcessReplacing();
	isSynth();

	vst_strncpy(programName, "Foo YC20 Organ", kVstMaxNameLen);

	setProgram(0);

	label_for_parameter[PARAM_PITCH] = "pitch";
	label_for_parameter[1] = "volume";
	label_for_parameter[2] = "bass volume";
	
	label_for_parameter[3] = "realism";
	label_for_parameter[4] = "depth";
	label_for_parameter[5] = "speed";

	label_for_parameter[6] = "16' b";
	label_for_parameter[7] = "8' b";
	label_for_parameter[8] = "bass manual";

	label_for_parameter[9] = "16' i";
	label_for_parameter[10] = "8' i";
	label_for_parameter[11] = "4' i";
	label_for_parameter[12] = "2 2/3' i";
	label_for_parameter[13] = "2' i";
	label_for_parameter[14] = "1 3/5' i";
	label_for_parameter[15] = "1' i";

	label_for_parameter[16] = "balance";
	label_for_parameter[17] = "bright";

	label_for_parameter[18] = "16' ii";
	label_for_parameter[19] = "8' ii";
	label_for_parameter[20] = "4' ii";
	label_for_parameter[21] = "2' ii";

	label_for_parameter[22] = "percussive";

	yc20 = new YC20Processor();

	dsp *tmp = createDSP();
        tmp->init(getSampleRate());

	yc20->setDSP(tmp);

	std::cerr << "Constructed FooYC20VSTi" << std::endl;
}

void
FooYC20VSTi::setSampleRate (float sampleRate) 
{
	std::cerr << "Called setSampleRate(" << sampleRate << ")" << std::endl;
	AudioEffectX::setSampleRate(sampleRate);

	dsp *tmp = yc20->getDSP();
	delete tmp;
	

	tmp = createDSP();
        tmp->init(sampleRate);

	yc20->setDSP(tmp);
}

bool FooYC20VSTi::getOutputProperties(VstInt32 index, VstPinProperties* properties)
{
	std::cerr << "getOutputProperties(" << index << ", ...)" << std::endl;
	if(index<2)
	{
		sprintf(properties->label, "YC20");
		properties->flags = kVstPinIsActive | kVstPinIsStereo;
		return true;
	}
	return false;
}

FooYC20VSTi::~FooYC20VSTi()
{
	std::cerr << "~FooYC20VSTi()" << std::endl;
	delete yc20;
}

void
FooYC20VSTi::process		(float **input, float **output, VstInt32 nframes)
{
	std::cerr << "process(.., .., " << nframes << ")" << std::endl;
	processReplacing(input, output, nframes);
}

void
FooYC20VSTi::processReplacing	(float **input, float **output, VstInt32 nframes)
{
	std::cerr << "processReplacing(.., .., " << nframes << ")" << std::endl;
	yc20->getDSP()->compute(nframes, NULL, output);
}

VstInt32
FooYC20VSTi::processEvents(VstEvents *events)
{
	std::cerr << "processEevents()" << std::endl;
	for (VstInt32 i=0; i<events->numEvents; i++) {
		std::cerr << " .. " << i << std::endl;

		if((events->events[i])->type != kVstMidiType) continue;
		VstMidiEvent* event = (VstMidiEvent*)events->events[i];
		uint8_t* data = (uint8_t *)event->midiData;

		float value = 0;
		int key = -1;

		switch ( (data[0]) & 0xf0 ) {
		case 0x90:
			if (data[2] == 0) {
				value = 0.0;
			} else {
				value = 1;
			}
			key = data[1] - 36;
			break;
		case 0x80:
			value = 0.0;
			key = data[1] - 36;
			break;
		}
		if (key >= 0 && key < 61) {
			yc20->setKey(key, value);
		}

	}

	return 1;
}

void
FooYC20VSTi::setParameter	(VstInt32 index, float value)
{
	std::cerr << "setParameter(" << index << ", " << value << ")" << std::endl;

	Control *c = yc20->getControl(label_for_parameter[index]);
	if (c == 0) {
		std::cerr << "no parameter for index " << index << std::endl;
	}

	if (index == PARAM_PITCH) {
		value -= 0.5;
		value *= 2.0;
	}
	std::cerr << "  zone: " << c->getZone() << std::endl;
	*c->getZone() = value;
}

float
FooYC20VSTi::getParameter	(VstInt32 index)
{
	std::cerr << "getParameter(" << index << ")" << std::endl;

	Control *c = yc20->getControl(label_for_parameter[index]);
	if (c == 0) {
		std::cerr << "no parameter for index " << index << std::endl;
		return -999.9;
	}
	
	float value = *c->getZone();
	if (index == PARAM_PITCH) {
		value /= 2.0;
		value += 0.5;
	}
	return value;
}

void
FooYC20VSTi::getParameterName	(VstInt32 index, char *ptr)
{
	std::cerr << "getParameterName(" << index << ") = '";
	vst_strncpy(ptr, label_for_parameter[index].c_str(), kVstMaxParamStrLen);
	std::cerr << ptr << "'" << std::endl;
}

void
FooYC20VSTi::getParameterDisplay(VstInt32 index, char *ptr)
{
	std::cerr << "getParameterDisplay(" << index << ", " << (int)ptr << ")" << std::endl;
	Control *c = yc20->getControl(label_for_parameter[index]);
	if (c == 0) {
		std::cerr << "no parameter for index " << index << std::endl;
	}
	float value = *c->getZone();
	if (index == PARAM_PITCH) {
		value -= 0.5;
		value *= 2.0;
	}
	snprintf(ptr, kVstMaxParamStrLen, "%.2f", value); // TODO: is this the correct length?
}

