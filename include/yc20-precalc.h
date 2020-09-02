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

#ifndef _PRECALC_H
#define _PRECALC_H

#include <math.h>

#include "faust-dsp.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct yc20_precalc_osc {
	float samplerate;

	// max frequency is slightly below nyquist to avoid aliasing when
	// vibrato or pitch control increases the base frequency
	float max_frequency;

	// How many samples wide each oscillator is
	int samples;

	// contains samples for each oscillator, each oscillator contains
	// one full wave.
	// the buffer is aligned as:
	//  C  master (sawtooth), C  div1, C div2, ... C div8
	//  C# master (sawtooth), C# div1, ..
	//  ..
	//  h  master (sawtooth), h  div1, h div2, ...
	float *buf;
} yc20_precalc_osc;

yc20_precalc_osc *
yc20_precalc_oscillators(float samplerate);

#define yc20_get_sample(phase, note, div)       \
    _yc20_get_sample(this, (phase), (note), (div))

static inline float
_yc20_get_sample(dsp *x, float phase, int note, int div)
{
	yc20_precalc_osc *osc = getUserData(x)->osc;

	int offset = osc->samples * ( note * 9 + div);
	return osc->buf[ offset + (int)roundf( (float)osc->samples * phase) ];
}

void
yc20_destroy_oscillators(yc20_precalc_osc *osc);

int
yc20_save_precalc_osc(yc20_precalc_osc *p, const char *fpath);

yc20_precalc_osc *
yc20_load_precalc_osc(float samplerate, const char *fpath);

#ifdef __cplusplus
}
#endif

#endif /* _PRECALC_H */

