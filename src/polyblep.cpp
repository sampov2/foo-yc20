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

inline float calculate_polyblep_valimaki_huovilainen(float t)
{
	if (t>0) {
		return (t - (t*t)/2.0 - 0.5);
	} else {
		return ((t*t)/2.0 + t + 0.5);
	}
}

#define polyblep_it(x) calculate_polyblep_valimaki_huovilainen((x))


inline float saw_polyblep_fast(float ph, float ph_, float ph__, float q, float x)
{
	float mod = 0.0;

	// the sample before the discontinuity
	if (ph_ > ph) {
		mod = polyblep_it( (ph_ - 1.0) / q );
	} else
	// the sample after the discontinuity
	if (ph__ > ph_) {
		mod = polyblep_it( ph_ / q );
	}

	return x + mod * 2.0;
}

inline float square_polyblep_fast(float ph, float ph_, float ph__, float q, float x)
{
	float mod = 0.0;

	// ** start-of-phase discontinuity
	// the sample before the discontinuity
	if (ph_ > ph) {
		mod = polyblep_it( (ph_ - 1.0) / q );
	} else
	// the sample after the discontinuity
	if (ph__ > ph_) {
		mod = polyblep_it( ph_ / q );
	} else
	// ** mid-phase discotinuity
	// the sample before the discontinuity
	if (ph_ < 0.5 && 0.5 <= ph) {
		mod = -polyblep_it( (ph_ - 0.5) / q );
	} else
	// the sample after the discontinuity
	if (ph__ < 0.5 && 0.5 <= ph_) {
		mod = -polyblep_it( (ph_ - 0.5) / q );
	}

	return x + mod * 2.0;
}

inline float square_wave(float f)
{
	f -= 0.5;

	uint32_t *int_ptr = (uint32_t *)&f;
	uint32_t i = *int_ptr;


	i &= (1 << 31) ;
	i = i >> 31;

	f = (float)i;

	f -= 0.5;
	f *= 2.0;
	
	return f;
}


