/*
    Foo-YC20 UI
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

#include <jack/jack.h>

#include <foo-yc20.h>
#include <foo-yc20-ui.h>

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
		std::string installed_file = PREFIX_STR SHARE_DIR YC20_PNG_DIR + file;
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



YC20UI::YC20UI(YC20Processor *parent)
	: yc20(parent)
	, ui_scale(1.0)
	, _hoverWdgt(NULL)
	, _dragWdgt(NULL)
	, _buttonPressWdgt(NULL)
{
	memset(draggablePerCC, 0, sizeof(Wdgt::Draggable *)*127);
	_image_background = Wdgt::load_png("background.png");

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

	Control *c;

	// Pitch, volume & bass volume
	c = yc20->getControl("pitch");
	Wdgt::Potentiometer *pitch  = new Wdgt::Potentiometer(x, y, c->getMin(), c->getMax(), potentiometerImage);
	pitch->setName("pitch");
	draggablePerCC[c->getCC()] = pitch;
	x += 72.0 + pitch_x_longest;

	c = yc20->getControl("volume");
	Wdgt::Potentiometer *volume = new Wdgt::Potentiometer(x, y, c->getMin(), c->getMax(), potentiometerImage);
	volume->setName("volume");
	draggablePerCC[c->getCC()] = volume;
	x += 72.0 + pitch_x_longest;

	c = yc20->getControl("bass volume");
	Wdgt::Potentiometer *bass_v = new Wdgt::Potentiometer(x, y, c->getMin(), c->getMax(), potentiometerImage);
	bass_v->setName("bass volume");
	draggablePerCC[c->getCC()] = bass_v;
	x += 72.0 + pitch_x_longest + pitch_x_long;

	wdgts.push_back(pitch);
	wdgts.push_back(volume);
	wdgts.push_back(bass_v);

	// Vibrato section
	// Instead of the touch vibrato, we have a realism switch
	c = yc20->getControl("realism");
	Wdgt::Drawbar *realism = new Wdgt::Drawbar(x, y, true, drawbarBlackImages);
	realism->setName("realism");
	draggablePerCC[c->getCC()] = realism;
	x += 40.0 + pitch_x;
	
	/*
	Wdgt::DummyDrawbarBlack *touch    = new Wdgt::DummyDrawbarBlack(x, y);
	touch->setName("touch vibrato");
	*/

	c = yc20->getControl("depth");
	Wdgt::Drawbar *vibrato = new Wdgt::Drawbar(x, y, true, drawbarBlackImages);
	vibrato->setName("depth");
	draggablePerCC[c->getCC()] = vibrato;
	x += 40.0 + pitch_x;

	c = yc20->getControl("speed");
	Wdgt::Drawbar *v_speed = new Wdgt::Drawbar(x, y, true, drawbarBlackImages);
	v_speed->setName("speed");
	draggablePerCC[c->getCC()] = v_speed;
	x += 40.0 + pitch_x_longest;

	wdgts.push_back(realism);
	//wdgts.push_back(touch);
	wdgts.push_back(vibrato);
	wdgts.push_back(v_speed);

	// Bass
	c = yc20->getControl("16' b");
	Wdgt::Drawbar *bass_16  = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	bass_16->setName("16' b");
	draggablePerCC[c->getCC()] = bass_16;
	x += 40.0 + pitch_x;

	c = yc20->getControl("8' b");
	Wdgt::Drawbar *bass_8   = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	bass_8->setName("8' b");
	draggablePerCC[c->getCC()] = bass_8;
	x += 40.0 + pitch_x;

	c = yc20->getControl("bass manual");
	Wdgt::Switch *bass_man = new Wdgt::Switch(x, y, drawbarBlackImages);
	bass_man->setName("bass manual");
	draggablePerCC[c->getCC()] = bass_man;
	x += 40.0 + pitch_x_longest;

	wdgts.push_back(bass_16);
	wdgts.push_back(bass_8);
	wdgts.push_back(bass_man);

	// Section I
	c = yc20->getControl("16' i");
	Wdgt::Drawbar *sect1_16    = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_16->setName("16' i");
	draggablePerCC[c->getCC()] = sect1_16;
	x += 40.0 + pitch_x;

	c = yc20->getControl("8' i");
	Wdgt::Drawbar *sect1_8     = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_8->setName("8' i");
	draggablePerCC[c->getCC()] = sect1_8;
	x += 40.0 + pitch_x;

	c = yc20->getControl("4' i");
	Wdgt::Drawbar *sect1_4     = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_4->setName("4' i");
	draggablePerCC[c->getCC()] = sect1_4;
	x += 40.0 + pitch_x;

	c = yc20->getControl("2 2/3' i");
	Wdgt::Drawbar *sect1_2_2p3 = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_2_2p3->setName("2 2/3' i");
	draggablePerCC[c->getCC()] = sect1_2_2p3;
	x += 40.0 + pitch_x;

	c = yc20->getControl("2' i");
	Wdgt::Drawbar *sect1_2     = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_2->setName("2' i");
	draggablePerCC[c->getCC()] = sect1_2;
	x += 40.0 + pitch_x;

	c = yc20->getControl("1 3/5' i");
	Wdgt::Drawbar *sect1_1_3p5 = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_1_3p5->setName("1 3/5' i");
	draggablePerCC[c->getCC()] = sect1_1_3p5;
	x += 40.0 + pitch_x;

	c = yc20->getControl("1' i");
	Wdgt::Drawbar *sect1_1     = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect1_1->setName("1' i");
	draggablePerCC[c->getCC()] = sect1_1;
	x += 40.0 + pitch_x_long;

	wdgts.push_back(sect1_16);
	wdgts.push_back(sect1_8);
	wdgts.push_back(sect1_4);
	wdgts.push_back(sect1_2_2p3);
	wdgts.push_back(sect1_2);
	wdgts.push_back(sect1_1_3p5);
	wdgts.push_back(sect1_1);

	// Balance & Brightness
	c = yc20->getControl("balance");
	Wdgt::Drawbar *balance    = new Wdgt::Drawbar(x, y, false, drawbarBlackImages);
	balance->setName("balance");
	draggablePerCC[c->getCC()] = balance;
	x += 40.0 + pitch_x_long;

	c = yc20->getControl("bright");
	Wdgt::Drawbar *brightness = new Wdgt::Drawbar(x, y, false, drawbarBlackImages);
	brightness->setName("bright");
	draggablePerCC[c->getCC()] = brightness;
	x += 40.0 + pitch_x_long;

	wdgts.push_back(balance);
	wdgts.push_back(brightness);

	// Section II
	c = yc20->getControl("16' ii");
	Wdgt::Drawbar *sect2_16 = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect2_16->setName("16' ii");
	draggablePerCC[c->getCC()] = sect2_16;
	x += 40.0 + pitch_x;

	c = yc20->getControl("8' ii");
	Wdgt::Drawbar *sect2_8  = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect2_8->setName("8' ii");
	draggablePerCC[c->getCC()] = sect2_8;
	x += 40.0 + pitch_x;

	c = yc20->getControl("4' ii");
	Wdgt::Drawbar *sect2_4  = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect2_4->setName("4' ii");
	draggablePerCC[c->getCC()] = sect2_4;
	x += 40.0 + pitch_x;

	c = yc20->getControl("2' ii");
	Wdgt::Drawbar *sect2_2  = new Wdgt::Drawbar(x, y, true, drawbarWhiteImages);
	sect2_2->setName("2' ii");
	draggablePerCC[c->getCC()] = sect2_2;
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
	c = yc20->getControl("percussive");
	Wdgt::Drawbar *percussive = new Wdgt::Drawbar(x, y, true, drawbarGreenImages);
	percussive->setName("percussive");
	draggablePerCC[c->getCC()] = percussive;

	wdgts.push_back(percussive);


	// Make the map
	for (std::list<Wdgt::Object *>::iterator i = wdgts.begin(); i !=  wdgts.end(); ++i) {
		Wdgt::Object *o = (*i);
		wdgtPerLabel[o->getName()] = o;
		
		// Connect zones (DSP memory locations for parameters)
		Wdgt::Draggable *draggable = dynamic_cast<Wdgt::Draggable *>(o);
		if (draggable != NULL) {
			Control *control = yc20->getControl(o->getName());
			draggable->setZone(control->getZone());
		}
		
	}


	// Create the ringbuffer and start the timeout thread
	exposeRingbuffer = jack_ringbuffer_create(sizeof(Wdgt::Object *)*1000);
	if (exposeRingbuffer == NULL) {
		throw "Could not create ringbuffer";
	}
	idleSignalTag = g_timeout_add(10, idleTimeout, this);

}

void
YC20UI::updateControlsFromState()
{
	for (std::list<Wdgt::Object *>::iterator i = wdgts.begin(); i != wdgts.end(); ++i) {
		Wdgt::Object *o = (*i);
		Wdgt::Draggable *draggable = dynamic_cast<Wdgt::Draggable *>(o);
		if (draggable != NULL) {
			draggable->setValue( *draggable->getZone() );
		}
	}
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
	obj->handleExposeEvents();

	return true;
}

void
YC20UI::handleExposeEvents()
{
	Wdgt::Object *obj;

	while ( jack_ringbuffer_read(exposeRingbuffer, 
	                             (char *)&obj,
	                             sizeof(Wdgt::Object *)) == sizeof(Wdgt::Object *)) {
		exposeWdgt(obj);
	}
}

void
YC20UI::queueExpose(int cc)
{
	Wdgt::Object *obj = draggablePerCC[cc];
	if (obj == NULL) {
		std::cerr << "Tried to queue an expose event for a non-existent control" << std::endl;
		return;
	}

	int i = jack_ringbuffer_write(exposeRingbuffer, (char *)&obj, sizeof(Wdgt::Object *));
	if (i != sizeof(Wdgt::Object *)) {
		std::cerr << "Ringbuffer full!" << std::endl;
	}
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

	GdkRectangle physicalArea = evt->area;

	evt->area.x /= ui_scale;
	evt->area.y /= ui_scale;
	evt->area.width  /= ui_scale;
	evt->area.height /= ui_scale;

	evt->area.width++;
	evt->area.height++;

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
				evt->area.x,       evt->area.y, 
				evt->area.width+1, evt->area.height+1);
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

YC20UI::~YC20UI()
{
	g_source_remove(idleSignalTag);

	jack_ringbuffer_free(exposeRingbuffer);

        for (std::list<Wdgt::Object *>::iterator i = wdgts.begin(); i != wdgts.end(); ) {
                Wdgt::Object *obj = *i;
                delete obj;

                ++i;
        }

	cairo_surface_destroy(_image_background);

	for (int i = 0; i < 4; i++) {
		cairo_surface_destroy(drawbarBlackImages[i]);
		cairo_surface_destroy(drawbarWhiteImages[i]);
		cairo_surface_destroy(drawbarGreenImages[i]);
	}

	cairo_surface_destroy(potentiometerImage);

}

