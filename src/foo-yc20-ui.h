/*
    Foo-YC20 UI Header
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


#ifndef _FOO_YC20_UI_H
#define _FOO_YC20_UI_H


#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/drawingarea.h>

#include <jack/ringbuffer.h>

#include "wdgt.h"
#include "yc20_wdgts.h"
#include "foo-yc20.h"

//class YC20Processor;

class YC20UI : public YC20Exposable
{
	public:
		YC20UI(YC20Processor *);

		~YC20UI();

		Gtk::Widget *getWidget() { return &drawingArea; }

		virtual void queueExpose(int cc);

		void loadConfiguration(std::string file);
		void loadConfiguration();
		void saveConfiguration();

	private:
		YC20Processor *yc20;

		float ui_scale;

		std::string configFile;

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

		std::map<std::string, Wdgt::Object *> wdgtPerLabel;
		Wdgt::Draggable *draggablePerCC[127];

		cairo_surface_t *_image_background;

		bool _ready_to_draw;

		// Idle-timeout redraw things

		jack_ringbuffer_t *exposeRingbuffer;
		static gboolean idleTimeout(gpointer );
		void handleExposeEvents();
		gint idleSignalTag;
};


#endif /* _FOO_YC20_UI_H */
