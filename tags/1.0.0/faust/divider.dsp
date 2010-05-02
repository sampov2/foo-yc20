/*
    YC-20 divider circuit implementation in Faust
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

// 8 dividers => 9 octaves

dividers = par(i, 12, divider);

divider = _, 
	(divide : _, 
	(divide : _, 
	(divide : _,
	(divide : _,
	(divide : _,
	(divide : _,
	(divide : _, !)
	))))))
with {
	divide = phase_divisor <: polyblep_square_slave, _;
};

phase_divisor(ph) = slow_accumulator(ph) / 2.0
with {
        slow_accumulator(x) = (prevphase(x) ~ _) + x;

        prevphase(x, whichphase) = select2( (x - x@1) < 0, whichphase, 1-whichphase);


};

