/*
    Wdgt library - simple cairo widgets for LV2 UI's
    Copyright (C) 2009  Sampo Savolainen <v2@iki.fi>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef _WDGT_H
#define _WDGT_H

#include <string>

namespace Wdgt {

class Object 
{
public:
	// bounding box
	double x1;
	double y1;
	double x2;
	double y2;

	virtual bool intersectsRectangle(double x, double y, double w, double h) const
	{
		return (x < x2 && (x+w) >= x1 &&
                        y < y2 && (y+h) >= y1);
	};

	inline bool intersectsEvent(GdkEventExpose *evt) const
	{
		return intersectsRectangle(evt->area.x,     evt->area.y, 
					   evt->area.width, evt->area.height);
	};

	inline bool intersectsPoint(double x, double y) const {
		return intersectsRectangle(x, y, 1, 1);
	};

	virtual void drawWidget(bool hover, cairo_t *cr) const {};

	void setPosition(double _x1, double _y1, double _w, double _h) {
		x1 = _x1;
		y1 = _y1;
		x2 = _x1 + _w;
		y2 = _y1 + _h;
	};

	std::list<Wdgt::Object *> dependents;

	void setName(std::string _name)
	{
		name = _name;
	}

	const std::string &getName() 
	{
		return name;
	}


protected:
	std::string name;
};


};

#endif /* _WDGT_H */
