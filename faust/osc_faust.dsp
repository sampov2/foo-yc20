// hello
import("music.lib");

saw_gain = 1.950; // +5.8dB

modone = _ <: select2( >(1.0), _, -(1.0));
// TODO: requires anti-aliasing!
polyblep_sawtooth_master(f) = (phase ~ _) <: _, _* saw_gain, _
with {
    freq = f;
	q = float(freq)/float(SR);
	phase = +(q) : modone;
};

polyblep_square_slave(antialias,phase) = naive_square' //: apply_precalc_polyblep
with {
	naive_square = (phase < 0.5) : -(0.5) : *(2);

	//apply_precalc_polyblep = +(blep_precalc(phase, phase', phase'', antialias));

	//blep_precalc = ffunction (float square_polyblep_precalc   (float, float, float, float), "polyblep.cpp", "");
};

//process = polyblep_sawtooth_master;
