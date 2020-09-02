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

#include <yc20-jack.h>
#include <foo-yc20-ui.h>
#include <foo-yc20-os.h>
#include <yc20-precalc.h>

#ifdef __APPLE__
#include <gdk/gdkkeysyms.h>
#include <igemacintegration/gtkosxapplication.h>
#endif

void quit_callback(GtkWidget *widget, gpointer data)
{
	gtk_main_quit();
}

std::string get_version() {
	std::string version(VERSION_STR);
	std::string svn_revision("$Revision: 106 $");

	if (version == "") {
		version = svn_revision.substr(11, svn_revision.find(" $", 11));
		version = "svn-" + version;
	}

	return version;
}

void print_usage() {
	#define L << std::endl <<
	std::cerr << "Usage: foo-yc20-cli [OPTION] | [PRESET_FILE_PATH]"
	L ""
	L	"Run foo-yc20 combo-organ emulator in headless mode. The following options are accepted:"
	L ""
	L	"   -f      Force regeneration of oscillator data cache"
	L	"   -g      Generate oscillators data cache and exit"
	L	"   -h      Display this help and exit"
	L	"   -l      Display license info and exit"
	L "" << std::endl;
	#undef L
}

void print_license() {
	#define L << std::endl <<
	std::cerr << "Copyright 2010-2011 Sampo Savolainen (v2@iki.fi). All rights reserved."
	L	"Redistribution and use in source and binary forms, with or without modification,"
	L	"are permitted provided that the following conditions are met:"
	L	"   1. Redistributions of source code must retain the above copyright notice,"
	L	"      this list of conditions and the following disclaimer."
	L	"   2. Redistributions in binary form must reproduce the above copyright notice,"
	L	"      this list of conditions and the following disclaimer in the documentation"
	L	"      and/or other materials provided with the distribution."
	L	"   3. Neither the name Foo YC20, its author nor the names of its contributors"
	L	"      may be used to endorse or promote products derived from this software"
	L	"      without specific prior written permission."
	L	"THIS SOFTWARE IS PROVIDED BY SAMPO SAVOLAINEN ``AS IS'' AND ANY EXPRESS OR"
	L	"IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF"
	L	"MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT"
	L	"SHALL SAMPO SAVOLAINEN OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,"
	L	"INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT"
	L	"LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR"
	L	"PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF"
	L	"LIABILITY, WHETHERIN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE"
	L	"OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF"
	L	"ADVISEDOF THE POSSIBILITY OF SUCH DAMAGE."
	L "" << std::endl;
	#undef L
}

int main(int argc, char **argv)
{
	gtk_init(&argc, &argv);

#ifdef __APPLE__
	GtkOSXApplication *osxApp = (GtkOSXApplication*) 
		g_object_new(GTK_TYPE_OSX_APPLICATION, NULL);
#endif

	//CLI message: program name and version
	std::cerr << "Foo-YC20 (GUI) " << get_version() << " (c)Sampo Savolainen 2010" << std::endl << std::endl;

	//Process command line options
	int force_precalc_osc=0;
	int exit_after_precalc_osc=0;
	std::string config_fpath;
	if (argc > 1) {
		std::string arg1(argv[1]);
		if (arg1=="-h") {
			print_usage();
			return 0;
		} else if (arg1=="-l") {
			print_license();
			return 0;
		} else if (arg1=="-f") {
			force_precalc_osc=1;
		} else if (arg1=="-g") {
			force_precalc_osc=1;
			exit_after_precalc_osc=1;
		} else {
			config_fpath=arg1;
		}
		if (config_fpath.empty() and argc > 2) {
			config_fpath=argv[2];
		}
	}

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

	yc20_precalc_osc *osc=NULL;
	//Try loading oscillator data from cache file... 
	std::string fpath=DEFAULT_CONFIG_DIR + "/.precalc_osc.dat";
	if (!force_precalc_osc) {
		osc=yc20_load_precalc_osc(processor.getSamplerate(),fpath.c_str());
	}
	//If not, precalculate and save to cache ...
	if (!osc) {
		osc = yc20_precalc_oscillators(processor.getSamplerate());
		yc20_save_precalc_osc(osc,fpath.c_str());
	}
	//If only cache regeneration option => exit
	if (exit_after_precalc_osc) {
		yc20_destroy_oscillators(osc);
		return 0;
	}

	yc20->init(processor.getSamplerate());

	// Connect DSP & processor
	processor.setDSP(yc20);
	getUserData(yc20)->osc = osc;

	// Create UI
	yc20ui = new YC20UI(&processor);
	processor.setUI(yc20ui);

	gtk_container_add( GTK_CONTAINER(main_window), yc20ui->getWidget());

	gtk_widget_show_all(main_window);

	// Load configuration
	if (!config_fpath.empty()) {
		std::cerr << "Using configuration file '" << config_fpath << "'" << std::endl;
		processor.loadConfiguration(config_fpath);
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

	yc20_destroy_oscillators(osc);

	// Cleanup
	processor.saveConfiguration();

	// as processor goes out of scope, it will take care of the UI

	return 0;
}



