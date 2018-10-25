/*
    Foo-YC20 command line client

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

#include <iostream>
#include <string>
#include <map>

#include <signal.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>

#include <yc20-jack.h>
#include <foo-yc20-os.h>
#include <yc20-precalc.h>

#if defined (__WIN32__)
#include <windows.h>
#define sleep(n) Sleep(1000 * n)
#endif

bool run;

void exit_cli(int sig)
{
	run = false;
	std::cerr << "Exiting" << std::endl;
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
	std::cerr << "Usage: foo-yc20-cli [OPTION] [PRESET_FILE_PATH]"
	L ""
	L	"Run foo-yc20 combo-organ emulator in headless mode. The following options are accepted:"
	L ""
	L	"   -c      Enable console"
	L	"   -f      Force regeneration of oscillator data cache"
	L	"   -g      Generate oscillators data cache and exit"
	L	"   -h      Display this help and exit"
	L	"   -l      Display license info and exit"
	L "" << std::endl;
	#undef L
}

void print_command_help() {
	#define L << std::endl <<
	std::cerr << "Available Commands:"
	L	"   + get_presets : Print preset list"
	L "   + set_preset [PRESET_FILE_PATH] : Load preset from file"
	L "   + help : Print command help"
	L "   + exit : Exit"
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

void print_presets() {
	DIR *dir;
	struct dirent *ent;
	std::string dirName(DEFAULT_CONFIG_DIR);
	if ((dir = opendir (dirName.c_str())) != NULL) {
		while ((ent = readdir (dir)) != NULL) {
			if (ent->d_name[0]=='.') continue; 
			std::cout << ent->d_name << std::endl;
		}
		closedir (dir);
	} else {
		std::cerr << "Could not open presets directory!" << std::endl;
	}
}

void process_command(YC20Jack &processor, char *command) {
	char arg1[128];

	if (strcmp(command, "get_presets\n") == 0) {
		print_presets();
	}
	else if (sscanf(command, "set_preset %127[a-zA-Z0-9_:.#&%%()+-]\n", arg1) == 1) {
		std::string dirName(DEFAULT_CONFIG_DIR);
		std::string fname(arg1);
		std::string fpath=dirName + "/" + fname;
		std::cerr << "Loading preset <" << fpath << ">" << std::endl;
		processor.loadConfiguration(fpath);
	}
	else if (strcmp(command, "help\n") == 0) {
		print_command_help();
	}
	else if (strcmp(command, "exit\n") == 0) {
		exit_cli(0);
	}
	else {
		std::cerr << "Invalid command: Type 'help'." << std::endl;
	}
}

int main(int argc, char **argv)
{
	//CLI message: program name and version
	std::cerr << "Foo-YC20 (CLI) " << get_version() << " (c)Sampo Savolainen 2010" << std::endl << std::endl;

	//Process command line options
	int force_precalc_osc=0;
	int exit_after_precalc_osc=0;
	int enable_console=0;
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
		} else if (arg1=="-c") {
			enable_console=1;
		} else {
			config_fpath=arg1;
		}
		if (config_fpath.empty() and argc > 2) {
			config_fpath=argv[2];
		}
	}

	YC20Jack processor;
	processor.connect();

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

	processor.setDSP(yc20);
	getUserData(yc20)->osc = osc;

	// Load configuration
	if (!config_fpath.empty()) {
		std::cerr << "Using configuration file '" << config_fpath << "'" << std::endl;
		processor.loadConfiguration(config_fpath);
	} else {
		processor.loadConfiguration();
	}

	processor.activate();

	run = true;
	signal(SIGINT, exit_cli);

	if (enable_console) {
		while (run) {
			char line[128];
			std::cout << "> " << std::flush;
			if (fgets(line, sizeof(line), stdin)) {
				process_command(processor, line);
			} else {
				break;
			}
		}
	} else {
		while(run) {
			sleep(100); // ctrl-C interrupts sleep and runs exit_cli() which sets run to false
		}
	}

	processor.deactivate();

	processor.saveConfiguration();
	yc20_destroy_oscillators(osc);

	return 0;
}



