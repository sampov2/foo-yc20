/*
    Foo-YC20 UI2 Header
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


#ifndef _FOO_YC20_UI2_H
#define _FOO_YC20_UI2_H

#include <stdint.h>

#include <gtk/gtk.h>

#include <yc20-base-ui.h>

typedef void (*parameterchange_callback)(void *, uint32_t, float);

class YC20UI2 : public YC20BaseUI
{
	public:
		YC20UI2();

		virtual ~YC20UI2();

		GtkWidget *getWidget() { return drawingArea; }

		cairo_t *get_cairo_surface() {
			return gdk_cairo_create(GDK_DRAWABLE(gtk_widget_get_window(drawingArea)));
		}

		void setControlFromLV2(int, float);
		void setParameterChangedCallback(parameterchange_callback, void *);

		// Events
		void size_request(GtkRequisition *);
		void size_allocate(GtkAllocation *);
		bool expose(GdkEventExpose *);

	private:
		GtkWidget       *drawingArea;

		Wdgt::Draggable* draggablePerLV2Port[27];

		parameterchange_callback parameter_changed;
		void *parameter_changed_obj;

};


#endif /* _FOO_YC20_UI2_H */
