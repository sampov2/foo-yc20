/*
    Foo-YC20 UI Base header (contains drawing and event accessors)
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



		//bool _ready_to_draw;

		// Images
		cairo_surface_t *image_background;
		cairo_surface_t *drawbarWhiteImages[4];
		cairo_surface_t *drawbarBlackImages[4];
		cairo_surface_t *drawbarGreenImages[4];
		cairo_surface_t *potentiometerImage;
};


#endif /* _YC20_BASE_UI_H */
