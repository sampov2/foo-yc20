/*
    Foo-YC20 Jack client
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

#include "foo-yc20.h"

#include <jack/jack.h>
#include <jack/midiport.h>
#include <jack/ringbuffer.h>


class YC20Jack : public YC20Processor
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

		jack_port_t   *audio_output_port;
		jack_port_t   *treb_output_port;
		jack_port_t   *bass_output_port;
		jack_port_t   *midi_input_port;
		jack_client_t *jack_client;

};


int
YC20Jack::process (jack_nframes_t nframes)
{
	TURNOFFDENORMALS;

	float *output_buffer[3];

	output_buffer[0] = (float *)jack_port_get_buffer(audio_output_port, nframes);
	output_buffer[1] = (float *)jack_port_get_buffer(treb_output_port, nframes);
	output_buffer[2] = (float *)jack_port_get_buffer(bass_output_port, nframes);

	void *midi = jack_port_get_buffer(midi_input_port, nframes);
	jack_midi_event_t event;
	jack_nframes_t n = jack_midi_get_event_count(midi);

	jack_nframes_t at_frame = 0;
	jack_nframes_t amount;

	for (uint32_t i = 0; i < n; ++i) {
		jack_midi_event_get(&event, midi, i);

		// Reminder: by removing this block, per frame accracy is disabled safely
		if (processor != NULL) {
			// process up to the event
			amount = event.time - at_frame;

			//std::cerr << "process " << amount << " frames: " << at_frame << " .. " << (at_frame + amount -1) << std::endl;
			//std::cerr << " .. compute(" << amount << ", NULL, " << output_buffer << std::endl;
			processor->compute(amount, NULL, output_buffer);
			output_buffer[0] += amount;
			output_buffer[1] += amount;
			output_buffer[2] += amount;
			at_frame += amount;
		}

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

			doControlChange(cc, value);

		}

		if (note >= 0 && note < 61) {
			*(keys[note]) = value;
		}


	}

	if (processor != NULL) {
		amount = nframes - at_frame;
		//std::cerr << "process " << amount << " frames: " << at_frame << " .. " << (at_frame + amount -1) << std::endl;
		//std::cerr << " .. compute(" << amount << ", NULL, " << output_buffer << std::endl;
		processor->compute(amount, NULL, output_buffer);
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
	, treb_output_port(NULL)
	, bass_output_port(NULL)
	, midi_input_port(NULL)
	, jack_client(NULL)
{
	ui = obj;
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
		treb_output_port = NULL;
		bass_output_port = NULL;
		throw "jack_client_open() failed";
	}


	midi_input_port = jack_port_register (jack_client, "midi in",
			JACK_DEFAULT_MIDI_TYPE,
			JackPortIsInput, 0);
	audio_output_port = jack_port_register (jack_client, "output",
			JACK_DEFAULT_AUDIO_TYPE,
			JackPortIsOutput, 0);
	treb_output_port  = jack_port_register (jack_client, "treble",
			JACK_DEFAULT_AUDIO_TYPE,
			JackPortIsOutput, 0);
	bass_output_port  = jack_port_register (jack_client, "bass",
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
		treb_output_port = NULL;
		bass_output_port = NULL;

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
        Gtk::Main mymain(argc, argv);

	std::string version(VERSION_STR);
	std::string svn_revision("$Revision: 106 $");

	if (version == "") {
		version = svn_revision.substr(11, svn_revision.find(" $", 11));
		version = "svn-" + version;
	}
	

	std::cerr << "Foo-YC20 " << version << " (c)Sampo Savolainen 2010" << std::endl;

	Gtk::Window *main_window;
	YC20UI      *yc20ui;


	main_window = new Gtk::Window();
	main_window->set_title("Foo YC20");
	main_window->set_default_size(1280, 200);

	YC20Jack jack(yc20ui);
	jack.connect();

/*
	dsp yc20;	
	yc20.init(jack.getSamplerate());
*/

	dsp *yc20 = createDSP();

	jack.setDSP(yc20);

	jack.activate();

/*
	while(1) {
		sleep(100);
	}

*/
	yc20ui = new YC20UI(&jack);

	main_window->add(*yc20ui->getWidget());

	main_window->show();
	yc20ui->getWidget()->show();




	if (argc > 1) {
		std::string conf(argv[1]);
		std::cerr << "using configuration file '" << conf << "'" << std::endl;
		yc20ui->loadConfiguration(conf);
	} else {
		yc20ui->loadConfiguration();
	}


	// RUN!
        Gtk::Main::run(*main_window);

	// TODO: this might be needed..
	//jack->processor = NULL;

	// Cleanup
	yc20ui->saveConfiguration();

	delete main_window;
	delete yc20ui;
	delete yc20;

	return 0;
}



