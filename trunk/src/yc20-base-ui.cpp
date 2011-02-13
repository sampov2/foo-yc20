/*
    Foo-YC20 Base UI

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

#include <yc20-base-ui.h>
#include <foo-yc20-os.h>
#include <graphics.h>

#include <cstdlib>
#include <ctime>
#include <cstring>

struct pointer_t {
	unsigned char *ptr;
	unsigned int length;
	unsigned int at;
};

cairo_status_t read_from_pointer(void *closure, unsigned char *data, unsigned int length)
{
	struct pointer_t *ptr = (struct pointer_t *)closure;

	if (ptr->at >= ptr->length) {
		return CAIRO_STATUS_SUCCESS;
	}

	unsigned int len = length;
	if (len > (ptr->length - ptr->at)) {
		len = ptr->length - ptr->at;
	}

	std::memcpy(data, ptr->ptr + ptr->at, len);

	ptr->at += len;

	return CAIRO_STATUS_SUCCESS;
}

namespace Wdgt
{
	bool check_cairo_png(cairo_surface_t *s)
	{
		cairo_status_t _stat = cairo_surface_status(s);
		return !(_stat == CAIRO_STATUS_NO_MEMORY ||
				_stat == CAIRO_STATUS_FILE_NOT_FOUND ||
				_stat == CAIRO_STATUS_READ_ERROR);

	}

	inline cairo_surface_t * load_png(unsigned char *ptr, unsigned int length, std::string name)
	{       
		struct pointer_t png_resource;
		png_resource.ptr    = ptr;
		png_resource.length = length;
		png_resource.at     = 0;

		cairo_surface_t *ret = cairo_image_surface_create_from_png_stream (read_from_pointer, &png_resource);
		if (!check_cairo_png(ret)) {
			std::cerr << "Foo-YC20: could not load png '" << name << "'" << std::endl;
		}
		return ret;
	}

}


YC20BaseUI::YC20BaseUI()
	: ui_scale(1.0)
	, hoverWdgt(0)
	, dragWdgt(0)
	, buttonPressWdgt(0)
	, showing_license(false)
	, current_background(0)
{

#define load(name) Wdgt::load_png(graphics_##name##_png, graphics_##name##_png_len, STR(name))

	image_background[0] = load(background_red);
	image_background[1] = load(background_black);
	image_background[2] = load(background_white);
	image_background[3] = load(background_blue);

	image_license = load(license);

	drawbarWhiteImages[0] = load(white_0);
	drawbarWhiteImages[1] = load(white_1);
	drawbarWhiteImages[2] = load(white_2);
	drawbarWhiteImages[3] = load(white_3);

	drawbarBlackImages[0] = load(black_0);
	drawbarBlackImages[1] = load(black_1);
	drawbarBlackImages[2] = load(black_2);
	drawbarBlackImages[3] = load(black_3);

	drawbarGreenImages[0] = load(green_0);
	drawbarGreenImages[1] = load(green_1);
	drawbarGreenImages[2] = load(green_2);
	drawbarGreenImages[3] = load(green_3);

	potentiometerImage = load(potentiometer);
#undef load
/*
	image_background[0] = Wdgt::load_png("background-red.png");
	image_background[1] = Wdgt::load_png("background-black.png");
	image_background[2] = Wdgt::load_png("background-white.png");
	image_background[3] = Wdgt::load_png("background-blue.png");

	image_license = Wdgt::load_png("license.png");

	drawbarWhiteImages[0] = Wdgt::load_png("white_0.png");
	drawbarWhiteImages[1] = Wdgt::load_png("white_1.png");
	drawbarWhiteImages[2] = Wdgt::load_png("white_2.png");
	drawbarWhiteImages[3] = Wdgt::load_png("white_3.png");

	drawbarBlackImages[0] = Wdgt::load_png("black_0.png");
	drawbarBlackImages[1] = Wdgt::load_png("black_1.png");
	drawbarBlackImages[2] = Wdgt::load_png("black_2.png");
	drawbarBlackImages[3] = Wdgt::load_png("black_3.png");

	drawbarGreenImages[0] = Wdgt::load_png("green_0.png");
	drawbarGreenImages[1] = Wdgt::load_png("green_1.png");
	drawbarGreenImages[2] = Wdgt::load_png("green_2.png");
	drawbarGreenImages[3] = Wdgt::load_png("green_3.png");

	potentiometerImage = Wdgt::load_png("potentiometer.png");
*/
	// Widgets
	float pitch_x = 6.0;
	float pitch_x_long = 10.0;
	float pitch_x_longest = 20.0;

	float x = 15.0;
	float y = 15.0;

	// Pitch, volume & bass volume
	Wdgt::Potentiometer *pitch  = new Wdgt::Potentiometer(x, y, -1.0, 1.0, potentiometerImage);
	pitch->setName("pitch");
	x += 72.0 + pitch_x_longest;

	Wdgt::Potentiometer *volume = new Wdgt::Potentiometer(x, y, 0.0, 1.0, potentiometerImage);
	volume->setName("volume");
	x += 72.0 + pitch_x_longest;

	Wdgt::Potentiometer *bass_v = new Wdgt::Potentiometer(x, y, 0.0, 1.0, potentiometerImage);
	bass_v->setName("bass volume");
	x += 72.0 + pitch_x_longest + pitch_x_long;

	wdgts.push_back(pitch);
	wdgts.push_back(volume);
	wdgts.push_back(bass_v);

	// Vibrato section
	// Instead of the touch vibrato, we have a realism switch
	Wdgt::Drawbar *realism = new Wdgt::Drawbar(x, y, true, DRAWBAR_BLACK_EMPHASIS_ALPHA, drawbarBlackImages);
	realism->setName("realism");
	x += 40.0 + pitch_x;
	
	Wdgt::Drawbar *vibrato = new Wdgt::Drawbar(x, y, true, DRAWBAR_BLACK_EMPHASIS_ALPHA, drawbarBlackImages);
	vibrato->setName("depth");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *v_speed = new Wdgt::Drawbar(x, y, true, DRAWBAR_BLACK_EMPHASIS_ALPHA, drawbarBlackImages);
	v_speed->setName("speed");
	x += 40.0 + pitch_x_longest;

	wdgts.push_back(realism);
	wdgts.push_back(vibrato);
	wdgts.push_back(v_speed);

	// Bass
	Wdgt::Drawbar *bass_16  = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	bass_16->setName("16' b");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *bass_8   = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	bass_8->setName("8' b");
	x += 40.0 + pitch_x;

	Wdgt::Switch *bass_man = new Wdgt::Switch(x, y, DRAWBAR_BLACK_EMPHASIS_ALPHA, drawbarBlackImages);
	bass_man->setName("bass manual");
	x += 40.0 + pitch_x_longest;

	wdgts.push_back(bass_16);
	wdgts.push_back(bass_8);
	wdgts.push_back(bass_man);

	// Section I
	Wdgt::Drawbar *sect1_16    = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_16->setName("16' i");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *sect1_8     = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_8->setName("8' i");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *sect1_4     = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_4->setName("4' i");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *sect1_2_2p3 = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_2_2p3->setName("2 2/3' i");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *sect1_2     = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_2->setName("2' i");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *sect1_1_3p5 = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_1_3p5->setName("1 3/5' i");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *sect1_1     = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_1->setName("1' i");
	x += 40.0 + pitch_x_long;

	wdgts.push_back(sect1_16);
	wdgts.push_back(sect1_8);
	wdgts.push_back(sect1_4);
	wdgts.push_back(sect1_2_2p3);
	wdgts.push_back(sect1_2);
	wdgts.push_back(sect1_1_3p5);
	wdgts.push_back(sect1_1);

	// Balance & Brightness
	Wdgt::Drawbar *balance    = new Wdgt::Drawbar(x, y, false, DRAWBAR_BLACK_EMPHASIS_ALPHA, drawbarBlackImages);
	balance->setName("balance");
	x += 40.0 + pitch_x_long;

	Wdgt::Drawbar *brightness = new Wdgt::Drawbar(x, y, false, DRAWBAR_BLACK_EMPHASIS_ALPHA, drawbarBlackImages);
	brightness->setName("bright");
	x += 40.0 + pitch_x_long;

	wdgts.push_back(balance);
	wdgts.push_back(brightness);

	// Section II
	Wdgt::Drawbar *sect2_16 = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect2_16->setName("16' ii");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *sect2_8  = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect2_8->setName("8' ii");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *sect2_4  = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect2_4->setName("4' ii");
	x += 40.0 + pitch_x;

	Wdgt::Drawbar *sect2_2  = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect2_2->setName("2' ii");
	x += 40.0 + pitch_x_long;

	sect2_16->setValue(1.0);
	sect2_8 ->setValue(0.66);
	sect2_4 ->setValue(0.33);
	sect2_2 ->setValue(0.0);

	wdgts.push_back(sect2_16);
	wdgts.push_back(sect2_8);
	wdgts.push_back(sect2_4);
	wdgts.push_back(sect2_2);

	// Percussion
	Wdgt::Drawbar *percussive = new Wdgt::Drawbar(x, y, true, drawbarGreenImages);
	percussive->setName("percussive");

	wdgts.push_back(percussive);


	// Make the map
	for (std::list<Wdgt::Draggable *>::iterator i = wdgts.begin(); i !=  wdgts.end(); ++i) {
		Wdgt::Draggable	*draggable = (*i);
		wdgtPerLabel[draggable->getName()] = draggable;
	}
}

void
YC20BaseUI::set_scale(double new_scale)
{
	ui_scale = new_scale;
}

Wdgt::Object *
YC20BaseUI::identify_wdgt(double x, double y)
{
	for (std::list<Wdgt::Draggable *>::iterator i = wdgts.begin(); i != wdgts.end(); ) {
		Wdgt::Draggable *obj = *i;

		if (obj->intersectsPoint(x, y))
			return obj;
	
		++i;
	}

	return 0;
}

void
YC20BaseUI::mouse_movement(double x, double y)
{
	if (showing_license) {
		return;
	}

	x /= ui_scale;
	y /= ui_scale;

	if (dragWdgt != 0) {

		if (dragWdgt->setValueFromDrag(predragValue, dragStartY, y)) {
			value_changed(dragWdgt);
			draw_wdgt(dragWdgt);
		}
		return;
	}

	Wdgt::Object *newHover = identify_wdgt(x, y);
	if (newHover == hoverWdgt) {
		return;
	}

	Wdgt::Object *oldHover = hoverWdgt;

	hoverWdgt = newHover;

	// Redraw ex-hover-widget
	if (oldHover != 0) {
		draw_wdgt(oldHover);
	}

	// Redraw new hover-widget
	if (hoverWdgt != 0) {
		draw_wdgt(hoverWdgt);
	}

	return;
}

void
YC20BaseUI::button_pressed(double x, double y)
{
	if (showing_license) {
		showing_license = false;
		current_background = (current_background + 1) % 4;
		draw(-1, -1, -1, -1, false);
		return;
	}

	x /= ui_scale;
	y /= ui_scale;

	buttonPressWdgt = hoverWdgt;
	Wdgt::Draggable *obj = dynamic_cast<Wdgt::Draggable *>(buttonPressWdgt);

	if (obj == 0) {
		if (x >= 1200 && y >= 155) {
			showing_license = true;
			draw(-1, -1, -1, -1, false);
		}
		return;
	}


	predragValue = obj->getValue();

	dragWdgt = obj;
	dragStartX = x;
	dragStartY = y;

	return;
}

void
YC20BaseUI::button_released(double x, double y)
{
	if (showing_license) {
		return;
	}

	x /= ui_scale;
	y /= ui_scale;

	Wdgt::Object *exposeObj = 0;

	if (dragWdgt != 0) {
		exposeObj = dragWdgt;
	}

	buttonPressWdgt = 0;
	dragWdgt = 0;
	hoverWdgt = 0;

	if (exposeObj != 0) {
		draw_wdgt(exposeObj);
	}

	return;
	
}

void
YC20BaseUI::draw_wdgt(Wdgt::Object *obj)
{
	draw(obj->x1, obj->y1, obj->x2 - obj->x1, obj->y2 - obj->y1, false);

	for (std::list<Wdgt::Object *>::iterator i = obj->dependents.begin(); i != obj->dependents.end(); ) {
		Wdgt::Object *dep = *i;

		draw_wdgt(dep);

		++i;
	}
}

// x < 0 => don't clip
void
YC20BaseUI::draw(double x, double y, double width, double height, bool scale)
{
	bool clip = (x >= 0.0);

	if (scale) {
		x	/= ui_scale;
		y	/= ui_scale;
		width	/= ui_scale;
		height	/= ui_scale;
	}

	width++;
	height++;

	cairo_t *cr = get_cairo_surface();
	if (cr == 0) {
		// Not realized yet
		return;
	}

	cairo_scale(cr, ui_scale, ui_scale);

	if (showing_license) {
		cairo_set_source_surface(cr, image_license, 0.0, 0.0);
		cairo_paint(cr);
		return_cairo_surface(cr);
		return;
	}

	// double-buffer
	cairo_push_group_with_content(cr, CAIRO_CONTENT_COLOR);

	// background
	cairo_set_source_surface(cr, image_background[current_background], 0.0, 0.0);
	cairo_paint(cr);

	// wdgts
	for (std::list<Wdgt::Draggable *>::iterator i = wdgts.end(); i != wdgts.begin(); ) {
		--i;

		Wdgt::Draggable *obj = *i;
	
		if (!clip || obj->intersectsRectangle(x, y, width, height)) {
			obj->drawWidget( (hoverWdgt == obj), cr);
		}
	}

	// finish drawing (retrieve double-buffer & draw it)
	cairo_pattern_t *bg = cairo_pop_group(cr);

	cairo_copy_page(cr);

	if (clip) {
		cairo_rectangle(cr, x, y, width+1, height+1);
		cairo_clip(cr);
	}


	cairo_set_source(cr,bg);
	cairo_paint(cr);

	if (clip) {
		cairo_reset_clip(cr);
	}

	cairo_pattern_destroy(bg);

	return_cairo_surface(cr);
}

YC20BaseUI::~YC20BaseUI()
{
        for (std::list<Wdgt::Draggable *>::iterator i = wdgts.begin(); i != wdgts.end(); ) {
                Wdgt::Draggable *obj = *i;
                ++i;
                delete obj;
        }
	wdgts.clear();

	cairo_surface_destroy(image_license);

	for (int i = 0; i < 4; i++) {
		cairo_surface_destroy(image_background[i]);
		cairo_surface_destroy(drawbarBlackImages[i]);
		cairo_surface_destroy(drawbarWhiteImages[i]);
		cairo_surface_destroy(drawbarGreenImages[i]);
	}

	cairo_surface_destroy(potentiometerImage);
}

