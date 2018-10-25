/*
    YC20 Oscillator precalc - precalculated oscillators

Copyright 2012 Sampo Savolainen (v2@iki.fi). All rights reserved. Redistribution
and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

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

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <yc20-precalc.h>

#ifndef M_PI
#define M_PI           3.14159265358979323846
#endif

static inline float
tet12(float note) {
	return 440.0 * powf(2.0, note / 12.0);
}

static inline void
generate_sawtooth(float freq, yc20_precalc_osc *p, int note)
{
	// http://en.wikipedia.org/wiki/Sawtooth_wave

	float *buf = p->buf + p->samples * note * 9;

	for (int i = 0; i < p->samples; i++) {
		float t = (float)i / (float)p->samples / freq;

		// start with zero
		buf[i] = 0.0;

		float g = -1.0; // this will represent (-1)^k

		// k'th harmonic
		for (int k = 1; k*freq/2.0 < p->max_frequency; k++) {
			float v;

			v = sin( 2.0 * M_PI * (float)k * freq * t) / (float)k;
			
			buf[i] += g*v;

			g *= -1.0;
		}

		buf[i] *= 2.0 / M_PI;
	}	

	// print out debug
	for (int i = 0; i < p->samples; i++) {
		//printf("%f\n", buf[i]);
	}
}

static inline void
generate_square(float freq, yc20_precalc_osc *p, int note, int div)
{
	float *buf = p->buf + p->samples * ( note * 9 + div + 1);

	// http://en.wikipedia.org/wiki/Square_wave

	for (int i = 0; i < p->samples; i++) {
		float t = (float)i / (float)p->samples / freq;

		// start with zero
		buf[i] = 0.0;

		// k'th harmonic
		for (int k = 1; k*freq/2.0 < p->max_frequency; k++) {
			float v;

			v = sin( 2.0 * M_PI * (2.0 * k - 1.0) * freq * t);

			v /= (2.0 * k - 1.0);

			buf[i] += v;
		}

		buf[i] *= 4.0 / M_PI;
	}	

	// print out debug
	for (int i = 0; i < p->samples; i++) {
		//printf("%f\n", buf[i]);
	}
}

yc20_precalc_osc *
yc20_precalc_oscillators(float samplerate)
{
	yc20_precalc_osc *p =
		(yc20_precalc_osc *)malloc(sizeof(yc20_precalc_osc)); 

	p->samplerate    = samplerate;

	// oscillator_bias = (1 + vibrato + pitch_control * 0.03);
	// '1 - 0.015 - 1.0 * 0.03' = 0.955 rounded down
	p->max_frequency = samplerate / 2.0 * 0.95; 

	// TODO: optimize how many samples are precalculated
	//p->samples       = (int)samplerate / 20;
	p->samples = 1000;

	// allocate buffer, 9Mb at 44.1k
	p->buf = (float *)malloc(sizeof(float) * p->samples * 12 * 9);

	for (int note = 0; note < 12; note++) {
		float freq =  tet12(note+39);
		generate_sawtooth(freq, p, note);

		for (int div = 0; div < 8; div++) {
			freq /= 2.0;
			generate_square(freq, p, note, div);
		}
	}

	return p;
}

void
yc20_destroy_oscillators(yc20_precalc_osc *osc)
{
	free( osc->buf );
	free( osc );
}

int
yc20_save_precalc_osc(yc20_precalc_osc *p, const char *fpath)
{
	FILE *fptr=fopen(fpath, "wb");
	if (fptr == NULL) {
		fprintf(stderr, "Can't open for writing oscillator data cache file!\n");
		return -1;
	}

	if (fwrite(p,sizeof(yc20_precalc_osc),1,fptr)!=1) {
		fprintf(stderr, "Can't write oscillator header to cache file!\n");
		fclose(fptr);
		return -1;
	}

	int buf_size=sizeof(float) * p->samples * 12 * 9;
	if (fwrite(p->buf,buf_size,1,fptr)!=1) {
		fprintf(stderr, "Can't write oscillator data to cache file!\n");
		fclose(fptr);
		return -1;
	}

	fprintf(stderr, "Writing oscillator data to cache file!\n");
	fclose(fptr);
	return 0;
}

yc20_precalc_osc *
yc20_load_precalc_osc(float samplerate, const char *fpath)
{
	FILE *fptr=fopen(fpath, "rb");
	if (fptr == NULL) {
		fprintf(stderr, "Can't open for reading oscillator data cache file!\n");
		return NULL;
	}

	yc20_precalc_osc *p =
		(yc20_precalc_osc *)malloc(sizeof(yc20_precalc_osc)); 

	if (fread(p,sizeof(yc20_precalc_osc),1,fptr)!=1) {
		fprintf(stderr, "Can't read oscillator header from cache file!\n");
		free(p);
		fclose(fptr);
		return NULL;
	}

	if (samplerate!=p->samplerate) {
		fprintf(stderr, "Oscillator data cache file doesn't match sample rate!\n");
		free(p);
		fclose(fptr);
		return NULL;
	}

	int buf_size=sizeof(float) * p->samples * 12 * 9;
	p->buf = (float *)malloc(buf_size);
	if (fread(p->buf,buf_size,1,fptr)!=1) {
		fprintf(stderr, "Can't read oscillator data from cache file!\n");
		free(p->buf);
		free(p);
		fclose(fptr);
		return NULL;
	}
	fprintf(stderr, "Reading oscillator data from cache file!\n");

	fclose(fptr);
	return p;
}

