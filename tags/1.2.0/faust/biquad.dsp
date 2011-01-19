/*
 *  Copyright (C) 2009 Sampo Savolainen, Steve Harris, Eli Brandt
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 */

/* Filter math adapted from swh-plugins by Steve Harris who in turn
   credits Eli Brandt */

//import("math.lib");

M_LN2 = 0.69314718055994530942;

biquad_basics_alpha(bw, omega, sn, cs) =
	(omega, sn, cs, sn * sinh( M_LN2 / 2.0 * bw * omega / sn) );

biquad_basics(samplerate, bw, cutoff) =
	(2.0 * PI * cutoff / samplerate)
	<: ( _ <: (_, sin) , cos) // omega, sn, cs
	: biquad_basics_alpha(bw);


// High-pass filter:

biquad_hp_params_a0r(omega,sn,cs,alpha) =
	(omega, sn, cs, alpha, 1.0 / ( 1.0 + alpha));

biquad_hp_params_coeffs(omega, sn, cs, alpha, a0r) =
	( a0r * ( 1.0 + cs ) * 0.5  // b0
	, a0r * (-1.0 - cs )        // b1
	, a0r * ( 1.0 + cs ) * 0.5  // b2
	, a0r * ( 2.0 * cs )        // a1
	, a0r * (alpha - 1.0) );    // a2
	  

// bw = "octaves per 6dB attenuation, I think" (swh Sep 28 2009)
biquad_hp_params(samplerate, bw, cutoff) =
	  biquad_basics(samplerate, bw, cutoff) 
	: biquad_hp_params_a0r
	: biquad_hp_params_coeffs;

// Low-pass filter:

biquad_lp_params_a0r(omega,sn,cs,alpha) =
	(omega, sn, cs, alpha, 1.0 / ( 1.0 + alpha));

biquad_lp_params_coeffs(omega, sn, cs, alpha, a0r) =
	( a0r * ( 1.0 - cs ) * 0.5  // b0
	, a0r * ( 1.0 - cs )        // b1
	, a0r * ( 1.0 - cs ) * 0.5  // b2
	, a0r * ( 2.0 * cs )        // a1
	, a0r * (alpha - 1.0) );    // a2
	  


biquad_lp_params(samplerate, bw, cutoff) =
	  biquad_basics(samplerate, bw, cutoff) 
	: biquad_lp_params_a0r
	: biquad_lp_params_coeffs;


// y = previous result
biquad_run(y, b0, b1, b2, a1, a2, x) =
	(b0 * x@0) + (b1 * x@1) + (b2 * x@2) +
	             (a1 * y@0) + (a2 * y@1);


biquad_hp(cutoff,x) = (biquad_hp_params(SR, 3.0, cutoff), x) : biquad_run ~ _;

biquad_lp(cutoff,x) = (biquad_lp_params(SR, 3.0, cutoff), x) : biquad_run ~ _;




