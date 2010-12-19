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

#include <lv2.h>
#include <event.lv2/event.h>

#include <foo-yc20.h>

#ifdef __cplusplus
extern "C" {
#endif

struct YC20_Handle_t {
	YC20Processor *yc20;
	float *output[3];
};

static LV2_Handle instantiate_FooYC20 (
        const LV2_Descriptor *descriptor,
        double sample_rate,
        const char *bundle_path,
        const LV2_Feature * const *host_features)
{
	struct YC20_Handle_t *handle = (struct YC20_Handle_t *) malloc(sizeof(struct YC20_Handle_t));

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
		handle->output[port] = (float *)data_location;
	}

	// TODO: Midi
}

static void activate_FooYC20 (LV2_Handle instance)
{
	struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;
	// TODO: Do we actually need to do anything?
}

static void run_FooYC20 (LV2_Handle instance, uint32_t sample_count)
{
	struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;

	// TODO: Midi
	handle->yc20->getDSP()->compute(sample_count, NULL, handle->output);

}

static void deactivate_FooYC20 (LV2_Handle instance)
{
	struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;
	// TODO: do we need to do anything else?
}

static void cleanup_FooYC20 (LV2_Handle instance)
{
	struct YC20_Handle_t *handle = (struct YC20_Handle_t *)instance;
	
	// TODO: delete the DSP unit
	delete(handle->yc20);

	free(handle);
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

