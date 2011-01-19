
import("music.lib");
import("percussion.dsp");
import("oscillator.dsp");
import("divider.dsp");
import("vibrato.dsp");

realism_control = 0.0;

bias = 1 + vibrato;

gain = *(0.2);
//process = tet12(0 + 39) : *(bias) : polyblep_sawtooth_master : divider;

process = (tet12(0 + 39) : *(bias) : polyblep_sawtooth_master : divider : par(i, 8, gain)), vibrato;
//process = percussion_envelope;

