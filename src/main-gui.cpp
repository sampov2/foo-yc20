/*
    Foo-YC20 GUI client
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

#include "yc20-jack.h"
#include "foo-yc20-ui.h"


int main(int argc, char **argv)
{
        Gtk::Main mymain(argc, argv);

	std::string version(VERSION_STR);
	std::string svn_revision("$Revision: 106 $");

	if (version == "") {
		version = svn_revision.substr(11, svn_revision.find(" $", 11));
		version = "svn-" + version;
	}
	

	std::cerr << "Foo-YC20 " << version << " (c)Sampo Savolainen 2010" << std::endl;

	Gtk::Window *main_window;
	YC20UI      *yc20ui;


	main_window = new Gtk::Window();
	main_window->set_title("Foo YC20");
	main_window->set_default_size(1280, 200);

	// Connect to Jack
	YC20Jack processor(yc20ui);
	processor.connect();

	// Create DSP (& retrieve samplerate)
	dsp *yc20 = createDSP();
	yc20->init(processor.getSamplerate());

	// Connect DSP & processor
	processor.setDSP(yc20);

	// Create UI
	yc20ui = new YC20UI(&processor);

	main_window->add(*yc20ui->getWidget());

	main_window->show();
	yc20ui->getWidget()->show();


	// Load configuration
	if (argc > 1) {
		std::string conf(argv[1]);
		std::cerr << "using configuration file '" << conf << "'" << std::endl;
		processor.loadConfiguration(conf);
	} else {
		processor.loadConfiguration();
	}

	// Activate Jack & start
	processor.activate();


	// RUN!
        Gtk::Main::run(*main_window);

	// Cleanup
	processor.saveConfiguration();

	delete main_window;
	delete yc20ui;
	delete yc20;

	return 0;
}



