/*
    Foo-YC20 LV2 plugin
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
	float *outputPorts[3];
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

	handle->midi_event_id = 0;
	handle->event_ref = 0;
	
	for (int i = 0; host_features[i]; i++) {
		if (strcmp(host_features[i]->URI, "http://lv2plug.in/ns/ext/uri-map") == 0) {
			LV2_URI_Map_Feature *map_feature = (LV2_URI_Map_Feature *)host_features[i]->data;

			handle->midi_event_id = map_feature->uri_to_id(map_feature->callback_data, "http://lv2plug.in/ns/ext/event", "http://lv2plug.in/ns/ext/midi#MidiEvent");
		} else if (strcmp(host_features[i]->URI, "http://lv2plug.in/ns/ext/event") == 0) {
			handle->event_ref = (LV2_Event_Feature *)host_features[i]->data;
		}
	}

        if (handle->midi_event_id == 0 || handle->event_ref == NULL) {
                std::cerr << "can not run YC20 LV2 in a non-MIDI host" << std::endl;
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

	if (port >= 0 && port < 3) {
		handle->outputPorts[port] = (float *)data_location;
		return;
	}

	if (port == 3) {
		handle->eventPort = (LV2_Event_Buffer *)data_location;
		return;
	}

	Control *c = NULL;

	switch(port) {
		case 4: c = handle->yc20->getControl("pitch"); break;
		case 5: c = handle->yc20->getControl("volume"); break;
		case 6: c = handle->yc20->getControl("bass volume"); break;
		case 7: c = handle->yc20->getControl("realism"); break;
		case 8: c = handle->yc20->getControl("depth"); break;
		case 9: c = handle->yc20->getControl("speed"); break;
		case 10: c = handle->yc20->getControl("16' b"); break;
		case 11: c = handle->yc20->getControl("8' b"); break;
		case 12: c = handle->yc20->getControl("bass manual"); break;
		case 13: c = handle->yc20->getControl("16' i"); break;
		case 14: c = handle->yc20->getControl("8' i"); break;
		case 15: c = handle->yc20->getControl("4' i"); break;
		case 16: c = handle->yc20->getControl("2 2/3' i"); break;
		case 17: c = handle->yc20->getControl("2' i"); break;
		case 18: c = handle->yc20->getControl("1 3/5' i"); break;
		case 19: c = handle->yc20->getControl("1' i"); break;
		case 20: c = handle->yc20->getControl("balance"); break;
		case 21: c = handle->yc20->getControl("bright"); break;
		case 22: c = handle->yc20->getControl("16' ii"); break;
		case 23: c = handle->yc20->getControl("8' ii"); break;
		case 24: c = handle->yc20->getControl("4' ii"); break;
		case 25: c = handle->yc20->getControl("2' ii"); break;
		case 26: c = handle->yc20->getControl("percussive"); break;
		default:
			std::cerr << "Unknown LV2 port index " << port << std::endl;

	}

	handle->controlParameters[c] = (float*)data_location;
}

static void activate_FooYC20 (LV2_Handle instance)
{
	//struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;
	// TODO: Do we actually need to do anything?
}

static void run_FooYC20 (LV2_Handle instance, uint32_t nframes)
{
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
			handle->event_ref->lv2_event_unref(handle->event_ref->callback_data, ev);
		} else if (ev->type == handle->midi_event_id) {
			uint8_t *data = (uint8_t *)(ev+1);
			float value;
			int key;

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
			handle->yc20->setKey(key, value);
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

