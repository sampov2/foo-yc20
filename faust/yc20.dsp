/*
    YC-20 emulation in Faust
    Copyright(C) 2010 Sampo Savolainen <v2@iki.fi>

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

declare name      "Foo YC-20 simulation";
declare author    "Sampo Savolainen";
declare license   "GPLv3";
declare copyright "(c)Sampo Savolainen 2009";


import ("music.lib");

import ("rc_filter.dsp");
import ("biquad.dsp");

import ("vibrato.dsp");
import ("precalc_oscillator.dsp");
import ("precalc_divider.dsp");
import ("wave_transformer.dsp");
import ("keyboard.dsp");
import ("mixer.dsp");
import ("percussion.dsp");


pitch_control = hslider("pitch", 0.0, -1.0, 1.0, 0.05);

oscillator_bias = (1 + vibrato + pitch_control * 0.03);

basic_process = oscillator_bias
		: oscillators 
		: dividers
		: wave_transformers
		: keyboard;

