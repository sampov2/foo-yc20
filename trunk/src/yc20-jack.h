/*
    Foo-YC20 Jack client (header)
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

#ifndef _FOO_YC20_JACK_H
#define _FOO_YC20_JACK_H

#include "foo-yc20.h"

#include <jack/jack.h>
#include <jack/midiport.h>
#include <jack/ringbuffer.h>



class YC20Jack : public YC20Processor
{
	public:
		YC20Jack(YC20Exposable *);
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


#endif /* _FOO_YC20_JACK_H */
