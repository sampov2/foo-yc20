/*
    Wdgts for Foo-YC20 UI

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

#ifndef _FOO_YC20_WDGTS_H
#define _FOO_YC20_WDGTS_H

#include <iostream>
#include <stdint.h>
#include <math.h>

#include <wdgt.h>

#define DRAWBAR_BLACK_EMPHASIS_ALPHA 0.333


namespace Wdgt
{

class Draggable : public Wdgt::Object
{
	public:
		Draggable()
			: minValue(0.0)
			, maxValue(1.0)
			, value(-99.9)
			, zone(NULL)
		{
		}

		virtual ~Draggable() {}

		virtual bool setValue(float v) = 0;
		virtual bool setValueFromDrag(float prevValue, float startY, float y) = 0;

		float getValue() const { return value; };
		float getMinValue() const { return minValue; };
		float getMaxValue() const { return maxValue; };

		void setZone(float *z) { zone = z; };
		float *getZone() const { return zone; };

		void setPortIndex(uint32_t p) { port = p; }
		uint32_t getPortIndex() const { return port; }

	protected:
		void inline setValueForZone()
		{
			if (zone) {
				*zone = value;
			}
		}

		float minValue;
		float maxValue;
		float value;

		float *zone;
		uint32_t port;
};

class Lever : public Draggable
{
	public:
		Lever(bool notches)
		{
			notched = notches;

			value = -1.0;
			setValue(0);
		}

		bool setValueFromDrag(float prevValue, float startY, float y)
		{
			return setValue(prevValue + (y-startY)/((y2-y1)/2.0));
		}

		virtual bool setValue(float v)
		{
			if (v < 0.0) {
				v = 0.0;
			} else if (v > 1.0) {
				v = 1.0;
			}

			imageNum = round(3.0*v);

			float newvalue;

			if (notched) {
				newvalue = (float)imageNum / 3.0;
			} else {
				newvalue = v;
			}
			
			if (value == newvalue) {
				return false;
			}

			value = newvalue;
			setValueForZone();

			return true;
		}

		void setPosition(float posX, float posY)
		{
			x1 = posX;
			y1 = posY;
			x2 = x1 + 40;
			y2 = y1 + 90 + 5;
		}

	protected:

		bool notched;
		int imageNum;

};

class Drawbar : public Lever
{
	public:
		Drawbar(float posX, float posY, bool notches, cairo_surface_t **_images)
			: Lever(notches)
			, images(_images)
			, alpha(0.08)
		{
			setPosition(posX, posY);
		}

		Drawbar(float posX, float posY, bool notches, float _alpha, cairo_surface_t **_images)
			: Lever(notches)
			, images(_images)
			, alpha(_alpha)
		{
			setPosition(posX, posY);
		}

		virtual void drawWidget(bool hover, cairo_t *cr) const
		{
			cairo_set_source_surface(cr, images[imageNum], x1, y1);
			cairo_paint(cr);
			
			if (hover) {
				cairo_set_source_surface(cr, images[imageNum], x1, y1);
				cairo_set_operator(cr, CAIRO_OPERATOR_ADD);
				cairo_paint_with_alpha(cr, alpha);
				cairo_set_operator(cr, CAIRO_OPERATOR_OVER);

			}
		}

	private:
		cairo_surface_t **images;
		float alpha;
};

class Switch : public Drawbar
{
	public:
		Switch(float posX, float posY, float alpha, cairo_surface_t **images)
			: Drawbar(posX, posY, false, alpha, images)
		{
		}

		virtual bool setValue(float v)
		{
			if (v < 0.5) {
				v = 0.0;
			} else {
				v = 1.0;
			}
			return Drawbar::setValue(v);
		}
};

class Potentiometer : public Draggable
{
	public:
		Potentiometer(float posX, float posY, float min, float max, cairo_surface_t *_image)
			: image(_image)
		{
			minValue = min;
			maxValue = max;

			value = maxValue / (maxValue - minValue);

			setValue( (min+max)/2.0 );

			setPosition(posX, posY);
		}
		
		virtual bool setValue(float v)
		{
			if (v > maxValue) {
				v = maxValue;
			} else if (v < minValue) {
				v = minValue;
			}

			if (v == value) {
				return false;
			}

			value = v;
			setValueForZone();

			return true;
		}

		void setPosition(float posX, float posY)
		{
			x1 = posX;
			y1 = posY;
			x2 = x1 + 72;
			y2 = y1 + 90;

			origoX = x1 + 72.0/2.0;
			origoY = y1 + 37.5 + 5.0;
		}

		bool setValueFromDrag(float prevValue, float startY, float y)
		{
			float v = prevValue + (startY - y)/100.0;

			return setValue(v);

		}

		virtual void drawWidget(bool hover, cairo_t *cr) const
		{
			cairo_set_source_surface(cr, image, x1, y1);
			cairo_paint(cr);

			if (hover) {
				cairo_set_operator(cr, CAIRO_OPERATOR_ADD);
				cairo_paint_with_alpha(cr, 0.08);
				cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
			}

			cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
			cairo_set_line_width(cr, 2.5);

			float relativeValue = -(maxValue - value) / (maxValue - minValue);
			relativeValue *= (5.0/6.0);
			relativeValue += 1.0/6.0;

			float x2offt = 32.0 * cos(M_PI * 2.0 * relativeValue);
			float y2offt = 32.0 * sin(M_PI * 2.0 * relativeValue);

			float x1offt = 8.0  * cos(M_PI * 2.0 * relativeValue);
			float y1offt = 8.0  * sin(M_PI * 2.0 * relativeValue);

			cairo_move_to(cr, origoX + x1offt, origoY + y1offt);

			cairo_line_to(cr, origoX + x2offt, origoY + y2offt);

			cairo_stroke(cr);
		}

	private:
		float origoX;
		float origoY;

		cairo_surface_t *image;
		
};

};


#endif /* _FOO_YC20_WDGTS_H */

