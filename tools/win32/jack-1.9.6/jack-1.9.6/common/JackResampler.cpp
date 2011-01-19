/*
Copyright (C) 2008 Grame

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

#include "JackResampler.h"
#include <stdio.h>

namespace Jack
{

JackResampler::JackResampler()
    :fRatio(1),fRingBufferSize(DEFAULT_RB_SIZE)
{
    fRingBuffer = jack_ringbuffer_create(sizeof(float) * fRingBufferSize);
    jack_ringbuffer_read_advance(fRingBuffer, (sizeof(float) * fRingBufferSize) / 2);
}

JackResampler::~JackResampler()
{
    if (fRingBuffer)
        jack_ringbuffer_free(fRingBuffer);
}

void JackResampler::Reset(unsigned int new_size)
{
    fRingBufferSize = new_size;
    jack_ringbuffer_reset_size(fRingBuffer, sizeof(float) * fRingBufferSize);
    jack_ringbuffer_read_advance(fRingBuffer, (sizeof(float) * fRingBufferSize / 2));
}

unsigned int JackResampler::ReadSpace()
{
    return (jack_ringbuffer_read_space(fRingBuffer) / sizeof(float));
}

unsigned int JackResampler::WriteSpace()
{
    return (jack_ringbuffer_write_space(fRingBuffer) / sizeof(float));
}

unsigned int JackResampler::Read(float* buffer, unsigned int frames)
{
    size_t len = jack_ringbuffer_read_space(fRingBuffer);
    jack_log("JackResampler::Read input available = %ld", len / sizeof(float));
        
    if (len < frames * sizeof(float)) {
        jack_error("JackResampler::Read : producer too slow, missing frames = %d", frames);
        return 0;
    } else {
        jack_ringbuffer_read(fRingBuffer, (char*)buffer, frames * sizeof(float));
        return frames;
    }
}

unsigned int JackResampler::Write(float* buffer, unsigned int frames)
{
    size_t len = jack_ringbuffer_write_space(fRingBuffer);
    jack_log("JackResampler::Write output available = %ld", len / sizeof(float));
        
    if (len < frames * sizeof(float)) {
        jack_error("JackResampler::Write : consumer too slow, skip frames = %d", frames);
        return 0;
    } else {
        jack_ringbuffer_write(fRingBuffer, (char*)buffer, frames * sizeof(float));
        return frames;
    }
}

unsigned int JackResampler::ReadResample(float* buffer, unsigned int frames)
{
    return Read(buffer, frames);
}

unsigned int JackResampler::WriteResample(float* buffer, unsigned int frames)
{
    return Write(buffer, frames);
}

}