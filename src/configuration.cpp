/*
    Foo-YC20 configuration file operations

Copyright 2010-2011 Sampo Savolainen (v2@iki.fi). All rights reserved.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice, 
      this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.

   3. Neither the name Foo YC20, its author, nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY SAMPO SAVOLAINEN ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
SHALL SAMPO SAVOLAINEN OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHERIN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISEDOF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include <list>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

#include <foo-yc20.h>
#include <foo-yc20-os.h>

void 
YC20Processor::loadConfiguration(std::string &fileName)
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

#ifndef _WIN32
	if (mkdir(dir.c_str(), S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH)) {
#else
	if (mkdir(dir.c_str())) {
#endif
		std::cerr << dir << ": could not create the directory" << std::endl;
		return false;
	}

	return true;
}

void
YC20Processor::loadConfiguration()
{
	if (configFile == "") {
	
		std::string dirName(DEFAULT_CONFIG_DIR);
		configFile = dirName + "/default";

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

		out << i->first << " = " << *c->getZone() << std::endl;

	}

	out.close();
}



