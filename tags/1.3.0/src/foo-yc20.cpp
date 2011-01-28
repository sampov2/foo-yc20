/*
    Foo-YC20 UI
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

#include <iostream>
#include <fstream>
#include <cstring>
#include <cerrno>
#include <list>
#include <set>

#include <stdlib.h>


#include <foo-yc20.h>
#include <faust-dsp.h>

void
YC20Processor::addButton(const char* label, float* zone)
{
	bool isNote = true;
	int note;
	int octave = atoi(label+1);

	if (strlen(label) != 2) {
		isNote = false;
	}

	if (octave == 0 && errno == EINVAL) {
		isNote = false;
	}

	switch(label[0]) {
		case 'c': note =  0; break;
		case 'C': note =  1; break;
		case 'd': note =  2; break;
		case 'D': note =  3; break;
		case 'e': note =  4; break;
		case 'f': note =  5; break;
		case 'F': note =  6; break;
		case 'g': note =  7; break;
		case 'G': note =  8; break;
		case 'a': note =  9; break;
		case 'A': note = 10; break;
		case 'b': note = 11; break;
		default: isNote = false;
	}

	if (isNote) {
		//std::cerr << "Connected key " << label << ", octave " << octave << ", note " << note << std::endl;
		keys[octave*12 + note] = zone;
		return;
	}

}

void
YC20Processor::addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step)
{
	std::string name(label);

	Control *tmp = controlPerLabel[name];

	if (tmp == 0) {
		std::cerr << "ERROR: no Control for DSP label " << name << std::endl;
		return;
	}

	tmp->setZone(zone);
}

void
YC20Processor::addHorizontalSlider(const char* label, float* zone, float init, float min, float max, float step)
{
	addVerticalSlider(label, zone, init, min, max, step);
}

YC20Processor::YC20Processor()
	: processor(0)
	, ui(0)
{
	controlPerLabel["pitch"]       = new Control(5, -1.0, 1.0);
	controlPerLabel["volume"]      = new Control(7);
	controlPerLabel["bass volume"] = new Control(51);
	
	controlPerLabel["realism"]     = new Control(52);
	controlPerLabel["depth"]       = new Control(12);
	controlPerLabel["speed"]       = new Control(13);

	controlPerLabel["16' b"]       = new Control(14);
	controlPerLabel["8' b"]        = new Control(15);
	controlPerLabel["bass manual"] = new Control(23);

	controlPerLabel["16' i"]       = new Control(2);
	controlPerLabel["8' i"]        = new Control(3);
	controlPerLabel["4' i"]        = new Control(4);
	controlPerLabel["2 2/3' i"]    = new Control(5);
	controlPerLabel["2' i"]        = new Control(6);
	controlPerLabel["1 3/5' i"]    = new Control(8);
	controlPerLabel["1' i"]        = new Control(9);

	controlPerLabel["balance"]     = new Control(16);
	controlPerLabel["bright"]      = new Control(17);

	controlPerLabel["16' ii"]      = new Control(18);
	controlPerLabel["8' ii"]       = new Control(19);
	controlPerLabel["4' ii"]       = new Control(20);
	controlPerLabel["2' ii"]       = new Control(21);

	controlPerLabel["percussive"]  = new Control(22);
}

YC20Processor::~YC20Processor()
{
	for (std::map<std::string, Control *>::iterator i = controlPerLabel.begin(); i !=  controlPerLabel.end(); ++i) {
		delete i->second;
	}

	if (ui != 0) {
		delete ui;
		ui = 0;
	}

	if (processor != 0) {
		delete processor;
		processor = 0;
	}
}


void
YC20Processor::setDSP(dsp *dsp)
{
	processor = dsp;
	processor->buildUserInterface(this);
}

