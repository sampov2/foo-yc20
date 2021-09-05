/*
    YC-20 oscillator emulation in Faust
    Copyright(C) 2012 Sampo Savolainen <v2@iki.fi>

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


tet12(note) = 440 * 2.0^((note-12) / 12.0);

saw_gain = 1.950; // +5.8dB


// Main oscillator section
// offset values picked by random, but kept static here to provide repeatable results
oscillators(bias) = 
        (tet12( 0 + 39) * bias * apply_realism(1.001383) : new_sawtooth_master(0)), // C
        (tet12( 1 + 39) * bias * apply_realism(1.003796) : new_sawtooth_master(1)), // C#
        (tet12( 2 + 39) * bias * apply_realism(0.999484) : new_sawtooth_master(2)), // D
        (tet12( 3 + 39) * bias * apply_realism(1.001135) : new_sawtooth_master(3)), // D#
        (tet12( 4 + 39) * bias * apply_realism(1.000064) : new_sawtooth_master(4)), // E
        (tet12( 5 + 39) * bias * apply_realism(0.998889) : new_sawtooth_master(5)), // F
        (tet12( 6 + 39) * bias * apply_realism(0.997199) : new_sawtooth_master(6)), // F#
        (tet12( 7 + 39) * bias * apply_realism(0.997294) : new_sawtooth_master(7)), // G
        (tet12( 8 + 39) * bias * apply_realism(1.000562) : new_sawtooth_master(8)), // G#
        (tet12( 9 + 39) * bias * apply_realism(1.002464) : new_sawtooth_master(9)), // A
        (tet12(10 + 39) * bias * apply_realism(0.996945) : new_sawtooth_master(10)), // Bb
        (tet12(11 + 39) * bias * apply_realism(1.003118) : new_sawtooth_master(11))  // B
with {
        apply_realism(offset) = select2( realism_control > (1.0/6.0), 1.0, offset);
};

// deprecated
precalc_sawtooth_master(note, freq) = (phase ~ _) <: note, (precalc_sawtooth_slave(note)), _
with {
        q = float(freq)/float(SR);
        phase = +(q) : modone;
};

import("oscillators.lib");

new_sawtooth_master(note, freq) = (polyblep_saw(freq*2))
with {
        polyblep_saw(f) = (freq, naive - polyblep(Q , phase), phase)
        with {
                phase = phasor(1, f);
                naive = 2 * phase - 1;
                Q = f / ma.SR;
        };
};

new_square_slave(f, phase) = polyblep_square_slave 
with {
        polyblep_square_slave = naive - polyblep(Q, phase) + polyblep(Q, ma.modulo(phase + 0.5, 1))
        with {
                naive = 2 * (phase * 2 : int) - 1;
                Q = f / ma.SR;
        };
};

precalc_sawtooth_slave(note, phase) = yc20_get_sample(phase, note, 0) * saw_gain;

precalc_square_slave(note, div, phase) = yc20_get_sample(phase, note, 0);

yc20_get_sample = ffunction( float yc20_get_sample(float, int, int), "yc20-precalc.h", "");


/*
realism_control = 0.001;
SR = 44100;

process = oscillators(0);
*/
