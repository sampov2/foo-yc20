/*
    Foo-YC20 UI2 Header

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

		cairo_t *get_cairo_surface();

		void setControlFromLV2(int, float);
		void setParameterChangedCallback(parameterchange_callback, void *);

		// Events
		void size_request(GtkRequisition *);
		void size_allocate(GtkAllocation *);
		bool expose(GdkEventExpose *);

		void value_changed(Wdgt::Draggable *);

		GtkWidget       *drawingArea;
	private:

		Wdgt::Draggable* draggablePerLV2Port[27];

		parameterchange_callback parameter_changed;
		void *parameter_changed_obj;
};


#endif /* _FOO_YC20_UI2_H */
