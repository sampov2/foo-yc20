import ("math.lib");
import ("music.lib");

at_frame = plus_one ~ _
with {
	plus_one = _+(1);
};

zero_to_one(n) = at_frame / n;

fast_polyblep(z) = polyblep_lookup
with {
	table_size = int(16384);

	polynomial(t) = select2( t > 0, 
				((t*t)/2 + t + 0.5), 
				(t - (t*t)/2 - 0.5));

	polynomial_from_idx(i) = float(i)*2.0/float(table_size)-1.0 : polynomial;

	polyblep_table = rdtable(table_size, polynomial_from_idx, int(+(1) ~ _ : -(1)));

	polyblep_lookup = (z+1)/2.0*float(table_size) <: (polyblep_table(floor:int) + polyblep_table(ceil:int))/2;
};

polyblep_square_master(f, bias) = (phase ~ _) <: polyblep_square_slave, _
with {
	freq = f * bias;

	q = float(freq)/float(SR);
	phase = +(q) : fmod(_, 1.0);
};
polyblep_cpp = ffunction(float polyblep_table_lookup(float), "polyblep.cpp","");

polyblep_square_slave(phase) = naive_square(phase) : (polyb_it ~ _) : (!, _)
with {

	q = fmod(phase - phase' + 1, 1.0);

	polyblep_real(t) = select2( t > 0, 
				   ((t*t)/2 + t + 0.5), 
				   (t - (t*t)/2 - 0.5));

	//polyblep(t) = polyblep_cpp( t / q);
	polyblep(t) = polyblep_real( t / q);
	//polyblep(t) = fast_polyblep( t / q);

	naive_square(ph) = ph, select2( ph < 0.5, -1.0, 1.0);

	// 0 no polyblep
	// 1 add polyblep at ph
	// 2 add reverse phase polyblep at ph - 0.5
	selector(ph) = select2( (ph - ph') <= 0, 
		       select2( fmod(ph+0.5,1.0) < q, 0, 2), 1);

	// Detects square wave discontinuities by checking whether phase has went past 0 or 0.5
	// delays signal by one.
	polyb_it(prev, ph, x) = 
		selector(ph) <:
			square_blep_x   (_, x,    ph,  q) ,
			square_blep_prev(_, prev, ph', q);
/*
			square_blep_x   (_, x,    ph,  q) ,
			square_blep_prev(_, prev, ph', q);
*/

	square_blep_x    = ffunction (float square_blep_x   (int, float, float, float), "polyblep.cpp", "");
	square_blep_prev = ffunction (float square_blep_prev(int, float, float, float), "polyblep.cpp", "");
/*
		select3(_,
			x,
			x + polyblep(ph) * 2,
			x - polyblep(ph - 0.5) * 2), 
		select3(_,
			prev, 
			prev + polyblep(ph' - 1.0) * 2, 
			prev - polyblep(ph' - 0.5) * 2);
*/
};


//process = zero_to_one(2048) * 2 - 1 : fast_polyblep;

//process = fast_polyblep( 2.4 / 1923.4);
/*
phase_divisor(ph) = slow_accumulator(ph) / 2.0
with {
        slow_accumulator(x) = (prevphase(x) ~ _) + x;

        prevphase(x, whichphase) = select2( (x - x@1) < 0, whichphase, 1-whichphase);
};

process = polyblep_square_master(3440.1, 1.0) : _, (phase_divisor : polyblep_square_slave);
*/



tet12(note) = 440*8 * 2.0^((note + 1) / 12.0);

import ("divider.dsp");
import ("biquad.dsp");
import ("wave_transformer.dsp");

entropy = noise : biquad_lp(3.0) : *(log(1.005)) : +(1);
//entropy = noise
//	: biquad_lp(hslider("entropy lp", 0.1, 0.1, 100.0, 0.1)) 
//	: *(log(hslider("entropy", 0.0, 0.0, 1.0, 0.01)+1)) 
//	: +(1);

ac_noise = (+(50/float(SR)) ~ _) : fmod(_, 1.0) <: select2(_ < 0.5, 0, _) : *(2*PI) : sin : *(hslider("ac noise", 0.0, 0.0, 1.0, 0.01)); 


sine(freq) = (+(freq/float(SR)) ~ _) : fmod(_, 1.0) : *(2*PI) : sin;
tri(freq) = 0.25 + (+(freq/float(SR)) ~ _) : fmod(_, 1.0) <: select2(_ < 0.5, 1-(_-0.5)*2*2, _*2*2-1);




sin_tri = hslider("sin/tri",0.0,0.0,1.0,0.01);

ac_bias_amount    = 0.0005;
//ac_bias_amount    = hslider("ac bias", 0.0, 0.0, 1.0, 0.001) / 10; // 0.003
pure_noise_amount = 0.0015;
//pure_noise_amount = hslider("pure noise",0.0, 0.0, 1.0, 0.001);

//ac = sine(100) * (1-sin_tri) + tri(100) *sin_tri : *(log(1+ac_bias_amount));
ac = sine(50) : abs : *(log(1+ac_bias_amount));


//process = polyblep_square_master(tet12(2), 1.0);
//process = polyblep_square_master(tet12(2), 1.0) : divider 
/*
process = polyblep_square_master(tet12(2), entropy + ac) : divider 
	: par(i, 8, +(ac_noise)) // : wave_transformer_I1;
	: par(i, 8, +(noise * pure_noise_amount))
	: par(i, 8, *(0.2));
//	: par(i, 8, *(button("on_off")));
*/


import ("percussion.dsp");
import ("rc_filter.dsp");


testphase = (+(350/float(SR)) ~ fmod(_,1.0));


//process = testphase : -(0.5) : *(2) <: percussion_envelope, _;


//div7_hp_resistance = (1/56000) + (1/ (180000 + (1/((1/15000)+(1/100000))))) : 1/_;


//process = noise : (passive_lp(15000, 0.047));


process = _, _;


