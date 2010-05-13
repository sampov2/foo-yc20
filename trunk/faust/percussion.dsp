/*
    YC-20 percussion circuit emulation in Faust
    Copyright(C) 2010 Sampo Savolainen <v2@iki.fi>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    RMS code by Yann Orlarey from the Faust project
*/

reduce(op, n, x) = compute ~ (_,_,_) : (!,!,_)
    with {
        compute (acc, count, val) =
            if(count<n, op(acc,x), x),                 // new acc
            if(count<n, count+1, 1),             // new count
            if(count<n, val, acc);              // new val
        if (c, then, else) = select2(c, else, then);
    };

 
// the sum of the amplitudes of the input signal
sumn(n) = reduce(+,n);

// the maximum amplitude of the input signal
maxn(n) = reduce(max,n);

// the minimum amplitude of the input signal
minn(n) = reduce(min,n);

// the average amplitude of the input signal
mean(n) = sumn(n)/n;

// RMS
RMS(n) = float : square : mean(n) : sqrt
with {
	square(x) = x*x;
};

co2db(coeff) = 20.0*log10(coeff);

percussion_envelope = detect : apply_envelope : apply_realism : *(4.5)
with {
	rms_approx(n) = square : (sumit ~ _) : sqrt
	with {
		square(x) = x * x;
		sumit(x,prev) = prev *((n-1.0)/n) + x / n;
	};

	measured_bleed = 0.01357;	

	apply_realism = max( select2(realism_control > (3.0/6.0), 0.0, measured_bleed));

	rms_detect_speed = int(max(22050.0,min(192000.0,float(SR))) * 0.001);

	threshold = -25.0;
	threshold_hyst = threshold - 10.0;

	detect = +(noise*0.000001) : max(-1.0) : min(1.0) : RMS(rms_detect_speed) : co2db : impulse_detector;

	impulse_detector = (hysteresis_detector ~ _) : impulsify;
	hysteresis_detector(prev, x) = prev + detect_rise(x) - detect_fall(x) : max(0.0) : min(1.0);

	impulsify(sig) =
		select2( sig  > 0.5, 0.0,
		select2( sig' < 0.5, 0.0, 1.0));
	
	detect_rise(sig) =
		select2( sig  > threshold, 0.0,
		select2( sig' < threshold, 0.0, 1.0));

	detect_fall(sig) =
		select2( sig' > threshold_hyst, 0.0,
		select2( sig  < threshold_hyst, 0.0, 1.0));


	envelope_speed = 0.05;
	envelope_coeff = envelope_speed : exp(1.0) / (1.5 * float(SR) * _) : (1.0 - _);

	apply_envelope = +(_*(1.0-envelope_coeff)) ~ *(envelope_coeff) 
			: *(1.0/(1.0-envelope_coeff)) : min(1.0)
			: sum_it;

	sum_it(x) = x + x'' + x''' + x'''' : /(4.0);
};

