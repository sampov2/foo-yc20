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

#include <yc20-jack.h>
#include <foo-yc20-ui.h>
#include <foo-yc20-os.h>

void quit_callback(GtkWidget *widget, gpointer data)
{
	gtk_main_quit();
}

int main(int argc, char **argv)
{
	gtk_init(&argc, &argv);

	std::string version(VERSION_STR);
	std::string svn_revision("$Revision: 106 $");

	if (version == "") {
		version = svn_revision.substr(11, svn_revision.find(" $", 11));
		version = "svn-" + version;
	}
	

	std::cerr << "Foo-YC20 " << version << " (c)Sampo Savolainen 2010" << std::endl;

	GtkWidget *main_window;
	YC20UI    *yc20ui;

	main_window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title( GTK_WINDOW(main_window), "Foo YC20");
	gtk_window_set_default_size( GTK_WINDOW(main_window), 1280, 200);

	g_signal_connect (main_window, "destroy", G_CALLBACK(quit_callback), NULL);

	// Connect to Jack
	YC20Jack processor;
	processor.connect();

	// Create DSP (& retrieve samplerate)
	dsp *yc20 = createDSP();
	yc20->init(processor.getSamplerate());

	// Connect DSP & processor
	processor.setDSP(yc20);

	// Create UI
	yc20ui = new YC20UI(&processor);
	processor.setUI(yc20ui);

	gtk_container_add( GTK_CONTAINER(main_window), yc20ui->getWidget());

	gtk_widget_show_all(main_window);


	// Load configuration
	if (argc > 1) {
		std::string conf(argv[1]);
		std::cerr << "using configuration file '" << conf << "'" << std::endl;
		processor.loadConfiguration(conf);
	} else {
		processor.loadConfiguration();
	}

	// Set UI state as per current state
	yc20ui->updateControlsFromState();


	// Activate Jack & start
	processor.activate();


	// RUN!
	gtk_main();

	processor.deactivate();

	// Cleanup
	processor.saveConfiguration();

	// as processor goes out of scope, it will take care of the UI

	return 0;
}



