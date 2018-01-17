/**
 * Faust DSP "constructor"
 **/    

#ifndef _FAUST_DSP_H
#define _FAUST_DSP_H

class dsp;
struct yc20_precalc_osc;

dsp *createDSP();
void deleteDSP(dsp *x);

struct mydsp_user_data
{
	yc20_precalc_osc *osc;
};

mydsp_user_data *getUserData(dsp *x);

#endif /* _FAUST_DSP_H */
