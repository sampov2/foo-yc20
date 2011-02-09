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

   3. Neither the name of Foo YC20 nor the names of its contributors may be 
      used to endorse or promote products derived from this software without
      specific prior written permission.

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

	run = true;
	signal(SIGINT, exit_cli);

	while(run) {
		sleep(100); // ctrl-C interrupts sleep and runs exit_cli() which sets run to false
	}

	processor.deactivate();

	processor.saveConfiguration();

	return 0;
}



