// tests to emulate a Yamaha YC-20 Combo Organ from the early 1970s

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


/*

 Architecture & signal flow

   Master pitch + vibrato oscillator -> oscillator bias


   12x oscillators -> 12x flip-flop dividers -> 12*y (y = about 8) filters -> bus bars

 */

// bias should be affected by:
//  master pitch
//  vibrato (speed and depth controls)
//  touch vibrato

// a bit of performance can be gained by this
//modone = fmod(_, 1.0);
modone = _ <: _ - floor;

instability = noise * hslider("instability", 0.0, 0.0, 1.0, 0.001);

// 50Hz rectified wave. To avoid abs(), we run the a half-wave sine at 100Hz instead.
ac_noise = ( (+(100.0/float(SR)) : modone) ~ _) : *(PI) : sin : *(log(1.0015));

// Entropy
entropy = noise : biquad_lp(3.0) : *(log(1.0005));

//oscillator_bias = (1 + vibrato + ac_noise + entropy);
//oscillator_bias = (1 + vibrato + ac_noise);

pitch_control = hslider("pitch", 0.0, -1.0, 1.0, 0.05);

oscillator_bias = (1 + vibrato + pitch_control * 0.03);

gain = par(i, 12*8, *(0.5));

process = oscillator_bias <: oscillators : dividers : wave_transformers : keyboard : mixer;

//process = oscillator_bias <: oscillators <: _, !, !, !, !, !, !, !, !, !, !, !, !, !, !, !, !, !, !, !, !, !, !, !;

