/*
    Foo-YC20 Base UI
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

#include <yc20-base-ui.h>
#include <foo-yc20-os.h>

#include <string.h>

namespace Wdgt
{

	bool check_cairo_png(cairo_surface_t *s)
	{
		cairo_status_t _stat = cairo_surface_status(s);
		return !(_stat == CAIRO_STATUS_NO_MEMORY ||
				_stat == CAIRO_STATUS_FILE_NOT_FOUND ||
				_stat == CAIRO_STATUS_READ_ERROR);

	}

	inline cairo_surface_t * load_png(std::string file)
	{       
		std::string installed_file = INSTALL_LOCATION YC20_PNG_DIR + file;
		std::string local_file = YC20_PNG_DIR + file;

		cairo_surface_t *ret = cairo_image_surface_create_from_png (installed_file.c_str());
		if (!check_cairo_png(ret)) {
			ret = cairo_image_surface_create_from_png (local_file.c_str());
		}

		if (!check_cairo_png(ret)) {
			std::cerr << "Foo-YC20: could not open " << installed_file << " or a local copy in " << YC20_PNG_DIR << std::endl;
		}
		return ret;
	}
}


YC20BaseUI::YC20BaseUI()
	: ui_scale(1.0)
	, hoverWdgt(0)
	, dragWdgt(0)
	, buttonPressWdgt(0)
{
	image_background = Wdgt::load_png("background.png");

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
	x /= ui_scale;
	y /= ui_scale;

	if (dragWdgt != 0) {

		if (dragWdgt->setValueFromDrag(predragValue, dragStartY, y)) {
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
	x /= ui_scale;
	y /= ui_scale;

	buttonPressWdgt = hoverWdgt;
	Wdgt::Draggable *obj = dynamic_cast<Wdgt::Draggable *>(buttonPressWdgt);

	if (obj == 0) {
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

	//_ready_to_draw = true;

	cairo_t *cr = get_cairo_surface();
	if (cr == 0) {
		// Not realized yet
		return;
	}

	cairo_scale(cr, ui_scale, ui_scale);

	// double-buffer
	cairo_push_group_with_content(cr, CAIRO_CONTENT_COLOR);

	// background
	cairo_set_source_surface(cr, image_background, 0.0, 0.0);
	// e4080a
	//cairo_set_source_rgb(cr, 228.0/255.0, 8.0/255.0, 10.0/255.0);
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

	cairo_destroy(cr);
}

YC20BaseUI::~YC20BaseUI()
{
        for (std::list<Wdgt::Draggable *>::iterator i = wdgts.begin(); i != wdgts.end(); ) {
                Wdgt::Draggable *obj = *i;
                ++i;
                delete obj;
        }

	cairo_surface_destroy(image_background);

	for (int i = 0; i < 4; i++) {
		cairo_surface_destroy(drawbarBlackImages[i]);
		cairo_surface_destroy(drawbarWhiteImages[i]);
		cairo_surface_destroy(drawbarGreenImages[i]);
	}

	cairo_surface_destroy(potentiometerImage);
}

