/*
    Foo-YC20 Jack client (header)

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

#ifndef _FOO_YC20_JACK_H
#define _FOO_YC20_JACK_H

#include <foo-yc20.h>

#include <jack/jack.h>
#include <jack/midiport.h>
#include <jack/ringbuffer.h>



class YC20Jack : public YC20Processor
{
	public:
		YC20Jack();
		~YC20Jack();

		void connect();
		void activate();
		void deactivate();
		void shutdown();

		jack_nframes_t getSamplerate();		

		int process(jack_nframes_t);

		// MIDI callback (only for the standalone version)
		void doControlChange(int cc, int value);


	private:

		static void shutdown_callback(void *);
		static void process_callback(void *);

		static int process_callback(jack_nframes_t, void *);

		jack_port_t   *audio_output_port;
		jack_port_t   *treb_output_port;
		jack_port_t   *bass_output_port;
		jack_port_t   *midi_input_port;
		jack_client_t *jack_client;

		Control *controlPerCC[127];
};


#endif /* _FOO_YC20_JACK_H */
