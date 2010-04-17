
declare name      "Foo YC-20 simulation";
declare author    "Sampo Savolainen";
declare license   "GPL";
declare copyright "(c)Sampo Savolainen 2009";


import ("music.lib");

import ("rc_filter.dsp");
import ("biquad.dsp");

import ("vibrato.dsp");
import ("oscillator.dsp");
import ("divider.dsp");
import ("wave_transformer.dsp");
import ("keyboard.dsp");
import ("mixer.dsp");
import ("percussion.dsp");


pitch_control = hslider("pitch", 0.0, -1.0, 1.0, 0.05);

oscillator_bias = (1 + vibrato + pitch_control * 0.03);

gain = par(i, 12*8, *(0.5));

process = 
	oscillator_bias <: oscillators : 
	dividers : 
	wave_transformers : 
	keyboard : 
	mixer;

