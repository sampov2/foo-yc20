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

#include <yc20-jack.h>
#include <foo-yc20-os.h>

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

int main(int argc, char **argv)
{
	std::string version(VERSION_STR);
	std::string svn_revision("$Revision: 106 $");

	if (version == "") {
		version = svn_revision.substr(11, svn_revision.find(" $", 11));
		version = "svn-" + version;
	}
	

#define L << std::endl <<
	std::cerr << "Foo-YC20 (CLI) " << version 
	L	"Copyright 2010-2011 Sampo Savolainen (v2@iki.fi). All rights reserved."
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
	L	"ADVISEDOF THE POSSIBILITY OF SUCH DAMAGE." << std::endl;
#undef L

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

	run = true;
	signal(SIGINT, exit_cli);

	while(run) {
		sleep(100); // ctrl-C interrupts sleep and runs exit_cli() which sets run to false
	}

	processor.deactivate();

	processor.saveConfiguration();

	return 0;
}



