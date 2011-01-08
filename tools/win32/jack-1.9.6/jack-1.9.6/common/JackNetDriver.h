/*
Copyright (C) 2001 Paul Davis
Copyright (C) 2008 Romain Moret at Grame

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*/

#ifndef __JackNetDriver__
#define __JackNetDriver__

#include "JackAudioDriver.h"
#include "JackNetInterface.h"

#ifdef JACK_MONITOR
#include "JackFrameTimer.h"
#endif

namespace Jack
{
    /**
    \Brief This class describes the Net Backend
    */

    class JackNetDriver : public JackAudioDriver, public JackNetSlaveInterface
    {
        private:
            //jack data
            jack_port_id_t* fMidiCapturePortList;
            jack_port_id_t* fMidiPlaybackPortList;
	   
            //transport
            int fLastTransportState;
            int fLastTimebaseMaster;
  
            //monitoring
	#ifdef JACK_MONITOR
            JackGnuPlotMonitor<float>* fNetTimeMon;
            jack_time_t fRcvSyncUst;
	#endif

            bool Initialize();
            void FreeAll();
            
            int AllocPorts();
            int FreePorts();

            //transport
            void EncodeTransportData();
            void DecodeTransportData();

            JackMidiBuffer* GetMidiInputBuffer ( int port_index );
            JackMidiBuffer* GetMidiOutputBuffer ( int port_index );

        public:
            JackNetDriver ( const char* name, const char* alias, JackLockedEngine* engine, JackSynchro* table,
                            const char* ip, int port, int mtu, int midi_input_ports, int midi_output_ports,
                            char* net_name, uint transport_sync, char network_master_mode );
            ~JackNetDriver();

            int Open ( jack_nframes_t frames_per_cycle, jack_nframes_t rate, bool capturing, bool playing,
                       int inchannels, int outchannels, bool monitor, const char* capture_driver_name,
                       const char* playback_driver_name, jack_nframes_t capture_latency, jack_nframes_t playback_latency );
            int Close();

            int Attach();
            int Detach();

            int Read();
            int Write();

            // BufferSize can't be changed
            bool IsFixedBufferSize()
            {
                return true;
            }

            int SetBufferSize ( jack_nframes_t buffer_size )
            {
                return -1;
            }

            int SetSampleRate ( jack_nframes_t sample_rate )
            {
                return -1;
            }

    };
}

#endif
