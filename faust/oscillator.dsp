

modone = _ <: _ - floor;

tet12(note) = 440 * 2.0^(note / 12.0);

saw_gain = 1.950; // +5.8dB

// Main oscillator section
// offset values picked by random, but kept static here to provide repeatable results
oscillators(bias) = 
	(tet12( 0 + 39) * bias * apply_realism(1.001383) : polyblep_sawtooth_master), // C
	(tet12( 1 + 39) * bias * apply_realism(1.003796) : polyblep_sawtooth_master), // C#
	(tet12( 2 + 39) * bias * apply_realism(0.999484) : polyblep_sawtooth_master), // D
	(tet12( 3 + 39) * bias * apply_realism(1.001135) : polyblep_sawtooth_master), // D#
	(tet12( 4 + 39) * bias * apply_realism(1.000064) : polyblep_sawtooth_master), // E
	(tet12( 5 + 39) * bias * apply_realism(0.998889) : polyblep_sawtooth_master), // F
	(tet12( 6 + 39) * bias * apply_realism(0.997199) : polyblep_sawtooth_master), // F#
	(tet12( 7 + 39) * bias * apply_realism(0.997294) : polyblep_sawtooth_master), // G
	(tet12( 8 + 39) * bias * apply_realism(1.000562) : polyblep_sawtooth_master), // G#
	(tet12( 9 + 39) * bias * apply_realism(1.002464) : polyblep_sawtooth_master), // A
	(tet12(10 + 39) * bias * apply_realism(0.996945) : polyblep_sawtooth_master), // Bb
	(tet12(11 + 39) * bias * apply_realism(1.003118) : polyblep_sawtooth_master)  // B
with {
	apply_realism(offset) = select2( realism_control >= 0.5, 1.0, offset);
};


polyblep_sawtooth_master(f) = (phase ~ _) <: polyblep_sawtooth_slave * saw_gain, _
with {
	freq = f;

	q = float(freq)/float(SR);
	phase = +(q) : modone;
};

polyblep_sawtooth_slave(phase) = naive_sawtooth(phase) : (polyb_it ~ _) : (!, _)
with {

	q = modone(phase - phase' + 1);

	naive_sawtooth(ph) = ph, (ph-0.5)*(-2);

        polyblep_real(t) = select2( t > 0, 
                                   ((t*t)/2 + t + 0.5), 
                                   (t - (t*t)/2 - 0.5));

        polyblep(t) = polyblep_real( t / q);

	// 0 no polyblep
	// 1 add polyblep at ph
	selector(ph) = select2( ph' > ph, 0, 1);

	// Detects square wave discontinuities by checking whether phase has went past 0 or 0.5
	// delays signal by one.
	polyb_it(prev, ph, x) = 
		selector(ph) <:
			saw_blep_x   (_, x,    ph,  q) ,
			saw_blep_prev(_, prev, ph', q);

	saw_blep_x    = ffunction (float saw_blep_x   (int, float, float, float), "polyblep.cpp", "");
	saw_blep_prev = ffunction (float saw_blep_prev(int, float, float, float), "polyblep.cpp", "");
};

polyblep_square_slave(phase) = naive_square(phase) : (polyb_it ~ _) : (!, _)
with {

	q = modone(phase - phase' + 1);

	naive_square(ph) = ph, select2( ph < 0.5, -1.0, 1.0);

	// 0 no polyblep
	// 1 add polyblep at ph
	// 2 add reverse phase polyblep at ph - 0.5
	selector(ph) = select2( ph' > ph, 
		       select2( modone(ph+0.5) < q, 0, 2), 1);

	// Detects square wave discontinuities by checking whether phase has went past 0 or 0.5
	// delays signal by one.
	polyb_it(prev, ph, x) = 
		selector(ph) <:
			square_blep_x   (_, x,    ph,  q) ,
			square_blep_prev(_, prev, ph', q);

	square_blep_x    = ffunction (float square_blep_x   (int, float, float, float), "polyblep.cpp", "");
	square_blep_prev = ffunction (float square_blep_prev(int, float, float, float), "polyblep.cpp", "");
};

