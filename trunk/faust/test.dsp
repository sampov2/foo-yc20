
import("music.lib");
import("percussion.dsp");

realism_control = 0.0;

process = _ <: _ * percussion_envelope;
//process = percussion_envelope;

