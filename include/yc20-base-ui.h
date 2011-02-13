/*
    Foo-YC20 UI Base header (contains drawing and event accessors)

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


#ifndef _YC20_BASE_UI_H
#define _YC20_BASE_UI_H

#include <map>
#include <string>

#include <stdint.h>

#include <cairo.h>

#include <wdgt.h>
#include <yc20_wdgts.h>

class YC20BaseUI
{
	public:
		YC20BaseUI	 ();
		virtual 	~YC20BaseUI();


		void		 mouse_movement	(double, double);
		void		 button_pressed	(double, double);
		void		 button_released(double, double);

		void		 draw		(double, double, double, double, bool);

		virtual void	 value_changed	(Wdgt::Draggable *) {};
		
		bool		 is_dragging	() { return dragWdgt != 0; };

	protected:
		virtual cairo_t	*get_cairo_surface() = 0;
		virtual void	 return_cairo_surface(cairo_t *cr) { cairo_destroy(cr); }

		void		 draw_wdgt	(Wdgt::Object *);

		Wdgt::Object	*identify_wdgt	(double, double);

		void		 set_scale	(double);

		std::map<std::string, Wdgt::Draggable *> wdgtPerLabel;

		std::list<Wdgt::Draggable *> wdgts;

	private:
		float		 ui_scale;
		Wdgt::Object	*hoverWdgt;
		Wdgt::Draggable	*dragWdgt;
		Wdgt::Object	*buttonPressWdgt;

		int		 dragStartX;
		int		 dragStartY;
		float		 predragValue;


		bool		 showing_license;

		int		 current_background;

		// Images
		cairo_surface_t *image_license;
		cairo_surface_t *image_background[4];
		cairo_surface_t *drawbarWhiteImages[4];
		cairo_surface_t *drawbarBlackImages[4];
		cairo_surface_t *drawbarGreenImages[4];
		cairo_surface_t *potentiometerImage;
};


#endif /* _YC20_BASE_UI_H */
