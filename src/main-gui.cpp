/*
    Foo-YC20 GUI client

Copyright 2010-2011 Sampo Savolainen (v2@iki.fi). All rights reserved.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice, 
      this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY SAMPO SAVOLAINEN ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
SHALL SAMPO SAVOLAINEN OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OFSUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHERIN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISEDOF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <yc20-jack.h>
#include <foo-yc20-ui.h>
#include <foo-yc20-os.h>

#ifdef __APPLE__
#include <gdk/gdkkeysyms.h>
#include <igemacintegration/gtkosxapplication.h>
#endif

void quit_callback(GtkWidget *widget, gpointer data)
{
	gtk_main_quit();
}

int main(int argc, char **argv)
{
	gtk_init(&argc, &argv);

#ifdef __APPLE__
	GtkOSXApplication *osxApp = (GtkOSXApplication*) 
		g_object_new(GTK_TYPE_OSX_APPLICATION, NULL);
#endif

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

#ifdef __APPLE__
	GtkWidget *menu_bar;
	menu_bar = gtk_menu_bar_new();
	/* Note: the default OSX menu bar already includes a 'quit' entry 
	 * connected to 'gtk_main_quit' by default. so we're fine.
	 */
	gtk_osxapplication_set_menu_bar(osxApp, GTK_MENU_SHELL(menu_bar));
#endif

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
#ifdef __APPLE__
	gtk_osxapplication_ready(osxApp);
#endif
	gtk_main();

	processor.deactivate();

	// Cleanup
	processor.saveConfiguration();

	// as processor goes out of scope, it will take care of the UI

	return 0;
}



