/*
    Foo-YC20 configuration file operations
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

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include <list>

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include "foo-yc20.h"

void 
YC20Processor::loadConfiguration(std::string fileName)
{
	configFile = fileName;
	loadConfiguration();
}

template<class T>
T fromString(const std::string& s)
{
     std::istringstream stream (s);
     T t;
     stream >> t;
     return t;
}

bool
makeDirIfNotExists(std::string dir)
{
	struct stat s;
	
	if (stat(dir.c_str(), &s) == 0) {
		if (S_ISDIR(s.st_mode)) {
			return true;
		}

		std::cerr << dir << ": already exists but is not a directory" << std::endl;
		return false;
	}

	if (mkdir(dir.c_str(), S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH)) {
		std::cerr << dir << ": could not create the directory" << std::endl;
		return false;
	}

	return true;
}

void
YC20Processor::loadConfiguration()
{
	if (configFile == "") {
		configFile  = getenv("HOME");
		configFile += "/.foo-yc20";
	
		std::string dirName(configFile);
		configFile += "/default";

		if (!makeDirIfNotExists(dirName)) {
			std::cerr << dirName << ": not saving or loading default configuration" << std::endl;
			return;
		}

	}

	std::ifstream in(configFile.c_str(), std::ifstream::in);

	if (!in.is_open()) {
		std::cerr << "No config file, yet" << std::endl;
		return;
	}

	std::string line;
	
	while (!in.eof()) {
		getline (in, line);

		size_t i = line.find('=');

		if (i == std::string::npos) {
			continue;
		}

		size_t a = i-1;
		while (a > 0 && (line[a] == ' ' || line[a] == '\t')) --a;
		
		if (a == 0) {
			std::cerr << "ERROR: config line '" << line << "' malformatted" << std::endl;
			continue;
		}

		size_t b = i+1;
		while (b < line.length() && (line[b] == ' ' || line[b] == '\t')) ++b;

		if (b == line.length()) {
			std::cerr << "ERROR: config line '" << line << "' malformatted" << std::endl;
			continue;
		}

		std::string label = line.substr(0, a+1);
		std::string valueStr = line.substr(b);

		float value = fromString<float>(valueStr);

		Control *obj = controlPerLabel[label];
		if (obj == NULL) {
			std::cerr << "ERROR: no Control for label '" << label << "' found in config file" << std::endl;
			continue;
		}

		*obj->getZone() = value;

		if (ui != NULL) {
			ui->queueExpose(obj->getCC());
		}
		

		/*
		Wdgt::Object *obj = wdgtPerLabel[label];
		if (obj == NULL) {
			std::cerr << "ERROR: no Wdgt for label '" << label << "' found in config file" << std::endl;
			continue;
		}

		Wdgt::Draggable *drg = dynamic_cast<Wdgt::Draggable *>(obj);
		if (drg == NULL) {
			std::cerr << "ERROR: Wdgt for label '" << label << "' found in config file is not a Draggable" << std::endl;
			continue;

		}
		
		// "assertion" to make sure configuration sets not only the Wdgt value, but
		// also the DSP pointer
		if (drg->getZone() == NULL) {
			throw "Huh? DSP zone for " + drg->getName() + " not set up right??";
		}
		drg->setValue(value);

		*/
	}

	in.close();
}

void
YC20Processor::saveConfiguration()
{
	std::ofstream out(configFile.c_str(), std::ofstream::trunc);

	if (!out.is_open()) {
		std::cerr << "can't write config file " << configFile << std::endl;
		return;
	}

	for (std::map<std::string, Control *>::iterator i = controlPerLabel.begin(); i !=  controlPerLabel.end(); ++i) {
		Control *c = i->second;

		/* TODO: is this really, really needed? 
		// the special case
		if (c->getName() == "touch vibrato") {
			continue;
		}
		*/

		out << i->first << " = " << *c->getZone() << std::endl;

	}
/*
	for (std::list<Wdgt::Object *>::iterator i = wdgts.begin(); i != wdgts.end(); ) {
		Wdgt::Draggable *obj = dynamic_cast<Wdgt::Draggable *>(*i);

		++i;

		// the special case
		if (obj->getName() == "touch vibrato") {
			continue;
		}

		out << obj->getName() << " = " << obj->getValue() << std::endl;

	}
*/
	out.close();
}



