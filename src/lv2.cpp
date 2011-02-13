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

#include <lv2.h>
#include <lv2/http/lv2plug.in/ns/ext/event/event.h>
#include <lv2/http/lv2plug.in/ns/ext/event/event-helpers.h>
#include <lv2/http/lv2plug.in/ns/ext/uri-map/uri-map.h>

#include <foo-yc20.h>

#ifdef __cplusplus
extern "C" {
#endif

struct YC20_Handle_t {
	YC20Processor *yc20;

	// Registered ports
	float *outputPorts[2];
	LV2_Event_Buffer *eventPort;
	std::map<Control *, float *> controlParameters;

	// MIDI
	LV2_Event_Feature *event_ref;
	int midi_event_id;
};

static LV2_Handle instantiate_FooYC20 (
        const LV2_Descriptor *descriptor,
        double sample_rate,
        const char *bundle_path,
        const LV2_Feature * const *host_features)
{
	struct YC20_Handle_t *handle = new struct YC20_Handle_t;

	handle->midi_event_id = -1;
	handle->event_ref = NULL;
	
	for (int i = 0; host_features[i]; i++) {
		if (strcmp(host_features[i]->URI, "http://lv2plug.in/ns/ext/uri-map") == 0) {
			LV2_URI_Map_Feature *map_feature = (LV2_URI_Map_Feature *)host_features[i]->data;

			handle->midi_event_id = map_feature->uri_to_id(map_feature->callback_data, "http://lv2plug.in/ns/ext/event", "http://lv2plug.in/ns/ext/midi#MidiEvent");
		} else if (strcmp(host_features[i]->URI, "http://lv2plug.in/ns/ext/event") == 0) {
			handle->event_ref = (LV2_Event_Feature *)host_features[i]->data;
		}
	}

        if (handle->midi_event_id == -1) {
                std::cerr << "Host is incapable of running YC20: "<< handle->midi_event_id << ", " << handle->event_ref << std::endl;
		delete handle;
                return NULL;
        }

	dsp *tmp = createDSP();
	tmp->init(sample_rate);
	
	handle->yc20 = new YC20Processor();
	handle->yc20->setDSP(tmp);
	
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
		handle->eventPort = (LV2_Event_Buffer *)data_location;
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

	LV2_Event *ev = NULL;
	LV2_Event_Iterator iterator;

	uint32_t frame = 0;

	for (std::map<Control *, float *>::iterator i = handle->controlParameters.begin(); i != handle->controlParameters.end(); ++i) {
		Control *c = i->first;
		*c->getZone() = *i->second;
	}

	lv2_event_begin(&iterator, handle->eventPort);

	while (lv2_event_is_valid(&iterator)) {
		ev = lv2_event_get(&iterator, NULL);

		// Parse event
		if (ev->type == 0) {
			if (handle->event_ref) {
				handle->event_ref->lv2_event_unref(handle->event_ref->callback_data, ev);
			}
		} else if (ev->type == handle->midi_event_id) {
			uint8_t *data = (uint8_t *)(ev+1);
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
				handle->yc20->setKey(key, value);
			}
		}

		
		handle->yc20->getDSP()->compute(ev->frames - frame, NULL, handle->outputPorts);

		frame = ev->frames;

		lv2_event_increment(&iterator);
	}

	handle->yc20->getDSP()->compute(nframes - frame, NULL, handle->outputPorts);

}

static void deactivate_FooYC20 (LV2_Handle instance)
{
	//struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;
	// TODO: do we need to do anything else?
}

static void cleanup_FooYC20 (LV2_Handle instance)
{
	struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;
	
	// TODO: delete the Processor and within it, the DSP unit and UI (if one has been created)
	delete(handle->yc20);

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

