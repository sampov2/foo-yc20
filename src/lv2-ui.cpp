/*
    Foo-YC20 LV2 plugin UI

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
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include <list>

#include <lv2/lv2plug.in/ns/extensions/ui/ui.h>

#include <foo-yc20-ui2.h>

#ifdef __cplusplus
extern "C" {
#endif

struct YC20UI_Handle_t {
	YC20UI2 *ui;

	LV2UI_Write_Function write;
	LV2UI_Controller controller;
};

static void parameterChanged(void *handle, uint32_t port_idx, float value)
{
	struct YC20UI_Handle_t *obj = (struct YC20UI_Handle_t *)handle;
	if (obj->ui == 0) {
		std::cerr << "parameterChanged() triggered, but handle cleaned up. aborting operation." << std::endl;
		return;
	}

	obj->write(obj->controller, port_idx, sizeof(float), 0, &value);
}

static LV2UI_Handle instantiate_FooYC20UI(
			const struct _LV2UI_Descriptor* descriptor,
			const char*                     plugin_uri,
			const char*                     bundle_path,
			LV2UI_Write_Function            write_function,
			LV2UI_Controller                controller,
			LV2UI_Widget*                   widget,
			const LV2_Feature* const*       features)
{
	std::cerr << "instantiate_FooYC20UI()" << std::endl;

	if (strcmp(plugin_uri, "http://studionumbersix.com/foo/lv2/yc20") != 0) {
		std::cerr << "Trying to instantiate FooYC20UI for a wrong plugin" << std::endl;
		return 0;
	}

	struct YC20UI_Handle_t *obj = (struct YC20UI_Handle_t *)malloc(sizeof(struct YC20UI_Handle_t));
	obj->write = write_function;
	obj->controller = controller;

	// Make sure gtk is initialized
	gtk_init(0, 0);

	obj->ui = new YC20UI2();
	obj->ui->setParameterChangedCallback(&parameterChanged, obj);

	*widget = (LV2UI_Widget)obj->ui->getWidget();
	
	return (LV2UI_Handle)obj;
}

static void cleanup_FooYC20UI(LV2UI_Handle ui)
{
	std::cerr << "cleanup_FooYC20UI()" << std::endl;

	struct YC20UI_Handle_t *obj = (struct YC20UI_Handle_t *)ui;
	if (obj->ui != 0) {
		delete obj->ui;
		obj->ui = 0;
	}

	return;
}

static void port_event_FooYC20UI(
			LV2UI_Handle ui,
			uint32_t     port_index,
			uint32_t     buffer_size,
			uint32_t     format,
			const void*  buffer)
{
	struct YC20UI_Handle_t *obj = (struct YC20UI_Handle_t *)ui;

	if (obj->ui == 0) {
		std::cerr << "port_event to an UI which has been cleaned up." << std::endl;
		return;
	}

	// They're all floats..
	obj->ui->setControlFromLV2(port_index, *(float *)buffer);
}


static LV2UI_Descriptor yc20LV2UIDescriptor = {
	"http://studionumbersix.com/foo/lv2/yc20/ui",
	&instantiate_FooYC20UI,
	&cleanup_FooYC20UI,
	&port_event_FooYC20UI
};

const LV2UI_Descriptor *lv2ui_descriptor(uint32_t idx)
{
	if (idx != 0) {
		return 0;
	}

	return &yc20LV2UIDescriptor;
}


#ifdef __cplusplus
}
#endif

