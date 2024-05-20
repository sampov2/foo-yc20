import("music.lib");
saw_gain = 1.950; // +5.8dB

modone = _ <: select2( >(1.0), _, -(1.0));

polyblep_sawtooth_master(f) = (phase ~ _) <: (polyblep_sawtooth_slave), _
with {
	freq = f;

	q = float(freq)/float(SR);
	phase = +(q) : modone;
};

polyblep_sawtooth_slave(phase) = create_polyblep_antialias <: (_, ( +(naive_sawtooth') : *(saw_gain) ) )
with {

	q = modone(phase - phase' + 1);

	naive_sawtooth = (phase-0.5)*(-2);

	create_polyblep_antialias = blep_fast(phase, phase', phase'', q);

	blep_fast = ffunction (float saw_polyblep_fast   (float, float, float, float), "polyblep.cpp", "");
};


polyblep_square_slave(antialias,phase) = naive_square' : apply_precalc_polyblep
with {

	q = modone(phase - phase' + 1);

	naive_square = (phase < 0.5) : -(0.5) : *(2);

	apply_precalc_polyblep = +(blep_precalc(phase, phase', phase'', antialias));

	blep_precalc = ffunction (float square_polyblep_precalc   (float, float, float, float), "polyblep.cpp", "");
};

//process = polyblep_sawtooth_master;