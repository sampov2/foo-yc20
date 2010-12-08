/*
    Foo-YC20 UI (header)
    Copyright (C) 2009  Sampo Savolainen <v2@iki.fi>

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


inline float square_wave(float f)
{
	f -= 0.5f;

	uint32_t *int_ptr = (uint32_t *)&f;
	uint32_t i = *int_ptr;


	i &= (1 << 31) ;
	i = i >> 31;

	f = (float)i;

	f -= 0.5f;
	f *= 2.0f;
	
	return f;
}


#ifdef __cplusplus
}
#endif
				
