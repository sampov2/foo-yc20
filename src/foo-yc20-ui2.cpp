/*
    Foo-YC20 UI2 (UI designed for LV2)
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

#include <list>

#include <stdlib.h>
#include <string.h>

#include <foo-yc20-ui2.h>
#include <foo-yc20.h>
#include <foo-yc20-os.h>

#ifdef __cplusplus
extern "C" {
#endif

// C-functions to wrap gtk/gdk signal handlers to C++ functions

static void lv2ui_size_request(GtkWidget *widget, GtkRequisition *event, gpointer data)
{
	YC20UI2 *ui = (YC20UI2 *)data;
	ui->size_request(event);
}

static void lv2ui_size_allocate(GtkWidget *widget, GtkAllocation *event, gpointer data)
{
	YC20UI2 *ui = (YC20UI2 *)data;
	ui->size_allocate(event);
}

static gboolean lv2ui_expose_event(GtkWidget *widget, GdkEventExpose *event, gpointer data)
{
	YC20UI2 *ui = (YC20UI2 *)data;
       if (event) {
                ui->draw(event->area.x, event->area.y, event->area.width, event->area.height, true);
        } else {
                ui->draw(-1, -1, -1, -1, true);

        }

        return true;
}

static gboolean lv2ui_motion_notify_event(GtkWidget *widget, GdkEventMotion *event, gpointer data)
{
	YC20UI2 *ui = (YC20UI2 *)data;
        ui->mouse_movement(event->x, event->y);
        return true;
}

static gboolean lv2ui_button_press_event(GtkWidget *widget, GdkEventButton *event, gpointer data)
{
	YC20UI2 *ui = (YC20UI2 *)data;
        ui->button_pressed(event->x, event->y);
        return true;
}

static gboolean lv2ui_button_release_event(GtkWidget *widget, GdkEventButton *event, gpointer data)
{
	YC20UI2 *ui = (YC20UI2 *)data;
        ui->button_released(event->x, event->y);
        return true;
}

static void lv2ui_destroy_widget(GtkWidget *widget, gpointer data)
{
	YC20UI2 *ui = (YC20UI2 *)data;
	ui->drawingArea = 0;

}

#ifdef __cplusplus
}
#endif




YC20UI2::YC20UI2()
{
	drawingArea = GTK_WIDGET(gtk_drawing_area_new());
	gtk_widget_ref(drawingArea);

	memset(draggablePerLV2Port, 0, sizeof(Wdgt::Draggable *)*27);

	// Gtk signals
	g_signal_connect (drawingArea, "size-request",         G_CALLBACK( lv2ui_size_request ), this);
	g_signal_connect (drawingArea, "size-allocate",        G_CALLBACK( lv2ui_size_allocate ), this);
	g_signal_connect (drawingArea, "expose-event",         G_CALLBACK( lv2ui_expose_event ), this);

	g_signal_connect (drawingArea, "motion-notify-event",  G_CALLBACK( lv2ui_motion_notify_event ), this);
	g_signal_connect (drawingArea, "button-press-event",   G_CALLBACK( lv2ui_button_press_event ), this);
	g_signal_connect (drawingArea, "button-release-event", G_CALLBACK( lv2ui_button_release_event ), this);
	
	g_signal_connect (drawingArea, "destroy",	       G_CALLBACK( lv2ui_destroy_widget ), this);

	// Event mask
	gint mask = gtk_widget_get_events(drawingArea);

	mask |= GDK_POINTER_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK;

	gtk_widget_set_events(drawingArea, mask);

	int c_idx = 3;

	// Pitch, volume & bass volume
	Wdgt::Draggable *pitch = wdgtPerLabel["pitch"];
	pitch->setPortIndex(c_idx++);

	Wdgt::Draggable *volume = wdgtPerLabel["volume"];
	volume->setPortIndex(c_idx++);

	Wdgt::Draggable *bass_v = wdgtPerLabel["bass volume"];
	bass_v->setPortIndex(c_idx++);

	// Vibrato section
	// Instead of the touch vibrato, we have a realism switch
	Wdgt::Draggable *realism = wdgtPerLabel["realism"];
	realism->setPortIndex(c_idx++);
	
	Wdgt::Draggable *vibrato = wdgtPerLabel["depth"];
	vibrato->setPortIndex(c_idx++);

	Wdgt::Draggable *v_speed = wdgtPerLabel["speed"];
	v_speed->setPortIndex(c_idx++);

	// Bass
	Wdgt::Draggable *bass_16 = wdgtPerLabel["16' b"];
	bass_16->setPortIndex(c_idx++);

	Wdgt::Draggable *bass_8 = wdgtPerLabel["8' b"];
	bass_8->setPortIndex(c_idx++);

	Wdgt::Draggable *bass_man = wdgtPerLabel["bass manual"];
	bass_man->setPortIndex(c_idx++);

	// Section I
	Wdgt::Draggable *sect1_16 = wdgtPerLabel["16' i"];
	sect1_16->setPortIndex(c_idx++);

	Wdgt::Draggable *sect1_8 = wdgtPerLabel["8' i"];
	sect1_8->setPortIndex(c_idx++);

	Wdgt::Draggable *sect1_4 = wdgtPerLabel["4' i"];
	sect1_4->setPortIndex(c_idx++);

	Wdgt::Draggable *sect1_2_2p3 = wdgtPerLabel["2 2/3' i"];
	sect1_2_2p3->setPortIndex(c_idx++);

	Wdgt::Draggable *sect1_2 = wdgtPerLabel["2' i"];
	sect1_2->setPortIndex(c_idx++);

	Wdgt::Draggable *sect1_1_3p5 = wdgtPerLabel["1 3/5' i"];
	sect1_1_3p5->setPortIndex(c_idx++);

	Wdgt::Draggable *sect1_1 = wdgtPerLabel["1' i"];
	sect1_1->setPortIndex(c_idx++);

	// Balance & Brightness
	Wdgt::Draggable *balance = wdgtPerLabel["balance"];
	balance->setPortIndex(c_idx++);

	Wdgt::Draggable *brightness = wdgtPerLabel["bright"];
	brightness->setPortIndex(c_idx++);

	// Section II
	Wdgt::Draggable *sect2_16 = wdgtPerLabel["16' ii"];
	sect2_16->setPortIndex(c_idx++);

	Wdgt::Draggable *sect2_8 = wdgtPerLabel["8' ii"];
	sect2_8->setPortIndex(c_idx++);

	Wdgt::Draggable *sect2_4 = wdgtPerLabel["4' ii"];
	sect2_4->setPortIndex(c_idx++);

	Wdgt::Draggable *sect2_2 = wdgtPerLabel["2' ii"];
	sect2_2->setPortIndex(c_idx++);

	// Percussion
	Wdgt::Draggable *percussive = wdgtPerLabel["percussive"];
	percussive->setPortIndex(c_idx++);

	for (std::list<Wdgt::Draggable *>::iterator i = wdgts.begin(); i != wdgts.end(); ++i) {
		Wdgt::Draggable *draggable = (*i);
		draggablePerLV2Port[ draggable->getPortIndex() ] = draggable;
	}
}

void
YC20UI2::setControlFromLV2(int port_idx, float value)
{
	if (port_idx < 0 || port_idx > 25) {
		std::cerr << "LV2 port index " << port_idx << " out of range" << std::endl;
		return;
	}
	Wdgt::Draggable *d = draggablePerLV2Port[port_idx];
	if (d == NULL) {
		std::cerr << "No control for LV2 port " << port_idx << std::endl;
		return;
	}

	d->setValue(value);
	draw_wdgt(d);
}

void
YC20UI2::size_request(GtkRequisition *req)
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

cairo_t *
YC20UI2::get_cairo_surface()
{
	if (!gtk_widget_get_realized(drawingArea)) { 
		return 0;
	}

	return gdk_cairo_create(GDK_DRAWABLE(gtk_widget_get_window(drawingArea)));
}

void 
YC20UI2::size_allocate(GtkAllocation *alloc)
{
	//std::cerr << "size_allocate: " << alloc.get_x() << " x " << alloc.get_y() << "  :  " << alloc.get_width() << " x " << alloc.get_height() << std::endl;

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
YC20UI2::setParameterChangedCallback(parameterchange_callback cb, void *obj)
{
	parameter_changed = cb;
	parameter_changed_obj = obj;
}

YC20UI2::~YC20UI2()
{
	// It seems this is unnecessary
	if (drawingArea) {
		gtk_widget_unref(drawingArea);
		gtk_widget_destroy(drawingArea);
		drawingArea = 0;
	}
}

