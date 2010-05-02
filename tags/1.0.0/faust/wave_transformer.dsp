/*
    YC-20 wave transformer circuit implementation in Faust
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
wave_transformers = 
	wave_transformer_I1,
	wave_transformer_I1,
	wave_transformer_I1,
	wave_transformer_I1,
	wave_transformer_I2,
	wave_transformer_I2,
	wave_transformer_I2,
	wave_transformer_I2,
	wave_transformer_I3,
	wave_transformer_I3,
	wave_transformer_I3,
	wave_transformer_I3;

wave_transformer(C6, C5, C4, C3, C2, C1, C0) = (
	passive_hp(bus_bar_impedance, 0.039),
	(passive_lp(input_impedance,C6) : passive_hp(bus_bar_impedance, 0.039)),
	(passive_lp(input_impedance,C5) : passive_hp(bus_bar_impedance, 0.039)),
	(passive_lp(input_impedance,C4) : passive_hp(bus_bar_impedance, 0.039)),
	(passive_lp(input_impedance,C3) : passive_hp(bus_bar_impedance, 0.039)),
	(passive_lp(input_impedance,C2) : passive_hp(R2, 0.039)),
	(passive_lp(input_impedance,C1) : passive_hp(R1, 0.039)),
	(passive_lp(input_impedance,C0) : passive_hp(R0, 0.039))
	)
with {
	input_impedance = 10000;

	bus_bar_impedance   = 180000.0 + 1.0/( 1.0/10000.0 + 1.0/100000.0 );
	// bus bar 16 has a 15K resistor instead of 10K, but we can't go to that level
	// of detail, at least yet.

	// bus bar impedance affects the high pass cutoff point
	R2 = 1.0 / ( 1.0/bus_bar_impedance + 1.0/180000.0 );
	R1 = 1.0 / ( 1.0/bus_bar_impedance + 1.0/82000.0  );
	R0 = 1.0 / ( 1.0/bus_bar_impedance + 1.0/56000.0  );
	
};


//                                      C6      C5      C4     C3     C2     C1     C0
// C, C#, D, D#
wave_transformer_I1 = wave_transformer(0.0047, 0.01,   0.022, 0.047, 0.082, 0.12,  0.15);

// E, F, F#, G
wave_transformer_I2 = wave_transformer(0.0039, 0.0082, 0.018, 0.039, 0.068, 0.1,   0.15);

// G#, A, A#, B
wave_transformer_I3 = wave_transformer(0.0027, 0.0056, 0.012, 0.027, 0.056, 0.082, 0.12);


