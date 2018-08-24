/*
    Foo-YC20 UI

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

#include <foo-yc20-ui.h>

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

// C-functions to wrap gtk/gdk signal handlers to C++ functions

static void yc20ui_size_request(GtkWidget *widget, GtkRequisition *event, gpointer data)
{
        YC20UI *ui = (YC20UI *)data;
        ui->size_request(event);
}

static void yc20ui_size_allocate(GtkWidget *widget, GtkAllocation *event, gpointer data)
{
        YC20UI *ui = (YC20UI *)data;
        ui->size_allocate(event);
}

static gboolean yc20ui_expose_event(GtkWidget *widget, GdkEventExpose *event, gpointer data)
{
        YC20UI *ui = (YC20UI *)data;
	if (event) {
		ui->draw(event->area.x, event->area.y, event->area.width, event->area.height, true);
	} else {
		ui->draw(-1, -1, -1, -1, true);

	}

	return true;
}

static void yc20ui_realize(GtkWidget *widget, gpointer data)
{
        YC20UI *ui = (YC20UI *)data;
        ui->realize();
}

static gboolean yc20ui_motion_notify_event(GtkWidget *widget, GdkEventMotion *event, gpointer data)
{
        YC20UI *ui = (YC20UI *)data;
	ui->mouse_movement(event->x, event->y);
	gtk_widget_queue_draw(widget);
	return true;
}

static gboolean yc20ui_button_press_event(GtkWidget *widget, GdkEventButton *event, gpointer data)
{
	if (event->type == GDK_BUTTON_PRESS) {
        	YC20UI *ui = (YC20UI *)data;
        	ui->button_pressed(event->x, event->y);
	}
	gtk_widget_queue_draw(widget);
	return true;
}

static gboolean yc20ui_button_release_event(GtkWidget *widget, GdkEventButton *event, gpointer data)
{
        YC20UI *ui = (YC20UI *)data;
        ui->button_released(event->x, event->y);
	gtk_widget_queue_draw(widget);
        return true;
}


#ifdef __cplusplus
}
#endif




YC20UI::YC20UI(YC20Processor *parent)
	: yc20(parent)
{
	drawingArea = GTK_WIDGET(gtk_drawing_area_new());

	memset(draggablePerCC, 0, sizeof(Wdgt::Draggable *)*127);

        // Gtk signals
        g_signal_connect (drawingArea, "size-request",         G_CALLBACK( yc20ui_size_request ), this);
        g_signal_connect (drawingArea, "size-allocate",        G_CALLBACK( yc20ui_size_allocate ), this);
        g_signal_connect (drawingArea, "expose-event",         G_CALLBACK( yc20ui_expose_event ), this);
	g_signal_connect (drawingArea, "realize",              G_CALLBACK( yc20ui_realize ), this);

        g_signal_connect (drawingArea, "motion-notify-event",  G_CALLBACK( yc20ui_motion_notify_event ), this);
        g_signal_connect (drawingArea, "button-press-event",   G_CALLBACK( yc20ui_button_press_event ), this);
        g_signal_connect (drawingArea, "button-release-event", G_CALLBACK( yc20ui_button_release_event ), this);

        // Event mask
        gint mask = gtk_widget_get_events(drawingArea);

        mask |= GDK_POINTER_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK;

        gtk_widget_set_events(drawingArea, mask);

	// Make the map
	for (std::list<Wdgt::Draggable *>::iterator i = wdgts.begin(); i !=  wdgts.end(); ++i) {
		Wdgt::Draggable *draggable = (*i);

		Control *control = yc20->getControl(draggable->getName());
		draggablePerCC[control->getCC()] = draggable;
		draggable->setZone(control->getZone());
		
	}


	// Create the ringbuffer and start the timeout thread
	exposeRingbuffer = jack_ringbuffer_create(sizeof(Wdgt::Draggable *)*1000);
	if (exposeRingbuffer == NULL) {
		throw "Could not create ringbuffer";
	}
	idleSignalTag = g_timeout_add(10, idleTimeout, this);

}

void
YC20UI::updateControlsFromState()
{
	for (std::list<Wdgt::Draggable *>::iterator i = wdgts.begin(); i != wdgts.end(); ++i) {
		Wdgt::Draggable *o = (*i);
		Wdgt::Draggable *draggable = dynamic_cast<Wdgt::Draggable *>(o);
		if (draggable != NULL) {
			draggable->setValue( *draggable->getZone() );
		}
	}
}


void
YC20UI::size_request(GtkRequisition *req)
{
	//std::cerr << "size_request: " << req->width << " x " << req->height << std::endl;

	if (req->width > 1280) {
		req->width = 1280;
	} else if (req->width < 768) {
		req->width = 768;
	}

	float scale = (float)req->width/1280.0;

	set_scale(scale);

	req->height = 200.0 * scale;
}


void 
YC20UI::size_allocate(GtkAllocation *alloc)
{
        if (alloc->width > 1280) {
                alloc->width = 1280;
        } else if (alloc->width < 768) {
                alloc->width = 768;
        }

	float scale = (float)alloc->width/1280.0;

	set_scale(scale);

        alloc->height = 200.0 * scale;
}

void
YC20UI::realize()
{
	GdkGeometry geom;
	geom.min_width  = 768;
	geom.min_height = 120; // 200.0 * (768.0 / 1280.0);
	geom.max_width  = 1280;
	geom.max_height = 200;

	geom.min_aspect = 1280.0/200.0;
	geom.max_aspect = 1280.0/200.0;

	geom.width_inc  = 64;
	geom.height_inc = 10;

	GtkWidget *top = gtk_widget_get_toplevel(drawingArea);
	if (top == NULL) {
		std::cerr << "No toplevel widget?!?!" << std::endl;
		return;
	}

	GtkWindow *window = GTK_WINDOW(top);
	if (window == NULL) {
		std::cerr << "could not find the toplevel window. weird." << std::endl;
		return;
	}
	
	GdkWindowHints hints = (GdkWindowHints)(GDK_HINT_MIN_SIZE | GDK_HINT_MAX_SIZE | GDK_HINT_ASPECT | GDK_HINT_RESIZE_INC);
	gtk_window_set_geometry_hints(window, NULL, &geom, hints);
}

gboolean 
YC20UI::idleTimeout(gpointer data)
{
	YC20UI *obj = (YC20UI *)data;
	obj->handleExposeEvents();

	return true;
}

void
YC20UI::handleExposeEvents()
{
	Wdgt::Draggable *obj;

	while ( jack_ringbuffer_read(exposeRingbuffer, 
	                             (char *)&obj,
	                             sizeof(Wdgt::Draggable *)) == sizeof(Wdgt::Draggable *)) {
		obj->setValue( *obj->getZone() );
		draw_wdgt(obj);
	}
}

void
YC20UI::queueExpose(int cc)
{
	Wdgt::Draggable *obj = draggablePerCC[cc];
	if (obj == NULL) {
		std::cerr << "Tried to queue an expose event for a non-existent control" << std::endl;
		return;
	}

	int i = jack_ringbuffer_write(exposeRingbuffer, (char *)&obj, sizeof(Wdgt::Draggable *));
	if (i != sizeof(Wdgt::Draggable *)) {
		std::cerr << "Ringbuffer full!" << std::endl;
	}
}

YC20UI::~YC20UI()
{
	g_source_remove(idleSignalTag);

	jack_ringbuffer_free(exposeRingbuffer);
}

