/*
    Foo-YC20 UI Header

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


#ifndef _FOO_YC20_UI_H
#define _FOO_YC20_UI_H

#include <stdint.h>

#include <gtk/gtk.h>
#include <jack/ringbuffer.h>

#include <yc20-base-ui.h>
#include <foo-yc20.h>

class YC20UI : public YC20BaseUI, public YC20Exposable
{
	public:
		YC20UI(YC20Processor *);

		virtual ~YC20UI();

		GtkWidget *getWidget() { return drawingArea; }

		virtual void queueExpose(int cc);

		virtual void updateControlsFromState();


		cairo_t *get_cairo_surface() {
			return gdk_cairo_create(GDK_DRAWABLE(gtk_widget_get_window(drawingArea)));
		}

		// Events
		void size_request(GtkRequisition *);
		void size_allocate(GtkAllocation *);
		bool expose(GdkEventExpose *);
		void realize();

	private:
		bool	draw_queue();
		static	gboolean idleTimeout(gpointer );
		void	handleExposeEvents();

		YC20Processor *yc20;

		GtkWidget *drawingArea;

		Wdgt::Draggable *draggablePerCC[127];

		// Idle-timeout redraw things

		jack_ringbuffer_t *exposeRingbuffer;
		gint idleSignalTag;
};


#endif /* _FOO_YC20_UI_H */
