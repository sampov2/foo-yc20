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
*/

#include <iostream> // TODO: get rid of this

#include <audioeffect.cpp>
#include <audioeffectx.h>
#include <audioeffectx.cpp>

#include <foo-yc20.h>

#define NUM_PARAMS 23

class FooYC20VSTi : public AudioEffectX
{
	public:
		FooYC20VSTi  (audioMasterCallback, VstInt32, VstInt32);
		~FooYC20VSTi ();

		void setSampleRate	(float sampleRate);
		void process		(float **, float **, VstInt32);
		void processReplacing	(float **, float **, VstInt32);
		VstIntPtr dispatcher	(VstInt32, VstInt32, VstInt32, void *, float);
		void setParameter	(VstInt32, float);
		float getParameter	(VstInt32);
		void getParameterName	(VstInt32, char *);
		void getParameterDisplay(VstInt32, char *);

		YC20Processor *yc20;
		VstEvents* events;			// midi events
		
		std::string label_for_parameter[NUM_PARAMS];
};


/*
#ifdef __GNUC__ 
AEffect* main_plugin (audioMasterCallback audioMaster) asm ("main");
#define main main_plugin
#else
AEffect *main (audioMasterCallback audioMaster);
#endif
*/

#ifdef __cplusplus
extern "C" {
#endif


AEffect *createFooYC20VSTi(audioMasterCallback audioMaster)
{ 
	FooYC20VSTi* effect = new FooYC20VSTi (audioMaster, 1, NUM_PARAMS);
	if (effect == 0) return 0;

	return effect->getAeffect ();
}
#ifdef __cplusplus
}
#endif



FooYC20VSTi::FooYC20VSTi  (audioMasterCallback callback, VstInt32 programs, VstInt32 params)
	: AudioEffectX(callback, programs, params)
{

	setUniqueID ((int)'YC20'); // TODO: iffy!
	
	setNumInputs (0);
	setNumOutputs (2);

	canProcessReplacing();

	label_for_parameter[0] = "pitch";
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
}

void
FooYC20VSTi::setSampleRate (float sampleRate) 
{
	dsp *tmp = yc20->getDSP();
	if (tmp != NULL) {
		delete tmp;
	}
	

	tmp = createDSP();
        tmp->init(sampleRate);

	yc20->setDSP(tmp);
}

FooYC20VSTi::~FooYC20VSTi()
{
	delete yc20;
}


void
FooYC20VSTi::process		(float **input, float **output, VstInt32 nframes)
{
	processReplacing(input, output, nframes);
}

void
FooYC20VSTi::processReplacing	(float **input, float **output, VstInt32 nframes)
{
	// TODO: we need events!

	yc20->getDSP()->compute(nframes, NULL, output);

}

VstIntPtr
FooYC20VSTi::dispatcher		(VstInt32 opCode, VstInt32 index, VstInt32 value, void *ptr, float opt)
{
	return -1;
}

void
FooYC20VSTi::setParameter	(VstInt32 index, float value)
{
	Control *c = yc20->getControl(label_for_parameter[index]);
	if (c == 0) {
		std::cerr << "no parameter for index " << index << std::endl;
	}
	*c->getZone() = value;
}

float
FooYC20VSTi::getParameter	(VstInt32 index)
{
	Control *c = yc20->getControl(label_for_parameter[index]);
	if (c == 0) {
		std::cerr << "no parameter for index " << index << std::endl;
		return -999.9;
	}
	return *c->getZone();
}

void
FooYC20VSTi::getParameterName	(VstInt32 index, char *ptr)
{
	vst_strncpy(ptr, label_for_parameter[index].c_str(), kVstMaxParamStrLen);
}

void
FooYC20VSTi::getParameterDisplay(VstInt32 index, char *ptr)
{
	Control *c = yc20->getControl(label_for_parameter[index]);
	if (c == 0) {
		std::cerr << "no parameter for index " << index << std::endl;
	}
	snprintf(ptr, kVstMaxParamStrLen, "%f", *c->getZone()); // TODO: is this the correct length
}

