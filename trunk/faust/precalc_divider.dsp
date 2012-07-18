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


dividers = par(i, 12, divider);

divider(note) = _, 
        (divide(1) : _, 
        (divide(2) : _, 
        (divide(3) : _,
        (divide(4) : _,
        (divide(5) : _,
        (divide(6) : _,
        (divide(7) : _, !)
        ))))))
with {
        divide(div) = phase_divisor <: precalc_square_slave(note, div), _;
};

phase_divisor(ph) = slow_accumulator(ph) / 2.0
with {
        slow_accumulator(x) = (prevphase(x) ~ _) + x;

        prevphase(x, whichphase) = select2( (x - x@1) < 0, whichphase, 1-whichphase);


};
