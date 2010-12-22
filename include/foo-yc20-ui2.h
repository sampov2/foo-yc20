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

#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/drawingarea.h>

#include <jack/ringbuffer.h>

#include "wdgt.h"
#include "yc20_wdgts.h"

typedef void (*parameterchange_callback)(void *, uint32_t, float);

class YC20UI2
{
	public:
		YC20UI2();

		~YC20UI2();

		Gtk::Widget *getWidget() { return &drawingArea; }

		void setControlFromLV2(int, float);
		//void setParameterChangedCallback(void (*callback)(void *, uint32_t, float), void *);
		void setParameterChangedCallback(parameterchange_callback, void *);
	private:

		float ui_scale;

		Gtk::DrawingArea drawingArea;

		// Gtk essentials
		void size_request(Gtk::Requisition *);
		void size_allocate(Gtk::Allocation &);
		bool exposeWdgt(Wdgt::Object *);
		bool expose(GdkEventExpose *);

		void realize();


		bool motion_notify_event(GdkEventMotion *);
		bool button_press_event(GdkEventButton *);
		bool button_release_event(GdkEventButton *);

		bool draw_queue();

		Wdgt::Object *identifyWdgt(GdkEventMotion *);

		Wdgt::Object *_hoverWdgt;
		Wdgt::Draggable *_dragWdgt;
		Wdgt::Object *_buttonPressWdgt;

		int _dragStartX;
		int _dragStartY;
		float _predrag_value;

		std::list<Wdgt::Object *> wdgts;
		Wdgt::Draggable* draggablePerLV2Port[27];

		//std::map<std::string, Wdgt::Object *> wdgtPerLabel;
		//Wdgt::Draggable *draggablePerCC[127];

		cairo_surface_t *_image_background;

		bool _ready_to_draw;

		parameterchange_callback parameter_changed;
		void *parameter_changed_obj;
};


#endif /* _FOO_YC20_UI2_H */
