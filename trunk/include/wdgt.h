/*
    Wdgt library - simple cairo widgets (originally for foo-plugins LV2 UIs)

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

#ifndef _WDGT_H
#define _WDGT_H

#include <string>
#include <list>

#include <cairo.h>

//#define WdgtIntersectsEvent(wdgt, evt) wdgt->intersectsRectangle(evt->area.x,     evt->area.y, evt->area.width, evt->area.height)

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
