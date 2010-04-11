
balance_control    = hslider("balance", 1.0, 0.0, 1.0, 0.25);
percussion_control = hslider("percussion", 1.0, 0.0, 1.0, 0.25);

gain_transfer = _ <: 2.81 * (_^3) - 2.81 * (_^2) + _;

manual_i_1     = hgroup("i", vslider("[7]1' i",     0.5,  0.0, 1.0, 0.25)) : gain_transfer;
manual_i_1_3p5 = hgroup("i", vslider("[6]1 3/5' i", 0.0,  0.0, 1.0, 0.25)) : gain_transfer;
manual_i_2     = hgroup("i", vslider("[5]2' i",     1.0,  0.0, 1.0, 0.25)) : gain_transfer;
manual_i_2_2p3 = hgroup("i", vslider("[4]2 2/3' i", 0.5,  0.0, 1.0, 0.25)) : gain_transfer;
manual_i_4     = hgroup("i", vslider("[3]4' i",     1.0,  0.0, 1.0, 0.25)) : gain_transfer;
manual_i_8     = hgroup("i", vslider("[2]8' i",     1.0,  0.0, 1.0, 0.25)) : gain_transfer;
manual_i_16    = hgroup("i", vslider("[1]16' i",    0.5,  0.0, 1.0, 0.25)) : gain_transfer;

brightness_c   = hgroup("ii", vslider("[1]bright",0.0,  0.0, 1.0, 0.25));
// voltage divider based on estimated buffer impedance (x2) and the brightness potentiometer value
// it is about -34dB
brightness_bleed = 1.0/(50.0 + 1.0 + 1.0); 
brightness     = brightness_bleed + brightness_c * (1.0 - 2.0*brightness_bleed);

manual_ii_2    = hgroup("ii", vslider("[5]2' ii",    1.0,  0.0, 1.0, 0.25)) : gain_transfer;
manual_ii_4    = hgroup("ii", vslider("[4]4' ii",    1.0,  0.0, 1.0, 0.25)) : gain_transfer;
manual_ii_8    = hgroup("ii", vslider("[3]8' ii",    1.0,  0.0, 1.0, 0.25)) : gain_transfer;
manual_ii_16   = hgroup("ii", vslider("[2]16' ii",   1.0,  0.0, 1.0, 0.25)) : gain_transfer;

manual_bass_8   = hgroup("bass", vslider("[2]8' b",  1.0,  0.0, 1.0, 0.25)) : gain_transfer;
manual_bass_16  = hgroup("bass", vslider("[1]16' b", 1.0,  0.0, 1.0, 0.25)) : gain_transfer;
manual_bass_slider = hgroup("bass", vslider("[3]bass volume", 1.0,  0.0, 1.0, 0.25));

volume_slider = hslider("volume", 0.1, 0.0, 1.0, 0.01);

// declick function where n = declick strength, higher = safer & slower
declick(n) = (_ * (n-1) / n)  + (_ /n);

manual_bass_vol = manual_bass_slider : (declick(50) ~ _);
volume          = volume_slider : (declick(50) ~ _);

// The volume slider must be declicked!
mixer = mixer_normal + mixer_bass : *(0.001 + 0.05 * volume);

mixer_normal (bus_1, bus_1_3p5, bus_2, bus_2_2p3, bus_4, bus_8, bus_16) 
	= balance(manual_i, manual_ii) + percussion
with {
	balance = (_ * (1-balance_control)) + (_ * balance_control);

	manual_i = bus_1     * manual_i_1
		 + bus_1_3p5 * manual_i_1_3p5
		 + bus_2     * manual_i_2
		 + bus_2_2p3 * manual_i_2_2p3
		 + bus_4     * manual_i_4
		 + bus_8     * manual_i_8
		 + bus_16    * manual_i_16;

	manual_ii = manual_ii_filter : manual_ii_mix : *(brightness) + *(1-brightness) : *(2.5);

	manual_ii_filter = 
		(bus_2    * manual_ii_2 <:  manual_ii_lp(10000.0, 0.0047), manual_ii_hp(39000.0, 0.0027)),
		(bus_4    * manual_ii_4 <:  manual_ii_lp(10000.0, 0.010),  manual_ii_hp(39000.0, 0.0047)),
		(bus_8    * manual_ii_8 <:  manual_ii_lp(10000.0, 0.022),  manual_ii_hp(39000.0, 0.010)),
		(bus_16   * manual_ii_16 <: manual_ii_lp(10000.0, 0.039),  manual_ii_hp(39000.0, 0.022));

	manual_ii_hp(R, C) = 
		// The first stage has a resistor in parallel with the high pass capacitor
		// this attempts to emulate that by mixing in the unfiltered signal. The
		// amount G is controlled by the voltage divider created by R and the 33k
		// parallel resistor. To compensate for the high frequencies passed by this
		// voltage divisor, the first high pass filter stage is multiplied by 1-G.
		// Thus gain at high frequencies approaches 0dB
	     _ <: (passive_hp(R, C) * (1-G) + _*(G))
		:  passive_hp(R / 2.0, C)
	with {
		voltage_divider(R1, R2) = R1/(R2+R1);
		G = voltage_divider(33000, R);
	};

	// Now that was easy
	manual_ii_lp(R, C) = passive_lp(R, C) : passive_lp(R, C);

	// *0.75 compensates for measured difference in overall volume
	manual_ii_mix(lp2, hp2, lp4, hp4, lp8, hp8, lp16, hp16) = 
			(hp2 + hp4 + hp8 + hp16),
			((lp2 + lp4 + lp8 + lp16) * 0.60);

	percussion =
		   bus_1 * 0.25 + bus_2_2p3 + bus_16 * 0.5
		: *(percussion_envelope(bus_1))
		: *(percussion_control);
};


mixer_bass (bass_bus_4, bass_bus_8, bass_bus_16) = mix : filter : gain
with {
	mix = manual_bass_8  * (bass_bus_8  + bass_bus_4 * 0.5)
	    + manual_bass_16 * (bass_bus_16 + bass_bus_8 * 0.5 + bass_bus_4 * 0.25);

	// This filter is tricky, the different buses are mixed with different
	// resistors plus the mix potentiometers are connected so that they vary
	// impedance to the filter. 10k is just a random stab in the (silent) dark.

	// However, this seems to work really well
	filter = passive_lp(4500, 0.056);

	// gain = 0.5 .. 5.0 (measured from the real organ)
	gain = *(0.5+4.5*manual_bass_vol);
};

