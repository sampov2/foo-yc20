/*
    Foo-YC20 dsp wrapper
    Copyright (C) 2010  Sampo Savolainen <v2@iki.fi>

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

#include <math.h>
//#include "faust-dsp.h"
#define max(x,y) fmax(x,y)
#define min(x,y) fmin(x,y)

#include "../gen/foo-yc20-dsp.cpp"


dsp *createDSP()
{
	mydsp *ret = new mydsp();

	return ret;
}


