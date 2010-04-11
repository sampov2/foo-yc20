/*
    Foo-YC20 UI (header)
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

#ifndef _FOO_YC20_H
#define _FOO_YC20_H

#ifdef __SSE__
    #include <xmmintrin.h>
    #ifdef __SSE2__
        #define TURNOFFDENORMALS { _mm_setcsr(_mm_getcsr() | 0x8040); }
    #else
        #define TURNOFFDENORMALS { _mm_setcsr(_mm_getcsr() | 0x8000); }
    #endif
#else
    #define TURNOFFDENORMALS 
#endif

class MidiCC 
{
public:
        MidiCC(int a, int b) { cc = a; value = b;}

        int cc;
        int value;
};

class YC20UI : public UI
{
	public:
		YC20UI();

		~YC20UI();

		void setProcessor(mydsp *);

		Gtk::Widget *getWidget() { return &drawingArea; }

		// from Faust UI
		void addButton(const char* label, float* zone);
		void addToggleButton(const char* label, float* zone) {};
		void addCheckButton(const char* label, float* zone) {};
		void addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step);
		void addHorizontalSlider(const char* label, float* zone, float init, float min, float max, float step);
		void addNumEntry(const char* label, float* zone, float init, float min, float max, float step) {};

		void openFrameBox(const char* label) {};
		void openTabBox(const char* label) {};
		void openHorizontalBox(const char* label) {};
		void openVerticalBox(const char* label) {};
		void closeBox() {};

		void declare(float* zone, const char* key, const char* value) {};

		// Other things
		void controlChanged(Wdgt::Draggable *);

		void queueControlChange(int cc, int value);

		void loadConfiguration(std::string file);
		void loadConfiguration();
		void saveConfiguration();

		float *yc20_keys[61];
		mydsp *processor;
	private:


		float ui_scale;

		std::string configFile;

		Gtk::DrawingArea drawingArea;

		// Gtk essentials
		void size_request(Gtk::Requisition *);
		void size_allocate(Gtk::Allocation &);
		bool exposeWdgt(Wdgt::Object *);
		bool expose(GdkEventExpose *);

		void realize();


		bool motion_notify_event(GdkEventMotion *);
		bool button_press_event(GdkEventButton *);
		bool button_release_event(GdkEventButton *);

		bool draw_queue();

		Wdgt::Object *identifyWdgt(GdkEventMotion *);

		Wdgt::Object *_hoverWdgt;
		Wdgt::Draggable *_dragWdgt;
		Wdgt::Object *_buttonPressWdgt;

		int _dragStartX;
		int _dragStartY;
		float _predrag_value;

		std::list<Wdgt::Object *> wdgts;

		std::map<std::string, Wdgt::Object *> wdgtPerLabel;
		std::map<std::string, float *> processorValuePerLabel;
		Wdgt::Draggable *draggablePerCC[127];

		cairo_surface_t *_image_background;

		bool _ready_to_draw;

		// Idle-timeout redraw things

		jack_ringbuffer_t *controlChangeRingbuffer;
		static gboolean idleTimeout(gpointer );
		void handleControlChanges();
		gint idleSignalTag;

		void doControlChange(MidiCC *);
};

class YC20Jack;

class YC20Jack
{
	public:
		YC20Jack(YC20UI *);
		~YC20Jack();

		void connect();
		void activate();
		void shutdown();

		jack_nframes_t getSamplerate();		

		int process(jack_nframes_t);

	private:

		static void shutdown_callback(void *);
		static void process_callback(void *);

		static int process_callback(jack_nframes_t, void *);
		YC20UI *thisui;

		jack_port_t   *audio_output_port;
		jack_port_t   *midi_input_port;
		jack_client_t *jack_client;
};

#endif /* _FOO_YC20_H */
