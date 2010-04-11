#include <sys/types.h>
#include <math.h>
#include <stdio.h>

inline float calculate_polyblep_perftest(float t)
{
	return 0;
}


inline float calculate_polyblep_valimaki_huovilainen_orlarey(float t)
{
	return t + (0.5 - (t>0) ) * (t*t + 1);
}

inline float calculate_polyblep_valimaki_huovilainen(float t)
{
	if (t>0) {
		return (t - (t*t)/2.0 - 0.5);
	} else {
		return ((t*t)/2.0 + t + 0.5);
	}
}

// These have slightly less high frequency aliasing bands but have much more sub-harmonic aliasing
// than the one by Välimäki & Huovilainen.
inline float calculate_polyblep_pekonen(float t)
{
	if (t>0) {
		return t*t*t*t*3/14 - t*t*t*4/7 + t*6/7 - 0.5;
	} else {
		return -t*t*t*t*3/14 - t*t*t*4/7 + t*6/7 + 0.5;
	}

}

inline float calculate_polyblep_pekonen2(float t)
{
	if (t>0) {
		return t*t*t*t*3/26 - t*t*t*4/13 - t*t*3/13 + t*24/26 - 0.5;
	} else {
		return -t*t*t*t*3/26 - t*t*t*4/13 + t*t*3/13 + t*24/26 + 0.5;
	}

}

// my attempt
inline float calculate_polyblep_savolainen(float t)
{
	return  t * (1.0-fabsf(t) * 0.5) + 0.5 - 1*(t>0);
}

//#define polyblep_it(x) calculate_polyblep_perftest((x))
//#define polyblep_it(x) calculate_polyblep_valimaki_huovilainen_orlarey((x))
#define polyblep_it(x) calculate_polyblep_valimaki_huovilainen((x))

//#define polyblep_it(x) calculate_polyblep_pekonen((x))
//#define polyblep_it(x) calculate_polyblep_pekonen2((x))
//#define polyblep_it(x) calculate_polyblep_savolainen((x))

float square_blep_x(int select, float x, float ph, float q)
{
	switch(select) {
	case 0:
		return x;
	case 1:
		return x + polyblep_it(ph / q)*2;
	case 2:
	default:
		return x - polyblep_it((ph - 0.5)/q)*2;
	}
}

float square_blep_prev(int select, float prev, float ph_1, float q)
{
	switch(select) {
	case 0:
		return prev;
	case 1:
		return prev + polyblep_it((ph_1 - 1.0)/q) * 2;
	case 2:
	default:
		return prev - polyblep_it((ph_1 - 0.5)/q) * 2;
	}
}


float saw_blep_x(int select, float x, float ph, float q)
{
	switch(select) {
	case 0:
		return x;
	case 1:
	default:
		return x + polyblep_it(ph / q) * 2.0;
	}
}

float saw_blep_prev(int select, float prev, float ph_1, float q)
{
	switch(select) {
	case 0:
		return prev;
	case 1:
	default:
		return prev + polyblep_it((ph_1 - 1.0)/q) * 2.0;
	}
}
