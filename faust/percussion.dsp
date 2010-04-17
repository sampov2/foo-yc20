// Root Mean Square of n consecutive samples
RMS(n) = square : mean(n) : sqrt 
with {
	// the square of a signal
	square(x) = x * x ;
	
	// the mean of n consecutive samples of a signal
	// uses fixpoint to avoid the accumulation of
	// rounding errors 
	mean(n) = float2fix : integrate(n) : fix2float : /(n); 

	// the sliding sum of n consecutive samples of a signal
	integrate(n,x) = x - x@n : +~_ ;

	// convertion between float and fix point
	float2fix(x) = int(x*(1<<20));      
	fix2float(x) = float(x)/(1<<20);    
};

co2db(coeff) = 20*log10(coeff);


percussion_envelope = detect : apply_envelope : apply_realism : *(4.5)
with {
	rms_approx(n) = square : (sumit ~ _) : sqrt
	with {
		square(x) = x * x;
		sumit(x,prev) = prev *((n-1.0)/n) + x / n;
	};

	measured_bleed = 0.01357;	

	apply_realism = max( select2(realism_control > (1/6), 0.0, measured_bleed));

	rms_detect_speed = int(max(22050,min(192000,SR)) * 0.020);

	threshold = -75.0;
	threshold_hyst = threshold - 30.0;

	detect = *(0.1) : max(-1.0) : min(1.0) : RMS(rms_detect_speed) : co2db: detect_rise;

	detect_rise(sig) =
		select2( sig  > threshold, 0.0,
		select2( sig' < threshold_hyst, 0.0, 1.0));


	envelope_speed = 0.05;
	envelope_coeff = envelope_speed : exp(1.0) / (1.5 * float(SR) * _) : (1.0 - _);

	apply_envelope = +(_*(1.0-envelope_coeff)) ~ *(envelope_coeff) 
			: *(1.0/(1.0-envelope_coeff)) : min(1.0)
			: sum_it;

	//sum_it(x) = x + x'' + x''' + x'''' + x''''' + x'''''' : /(6.0);
	sum_it(x) = x + x'' + x''' + x'''' : /(4.0);
};
