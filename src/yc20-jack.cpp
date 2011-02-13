/*
    Foo-YC20 Jack client

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

#include <iostream>

#include <string.h>

#include <yc20-jack.h>

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
			//std::cerr << "setting note " << note << " to " << value << std::endl;
			*(keys[note]) = value;
		}


	}

	if (processor != NULL) {
		amount = nframes - at_frame;
		//std::cerr << "process " << amount << " frames: " << at_frame << " .. " << (at_frame + amount -1) << std::endl;
		//std::cerr << " .. compute(" << amount << ", NULL, " << output_buffer << std::endl;
		processor->compute(amount, NULL, output_buffer);
	}

	/*
	for (int i = 0; i < nframes; i++) {
		if (output_buffer[0][i] != 0.0) {
			std::cerr << "there's output" << std::endl;
			break;
		}
	}
	*/

	return 0;
}

void
YC20Jack::doControlChange(int cc, int value)
{
	// Globals
	if ((cc == 123 || cc == 120) && 
            value == 0) {
		// panic button
		std::cerr << "PANIC!" << std::endl;
		for (int i = 0; i<61; ++i) {
			*(keys[i]) = 0.0;
		}
		return;
	}

	Control *control = controlPerCC[cc];

	if (control == 0) {
		//std::cerr << "No control for CC " << cc << std::endl;
		return;
	}

	control->setValueFromCC(value);

	if (ui != 0) {
		ui->queueExpose(cc);
	}
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

YC20Jack::YC20Jack()
	: audio_output_port(NULL)
	, treb_output_port(NULL)
	, bass_output_port(NULL)
	, midi_input_port(NULL)
	, jack_client(NULL)
{
	memset(controlPerCC, 0, sizeof(Control *) * 127);

	for (std::map<std::string, Control *>::iterator i = controlPerLabel.begin(); i !=  controlPerLabel.end(); ++i) {
		Control *c = i->second;
		controlPerCC[c->getCC()] = c;
	}
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

	// jack 1.9.6 crashes when the shutdown handler is set. this is a dirty
	// fix until jack is corrected.
#ifndef __WIN32__
	jack_on_shutdown (jack_client, shutdown_callback, this);
#endif
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

void
YC20Jack::deactivate()
{
	jack_deactivate (jack_client);
	jack_client_close (jack_client);
	jack_client = NULL;
	midi_input_port = NULL;
	audio_output_port = NULL;
	treb_output_port = NULL;
	bass_output_port = NULL;
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



