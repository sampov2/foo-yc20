/*
    Foo-YC20 UI
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

#include <iostream>
#include <fstream>
#include <cstring>
#include <cerrno>
#include <list>
#include <set>

#include <sys/stat.h>
#include <sys/types.h>

#include <jack/jack.h>
#include <jack/midiport.h>
#include <jack/ringbuffer.h>

#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/drawingarea.h>



#define max(x,y) (((x)>(y)) ? (x) : (y))
#define min(x,y) (((x)<(y)) ? (x) : (y))

#include "../gen/foo-yc20-dsp.cpp"

#include "wdgt.h"
#include "yc20_wdgts.h"

#include "foo-yc20.h"

// initialize statics
namespace Wdgt {
	cairo_surface_t *DrawbarWhite::images[] = {
		load_png("white_0.png"), 
		load_png("white_1.png"), 
		load_png("white_2.png"), 
		load_png("white_3.png") };

	cairo_surface_t *DrawbarBlack::images[] = {
		load_png("black_0.png"), 
		load_png("black_1.png"), 
		load_png("black_2.png"), 
		load_png("black_3.png") };

	cairo_surface_t *DrawbarGreen::images[] = {
		load_png("green_0.png"), 
		load_png("green_1.png"), 
		load_png("green_2.png"), 
		load_png("green_3.png") };
	cairo_surface_t *Potentiometer::image =
		load_png("potentiometer.png");
};

YC20UI::YC20UI()
	: ui_scale(1.0)
	, _hoverWdgt(NULL)
	, _dragWdgt(NULL)
	, _buttonPressWdgt(NULL)
{
	memset(draggablePerCC, 0, sizeof(Wdgt::Draggable *)*127);
	_image_background = Wdgt::load_png("background.png");

	drawingArea.signal_size_request().connect( sigc::mem_fun(*this, &YC20UI::size_request));
	drawingArea.signal_size_allocate().connect( sigc::mem_fun(*this, &YC20UI::size_allocate));
	drawingArea.signal_expose_event().connect( sigc::mem_fun (*this, &YC20UI::expose));

	drawingArea.signal_realize().connect( sigc::mem_fun (*this, &YC20UI::realize));


	drawingArea.signal_motion_notify_event().connect ( sigc::mem_fun (*this, &YC20UI::motion_notify_event) );
	drawingArea.signal_button_press_event().connect  ( sigc::mem_fun (*this, &YC20UI::button_press_event));
	drawingArea.signal_button_release_event().connect( sigc::mem_fun (*this, &YC20UI::button_release_event));



	Gdk::EventMask mask = drawingArea.get_events();

	mask |= Gdk::POINTER_MOTION_MASK | Gdk::BUTTON_PRESS_MASK | Gdk::BUTTON_RELEASE_MASK;

	drawingArea.set_events(mask);


	_dragWdgt = NULL;

	// Widgets
	float pitch_x = 6.0;
	float pitch_x_long = 10.0;
	float pitch_x_longest = 20.0;

	float x = 15.0;
	float y = 15.0;

	// Pitch, volume & bass volume
	Wdgt::Potentiometer *pitch  = new Wdgt::Potentiometer(x, y, -1.0, 1.0);
	pitch->setName("pitch");
	draggablePerCC[50] = pitch;
	x += 72.0 + pitch_x_longest;

	Wdgt::Potentiometer *volume = new Wdgt::Potentiometer(x, y, 0.0, 1.0);
	volume->setName("volume");
	draggablePerCC[7] = volume;
	x += 72.0 + pitch_x_longest;

	Wdgt::Potentiometer *bass_v = new Wdgt::Potentiometer(x, y, 0.0, 1.0);
	bass_v->setName("bass volume");
	draggablePerCC[51] = bass_v;
	x += 72.0 + pitch_x_longest + pitch_x_long;

	wdgts.push_back(pitch);
	wdgts.push_back(volume);
	wdgts.push_back(bass_v);

	// Vibrato
	Wdgt::DummyDrawbarBlack *touch    = new Wdgt::DummyDrawbarBlack(x, y);
	touch->setName("touch vibrato");
	x += 40.0 + pitch_x;

	Wdgt::DrawbarBlack *vibrato = new Wdgt::DrawbarBlack(x, y, true);
	vibrato->setName("depth");
	draggablePerCC[12] = vibrato;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarBlack *v_speed = new Wdgt::DrawbarBlack(x, y, true);
	v_speed->setName("speed");
	draggablePerCC[13] = v_speed;
	x += 40.0 + pitch_x_longest;

	wdgts.push_back(touch);
	wdgts.push_back(vibrato);
	wdgts.push_back(v_speed);

	// Bass
	Wdgt::DrawbarWhite *bass_16  = new Wdgt::DrawbarWhite(x, y);
	bass_16->setName("16' b");
	draggablePerCC[14] = bass_16;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarWhite *bass_8   = new Wdgt::DrawbarWhite(x, y);
	bass_8->setName("8' b");
	draggablePerCC[15] = bass_8;
	x += 40.0 + pitch_x;

	Wdgt::SwitchBlack *bass_man = new Wdgt::SwitchBlack(x, y);
	bass_man->setName("bass manual");
	draggablePerCC[23] = bass_man;
	x += 40.0 + pitch_x_longest;

	wdgts.push_back(bass_16);
	wdgts.push_back(bass_8);
	wdgts.push_back(bass_man);

	// Section I
	Wdgt::DrawbarWhite *sect1_16    = new Wdgt::DrawbarWhite(x, y);
	sect1_16->setName("16' i");
	draggablePerCC[2] = sect1_16;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarWhite *sect1_8     = new Wdgt::DrawbarWhite(x, y);
	sect1_8->setName("8' i");
	draggablePerCC[3] = sect1_8;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarWhite *sect1_4     = new Wdgt::DrawbarWhite(x, y);
	sect1_4->setName("4' i");
	draggablePerCC[4] = sect1_4;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarWhite *sect1_2_2p3 = new Wdgt::DrawbarWhite(x, y);
	sect1_2_2p3->setName("2 2/3' i");
	draggablePerCC[5] = sect1_2_2p3;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarWhite *sect1_2     = new Wdgt::DrawbarWhite(x, y);
	sect1_2->setName("2' i");
	draggablePerCC[6] = sect1_2;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarWhite *sect1_1_3p5 = new Wdgt::DrawbarWhite(x, y);
	sect1_1_3p5->setName("1 3/5' i");
	draggablePerCC[8] = sect1_1_3p5;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarWhite *sect1_1     = new Wdgt::DrawbarWhite(x, y);
	sect1_1->setName("1' i");
	draggablePerCC[9] = sect1_1;
	x += 40.0 + pitch_x_long;

	wdgts.push_back(sect1_16);
	wdgts.push_back(sect1_8);
	wdgts.push_back(sect1_4);
	wdgts.push_back(sect1_2_2p3);
	wdgts.push_back(sect1_2);
	wdgts.push_back(sect1_1_3p5);
	wdgts.push_back(sect1_1);

	// Balance & Brightness
	Wdgt::DrawbarBlack *balance    = new Wdgt::DrawbarBlack(x, y, false);
	balance->setName("balance");
	draggablePerCC[16] = balance;
	x += 40.0 + pitch_x_long;

	Wdgt::DrawbarBlack *brightness = new Wdgt::DrawbarBlack(x, y, false);
	brightness->setName("bright");
	draggablePerCC[17] = brightness;
	x += 40.0 + pitch_x_long;

	wdgts.push_back(balance);
	wdgts.push_back(brightness);

	// Section II
	Wdgt::DrawbarWhite *sect2_16 = new Wdgt::DrawbarWhite(x, y);
	sect2_16->setName("16' ii");
	draggablePerCC[18] = sect2_16;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarWhite *sect2_8  = new Wdgt::DrawbarWhite(x, y);
	sect2_8->setName("8' ii");
	draggablePerCC[19] = sect2_8;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarWhite *sect2_4  = new Wdgt::DrawbarWhite(x, y);
	sect2_4->setName("4' ii");
	draggablePerCC[20] = sect2_4;
	x += 40.0 + pitch_x;

	Wdgt::DrawbarWhite *sect2_2  = new Wdgt::DrawbarWhite(x, y);
	sect2_2->setName("2' ii");
	draggablePerCC[21] = sect2_2;
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
	Wdgt::DrawbarGreen *percussion = new Wdgt::DrawbarGreen(x, y);
	percussion->setName("percussion");
	draggablePerCC[22] = percussion;

	wdgts.push_back(percussion);


	// Make the map
	for (std::list<Wdgt::Object *>::iterator i = wdgts.begin(); i !=  wdgts.end(); ) {
		Wdgt::Object *o = (*i);
		wdgtPerLabel[o->getName()] = o;

		++i;
	}

	// Create the ringbuffer and start the timeout thread
	controlChangeRingbuffer = jack_ringbuffer_create(sizeof(MidiCC)*1000);
	if (controlChangeRingbuffer == NULL) {
		throw "Could not create ringbuffer";
	}
	idleSignalTag = g_timeout_add(10, idleTimeout, this);
}

void
YC20UI::setProcessor(mydsp *p)
{
	processor = p;
	processor->buildUserInterface(this);
}

void
YC20UI::addButton(const char* label, float* zone)
{
	bool isNote = true;
	int note;
	int octave = atoi(label+1);

	if (strlen(label) != 2) {
		isNote = false;
	}

	if (octave == 0 && errno == EINVAL) {
		isNote = false;
	}

	switch(label[0]) {
		case 'c': note =  0; break;
		case 'C': note =  1; break;
		case 'd': note =  2; break;
		case 'D': note =  3; break;
		case 'e': note =  4; break;
		case 'f': note =  5; break;
		case 'F': note =  6; break;
		case 'g': note =  7; break;
		case 'G': note =  8; break;
		case 'a': note =  9; break;
		case 'A': note = 10; break;
		case 'b': note = 11; break;
		default: isNote = false;
	}

	if (isNote) {
		//std::cerr << "Connected key " << label << ", octave " << octave << ", note " << note << std::endl;
		//fprintf(stderr, "Connected key %s, octave %d, note %d\n", label, octave, note);
		yc20_keys[octave*12 + note] = zone;
		return;
	}

}

void
YC20UI::addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step)
{
	std::string name(label);

	processorValuePerLabel[name] = zone;

	for (std::list<Wdgt::Object *>::iterator i = wdgts.begin(); i != wdgts.end(); ) {
                Wdgt::Lever *lever = dynamic_cast<Wdgt::Lever *>(*i);
		if (lever != NULL && lever->getName() == name) {
			//std::cerr << "Setting Lever " << lever->getName() << " to " << init << std::endl;
			lever->setValue(init);
		
			return;
		}

		Wdgt::Potentiometer *pot = dynamic_cast<Wdgt::Potentiometer *>(*i);
		if (pot != NULL && pot->getName() == name) {
			//std::cerr << "Setting Pot " << pot->getName() << " to " << init << std::endl;
			pot->setValue(init);

			return;
		}

                ++i;
        }

	//std::cerr << "No control for '" << label << "'" << std::endl;
}

void
YC20UI::addHorizontalSlider(const char* label, float* zone, float init, float min, float max, float step)
{
	addVerticalSlider(label, zone, init, min, max, step);
}

void
YC20UI::size_request(Gtk::Requisition *req)
{
	//std::cerr << "size_request: " << req->width << " x " << req->height << std::endl;

	if (req->width > 1280) {
		req->width = 1280;
	} else if (req->width < 768) {
		req->width = 768;
	}

	ui_scale = (float)req->width/1280.0;

	req->height = 200.0 * ui_scale;
}


void 
YC20UI::size_allocate(Gtk::Allocation &alloc)
{
	//std::cerr << "size_allocate: " << alloc.get_x() << " x " << alloc.get_y() << "  :  " << alloc.get_width() << " x " << alloc.get_height() << std::endl;

	if (alloc.get_width() > 1280) {
		alloc.set_width(1280);
	} else if (alloc.get_width() < 768) {
		alloc.set_width(768);
	}

	ui_scale = (float)alloc.get_width()/1280.0;

	alloc.set_height(200.0 * ui_scale);
}

void
YC20UI::realize()
{
	Gdk::Geometry geom;
	geom.min_width  = 768;
	geom.min_height = 120; // 200.0 * (768.0 / 1280.0);
	geom.max_width  = 1280;
	geom.max_height = 200;

	geom.min_aspect = 1280.0/200.0;
	geom.max_aspect = 1280.0/200.0;

	geom.width_inc  = 64;
	geom.height_inc = 10;

	Gtk::Container *cont = drawingArea.get_toplevel();

	Gtk::Window *window = dynamic_cast<Gtk::Window *>(cont);

	if (window == NULL) {
		std::cerr << "could not find the toplevel window. weird." << std::endl;
		return;
	}

	window->set_geometry_hints(drawingArea, geom, Gdk::HINT_MIN_SIZE | Gdk::HINT_MAX_SIZE | Gdk::HINT_ASPECT | Gdk::HINT_RESIZE_INC);
}

Wdgt::Object *
YC20UI::identifyWdgt(GdkEventMotion *evt)
{
	for (std::list<Wdgt::Object *>::iterator i = wdgts.begin(); i != wdgts.end(); ) {
		Wdgt::Object *obj = *i;

		if (obj->intersectsPoint(evt->x, evt->y))
			return obj;
	
		++i;
	}

	return NULL;
}

void
YC20UI::controlChanged(Wdgt::Draggable *control)
{
	std::map<std::string, float *>::iterator i = processorValuePerLabel.find(control->getName());

	if (i == processorValuePerLabel.end()) {
		std::cerr << "ERROR: could not find processor for control " << control->getName() << std::endl;
		return;
	}

	*(i->second) = control->getValue();
}

bool 
YC20UI::motion_notify_event(GdkEventMotion *evt)
{
	//IDENTIFY_THREAD("motion_notify_event");

	evt->x /= ui_scale;
	evt->y /= ui_scale;

	if (_dragWdgt != NULL) {

		if (!_dragWdgt->setValueFromDrag(_predrag_value, _dragStartY, evt->y)) {
			return true;
		}
		controlChanged(_dragWdgt);
	
		exposeWdgt(_dragWdgt);
		return true;
	}

	Wdgt::Object *newHover = identifyWdgt(evt);
	if (newHover == _hoverWdgt) {
		return true;
	}

	Wdgt::Object *oldHover = _hoverWdgt;

	_hoverWdgt = newHover;

	// Redraw ex-hover-widget
	if (oldHover != NULL) {
		exposeWdgt(oldHover);
	}

	// Redraw new hover-widget
	if (_hoverWdgt != NULL) {
		exposeWdgt(_hoverWdgt);
	}

	return true;
}

bool
YC20UI::button_press_event(GdkEventButton *evt)
{
	//IDENTIFY_THREAD("button_press_event");

	evt->x /= ui_scale;
	evt->y /= ui_scale;

	_buttonPressWdgt = _hoverWdgt;
	Wdgt::Draggable *obj = dynamic_cast<Wdgt::Draggable *>(_buttonPressWdgt);

	if (obj == NULL) {
		return true;
	}


	_predrag_value = obj->getValue();

	_dragWdgt = obj;
	_dragStartX = evt->x;
	_dragStartY = evt->y;

	return true;
}

bool 
YC20UI::button_release_event(GdkEventButton *evt)
{
	//IDENTIFY_THREAD("button_release_event");

	evt->x /= ui_scale;
	evt->y /= ui_scale;

	Wdgt::Object *exposeObj = NULL;

	if (_dragWdgt != NULL) {
		exposeObj = _dragWdgt;
	}

	_buttonPressWdgt = NULL;
	_dragWdgt = NULL;
	_hoverWdgt = NULL;

	if (exposeObj != NULL) {
		exposeWdgt(exposeObj);
	}

	return true;
	
}

gboolean 
YC20UI::idleTimeout(gpointer data)
{
	YC20UI *obj = (YC20UI *)data;
	obj->handleControlChanges();

	return true;
}

void
YC20UI::handleControlChanges()
{
	MidiCC evt(0,0);

	while ( jack_ringbuffer_read(controlChangeRingbuffer, 
	                             (char *)&evt,
	                             sizeof(MidiCC)) == sizeof(MidiCC)) {
		//std::cerr << "CC #" << evt.cc << " = " << evt.value << std::endl;
		doControlChange(&evt);
	}
}

void
YC20UI::queueControlChange(int cc, int value)
{
	MidiCC evt(cc, value);
	int i = jack_ringbuffer_write(controlChangeRingbuffer, (char *)&evt, sizeof(MidiCC));
	if (i != sizeof(MidiCC)) {
		std::cerr << "Ringbuffer full!" << std::endl;
	}
}

YC20UI::~YC20UI()
{
	g_source_remove(idleSignalTag);

	jack_ringbuffer_free(controlChangeRingbuffer);

        for (std::list<Wdgt::Object *>::iterator i = wdgts.begin(); i != wdgts.end(); ) {
                Wdgt::Object *obj = *i;
                delete obj;

                ++i;
        }

	cairo_surface_destroy(_image_background);
}

void
YC20UI::doControlChange(MidiCC *evt)
{
	Wdgt::Draggable *control = draggablePerCC[evt->cc];
	
	if (control == NULL) {
		std::cerr << "No control for CC " << evt->cc << std::endl;
		return;
	}


	float newValue =
		 control->getMinValue() +
		(control->getMaxValue() - control->getMinValue()) * 
		((float)evt->value)/127.0;
	
	control->setValue(newValue);
	controlChanged(control);
	exposeWdgt(control);


}

bool 
YC20UI::exposeWdgt(Wdgt::Object *obj)
{
	GdkEventExpose evt;
	evt.area.x      = obj->x1;
	evt.area.y      = obj->y1;
	evt.area.width  = obj->x2 - evt.area.x;
	evt.area.height = obj->y2 - evt.area.y;

	evt.area.x      *= ui_scale;
	evt.area.y      *= ui_scale;
	evt.area.width  *= ui_scale;
	evt.area.height *= ui_scale;

	expose(&evt);

	for (std::list<Wdgt::Object *>::iterator i = obj->dependents.begin(); i != obj->dependents.end(); ) {
		Wdgt::Object *dep = *i;

		exposeWdgt(dep);

		++i;
	}


	return true;
}


bool 
YC20UI::expose(GdkEventExpose *evt)
{
	bool clip = (evt != NULL);

	//std::cerr << "expose()" << std::endl;

	GdkRectangle physicalArea = evt->area;

	evt->area.x /= ui_scale;
	evt->area.y /= ui_scale;
	evt->area.width  /= ui_scale;
	evt->area.height /= ui_scale;

	_ready_to_draw = true;

	cairo_t *cr;

	cr = gdk_cairo_create(GDK_DRAWABLE(drawingArea.get_window()->gobj()));

	cairo_scale(cr, ui_scale, ui_scale);

	// double-buffer
	cairo_push_group_with_content(cr, CAIRO_CONTENT_COLOR);

	// background
	cairo_set_source_surface(cr, _image_background, 0.0, 0.0);
	// e4080a
	//cairo_set_source_rgb(cr, 228.0/255.0, 8.0/255.0, 10.0/255.0);
	cairo_paint(cr);

	// wdgts
	for (std::list<Wdgt::Object *>::iterator i = wdgts.end(); i != wdgts.begin(); ) {
		--i;

		Wdgt::Object *obj = *i;
	
		if (evt == NULL || obj->intersectsEvent(evt)) {
			obj->drawWidget( (_hoverWdgt == obj), cr);
		}
	}

	// finish drawing (retrieve double-buffer & draw it)
	cairo_pattern_t *bg = cairo_pop_group(cr);

	cairo_copy_page(cr);

	if (clip) {
		cairo_rectangle(cr,
				evt->area.x,     evt->area.y, 
				evt->area.width, evt->area.height);
				//physicalArea.x,     physicalArea.y, 
				//physicalArea.width, physicalArea.height);
		cairo_clip(cr);
	}


	cairo_set_source(cr,bg);
	cairo_paint(cr);

	if (clip) {
		cairo_reset_clip(cr);
	}

	cairo_pattern_destroy(bg);


        cairo_destroy(cr);

	return true;
}

void 
YC20UI::loadConfiguration(std::string fileName)
{
	configFile = fileName;
	loadConfiguration();
}

template<class T>
T fromString(const std::string& s)
{
     std::istringstream stream (s);
     T t;
     stream >> t;
     return t;
}

bool
makeDirIfNotExists(std::string dir)
{
	struct stat s;
	
	if (stat(dir.c_str(), &s) == 0) {
		if (S_ISDIR(s.st_mode)) {
			return true;
		}

		std::cerr << dir << ": already exists but is not a directory" << std::endl;
		return false;
	}

	if (mkdir(dir.c_str(), S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH)) {
		std::cerr << dir << ": could not create the directory" << std::endl;
		return false;
	}

	return true;
}

void
YC20UI::loadConfiguration()
{
	if (configFile == "") {
		configFile  = getenv("HOME");
		configFile += "/.foo-yc20";
	
		std::string dirName(configFile);
		configFile += "/default";

		if (!makeDirIfNotExists(dirName)) {
			std::cerr << dirName << ": not saving or loading default configuration" << std::endl;
			return;
		}

	}

	std::ifstream in(configFile.c_str(), std::ifstream::in);

	if (!in.is_open()) {
		std::cerr << "No config file, yet" << std::endl;
		return;
	}

	std::string line;
	
	while (!in.eof()) {
		getline (in, line);

		size_t i = line.find('=');

		if (i == std::string::npos) {
			continue;
		}

		size_t a = i-1;
		while (a > 0 && (line[a] == ' ' || line[a] == '\t')) --a;
		
		if (a == 0) {
			std::cerr << "ERROR: config line '" << line << "' malformatted" << std::endl;
			continue;
		}

		size_t b = i+1;
		while (b < line.length() && (line[b] == ' ' || line[b] == '\t')) ++b;

		if (b == line.length()) {
			std::cerr << "ERROR: config line '" << line << "' malformatted" << std::endl;
			continue;
		}

		std::string label = line.substr(0, a+1);
		std::string valueStr = line.substr(b);

		float value = fromString<float>(valueStr);

		Wdgt::Object *obj = wdgtPerLabel[label];
		if (obj == NULL) {
			std::cerr << "ERROR: no Wdgt for label '" << label << "' found in config file" << std::endl;
			continue;
		}

		Wdgt::Draggable *drg = dynamic_cast<Wdgt::Draggable *>(obj);
		if (drg == NULL) {
			std::cerr << "ERROR: Wdgt for label '" << label << "' found in config file is not a Draggable" << std::endl;
			continue;

		}
		
		drg->setValue(value);
		controlChanged(drg);
	}

	in.close();
}

void
YC20UI::saveConfiguration()
{
	std::ofstream out(configFile.c_str(), std::ofstream::trunc);

	if (!out.is_open()) {
		std::cerr << "can't write config file " << configFile << std::endl;
		return;
	}

	for (std::list<Wdgt::Object *>::iterator i = wdgts.begin(); i != wdgts.end(); ) {
		Wdgt::Draggable *obj = dynamic_cast<Wdgt::Draggable *>(*i);

		++i;

		// the special case
		if (obj->getName() == "touch vibrato") {
			continue;
		}

		out << obj->getName() << " = " << obj->getValue() << std::endl;

	}

	out.close();
}

int
YC20Jack::process (jack_nframes_t nframes)
{
	float * output_buffer = (float *)jack_port_get_buffer(audio_output_port, nframes);

        void *midi = jack_port_get_buffer(midi_input_port, nframes);
        jack_midi_event_t event;
        jack_nframes_t n = jack_midi_get_event_count(midi);

        if (n > 0) {

            // TODO: frame accuracy
            // TODO: panic button
            for (uint32_t i = 0; i < n; ++i) {
                jack_midi_event_get(&event, midi, i);

                int note = -1;
                float value = 0.0;

                if( ((*(event.buffer) & 0xf0)) == 0x90 ) {
                        /* note on */
                        note = *(event.buffer + 1) - 36;
                        //value = 1.0;
			if ( *(event.buffer + 2) == 0) {
				value = 0.0;
			} else {
				value = 1.0;
			}
                } else if( ((*(event.buffer)) & 0xf0) == 0x80 ) {
                        /* note off */
                        note = *(event.buffer + 1) - 36;
                        value = 0.0;
                } else if ( ((*(event.buffer)) & 0xf0) ==  0xb0) {
                        int cc    = *(event.buffer+1);
                        int value = *(event.buffer+2);

                        // while one shouldn't lock inside an RT thread, the 
                        // other party aquiring this lock is always O(1) in the
                        // locked state

			ui->queueControlChange(cc, value);

		}

                if (note >= 0 && note < 61) {
                        *ui->yc20_keys[note] = value;
                }

            }

        }

	if (ui->processor != NULL) {
	        ui->processor->compute(nframes, NULL, &output_buffer);
	}


	return 0;
}



void
YC20Jack::shutdown()
{
	std::cerr << "Disconnected from jack.. bummer" << std::endl;
	jack_client = NULL;
	midi_input_port = NULL;
	audio_output_port = NULL;

	// TODO: we don't have to quit.. but it's a good idea while
	// there is no way to reconnect
	exit(1);
}

void
YC20Jack::shutdown_callback(void *arg)
{
	YC20Jack *obj = (YC20Jack *)arg;
	obj->shutdown();
}

YC20Jack::YC20Jack(YC20UI *obj)
	: audio_output_port(NULL)
	, midi_input_port(NULL)
	, jack_client(NULL)
	, ui(obj)
{
}

void
YC20Jack::connect()
{
	jack_options_t options = JackNullOption;
	jack_status_t status;

	jack_client = jack_client_open ("Foo YC20", options, &status, NULL);
	if (jack_client == NULL) {

		midi_input_port = NULL;
		audio_output_port = NULL;
		throw "jack_client_open() failed";
	}


	midi_input_port = jack_port_register (jack_client, "midi in",
			JACK_DEFAULT_MIDI_TYPE,
			JackPortIsInput, 0);
	audio_output_port = jack_port_register (jack_client, "output",
			JACK_DEFAULT_AUDIO_TYPE,
			JackPortIsOutput, 0);

	jack_set_process_callback (jack_client, process_callback, this);

	/* tell the JACK server to call `jack_shutdown()' if
	   it ever shuts down, either entirely, or if it
	   just decides to stop calling us.
	 */

	jack_on_shutdown (jack_client, shutdown_callback, this);
}

void
YC20Jack::activate()
{
        if (jack_activate (jack_client)) {
		jack_client_close(jack_client);
		jack_client = NULL;
		midi_input_port = NULL;
		audio_output_port = NULL;

                throw "cannot activate client";
        }
}

int
YC20Jack::process_callback(jack_nframes_t nframes, void *ptr)
{
	YC20Jack *obj = (YC20Jack *)ptr;
	return obj->process(nframes);
}

jack_nframes_t
YC20Jack::getSamplerate()
{
	if (jack_client == NULL) {
		throw "getSamplerate() called at the wrong time";
	}
	return jack_get_sample_rate (jack_client);
}

YC20Jack::~YC20Jack()
{
	if (jack_client != NULL) {
		jack_deactivate(jack_client);

	}
}

int main(int argc, char **argv)
{
	TURNOFFDENORMALS;

        Gtk::Main mymain(argc, argv);

	Gtk::Window *main_window;
	YC20UI      *yc20ui;


	main_window = new Gtk::Window();
	main_window->set_title("Foo YC20");
	main_window->set_default_size(1280, 200);

	yc20ui = new YC20UI();

	main_window->add(*yc20ui->getWidget());

	main_window->show();
	yc20ui->getWidget()->show();

	YC20Jack jack(yc20ui);
	jack.connect();

	mydsp yc20;	
	yc20.init(jack.getSamplerate());

	yc20ui->setProcessor(&yc20);

	if (argc > 1) {
		std::string conf(argv[1]);
		std::cerr << "using configuration file '" << conf << "'" << std::endl;
		yc20ui->loadConfiguration(conf);
	} else {
		yc20ui->loadConfiguration();
	}

	jack.activate();

	// RUN!
        Gtk::Main::run(*main_window);

	yc20ui->processor = NULL;

	// Cleanup
	yc20ui->saveConfiguration();

	delete main_window;
	delete yc20ui;

	return 0;
}
