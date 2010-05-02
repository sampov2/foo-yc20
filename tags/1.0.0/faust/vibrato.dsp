/*
    YC-20 vibrato circuit emulation in Faust
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

// Vibrato is from about 5hz to 8hz

vibrato = vibrato_osc * vibrato_amount
with {
	control_speed  = vgroup("[2]vibrato", hslider("[2]speed", 0.0, 0.0, 1.0, 0.2));
	control_amount = vgroup("[2]vibrato", hslider("[1]depth", 0.0, 0.0, 1.0, 0.2));

	// how many samples is each full waveform
	wavelength(freq) = (float)(freq)/(float)(SR);

	// keeps the relative position of a waveform
	position_at_wave(freq,c) = wavelength(freq) + c;

	// square wave so half of the waveform is at 1.0 and the other half at -1.0
	sine_wave_oscillator(freq) = (position_at_wave(freq) ~ modone) : *(2*PI) : sin;

	vibrato_osc = sine_wave_oscillator(5.0 + 3*control_speed);

	vibrato_amount = 0.0001 + 0.0149 * control_amount;
};
