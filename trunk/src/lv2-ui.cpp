/*
    Foo-YC20 LV2 plugin UI
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
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include <list>

#include <lv2/http/lv2plug.in/ns/extensions/ui/ui.h>

#include "foo-yc20-ui2.h"

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
	if (obj->ui == NULL) {
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
		return NULL;
	}

	struct YC20UI_Handle_t *obj = (struct YC20UI_Handle_t *)malloc(sizeof(struct YC20UI_Handle_t));
	obj->write = write_function;
	obj->controller = controller;

	// Make sure gtk is initialized
	gtk_init(NULL, NULL);

	obj->ui = new YC20UI2();
	obj->ui->setParameterChangedCallback(&parameterChanged, obj);

	*widget = (LV2UI_Widget)obj->ui->getWidget();
	
	return (LV2UI_Handle)obj;
}

static void cleanup_FooYC20UI(LV2UI_Handle ui)
{
	std::cerr << "cleanup_FooYC20UI()" << std::endl;

	struct YC20UI_Handle_t *obj = (struct YC20UI_Handle_t *)ui;
	if (obj->ui != NULL) {
		delete obj->ui;
		obj->ui = NULL;
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

	if (obj->ui == NULL) {
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
		return NULL;
	}

	return &yc20LV2UIDescriptor;
}


#ifdef __cplusplus
}
#endif

