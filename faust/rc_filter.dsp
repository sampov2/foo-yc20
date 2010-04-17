/*
    Digitan RC-filter implementation in Faust
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

    Thanks to Torben Hohn and
    http://www.dsplog.com/2007/12/02/digital-implementation-of-rc-low-pass-filter/
*/


// Note that float precision might limit how well these work..

passive_lp(resistance, uf) = (filter ~ _)
with {
	// simplified to minimize floating point precision problems
	filter(prev,x) = prev + (( x - prev) * 1000000) / (resistance * uf * SR);

	// readable implementation
	//filter(prev,x) = prev + k * ( x - prev);
	//k = 1 / RC * dt;
	//RC = resistance * uf / 1000000;
	//dt = 1 / SR;
};

passive_hp(resistance, uf) = (filter ~ _)
with {

	filter(prev,x) = alpha * prev + alpha * (x - x');

	alpha = RC / (RC + dt);

	RC = resistance * uf / 1000000;
	dt = 1 / SR;
};
