/*
    Foo-YC20 UI (header)

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

#include <sys/types.h>
#include <math.h>
#include <stdio.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

inline float calculate_polyblep_valimaki_huovilainen(float t)
{
	if (t>0) {
		return (t - (t*t)/2.0f - 0.5f);
	} else {
		return ((t*t)/2.0f + t + 0.5f);
	}
}

#define polyblep_it(x) calculate_polyblep_valimaki_huovilainen((x))


inline float saw_polyblep_fast(float ph, float ph_, float ph__, float q)
{
	float mod = 0.0f;

	// the sample before the discontinuity
	if (ph_ > ph) {
		mod = polyblep_it( (ph_ - 1.0f) / q );
	} else
	// the sample after the discontinuity
	if (ph__ > ph_) {
		mod = polyblep_it( ph_ / q );
	}

	return mod * 2.0f;
}

inline float square_polyblep_fast(float ph, float ph_, float ph__, float q)
{
	float mod = 0.0f;

	// ** start-of-phase discontinuity
	// the sample before the discontinuity
	if (ph_ > ph) {
		mod = polyblep_it( (ph_ - 1.0f) / q );
	} else
	// the sample after the discontinuity
	if (ph__ > ph_) {
		mod = polyblep_it( ph_ / q );
	} else
	// ** mid-phase discontinuity
	// the sample before the discontinuity
	if (ph_ < 0.5f && 0.5f <= ph) {
		mod = -polyblep_it( (ph_ - 0.5f) / q );
	} else
	// the sample after the discontinuity
	if (ph__ < 0.5f && 0.5f <= ph_) {
		mod = -polyblep_it( (ph_ - 0.5f) / q );
	}

	return mod * 2.0f;
}

inline float square_polyblep_precalc(float ph, float ph_, float ph__, float precalc)
{
	if (precalc == 0.0f) {
		return 0.0f;
	}

	// ** start-of-phase discontinuity
	if (ph__ > ph) {
		return precalc;
	} else
	// ** mid-phase discontinuity
	if (ph__ < 0.5f && 0.5f <= ph) {
		return -precalc;
	}
	return 0.0f;
}


#ifdef __cplusplus
}
#endif
				
