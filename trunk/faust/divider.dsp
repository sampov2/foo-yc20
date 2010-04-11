
// 8 dividers => 9 octaves

dividers = par(i, 12, divider);

divider = _, 
	(divide : _, 
	(divide : _, 
	(divide : _,
	(divide : _,
	(divide : _,
	(divide : _,
	(divide : _, !)
	))))))
with {
	divide = phase_divisor <: polyblep_square_slave, _;
};

phase_divisor(ph) = slow_accumulator(ph) / 2.0
with {
        slow_accumulator(x) = (prevphase(x) ~ _) + x;

        prevphase(x, whichphase) = select2( (x - x@1) < 0, whichphase, 1-whichphase);


};

