/*
    Foo-YC20 command line client
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
#include <string>
#include <map>

#include <signal.h>

#include <yc20-jack.h>


bool run;

void exit_cli(int sig)
{
	run = false;
	std::cerr << "Exiting" << std::endl;
}

int main(int argc, char **argv)
{
	std::string version(VERSION_STR);
	std::string svn_revision("$Revision: 106 $");

	if (version == "") {
		version = svn_revision.substr(11, svn_revision.find(" $", 11));
		version = "svn-" + version;
	}
	

	std::cerr << "Foo-YC20 (CLI) " << version << " (c)Sampo Savolainen 2010" << std::endl;

	YC20Jack processor;
	processor.connect();

	dsp *yc20 = createDSP();
	yc20->init(processor.getSamplerate());

	processor.setDSP(yc20);

	if (argc > 1) {
		std::string conf(argv[1]);
		std::cerr << "using configuration file '" << conf << "'" << std::endl;
		processor.loadConfiguration(conf);
	} else {
		processor.loadConfiguration();
	}
	processor.activate();

	/* Debug output: print control values
	std::map<std::string, Control *> controls = processor.getControls();
	
	for (std::map<std::string, Control *>::iterator i = controls.begin(); i !=  controls.end(); ++i) {
		Control *c = i->second;

		std::cout << i->first << " = " << *c->getZone() << std::endl;

	}
	*/

	run = true;
	signal(SIGINT, exit_cli);

	while(run) {
		sleep(100); // ctrl-C interrupts sleep and runs exit_cli() which sets run to false
	}

	processor.deactivate();

	processor.saveConfiguration();

	return 0;
}



