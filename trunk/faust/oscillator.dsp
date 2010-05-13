/*
    YC-20 oscillator emulation in Faust
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

modone = _ <: select2( >(1.0), _, -(1.0));

tet12(note) = 440 * 2.0^(note / 12.0);

saw_gain = 1.950; // +5.8dB

// Main oscillator section
// offset values picked by random, but kept static here to provide repeatable results
oscillators(bias) = 
	(tet12( 0 + 39) * bias * apply_realism(1.001383) : polyblep_sawtooth_master), // C
	(tet12( 1 + 39) * bias * apply_realism(1.003796) : polyblep_sawtooth_master), // C#
	(tet12( 2 + 39) * bias * apply_realism(0.999484) : polyblep_sawtooth_master), // D
	(tet12( 3 + 39) * bias * apply_realism(1.001135) : polyblep_sawtooth_master), // D#
	(tet12( 4 + 39) * bias * apply_realism(1.000064) : polyblep_sawtooth_master), // E
	(tet12( 5 + 39) * bias * apply_realism(0.998889) : polyblep_sawtooth_master), // F
	(tet12( 6 + 39) * bias * apply_realism(0.997199) : polyblep_sawtooth_master), // F#
	(tet12( 7 + 39) * bias * apply_realism(0.997294) : polyblep_sawtooth_master), // G
	(tet12( 8 + 39) * bias * apply_realism(1.000562) : polyblep_sawtooth_master), // G#
	(tet12( 9 + 39) * bias * apply_realism(1.002464) : polyblep_sawtooth_master), // A
	(tet12(10 + 39) * bias * apply_realism(0.996945) : polyblep_sawtooth_master), // Bb
	(tet12(11 + 39) * bias * apply_realism(1.003118) : polyblep_sawtooth_master)  // B
with {
	apply_realism(offset) = select2( realism_control > (1.0/6.0), 1.0, offset);
};


polyblep_sawtooth_master(f) = (phase ~ _) <: (polyblep_sawtooth_slave), _
with {
	freq = f;

	q = float(freq)/float(SR);
	phase = +(q) : modone;
};

polyblep_sawtooth_slave(phase) = create_polyblep_antialias <: (_, ( +(naive_sawtooth') : *(saw_gain) ) )
with {

	q = modone(phase - phase' + 1);

	naive_sawtooth = (phase-0.5)*(-2);

	create_polyblep_antialias = blep_fast(phase, phase', phase'', q);

	blep_fast = ffunction (float saw_polyblep_fast   (float, float, float, float), "polyblep.cpp", "");
};

polyblep_square_slave(antialias,phase) = naive_square' : apply_precalc_polyblep
with {

	q = modone(phase - phase' + 1);

	naive_square = (phase < 0.5) : -(0.5) : *(2);

	apply_precalc_polyblep = +(blep_precalc(phase, phase', phase'', antialias));

	blep_precalc = ffunction (float square_polyblep_precalc   (float, float, float, float), "polyblep.cpp", "");
};

