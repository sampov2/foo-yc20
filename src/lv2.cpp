/*
    Foo-YC20 LV2 plugin

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

#include <iostream>
#include <map>

#include <string.h>
#include <assert.h>

#include <lv2.h>
#include <lv2/lv2plug.in/ns/ext/atom/atom.h>
#include <lv2/lv2plug.in/ns/ext/atom/util.h>
#include <lv2/lv2plug.in/ns/ext/urid/urid.h>

#include <foo-yc20.h>
#include <foo-yc20-os.h>
#include <yc20-precalc.h>

#ifdef __cplusplus
extern "C" {
#endif

struct YC20_Handle_t {
	YC20Processor *yc20;

	// Registered ports
	float *outputPorts[2];
	const LV2_Atom_Sequence *eventPort;
	std::map<Control *, float *> controlParameters;

	// MIDI
	LV2_URID midi_event_id;
};

static LV2_Handle instantiate_FooYC20 (
        const LV2_Descriptor *descriptor,
        double sample_rate,
        const char *bundle_path,
        const LV2_Feature * const *host_features)
{
	struct YC20_Handle_t *handle = new struct YC20_Handle_t;

	LV2_URID_Map *map_feature = NULL;

	for (int i = 0; host_features[i]; i++) {
		if (strcmp(host_features[i]->URI, "http://lv2plug.in/ns/ext/urid#map") == 0) {
			map_feature = (LV2_URID_Map *)host_features[i]->data;
		}
	}

	assert(map_feature);
	handle->midi_event_id = map_feature->map(map_feature->handle, "http://lv2plug.in/ns/ext/midi#MidiEvent");

	dsp *tmp = createDSP();
	tmp->init(sample_rate);
	
	handle->yc20 = new YC20Processor();
	handle->yc20->setDSP(tmp);

	//Try loading oscillator data from cache file... 
	std::string fpath=DEFAULT_CONFIG_DIR + "/.precalc_osc.dat";
	getUserData(tmp)->osc=yc20_load_precalc_osc(sample_rate,fpath.c_str());

	//If not, precalculate and save to cache ...
	if (!getUserData(tmp)->osc) {
		getUserData(tmp)->osc = yc20_precalc_oscillators(sample_rate);
		yc20_save_precalc_osc(getUserData(tmp)->osc,fpath.c_str());
	}

	return (LV2_Handle)handle;
}

static void connect_port_FooYC20 (
	LV2_Handle instance,
	uint32_t port,
	void *data_location)
{
	struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;

	if (port >= 0 && port < 2) {
		handle->outputPorts[port] = (float *)data_location;
		return;
	}

	if (port == 2) {
		handle->eventPort = (const LV2_Atom_Sequence *)data_location;
		return;
	}

	Control *c = NULL;

#define C_IDX 3
	switch(port) {
		case C_IDX + 0: c = handle->yc20->getControl("pitch"); break;
		case C_IDX + 1: c = handle->yc20->getControl("volume"); break;
		case C_IDX + 2: c = handle->yc20->getControl("bass volume"); break;
		case C_IDX + 3: c = handle->yc20->getControl("realism"); break;
		case C_IDX + 4: c = handle->yc20->getControl("depth"); break;
		case C_IDX + 5: c = handle->yc20->getControl("speed"); break;
		case C_IDX + 6: c = handle->yc20->getControl("16' b"); break;
		case C_IDX + 7: c = handle->yc20->getControl("8' b"); break;
		case C_IDX + 8: c = handle->yc20->getControl("bass manual"); break;
		case C_IDX + 9: c = handle->yc20->getControl("16' i"); break;
		case C_IDX + 10: c = handle->yc20->getControl("8' i"); break;
		case C_IDX + 11: c = handle->yc20->getControl("4' i"); break;
		case C_IDX + 12: c = handle->yc20->getControl("2 2/3' i"); break;
		case C_IDX + 13: c = handle->yc20->getControl("2' i"); break;
		case C_IDX + 14: c = handle->yc20->getControl("1 3/5' i"); break;
		case C_IDX + 15: c = handle->yc20->getControl("1' i"); break;
		case C_IDX + 16: c = handle->yc20->getControl("balance"); break;
		case C_IDX + 17: c = handle->yc20->getControl("bright"); break;
		case C_IDX + 18: c = handle->yc20->getControl("16' ii"); break;
		case C_IDX + 19: c = handle->yc20->getControl("8' ii"); break;
		case C_IDX + 20: c = handle->yc20->getControl("4' ii"); break;
		case C_IDX + 21: c = handle->yc20->getControl("2' ii"); break;
		case C_IDX + 22: c = handle->yc20->getControl("percussive"); break;
		default:
			std::cerr << "Unknown LV2 port index " << port << std::endl;
	}

#undef C_IDX
	//std::cerr << "port: " << port << ", c: " << c << " (data: " << data_location << ")" << std::endl;

	handle->controlParameters[c] = (float*)data_location;
}

static void activate_FooYC20 (LV2_Handle instance)
{
	//struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;
	// TODO: Do we actually need to do anything?
}

static void run_FooYC20 (LV2_Handle instance, uint32_t nframes)
{
	TURNOFFDENORMALS;

	struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;

	const LV2_Atom_Sequence *evseq = handle->eventPort;
	float *outp[2] = { handle->outputPorts[0], handle->outputPorts[1] };
	uint32_t frame = 0;

	for (std::map<Control *, float *>::iterator i = handle->controlParameters.begin(); i != handle->controlParameters.end(); ++i) {
		Control *c = i->first;
		*c->getZone() = *i->second;
	}

	LV2_ATOM_SEQUENCE_FOREACH(evseq, atom) {
		// Parse event
		if (atom->body.type == handle->midi_event_id) {
			const LV2_Atom_Event *ev = (const LV2_Atom_Event *)atom;

			const uint8_t *data = (const uint8_t *)LV2_ATOM_BODY_CONST(&ev->body);
			float value = 0;
			int key = -1;

			switch ( (data[0]) & 0xf0 ) {
			case 0x90:
				value = (data[2] & 0x7f) == 0 ? 0.0 : 1.0;
				key = (data[1] & 0x7f) - 36;
				break;
			case 0x80:
				value = 0.0;
				key = (data[1] & 0x7f) - 36;
				break;
			}
			if (key >= 0 && key < 61) {
				handle->yc20->setKey(key, value);
			}

			uint32_t evframes = ev->time.frames;
			uint32_t ncompute = evframes - frame;
			handle->yc20->getDSP()->compute(ncompute, NULL, outp);
			outp[0] += ncompute;
			outp[1] += ncompute;
			frame = evframes;
		}
	}

	handle->yc20->getDSP()->compute(nframes - frame, NULL, outp);
}

static void deactivate_FooYC20 (LV2_Handle instance)
{
	//struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;
	// TODO: do we need to do anything else?
}

static void cleanup_FooYC20 (LV2_Handle instance)
{
	struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;
	yc20_precalc_osc *osc = getUserData(handle->yc20->getDSP())->osc;

	// TODO: delete the Processor and within it, the DSP unit and UI (if one has been created)
	delete(handle->yc20);

	yc20_destroy_oscillators(osc);

	delete handle;
}

static LV2_Descriptor yc20LV2Descriptor = {
	"http://studionumbersix.com/foo/lv2/yc20",
	&instantiate_FooYC20,
	&connect_port_FooYC20,
	&activate_FooYC20,
	&run_FooYC20,
	&deactivate_FooYC20,
	&cleanup_FooYC20
};

const LV2_Descriptor *lv2_descriptor(uint32_t idx)
{
	if (idx != 0) {
		return NULL;
	}

	return &yc20LV2Descriptor;
}
#ifdef __cplusplus
}
#endif

