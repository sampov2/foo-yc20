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

tet12(note) = 440 * 2.0^(note / 12.0);

saw_gain = 1.950; // +5.8dB


// Main oscillator section
// offset values picked by random, but kept static here to provide repeatable results
oscillators(bias) = 
        (tet12( 0 + 39) * bias * apply_realism(1.001383) : precalc_sawtooth_master(0)), // C
        (tet12( 1 + 39) * bias * apply_realism(1.003796) : precalc_sawtooth_master(1)), // C#
        (tet12( 2 + 39) * bias * apply_realism(0.999484) : precalc_sawtooth_master(2)), // D
        (tet12( 3 + 39) * bias * apply_realism(1.001135) : precalc_sawtooth_master(3)), // D#
        (tet12( 4 + 39) * bias * apply_realism(1.000064) : precalc_sawtooth_master(4)), // E
        (tet12( 5 + 39) * bias * apply_realism(0.998889) : precalc_sawtooth_master(5)), // F
        (tet12( 6 + 39) * bias * apply_realism(0.997199) : precalc_sawtooth_master(6)), // F#
        (tet12( 7 + 39) * bias * apply_realism(0.997294) : precalc_sawtooth_master(7)), // G
        (tet12( 8 + 39) * bias * apply_realism(1.000562) : precalc_sawtooth_master(8)), // G#
        (tet12( 9 + 39) * bias * apply_realism(1.002464) : precalc_sawtooth_master(9)), // A
        (tet12(10 + 39) * bias * apply_realism(0.996945) : precalc_sawtooth_master(10)), // Bb
        (tet12(11 + 39) * bias * apply_realism(1.003118) : precalc_sawtooth_master(11))  // B
with {
        apply_realism(offset) = select2( realism_control > (1.0/6.0), 1.0, offset);
};


precalc_sawtooth_master(note, freq) = (phase ~ _) <: note, (precalc_sawtooth_slave(note)), _
with {
        q = float(freq)/float(SR);
        phase = +(q) : modone;
};


precalc_sawtooth_slave(note, phase) = yc20_get_sample(phase, note, 0) * saw_gain;

precalc_square_slave(note, div, phase) = yc20_get_sample(phase, note, 0);

yc20_get_sample = ffunction( float yc20_get_sample(float, int, int), "yc20-precalc.h", "");


/*
realism_control = 0.001;
SR = 44100;

process = oscillators(0);
*/
