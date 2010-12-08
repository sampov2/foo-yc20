//-----------------------------------------------------
// name: "Foo YC-20 simulation"
// author: "Sampo Savolainen"
// license: "GPLv3"
// copyright: "(c)Sampo Savolainen 2009"
//
// Code generated with Faust 0.9.29 (http://faust.grame.fr)
//-----------------------------------------------------
/* link with : "" */
#include "polyblep.cpp"
#include <math.h>
#include <cmath>
template <int N> inline float faustpower(float x) 		{ return powf(x,N); } 
template <int N> inline double faustpower(double x) 	{ return pow(x,N); }
template <int N> inline int faustpower(int x) 			{ return faustpower<N/2>(x) * faustpower<N-N/2>(x); } 
template <> 	 inline int faustpower<0>(int x) 		{ return 1; }
template <> 	 inline int faustpower<1>(int x) 		{ return x; }
#include <cmath>
// abs is now predefined
//template<typename T> T abs (T a)			{ return (a<T(0)) ? -a : a; }


inline int		lsr (int x, int n)			{ return int(((unsigned int)x) >> n); }

/******************************************************************************
*******************************************************************************

							       VECTOR INTRINSICS

*******************************************************************************
*******************************************************************************/

//inline void *aligned_calloc(size_t nmemb, size_t size) { return (void*)((unsigned)(calloc((nmemb*size)+15,sizeof(char)))+15 & 0xfffffff0); }
//inline void *aligned_calloc(size_t nmemb, size_t size) { return (void*)((size_t)(calloc((nmemb*size)+15,sizeof(char)))+15 & ~15); }


/******************************************************************************
*******************************************************************************

			ABSTRACT USER INTERFACE

*******************************************************************************
*******************************************************************************/

struct Meta 
{
    void declare (const char*, const char*) {  }
};

//----------------------------------------------------------------
//  abstract definition of a user interface
//----------------------------------------------------------------
            

class UI
{
	bool	fStopped;
public:
		
	UI() : fStopped(false) {}
	virtual ~UI() {}
	
	virtual void addButton(const char* label, float* zone) = 0;
	virtual void addToggleButton(const char* label, float* zone) = 0;
	virtual void addCheckButton(const char* label, float* zone) = 0;
	virtual void addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step) = 0;
	virtual void addHorizontalSlider(const char* label, float* zone, float init, float min, float max, float step) = 0;
	virtual void addNumEntry(const char* label, float* zone, float init, float min, float max, float step) = 0;
	
	virtual void openFrameBox(const char* label) = 0;
	virtual void openTabBox(const char* label) = 0;
	virtual void openHorizontalBox(const char* label) = 0;
	virtual void openVerticalBox(const char* label) = 0;
	virtual void closeBox() = 0;

    virtual void declare(float* zone, const char* key, const char* value) = 0;
};




/******************************************************************************
*******************************************************************************

			    FAUST DSP

*******************************************************************************
*******************************************************************************/



//----------------------------------------------------------------
//  abstract definition of a signal processor
//----------------------------------------------------------------
			
class dsp {
 protected:
	int fSamplingFreq;
 public:
	dsp() {}
	virtual ~dsp() {}

	virtual int getNumInputs() 						= 0;
	virtual int getNumOutputs() 					= 0;
	virtual void buildUserInterface(UI* interface) 	= 0;
	virtual void init(int samplingRate) 			= 0;
 	virtual void compute(int len, float** inputs, float** outputs) 	= 0;
};
		

//----------------------------------------------------------------------------
//  FAUST generated signal processor
//----------------------------------------------------------------------------
		

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif  

typedef long double quad;

class mydsp : public dsp{
  private:
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT 	fbutton0;
	float 	fVec0_perm[4];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT 	fslider2;
	float 	fConst0;
	float 	fConst1;
	float 	fRec5_perm[4];
	FAUSTFLOAT 	fslider3;
	float 	fRec4_perm[4];
	int 	iRec3_perm[4];
	float 	fYec0_perm[4];
	int 	iRec6_perm[4];
	float 	fYec1_perm[4];
	int 	iRec7_perm[4];
	float 	fYec2_perm[4];
	int 	iRec8_perm[4];
	float 	fYec3_perm[4];
	int 	iRec9_perm[4];
	float 	fYec4_perm[4];
	int 	iRec10_perm[4];
	float 	fYec5_perm[4];
	float 	fYec6_perm[4];
	float 	fConst2;
	float 	fRec2_perm[4];
	float 	fConst3;
	float 	fConst4;
	float 	fRec1_perm[4];
	FAUSTFLOAT 	fbutton1;
	float 	fVec1_perm[4];
	float 	fRec14_perm[4];
	int 	iRec13_perm[4];
	float 	fYec7_perm[4];
	int 	iRec15_perm[4];
	float 	fYec8_perm[4];
	int 	iRec16_perm[4];
	float 	fYec9_perm[4];
	int 	iRec17_perm[4];
	float 	fYec10_perm[4];
	int 	iRec18_perm[4];
	float 	fYec11_perm[4];
	int 	iRec19_perm[4];
	float 	fYec12_perm[4];
	float 	fYec13_perm[4];
	float 	fRec12_perm[4];
	float 	fRec11_perm[4];
	FAUSTFLOAT 	fbutton2;
	float 	fVec2_perm[4];
	float 	fRec23_perm[4];
	int 	iRec22_perm[4];
	float 	fYec14_perm[4];
	int 	iRec24_perm[4];
	float 	fYec15_perm[4];
	int 	iRec25_perm[4];
	float 	fYec16_perm[4];
	int 	iRec26_perm[4];
	float 	fYec17_perm[4];
	int 	iRec27_perm[4];
	float 	fYec18_perm[4];
	int 	iRec28_perm[4];
	float 	fYec19_perm[4];
	float 	fYec20_perm[4];
	float 	fRec21_perm[4];
	float 	fRec20_perm[4];
	FAUSTFLOAT 	fbutton3;
	float 	fVec3_perm[4];
	float 	fRec32_perm[4];
	int 	iRec31_perm[4];
	float 	fYec21_perm[4];
	int 	iRec33_perm[4];
	float 	fYec22_perm[4];
	int 	iRec34_perm[4];
	float 	fYec23_perm[4];
	int 	iRec35_perm[4];
	float 	fYec24_perm[4];
	int 	iRec36_perm[4];
	float 	fYec25_perm[4];
	int 	iRec37_perm[4];
	float 	fYec26_perm[4];
	float 	fYec27_perm[4];
	float 	fRec30_perm[4];
	float 	fRec29_perm[4];
	FAUSTFLOAT 	fbutton4;
	float 	fVec4_perm[4];
	float 	fRec41_perm[4];
	int 	iRec40_perm[4];
	float 	fYec28_perm[4];
	int 	iRec42_perm[4];
	float 	fYec29_perm[4];
	int 	iRec43_perm[4];
	float 	fYec30_perm[4];
	int 	iRec44_perm[4];
	float 	fYec31_perm[4];
	int 	iRec45_perm[4];
	float 	fYec32_perm[4];
	int 	iRec46_perm[4];
	float 	fYec33_perm[4];
	float 	fYec34_perm[4];
	float 	fConst5;
	float 	fRec39_perm[4];
	float 	fRec38_perm[4];
	FAUSTFLOAT 	fbutton5;
	float 	fVec5_perm[4];
	float 	fRec50_perm[4];
	int 	iRec49_perm[4];
	float 	fYec35_perm[4];
	int 	iRec51_perm[4];
	float 	fYec36_perm[4];
	int 	iRec52_perm[4];
	float 	fYec37_perm[4];
	int 	iRec53_perm[4];
	float 	fYec38_perm[4];
	int 	iRec54_perm[4];
	float 	fYec39_perm[4];
	int 	iRec55_perm[4];
	float 	fYec40_perm[4];
	float 	fYec41_perm[4];
	float 	fRec48_perm[4];
	float 	fRec47_perm[4];
	FAUSTFLOAT 	fbutton6;
	float 	fVec6_perm[4];
	float 	fRec59_perm[4];
	int 	iRec58_perm[4];
	float 	fYec42_perm[4];
	int 	iRec60_perm[4];
	float 	fYec43_perm[4];
	int 	iRec61_perm[4];
	float 	fYec44_perm[4];
	int 	iRec62_perm[4];
	float 	fYec45_perm[4];
	int 	iRec63_perm[4];
	float 	fYec46_perm[4];
	int 	iRec64_perm[4];
	float 	fYec47_perm[4];
	float 	fYec48_perm[4];
	float 	fRec57_perm[4];
	float 	fRec56_perm[4];
	FAUSTFLOAT 	fbutton7;
	float 	fVec7_perm[4];
	float 	fRec68_perm[4];
	int 	iRec67_perm[4];
	float 	fYec49_perm[4];
	int 	iRec69_perm[4];
	float 	fYec50_perm[4];
	int 	iRec70_perm[4];
	float 	fYec51_perm[4];
	int 	iRec71_perm[4];
	float 	fYec52_perm[4];
	int 	iRec72_perm[4];
	float 	fYec53_perm[4];
	int 	iRec73_perm[4];
	float 	fYec54_perm[4];
	float 	fYec55_perm[4];
	float 	fRec66_perm[4];
	float 	fRec65_perm[4];
	FAUSTFLOAT 	fbutton8;
	float 	fVec8_perm[4];
	float 	fRec77_perm[4];
	int 	iRec76_perm[4];
	float 	fYec56_perm[4];
	int 	iRec78_perm[4];
	float 	fYec57_perm[4];
	int 	iRec79_perm[4];
	float 	fYec58_perm[4];
	int 	iRec80_perm[4];
	float 	fYec59_perm[4];
	int 	iRec81_perm[4];
	float 	fYec60_perm[4];
	int 	iRec82_perm[4];
	float 	fYec61_perm[4];
	float 	fYec62_perm[4];
	float 	fConst6;
	float 	fRec75_perm[4];
	float 	fRec74_perm[4];
	FAUSTFLOAT 	fbutton9;
	float 	fVec9_perm[4];
	float 	fRec86_perm[4];
	int 	iRec85_perm[4];
	float 	fYec63_perm[4];
	int 	iRec87_perm[4];
	float 	fYec64_perm[4];
	int 	iRec88_perm[4];
	float 	fYec65_perm[4];
	int 	iRec89_perm[4];
	float 	fYec66_perm[4];
	int 	iRec90_perm[4];
	float 	fYec67_perm[4];
	int 	iRec91_perm[4];
	float 	fYec68_perm[4];
	float 	fYec69_perm[4];
	float 	fRec84_perm[4];
	float 	fRec83_perm[4];
	FAUSTFLOAT 	fbutton10;
	float 	fVec10_perm[4];
	float 	fRec95_perm[4];
	int 	iRec94_perm[4];
	float 	fYec70_perm[4];
	int 	iRec96_perm[4];
	float 	fYec71_perm[4];
	int 	iRec97_perm[4];
	float 	fYec72_perm[4];
	int 	iRec98_perm[4];
	float 	fYec73_perm[4];
	int 	iRec99_perm[4];
	float 	fYec74_perm[4];
	int 	iRec100_perm[4];
	float 	fYec75_perm[4];
	float 	fYec76_perm[4];
	float 	fRec93_perm[4];
	float 	fRec92_perm[4];
	FAUSTFLOAT 	fbutton11;
	float 	fVec11_perm[4];
	float 	fRec104_perm[4];
	int 	iRec103_perm[4];
	float 	fYec77_perm[4];
	int 	iRec105_perm[4];
	float 	fYec78_perm[4];
	int 	iRec106_perm[4];
	float 	fYec79_perm[4];
	int 	iRec107_perm[4];
	float 	fYec80_perm[4];
	int 	iRec108_perm[4];
	float 	fYec81_perm[4];
	int 	iRec109_perm[4];
	float 	fYec82_perm[4];
	float 	fYec83_perm[4];
	float 	fRec102_perm[4];
	float 	fRec101_perm[4];
	FAUSTFLOAT 	fbutton12;
	float 	fVec12_perm[4];
	float 	fYec84_perm[4];
	float 	fRec111_perm[4];
	float 	fConst7;
	float 	fRec110_perm[4];
	FAUSTFLOAT 	fbutton13;
	float 	fVec13_perm[4];
	float 	fYec85_perm[4];
	float 	fRec113_perm[4];
	float 	fRec112_perm[4];
	FAUSTFLOAT 	fbutton14;
	float 	fVec14_perm[4];
	float 	fYec86_perm[4];
	float 	fRec115_perm[4];
	float 	fRec114_perm[4];
	FAUSTFLOAT 	fbutton15;
	float 	fVec15_perm[4];
	float 	fYec87_perm[4];
	float 	fRec117_perm[4];
	float 	fRec116_perm[4];
	FAUSTFLOAT 	fbutton16;
	float 	fVec16_perm[4];
	float 	fYec88_perm[4];
	float 	fConst8;
	float 	fRec119_perm[4];
	float 	fRec118_perm[4];
	FAUSTFLOAT 	fslider4;
	FAUSTFLOAT 	fbutton17;
	float 	fVec17_perm[4];
	float 	fYec89_perm[4];
	float 	fRec121_perm[4];
	float 	fRec120_perm[4];
	FAUSTFLOAT 	fbutton18;
	float 	fVec18_perm[4];
	float 	fYec90_perm[4];
	float 	fRec123_perm[4];
	float 	fRec122_perm[4];
	FAUSTFLOAT 	fbutton19;
	float 	fVec19_perm[4];
	float 	fYec91_perm[4];
	float 	fRec125_perm[4];
	float 	fRec124_perm[4];
	FAUSTFLOAT 	fbutton20;
	float 	fVec20_perm[4];
	float 	fYec92_perm[4];
	float 	fConst9;
	float 	fRec127_perm[4];
	float 	fRec126_perm[4];
	FAUSTFLOAT 	fbutton21;
	float 	fVec21_perm[4];
	float 	fYec93_perm[4];
	float 	fRec129_perm[4];
	float 	fRec128_perm[4];
	FAUSTFLOAT 	fbutton22;
	float 	fVec22_perm[4];
	float 	fYec94_perm[4];
	float 	fRec131_perm[4];
	float 	fRec130_perm[4];
	FAUSTFLOAT 	fbutton23;
	float 	fVec23_perm[4];
	float 	fYec95_perm[4];
	float 	fRec133_perm[4];
	float 	fRec132_perm[4];
	FAUSTFLOAT 	fbutton24;
	float 	fVec24_perm[4];
	float 	fYec96_perm[4];
	float 	fConst10;
	float 	fRec135_perm[4];
	float 	fConst11;
	float 	fRec134_perm[4];
	FAUSTFLOAT 	fbutton25;
	float 	fVec25_perm[4];
	float 	fYec97_perm[4];
	float 	fRec137_perm[4];
	float 	fRec136_perm[4];
	FAUSTFLOAT 	fbutton26;
	float 	fVec26_perm[4];
	float 	fYec98_perm[4];
	float 	fRec139_perm[4];
	float 	fRec138_perm[4];
	FAUSTFLOAT 	fbutton27;
	float 	fVec27_perm[4];
	float 	fYec99_perm[4];
	float 	fRec141_perm[4];
	float 	fRec140_perm[4];
	FAUSTFLOAT 	fbutton28;
	float 	fVec28_perm[4];
	float 	fYec100_perm[4];
	float 	fConst12;
	float 	fRec143_perm[4];
	float 	fRec142_perm[4];
	FAUSTFLOAT 	fbutton29;
	float 	fVec29_perm[4];
	float 	fYec101_perm[4];
	float 	fRec145_perm[4];
	float 	fRec144_perm[4];
	FAUSTFLOAT 	fbutton30;
	float 	fVec30_perm[4];
	float 	fYec102_perm[4];
	float 	fRec147_perm[4];
	float 	fRec146_perm[4];
	FAUSTFLOAT 	fbutton31;
	float 	fVec31_perm[4];
	float 	fYec103_perm[4];
	float 	fRec149_perm[4];
	float 	fRec148_perm[4];
	FAUSTFLOAT 	fbutton32;
	float 	fVec32_perm[4];
	float 	fYec104_perm[4];
	float 	fConst13;
	float 	fRec151_perm[4];
	float 	fRec150_perm[4];
	FAUSTFLOAT 	fbutton33;
	float 	fVec33_perm[4];
	float 	fYec105_perm[4];
	float 	fRec153_perm[4];
	float 	fRec152_perm[4];
	FAUSTFLOAT 	fbutton34;
	float 	fVec34_perm[4];
	float 	fYec106_perm[4];
	float 	fRec155_perm[4];
	float 	fRec154_perm[4];
	FAUSTFLOAT 	fbutton35;
	float 	fVec35_perm[4];
	float 	fYec107_perm[4];
	float 	fRec157_perm[4];
	float 	fRec156_perm[4];
	FAUSTFLOAT 	fbutton36;
	float 	fVec36_perm[4];
	float 	fYec108_perm[4];
	float 	fConst14;
	float 	fRec159_perm[4];
	float 	fRec158_perm[4];
	FAUSTFLOAT 	fbutton37;
	float 	fVec37_perm[4];
	float 	fYec109_perm[4];
	float 	fRec161_perm[4];
	float 	fRec160_perm[4];
	FAUSTFLOAT 	fbutton38;
	float 	fVec38_perm[4];
	float 	fYec110_perm[4];
	float 	fRec163_perm[4];
	float 	fRec162_perm[4];
	FAUSTFLOAT 	fbutton39;
	float 	fVec39_perm[4];
	float 	fYec111_perm[4];
	float 	fRec165_perm[4];
	float 	fRec164_perm[4];
	FAUSTFLOAT 	fbutton40;
	float 	fVec40_perm[4];
	float 	fYec112_perm[4];
	float 	fConst15;
	float 	fRec167_perm[4];
	float 	fRec166_perm[4];
	FAUSTFLOAT 	fbutton41;
	float 	fVec41_perm[4];
	float 	fYec113_perm[4];
	float 	fRec169_perm[4];
	float 	fRec168_perm[4];
	FAUSTFLOAT 	fbutton42;
	float 	fVec42_perm[4];
	float 	fYec114_perm[4];
	float 	fRec171_perm[4];
	float 	fRec170_perm[4];
	FAUSTFLOAT 	fbutton43;
	float 	fVec43_perm[4];
	float 	fYec115_perm[4];
	float 	fRec173_perm[4];
	float 	fRec172_perm[4];
	FAUSTFLOAT 	fbutton44;
	float 	fVec44_perm[4];
	float 	fYec116_perm[4];
	float 	fConst16;
	float 	fRec175_perm[4];
	float 	fRec174_perm[4];
	FAUSTFLOAT 	fbutton45;
	float 	fVec45_perm[4];
	float 	fYec117_perm[4];
	float 	fRec177_perm[4];
	float 	fRec176_perm[4];
	FAUSTFLOAT 	fbutton46;
	float 	fVec46_perm[4];
	float 	fYec118_perm[4];
	float 	fRec179_perm[4];
	float 	fRec178_perm[4];
	FAUSTFLOAT 	fbutton47;
	float 	fVec47_perm[4];
	float 	fYec119_perm[4];
	float 	fRec181_perm[4];
	float 	fRec180_perm[4];
	FAUSTFLOAT 	fbutton48;
	float 	fVec48_perm[4];
	float 	fYec120_perm[4];
	float 	fConst17;
	float 	fRec183_perm[4];
	float 	fRec182_perm[4];
	FAUSTFLOAT 	fbutton49;
	float 	fVec49_perm[4];
	float 	fYec121_perm[4];
	float 	fRec185_perm[4];
	float 	fRec184_perm[4];
	FAUSTFLOAT 	fbutton50;
	float 	fVec50_perm[4];
	float 	fYec122_perm[4];
	float 	fRec187_perm[4];
	float 	fRec186_perm[4];
	FAUSTFLOAT 	fbutton51;
	float 	fVec51_perm[4];
	float 	fYec123_perm[4];
	float 	fRec189_perm[4];
	float 	fRec188_perm[4];
	FAUSTFLOAT 	fbutton52;
	float 	fVec52_perm[4];
	float 	fYec124_perm[4];
	float 	fConst18;
	float 	fRec191_perm[4];
	float 	fRec190_perm[4];
	FAUSTFLOAT 	fbutton53;
	float 	fVec53_perm[4];
	float 	fYec125_perm[4];
	float 	fRec193_perm[4];
	float 	fRec192_perm[4];
	FAUSTFLOAT 	fbutton54;
	float 	fVec54_perm[4];
	float 	fYec126_perm[4];
	float 	fRec195_perm[4];
	float 	fRec194_perm[4];
	FAUSTFLOAT 	fbutton55;
	float 	fVec55_perm[4];
	float 	fYec127_perm[4];
	float 	fRec197_perm[4];
	float 	fRec196_perm[4];
	FAUSTFLOAT 	fbutton56;
	float 	fVec56_perm[4];
	float 	fYec128_perm[4];
	float 	fConst19;
	float 	fRec199_perm[4];
	float 	fRec198_perm[4];
	FAUSTFLOAT 	fbutton57;
	float 	fVec57_perm[4];
	float 	fYec129_perm[4];
	float 	fRec201_perm[4];
	float 	fRec200_perm[4];
	FAUSTFLOAT 	fbutton58;
	float 	fVec58_perm[4];
	float 	fYec130_perm[4];
	float 	fRec203_perm[4];
	float 	fRec202_perm[4];
	FAUSTFLOAT 	fbutton59;
	float 	fVec59_perm[4];
	float 	fYec131_perm[4];
	float 	fRec205_perm[4];
	float 	fRec204_perm[4];
	FAUSTFLOAT 	fbutton60;
	float 	fVec60_perm[4];
	float 	fYec132_perm[4];
	float 	fConst20;
	float 	fRec207_perm[4];
	float 	fRec206_perm[4];
	float 	fYec133_perm[4];
	float 	fConst21;
	float 	fRec0_perm[4];
	FAUSTFLOAT 	fslider5;
	int 	iRec211_perm[4];
	float 	fYec134_perm[4];
	float 	fYec135_perm[4];
	float 	fConst22;
	float 	fRec210_perm[4];
	float 	fConst23;
	float 	fRec209_perm[4];
	int 	iRec214_perm[4];
	float 	fYec136_perm[4];
	float 	fYec137_perm[4];
	float 	fRec213_perm[4];
	float 	fRec212_perm[4];
	int 	iRec217_perm[4];
	float 	fYec138_perm[4];
	float 	fYec139_perm[4];
	float 	fRec216_perm[4];
	float 	fRec215_perm[4];
	int 	iRec220_perm[4];
	float 	fYec140_perm[4];
	float 	fYec141_perm[4];
	float 	fRec219_perm[4];
	float 	fRec218_perm[4];
	int 	iRec223_perm[4];
	float 	fYec142_perm[4];
	float 	fYec143_perm[4];
	float 	fRec222_perm[4];
	float 	fRec221_perm[4];
	int 	iRec226_perm[4];
	float 	fYec144_perm[4];
	float 	fYec145_perm[4];
	float 	fRec225_perm[4];
	float 	fRec224_perm[4];
	int 	iRec229_perm[4];
	float 	fYec146_perm[4];
	float 	fYec147_perm[4];
	float 	fRec228_perm[4];
	float 	fRec227_perm[4];
	int 	iRec232_perm[4];
	float 	fYec148_perm[4];
	float 	fYec149_perm[4];
	float 	fRec231_perm[4];
	float 	fRec230_perm[4];
	int 	iRec235_perm[4];
	float 	fYec150_perm[4];
	float 	fYec151_perm[4];
	float 	fRec234_perm[4];
	float 	fRec233_perm[4];
	int 	iRec238_perm[4];
	float 	fYec152_perm[4];
	float 	fYec153_perm[4];
	float 	fRec237_perm[4];
	float 	fRec236_perm[4];
	int 	iRec241_perm[4];
	float 	fYec154_perm[4];
	float 	fYec155_perm[4];
	float 	fRec240_perm[4];
	float 	fRec239_perm[4];
	int 	iRec244_perm[4];
	float 	fYec156_perm[4];
	float 	fYec157_perm[4];
	float 	fRec243_perm[4];
	float 	fRec242_perm[4];
	float 	fYec158_perm[4];
	float 	fRec208_perm[4];
	FAUSTFLOAT 	fslider6;
	float 	fYec159_perm[4];
	float 	fRec246_perm[4];
	float 	fRec245_perm[4];
	float 	fYec160_perm[4];
	float 	fRec248_perm[4];
	float 	fRec247_perm[4];
	float 	fYec161_perm[4];
	float 	fRec250_perm[4];
	float 	fRec249_perm[4];
	float 	fYec162_perm[4];
	float 	fConst24;
	float 	fRec252_perm[4];
	float 	fRec251_perm[4];
	float 	fYec163_perm[4];
	float 	fRec254_perm[4];
	float 	fRec253_perm[4];
	float 	fYec164_perm[4];
	float 	fRec256_perm[4];
	float 	fRec255_perm[4];
	float 	fYec165_perm[4];
	float 	fRec258_perm[4];
	float 	fRec257_perm[4];
	float 	fYec166_perm[4];
	float 	fConst25;
	float 	fRec260_perm[4];
	float 	fRec259_perm[4];
	float 	fYec167_perm[4];
	float 	fRec262_perm[4];
	float 	fRec261_perm[4];
	float 	fYec168_perm[4];
	float 	fRec264_perm[4];
	float 	fRec263_perm[4];
	float 	fYec169_perm[4];
	float 	fRec266_perm[4];
	float 	fRec265_perm[4];
	float 	fYec170_perm[4];
	float 	fYec171_perm[4];
	float 	fRec267_perm[4];
	float 	fRec268_perm[4];
	FAUSTFLOAT 	fslider7;
	float 	fYec172_perm[4];
	float 	fYec173_perm[4];
	float 	fRec270_perm[4];
	float 	fYec174_perm[4];
	float 	fYec175_perm[4];
	float 	fRec271_perm[4];
	float 	fYec176_perm[4];
	float 	fYec177_perm[4];
	float 	fRec272_perm[4];
	float 	fYec178_perm[4];
	float 	fYec179_perm[4];
	float 	fRec273_perm[4];
	float 	fYec180_perm[4];
	float 	fYec181_perm[4];
	float 	fRec274_perm[4];
	float 	fYec182_perm[4];
	float 	fYec183_perm[4];
	float 	fRec275_perm[4];
	float 	fYec184_perm[4];
	float 	fYec185_perm[4];
	float 	fRec276_perm[4];
	float 	fYec186_perm[4];
	float 	fRec269_perm[4];
	FAUSTFLOAT 	fslider8;
	float 	fYec187_perm[4];
	float 	fYec188_perm[4];
	float 	fRec278_perm[4];
	float 	fYec189_perm[4];
	float 	fYec190_perm[4];
	float 	fRec279_perm[4];
	float 	fYec191_perm[4];
	float 	fYec192_perm[4];
	float 	fRec280_perm[4];
	float 	fYec193_perm[4];
	float 	fYec194_perm[4];
	float 	fRec281_perm[4];
	float 	fYec195_perm[4];
	float 	fRec277_perm[4];
	FAUSTFLOAT 	fslider9;
	float 	fYec196_perm[4];
	float 	fRec282_perm[4];
	FAUSTFLOAT 	fslider10;
	float 	fYec197_perm[4];
	float 	fRec283_perm[4];
	FAUSTFLOAT 	fslider11;
	FAUSTFLOAT 	fslider12;
	float 	fConst26;
	float 	fConst27;
	int 	iRec289_perm[4];
	int 	iConst28;
	float 	fRec286_perm[4];
	int 	iRec287_perm[4];
	float 	fRec288_perm[4];
	float 	fConst29;
	float 	fYec198_perm[4];
	float 	fRec285_perm[4];
	float 	fRec284_perm[4];
	float 	fConst30;
	float 	fYec199_perm[4];
	FAUSTFLOAT 	fslider13;
	FAUSTFLOAT 	fslider14;
	float 	fRec290_perm[4];
	FAUSTFLOAT 	fslider15;
	FAUSTFLOAT 	fslider16;
	float 	fConst31;
	float 	fRec291_perm[4];
	FAUSTFLOAT 	fslider17;
	float 	fYec200_perm[4];
	float 	fConst32;
	float 	fRec293_perm[4];
	float 	fYec201_perm[4];
	float 	fConst33;
	float 	fRec292_perm[4];
	FAUSTFLOAT 	fslider18;
	float 	fYec202_perm[4];
	float 	fConst34;
	float 	fRec295_perm[4];
	float 	fYec203_perm[4];
	float 	fConst35;
	float 	fRec294_perm[4];
	FAUSTFLOAT 	fslider19;
	float 	fYec204_perm[4];
	float 	fConst36;
	float 	fRec297_perm[4];
	float 	fYec205_perm[4];
	float 	fConst37;
	float 	fRec296_perm[4];
	FAUSTFLOAT 	fslider20;
	float 	fYec206_perm[4];
	float 	fConst38;
	float 	fRec299_perm[4];
	float 	fYec207_perm[4];
	float 	fConst39;
	float 	fRec298_perm[4];
	FAUSTFLOAT 	fslider21;
	float 	fRec301_perm[4];
	float 	fRec300_perm[4];
	float 	fRec303_perm[4];
	float 	fRec302_perm[4];
	float 	fRec305_perm[4];
	float 	fRec304_perm[4];
	float 	fRec307_perm[4];
	float 	fRec306_perm[4];
	FAUSTFLOAT 	fslider22;
	float 	fRec308_perm[4];
  public:
	static void metadata(Meta* m) 	{ 
		m->declare("name", "Foo YC-20 simulation");
		m->declare("author", "Sampo Savolainen");
		m->declare("license", "GPLv3");
		m->declare("copyright", "(c)Sampo Savolainen 2009");
	}

	virtual int getNumInputs() 	{ return 0; }
	virtual int getNumOutputs() 	{ return 3; }
	static void classInit(int samplingFreq) {
	}
	virtual void instanceInit(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fslider0 = 0.0f;
		fbutton0 = 0.0;
		for (int i=0; i<4; i++) fVec0_perm[i]=0;
		fslider1 = 0.0f;
		fslider2 = 0.0f;
		fConst0 = float(fSamplingFreq);
		fConst1 = (1.0f / fConst0);
		for (int i=0; i<4; i++) fRec5_perm[i]=0;
		fslider3 = 0.0f;
		for (int i=0; i<4; i++) fRec4_perm[i]=0;
		for (int i=0; i<4; i++) iRec3_perm[i]=0;
		for (int i=0; i<4; i++) fYec0_perm[i]=0;
		for (int i=0; i<4; i++) iRec6_perm[i]=0;
		for (int i=0; i<4; i++) fYec1_perm[i]=0;
		for (int i=0; i<4; i++) iRec7_perm[i]=0;
		for (int i=0; i<4; i++) fYec2_perm[i]=0;
		for (int i=0; i<4; i++) iRec8_perm[i]=0;
		for (int i=0; i<4; i++) fYec3_perm[i]=0;
		for (int i=0; i<4; i++) iRec9_perm[i]=0;
		for (int i=0; i<4; i++) fYec4_perm[i]=0;
		for (int i=0; i<4; i++) iRec10_perm[i]=0;
		for (int i=0; i<4; i++) fYec5_perm[i]=0;
		for (int i=0; i<4; i++) fYec6_perm[i]=0;
		fConst2 = (833.3333333333334f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec2_perm[i]=0;
		fConst3 = (1.0f / fSamplingFreq);
		fConst4 = (0.00223066398390342f / (fConst3 + 0.00223066398390342f));
		for (int i=0; i<4; i++) fRec1_perm[i]=0;
		fbutton1 = 0.0;
		for (int i=0; i<4; i++) fVec1_perm[i]=0;
		for (int i=0; i<4; i++) fRec14_perm[i]=0;
		for (int i=0; i<4; i++) iRec13_perm[i]=0;
		for (int i=0; i<4; i++) fYec7_perm[i]=0;
		for (int i=0; i<4; i++) iRec15_perm[i]=0;
		for (int i=0; i<4; i++) fYec8_perm[i]=0;
		for (int i=0; i<4; i++) iRec16_perm[i]=0;
		for (int i=0; i<4; i++) fYec9_perm[i]=0;
		for (int i=0; i<4; i++) iRec17_perm[i]=0;
		for (int i=0; i<4; i++) fYec10_perm[i]=0;
		for (int i=0; i<4; i++) iRec18_perm[i]=0;
		for (int i=0; i<4; i++) fYec11_perm[i]=0;
		for (int i=0; i<4; i++) iRec19_perm[i]=0;
		for (int i=0; i<4; i++) fYec12_perm[i]=0;
		for (int i=0; i<4; i++) fYec13_perm[i]=0;
		for (int i=0; i<4; i++) fRec12_perm[i]=0;
		for (int i=0; i<4; i++) fRec11_perm[i]=0;
		fbutton2 = 0.0;
		for (int i=0; i<4; i++) fVec2_perm[i]=0;
		for (int i=0; i<4; i++) fRec23_perm[i]=0;
		for (int i=0; i<4; i++) iRec22_perm[i]=0;
		for (int i=0; i<4; i++) fYec14_perm[i]=0;
		for (int i=0; i<4; i++) iRec24_perm[i]=0;
		for (int i=0; i<4; i++) fYec15_perm[i]=0;
		for (int i=0; i<4; i++) iRec25_perm[i]=0;
		for (int i=0; i<4; i++) fYec16_perm[i]=0;
		for (int i=0; i<4; i++) iRec26_perm[i]=0;
		for (int i=0; i<4; i++) fYec17_perm[i]=0;
		for (int i=0; i<4; i++) iRec27_perm[i]=0;
		for (int i=0; i<4; i++) fYec18_perm[i]=0;
		for (int i=0; i<4; i++) iRec28_perm[i]=0;
		for (int i=0; i<4; i++) fYec19_perm[i]=0;
		for (int i=0; i<4; i++) fYec20_perm[i]=0;
		for (int i=0; i<4; i++) fRec21_perm[i]=0;
		for (int i=0; i<4; i++) fRec20_perm[i]=0;
		fbutton3 = 0.0;
		for (int i=0; i<4; i++) fVec3_perm[i]=0;
		for (int i=0; i<4; i++) fRec32_perm[i]=0;
		for (int i=0; i<4; i++) iRec31_perm[i]=0;
		for (int i=0; i<4; i++) fYec21_perm[i]=0;
		for (int i=0; i<4; i++) iRec33_perm[i]=0;
		for (int i=0; i<4; i++) fYec22_perm[i]=0;
		for (int i=0; i<4; i++) iRec34_perm[i]=0;
		for (int i=0; i<4; i++) fYec23_perm[i]=0;
		for (int i=0; i<4; i++) iRec35_perm[i]=0;
		for (int i=0; i<4; i++) fYec24_perm[i]=0;
		for (int i=0; i<4; i++) iRec36_perm[i]=0;
		for (int i=0; i<4; i++) fYec25_perm[i]=0;
		for (int i=0; i<4; i++) iRec37_perm[i]=0;
		for (int i=0; i<4; i++) fYec26_perm[i]=0;
		for (int i=0; i<4; i++) fYec27_perm[i]=0;
		for (int i=0; i<4; i++) fRec30_perm[i]=0;
		for (int i=0; i<4; i++) fRec29_perm[i]=0;
		fbutton4 = 0.0;
		for (int i=0; i<4; i++) fVec4_perm[i]=0;
		for (int i=0; i<4; i++) fRec41_perm[i]=0;
		for (int i=0; i<4; i++) iRec40_perm[i]=0;
		for (int i=0; i<4; i++) fYec28_perm[i]=0;
		for (int i=0; i<4; i++) iRec42_perm[i]=0;
		for (int i=0; i<4; i++) fYec29_perm[i]=0;
		for (int i=0; i<4; i++) iRec43_perm[i]=0;
		for (int i=0; i<4; i++) fYec30_perm[i]=0;
		for (int i=0; i<4; i++) iRec44_perm[i]=0;
		for (int i=0; i<4; i++) fYec31_perm[i]=0;
		for (int i=0; i<4; i++) iRec45_perm[i]=0;
		for (int i=0; i<4; i++) fYec32_perm[i]=0;
		for (int i=0; i<4; i++) iRec46_perm[i]=0;
		for (int i=0; i<4; i++) fYec33_perm[i]=0;
		for (int i=0; i<4; i++) fYec34_perm[i]=0;
		fConst5 = (1e+03f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec39_perm[i]=0;
		for (int i=0; i<4; i++) fRec38_perm[i]=0;
		fbutton5 = 0.0;
		for (int i=0; i<4; i++) fVec5_perm[i]=0;
		for (int i=0; i<4; i++) fRec50_perm[i]=0;
		for (int i=0; i<4; i++) iRec49_perm[i]=0;
		for (int i=0; i<4; i++) fYec35_perm[i]=0;
		for (int i=0; i<4; i++) iRec51_perm[i]=0;
		for (int i=0; i<4; i++) fYec36_perm[i]=0;
		for (int i=0; i<4; i++) iRec52_perm[i]=0;
		for (int i=0; i<4; i++) fYec37_perm[i]=0;
		for (int i=0; i<4; i++) iRec53_perm[i]=0;
		for (int i=0; i<4; i++) fYec38_perm[i]=0;
		for (int i=0; i<4; i++) iRec54_perm[i]=0;
		for (int i=0; i<4; i++) fYec39_perm[i]=0;
		for (int i=0; i<4; i++) iRec55_perm[i]=0;
		for (int i=0; i<4; i++) fYec40_perm[i]=0;
		for (int i=0; i<4; i++) fYec41_perm[i]=0;
		for (int i=0; i<4; i++) fRec48_perm[i]=0;
		for (int i=0; i<4; i++) fRec47_perm[i]=0;
		fbutton6 = 0.0;
		for (int i=0; i<4; i++) fVec6_perm[i]=0;
		for (int i=0; i<4; i++) fRec59_perm[i]=0;
		for (int i=0; i<4; i++) iRec58_perm[i]=0;
		for (int i=0; i<4; i++) fYec42_perm[i]=0;
		for (int i=0; i<4; i++) iRec60_perm[i]=0;
		for (int i=0; i<4; i++) fYec43_perm[i]=0;
		for (int i=0; i<4; i++) iRec61_perm[i]=0;
		for (int i=0; i<4; i++) fYec44_perm[i]=0;
		for (int i=0; i<4; i++) iRec62_perm[i]=0;
		for (int i=0; i<4; i++) fYec45_perm[i]=0;
		for (int i=0; i<4; i++) iRec63_perm[i]=0;
		for (int i=0; i<4; i++) fYec46_perm[i]=0;
		for (int i=0; i<4; i++) iRec64_perm[i]=0;
		for (int i=0; i<4; i++) fYec47_perm[i]=0;
		for (int i=0; i<4; i++) fYec48_perm[i]=0;
		for (int i=0; i<4; i++) fRec57_perm[i]=0;
		for (int i=0; i<4; i++) fRec56_perm[i]=0;
		fbutton7 = 0.0;
		for (int i=0; i<4; i++) fVec7_perm[i]=0;
		for (int i=0; i<4; i++) fRec68_perm[i]=0;
		for (int i=0; i<4; i++) iRec67_perm[i]=0;
		for (int i=0; i<4; i++) fYec49_perm[i]=0;
		for (int i=0; i<4; i++) iRec69_perm[i]=0;
		for (int i=0; i<4; i++) fYec50_perm[i]=0;
		for (int i=0; i<4; i++) iRec70_perm[i]=0;
		for (int i=0; i<4; i++) fYec51_perm[i]=0;
		for (int i=0; i<4; i++) iRec71_perm[i]=0;
		for (int i=0; i<4; i++) fYec52_perm[i]=0;
		for (int i=0; i<4; i++) iRec72_perm[i]=0;
		for (int i=0; i<4; i++) fYec53_perm[i]=0;
		for (int i=0; i<4; i++) iRec73_perm[i]=0;
		for (int i=0; i<4; i++) fYec54_perm[i]=0;
		for (int i=0; i<4; i++) fYec55_perm[i]=0;
		for (int i=0; i<4; i++) fRec66_perm[i]=0;
		for (int i=0; i<4; i++) fRec65_perm[i]=0;
		fbutton8 = 0.0;
		for (int i=0; i<4; i++) fVec8_perm[i]=0;
		for (int i=0; i<4; i++) fRec77_perm[i]=0;
		for (int i=0; i<4; i++) iRec76_perm[i]=0;
		for (int i=0; i<4; i++) fYec56_perm[i]=0;
		for (int i=0; i<4; i++) iRec78_perm[i]=0;
		for (int i=0; i<4; i++) fYec57_perm[i]=0;
		for (int i=0; i<4; i++) iRec79_perm[i]=0;
		for (int i=0; i<4; i++) fYec58_perm[i]=0;
		for (int i=0; i<4; i++) iRec80_perm[i]=0;
		for (int i=0; i<4; i++) fYec59_perm[i]=0;
		for (int i=0; i<4; i++) iRec81_perm[i]=0;
		for (int i=0; i<4; i++) fYec60_perm[i]=0;
		for (int i=0; i<4; i++) iRec82_perm[i]=0;
		for (int i=0; i<4; i++) fYec61_perm[i]=0;
		for (int i=0; i<4; i++) fYec62_perm[i]=0;
		fConst6 = (1219.5121951219512f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec75_perm[i]=0;
		for (int i=0; i<4; i++) fRec74_perm[i]=0;
		fbutton9 = 0.0;
		for (int i=0; i<4; i++) fVec9_perm[i]=0;
		for (int i=0; i<4; i++) fRec86_perm[i]=0;
		for (int i=0; i<4; i++) iRec85_perm[i]=0;
		for (int i=0; i<4; i++) fYec63_perm[i]=0;
		for (int i=0; i<4; i++) iRec87_perm[i]=0;
		for (int i=0; i<4; i++) fYec64_perm[i]=0;
		for (int i=0; i<4; i++) iRec88_perm[i]=0;
		for (int i=0; i<4; i++) fYec65_perm[i]=0;
		for (int i=0; i<4; i++) iRec89_perm[i]=0;
		for (int i=0; i<4; i++) fYec66_perm[i]=0;
		for (int i=0; i<4; i++) iRec90_perm[i]=0;
		for (int i=0; i<4; i++) fYec67_perm[i]=0;
		for (int i=0; i<4; i++) iRec91_perm[i]=0;
		for (int i=0; i<4; i++) fYec68_perm[i]=0;
		for (int i=0; i<4; i++) fYec69_perm[i]=0;
		for (int i=0; i<4; i++) fRec84_perm[i]=0;
		for (int i=0; i<4; i++) fRec83_perm[i]=0;
		fbutton10 = 0.0;
		for (int i=0; i<4; i++) fVec10_perm[i]=0;
		for (int i=0; i<4; i++) fRec95_perm[i]=0;
		for (int i=0; i<4; i++) iRec94_perm[i]=0;
		for (int i=0; i<4; i++) fYec70_perm[i]=0;
		for (int i=0; i<4; i++) iRec96_perm[i]=0;
		for (int i=0; i<4; i++) fYec71_perm[i]=0;
		for (int i=0; i<4; i++) iRec97_perm[i]=0;
		for (int i=0; i<4; i++) fYec72_perm[i]=0;
		for (int i=0; i<4; i++) iRec98_perm[i]=0;
		for (int i=0; i<4; i++) fYec73_perm[i]=0;
		for (int i=0; i<4; i++) iRec99_perm[i]=0;
		for (int i=0; i<4; i++) fYec74_perm[i]=0;
		for (int i=0; i<4; i++) iRec100_perm[i]=0;
		for (int i=0; i<4; i++) fYec75_perm[i]=0;
		for (int i=0; i<4; i++) fYec76_perm[i]=0;
		for (int i=0; i<4; i++) fRec93_perm[i]=0;
		for (int i=0; i<4; i++) fRec92_perm[i]=0;
		fbutton11 = 0.0;
		for (int i=0; i<4; i++) fVec11_perm[i]=0;
		for (int i=0; i<4; i++) fRec104_perm[i]=0;
		for (int i=0; i<4; i++) iRec103_perm[i]=0;
		for (int i=0; i<4; i++) fYec77_perm[i]=0;
		for (int i=0; i<4; i++) iRec105_perm[i]=0;
		for (int i=0; i<4; i++) fYec78_perm[i]=0;
		for (int i=0; i<4; i++) iRec106_perm[i]=0;
		for (int i=0; i<4; i++) fYec79_perm[i]=0;
		for (int i=0; i<4; i++) iRec107_perm[i]=0;
		for (int i=0; i<4; i++) fYec80_perm[i]=0;
		for (int i=0; i<4; i++) iRec108_perm[i]=0;
		for (int i=0; i<4; i++) fYec81_perm[i]=0;
		for (int i=0; i<4; i++) iRec109_perm[i]=0;
		for (int i=0; i<4; i++) fYec82_perm[i]=0;
		for (int i=0; i<4; i++) fYec83_perm[i]=0;
		for (int i=0; i<4; i++) fRec102_perm[i]=0;
		for (int i=0; i<4; i++) fRec101_perm[i]=0;
		fbutton12 = 0.0;
		for (int i=0; i<4; i++) fVec12_perm[i]=0;
		for (int i=0; i<4; i++) fYec84_perm[i]=0;
		for (int i=0; i<4; i++) fRec111_perm[i]=0;
		fConst7 = (0.003596453201970443f / (fConst3 + 0.003596453201970443f));
		for (int i=0; i<4; i++) fRec110_perm[i]=0;
		fbutton13 = 0.0;
		for (int i=0; i<4; i++) fVec13_perm[i]=0;
		for (int i=0; i<4; i++) fYec85_perm[i]=0;
		for (int i=0; i<4; i++) fRec113_perm[i]=0;
		for (int i=0; i<4; i++) fRec112_perm[i]=0;
		fbutton14 = 0.0;
		for (int i=0; i<4; i++) fVec14_perm[i]=0;
		for (int i=0; i<4; i++) fYec86_perm[i]=0;
		for (int i=0; i<4; i++) fRec115_perm[i]=0;
		for (int i=0; i<4; i++) fRec114_perm[i]=0;
		fbutton15 = 0.0;
		for (int i=0; i<4; i++) fVec15_perm[i]=0;
		for (int i=0; i<4; i++) fYec87_perm[i]=0;
		for (int i=0; i<4; i++) fRec117_perm[i]=0;
		for (int i=0; i<4; i++) fRec116_perm[i]=0;
		fbutton16 = 0.0;
		for (int i=0; i<4; i++) fVec16_perm[i]=0;
		for (int i=0; i<4; i++) fYec88_perm[i]=0;
		fConst8 = (1470.5882352941176f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec119_perm[i]=0;
		for (int i=0; i<4; i++) fRec118_perm[i]=0;
		fslider4 = 0.0f;
		fbutton17 = 0.0;
		for (int i=0; i<4; i++) fVec17_perm[i]=0;
		for (int i=0; i<4; i++) fYec89_perm[i]=0;
		for (int i=0; i<4; i++) fRec121_perm[i]=0;
		for (int i=0; i<4; i++) fRec120_perm[i]=0;
		fbutton18 = 0.0;
		for (int i=0; i<4; i++) fVec18_perm[i]=0;
		for (int i=0; i<4; i++) fYec90_perm[i]=0;
		for (int i=0; i<4; i++) fRec123_perm[i]=0;
		for (int i=0; i<4; i++) fRec122_perm[i]=0;
		fbutton19 = 0.0;
		for (int i=0; i<4; i++) fVec19_perm[i]=0;
		for (int i=0; i<4; i++) fYec91_perm[i]=0;
		for (int i=0; i<4; i++) fRec125_perm[i]=0;
		for (int i=0; i<4; i++) fRec124_perm[i]=0;
		fbutton20 = 0.0;
		for (int i=0; i<4; i++) fVec20_perm[i]=0;
		for (int i=0; i<4; i++) fYec92_perm[i]=0;
		fConst9 = (1785.7142857142858f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec127_perm[i]=0;
		for (int i=0; i<4; i++) fRec126_perm[i]=0;
		fbutton21 = 0.0;
		for (int i=0; i<4; i++) fVec21_perm[i]=0;
		for (int i=0; i<4; i++) fYec93_perm[i]=0;
		for (int i=0; i<4; i++) fRec129_perm[i]=0;
		for (int i=0; i<4; i++) fRec128_perm[i]=0;
		fbutton22 = 0.0;
		for (int i=0; i<4; i++) fVec22_perm[i]=0;
		for (int i=0; i<4; i++) fYec94_perm[i]=0;
		for (int i=0; i<4; i++) fRec131_perm[i]=0;
		for (int i=0; i<4; i++) fRec130_perm[i]=0;
		fbutton23 = 0.0;
		for (int i=0; i<4; i++) fVec23_perm[i]=0;
		for (int i=0; i<4; i++) fYec95_perm[i]=0;
		for (int i=0; i<4; i++) fRec133_perm[i]=0;
		for (int i=0; i<4; i++) fRec132_perm[i]=0;
		fbutton24 = 0.0;
		for (int i=0; i<4; i++) fVec24_perm[i]=0;
		for (int i=0; i<4; i++) fYec96_perm[i]=0;
		fConst10 = (2127.659574468085f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec135_perm[i]=0;
		fConst11 = (0.007374545454545454f / (fConst3 + 0.007374545454545454f));
		for (int i=0; i<4; i++) fRec134_perm[i]=0;
		fbutton25 = 0.0;
		for (int i=0; i<4; i++) fVec25_perm[i]=0;
		for (int i=0; i<4; i++) fYec97_perm[i]=0;
		for (int i=0; i<4; i++) fRec137_perm[i]=0;
		for (int i=0; i<4; i++) fRec136_perm[i]=0;
		fbutton26 = 0.0;
		for (int i=0; i<4; i++) fVec26_perm[i]=0;
		for (int i=0; i<4; i++) fYec98_perm[i]=0;
		for (int i=0; i<4; i++) fRec139_perm[i]=0;
		for (int i=0; i<4; i++) fRec138_perm[i]=0;
		fbutton27 = 0.0;
		for (int i=0; i<4; i++) fVec27_perm[i]=0;
		for (int i=0; i<4; i++) fYec99_perm[i]=0;
		for (int i=0; i<4; i++) fRec141_perm[i]=0;
		for (int i=0; i<4; i++) fRec140_perm[i]=0;
		fbutton28 = 0.0;
		for (int i=0; i<4; i++) fVec28_perm[i]=0;
		for (int i=0; i<4; i++) fYec100_perm[i]=0;
		fConst12 = (2564.102564102564f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec143_perm[i]=0;
		for (int i=0; i<4; i++) fRec142_perm[i]=0;
		fbutton29 = 0.0;
		for (int i=0; i<4; i++) fVec29_perm[i]=0;
		for (int i=0; i<4; i++) fYec101_perm[i]=0;
		for (int i=0; i<4; i++) fRec145_perm[i]=0;
		for (int i=0; i<4; i++) fRec144_perm[i]=0;
		fbutton30 = 0.0;
		for (int i=0; i<4; i++) fVec30_perm[i]=0;
		for (int i=0; i<4; i++) fYec102_perm[i]=0;
		for (int i=0; i<4; i++) fRec147_perm[i]=0;
		for (int i=0; i<4; i++) fRec146_perm[i]=0;
		fbutton31 = 0.0;
		for (int i=0; i<4; i++) fVec31_perm[i]=0;
		for (int i=0; i<4; i++) fYec103_perm[i]=0;
		for (int i=0; i<4; i++) fRec149_perm[i]=0;
		for (int i=0; i<4; i++) fRec148_perm[i]=0;
		fbutton32 = 0.0;
		for (int i=0; i<4; i++) fVec32_perm[i]=0;
		for (int i=0; i<4; i++) fYec104_perm[i]=0;
		fConst13 = (3703.703703703704f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec151_perm[i]=0;
		for (int i=0; i<4; i++) fRec150_perm[i]=0;
		fbutton33 = 0.0;
		for (int i=0; i<4; i++) fVec33_perm[i]=0;
		for (int i=0; i<4; i++) fYec105_perm[i]=0;
		for (int i=0; i<4; i++) fRec153_perm[i]=0;
		for (int i=0; i<4; i++) fRec152_perm[i]=0;
		fbutton34 = 0.0;
		for (int i=0; i<4; i++) fVec34_perm[i]=0;
		for (int i=0; i<4; i++) fYec106_perm[i]=0;
		for (int i=0; i<4; i++) fRec155_perm[i]=0;
		for (int i=0; i<4; i++) fRec154_perm[i]=0;
		fbutton35 = 0.0;
		for (int i=0; i<4; i++) fVec35_perm[i]=0;
		for (int i=0; i<4; i++) fYec107_perm[i]=0;
		for (int i=0; i<4; i++) fRec157_perm[i]=0;
		for (int i=0; i<4; i++) fRec156_perm[i]=0;
		fbutton36 = 0.0;
		for (int i=0; i<4; i++) fVec36_perm[i]=0;
		for (int i=0; i<4; i++) fYec108_perm[i]=0;
		fConst14 = (4545.454545454545f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec159_perm[i]=0;
		for (int i=0; i<4; i++) fRec158_perm[i]=0;
		fbutton37 = 0.0;
		for (int i=0; i<4; i++) fVec37_perm[i]=0;
		for (int i=0; i<4; i++) fYec109_perm[i]=0;
		for (int i=0; i<4; i++) fRec161_perm[i]=0;
		for (int i=0; i<4; i++) fRec160_perm[i]=0;
		fbutton38 = 0.0;
		for (int i=0; i<4; i++) fVec38_perm[i]=0;
		for (int i=0; i<4; i++) fYec110_perm[i]=0;
		for (int i=0; i<4; i++) fRec163_perm[i]=0;
		for (int i=0; i<4; i++) fRec162_perm[i]=0;
		fbutton39 = 0.0;
		for (int i=0; i<4; i++) fVec39_perm[i]=0;
		for (int i=0; i<4; i++) fYec111_perm[i]=0;
		for (int i=0; i<4; i++) fRec165_perm[i]=0;
		for (int i=0; i<4; i++) fRec164_perm[i]=0;
		fbutton40 = 0.0;
		for (int i=0; i<4; i++) fVec40_perm[i]=0;
		for (int i=0; i<4; i++) fYec112_perm[i]=0;
		fConst15 = (5555.555555555556f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec167_perm[i]=0;
		for (int i=0; i<4; i++) fRec166_perm[i]=0;
		fbutton41 = 0.0;
		for (int i=0; i<4; i++) fVec41_perm[i]=0;
		for (int i=0; i<4; i++) fYec113_perm[i]=0;
		for (int i=0; i<4; i++) fRec169_perm[i]=0;
		for (int i=0; i<4; i++) fRec168_perm[i]=0;
		fbutton42 = 0.0;
		for (int i=0; i<4; i++) fVec42_perm[i]=0;
		for (int i=0; i<4; i++) fYec114_perm[i]=0;
		for (int i=0; i<4; i++) fRec171_perm[i]=0;
		for (int i=0; i<4; i++) fRec170_perm[i]=0;
		fbutton43 = 0.0;
		for (int i=0; i<4; i++) fVec43_perm[i]=0;
		for (int i=0; i<4; i++) fYec115_perm[i]=0;
		for (int i=0; i<4; i++) fRec173_perm[i]=0;
		for (int i=0; i<4; i++) fRec172_perm[i]=0;
		fbutton44 = 0.0;
		for (int i=0; i<4; i++) fVec44_perm[i]=0;
		for (int i=0; i<4; i++) fYec116_perm[i]=0;
		fConst16 = (8333.333333333334f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec175_perm[i]=0;
		for (int i=0; i<4; i++) fRec174_perm[i]=0;
		fbutton45 = 0.0;
		for (int i=0; i<4; i++) fVec45_perm[i]=0;
		for (int i=0; i<4; i++) fYec117_perm[i]=0;
		for (int i=0; i<4; i++) fRec177_perm[i]=0;
		for (int i=0; i<4; i++) fRec176_perm[i]=0;
		fbutton46 = 0.0;
		for (int i=0; i<4; i++) fVec46_perm[i]=0;
		for (int i=0; i<4; i++) fYec118_perm[i]=0;
		for (int i=0; i<4; i++) fRec179_perm[i]=0;
		for (int i=0; i<4; i++) fRec178_perm[i]=0;
		fbutton47 = 0.0;
		for (int i=0; i<4; i++) fVec47_perm[i]=0;
		for (int i=0; i<4; i++) fYec119_perm[i]=0;
		for (int i=0; i<4; i++) fRec181_perm[i]=0;
		for (int i=0; i<4; i++) fRec180_perm[i]=0;
		fbutton48 = 0.0;
		for (int i=0; i<4; i++) fVec48_perm[i]=0;
		for (int i=0; i<4; i++) fYec120_perm[i]=0;
		fConst17 = (1e+04f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec183_perm[i]=0;
		for (int i=0; i<4; i++) fRec182_perm[i]=0;
		fbutton49 = 0.0;
		for (int i=0; i<4; i++) fVec49_perm[i]=0;
		for (int i=0; i<4; i++) fYec121_perm[i]=0;
		for (int i=0; i<4; i++) fRec185_perm[i]=0;
		for (int i=0; i<4; i++) fRec184_perm[i]=0;
		fbutton50 = 0.0;
		for (int i=0; i<4; i++) fVec50_perm[i]=0;
		for (int i=0; i<4; i++) fYec122_perm[i]=0;
		for (int i=0; i<4; i++) fRec187_perm[i]=0;
		for (int i=0; i<4; i++) fRec186_perm[i]=0;
		fbutton51 = 0.0;
		for (int i=0; i<4; i++) fVec51_perm[i]=0;
		for (int i=0; i<4; i++) fYec123_perm[i]=0;
		for (int i=0; i<4; i++) fRec189_perm[i]=0;
		for (int i=0; i<4; i++) fRec188_perm[i]=0;
		fbutton52 = 0.0;
		for (int i=0; i<4; i++) fVec52_perm[i]=0;
		for (int i=0; i<4; i++) fYec124_perm[i]=0;
		fConst18 = (12195.121951219513f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec191_perm[i]=0;
		for (int i=0; i<4; i++) fRec190_perm[i]=0;
		fbutton53 = 0.0;
		for (int i=0; i<4; i++) fVec53_perm[i]=0;
		for (int i=0; i<4; i++) fYec125_perm[i]=0;
		for (int i=0; i<4; i++) fRec193_perm[i]=0;
		for (int i=0; i<4; i++) fRec192_perm[i]=0;
		fbutton54 = 0.0;
		for (int i=0; i<4; i++) fVec54_perm[i]=0;
		for (int i=0; i<4; i++) fYec126_perm[i]=0;
		for (int i=0; i<4; i++) fRec195_perm[i]=0;
		for (int i=0; i<4; i++) fRec194_perm[i]=0;
		fbutton55 = 0.0;
		for (int i=0; i<4; i++) fVec55_perm[i]=0;
		for (int i=0; i<4; i++) fYec127_perm[i]=0;
		for (int i=0; i<4; i++) fRec197_perm[i]=0;
		for (int i=0; i<4; i++) fRec196_perm[i]=0;
		fbutton56 = 0.0;
		for (int i=0; i<4; i++) fVec56_perm[i]=0;
		for (int i=0; i<4; i++) fYec128_perm[i]=0;
		fConst19 = (17857.14285714286f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec199_perm[i]=0;
		for (int i=0; i<4; i++) fRec198_perm[i]=0;
		fbutton57 = 0.0;
		for (int i=0; i<4; i++) fVec57_perm[i]=0;
		for (int i=0; i<4; i++) fYec129_perm[i]=0;
		for (int i=0; i<4; i++) fRec201_perm[i]=0;
		for (int i=0; i<4; i++) fRec200_perm[i]=0;
		fbutton58 = 0.0;
		for (int i=0; i<4; i++) fVec58_perm[i]=0;
		for (int i=0; i<4; i++) fYec130_perm[i]=0;
		for (int i=0; i<4; i++) fRec203_perm[i]=0;
		for (int i=0; i<4; i++) fRec202_perm[i]=0;
		fbutton59 = 0.0;
		for (int i=0; i<4; i++) fVec59_perm[i]=0;
		for (int i=0; i<4; i++) fYec131_perm[i]=0;
		for (int i=0; i<4; i++) fRec205_perm[i]=0;
		for (int i=0; i<4; i++) fRec204_perm[i]=0;
		fbutton60 = 0.0;
		for (int i=0; i<4; i++) fVec60_perm[i]=0;
		for (int i=0; i<4; i++) fYec132_perm[i]=0;
		fConst20 = (21276.59574468085f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec207_perm[i]=0;
		for (int i=0; i<4; i++) fRec206_perm[i]=0;
		for (int i=0; i<4; i++) fYec133_perm[i]=0;
		fConst21 = (0.0001f / (0.0001f + fConst3));
		for (int i=0; i<4; i++) fRec0_perm[i]=0;
		fslider5 = 1.0f;
		for (int i=0; i<4; i++) iRec211_perm[i]=0;
		for (int i=0; i<4; i++) fYec134_perm[i]=0;
		for (int i=0; i<4; i++) fYec135_perm[i]=0;
		fConst22 = (666.6666666666666f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec210_perm[i]=0;
		fConst23 = (0.0016849851632047478f / (fConst3 + 0.0016849851632047478f));
		for (int i=0; i<4; i++) fRec209_perm[i]=0;
		for (int i=0; i<4; i++) iRec214_perm[i]=0;
		for (int i=0; i<4; i++) fYec136_perm[i]=0;
		for (int i=0; i<4; i++) fYec137_perm[i]=0;
		for (int i=0; i<4; i++) fRec213_perm[i]=0;
		for (int i=0; i<4; i++) fRec212_perm[i]=0;
		for (int i=0; i<4; i++) iRec217_perm[i]=0;
		for (int i=0; i<4; i++) fYec138_perm[i]=0;
		for (int i=0; i<4; i++) fYec139_perm[i]=0;
		for (int i=0; i<4; i++) fRec216_perm[i]=0;
		for (int i=0; i<4; i++) fRec215_perm[i]=0;
		for (int i=0; i<4; i++) iRec220_perm[i]=0;
		for (int i=0; i<4; i++) fYec140_perm[i]=0;
		for (int i=0; i<4; i++) fYec141_perm[i]=0;
		for (int i=0; i<4; i++) fRec219_perm[i]=0;
		for (int i=0; i<4; i++) fRec218_perm[i]=0;
		for (int i=0; i<4; i++) iRec223_perm[i]=0;
		for (int i=0; i<4; i++) fYec142_perm[i]=0;
		for (int i=0; i<4; i++) fYec143_perm[i]=0;
		for (int i=0; i<4; i++) fRec222_perm[i]=0;
		for (int i=0; i<4; i++) fRec221_perm[i]=0;
		for (int i=0; i<4; i++) iRec226_perm[i]=0;
		for (int i=0; i<4; i++) fYec144_perm[i]=0;
		for (int i=0; i<4; i++) fYec145_perm[i]=0;
		for (int i=0; i<4; i++) fRec225_perm[i]=0;
		for (int i=0; i<4; i++) fRec224_perm[i]=0;
		for (int i=0; i<4; i++) iRec229_perm[i]=0;
		for (int i=0; i<4; i++) fYec146_perm[i]=0;
		for (int i=0; i<4; i++) fYec147_perm[i]=0;
		for (int i=0; i<4; i++) fRec228_perm[i]=0;
		for (int i=0; i<4; i++) fRec227_perm[i]=0;
		for (int i=0; i<4; i++) iRec232_perm[i]=0;
		for (int i=0; i<4; i++) fYec148_perm[i]=0;
		for (int i=0; i<4; i++) fYec149_perm[i]=0;
		for (int i=0; i<4; i++) fRec231_perm[i]=0;
		for (int i=0; i<4; i++) fRec230_perm[i]=0;
		for (int i=0; i<4; i++) iRec235_perm[i]=0;
		for (int i=0; i<4; i++) fYec150_perm[i]=0;
		for (int i=0; i<4; i++) fYec151_perm[i]=0;
		for (int i=0; i<4; i++) fRec234_perm[i]=0;
		for (int i=0; i<4; i++) fRec233_perm[i]=0;
		for (int i=0; i<4; i++) iRec238_perm[i]=0;
		for (int i=0; i<4; i++) fYec152_perm[i]=0;
		for (int i=0; i<4; i++) fYec153_perm[i]=0;
		for (int i=0; i<4; i++) fRec237_perm[i]=0;
		for (int i=0; i<4; i++) fRec236_perm[i]=0;
		for (int i=0; i<4; i++) iRec241_perm[i]=0;
		for (int i=0; i<4; i++) fYec154_perm[i]=0;
		for (int i=0; i<4; i++) fYec155_perm[i]=0;
		for (int i=0; i<4; i++) fRec240_perm[i]=0;
		for (int i=0; i<4; i++) fRec239_perm[i]=0;
		for (int i=0; i<4; i++) iRec244_perm[i]=0;
		for (int i=0; i<4; i++) fYec156_perm[i]=0;
		for (int i=0; i<4; i++) fYec157_perm[i]=0;
		for (int i=0; i<4; i++) fRec243_perm[i]=0;
		for (int i=0; i<4; i++) fRec242_perm[i]=0;
		for (int i=0; i<4; i++) fYec158_perm[i]=0;
		for (int i=0; i<4; i++) fRec208_perm[i]=0;
		fslider6 = 0.5f;
		for (int i=0; i<4; i++) fYec159_perm[i]=0;
		for (int i=0; i<4; i++) fRec246_perm[i]=0;
		for (int i=0; i<4; i++) fRec245_perm[i]=0;
		for (int i=0; i<4; i++) fYec160_perm[i]=0;
		for (int i=0; i<4; i++) fRec248_perm[i]=0;
		for (int i=0; i<4; i++) fRec247_perm[i]=0;
		for (int i=0; i<4; i++) fYec161_perm[i]=0;
		for (int i=0; i<4; i++) fRec250_perm[i]=0;
		for (int i=0; i<4; i++) fRec249_perm[i]=0;
		for (int i=0; i<4; i++) fYec162_perm[i]=0;
		fConst24 = (25641.02564102564f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec252_perm[i]=0;
		for (int i=0; i<4; i++) fRec251_perm[i]=0;
		for (int i=0; i<4; i++) fYec163_perm[i]=0;
		for (int i=0; i<4; i++) fRec254_perm[i]=0;
		for (int i=0; i<4; i++) fRec253_perm[i]=0;
		for (int i=0; i<4; i++) fYec164_perm[i]=0;
		for (int i=0; i<4; i++) fRec256_perm[i]=0;
		for (int i=0; i<4; i++) fRec255_perm[i]=0;
		for (int i=0; i<4; i++) fYec165_perm[i]=0;
		for (int i=0; i<4; i++) fRec258_perm[i]=0;
		for (int i=0; i<4; i++) fRec257_perm[i]=0;
		for (int i=0; i<4; i++) fYec166_perm[i]=0;
		fConst25 = (37037.03703703704f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec260_perm[i]=0;
		for (int i=0; i<4; i++) fRec259_perm[i]=0;
		for (int i=0; i<4; i++) fYec167_perm[i]=0;
		for (int i=0; i<4; i++) fRec262_perm[i]=0;
		for (int i=0; i<4; i++) fRec261_perm[i]=0;
		for (int i=0; i<4; i++) fYec168_perm[i]=0;
		for (int i=0; i<4; i++) fRec264_perm[i]=0;
		for (int i=0; i<4; i++) fRec263_perm[i]=0;
		for (int i=0; i<4; i++) fYec169_perm[i]=0;
		for (int i=0; i<4; i++) fRec266_perm[i]=0;
		for (int i=0; i<4; i++) fRec265_perm[i]=0;
		for (int i=0; i<4; i++) fYec170_perm[i]=0;
		for (int i=0; i<4; i++) fYec171_perm[i]=0;
		for (int i=0; i<4; i++) fRec267_perm[i]=0;
		for (int i=0; i<4; i++) fRec268_perm[i]=0;
		fslider7 = 1.0f;
		for (int i=0; i<4; i++) fYec172_perm[i]=0;
		for (int i=0; i<4; i++) fYec173_perm[i]=0;
		for (int i=0; i<4; i++) fRec270_perm[i]=0;
		for (int i=0; i<4; i++) fYec174_perm[i]=0;
		for (int i=0; i<4; i++) fYec175_perm[i]=0;
		for (int i=0; i<4; i++) fRec271_perm[i]=0;
		for (int i=0; i<4; i++) fYec176_perm[i]=0;
		for (int i=0; i<4; i++) fYec177_perm[i]=0;
		for (int i=0; i<4; i++) fRec272_perm[i]=0;
		for (int i=0; i<4; i++) fYec178_perm[i]=0;
		for (int i=0; i<4; i++) fYec179_perm[i]=0;
		for (int i=0; i<4; i++) fRec273_perm[i]=0;
		for (int i=0; i<4; i++) fYec180_perm[i]=0;
		for (int i=0; i<4; i++) fYec181_perm[i]=0;
		for (int i=0; i<4; i++) fRec274_perm[i]=0;
		for (int i=0; i<4; i++) fYec182_perm[i]=0;
		for (int i=0; i<4; i++) fYec183_perm[i]=0;
		for (int i=0; i<4; i++) fRec275_perm[i]=0;
		for (int i=0; i<4; i++) fYec184_perm[i]=0;
		for (int i=0; i<4; i++) fYec185_perm[i]=0;
		for (int i=0; i<4; i++) fRec276_perm[i]=0;
		for (int i=0; i<4; i++) fYec186_perm[i]=0;
		for (int i=0; i<4; i++) fRec269_perm[i]=0;
		fslider8 = 0.5f;
		for (int i=0; i<4; i++) fYec187_perm[i]=0;
		for (int i=0; i<4; i++) fYec188_perm[i]=0;
		for (int i=0; i<4; i++) fRec278_perm[i]=0;
		for (int i=0; i<4; i++) fYec189_perm[i]=0;
		for (int i=0; i<4; i++) fYec190_perm[i]=0;
		for (int i=0; i<4; i++) fRec279_perm[i]=0;
		for (int i=0; i<4; i++) fYec191_perm[i]=0;
		for (int i=0; i<4; i++) fYec192_perm[i]=0;
		for (int i=0; i<4; i++) fRec280_perm[i]=0;
		for (int i=0; i<4; i++) fYec193_perm[i]=0;
		for (int i=0; i<4; i++) fYec194_perm[i]=0;
		for (int i=0; i<4; i++) fRec281_perm[i]=0;
		for (int i=0; i<4; i++) fYec195_perm[i]=0;
		for (int i=0; i<4; i++) fRec277_perm[i]=0;
		fslider9 = 1.0f;
		for (int i=0; i<4; i++) fYec196_perm[i]=0;
		for (int i=0; i<4; i++) fRec282_perm[i]=0;
		fslider10 = 0.0f;
		for (int i=0; i<4; i++) fYec197_perm[i]=0;
		for (int i=0; i<4; i++) fRec283_perm[i]=0;
		fslider11 = 0.5f;
		fslider12 = 1.0f;
		fConst26 = (36.243757712787264f / fConst0);
		fConst27 = (1.0f - fConst26);
		for (int i=0; i<4; i++) iRec289_perm[i]=0;
		iConst28 = int((0.001f * max(2.205e+04f, min(1.92e+05f, fConst0))));
		for (int i=0; i<4; i++) fRec286_perm[i]=0;
		for (int i=0; i<4; i++) iRec287_perm[i]=0;
		for (int i=0; i<4; i++) fRec288_perm[i]=0;
		fConst29 = (1.0f / iConst28);
		for (int i=0; i<4; i++) fYec198_perm[i]=0;
		for (int i=0; i<4; i++) fRec285_perm[i]=0;
		for (int i=0; i<4; i++) fRec284_perm[i]=0;
		fConst30 = (0.027590958087858178f * fConst0);
		for (int i=0; i<4; i++) fYec199_perm[i]=0;
		fslider13 = 1.0f;
		fslider14 = 1.0f;
		for (int i=0; i<4; i++) fRec290_perm[i]=0;
		fslider15 = 1.0f;
		fslider16 = 1.0f;
		fConst31 = (3968.253968253968f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec291_perm[i]=0;
		fslider17 = 1.0f;
		for (int i=0; i<4; i++) fYec200_perm[i]=0;
		fConst32 = (0.000858f / (fConst3 + 0.000858f));
		for (int i=0; i<4; i++) fRec293_perm[i]=0;
		for (int i=0; i<4; i++) fYec201_perm[i]=0;
		fConst33 = (0.000429f / (fConst3 + 0.000429f));
		for (int i=0; i<4; i++) fRec292_perm[i]=0;
		fslider18 = 1.0f;
		for (int i=0; i<4; i++) fYec202_perm[i]=0;
		fConst34 = (0.00039f / (fConst3 + 0.00039f));
		for (int i=0; i<4; i++) fRec295_perm[i]=0;
		for (int i=0; i<4; i++) fYec203_perm[i]=0;
		fConst35 = (0.000195f / (fConst3 + 0.000195f));
		for (int i=0; i<4; i++) fRec294_perm[i]=0;
		fslider19 = 1.0f;
		for (int i=0; i<4; i++) fYec204_perm[i]=0;
		fConst36 = (0.0001833f / (fConst3 + 0.0001833f));
		for (int i=0; i<4; i++) fRec297_perm[i]=0;
		for (int i=0; i<4; i++) fYec205_perm[i]=0;
		fConst37 = (9.165e-05f / (fConst3 + 9.165e-05f));
		for (int i=0; i<4; i++) fRec296_perm[i]=0;
		fslider20 = 1.0f;
		for (int i=0; i<4; i++) fYec206_perm[i]=0;
		fConst38 = (0.00010530000000000001f / (fConst3 + 0.00010530000000000001f));
		for (int i=0; i<4; i++) fRec299_perm[i]=0;
		for (int i=0; i<4; i++) fYec207_perm[i]=0;
		fConst39 = (5.2650000000000006e-05f / (fConst3 + 5.2650000000000006e-05f));
		for (int i=0; i<4; i++) fRec298_perm[i]=0;
		fslider21 = 0.0f;
		for (int i=0; i<4; i++) fRec301_perm[i]=0;
		for (int i=0; i<4; i++) fRec300_perm[i]=0;
		for (int i=0; i<4; i++) fRec303_perm[i]=0;
		for (int i=0; i<4; i++) fRec302_perm[i]=0;
		for (int i=0; i<4; i++) fRec305_perm[i]=0;
		for (int i=0; i<4; i++) fRec304_perm[i]=0;
		for (int i=0; i<4; i++) fRec307_perm[i]=0;
		for (int i=0; i<4; i++) fRec306_perm[i]=0;
		fslider22 = 0.1f;
		for (int i=0; i<4; i++) fRec308_perm[i]=0;
	}
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void buildUserInterface(UI* interface) {
		interface->openVerticalBox("yc20");
		interface->addButton("A0", &fbutton10);
		interface->addButton("A1", &fbutton22);
		interface->addButton("A2", &fbutton34);
		interface->addButton("A3", &fbutton46);
		interface->addButton("A4", &fbutton58);
		interface->addButton("C0", &fbutton1);
		interface->addButton("C1", &fbutton13);
		interface->addButton("C2", &fbutton25);
		interface->addButton("C3", &fbutton37);
		interface->addButton("C4", &fbutton49);
		interface->addButton("D0", &fbutton3);
		interface->addButton("D1", &fbutton15);
		interface->addButton("D2", &fbutton27);
		interface->addButton("D3", &fbutton39);
		interface->addButton("D4", &fbutton51);
		interface->addButton("F0", &fbutton6);
		interface->addButton("F1", &fbutton18);
		interface->addButton("F2", &fbutton30);
		interface->addButton("F3", &fbutton42);
		interface->addButton("F4", &fbutton54);
		interface->addButton("G0", &fbutton8);
		interface->addButton("G1", &fbutton20);
		interface->addButton("G2", &fbutton32);
		interface->addButton("G3", &fbutton44);
		interface->addButton("G4", &fbutton56);
		interface->openVerticalBox("[2]vibrato");
		interface->declare(&fslider3, "1", "");
		interface->addHorizontalSlider("depth", &fslider3, 0.0f, 0.0f, 1.0f, 0.2f);
		interface->declare(&fslider2, "2", "");
		interface->addHorizontalSlider("speed", &fslider2, 0.0f, 0.0f, 1.0f, 0.2f);
		interface->closeBox();
		interface->addButton("a0", &fbutton9);
		interface->addButton("a1", &fbutton21);
		interface->addButton("a2", &fbutton33);
		interface->addButton("a3", &fbutton45);
		interface->addButton("a4", &fbutton57);
		interface->addButton("b0", &fbutton11);
		interface->addButton("b1", &fbutton23);
		interface->addButton("b2", &fbutton35);
		interface->addButton("b3", &fbutton47);
		interface->addButton("b4", &fbutton59);
		interface->addHorizontalSlider("balance", &fslider12, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->openHorizontalBox("bass");
		interface->declare(&fslider16, "1", "");
		interface->addVerticalSlider("16' b", &fslider16, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider15, "2", "");
		interface->addVerticalSlider("8' b", &fslider15, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider4, "3", "");
		interface->addHorizontalSlider("bass manual", &fslider4, 0.0f, 0.0f, 1.0f, 1.0f);
		interface->declare(&fslider14, "3", "");
		interface->addVerticalSlider("bass volume", &fslider14, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->closeBox();
		interface->addButton("c0", &fbutton0);
		interface->addButton("c1", &fbutton12);
		interface->addButton("c2", &fbutton24);
		interface->addButton("c3", &fbutton36);
		interface->addButton("c4", &fbutton48);
		interface->addButton("c5", &fbutton60);
		interface->addButton("d0", &fbutton2);
		interface->addButton("d1", &fbutton14);
		interface->addButton("d2", &fbutton26);
		interface->addButton("d3", &fbutton38);
		interface->addButton("d4", &fbutton50);
		interface->addButton("e0", &fbutton4);
		interface->addButton("e1", &fbutton16);
		interface->addButton("e2", &fbutton28);
		interface->addButton("e3", &fbutton40);
		interface->addButton("e4", &fbutton52);
		interface->addButton("f0", &fbutton5);
		interface->addButton("f1", &fbutton17);
		interface->addButton("f2", &fbutton29);
		interface->addButton("f3", &fbutton41);
		interface->addButton("f4", &fbutton53);
		interface->addButton("g0", &fbutton7);
		interface->addButton("g1", &fbutton19);
		interface->addButton("g2", &fbutton31);
		interface->addButton("g3", &fbutton43);
		interface->addButton("g4", &fbutton55);
		interface->openHorizontalBox("i");
		interface->declare(&fslider6, "1", "");
		interface->addVerticalSlider("16' i", &fslider6, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider5, "2", "");
		interface->addVerticalSlider("8' i", &fslider5, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider7, "3", "");
		interface->addVerticalSlider("4' i", &fslider7, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider8, "4", "");
		interface->addVerticalSlider("2 2/3' i", &fslider8, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider9, "5", "");
		interface->addVerticalSlider("2' i", &fslider9, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider10, "6", "");
		interface->addVerticalSlider("1 3/5' i", &fslider10, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider11, "7", "");
		interface->addVerticalSlider("1' i", &fslider11, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->closeBox();
		interface->openHorizontalBox("ii");
		interface->declare(&fslider21, "1", "");
		interface->addVerticalSlider("bright", &fslider21, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider17, "2", "");
		interface->addVerticalSlider("16' ii", &fslider17, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider18, "3", "");
		interface->addVerticalSlider("8' ii", &fslider18, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider19, "4", "");
		interface->addVerticalSlider("4' ii", &fslider19, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider20, "5", "");
		interface->addVerticalSlider("2' ii", &fslider20, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->closeBox();
		interface->addHorizontalSlider("percussive", &fslider13, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->addHorizontalSlider("pitch", &fslider1, 0.0f, -1.0f, 1.0f, 0.05f);
		interface->addHorizontalSlider("realism", &fslider0, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->addHorizontalSlider("volume", &fslider22, 0.1f, 0.0f, 1.0f, 0.01f);
		interface->closeBox();
	}
	virtual void compute (int fullcount, FAUSTFLOAT** input, FAUSTFLOAT** output) {
		float 	fVec0_tmp[32+4];
		float 	fZec0[32];
		float 	fRec5_tmp[32+4];
		float 	fZec1[32];
		float 	fZec2[32];
		float 	fRec4_tmp[32+4];
		float 	fZec3[32];
		int 	iRec3_tmp[32+4];
		float 	fYec0_tmp[32+4];
		float 	fZec4[32];
		float 	fZec5[32];
		int 	iRec6_tmp[32+4];
		float 	fYec1_tmp[32+4];
		float 	fZec6[32];
		float 	fZec7[32];
		int 	iRec7_tmp[32+4];
		float 	fYec2_tmp[32+4];
		float 	fZec8[32];
		float 	fZec9[32];
		int 	iRec8_tmp[32+4];
		float 	fYec3_tmp[32+4];
		float 	fZec10[32];
		float 	fZec11[32];
		int 	iRec9_tmp[32+4];
		float 	fYec4_tmp[32+4];
		float 	fZec12[32];
		float 	fZec13[32];
		int 	iRec10_tmp[32+4];
		float 	fYec5_tmp[32+4];
		float 	fZec14[32];
		float 	fYec6_tmp[32+4];
		float 	fZec15[32];
		float 	fZec16[32];
		float 	fZec17[32];
		float 	fRec2_tmp[32+4];
		float 	fRec1_tmp[32+4];
		float 	fVec1_tmp[32+4];
		float 	fZec18[32];
		float 	fZec19[32];
		float 	fRec14_tmp[32+4];
		float 	fZec20[32];
		int 	iRec13_tmp[32+4];
		float 	fYec7_tmp[32+4];
		float 	fZec21[32];
		float 	fZec22[32];
		int 	iRec15_tmp[32+4];
		float 	fYec8_tmp[32+4];
		float 	fZec23[32];
		float 	fZec24[32];
		int 	iRec16_tmp[32+4];
		float 	fYec9_tmp[32+4];
		float 	fZec25[32];
		float 	fZec26[32];
		int 	iRec17_tmp[32+4];
		float 	fYec10_tmp[32+4];
		float 	fZec27[32];
		float 	fZec28[32];
		int 	iRec18_tmp[32+4];
		float 	fYec11_tmp[32+4];
		float 	fZec29[32];
		float 	fZec30[32];
		int 	iRec19_tmp[32+4];
		float 	fYec12_tmp[32+4];
		float 	fZec31[32];
		float 	fYec13_tmp[32+4];
		float 	fZec32[32];
		float 	fZec33[32];
		float 	fZec34[32];
		float 	fRec12_tmp[32+4];
		float 	fRec11_tmp[32+4];
		float 	fVec2_tmp[32+4];
		float 	fZec35[32];
		float 	fZec36[32];
		float 	fRec23_tmp[32+4];
		float 	fZec37[32];
		int 	iRec22_tmp[32+4];
		float 	fYec14_tmp[32+4];
		float 	fZec38[32];
		float 	fZec39[32];
		int 	iRec24_tmp[32+4];
		float 	fYec15_tmp[32+4];
		float 	fZec40[32];
		float 	fZec41[32];
		int 	iRec25_tmp[32+4];
		float 	fYec16_tmp[32+4];
		float 	fZec42[32];
		float 	fZec43[32];
		int 	iRec26_tmp[32+4];
		float 	fYec17_tmp[32+4];
		float 	fZec44[32];
		float 	fZec45[32];
		int 	iRec27_tmp[32+4];
		float 	fYec18_tmp[32+4];
		float 	fZec46[32];
		float 	fZec47[32];
		int 	iRec28_tmp[32+4];
		float 	fYec19_tmp[32+4];
		float 	fZec48[32];
		float 	fYec20_tmp[32+4];
		float 	fZec49[32];
		float 	fZec50[32];
		float 	fZec51[32];
		float 	fRec21_tmp[32+4];
		float 	fRec20_tmp[32+4];
		float 	fVec3_tmp[32+4];
		float 	fZec52[32];
		float 	fZec53[32];
		float 	fRec32_tmp[32+4];
		float 	fZec54[32];
		int 	iRec31_tmp[32+4];
		float 	fYec21_tmp[32+4];
		float 	fZec55[32];
		float 	fZec56[32];
		int 	iRec33_tmp[32+4];
		float 	fYec22_tmp[32+4];
		float 	fZec57[32];
		float 	fZec58[32];
		int 	iRec34_tmp[32+4];
		float 	fYec23_tmp[32+4];
		float 	fZec59[32];
		float 	fZec60[32];
		int 	iRec35_tmp[32+4];
		float 	fYec24_tmp[32+4];
		float 	fZec61[32];
		float 	fZec62[32];
		int 	iRec36_tmp[32+4];
		float 	fYec25_tmp[32+4];
		float 	fZec63[32];
		float 	fZec64[32];
		int 	iRec37_tmp[32+4];
		float 	fYec26_tmp[32+4];
		float 	fZec65[32];
		float 	fYec27_tmp[32+4];
		float 	fZec66[32];
		float 	fZec67[32];
		float 	fZec68[32];
		float 	fRec30_tmp[32+4];
		float 	fRec29_tmp[32+4];
		float 	fVec4_tmp[32+4];
		float 	fZec69[32];
		float 	fZec70[32];
		float 	fRec41_tmp[32+4];
		float 	fZec71[32];
		int 	iRec40_tmp[32+4];
		float 	fYec28_tmp[32+4];
		float 	fZec72[32];
		float 	fZec73[32];
		int 	iRec42_tmp[32+4];
		float 	fYec29_tmp[32+4];
		float 	fZec74[32];
		float 	fZec75[32];
		int 	iRec43_tmp[32+4];
		float 	fYec30_tmp[32+4];
		float 	fZec76[32];
		float 	fZec77[32];
		int 	iRec44_tmp[32+4];
		float 	fYec31_tmp[32+4];
		float 	fZec78[32];
		float 	fZec79[32];
		int 	iRec45_tmp[32+4];
		float 	fYec32_tmp[32+4];
		float 	fZec80[32];
		float 	fZec81[32];
		int 	iRec46_tmp[32+4];
		float 	fYec33_tmp[32+4];
		float 	fZec82[32];
		float 	fYec34_tmp[32+4];
		float 	fZec83[32];
		float 	fZec84[32];
		float 	fZec85[32];
		float 	fRec39_tmp[32+4];
		float 	fRec38_tmp[32+4];
		float 	fVec5_tmp[32+4];
		float 	fZec86[32];
		float 	fZec87[32];
		float 	fRec50_tmp[32+4];
		float 	fZec88[32];
		int 	iRec49_tmp[32+4];
		float 	fYec35_tmp[32+4];
		float 	fZec89[32];
		float 	fZec90[32];
		int 	iRec51_tmp[32+4];
		float 	fYec36_tmp[32+4];
		float 	fZec91[32];
		float 	fZec92[32];
		int 	iRec52_tmp[32+4];
		float 	fYec37_tmp[32+4];
		float 	fZec93[32];
		float 	fZec94[32];
		int 	iRec53_tmp[32+4];
		float 	fYec38_tmp[32+4];
		float 	fZec95[32];
		float 	fZec96[32];
		int 	iRec54_tmp[32+4];
		float 	fYec39_tmp[32+4];
		float 	fZec97[32];
		float 	fZec98[32];
		int 	iRec55_tmp[32+4];
		float 	fYec40_tmp[32+4];
		float 	fZec99[32];
		float 	fYec41_tmp[32+4];
		float 	fZec100[32];
		float 	fZec101[32];
		float 	fZec102[32];
		float 	fRec48_tmp[32+4];
		float 	fRec47_tmp[32+4];
		float 	fVec6_tmp[32+4];
		float 	fZec103[32];
		float 	fZec104[32];
		float 	fRec59_tmp[32+4];
		float 	fZec105[32];
		int 	iRec58_tmp[32+4];
		float 	fYec42_tmp[32+4];
		float 	fZec106[32];
		float 	fZec107[32];
		int 	iRec60_tmp[32+4];
		float 	fYec43_tmp[32+4];
		float 	fZec108[32];
		float 	fZec109[32];
		int 	iRec61_tmp[32+4];
		float 	fYec44_tmp[32+4];
		float 	fZec110[32];
		float 	fZec111[32];
		int 	iRec62_tmp[32+4];
		float 	fYec45_tmp[32+4];
		float 	fZec112[32];
		float 	fZec113[32];
		int 	iRec63_tmp[32+4];
		float 	fYec46_tmp[32+4];
		float 	fZec114[32];
		float 	fZec115[32];
		int 	iRec64_tmp[32+4];
		float 	fYec47_tmp[32+4];
		float 	fZec116[32];
		float 	fYec48_tmp[32+4];
		float 	fZec117[32];
		float 	fZec118[32];
		float 	fZec119[32];
		float 	fRec57_tmp[32+4];
		float 	fRec56_tmp[32+4];
		float 	fVec7_tmp[32+4];
		float 	fZec120[32];
		float 	fZec121[32];
		float 	fRec68_tmp[32+4];
		float 	fZec122[32];
		int 	iRec67_tmp[32+4];
		float 	fYec49_tmp[32+4];
		float 	fZec123[32];
		float 	fZec124[32];
		int 	iRec69_tmp[32+4];
		float 	fYec50_tmp[32+4];
		float 	fZec125[32];
		float 	fZec126[32];
		int 	iRec70_tmp[32+4];
		float 	fYec51_tmp[32+4];
		float 	fZec127[32];
		float 	fZec128[32];
		int 	iRec71_tmp[32+4];
		float 	fYec52_tmp[32+4];
		float 	fZec129[32];
		float 	fZec130[32];
		int 	iRec72_tmp[32+4];
		float 	fYec53_tmp[32+4];
		float 	fZec131[32];
		float 	fZec132[32];
		int 	iRec73_tmp[32+4];
		float 	fYec54_tmp[32+4];
		float 	fZec133[32];
		float 	fYec55_tmp[32+4];
		float 	fZec134[32];
		float 	fZec135[32];
		float 	fZec136[32];
		float 	fRec66_tmp[32+4];
		float 	fRec65_tmp[32+4];
		float 	fVec8_tmp[32+4];
		float 	fZec137[32];
		float 	fZec138[32];
		float 	fRec77_tmp[32+4];
		float 	fZec139[32];
		int 	iRec76_tmp[32+4];
		float 	fYec56_tmp[32+4];
		float 	fZec140[32];
		float 	fZec141[32];
		int 	iRec78_tmp[32+4];
		float 	fYec57_tmp[32+4];
		float 	fZec142[32];
		float 	fZec143[32];
		int 	iRec79_tmp[32+4];
		float 	fYec58_tmp[32+4];
		float 	fZec144[32];
		float 	fZec145[32];
		int 	iRec80_tmp[32+4];
		float 	fYec59_tmp[32+4];
		float 	fZec146[32];
		float 	fZec147[32];
		int 	iRec81_tmp[32+4];
		float 	fYec60_tmp[32+4];
		float 	fZec148[32];
		float 	fZec149[32];
		int 	iRec82_tmp[32+4];
		float 	fYec61_tmp[32+4];
		float 	fZec150[32];
		float 	fYec62_tmp[32+4];
		float 	fZec151[32];
		float 	fZec152[32];
		float 	fZec153[32];
		float 	fRec75_tmp[32+4];
		float 	fRec74_tmp[32+4];
		float 	fVec9_tmp[32+4];
		float 	fZec154[32];
		float 	fZec155[32];
		float 	fRec86_tmp[32+4];
		float 	fZec156[32];
		int 	iRec85_tmp[32+4];
		float 	fYec63_tmp[32+4];
		float 	fZec157[32];
		float 	fZec158[32];
		int 	iRec87_tmp[32+4];
		float 	fYec64_tmp[32+4];
		float 	fZec159[32];
		float 	fZec160[32];
		int 	iRec88_tmp[32+4];
		float 	fYec65_tmp[32+4];
		float 	fZec161[32];
		float 	fZec162[32];
		int 	iRec89_tmp[32+4];
		float 	fYec66_tmp[32+4];
		float 	fZec163[32];
		float 	fZec164[32];
		int 	iRec90_tmp[32+4];
		float 	fYec67_tmp[32+4];
		float 	fZec165[32];
		float 	fZec166[32];
		int 	iRec91_tmp[32+4];
		float 	fYec68_tmp[32+4];
		float 	fZec167[32];
		float 	fYec69_tmp[32+4];
		float 	fZec168[32];
		float 	fZec169[32];
		float 	fZec170[32];
		float 	fRec84_tmp[32+4];
		float 	fRec83_tmp[32+4];
		float 	fVec10_tmp[32+4];
		float 	fZec171[32];
		float 	fZec172[32];
		float 	fRec95_tmp[32+4];
		float 	fZec173[32];
		int 	iRec94_tmp[32+4];
		float 	fYec70_tmp[32+4];
		float 	fZec174[32];
		float 	fZec175[32];
		int 	iRec96_tmp[32+4];
		float 	fYec71_tmp[32+4];
		float 	fZec176[32];
		float 	fZec177[32];
		int 	iRec97_tmp[32+4];
		float 	fYec72_tmp[32+4];
		float 	fZec178[32];
		float 	fZec179[32];
		int 	iRec98_tmp[32+4];
		float 	fYec73_tmp[32+4];
		float 	fZec180[32];
		float 	fZec181[32];
		int 	iRec99_tmp[32+4];
		float 	fYec74_tmp[32+4];
		float 	fZec182[32];
		float 	fZec183[32];
		int 	iRec100_tmp[32+4];
		float 	fYec75_tmp[32+4];
		float 	fZec184[32];
		float 	fYec76_tmp[32+4];
		float 	fZec185[32];
		float 	fZec186[32];
		float 	fZec187[32];
		float 	fRec93_tmp[32+4];
		float 	fRec92_tmp[32+4];
		float 	fVec11_tmp[32+4];
		float 	fZec188[32];
		float 	fZec189[32];
		float 	fRec104_tmp[32+4];
		float 	fZec190[32];
		int 	iRec103_tmp[32+4];
		float 	fYec77_tmp[32+4];
		float 	fZec191[32];
		float 	fZec192[32];
		int 	iRec105_tmp[32+4];
		float 	fYec78_tmp[32+4];
		float 	fZec193[32];
		float 	fZec194[32];
		int 	iRec106_tmp[32+4];
		float 	fYec79_tmp[32+4];
		float 	fZec195[32];
		float 	fZec196[32];
		int 	iRec107_tmp[32+4];
		float 	fYec80_tmp[32+4];
		float 	fZec197[32];
		float 	fZec198[32];
		int 	iRec108_tmp[32+4];
		float 	fYec81_tmp[32+4];
		float 	fZec199[32];
		float 	fZec200[32];
		int 	iRec109_tmp[32+4];
		float 	fYec82_tmp[32+4];
		float 	fZec201[32];
		float 	fYec83_tmp[32+4];
		float 	fZec202[32];
		float 	fZec203[32];
		float 	fZec204[32];
		float 	fRec102_tmp[32+4];
		float 	fRec101_tmp[32+4];
		float 	fVec12_tmp[32+4];
		float 	fZec205[32];
		float 	fYec84_tmp[32+4];
		float 	fRec111_tmp[32+4];
		float 	fRec110_tmp[32+4];
		float 	fVec13_tmp[32+4];
		float 	fZec206[32];
		float 	fYec85_tmp[32+4];
		float 	fRec113_tmp[32+4];
		float 	fRec112_tmp[32+4];
		float 	fVec14_tmp[32+4];
		float 	fZec207[32];
		float 	fYec86_tmp[32+4];
		float 	fRec115_tmp[32+4];
		float 	fRec114_tmp[32+4];
		float 	fVec15_tmp[32+4];
		float 	fZec208[32];
		float 	fYec87_tmp[32+4];
		float 	fRec117_tmp[32+4];
		float 	fRec116_tmp[32+4];
		float 	fVec16_tmp[32+4];
		float 	fZec209[32];
		float 	fYec88_tmp[32+4];
		float 	fRec119_tmp[32+4];
		float 	fRec118_tmp[32+4];
		float 	fZec210[32];
		float 	fVec17_tmp[32+4];
		float 	fZec211[32];
		float 	fYec89_tmp[32+4];
		float 	fRec121_tmp[32+4];
		float 	fRec120_tmp[32+4];
		float 	fVec18_tmp[32+4];
		float 	fZec212[32];
		float 	fYec90_tmp[32+4];
		float 	fRec123_tmp[32+4];
		float 	fRec122_tmp[32+4];
		float 	fVec19_tmp[32+4];
		float 	fZec213[32];
		float 	fYec91_tmp[32+4];
		float 	fRec125_tmp[32+4];
		float 	fRec124_tmp[32+4];
		float 	fVec20_tmp[32+4];
		float 	fZec214[32];
		float 	fYec92_tmp[32+4];
		float 	fRec127_tmp[32+4];
		float 	fRec126_tmp[32+4];
		float 	fVec21_tmp[32+4];
		float 	fZec215[32];
		float 	fYec93_tmp[32+4];
		float 	fRec129_tmp[32+4];
		float 	fRec128_tmp[32+4];
		float 	fVec22_tmp[32+4];
		float 	fZec216[32];
		float 	fYec94_tmp[32+4];
		float 	fRec131_tmp[32+4];
		float 	fRec130_tmp[32+4];
		float 	fVec23_tmp[32+4];
		float 	fZec217[32];
		float 	fYec95_tmp[32+4];
		float 	fRec133_tmp[32+4];
		float 	fRec132_tmp[32+4];
		float 	fVec24_tmp[32+4];
		float 	fZec218[32];
		float 	fYec96_tmp[32+4];
		float 	fRec135_tmp[32+4];
		float 	fRec134_tmp[32+4];
		float 	fVec25_tmp[32+4];
		float 	fZec219[32];
		float 	fYec97_tmp[32+4];
		float 	fRec137_tmp[32+4];
		float 	fRec136_tmp[32+4];
		float 	fVec26_tmp[32+4];
		float 	fZec220[32];
		float 	fYec98_tmp[32+4];
		float 	fRec139_tmp[32+4];
		float 	fRec138_tmp[32+4];
		float 	fVec27_tmp[32+4];
		float 	fZec221[32];
		float 	fYec99_tmp[32+4];
		float 	fRec141_tmp[32+4];
		float 	fRec140_tmp[32+4];
		float 	fVec28_tmp[32+4];
		float 	fZec222[32];
		float 	fYec100_tmp[32+4];
		float 	fRec143_tmp[32+4];
		float 	fRec142_tmp[32+4];
		float 	fVec29_tmp[32+4];
		float 	fZec223[32];
		float 	fYec101_tmp[32+4];
		float 	fRec145_tmp[32+4];
		float 	fRec144_tmp[32+4];
		float 	fVec30_tmp[32+4];
		float 	fZec224[32];
		float 	fYec102_tmp[32+4];
		float 	fRec147_tmp[32+4];
		float 	fRec146_tmp[32+4];
		float 	fVec31_tmp[32+4];
		float 	fZec225[32];
		float 	fYec103_tmp[32+4];
		float 	fRec149_tmp[32+4];
		float 	fRec148_tmp[32+4];
		float 	fVec32_tmp[32+4];
		float 	fZec226[32];
		float 	fYec104_tmp[32+4];
		float 	fRec151_tmp[32+4];
		float 	fRec150_tmp[32+4];
		float 	fVec33_tmp[32+4];
		float 	fZec227[32];
		float 	fYec105_tmp[32+4];
		float 	fRec153_tmp[32+4];
		float 	fRec152_tmp[32+4];
		float 	fVec34_tmp[32+4];
		float 	fZec228[32];
		float 	fYec106_tmp[32+4];
		float 	fRec155_tmp[32+4];
		float 	fRec154_tmp[32+4];
		float 	fVec35_tmp[32+4];
		float 	fZec229[32];
		float 	fYec107_tmp[32+4];
		float 	fRec157_tmp[32+4];
		float 	fRec156_tmp[32+4];
		float 	fVec36_tmp[32+4];
		float 	fZec230[32];
		float 	fYec108_tmp[32+4];
		float 	fRec159_tmp[32+4];
		float 	fRec158_tmp[32+4];
		float 	fVec37_tmp[32+4];
		float 	fZec231[32];
		float 	fYec109_tmp[32+4];
		float 	fRec161_tmp[32+4];
		float 	fRec160_tmp[32+4];
		float 	fVec38_tmp[32+4];
		float 	fZec232[32];
		float 	fYec110_tmp[32+4];
		float 	fRec163_tmp[32+4];
		float 	fRec162_tmp[32+4];
		float 	fVec39_tmp[32+4];
		float 	fZec233[32];
		float 	fYec111_tmp[32+4];
		float 	fRec165_tmp[32+4];
		float 	fRec164_tmp[32+4];
		float 	fVec40_tmp[32+4];
		float 	fZec234[32];
		float 	fYec112_tmp[32+4];
		float 	fRec167_tmp[32+4];
		float 	fRec166_tmp[32+4];
		float 	fVec41_tmp[32+4];
		float 	fZec235[32];
		float 	fYec113_tmp[32+4];
		float 	fRec169_tmp[32+4];
		float 	fRec168_tmp[32+4];
		float 	fVec42_tmp[32+4];
		float 	fZec236[32];
		float 	fYec114_tmp[32+4];
		float 	fRec171_tmp[32+4];
		float 	fRec170_tmp[32+4];
		float 	fVec43_tmp[32+4];
		float 	fZec237[32];
		float 	fYec115_tmp[32+4];
		float 	fRec173_tmp[32+4];
		float 	fRec172_tmp[32+4];
		float 	fVec44_tmp[32+4];
		float 	fZec238[32];
		float 	fYec116_tmp[32+4];
		float 	fRec175_tmp[32+4];
		float 	fRec174_tmp[32+4];
		float 	fVec45_tmp[32+4];
		float 	fZec239[32];
		float 	fYec117_tmp[32+4];
		float 	fRec177_tmp[32+4];
		float 	fRec176_tmp[32+4];
		float 	fVec46_tmp[32+4];
		float 	fZec240[32];
		float 	fYec118_tmp[32+4];
		float 	fRec179_tmp[32+4];
		float 	fRec178_tmp[32+4];
		float 	fVec47_tmp[32+4];
		float 	fZec241[32];
		float 	fYec119_tmp[32+4];
		float 	fRec181_tmp[32+4];
		float 	fRec180_tmp[32+4];
		float 	fVec48_tmp[32+4];
		float 	fZec242[32];
		float 	fYec120_tmp[32+4];
		float 	fRec183_tmp[32+4];
		float 	fRec182_tmp[32+4];
		float 	fVec49_tmp[32+4];
		float 	fZec243[32];
		float 	fYec121_tmp[32+4];
		float 	fRec185_tmp[32+4];
		float 	fRec184_tmp[32+4];
		float 	fVec50_tmp[32+4];
		float 	fZec244[32];
		float 	fYec122_tmp[32+4];
		float 	fRec187_tmp[32+4];
		float 	fRec186_tmp[32+4];
		float 	fVec51_tmp[32+4];
		float 	fZec245[32];
		float 	fYec123_tmp[32+4];
		float 	fRec189_tmp[32+4];
		float 	fRec188_tmp[32+4];
		float 	fVec52_tmp[32+4];
		float 	fZec246[32];
		float 	fYec124_tmp[32+4];
		float 	fRec191_tmp[32+4];
		float 	fRec190_tmp[32+4];
		float 	fVec53_tmp[32+4];
		float 	fZec247[32];
		float 	fYec125_tmp[32+4];
		float 	fRec193_tmp[32+4];
		float 	fRec192_tmp[32+4];
		float 	fVec54_tmp[32+4];
		float 	fZec248[32];
		float 	fYec126_tmp[32+4];
		float 	fRec195_tmp[32+4];
		float 	fRec194_tmp[32+4];
		float 	fVec55_tmp[32+4];
		float 	fZec249[32];
		float 	fYec127_tmp[32+4];
		float 	fRec197_tmp[32+4];
		float 	fRec196_tmp[32+4];
		float 	fVec56_tmp[32+4];
		float 	fZec250[32];
		float 	fYec128_tmp[32+4];
		float 	fRec199_tmp[32+4];
		float 	fRec198_tmp[32+4];
		float 	fVec57_tmp[32+4];
		float 	fZec251[32];
		float 	fYec129_tmp[32+4];
		float 	fRec201_tmp[32+4];
		float 	fRec200_tmp[32+4];
		float 	fVec58_tmp[32+4];
		float 	fZec252[32];
		float 	fYec130_tmp[32+4];
		float 	fRec203_tmp[32+4];
		float 	fRec202_tmp[32+4];
		float 	fVec59_tmp[32+4];
		float 	fZec253[32];
		float 	fYec131_tmp[32+4];
		float 	fRec205_tmp[32+4];
		float 	fRec204_tmp[32+4];
		float 	fVec60_tmp[32+4];
		float 	fZec254[32];
		float 	fYec132_tmp[32+4];
		float 	fRec207_tmp[32+4];
		float 	fRec206_tmp[32+4];
		float 	fZec255[32];
		float 	fZec256[32];
		float 	fZec257[32];
		float 	fZec258[32];
		float 	fZec259[32];
		float 	fZec260[32];
		float 	fZec261[32];
		float 	fYec133_tmp[32+4];
		float 	fRec0_tmp[32+4];
		float 	fZec262[32];
		int 	iRec211_tmp[32+4];
		float 	fYec134_tmp[32+4];
		float 	fZec263[32];
		float 	fYec135_tmp[32+4];
		float 	fRec210_tmp[32+4];
		float 	fRec209_tmp[32+4];
		int 	iRec214_tmp[32+4];
		float 	fYec136_tmp[32+4];
		float 	fZec264[32];
		float 	fYec137_tmp[32+4];
		float 	fRec213_tmp[32+4];
		float 	fRec212_tmp[32+4];
		int 	iRec217_tmp[32+4];
		float 	fYec138_tmp[32+4];
		float 	fZec265[32];
		float 	fYec139_tmp[32+4];
		float 	fRec216_tmp[32+4];
		float 	fRec215_tmp[32+4];
		int 	iRec220_tmp[32+4];
		float 	fYec140_tmp[32+4];
		float 	fZec266[32];
		float 	fYec141_tmp[32+4];
		float 	fRec219_tmp[32+4];
		float 	fRec218_tmp[32+4];
		int 	iRec223_tmp[32+4];
		float 	fYec142_tmp[32+4];
		float 	fZec267[32];
		float 	fYec143_tmp[32+4];
		float 	fRec222_tmp[32+4];
		float 	fRec221_tmp[32+4];
		int 	iRec226_tmp[32+4];
		float 	fYec144_tmp[32+4];
		float 	fZec268[32];
		float 	fYec145_tmp[32+4];
		float 	fRec225_tmp[32+4];
		float 	fRec224_tmp[32+4];
		int 	iRec229_tmp[32+4];
		float 	fYec146_tmp[32+4];
		float 	fZec269[32];
		float 	fYec147_tmp[32+4];
		float 	fRec228_tmp[32+4];
		float 	fRec227_tmp[32+4];
		int 	iRec232_tmp[32+4];
		float 	fYec148_tmp[32+4];
		float 	fZec270[32];
		float 	fYec149_tmp[32+4];
		float 	fRec231_tmp[32+4];
		float 	fRec230_tmp[32+4];
		int 	iRec235_tmp[32+4];
		float 	fYec150_tmp[32+4];
		float 	fZec271[32];
		float 	fYec151_tmp[32+4];
		float 	fRec234_tmp[32+4];
		float 	fRec233_tmp[32+4];
		int 	iRec238_tmp[32+4];
		float 	fYec152_tmp[32+4];
		float 	fZec272[32];
		float 	fYec153_tmp[32+4];
		float 	fRec237_tmp[32+4];
		float 	fRec236_tmp[32+4];
		int 	iRec241_tmp[32+4];
		float 	fYec154_tmp[32+4];
		float 	fZec273[32];
		float 	fYec155_tmp[32+4];
		float 	fRec240_tmp[32+4];
		float 	fRec239_tmp[32+4];
		int 	iRec244_tmp[32+4];
		float 	fYec156_tmp[32+4];
		float 	fZec274[32];
		float 	fYec157_tmp[32+4];
		float 	fRec243_tmp[32+4];
		float 	fRec242_tmp[32+4];
		float 	fZec275[32];
		float 	fZec276[32];
		float 	fZec277[32];
		float 	fYec158_tmp[32+4];
		float 	fRec208_tmp[32+4];
		float 	fZec278[32];
		float 	fZec279[32];
		float 	fYec159_tmp[32+4];
		float 	fRec246_tmp[32+4];
		float 	fRec245_tmp[32+4];
		float 	fYec160_tmp[32+4];
		float 	fRec248_tmp[32+4];
		float 	fRec247_tmp[32+4];
		float 	fYec161_tmp[32+4];
		float 	fRec250_tmp[32+4];
		float 	fRec249_tmp[32+4];
		float 	fYec162_tmp[32+4];
		float 	fRec252_tmp[32+4];
		float 	fRec251_tmp[32+4];
		float 	fYec163_tmp[32+4];
		float 	fRec254_tmp[32+4];
		float 	fRec253_tmp[32+4];
		float 	fYec164_tmp[32+4];
		float 	fRec256_tmp[32+4];
		float 	fRec255_tmp[32+4];
		float 	fYec165_tmp[32+4];
		float 	fRec258_tmp[32+4];
		float 	fRec257_tmp[32+4];
		float 	fYec166_tmp[32+4];
		float 	fRec260_tmp[32+4];
		float 	fRec259_tmp[32+4];
		float 	fYec167_tmp[32+4];
		float 	fRec262_tmp[32+4];
		float 	fRec261_tmp[32+4];
		float 	fYec168_tmp[32+4];
		float 	fRec264_tmp[32+4];
		float 	fRec263_tmp[32+4];
		float 	fYec169_tmp[32+4];
		float 	fRec266_tmp[32+4];
		float 	fRec265_tmp[32+4];
		float 	fYec170_tmp[32+4];
		float 	fYec171_tmp[32+4];
		float 	fRec267_tmp[32+4];
		float 	fZec280[32];
		float 	fRec268_tmp[32+4];
		float 	fZec281[32];
		float 	fYec172_tmp[32+4];
		float 	fYec173_tmp[32+4];
		float 	fRec270_tmp[32+4];
		float 	fYec174_tmp[32+4];
		float 	fYec175_tmp[32+4];
		float 	fRec271_tmp[32+4];
		float 	fYec176_tmp[32+4];
		float 	fYec177_tmp[32+4];
		float 	fRec272_tmp[32+4];
		float 	fYec178_tmp[32+4];
		float 	fYec179_tmp[32+4];
		float 	fRec273_tmp[32+4];
		float 	fYec180_tmp[32+4];
		float 	fYec181_tmp[32+4];
		float 	fRec274_tmp[32+4];
		float 	fYec182_tmp[32+4];
		float 	fYec183_tmp[32+4];
		float 	fRec275_tmp[32+4];
		float 	fYec184_tmp[32+4];
		float 	fYec185_tmp[32+4];
		float 	fRec276_tmp[32+4];
		float 	fZec282[32];
		float 	fZec283[32];
		float 	fZec284[32];
		float 	fYec186_tmp[32+4];
		float 	fRec269_tmp[32+4];
		float 	fZec285[32];
		float 	fZec286[32];
		float 	fZec287[32];
		float 	fZec288[32];
		float 	fZec289[32];
		float 	fZec290[32];
		float 	fZec291[32];
		float 	fZec292[32];
		float 	fZec293[32];
		float 	fYec187_tmp[32+4];
		float 	fYec188_tmp[32+4];
		float 	fRec278_tmp[32+4];
		float 	fZec294[32];
		float 	fYec189_tmp[32+4];
		float 	fYec190_tmp[32+4];
		float 	fRec279_tmp[32+4];
		float 	fZec295[32];
		float 	fYec191_tmp[32+4];
		float 	fYec192_tmp[32+4];
		float 	fRec280_tmp[32+4];
		float 	fZec296[32];
		float 	fYec193_tmp[32+4];
		float 	fYec194_tmp[32+4];
		float 	fRec281_tmp[32+4];
		float 	fZec297[32];
		float 	fZec298[32];
		float 	fZec299[32];
		float 	fYec195_tmp[32+4];
		float 	fRec277_tmp[32+4];
		float 	fZec300[32];
		float 	fZec301[32];
		float 	fZec302[32];
		float 	fZec303[32];
		float 	fZec304[32];
		float 	fZec305[32];
		float 	fZec306[32];
		float 	fZec307[32];
		float 	fZec308[32];
		float 	fZec309[32];
		float 	fZec310[32];
		float 	fZec311[32];
		float 	fZec312[32];
		float 	fZec313[32];
		float 	fZec314[32];
		float 	fZec315[32];
		float 	fZec316[32];
		float 	fZec317[32];
		float 	fZec318[32];
		float 	fZec319[32];
		float 	fZec320[32];
		float 	fZec321[32];
		float 	fZec322[32];
		float 	fZec323[32];
		float 	fZec324[32];
		float 	fZec325[32];
		float 	fZec326[32];
		float 	fZec327[32];
		float 	fZec328[32];
		float 	fZec329[32];
		float 	fZec330[32];
		float 	fZec331[32];
		float 	fYec196_tmp[32+4];
		float 	fRec282_tmp[32+4];
		float 	fZec332[32];
		float 	fZec333[32];
		float 	fYec197_tmp[32+4];
		float 	fRec283_tmp[32+4];
		float 	fZec334[32];
		float 	fZec335[32];
		float 	fZec336[32];
		int 	iRec289_tmp[32+4];
		float 	fZec337[32];
		int 	iZec338[32];
		float 	fRec286_tmp[32+4];
		int 	iRec287_tmp[32+4];
		float 	fRec288_tmp[32+4];
		float 	fYec198_tmp[32+4];
		float 	fZec339[32];
		float 	fZec340[32];
		float 	fRec285_tmp[32+4];
		float 	fRec284_tmp[32+4];
		float 	fYec199_tmp[32+4];
		float 	fZec341[32];
		float 	fRec290_tmp[32+4];
		float 	fRec291_tmp[32+4];
		float 	fZec342[32];
		float 	fYec200_tmp[32+4];
		float 	fRec293_tmp[32+4];
		float 	fYec201_tmp[32+4];
		float 	fRec292_tmp[32+4];
		float 	fYec202_tmp[32+4];
		float 	fRec295_tmp[32+4];
		float 	fYec203_tmp[32+4];
		float 	fRec294_tmp[32+4];
		float 	fYec204_tmp[32+4];
		float 	fRec297_tmp[32+4];
		float 	fYec205_tmp[32+4];
		float 	fRec296_tmp[32+4];
		float 	fYec206_tmp[32+4];
		float 	fRec299_tmp[32+4];
		float 	fYec207_tmp[32+4];
		float 	fRec298_tmp[32+4];
		float 	fRec301_tmp[32+4];
		float 	fRec300_tmp[32+4];
		float 	fRec303_tmp[32+4];
		float 	fRec302_tmp[32+4];
		float 	fRec305_tmp[32+4];
		float 	fRec304_tmp[32+4];
		float 	fRec307_tmp[32+4];
		float 	fRec306_tmp[32+4];
		float 	fZec343[32];
		float 	fRec308_tmp[32+4];
		float 	fZec344[32];
		float 	fSlow0 = fslider0;
		float 	fSlow1 = ((int((fSlow0 >= 0.8333333333333334f)))?1.0f:0.0f);
		float 	fSlow2 = fbutton0;
		float* 	fVec0 = &fVec0_tmp[4];
		int 	iSlow3 = int((fSlow0 > 0.16666666666666666f));
		float 	fSlow4 = ((iSlow3)?1.001383f:1.0f);
		float 	fSlow5 = (1 + (0.03f * fslider1));
		float 	fSlow6 = (fConst1 * float((5.0f + (3 * fslider2))));
		float* 	fRec5 = &fRec5_tmp[4];
		float 	fSlow7 = (0.0001f + (0.0149f * fslider3));
		float* 	fRec4 = &fRec4_tmp[4];
		int* 	iRec3 = &iRec3_tmp[4];
		float* 	fYec0 = &fYec0_tmp[4];
		int* 	iRec6 = &iRec6_tmp[4];
		float* 	fYec1 = &fYec1_tmp[4];
		int* 	iRec7 = &iRec7_tmp[4];
		float* 	fYec2 = &fYec2_tmp[4];
		int* 	iRec8 = &iRec8_tmp[4];
		float* 	fYec3 = &fYec3_tmp[4];
		int* 	iRec9 = &iRec9_tmp[4];
		float* 	fYec4 = &fYec4_tmp[4];
		int* 	iRec10 = &iRec10_tmp[4];
		float* 	fYec5 = &fYec5_tmp[4];
		float* 	fYec6 = &fYec6_tmp[4];
		float* 	fRec2 = &fRec2_tmp[4];
		float* 	fRec1 = &fRec1_tmp[4];
		float 	fSlow8 = fbutton1;
		float* 	fVec1 = &fVec1_tmp[4];
		float 	fSlow9 = ((iSlow3)?1.003796f:1.0f);
		float* 	fRec14 = &fRec14_tmp[4];
		int* 	iRec13 = &iRec13_tmp[4];
		float* 	fYec7 = &fYec7_tmp[4];
		int* 	iRec15 = &iRec15_tmp[4];
		float* 	fYec8 = &fYec8_tmp[4];
		int* 	iRec16 = &iRec16_tmp[4];
		float* 	fYec9 = &fYec9_tmp[4];
		int* 	iRec17 = &iRec17_tmp[4];
		float* 	fYec10 = &fYec10_tmp[4];
		int* 	iRec18 = &iRec18_tmp[4];
		float* 	fYec11 = &fYec11_tmp[4];
		int* 	iRec19 = &iRec19_tmp[4];
		float* 	fYec12 = &fYec12_tmp[4];
		float* 	fYec13 = &fYec13_tmp[4];
		float* 	fRec12 = &fRec12_tmp[4];
		float* 	fRec11 = &fRec11_tmp[4];
		float 	fSlow10 = fbutton2;
		float* 	fVec2 = &fVec2_tmp[4];
		float 	fSlow11 = ((iSlow3)?0.999484f:1.0f);
		float* 	fRec23 = &fRec23_tmp[4];
		int* 	iRec22 = &iRec22_tmp[4];
		float* 	fYec14 = &fYec14_tmp[4];
		int* 	iRec24 = &iRec24_tmp[4];
		float* 	fYec15 = &fYec15_tmp[4];
		int* 	iRec25 = &iRec25_tmp[4];
		float* 	fYec16 = &fYec16_tmp[4];
		int* 	iRec26 = &iRec26_tmp[4];
		float* 	fYec17 = &fYec17_tmp[4];
		int* 	iRec27 = &iRec27_tmp[4];
		float* 	fYec18 = &fYec18_tmp[4];
		int* 	iRec28 = &iRec28_tmp[4];
		float* 	fYec19 = &fYec19_tmp[4];
		float* 	fYec20 = &fYec20_tmp[4];
		float* 	fRec21 = &fRec21_tmp[4];
		float* 	fRec20 = &fRec20_tmp[4];
		float 	fSlow12 = fbutton3;
		float* 	fVec3 = &fVec3_tmp[4];
		float 	fSlow13 = ((iSlow3)?1.001135f:1.0f);
		float* 	fRec32 = &fRec32_tmp[4];
		int* 	iRec31 = &iRec31_tmp[4];
		float* 	fYec21 = &fYec21_tmp[4];
		int* 	iRec33 = &iRec33_tmp[4];
		float* 	fYec22 = &fYec22_tmp[4];
		int* 	iRec34 = &iRec34_tmp[4];
		float* 	fYec23 = &fYec23_tmp[4];
		int* 	iRec35 = &iRec35_tmp[4];
		float* 	fYec24 = &fYec24_tmp[4];
		int* 	iRec36 = &iRec36_tmp[4];
		float* 	fYec25 = &fYec25_tmp[4];
		int* 	iRec37 = &iRec37_tmp[4];
		float* 	fYec26 = &fYec26_tmp[4];
		float* 	fYec27 = &fYec27_tmp[4];
		float* 	fRec30 = &fRec30_tmp[4];
		float* 	fRec29 = &fRec29_tmp[4];
		float 	fSlow14 = fbutton4;
		float* 	fVec4 = &fVec4_tmp[4];
		float 	fSlow15 = ((iSlow3)?1.000064f:1.0f);
		float* 	fRec41 = &fRec41_tmp[4];
		int* 	iRec40 = &iRec40_tmp[4];
		float* 	fYec28 = &fYec28_tmp[4];
		int* 	iRec42 = &iRec42_tmp[4];
		float* 	fYec29 = &fYec29_tmp[4];
		int* 	iRec43 = &iRec43_tmp[4];
		float* 	fYec30 = &fYec30_tmp[4];
		int* 	iRec44 = &iRec44_tmp[4];
		float* 	fYec31 = &fYec31_tmp[4];
		int* 	iRec45 = &iRec45_tmp[4];
		float* 	fYec32 = &fYec32_tmp[4];
		int* 	iRec46 = &iRec46_tmp[4];
		float* 	fYec33 = &fYec33_tmp[4];
		float* 	fYec34 = &fYec34_tmp[4];
		float* 	fRec39 = &fRec39_tmp[4];
		float* 	fRec38 = &fRec38_tmp[4];
		float 	fSlow16 = fbutton5;
		float* 	fVec5 = &fVec5_tmp[4];
		float 	fSlow17 = ((iSlow3)?0.998889f:1.0f);
		float* 	fRec50 = &fRec50_tmp[4];
		int* 	iRec49 = &iRec49_tmp[4];
		float* 	fYec35 = &fYec35_tmp[4];
		int* 	iRec51 = &iRec51_tmp[4];
		float* 	fYec36 = &fYec36_tmp[4];
		int* 	iRec52 = &iRec52_tmp[4];
		float* 	fYec37 = &fYec37_tmp[4];
		int* 	iRec53 = &iRec53_tmp[4];
		float* 	fYec38 = &fYec38_tmp[4];
		int* 	iRec54 = &iRec54_tmp[4];
		float* 	fYec39 = &fYec39_tmp[4];
		int* 	iRec55 = &iRec55_tmp[4];
		float* 	fYec40 = &fYec40_tmp[4];
		float* 	fYec41 = &fYec41_tmp[4];
		float* 	fRec48 = &fRec48_tmp[4];
		float* 	fRec47 = &fRec47_tmp[4];
		float 	fSlow18 = fbutton6;
		float* 	fVec6 = &fVec6_tmp[4];
		float 	fSlow19 = ((iSlow3)?0.997199f:1.0f);
		float* 	fRec59 = &fRec59_tmp[4];
		int* 	iRec58 = &iRec58_tmp[4];
		float* 	fYec42 = &fYec42_tmp[4];
		int* 	iRec60 = &iRec60_tmp[4];
		float* 	fYec43 = &fYec43_tmp[4];
		int* 	iRec61 = &iRec61_tmp[4];
		float* 	fYec44 = &fYec44_tmp[4];
		int* 	iRec62 = &iRec62_tmp[4];
		float* 	fYec45 = &fYec45_tmp[4];
		int* 	iRec63 = &iRec63_tmp[4];
		float* 	fYec46 = &fYec46_tmp[4];
		int* 	iRec64 = &iRec64_tmp[4];
		float* 	fYec47 = &fYec47_tmp[4];
		float* 	fYec48 = &fYec48_tmp[4];
		float* 	fRec57 = &fRec57_tmp[4];
		float* 	fRec56 = &fRec56_tmp[4];
		float 	fSlow20 = fbutton7;
		float* 	fVec7 = &fVec7_tmp[4];
		float 	fSlow21 = ((iSlow3)?0.997294f:1.0f);
		float* 	fRec68 = &fRec68_tmp[4];
		int* 	iRec67 = &iRec67_tmp[4];
		float* 	fYec49 = &fYec49_tmp[4];
		int* 	iRec69 = &iRec69_tmp[4];
		float* 	fYec50 = &fYec50_tmp[4];
		int* 	iRec70 = &iRec70_tmp[4];
		float* 	fYec51 = &fYec51_tmp[4];
		int* 	iRec71 = &iRec71_tmp[4];
		float* 	fYec52 = &fYec52_tmp[4];
		int* 	iRec72 = &iRec72_tmp[4];
		float* 	fYec53 = &fYec53_tmp[4];
		int* 	iRec73 = &iRec73_tmp[4];
		float* 	fYec54 = &fYec54_tmp[4];
		float* 	fYec55 = &fYec55_tmp[4];
		float* 	fRec66 = &fRec66_tmp[4];
		float* 	fRec65 = &fRec65_tmp[4];
		float 	fSlow22 = fbutton8;
		float* 	fVec8 = &fVec8_tmp[4];
		float 	fSlow23 = ((iSlow3)?1.000562f:1.0f);
		float* 	fRec77 = &fRec77_tmp[4];
		int* 	iRec76 = &iRec76_tmp[4];
		float* 	fYec56 = &fYec56_tmp[4];
		int* 	iRec78 = &iRec78_tmp[4];
		float* 	fYec57 = &fYec57_tmp[4];
		int* 	iRec79 = &iRec79_tmp[4];
		float* 	fYec58 = &fYec58_tmp[4];
		int* 	iRec80 = &iRec80_tmp[4];
		float* 	fYec59 = &fYec59_tmp[4];
		int* 	iRec81 = &iRec81_tmp[4];
		float* 	fYec60 = &fYec60_tmp[4];
		int* 	iRec82 = &iRec82_tmp[4];
		float* 	fYec61 = &fYec61_tmp[4];
		float* 	fYec62 = &fYec62_tmp[4];
		float* 	fRec75 = &fRec75_tmp[4];
		float* 	fRec74 = &fRec74_tmp[4];
		float 	fSlow24 = fbutton9;
		float* 	fVec9 = &fVec9_tmp[4];
		float 	fSlow25 = ((iSlow3)?1.002464f:1.0f);
		float* 	fRec86 = &fRec86_tmp[4];
		int* 	iRec85 = &iRec85_tmp[4];
		float* 	fYec63 = &fYec63_tmp[4];
		int* 	iRec87 = &iRec87_tmp[4];
		float* 	fYec64 = &fYec64_tmp[4];
		int* 	iRec88 = &iRec88_tmp[4];
		float* 	fYec65 = &fYec65_tmp[4];
		int* 	iRec89 = &iRec89_tmp[4];
		float* 	fYec66 = &fYec66_tmp[4];
		int* 	iRec90 = &iRec90_tmp[4];
		float* 	fYec67 = &fYec67_tmp[4];
		int* 	iRec91 = &iRec91_tmp[4];
		float* 	fYec68 = &fYec68_tmp[4];
		float* 	fYec69 = &fYec69_tmp[4];
		float* 	fRec84 = &fRec84_tmp[4];
		float* 	fRec83 = &fRec83_tmp[4];
		float 	fSlow26 = fbutton10;
		float* 	fVec10 = &fVec10_tmp[4];
		float 	fSlow27 = ((iSlow3)?0.996945f:1.0f);
		float* 	fRec95 = &fRec95_tmp[4];
		int* 	iRec94 = &iRec94_tmp[4];
		float* 	fYec70 = &fYec70_tmp[4];
		int* 	iRec96 = &iRec96_tmp[4];
		float* 	fYec71 = &fYec71_tmp[4];
		int* 	iRec97 = &iRec97_tmp[4];
		float* 	fYec72 = &fYec72_tmp[4];
		int* 	iRec98 = &iRec98_tmp[4];
		float* 	fYec73 = &fYec73_tmp[4];
		int* 	iRec99 = &iRec99_tmp[4];
		float* 	fYec74 = &fYec74_tmp[4];
		int* 	iRec100 = &iRec100_tmp[4];
		float* 	fYec75 = &fYec75_tmp[4];
		float* 	fYec76 = &fYec76_tmp[4];
		float* 	fRec93 = &fRec93_tmp[4];
		float* 	fRec92 = &fRec92_tmp[4];
		float 	fSlow28 = fbutton11;
		float* 	fVec11 = &fVec11_tmp[4];
		float 	fSlow29 = ((iSlow3)?1.003118f:1.0f);
		float* 	fRec104 = &fRec104_tmp[4];
		int* 	iRec103 = &iRec103_tmp[4];
		float* 	fYec77 = &fYec77_tmp[4];
		int* 	iRec105 = &iRec105_tmp[4];
		float* 	fYec78 = &fYec78_tmp[4];
		int* 	iRec106 = &iRec106_tmp[4];
		float* 	fYec79 = &fYec79_tmp[4];
		int* 	iRec107 = &iRec107_tmp[4];
		float* 	fYec80 = &fYec80_tmp[4];
		int* 	iRec108 = &iRec108_tmp[4];
		float* 	fYec81 = &fYec81_tmp[4];
		int* 	iRec109 = &iRec109_tmp[4];
		float* 	fYec82 = &fYec82_tmp[4];
		float* 	fYec83 = &fYec83_tmp[4];
		float* 	fRec102 = &fRec102_tmp[4];
		float* 	fRec101 = &fRec101_tmp[4];
		float 	fSlow30 = fbutton12;
		float* 	fVec12 = &fVec12_tmp[4];
		float* 	fYec84 = &fYec84_tmp[4];
		float* 	fRec111 = &fRec111_tmp[4];
		float* 	fRec110 = &fRec110_tmp[4];
		float 	fSlow31 = fbutton13;
		float* 	fVec13 = &fVec13_tmp[4];
		float* 	fYec85 = &fYec85_tmp[4];
		float* 	fRec113 = &fRec113_tmp[4];
		float* 	fRec112 = &fRec112_tmp[4];
		float 	fSlow32 = fbutton14;
		float* 	fVec14 = &fVec14_tmp[4];
		float* 	fYec86 = &fYec86_tmp[4];
		float* 	fRec115 = &fRec115_tmp[4];
		float* 	fRec114 = &fRec114_tmp[4];
		float 	fSlow33 = fbutton15;
		float* 	fVec15 = &fVec15_tmp[4];
		float* 	fYec87 = &fYec87_tmp[4];
		float* 	fRec117 = &fRec117_tmp[4];
		float* 	fRec116 = &fRec116_tmp[4];
		float 	fSlow34 = fbutton16;
		float* 	fVec16 = &fVec16_tmp[4];
		float* 	fYec88 = &fYec88_tmp[4];
		float* 	fRec119 = &fRec119_tmp[4];
		float* 	fRec118 = &fRec118_tmp[4];
		float 	fSlow35 = fslider4;
		float 	fSlow36 = (1.0f - fSlow35);
		float 	fSlow37 = fbutton17;
		float* 	fVec17 = &fVec17_tmp[4];
		float* 	fYec89 = &fYec89_tmp[4];
		float* 	fRec121 = &fRec121_tmp[4];
		float* 	fRec120 = &fRec120_tmp[4];
		float 	fSlow38 = fbutton18;
		float* 	fVec18 = &fVec18_tmp[4];
		float* 	fYec90 = &fYec90_tmp[4];
		float* 	fRec123 = &fRec123_tmp[4];
		float* 	fRec122 = &fRec122_tmp[4];
		float 	fSlow39 = fbutton19;
		float* 	fVec19 = &fVec19_tmp[4];
		float* 	fYec91 = &fYec91_tmp[4];
		float* 	fRec125 = &fRec125_tmp[4];
		float* 	fRec124 = &fRec124_tmp[4];
		float 	fSlow40 = fbutton20;
		float* 	fVec20 = &fVec20_tmp[4];
		float* 	fYec92 = &fYec92_tmp[4];
		float* 	fRec127 = &fRec127_tmp[4];
		float* 	fRec126 = &fRec126_tmp[4];
		float 	fSlow41 = fbutton21;
		float* 	fVec21 = &fVec21_tmp[4];
		float* 	fYec93 = &fYec93_tmp[4];
		float* 	fRec129 = &fRec129_tmp[4];
		float* 	fRec128 = &fRec128_tmp[4];
		float 	fSlow42 = fbutton22;
		float* 	fVec22 = &fVec22_tmp[4];
		float* 	fYec94 = &fYec94_tmp[4];
		float* 	fRec131 = &fRec131_tmp[4];
		float* 	fRec130 = &fRec130_tmp[4];
		float 	fSlow43 = fbutton23;
		float* 	fVec23 = &fVec23_tmp[4];
		float* 	fYec95 = &fYec95_tmp[4];
		float* 	fRec133 = &fRec133_tmp[4];
		float* 	fRec132 = &fRec132_tmp[4];
		float 	fSlow44 = fbutton24;
		float* 	fVec24 = &fVec24_tmp[4];
		float* 	fYec96 = &fYec96_tmp[4];
		float* 	fRec135 = &fRec135_tmp[4];
		float* 	fRec134 = &fRec134_tmp[4];
		float 	fSlow45 = fbutton25;
		float* 	fVec25 = &fVec25_tmp[4];
		float* 	fYec97 = &fYec97_tmp[4];
		float* 	fRec137 = &fRec137_tmp[4];
		float* 	fRec136 = &fRec136_tmp[4];
		float 	fSlow46 = fbutton26;
		float* 	fVec26 = &fVec26_tmp[4];
		float* 	fYec98 = &fYec98_tmp[4];
		float* 	fRec139 = &fRec139_tmp[4];
		float* 	fRec138 = &fRec138_tmp[4];
		float 	fSlow47 = fbutton27;
		float* 	fVec27 = &fVec27_tmp[4];
		float* 	fYec99 = &fYec99_tmp[4];
		float* 	fRec141 = &fRec141_tmp[4];
		float* 	fRec140 = &fRec140_tmp[4];
		float 	fSlow48 = fbutton28;
		float* 	fVec28 = &fVec28_tmp[4];
		float* 	fYec100 = &fYec100_tmp[4];
		float* 	fRec143 = &fRec143_tmp[4];
		float* 	fRec142 = &fRec142_tmp[4];
		float 	fSlow49 = fbutton29;
		float* 	fVec29 = &fVec29_tmp[4];
		float* 	fYec101 = &fYec101_tmp[4];
		float* 	fRec145 = &fRec145_tmp[4];
		float* 	fRec144 = &fRec144_tmp[4];
		float 	fSlow50 = fbutton30;
		float* 	fVec30 = &fVec30_tmp[4];
		float* 	fYec102 = &fYec102_tmp[4];
		float* 	fRec147 = &fRec147_tmp[4];
		float* 	fRec146 = &fRec146_tmp[4];
		float 	fSlow51 = fbutton31;
		float* 	fVec31 = &fVec31_tmp[4];
		float* 	fYec103 = &fYec103_tmp[4];
		float* 	fRec149 = &fRec149_tmp[4];
		float* 	fRec148 = &fRec148_tmp[4];
		float 	fSlow52 = fbutton32;
		float* 	fVec32 = &fVec32_tmp[4];
		float* 	fYec104 = &fYec104_tmp[4];
		float* 	fRec151 = &fRec151_tmp[4];
		float* 	fRec150 = &fRec150_tmp[4];
		float 	fSlow53 = fbutton33;
		float* 	fVec33 = &fVec33_tmp[4];
		float* 	fYec105 = &fYec105_tmp[4];
		float* 	fRec153 = &fRec153_tmp[4];
		float* 	fRec152 = &fRec152_tmp[4];
		float 	fSlow54 = fbutton34;
		float* 	fVec34 = &fVec34_tmp[4];
		float* 	fYec106 = &fYec106_tmp[4];
		float* 	fRec155 = &fRec155_tmp[4];
		float* 	fRec154 = &fRec154_tmp[4];
		float 	fSlow55 = fbutton35;
		float* 	fVec35 = &fVec35_tmp[4];
		float* 	fYec107 = &fYec107_tmp[4];
		float* 	fRec157 = &fRec157_tmp[4];
		float* 	fRec156 = &fRec156_tmp[4];
		float 	fSlow56 = fbutton36;
		float* 	fVec36 = &fVec36_tmp[4];
		float* 	fYec108 = &fYec108_tmp[4];
		float* 	fRec159 = &fRec159_tmp[4];
		float* 	fRec158 = &fRec158_tmp[4];
		float 	fSlow57 = fbutton37;
		float* 	fVec37 = &fVec37_tmp[4];
		float* 	fYec109 = &fYec109_tmp[4];
		float* 	fRec161 = &fRec161_tmp[4];
		float* 	fRec160 = &fRec160_tmp[4];
		float 	fSlow58 = fbutton38;
		float* 	fVec38 = &fVec38_tmp[4];
		float* 	fYec110 = &fYec110_tmp[4];
		float* 	fRec163 = &fRec163_tmp[4];
		float* 	fRec162 = &fRec162_tmp[4];
		float 	fSlow59 = fbutton39;
		float* 	fVec39 = &fVec39_tmp[4];
		float* 	fYec111 = &fYec111_tmp[4];
		float* 	fRec165 = &fRec165_tmp[4];
		float* 	fRec164 = &fRec164_tmp[4];
		float 	fSlow60 = fbutton40;
		float* 	fVec40 = &fVec40_tmp[4];
		float* 	fYec112 = &fYec112_tmp[4];
		float* 	fRec167 = &fRec167_tmp[4];
		float* 	fRec166 = &fRec166_tmp[4];
		float 	fSlow61 = fbutton41;
		float* 	fVec41 = &fVec41_tmp[4];
		float* 	fYec113 = &fYec113_tmp[4];
		float* 	fRec169 = &fRec169_tmp[4];
		float* 	fRec168 = &fRec168_tmp[4];
		float 	fSlow62 = fbutton42;
		float* 	fVec42 = &fVec42_tmp[4];
		float* 	fYec114 = &fYec114_tmp[4];
		float* 	fRec171 = &fRec171_tmp[4];
		float* 	fRec170 = &fRec170_tmp[4];
		float 	fSlow63 = fbutton43;
		float* 	fVec43 = &fVec43_tmp[4];
		float* 	fYec115 = &fYec115_tmp[4];
		float* 	fRec173 = &fRec173_tmp[4];
		float* 	fRec172 = &fRec172_tmp[4];
		float 	fSlow64 = fbutton44;
		float* 	fVec44 = &fVec44_tmp[4];
		float* 	fYec116 = &fYec116_tmp[4];
		float* 	fRec175 = &fRec175_tmp[4];
		float* 	fRec174 = &fRec174_tmp[4];
		float 	fSlow65 = fbutton45;
		float* 	fVec45 = &fVec45_tmp[4];
		float* 	fYec117 = &fYec117_tmp[4];
		float* 	fRec177 = &fRec177_tmp[4];
		float* 	fRec176 = &fRec176_tmp[4];
		float 	fSlow66 = fbutton46;
		float* 	fVec46 = &fVec46_tmp[4];
		float* 	fYec118 = &fYec118_tmp[4];
		float* 	fRec179 = &fRec179_tmp[4];
		float* 	fRec178 = &fRec178_tmp[4];
		float 	fSlow67 = fbutton47;
		float* 	fVec47 = &fVec47_tmp[4];
		float* 	fYec119 = &fYec119_tmp[4];
		float* 	fRec181 = &fRec181_tmp[4];
		float* 	fRec180 = &fRec180_tmp[4];
		float 	fSlow68 = fbutton48;
		float* 	fVec48 = &fVec48_tmp[4];
		float* 	fYec120 = &fYec120_tmp[4];
		float* 	fRec183 = &fRec183_tmp[4];
		float* 	fRec182 = &fRec182_tmp[4];
		float 	fSlow69 = fbutton49;
		float* 	fVec49 = &fVec49_tmp[4];
		float* 	fYec121 = &fYec121_tmp[4];
		float* 	fRec185 = &fRec185_tmp[4];
		float* 	fRec184 = &fRec184_tmp[4];
		float 	fSlow70 = fbutton50;
		float* 	fVec50 = &fVec50_tmp[4];
		float* 	fYec122 = &fYec122_tmp[4];
		float* 	fRec187 = &fRec187_tmp[4];
		float* 	fRec186 = &fRec186_tmp[4];
		float 	fSlow71 = fbutton51;
		float* 	fVec51 = &fVec51_tmp[4];
		float* 	fYec123 = &fYec123_tmp[4];
		float* 	fRec189 = &fRec189_tmp[4];
		float* 	fRec188 = &fRec188_tmp[4];
		float 	fSlow72 = fbutton52;
		float* 	fVec52 = &fVec52_tmp[4];
		float* 	fYec124 = &fYec124_tmp[4];
		float* 	fRec191 = &fRec191_tmp[4];
		float* 	fRec190 = &fRec190_tmp[4];
		float 	fSlow73 = fbutton53;
		float* 	fVec53 = &fVec53_tmp[4];
		float* 	fYec125 = &fYec125_tmp[4];
		float* 	fRec193 = &fRec193_tmp[4];
		float* 	fRec192 = &fRec192_tmp[4];
		float 	fSlow74 = fbutton54;
		float* 	fVec54 = &fVec54_tmp[4];
		float* 	fYec126 = &fYec126_tmp[4];
		float* 	fRec195 = &fRec195_tmp[4];
		float* 	fRec194 = &fRec194_tmp[4];
		float 	fSlow75 = fbutton55;
		float* 	fVec55 = &fVec55_tmp[4];
		float* 	fYec127 = &fYec127_tmp[4];
		float* 	fRec197 = &fRec197_tmp[4];
		float* 	fRec196 = &fRec196_tmp[4];
		float 	fSlow76 = fbutton56;
		float* 	fVec56 = &fVec56_tmp[4];
		float* 	fYec128 = &fYec128_tmp[4];
		float* 	fRec199 = &fRec199_tmp[4];
		float* 	fRec198 = &fRec198_tmp[4];
		float 	fSlow77 = fbutton57;
		float* 	fVec57 = &fVec57_tmp[4];
		float* 	fYec129 = &fYec129_tmp[4];
		float* 	fRec201 = &fRec201_tmp[4];
		float* 	fRec200 = &fRec200_tmp[4];
		float 	fSlow78 = fbutton58;
		float* 	fVec58 = &fVec58_tmp[4];
		float* 	fYec130 = &fYec130_tmp[4];
		float* 	fRec203 = &fRec203_tmp[4];
		float* 	fRec202 = &fRec202_tmp[4];
		float 	fSlow79 = fbutton59;
		float* 	fVec59 = &fVec59_tmp[4];
		float* 	fYec131 = &fYec131_tmp[4];
		float* 	fRec205 = &fRec205_tmp[4];
		float* 	fRec204 = &fRec204_tmp[4];
		float 	fSlow80 = fbutton60;
		float* 	fVec60 = &fVec60_tmp[4];
		float* 	fYec132 = &fYec132_tmp[4];
		float* 	fRec207 = &fRec207_tmp[4];
		float* 	fRec206 = &fRec206_tmp[4];
		float* 	fYec133 = &fYec133_tmp[4];
		float* 	fRec0 = &fRec0_tmp[4];
		float 	fSlow81 = fslider5;
		float 	fSlow82 = (fSlow81 * (1 + (fSlow81 * ((2.81f * fSlow81) - 2.81f))));
		int* 	iRec211 = &iRec211_tmp[4];
		float* 	fYec134 = &fYec134_tmp[4];
		float* 	fYec135 = &fYec135_tmp[4];
		float* 	fRec210 = &fRec210_tmp[4];
		float* 	fRec209 = &fRec209_tmp[4];
		int* 	iRec214 = &iRec214_tmp[4];
		float* 	fYec136 = &fYec136_tmp[4];
		float* 	fYec137 = &fYec137_tmp[4];
		float* 	fRec213 = &fRec213_tmp[4];
		float* 	fRec212 = &fRec212_tmp[4];
		int* 	iRec217 = &iRec217_tmp[4];
		float* 	fYec138 = &fYec138_tmp[4];
		float* 	fYec139 = &fYec139_tmp[4];
		float* 	fRec216 = &fRec216_tmp[4];
		float* 	fRec215 = &fRec215_tmp[4];
		int* 	iRec220 = &iRec220_tmp[4];
		float* 	fYec140 = &fYec140_tmp[4];
		float* 	fYec141 = &fYec141_tmp[4];
		float* 	fRec219 = &fRec219_tmp[4];
		float* 	fRec218 = &fRec218_tmp[4];
		int* 	iRec223 = &iRec223_tmp[4];
		float* 	fYec142 = &fYec142_tmp[4];
		float* 	fYec143 = &fYec143_tmp[4];
		float* 	fRec222 = &fRec222_tmp[4];
		float* 	fRec221 = &fRec221_tmp[4];
		int* 	iRec226 = &iRec226_tmp[4];
		float* 	fYec144 = &fYec144_tmp[4];
		float* 	fYec145 = &fYec145_tmp[4];
		float* 	fRec225 = &fRec225_tmp[4];
		float* 	fRec224 = &fRec224_tmp[4];
		int* 	iRec229 = &iRec229_tmp[4];
		float* 	fYec146 = &fYec146_tmp[4];
		float* 	fYec147 = &fYec147_tmp[4];
		float* 	fRec228 = &fRec228_tmp[4];
		float* 	fRec227 = &fRec227_tmp[4];
		int* 	iRec232 = &iRec232_tmp[4];
		float* 	fYec148 = &fYec148_tmp[4];
		float* 	fYec149 = &fYec149_tmp[4];
		float* 	fRec231 = &fRec231_tmp[4];
		float* 	fRec230 = &fRec230_tmp[4];
		int* 	iRec235 = &iRec235_tmp[4];
		float* 	fYec150 = &fYec150_tmp[4];
		float* 	fYec151 = &fYec151_tmp[4];
		float* 	fRec234 = &fRec234_tmp[4];
		float* 	fRec233 = &fRec233_tmp[4];
		int* 	iRec238 = &iRec238_tmp[4];
		float* 	fYec152 = &fYec152_tmp[4];
		float* 	fYec153 = &fYec153_tmp[4];
		float* 	fRec237 = &fRec237_tmp[4];
		float* 	fRec236 = &fRec236_tmp[4];
		int* 	iRec241 = &iRec241_tmp[4];
		float* 	fYec154 = &fYec154_tmp[4];
		float* 	fYec155 = &fYec155_tmp[4];
		float* 	fRec240 = &fRec240_tmp[4];
		float* 	fRec239 = &fRec239_tmp[4];
		int* 	iRec244 = &iRec244_tmp[4];
		float* 	fYec156 = &fYec156_tmp[4];
		float* 	fYec157 = &fYec157_tmp[4];
		float* 	fRec243 = &fRec243_tmp[4];
		float* 	fRec242 = &fRec242_tmp[4];
		float* 	fYec158 = &fYec158_tmp[4];
		float* 	fRec208 = &fRec208_tmp[4];
		float 	fSlow83 = fslider6;
		float 	fSlow84 = (fSlow83 * (1 + (fSlow83 * ((2.81f * fSlow83) - 2.81f))));
		float* 	fYec159 = &fYec159_tmp[4];
		float* 	fRec246 = &fRec246_tmp[4];
		float* 	fRec245 = &fRec245_tmp[4];
		float* 	fYec160 = &fYec160_tmp[4];
		float* 	fRec248 = &fRec248_tmp[4];
		float* 	fRec247 = &fRec247_tmp[4];
		float* 	fYec161 = &fYec161_tmp[4];
		float* 	fRec250 = &fRec250_tmp[4];
		float* 	fRec249 = &fRec249_tmp[4];
		float* 	fYec162 = &fYec162_tmp[4];
		float* 	fRec252 = &fRec252_tmp[4];
		float* 	fRec251 = &fRec251_tmp[4];
		float* 	fYec163 = &fYec163_tmp[4];
		float* 	fRec254 = &fRec254_tmp[4];
		float* 	fRec253 = &fRec253_tmp[4];
		float* 	fYec164 = &fYec164_tmp[4];
		float* 	fRec256 = &fRec256_tmp[4];
		float* 	fRec255 = &fRec255_tmp[4];
		float* 	fYec165 = &fYec165_tmp[4];
		float* 	fRec258 = &fRec258_tmp[4];
		float* 	fRec257 = &fRec257_tmp[4];
		float* 	fYec166 = &fYec166_tmp[4];
		float* 	fRec260 = &fRec260_tmp[4];
		float* 	fRec259 = &fRec259_tmp[4];
		float* 	fYec167 = &fYec167_tmp[4];
		float* 	fRec262 = &fRec262_tmp[4];
		float* 	fRec261 = &fRec261_tmp[4];
		float* 	fYec168 = &fYec168_tmp[4];
		float* 	fRec264 = &fRec264_tmp[4];
		float* 	fRec263 = &fRec263_tmp[4];
		float* 	fYec169 = &fYec169_tmp[4];
		float* 	fRec266 = &fRec266_tmp[4];
		float* 	fRec265 = &fRec265_tmp[4];
		float* 	fYec170 = &fYec170_tmp[4];
		float* 	fYec171 = &fYec171_tmp[4];
		float* 	fRec267 = &fRec267_tmp[4];
		float* 	fRec268 = &fRec268_tmp[4];
		float 	fSlow85 = fslider7;
		float 	fSlow86 = (fSlow85 * (1 + (fSlow85 * ((2.81f * fSlow85) - 2.81f))));
		float* 	fYec172 = &fYec172_tmp[4];
		float* 	fYec173 = &fYec173_tmp[4];
		float* 	fRec270 = &fRec270_tmp[4];
		float* 	fYec174 = &fYec174_tmp[4];
		float* 	fYec175 = &fYec175_tmp[4];
		float* 	fRec271 = &fRec271_tmp[4];
		float* 	fYec176 = &fYec176_tmp[4];
		float* 	fYec177 = &fYec177_tmp[4];
		float* 	fRec272 = &fRec272_tmp[4];
		float* 	fYec178 = &fYec178_tmp[4];
		float* 	fYec179 = &fYec179_tmp[4];
		float* 	fRec273 = &fRec273_tmp[4];
		float* 	fYec180 = &fYec180_tmp[4];
		float* 	fYec181 = &fYec181_tmp[4];
		float* 	fRec274 = &fRec274_tmp[4];
		float* 	fYec182 = &fYec182_tmp[4];
		float* 	fYec183 = &fYec183_tmp[4];
		float* 	fRec275 = &fRec275_tmp[4];
		float* 	fYec184 = &fYec184_tmp[4];
		float* 	fYec185 = &fYec185_tmp[4];
		float* 	fRec276 = &fRec276_tmp[4];
		float* 	fYec186 = &fYec186_tmp[4];
		float* 	fRec269 = &fRec269_tmp[4];
		float 	fSlow87 = fslider8;
		float 	fSlow88 = (fSlow87 * (1 + (fSlow87 * ((2.81f * fSlow87) - 2.81f))));
		float* 	fYec187 = &fYec187_tmp[4];
		float* 	fYec188 = &fYec188_tmp[4];
		float* 	fRec278 = &fRec278_tmp[4];
		float* 	fYec189 = &fYec189_tmp[4];
		float* 	fYec190 = &fYec190_tmp[4];
		float* 	fRec279 = &fRec279_tmp[4];
		float* 	fYec191 = &fYec191_tmp[4];
		float* 	fYec192 = &fYec192_tmp[4];
		float* 	fRec280 = &fRec280_tmp[4];
		float* 	fYec193 = &fYec193_tmp[4];
		float* 	fYec194 = &fYec194_tmp[4];
		float* 	fRec281 = &fRec281_tmp[4];
		float* 	fYec195 = &fYec195_tmp[4];
		float* 	fRec277 = &fRec277_tmp[4];
		float 	fSlow89 = fslider9;
		float 	fSlow90 = (fSlow89 * (1 + (fSlow89 * ((2.81f * fSlow89) - 2.81f))));
		float 	fSlow91 = (0.5f * fSlow36);
		float* 	fYec196 = &fYec196_tmp[4];
		float* 	fRec282 = &fRec282_tmp[4];
		float 	fSlow92 = fslider10;
		float 	fSlow93 = (fSlow92 * (1 + (fSlow92 * ((2.81f * fSlow92) - 2.81f))));
		float* 	fYec197 = &fYec197_tmp[4];
		float* 	fRec283 = &fRec283_tmp[4];
		float 	fSlow94 = fslider11;
		float 	fSlow95 = (fSlow94 * (1 + (fSlow94 * ((2.81f * fSlow94) - 2.81f))));
		float 	fSlow96 = fslider12;
		float 	fSlow97 = (1 - fSlow96);
		float 	fSlow98 = ((int((fSlow0 > 0.5f)))?0.01357f:0.0f);
		int* 	iRec289 = &iRec289_tmp[4];
		float* 	fRec286 = &fRec286_tmp[4];
		int* 	iRec287 = &iRec287_tmp[4];
		float* 	fRec288 = &fRec288_tmp[4];
		float* 	fYec198 = &fYec198_tmp[4];
		float* 	fRec285 = &fRec285_tmp[4];
		float* 	fRec284 = &fRec284_tmp[4];
		float* 	fYec199 = &fYec199_tmp[4];
		float 	fSlow99 = (4.5f * fslider13);
		float 	fSlow100 = (0.02f * fslider14);
		float* 	fRec290 = &fRec290_tmp[4];
		float 	fSlow101 = fslider15;
		float 	fSlow102 = (fSlow101 * (1 + (fSlow101 * ((2.81f * fSlow101) - 2.81f))));
		float 	fSlow103 = fslider16;
		float 	fSlow104 = (fSlow103 * (1 + (fSlow103 * ((2.81f * fSlow103) - 2.81f))));
		float* 	fRec291 = &fRec291_tmp[4];
		float 	fSlow105 = fslider17;
		float 	fSlow106 = (fSlow105 * (1 + (fSlow105 * ((2.81f * fSlow105) - 2.81f))));
		float* 	fYec200 = &fYec200_tmp[4];
		float* 	fRec293 = &fRec293_tmp[4];
		float 	fSlow107 = (0.4583333333333333f * fSlow106);
		float* 	fYec201 = &fYec201_tmp[4];
		float* 	fRec292 = &fRec292_tmp[4];
		float 	fSlow108 = fslider18;
		float 	fSlow109 = (fSlow108 * (1 + (fSlow108 * ((2.81f * fSlow108) - 2.81f))));
		float* 	fYec202 = &fYec202_tmp[4];
		float* 	fRec295 = &fRec295_tmp[4];
		float 	fSlow110 = (0.4583333333333333f * fSlow109);
		float* 	fYec203 = &fYec203_tmp[4];
		float* 	fRec294 = &fRec294_tmp[4];
		float 	fSlow111 = fslider19;
		float 	fSlow112 = (fSlow111 * (1 + (fSlow111 * ((2.81f * fSlow111) - 2.81f))));
		float* 	fYec204 = &fYec204_tmp[4];
		float* 	fRec297 = &fRec297_tmp[4];
		float 	fSlow113 = (0.4583333333333333f * fSlow112);
		float* 	fYec205 = &fYec205_tmp[4];
		float* 	fRec296 = &fRec296_tmp[4];
		float 	fSlow114 = fslider20;
		float 	fSlow115 = (fSlow114 * (1 + (fSlow114 * ((2.81f * fSlow114) - 2.81f))));
		float* 	fYec206 = &fYec206_tmp[4];
		float* 	fRec299 = &fRec299_tmp[4];
		float 	fSlow116 = (0.4583333333333333f * fSlow115);
		float* 	fYec207 = &fYec207_tmp[4];
		float* 	fRec298 = &fRec298_tmp[4];
		float 	fSlow117 = (0.9615384615384616f * fslider21);
		float 	fSlow118 = (0.019230769230769232f + fSlow117);
		float* 	fRec301 = &fRec301_tmp[4];
		float* 	fRec300 = &fRec300_tmp[4];
		float* 	fRec303 = &fRec303_tmp[4];
		float* 	fRec302 = &fRec302_tmp[4];
		float* 	fRec305 = &fRec305_tmp[4];
		float* 	fRec304 = &fRec304_tmp[4];
		float* 	fRec307 = &fRec307_tmp[4];
		float* 	fRec306 = &fRec306_tmp[4];
		float 	fSlow119 = (0.6f * (0.9807692307692307f - fSlow117));
		float 	fSlow120 = (2.5f * fSlow96);
		float 	fSlow121 = (0.02f * fslider22);
		float* 	fRec308 = &fRec308_tmp[4];
		int index;
		for (index = 0; index <= fullcount - 32; index += 32) {
			// compute by blocks of 32 samples
			const int count = 32;
			FAUSTFLOAT* output0 = &output[0][index];
			FAUSTFLOAT* output1 = &output[1][index];
			FAUSTFLOAT* output2 = &output[2][index];
			// SECTION : 1
			// LOOP 0x31a9490
			// pre processing
			for (int i=0; i<4; i++) fRec5_tmp[i]=fRec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec5[i] = (((int((fRec5[i-1] > 1.0f)))?(fRec5[i-1] - 1.0f):fRec5[i-1]) + fSlow6);
			}
			// post processing
			for (int i=0; i<4; i++) fRec5_perm[i]=fRec5_tmp[count+i];
			
			// SECTION : 2
			// LOOP 0x31a8ae0
			// exec code
			for (int i=0; i<count; i++) {
				fZec1[i] = ((fSlow7 * sinf((6.283185307179586f * fRec5[i]))) + fSlow5);
			}
			
			// SECTION : 3
			// LOOP 0x31a7d40
			// pre processing
			for (int i=0; i<4; i++) fRec4_tmp[i]=fRec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec2[i] = ((fConst1 * float((4186.009044809578f * (fZec1[i] * fSlow4)))) + fRec4[i-1]);
				fRec4[i] = ((int((fZec2[i] > 1.0f)))?(fZec2[i] - 1.0f):fZec2[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec4_perm[i]=fRec4_tmp[count+i];
			
			// LOOP 0x31c3020
			// pre processing
			for (int i=0; i<4; i++) fRec14_tmp[i]=fRec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec19[i] = ((fConst1 * float((4434.922095629953f * (fZec1[i] * fSlow9)))) + fRec14[i-1]);
				fRec14[i] = ((int((fZec19[i] > 1.0f)))?(fZec19[i] - 1.0f):fZec19[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec14_perm[i]=fRec14_tmp[count+i];
			
			// LOOP 0x31d95b0
			// pre processing
			for (int i=0; i<4; i++) fRec23_tmp[i]=fRec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec36[i] = ((fConst1 * float((4698.63628667852f * (fZec1[i] * fSlow11)))) + fRec23[i-1]);
				fRec23[i] = ((int((fZec36[i] > 1.0f)))?(fZec36[i] - 1.0f):fZec36[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec23_perm[i]=fRec23_tmp[count+i];
			
			// LOOP 0x31efa10
			// pre processing
			for (int i=0; i<4; i++) fRec32_tmp[i]=fRec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec53[i] = ((fConst1 * float((4978.031739553295f * (fZec1[i] * fSlow13)))) + fRec32[i-1]);
				fRec32[i] = ((int((fZec53[i] > 1.0f)))?(fZec53[i] - 1.0f):fZec53[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec32_perm[i]=fRec32_tmp[count+i];
			
			// LOOP 0x3206150
			// pre processing
			for (int i=0; i<4; i++) fRec41_tmp[i]=fRec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec70[i] = ((fConst1 * float((5274.04091060592f * (fSlow15 * fZec1[i])))) + fRec41[i-1]);
				fRec41[i] = ((int((fZec70[i] > 1.0f)))?(fZec70[i] - 1.0f):fZec70[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec41_perm[i]=fRec41_tmp[count+i];
			
			// LOOP 0x321cc90
			// pre processing
			for (int i=0; i<4; i++) fRec50_tmp[i]=fRec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec87[i] = ((fConst1 * float((5587.651702928062f * (fZec1[i] * fSlow17)))) + fRec50[i-1]);
				fRec50[i] = ((int((fZec87[i] > 1.0f)))?(fZec87[i] - 1.0f):fZec87[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec50_perm[i]=fRec50_tmp[count+i];
			
			// LOOP 0x32332a0
			// pre processing
			for (int i=0; i<4; i++) fRec59_tmp[i]=fRec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec104[i] = ((fConst1 * float((5919.91076338615f * (fZec1[i] * fSlow19)))) + fRec59[i-1]);
				fRec59[i] = ((int((fZec104[i] > 1.0f)))?(fZec104[i] - 1.0f):fZec104[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec59_perm[i]=fRec59_tmp[count+i];
			
			// LOOP 0x3249b70
			// pre processing
			for (int i=0; i<4; i++) fRec68_tmp[i]=fRec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec121[i] = ((fConst1 * float((6271.926975707989f * (fZec1[i] * fSlow21)))) + fRec68[i-1]);
				fRec68[i] = ((int((fZec121[i] > 1.0f)))?(fZec121[i] - 1.0f):fZec121[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec68_perm[i]=fRec68_tmp[count+i];
			
			// LOOP 0x32603f0
			// pre processing
			for (int i=0; i<4; i++) fRec77_tmp[i]=fRec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec138[i] = ((fConst1 * float((6644.875161279122f * (fZec1[i] * fSlow23)))) + fRec77[i-1]);
				fRec77[i] = ((int((fZec138[i] > 1.0f)))?(fZec138[i] - 1.0f):fZec138[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec77_perm[i]=fRec77_tmp[count+i];
			
			// LOOP 0x3277010
			// pre processing
			for (int i=0; i<4; i++) fRec86_tmp[i]=fRec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec155[i] = ((fConst1 * float((7.04e+03f * (fZec1[i] * fSlow25)))) + fRec86[i-1]);
				fRec86[i] = ((int((fZec155[i] > 1.0f)))?(fZec155[i] - 1.0f):fZec155[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec86_perm[i]=fRec86_tmp[count+i];
			
			// LOOP 0x328d560
			// pre processing
			for (int i=0; i<4; i++) fRec95_tmp[i]=fRec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec172[i] = ((fConst1 * float((7458.620184289437f * (fZec1[i] * fSlow27)))) + fRec95[i-1]);
				fRec95[i] = ((int((fZec172[i] > 1.0f)))?(fZec172[i] - 1.0f):fZec172[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec95_perm[i]=fRec95_tmp[count+i];
			
			// LOOP 0x32a40b0
			// pre processing
			for (int i=0; i<4; i++) fRec104_tmp[i]=fRec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec189[i] = ((fConst1 * float((7902.132820097988f * (fZec1[i] * fSlow29)))) + fRec104[i-1]);
				fRec104[i] = ((int((fZec189[i] > 1.0f)))?(fZec189[i] - 1.0f):fZec189[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec104_perm[i]=fRec104_tmp[count+i];
			
			// SECTION : 4
			// LOOP 0x31a7c30
			// exec code
			for (int i=0; i<count; i++) {
				fZec3[i] = (fRec4[i] - fRec4[i-1]);
			}
			
			// LOOP 0x31c2f10
			// exec code
			for (int i=0; i<count; i++) {
				fZec20[i] = (fRec14[i] - fRec14[i-1]);
			}
			
			// LOOP 0x31d94a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec37[i] = (fRec23[i] - fRec23[i-1]);
			}
			
			// LOOP 0x31ef900
			// exec code
			for (int i=0; i<count; i++) {
				fZec54[i] = (fRec32[i] - fRec32[i-1]);
			}
			
			// LOOP 0x3206040
			// exec code
			for (int i=0; i<count; i++) {
				fZec71[i] = (fRec41[i] - fRec41[i-1]);
			}
			
			// LOOP 0x321cb80
			// exec code
			for (int i=0; i<count; i++) {
				fZec88[i] = (fRec50[i] - fRec50[i-1]);
			}
			
			// LOOP 0x3233190
			// exec code
			for (int i=0; i<count; i++) {
				fZec105[i] = (fRec59[i] - fRec59[i-1]);
			}
			
			// LOOP 0x3249a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec122[i] = (fRec68[i] - fRec68[i-1]);
			}
			
			// LOOP 0x32602e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec139[i] = (fRec77[i] - fRec77[i-1]);
			}
			
			// LOOP 0x3276f00
			// exec code
			for (int i=0; i<count; i++) {
				fZec156[i] = (fRec86[i] - fRec86[i-1]);
			}
			
			// LOOP 0x328d450
			// exec code
			for (int i=0; i<count; i++) {
				fZec173[i] = (fRec95[i] - fRec95[i-1]);
			}
			
			// LOOP 0x32a3fa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec190[i] = (fRec104[i] - fRec104[i-1]);
			}
			
			// SECTION : 5
			// LOOP 0x31a74b0
			// pre processing
			for (int i=0; i<4; i++) iRec3_tmp[i]=iRec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec3[i] = ((int((fZec3[i] < 0)))?(1 - iRec3[i-1]):iRec3[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec3_perm[i]=iRec3_tmp[count+i];
			
			// LOOP 0x31c2830
			// pre processing
			for (int i=0; i<4; i++) iRec13_tmp[i]=iRec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec13[i] = ((int((fZec20[i] < 0)))?(1 - iRec13[i-1]):iRec13[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec13_perm[i]=iRec13_tmp[count+i];
			
			// LOOP 0x31d8dc0
			// pre processing
			for (int i=0; i<4; i++) iRec22_tmp[i]=iRec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec22[i] = ((int((fZec37[i] < 0)))?(1 - iRec22[i-1]):iRec22[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec22_perm[i]=iRec22_tmp[count+i];
			
			// LOOP 0x31ef220
			// pre processing
			for (int i=0; i<4; i++) iRec31_tmp[i]=iRec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec31[i] = ((int((fZec54[i] < 0)))?(1 - iRec31[i-1]):iRec31[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec31_perm[i]=iRec31_tmp[count+i];
			
			// LOOP 0x3205960
			// pre processing
			for (int i=0; i<4; i++) iRec40_tmp[i]=iRec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec40[i] = ((int((fZec71[i] < 0)))?(1 - iRec40[i-1]):iRec40[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec40_perm[i]=iRec40_tmp[count+i];
			
			// LOOP 0x321c4a0
			// pre processing
			for (int i=0; i<4; i++) iRec49_tmp[i]=iRec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec49[i] = ((int((fZec88[i] < 0)))?(1 - iRec49[i-1]):iRec49[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec49_perm[i]=iRec49_tmp[count+i];
			
			// LOOP 0x3232ab0
			// pre processing
			for (int i=0; i<4; i++) iRec58_tmp[i]=iRec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec58[i] = ((int((fZec105[i] < 0)))?(1 - iRec58[i-1]):iRec58[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec58_perm[i]=iRec58_tmp[count+i];
			
			// LOOP 0x3249410
			// pre processing
			for (int i=0; i<4; i++) iRec67_tmp[i]=iRec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec67[i] = ((int((fZec122[i] < 0)))?(1 - iRec67[i-1]):iRec67[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec67_perm[i]=iRec67_tmp[count+i];
			
			// LOOP 0x325fc00
			// pre processing
			for (int i=0; i<4; i++) iRec76_tmp[i]=iRec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec76[i] = ((int((fZec139[i] < 0)))?(1 - iRec76[i-1]):iRec76[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec76_perm[i]=iRec76_tmp[count+i];
			
			// LOOP 0x3276820
			// pre processing
			for (int i=0; i<4; i++) iRec85_tmp[i]=iRec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec85[i] = ((int((fZec156[i] < 0)))?(1 - iRec85[i-1]):iRec85[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec85_perm[i]=iRec85_tmp[count+i];
			
			// LOOP 0x328cd70
			// pre processing
			for (int i=0; i<4; i++) iRec94_tmp[i]=iRec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec94[i] = ((int((fZec173[i] < 0)))?(1 - iRec94[i-1]):iRec94[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec94_perm[i]=iRec94_tmp[count+i];
			
			// LOOP 0x32a3910
			// pre processing
			for (int i=0; i<4; i++) iRec103_tmp[i]=iRec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec103[i] = ((int((fZec190[i] < 0)))?(1 - iRec103[i-1]):iRec103[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec103_perm[i]=iRec103_tmp[count+i];
			
			// SECTION : 6
			// LOOP 0x31a7370
			// pre processing
			for (int i=0; i<4; i++) fYec0_tmp[i]=fYec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec0[i] = (fRec4[i] + iRec3[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec0_perm[i]=fYec0_tmp[count+i];
			
			// LOOP 0x31c26f0
			// pre processing
			for (int i=0; i<4; i++) fYec7_tmp[i]=fYec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec7[i] = (fRec14[i] + iRec13[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec7_perm[i]=fYec7_tmp[count+i];
			
			// LOOP 0x31d8c80
			// pre processing
			for (int i=0; i<4; i++) fYec14_tmp[i]=fYec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec14[i] = (fRec23[i] + iRec22[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec14_perm[i]=fYec14_tmp[count+i];
			
			// LOOP 0x31ef0e0
			// pre processing
			for (int i=0; i<4; i++) fYec21_tmp[i]=fYec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec21[i] = (fRec32[i] + iRec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec21_perm[i]=fYec21_tmp[count+i];
			
			// LOOP 0x3205820
			// pre processing
			for (int i=0; i<4; i++) fYec28_tmp[i]=fYec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec28[i] = (fRec41[i] + iRec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec28_perm[i]=fYec28_tmp[count+i];
			
			// LOOP 0x321c360
			// pre processing
			for (int i=0; i<4; i++) fYec35_tmp[i]=fYec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec35[i] = (fRec50[i] + iRec49[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec35_perm[i]=fYec35_tmp[count+i];
			
			// LOOP 0x3232970
			// pre processing
			for (int i=0; i<4; i++) fYec42_tmp[i]=fYec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec42[i] = (fRec59[i] + iRec58[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec42_perm[i]=fYec42_tmp[count+i];
			
			// LOOP 0x3249300
			// pre processing
			for (int i=0; i<4; i++) fYec49_tmp[i]=fYec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec49[i] = (fRec68[i] + iRec67[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec49_perm[i]=fYec49_tmp[count+i];
			
			// LOOP 0x325fac0
			// pre processing
			for (int i=0; i<4; i++) fYec56_tmp[i]=fYec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec56[i] = (fRec77[i] + iRec76[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec56_perm[i]=fYec56_tmp[count+i];
			
			// LOOP 0x32766e0
			// pre processing
			for (int i=0; i<4; i++) fYec63_tmp[i]=fYec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec63[i] = (fRec86[i] + iRec85[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec63_perm[i]=fYec63_tmp[count+i];
			
			// LOOP 0x328cc30
			// pre processing
			for (int i=0; i<4; i++) fYec70_tmp[i]=fYec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec70[i] = (fRec95[i] + iRec94[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec70_perm[i]=fYec70_tmp[count+i];
			
			// LOOP 0x32a37d0
			// pre processing
			for (int i=0; i<4; i++) fYec77_tmp[i]=fYec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec77[i] = (fRec104[i] + iRec103[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec77_perm[i]=fYec77_tmp[count+i];
			
			// SECTION : 7
			// LOOP 0x31a7230
			// exec code
			for (int i=0; i<count; i++) {
				fZec4[i] = (0.5f * fYec0[i]);
			}
			
			// LOOP 0x31b01e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec5[i] = (0.5f * fYec0[i-1]);
			}
			
			// LOOP 0x31c25b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec21[i] = (0.5f * fYec7[i]);
			}
			
			// LOOP 0x31c6cd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec22[i] = (0.5f * fYec7[i-1]);
			}
			
			// LOOP 0x31d8b40
			// exec code
			for (int i=0; i<count; i++) {
				fZec38[i] = (0.5f * fYec14[i]);
			}
			
			// LOOP 0x31dd1f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec39[i] = (0.5f * fYec14[i-1]);
			}
			
			// LOOP 0x31eefa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec55[i] = (0.5f * fYec21[i]);
			}
			
			// LOOP 0x31f3650
			// exec code
			for (int i=0; i<count; i++) {
				fZec56[i] = (0.5f * fYec21[i-1]);
			}
			
			// LOOP 0x32056e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec72[i] = (0.5f * fYec28[i]);
			}
			
			// LOOP 0x3209db0
			// exec code
			for (int i=0; i<count; i++) {
				fZec73[i] = (0.5f * fYec28[i-1]);
			}
			
			// LOOP 0x321c220
			// exec code
			for (int i=0; i<count; i++) {
				fZec89[i] = (0.5f * fYec35[i]);
			}
			
			// LOOP 0x32208d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec90[i] = (0.5f * fYec35[i-1]);
			}
			
			// LOOP 0x3232830
			// exec code
			for (int i=0; i<count; i++) {
				fZec106[i] = (0.5f * fYec42[i]);
			}
			
			// LOOP 0x3236ee0
			// exec code
			for (int i=0; i<count; i++) {
				fZec107[i] = (0.5f * fYec42[i-1]);
			}
			
			// LOOP 0x32491f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec123[i] = (0.5f * fYec49[i]);
			}
			
			// LOOP 0x324d900
			// exec code
			for (int i=0; i<count; i++) {
				fZec124[i] = (0.5f * fYec49[i-1]);
			}
			
			// LOOP 0x325f980
			// exec code
			for (int i=0; i<count; i++) {
				fZec140[i] = (0.5f * fYec56[i]);
			}
			
			// LOOP 0x3264030
			// exec code
			for (int i=0; i<count; i++) {
				fZec141[i] = (0.5f * fYec56[i-1]);
			}
			
			// LOOP 0x32765a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec157[i] = (0.5f * fYec63[i]);
			}
			
			// LOOP 0x327abf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec158[i] = (0.5f * fYec63[i-1]);
			}
			
			// LOOP 0x328caf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec174[i] = (0.5f * fYec70[i]);
			}
			
			// LOOP 0x3291200
			// exec code
			for (int i=0; i<count; i++) {
				fZec175[i] = (0.5f * fYec70[i-1]);
			}
			
			// LOOP 0x32a3690
			// exec code
			for (int i=0; i<count; i++) {
				fZec191[i] = (0.5f * fYec77[i]);
			}
			
			// LOOP 0x32a7cd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec192[i] = (0.5f * fYec77[i-1]);
			}
			
			// SECTION : 8
			// LOOP 0x31afba0
			// pre processing
			for (int i=0; i<4; i++) iRec6_tmp[i]=iRec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec6[i] = ((int(((fZec4[i] - fZec5[i]) < 0)))?(1 - iRec6[i-1]):iRec6[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec6_perm[i]=iRec6_tmp[count+i];
			
			// LOOP 0x31c66d0
			// pre processing
			for (int i=0; i<4; i++) iRec15_tmp[i]=iRec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec15[i] = ((int(((fZec21[i] - fZec22[i]) < 0)))?(1 - iRec15[i-1]):iRec15[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec15_perm[i]=iRec15_tmp[count+i];
			
			// LOOP 0x31dcbf0
			// pre processing
			for (int i=0; i<4; i++) iRec24_tmp[i]=iRec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec24[i] = ((int(((fZec38[i] - fZec39[i]) < 0)))?(1 - iRec24[i-1]):iRec24[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec24_perm[i]=iRec24_tmp[count+i];
			
			// LOOP 0x31f3050
			// pre processing
			for (int i=0; i<4; i++) iRec33_tmp[i]=iRec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec33[i] = ((int(((fZec55[i] - fZec56[i]) < 0)))?(1 - iRec33[i-1]):iRec33[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec33_perm[i]=iRec33_tmp[count+i];
			
			// LOOP 0x32097b0
			// pre processing
			for (int i=0; i<4; i++) iRec42_tmp[i]=iRec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec42[i] = ((int(((fZec72[i] - fZec73[i]) < 0)))?(1 - iRec42[i-1]):iRec42[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec42_perm[i]=iRec42_tmp[count+i];
			
			// LOOP 0x32202d0
			// pre processing
			for (int i=0; i<4; i++) iRec51_tmp[i]=iRec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec51[i] = ((int(((fZec89[i] - fZec90[i]) < 0)))?(1 - iRec51[i-1]):iRec51[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec51_perm[i]=iRec51_tmp[count+i];
			
			// LOOP 0x32368e0
			// pre processing
			for (int i=0; i<4; i++) iRec60_tmp[i]=iRec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec60[i] = ((int(((fZec106[i] - fZec107[i]) < 0)))?(1 - iRec60[i-1]):iRec60[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec60_perm[i]=iRec60_tmp[count+i];
			
			// LOOP 0x324d300
			// pre processing
			for (int i=0; i<4; i++) iRec69_tmp[i]=iRec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec69[i] = ((int(((fZec123[i] - fZec124[i]) < 0)))?(1 - iRec69[i-1]):iRec69[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec69_perm[i]=iRec69_tmp[count+i];
			
			// LOOP 0x3263a30
			// pre processing
			for (int i=0; i<4; i++) iRec78_tmp[i]=iRec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec78[i] = ((int(((fZec140[i] - fZec141[i]) < 0)))?(1 - iRec78[i-1]):iRec78[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec78_perm[i]=iRec78_tmp[count+i];
			
			// LOOP 0x327a5f0
			// pre processing
			for (int i=0; i<4; i++) iRec87_tmp[i]=iRec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec87[i] = ((int(((fZec157[i] - fZec158[i]) < 0)))?(1 - iRec87[i-1]):iRec87[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec87_perm[i]=iRec87_tmp[count+i];
			
			// LOOP 0x3290c00
			// pre processing
			for (int i=0; i<4; i++) iRec96_tmp[i]=iRec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec96[i] = ((int(((fZec174[i] - fZec175[i]) < 0)))?(1 - iRec96[i-1]):iRec96[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec96_perm[i]=iRec96_tmp[count+i];
			
			// LOOP 0x32a76d0
			// pre processing
			for (int i=0; i<4; i++) iRec105_tmp[i]=iRec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec105[i] = ((int(((fZec191[i] - fZec192[i]) < 0)))?(1 - iRec105[i-1]):iRec105[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec105_perm[i]=iRec105_tmp[count+i];
			
			// SECTION : 9
			// LOOP 0x31a70f0
			// pre processing
			for (int i=0; i<4; i++) fYec1_tmp[i]=fYec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec1[i] = (iRec6[i] + fZec4[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec1_perm[i]=fYec1_tmp[count+i];
			
			// LOOP 0x31c2470
			// pre processing
			for (int i=0; i<4; i++) fYec8_tmp[i]=fYec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec8[i] = (iRec15[i] + fZec21[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec8_perm[i]=fYec8_tmp[count+i];
			
			// LOOP 0x31d8a00
			// pre processing
			for (int i=0; i<4; i++) fYec15_tmp[i]=fYec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec15[i] = (iRec24[i] + fZec38[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec15_perm[i]=fYec15_tmp[count+i];
			
			// LOOP 0x31eee60
			// pre processing
			for (int i=0; i<4; i++) fYec22_tmp[i]=fYec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec22[i] = (iRec33[i] + fZec55[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec22_perm[i]=fYec22_tmp[count+i];
			
			// LOOP 0x32055a0
			// pre processing
			for (int i=0; i<4; i++) fYec29_tmp[i]=fYec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec29[i] = (iRec42[i] + fZec72[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec29_perm[i]=fYec29_tmp[count+i];
			
			// LOOP 0x321c0e0
			// pre processing
			for (int i=0; i<4; i++) fYec36_tmp[i]=fYec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec36[i] = (iRec51[i] + fZec89[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec36_perm[i]=fYec36_tmp[count+i];
			
			// LOOP 0x32326f0
			// pre processing
			for (int i=0; i<4; i++) fYec43_tmp[i]=fYec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec43[i] = (iRec60[i] + fZec106[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec43_perm[i]=fYec43_tmp[count+i];
			
			// LOOP 0x32490e0
			// pre processing
			for (int i=0; i<4; i++) fYec50_tmp[i]=fYec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec50[i] = (iRec69[i] + fZec123[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec50_perm[i]=fYec50_tmp[count+i];
			
			// LOOP 0x325f840
			// pre processing
			for (int i=0; i<4; i++) fYec57_tmp[i]=fYec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec57[i] = (iRec78[i] + fZec140[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec57_perm[i]=fYec57_tmp[count+i];
			
			// LOOP 0x3276460
			// pre processing
			for (int i=0; i<4; i++) fYec64_tmp[i]=fYec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec64[i] = (iRec87[i] + fZec157[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec64_perm[i]=fYec64_tmp[count+i];
			
			// LOOP 0x328c9b0
			// pre processing
			for (int i=0; i<4; i++) fYec71_tmp[i]=fYec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec71[i] = (iRec96[i] + fZec174[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec71_perm[i]=fYec71_tmp[count+i];
			
			// LOOP 0x32a3550
			// pre processing
			for (int i=0; i<4; i++) fYec78_tmp[i]=fYec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec78[i] = (iRec105[i] + fZec191[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec78_perm[i]=fYec78_tmp[count+i];
			
			// SECTION : 10
			// LOOP 0x31a6fb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec6[i] = (0.5f * fYec1[i]);
			}
			
			// LOOP 0x31b2460
			// exec code
			for (int i=0; i<count; i++) {
				fZec7[i] = (0.5f * fYec1[i-1]);
			}
			
			// LOOP 0x31c2330
			// exec code
			for (int i=0; i<count; i++) {
				fZec23[i] = (0.5f * fYec8[i]);
			}
			
			// LOOP 0x31c9020
			// exec code
			for (int i=0; i<count; i++) {
				fZec24[i] = (0.5f * fYec8[i-1]);
			}
			
			// LOOP 0x31d88c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec40[i] = (0.5f * fYec15[i]);
			}
			
			// LOOP 0x31df570
			// exec code
			for (int i=0; i<count; i++) {
				fZec41[i] = (0.5f * fYec15[i-1]);
			}
			
			// LOOP 0x31eed20
			// exec code
			for (int i=0; i<count; i++) {
				fZec57[i] = (0.5f * fYec22[i]);
			}
			
			// LOOP 0x31f59d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec58[i] = (0.5f * fYec22[i-1]);
			}
			
			// LOOP 0x3205460
			// exec code
			for (int i=0; i<count; i++) {
				fZec74[i] = (0.5f * fYec29[i]);
			}
			
			// LOOP 0x320c130
			// exec code
			for (int i=0; i<count; i++) {
				fZec75[i] = (0.5f * fYec29[i-1]);
			}
			
			// LOOP 0x321bfa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec91[i] = (0.5f * fYec36[i]);
			}
			
			// LOOP 0x3222c50
			// exec code
			for (int i=0; i<count; i++) {
				fZec92[i] = (0.5f * fYec36[i-1]);
			}
			
			// LOOP 0x32325b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec108[i] = (0.5f * fYec43[i]);
			}
			
			// LOOP 0x3239260
			// exec code
			for (int i=0; i<count; i++) {
				fZec109[i] = (0.5f * fYec43[i-1]);
			}
			
			// LOOP 0x3248fd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec125[i] = (0.5f * fYec50[i]);
			}
			
			// LOOP 0x324fc80
			// exec code
			for (int i=0; i<count; i++) {
				fZec126[i] = (0.5f * fYec50[i-1]);
			}
			
			// LOOP 0x325f700
			// exec code
			for (int i=0; i<count; i++) {
				fZec142[i] = (0.5f * fYec57[i]);
			}
			
			// LOOP 0x32663b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec143[i] = (0.5f * fYec57[i-1]);
			}
			
			// LOOP 0x3276320
			// exec code
			for (int i=0; i<count; i++) {
				fZec159[i] = (0.5f * fYec64[i]);
			}
			
			// LOOP 0x327cf70
			// exec code
			for (int i=0; i<count; i++) {
				fZec160[i] = (0.5f * fYec64[i-1]);
			}
			
			// LOOP 0x328c870
			// exec code
			for (int i=0; i<count; i++) {
				fZec176[i] = (0.5f * fYec71[i]);
			}
			
			// LOOP 0x3293580
			// exec code
			for (int i=0; i<count; i++) {
				fZec177[i] = (0.5f * fYec71[i-1]);
			}
			
			// LOOP 0x32a3410
			// exec code
			for (int i=0; i<count; i++) {
				fZec193[i] = (0.5f * fYec78[i]);
			}
			
			// LOOP 0x32aa060
			// exec code
			for (int i=0; i<count; i++) {
				fZec194[i] = (0.5f * fYec78[i-1]);
			}
			
			// SECTION : 11
			// LOOP 0x31b1e20
			// pre processing
			for (int i=0; i<4; i++) iRec7_tmp[i]=iRec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec7[i] = ((int(((fZec6[i] - fZec7[i]) < 0)))?(1 - iRec7[i-1]):iRec7[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec7_perm[i]=iRec7_tmp[count+i];
			
			// LOOP 0x31c8a20
			// pre processing
			for (int i=0; i<4; i++) iRec16_tmp[i]=iRec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec16[i] = ((int(((fZec23[i] - fZec24[i]) < 0)))?(1 - iRec16[i-1]):iRec16[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec16_perm[i]=iRec16_tmp[count+i];
			
			// LOOP 0x31def70
			// pre processing
			for (int i=0; i<4; i++) iRec25_tmp[i]=iRec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec25[i] = ((int(((fZec40[i] - fZec41[i]) < 0)))?(1 - iRec25[i-1]):iRec25[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec25_perm[i]=iRec25_tmp[count+i];
			
			// LOOP 0x31f53d0
			// pre processing
			for (int i=0; i<4; i++) iRec34_tmp[i]=iRec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec34[i] = ((int(((fZec57[i] - fZec58[i]) < 0)))?(1 - iRec34[i-1]):iRec34[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec34_perm[i]=iRec34_tmp[count+i];
			
			// LOOP 0x320bb30
			// pre processing
			for (int i=0; i<4; i++) iRec43_tmp[i]=iRec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec43[i] = ((int(((fZec74[i] - fZec75[i]) < 0)))?(1 - iRec43[i-1]):iRec43[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec43_perm[i]=iRec43_tmp[count+i];
			
			// LOOP 0x3222650
			// pre processing
			for (int i=0; i<4; i++) iRec52_tmp[i]=iRec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec52[i] = ((int(((fZec91[i] - fZec92[i]) < 0)))?(1 - iRec52[i-1]):iRec52[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec52_perm[i]=iRec52_tmp[count+i];
			
			// LOOP 0x3238c60
			// pre processing
			for (int i=0; i<4; i++) iRec61_tmp[i]=iRec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec61[i] = ((int(((fZec108[i] - fZec109[i]) < 0)))?(1 - iRec61[i-1]):iRec61[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec61_perm[i]=iRec61_tmp[count+i];
			
			// LOOP 0x324f680
			// pre processing
			for (int i=0; i<4; i++) iRec70_tmp[i]=iRec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec70[i] = ((int(((fZec125[i] - fZec126[i]) < 0)))?(1 - iRec70[i-1]):iRec70[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec70_perm[i]=iRec70_tmp[count+i];
			
			// LOOP 0x3265db0
			// pre processing
			for (int i=0; i<4; i++) iRec79_tmp[i]=iRec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec79[i] = ((int(((fZec142[i] - fZec143[i]) < 0)))?(1 - iRec79[i-1]):iRec79[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec79_perm[i]=iRec79_tmp[count+i];
			
			// LOOP 0x327c970
			// pre processing
			for (int i=0; i<4; i++) iRec88_tmp[i]=iRec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec88[i] = ((int(((fZec159[i] - fZec160[i]) < 0)))?(1 - iRec88[i-1]):iRec88[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec88_perm[i]=iRec88_tmp[count+i];
			
			// LOOP 0x3292f80
			// pre processing
			for (int i=0; i<4; i++) iRec97_tmp[i]=iRec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec97[i] = ((int(((fZec176[i] - fZec177[i]) < 0)))?(1 - iRec97[i-1]):iRec97[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec97_perm[i]=iRec97_tmp[count+i];
			
			// LOOP 0x32a9a60
			// pre processing
			for (int i=0; i<4; i++) iRec106_tmp[i]=iRec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec106[i] = ((int(((fZec193[i] - fZec194[i]) < 0)))?(1 - iRec106[i-1]):iRec106[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec106_perm[i]=iRec106_tmp[count+i];
			
			// SECTION : 12
			// LOOP 0x31a6e70
			// pre processing
			for (int i=0; i<4; i++) fYec2_tmp[i]=fYec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec2[i] = (iRec7[i] + fZec6[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec2_perm[i]=fYec2_tmp[count+i];
			
			// LOOP 0x31c21f0
			// pre processing
			for (int i=0; i<4; i++) fYec9_tmp[i]=fYec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec9[i] = (iRec16[i] + fZec23[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec9_perm[i]=fYec9_tmp[count+i];
			
			// LOOP 0x31d8780
			// pre processing
			for (int i=0; i<4; i++) fYec16_tmp[i]=fYec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec16[i] = (iRec25[i] + fZec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec16_perm[i]=fYec16_tmp[count+i];
			
			// LOOP 0x31eebe0
			// pre processing
			for (int i=0; i<4; i++) fYec23_tmp[i]=fYec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec23[i] = (iRec34[i] + fZec57[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec23_perm[i]=fYec23_tmp[count+i];
			
			// LOOP 0x3205320
			// pre processing
			for (int i=0; i<4; i++) fYec30_tmp[i]=fYec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec30[i] = (iRec43[i] + fZec74[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec30_perm[i]=fYec30_tmp[count+i];
			
			// LOOP 0x321be60
			// pre processing
			for (int i=0; i<4; i++) fYec37_tmp[i]=fYec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec37[i] = (iRec52[i] + fZec91[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec37_perm[i]=fYec37_tmp[count+i];
			
			// LOOP 0x3232470
			// pre processing
			for (int i=0; i<4; i++) fYec44_tmp[i]=fYec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec44[i] = (iRec61[i] + fZec108[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec44_perm[i]=fYec44_tmp[count+i];
			
			// LOOP 0x3248e90
			// pre processing
			for (int i=0; i<4; i++) fYec51_tmp[i]=fYec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec51[i] = (iRec70[i] + fZec125[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec51_perm[i]=fYec51_tmp[count+i];
			
			// LOOP 0x325f5c0
			// pre processing
			for (int i=0; i<4; i++) fYec58_tmp[i]=fYec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec58[i] = (iRec79[i] + fZec142[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec58_perm[i]=fYec58_tmp[count+i];
			
			// LOOP 0x32761e0
			// pre processing
			for (int i=0; i<4; i++) fYec65_tmp[i]=fYec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec65[i] = (iRec88[i] + fZec159[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec65_perm[i]=fYec65_tmp[count+i];
			
			// LOOP 0x328c730
			// pre processing
			for (int i=0; i<4; i++) fYec72_tmp[i]=fYec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec72[i] = (iRec97[i] + fZec176[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec72_perm[i]=fYec72_tmp[count+i];
			
			// LOOP 0x32a32d0
			// pre processing
			for (int i=0; i<4; i++) fYec79_tmp[i]=fYec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec79[i] = (iRec106[i] + fZec193[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec79_perm[i]=fYec79_tmp[count+i];
			
			// SECTION : 13
			// LOOP 0x31a6d30
			// exec code
			for (int i=0; i<count; i++) {
				fZec8[i] = (0.5f * fYec2[i]);
			}
			
			// LOOP 0x31b4740
			// exec code
			for (int i=0; i<count; i++) {
				fZec9[i] = (0.5f * fYec2[i-1]);
			}
			
			// LOOP 0x31c20b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec25[i] = (0.5f * fYec9[i]);
			}
			
			// LOOP 0x31cb370
			// exec code
			for (int i=0; i<count; i++) {
				fZec26[i] = (0.5f * fYec9[i-1]);
			}
			
			// LOOP 0x31d8640
			// exec code
			for (int i=0; i<count; i++) {
				fZec42[i] = (0.5f * fYec16[i]);
			}
			
			// LOOP 0x31e18f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec43[i] = (0.5f * fYec16[i-1]);
			}
			
			// LOOP 0x31eeaa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec59[i] = (0.5f * fYec23[i]);
			}
			
			// LOOP 0x31f7d50
			// exec code
			for (int i=0; i<count; i++) {
				fZec60[i] = (0.5f * fYec23[i-1]);
			}
			
			// LOOP 0x32051e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec76[i] = (0.5f * fYec30[i]);
			}
			
			// LOOP 0x320e4b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec77[i] = (0.5f * fYec30[i-1]);
			}
			
			// LOOP 0x321bd20
			// exec code
			for (int i=0; i<count; i++) {
				fZec93[i] = (0.5f * fYec37[i]);
			}
			
			// LOOP 0x3224fd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec94[i] = (0.5f * fYec37[i-1]);
			}
			
			// LOOP 0x3232330
			// exec code
			for (int i=0; i<count; i++) {
				fZec110[i] = (0.5f * fYec44[i]);
			}
			
			// LOOP 0x323b5e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec111[i] = (0.5f * fYec44[i-1]);
			}
			
			// LOOP 0x3248d50
			// exec code
			for (int i=0; i<count; i++) {
				fZec127[i] = (0.5f * fYec51[i]);
			}
			
			// LOOP 0x3252000
			// exec code
			for (int i=0; i<count; i++) {
				fZec128[i] = (0.5f * fYec51[i-1]);
			}
			
			// LOOP 0x325f480
			// exec code
			for (int i=0; i<count; i++) {
				fZec144[i] = (0.5f * fYec58[i]);
			}
			
			// LOOP 0x3268730
			// exec code
			for (int i=0; i<count; i++) {
				fZec145[i] = (0.5f * fYec58[i-1]);
			}
			
			// LOOP 0x32760a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec161[i] = (0.5f * fYec65[i]);
			}
			
			// LOOP 0x327f2f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec162[i] = (0.5f * fYec65[i-1]);
			}
			
			// LOOP 0x328c5f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec178[i] = (0.5f * fYec72[i]);
			}
			
			// LOOP 0x3295900
			// exec code
			for (int i=0; i<count; i++) {
				fZec179[i] = (0.5f * fYec72[i-1]);
			}
			
			// LOOP 0x32a3190
			// exec code
			for (int i=0; i<count; i++) {
				fZec195[i] = (0.5f * fYec79[i]);
			}
			
			// LOOP 0x32ac350
			// exec code
			for (int i=0; i<count; i++) {
				fZec196[i] = (0.5f * fYec79[i-1]);
			}
			
			// SECTION : 14
			// LOOP 0x31b4100
			// pre processing
			for (int i=0; i<4; i++) iRec8_tmp[i]=iRec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec8[i] = ((int(((fZec8[i] - fZec9[i]) < 0)))?(1 - iRec8[i-1]):iRec8[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec8_perm[i]=iRec8_tmp[count+i];
			
			// LOOP 0x31cad70
			// pre processing
			for (int i=0; i<4; i++) iRec17_tmp[i]=iRec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec17[i] = ((int(((fZec25[i] - fZec26[i]) < 0)))?(1 - iRec17[i-1]):iRec17[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec17_perm[i]=iRec17_tmp[count+i];
			
			// LOOP 0x31e12f0
			// pre processing
			for (int i=0; i<4; i++) iRec26_tmp[i]=iRec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec26[i] = ((int(((fZec42[i] - fZec43[i]) < 0)))?(1 - iRec26[i-1]):iRec26[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec26_perm[i]=iRec26_tmp[count+i];
			
			// LOOP 0x31f7750
			// pre processing
			for (int i=0; i<4; i++) iRec35_tmp[i]=iRec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec35[i] = ((int(((fZec59[i] - fZec60[i]) < 0)))?(1 - iRec35[i-1]):iRec35[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec35_perm[i]=iRec35_tmp[count+i];
			
			// LOOP 0x320deb0
			// pre processing
			for (int i=0; i<4; i++) iRec44_tmp[i]=iRec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec44[i] = ((int(((fZec76[i] - fZec77[i]) < 0)))?(1 - iRec44[i-1]):iRec44[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec44_perm[i]=iRec44_tmp[count+i];
			
			// LOOP 0x32249d0
			// pre processing
			for (int i=0; i<4; i++) iRec53_tmp[i]=iRec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec53[i] = ((int(((fZec93[i] - fZec94[i]) < 0)))?(1 - iRec53[i-1]):iRec53[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec53_perm[i]=iRec53_tmp[count+i];
			
			// LOOP 0x323afe0
			// pre processing
			for (int i=0; i<4; i++) iRec62_tmp[i]=iRec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec62[i] = ((int(((fZec110[i] - fZec111[i]) < 0)))?(1 - iRec62[i-1]):iRec62[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec62_perm[i]=iRec62_tmp[count+i];
			
			// LOOP 0x3251a00
			// pre processing
			for (int i=0; i<4; i++) iRec71_tmp[i]=iRec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec71[i] = ((int(((fZec127[i] - fZec128[i]) < 0)))?(1 - iRec71[i-1]):iRec71[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec71_perm[i]=iRec71_tmp[count+i];
			
			// LOOP 0x3268130
			// pre processing
			for (int i=0; i<4; i++) iRec80_tmp[i]=iRec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec80[i] = ((int(((fZec144[i] - fZec145[i]) < 0)))?(1 - iRec80[i-1]):iRec80[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec80_perm[i]=iRec80_tmp[count+i];
			
			// LOOP 0x327ecf0
			// pre processing
			for (int i=0; i<4; i++) iRec89_tmp[i]=iRec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec89[i] = ((int(((fZec161[i] - fZec162[i]) < 0)))?(1 - iRec89[i-1]):iRec89[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec89_perm[i]=iRec89_tmp[count+i];
			
			// LOOP 0x3295300
			// pre processing
			for (int i=0; i<4; i++) iRec98_tmp[i]=iRec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec98[i] = ((int(((fZec178[i] - fZec179[i]) < 0)))?(1 - iRec98[i-1]):iRec98[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec98_perm[i]=iRec98_tmp[count+i];
			
			// LOOP 0x32abdf0
			// pre processing
			for (int i=0; i<4; i++) iRec107_tmp[i]=iRec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec107[i] = ((int(((fZec195[i] - fZec196[i]) < 0)))?(1 - iRec107[i-1]):iRec107[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec107_perm[i]=iRec107_tmp[count+i];
			
			// SECTION : 15
			// LOOP 0x31a6bf0
			// pre processing
			for (int i=0; i<4; i++) fYec3_tmp[i]=fYec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec3[i] = (iRec8[i] + fZec8[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec3_perm[i]=fYec3_tmp[count+i];
			
			// LOOP 0x31c1f70
			// pre processing
			for (int i=0; i<4; i++) fYec10_tmp[i]=fYec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec10[i] = (iRec17[i] + fZec25[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec10_perm[i]=fYec10_tmp[count+i];
			
			// LOOP 0x31d8500
			// pre processing
			for (int i=0; i<4; i++) fYec17_tmp[i]=fYec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec17[i] = (iRec26[i] + fZec42[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec17_perm[i]=fYec17_tmp[count+i];
			
			// LOOP 0x31ee960
			// pre processing
			for (int i=0; i<4; i++) fYec24_tmp[i]=fYec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec24[i] = (iRec35[i] + fZec59[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec24_perm[i]=fYec24_tmp[count+i];
			
			// LOOP 0x32050a0
			// pre processing
			for (int i=0; i<4; i++) fYec31_tmp[i]=fYec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec31[i] = (iRec44[i] + fZec76[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec31_perm[i]=fYec31_tmp[count+i];
			
			// LOOP 0x321bbe0
			// pre processing
			for (int i=0; i<4; i++) fYec38_tmp[i]=fYec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec38[i] = (iRec53[i] + fZec93[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec38_perm[i]=fYec38_tmp[count+i];
			
			// LOOP 0x32321f0
			// pre processing
			for (int i=0; i<4; i++) fYec45_tmp[i]=fYec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec45[i] = (iRec62[i] + fZec110[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec45_perm[i]=fYec45_tmp[count+i];
			
			// LOOP 0x3248c10
			// pre processing
			for (int i=0; i<4; i++) fYec52_tmp[i]=fYec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec52[i] = (iRec71[i] + fZec127[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec52_perm[i]=fYec52_tmp[count+i];
			
			// LOOP 0x325f340
			// pre processing
			for (int i=0; i<4; i++) fYec59_tmp[i]=fYec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec59[i] = (iRec80[i] + fZec144[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec59_perm[i]=fYec59_tmp[count+i];
			
			// LOOP 0x3275f60
			// pre processing
			for (int i=0; i<4; i++) fYec66_tmp[i]=fYec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec66[i] = (iRec89[i] + fZec161[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec66_perm[i]=fYec66_tmp[count+i];
			
			// LOOP 0x328c4b0
			// pre processing
			for (int i=0; i<4; i++) fYec73_tmp[i]=fYec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec73[i] = (iRec98[i] + fZec178[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec73_perm[i]=fYec73_tmp[count+i];
			
			// LOOP 0x32a3050
			// pre processing
			for (int i=0; i<4; i++) fYec80_tmp[i]=fYec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec80[i] = (iRec107[i] + fZec195[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec80_perm[i]=fYec80_tmp[count+i];
			
			// SECTION : 16
			// LOOP 0x31a6ab0
			// exec code
			for (int i=0; i<count; i++) {
				fZec10[i] = (0.5f * fYec3[i]);
			}
			
			// LOOP 0x31b6a80
			// exec code
			for (int i=0; i<count; i++) {
				fZec11[i] = (0.5f * fYec3[i-1]);
			}
			
			// LOOP 0x31c1e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec27[i] = (0.5f * fYec10[i]);
			}
			
			// LOOP 0x31cd6e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec28[i] = (0.5f * fYec10[i-1]);
			}
			
			// LOOP 0x31d83c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec44[i] = (0.5f * fYec17[i]);
			}
			
			// LOOP 0x31e3c70
			// exec code
			for (int i=0; i<count; i++) {
				fZec45[i] = (0.5f * fYec17[i-1]);
			}
			
			// LOOP 0x31ee820
			// exec code
			for (int i=0; i<count; i++) {
				fZec61[i] = (0.5f * fYec24[i]);
			}
			
			// LOOP 0x31fa0d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec62[i] = (0.5f * fYec24[i-1]);
			}
			
			// LOOP 0x3204f60
			// exec code
			for (int i=0; i<count; i++) {
				fZec78[i] = (0.5f * fYec31[i]);
			}
			
			// LOOP 0x3210830
			// exec code
			for (int i=0; i<count; i++) {
				fZec79[i] = (0.5f * fYec31[i-1]);
			}
			
			// LOOP 0x321baa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec95[i] = (0.5f * fYec38[i]);
			}
			
			// LOOP 0x3227350
			// exec code
			for (int i=0; i<count; i++) {
				fZec96[i] = (0.5f * fYec38[i-1]);
			}
			
			// LOOP 0x32320b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec112[i] = (0.5f * fYec45[i]);
			}
			
			// LOOP 0x323d960
			// exec code
			for (int i=0; i<count; i++) {
				fZec113[i] = (0.5f * fYec45[i-1]);
			}
			
			// LOOP 0x3248ad0
			// exec code
			for (int i=0; i<count; i++) {
				fZec129[i] = (0.5f * fYec52[i]);
			}
			
			// LOOP 0x3254380
			// exec code
			for (int i=0; i<count; i++) {
				fZec130[i] = (0.5f * fYec52[i-1]);
			}
			
			// LOOP 0x325f200
			// exec code
			for (int i=0; i<count; i++) {
				fZec146[i] = (0.5f * fYec59[i]);
			}
			
			// LOOP 0x326aa40
			// exec code
			for (int i=0; i<count; i++) {
				fZec147[i] = (0.5f * fYec59[i-1]);
			}
			
			// LOOP 0x3275e20
			// exec code
			for (int i=0; i<count; i++) {
				fZec163[i] = (0.5f * fYec66[i]);
			}
			
			// LOOP 0x3281670
			// exec code
			for (int i=0; i<count; i++) {
				fZec164[i] = (0.5f * fYec66[i-1]);
			}
			
			// LOOP 0x328c370
			// exec code
			for (int i=0; i<count; i++) {
				fZec180[i] = (0.5f * fYec73[i]);
			}
			
			// LOOP 0x3297c80
			// exec code
			for (int i=0; i<count; i++) {
				fZec181[i] = (0.5f * fYec73[i-1]);
			}
			
			// LOOP 0x32a2f10
			// exec code
			for (int i=0; i<count; i++) {
				fZec197[i] = (0.5f * fYec80[i]);
			}
			
			// LOOP 0x32ae780
			// exec code
			for (int i=0; i<count; i++) {
				fZec198[i] = (0.5f * fYec80[i-1]);
			}
			
			// SECTION : 17
			// LOOP 0x31b6440
			// pre processing
			for (int i=0; i<4; i++) iRec9_tmp[i]=iRec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec9[i] = ((int(((fZec10[i] - fZec11[i]) < 0)))?(1 - iRec9[i-1]):iRec9[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec9_perm[i]=iRec9_tmp[count+i];
			
			// LOOP 0x31cd0e0
			// pre processing
			for (int i=0; i<4; i++) iRec18_tmp[i]=iRec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec18[i] = ((int(((fZec27[i] - fZec28[i]) < 0)))?(1 - iRec18[i-1]):iRec18[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec18_perm[i]=iRec18_tmp[count+i];
			
			// LOOP 0x31e3670
			// pre processing
			for (int i=0; i<4; i++) iRec27_tmp[i]=iRec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec27[i] = ((int(((fZec44[i] - fZec45[i]) < 0)))?(1 - iRec27[i-1]):iRec27[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec27_perm[i]=iRec27_tmp[count+i];
			
			// LOOP 0x31f9ad0
			// pre processing
			for (int i=0; i<4; i++) iRec36_tmp[i]=iRec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec36[i] = ((int(((fZec61[i] - fZec62[i]) < 0)))?(1 - iRec36[i-1]):iRec36[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec36_perm[i]=iRec36_tmp[count+i];
			
			// LOOP 0x3210230
			// pre processing
			for (int i=0; i<4; i++) iRec45_tmp[i]=iRec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec45[i] = ((int(((fZec78[i] - fZec79[i]) < 0)))?(1 - iRec45[i-1]):iRec45[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec45_perm[i]=iRec45_tmp[count+i];
			
			// LOOP 0x3226d50
			// pre processing
			for (int i=0; i<4; i++) iRec54_tmp[i]=iRec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec54[i] = ((int(((fZec95[i] - fZec96[i]) < 0)))?(1 - iRec54[i-1]):iRec54[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec54_perm[i]=iRec54_tmp[count+i];
			
			// LOOP 0x323d360
			// pre processing
			for (int i=0; i<4; i++) iRec63_tmp[i]=iRec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec63[i] = ((int(((fZec112[i] - fZec113[i]) < 0)))?(1 - iRec63[i-1]):iRec63[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec63_perm[i]=iRec63_tmp[count+i];
			
			// LOOP 0x3253d80
			// pre processing
			for (int i=0; i<4; i++) iRec72_tmp[i]=iRec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec72[i] = ((int(((fZec129[i] - fZec130[i]) < 0)))?(1 - iRec72[i-1]):iRec72[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec72_perm[i]=iRec72_tmp[count+i];
			
			// LOOP 0x326a3f0
			// pre processing
			for (int i=0; i<4; i++) iRec81_tmp[i]=iRec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec81[i] = ((int(((fZec146[i] - fZec147[i]) < 0)))?(1 - iRec81[i-1]):iRec81[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec81_perm[i]=iRec81_tmp[count+i];
			
			// LOOP 0x3281070
			// pre processing
			for (int i=0; i<4; i++) iRec90_tmp[i]=iRec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec90[i] = ((int(((fZec163[i] - fZec164[i]) < 0)))?(1 - iRec90[i-1]):iRec90[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec90_perm[i]=iRec90_tmp[count+i];
			
			// LOOP 0x3297680
			// pre processing
			for (int i=0; i<4; i++) iRec99_tmp[i]=iRec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec99[i] = ((int(((fZec180[i] - fZec181[i]) < 0)))?(1 - iRec99[i-1]):iRec99[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec99_perm[i]=iRec99_tmp[count+i];
			
			// LOOP 0x32ae180
			// pre processing
			for (int i=0; i<4; i++) iRec108_tmp[i]=iRec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec108[i] = ((int(((fZec197[i] - fZec198[i]) < 0)))?(1 - iRec108[i-1]):iRec108[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec108_perm[i]=iRec108_tmp[count+i];
			
			// SECTION : 18
			// LOOP 0x31a6970
			// pre processing
			for (int i=0; i<4; i++) fYec4_tmp[i]=fYec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec4[i] = (iRec9[i] + fZec10[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec4_perm[i]=fYec4_tmp[count+i];
			
			// LOOP 0x31c1cf0
			// pre processing
			for (int i=0; i<4; i++) fYec11_tmp[i]=fYec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec11[i] = (iRec18[i] + fZec27[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec11_perm[i]=fYec11_tmp[count+i];
			
			// LOOP 0x31d8280
			// pre processing
			for (int i=0; i<4; i++) fYec18_tmp[i]=fYec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec18[i] = (iRec27[i] + fZec44[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec18_perm[i]=fYec18_tmp[count+i];
			
			// LOOP 0x31ee6e0
			// pre processing
			for (int i=0; i<4; i++) fYec25_tmp[i]=fYec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec25[i] = (iRec36[i] + fZec61[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec25_perm[i]=fYec25_tmp[count+i];
			
			// LOOP 0x3204e20
			// pre processing
			for (int i=0; i<4; i++) fYec32_tmp[i]=fYec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec32[i] = (iRec45[i] + fZec78[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec32_perm[i]=fYec32_tmp[count+i];
			
			// LOOP 0x321b960
			// pre processing
			for (int i=0; i<4; i++) fYec39_tmp[i]=fYec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec39[i] = (iRec54[i] + fZec95[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec39_perm[i]=fYec39_tmp[count+i];
			
			// LOOP 0x3231f70
			// pre processing
			for (int i=0; i<4; i++) fYec46_tmp[i]=fYec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec46[i] = (iRec63[i] + fZec112[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec46_perm[i]=fYec46_tmp[count+i];
			
			// LOOP 0x3248990
			// pre processing
			for (int i=0; i<4; i++) fYec53_tmp[i]=fYec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec53[i] = (iRec72[i] + fZec129[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec53_perm[i]=fYec53_tmp[count+i];
			
			// LOOP 0x325f0c0
			// pre processing
			for (int i=0; i<4; i++) fYec60_tmp[i]=fYec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec60[i] = (iRec81[i] + fZec146[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec60_perm[i]=fYec60_tmp[count+i];
			
			// LOOP 0x3275ce0
			// pre processing
			for (int i=0; i<4; i++) fYec67_tmp[i]=fYec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec67[i] = (iRec90[i] + fZec163[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec67_perm[i]=fYec67_tmp[count+i];
			
			// LOOP 0x328c230
			// pre processing
			for (int i=0; i<4; i++) fYec74_tmp[i]=fYec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec74[i] = (iRec99[i] + fZec180[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec74_perm[i]=fYec74_tmp[count+i];
			
			// LOOP 0x32a2dd0
			// pre processing
			for (int i=0; i<4; i++) fYec81_tmp[i]=fYec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec81[i] = (iRec108[i] + fZec197[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec81_perm[i]=fYec81_tmp[count+i];
			
			// SECTION : 19
			// LOOP 0x31a6830
			// exec code
			for (int i=0; i<count; i++) {
				fZec12[i] = (0.5f * fYec4[i]);
			}
			
			// LOOP 0x31b8d60
			// exec code
			for (int i=0; i<count; i++) {
				fZec13[i] = (0.5f * fYec4[i-1]);
			}
			
			// LOOP 0x31bc360
			// exec code
			for (int i=0; i<count; i++) {
				fZec16[i] = ((1 + fRec4[i]) - fRec4[i-1]);
			}
			
			// LOOP 0x31c1bb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec29[i] = (0.5f * fYec11[i]);
			}
			
			// LOOP 0x31cfa60
			// exec code
			for (int i=0; i<count; i++) {
				fZec30[i] = (0.5f * fYec11[i-1]);
			}
			
			// LOOP 0x31d2eb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec33[i] = ((1 + fRec14[i]) - fRec14[i-1]);
			}
			
			// LOOP 0x31d8140
			// exec code
			for (int i=0; i<count; i++) {
				fZec46[i] = (0.5f * fYec18[i]);
			}
			
			// LOOP 0x31e5ff0
			// exec code
			for (int i=0; i<count; i++) {
				fZec47[i] = (0.5f * fYec18[i-1]);
			}
			
			// LOOP 0x31e9450
			// exec code
			for (int i=0; i<count; i++) {
				fZec50[i] = ((1 + fRec23[i]) - fRec23[i-1]);
			}
			
			// LOOP 0x31ee5a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec63[i] = (0.5f * fYec25[i]);
			}
			
			// LOOP 0x31fc450
			// exec code
			for (int i=0; i<count; i++) {
				fZec64[i] = (0.5f * fYec25[i-1]);
			}
			
			// LOOP 0x31ff8a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec67[i] = ((1 + fRec32[i]) - fRec32[i-1]);
			}
			
			// LOOP 0x3204ce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec80[i] = (0.5f * fYec32[i]);
			}
			
			// LOOP 0x3212bb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec81[i] = (0.5f * fYec32[i-1]);
			}
			
			// LOOP 0x3216000
			// exec code
			for (int i=0; i<count; i++) {
				fZec84[i] = ((1 + fRec41[i]) - fRec41[i-1]);
			}
			
			// LOOP 0x321b820
			// exec code
			for (int i=0; i<count; i++) {
				fZec97[i] = (0.5f * fYec39[i]);
			}
			
			// LOOP 0x32296e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec98[i] = (0.5f * fYec39[i-1]);
			}
			
			// LOOP 0x3231e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec114[i] = (0.5f * fYec46[i]);
			}
			
			// LOOP 0x323fce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec115[i] = (0.5f * fYec46[i-1]);
			}
			
			// LOOP 0x3248850
			// exec code
			for (int i=0; i<count; i++) {
				fZec131[i] = (0.5f * fYec53[i]);
			}
			
			// LOOP 0x3256700
			// exec code
			for (int i=0; i<count; i++) {
				fZec132[i] = (0.5f * fYec53[i-1]);
			}
			
			// LOOP 0x325ef80
			// exec code
			for (int i=0; i<count; i++) {
				fZec148[i] = (0.5f * fYec60[i]);
			}
			
			// LOOP 0x326ce60
			// exec code
			for (int i=0; i<count; i++) {
				fZec149[i] = (0.5f * fYec60[i-1]);
			}
			
			// LOOP 0x3275ba0
			// exec code
			for (int i=0; i<count; i++) {
				fZec165[i] = (0.5f * fYec67[i]);
			}
			
			// LOOP 0x32839f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec166[i] = (0.5f * fYec67[i-1]);
			}
			
			// LOOP 0x328c0f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec182[i] = (0.5f * fYec74[i]);
			}
			
			// LOOP 0x329a000
			// exec code
			for (int i=0; i<count; i++) {
				fZec183[i] = (0.5f * fYec74[i-1]);
			}
			
			// LOOP 0x32a2c90
			// exec code
			for (int i=0; i<count; i++) {
				fZec199[i] = (0.5f * fYec81[i]);
			}
			
			// LOOP 0x32b0b10
			// exec code
			for (int i=0; i<count; i++) {
				fZec200[i] = (0.5f * fYec81[i-1]);
			}
			
			// SECTION : 20
			// LOOP 0x31b8760
			// pre processing
			for (int i=0; i<4; i++) iRec10_tmp[i]=iRec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec10[i] = ((int(((fZec12[i] - fZec13[i]) < 0)))?(1 - iRec10[i-1]):iRec10[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec10_perm[i]=iRec10_tmp[count+i];
			
			// LOOP 0x31bc070
			// exec code
			for (int i=0; i<count; i++) {
				fZec17[i] = saw_polyblep_fast(fRec4[i], fRec4[i-1], fRec4[i-2], ((int((fZec16[i] > 1.0f)))?fZec3[i]:fZec16[i]));
			}
			
			// LOOP 0x31cf460
			// pre processing
			for (int i=0; i<4; i++) iRec19_tmp[i]=iRec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec19[i] = ((int(((fZec29[i] - fZec30[i]) < 0)))?(1 - iRec19[i-1]):iRec19[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec19_perm[i]=iRec19_tmp[count+i];
			
			// LOOP 0x31d2bc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec34[i] = saw_polyblep_fast(fRec14[i], fRec14[i-1], fRec14[i-2], ((int((fZec33[i] > 1.0f)))?fZec20[i]:fZec33[i]));
			}
			
			// LOOP 0x31e59f0
			// pre processing
			for (int i=0; i<4; i++) iRec28_tmp[i]=iRec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec28[i] = ((int(((fZec46[i] - fZec47[i]) < 0)))?(1 - iRec28[i-1]):iRec28[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec28_perm[i]=iRec28_tmp[count+i];
			
			// LOOP 0x31e9160
			// exec code
			for (int i=0; i<count; i++) {
				fZec51[i] = saw_polyblep_fast(fRec23[i], fRec23[i-1], fRec23[i-2], ((int((fZec50[i] > 1.0f)))?fZec37[i]:fZec50[i]));
			}
			
			// LOOP 0x31fbe50
			// pre processing
			for (int i=0; i<4; i++) iRec37_tmp[i]=iRec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec37[i] = ((int(((fZec63[i] - fZec64[i]) < 0)))?(1 - iRec37[i-1]):iRec37[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec37_perm[i]=iRec37_tmp[count+i];
			
			// LOOP 0x31ff5b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec68[i] = saw_polyblep_fast(fRec32[i], fRec32[i-1], fRec32[i-2], ((int((fZec67[i] > 1.0f)))?fZec54[i]:fZec67[i]));
			}
			
			// LOOP 0x32125b0
			// pre processing
			for (int i=0; i<4; i++) iRec46_tmp[i]=iRec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec46[i] = ((int(((fZec80[i] - fZec81[i]) < 0)))?(1 - iRec46[i-1]):iRec46[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec46_perm[i]=iRec46_tmp[count+i];
			
			// LOOP 0x3215d10
			// exec code
			for (int i=0; i<count; i++) {
				fZec85[i] = saw_polyblep_fast(fRec41[i], fRec41[i-1], fRec41[i-2], ((int((fZec84[i] > 1.0f)))?fZec71[i]:fZec84[i]));
			}
			
			// LOOP 0x32290e0
			// pre processing
			for (int i=0; i<4; i++) iRec55_tmp[i]=iRec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec55[i] = ((int(((fZec97[i] - fZec98[i]) < 0)))?(1 - iRec55[i-1]):iRec55[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec55_perm[i]=iRec55_tmp[count+i];
			
			// LOOP 0x322cb30
			// exec code
			for (int i=0; i<count; i++) {
				fZec101[i] = ((1 + fRec50[i]) - fRec50[i-1]);
			}
			
			// LOOP 0x323f6e0
			// pre processing
			for (int i=0; i<4; i++) iRec64_tmp[i]=iRec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec64[i] = ((int(((fZec114[i] - fZec115[i]) < 0)))?(1 - iRec64[i-1]):iRec64[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec64_perm[i]=iRec64_tmp[count+i];
			
			// LOOP 0x3243140
			// exec code
			for (int i=0; i<count; i++) {
				fZec118[i] = ((1 + fRec59[i]) - fRec59[i-1]);
			}
			
			// LOOP 0x3256100
			// pre processing
			for (int i=0; i<4; i++) iRec73_tmp[i]=iRec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec73[i] = ((int(((fZec131[i] - fZec132[i]) < 0)))?(1 - iRec73[i-1]):iRec73[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec73_perm[i]=iRec73_tmp[count+i];
			
			// LOOP 0x3259b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec135[i] = ((1 + fRec68[i]) - fRec68[i-1]);
			}
			
			// LOOP 0x326c860
			// pre processing
			for (int i=0; i<4; i++) iRec82_tmp[i]=iRec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec82[i] = ((int(((fZec148[i] - fZec149[i]) < 0)))?(1 - iRec82[i-1]):iRec82[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec82_perm[i]=iRec82_tmp[count+i];
			
			// LOOP 0x32702c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec152[i] = ((1 + fRec77[i]) - fRec77[i-1]);
			}
			
			// LOOP 0x32833f0
			// pre processing
			for (int i=0; i<4; i++) iRec91_tmp[i]=iRec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec91[i] = ((int(((fZec165[i] - fZec166[i]) < 0)))?(1 - iRec91[i-1]):iRec91[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec91_perm[i]=iRec91_tmp[count+i];
			
			// LOOP 0x3299a00
			// pre processing
			for (int i=0; i<4; i++) iRec100_tmp[i]=iRec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec100[i] = ((int(((fZec182[i] - fZec183[i]) < 0)))?(1 - iRec100[i-1]):iRec100[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec100_perm[i]=iRec100_tmp[count+i];
			
			// LOOP 0x32b0510
			// pre processing
			for (int i=0; i<4; i++) iRec109_tmp[i]=iRec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec109[i] = ((int(((fZec199[i] - fZec200[i]) < 0)))?(1 - iRec109[i-1]):iRec109[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec109_perm[i]=iRec109_tmp[count+i];
			
			// LOOP 0x3341200
			// pre processing
			for (int i=0; i<4; i++) fYec108_tmp[i]=fYec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec108[i] = ((fZec8[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec108_perm[i]=fYec108_tmp[count+i];
			
			// LOOP 0x3346ae0
			// pre processing
			for (int i=0; i<4; i++) fYec109_tmp[i]=fYec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec109[i] = ((fZec25[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec109_perm[i]=fYec109_tmp[count+i];
			
			// LOOP 0x334d090
			// pre processing
			for (int i=0; i<4; i++) fYec110_tmp[i]=fYec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec110[i] = ((fZec42[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec110_perm[i]=fYec110_tmp[count+i];
			
			// LOOP 0x3352970
			// pre processing
			for (int i=0; i<4; i++) fYec111_tmp[i]=fYec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec111[i] = ((fZec59[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec111_perm[i]=fYec111_tmp[count+i];
			
			// LOOP 0x33592b0
			// pre processing
			for (int i=0; i<4; i++) fYec112_tmp[i]=fYec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec112[i] = ((fZec76[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec112_perm[i]=fYec112_tmp[count+i];
			
			// SECTION : 21
			// LOOP 0x31a66f0
			// pre processing
			for (int i=0; i<4; i++) fYec5_tmp[i]=fYec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec5[i] = (iRec10[i] + fZec12[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec5_perm[i]=fYec5_tmp[count+i];
			
			// LOOP 0x31c1a70
			// pre processing
			for (int i=0; i<4; i++) fYec12_tmp[i]=fYec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec12[i] = (iRec19[i] + fZec29[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec12_perm[i]=fYec12_tmp[count+i];
			
			// LOOP 0x31d8000
			// pre processing
			for (int i=0; i<4; i++) fYec19_tmp[i]=fYec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec19[i] = (iRec28[i] + fZec46[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec19_perm[i]=fYec19_tmp[count+i];
			
			// LOOP 0x31ee460
			// pre processing
			for (int i=0; i<4; i++) fYec26_tmp[i]=fYec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec26[i] = (iRec37[i] + fZec63[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec26_perm[i]=fYec26_tmp[count+i];
			
			// LOOP 0x3204ba0
			// pre processing
			for (int i=0; i<4; i++) fYec33_tmp[i]=fYec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec33[i] = (iRec46[i] + fZec80[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec33_perm[i]=fYec33_tmp[count+i];
			
			// LOOP 0x321b6e0
			// pre processing
			for (int i=0; i<4; i++) fYec40_tmp[i]=fYec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec40[i] = (iRec55[i] + fZec97[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec40_perm[i]=fYec40_tmp[count+i];
			
			// LOOP 0x322c840
			// exec code
			for (int i=0; i<count; i++) {
				fZec102[i] = saw_polyblep_fast(fRec50[i], fRec50[i-1], fRec50[i-2], ((int((fZec101[i] > 1.0f)))?fZec88[i]:fZec101[i]));
			}
			
			// LOOP 0x3231cf0
			// pre processing
			for (int i=0; i<4; i++) fYec47_tmp[i]=fYec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec47[i] = (iRec64[i] + fZec114[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec47_perm[i]=fYec47_tmp[count+i];
			
			// LOOP 0x3242e50
			// exec code
			for (int i=0; i<count; i++) {
				fZec119[i] = saw_polyblep_fast(fRec59[i], fRec59[i-1], fRec59[i-2], ((int((fZec118[i] > 1.0f)))?fZec105[i]:fZec118[i]));
			}
			
			// LOOP 0x3248710
			// pre processing
			for (int i=0; i<4; i++) fYec54_tmp[i]=fYec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec54[i] = (iRec73[i] + fZec131[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec54_perm[i]=fYec54_tmp[count+i];
			
			// LOOP 0x3259870
			// exec code
			for (int i=0; i<count; i++) {
				fZec136[i] = saw_polyblep_fast(fRec68[i], fRec68[i-1], fRec68[i-2], ((int((fZec135[i] > 1.0f)))?fZec122[i]:fZec135[i]));
			}
			
			// LOOP 0x325ee40
			// pre processing
			for (int i=0; i<4; i++) fYec61_tmp[i]=fYec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec61[i] = (iRec82[i] + fZec148[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec61_perm[i]=fYec61_tmp[count+i];
			
			// LOOP 0x326ffd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec153[i] = saw_polyblep_fast(fRec77[i], fRec77[i-1], fRec77[i-2], ((int((fZec152[i] > 1.0f)))?fZec139[i]:fZec152[i]));
			}
			
			// LOOP 0x3275a60
			// pre processing
			for (int i=0; i<4; i++) fYec68_tmp[i]=fYec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec68[i] = (iRec91[i] + fZec165[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec68_perm[i]=fYec68_tmp[count+i];
			
			// LOOP 0x3286e50
			// exec code
			for (int i=0; i<count; i++) {
				fZec169[i] = ((1 + fRec86[i]) - fRec86[i-1]);
			}
			
			// LOOP 0x328bfb0
			// pre processing
			for (int i=0; i<4; i++) fYec75_tmp[i]=fYec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec75[i] = (iRec100[i] + fZec182[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec75_perm[i]=fYec75_tmp[count+i];
			
			// LOOP 0x329d470
			// exec code
			for (int i=0; i<count; i++) {
				fZec186[i] = ((1 + fRec95[i]) - fRec95[i-1]);
			}
			
			// LOOP 0x32a2b50
			// pre processing
			for (int i=0; i<4; i++) fYec82_tmp[i]=fYec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec82[i] = (iRec109[i] + fZec199[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec82_perm[i]=fYec82_tmp[count+i];
			
			// LOOP 0x32b3f80
			// exec code
			for (int i=0; i<count; i++) {
				fZec203[i] = ((1 + fRec104[i]) - fRec104[i-1]);
			}
			
			// LOOP 0x3340cb0
			// pre processing
			for (int i=0; i<4; i++) fRec159_tmp[i]=fRec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec159[i] = (fRec159[i-1] + (fConst14 * ((square_polyblep_precalc(fZec8[i], fZec9[i], (0.5f * fYec2[i-2]), fZec17[i]) + (2 * fYec108[i-1])) - fRec159[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec159_perm[i]=fRec159_tmp[count+i];
			
			// LOOP 0x3346590
			// pre processing
			for (int i=0; i<4; i++) fRec161_tmp[i]=fRec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec161[i] = (fRec161[i-1] + (fConst14 * ((square_polyblep_precalc(fZec25[i], fZec26[i], (0.5f * fYec9[i-2]), fZec34[i]) + (2 * fYec109[i-1])) - fRec161[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec161_perm[i]=fRec161_tmp[count+i];
			
			// LOOP 0x334cb40
			// pre processing
			for (int i=0; i<4; i++) fRec163_tmp[i]=fRec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec163[i] = (fRec163[i-1] + (fConst14 * ((square_polyblep_precalc(fZec42[i], fZec43[i], (0.5f * fYec16[i-2]), fZec51[i]) + (2 * fYec110[i-1])) - fRec163[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec163_perm[i]=fRec163_tmp[count+i];
			
			// LOOP 0x3352420
			// pre processing
			for (int i=0; i<4; i++) fRec165_tmp[i]=fRec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec165[i] = (fRec165[i-1] + (fConst14 * ((square_polyblep_precalc(fZec59[i], fZec60[i], (0.5f * fYec23[i-2]), fZec68[i]) + (2 * fYec111[i-1])) - fRec165[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec165_perm[i]=fRec165_tmp[count+i];
			
			// LOOP 0x3358d60
			// pre processing
			for (int i=0; i<4; i++) fRec167_tmp[i]=fRec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec167[i] = (fRec167[i-1] + (fConst15 * ((square_polyblep_precalc(fZec76[i], fZec77[i], (0.5f * fYec30[i-2]), fZec85[i]) + (2 * fYec112[i-1])) - fRec167[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec167_perm[i]=fRec167_tmp[count+i];
			
			// LOOP 0x33601f0
			// pre processing
			for (int i=0; i<4; i++) fYec113_tmp[i]=fYec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec113[i] = ((fZec93[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec113_perm[i]=fYec113_tmp[count+i];
			
			// LOOP 0x3365df0
			// pre processing
			for (int i=0; i<4; i++) fYec114_tmp[i]=fYec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec114[i] = ((fZec110[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec114_perm[i]=fYec114_tmp[count+i];
			
			// LOOP 0x336cdb0
			// pre processing
			for (int i=0; i<4; i++) fYec115_tmp[i]=fYec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec115[i] = ((fZec127[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec115_perm[i]=fYec115_tmp[count+i];
			
			// LOOP 0x3372ad0
			// pre processing
			for (int i=0; i<4; i++) fYec116_tmp[i]=fYec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec116[i] = ((fZec144[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec116_perm[i]=fYec116_tmp[count+i];
			
			// SECTION : 22
			// LOOP 0x31a65b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec14[i] = (0.5f * fYec5[i]);
			}
			
			// LOOP 0x31bb690
			// exec code
			for (int i=0; i<count; i++) {
				fZec15[i] = (0.5f * fYec5[i-1]);
			}
			
			// LOOP 0x31c1930
			// exec code
			for (int i=0; i<count; i++) {
				fZec31[i] = (0.5f * fYec12[i]);
			}
			
			// LOOP 0x31d2230
			// exec code
			for (int i=0; i<count; i++) {
				fZec32[i] = (0.5f * fYec12[i-1]);
			}
			
			// LOOP 0x31d7ec0
			// exec code
			for (int i=0; i<count; i++) {
				fZec48[i] = (0.5f * fYec19[i]);
			}
			
			// LOOP 0x31e87d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec49[i] = (0.5f * fYec19[i-1]);
			}
			
			// LOOP 0x31ee320
			// exec code
			for (int i=0; i<count; i++) {
				fZec65[i] = (0.5f * fYec26[i]);
			}
			
			// LOOP 0x31fec20
			// exec code
			for (int i=0; i<count; i++) {
				fZec66[i] = (0.5f * fYec26[i-1]);
			}
			
			// LOOP 0x3204a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec82[i] = (0.5f * fYec33[i]);
			}
			
			// LOOP 0x3215380
			// exec code
			for (int i=0; i<count; i++) {
				fZec83[i] = (0.5f * fYec33[i-1]);
			}
			
			// LOOP 0x321b5a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec99[i] = (0.5f * fYec40[i]);
			}
			
			// LOOP 0x322beb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec100[i] = (0.5f * fYec40[i-1]);
			}
			
			// LOOP 0x3231bb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec116[i] = (0.5f * fYec47[i]);
			}
			
			// LOOP 0x32424c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec117[i] = (0.5f * fYec47[i-1]);
			}
			
			// LOOP 0x32485d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec133[i] = (0.5f * fYec54[i]);
			}
			
			// LOOP 0x3258ee0
			// exec code
			for (int i=0; i<count; i++) {
				fZec134[i] = (0.5f * fYec54[i-1]);
			}
			
			// LOOP 0x325ed00
			// exec code
			for (int i=0; i<count; i++) {
				fZec150[i] = (0.5f * fYec61[i]);
			}
			
			// LOOP 0x326f640
			// exec code
			for (int i=0; i<count; i++) {
				fZec151[i] = (0.5f * fYec61[i-1]);
			}
			
			// LOOP 0x3275920
			// exec code
			for (int i=0; i<count; i++) {
				fZec167[i] = (0.5f * fYec68[i]);
			}
			
			// LOOP 0x32861d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec168[i] = (0.5f * fYec68[i-1]);
			}
			
			// LOOP 0x3286b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec170[i] = saw_polyblep_fast(fRec86[i], fRec86[i-1], fRec86[i-2], ((int((fZec169[i] > 1.0f)))?fZec156[i]:fZec169[i]));
			}
			
			// LOOP 0x328be70
			// exec code
			for (int i=0; i<count; i++) {
				fZec184[i] = (0.5f * fYec75[i]);
			}
			
			// LOOP 0x329c7f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec185[i] = (0.5f * fYec75[i-1]);
			}
			
			// LOOP 0x329d180
			// exec code
			for (int i=0; i<count; i++) {
				fZec187[i] = saw_polyblep_fast(fRec95[i], fRec95[i-1], fRec95[i-2], ((int((fZec186[i] > 1.0f)))?fZec173[i]:fZec186[i]));
			}
			
			// LOOP 0x32a2a10
			// exec code
			for (int i=0; i<count; i++) {
				fZec201[i] = (0.5f * fYec82[i]);
			}
			
			// LOOP 0x32b3300
			// exec code
			for (int i=0; i<count; i++) {
				fZec202[i] = (0.5f * fYec82[i-1]);
			}
			
			// LOOP 0x32b3c90
			// exec code
			for (int i=0; i<count; i++) {
				fZec204[i] = saw_polyblep_fast(fRec104[i], fRec104[i-1], fRec104[i-2], ((int((fZec203[i] > 1.0f)))?fZec190[i]:fZec203[i]));
			}
			
			// LOOP 0x33407c0
			// pre processing
			for (int i=0; i<4; i++) fRec158_tmp[i]=fRec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec158[i] = (fConst11 * ((fRec159[i] - fRec159[i-1]) + fRec158[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec158_perm[i]=fRec158_tmp[count+i];
			
			// LOOP 0x33460a0
			// pre processing
			for (int i=0; i<4; i++) fRec160_tmp[i]=fRec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec160[i] = (fConst11 * ((fRec161[i] - fRec161[i-1]) + fRec160[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec160_perm[i]=fRec160_tmp[count+i];
			
			// LOOP 0x334c650
			// pre processing
			for (int i=0; i<4; i++) fRec162_tmp[i]=fRec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec162[i] = (fConst11 * ((fRec163[i] - fRec163[i-1]) + fRec162[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec162_perm[i]=fRec162_tmp[count+i];
			
			// LOOP 0x3351f30
			// pre processing
			for (int i=0; i<4; i++) fRec164_tmp[i]=fRec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec164[i] = (fConst11 * ((fRec165[i] - fRec165[i-1]) + fRec164[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec164_perm[i]=fRec164_tmp[count+i];
			
			// LOOP 0x3358870
			// pre processing
			for (int i=0; i<4; i++) fRec166_tmp[i]=fRec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec166[i] = (fConst11 * ((fRec167[i] - fRec167[i-1]) + fRec166[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec166_perm[i]=fRec166_tmp[count+i];
			
			// LOOP 0x335fca0
			// pre processing
			for (int i=0; i<4; i++) fRec169_tmp[i]=fRec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec169[i] = (fRec169[i-1] + (fConst15 * ((square_polyblep_precalc(fZec93[i], fZec94[i], (0.5f * fYec37[i-2]), fZec102[i]) + (2 * fYec113[i-1])) - fRec169[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec169_perm[i]=fRec169_tmp[count+i];
			
			// LOOP 0x33658a0
			// pre processing
			for (int i=0; i<4; i++) fRec171_tmp[i]=fRec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec171[i] = (fRec171[i-1] + (fConst15 * ((square_polyblep_precalc(fZec110[i], fZec111[i], (0.5f * fYec44[i-2]), fZec119[i]) + (2 * fYec114[i-1])) - fRec171[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec171_perm[i]=fRec171_tmp[count+i];
			
			// LOOP 0x336c860
			// pre processing
			for (int i=0; i<4; i++) fRec173_tmp[i]=fRec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec173[i] = (fRec173[i-1] + (fConst15 * ((square_polyblep_precalc(fZec127[i], fZec128[i], (0.5f * fYec51[i-2]), fZec136[i]) + (2 * fYec115[i-1])) - fRec173[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec173_perm[i]=fRec173_tmp[count+i];
			
			// LOOP 0x3372580
			// pre processing
			for (int i=0; i<4; i++) fRec175_tmp[i]=fRec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec175[i] = (fRec175[i-1] + (fConst16 * ((square_polyblep_precalc(fZec144[i], fZec145[i], (0.5f * fYec58[i-2]), fZec153[i]) + (2 * fYec116[i-1])) - fRec175[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec175_perm[i]=fRec175_tmp[count+i];
			
			// LOOP 0x3379260
			// pre processing
			for (int i=0; i<4; i++) fYec117_tmp[i]=fYec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec117[i] = ((fZec161[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec117_perm[i]=fYec117_tmp[count+i];
			
			// LOOP 0x337e880
			// pre processing
			for (int i=0; i<4; i++) fYec118_tmp[i]=fYec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec118[i] = ((fZec178[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec118_perm[i]=fYec118_tmp[count+i];
			
			// LOOP 0x3384e80
			// pre processing
			for (int i=0; i<4; i++) fYec119_tmp[i]=fYec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec119[i] = ((fZec195[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec119_perm[i]=fYec119_tmp[count+i];
			
			// LOOP 0x338b870
			// pre processing
			for (int i=0; i<4; i++) fYec120_tmp[i]=fYec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec120[i] = ((fZec6[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec120_perm[i]=fYec120_tmp[count+i];
			
			// SECTION : 23
			// LOOP 0x335f7b0
			// pre processing
			for (int i=0; i<4; i++) fRec168_tmp[i]=fRec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec168[i] = (fConst11 * ((fRec169[i] - fRec169[i-1]) + fRec168[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec168_perm[i]=fRec168_tmp[count+i];
			
			// LOOP 0x33653b0
			// pre processing
			for (int i=0; i<4; i++) fRec170_tmp[i]=fRec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec170[i] = (fConst11 * ((fRec171[i] - fRec171[i-1]) + fRec170[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec170_perm[i]=fRec170_tmp[count+i];
			
			// LOOP 0x336c370
			// pre processing
			for (int i=0; i<4; i++) fRec172_tmp[i]=fRec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec172[i] = (fConst11 * ((fRec173[i] - fRec173[i-1]) + fRec172[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec172_perm[i]=fRec172_tmp[count+i];
			
			// LOOP 0x3372070
			// pre processing
			for (int i=0; i<4; i++) fRec174_tmp[i]=fRec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec174[i] = (fConst11 * ((fRec175[i] - fRec175[i-1]) + fRec174[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec174_perm[i]=fRec174_tmp[count+i];
			
			// LOOP 0x3378d10
			// pre processing
			for (int i=0; i<4; i++) fRec177_tmp[i]=fRec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec177[i] = (fRec177[i-1] + (fConst16 * ((square_polyblep_precalc(fZec161[i], fZec162[i], (0.5f * fYec65[i-2]), fZec170[i]) + (2 * fYec117[i-1])) - fRec177[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec177_perm[i]=fRec177_tmp[count+i];
			
			// LOOP 0x337e330
			// pre processing
			for (int i=0; i<4; i++) fRec179_tmp[i]=fRec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec179[i] = (fRec179[i-1] + (fConst16 * ((square_polyblep_precalc(fZec178[i], fZec179[i], (0.5f * fYec72[i-2]), fZec187[i]) + (2 * fYec118[i-1])) - fRec179[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec179_perm[i]=fRec179_tmp[count+i];
			
			// LOOP 0x3384930
			// pre processing
			for (int i=0; i<4; i++) fRec181_tmp[i]=fRec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec181[i] = (fRec181[i-1] + (fConst16 * ((square_polyblep_precalc(fZec195[i], fZec196[i], (0.5f * fYec79[i-2]), fZec204[i]) + (2 * fYec119[i-1])) - fRec181[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec181_perm[i]=fRec181_tmp[count+i];
			
			// LOOP 0x338b320
			// pre processing
			for (int i=0; i<4; i++) fRec183_tmp[i]=fRec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec183[i] = (fRec183[i-1] + (fConst17 * ((square_polyblep_precalc(fZec6[i], fZec7[i], (0.5f * fYec1[i-2]), fZec17[i]) + (2 * fYec120[i-1])) - fRec183[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec183_perm[i]=fRec183_tmp[count+i];
			
			// LOOP 0x3391520
			// pre processing
			for (int i=0; i<4; i++) fYec121_tmp[i]=fYec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec121[i] = ((fZec23[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec121_perm[i]=fYec121_tmp[count+i];
			
			// LOOP 0x3398360
			// pre processing
			for (int i=0; i<4; i++) fYec122_tmp[i]=fYec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec122[i] = ((fZec40[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec122_perm[i]=fYec122_tmp[count+i];
			
			// LOOP 0x339e0d0
			// pre processing
			for (int i=0; i<4; i++) fYec123_tmp[i]=fYec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec123[i] = ((fZec57[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec123_perm[i]=fYec123_tmp[count+i];
			
			// LOOP 0x33a5320
			// pre processing
			for (int i=0; i<4; i++) fYec124_tmp[i]=fYec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec124[i] = ((fZec74[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec124_perm[i]=fYec124_tmp[count+i];
			
			// LOOP 0x33acbf0
			// pre processing
			for (int i=0; i<4; i++) fYec125_tmp[i]=fYec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec125[i] = ((fZec91[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec125_perm[i]=fYec125_tmp[count+i];
			
			// LOOP 0x33b2d50
			// pre processing
			for (int i=0; i<4; i++) fYec126_tmp[i]=fYec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec126[i] = ((fZec108[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec126_perm[i]=fYec126_tmp[count+i];
			
			// LOOP 0x33ba740
			// pre processing
			for (int i=0; i<4; i++) fYec127_tmp[i]=fYec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec127[i] = ((fZec125[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec127_perm[i]=fYec127_tmp[count+i];
			
			// LOOP 0x33c0c40
			// pre processing
			for (int i=0; i<4; i++) fYec128_tmp[i]=fYec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec128[i] = ((fZec142[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec128_perm[i]=fYec128_tmp[count+i];
			
			// LOOP 0x33c7880
			// pre processing
			for (int i=0; i<4; i++) fYec129_tmp[i]=fYec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec129[i] = ((fZec159[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec129_perm[i]=fYec129_tmp[count+i];
			
			// LOOP 0x33cd220
			// pre processing
			for (int i=0; i<4; i++) fYec130_tmp[i]=fYec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec130[i] = ((fZec176[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec130_perm[i]=fYec130_tmp[count+i];
			
			// LOOP 0x33d3f60
			// pre processing
			for (int i=0; i<4; i++) fYec131_tmp[i]=fYec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec131[i] = ((fZec193[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec131_perm[i]=fYec131_tmp[count+i];
			
			// LOOP 0x33db120
			// pre processing
			for (int i=0; i<4; i++) fYec132_tmp[i]=fYec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec132[i] = ((fZec4[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec132_perm[i]=fYec132_tmp[count+i];
			
			// LOOP 0x33df1c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec256[i] = (fRec166[i] + (fRec164[i] + (fRec162[i] + (fRec158[i] + fRec160[i]))));
			}
			
			// LOOP 0x33f0330
			// pre processing
			for (int i=0; i<4; i++) iRec211_tmp[i]=iRec211_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec211[i] = ((int(((fZec14[i] - fZec15[i]) < 0)))?(1 - iRec211[i-1]):iRec211[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec211_perm[i]=iRec211_tmp[count+i];
			
			// LOOP 0x33f62b0
			// pre processing
			for (int i=0; i<4; i++) iRec214_tmp[i]=iRec214_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec214[i] = ((int(((fZec31[i] - fZec32[i]) < 0)))?(1 - iRec214[i-1]):iRec214[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec214_perm[i]=iRec214_tmp[count+i];
			
			// LOOP 0x33fbb10
			// pre processing
			for (int i=0; i<4; i++) iRec217_tmp[i]=iRec217_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec217[i] = ((int(((fZec48[i] - fZec49[i]) < 0)))?(1 - iRec217[i-1]):iRec217[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec217_perm[i]=iRec217_tmp[count+i];
			
			// LOOP 0x3401280
			// pre processing
			for (int i=0; i<4; i++) iRec220_tmp[i]=iRec220_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec220[i] = ((int(((fZec65[i] - fZec66[i]) < 0)))?(1 - iRec220[i-1]):iRec220[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec220_perm[i]=iRec220_tmp[count+i];
			
			// LOOP 0x3406af0
			// pre processing
			for (int i=0; i<4; i++) iRec223_tmp[i]=iRec223_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec223[i] = ((int(((fZec82[i] - fZec83[i]) < 0)))?(1 - iRec223[i-1]):iRec223[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec223_perm[i]=iRec223_tmp[count+i];
			
			// LOOP 0x340c320
			// pre processing
			for (int i=0; i<4; i++) iRec226_tmp[i]=iRec226_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec226[i] = ((int(((fZec99[i] - fZec100[i]) < 0)))?(1 - iRec226[i-1]):iRec226[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec226_perm[i]=iRec226_tmp[count+i];
			
			// LOOP 0x3411bf0
			// pre processing
			for (int i=0; i<4; i++) iRec229_tmp[i]=iRec229_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec229[i] = ((int(((fZec116[i] - fZec117[i]) < 0)))?(1 - iRec229[i-1]):iRec229[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec229_perm[i]=iRec229_tmp[count+i];
			
			// LOOP 0x3417380
			// pre processing
			for (int i=0; i<4; i++) iRec232_tmp[i]=iRec232_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec232[i] = ((int(((fZec133[i] - fZec134[i]) < 0)))?(1 - iRec232[i-1]):iRec232[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec232_perm[i]=iRec232_tmp[count+i];
			
			// LOOP 0x341cde0
			// pre processing
			for (int i=0; i<4; i++) iRec235_tmp[i]=iRec235_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec235[i] = ((int(((fZec150[i] - fZec151[i]) < 0)))?(1 - iRec235[i-1]):iRec235[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec235_perm[i]=iRec235_tmp[count+i];
			
			// LOOP 0x3422750
			// pre processing
			for (int i=0; i<4; i++) iRec238_tmp[i]=iRec238_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec238[i] = ((int(((fZec167[i] - fZec168[i]) < 0)))?(1 - iRec238[i-1]):iRec238[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec238_perm[i]=iRec238_tmp[count+i];
			
			// LOOP 0x34280e0
			// pre processing
			for (int i=0; i<4; i++) iRec241_tmp[i]=iRec241_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec241[i] = ((int(((fZec184[i] - fZec185[i]) < 0)))?(1 - iRec241[i-1]):iRec241[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec241_perm[i]=iRec241_tmp[count+i];
			
			// LOOP 0x342dac0
			// pre processing
			for (int i=0; i<4; i++) iRec244_tmp[i]=iRec244_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec244[i] = ((int(((fZec201[i] - fZec202[i]) < 0)))?(1 - iRec244[i-1]):iRec244[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec244_perm[i]=iRec244_tmp[count+i];
			
			// LOOP 0x346d270
			// pre processing
			for (int i=0; i<4; i++) fYec159_tmp[i]=fYec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec159[i] = ((fZec21[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec159_perm[i]=fYec159_tmp[count+i];
			
			// LOOP 0x3471730
			// pre processing
			for (int i=0; i<4; i++) fYec160_tmp[i]=fYec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec160[i] = ((fZec38[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec160_perm[i]=fYec160_tmp[count+i];
			
			// LOOP 0x3475460
			// pre processing
			for (int i=0; i<4; i++) fYec161_tmp[i]=fYec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec161[i] = ((fZec55[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec161_perm[i]=fYec161_tmp[count+i];
			
			// LOOP 0x34796b0
			// pre processing
			for (int i=0; i<4; i++) fYec162_tmp[i]=fYec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec162[i] = ((fZec72[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec162_perm[i]=fYec162_tmp[count+i];
			
			// LOOP 0x347d2d0
			// pre processing
			for (int i=0; i<4; i++) fYec163_tmp[i]=fYec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec163[i] = ((fZec89[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec163_perm[i]=fYec163_tmp[count+i];
			
			// LOOP 0x34810b0
			// pre processing
			for (int i=0; i<4; i++) fYec164_tmp[i]=fYec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec164[i] = ((fZec106[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec164_perm[i]=fYec164_tmp[count+i];
			
			// LOOP 0x3484ee0
			// pre processing
			for (int i=0; i<4; i++) fYec165_tmp[i]=fYec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec165[i] = ((fZec123[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec165_perm[i]=fYec165_tmp[count+i];
			
			// LOOP 0x3488d40
			// pre processing
			for (int i=0; i<4; i++) fYec166_tmp[i]=fYec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec166[i] = ((fZec140[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec166_perm[i]=fYec166_tmp[count+i];
			
			// LOOP 0x348cf20
			// pre processing
			for (int i=0; i<4; i++) fYec167_tmp[i]=fYec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec167[i] = ((fZec157[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec167_perm[i]=fYec167_tmp[count+i];
			
			// LOOP 0x3490e00
			// pre processing
			for (int i=0; i<4; i++) fYec168_tmp[i]=fYec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec168[i] = ((fZec174[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec168_perm[i]=fYec168_tmp[count+i];
			
			// LOOP 0x3494d20
			// pre processing
			for (int i=0; i<4; i++) fYec169_tmp[i]=fYec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec169[i] = ((fZec191[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec169_perm[i]=fYec169_tmp[count+i];
			
			// LOOP 0x34989a0
			// pre processing
			for (int i=0; i<4; i++) fYec170_tmp[i]=fYec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec170[i] = (0 - (2 * (fRec4[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec170_perm[i]=fYec170_tmp[count+i];
			
			// LOOP 0x34b90b0
			// pre processing
			for (int i=0; i<4; i++) fYec172_tmp[i]=fYec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec172[i] = (0 - (2 * (fRec14[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec172_perm[i]=fYec172_tmp[count+i];
			
			// LOOP 0x34c13c0
			// pre processing
			for (int i=0; i<4; i++) fYec174_tmp[i]=fYec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec174[i] = (0 - (2 * (fRec23[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec174_perm[i]=fYec174_tmp[count+i];
			
			// LOOP 0x34c8a90
			// pre processing
			for (int i=0; i<4; i++) fYec176_tmp[i]=fYec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec176[i] = (0 - (2 * (fRec32[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec176_perm[i]=fYec176_tmp[count+i];
			
			// LOOP 0x34cc0d0
			// pre processing
			for (int i=0; i<4; i++) fYec178_tmp[i]=fYec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec178[i] = (0 - (2 * (fRec41[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec178_perm[i]=fYec178_tmp[count+i];
			
			// LOOP 0x34cf870
			// pre processing
			for (int i=0; i<4; i++) fYec180_tmp[i]=fYec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec180[i] = (0 - (2 * (fRec50[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec180_perm[i]=fYec180_tmp[count+i];
			
			// LOOP 0x34d3050
			// pre processing
			for (int i=0; i<4; i++) fYec182_tmp[i]=fYec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec182[i] = (0 - (2 * (fRec59[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec182_perm[i]=fYec182_tmp[count+i];
			
			// LOOP 0x34d6860
			// pre processing
			for (int i=0; i<4; i++) fYec184_tmp[i]=fYec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec184[i] = (0 - (2 * (fRec68[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec184_perm[i]=fYec184_tmp[count+i];
			
			// LOOP 0x35049c0
			// pre processing
			for (int i=0; i<4; i++) fYec187_tmp[i]=fYec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec187[i] = (0 - (2 * (fRec77[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec187_perm[i]=fYec187_tmp[count+i];
			
			// LOOP 0x350cc70
			// pre processing
			for (int i=0; i<4; i++) fYec189_tmp[i]=fYec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec189[i] = (0 - (2 * (fRec86[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec189_perm[i]=fYec189_tmp[count+i];
			
			// LOOP 0x35106d0
			// pre processing
			for (int i=0; i<4; i++) fYec191_tmp[i]=fYec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec191[i] = (0 - (2 * (fRec95[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec191_perm[i]=fYec191_tmp[count+i];
			
			// LOOP 0x35141b0
			// pre processing
			for (int i=0; i<4; i++) fYec193_tmp[i]=fYec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec193[i] = (0 - (2 * (fRec104[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec193_perm[i]=fYec193_tmp[count+i];
			
			// SECTION : 24
			// LOOP 0x3378820
			// pre processing
			for (int i=0; i<4; i++) fRec176_tmp[i]=fRec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec176[i] = (fConst11 * ((fRec177[i] - fRec177[i-1]) + fRec176[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec176_perm[i]=fRec176_tmp[count+i];
			
			// LOOP 0x337de40
			// pre processing
			for (int i=0; i<4; i++) fRec178_tmp[i]=fRec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec178[i] = (fConst11 * ((fRec179[i] - fRec179[i-1]) + fRec178[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec178_perm[i]=fRec178_tmp[count+i];
			
			// LOOP 0x3384440
			// pre processing
			for (int i=0; i<4; i++) fRec180_tmp[i]=fRec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec180[i] = (fConst11 * ((fRec181[i] - fRec181[i-1]) + fRec180[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec180_perm[i]=fRec180_tmp[count+i];
			
			// LOOP 0x33878a0
			// pre processing
			for (int i=0; i<4; i++) fVec48_tmp[i]=fVec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec48[i] = fSlow68;
			}
			// post processing
			for (int i=0; i<4; i++) fVec48_perm[i]=fVec48_tmp[count+i];
			
			// LOOP 0x338ae30
			// pre processing
			for (int i=0; i<4; i++) fRec182_tmp[i]=fRec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec182[i] = (fConst11 * ((fRec183[i] - fRec183[i-1]) + fRec182[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec182_perm[i]=fRec182_tmp[count+i];
			
			// LOOP 0x338e550
			// pre processing
			for (int i=0; i<4; i++) fVec49_tmp[i]=fVec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec49[i] = fSlow69;
			}
			// post processing
			for (int i=0; i<4; i++) fVec49_perm[i]=fVec49_tmp[count+i];
			
			// LOOP 0x3390fd0
			// pre processing
			for (int i=0; i<4; i++) fRec185_tmp[i]=fRec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec185[i] = (fRec185[i-1] + (fConst17 * ((square_polyblep_precalc(fZec23[i], fZec24[i], (0.5f * fYec8[i-2]), fZec34[i]) + (2 * fYec121[i-1])) - fRec185[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec185_perm[i]=fRec185_tmp[count+i];
			
			// LOOP 0x3393f90
			// pre processing
			for (int i=0; i<4; i++) fVec50_tmp[i]=fVec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec50[i] = fSlow70;
			}
			// post processing
			for (int i=0; i<4; i++) fVec50_perm[i]=fVec50_tmp[count+i];
			
			// LOOP 0x3397e10
			// pre processing
			for (int i=0; i<4; i++) fRec187_tmp[i]=fRec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec187[i] = (fRec187[i-1] + (fConst17 * ((square_polyblep_precalc(fZec40[i], fZec41[i], (0.5f * fYec15[i-2]), fZec51[i]) + (2 * fYec122[i-1])) - fRec187[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec187_perm[i]=fRec187_tmp[count+i];
			
			// LOOP 0x339ad60
			// pre processing
			for (int i=0; i<4; i++) fVec51_tmp[i]=fVec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec51[i] = fSlow71;
			}
			// post processing
			for (int i=0; i<4; i++) fVec51_perm[i]=fVec51_tmp[count+i];
			
			// LOOP 0x339db80
			// pre processing
			for (int i=0; i<4; i++) fRec189_tmp[i]=fRec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec189[i] = (fRec189[i-1] + (fConst17 * ((square_polyblep_precalc(fZec57[i], fZec58[i], (0.5f * fYec22[i-2]), fZec68[i]) + (2 * fYec123[i-1])) - fRec189[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec189_perm[i]=fRec189_tmp[count+i];
			
			// LOOP 0x33a0ad0
			// pre processing
			for (int i=0; i<4; i++) fVec52_tmp[i]=fVec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec52[i] = fSlow72;
			}
			// post processing
			for (int i=0; i<4; i++) fVec52_perm[i]=fVec52_tmp[count+i];
			
			// LOOP 0x33a4dd0
			// pre processing
			for (int i=0; i<4; i++) fRec191_tmp[i]=fRec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec191[i] = (fRec191[i-1] + (fConst18 * ((square_polyblep_precalc(fZec74[i], fZec75[i], (0.5f * fYec29[i-2]), fZec85[i]) + (2 * fYec124[i-1])) - fRec191[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec191_perm[i]=fRec191_tmp[count+i];
			
			// LOOP 0x33a80a0
			// pre processing
			for (int i=0; i<4; i++) fVec53_tmp[i]=fVec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec53[i] = fSlow73;
			}
			// post processing
			for (int i=0; i<4; i++) fVec53_perm[i]=fVec53_tmp[count+i];
			
			// LOOP 0x33ac6a0
			// pre processing
			for (int i=0; i<4; i++) fRec193_tmp[i]=fRec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec193[i] = (fRec193[i-1] + (fConst18 * ((square_polyblep_precalc(fZec91[i], fZec92[i], (0.5f * fYec36[i-2]), fZec102[i]) + (2 * fYec125[i-1])) - fRec193[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec193_perm[i]=fRec193_tmp[count+i];
			
			// LOOP 0x33af600
			// pre processing
			for (int i=0; i<4; i++) fVec54_tmp[i]=fVec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec54[i] = fSlow74;
			}
			// post processing
			for (int i=0; i<4; i++) fVec54_perm[i]=fVec54_tmp[count+i];
			
			// LOOP 0x33b2800
			// pre processing
			for (int i=0; i<4; i++) fRec195_tmp[i]=fRec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec195[i] = (fRec195[i-1] + (fConst18 * ((square_polyblep_precalc(fZec108[i], fZec109[i], (0.5f * fYec43[i-2]), fZec119[i]) + (2 * fYec126[i-1])) - fRec195[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec195_perm[i]=fRec195_tmp[count+i];
			
			// LOOP 0x33b5770
			// pre processing
			for (int i=0; i<4; i++) fVec55_tmp[i]=fVec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec55[i] = fSlow75;
			}
			// post processing
			for (int i=0; i<4; i++) fVec55_perm[i]=fVec55_tmp[count+i];
			
			// LOOP 0x33ba1f0
			// pre processing
			for (int i=0; i<4; i++) fRec197_tmp[i]=fRec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec197[i] = (fRec197[i-1] + (fConst18 * ((square_polyblep_precalc(fZec125[i], fZec126[i], (0.5f * fYec50[i-2]), fZec136[i]) + (2 * fYec127[i-1])) - fRec197[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec197_perm[i]=fRec197_tmp[count+i];
			
			// LOOP 0x33bd160
			// pre processing
			for (int i=0; i<4; i++) fVec56_tmp[i]=fVec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec56[i] = fSlow76;
			}
			// post processing
			for (int i=0; i<4; i++) fVec56_perm[i]=fVec56_tmp[count+i];
			
			// LOOP 0x33c06f0
			// pre processing
			for (int i=0; i<4; i++) fRec199_tmp[i]=fRec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec199[i] = (fRec199[i-1] + (fConst19 * ((square_polyblep_precalc(fZec142[i], fZec143[i], (0.5f * fYec57[i-2]), fZec153[i]) + (2 * fYec128[i-1])) - fRec199[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec199_perm[i]=fRec199_tmp[count+i];
			
			// LOOP 0x33c39a0
			// pre processing
			for (int i=0; i<4; i++) fVec57_tmp[i]=fVec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec57[i] = fSlow77;
			}
			// post processing
			for (int i=0; i<4; i++) fVec57_perm[i]=fVec57_tmp[count+i];
			
			// LOOP 0x33c7330
			// pre processing
			for (int i=0; i<4; i++) fRec201_tmp[i]=fRec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec201[i] = (fRec201[i-1] + (fConst19 * ((square_polyblep_precalc(fZec159[i], fZec160[i], (0.5f * fYec64[i-2]), fZec170[i]) + (2 * fYec129[i-1])) - fRec201[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec201_perm[i]=fRec201_tmp[count+i];
			
			// LOOP 0x33ca2a0
			// pre processing
			for (int i=0; i<4; i++) fVec58_tmp[i]=fVec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec58[i] = fSlow78;
			}
			// post processing
			for (int i=0; i<4; i++) fVec58_perm[i]=fVec58_tmp[count+i];
			
			// LOOP 0x33cccd0
			// pre processing
			for (int i=0; i<4; i++) fRec203_tmp[i]=fRec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec203[i] = (fRec203[i-1] + (fConst19 * ((square_polyblep_precalc(fZec176[i], fZec177[i], (0.5f * fYec71[i-2]), fZec187[i]) + (2 * fYec130[i-1])) - fRec203[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec203_perm[i]=fRec203_tmp[count+i];
			
			// LOOP 0x33cfc40
			// pre processing
			for (int i=0; i<4; i++) fVec59_tmp[i]=fVec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec59[i] = fSlow79;
			}
			// post processing
			for (int i=0; i<4; i++) fVec59_perm[i]=fVec59_tmp[count+i];
			
			// LOOP 0x33d3a10
			// pre processing
			for (int i=0; i<4; i++) fRec205_tmp[i]=fRec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec205[i] = (fRec205[i-1] + (fConst19 * ((square_polyblep_precalc(fZec193[i], fZec194[i], (0.5f * fYec78[i-2]), fZec204[i]) + (2 * fYec131[i-1])) - fRec205[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec205_perm[i]=fRec205_tmp[count+i];
			
			// LOOP 0x33d6980
			// pre processing
			for (int i=0; i<4; i++) fVec60_tmp[i]=fVec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec60[i] = fSlow80;
			}
			// post processing
			for (int i=0; i<4; i++) fVec60_perm[i]=fVec60_tmp[count+i];
			
			// LOOP 0x33dabd0
			// pre processing
			for (int i=0; i<4; i++) fRec207_tmp[i]=fRec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec207[i] = (fRec207[i-1] + (fConst20 * ((square_polyblep_precalc(fZec4[i], fZec5[i], (0.5f * fYec0[i-2]), fZec17[i]) + (2 * fYec132[i-1])) - fRec207[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec207_perm[i]=fRec207_tmp[count+i];
			
			// LOOP 0x33df080
			// exec code
			for (int i=0; i<count; i++) {
				fZec257[i] = (fRec174[i] + (fRec172[i] + (fRec170[i] + (fRec168[i] + fZec256[i]))));
			}
			
			// LOOP 0x33f0190
			// pre processing
			for (int i=0; i<4; i++) fYec134_tmp[i]=fYec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec134[i] = (iRec211[i] + fZec14[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec134_perm[i]=fYec134_tmp[count+i];
			
			// LOOP 0x33f6170
			// pre processing
			for (int i=0; i<4; i++) fYec136_tmp[i]=fYec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec136[i] = (iRec214[i] + fZec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec136_perm[i]=fYec136_tmp[count+i];
			
			// LOOP 0x33fb970
			// pre processing
			for (int i=0; i<4; i++) fYec138_tmp[i]=fYec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec138[i] = (iRec217[i] + fZec48[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec138_perm[i]=fYec138_tmp[count+i];
			
			// LOOP 0x34010e0
			// pre processing
			for (int i=0; i<4; i++) fYec140_tmp[i]=fYec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec140[i] = (iRec220[i] + fZec65[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec140_perm[i]=fYec140_tmp[count+i];
			
			// LOOP 0x3406950
			// pre processing
			for (int i=0; i<4; i++) fYec142_tmp[i]=fYec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec142[i] = (iRec223[i] + fZec82[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec142_perm[i]=fYec142_tmp[count+i];
			
			// LOOP 0x340c180
			// pre processing
			for (int i=0; i<4; i++) fYec144_tmp[i]=fYec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec144[i] = (iRec226[i] + fZec99[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec144_perm[i]=fYec144_tmp[count+i];
			
			// LOOP 0x3411a50
			// pre processing
			for (int i=0; i<4; i++) fYec146_tmp[i]=fYec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec146[i] = (iRec229[i] + fZec116[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec146_perm[i]=fYec146_tmp[count+i];
			
			// LOOP 0x3417210
			// pre processing
			for (int i=0; i<4; i++) fYec148_tmp[i]=fYec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec148[i] = (iRec232[i] + fZec133[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec148_perm[i]=fYec148_tmp[count+i];
			
			// LOOP 0x341cc40
			// pre processing
			for (int i=0; i<4; i++) fYec150_tmp[i]=fYec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec150[i] = (iRec235[i] + fZec150[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec150_perm[i]=fYec150_tmp[count+i];
			
			// LOOP 0x34225b0
			// pre processing
			for (int i=0; i<4; i++) fYec152_tmp[i]=fYec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec152[i] = (iRec238[i] + fZec167[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec152_perm[i]=fYec152_tmp[count+i];
			
			// LOOP 0x3427f40
			// pre processing
			for (int i=0; i<4; i++) fYec154_tmp[i]=fYec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec154[i] = (iRec241[i] + fZec184[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec154_perm[i]=fYec154_tmp[count+i];
			
			// LOOP 0x342d920
			// pre processing
			for (int i=0; i<4; i++) fYec156_tmp[i]=fYec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec156[i] = (iRec244[i] + fZec201[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec156_perm[i]=fYec156_tmp[count+i];
			
			// LOOP 0x346c590
			// pre processing
			for (int i=0; i<4; i++) fRec246_tmp[i]=fRec246_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec246[i] = (fRec246[i-1] + (fConst20 * ((square_polyblep_precalc(fZec21[i], fZec22[i], (0.5f * fYec7[i-2]), fZec34[i]) + (2 * fYec159[i-1])) - fRec246[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec246_perm[i]=fRec246_tmp[count+i];
			
			// LOOP 0x34711e0
			// pre processing
			for (int i=0; i<4; i++) fRec248_tmp[i]=fRec248_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec248[i] = (fRec248[i-1] + (fConst20 * ((square_polyblep_precalc(fZec38[i], fZec39[i], (0.5f * fYec14[i-2]), fZec51[i]) + (2 * fYec160[i-1])) - fRec248[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec248_perm[i]=fRec248_tmp[count+i];
			
			// LOOP 0x3474f30
			// pre processing
			for (int i=0; i<4; i++) fRec250_tmp[i]=fRec250_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec250[i] = (fRec250[i-1] + (fConst20 * ((square_polyblep_precalc(fZec55[i], fZec56[i], (0.5f * fYec21[i-2]), fZec68[i]) + (2 * fYec161[i-1])) - fRec250[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec250_perm[i]=fRec250_tmp[count+i];
			
			// LOOP 0x3478ca0
			// pre processing
			for (int i=0; i<4; i++) fRec252_tmp[i]=fRec252_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec252[i] = (fRec252[i-1] + (fConst24 * (((2 * fYec162[i-1]) + square_polyblep_precalc(fZec72[i], fZec73[i], (0.5f * fYec28[i-2]), fZec85[i])) - fRec252[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec252_perm[i]=fRec252_tmp[count+i];
			
			// LOOP 0x347cde0
			// pre processing
			for (int i=0; i<4; i++) fRec254_tmp[i]=fRec254_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec254[i] = (fRec254[i-1] + (fConst24 * ((square_polyblep_precalc(fZec89[i], fZec90[i], (0.5f * fYec35[i-2]), fZec102[i]) + (2 * fYec163[i-1])) - fRec254[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec254_perm[i]=fRec254_tmp[count+i];
			
			// LOOP 0x3480be0
			// pre processing
			for (int i=0; i<4; i++) fRec256_tmp[i]=fRec256_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec256[i] = (fRec256[i-1] + (fConst24 * ((square_polyblep_precalc(fZec106[i], fZec107[i], (0.5f * fYec42[i-2]), fZec119[i]) + (2 * fYec164[i-1])) - fRec256[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec256_perm[i]=fRec256_tmp[count+i];
			
			// LOOP 0x34849b0
			// pre processing
			for (int i=0; i<4; i++) fRec258_tmp[i]=fRec258_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec258[i] = (fRec258[i-1] + (fConst24 * ((square_polyblep_precalc(fZec123[i], fZec124[i], (0.5f * fYec49[i-2]), fZec136[i]) + (2 * fYec165[i-1])) - fRec258[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec258_perm[i]=fRec258_tmp[count+i];
			
			// LOOP 0x3488830
			// pre processing
			for (int i=0; i<4; i++) fRec260_tmp[i]=fRec260_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec260[i] = (fRec260[i-1] + (fConst25 * ((square_polyblep_precalc(fZec140[i], fZec141[i], (0.5f * fYec56[i-2]), fZec153[i]) + (2 * fYec166[i-1])) - fRec260[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec260_perm[i]=fRec260_tmp[count+i];
			
			// LOOP 0x348ca30
			// pre processing
			for (int i=0; i<4; i++) fRec262_tmp[i]=fRec262_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec262[i] = (fRec262[i-1] + (fConst25 * ((square_polyblep_precalc(fZec157[i], fZec158[i], (0.5f * fYec63[i-2]), fZec170[i]) + (2 * fYec167[i-1])) - fRec262[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec262_perm[i]=fRec262_tmp[count+i];
			
			// LOOP 0x3490930
			// pre processing
			for (int i=0; i<4; i++) fRec264_tmp[i]=fRec264_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec264[i] = (fRec264[i-1] + (fConst25 * ((square_polyblep_precalc(fZec174[i], fZec175[i], (0.5f * fYec70[i-2]), fZec187[i]) + (2 * fYec168[i-1])) - fRec264[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec264_perm[i]=fRec264_tmp[count+i];
			
			// LOOP 0x3494870
			// pre processing
			for (int i=0; i<4; i++) fRec266_tmp[i]=fRec266_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec266[i] = (fRec266[i-1] + (fConst25 * ((square_polyblep_precalc(fZec191[i], fZec192[i], (0.5f * fYec77[i-2]), fZec204[i]) + (2 * fYec169[i-1])) - fRec266[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec266_perm[i]=fRec266_tmp[count+i];
			
			// LOOP 0x3498890
			// pre processing
			for (int i=0; i<4; i++) fYec171_tmp[i]=fYec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec171[i] = (fZec17[i] + fYec170[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec171_perm[i]=fYec171_tmp[count+i];
			
			// LOOP 0x34b8fa0
			// pre processing
			for (int i=0; i<4; i++) fYec173_tmp[i]=fYec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec173[i] = (fZec34[i] + fYec172[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec173_perm[i]=fYec173_tmp[count+i];
			
			// LOOP 0x34c12b0
			// pre processing
			for (int i=0; i<4; i++) fYec175_tmp[i]=fYec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec175[i] = (fZec51[i] + fYec174[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec175_perm[i]=fYec175_tmp[count+i];
			
			// LOOP 0x34c8980
			// pre processing
			for (int i=0; i<4; i++) fYec177_tmp[i]=fYec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec177[i] = (fZec68[i] + fYec176[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec177_perm[i]=fYec177_tmp[count+i];
			
			// LOOP 0x34cb230
			// pre processing
			for (int i=0; i<4; i++) fYec179_tmp[i]=fYec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec179[i] = (fZec85[i] + fYec178[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec179_perm[i]=fYec179_tmp[count+i];
			
			// LOOP 0x34ce970
			// pre processing
			for (int i=0; i<4; i++) fYec181_tmp[i]=fYec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec181[i] = (fZec102[i] + fYec180[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec181_perm[i]=fYec181_tmp[count+i];
			
			// LOOP 0x34d20f0
			// pre processing
			for (int i=0; i<4; i++) fYec183_tmp[i]=fYec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec183[i] = (fZec119[i] + fYec182[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec183_perm[i]=fYec183_tmp[count+i];
			
			// LOOP 0x34d58b0
			// pre processing
			for (int i=0; i<4; i++) fYec185_tmp[i]=fYec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec185[i] = (fZec136[i] + fYec184[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec185_perm[i]=fYec185_tmp[count+i];
			
			// LOOP 0x35048b0
			// pre processing
			for (int i=0; i<4; i++) fYec188_tmp[i]=fYec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec188[i] = (fZec153[i] + fYec187[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec188_perm[i]=fYec188_tmp[count+i];
			
			// LOOP 0x350cb60
			// pre processing
			for (int i=0; i<4; i++) fYec190_tmp[i]=fYec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec190[i] = (fZec170[i] + fYec189[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec190_perm[i]=fYec190_tmp[count+i];
			
			// LOOP 0x35105c0
			// pre processing
			for (int i=0; i<4; i++) fYec192_tmp[i]=fYec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec192[i] = (fZec187[i] + fYec191[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec192_perm[i]=fYec192_tmp[count+i];
			
			// LOOP 0x35140a0
			// pre processing
			for (int i=0; i<4; i++) fYec194_tmp[i]=fYec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec194[i] = (fZec204[i] + fYec193[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec194_perm[i]=fYec194_tmp[count+i];
			
			// SECTION : 25
			// LOOP 0x31a4480
			// pre processing
			for (int i=0; i<4; i++) fVec0_tmp[i]=fVec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec0[i] = fSlow2;
			}
			// post processing
			for (int i=0; i<4; i++) fVec0_perm[i]=fVec0_tmp[count+i];
			
			// LOOP 0x31bf670
			// pre processing
			for (int i=0; i<4; i++) fVec1_tmp[i]=fVec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec1[i] = fSlow8;
			}
			// post processing
			for (int i=0; i<4; i++) fVec1_perm[i]=fVec1_tmp[count+i];
			
			// LOOP 0x31d5980
			// pre processing
			for (int i=0; i<4; i++) fVec2_tmp[i]=fVec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec2[i] = fSlow10;
			}
			// post processing
			for (int i=0; i<4; i++) fVec2_perm[i]=fVec2_tmp[count+i];
			
			// LOOP 0x31ebf20
			// pre processing
			for (int i=0; i<4; i++) fVec3_tmp[i]=fVec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec3[i] = fSlow12;
			}
			// post processing
			for (int i=0; i<4; i++) fVec3_perm[i]=fVec3_tmp[count+i];
			
			// LOOP 0x3202470
			// pre processing
			for (int i=0; i<4; i++) fVec4_tmp[i]=fVec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec4[i] = fSlow14;
			}
			// post processing
			for (int i=0; i<4; i++) fVec4_perm[i]=fVec4_tmp[count+i];
			
			// LOOP 0x3218eb0
			// pre processing
			for (int i=0; i<4; i++) fVec5_tmp[i]=fVec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec5[i] = fSlow16;
			}
			// post processing
			for (int i=0; i<4; i++) fVec5_perm[i]=fVec5_tmp[count+i];
			
			// LOOP 0x322f760
			// pre processing
			for (int i=0; i<4; i++) fVec6_tmp[i]=fVec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec6[i] = fSlow18;
			}
			// post processing
			for (int i=0; i<4; i++) fVec6_perm[i]=fVec6_tmp[count+i];
			
			// LOOP 0x3245dc0
			// pre processing
			for (int i=0; i<4; i++) fVec7_tmp[i]=fVec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec7[i] = fSlow20;
			}
			// post processing
			for (int i=0; i<4; i++) fVec7_perm[i]=fVec7_tmp[count+i];
			
			// LOOP 0x325c840
			// pre processing
			for (int i=0; i<4; i++) fVec8_tmp[i]=fVec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec8[i] = fSlow22;
			}
			// post processing
			for (int i=0; i<4; i++) fVec8_perm[i]=fVec8_tmp[count+i];
			
			// LOOP 0x3273330
			// pre processing
			for (int i=0; i<4; i++) fVec9_tmp[i]=fVec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec9[i] = fSlow24;
			}
			// post processing
			for (int i=0; i<4; i++) fVec9_perm[i]=fVec9_tmp[count+i];
			
			// LOOP 0x3289be0
			// pre processing
			for (int i=0; i<4; i++) fVec10_tmp[i]=fVec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec10[i] = fSlow26;
			}
			// post processing
			for (int i=0; i<4; i++) fVec10_perm[i]=fVec10_tmp[count+i];
			
			// LOOP 0x32a0260
			// pre processing
			for (int i=0; i<4; i++) fVec11_tmp[i]=fVec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec11[i] = fSlow28;
			}
			// post processing
			for (int i=0; i<4; i++) fVec11_perm[i]=fVec11_tmp[count+i];
			
			// LOOP 0x32b6dc0
			// pre processing
			for (int i=0; i<4; i++) fVec12_tmp[i]=fVec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec12[i] = fSlow30;
			}
			// post processing
			for (int i=0; i<4; i++) fVec12_perm[i]=fVec12_tmp[count+i];
			
			// LOOP 0x32bc700
			// pre processing
			for (int i=0; i<4; i++) fVec13_tmp[i]=fVec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec13[i] = fSlow31;
			}
			// post processing
			for (int i=0; i<4; i++) fVec13_perm[i]=fVec13_tmp[count+i];
			
			// LOOP 0x32c1830
			// pre processing
			for (int i=0; i<4; i++) fVec14_tmp[i]=fVec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec14[i] = fSlow32;
			}
			// post processing
			for (int i=0; i<4; i++) fVec14_perm[i]=fVec14_tmp[count+i];
			
			// LOOP 0x32c7010
			// pre processing
			for (int i=0; i<4; i++) fVec15_tmp[i]=fVec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec15[i] = fSlow33;
			}
			// post processing
			for (int i=0; i<4; i++) fVec15_perm[i]=fVec15_tmp[count+i];
			
			// LOOP 0x32cc320
			// pre processing
			for (int i=0; i<4; i++) fVec16_tmp[i]=fVec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec16[i] = fSlow34;
			}
			// post processing
			for (int i=0; i<4; i++) fVec16_perm[i]=fVec16_tmp[count+i];
			
			// LOOP 0x32d3440
			// pre processing
			for (int i=0; i<4; i++) fVec17_tmp[i]=fVec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec17[i] = fSlow37;
			}
			// post processing
			for (int i=0; i<4; i++) fVec17_perm[i]=fVec17_tmp[count+i];
			
			// LOOP 0x32d8cd0
			// pre processing
			for (int i=0; i<4; i++) fVec18_tmp[i]=fVec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec18[i] = fSlow38;
			}
			// post processing
			for (int i=0; i<4; i++) fVec18_perm[i]=fVec18_tmp[count+i];
			
			// LOOP 0x32dde70
			// pre processing
			for (int i=0; i<4; i++) fVec19_tmp[i]=fVec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec19[i] = fSlow39;
			}
			// post processing
			for (int i=0; i<4; i++) fVec19_perm[i]=fVec19_tmp[count+i];
			
			// LOOP 0x32e3a10
			// pre processing
			for (int i=0; i<4; i++) fVec20_tmp[i]=fVec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec20[i] = fSlow40;
			}
			// post processing
			for (int i=0; i<4; i++) fVec20_perm[i]=fVec20_tmp[count+i];
			
			// LOOP 0x32e9020
			// pre processing
			for (int i=0; i<4; i++) fVec21_tmp[i]=fVec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec21[i] = fSlow41;
			}
			// post processing
			for (int i=0; i<4; i++) fVec21_perm[i]=fVec21_tmp[count+i];
			
			// LOOP 0x32ee570
			// pre processing
			for (int i=0; i<4; i++) fVec22_tmp[i]=fVec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec22[i] = fSlow42;
			}
			// post processing
			for (int i=0; i<4; i++) fVec22_perm[i]=fVec22_tmp[count+i];
			
			// LOOP 0x32f3540
			// pre processing
			for (int i=0; i<4; i++) fVec23_tmp[i]=fVec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec23[i] = fSlow43;
			}
			// post processing
			for (int i=0; i<4; i++) fVec23_perm[i]=fVec23_tmp[count+i];
			
			// LOOP 0x32f8d00
			// pre processing
			for (int i=0; i<4; i++) fVec24_tmp[i]=fVec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec24[i] = fSlow44;
			}
			// post processing
			for (int i=0; i<4; i++) fVec24_perm[i]=fVec24_tmp[count+i];
			
			// LOOP 0x32ff020
			// pre processing
			for (int i=0; i<4; i++) fVec25_tmp[i]=fVec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec25[i] = fSlow45;
			}
			// post processing
			for (int i=0; i<4; i++) fVec25_perm[i]=fVec25_tmp[count+i];
			
			// LOOP 0x33041e0
			// pre processing
			for (int i=0; i<4; i++) fVec26_tmp[i]=fVec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec26[i] = fSlow46;
			}
			// post processing
			for (int i=0; i<4; i++) fVec26_perm[i]=fVec26_tmp[count+i];
			
			// LOOP 0x3309f40
			// pre processing
			for (int i=0; i<4; i++) fVec27_tmp[i]=fVec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec27[i] = fSlow47;
			}
			// post processing
			for (int i=0; i<4; i++) fVec27_perm[i]=fVec27_tmp[count+i];
			
			// LOOP 0x330f250
			// pre processing
			for (int i=0; i<4; i++) fVec28_tmp[i]=fVec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec28[i] = fSlow48;
			}
			// post processing
			for (int i=0; i<4; i++) fVec28_perm[i]=fVec28_tmp[count+i];
			
			// LOOP 0x3315620
			// pre processing
			for (int i=0; i<4; i++) fVec29_tmp[i]=fVec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec29[i] = fSlow49;
			}
			// post processing
			for (int i=0; i<4; i++) fVec29_perm[i]=fVec29_tmp[count+i];
			
			// LOOP 0x331b8c0
			// pre processing
			for (int i=0; i<4; i++) fVec30_tmp[i]=fVec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec30[i] = fSlow50;
			}
			// post processing
			for (int i=0; i<4; i++) fVec30_perm[i]=fVec30_tmp[count+i];
			
			// LOOP 0x3320fc0
			// pre processing
			for (int i=0; i<4; i++) fVec31_tmp[i]=fVec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec31[i] = fSlow51;
			}
			// post processing
			for (int i=0; i<4; i++) fVec31_perm[i]=fVec31_tmp[count+i];
			
			// LOOP 0x3327550
			// pre processing
			for (int i=0; i<4; i++) fVec32_tmp[i]=fVec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec32[i] = fSlow52;
			}
			// post processing
			for (int i=0; i<4; i++) fVec32_perm[i]=fVec32_tmp[count+i];
			
			// LOOP 0x332cc80
			// pre processing
			for (int i=0; i<4; i++) fVec33_tmp[i]=fVec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec33[i] = fSlow53;
			}
			// post processing
			for (int i=0; i<4; i++) fVec33_perm[i]=fVec33_tmp[count+i];
			
			// LOOP 0x3332850
			// pre processing
			for (int i=0; i<4; i++) fVec34_tmp[i]=fVec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec34[i] = fSlow54;
			}
			// post processing
			for (int i=0; i<4; i++) fVec34_perm[i]=fVec34_tmp[count+i];
			
			// LOOP 0x3337b10
			// pre processing
			for (int i=0; i<4; i++) fVec35_tmp[i]=fVec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec35[i] = fSlow55;
			}
			// post processing
			for (int i=0; i<4; i++) fVec35_perm[i]=fVec35_tmp[count+i];
			
			// LOOP 0x333d9f0
			// pre processing
			for (int i=0; i<4; i++) fVec36_tmp[i]=fVec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec36[i] = fSlow56;
			}
			// post processing
			for (int i=0; i<4; i++) fVec36_perm[i]=fVec36_tmp[count+i];
			
			// LOOP 0x3343f10
			// pre processing
			for (int i=0; i<4; i++) fVec37_tmp[i]=fVec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec37[i] = fSlow57;
			}
			// post processing
			for (int i=0; i<4; i++) fVec37_perm[i]=fVec37_tmp[count+i];
			
			// LOOP 0x33494e0
			// pre processing
			for (int i=0; i<4; i++) fVec38_tmp[i]=fVec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec38[i] = fSlow58;
			}
			// post processing
			for (int i=0; i<4; i++) fVec38_perm[i]=fVec38_tmp[count+i];
			
			// LOOP 0x334fa90
			// pre processing
			for (int i=0; i<4; i++) fVec39_tmp[i]=fVec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec39[i] = fSlow59;
			}
			// post processing
			for (int i=0; i<4; i++) fVec39_perm[i]=fVec39_tmp[count+i];
			
			// LOOP 0x3355370
			// pre processing
			for (int i=0; i<4; i++) fVec40_tmp[i]=fVec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec40[i] = fSlow60;
			}
			// post processing
			for (int i=0; i<4; i++) fVec40_perm[i]=fVec40_tmp[count+i];
			
			// LOOP 0x335bff0
			// pre processing
			for (int i=0; i<4; i++) fVec41_tmp[i]=fVec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec41[i] = fSlow61;
			}
			// post processing
			for (int i=0; i<4; i++) fVec41_perm[i]=fVec41_tmp[count+i];
			
			// LOOP 0x3362c00
			// pre processing
			for (int i=0; i<4; i++) fVec42_tmp[i]=fVec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec42[i] = fSlow62;
			}
			// post processing
			for (int i=0; i<4; i++) fVec42_perm[i]=fVec42_tmp[count+i];
			
			// LOOP 0x3368810
			// pre processing
			for (int i=0; i<4; i++) fVec43_tmp[i]=fVec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec43[i] = fSlow63;
			}
			// post processing
			for (int i=0; i<4; i++) fVec43_perm[i]=fVec43_tmp[count+i];
			
			// LOOP 0x336f7d0
			// pre processing
			for (int i=0; i<4; i++) fVec44_tmp[i]=fVec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec44[i] = fSlow64;
			}
			// post processing
			for (int i=0; i<4; i++) fVec44_perm[i]=fVec44_tmp[count+i];
			
			// LOOP 0x3375a50
			// pre processing
			for (int i=0; i<4; i++) fVec45_tmp[i]=fVec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec45[i] = fSlow65;
			}
			// post processing
			for (int i=0; i<4; i++) fVec45_perm[i]=fVec45_tmp[count+i];
			
			// LOOP 0x337bc80
			// pre processing
			for (int i=0; i<4; i++) fVec46_tmp[i]=fVec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec46[i] = fSlow66;
			}
			// post processing
			for (int i=0; i<4; i++) fVec46_perm[i]=fVec46_tmp[count+i];
			
			// LOOP 0x33812a0
			// pre processing
			for (int i=0; i<4; i++) fVec47_tmp[i]=fVec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec47[i] = fSlow67;
			}
			// post processing
			for (int i=0; i<4; i++) fVec47_perm[i]=fVec47_tmp[count+i];
			
			// LOOP 0x3387790
			// exec code
			for (int i=0; i<count; i++) {
				fZec242[i] = (fSlow68 + (fVec48[i-3] + (fVec48[i-1] + fVec48[i-2])));
			}
			
			// LOOP 0x338e440
			// exec code
			for (int i=0; i<count; i++) {
				fZec243[i] = (fSlow69 + (fVec49[i-3] + (fVec49[i-1] + fVec49[i-2])));
			}
			
			// LOOP 0x3390ae0
			// pre processing
			for (int i=0; i<4; i++) fRec184_tmp[i]=fRec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec184[i] = (fConst11 * ((fRec185[i] - fRec185[i-1]) + fRec184[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec184_perm[i]=fRec184_tmp[count+i];
			
			// LOOP 0x3393e80
			// exec code
			for (int i=0; i<count; i++) {
				fZec244[i] = (fSlow70 + (fVec50[i-3] + (fVec50[i-1] + fVec50[i-2])));
			}
			
			// LOOP 0x3397920
			// pre processing
			for (int i=0; i<4; i++) fRec186_tmp[i]=fRec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec186[i] = (fConst11 * ((fRec187[i] - fRec187[i-1]) + fRec186[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec186_perm[i]=fRec186_tmp[count+i];
			
			// LOOP 0x339ac50
			// exec code
			for (int i=0; i<count; i++) {
				fZec245[i] = (fSlow71 + (fVec51[i-3] + (fVec51[i-1] + fVec51[i-2])));
			}
			
			// LOOP 0x339d690
			// pre processing
			for (int i=0; i<4; i++) fRec188_tmp[i]=fRec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec188[i] = (fConst11 * ((fRec189[i] - fRec189[i-1]) + fRec188[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec188_perm[i]=fRec188_tmp[count+i];
			
			// LOOP 0x33a09c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec246[i] = (fSlow72 + (fVec52[i-3] + (fVec52[i-1] + fVec52[i-2])));
			}
			
			// LOOP 0x33a48e0
			// pre processing
			for (int i=0; i<4; i++) fRec190_tmp[i]=fRec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec190[i] = (fConst11 * ((fRec191[i] - fRec191[i-1]) + fRec190[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec190_perm[i]=fRec190_tmp[count+i];
			
			// LOOP 0x33a7f90
			// exec code
			for (int i=0; i<count; i++) {
				fZec247[i] = (fSlow73 + (fVec53[i-3] + (fVec53[i-1] + fVec53[i-2])));
			}
			
			// LOOP 0x33ac1b0
			// pre processing
			for (int i=0; i<4; i++) fRec192_tmp[i]=fRec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec192[i] = (fConst11 * ((fRec193[i] - fRec193[i-1]) + fRec192[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec192_perm[i]=fRec192_tmp[count+i];
			
			// LOOP 0x33af4f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec248[i] = (fSlow74 + (fVec54[i-3] + (fVec54[i-1] + fVec54[i-2])));
			}
			
			// LOOP 0x33b2310
			// pre processing
			for (int i=0; i<4; i++) fRec194_tmp[i]=fRec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec194[i] = (fConst11 * ((fRec195[i] - fRec195[i-1]) + fRec194[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec194_perm[i]=fRec194_tmp[count+i];
			
			// LOOP 0x33b5660
			// exec code
			for (int i=0; i<count; i++) {
				fZec249[i] = (fSlow75 + (fVec55[i-3] + (fVec55[i-1] + fVec55[i-2])));
			}
			
			// LOOP 0x33b9d00
			// pre processing
			for (int i=0; i<4; i++) fRec196_tmp[i]=fRec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec196[i] = (fConst11 * ((fRec197[i] - fRec197[i-1]) + fRec196[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec196_perm[i]=fRec196_tmp[count+i];
			
			// LOOP 0x33bd050
			// exec code
			for (int i=0; i<count; i++) {
				fZec250[i] = (fSlow76 + (fVec56[i-3] + (fVec56[i-1] + fVec56[i-2])));
			}
			
			// LOOP 0x33c0200
			// pre processing
			for (int i=0; i<4; i++) fRec198_tmp[i]=fRec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec198[i] = (fConst11 * ((fRec199[i] - fRec199[i-1]) + fRec198[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec198_perm[i]=fRec198_tmp[count+i];
			
			// LOOP 0x33c3890
			// exec code
			for (int i=0; i<count; i++) {
				fZec251[i] = (fSlow77 + (fVec57[i-3] + (fVec57[i-1] + fVec57[i-2])));
			}
			
			// LOOP 0x33c6e40
			// pre processing
			for (int i=0; i<4; i++) fRec200_tmp[i]=fRec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec200[i] = (fConst11 * ((fRec201[i] - fRec201[i-1]) + fRec200[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec200_perm[i]=fRec200_tmp[count+i];
			
			// LOOP 0x33ca190
			// exec code
			for (int i=0; i<count; i++) {
				fZec252[i] = (fSlow78 + (fVec58[i-3] + (fVec58[i-1] + fVec58[i-2])));
			}
			
			// LOOP 0x33cc7e0
			// pre processing
			for (int i=0; i<4; i++) fRec202_tmp[i]=fRec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec202[i] = (fConst11 * ((fRec203[i] - fRec203[i-1]) + fRec202[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec202_perm[i]=fRec202_tmp[count+i];
			
			// LOOP 0x33cfb30
			// exec code
			for (int i=0; i<count; i++) {
				fZec253[i] = (fSlow79 + (fVec59[i-3] + (fVec59[i-1] + fVec59[i-2])));
			}
			
			// LOOP 0x33d3520
			// pre processing
			for (int i=0; i<4; i++) fRec204_tmp[i]=fRec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec204[i] = (fConst11 * ((fRec205[i] - fRec205[i-1]) + fRec204[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec204_perm[i]=fRec204_tmp[count+i];
			
			// LOOP 0x33d6870
			// exec code
			for (int i=0; i<count; i++) {
				fZec254[i] = (fSlow80 + (fVec60[i-3] + (fVec60[i-1] + fVec60[i-2])));
			}
			
			// LOOP 0x33da6e0
			// pre processing
			for (int i=0; i<4; i++) fRec206_tmp[i]=fRec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec206[i] = (fConst11 * ((fRec207[i] - fRec207[i-1]) + fRec206[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec206_perm[i]=fRec206_tmp[count+i];
			
			// LOOP 0x33def40
			// exec code
			for (int i=0; i<count; i++) {
				fZec258[i] = (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + fZec257[i]))));
			}
			
			// LOOP 0x33f0050
			// exec code
			for (int i=0; i<count; i++) {
				fZec263[i] = (0.5f * fYec134[i]);
			}
			
			// LOOP 0x33f6060
			// exec code
			for (int i=0; i<count; i++) {
				fZec264[i] = (0.5f * fYec136[i]);
			}
			
			// LOOP 0x33fb830
			// exec code
			for (int i=0; i<count; i++) {
				fZec265[i] = (0.5f * fYec138[i]);
			}
			
			// LOOP 0x3400fa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec266[i] = (0.5f * fYec140[i]);
			}
			
			// LOOP 0x3406810
			// exec code
			for (int i=0; i<count; i++) {
				fZec267[i] = (0.5f * fYec142[i]);
			}
			
			// LOOP 0x340c040
			// exec code
			for (int i=0; i<count; i++) {
				fZec268[i] = (0.5f * fYec144[i]);
			}
			
			// LOOP 0x3411910
			// exec code
			for (int i=0; i<count; i++) {
				fZec269[i] = (0.5f * fYec146[i]);
			}
			
			// LOOP 0x3417100
			// exec code
			for (int i=0; i<count; i++) {
				fZec270[i] = (0.5f * fYec148[i]);
			}
			
			// LOOP 0x341cb00
			// exec code
			for (int i=0; i<count; i++) {
				fZec271[i] = (0.5f * fYec150[i]);
			}
			
			// LOOP 0x3422470
			// exec code
			for (int i=0; i<count; i++) {
				fZec272[i] = (0.5f * fYec152[i]);
			}
			
			// LOOP 0x3427e00
			// exec code
			for (int i=0; i<count; i++) {
				fZec273[i] = (0.5f * fYec154[i]);
			}
			
			// LOOP 0x342d7e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec274[i] = (0.5f * fYec156[i]);
			}
			
			// LOOP 0x346b9f0
			// pre processing
			for (int i=0; i<4; i++) fRec245_tmp[i]=fRec245_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec245[i] = (fConst11 * ((fRec246[i] - fRec246[i-1]) + fRec245[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec245_perm[i]=fRec245_tmp[count+i];
			
			// LOOP 0x3470530
			// pre processing
			for (int i=0; i<4; i++) fRec247_tmp[i]=fRec247_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec247[i] = (fConst11 * ((fRec248[i] - fRec248[i-1]) + fRec247[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec247_perm[i]=fRec247_tmp[count+i];
			
			// LOOP 0x3474220
			// pre processing
			for (int i=0; i<4; i++) fRec249_tmp[i]=fRec249_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec249[i] = (fConst11 * ((fRec250[i] - fRec250[i-1]) + fRec249[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec249_perm[i]=fRec249_tmp[count+i];
			
			// LOOP 0x3477f50
			// pre processing
			for (int i=0; i<4; i++) fRec251_tmp[i]=fRec251_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec251[i] = (fConst11 * ((fRec252[i] - fRec252[i-1]) + fRec251[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec251_perm[i]=fRec251_tmp[count+i];
			
			// LOOP 0x347c030
			// pre processing
			for (int i=0; i<4; i++) fRec253_tmp[i]=fRec253_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec253[i] = (fConst11 * ((fRec254[i] - fRec254[i-1]) + fRec253[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec253_perm[i]=fRec253_tmp[count+i];
			
			// LOOP 0x347fdd0
			// pre processing
			for (int i=0; i<4; i++) fRec255_tmp[i]=fRec255_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec255[i] = (fConst11 * ((fRec256[i] - fRec256[i-1]) + fRec255[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec255_perm[i]=fRec255_tmp[count+i];
			
			// LOOP 0x3483bc0
			// pre processing
			for (int i=0; i<4; i++) fRec257_tmp[i]=fRec257_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec257[i] = (fConst11 * ((fRec258[i] - fRec258[i-1]) + fRec257[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec257_perm[i]=fRec257_tmp[count+i];
			
			// LOOP 0x34879f0
			// pre processing
			for (int i=0; i<4; i++) fRec259_tmp[i]=fRec259_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec259[i] = (fConst11 * ((fRec260[i] - fRec260[i-1]) + fRec259[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec259_perm[i]=fRec259_tmp[count+i];
			
			// LOOP 0x348bb90
			// pre processing
			for (int i=0; i<4; i++) fRec261_tmp[i]=fRec261_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec261[i] = (fConst11 * ((fRec262[i] - fRec262[i-1]) + fRec261[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec261_perm[i]=fRec261_tmp[count+i];
			
			// LOOP 0x348fa30
			// pre processing
			for (int i=0; i<4; i++) fRec263_tmp[i]=fRec263_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec263[i] = (fConst11 * ((fRec264[i] - fRec264[i-1]) + fRec263[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec263_perm[i]=fRec263_tmp[count+i];
			
			// LOOP 0x3493910
			// pre processing
			for (int i=0; i<4; i++) fRec265_tmp[i]=fRec265_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec265[i] = (fConst11 * ((fRec266[i] - fRec266[i-1]) + fRec265[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec265_perm[i]=fRec265_tmp[count+i];
			
			// LOOP 0x3497940
			// pre processing
			for (int i=0; i<4; i++) fRec267_tmp[i]=fRec267_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec267[i] = (fConst11 * (((1.95f * fYec171[i]) - (1.95f * fYec171[i-1])) + fRec267[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec267_perm[i]=fRec267_tmp[count+i];
			
			// LOOP 0x34b8090
			// pre processing
			for (int i=0; i<4; i++) fRec270_tmp[i]=fRec270_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec270[i] = (fConst11 * (((1.95f * fYec173[i]) - (1.95f * fYec173[i-1])) + fRec270[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec270_perm[i]=fRec270_tmp[count+i];
			
			// LOOP 0x34c0210
			// pre processing
			for (int i=0; i<4; i++) fRec271_tmp[i]=fRec271_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec271[i] = (fConst11 * (((1.95f * fYec175[i]) - (1.95f * fYec175[i-1])) + fRec271[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec271_perm[i]=fRec271_tmp[count+i];
			
			// LOOP 0x34c7650
			// pre processing
			for (int i=0; i<4; i++) fRec272_tmp[i]=fRec272_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec272[i] = (fConst11 * (((1.95f * fYec177[i]) - (1.95f * fYec177[i-1])) + fRec272[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec272_perm[i]=fRec272_tmp[count+i];
			
			// LOOP 0x34cad40
			// pre processing
			for (int i=0; i<4; i++) fRec273_tmp[i]=fRec273_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec273[i] = (fConst11 * (((1.95f * fYec179[i]) - (1.95f * fYec179[i-1])) + fRec273[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec273_perm[i]=fRec273_tmp[count+i];
			
			// LOOP 0x34ce480
			// pre processing
			for (int i=0; i<4; i++) fRec274_tmp[i]=fRec274_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec274[i] = (fConst11 * (((1.95f * fYec181[i]) - (1.95f * fYec181[i-1])) + fRec274[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec274_perm[i]=fRec274_tmp[count+i];
			
			// LOOP 0x34d1c00
			// pre processing
			for (int i=0; i<4; i++) fRec275_tmp[i]=fRec275_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec275[i] = (fConst11 * (((1.95f * fYec183[i]) - (1.95f * fYec183[i-1])) + fRec275[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec275_perm[i]=fRec275_tmp[count+i];
			
			// LOOP 0x34d53c0
			// pre processing
			for (int i=0; i<4; i++) fRec276_tmp[i]=fRec276_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec276[i] = (fConst11 * (((1.95f * fYec185[i]) - (1.95f * fYec185[i-1])) + fRec276[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec276_perm[i]=fRec276_tmp[count+i];
			
			// LOOP 0x3503730
			// pre processing
			for (int i=0; i<4; i++) fRec278_tmp[i]=fRec278_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec278[i] = (fConst11 * (((1.95f * fYec188[i]) - (1.95f * fYec188[i-1])) + fRec278[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec278_perm[i]=fRec278_tmp[count+i];
			
			// LOOP 0x350b970
			// pre processing
			for (int i=0; i<4; i++) fRec279_tmp[i]=fRec279_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec279[i] = (fConst11 * (((1.95f * fYec190[i]) - (1.95f * fYec190[i-1])) + fRec279[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec279_perm[i]=fRec279_tmp[count+i];
			
			// LOOP 0x350f3a0
			// pre processing
			for (int i=0; i<4; i++) fRec280_tmp[i]=fRec280_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec280[i] = (fConst11 * (((1.95f * fYec192[i]) - (1.95f * fYec192[i-1])) + fRec280[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec280_perm[i]=fRec280_tmp[count+i];
			
			// LOOP 0x3512e50
			// pre processing
			for (int i=0; i<4; i++) fRec281_tmp[i]=fRec281_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec281[i] = (fConst11 * (((1.95f * fYec194[i]) - (1.95f * fYec194[i-1])) + fRec281[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec281_perm[i]=fRec281_tmp[count+i];
			
			// SECTION : 26
			// LOOP 0x31a4340
			// exec code
			for (int i=0; i<count; i++) {
				fZec0[i] = (fSlow2 + (fVec0[i-3] + (fVec0[i-1] + fVec0[i-2])));
			}
			
			// LOOP 0x31a6350
			// pre processing
			for (int i=0; i<4; i++) fYec6_tmp[i]=fYec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec6[i] = ((fZec14[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec6_perm[i]=fYec6_tmp[count+i];
			
			// LOOP 0x31bf560
			// exec code
			for (int i=0; i<count; i++) {
				fZec18[i] = (fSlow8 + (fVec1[i-3] + (fVec1[i-1] + fVec1[i-2])));
			}
			
			// LOOP 0x31c17c0
			// pre processing
			for (int i=0; i<4; i++) fYec13_tmp[i]=fYec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec13[i] = ((fZec31[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec13_perm[i]=fYec13_tmp[count+i];
			
			// LOOP 0x31d5870
			// exec code
			for (int i=0; i<count; i++) {
				fZec35[i] = (fSlow10 + (fVec2[i-3] + (fVec2[i-1] + fVec2[i-2])));
			}
			
			// LOOP 0x31d7d50
			// pre processing
			for (int i=0; i<4; i++) fYec20_tmp[i]=fYec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec20[i] = ((fZec48[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec20_perm[i]=fYec20_tmp[count+i];
			
			// LOOP 0x31ebe10
			// exec code
			for (int i=0; i<count; i++) {
				fZec52[i] = (fSlow12 + (fVec3[i-3] + (fVec3[i-1] + fVec3[i-2])));
			}
			
			// LOOP 0x31ee1b0
			// pre processing
			for (int i=0; i<4; i++) fYec27_tmp[i]=fYec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec27[i] = ((fZec65[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec27_perm[i]=fYec27_tmp[count+i];
			
			// LOOP 0x3202360
			// exec code
			for (int i=0; i<count; i++) {
				fZec69[i] = (fSlow14 + (fVec4[i-3] + (fVec4[i-1] + fVec4[i-2])));
			}
			
			// LOOP 0x32048f0
			// pre processing
			for (int i=0; i<4; i++) fYec34_tmp[i]=fYec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec34[i] = ((fZec82[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec34_perm[i]=fYec34_tmp[count+i];
			
			// LOOP 0x3218da0
			// exec code
			for (int i=0; i<count; i++) {
				fZec86[i] = (fSlow16 + (fVec5[i-3] + (fVec5[i-1] + fVec5[i-2])));
			}
			
			// LOOP 0x321b430
			// pre processing
			for (int i=0; i<4; i++) fYec41_tmp[i]=fYec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec41[i] = ((fZec99[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec41_perm[i]=fYec41_tmp[count+i];
			
			// LOOP 0x322f650
			// exec code
			for (int i=0; i<count; i++) {
				fZec103[i] = (fSlow18 + (fVec6[i-3] + (fVec6[i-1] + fVec6[i-2])));
			}
			
			// LOOP 0x3231a40
			// pre processing
			for (int i=0; i<4; i++) fYec48_tmp[i]=fYec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec48[i] = ((fZec116[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec48_perm[i]=fYec48_tmp[count+i];
			
			// LOOP 0x3245cb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec120[i] = (fSlow20 + (fVec7[i-3] + (fVec7[i-1] + fVec7[i-2])));
			}
			
			// LOOP 0x3248460
			// pre processing
			for (int i=0; i<4; i++) fYec55_tmp[i]=fYec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec55[i] = ((fZec133[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec55_perm[i]=fYec55_tmp[count+i];
			
			// LOOP 0x325c730
			// exec code
			for (int i=0; i<count; i++) {
				fZec137[i] = (fSlow22 + (fVec8[i-3] + (fVec8[i-1] + fVec8[i-2])));
			}
			
			// LOOP 0x325eb90
			// pre processing
			for (int i=0; i<4; i++) fYec62_tmp[i]=fYec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec62[i] = ((fZec150[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec62_perm[i]=fYec62_tmp[count+i];
			
			// LOOP 0x3273220
			// exec code
			for (int i=0; i<count; i++) {
				fZec154[i] = (fSlow24 + (fVec9[i-3] + (fVec9[i-1] + fVec9[i-2])));
			}
			
			// LOOP 0x32757b0
			// pre processing
			for (int i=0; i<4; i++) fYec69_tmp[i]=fYec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec69[i] = ((fZec167[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec69_perm[i]=fYec69_tmp[count+i];
			
			// LOOP 0x3289ad0
			// exec code
			for (int i=0; i<count; i++) {
				fZec171[i] = (fSlow26 + (fVec10[i-3] + (fVec10[i-1] + fVec10[i-2])));
			}
			
			// LOOP 0x328bd00
			// pre processing
			for (int i=0; i<4; i++) fYec76_tmp[i]=fYec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec76[i] = ((fZec184[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec76_perm[i]=fYec76_tmp[count+i];
			
			// LOOP 0x32a0150
			// exec code
			for (int i=0; i<count; i++) {
				fZec188[i] = (fSlow28 + (fVec11[i-3] + (fVec11[i-1] + fVec11[i-2])));
			}
			
			// LOOP 0x32a28a0
			// pre processing
			for (int i=0; i<4; i++) fYec83_tmp[i]=fYec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec83[i] = ((fZec201[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec83_perm[i]=fYec83_tmp[count+i];
			
			// LOOP 0x32b6cb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec205[i] = (fSlow30 + (fVec12[i-3] + (fVec12[i-1] + fVec12[i-2])));
			}
			
			// LOOP 0x32b9520
			// pre processing
			for (int i=0; i<4; i++) fYec84_tmp[i]=fYec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec84[i] = ((fZec12[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec84_perm[i]=fYec84_tmp[count+i];
			
			// LOOP 0x32bc2f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec206[i] = (fSlow31 + (fVec13[i-3] + (fVec13[i-1] + fVec13[i-2])));
			}
			
			// LOOP 0x32beac0
			// pre processing
			for (int i=0; i<4; i++) fYec85_tmp[i]=fYec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec85[i] = ((fZec29[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec85_perm[i]=fYec85_tmp[count+i];
			
			// LOOP 0x32c13c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec207[i] = (fSlow32 + (fVec14[i-3] + (fVec14[i-1] + fVec14[i-2])));
			}
			
			// LOOP 0x32c4240
			// pre processing
			for (int i=0; i<4; i++) fYec86_tmp[i]=fYec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec86[i] = ((fZec46[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec86_perm[i]=fYec86_tmp[count+i];
			
			// LOOP 0x32c6b40
			// exec code
			for (int i=0; i<count; i++) {
				fZec208[i] = (fSlow33 + (fVec15[i-3] + (fVec15[i-1] + fVec15[i-2])));
			}
			
			// LOOP 0x32c9500
			// pre processing
			for (int i=0; i<4; i++) fYec87_tmp[i]=fYec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec87[i] = ((fZec63[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec87_perm[i]=fYec87_tmp[count+i];
			
			// LOOP 0x32cbe00
			// exec code
			for (int i=0; i<count; i++) {
				fZec209[i] = (fSlow34 + (fVec16[i-3] + (fVec16[i-1] + fVec16[i-2])));
			}
			
			// LOOP 0x32cef00
			// pre processing
			for (int i=0; i<4; i++) fYec88_tmp[i]=fYec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec88[i] = ((fZec80[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec88_perm[i]=fYec88_tmp[count+i];
			
			// LOOP 0x32d3330
			// exec code
			for (int i=0; i<count; i++) {
				fZec211[i] = (fSlow37 + (fVec17[i-3] + (fVec17[i-1] + fVec17[i-2])));
			}
			
			// LOOP 0x32d8bc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec212[i] = (fSlow38 + (fVec18[i-3] + (fVec18[i-1] + fVec18[i-2])));
			}
			
			// LOOP 0x32ddd60
			// exec code
			for (int i=0; i<count; i++) {
				fZec213[i] = (fSlow39 + (fVec19[i-3] + (fVec19[i-1] + fVec19[i-2])));
			}
			
			// LOOP 0x32e3900
			// exec code
			for (int i=0; i<count; i++) {
				fZec214[i] = (fSlow40 + (fVec20[i-3] + (fVec20[i-1] + fVec20[i-2])));
			}
			
			// LOOP 0x32e8f10
			// exec code
			for (int i=0; i<count; i++) {
				fZec215[i] = (fSlow41 + (fVec21[i-3] + (fVec21[i-1] + fVec21[i-2])));
			}
			
			// LOOP 0x32ee460
			// exec code
			for (int i=0; i<count; i++) {
				fZec216[i] = (fSlow42 + (fVec22[i-3] + (fVec22[i-1] + fVec22[i-2])));
			}
			
			// LOOP 0x32f3430
			// exec code
			for (int i=0; i<count; i++) {
				fZec217[i] = (fSlow43 + (fVec23[i-3] + (fVec23[i-1] + fVec23[i-2])));
			}
			
			// LOOP 0x32f8bf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec218[i] = (fSlow44 + (fVec24[i-3] + (fVec24[i-1] + fVec24[i-2])));
			}
			
			// LOOP 0x32fef10
			// exec code
			for (int i=0; i<count; i++) {
				fZec219[i] = (fSlow45 + (fVec25[i-3] + (fVec25[i-1] + fVec25[i-2])));
			}
			
			// LOOP 0x33040d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec220[i] = (fSlow46 + (fVec26[i-3] + (fVec26[i-1] + fVec26[i-2])));
			}
			
			// LOOP 0x3309e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec221[i] = (fSlow47 + (fVec27[i-3] + (fVec27[i-1] + fVec27[i-2])));
			}
			
			// LOOP 0x330edb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec222[i] = (fSlow48 + (fVec28[i-3] + (fVec28[i-1] + fVec28[i-2])));
			}
			
			// LOOP 0x33151e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec223[i] = (fSlow49 + (fVec29[i-3] + (fVec29[i-1] + fVec29[i-2])));
			}
			
			// LOOP 0x331b420
			// exec code
			for (int i=0; i<count; i++) {
				fZec224[i] = (fSlow50 + (fVec30[i-3] + (fVec30[i-1] + fVec30[i-2])));
			}
			
			// LOOP 0x3320ac0
			// exec code
			for (int i=0; i<count; i++) {
				fZec225[i] = (fSlow51 + (fVec31[i-3] + (fVec31[i-1] + fVec31[i-2])));
			}
			
			// LOOP 0x3327000
			// exec code
			for (int i=0; i<count; i++) {
				fZec226[i] = (fSlow52 + (fVec32[i-3] + (fVec32[i-1] + fVec32[i-2])));
			}
			
			// LOOP 0x332cb70
			// exec code
			for (int i=0; i<count; i++) {
				fZec227[i] = (fSlow53 + (fVec33[i-3] + (fVec33[i-1] + fVec33[i-2])));
			}
			
			// LOOP 0x3332740
			// exec code
			for (int i=0; i<count; i++) {
				fZec228[i] = (fSlow54 + (fVec34[i-3] + (fVec34[i-1] + fVec34[i-2])));
			}
			
			// LOOP 0x3337a00
			// exec code
			for (int i=0; i<count; i++) {
				fZec229[i] = (fSlow55 + (fVec35[i-3] + (fVec35[i-1] + fVec35[i-2])));
			}
			
			// LOOP 0x333d8e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec230[i] = (fSlow56 + (fVec36[i-3] + (fVec36[i-1] + fVec36[i-2])));
			}
			
			// LOOP 0x3343e00
			// exec code
			for (int i=0; i<count; i++) {
				fZec231[i] = (fSlow57 + (fVec37[i-3] + (fVec37[i-1] + fVec37[i-2])));
			}
			
			// LOOP 0x33493d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec232[i] = (fSlow58 + (fVec38[i-3] + (fVec38[i-1] + fVec38[i-2])));
			}
			
			// LOOP 0x334f980
			// exec code
			for (int i=0; i<count; i++) {
				fZec233[i] = (fSlow59 + (fVec39[i-3] + (fVec39[i-1] + fVec39[i-2])));
			}
			
			// LOOP 0x3355260
			// exec code
			for (int i=0; i<count; i++) {
				fZec234[i] = (fSlow60 + (fVec40[i-3] + (fVec40[i-1] + fVec40[i-2])));
			}
			
			// LOOP 0x335bee0
			// exec code
			for (int i=0; i<count; i++) {
				fZec235[i] = (fSlow61 + (fVec41[i-3] + (fVec41[i-1] + fVec41[i-2])));
			}
			
			// LOOP 0x3362af0
			// exec code
			for (int i=0; i<count; i++) {
				fZec236[i] = (fSlow62 + (fVec42[i-3] + (fVec42[i-1] + fVec42[i-2])));
			}
			
			// LOOP 0x3368700
			// exec code
			for (int i=0; i<count; i++) {
				fZec237[i] = (fSlow63 + (fVec43[i-3] + (fVec43[i-1] + fVec43[i-2])));
			}
			
			// LOOP 0x336f6c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec238[i] = (fSlow64 + (fVec44[i-3] + (fVec44[i-1] + fVec44[i-2])));
			}
			
			// LOOP 0x3375940
			// exec code
			for (int i=0; i<count; i++) {
				fZec239[i] = (fSlow65 + (fVec45[i-3] + (fVec45[i-1] + fVec45[i-2])));
			}
			
			// LOOP 0x337bb70
			// exec code
			for (int i=0; i<count; i++) {
				fZec240[i] = (fSlow66 + (fVec46[i-3] + (fVec46[i-1] + fVec46[i-2])));
			}
			
			// LOOP 0x3381190
			// exec code
			for (int i=0; i<count; i++) {
				fZec241[i] = (fSlow67 + (fVec47[i-3] + (fVec47[i-1] + fVec47[i-2])));
			}
			
			// LOOP 0x33dee30
			// exec code
			for (int i=0; i<count; i++) {
				fZec259[i] = (fRec190[i] + (fRec188[i] + (fRec186[i] + (fRec184[i] + fZec258[i]))));
			}
			
			// LOOP 0x33efee0
			// pre processing
			for (int i=0; i<4; i++) fYec135_tmp[i]=fYec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec135[i] = ((fZec263[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec135_perm[i]=fYec135_tmp[count+i];
			
			// LOOP 0x33f5f50
			// pre processing
			for (int i=0; i<4; i++) fYec137_tmp[i]=fYec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec137[i] = ((fZec264[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec137_perm[i]=fYec137_tmp[count+i];
			
			// LOOP 0x33fb6c0
			// pre processing
			for (int i=0; i<4; i++) fYec139_tmp[i]=fYec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec139[i] = ((fZec265[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec139_perm[i]=fYec139_tmp[count+i];
			
			// LOOP 0x3400e30
			// pre processing
			for (int i=0; i<4; i++) fYec141_tmp[i]=fYec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec141[i] = ((fZec266[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec141_perm[i]=fYec141_tmp[count+i];
			
			// LOOP 0x34066a0
			// pre processing
			for (int i=0; i<4; i++) fYec143_tmp[i]=fYec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec143[i] = ((fZec267[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec143_perm[i]=fYec143_tmp[count+i];
			
			// LOOP 0x340bed0
			// pre processing
			for (int i=0; i<4; i++) fYec145_tmp[i]=fYec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec145[i] = ((fZec268[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec145_perm[i]=fYec145_tmp[count+i];
			
			// LOOP 0x34117a0
			// pre processing
			for (int i=0; i<4; i++) fYec147_tmp[i]=fYec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec147[i] = ((fZec269[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec147_perm[i]=fYec147_tmp[count+i];
			
			// LOOP 0x3416ff0
			// pre processing
			for (int i=0; i<4; i++) fYec149_tmp[i]=fYec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec149[i] = ((fZec270[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec149_perm[i]=fYec149_tmp[count+i];
			
			// LOOP 0x341c990
			// pre processing
			for (int i=0; i<4; i++) fYec151_tmp[i]=fYec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec151[i] = ((fZec271[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec151_perm[i]=fYec151_tmp[count+i];
			
			// LOOP 0x3422300
			// pre processing
			for (int i=0; i<4; i++) fYec153_tmp[i]=fYec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec153[i] = ((fZec272[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec153_perm[i]=fYec153_tmp[count+i];
			
			// LOOP 0x3427c90
			// pre processing
			for (int i=0; i<4; i++) fYec155_tmp[i]=fYec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec155[i] = ((fZec273[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec155_perm[i]=fYec155_tmp[count+i];
			
			// LOOP 0x342d670
			// pre processing
			for (int i=0; i<4; i++) fYec157_tmp[i]=fYec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec157[i] = ((fZec274[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec157_perm[i]=fYec157_tmp[count+i];
			
			// LOOP 0x3497830
			// exec code
			for (int i=0; i<count; i++) {
				fZec280[i] = (fRec267[i] * fZec254[i]);
			}
			
			// LOOP 0x34f8bd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec286[i] = (fRec267[i] * fZec242[i]);
			}
			
			// LOOP 0x34fa650
			// exec code
			for (int i=0; i<count; i++) {
				fZec287[i] = (fRec270[i] * fZec243[i]);
			}
			
			// LOOP 0x34fb680
			// exec code
			for (int i=0; i<count; i++) {
				fZec288[i] = (fRec271[i] * fZec244[i]);
			}
			
			// LOOP 0x34fc740
			// exec code
			for (int i=0; i<count; i++) {
				fZec289[i] = (fRec272[i] * fZec245[i]);
			}
			
			// LOOP 0x34fe340
			// exec code
			for (int i=0; i<count; i++) {
				fZec290[i] = (fRec273[i] * fZec246[i]);
			}
			
			// LOOP 0x34ff420
			// exec code
			for (int i=0; i<count; i++) {
				fZec291[i] = (fRec274[i] * fZec247[i]);
			}
			
			// LOOP 0x35005e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec292[i] = (fRec275[i] * fZec248[i]);
			}
			
			// LOOP 0x35017d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec293[i] = (fRec276[i] * fZec249[i]);
			}
			
			// LOOP 0x35029f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec294[i] = (fRec278[i] * fZec250[i]);
			}
			
			// LOOP 0x350b860
			// exec code
			for (int i=0; i<count; i++) {
				fZec295[i] = (fRec279[i] * fZec251[i]);
			}
			
			// LOOP 0x350f290
			// exec code
			for (int i=0; i<count; i++) {
				fZec296[i] = (fRec280[i] * fZec252[i]);
			}
			
			// LOOP 0x3512d40
			// exec code
			for (int i=0; i<count; i++) {
				fZec297[i] = (fRec281[i] * fZec253[i]);
			}
			
			// LOOP 0x354cf80
			// exec code
			for (int i=0; i<count; i++) {
				fZec302[i] = (0.5f * fRec192[i]);
			}
			
			// LOOP 0x354f240
			// exec code
			for (int i=0; i<count; i++) {
				fZec303[i] = (0.5f * fRec194[i]);
			}
			
			// LOOP 0x3550750
			// exec code
			for (int i=0; i<count; i++) {
				fZec304[i] = (0.5f * fRec196[i]);
			}
			
			// LOOP 0x3551d80
			// exec code
			for (int i=0; i<count; i++) {
				fZec305[i] = (0.5f * fRec198[i]);
			}
			
			// LOOP 0x3554120
			// exec code
			for (int i=0; i<count; i++) {
				fZec306[i] = (0.5f * fRec200[i]);
			}
			
			// LOOP 0x3555860
			// exec code
			for (int i=0; i<count; i++) {
				fZec307[i] = (0.5f * fRec202[i]);
			}
			
			// LOOP 0x3556f20
			// exec code
			for (int i=0; i<count; i++) {
				fZec308[i] = (0.5f * fRec204[i]);
			}
			
			// LOOP 0x35586b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec309[i] = (0.5f * fRec206[i]);
			}
			
			// LOOP 0x3558ca0
			// exec code
			for (int i=0; i<count; i++) {
				fZec310[i] = (0.5f * fRec245[i]);
			}
			
			// LOOP 0x35595c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec311[i] = (0.5f * fRec247[i]);
			}
			
			// LOOP 0x355b150
			// exec code
			for (int i=0; i<count; i++) {
				fZec312[i] = (0.5f * fRec249[i]);
			}
			
			// LOOP 0x355bac0
			// exec code
			for (int i=0; i<count; i++) {
				fZec313[i] = (0.5f * fRec251[i]);
			}
			
			// LOOP 0x355c460
			// exec code
			for (int i=0; i<count; i++) {
				fZec314[i] = (0.5f * fRec253[i]);
			}
			
			// LOOP 0x355ce20
			// exec code
			for (int i=0; i<count; i++) {
				fZec315[i] = (0.5f * fRec255[i]);
			}
			
			// LOOP 0x355d3b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec316[i] = (0.5f * fRec257[i]);
			}
			
			// LOOP 0x355dd80
			// exec code
			for (int i=0; i<count; i++) {
				fZec317[i] = (0.5f * fRec259[i]);
			}
			
			// LOOP 0x355e780
			// exec code
			for (int i=0; i<count; i++) {
				fZec318[i] = (0.5f * fRec261[i]);
			}
			
			// LOOP 0x355f190
			// exec code
			for (int i=0; i<count; i++) {
				fZec319[i] = (0.5f * fRec263[i]);
			}
			
			// LOOP 0x355fbc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec320[i] = (0.5f * fRec265[i]);
			}
			
			// LOOP 0x3560650
			// exec code
			for (int i=0; i<count; i++) {
				fZec321[i] = (0.5f * fRec271[i]);
			}
			
			// LOOP 0x35619b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec322[i] = (0.5f * fRec272[i]);
			}
			
			// LOOP 0x3562470
			// exec code
			for (int i=0; i<count; i++) {
				fZec323[i] = (0.5f * fRec273[i]);
			}
			
			// LOOP 0x3562f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec324[i] = (0.5f * fRec274[i]);
			}
			
			// LOOP 0x3563ab0
			// exec code
			for (int i=0; i<count; i++) {
				fZec325[i] = (0.5f * fRec275[i]);
			}
			
			// LOOP 0x3564580
			// exec code
			for (int i=0; i<count; i++) {
				fZec326[i] = (0.5f * fRec276[i]);
			}
			
			// LOOP 0x3565060
			// exec code
			for (int i=0; i<count; i++) {
				fZec327[i] = (0.5f * fRec278[i]);
			}
			
			// LOOP 0x3565c40
			// exec code
			for (int i=0; i<count; i++) {
				fZec328[i] = (0.5f * fRec279[i]);
			}
			
			// LOOP 0x3566750
			// exec code
			for (int i=0; i<count; i++) {
				fZec329[i] = (0.5f * fRec280[i]);
			}
			
			// LOOP 0x3567380
			// exec code
			for (int i=0; i<count; i++) {
				fZec330[i] = (0.5f * fRec281[i]);
			}
			
			// SECTION : 27
			// LOOP 0x31a5ee0
			// pre processing
			for (int i=0; i<4; i++) fRec2_tmp[i]=fRec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec2[i] = (fRec2[i-1] + (fConst2 * ((square_polyblep_precalc(fZec14[i], fZec15[i], (0.5f * fYec5[i-2]), fZec17[i]) + (2 * fYec6[i-1])) - fRec2[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec2_perm[i]=fRec2_tmp[count+i];
			
			// LOOP 0x31c1270
			// pre processing
			for (int i=0; i<4; i++) fRec12_tmp[i]=fRec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec12[i] = (fRec12[i-1] + (fConst2 * ((square_polyblep_precalc(fZec31[i], fZec32[i], (0.5f * fYec12[i-2]), fZec34[i]) + (2 * fYec13[i-1])) - fRec12[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec12_perm[i]=fRec12_tmp[count+i];
			
			// LOOP 0x31d7800
			// pre processing
			for (int i=0; i<4; i++) fRec21_tmp[i]=fRec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec21[i] = (fRec21[i-1] + (fConst2 * ((square_polyblep_precalc(fZec48[i], fZec49[i], (0.5f * fYec19[i-2]), fZec51[i]) + (2 * fYec20[i-1])) - fRec21[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec21_perm[i]=fRec21_tmp[count+i];
			
			// LOOP 0x31edc60
			// pre processing
			for (int i=0; i<4; i++) fRec30_tmp[i]=fRec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec30[i] = (fRec30[i-1] + (fConst2 * ((square_polyblep_precalc(fZec65[i], fZec66[i], (0.5f * fYec26[i-2]), fZec68[i]) + (2 * fYec27[i-1])) - fRec30[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec30_perm[i]=fRec30_tmp[count+i];
			
			// LOOP 0x32043a0
			// pre processing
			for (int i=0; i<4; i++) fRec39_tmp[i]=fRec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec39[i] = (fRec39[i-1] + (fConst5 * ((square_polyblep_precalc(fZec82[i], fZec83[i], (0.5f * fYec33[i-2]), fZec85[i]) + (2 * fYec34[i-1])) - fRec39[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec39_perm[i]=fRec39_tmp[count+i];
			
			// LOOP 0x321aee0
			// pre processing
			for (int i=0; i<4; i++) fRec48_tmp[i]=fRec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec48[i] = (fRec48[i-1] + (fConst5 * ((square_polyblep_precalc(fZec99[i], fZec100[i], (0.5f * fYec40[i-2]), fZec102[i]) + (2 * fYec41[i-1])) - fRec48[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec48_perm[i]=fRec48_tmp[count+i];
			
			// LOOP 0x32314f0
			// pre processing
			for (int i=0; i<4; i++) fRec57_tmp[i]=fRec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec57[i] = (fRec57[i-1] + (fConst5 * ((square_polyblep_precalc(fZec116[i], fZec117[i], (0.5f * fYec47[i-2]), fZec119[i]) + (2 * fYec48[i-1])) - fRec57[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec57_perm[i]=fRec57_tmp[count+i];
			
			// LOOP 0x3247f10
			// pre processing
			for (int i=0; i<4; i++) fRec66_tmp[i]=fRec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec66[i] = (fRec66[i-1] + (fConst5 * ((square_polyblep_precalc(fZec133[i], fZec134[i], (0.5f * fYec54[i-2]), fZec136[i]) + (2 * fYec55[i-1])) - fRec66[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec66_perm[i]=fRec66_tmp[count+i];
			
			// LOOP 0x325e640
			// pre processing
			for (int i=0; i<4; i++) fRec75_tmp[i]=fRec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec75[i] = (fRec75[i-1] + (fConst6 * ((square_polyblep_precalc(fZec150[i], fZec151[i], (0.5f * fYec61[i-2]), fZec153[i]) + (2 * fYec62[i-1])) - fRec75[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec75_perm[i]=fRec75_tmp[count+i];
			
			// LOOP 0x3275260
			// pre processing
			for (int i=0; i<4; i++) fRec84_tmp[i]=fRec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec84[i] = (fRec84[i-1] + (fConst6 * ((square_polyblep_precalc(fZec167[i], fZec168[i], (0.5f * fYec68[i-2]), fZec170[i]) + (2 * fYec69[i-1])) - fRec84[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec84_perm[i]=fRec84_tmp[count+i];
			
			// LOOP 0x328b7b0
			// pre processing
			for (int i=0; i<4; i++) fRec93_tmp[i]=fRec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec93[i] = (fRec93[i-1] + (fConst6 * ((square_polyblep_precalc(fZec184[i], fZec185[i], (0.5f * fYec75[i-2]), fZec187[i]) + (2 * fYec76[i-1])) - fRec93[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec93_perm[i]=fRec93_tmp[count+i];
			
			// LOOP 0x32a2350
			// pre processing
			for (int i=0; i<4; i++) fRec102_tmp[i]=fRec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec102[i] = (fRec102[i-1] + (fConst6 * ((square_polyblep_precalc(fZec201[i], fZec202[i], (0.5f * fYec82[i-2]), fZec204[i]) + (2 * fYec83[i-1])) - fRec102[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec102_perm[i]=fRec102_tmp[count+i];
			
			// LOOP 0x32b8fd0
			// pre processing
			for (int i=0; i<4; i++) fRec111_tmp[i]=fRec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec111[i] = (fRec111[i-1] + (fConst6 * ((square_polyblep_precalc(fZec12[i], fZec13[i], (0.5f * fYec4[i-2]), fZec17[i]) + (2 * fYec84[i-1])) - fRec111[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec111_perm[i]=fRec111_tmp[count+i];
			
			// LOOP 0x32be570
			// pre processing
			for (int i=0; i<4; i++) fRec113_tmp[i]=fRec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec113[i] = (fRec113[i-1] + (fConst6 * ((square_polyblep_precalc(fZec29[i], fZec30[i], (0.5f * fYec11[i-2]), fZec34[i]) + (2 * fYec85[i-1])) - fRec113[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec113_perm[i]=fRec113_tmp[count+i];
			
			// LOOP 0x32c3cf0
			// pre processing
			for (int i=0; i<4; i++) fRec115_tmp[i]=fRec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec115[i] = (fRec115[i-1] + (fConst6 * ((square_polyblep_precalc(fZec46[i], fZec47[i], (0.5f * fYec18[i-2]), fZec51[i]) + (2 * fYec86[i-1])) - fRec115[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec115_perm[i]=fRec115_tmp[count+i];
			
			// LOOP 0x32c8fb0
			// pre processing
			for (int i=0; i<4; i++) fRec117_tmp[i]=fRec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec117[i] = (fRec117[i-1] + (fConst6 * ((square_polyblep_precalc(fZec63[i], fZec64[i], (0.5f * fYec25[i-2]), fZec68[i]) + (2 * fYec87[i-1])) - fRec117[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec117_perm[i]=fRec117_tmp[count+i];
			
			// LOOP 0x32ce9b0
			// pre processing
			for (int i=0; i<4; i++) fRec119_tmp[i]=fRec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec119[i] = (fRec119[i-1] + (fConst8 * ((square_polyblep_precalc(fZec80[i], fZec81[i], (0.5f * fYec32[i-2]), fZec85[i]) + (2 * fYec88[i-1])) - fRec119[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec119_perm[i]=fRec119_tmp[count+i];
			
			// LOOP 0x32d62b0
			// pre processing
			for (int i=0; i<4; i++) fYec89_tmp[i]=fYec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec89[i] = ((fZec97[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec89_perm[i]=fYec89_tmp[count+i];
			
			// LOOP 0x32db3a0
			// pre processing
			for (int i=0; i<4; i++) fYec90_tmp[i]=fYec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec90[i] = ((fZec114[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec90_perm[i]=fYec90_tmp[count+i];
			
			// LOOP 0x32e0e40
			// pre processing
			for (int i=0; i<4; i++) fYec91_tmp[i]=fYec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec91[i] = ((fZec131[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec91_perm[i]=fYec91_tmp[count+i];
			
			// LOOP 0x32e6130
			// pre processing
			for (int i=0; i<4; i++) fYec92_tmp[i]=fYec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec92[i] = ((fZec148[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec92_perm[i]=fYec92_tmp[count+i];
			
			// LOOP 0x32eb980
			// pre processing
			for (int i=0; i<4; i++) fYec93_tmp[i]=fYec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec93[i] = ((fZec165[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec93_perm[i]=fYec93_tmp[count+i];
			
			// LOOP 0x32f08d0
			// pre processing
			for (int i=0; i<4; i++) fYec94_tmp[i]=fYec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec94[i] = ((fZec182[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec94_perm[i]=fYec94_tmp[count+i];
			
			// LOOP 0x32f6040
			// pre processing
			for (int i=0; i<4; i++) fYec95_tmp[i]=fYec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec95[i] = ((fZec199[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec95_perm[i]=fYec95_tmp[count+i];
			
			// LOOP 0x32fba60
			// pre processing
			for (int i=0; i<4; i++) fYec96_tmp[i]=fYec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec96[i] = ((fZec10[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec96_perm[i]=fYec96_tmp[count+i];
			
			// LOOP 0x33013f0
			// pre processing
			for (int i=0; i<4; i++) fYec97_tmp[i]=fYec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec97[i] = ((fZec27[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec97_perm[i]=fYec97_tmp[count+i];
			
			// LOOP 0x33070f0
			// pre processing
			for (int i=0; i<4; i++) fYec98_tmp[i]=fYec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec98[i] = ((fZec44[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec98_perm[i]=fYec98_tmp[count+i];
			
			// LOOP 0x330c4d0
			// pre processing
			for (int i=0; i<4; i++) fYec99_tmp[i]=fYec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec99[i] = ((fZec61[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec99_perm[i]=fYec99_tmp[count+i];
			
			// LOOP 0x33124f0
			// pre processing
			for (int i=0; i<4; i++) fYec100_tmp[i]=fYec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec100[i] = ((fZec78[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec100_perm[i]=fYec100_tmp[count+i];
			
			// LOOP 0x3318a60
			// pre processing
			for (int i=0; i<4; i++) fYec101_tmp[i]=fYec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec101[i] = ((fZec95[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec101_perm[i]=fYec101_tmp[count+i];
			
			// LOOP 0x331e0f0
			// pre processing
			for (int i=0; i<4; i++) fYec102_tmp[i]=fYec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec102[i] = ((fZec112[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec102_perm[i]=fYec102_tmp[count+i];
			
			// LOOP 0x3324630
			// pre processing
			for (int i=0; i<4; i++) fYec103_tmp[i]=fYec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec103[i] = ((fZec129[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec103_perm[i]=fYec103_tmp[count+i];
			
			// LOOP 0x3329f20
			// pre processing
			for (int i=0; i<4; i++) fYec104_tmp[i]=fYec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec104[i] = ((fZec146[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec104_perm[i]=fYec104_tmp[count+i];
			
			// LOOP 0x332fe30
			// pre processing
			for (int i=0; i<4; i++) fYec105_tmp[i]=fYec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec105[i] = ((fZec163[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec105_perm[i]=fYec105_tmp[count+i];
			
			// LOOP 0x33350f0
			// pre processing
			for (int i=0; i<4; i++) fYec106_tmp[i]=fYec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec106[i] = ((fZec180[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec106_perm[i]=fYec106_tmp[count+i];
			
			// LOOP 0x333afd0
			// pre processing
			for (int i=0; i<4; i++) fYec107_tmp[i]=fYec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec107[i] = ((fZec197[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec107_perm[i]=fYec107_tmp[count+i];
			
			// LOOP 0x33ef9f0
			// pre processing
			for (int i=0; i<4; i++) fRec210_tmp[i]=fRec210_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec210[i] = (fRec210[i-1] + (fConst22 * ((square_polyblep_precalc(fZec263[i], (0.5f * fYec134[i-1]), (0.5f * fYec134[i-2]), fZec17[i]) + (2 * fYec135[i-1])) - fRec210[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec210_perm[i]=fRec210_tmp[count+i];
			
			// LOOP 0x33f5a00
			// pre processing
			for (int i=0; i<4; i++) fRec213_tmp[i]=fRec213_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec213[i] = (fRec213[i-1] + (fConst22 * ((square_polyblep_precalc(fZec264[i], (0.5f * fYec136[i-1]), (0.5f * fYec136[i-2]), fZec34[i]) + (2 * fYec137[i-1])) - fRec213[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec213_perm[i]=fRec213_tmp[count+i];
			
			// LOOP 0x33fb170
			// pre processing
			for (int i=0; i<4; i++) fRec216_tmp[i]=fRec216_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec216[i] = (fRec216[i-1] + (fConst22 * ((square_polyblep_precalc(fZec265[i], (0.5f * fYec138[i-1]), (0.5f * fYec138[i-2]), fZec51[i]) + (2 * fYec139[i-1])) - fRec216[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec216_perm[i]=fRec216_tmp[count+i];
			
			// LOOP 0x34008e0
			// pre processing
			for (int i=0; i<4; i++) fRec219_tmp[i]=fRec219_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec219[i] = (fRec219[i-1] + (fConst22 * ((square_polyblep_precalc(fZec266[i], (0.5f * fYec140[i-1]), (0.5f * fYec140[i-2]), fZec68[i]) + (2 * fYec141[i-1])) - fRec219[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec219_perm[i]=fRec219_tmp[count+i];
			
			// LOOP 0x3406150
			// pre processing
			for (int i=0; i<4; i++) fRec222_tmp[i]=fRec222_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec222[i] = (fRec222[i-1] + (fConst22 * ((square_polyblep_precalc(fZec267[i], (0.5f * fYec142[i-1]), (0.5f * fYec142[i-2]), fZec85[i]) + (2 * fYec143[i-1])) - fRec222[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec222_perm[i]=fRec222_tmp[count+i];
			
			// LOOP 0x340b980
			// pre processing
			for (int i=0; i<4; i++) fRec225_tmp[i]=fRec225_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec225[i] = (fRec225[i-1] + (fConst22 * ((square_polyblep_precalc(fZec268[i], (0.5f * fYec144[i-1]), (0.5f * fYec144[i-2]), fZec102[i]) + (2 * fYec145[i-1])) - fRec225[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec225_perm[i]=fRec225_tmp[count+i];
			
			// LOOP 0x3411250
			// pre processing
			for (int i=0; i<4; i++) fRec228_tmp[i]=fRec228_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec228[i] = (fRec228[i-1] + (fConst22 * ((square_polyblep_precalc(fZec269[i], (0.5f * fYec146[i-1]), (0.5f * fYec146[i-2]), fZec119[i]) + (2 * fYec147[i-1])) - fRec228[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec228_perm[i]=fRec228_tmp[count+i];
			
			// LOOP 0x3416b60
			// pre processing
			for (int i=0; i<4; i++) fRec231_tmp[i]=fRec231_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec231[i] = (fRec231[i-1] + (fConst22 * ((square_polyblep_precalc(fZec270[i], (0.5f * fYec148[i-1]), (0.5f * fYec148[i-2]), fZec136[i]) + (2 * fYec149[i-1])) - fRec231[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec231_perm[i]=fRec231_tmp[count+i];
			
			// LOOP 0x341c440
			// pre processing
			for (int i=0; i<4; i++) fRec234_tmp[i]=fRec234_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec234[i] = (fRec234[i-1] + (fConst2 * ((square_polyblep_precalc(fZec271[i], (0.5f * fYec150[i-1]), (0.5f * fYec150[i-2]), fZec153[i]) + (2 * fYec151[i-1])) - fRec234[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec234_perm[i]=fRec234_tmp[count+i];
			
			// LOOP 0x3421db0
			// pre processing
			for (int i=0; i<4; i++) fRec237_tmp[i]=fRec237_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec237[i] = (fRec237[i-1] + (fConst2 * ((square_polyblep_precalc(fZec272[i], (0.5f * fYec152[i-1]), (0.5f * fYec152[i-2]), fZec170[i]) + (2 * fYec153[i-1])) - fRec237[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec237_perm[i]=fRec237_tmp[count+i];
			
			// LOOP 0x3427740
			// pre processing
			for (int i=0; i<4; i++) fRec240_tmp[i]=fRec240_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec240[i] = (fRec240[i-1] + (fConst2 * ((square_polyblep_precalc(fZec273[i], (0.5f * fYec154[i-1]), (0.5f * fYec154[i-2]), fZec187[i]) + (2 * fYec155[i-1])) - fRec240[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec240_perm[i]=fRec240_tmp[count+i];
			
			// LOOP 0x342d120
			// pre processing
			for (int i=0; i<4; i++) fRec243_tmp[i]=fRec243_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec243[i] = (fRec243[i-1] + (fConst2 * ((square_polyblep_precalc(fZec274[i], (0.5f * fYec156[i-1]), (0.5f * fYec156[i-2]), fZec204[i]) + (2 * fYec157[i-1])) - fRec243[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec243_perm[i]=fRec243_tmp[count+i];
			
			// LOOP 0x356fca0
			// exec code
			for (int i=0; i<count; i++) {
				fZec332[i] = (0.25f * (fZec280[i] + (fZec297[i] + (fZec296[i] + (fZec295[i] + (fZec294[i] + (fZec293[i] + (fZec292[i] + (fZec291[i] + (fZec290[i] + (fZec289[i] + (fZec288[i] + (fZec287[i] + (fZec286[i] + ((fRec281[i] * fZec241[i]) + ((fRec280[i] * fZec240[i]) + ((fRec279[i] * fZec239[i]) + ((fRec278[i] * fZec238[i]) + ((fRec276[i] * fZec237[i]) + ((fRec275[i] * fZec236[i]) + ((fRec274[i] * fZec235[i]) + ((fRec273[i] * fZec234[i]) + ((fRec272[i] * fZec233[i]) + ((fRec271[i] * fZec232[i]) + ((fRec270[i] * fZec231[i]) + ((fRec267[i] * fZec230[i]) + ((fRec265[i] * fZec229[i]) + ((fRec263[i] * fZec228[i]) + ((fRec261[i] * fZec227[i]) + ((fRec259[i] * fZec226[i]) + ((fRec257[i] * fZec225[i]) + ((fRec255[i] * fZec224[i]) + ((fRec253[i] * fZec223[i]) + ((fRec251[i] * fZec222[i]) + ((fRec249[i] * fZec221[i]) + ((fRec247[i] * fZec220[i]) + ((fRec245[i] * fZec219[i]) + ((fRec206[i] * fZec218[i]) + ((fRec204[i] * fZec217[i]) + ((fRec202[i] * fZec216[i]) + ((fRec200[i] * fZec215[i]) + ((fRec198[i] * fZec214[i]) + ((fRec196[i] * fZec213[i]) + ((fRec194[i] * fZec212[i]) + ((fRec192[i] * fZec211[i]) + (fSlow36 * ((fRec190[i] * fZec209[i]) + ((fRec188[i] * fZec208[i]) + ((fRec186[i] * fZec207[i]) + ((fRec184[i] * fZec206[i]) + ((fRec182[i] * fZec205[i]) + ((fRec180[i] * fZec188[i]) + ((fRec178[i] * fZec171[i]) + ((fRec176[i] * fZec154[i]) + ((fRec174[i] * fZec137[i]) + ((fRec172[i] * fZec120[i]) + ((fRec170[i] * fZec103[i]) + ((fRec168[i] * fZec86[i]) + ((fRec166[i] * fZec69[i]) + ((fRec164[i] * fZec52[i]) + ((fRec162[i] * fZec35[i]) + ((fRec160[i] * fZec18[i]) + (fRec158[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3586230
			// exec code
			for (int i=0; i<count; i++) {
				fZec333[i] = ((2 * ((((((((((((fRec270[i] + (fRec267[i] + ((((((((((((((((((fZec302[i] + fZec303[i]) + fZec304[i]) + fZec305[i]) + fZec306[i]) + fZec307[i]) + fZec308[i]) + fZec309[i]) + fZec310[i]) + fZec311[i]) + fZec312[i]) + fZec313[i]) + fZec314[i]) + fZec315[i]) + fZec316[i]) + fZec317[i]) + fZec318[i]) + fZec319[i]) + fZec320[i]))) + fZec321[i]) + fZec322[i]) + fZec323[i]) + fZec324[i]) + fZec325[i]) + fZec326[i]) + fZec327[i]) + fZec328[i]) + fZec329[i]) + fZec330[i]) + (fSlow91 * fZec259[i]))) + (fRec281[i] + (fRec280[i] + (fRec279[i] + (fRec278[i] + (fRec276[i] + (fRec275[i] + (fRec274[i] + (fRec273[i] + (fRec272[i] + (fRec267[i] + fRec271[i])))))))))));
			}
			
			// SECTION : 28
			// LOOP 0x31a5ad0
			// pre processing
			for (int i=0; i<4; i++) fRec1_tmp[i]=fRec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec1[i] = (fConst4 * ((fRec2[i] - fRec2[i-1]) + fRec1[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec1_perm[i]=fRec1_tmp[count+i];
			
			// LOOP 0x31c0d80
			// pre processing
			for (int i=0; i<4; i++) fRec11_tmp[i]=fRec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec11[i] = (fConst4 * ((fRec12[i] - fRec12[i-1]) + fRec11[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec11_perm[i]=fRec11_tmp[count+i];
			
			// LOOP 0x31d7310
			// pre processing
			for (int i=0; i<4; i++) fRec20_tmp[i]=fRec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec20[i] = (fConst4 * ((fRec21[i] - fRec21[i-1]) + fRec20[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec20_perm[i]=fRec20_tmp[count+i];
			
			// LOOP 0x31ed770
			// pre processing
			for (int i=0; i<4; i++) fRec29_tmp[i]=fRec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec29[i] = (fConst4 * ((fRec30[i] - fRec30[i-1]) + fRec29[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec29_perm[i]=fRec29_tmp[count+i];
			
			// LOOP 0x3203eb0
			// pre processing
			for (int i=0; i<4; i++) fRec38_tmp[i]=fRec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec38[i] = (fConst4 * ((fRec39[i] - fRec39[i-1]) + fRec38[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec38_perm[i]=fRec38_tmp[count+i];
			
			// LOOP 0x321a9f0
			// pre processing
			for (int i=0; i<4; i++) fRec47_tmp[i]=fRec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec47[i] = (fConst4 * ((fRec48[i] - fRec48[i-1]) + fRec47[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec47_perm[i]=fRec47_tmp[count+i];
			
			// LOOP 0x3231000
			// pre processing
			for (int i=0; i<4; i++) fRec56_tmp[i]=fRec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec56[i] = (fConst4 * ((fRec57[i] - fRec57[i-1]) + fRec56[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec56_perm[i]=fRec56_tmp[count+i];
			
			// LOOP 0x3247a20
			// pre processing
			for (int i=0; i<4; i++) fRec65_tmp[i]=fRec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec65[i] = (fConst4 * ((fRec66[i] - fRec66[i-1]) + fRec65[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec65_perm[i]=fRec65_tmp[count+i];
			
			// LOOP 0x325e150
			// pre processing
			for (int i=0; i<4; i++) fRec74_tmp[i]=fRec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec74[i] = (fConst4 * ((fRec75[i] - fRec75[i-1]) + fRec74[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec74_perm[i]=fRec74_tmp[count+i];
			
			// LOOP 0x3274d70
			// pre processing
			for (int i=0; i<4; i++) fRec83_tmp[i]=fRec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec83[i] = (fConst4 * ((fRec84[i] - fRec84[i-1]) + fRec83[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec83_perm[i]=fRec83_tmp[count+i];
			
			// LOOP 0x328b290
			// pre processing
			for (int i=0; i<4; i++) fRec92_tmp[i]=fRec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec92[i] = (fConst4 * ((fRec93[i] - fRec93[i-1]) + fRec92[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec92_perm[i]=fRec92_tmp[count+i];
			
			// LOOP 0x32a1e60
			// pre processing
			for (int i=0; i<4; i++) fRec101_tmp[i]=fRec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec101[i] = (fConst4 * ((fRec102[i] - fRec102[i-1]) + fRec101[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec101_perm[i]=fRec101_tmp[count+i];
			
			// LOOP 0x32b8ae0
			// pre processing
			for (int i=0; i<4; i++) fRec110_tmp[i]=fRec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec110[i] = (fConst7 * ((fRec111[i] - fRec111[i-1]) + fRec110[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec110_perm[i]=fRec110_tmp[count+i];
			
			// LOOP 0x32be080
			// pre processing
			for (int i=0; i<4; i++) fRec112_tmp[i]=fRec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec112[i] = (fConst7 * ((fRec113[i] - fRec113[i-1]) + fRec112[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec112_perm[i]=fRec112_tmp[count+i];
			
			// LOOP 0x32c3800
			// pre processing
			for (int i=0; i<4; i++) fRec114_tmp[i]=fRec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec114[i] = (fConst7 * ((fRec115[i] - fRec115[i-1]) + fRec114[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec114_perm[i]=fRec114_tmp[count+i];
			
			// LOOP 0x32c8ac0
			// pre processing
			for (int i=0; i<4; i++) fRec116_tmp[i]=fRec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec116[i] = (fConst7 * ((fRec117[i] - fRec117[i-1]) + fRec116[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec116_perm[i]=fRec116_tmp[count+i];
			
			// LOOP 0x32ce4c0
			// pre processing
			for (int i=0; i<4; i++) fRec118_tmp[i]=fRec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec118[i] = (fConst7 * ((fRec119[i] - fRec119[i-1]) + fRec118[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec118_perm[i]=fRec118_tmp[count+i];
			
			// LOOP 0x32d5d60
			// pre processing
			for (int i=0; i<4; i++) fRec121_tmp[i]=fRec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec121[i] = (fRec121[i-1] + (fConst8 * ((square_polyblep_precalc(fZec97[i], fZec98[i], (0.5f * fYec39[i-2]), fZec102[i]) + (2 * fYec89[i-1])) - fRec121[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec121_perm[i]=fRec121_tmp[count+i];
			
			// LOOP 0x32dae50
			// pre processing
			for (int i=0; i<4; i++) fRec123_tmp[i]=fRec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec123[i] = (fRec123[i-1] + (fConst8 * ((square_polyblep_precalc(fZec114[i], fZec115[i], (0.5f * fYec46[i-2]), fZec119[i]) + (2 * fYec90[i-1])) - fRec123[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec123_perm[i]=fRec123_tmp[count+i];
			
			// LOOP 0x32e08f0
			// pre processing
			for (int i=0; i<4; i++) fRec125_tmp[i]=fRec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec125[i] = (fRec125[i-1] + (fConst8 * ((square_polyblep_precalc(fZec131[i], fZec132[i], (0.5f * fYec53[i-2]), fZec136[i]) + (2 * fYec91[i-1])) - fRec125[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec125_perm[i]=fRec125_tmp[count+i];
			
			// LOOP 0x32e5be0
			// pre processing
			for (int i=0; i<4; i++) fRec127_tmp[i]=fRec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec127[i] = (fRec127[i-1] + (fConst9 * ((square_polyblep_precalc(fZec148[i], fZec149[i], (0.5f * fYec60[i-2]), fZec153[i]) + (2 * fYec92[i-1])) - fRec127[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec127_perm[i]=fRec127_tmp[count+i];
			
			// LOOP 0x32eb430
			// pre processing
			for (int i=0; i<4; i++) fRec129_tmp[i]=fRec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec129[i] = (fRec129[i-1] + (fConst9 * ((square_polyblep_precalc(fZec165[i], fZec166[i], (0.5f * fYec67[i-2]), fZec170[i]) + (2 * fYec93[i-1])) - fRec129[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec129_perm[i]=fRec129_tmp[count+i];
			
			// LOOP 0x32f0380
			// pre processing
			for (int i=0; i<4; i++) fRec131_tmp[i]=fRec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec131[i] = (fRec131[i-1] + (fConst9 * ((square_polyblep_precalc(fZec182[i], fZec183[i], (0.5f * fYec74[i-2]), fZec187[i]) + (2 * fYec94[i-1])) - fRec131[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec131_perm[i]=fRec131_tmp[count+i];
			
			// LOOP 0x32f5af0
			// pre processing
			for (int i=0; i<4; i++) fRec133_tmp[i]=fRec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec133[i] = (fRec133[i-1] + (fConst9 * ((square_polyblep_precalc(fZec199[i], fZec200[i], (0.5f * fYec81[i-2]), fZec204[i]) + (2 * fYec95[i-1])) - fRec133[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec133_perm[i]=fRec133_tmp[count+i];
			
			// LOOP 0x32fb510
			// pre processing
			for (int i=0; i<4; i++) fRec135_tmp[i]=fRec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec135[i] = (fRec135[i-1] + (fConst10 * ((square_polyblep_precalc(fZec10[i], fZec11[i], (0.5f * fYec3[i-2]), fZec17[i]) + (2 * fYec96[i-1])) - fRec135[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec135_perm[i]=fRec135_tmp[count+i];
			
			// LOOP 0x3300ea0
			// pre processing
			for (int i=0; i<4; i++) fRec137_tmp[i]=fRec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec137[i] = (fRec137[i-1] + (fConst10 * ((square_polyblep_precalc(fZec27[i], fZec28[i], (0.5f * fYec10[i-2]), fZec34[i]) + (2 * fYec97[i-1])) - fRec137[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec137_perm[i]=fRec137_tmp[count+i];
			
			// LOOP 0x3306ba0
			// pre processing
			for (int i=0; i<4; i++) fRec139_tmp[i]=fRec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec139[i] = (fRec139[i-1] + (fConst10 * ((square_polyblep_precalc(fZec44[i], fZec45[i], (0.5f * fYec17[i-2]), fZec51[i]) + (2 * fYec98[i-1])) - fRec139[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec139_perm[i]=fRec139_tmp[count+i];
			
			// LOOP 0x330bf80
			// pre processing
			for (int i=0; i<4; i++) fRec141_tmp[i]=fRec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec141[i] = (fRec141[i-1] + (fConst10 * ((square_polyblep_precalc(fZec61[i], fZec62[i], (0.5f * fYec24[i-2]), fZec68[i]) + (2 * fYec99[i-1])) - fRec141[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec141_perm[i]=fRec141_tmp[count+i];
			
			// LOOP 0x3311fa0
			// pre processing
			for (int i=0; i<4; i++) fRec143_tmp[i]=fRec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec143[i] = (fRec143[i-1] + (fConst12 * ((square_polyblep_precalc(fZec78[i], fZec79[i], (0.5f * fYec31[i-2]), fZec85[i]) + (2 * fYec100[i-1])) - fRec143[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec143_perm[i]=fRec143_tmp[count+i];
			
			// LOOP 0x3318510
			// pre processing
			for (int i=0; i<4; i++) fRec145_tmp[i]=fRec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec145[i] = (fRec145[i-1] + (fConst12 * ((square_polyblep_precalc(fZec95[i], fZec96[i], (0.5f * fYec38[i-2]), fZec102[i]) + (2 * fYec101[i-1])) - fRec145[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec145_perm[i]=fRec145_tmp[count+i];
			
			// LOOP 0x331dba0
			// pre processing
			for (int i=0; i<4; i++) fRec147_tmp[i]=fRec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec147[i] = (fRec147[i-1] + (fConst12 * ((square_polyblep_precalc(fZec112[i], fZec113[i], (0.5f * fYec45[i-2]), fZec119[i]) + (2 * fYec102[i-1])) - fRec147[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec147_perm[i]=fRec147_tmp[count+i];
			
			// LOOP 0x33240e0
			// pre processing
			for (int i=0; i<4; i++) fRec149_tmp[i]=fRec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec149[i] = (fRec149[i-1] + (fConst12 * ((square_polyblep_precalc(fZec129[i], fZec130[i], (0.5f * fYec52[i-2]), fZec136[i]) + (2 * fYec103[i-1])) - fRec149[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec149_perm[i]=fRec149_tmp[count+i];
			
			// LOOP 0x33299d0
			// pre processing
			for (int i=0; i<4; i++) fRec151_tmp[i]=fRec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec151[i] = (fRec151[i-1] + (fConst13 * ((square_polyblep_precalc(fZec146[i], fZec147[i], (0.5f * fYec59[i-2]), fZec153[i]) + (2 * fYec104[i-1])) - fRec151[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec151_perm[i]=fRec151_tmp[count+i];
			
			// LOOP 0x332f8e0
			// pre processing
			for (int i=0; i<4; i++) fRec153_tmp[i]=fRec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec153[i] = (fRec153[i-1] + (fConst13 * ((square_polyblep_precalc(fZec163[i], fZec164[i], (0.5f * fYec66[i-2]), fZec170[i]) + (2 * fYec105[i-1])) - fRec153[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec153_perm[i]=fRec153_tmp[count+i];
			
			// LOOP 0x3334ba0
			// pre processing
			for (int i=0; i<4; i++) fRec155_tmp[i]=fRec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec155[i] = (fRec155[i-1] + (fConst13 * ((square_polyblep_precalc(fZec180[i], fZec181[i], (0.5f * fYec73[i-2]), fZec187[i]) + (2 * fYec106[i-1])) - fRec155[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec155_perm[i]=fRec155_tmp[count+i];
			
			// LOOP 0x333aa80
			// pre processing
			for (int i=0; i<4; i++) fRec157_tmp[i]=fRec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec157[i] = (fRec157[i-1] + (fConst13 * ((square_polyblep_precalc(fZec197[i], fZec198[i], (0.5f * fYec80[i-2]), fZec204[i]) + (2 * fYec107[i-1])) - fRec157[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec157_perm[i]=fRec157_tmp[count+i];
			
			// LOOP 0x33ef660
			// pre processing
			for (int i=0; i<4; i++) fRec209_tmp[i]=fRec209_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec209[i] = (fConst23 * (fRec209[i-1] + (fRec210[i] - fRec210[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec209_perm[i]=fRec209_tmp[count+i];
			
			// LOOP 0x33f5530
			// pre processing
			for (int i=0; i<4; i++) fRec212_tmp[i]=fRec212_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec212[i] = (fConst23 * ((fRec213[i] - fRec213[i-1]) + fRec212[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec212_perm[i]=fRec212_tmp[count+i];
			
			// LOOP 0x33fac80
			// pre processing
			for (int i=0; i<4; i++) fRec215_tmp[i]=fRec215_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec215[i] = (fConst23 * ((fRec216[i] - fRec216[i-1]) + fRec215[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec215_perm[i]=fRec215_tmp[count+i];
			
			// LOOP 0x34003f0
			// pre processing
			for (int i=0; i<4; i++) fRec218_tmp[i]=fRec218_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec218[i] = (fConst23 * ((fRec219[i] - fRec219[i-1]) + fRec218[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec218_perm[i]=fRec218_tmp[count+i];
			
			// LOOP 0x3405c60
			// pre processing
			for (int i=0; i<4; i++) fRec221_tmp[i]=fRec221_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec221[i] = (fConst23 * ((fRec222[i] - fRec222[i-1]) + fRec221[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec221_perm[i]=fRec221_tmp[count+i];
			
			// LOOP 0x340b4b0
			// pre processing
			for (int i=0; i<4; i++) fRec224_tmp[i]=fRec224_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec224[i] = (fConst23 * ((fRec225[i] - fRec225[i-1]) + fRec224[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec224_perm[i]=fRec224_tmp[count+i];
			
			// LOOP 0x3410db0
			// pre processing
			for (int i=0; i<4; i++) fRec227_tmp[i]=fRec227_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec227[i] = (fConst23 * ((fRec228[i] - fRec228[i-1]) + fRec227[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec227_perm[i]=fRec227_tmp[count+i];
			
			// LOOP 0x34166e0
			// pre processing
			for (int i=0; i<4; i++) fRec230_tmp[i]=fRec230_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec230[i] = (fConst23 * ((fRec231[i] - fRec231[i-1]) + fRec230[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec230_perm[i]=fRec230_tmp[count+i];
			
			// LOOP 0x341bfe0
			// pre processing
			for (int i=0; i<4; i++) fRec233_tmp[i]=fRec233_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec233[i] = (fConst23 * ((fRec234[i] - fRec234[i-1]) + fRec233[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec233_perm[i]=fRec233_tmp[count+i];
			
			// LOOP 0x3421970
			// pre processing
			for (int i=0; i<4; i++) fRec236_tmp[i]=fRec236_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec236[i] = (fConst23 * ((fRec237[i] - fRec237[i-1]) + fRec236[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec236_perm[i]=fRec236_tmp[count+i];
			
			// LOOP 0x3427320
			// pre processing
			for (int i=0; i<4; i++) fRec239_tmp[i]=fRec239_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec239[i] = (fConst23 * ((fRec240[i] - fRec240[i-1]) + fRec239[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec239_perm[i]=fRec239_tmp[count+i];
			
			// LOOP 0x342cd10
			// pre processing
			for (int i=0; i<4; i++) fRec242_tmp[i]=fRec242_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec242[i] = (fConst23 * ((fRec243[i] - fRec243[i-1]) + fRec242[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec242_perm[i]=fRec242_tmp[count+i];
			
			// LOOP 0x356fb90
			// pre processing
			for (int i=0; i<4; i++) fYec197_tmp[i]=fYec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec197[i] = (fZec333[i] - fZec332[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec197_perm[i]=fYec197_tmp[count+i];
			
			// SECTION : 29
			// LOOP 0x31a4200
			// exec code
			for (int i=0; i<count; i++) {
				fZec210[i] = ((fRec118[i] * fZec209[i]) + ((fRec116[i] * fZec208[i]) + ((fRec114[i] * fZec207[i]) + ((fRec112[i] * fZec206[i]) + ((fRec110[i] * fZec205[i]) + ((fRec101[i] * fZec188[i]) + ((fRec92[i] * fZec171[i]) + ((fRec83[i] * fZec154[i]) + ((fRec74[i] * fZec137[i]) + ((fRec65[i] * fZec120[i]) + ((fRec56[i] * fZec103[i]) + ((fRec47[i] * fZec86[i]) + ((fRec38[i] * fZec69[i]) + ((fRec29[i] * fZec52[i]) + ((fRec20[i] * fZec35[i]) + ((fRec11[i] * fZec18[i]) + (fRec1[i] * fZec0[i])))))))))))))))));
			}
			
			// LOOP 0x32d5870
			// pre processing
			for (int i=0; i<4; i++) fRec120_tmp[i]=fRec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec120[i] = (fConst7 * ((fRec121[i] - fRec121[i-1]) + fRec120[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec120_perm[i]=fRec120_tmp[count+i];
			
			// LOOP 0x32da960
			// pre processing
			for (int i=0; i<4; i++) fRec122_tmp[i]=fRec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec122[i] = (fConst7 * ((fRec123[i] - fRec123[i-1]) + fRec122[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec122_perm[i]=fRec122_tmp[count+i];
			
			// LOOP 0x32e0400
			// pre processing
			for (int i=0; i<4; i++) fRec124_tmp[i]=fRec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec124[i] = (fConst7 * ((fRec125[i] - fRec125[i-1]) + fRec124[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec124_perm[i]=fRec124_tmp[count+i];
			
			// LOOP 0x32e56f0
			// pre processing
			for (int i=0; i<4; i++) fRec126_tmp[i]=fRec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec126[i] = (fConst7 * ((fRec127[i] - fRec127[i-1]) + fRec126[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec126_perm[i]=fRec126_tmp[count+i];
			
			// LOOP 0x32eaf40
			// pre processing
			for (int i=0; i<4; i++) fRec128_tmp[i]=fRec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec128[i] = (fConst7 * ((fRec129[i] - fRec129[i-1]) + fRec128[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec128_perm[i]=fRec128_tmp[count+i];
			
			// LOOP 0x32efe90
			// pre processing
			for (int i=0; i<4; i++) fRec130_tmp[i]=fRec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec130[i] = (fConst7 * ((fRec131[i] - fRec131[i-1]) + fRec130[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec130_perm[i]=fRec130_tmp[count+i];
			
			// LOOP 0x32f5600
			// pre processing
			for (int i=0; i<4; i++) fRec132_tmp[i]=fRec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec132[i] = (fConst7 * ((fRec133[i] - fRec133[i-1]) + fRec132[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec132_perm[i]=fRec132_tmp[count+i];
			
			// LOOP 0x32fb020
			// pre processing
			for (int i=0; i<4; i++) fRec134_tmp[i]=fRec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec134[i] = (fConst11 * ((fRec135[i] - fRec135[i-1]) + fRec134[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec134_perm[i]=fRec134_tmp[count+i];
			
			// LOOP 0x33009b0
			// pre processing
			for (int i=0; i<4; i++) fRec136_tmp[i]=fRec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec136[i] = (fConst11 * ((fRec137[i] - fRec137[i-1]) + fRec136[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec136_perm[i]=fRec136_tmp[count+i];
			
			// LOOP 0x33066b0
			// pre processing
			for (int i=0; i<4; i++) fRec138_tmp[i]=fRec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec138[i] = (fConst11 * ((fRec139[i] - fRec139[i-1]) + fRec138[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec138_perm[i]=fRec138_tmp[count+i];
			
			// LOOP 0x330ba90
			// pre processing
			for (int i=0; i<4; i++) fRec140_tmp[i]=fRec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec140[i] = (fConst11 * ((fRec141[i] - fRec141[i-1]) + fRec140[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec140_perm[i]=fRec140_tmp[count+i];
			
			// LOOP 0x3311ab0
			// pre processing
			for (int i=0; i<4; i++) fRec142_tmp[i]=fRec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec142[i] = (fConst11 * ((fRec143[i] - fRec143[i-1]) + fRec142[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec142_perm[i]=fRec142_tmp[count+i];
			
			// LOOP 0x3318020
			// pre processing
			for (int i=0; i<4; i++) fRec144_tmp[i]=fRec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec144[i] = (fConst11 * ((fRec145[i] - fRec145[i-1]) + fRec144[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec144_perm[i]=fRec144_tmp[count+i];
			
			// LOOP 0x331d6b0
			// pre processing
			for (int i=0; i<4; i++) fRec146_tmp[i]=fRec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec146[i] = (fConst11 * ((fRec147[i] - fRec147[i-1]) + fRec146[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec146_perm[i]=fRec146_tmp[count+i];
			
			// LOOP 0x3323bf0
			// pre processing
			for (int i=0; i<4; i++) fRec148_tmp[i]=fRec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec148[i] = (fConst11 * ((fRec149[i] - fRec149[i-1]) + fRec148[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec148_perm[i]=fRec148_tmp[count+i];
			
			// LOOP 0x33294e0
			// pre processing
			for (int i=0; i<4; i++) fRec150_tmp[i]=fRec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec150[i] = (fConst11 * ((fRec151[i] - fRec151[i-1]) + fRec150[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec150_perm[i]=fRec150_tmp[count+i];
			
			// LOOP 0x332f3f0
			// pre processing
			for (int i=0; i<4; i++) fRec152_tmp[i]=fRec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec152[i] = (fConst11 * ((fRec153[i] - fRec153[i-1]) + fRec152[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec152_perm[i]=fRec152_tmp[count+i];
			
			// LOOP 0x33346b0
			// pre processing
			for (int i=0; i<4; i++) fRec154_tmp[i]=fRec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec154[i] = (fConst11 * ((fRec155[i] - fRec155[i-1]) + fRec154[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec154_perm[i]=fRec154_tmp[count+i];
			
			// LOOP 0x333a590
			// pre processing
			for (int i=0; i<4; i++) fRec156_tmp[i]=fRec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec156[i] = (fConst11 * ((fRec157[i] - fRec157[i-1]) + fRec156[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec156_perm[i]=fRec156_tmp[count+i];
			
			// LOOP 0x33ded20
			// exec code
			for (int i=0; i<count; i++) {
				fZec260[i] = (fRec206[i] + (fRec204[i] + (fRec202[i] + (fRec200[i] + (fRec198[i] + (fRec196[i] + (fRec194[i] + (fRec192[i] + fZec259[i]))))))));
			}
			
			// LOOP 0x33ef4c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec275[i] = ((fRec38[i] * fZec209[i]) + ((fRec29[i] * fZec208[i]) + ((fRec20[i] * fZec207[i]) + ((fRec11[i] * fZec206[i]) + ((fRec1[i] * fZec205[i]) + ((fRec242[i] * fZec188[i]) + ((fRec239[i] * fZec171[i]) + ((fRec236[i] * fZec154[i]) + ((fRec233[i] * fZec137[i]) + ((fRec230[i] * fZec120[i]) + ((fRec227[i] * fZec103[i]) + ((fRec224[i] * fZec86[i]) + ((fRec221[i] * fZec69[i]) + ((fRec218[i] * fZec52[i]) + ((fRec215[i] * fZec35[i]) + ((fRec212[i] * fZec18[i]) + (fRec209[i] * fZec0[i])))))))))))))))));
			}
			
			// LOOP 0x356f6d0
			// pre processing
			for (int i=0; i<4; i++) fRec283_tmp[i]=fRec283_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec283[i] = (fConst21 * ((fZec333[i] - (fZec332[i] + fYec197[i-1])) + fRec283[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec283_perm[i]=fRec283_tmp[count+i];
			
			// SECTION : 30
			// LOOP 0x31a40c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec255[i] = (0.25f * ((fRec206[i] * fZec254[i]) + ((fRec204[i] * fZec253[i]) + ((fRec202[i] * fZec252[i]) + ((fRec200[i] * fZec251[i]) + ((fRec198[i] * fZec250[i]) + ((fRec196[i] * fZec249[i]) + ((fRec194[i] * fZec248[i]) + ((fRec192[i] * fZec247[i]) + ((fRec190[i] * fZec246[i]) + ((fRec188[i] * fZec245[i]) + ((fRec186[i] * fZec244[i]) + ((fRec184[i] * fZec243[i]) + ((fRec182[i] * fZec242[i]) + ((fRec180[i] * fZec241[i]) + ((fRec178[i] * fZec240[i]) + ((fRec176[i] * fZec239[i]) + ((fRec174[i] * fZec238[i]) + ((fRec172[i] * fZec237[i]) + ((fRec170[i] * fZec236[i]) + ((fRec168[i] * fZec235[i]) + ((fRec166[i] * fZec234[i]) + ((fRec164[i] * fZec233[i]) + ((fRec162[i] * fZec232[i]) + ((fRec160[i] * fZec231[i]) + ((fRec158[i] * fZec230[i]) + ((fRec156[i] * fZec229[i]) + ((fRec154[i] * fZec228[i]) + ((fRec152[i] * fZec227[i]) + ((fRec150[i] * fZec226[i]) + ((fRec148[i] * fZec225[i]) + ((fRec146[i] * fZec224[i]) + ((fRec144[i] * fZec223[i]) + ((fRec142[i] * fZec222[i]) + ((fRec140[i] * fZec221[i]) + ((fRec138[i] * fZec220[i]) + ((fRec136[i] * fZec219[i]) + ((fRec134[i] * fZec218[i]) + ((fRec132[i] * fZec217[i]) + ((fRec130[i] * fZec216[i]) + ((fRec128[i] * fZec215[i]) + ((fRec126[i] * fZec214[i]) + ((fRec124[i] * fZec213[i]) + ((fRec122[i] * fZec212[i]) + ((fRec120[i] * fZec211[i]) + (fSlow36 * fZec210[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x33de140
			// exec code
			for (int i=0; i<count; i++) {
				fZec261[i] = ((fSlow36 * (fRec101[i] + (fRec92[i] + (fRec83[i] + (fRec74[i] + (fRec65[i] + (fRec56[i] + (fRec47[i] + (fRec38[i] + (fRec29[i] + (fRec20[i] + (fRec11[i] + (fRec1[i] + (fRec118[i] + (fRec116[i] + (fRec114[i] + (fRec110[i] + fRec112[i]))))))))))))))))) + (fRec122[i] + (fRec120[i] + (fRec132[i] + (fRec130[i] + (fRec128[i] + (fRec126[i] + (fRec124[i] + (fRec140[i] + (fRec138[i] + (fRec136[i] + (fRec134[i] + (fRec156[i] + (fRec154[i] + (fRec152[i] + (fRec150[i] + (fRec148[i] + (fRec146[i] + (fRec144[i] + (fRec142[i] + fZec260[i]))))))))))))))))))));
			}
			
			// LOOP 0x33ef380
			// exec code
			for (int i=0; i<count; i++) {
				fZec276[i] = (0.41975f * ((fRec182[i] * fZec254[i]) + ((fRec180[i] * fZec253[i]) + ((fRec178[i] * fZec252[i]) + ((fRec176[i] * fZec251[i]) + ((fRec174[i] * fZec250[i]) + ((fRec172[i] * fZec249[i]) + ((fRec170[i] * fZec248[i]) + ((fRec168[i] * fZec247[i]) + ((fRec166[i] * fZec246[i]) + ((fRec164[i] * fZec245[i]) + ((fRec162[i] * fZec244[i]) + ((fRec160[i] * fZec243[i]) + ((fRec158[i] * fZec242[i]) + ((fRec156[i] * fZec241[i]) + ((fRec154[i] * fZec240[i]) + ((fRec152[i] * fZec239[i]) + ((fRec150[i] * fZec238[i]) + ((fRec148[i] * fZec237[i]) + ((fRec146[i] * fZec236[i]) + ((fRec144[i] * fZec235[i]) + ((fRec142[i] * fZec234[i]) + ((fRec140[i] * fZec233[i]) + ((fRec138[i] * fZec232[i]) + ((fRec136[i] * fZec231[i]) + ((fRec134[i] * fZec230[i]) + ((fRec132[i] * fZec229[i]) + ((fRec130[i] * fZec228[i]) + ((fRec128[i] * fZec227[i]) + ((fRec126[i] * fZec226[i]) + ((fRec124[i] * fZec225[i]) + ((fRec122[i] * fZec224[i]) + ((fRec120[i] * fZec223[i]) + ((fRec118[i] * fZec222[i]) + ((fRec116[i] * fZec221[i]) + ((fRec114[i] * fZec220[i]) + ((fRec112[i] * fZec219[i]) + ((fRec110[i] * fZec218[i]) + ((fRec101[i] * fZec217[i]) + ((fRec92[i] * fZec216[i]) + ((fRec83[i] * fZec215[i]) + ((fRec74[i] * fZec214[i]) + ((fRec65[i] * fZec213[i]) + ((fRec56[i] * fZec212[i]) + ((fRec47[i] * fZec211[i]) + (fSlow36 * fZec275[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x34468b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec277[i] = (1.679f * ((fSlow36 * (fRec242[i] + (fRec239[i] + (fRec236[i] + (fRec233[i] + (fRec230[i] + (fRec227[i] + (fRec224[i] + (fRec221[i] + (fRec218[i] + (fRec215[i] + (fRec212[i] + (fRec209[i] + (fRec38[i] + (fRec29[i] + (fRec20[i] + (fRec1[i] + fRec11[i]))))))))))))))))) + (fRec101[i] + (fRec92[i] + (fRec83[i] + (fRec74[i] + (fRec65[i] + (fRec56[i] + (fRec47[i] + (fRec122[i] + (fRec120[i] + (fRec118[i] + (fRec116[i] + (fRec114[i] + (fRec112[i] + (fRec110[i] + (fRec132[i] + (fRec130[i] + (fRec128[i] + (fRec126[i] + (fRec124[i] + (fRec140[i] + (fRec138[i] + (fRec136[i] + (fRec134[i] + (fRec156[i] + (fRec154[i] + (fRec152[i] + (fRec150[i] + (fRec148[i] + (fRec146[i] + (fRec144[i] + (fRec142[i] + fZec258[i])))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x34e5f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec298[i] = (0.25f * (fZec280[i] + (fZec297[i] + (fZec296[i] + (fZec295[i] + (fZec294[i] + (fZec293[i] + (fZec292[i] + (fZec291[i] + (fZec290[i] + (fZec289[i] + (fZec288[i] + (fZec287[i] + (fZec286[i] + ((fRec265[i] * fZec241[i]) + ((fRec263[i] * fZec240[i]) + ((fRec261[i] * fZec239[i]) + ((fRec259[i] * fZec238[i]) + ((fRec257[i] * fZec237[i]) + ((fRec255[i] * fZec236[i]) + ((fRec253[i] * fZec235[i]) + ((fRec251[i] * fZec234[i]) + ((fRec249[i] * fZec233[i]) + ((fRec247[i] * fZec232[i]) + ((fRec245[i] * fZec231[i]) + ((fRec206[i] * fZec230[i]) + ((fRec204[i] * fZec229[i]) + ((fRec202[i] * fZec228[i]) + ((fRec200[i] * fZec227[i]) + ((fRec198[i] * fZec226[i]) + ((fRec196[i] * fZec225[i]) + ((fRec194[i] * fZec224[i]) + ((fRec192[i] * fZec223[i]) + ((fRec190[i] * fZec222[i]) + ((fRec188[i] * fZec221[i]) + ((fRec186[i] * fZec220[i]) + ((fRec184[i] * fZec219[i]) + ((fRec182[i] * fZec218[i]) + ((fRec180[i] * fZec217[i]) + ((fRec178[i] * fZec216[i]) + ((fRec176[i] * fZec215[i]) + ((fRec174[i] * fZec214[i]) + ((fRec172[i] * fZec213[i]) + ((fRec170[i] * fZec212[i]) + ((fRec168[i] * fZec211[i]) + (fSlow36 * ((fRec166[i] * fZec209[i]) + ((fRec164[i] * fZec208[i]) + ((fRec162[i] * fZec207[i]) + ((fRec160[i] * fZec206[i]) + ((fRec158[i] * fZec205[i]) + ((fRec156[i] * fZec188[i]) + ((fRec154[i] * fZec171[i]) + ((fRec152[i] * fZec154[i]) + ((fRec150[i] * fZec137[i]) + ((fRec148[i] * fZec120[i]) + ((fRec146[i] * fZec103[i]) + ((fRec144[i] * fZec86[i]) + ((fRec142[i] * fZec69[i]) + ((fRec140[i] * fZec52[i]) + ((fRec138[i] * fZec35[i]) + ((fRec136[i] * fZec18[i]) + (fRec134[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3518030
			// exec code
			for (int i=0; i<count; i++) {
				fZec299[i] = ((fSlow36 * (fRec140[i] + (fRec138[i] + (fRec136[i] + (fRec134[i] + (fRec156[i] + (fRec154[i] + (fRec152[i] + (fRec150[i] + (fRec148[i] + (fRec146[i] + (fRec144[i] + (fRec142[i] + fZec256[i]))))))))))))) + (fRec281[i] + (fRec280[i] + (fRec279[i] + (fRec278[i] + (fRec276[i] + (fRec275[i] + (fRec274[i] + (fRec273[i] + (fRec272[i] + (fRec271[i] + (fRec270[i] + ((2 * fRec267[i]) + (fRec265[i] + (fRec263[i] + (fRec261[i] + (fRec259[i] + (fRec257[i] + (fRec255[i] + (fRec253[i] + (fRec251[i] + (fRec249[i] + (fRec247[i] + (fRec245[i] + (fRec206[i] + (fRec204[i] + (fRec202[i] + (fRec200[i] + (fRec198[i] + (fRec196[i] + (fRec194[i] + (fRec192[i] + (fRec190[i] + (fRec188[i] + (fRec186[i] + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec174[i] + (fRec172[i] + (fRec168[i] + fRec170[i])))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x356f5c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec334[i] = (0.002f * (fRec283[i] * fSlow1));
			}
			
			// LOOP 0x35a8190
			// pre processing
			for (int i=0; i<4; i++) iRec289_tmp[i]=iRec289_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec289[i] = (12345 + (1103515245 * iRec289[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) iRec289_perm[i]=iRec289_tmp[count+i];
			
			// SECTION : 31
			// LOOP 0x31a3fb0
			// pre processing
			for (int i=0; i<4; i++) fYec133_tmp[i]=fYec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec133[i] = (fZec261[i] - fZec255[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec133_perm[i]=fYec133_tmp[count+i];
			
			// LOOP 0x33ef270
			// pre processing
			for (int i=0; i<4; i++) fYec158_tmp[i]=fYec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec158[i] = (fZec277[i] - fZec276[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec158_perm[i]=fYec158_tmp[count+i];
			
			// LOOP 0x34e5e40
			// pre processing
			for (int i=0; i<4; i++) fYec195_tmp[i]=fYec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec195[i] = (fZec299[i] - fZec298[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec195_perm[i]=fYec195_tmp[count+i];
			
			// LOOP 0x35a7ec0
			// exec code
			for (int i=0; i<count; i++) {
				fZec337[i] = faustpower<2>(float(min(1.0f, max(-1.0f, (fZec334[i] + ((4.656612875245796e-16f * iRec289[i]) + fZec332[i]))))));
			}
			
			// SECTION : 32
			// LOOP 0x31a3c80
			// pre processing
			for (int i=0; i<4; i++) fRec0_tmp[i]=fRec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec0[i] = (fConst21 * ((fZec261[i] - (fZec255[i] + fYec133[i-1])) + fRec0[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec0_perm[i]=fRec0_tmp[count+i];
			
			// LOOP 0x33eedb0
			// pre processing
			for (int i=0; i<4; i++) fRec208_tmp[i]=fRec208_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec208[i] = (fConst21 * ((fZec277[i] - (fZec276[i] + fYec158[i-1])) + fRec208[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec208_perm[i]=fRec208_tmp[count+i];
			
			// LOOP 0x345a960
			// exec code
			for (int i=0; i<count; i++) {
				fZec279[i] = ((fRec142[i] * fZec209[i]) + ((fRec140[i] * fZec208[i]) + ((fRec138[i] * fZec207[i]) + ((fRec136[i] * fZec206[i]) + ((fRec134[i] * fZec205[i]) + ((fRec132[i] * fZec188[i]) + ((fRec130[i] * fZec171[i]) + ((fRec128[i] * fZec154[i]) + ((fRec126[i] * fZec137[i]) + ((fRec124[i] * fZec120[i]) + ((fRec122[i] * fZec103[i]) + ((fRec120[i] * fZec86[i]) + ((fRec118[i] * fZec69[i]) + ((fRec116[i] * fZec52[i]) + ((fRec114[i] * fZec35[i]) + ((fRec112[i] * fZec18[i]) + (fRec110[i] * fZec0[i])))))))))))))))));
			}
			
			// LOOP 0x349b190
			// pre processing
			for (int i=0; i<4; i++) fRec268_tmp[i]=fRec268_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec268[i] = (fConst21 * fRec268[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec268_perm[i]=fRec268_tmp[count+i];
			
			// LOOP 0x34e59b0
			// pre processing
			for (int i=0; i<4; i++) fRec277_tmp[i]=fRec277_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec277[i] = (fConst21 * ((fZec299[i] - (fZec298[i] + fYec195[i-1])) + fRec277[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec277_perm[i]=fRec277_tmp[count+i];
			
			// LOOP 0x35a78b0
			// pre processing
			for (int i=0; i<4; i++) fRec286_tmp[i]=fRec286_perm[i];
			for (int i=0; i<4; i++) iRec287_tmp[i]=iRec287_perm[i];
			for (int i=0; i<4; i++) fRec288_tmp[i]=fRec288_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iZec338[i] = int((iRec287[i-1] < iConst28));
				fRec286[i] = ((iZec338[i])?(fRec286[i-1] + fZec337[i]):fZec337[i]);
				iRec287[i] = ((iZec338[i])?(1 + iRec287[i-1]):1);
				fRec288[i] = ((iZec338[i])?fRec288[i-1]:fRec286[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec288_perm[i]=fRec288_tmp[count+i];
			for (int i=0; i<4; i++) iRec287_perm[i]=iRec287_tmp[count+i];
			for (int i=0; i<4; i++) fRec286_perm[i]=fRec286_tmp[count+i];
			
			// SECTION : 33
			// LOOP 0x31a2d70
			// exec code
			for (int i=0; i<count; i++) {
				fZec262[i] = (fZec255[i] + (0.002f * (fRec0[i] * fSlow1)));
			}
			
			// LOOP 0x33eeca0
			// exec code
			for (int i=0; i<count; i++) {
				fZec278[i] = (fZec276[i] + (0.002f * (fRec208[i] * fSlow1)));
			}
			
			// LOOP 0x345a850
			// exec code
			for (int i=0; i<count; i++) {
				fZec281[i] = ((0.002f * (fRec268[i] * fSlow1)) + (0.25f * (fZec280[i] + ((fRec265[i] * fZec253[i]) + ((fRec263[i] * fZec252[i]) + ((fRec261[i] * fZec251[i]) + ((fRec259[i] * fZec250[i]) + ((fRec257[i] * fZec249[i]) + ((fRec255[i] * fZec248[i]) + ((fRec253[i] * fZec247[i]) + ((fRec251[i] * fZec246[i]) + ((fRec249[i] * fZec245[i]) + ((fRec247[i] * fZec244[i]) + ((fRec245[i] * fZec243[i]) + ((fRec206[i] * fZec242[i]) + ((fRec204[i] * fZec241[i]) + ((fRec202[i] * fZec240[i]) + ((fRec200[i] * fZec239[i]) + ((fRec198[i] * fZec238[i]) + ((fRec196[i] * fZec237[i]) + ((fRec194[i] * fZec236[i]) + ((fRec192[i] * fZec235[i]) + ((fRec190[i] * fZec234[i]) + ((fRec188[i] * fZec233[i]) + ((fRec186[i] * fZec232[i]) + ((fRec184[i] * fZec231[i]) + ((fRec182[i] * fZec230[i]) + ((fRec180[i] * fZec229[i]) + ((fRec178[i] * fZec228[i]) + ((fRec176[i] * fZec227[i]) + ((fRec174[i] * fZec226[i]) + ((fRec172[i] * fZec225[i]) + ((fRec170[i] * fZec224[i]) + ((fRec168[i] * fZec223[i]) + ((fRec166[i] * fZec222[i]) + ((fRec164[i] * fZec221[i]) + ((fRec162[i] * fZec220[i]) + ((fRec160[i] * fZec219[i]) + ((fRec158[i] * fZec218[i]) + ((fRec156[i] * fZec217[i]) + ((fRec154[i] * fZec216[i]) + ((fRec152[i] * fZec215[i]) + ((fRec150[i] * fZec214[i]) + ((fRec148[i] * fZec213[i]) + ((fRec146[i] * fZec212[i]) + ((fRec144[i] * fZec211[i]) + (fSlow36 * fZec279[i])))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x34a2770
			// exec code
			for (int i=0; i<count; i++) {
				fZec282[i] = ((fRec276[i] * fZec254[i]) + ((fRec275[i] * fZec253[i]) + ((fRec274[i] * fZec252[i]) + ((fRec273[i] * fZec251[i]) + ((fRec272[i] * fZec250[i]) + ((fRec271[i] * fZec249[i]) + ((fRec270[i] * fZec248[i]) + ((fRec267[i] * fZec247[i]) + ((fRec265[i] * fZec246[i]) + ((fRec263[i] * fZec245[i]) + ((fRec261[i] * fZec244[i]) + ((fRec259[i] * fZec243[i]) + ((fRec257[i] * fZec242[i]) + ((fRec255[i] * fZec241[i]) + ((fRec253[i] * fZec240[i]) + ((fRec251[i] * fZec239[i]) + ((fRec249[i] * fZec238[i]) + ((fRec247[i] * fZec237[i]) + ((fRec245[i] * fZec236[i]) + ((fRec206[i] * fZec235[i]) + ((fRec204[i] * fZec234[i]) + ((fRec202[i] * fZec233[i]) + ((fRec200[i] * fZec232[i]) + ((fRec198[i] * fZec231[i]) + ((fRec196[i] * fZec230[i]) + ((fRec194[i] * fZec229[i]) + ((fRec192[i] * fZec228[i]) + ((fRec190[i] * fZec227[i]) + ((fRec188[i] * fZec226[i]) + ((fRec186[i] * fZec225[i]) + ((fRec184[i] * fZec224[i]) + ((fRec182[i] * fZec223[i]) + ((fRec180[i] * fZec222[i]) + ((fRec178[i] * fZec221[i]) + ((fRec176[i] * fZec220[i]) + ((fRec174[i] * fZec219[i]) + ((fRec172[i] * fZec218[i]) + ((fRec170[i] * fZec217[i]) + ((fRec168[i] * fZec216[i]) + ((fRec166[i] * fZec215[i]) + ((fRec164[i] * fZec214[i]) + ((fRec162[i] * fZec213[i]) + ((fRec160[i] * fZec212[i]) + ((fRec158[i] * fZec211[i]) + (fSlow36 * ((fRec156[i] * fZec209[i]) + ((fRec154[i] * fZec208[i]) + ((fRec152[i] * fZec207[i]) + ((fRec150[i] * fZec206[i]) + ((fRec148[i] * fZec205[i]) + ((fRec146[i] * fZec188[i]) + ((fRec144[i] * fZec171[i]) + ((fRec142[i] * fZec154[i]) + ((fRec140[i] * fZec137[i]) + ((fRec138[i] * fZec120[i]) + ((fRec136[i] * fZec103[i]) + ((fRec134[i] * fZec86[i]) + ((fRec132[i] * fZec69[i]) + ((fRec130[i] * fZec52[i]) + ((fRec128[i] * fZec35[i]) + ((fRec126[i] * fZec18[i]) + (fRec124[i] * fZec0[i]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x34e58a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec300[i] = (fZec298[i] + (0.002f * (fRec277[i] * fSlow1)));
			}
			
			// LOOP 0x35a7770
			// pre processing
			for (int i=0; i<4; i++) fYec198_tmp[i]=fYec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec198[i] = log10f(sqrtf((fConst29 * fRec288[i])));
			}
			// post processing
			for (int i=0; i<4; i++) fYec198_perm[i]=fYec198_tmp[count+i];
			
			// SECTION : 34
			// LOOP 0x34a2630
			// exec code
			for (int i=0; i<count; i++) {
				fZec283[i] = (0.25f * fZec282[i]);
			}
			
			// LOOP 0x34d9230
			// exec code
			for (int i=0; i<count; i++) {
				fZec284[i] = ((fSlow36 * (fRec132[i] + (fRec130[i] + (fRec128[i] + (fRec126[i] + (fRec124[i] + (fRec140[i] + (fRec138[i] + (fRec136[i] + (fRec134[i] + (fRec156[i] + (fRec154[i] + (fRec152[i] + (fRec150[i] + (fRec148[i] + (fRec146[i] + (fRec142[i] + fRec144[i]))))))))))))))))) + (fRec276[i] + (fRec275[i] + (fRec274[i] + (fRec273[i] + (fRec272[i] + (fRec271[i] + (fRec270[i] + (fRec267[i] + (fRec265[i] + (fRec263[i] + (fRec261[i] + (fRec259[i] + (fRec257[i] + (fRec255[i] + (fRec253[i] + (fRec251[i] + (fRec249[i] + (fRec247[i] + (fRec245[i] + fZec260[i]))))))))))))))))))));
			}
			
			// LOOP 0x35a7660
			// exec code
			for (int i=0; i<count; i++) {
				fZec339[i] = (2e+01f * fYec198[i]);
			}
			
			// LOOP 0x35adf50
			// exec code
			for (int i=0; i<count; i++) {
				fZec340[i] = (2e+01f * fYec198[i-1]);
			}
			
			// LOOP 0x35c2000
			// pre processing
			for (int i=0; i<4; i++) fYec200_tmp[i]=fYec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec200[i] = (fSlow106 * fZec278[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec200_perm[i]=fYec200_tmp[count+i];
			
			// LOOP 0x35c9970
			// pre processing
			for (int i=0; i<4; i++) fYec202_tmp[i]=fYec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec202[i] = (fSlow109 * fZec262[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec202_perm[i]=fYec202_tmp[count+i];
			
			// LOOP 0x35d0fc0
			// pre processing
			for (int i=0; i<4; i++) fYec204_tmp[i]=fYec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec204[i] = (fSlow112 * fZec281[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec204_perm[i]=fYec204_tmp[count+i];
			
			// LOOP 0x35d8650
			// pre processing
			for (int i=0; i<4; i++) fYec206_tmp[i]=fYec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec206[i] = (fSlow115 * fZec300[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec206_perm[i]=fYec206_tmp[count+i];
			
			// SECTION : 35
			// LOOP 0x34a2520
			// pre processing
			for (int i=0; i<4; i++) fYec186_tmp[i]=fYec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec186[i] = (fZec284[i] - fZec283[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec186_perm[i]=fYec186_tmp[count+i];
			
			// LOOP 0x352baf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec301[i] = (0.25f * ((fRec273[i] * fZec254[i]) + ((fRec272[i] * fZec253[i]) + ((fRec271[i] * fZec252[i]) + ((fRec270[i] * fZec251[i]) + ((fRec267[i] * fZec250[i]) + ((fRec281[i] * fZec249[i]) + ((fRec280[i] * fZec248[i]) + ((fRec279[i] * fZec247[i]) + ((fRec278[i] * fZec246[i]) + ((fRec276[i] * fZec245[i]) + ((fRec275[i] * fZec244[i]) + ((fRec274[i] * fZec243[i]) + ((fRec273[i] * fZec242[i]) + ((fRec272[i] * fZec241[i]) + ((fRec271[i] * fZec240[i]) + ((fRec270[i] * fZec239[i]) + ((fRec267[i] * fZec238[i]) + ((fRec265[i] * fZec237[i]) + ((fRec263[i] * fZec236[i]) + ((fRec261[i] * fZec235[i]) + ((fRec259[i] * fZec234[i]) + ((fRec257[i] * fZec233[i]) + ((fRec255[i] * fZec232[i]) + ((fRec253[i] * fZec231[i]) + ((fRec251[i] * fZec230[i]) + ((fRec249[i] * fZec229[i]) + ((fRec247[i] * fZec228[i]) + ((fRec245[i] * fZec227[i]) + ((fRec206[i] * fZec226[i]) + ((fRec204[i] * fZec225[i]) + ((fRec202[i] * fZec224[i]) + ((fRec200[i] * fZec223[i]) + ((fRec198[i] * fZec222[i]) + ((fRec196[i] * fZec221[i]) + ((fRec194[i] * fZec220[i]) + ((fRec192[i] * fZec219[i]) + ((fRec190[i] * fZec218[i]) + ((fRec188[i] * fZec217[i]) + ((fRec186[i] * fZec216[i]) + ((fRec184[i] * fZec215[i]) + ((fRec182[i] * fZec214[i]) + ((fRec180[i] * fZec213[i]) + ((fRec178[i] * fZec212[i]) + ((fRec176[i] * fZec211[i]) + (fSlow36 * ((fRec174[i] * fZec209[i]) + ((fRec172[i] * fZec208[i]) + ((fRec170[i] * fZec207[i]) + ((fRec168[i] * fZec206[i]) + ((fRec166[i] * fZec205[i]) + ((fRec164[i] * fZec188[i]) + ((fRec162[i] * fZec171[i]) + ((fRec160[i] * fZec154[i]) + ((fRec158[i] * fZec137[i]) + ((fRec156[i] * fZec120[i]) + ((fRec154[i] * fZec103[i]) + ((fRec152[i] * fZec86[i]) + ((fRec150[i] * fZec69[i]) + ((fRec148[i] * fZec52[i]) + ((fRec146[i] * fZec35[i]) + ((fRec144[i] * fZec18[i]) + (fRec142[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3545190
			// exec code
			for (int i=0; i<count; i++) {
				fZec331[i] = ((fRec273[i] + (fRec271[i] + fRec272[i])) + (2 * ((fZec330[i] + (fZec329[i] + (fZec328[i] + (fZec327[i] + (fZec326[i] + (fZec325[i] + (fZec324[i] + (fZec323[i] + (fZec322[i] + (fZec321[i] + (fRec270[i] + (fRec267[i] + (fZec320[i] + (fZec319[i] + (fZec318[i] + (fZec317[i] + (fZec316[i] + (fZec315[i] + (fZec314[i] + (fZec313[i] + (fZec312[i] + (fZec311[i] + (fZec310[i] + (fZec309[i] + (fZec308[i] + (fZec307[i] + (fZec306[i] + (fZec305[i] + (fZec304[i] + (fZec303[i] + (fZec302[i] + ((((((((0.5f * fRec176[i]) + (0.5f * fRec178[i])) + (0.5f * fRec180[i])) + (0.5f * fRec182[i])) + (0.5f * fRec184[i])) + (0.5f * fRec186[i])) + (0.5f * fRec188[i])) + (0.5f * fRec190[i]))))))))))))))))))))))))))))))))) + (fSlow91 * (fRec156[i] + (fRec154[i] + (fRec152[i] + (fRec150[i] + (fRec148[i] + (fRec146[i] + (fRec144[i] + (fRec142[i] + fZec257[i]))))))))))));
			}
			
			// LOOP 0x35a7260
			// pre processing
			for (int i=0; i<4; i++) fRec285_tmp[i]=fRec285_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec285[i] = min(1.0f, max(0.0f, ((((int((fZec339[i] > -25.0f)))?((int((fZec340[i] < -25.0f)))?1.0f:0.0f):0.0f) + fRec285[i-1]) - ((int((fZec340[i] > -35.0f)))?((int((fZec339[i] < -35.0f)))?1.0f:0.0f):0.0f))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec285_perm[i]=fRec285_tmp[count+i];
			
			// LOOP 0x35c1a80
			// pre processing
			for (int i=0; i<4; i++) fRec293_tmp[i]=fRec293_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec293[i] = (fConst32 * ((fYec200[i] - fYec200[i-1]) + fRec293[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec293_perm[i]=fRec293_tmp[count+i];
			
			// LOOP 0x35c93f0
			// pre processing
			for (int i=0; i<4; i++) fRec295_tmp[i]=fRec295_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec295[i] = (fConst34 * ((fYec202[i] - fYec202[i-1]) + fRec295[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec295_perm[i]=fRec295_tmp[count+i];
			
			// LOOP 0x35d0a40
			// pre processing
			for (int i=0; i<4; i++) fRec297_tmp[i]=fRec297_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec297[i] = (fConst36 * ((fYec204[i] - fYec204[i-1]) + fRec297[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec297_perm[i]=fRec297_tmp[count+i];
			
			// LOOP 0x35d80d0
			// pre processing
			for (int i=0; i<4; i++) fRec299_tmp[i]=fRec299_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec299[i] = (fConst38 * ((fYec206[i] - fYec206[i-1]) + fRec299[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec299_perm[i]=fRec299_tmp[count+i];
			
			// SECTION : 36
			// LOOP 0x34a2090
			// pre processing
			for (int i=0; i<4; i++) fRec269_tmp[i]=fRec269_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec269[i] = (fConst21 * ((fZec284[i] - (fZec283[i] + fYec186[i-1])) + fRec269[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec269_perm[i]=fRec269_tmp[count+i];
			
			// LOOP 0x352b9e0
			// pre processing
			for (int i=0; i<4; i++) fYec196_tmp[i]=fYec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec196[i] = (fZec331[i] - fZec301[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec196_perm[i]=fYec196_tmp[count+i];
			
			// LOOP 0x35a66b0
			// pre processing
			for (int i=0; i<4; i++) fRec284_tmp[i]=fRec284_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec284[i] = ((fConst26 * ((int((fRec285[i] > 0.5f)))?((int((fRec285[i-1] < 0.5f)))?1.0f:0.0f):0.0f)) + (fConst27 * fRec284[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec284_perm[i]=fRec284_tmp[count+i];
			
			// LOOP 0x35c1970
			// pre processing
			for (int i=0; i<4; i++) fYec201_tmp[i]=fYec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec201[i] = ((fSlow107 * fZec278[i]) + (0.5416666666666667f * fRec293[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec201_perm[i]=fYec201_tmp[count+i];
			
			// LOOP 0x35c92e0
			// pre processing
			for (int i=0; i<4; i++) fYec203_tmp[i]=fYec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec203[i] = ((fSlow110 * fZec262[i]) + (0.5416666666666667f * fRec295[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec203_perm[i]=fYec203_tmp[count+i];
			
			// LOOP 0x35d0930
			// pre processing
			for (int i=0; i<4; i++) fYec205_tmp[i]=fYec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec205[i] = ((fSlow113 * fZec281[i]) + (0.5416666666666667f * fRec297[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec205_perm[i]=fYec205_tmp[count+i];
			
			// LOOP 0x35d7fc0
			// pre processing
			for (int i=0; i<4; i++) fYec207_tmp[i]=fYec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec207[i] = ((fSlow116 * fZec300[i]) + (0.5416666666666667f * fRec299[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec207_perm[i]=fYec207_tmp[count+i];
			
			// LOOP 0x35e3300
			// pre processing
			for (int i=0; i<4; i++) fRec301_tmp[i]=fRec301_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec301[i] = (fRec301[i-1] + (fConst12 * (fYec200[i] - fRec301[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec301_perm[i]=fRec301_tmp[count+i];
			
			// LOOP 0x35e4fd0
			// pre processing
			for (int i=0; i<4; i++) fRec303_tmp[i]=fRec303_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec303[i] = (fRec303[i-1] + (fConst14 * (fYec202[i] - fRec303[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec303_perm[i]=fRec303_tmp[count+i];
			
			// LOOP 0x35e6ef0
			// pre processing
			for (int i=0; i<4; i++) fRec305_tmp[i]=fRec305_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec305[i] = (fRec305[i-1] + (fConst17 * (fYec204[i] - fRec305[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec305_perm[i]=fRec305_tmp[count+i];
			
			// LOOP 0x35e8cf0
			// pre processing
			for (int i=0; i<4; i++) fRec307_tmp[i]=fRec307_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec307[i] = (fRec307[i-1] + (fConst20 * (fYec206[i] - fRec307[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec307_perm[i]=fRec307_tmp[count+i];
			
			// SECTION : 37
			// LOOP 0x34a1f80
			// exec code
			for (int i=0; i<count; i++) {
				fZec285[i] = (fRec269[i] * fSlow1);
			}
			
			// LOOP 0x352b5a0
			// pre processing
			for (int i=0; i<4; i++) fRec282_tmp[i]=fRec282_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec282[i] = (fConst21 * ((fZec331[i] - (fZec301[i] + fYec196[i-1])) + fRec282[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec282_perm[i]=fRec282_tmp[count+i];
			
			// LOOP 0x356f4b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec335[i] = (fZec332[i] + fZec334[i]);
			}
			
			// LOOP 0x35a6560
			// pre processing
			for (int i=0; i<4; i++) fYec199_tmp[i]=fYec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec199[i] = min(1.0f, (fConst30 * fRec284[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec199_perm[i]=fYec199_tmp[count+i];
			
			// LOOP 0x35b6560
			// pre processing
			for (int i=0; i<4; i++) fRec290_tmp[i]=fRec290_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec290[i] = (fSlow100 + (0.98f * fRec290[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec290_perm[i]=fRec290_tmp[count+i];
			
			// LOOP 0x35b9750
			// pre processing
			for (int i=0; i<4; i++) fRec291_tmp[i]=fRec291_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec291[i] = (fRec291[i-1] + (fConst31 * ((fSlow35 * ((fSlow104 * (((0.25f * fZec275[i]) + (0.125f * fZec210[i])) + (0.0625f * fZec279[i]))) + (fSlow102 * ((0.25f * fZec210[i]) + (0.125f * fZec279[i]))))) - fRec291[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec291_perm[i]=fRec291_tmp[count+i];
			
			// LOOP 0x35c1480
			// pre processing
			for (int i=0; i<4; i++) fRec292_tmp[i]=fRec292_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec292[i] = (fConst33 * ((fYec201[i] - fYec201[i-1]) + fRec292[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec292_perm[i]=fRec292_tmp[count+i];
			
			// LOOP 0x35c8e60
			// pre processing
			for (int i=0; i<4; i++) fRec294_tmp[i]=fRec294_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec294[i] = (fConst35 * ((fYec203[i] - fYec203[i-1]) + fRec294[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec294_perm[i]=fRec294_tmp[count+i];
			
			// LOOP 0x35d04b0
			// pre processing
			for (int i=0; i<4; i++) fRec296_tmp[i]=fRec296_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec296[i] = (fConst37 * ((fYec205[i] - fYec205[i-1]) + fRec296[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec296_perm[i]=fRec296_tmp[count+i];
			
			// LOOP 0x35d7b40
			// pre processing
			for (int i=0; i<4; i++) fRec298_tmp[i]=fRec298_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec298[i] = (fConst39 * ((fYec207[i] - fYec207[i-1]) + fRec298[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec298_perm[i]=fRec298_tmp[count+i];
			
			// LOOP 0x35e2ea0
			// pre processing
			for (int i=0; i<4; i++) fRec300_tmp[i]=fRec300_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec300[i] = (fRec300[i-1] + (fConst12 * (fRec301[i] - fRec300[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec300_perm[i]=fRec300_tmp[count+i];
			
			// LOOP 0x35e4c30
			// pre processing
			for (int i=0; i<4; i++) fRec302_tmp[i]=fRec302_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec302[i] = (fRec302[i-1] + (fConst14 * (fRec303[i] - fRec302[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec302_perm[i]=fRec302_tmp[count+i];
			
			// LOOP 0x35e6a40
			// pre processing
			for (int i=0; i<4; i++) fRec304_tmp[i]=fRec304_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec304[i] = (fRec304[i-1] + (fConst17 * (fRec305[i] - fRec304[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec304_perm[i]=fRec304_tmp[count+i];
			
			// LOOP 0x35e8840
			// pre processing
			for (int i=0; i<4; i++) fRec306_tmp[i]=fRec306_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec306[i] = (fRec306[i-1] + (fConst20 * (fRec307[i] - fRec306[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec306_perm[i]=fRec306_tmp[count+i];
			
			// LOOP 0x35ebdf0
			// pre processing
			for (int i=0; i<4; i++) fRec308_tmp[i]=fRec308_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec308[i] = (fSlow121 + (0.98f * fRec308[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec308_perm[i]=fRec308_tmp[count+i];
			
			// SECTION : 38
			// LOOP 0x31a2c30
			// exec code
			for (int i=0; i<count; i++) {
				fZec336[i] = (fSlow97 * ((fSlow95 * fZec335[i]) + ((fSlow93 * (fZec301[i] + (0.002f * (fRec282[i] * fSlow1)))) + ((fSlow90 * fZec300[i]) + ((fSlow88 * (fZec283[i] + (0.002f * fZec285[i]))) + ((fSlow86 * fZec281[i]) + ((fSlow84 * fZec278[i]) + (fSlow82 * fZec262[i]))))))));
			}
			
			// LOOP 0x35a5020
			// exec code
			for (int i=0; i<count; i++) {
				fZec341[i] = (fSlow99 * (max(fSlow98, (0.25f * (fYec199[i-4] + (fYec199[i-3] + (fYec199[i] + fYec199[i-2]))))) * ((0.5f * fZec278[i]) + (0.25f * ((fZec335[i] + fZec282[i]) + (0.008f * fZec285[i]))))));
			}
			
			// LOOP 0x35b6450
			// exec code
			for (int i=0; i<count; i++) {
				fZec342[i] = (fRec291[i] * (0.5f + (4.5f * fRec290[i])));
			}
			
			// LOOP 0x35c1370
			// exec code
			for (int i=0; i<count; i++) {
				fZec343[i] = (fSlow120 * ((fSlow119 * (((fRec306[i] + fRec304[i]) + fRec302[i]) + fRec300[i])) + (fSlow118 * (((fRec298[i] + fRec296[i]) + fRec294[i]) + fRec292[i]))));
			}
			
			// LOOP 0x35ebce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec344[i] = (0.001f + (0.05f * fRec308[i]));
			}
			
			// SECTION : 39
			// LOOP 0x31a2ac0
			// exec code
			for (int i=0; i<count; i++) {
				output0[i] = (FAUSTFLOAT)(fZec344[i] * ((fZec343[i] + (fZec342[i] + fZec341[i])) + fZec336[i]));
			}
			
			// LOOP 0x35f0740
			// exec code
			for (int i=0; i<count; i++) {
				output1[i] = (FAUSTFLOAT)(fZec344[i] * (fZec336[i] + (fZec341[i] + fZec343[i])));
			}
			
			// LOOP 0x35f0d80
			// exec code
			for (int i=0; i<count; i++) {
				output2[i] = (FAUSTFLOAT)(fZec342[i] * fZec344[i]);
			}
			
		}
		if (index < fullcount) {
			// compute the remaining samples if any
			int count = fullcount-index;
			FAUSTFLOAT* output0 = &output[0][index];
			FAUSTFLOAT* output1 = &output[1][index];
			FAUSTFLOAT* output2 = &output[2][index];
			// SECTION : 1
			// LOOP 0x31a9490
			// pre processing
			for (int i=0; i<4; i++) fRec5_tmp[i]=fRec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec5[i] = (((int((fRec5[i-1] > 1.0f)))?(fRec5[i-1] - 1.0f):fRec5[i-1]) + fSlow6);
			}
			// post processing
			for (int i=0; i<4; i++) fRec5_perm[i]=fRec5_tmp[count+i];
			
			// SECTION : 2
			// LOOP 0x31a8ae0
			// exec code
			for (int i=0; i<count; i++) {
				fZec1[i] = ((fSlow7 * sinf((6.283185307179586f * fRec5[i]))) + fSlow5);
			}
			
			// SECTION : 3
			// LOOP 0x31a7d40
			// pre processing
			for (int i=0; i<4; i++) fRec4_tmp[i]=fRec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec2[i] = ((fConst1 * float((4186.009044809578f * (fZec1[i] * fSlow4)))) + fRec4[i-1]);
				fRec4[i] = ((int((fZec2[i] > 1.0f)))?(fZec2[i] - 1.0f):fZec2[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec4_perm[i]=fRec4_tmp[count+i];
			
			// LOOP 0x31c3020
			// pre processing
			for (int i=0; i<4; i++) fRec14_tmp[i]=fRec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec19[i] = ((fConst1 * float((4434.922095629953f * (fZec1[i] * fSlow9)))) + fRec14[i-1]);
				fRec14[i] = ((int((fZec19[i] > 1.0f)))?(fZec19[i] - 1.0f):fZec19[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec14_perm[i]=fRec14_tmp[count+i];
			
			// LOOP 0x31d95b0
			// pre processing
			for (int i=0; i<4; i++) fRec23_tmp[i]=fRec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec36[i] = ((fConst1 * float((4698.63628667852f * (fZec1[i] * fSlow11)))) + fRec23[i-1]);
				fRec23[i] = ((int((fZec36[i] > 1.0f)))?(fZec36[i] - 1.0f):fZec36[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec23_perm[i]=fRec23_tmp[count+i];
			
			// LOOP 0x31efa10
			// pre processing
			for (int i=0; i<4; i++) fRec32_tmp[i]=fRec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec53[i] = ((fConst1 * float((4978.031739553295f * (fZec1[i] * fSlow13)))) + fRec32[i-1]);
				fRec32[i] = ((int((fZec53[i] > 1.0f)))?(fZec53[i] - 1.0f):fZec53[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec32_perm[i]=fRec32_tmp[count+i];
			
			// LOOP 0x3206150
			// pre processing
			for (int i=0; i<4; i++) fRec41_tmp[i]=fRec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec70[i] = ((fConst1 * float((5274.04091060592f * (fSlow15 * fZec1[i])))) + fRec41[i-1]);
				fRec41[i] = ((int((fZec70[i] > 1.0f)))?(fZec70[i] - 1.0f):fZec70[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec41_perm[i]=fRec41_tmp[count+i];
			
			// LOOP 0x321cc90
			// pre processing
			for (int i=0; i<4; i++) fRec50_tmp[i]=fRec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec87[i] = ((fConst1 * float((5587.651702928062f * (fZec1[i] * fSlow17)))) + fRec50[i-1]);
				fRec50[i] = ((int((fZec87[i] > 1.0f)))?(fZec87[i] - 1.0f):fZec87[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec50_perm[i]=fRec50_tmp[count+i];
			
			// LOOP 0x32332a0
			// pre processing
			for (int i=0; i<4; i++) fRec59_tmp[i]=fRec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec104[i] = ((fConst1 * float((5919.91076338615f * (fZec1[i] * fSlow19)))) + fRec59[i-1]);
				fRec59[i] = ((int((fZec104[i] > 1.0f)))?(fZec104[i] - 1.0f):fZec104[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec59_perm[i]=fRec59_tmp[count+i];
			
			// LOOP 0x3249b70
			// pre processing
			for (int i=0; i<4; i++) fRec68_tmp[i]=fRec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec121[i] = ((fConst1 * float((6271.926975707989f * (fZec1[i] * fSlow21)))) + fRec68[i-1]);
				fRec68[i] = ((int((fZec121[i] > 1.0f)))?(fZec121[i] - 1.0f):fZec121[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec68_perm[i]=fRec68_tmp[count+i];
			
			// LOOP 0x32603f0
			// pre processing
			for (int i=0; i<4; i++) fRec77_tmp[i]=fRec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec138[i] = ((fConst1 * float((6644.875161279122f * (fZec1[i] * fSlow23)))) + fRec77[i-1]);
				fRec77[i] = ((int((fZec138[i] > 1.0f)))?(fZec138[i] - 1.0f):fZec138[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec77_perm[i]=fRec77_tmp[count+i];
			
			// LOOP 0x3277010
			// pre processing
			for (int i=0; i<4; i++) fRec86_tmp[i]=fRec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec155[i] = ((fConst1 * float((7.04e+03f * (fZec1[i] * fSlow25)))) + fRec86[i-1]);
				fRec86[i] = ((int((fZec155[i] > 1.0f)))?(fZec155[i] - 1.0f):fZec155[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec86_perm[i]=fRec86_tmp[count+i];
			
			// LOOP 0x328d560
			// pre processing
			for (int i=0; i<4; i++) fRec95_tmp[i]=fRec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec172[i] = ((fConst1 * float((7458.620184289437f * (fZec1[i] * fSlow27)))) + fRec95[i-1]);
				fRec95[i] = ((int((fZec172[i] > 1.0f)))?(fZec172[i] - 1.0f):fZec172[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec95_perm[i]=fRec95_tmp[count+i];
			
			// LOOP 0x32a40b0
			// pre processing
			for (int i=0; i<4; i++) fRec104_tmp[i]=fRec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec189[i] = ((fConst1 * float((7902.132820097988f * (fZec1[i] * fSlow29)))) + fRec104[i-1]);
				fRec104[i] = ((int((fZec189[i] > 1.0f)))?(fZec189[i] - 1.0f):fZec189[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec104_perm[i]=fRec104_tmp[count+i];
			
			// SECTION : 4
			// LOOP 0x31a7c30
			// exec code
			for (int i=0; i<count; i++) {
				fZec3[i] = (fRec4[i] - fRec4[i-1]);
			}
			
			// LOOP 0x31c2f10
			// exec code
			for (int i=0; i<count; i++) {
				fZec20[i] = (fRec14[i] - fRec14[i-1]);
			}
			
			// LOOP 0x31d94a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec37[i] = (fRec23[i] - fRec23[i-1]);
			}
			
			// LOOP 0x31ef900
			// exec code
			for (int i=0; i<count; i++) {
				fZec54[i] = (fRec32[i] - fRec32[i-1]);
			}
			
			// LOOP 0x3206040
			// exec code
			for (int i=0; i<count; i++) {
				fZec71[i] = (fRec41[i] - fRec41[i-1]);
			}
			
			// LOOP 0x321cb80
			// exec code
			for (int i=0; i<count; i++) {
				fZec88[i] = (fRec50[i] - fRec50[i-1]);
			}
			
			// LOOP 0x3233190
			// exec code
			for (int i=0; i<count; i++) {
				fZec105[i] = (fRec59[i] - fRec59[i-1]);
			}
			
			// LOOP 0x3249a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec122[i] = (fRec68[i] - fRec68[i-1]);
			}
			
			// LOOP 0x32602e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec139[i] = (fRec77[i] - fRec77[i-1]);
			}
			
			// LOOP 0x3276f00
			// exec code
			for (int i=0; i<count; i++) {
				fZec156[i] = (fRec86[i] - fRec86[i-1]);
			}
			
			// LOOP 0x328d450
			// exec code
			for (int i=0; i<count; i++) {
				fZec173[i] = (fRec95[i] - fRec95[i-1]);
			}
			
			// LOOP 0x32a3fa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec190[i] = (fRec104[i] - fRec104[i-1]);
			}
			
			// SECTION : 5
			// LOOP 0x31a74b0
			// pre processing
			for (int i=0; i<4; i++) iRec3_tmp[i]=iRec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec3[i] = ((int((fZec3[i] < 0)))?(1 - iRec3[i-1]):iRec3[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec3_perm[i]=iRec3_tmp[count+i];
			
			// LOOP 0x31c2830
			// pre processing
			for (int i=0; i<4; i++) iRec13_tmp[i]=iRec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec13[i] = ((int((fZec20[i] < 0)))?(1 - iRec13[i-1]):iRec13[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec13_perm[i]=iRec13_tmp[count+i];
			
			// LOOP 0x31d8dc0
			// pre processing
			for (int i=0; i<4; i++) iRec22_tmp[i]=iRec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec22[i] = ((int((fZec37[i] < 0)))?(1 - iRec22[i-1]):iRec22[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec22_perm[i]=iRec22_tmp[count+i];
			
			// LOOP 0x31ef220
			// pre processing
			for (int i=0; i<4; i++) iRec31_tmp[i]=iRec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec31[i] = ((int((fZec54[i] < 0)))?(1 - iRec31[i-1]):iRec31[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec31_perm[i]=iRec31_tmp[count+i];
			
			// LOOP 0x3205960
			// pre processing
			for (int i=0; i<4; i++) iRec40_tmp[i]=iRec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec40[i] = ((int((fZec71[i] < 0)))?(1 - iRec40[i-1]):iRec40[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec40_perm[i]=iRec40_tmp[count+i];
			
			// LOOP 0x321c4a0
			// pre processing
			for (int i=0; i<4; i++) iRec49_tmp[i]=iRec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec49[i] = ((int((fZec88[i] < 0)))?(1 - iRec49[i-1]):iRec49[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec49_perm[i]=iRec49_tmp[count+i];
			
			// LOOP 0x3232ab0
			// pre processing
			for (int i=0; i<4; i++) iRec58_tmp[i]=iRec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec58[i] = ((int((fZec105[i] < 0)))?(1 - iRec58[i-1]):iRec58[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec58_perm[i]=iRec58_tmp[count+i];
			
			// LOOP 0x3249410
			// pre processing
			for (int i=0; i<4; i++) iRec67_tmp[i]=iRec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec67[i] = ((int((fZec122[i] < 0)))?(1 - iRec67[i-1]):iRec67[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec67_perm[i]=iRec67_tmp[count+i];
			
			// LOOP 0x325fc00
			// pre processing
			for (int i=0; i<4; i++) iRec76_tmp[i]=iRec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec76[i] = ((int((fZec139[i] < 0)))?(1 - iRec76[i-1]):iRec76[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec76_perm[i]=iRec76_tmp[count+i];
			
			// LOOP 0x3276820
			// pre processing
			for (int i=0; i<4; i++) iRec85_tmp[i]=iRec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec85[i] = ((int((fZec156[i] < 0)))?(1 - iRec85[i-1]):iRec85[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec85_perm[i]=iRec85_tmp[count+i];
			
			// LOOP 0x328cd70
			// pre processing
			for (int i=0; i<4; i++) iRec94_tmp[i]=iRec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec94[i] = ((int((fZec173[i] < 0)))?(1 - iRec94[i-1]):iRec94[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec94_perm[i]=iRec94_tmp[count+i];
			
			// LOOP 0x32a3910
			// pre processing
			for (int i=0; i<4; i++) iRec103_tmp[i]=iRec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec103[i] = ((int((fZec190[i] < 0)))?(1 - iRec103[i-1]):iRec103[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec103_perm[i]=iRec103_tmp[count+i];
			
			// SECTION : 6
			// LOOP 0x31a7370
			// pre processing
			for (int i=0; i<4; i++) fYec0_tmp[i]=fYec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec0[i] = (fRec4[i] + iRec3[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec0_perm[i]=fYec0_tmp[count+i];
			
			// LOOP 0x31c26f0
			// pre processing
			for (int i=0; i<4; i++) fYec7_tmp[i]=fYec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec7[i] = (fRec14[i] + iRec13[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec7_perm[i]=fYec7_tmp[count+i];
			
			// LOOP 0x31d8c80
			// pre processing
			for (int i=0; i<4; i++) fYec14_tmp[i]=fYec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec14[i] = (fRec23[i] + iRec22[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec14_perm[i]=fYec14_tmp[count+i];
			
			// LOOP 0x31ef0e0
			// pre processing
			for (int i=0; i<4; i++) fYec21_tmp[i]=fYec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec21[i] = (fRec32[i] + iRec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec21_perm[i]=fYec21_tmp[count+i];
			
			// LOOP 0x3205820
			// pre processing
			for (int i=0; i<4; i++) fYec28_tmp[i]=fYec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec28[i] = (fRec41[i] + iRec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec28_perm[i]=fYec28_tmp[count+i];
			
			// LOOP 0x321c360
			// pre processing
			for (int i=0; i<4; i++) fYec35_tmp[i]=fYec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec35[i] = (fRec50[i] + iRec49[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec35_perm[i]=fYec35_tmp[count+i];
			
			// LOOP 0x3232970
			// pre processing
			for (int i=0; i<4; i++) fYec42_tmp[i]=fYec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec42[i] = (fRec59[i] + iRec58[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec42_perm[i]=fYec42_tmp[count+i];
			
			// LOOP 0x3249300
			// pre processing
			for (int i=0; i<4; i++) fYec49_tmp[i]=fYec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec49[i] = (fRec68[i] + iRec67[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec49_perm[i]=fYec49_tmp[count+i];
			
			// LOOP 0x325fac0
			// pre processing
			for (int i=0; i<4; i++) fYec56_tmp[i]=fYec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec56[i] = (fRec77[i] + iRec76[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec56_perm[i]=fYec56_tmp[count+i];
			
			// LOOP 0x32766e0
			// pre processing
			for (int i=0; i<4; i++) fYec63_tmp[i]=fYec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec63[i] = (fRec86[i] + iRec85[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec63_perm[i]=fYec63_tmp[count+i];
			
			// LOOP 0x328cc30
			// pre processing
			for (int i=0; i<4; i++) fYec70_tmp[i]=fYec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec70[i] = (fRec95[i] + iRec94[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec70_perm[i]=fYec70_tmp[count+i];
			
			// LOOP 0x32a37d0
			// pre processing
			for (int i=0; i<4; i++) fYec77_tmp[i]=fYec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec77[i] = (fRec104[i] + iRec103[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec77_perm[i]=fYec77_tmp[count+i];
			
			// SECTION : 7
			// LOOP 0x31a7230
			// exec code
			for (int i=0; i<count; i++) {
				fZec4[i] = (0.5f * fYec0[i]);
			}
			
			// LOOP 0x31b01e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec5[i] = (0.5f * fYec0[i-1]);
			}
			
			// LOOP 0x31c25b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec21[i] = (0.5f * fYec7[i]);
			}
			
			// LOOP 0x31c6cd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec22[i] = (0.5f * fYec7[i-1]);
			}
			
			// LOOP 0x31d8b40
			// exec code
			for (int i=0; i<count; i++) {
				fZec38[i] = (0.5f * fYec14[i]);
			}
			
			// LOOP 0x31dd1f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec39[i] = (0.5f * fYec14[i-1]);
			}
			
			// LOOP 0x31eefa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec55[i] = (0.5f * fYec21[i]);
			}
			
			// LOOP 0x31f3650
			// exec code
			for (int i=0; i<count; i++) {
				fZec56[i] = (0.5f * fYec21[i-1]);
			}
			
			// LOOP 0x32056e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec72[i] = (0.5f * fYec28[i]);
			}
			
			// LOOP 0x3209db0
			// exec code
			for (int i=0; i<count; i++) {
				fZec73[i] = (0.5f * fYec28[i-1]);
			}
			
			// LOOP 0x321c220
			// exec code
			for (int i=0; i<count; i++) {
				fZec89[i] = (0.5f * fYec35[i]);
			}
			
			// LOOP 0x32208d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec90[i] = (0.5f * fYec35[i-1]);
			}
			
			// LOOP 0x3232830
			// exec code
			for (int i=0; i<count; i++) {
				fZec106[i] = (0.5f * fYec42[i]);
			}
			
			// LOOP 0x3236ee0
			// exec code
			for (int i=0; i<count; i++) {
				fZec107[i] = (0.5f * fYec42[i-1]);
			}
			
			// LOOP 0x32491f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec123[i] = (0.5f * fYec49[i]);
			}
			
			// LOOP 0x324d900
			// exec code
			for (int i=0; i<count; i++) {
				fZec124[i] = (0.5f * fYec49[i-1]);
			}
			
			// LOOP 0x325f980
			// exec code
			for (int i=0; i<count; i++) {
				fZec140[i] = (0.5f * fYec56[i]);
			}
			
			// LOOP 0x3264030
			// exec code
			for (int i=0; i<count; i++) {
				fZec141[i] = (0.5f * fYec56[i-1]);
			}
			
			// LOOP 0x32765a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec157[i] = (0.5f * fYec63[i]);
			}
			
			// LOOP 0x327abf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec158[i] = (0.5f * fYec63[i-1]);
			}
			
			// LOOP 0x328caf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec174[i] = (0.5f * fYec70[i]);
			}
			
			// LOOP 0x3291200
			// exec code
			for (int i=0; i<count; i++) {
				fZec175[i] = (0.5f * fYec70[i-1]);
			}
			
			// LOOP 0x32a3690
			// exec code
			for (int i=0; i<count; i++) {
				fZec191[i] = (0.5f * fYec77[i]);
			}
			
			// LOOP 0x32a7cd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec192[i] = (0.5f * fYec77[i-1]);
			}
			
			// SECTION : 8
			// LOOP 0x31afba0
			// pre processing
			for (int i=0; i<4; i++) iRec6_tmp[i]=iRec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec6[i] = ((int(((fZec4[i] - fZec5[i]) < 0)))?(1 - iRec6[i-1]):iRec6[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec6_perm[i]=iRec6_tmp[count+i];
			
			// LOOP 0x31c66d0
			// pre processing
			for (int i=0; i<4; i++) iRec15_tmp[i]=iRec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec15[i] = ((int(((fZec21[i] - fZec22[i]) < 0)))?(1 - iRec15[i-1]):iRec15[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec15_perm[i]=iRec15_tmp[count+i];
			
			// LOOP 0x31dcbf0
			// pre processing
			for (int i=0; i<4; i++) iRec24_tmp[i]=iRec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec24[i] = ((int(((fZec38[i] - fZec39[i]) < 0)))?(1 - iRec24[i-1]):iRec24[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec24_perm[i]=iRec24_tmp[count+i];
			
			// LOOP 0x31f3050
			// pre processing
			for (int i=0; i<4; i++) iRec33_tmp[i]=iRec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec33[i] = ((int(((fZec55[i] - fZec56[i]) < 0)))?(1 - iRec33[i-1]):iRec33[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec33_perm[i]=iRec33_tmp[count+i];
			
			// LOOP 0x32097b0
			// pre processing
			for (int i=0; i<4; i++) iRec42_tmp[i]=iRec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec42[i] = ((int(((fZec72[i] - fZec73[i]) < 0)))?(1 - iRec42[i-1]):iRec42[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec42_perm[i]=iRec42_tmp[count+i];
			
			// LOOP 0x32202d0
			// pre processing
			for (int i=0; i<4; i++) iRec51_tmp[i]=iRec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec51[i] = ((int(((fZec89[i] - fZec90[i]) < 0)))?(1 - iRec51[i-1]):iRec51[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec51_perm[i]=iRec51_tmp[count+i];
			
			// LOOP 0x32368e0
			// pre processing
			for (int i=0; i<4; i++) iRec60_tmp[i]=iRec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec60[i] = ((int(((fZec106[i] - fZec107[i]) < 0)))?(1 - iRec60[i-1]):iRec60[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec60_perm[i]=iRec60_tmp[count+i];
			
			// LOOP 0x324d300
			// pre processing
			for (int i=0; i<4; i++) iRec69_tmp[i]=iRec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec69[i] = ((int(((fZec123[i] - fZec124[i]) < 0)))?(1 - iRec69[i-1]):iRec69[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec69_perm[i]=iRec69_tmp[count+i];
			
			// LOOP 0x3263a30
			// pre processing
			for (int i=0; i<4; i++) iRec78_tmp[i]=iRec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec78[i] = ((int(((fZec140[i] - fZec141[i]) < 0)))?(1 - iRec78[i-1]):iRec78[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec78_perm[i]=iRec78_tmp[count+i];
			
			// LOOP 0x327a5f0
			// pre processing
			for (int i=0; i<4; i++) iRec87_tmp[i]=iRec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec87[i] = ((int(((fZec157[i] - fZec158[i]) < 0)))?(1 - iRec87[i-1]):iRec87[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec87_perm[i]=iRec87_tmp[count+i];
			
			// LOOP 0x3290c00
			// pre processing
			for (int i=0; i<4; i++) iRec96_tmp[i]=iRec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec96[i] = ((int(((fZec174[i] - fZec175[i]) < 0)))?(1 - iRec96[i-1]):iRec96[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec96_perm[i]=iRec96_tmp[count+i];
			
			// LOOP 0x32a76d0
			// pre processing
			for (int i=0; i<4; i++) iRec105_tmp[i]=iRec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec105[i] = ((int(((fZec191[i] - fZec192[i]) < 0)))?(1 - iRec105[i-1]):iRec105[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec105_perm[i]=iRec105_tmp[count+i];
			
			// SECTION : 9
			// LOOP 0x31a70f0
			// pre processing
			for (int i=0; i<4; i++) fYec1_tmp[i]=fYec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec1[i] = (iRec6[i] + fZec4[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec1_perm[i]=fYec1_tmp[count+i];
			
			// LOOP 0x31c2470
			// pre processing
			for (int i=0; i<4; i++) fYec8_tmp[i]=fYec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec8[i] = (iRec15[i] + fZec21[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec8_perm[i]=fYec8_tmp[count+i];
			
			// LOOP 0x31d8a00
			// pre processing
			for (int i=0; i<4; i++) fYec15_tmp[i]=fYec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec15[i] = (iRec24[i] + fZec38[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec15_perm[i]=fYec15_tmp[count+i];
			
			// LOOP 0x31eee60
			// pre processing
			for (int i=0; i<4; i++) fYec22_tmp[i]=fYec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec22[i] = (iRec33[i] + fZec55[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec22_perm[i]=fYec22_tmp[count+i];
			
			// LOOP 0x32055a0
			// pre processing
			for (int i=0; i<4; i++) fYec29_tmp[i]=fYec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec29[i] = (iRec42[i] + fZec72[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec29_perm[i]=fYec29_tmp[count+i];
			
			// LOOP 0x321c0e0
			// pre processing
			for (int i=0; i<4; i++) fYec36_tmp[i]=fYec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec36[i] = (iRec51[i] + fZec89[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec36_perm[i]=fYec36_tmp[count+i];
			
			// LOOP 0x32326f0
			// pre processing
			for (int i=0; i<4; i++) fYec43_tmp[i]=fYec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec43[i] = (iRec60[i] + fZec106[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec43_perm[i]=fYec43_tmp[count+i];
			
			// LOOP 0x32490e0
			// pre processing
			for (int i=0; i<4; i++) fYec50_tmp[i]=fYec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec50[i] = (iRec69[i] + fZec123[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec50_perm[i]=fYec50_tmp[count+i];
			
			// LOOP 0x325f840
			// pre processing
			for (int i=0; i<4; i++) fYec57_tmp[i]=fYec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec57[i] = (iRec78[i] + fZec140[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec57_perm[i]=fYec57_tmp[count+i];
			
			// LOOP 0x3276460
			// pre processing
			for (int i=0; i<4; i++) fYec64_tmp[i]=fYec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec64[i] = (iRec87[i] + fZec157[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec64_perm[i]=fYec64_tmp[count+i];
			
			// LOOP 0x328c9b0
			// pre processing
			for (int i=0; i<4; i++) fYec71_tmp[i]=fYec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec71[i] = (iRec96[i] + fZec174[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec71_perm[i]=fYec71_tmp[count+i];
			
			// LOOP 0x32a3550
			// pre processing
			for (int i=0; i<4; i++) fYec78_tmp[i]=fYec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec78[i] = (iRec105[i] + fZec191[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec78_perm[i]=fYec78_tmp[count+i];
			
			// SECTION : 10
			// LOOP 0x31a6fb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec6[i] = (0.5f * fYec1[i]);
			}
			
			// LOOP 0x31b2460
			// exec code
			for (int i=0; i<count; i++) {
				fZec7[i] = (0.5f * fYec1[i-1]);
			}
			
			// LOOP 0x31c2330
			// exec code
			for (int i=0; i<count; i++) {
				fZec23[i] = (0.5f * fYec8[i]);
			}
			
			// LOOP 0x31c9020
			// exec code
			for (int i=0; i<count; i++) {
				fZec24[i] = (0.5f * fYec8[i-1]);
			}
			
			// LOOP 0x31d88c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec40[i] = (0.5f * fYec15[i]);
			}
			
			// LOOP 0x31df570
			// exec code
			for (int i=0; i<count; i++) {
				fZec41[i] = (0.5f * fYec15[i-1]);
			}
			
			// LOOP 0x31eed20
			// exec code
			for (int i=0; i<count; i++) {
				fZec57[i] = (0.5f * fYec22[i]);
			}
			
			// LOOP 0x31f59d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec58[i] = (0.5f * fYec22[i-1]);
			}
			
			// LOOP 0x3205460
			// exec code
			for (int i=0; i<count; i++) {
				fZec74[i] = (0.5f * fYec29[i]);
			}
			
			// LOOP 0x320c130
			// exec code
			for (int i=0; i<count; i++) {
				fZec75[i] = (0.5f * fYec29[i-1]);
			}
			
			// LOOP 0x321bfa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec91[i] = (0.5f * fYec36[i]);
			}
			
			// LOOP 0x3222c50
			// exec code
			for (int i=0; i<count; i++) {
				fZec92[i] = (0.5f * fYec36[i-1]);
			}
			
			// LOOP 0x32325b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec108[i] = (0.5f * fYec43[i]);
			}
			
			// LOOP 0x3239260
			// exec code
			for (int i=0; i<count; i++) {
				fZec109[i] = (0.5f * fYec43[i-1]);
			}
			
			// LOOP 0x3248fd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec125[i] = (0.5f * fYec50[i]);
			}
			
			// LOOP 0x324fc80
			// exec code
			for (int i=0; i<count; i++) {
				fZec126[i] = (0.5f * fYec50[i-1]);
			}
			
			// LOOP 0x325f700
			// exec code
			for (int i=0; i<count; i++) {
				fZec142[i] = (0.5f * fYec57[i]);
			}
			
			// LOOP 0x32663b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec143[i] = (0.5f * fYec57[i-1]);
			}
			
			// LOOP 0x3276320
			// exec code
			for (int i=0; i<count; i++) {
				fZec159[i] = (0.5f * fYec64[i]);
			}
			
			// LOOP 0x327cf70
			// exec code
			for (int i=0; i<count; i++) {
				fZec160[i] = (0.5f * fYec64[i-1]);
			}
			
			// LOOP 0x328c870
			// exec code
			for (int i=0; i<count; i++) {
				fZec176[i] = (0.5f * fYec71[i]);
			}
			
			// LOOP 0x3293580
			// exec code
			for (int i=0; i<count; i++) {
				fZec177[i] = (0.5f * fYec71[i-1]);
			}
			
			// LOOP 0x32a3410
			// exec code
			for (int i=0; i<count; i++) {
				fZec193[i] = (0.5f * fYec78[i]);
			}
			
			// LOOP 0x32aa060
			// exec code
			for (int i=0; i<count; i++) {
				fZec194[i] = (0.5f * fYec78[i-1]);
			}
			
			// SECTION : 11
			// LOOP 0x31b1e20
			// pre processing
			for (int i=0; i<4; i++) iRec7_tmp[i]=iRec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec7[i] = ((int(((fZec6[i] - fZec7[i]) < 0)))?(1 - iRec7[i-1]):iRec7[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec7_perm[i]=iRec7_tmp[count+i];
			
			// LOOP 0x31c8a20
			// pre processing
			for (int i=0; i<4; i++) iRec16_tmp[i]=iRec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec16[i] = ((int(((fZec23[i] - fZec24[i]) < 0)))?(1 - iRec16[i-1]):iRec16[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec16_perm[i]=iRec16_tmp[count+i];
			
			// LOOP 0x31def70
			// pre processing
			for (int i=0; i<4; i++) iRec25_tmp[i]=iRec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec25[i] = ((int(((fZec40[i] - fZec41[i]) < 0)))?(1 - iRec25[i-1]):iRec25[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec25_perm[i]=iRec25_tmp[count+i];
			
			// LOOP 0x31f53d0
			// pre processing
			for (int i=0; i<4; i++) iRec34_tmp[i]=iRec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec34[i] = ((int(((fZec57[i] - fZec58[i]) < 0)))?(1 - iRec34[i-1]):iRec34[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec34_perm[i]=iRec34_tmp[count+i];
			
			// LOOP 0x320bb30
			// pre processing
			for (int i=0; i<4; i++) iRec43_tmp[i]=iRec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec43[i] = ((int(((fZec74[i] - fZec75[i]) < 0)))?(1 - iRec43[i-1]):iRec43[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec43_perm[i]=iRec43_tmp[count+i];
			
			// LOOP 0x3222650
			// pre processing
			for (int i=0; i<4; i++) iRec52_tmp[i]=iRec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec52[i] = ((int(((fZec91[i] - fZec92[i]) < 0)))?(1 - iRec52[i-1]):iRec52[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec52_perm[i]=iRec52_tmp[count+i];
			
			// LOOP 0x3238c60
			// pre processing
			for (int i=0; i<4; i++) iRec61_tmp[i]=iRec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec61[i] = ((int(((fZec108[i] - fZec109[i]) < 0)))?(1 - iRec61[i-1]):iRec61[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec61_perm[i]=iRec61_tmp[count+i];
			
			// LOOP 0x324f680
			// pre processing
			for (int i=0; i<4; i++) iRec70_tmp[i]=iRec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec70[i] = ((int(((fZec125[i] - fZec126[i]) < 0)))?(1 - iRec70[i-1]):iRec70[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec70_perm[i]=iRec70_tmp[count+i];
			
			// LOOP 0x3265db0
			// pre processing
			for (int i=0; i<4; i++) iRec79_tmp[i]=iRec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec79[i] = ((int(((fZec142[i] - fZec143[i]) < 0)))?(1 - iRec79[i-1]):iRec79[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec79_perm[i]=iRec79_tmp[count+i];
			
			// LOOP 0x327c970
			// pre processing
			for (int i=0; i<4; i++) iRec88_tmp[i]=iRec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec88[i] = ((int(((fZec159[i] - fZec160[i]) < 0)))?(1 - iRec88[i-1]):iRec88[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec88_perm[i]=iRec88_tmp[count+i];
			
			// LOOP 0x3292f80
			// pre processing
			for (int i=0; i<4; i++) iRec97_tmp[i]=iRec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec97[i] = ((int(((fZec176[i] - fZec177[i]) < 0)))?(1 - iRec97[i-1]):iRec97[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec97_perm[i]=iRec97_tmp[count+i];
			
			// LOOP 0x32a9a60
			// pre processing
			for (int i=0; i<4; i++) iRec106_tmp[i]=iRec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec106[i] = ((int(((fZec193[i] - fZec194[i]) < 0)))?(1 - iRec106[i-1]):iRec106[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec106_perm[i]=iRec106_tmp[count+i];
			
			// SECTION : 12
			// LOOP 0x31a6e70
			// pre processing
			for (int i=0; i<4; i++) fYec2_tmp[i]=fYec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec2[i] = (iRec7[i] + fZec6[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec2_perm[i]=fYec2_tmp[count+i];
			
			// LOOP 0x31c21f0
			// pre processing
			for (int i=0; i<4; i++) fYec9_tmp[i]=fYec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec9[i] = (iRec16[i] + fZec23[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec9_perm[i]=fYec9_tmp[count+i];
			
			// LOOP 0x31d8780
			// pre processing
			for (int i=0; i<4; i++) fYec16_tmp[i]=fYec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec16[i] = (iRec25[i] + fZec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec16_perm[i]=fYec16_tmp[count+i];
			
			// LOOP 0x31eebe0
			// pre processing
			for (int i=0; i<4; i++) fYec23_tmp[i]=fYec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec23[i] = (iRec34[i] + fZec57[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec23_perm[i]=fYec23_tmp[count+i];
			
			// LOOP 0x3205320
			// pre processing
			for (int i=0; i<4; i++) fYec30_tmp[i]=fYec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec30[i] = (iRec43[i] + fZec74[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec30_perm[i]=fYec30_tmp[count+i];
			
			// LOOP 0x321be60
			// pre processing
			for (int i=0; i<4; i++) fYec37_tmp[i]=fYec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec37[i] = (iRec52[i] + fZec91[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec37_perm[i]=fYec37_tmp[count+i];
			
			// LOOP 0x3232470
			// pre processing
			for (int i=0; i<4; i++) fYec44_tmp[i]=fYec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec44[i] = (iRec61[i] + fZec108[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec44_perm[i]=fYec44_tmp[count+i];
			
			// LOOP 0x3248e90
			// pre processing
			for (int i=0; i<4; i++) fYec51_tmp[i]=fYec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec51[i] = (iRec70[i] + fZec125[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec51_perm[i]=fYec51_tmp[count+i];
			
			// LOOP 0x325f5c0
			// pre processing
			for (int i=0; i<4; i++) fYec58_tmp[i]=fYec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec58[i] = (iRec79[i] + fZec142[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec58_perm[i]=fYec58_tmp[count+i];
			
			// LOOP 0x32761e0
			// pre processing
			for (int i=0; i<4; i++) fYec65_tmp[i]=fYec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec65[i] = (iRec88[i] + fZec159[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec65_perm[i]=fYec65_tmp[count+i];
			
			// LOOP 0x328c730
			// pre processing
			for (int i=0; i<4; i++) fYec72_tmp[i]=fYec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec72[i] = (iRec97[i] + fZec176[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec72_perm[i]=fYec72_tmp[count+i];
			
			// LOOP 0x32a32d0
			// pre processing
			for (int i=0; i<4; i++) fYec79_tmp[i]=fYec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec79[i] = (iRec106[i] + fZec193[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec79_perm[i]=fYec79_tmp[count+i];
			
			// SECTION : 13
			// LOOP 0x31a6d30
			// exec code
			for (int i=0; i<count; i++) {
				fZec8[i] = (0.5f * fYec2[i]);
			}
			
			// LOOP 0x31b4740
			// exec code
			for (int i=0; i<count; i++) {
				fZec9[i] = (0.5f * fYec2[i-1]);
			}
			
			// LOOP 0x31c20b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec25[i] = (0.5f * fYec9[i]);
			}
			
			// LOOP 0x31cb370
			// exec code
			for (int i=0; i<count; i++) {
				fZec26[i] = (0.5f * fYec9[i-1]);
			}
			
			// LOOP 0x31d8640
			// exec code
			for (int i=0; i<count; i++) {
				fZec42[i] = (0.5f * fYec16[i]);
			}
			
			// LOOP 0x31e18f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec43[i] = (0.5f * fYec16[i-1]);
			}
			
			// LOOP 0x31eeaa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec59[i] = (0.5f * fYec23[i]);
			}
			
			// LOOP 0x31f7d50
			// exec code
			for (int i=0; i<count; i++) {
				fZec60[i] = (0.5f * fYec23[i-1]);
			}
			
			// LOOP 0x32051e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec76[i] = (0.5f * fYec30[i]);
			}
			
			// LOOP 0x320e4b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec77[i] = (0.5f * fYec30[i-1]);
			}
			
			// LOOP 0x321bd20
			// exec code
			for (int i=0; i<count; i++) {
				fZec93[i] = (0.5f * fYec37[i]);
			}
			
			// LOOP 0x3224fd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec94[i] = (0.5f * fYec37[i-1]);
			}
			
			// LOOP 0x3232330
			// exec code
			for (int i=0; i<count; i++) {
				fZec110[i] = (0.5f * fYec44[i]);
			}
			
			// LOOP 0x323b5e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec111[i] = (0.5f * fYec44[i-1]);
			}
			
			// LOOP 0x3248d50
			// exec code
			for (int i=0; i<count; i++) {
				fZec127[i] = (0.5f * fYec51[i]);
			}
			
			// LOOP 0x3252000
			// exec code
			for (int i=0; i<count; i++) {
				fZec128[i] = (0.5f * fYec51[i-1]);
			}
			
			// LOOP 0x325f480
			// exec code
			for (int i=0; i<count; i++) {
				fZec144[i] = (0.5f * fYec58[i]);
			}
			
			// LOOP 0x3268730
			// exec code
			for (int i=0; i<count; i++) {
				fZec145[i] = (0.5f * fYec58[i-1]);
			}
			
			// LOOP 0x32760a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec161[i] = (0.5f * fYec65[i]);
			}
			
			// LOOP 0x327f2f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec162[i] = (0.5f * fYec65[i-1]);
			}
			
			// LOOP 0x328c5f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec178[i] = (0.5f * fYec72[i]);
			}
			
			// LOOP 0x3295900
			// exec code
			for (int i=0; i<count; i++) {
				fZec179[i] = (0.5f * fYec72[i-1]);
			}
			
			// LOOP 0x32a3190
			// exec code
			for (int i=0; i<count; i++) {
				fZec195[i] = (0.5f * fYec79[i]);
			}
			
			// LOOP 0x32ac350
			// exec code
			for (int i=0; i<count; i++) {
				fZec196[i] = (0.5f * fYec79[i-1]);
			}
			
			// SECTION : 14
			// LOOP 0x31b4100
			// pre processing
			for (int i=0; i<4; i++) iRec8_tmp[i]=iRec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec8[i] = ((int(((fZec8[i] - fZec9[i]) < 0)))?(1 - iRec8[i-1]):iRec8[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec8_perm[i]=iRec8_tmp[count+i];
			
			// LOOP 0x31cad70
			// pre processing
			for (int i=0; i<4; i++) iRec17_tmp[i]=iRec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec17[i] = ((int(((fZec25[i] - fZec26[i]) < 0)))?(1 - iRec17[i-1]):iRec17[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec17_perm[i]=iRec17_tmp[count+i];
			
			// LOOP 0x31e12f0
			// pre processing
			for (int i=0; i<4; i++) iRec26_tmp[i]=iRec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec26[i] = ((int(((fZec42[i] - fZec43[i]) < 0)))?(1 - iRec26[i-1]):iRec26[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec26_perm[i]=iRec26_tmp[count+i];
			
			// LOOP 0x31f7750
			// pre processing
			for (int i=0; i<4; i++) iRec35_tmp[i]=iRec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec35[i] = ((int(((fZec59[i] - fZec60[i]) < 0)))?(1 - iRec35[i-1]):iRec35[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec35_perm[i]=iRec35_tmp[count+i];
			
			// LOOP 0x320deb0
			// pre processing
			for (int i=0; i<4; i++) iRec44_tmp[i]=iRec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec44[i] = ((int(((fZec76[i] - fZec77[i]) < 0)))?(1 - iRec44[i-1]):iRec44[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec44_perm[i]=iRec44_tmp[count+i];
			
			// LOOP 0x32249d0
			// pre processing
			for (int i=0; i<4; i++) iRec53_tmp[i]=iRec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec53[i] = ((int(((fZec93[i] - fZec94[i]) < 0)))?(1 - iRec53[i-1]):iRec53[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec53_perm[i]=iRec53_tmp[count+i];
			
			// LOOP 0x323afe0
			// pre processing
			for (int i=0; i<4; i++) iRec62_tmp[i]=iRec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec62[i] = ((int(((fZec110[i] - fZec111[i]) < 0)))?(1 - iRec62[i-1]):iRec62[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec62_perm[i]=iRec62_tmp[count+i];
			
			// LOOP 0x3251a00
			// pre processing
			for (int i=0; i<4; i++) iRec71_tmp[i]=iRec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec71[i] = ((int(((fZec127[i] - fZec128[i]) < 0)))?(1 - iRec71[i-1]):iRec71[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec71_perm[i]=iRec71_tmp[count+i];
			
			// LOOP 0x3268130
			// pre processing
			for (int i=0; i<4; i++) iRec80_tmp[i]=iRec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec80[i] = ((int(((fZec144[i] - fZec145[i]) < 0)))?(1 - iRec80[i-1]):iRec80[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec80_perm[i]=iRec80_tmp[count+i];
			
			// LOOP 0x327ecf0
			// pre processing
			for (int i=0; i<4; i++) iRec89_tmp[i]=iRec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec89[i] = ((int(((fZec161[i] - fZec162[i]) < 0)))?(1 - iRec89[i-1]):iRec89[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec89_perm[i]=iRec89_tmp[count+i];
			
			// LOOP 0x3295300
			// pre processing
			for (int i=0; i<4; i++) iRec98_tmp[i]=iRec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec98[i] = ((int(((fZec178[i] - fZec179[i]) < 0)))?(1 - iRec98[i-1]):iRec98[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec98_perm[i]=iRec98_tmp[count+i];
			
			// LOOP 0x32abdf0
			// pre processing
			for (int i=0; i<4; i++) iRec107_tmp[i]=iRec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec107[i] = ((int(((fZec195[i] - fZec196[i]) < 0)))?(1 - iRec107[i-1]):iRec107[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec107_perm[i]=iRec107_tmp[count+i];
			
			// SECTION : 15
			// LOOP 0x31a6bf0
			// pre processing
			for (int i=0; i<4; i++) fYec3_tmp[i]=fYec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec3[i] = (iRec8[i] + fZec8[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec3_perm[i]=fYec3_tmp[count+i];
			
			// LOOP 0x31c1f70
			// pre processing
			for (int i=0; i<4; i++) fYec10_tmp[i]=fYec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec10[i] = (iRec17[i] + fZec25[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec10_perm[i]=fYec10_tmp[count+i];
			
			// LOOP 0x31d8500
			// pre processing
			for (int i=0; i<4; i++) fYec17_tmp[i]=fYec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec17[i] = (iRec26[i] + fZec42[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec17_perm[i]=fYec17_tmp[count+i];
			
			// LOOP 0x31ee960
			// pre processing
			for (int i=0; i<4; i++) fYec24_tmp[i]=fYec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec24[i] = (iRec35[i] + fZec59[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec24_perm[i]=fYec24_tmp[count+i];
			
			// LOOP 0x32050a0
			// pre processing
			for (int i=0; i<4; i++) fYec31_tmp[i]=fYec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec31[i] = (iRec44[i] + fZec76[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec31_perm[i]=fYec31_tmp[count+i];
			
			// LOOP 0x321bbe0
			// pre processing
			for (int i=0; i<4; i++) fYec38_tmp[i]=fYec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec38[i] = (iRec53[i] + fZec93[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec38_perm[i]=fYec38_tmp[count+i];
			
			// LOOP 0x32321f0
			// pre processing
			for (int i=0; i<4; i++) fYec45_tmp[i]=fYec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec45[i] = (iRec62[i] + fZec110[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec45_perm[i]=fYec45_tmp[count+i];
			
			// LOOP 0x3248c10
			// pre processing
			for (int i=0; i<4; i++) fYec52_tmp[i]=fYec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec52[i] = (iRec71[i] + fZec127[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec52_perm[i]=fYec52_tmp[count+i];
			
			// LOOP 0x325f340
			// pre processing
			for (int i=0; i<4; i++) fYec59_tmp[i]=fYec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec59[i] = (iRec80[i] + fZec144[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec59_perm[i]=fYec59_tmp[count+i];
			
			// LOOP 0x3275f60
			// pre processing
			for (int i=0; i<4; i++) fYec66_tmp[i]=fYec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec66[i] = (iRec89[i] + fZec161[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec66_perm[i]=fYec66_tmp[count+i];
			
			// LOOP 0x328c4b0
			// pre processing
			for (int i=0; i<4; i++) fYec73_tmp[i]=fYec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec73[i] = (iRec98[i] + fZec178[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec73_perm[i]=fYec73_tmp[count+i];
			
			// LOOP 0x32a3050
			// pre processing
			for (int i=0; i<4; i++) fYec80_tmp[i]=fYec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec80[i] = (iRec107[i] + fZec195[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec80_perm[i]=fYec80_tmp[count+i];
			
			// SECTION : 16
			// LOOP 0x31a6ab0
			// exec code
			for (int i=0; i<count; i++) {
				fZec10[i] = (0.5f * fYec3[i]);
			}
			
			// LOOP 0x31b6a80
			// exec code
			for (int i=0; i<count; i++) {
				fZec11[i] = (0.5f * fYec3[i-1]);
			}
			
			// LOOP 0x31c1e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec27[i] = (0.5f * fYec10[i]);
			}
			
			// LOOP 0x31cd6e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec28[i] = (0.5f * fYec10[i-1]);
			}
			
			// LOOP 0x31d83c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec44[i] = (0.5f * fYec17[i]);
			}
			
			// LOOP 0x31e3c70
			// exec code
			for (int i=0; i<count; i++) {
				fZec45[i] = (0.5f * fYec17[i-1]);
			}
			
			// LOOP 0x31ee820
			// exec code
			for (int i=0; i<count; i++) {
				fZec61[i] = (0.5f * fYec24[i]);
			}
			
			// LOOP 0x31fa0d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec62[i] = (0.5f * fYec24[i-1]);
			}
			
			// LOOP 0x3204f60
			// exec code
			for (int i=0; i<count; i++) {
				fZec78[i] = (0.5f * fYec31[i]);
			}
			
			// LOOP 0x3210830
			// exec code
			for (int i=0; i<count; i++) {
				fZec79[i] = (0.5f * fYec31[i-1]);
			}
			
			// LOOP 0x321baa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec95[i] = (0.5f * fYec38[i]);
			}
			
			// LOOP 0x3227350
			// exec code
			for (int i=0; i<count; i++) {
				fZec96[i] = (0.5f * fYec38[i-1]);
			}
			
			// LOOP 0x32320b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec112[i] = (0.5f * fYec45[i]);
			}
			
			// LOOP 0x323d960
			// exec code
			for (int i=0; i<count; i++) {
				fZec113[i] = (0.5f * fYec45[i-1]);
			}
			
			// LOOP 0x3248ad0
			// exec code
			for (int i=0; i<count; i++) {
				fZec129[i] = (0.5f * fYec52[i]);
			}
			
			// LOOP 0x3254380
			// exec code
			for (int i=0; i<count; i++) {
				fZec130[i] = (0.5f * fYec52[i-1]);
			}
			
			// LOOP 0x325f200
			// exec code
			for (int i=0; i<count; i++) {
				fZec146[i] = (0.5f * fYec59[i]);
			}
			
			// LOOP 0x326aa40
			// exec code
			for (int i=0; i<count; i++) {
				fZec147[i] = (0.5f * fYec59[i-1]);
			}
			
			// LOOP 0x3275e20
			// exec code
			for (int i=0; i<count; i++) {
				fZec163[i] = (0.5f * fYec66[i]);
			}
			
			// LOOP 0x3281670
			// exec code
			for (int i=0; i<count; i++) {
				fZec164[i] = (0.5f * fYec66[i-1]);
			}
			
			// LOOP 0x328c370
			// exec code
			for (int i=0; i<count; i++) {
				fZec180[i] = (0.5f * fYec73[i]);
			}
			
			// LOOP 0x3297c80
			// exec code
			for (int i=0; i<count; i++) {
				fZec181[i] = (0.5f * fYec73[i-1]);
			}
			
			// LOOP 0x32a2f10
			// exec code
			for (int i=0; i<count; i++) {
				fZec197[i] = (0.5f * fYec80[i]);
			}
			
			// LOOP 0x32ae780
			// exec code
			for (int i=0; i<count; i++) {
				fZec198[i] = (0.5f * fYec80[i-1]);
			}
			
			// SECTION : 17
			// LOOP 0x31b6440
			// pre processing
			for (int i=0; i<4; i++) iRec9_tmp[i]=iRec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec9[i] = ((int(((fZec10[i] - fZec11[i]) < 0)))?(1 - iRec9[i-1]):iRec9[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec9_perm[i]=iRec9_tmp[count+i];
			
			// LOOP 0x31cd0e0
			// pre processing
			for (int i=0; i<4; i++) iRec18_tmp[i]=iRec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec18[i] = ((int(((fZec27[i] - fZec28[i]) < 0)))?(1 - iRec18[i-1]):iRec18[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec18_perm[i]=iRec18_tmp[count+i];
			
			// LOOP 0x31e3670
			// pre processing
			for (int i=0; i<4; i++) iRec27_tmp[i]=iRec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec27[i] = ((int(((fZec44[i] - fZec45[i]) < 0)))?(1 - iRec27[i-1]):iRec27[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec27_perm[i]=iRec27_tmp[count+i];
			
			// LOOP 0x31f9ad0
			// pre processing
			for (int i=0; i<4; i++) iRec36_tmp[i]=iRec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec36[i] = ((int(((fZec61[i] - fZec62[i]) < 0)))?(1 - iRec36[i-1]):iRec36[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec36_perm[i]=iRec36_tmp[count+i];
			
			// LOOP 0x3210230
			// pre processing
			for (int i=0; i<4; i++) iRec45_tmp[i]=iRec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec45[i] = ((int(((fZec78[i] - fZec79[i]) < 0)))?(1 - iRec45[i-1]):iRec45[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec45_perm[i]=iRec45_tmp[count+i];
			
			// LOOP 0x3226d50
			// pre processing
			for (int i=0; i<4; i++) iRec54_tmp[i]=iRec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec54[i] = ((int(((fZec95[i] - fZec96[i]) < 0)))?(1 - iRec54[i-1]):iRec54[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec54_perm[i]=iRec54_tmp[count+i];
			
			// LOOP 0x323d360
			// pre processing
			for (int i=0; i<4; i++) iRec63_tmp[i]=iRec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec63[i] = ((int(((fZec112[i] - fZec113[i]) < 0)))?(1 - iRec63[i-1]):iRec63[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec63_perm[i]=iRec63_tmp[count+i];
			
			// LOOP 0x3253d80
			// pre processing
			for (int i=0; i<4; i++) iRec72_tmp[i]=iRec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec72[i] = ((int(((fZec129[i] - fZec130[i]) < 0)))?(1 - iRec72[i-1]):iRec72[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec72_perm[i]=iRec72_tmp[count+i];
			
			// LOOP 0x326a3f0
			// pre processing
			for (int i=0; i<4; i++) iRec81_tmp[i]=iRec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec81[i] = ((int(((fZec146[i] - fZec147[i]) < 0)))?(1 - iRec81[i-1]):iRec81[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec81_perm[i]=iRec81_tmp[count+i];
			
			// LOOP 0x3281070
			// pre processing
			for (int i=0; i<4; i++) iRec90_tmp[i]=iRec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec90[i] = ((int(((fZec163[i] - fZec164[i]) < 0)))?(1 - iRec90[i-1]):iRec90[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec90_perm[i]=iRec90_tmp[count+i];
			
			// LOOP 0x3297680
			// pre processing
			for (int i=0; i<4; i++) iRec99_tmp[i]=iRec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec99[i] = ((int(((fZec180[i] - fZec181[i]) < 0)))?(1 - iRec99[i-1]):iRec99[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec99_perm[i]=iRec99_tmp[count+i];
			
			// LOOP 0x32ae180
			// pre processing
			for (int i=0; i<4; i++) iRec108_tmp[i]=iRec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec108[i] = ((int(((fZec197[i] - fZec198[i]) < 0)))?(1 - iRec108[i-1]):iRec108[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec108_perm[i]=iRec108_tmp[count+i];
			
			// SECTION : 18
			// LOOP 0x31a6970
			// pre processing
			for (int i=0; i<4; i++) fYec4_tmp[i]=fYec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec4[i] = (iRec9[i] + fZec10[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec4_perm[i]=fYec4_tmp[count+i];
			
			// LOOP 0x31c1cf0
			// pre processing
			for (int i=0; i<4; i++) fYec11_tmp[i]=fYec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec11[i] = (iRec18[i] + fZec27[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec11_perm[i]=fYec11_tmp[count+i];
			
			// LOOP 0x31d8280
			// pre processing
			for (int i=0; i<4; i++) fYec18_tmp[i]=fYec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec18[i] = (iRec27[i] + fZec44[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec18_perm[i]=fYec18_tmp[count+i];
			
			// LOOP 0x31ee6e0
			// pre processing
			for (int i=0; i<4; i++) fYec25_tmp[i]=fYec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec25[i] = (iRec36[i] + fZec61[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec25_perm[i]=fYec25_tmp[count+i];
			
			// LOOP 0x3204e20
			// pre processing
			for (int i=0; i<4; i++) fYec32_tmp[i]=fYec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec32[i] = (iRec45[i] + fZec78[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec32_perm[i]=fYec32_tmp[count+i];
			
			// LOOP 0x321b960
			// pre processing
			for (int i=0; i<4; i++) fYec39_tmp[i]=fYec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec39[i] = (iRec54[i] + fZec95[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec39_perm[i]=fYec39_tmp[count+i];
			
			// LOOP 0x3231f70
			// pre processing
			for (int i=0; i<4; i++) fYec46_tmp[i]=fYec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec46[i] = (iRec63[i] + fZec112[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec46_perm[i]=fYec46_tmp[count+i];
			
			// LOOP 0x3248990
			// pre processing
			for (int i=0; i<4; i++) fYec53_tmp[i]=fYec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec53[i] = (iRec72[i] + fZec129[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec53_perm[i]=fYec53_tmp[count+i];
			
			// LOOP 0x325f0c0
			// pre processing
			for (int i=0; i<4; i++) fYec60_tmp[i]=fYec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec60[i] = (iRec81[i] + fZec146[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec60_perm[i]=fYec60_tmp[count+i];
			
			// LOOP 0x3275ce0
			// pre processing
			for (int i=0; i<4; i++) fYec67_tmp[i]=fYec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec67[i] = (iRec90[i] + fZec163[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec67_perm[i]=fYec67_tmp[count+i];
			
			// LOOP 0x328c230
			// pre processing
			for (int i=0; i<4; i++) fYec74_tmp[i]=fYec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec74[i] = (iRec99[i] + fZec180[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec74_perm[i]=fYec74_tmp[count+i];
			
			// LOOP 0x32a2dd0
			// pre processing
			for (int i=0; i<4; i++) fYec81_tmp[i]=fYec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec81[i] = (iRec108[i] + fZec197[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec81_perm[i]=fYec81_tmp[count+i];
			
			// SECTION : 19
			// LOOP 0x31a6830
			// exec code
			for (int i=0; i<count; i++) {
				fZec12[i] = (0.5f * fYec4[i]);
			}
			
			// LOOP 0x31b8d60
			// exec code
			for (int i=0; i<count; i++) {
				fZec13[i] = (0.5f * fYec4[i-1]);
			}
			
			// LOOP 0x31bc360
			// exec code
			for (int i=0; i<count; i++) {
				fZec16[i] = ((1 + fRec4[i]) - fRec4[i-1]);
			}
			
			// LOOP 0x31c1bb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec29[i] = (0.5f * fYec11[i]);
			}
			
			// LOOP 0x31cfa60
			// exec code
			for (int i=0; i<count; i++) {
				fZec30[i] = (0.5f * fYec11[i-1]);
			}
			
			// LOOP 0x31d2eb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec33[i] = ((1 + fRec14[i]) - fRec14[i-1]);
			}
			
			// LOOP 0x31d8140
			// exec code
			for (int i=0; i<count; i++) {
				fZec46[i] = (0.5f * fYec18[i]);
			}
			
			// LOOP 0x31e5ff0
			// exec code
			for (int i=0; i<count; i++) {
				fZec47[i] = (0.5f * fYec18[i-1]);
			}
			
			// LOOP 0x31e9450
			// exec code
			for (int i=0; i<count; i++) {
				fZec50[i] = ((1 + fRec23[i]) - fRec23[i-1]);
			}
			
			// LOOP 0x31ee5a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec63[i] = (0.5f * fYec25[i]);
			}
			
			// LOOP 0x31fc450
			// exec code
			for (int i=0; i<count; i++) {
				fZec64[i] = (0.5f * fYec25[i-1]);
			}
			
			// LOOP 0x31ff8a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec67[i] = ((1 + fRec32[i]) - fRec32[i-1]);
			}
			
			// LOOP 0x3204ce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec80[i] = (0.5f * fYec32[i]);
			}
			
			// LOOP 0x3212bb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec81[i] = (0.5f * fYec32[i-1]);
			}
			
			// LOOP 0x3216000
			// exec code
			for (int i=0; i<count; i++) {
				fZec84[i] = ((1 + fRec41[i]) - fRec41[i-1]);
			}
			
			// LOOP 0x321b820
			// exec code
			for (int i=0; i<count; i++) {
				fZec97[i] = (0.5f * fYec39[i]);
			}
			
			// LOOP 0x32296e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec98[i] = (0.5f * fYec39[i-1]);
			}
			
			// LOOP 0x3231e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec114[i] = (0.5f * fYec46[i]);
			}
			
			// LOOP 0x323fce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec115[i] = (0.5f * fYec46[i-1]);
			}
			
			// LOOP 0x3248850
			// exec code
			for (int i=0; i<count; i++) {
				fZec131[i] = (0.5f * fYec53[i]);
			}
			
			// LOOP 0x3256700
			// exec code
			for (int i=0; i<count; i++) {
				fZec132[i] = (0.5f * fYec53[i-1]);
			}
			
			// LOOP 0x325ef80
			// exec code
			for (int i=0; i<count; i++) {
				fZec148[i] = (0.5f * fYec60[i]);
			}
			
			// LOOP 0x326ce60
			// exec code
			for (int i=0; i<count; i++) {
				fZec149[i] = (0.5f * fYec60[i-1]);
			}
			
			// LOOP 0x3275ba0
			// exec code
			for (int i=0; i<count; i++) {
				fZec165[i] = (0.5f * fYec67[i]);
			}
			
			// LOOP 0x32839f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec166[i] = (0.5f * fYec67[i-1]);
			}
			
			// LOOP 0x328c0f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec182[i] = (0.5f * fYec74[i]);
			}
			
			// LOOP 0x329a000
			// exec code
			for (int i=0; i<count; i++) {
				fZec183[i] = (0.5f * fYec74[i-1]);
			}
			
			// LOOP 0x32a2c90
			// exec code
			for (int i=0; i<count; i++) {
				fZec199[i] = (0.5f * fYec81[i]);
			}
			
			// LOOP 0x32b0b10
			// exec code
			for (int i=0; i<count; i++) {
				fZec200[i] = (0.5f * fYec81[i-1]);
			}
			
			// SECTION : 20
			// LOOP 0x31b8760
			// pre processing
			for (int i=0; i<4; i++) iRec10_tmp[i]=iRec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec10[i] = ((int(((fZec12[i] - fZec13[i]) < 0)))?(1 - iRec10[i-1]):iRec10[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec10_perm[i]=iRec10_tmp[count+i];
			
			// LOOP 0x31bc070
			// exec code
			for (int i=0; i<count; i++) {
				fZec17[i] = saw_polyblep_fast(fRec4[i], fRec4[i-1], fRec4[i-2], ((int((fZec16[i] > 1.0f)))?fZec3[i]:fZec16[i]));
			}
			
			// LOOP 0x31cf460
			// pre processing
			for (int i=0; i<4; i++) iRec19_tmp[i]=iRec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec19[i] = ((int(((fZec29[i] - fZec30[i]) < 0)))?(1 - iRec19[i-1]):iRec19[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec19_perm[i]=iRec19_tmp[count+i];
			
			// LOOP 0x31d2bc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec34[i] = saw_polyblep_fast(fRec14[i], fRec14[i-1], fRec14[i-2], ((int((fZec33[i] > 1.0f)))?fZec20[i]:fZec33[i]));
			}
			
			// LOOP 0x31e59f0
			// pre processing
			for (int i=0; i<4; i++) iRec28_tmp[i]=iRec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec28[i] = ((int(((fZec46[i] - fZec47[i]) < 0)))?(1 - iRec28[i-1]):iRec28[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec28_perm[i]=iRec28_tmp[count+i];
			
			// LOOP 0x31e9160
			// exec code
			for (int i=0; i<count; i++) {
				fZec51[i] = saw_polyblep_fast(fRec23[i], fRec23[i-1], fRec23[i-2], ((int((fZec50[i] > 1.0f)))?fZec37[i]:fZec50[i]));
			}
			
			// LOOP 0x31fbe50
			// pre processing
			for (int i=0; i<4; i++) iRec37_tmp[i]=iRec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec37[i] = ((int(((fZec63[i] - fZec64[i]) < 0)))?(1 - iRec37[i-1]):iRec37[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec37_perm[i]=iRec37_tmp[count+i];
			
			// LOOP 0x31ff5b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec68[i] = saw_polyblep_fast(fRec32[i], fRec32[i-1], fRec32[i-2], ((int((fZec67[i] > 1.0f)))?fZec54[i]:fZec67[i]));
			}
			
			// LOOP 0x32125b0
			// pre processing
			for (int i=0; i<4; i++) iRec46_tmp[i]=iRec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec46[i] = ((int(((fZec80[i] - fZec81[i]) < 0)))?(1 - iRec46[i-1]):iRec46[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec46_perm[i]=iRec46_tmp[count+i];
			
			// LOOP 0x3215d10
			// exec code
			for (int i=0; i<count; i++) {
				fZec85[i] = saw_polyblep_fast(fRec41[i], fRec41[i-1], fRec41[i-2], ((int((fZec84[i] > 1.0f)))?fZec71[i]:fZec84[i]));
			}
			
			// LOOP 0x32290e0
			// pre processing
			for (int i=0; i<4; i++) iRec55_tmp[i]=iRec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec55[i] = ((int(((fZec97[i] - fZec98[i]) < 0)))?(1 - iRec55[i-1]):iRec55[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec55_perm[i]=iRec55_tmp[count+i];
			
			// LOOP 0x322cb30
			// exec code
			for (int i=0; i<count; i++) {
				fZec101[i] = ((1 + fRec50[i]) - fRec50[i-1]);
			}
			
			// LOOP 0x323f6e0
			// pre processing
			for (int i=0; i<4; i++) iRec64_tmp[i]=iRec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec64[i] = ((int(((fZec114[i] - fZec115[i]) < 0)))?(1 - iRec64[i-1]):iRec64[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec64_perm[i]=iRec64_tmp[count+i];
			
			// LOOP 0x3243140
			// exec code
			for (int i=0; i<count; i++) {
				fZec118[i] = ((1 + fRec59[i]) - fRec59[i-1]);
			}
			
			// LOOP 0x3256100
			// pre processing
			for (int i=0; i<4; i++) iRec73_tmp[i]=iRec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec73[i] = ((int(((fZec131[i] - fZec132[i]) < 0)))?(1 - iRec73[i-1]):iRec73[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec73_perm[i]=iRec73_tmp[count+i];
			
			// LOOP 0x3259b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec135[i] = ((1 + fRec68[i]) - fRec68[i-1]);
			}
			
			// LOOP 0x326c860
			// pre processing
			for (int i=0; i<4; i++) iRec82_tmp[i]=iRec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec82[i] = ((int(((fZec148[i] - fZec149[i]) < 0)))?(1 - iRec82[i-1]):iRec82[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec82_perm[i]=iRec82_tmp[count+i];
			
			// LOOP 0x32702c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec152[i] = ((1 + fRec77[i]) - fRec77[i-1]);
			}
			
			// LOOP 0x32833f0
			// pre processing
			for (int i=0; i<4; i++) iRec91_tmp[i]=iRec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec91[i] = ((int(((fZec165[i] - fZec166[i]) < 0)))?(1 - iRec91[i-1]):iRec91[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec91_perm[i]=iRec91_tmp[count+i];
			
			// LOOP 0x3299a00
			// pre processing
			for (int i=0; i<4; i++) iRec100_tmp[i]=iRec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec100[i] = ((int(((fZec182[i] - fZec183[i]) < 0)))?(1 - iRec100[i-1]):iRec100[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec100_perm[i]=iRec100_tmp[count+i];
			
			// LOOP 0x32b0510
			// pre processing
			for (int i=0; i<4; i++) iRec109_tmp[i]=iRec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec109[i] = ((int(((fZec199[i] - fZec200[i]) < 0)))?(1 - iRec109[i-1]):iRec109[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec109_perm[i]=iRec109_tmp[count+i];
			
			// LOOP 0x3341200
			// pre processing
			for (int i=0; i<4; i++) fYec108_tmp[i]=fYec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec108[i] = ((fZec8[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec108_perm[i]=fYec108_tmp[count+i];
			
			// LOOP 0x3346ae0
			// pre processing
			for (int i=0; i<4; i++) fYec109_tmp[i]=fYec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec109[i] = ((fZec25[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec109_perm[i]=fYec109_tmp[count+i];
			
			// LOOP 0x334d090
			// pre processing
			for (int i=0; i<4; i++) fYec110_tmp[i]=fYec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec110[i] = ((fZec42[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec110_perm[i]=fYec110_tmp[count+i];
			
			// LOOP 0x3352970
			// pre processing
			for (int i=0; i<4; i++) fYec111_tmp[i]=fYec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec111[i] = ((fZec59[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec111_perm[i]=fYec111_tmp[count+i];
			
			// LOOP 0x33592b0
			// pre processing
			for (int i=0; i<4; i++) fYec112_tmp[i]=fYec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec112[i] = ((fZec76[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec112_perm[i]=fYec112_tmp[count+i];
			
			// SECTION : 21
			// LOOP 0x31a66f0
			// pre processing
			for (int i=0; i<4; i++) fYec5_tmp[i]=fYec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec5[i] = (iRec10[i] + fZec12[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec5_perm[i]=fYec5_tmp[count+i];
			
			// LOOP 0x31c1a70
			// pre processing
			for (int i=0; i<4; i++) fYec12_tmp[i]=fYec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec12[i] = (iRec19[i] + fZec29[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec12_perm[i]=fYec12_tmp[count+i];
			
			// LOOP 0x31d8000
			// pre processing
			for (int i=0; i<4; i++) fYec19_tmp[i]=fYec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec19[i] = (iRec28[i] + fZec46[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec19_perm[i]=fYec19_tmp[count+i];
			
			// LOOP 0x31ee460
			// pre processing
			for (int i=0; i<4; i++) fYec26_tmp[i]=fYec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec26[i] = (iRec37[i] + fZec63[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec26_perm[i]=fYec26_tmp[count+i];
			
			// LOOP 0x3204ba0
			// pre processing
			for (int i=0; i<4; i++) fYec33_tmp[i]=fYec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec33[i] = (iRec46[i] + fZec80[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec33_perm[i]=fYec33_tmp[count+i];
			
			// LOOP 0x321b6e0
			// pre processing
			for (int i=0; i<4; i++) fYec40_tmp[i]=fYec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec40[i] = (iRec55[i] + fZec97[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec40_perm[i]=fYec40_tmp[count+i];
			
			// LOOP 0x322c840
			// exec code
			for (int i=0; i<count; i++) {
				fZec102[i] = saw_polyblep_fast(fRec50[i], fRec50[i-1], fRec50[i-2], ((int((fZec101[i] > 1.0f)))?fZec88[i]:fZec101[i]));
			}
			
			// LOOP 0x3231cf0
			// pre processing
			for (int i=0; i<4; i++) fYec47_tmp[i]=fYec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec47[i] = (iRec64[i] + fZec114[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec47_perm[i]=fYec47_tmp[count+i];
			
			// LOOP 0x3242e50
			// exec code
			for (int i=0; i<count; i++) {
				fZec119[i] = saw_polyblep_fast(fRec59[i], fRec59[i-1], fRec59[i-2], ((int((fZec118[i] > 1.0f)))?fZec105[i]:fZec118[i]));
			}
			
			// LOOP 0x3248710
			// pre processing
			for (int i=0; i<4; i++) fYec54_tmp[i]=fYec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec54[i] = (iRec73[i] + fZec131[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec54_perm[i]=fYec54_tmp[count+i];
			
			// LOOP 0x3259870
			// exec code
			for (int i=0; i<count; i++) {
				fZec136[i] = saw_polyblep_fast(fRec68[i], fRec68[i-1], fRec68[i-2], ((int((fZec135[i] > 1.0f)))?fZec122[i]:fZec135[i]));
			}
			
			// LOOP 0x325ee40
			// pre processing
			for (int i=0; i<4; i++) fYec61_tmp[i]=fYec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec61[i] = (iRec82[i] + fZec148[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec61_perm[i]=fYec61_tmp[count+i];
			
			// LOOP 0x326ffd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec153[i] = saw_polyblep_fast(fRec77[i], fRec77[i-1], fRec77[i-2], ((int((fZec152[i] > 1.0f)))?fZec139[i]:fZec152[i]));
			}
			
			// LOOP 0x3275a60
			// pre processing
			for (int i=0; i<4; i++) fYec68_tmp[i]=fYec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec68[i] = (iRec91[i] + fZec165[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec68_perm[i]=fYec68_tmp[count+i];
			
			// LOOP 0x3286e50
			// exec code
			for (int i=0; i<count; i++) {
				fZec169[i] = ((1 + fRec86[i]) - fRec86[i-1]);
			}
			
			// LOOP 0x328bfb0
			// pre processing
			for (int i=0; i<4; i++) fYec75_tmp[i]=fYec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec75[i] = (iRec100[i] + fZec182[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec75_perm[i]=fYec75_tmp[count+i];
			
			// LOOP 0x329d470
			// exec code
			for (int i=0; i<count; i++) {
				fZec186[i] = ((1 + fRec95[i]) - fRec95[i-1]);
			}
			
			// LOOP 0x32a2b50
			// pre processing
			for (int i=0; i<4; i++) fYec82_tmp[i]=fYec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec82[i] = (iRec109[i] + fZec199[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec82_perm[i]=fYec82_tmp[count+i];
			
			// LOOP 0x32b3f80
			// exec code
			for (int i=0; i<count; i++) {
				fZec203[i] = ((1 + fRec104[i]) - fRec104[i-1]);
			}
			
			// LOOP 0x3340cb0
			// pre processing
			for (int i=0; i<4; i++) fRec159_tmp[i]=fRec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec159[i] = (fRec159[i-1] + (fConst14 * ((square_polyblep_precalc(fZec8[i], fZec9[i], (0.5f * fYec2[i-2]), fZec17[i]) + (2 * fYec108[i-1])) - fRec159[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec159_perm[i]=fRec159_tmp[count+i];
			
			// LOOP 0x3346590
			// pre processing
			for (int i=0; i<4; i++) fRec161_tmp[i]=fRec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec161[i] = (fRec161[i-1] + (fConst14 * ((square_polyblep_precalc(fZec25[i], fZec26[i], (0.5f * fYec9[i-2]), fZec34[i]) + (2 * fYec109[i-1])) - fRec161[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec161_perm[i]=fRec161_tmp[count+i];
			
			// LOOP 0x334cb40
			// pre processing
			for (int i=0; i<4; i++) fRec163_tmp[i]=fRec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec163[i] = (fRec163[i-1] + (fConst14 * ((square_polyblep_precalc(fZec42[i], fZec43[i], (0.5f * fYec16[i-2]), fZec51[i]) + (2 * fYec110[i-1])) - fRec163[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec163_perm[i]=fRec163_tmp[count+i];
			
			// LOOP 0x3352420
			// pre processing
			for (int i=0; i<4; i++) fRec165_tmp[i]=fRec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec165[i] = (fRec165[i-1] + (fConst14 * ((square_polyblep_precalc(fZec59[i], fZec60[i], (0.5f * fYec23[i-2]), fZec68[i]) + (2 * fYec111[i-1])) - fRec165[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec165_perm[i]=fRec165_tmp[count+i];
			
			// LOOP 0x3358d60
			// pre processing
			for (int i=0; i<4; i++) fRec167_tmp[i]=fRec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec167[i] = (fRec167[i-1] + (fConst15 * ((square_polyblep_precalc(fZec76[i], fZec77[i], (0.5f * fYec30[i-2]), fZec85[i]) + (2 * fYec112[i-1])) - fRec167[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec167_perm[i]=fRec167_tmp[count+i];
			
			// LOOP 0x33601f0
			// pre processing
			for (int i=0; i<4; i++) fYec113_tmp[i]=fYec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec113[i] = ((fZec93[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec113_perm[i]=fYec113_tmp[count+i];
			
			// LOOP 0x3365df0
			// pre processing
			for (int i=0; i<4; i++) fYec114_tmp[i]=fYec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec114[i] = ((fZec110[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec114_perm[i]=fYec114_tmp[count+i];
			
			// LOOP 0x336cdb0
			// pre processing
			for (int i=0; i<4; i++) fYec115_tmp[i]=fYec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec115[i] = ((fZec127[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec115_perm[i]=fYec115_tmp[count+i];
			
			// LOOP 0x3372ad0
			// pre processing
			for (int i=0; i<4; i++) fYec116_tmp[i]=fYec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec116[i] = ((fZec144[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec116_perm[i]=fYec116_tmp[count+i];
			
			// SECTION : 22
			// LOOP 0x31a65b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec14[i] = (0.5f * fYec5[i]);
			}
			
			// LOOP 0x31bb690
			// exec code
			for (int i=0; i<count; i++) {
				fZec15[i] = (0.5f * fYec5[i-1]);
			}
			
			// LOOP 0x31c1930
			// exec code
			for (int i=0; i<count; i++) {
				fZec31[i] = (0.5f * fYec12[i]);
			}
			
			// LOOP 0x31d2230
			// exec code
			for (int i=0; i<count; i++) {
				fZec32[i] = (0.5f * fYec12[i-1]);
			}
			
			// LOOP 0x31d7ec0
			// exec code
			for (int i=0; i<count; i++) {
				fZec48[i] = (0.5f * fYec19[i]);
			}
			
			// LOOP 0x31e87d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec49[i] = (0.5f * fYec19[i-1]);
			}
			
			// LOOP 0x31ee320
			// exec code
			for (int i=0; i<count; i++) {
				fZec65[i] = (0.5f * fYec26[i]);
			}
			
			// LOOP 0x31fec20
			// exec code
			for (int i=0; i<count; i++) {
				fZec66[i] = (0.5f * fYec26[i-1]);
			}
			
			// LOOP 0x3204a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec82[i] = (0.5f * fYec33[i]);
			}
			
			// LOOP 0x3215380
			// exec code
			for (int i=0; i<count; i++) {
				fZec83[i] = (0.5f * fYec33[i-1]);
			}
			
			// LOOP 0x321b5a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec99[i] = (0.5f * fYec40[i]);
			}
			
			// LOOP 0x322beb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec100[i] = (0.5f * fYec40[i-1]);
			}
			
			// LOOP 0x3231bb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec116[i] = (0.5f * fYec47[i]);
			}
			
			// LOOP 0x32424c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec117[i] = (0.5f * fYec47[i-1]);
			}
			
			// LOOP 0x32485d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec133[i] = (0.5f * fYec54[i]);
			}
			
			// LOOP 0x3258ee0
			// exec code
			for (int i=0; i<count; i++) {
				fZec134[i] = (0.5f * fYec54[i-1]);
			}
			
			// LOOP 0x325ed00
			// exec code
			for (int i=0; i<count; i++) {
				fZec150[i] = (0.5f * fYec61[i]);
			}
			
			// LOOP 0x326f640
			// exec code
			for (int i=0; i<count; i++) {
				fZec151[i] = (0.5f * fYec61[i-1]);
			}
			
			// LOOP 0x3275920
			// exec code
			for (int i=0; i<count; i++) {
				fZec167[i] = (0.5f * fYec68[i]);
			}
			
			// LOOP 0x32861d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec168[i] = (0.5f * fYec68[i-1]);
			}
			
			// LOOP 0x3286b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec170[i] = saw_polyblep_fast(fRec86[i], fRec86[i-1], fRec86[i-2], ((int((fZec169[i] > 1.0f)))?fZec156[i]:fZec169[i]));
			}
			
			// LOOP 0x328be70
			// exec code
			for (int i=0; i<count; i++) {
				fZec184[i] = (0.5f * fYec75[i]);
			}
			
			// LOOP 0x329c7f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec185[i] = (0.5f * fYec75[i-1]);
			}
			
			// LOOP 0x329d180
			// exec code
			for (int i=0; i<count; i++) {
				fZec187[i] = saw_polyblep_fast(fRec95[i], fRec95[i-1], fRec95[i-2], ((int((fZec186[i] > 1.0f)))?fZec173[i]:fZec186[i]));
			}
			
			// LOOP 0x32a2a10
			// exec code
			for (int i=0; i<count; i++) {
				fZec201[i] = (0.5f * fYec82[i]);
			}
			
			// LOOP 0x32b3300
			// exec code
			for (int i=0; i<count; i++) {
				fZec202[i] = (0.5f * fYec82[i-1]);
			}
			
			// LOOP 0x32b3c90
			// exec code
			for (int i=0; i<count; i++) {
				fZec204[i] = saw_polyblep_fast(fRec104[i], fRec104[i-1], fRec104[i-2], ((int((fZec203[i] > 1.0f)))?fZec190[i]:fZec203[i]));
			}
			
			// LOOP 0x33407c0
			// pre processing
			for (int i=0; i<4; i++) fRec158_tmp[i]=fRec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec158[i] = (fConst11 * ((fRec159[i] - fRec159[i-1]) + fRec158[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec158_perm[i]=fRec158_tmp[count+i];
			
			// LOOP 0x33460a0
			// pre processing
			for (int i=0; i<4; i++) fRec160_tmp[i]=fRec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec160[i] = (fConst11 * ((fRec161[i] - fRec161[i-1]) + fRec160[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec160_perm[i]=fRec160_tmp[count+i];
			
			// LOOP 0x334c650
			// pre processing
			for (int i=0; i<4; i++) fRec162_tmp[i]=fRec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec162[i] = (fConst11 * ((fRec163[i] - fRec163[i-1]) + fRec162[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec162_perm[i]=fRec162_tmp[count+i];
			
			// LOOP 0x3351f30
			// pre processing
			for (int i=0; i<4; i++) fRec164_tmp[i]=fRec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec164[i] = (fConst11 * ((fRec165[i] - fRec165[i-1]) + fRec164[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec164_perm[i]=fRec164_tmp[count+i];
			
			// LOOP 0x3358870
			// pre processing
			for (int i=0; i<4; i++) fRec166_tmp[i]=fRec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec166[i] = (fConst11 * ((fRec167[i] - fRec167[i-1]) + fRec166[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec166_perm[i]=fRec166_tmp[count+i];
			
			// LOOP 0x335fca0
			// pre processing
			for (int i=0; i<4; i++) fRec169_tmp[i]=fRec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec169[i] = (fRec169[i-1] + (fConst15 * ((square_polyblep_precalc(fZec93[i], fZec94[i], (0.5f * fYec37[i-2]), fZec102[i]) + (2 * fYec113[i-1])) - fRec169[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec169_perm[i]=fRec169_tmp[count+i];
			
			// LOOP 0x33658a0
			// pre processing
			for (int i=0; i<4; i++) fRec171_tmp[i]=fRec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec171[i] = (fRec171[i-1] + (fConst15 * ((square_polyblep_precalc(fZec110[i], fZec111[i], (0.5f * fYec44[i-2]), fZec119[i]) + (2 * fYec114[i-1])) - fRec171[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec171_perm[i]=fRec171_tmp[count+i];
			
			// LOOP 0x336c860
			// pre processing
			for (int i=0; i<4; i++) fRec173_tmp[i]=fRec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec173[i] = (fRec173[i-1] + (fConst15 * ((square_polyblep_precalc(fZec127[i], fZec128[i], (0.5f * fYec51[i-2]), fZec136[i]) + (2 * fYec115[i-1])) - fRec173[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec173_perm[i]=fRec173_tmp[count+i];
			
			// LOOP 0x3372580
			// pre processing
			for (int i=0; i<4; i++) fRec175_tmp[i]=fRec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec175[i] = (fRec175[i-1] + (fConst16 * ((square_polyblep_precalc(fZec144[i], fZec145[i], (0.5f * fYec58[i-2]), fZec153[i]) + (2 * fYec116[i-1])) - fRec175[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec175_perm[i]=fRec175_tmp[count+i];
			
			// LOOP 0x3379260
			// pre processing
			for (int i=0; i<4; i++) fYec117_tmp[i]=fYec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec117[i] = ((fZec161[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec117_perm[i]=fYec117_tmp[count+i];
			
			// LOOP 0x337e880
			// pre processing
			for (int i=0; i<4; i++) fYec118_tmp[i]=fYec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec118[i] = ((fZec178[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec118_perm[i]=fYec118_tmp[count+i];
			
			// LOOP 0x3384e80
			// pre processing
			for (int i=0; i<4; i++) fYec119_tmp[i]=fYec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec119[i] = ((fZec195[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec119_perm[i]=fYec119_tmp[count+i];
			
			// LOOP 0x338b870
			// pre processing
			for (int i=0; i<4; i++) fYec120_tmp[i]=fYec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec120[i] = ((fZec6[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec120_perm[i]=fYec120_tmp[count+i];
			
			// SECTION : 23
			// LOOP 0x335f7b0
			// pre processing
			for (int i=0; i<4; i++) fRec168_tmp[i]=fRec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec168[i] = (fConst11 * ((fRec169[i] - fRec169[i-1]) + fRec168[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec168_perm[i]=fRec168_tmp[count+i];
			
			// LOOP 0x33653b0
			// pre processing
			for (int i=0; i<4; i++) fRec170_tmp[i]=fRec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec170[i] = (fConst11 * ((fRec171[i] - fRec171[i-1]) + fRec170[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec170_perm[i]=fRec170_tmp[count+i];
			
			// LOOP 0x336c370
			// pre processing
			for (int i=0; i<4; i++) fRec172_tmp[i]=fRec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec172[i] = (fConst11 * ((fRec173[i] - fRec173[i-1]) + fRec172[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec172_perm[i]=fRec172_tmp[count+i];
			
			// LOOP 0x3372070
			// pre processing
			for (int i=0; i<4; i++) fRec174_tmp[i]=fRec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec174[i] = (fConst11 * ((fRec175[i] - fRec175[i-1]) + fRec174[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec174_perm[i]=fRec174_tmp[count+i];
			
			// LOOP 0x3378d10
			// pre processing
			for (int i=0; i<4; i++) fRec177_tmp[i]=fRec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec177[i] = (fRec177[i-1] + (fConst16 * ((square_polyblep_precalc(fZec161[i], fZec162[i], (0.5f * fYec65[i-2]), fZec170[i]) + (2 * fYec117[i-1])) - fRec177[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec177_perm[i]=fRec177_tmp[count+i];
			
			// LOOP 0x337e330
			// pre processing
			for (int i=0; i<4; i++) fRec179_tmp[i]=fRec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec179[i] = (fRec179[i-1] + (fConst16 * ((square_polyblep_precalc(fZec178[i], fZec179[i], (0.5f * fYec72[i-2]), fZec187[i]) + (2 * fYec118[i-1])) - fRec179[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec179_perm[i]=fRec179_tmp[count+i];
			
			// LOOP 0x3384930
			// pre processing
			for (int i=0; i<4; i++) fRec181_tmp[i]=fRec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec181[i] = (fRec181[i-1] + (fConst16 * ((square_polyblep_precalc(fZec195[i], fZec196[i], (0.5f * fYec79[i-2]), fZec204[i]) + (2 * fYec119[i-1])) - fRec181[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec181_perm[i]=fRec181_tmp[count+i];
			
			// LOOP 0x338b320
			// pre processing
			for (int i=0; i<4; i++) fRec183_tmp[i]=fRec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec183[i] = (fRec183[i-1] + (fConst17 * ((square_polyblep_precalc(fZec6[i], fZec7[i], (0.5f * fYec1[i-2]), fZec17[i]) + (2 * fYec120[i-1])) - fRec183[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec183_perm[i]=fRec183_tmp[count+i];
			
			// LOOP 0x3391520
			// pre processing
			for (int i=0; i<4; i++) fYec121_tmp[i]=fYec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec121[i] = ((fZec23[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec121_perm[i]=fYec121_tmp[count+i];
			
			// LOOP 0x3398360
			// pre processing
			for (int i=0; i<4; i++) fYec122_tmp[i]=fYec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec122[i] = ((fZec40[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec122_perm[i]=fYec122_tmp[count+i];
			
			// LOOP 0x339e0d0
			// pre processing
			for (int i=0; i<4; i++) fYec123_tmp[i]=fYec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec123[i] = ((fZec57[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec123_perm[i]=fYec123_tmp[count+i];
			
			// LOOP 0x33a5320
			// pre processing
			for (int i=0; i<4; i++) fYec124_tmp[i]=fYec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec124[i] = ((fZec74[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec124_perm[i]=fYec124_tmp[count+i];
			
			// LOOP 0x33acbf0
			// pre processing
			for (int i=0; i<4; i++) fYec125_tmp[i]=fYec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec125[i] = ((fZec91[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec125_perm[i]=fYec125_tmp[count+i];
			
			// LOOP 0x33b2d50
			// pre processing
			for (int i=0; i<4; i++) fYec126_tmp[i]=fYec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec126[i] = ((fZec108[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec126_perm[i]=fYec126_tmp[count+i];
			
			// LOOP 0x33ba740
			// pre processing
			for (int i=0; i<4; i++) fYec127_tmp[i]=fYec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec127[i] = ((fZec125[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec127_perm[i]=fYec127_tmp[count+i];
			
			// LOOP 0x33c0c40
			// pre processing
			for (int i=0; i<4; i++) fYec128_tmp[i]=fYec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec128[i] = ((fZec142[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec128_perm[i]=fYec128_tmp[count+i];
			
			// LOOP 0x33c7880
			// pre processing
			for (int i=0; i<4; i++) fYec129_tmp[i]=fYec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec129[i] = ((fZec159[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec129_perm[i]=fYec129_tmp[count+i];
			
			// LOOP 0x33cd220
			// pre processing
			for (int i=0; i<4; i++) fYec130_tmp[i]=fYec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec130[i] = ((fZec176[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec130_perm[i]=fYec130_tmp[count+i];
			
			// LOOP 0x33d3f60
			// pre processing
			for (int i=0; i<4; i++) fYec131_tmp[i]=fYec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec131[i] = ((fZec193[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec131_perm[i]=fYec131_tmp[count+i];
			
			// LOOP 0x33db120
			// pre processing
			for (int i=0; i<4; i++) fYec132_tmp[i]=fYec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec132[i] = ((fZec4[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec132_perm[i]=fYec132_tmp[count+i];
			
			// LOOP 0x33df1c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec256[i] = (fRec166[i] + (fRec164[i] + (fRec162[i] + (fRec158[i] + fRec160[i]))));
			}
			
			// LOOP 0x33f0330
			// pre processing
			for (int i=0; i<4; i++) iRec211_tmp[i]=iRec211_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec211[i] = ((int(((fZec14[i] - fZec15[i]) < 0)))?(1 - iRec211[i-1]):iRec211[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec211_perm[i]=iRec211_tmp[count+i];
			
			// LOOP 0x33f62b0
			// pre processing
			for (int i=0; i<4; i++) iRec214_tmp[i]=iRec214_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec214[i] = ((int(((fZec31[i] - fZec32[i]) < 0)))?(1 - iRec214[i-1]):iRec214[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec214_perm[i]=iRec214_tmp[count+i];
			
			// LOOP 0x33fbb10
			// pre processing
			for (int i=0; i<4; i++) iRec217_tmp[i]=iRec217_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec217[i] = ((int(((fZec48[i] - fZec49[i]) < 0)))?(1 - iRec217[i-1]):iRec217[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec217_perm[i]=iRec217_tmp[count+i];
			
			// LOOP 0x3401280
			// pre processing
			for (int i=0; i<4; i++) iRec220_tmp[i]=iRec220_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec220[i] = ((int(((fZec65[i] - fZec66[i]) < 0)))?(1 - iRec220[i-1]):iRec220[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec220_perm[i]=iRec220_tmp[count+i];
			
			// LOOP 0x3406af0
			// pre processing
			for (int i=0; i<4; i++) iRec223_tmp[i]=iRec223_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec223[i] = ((int(((fZec82[i] - fZec83[i]) < 0)))?(1 - iRec223[i-1]):iRec223[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec223_perm[i]=iRec223_tmp[count+i];
			
			// LOOP 0x340c320
			// pre processing
			for (int i=0; i<4; i++) iRec226_tmp[i]=iRec226_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec226[i] = ((int(((fZec99[i] - fZec100[i]) < 0)))?(1 - iRec226[i-1]):iRec226[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec226_perm[i]=iRec226_tmp[count+i];
			
			// LOOP 0x3411bf0
			// pre processing
			for (int i=0; i<4; i++) iRec229_tmp[i]=iRec229_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec229[i] = ((int(((fZec116[i] - fZec117[i]) < 0)))?(1 - iRec229[i-1]):iRec229[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec229_perm[i]=iRec229_tmp[count+i];
			
			// LOOP 0x3417380
			// pre processing
			for (int i=0; i<4; i++) iRec232_tmp[i]=iRec232_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec232[i] = ((int(((fZec133[i] - fZec134[i]) < 0)))?(1 - iRec232[i-1]):iRec232[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec232_perm[i]=iRec232_tmp[count+i];
			
			// LOOP 0x341cde0
			// pre processing
			for (int i=0; i<4; i++) iRec235_tmp[i]=iRec235_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec235[i] = ((int(((fZec150[i] - fZec151[i]) < 0)))?(1 - iRec235[i-1]):iRec235[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec235_perm[i]=iRec235_tmp[count+i];
			
			// LOOP 0x3422750
			// pre processing
			for (int i=0; i<4; i++) iRec238_tmp[i]=iRec238_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec238[i] = ((int(((fZec167[i] - fZec168[i]) < 0)))?(1 - iRec238[i-1]):iRec238[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec238_perm[i]=iRec238_tmp[count+i];
			
			// LOOP 0x34280e0
			// pre processing
			for (int i=0; i<4; i++) iRec241_tmp[i]=iRec241_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec241[i] = ((int(((fZec184[i] - fZec185[i]) < 0)))?(1 - iRec241[i-1]):iRec241[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec241_perm[i]=iRec241_tmp[count+i];
			
			// LOOP 0x342dac0
			// pre processing
			for (int i=0; i<4; i++) iRec244_tmp[i]=iRec244_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec244[i] = ((int(((fZec201[i] - fZec202[i]) < 0)))?(1 - iRec244[i-1]):iRec244[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec244_perm[i]=iRec244_tmp[count+i];
			
			// LOOP 0x346d270
			// pre processing
			for (int i=0; i<4; i++) fYec159_tmp[i]=fYec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec159[i] = ((fZec21[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec159_perm[i]=fYec159_tmp[count+i];
			
			// LOOP 0x3471730
			// pre processing
			for (int i=0; i<4; i++) fYec160_tmp[i]=fYec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec160[i] = ((fZec38[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec160_perm[i]=fYec160_tmp[count+i];
			
			// LOOP 0x3475460
			// pre processing
			for (int i=0; i<4; i++) fYec161_tmp[i]=fYec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec161[i] = ((fZec55[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec161_perm[i]=fYec161_tmp[count+i];
			
			// LOOP 0x34796b0
			// pre processing
			for (int i=0; i<4; i++) fYec162_tmp[i]=fYec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec162[i] = ((fZec72[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec162_perm[i]=fYec162_tmp[count+i];
			
			// LOOP 0x347d2d0
			// pre processing
			for (int i=0; i<4; i++) fYec163_tmp[i]=fYec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec163[i] = ((fZec89[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec163_perm[i]=fYec163_tmp[count+i];
			
			// LOOP 0x34810b0
			// pre processing
			for (int i=0; i<4; i++) fYec164_tmp[i]=fYec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec164[i] = ((fZec106[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec164_perm[i]=fYec164_tmp[count+i];
			
			// LOOP 0x3484ee0
			// pre processing
			for (int i=0; i<4; i++) fYec165_tmp[i]=fYec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec165[i] = ((fZec123[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec165_perm[i]=fYec165_tmp[count+i];
			
			// LOOP 0x3488d40
			// pre processing
			for (int i=0; i<4; i++) fYec166_tmp[i]=fYec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec166[i] = ((fZec140[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec166_perm[i]=fYec166_tmp[count+i];
			
			// LOOP 0x348cf20
			// pre processing
			for (int i=0; i<4; i++) fYec167_tmp[i]=fYec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec167[i] = ((fZec157[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec167_perm[i]=fYec167_tmp[count+i];
			
			// LOOP 0x3490e00
			// pre processing
			for (int i=0; i<4; i++) fYec168_tmp[i]=fYec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec168[i] = ((fZec174[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec168_perm[i]=fYec168_tmp[count+i];
			
			// LOOP 0x3494d20
			// pre processing
			for (int i=0; i<4; i++) fYec169_tmp[i]=fYec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec169[i] = ((fZec191[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec169_perm[i]=fYec169_tmp[count+i];
			
			// LOOP 0x34989a0
			// pre processing
			for (int i=0; i<4; i++) fYec170_tmp[i]=fYec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec170[i] = (0 - (2 * (fRec4[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec170_perm[i]=fYec170_tmp[count+i];
			
			// LOOP 0x34b90b0
			// pre processing
			for (int i=0; i<4; i++) fYec172_tmp[i]=fYec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec172[i] = (0 - (2 * (fRec14[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec172_perm[i]=fYec172_tmp[count+i];
			
			// LOOP 0x34c13c0
			// pre processing
			for (int i=0; i<4; i++) fYec174_tmp[i]=fYec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec174[i] = (0 - (2 * (fRec23[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec174_perm[i]=fYec174_tmp[count+i];
			
			// LOOP 0x34c8a90
			// pre processing
			for (int i=0; i<4; i++) fYec176_tmp[i]=fYec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec176[i] = (0 - (2 * (fRec32[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec176_perm[i]=fYec176_tmp[count+i];
			
			// LOOP 0x34cc0d0
			// pre processing
			for (int i=0; i<4; i++) fYec178_tmp[i]=fYec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec178[i] = (0 - (2 * (fRec41[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec178_perm[i]=fYec178_tmp[count+i];
			
			// LOOP 0x34cf870
			// pre processing
			for (int i=0; i<4; i++) fYec180_tmp[i]=fYec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec180[i] = (0 - (2 * (fRec50[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec180_perm[i]=fYec180_tmp[count+i];
			
			// LOOP 0x34d3050
			// pre processing
			for (int i=0; i<4; i++) fYec182_tmp[i]=fYec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec182[i] = (0 - (2 * (fRec59[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec182_perm[i]=fYec182_tmp[count+i];
			
			// LOOP 0x34d6860
			// pre processing
			for (int i=0; i<4; i++) fYec184_tmp[i]=fYec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec184[i] = (0 - (2 * (fRec68[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec184_perm[i]=fYec184_tmp[count+i];
			
			// LOOP 0x35049c0
			// pre processing
			for (int i=0; i<4; i++) fYec187_tmp[i]=fYec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec187[i] = (0 - (2 * (fRec77[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec187_perm[i]=fYec187_tmp[count+i];
			
			// LOOP 0x350cc70
			// pre processing
			for (int i=0; i<4; i++) fYec189_tmp[i]=fYec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec189[i] = (0 - (2 * (fRec86[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec189_perm[i]=fYec189_tmp[count+i];
			
			// LOOP 0x35106d0
			// pre processing
			for (int i=0; i<4; i++) fYec191_tmp[i]=fYec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec191[i] = (0 - (2 * (fRec95[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec191_perm[i]=fYec191_tmp[count+i];
			
			// LOOP 0x35141b0
			// pre processing
			for (int i=0; i<4; i++) fYec193_tmp[i]=fYec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec193[i] = (0 - (2 * (fRec104[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec193_perm[i]=fYec193_tmp[count+i];
			
			// SECTION : 24
			// LOOP 0x3378820
			// pre processing
			for (int i=0; i<4; i++) fRec176_tmp[i]=fRec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec176[i] = (fConst11 * ((fRec177[i] - fRec177[i-1]) + fRec176[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec176_perm[i]=fRec176_tmp[count+i];
			
			// LOOP 0x337de40
			// pre processing
			for (int i=0; i<4; i++) fRec178_tmp[i]=fRec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec178[i] = (fConst11 * ((fRec179[i] - fRec179[i-1]) + fRec178[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec178_perm[i]=fRec178_tmp[count+i];
			
			// LOOP 0x3384440
			// pre processing
			for (int i=0; i<4; i++) fRec180_tmp[i]=fRec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec180[i] = (fConst11 * ((fRec181[i] - fRec181[i-1]) + fRec180[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec180_perm[i]=fRec180_tmp[count+i];
			
			// LOOP 0x33878a0
			// pre processing
			for (int i=0; i<4; i++) fVec48_tmp[i]=fVec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec48[i] = fSlow68;
			}
			// post processing
			for (int i=0; i<4; i++) fVec48_perm[i]=fVec48_tmp[count+i];
			
			// LOOP 0x338ae30
			// pre processing
			for (int i=0; i<4; i++) fRec182_tmp[i]=fRec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec182[i] = (fConst11 * ((fRec183[i] - fRec183[i-1]) + fRec182[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec182_perm[i]=fRec182_tmp[count+i];
			
			// LOOP 0x338e550
			// pre processing
			for (int i=0; i<4; i++) fVec49_tmp[i]=fVec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec49[i] = fSlow69;
			}
			// post processing
			for (int i=0; i<4; i++) fVec49_perm[i]=fVec49_tmp[count+i];
			
			// LOOP 0x3390fd0
			// pre processing
			for (int i=0; i<4; i++) fRec185_tmp[i]=fRec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec185[i] = (fRec185[i-1] + (fConst17 * ((square_polyblep_precalc(fZec23[i], fZec24[i], (0.5f * fYec8[i-2]), fZec34[i]) + (2 * fYec121[i-1])) - fRec185[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec185_perm[i]=fRec185_tmp[count+i];
			
			// LOOP 0x3393f90
			// pre processing
			for (int i=0; i<4; i++) fVec50_tmp[i]=fVec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec50[i] = fSlow70;
			}
			// post processing
			for (int i=0; i<4; i++) fVec50_perm[i]=fVec50_tmp[count+i];
			
			// LOOP 0x3397e10
			// pre processing
			for (int i=0; i<4; i++) fRec187_tmp[i]=fRec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec187[i] = (fRec187[i-1] + (fConst17 * ((square_polyblep_precalc(fZec40[i], fZec41[i], (0.5f * fYec15[i-2]), fZec51[i]) + (2 * fYec122[i-1])) - fRec187[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec187_perm[i]=fRec187_tmp[count+i];
			
			// LOOP 0x339ad60
			// pre processing
			for (int i=0; i<4; i++) fVec51_tmp[i]=fVec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec51[i] = fSlow71;
			}
			// post processing
			for (int i=0; i<4; i++) fVec51_perm[i]=fVec51_tmp[count+i];
			
			// LOOP 0x339db80
			// pre processing
			for (int i=0; i<4; i++) fRec189_tmp[i]=fRec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec189[i] = (fRec189[i-1] + (fConst17 * ((square_polyblep_precalc(fZec57[i], fZec58[i], (0.5f * fYec22[i-2]), fZec68[i]) + (2 * fYec123[i-1])) - fRec189[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec189_perm[i]=fRec189_tmp[count+i];
			
			// LOOP 0x33a0ad0
			// pre processing
			for (int i=0; i<4; i++) fVec52_tmp[i]=fVec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec52[i] = fSlow72;
			}
			// post processing
			for (int i=0; i<4; i++) fVec52_perm[i]=fVec52_tmp[count+i];
			
			// LOOP 0x33a4dd0
			// pre processing
			for (int i=0; i<4; i++) fRec191_tmp[i]=fRec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec191[i] = (fRec191[i-1] + (fConst18 * ((square_polyblep_precalc(fZec74[i], fZec75[i], (0.5f * fYec29[i-2]), fZec85[i]) + (2 * fYec124[i-1])) - fRec191[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec191_perm[i]=fRec191_tmp[count+i];
			
			// LOOP 0x33a80a0
			// pre processing
			for (int i=0; i<4; i++) fVec53_tmp[i]=fVec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec53[i] = fSlow73;
			}
			// post processing
			for (int i=0; i<4; i++) fVec53_perm[i]=fVec53_tmp[count+i];
			
			// LOOP 0x33ac6a0
			// pre processing
			for (int i=0; i<4; i++) fRec193_tmp[i]=fRec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec193[i] = (fRec193[i-1] + (fConst18 * ((square_polyblep_precalc(fZec91[i], fZec92[i], (0.5f * fYec36[i-2]), fZec102[i]) + (2 * fYec125[i-1])) - fRec193[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec193_perm[i]=fRec193_tmp[count+i];
			
			// LOOP 0x33af600
			// pre processing
			for (int i=0; i<4; i++) fVec54_tmp[i]=fVec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec54[i] = fSlow74;
			}
			// post processing
			for (int i=0; i<4; i++) fVec54_perm[i]=fVec54_tmp[count+i];
			
			// LOOP 0x33b2800
			// pre processing
			for (int i=0; i<4; i++) fRec195_tmp[i]=fRec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec195[i] = (fRec195[i-1] + (fConst18 * ((square_polyblep_precalc(fZec108[i], fZec109[i], (0.5f * fYec43[i-2]), fZec119[i]) + (2 * fYec126[i-1])) - fRec195[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec195_perm[i]=fRec195_tmp[count+i];
			
			// LOOP 0x33b5770
			// pre processing
			for (int i=0; i<4; i++) fVec55_tmp[i]=fVec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec55[i] = fSlow75;
			}
			// post processing
			for (int i=0; i<4; i++) fVec55_perm[i]=fVec55_tmp[count+i];
			
			// LOOP 0x33ba1f0
			// pre processing
			for (int i=0; i<4; i++) fRec197_tmp[i]=fRec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec197[i] = (fRec197[i-1] + (fConst18 * ((square_polyblep_precalc(fZec125[i], fZec126[i], (0.5f * fYec50[i-2]), fZec136[i]) + (2 * fYec127[i-1])) - fRec197[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec197_perm[i]=fRec197_tmp[count+i];
			
			// LOOP 0x33bd160
			// pre processing
			for (int i=0; i<4; i++) fVec56_tmp[i]=fVec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec56[i] = fSlow76;
			}
			// post processing
			for (int i=0; i<4; i++) fVec56_perm[i]=fVec56_tmp[count+i];
			
			// LOOP 0x33c06f0
			// pre processing
			for (int i=0; i<4; i++) fRec199_tmp[i]=fRec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec199[i] = (fRec199[i-1] + (fConst19 * ((square_polyblep_precalc(fZec142[i], fZec143[i], (0.5f * fYec57[i-2]), fZec153[i]) + (2 * fYec128[i-1])) - fRec199[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec199_perm[i]=fRec199_tmp[count+i];
			
			// LOOP 0x33c39a0
			// pre processing
			for (int i=0; i<4; i++) fVec57_tmp[i]=fVec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec57[i] = fSlow77;
			}
			// post processing
			for (int i=0; i<4; i++) fVec57_perm[i]=fVec57_tmp[count+i];
			
			// LOOP 0x33c7330
			// pre processing
			for (int i=0; i<4; i++) fRec201_tmp[i]=fRec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec201[i] = (fRec201[i-1] + (fConst19 * ((square_polyblep_precalc(fZec159[i], fZec160[i], (0.5f * fYec64[i-2]), fZec170[i]) + (2 * fYec129[i-1])) - fRec201[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec201_perm[i]=fRec201_tmp[count+i];
			
			// LOOP 0x33ca2a0
			// pre processing
			for (int i=0; i<4; i++) fVec58_tmp[i]=fVec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec58[i] = fSlow78;
			}
			// post processing
			for (int i=0; i<4; i++) fVec58_perm[i]=fVec58_tmp[count+i];
			
			// LOOP 0x33cccd0
			// pre processing
			for (int i=0; i<4; i++) fRec203_tmp[i]=fRec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec203[i] = (fRec203[i-1] + (fConst19 * ((square_polyblep_precalc(fZec176[i], fZec177[i], (0.5f * fYec71[i-2]), fZec187[i]) + (2 * fYec130[i-1])) - fRec203[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec203_perm[i]=fRec203_tmp[count+i];
			
			// LOOP 0x33cfc40
			// pre processing
			for (int i=0; i<4; i++) fVec59_tmp[i]=fVec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec59[i] = fSlow79;
			}
			// post processing
			for (int i=0; i<4; i++) fVec59_perm[i]=fVec59_tmp[count+i];
			
			// LOOP 0x33d3a10
			// pre processing
			for (int i=0; i<4; i++) fRec205_tmp[i]=fRec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec205[i] = (fRec205[i-1] + (fConst19 * ((square_polyblep_precalc(fZec193[i], fZec194[i], (0.5f * fYec78[i-2]), fZec204[i]) + (2 * fYec131[i-1])) - fRec205[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec205_perm[i]=fRec205_tmp[count+i];
			
			// LOOP 0x33d6980
			// pre processing
			for (int i=0; i<4; i++) fVec60_tmp[i]=fVec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec60[i] = fSlow80;
			}
			// post processing
			for (int i=0; i<4; i++) fVec60_perm[i]=fVec60_tmp[count+i];
			
			// LOOP 0x33dabd0
			// pre processing
			for (int i=0; i<4; i++) fRec207_tmp[i]=fRec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec207[i] = (fRec207[i-1] + (fConst20 * ((square_polyblep_precalc(fZec4[i], fZec5[i], (0.5f * fYec0[i-2]), fZec17[i]) + (2 * fYec132[i-1])) - fRec207[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec207_perm[i]=fRec207_tmp[count+i];
			
			// LOOP 0x33df080
			// exec code
			for (int i=0; i<count; i++) {
				fZec257[i] = (fRec174[i] + (fRec172[i] + (fRec170[i] + (fRec168[i] + fZec256[i]))));
			}
			
			// LOOP 0x33f0190
			// pre processing
			for (int i=0; i<4; i++) fYec134_tmp[i]=fYec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec134[i] = (iRec211[i] + fZec14[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec134_perm[i]=fYec134_tmp[count+i];
			
			// LOOP 0x33f6170
			// pre processing
			for (int i=0; i<4; i++) fYec136_tmp[i]=fYec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec136[i] = (iRec214[i] + fZec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec136_perm[i]=fYec136_tmp[count+i];
			
			// LOOP 0x33fb970
			// pre processing
			for (int i=0; i<4; i++) fYec138_tmp[i]=fYec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec138[i] = (iRec217[i] + fZec48[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec138_perm[i]=fYec138_tmp[count+i];
			
			// LOOP 0x34010e0
			// pre processing
			for (int i=0; i<4; i++) fYec140_tmp[i]=fYec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec140[i] = (iRec220[i] + fZec65[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec140_perm[i]=fYec140_tmp[count+i];
			
			// LOOP 0x3406950
			// pre processing
			for (int i=0; i<4; i++) fYec142_tmp[i]=fYec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec142[i] = (iRec223[i] + fZec82[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec142_perm[i]=fYec142_tmp[count+i];
			
			// LOOP 0x340c180
			// pre processing
			for (int i=0; i<4; i++) fYec144_tmp[i]=fYec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec144[i] = (iRec226[i] + fZec99[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec144_perm[i]=fYec144_tmp[count+i];
			
			// LOOP 0x3411a50
			// pre processing
			for (int i=0; i<4; i++) fYec146_tmp[i]=fYec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec146[i] = (iRec229[i] + fZec116[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec146_perm[i]=fYec146_tmp[count+i];
			
			// LOOP 0x3417210
			// pre processing
			for (int i=0; i<4; i++) fYec148_tmp[i]=fYec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec148[i] = (iRec232[i] + fZec133[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec148_perm[i]=fYec148_tmp[count+i];
			
			// LOOP 0x341cc40
			// pre processing
			for (int i=0; i<4; i++) fYec150_tmp[i]=fYec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec150[i] = (iRec235[i] + fZec150[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec150_perm[i]=fYec150_tmp[count+i];
			
			// LOOP 0x34225b0
			// pre processing
			for (int i=0; i<4; i++) fYec152_tmp[i]=fYec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec152[i] = (iRec238[i] + fZec167[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec152_perm[i]=fYec152_tmp[count+i];
			
			// LOOP 0x3427f40
			// pre processing
			for (int i=0; i<4; i++) fYec154_tmp[i]=fYec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec154[i] = (iRec241[i] + fZec184[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec154_perm[i]=fYec154_tmp[count+i];
			
			// LOOP 0x342d920
			// pre processing
			for (int i=0; i<4; i++) fYec156_tmp[i]=fYec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec156[i] = (iRec244[i] + fZec201[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec156_perm[i]=fYec156_tmp[count+i];
			
			// LOOP 0x346c590
			// pre processing
			for (int i=0; i<4; i++) fRec246_tmp[i]=fRec246_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec246[i] = (fRec246[i-1] + (fConst20 * ((square_polyblep_precalc(fZec21[i], fZec22[i], (0.5f * fYec7[i-2]), fZec34[i]) + (2 * fYec159[i-1])) - fRec246[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec246_perm[i]=fRec246_tmp[count+i];
			
			// LOOP 0x34711e0
			// pre processing
			for (int i=0; i<4; i++) fRec248_tmp[i]=fRec248_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec248[i] = (fRec248[i-1] + (fConst20 * ((square_polyblep_precalc(fZec38[i], fZec39[i], (0.5f * fYec14[i-2]), fZec51[i]) + (2 * fYec160[i-1])) - fRec248[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec248_perm[i]=fRec248_tmp[count+i];
			
			// LOOP 0x3474f30
			// pre processing
			for (int i=0; i<4; i++) fRec250_tmp[i]=fRec250_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec250[i] = (fRec250[i-1] + (fConst20 * ((square_polyblep_precalc(fZec55[i], fZec56[i], (0.5f * fYec21[i-2]), fZec68[i]) + (2 * fYec161[i-1])) - fRec250[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec250_perm[i]=fRec250_tmp[count+i];
			
			// LOOP 0x3478ca0
			// pre processing
			for (int i=0; i<4; i++) fRec252_tmp[i]=fRec252_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec252[i] = (fRec252[i-1] + (fConst24 * (((2 * fYec162[i-1]) + square_polyblep_precalc(fZec72[i], fZec73[i], (0.5f * fYec28[i-2]), fZec85[i])) - fRec252[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec252_perm[i]=fRec252_tmp[count+i];
			
			// LOOP 0x347cde0
			// pre processing
			for (int i=0; i<4; i++) fRec254_tmp[i]=fRec254_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec254[i] = (fRec254[i-1] + (fConst24 * ((square_polyblep_precalc(fZec89[i], fZec90[i], (0.5f * fYec35[i-2]), fZec102[i]) + (2 * fYec163[i-1])) - fRec254[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec254_perm[i]=fRec254_tmp[count+i];
			
			// LOOP 0x3480be0
			// pre processing
			for (int i=0; i<4; i++) fRec256_tmp[i]=fRec256_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec256[i] = (fRec256[i-1] + (fConst24 * ((square_polyblep_precalc(fZec106[i], fZec107[i], (0.5f * fYec42[i-2]), fZec119[i]) + (2 * fYec164[i-1])) - fRec256[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec256_perm[i]=fRec256_tmp[count+i];
			
			// LOOP 0x34849b0
			// pre processing
			for (int i=0; i<4; i++) fRec258_tmp[i]=fRec258_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec258[i] = (fRec258[i-1] + (fConst24 * ((square_polyblep_precalc(fZec123[i], fZec124[i], (0.5f * fYec49[i-2]), fZec136[i]) + (2 * fYec165[i-1])) - fRec258[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec258_perm[i]=fRec258_tmp[count+i];
			
			// LOOP 0x3488830
			// pre processing
			for (int i=0; i<4; i++) fRec260_tmp[i]=fRec260_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec260[i] = (fRec260[i-1] + (fConst25 * ((square_polyblep_precalc(fZec140[i], fZec141[i], (0.5f * fYec56[i-2]), fZec153[i]) + (2 * fYec166[i-1])) - fRec260[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec260_perm[i]=fRec260_tmp[count+i];
			
			// LOOP 0x348ca30
			// pre processing
			for (int i=0; i<4; i++) fRec262_tmp[i]=fRec262_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec262[i] = (fRec262[i-1] + (fConst25 * ((square_polyblep_precalc(fZec157[i], fZec158[i], (0.5f * fYec63[i-2]), fZec170[i]) + (2 * fYec167[i-1])) - fRec262[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec262_perm[i]=fRec262_tmp[count+i];
			
			// LOOP 0x3490930
			// pre processing
			for (int i=0; i<4; i++) fRec264_tmp[i]=fRec264_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec264[i] = (fRec264[i-1] + (fConst25 * ((square_polyblep_precalc(fZec174[i], fZec175[i], (0.5f * fYec70[i-2]), fZec187[i]) + (2 * fYec168[i-1])) - fRec264[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec264_perm[i]=fRec264_tmp[count+i];
			
			// LOOP 0x3494870
			// pre processing
			for (int i=0; i<4; i++) fRec266_tmp[i]=fRec266_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec266[i] = (fRec266[i-1] + (fConst25 * ((square_polyblep_precalc(fZec191[i], fZec192[i], (0.5f * fYec77[i-2]), fZec204[i]) + (2 * fYec169[i-1])) - fRec266[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec266_perm[i]=fRec266_tmp[count+i];
			
			// LOOP 0x3498890
			// pre processing
			for (int i=0; i<4; i++) fYec171_tmp[i]=fYec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec171[i] = (fZec17[i] + fYec170[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec171_perm[i]=fYec171_tmp[count+i];
			
			// LOOP 0x34b8fa0
			// pre processing
			for (int i=0; i<4; i++) fYec173_tmp[i]=fYec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec173[i] = (fZec34[i] + fYec172[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec173_perm[i]=fYec173_tmp[count+i];
			
			// LOOP 0x34c12b0
			// pre processing
			for (int i=0; i<4; i++) fYec175_tmp[i]=fYec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec175[i] = (fZec51[i] + fYec174[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec175_perm[i]=fYec175_tmp[count+i];
			
			// LOOP 0x34c8980
			// pre processing
			for (int i=0; i<4; i++) fYec177_tmp[i]=fYec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec177[i] = (fZec68[i] + fYec176[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec177_perm[i]=fYec177_tmp[count+i];
			
			// LOOP 0x34cb230
			// pre processing
			for (int i=0; i<4; i++) fYec179_tmp[i]=fYec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec179[i] = (fZec85[i] + fYec178[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec179_perm[i]=fYec179_tmp[count+i];
			
			// LOOP 0x34ce970
			// pre processing
			for (int i=0; i<4; i++) fYec181_tmp[i]=fYec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec181[i] = (fZec102[i] + fYec180[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec181_perm[i]=fYec181_tmp[count+i];
			
			// LOOP 0x34d20f0
			// pre processing
			for (int i=0; i<4; i++) fYec183_tmp[i]=fYec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec183[i] = (fZec119[i] + fYec182[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec183_perm[i]=fYec183_tmp[count+i];
			
			// LOOP 0x34d58b0
			// pre processing
			for (int i=0; i<4; i++) fYec185_tmp[i]=fYec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec185[i] = (fZec136[i] + fYec184[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec185_perm[i]=fYec185_tmp[count+i];
			
			// LOOP 0x35048b0
			// pre processing
			for (int i=0; i<4; i++) fYec188_tmp[i]=fYec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec188[i] = (fZec153[i] + fYec187[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec188_perm[i]=fYec188_tmp[count+i];
			
			// LOOP 0x350cb60
			// pre processing
			for (int i=0; i<4; i++) fYec190_tmp[i]=fYec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec190[i] = (fZec170[i] + fYec189[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec190_perm[i]=fYec190_tmp[count+i];
			
			// LOOP 0x35105c0
			// pre processing
			for (int i=0; i<4; i++) fYec192_tmp[i]=fYec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec192[i] = (fZec187[i] + fYec191[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec192_perm[i]=fYec192_tmp[count+i];
			
			// LOOP 0x35140a0
			// pre processing
			for (int i=0; i<4; i++) fYec194_tmp[i]=fYec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec194[i] = (fZec204[i] + fYec193[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec194_perm[i]=fYec194_tmp[count+i];
			
			// SECTION : 25
			// LOOP 0x31a4480
			// pre processing
			for (int i=0; i<4; i++) fVec0_tmp[i]=fVec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec0[i] = fSlow2;
			}
			// post processing
			for (int i=0; i<4; i++) fVec0_perm[i]=fVec0_tmp[count+i];
			
			// LOOP 0x31bf670
			// pre processing
			for (int i=0; i<4; i++) fVec1_tmp[i]=fVec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec1[i] = fSlow8;
			}
			// post processing
			for (int i=0; i<4; i++) fVec1_perm[i]=fVec1_tmp[count+i];
			
			// LOOP 0x31d5980
			// pre processing
			for (int i=0; i<4; i++) fVec2_tmp[i]=fVec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec2[i] = fSlow10;
			}
			// post processing
			for (int i=0; i<4; i++) fVec2_perm[i]=fVec2_tmp[count+i];
			
			// LOOP 0x31ebf20
			// pre processing
			for (int i=0; i<4; i++) fVec3_tmp[i]=fVec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec3[i] = fSlow12;
			}
			// post processing
			for (int i=0; i<4; i++) fVec3_perm[i]=fVec3_tmp[count+i];
			
			// LOOP 0x3202470
			// pre processing
			for (int i=0; i<4; i++) fVec4_tmp[i]=fVec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec4[i] = fSlow14;
			}
			// post processing
			for (int i=0; i<4; i++) fVec4_perm[i]=fVec4_tmp[count+i];
			
			// LOOP 0x3218eb0
			// pre processing
			for (int i=0; i<4; i++) fVec5_tmp[i]=fVec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec5[i] = fSlow16;
			}
			// post processing
			for (int i=0; i<4; i++) fVec5_perm[i]=fVec5_tmp[count+i];
			
			// LOOP 0x322f760
			// pre processing
			for (int i=0; i<4; i++) fVec6_tmp[i]=fVec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec6[i] = fSlow18;
			}
			// post processing
			for (int i=0; i<4; i++) fVec6_perm[i]=fVec6_tmp[count+i];
			
			// LOOP 0x3245dc0
			// pre processing
			for (int i=0; i<4; i++) fVec7_tmp[i]=fVec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec7[i] = fSlow20;
			}
			// post processing
			for (int i=0; i<4; i++) fVec7_perm[i]=fVec7_tmp[count+i];
			
			// LOOP 0x325c840
			// pre processing
			for (int i=0; i<4; i++) fVec8_tmp[i]=fVec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec8[i] = fSlow22;
			}
			// post processing
			for (int i=0; i<4; i++) fVec8_perm[i]=fVec8_tmp[count+i];
			
			// LOOP 0x3273330
			// pre processing
			for (int i=0; i<4; i++) fVec9_tmp[i]=fVec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec9[i] = fSlow24;
			}
			// post processing
			for (int i=0; i<4; i++) fVec9_perm[i]=fVec9_tmp[count+i];
			
			// LOOP 0x3289be0
			// pre processing
			for (int i=0; i<4; i++) fVec10_tmp[i]=fVec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec10[i] = fSlow26;
			}
			// post processing
			for (int i=0; i<4; i++) fVec10_perm[i]=fVec10_tmp[count+i];
			
			// LOOP 0x32a0260
			// pre processing
			for (int i=0; i<4; i++) fVec11_tmp[i]=fVec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec11[i] = fSlow28;
			}
			// post processing
			for (int i=0; i<4; i++) fVec11_perm[i]=fVec11_tmp[count+i];
			
			// LOOP 0x32b6dc0
			// pre processing
			for (int i=0; i<4; i++) fVec12_tmp[i]=fVec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec12[i] = fSlow30;
			}
			// post processing
			for (int i=0; i<4; i++) fVec12_perm[i]=fVec12_tmp[count+i];
			
			// LOOP 0x32bc700
			// pre processing
			for (int i=0; i<4; i++) fVec13_tmp[i]=fVec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec13[i] = fSlow31;
			}
			// post processing
			for (int i=0; i<4; i++) fVec13_perm[i]=fVec13_tmp[count+i];
			
			// LOOP 0x32c1830
			// pre processing
			for (int i=0; i<4; i++) fVec14_tmp[i]=fVec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec14[i] = fSlow32;
			}
			// post processing
			for (int i=0; i<4; i++) fVec14_perm[i]=fVec14_tmp[count+i];
			
			// LOOP 0x32c7010
			// pre processing
			for (int i=0; i<4; i++) fVec15_tmp[i]=fVec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec15[i] = fSlow33;
			}
			// post processing
			for (int i=0; i<4; i++) fVec15_perm[i]=fVec15_tmp[count+i];
			
			// LOOP 0x32cc320
			// pre processing
			for (int i=0; i<4; i++) fVec16_tmp[i]=fVec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec16[i] = fSlow34;
			}
			// post processing
			for (int i=0; i<4; i++) fVec16_perm[i]=fVec16_tmp[count+i];
			
			// LOOP 0x32d3440
			// pre processing
			for (int i=0; i<4; i++) fVec17_tmp[i]=fVec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec17[i] = fSlow37;
			}
			// post processing
			for (int i=0; i<4; i++) fVec17_perm[i]=fVec17_tmp[count+i];
			
			// LOOP 0x32d8cd0
			// pre processing
			for (int i=0; i<4; i++) fVec18_tmp[i]=fVec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec18[i] = fSlow38;
			}
			// post processing
			for (int i=0; i<4; i++) fVec18_perm[i]=fVec18_tmp[count+i];
			
			// LOOP 0x32dde70
			// pre processing
			for (int i=0; i<4; i++) fVec19_tmp[i]=fVec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec19[i] = fSlow39;
			}
			// post processing
			for (int i=0; i<4; i++) fVec19_perm[i]=fVec19_tmp[count+i];
			
			// LOOP 0x32e3a10
			// pre processing
			for (int i=0; i<4; i++) fVec20_tmp[i]=fVec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec20[i] = fSlow40;
			}
			// post processing
			for (int i=0; i<4; i++) fVec20_perm[i]=fVec20_tmp[count+i];
			
			// LOOP 0x32e9020
			// pre processing
			for (int i=0; i<4; i++) fVec21_tmp[i]=fVec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec21[i] = fSlow41;
			}
			// post processing
			for (int i=0; i<4; i++) fVec21_perm[i]=fVec21_tmp[count+i];
			
			// LOOP 0x32ee570
			// pre processing
			for (int i=0; i<4; i++) fVec22_tmp[i]=fVec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec22[i] = fSlow42;
			}
			// post processing
			for (int i=0; i<4; i++) fVec22_perm[i]=fVec22_tmp[count+i];
			
			// LOOP 0x32f3540
			// pre processing
			for (int i=0; i<4; i++) fVec23_tmp[i]=fVec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec23[i] = fSlow43;
			}
			// post processing
			for (int i=0; i<4; i++) fVec23_perm[i]=fVec23_tmp[count+i];
			
			// LOOP 0x32f8d00
			// pre processing
			for (int i=0; i<4; i++) fVec24_tmp[i]=fVec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec24[i] = fSlow44;
			}
			// post processing
			for (int i=0; i<4; i++) fVec24_perm[i]=fVec24_tmp[count+i];
			
			// LOOP 0x32ff020
			// pre processing
			for (int i=0; i<4; i++) fVec25_tmp[i]=fVec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec25[i] = fSlow45;
			}
			// post processing
			for (int i=0; i<4; i++) fVec25_perm[i]=fVec25_tmp[count+i];
			
			// LOOP 0x33041e0
			// pre processing
			for (int i=0; i<4; i++) fVec26_tmp[i]=fVec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec26[i] = fSlow46;
			}
			// post processing
			for (int i=0; i<4; i++) fVec26_perm[i]=fVec26_tmp[count+i];
			
			// LOOP 0x3309f40
			// pre processing
			for (int i=0; i<4; i++) fVec27_tmp[i]=fVec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec27[i] = fSlow47;
			}
			// post processing
			for (int i=0; i<4; i++) fVec27_perm[i]=fVec27_tmp[count+i];
			
			// LOOP 0x330f250
			// pre processing
			for (int i=0; i<4; i++) fVec28_tmp[i]=fVec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec28[i] = fSlow48;
			}
			// post processing
			for (int i=0; i<4; i++) fVec28_perm[i]=fVec28_tmp[count+i];
			
			// LOOP 0x3315620
			// pre processing
			for (int i=0; i<4; i++) fVec29_tmp[i]=fVec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec29[i] = fSlow49;
			}
			// post processing
			for (int i=0; i<4; i++) fVec29_perm[i]=fVec29_tmp[count+i];
			
			// LOOP 0x331b8c0
			// pre processing
			for (int i=0; i<4; i++) fVec30_tmp[i]=fVec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec30[i] = fSlow50;
			}
			// post processing
			for (int i=0; i<4; i++) fVec30_perm[i]=fVec30_tmp[count+i];
			
			// LOOP 0x3320fc0
			// pre processing
			for (int i=0; i<4; i++) fVec31_tmp[i]=fVec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec31[i] = fSlow51;
			}
			// post processing
			for (int i=0; i<4; i++) fVec31_perm[i]=fVec31_tmp[count+i];
			
			// LOOP 0x3327550
			// pre processing
			for (int i=0; i<4; i++) fVec32_tmp[i]=fVec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec32[i] = fSlow52;
			}
			// post processing
			for (int i=0; i<4; i++) fVec32_perm[i]=fVec32_tmp[count+i];
			
			// LOOP 0x332cc80
			// pre processing
			for (int i=0; i<4; i++) fVec33_tmp[i]=fVec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec33[i] = fSlow53;
			}
			// post processing
			for (int i=0; i<4; i++) fVec33_perm[i]=fVec33_tmp[count+i];
			
			// LOOP 0x3332850
			// pre processing
			for (int i=0; i<4; i++) fVec34_tmp[i]=fVec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec34[i] = fSlow54;
			}
			// post processing
			for (int i=0; i<4; i++) fVec34_perm[i]=fVec34_tmp[count+i];
			
			// LOOP 0x3337b10
			// pre processing
			for (int i=0; i<4; i++) fVec35_tmp[i]=fVec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec35[i] = fSlow55;
			}
			// post processing
			for (int i=0; i<4; i++) fVec35_perm[i]=fVec35_tmp[count+i];
			
			// LOOP 0x333d9f0
			// pre processing
			for (int i=0; i<4; i++) fVec36_tmp[i]=fVec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec36[i] = fSlow56;
			}
			// post processing
			for (int i=0; i<4; i++) fVec36_perm[i]=fVec36_tmp[count+i];
			
			// LOOP 0x3343f10
			// pre processing
			for (int i=0; i<4; i++) fVec37_tmp[i]=fVec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec37[i] = fSlow57;
			}
			// post processing
			for (int i=0; i<4; i++) fVec37_perm[i]=fVec37_tmp[count+i];
			
			// LOOP 0x33494e0
			// pre processing
			for (int i=0; i<4; i++) fVec38_tmp[i]=fVec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec38[i] = fSlow58;
			}
			// post processing
			for (int i=0; i<4; i++) fVec38_perm[i]=fVec38_tmp[count+i];
			
			// LOOP 0x334fa90
			// pre processing
			for (int i=0; i<4; i++) fVec39_tmp[i]=fVec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec39[i] = fSlow59;
			}
			// post processing
			for (int i=0; i<4; i++) fVec39_perm[i]=fVec39_tmp[count+i];
			
			// LOOP 0x3355370
			// pre processing
			for (int i=0; i<4; i++) fVec40_tmp[i]=fVec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec40[i] = fSlow60;
			}
			// post processing
			for (int i=0; i<4; i++) fVec40_perm[i]=fVec40_tmp[count+i];
			
			// LOOP 0x335bff0
			// pre processing
			for (int i=0; i<4; i++) fVec41_tmp[i]=fVec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec41[i] = fSlow61;
			}
			// post processing
			for (int i=0; i<4; i++) fVec41_perm[i]=fVec41_tmp[count+i];
			
			// LOOP 0x3362c00
			// pre processing
			for (int i=0; i<4; i++) fVec42_tmp[i]=fVec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec42[i] = fSlow62;
			}
			// post processing
			for (int i=0; i<4; i++) fVec42_perm[i]=fVec42_tmp[count+i];
			
			// LOOP 0x3368810
			// pre processing
			for (int i=0; i<4; i++) fVec43_tmp[i]=fVec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec43[i] = fSlow63;
			}
			// post processing
			for (int i=0; i<4; i++) fVec43_perm[i]=fVec43_tmp[count+i];
			
			// LOOP 0x336f7d0
			// pre processing
			for (int i=0; i<4; i++) fVec44_tmp[i]=fVec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec44[i] = fSlow64;
			}
			// post processing
			for (int i=0; i<4; i++) fVec44_perm[i]=fVec44_tmp[count+i];
			
			// LOOP 0x3375a50
			// pre processing
			for (int i=0; i<4; i++) fVec45_tmp[i]=fVec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec45[i] = fSlow65;
			}
			// post processing
			for (int i=0; i<4; i++) fVec45_perm[i]=fVec45_tmp[count+i];
			
			// LOOP 0x337bc80
			// pre processing
			for (int i=0; i<4; i++) fVec46_tmp[i]=fVec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec46[i] = fSlow66;
			}
			// post processing
			for (int i=0; i<4; i++) fVec46_perm[i]=fVec46_tmp[count+i];
			
			// LOOP 0x33812a0
			// pre processing
			for (int i=0; i<4; i++) fVec47_tmp[i]=fVec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec47[i] = fSlow67;
			}
			// post processing
			for (int i=0; i<4; i++) fVec47_perm[i]=fVec47_tmp[count+i];
			
			// LOOP 0x3387790
			// exec code
			for (int i=0; i<count; i++) {
				fZec242[i] = (fSlow68 + (fVec48[i-3] + (fVec48[i-1] + fVec48[i-2])));
			}
			
			// LOOP 0x338e440
			// exec code
			for (int i=0; i<count; i++) {
				fZec243[i] = (fSlow69 + (fVec49[i-3] + (fVec49[i-1] + fVec49[i-2])));
			}
			
			// LOOP 0x3390ae0
			// pre processing
			for (int i=0; i<4; i++) fRec184_tmp[i]=fRec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec184[i] = (fConst11 * ((fRec185[i] - fRec185[i-1]) + fRec184[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec184_perm[i]=fRec184_tmp[count+i];
			
			// LOOP 0x3393e80
			// exec code
			for (int i=0; i<count; i++) {
				fZec244[i] = (fSlow70 + (fVec50[i-3] + (fVec50[i-1] + fVec50[i-2])));
			}
			
			// LOOP 0x3397920
			// pre processing
			for (int i=0; i<4; i++) fRec186_tmp[i]=fRec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec186[i] = (fConst11 * ((fRec187[i] - fRec187[i-1]) + fRec186[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec186_perm[i]=fRec186_tmp[count+i];
			
			// LOOP 0x339ac50
			// exec code
			for (int i=0; i<count; i++) {
				fZec245[i] = (fSlow71 + (fVec51[i-3] + (fVec51[i-1] + fVec51[i-2])));
			}
			
			// LOOP 0x339d690
			// pre processing
			for (int i=0; i<4; i++) fRec188_tmp[i]=fRec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec188[i] = (fConst11 * ((fRec189[i] - fRec189[i-1]) + fRec188[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec188_perm[i]=fRec188_tmp[count+i];
			
			// LOOP 0x33a09c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec246[i] = (fSlow72 + (fVec52[i-3] + (fVec52[i-1] + fVec52[i-2])));
			}
			
			// LOOP 0x33a48e0
			// pre processing
			for (int i=0; i<4; i++) fRec190_tmp[i]=fRec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec190[i] = (fConst11 * ((fRec191[i] - fRec191[i-1]) + fRec190[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec190_perm[i]=fRec190_tmp[count+i];
			
			// LOOP 0x33a7f90
			// exec code
			for (int i=0; i<count; i++) {
				fZec247[i] = (fSlow73 + (fVec53[i-3] + (fVec53[i-1] + fVec53[i-2])));
			}
			
			// LOOP 0x33ac1b0
			// pre processing
			for (int i=0; i<4; i++) fRec192_tmp[i]=fRec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec192[i] = (fConst11 * ((fRec193[i] - fRec193[i-1]) + fRec192[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec192_perm[i]=fRec192_tmp[count+i];
			
			// LOOP 0x33af4f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec248[i] = (fSlow74 + (fVec54[i-3] + (fVec54[i-1] + fVec54[i-2])));
			}
			
			// LOOP 0x33b2310
			// pre processing
			for (int i=0; i<4; i++) fRec194_tmp[i]=fRec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec194[i] = (fConst11 * ((fRec195[i] - fRec195[i-1]) + fRec194[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec194_perm[i]=fRec194_tmp[count+i];
			
			// LOOP 0x33b5660
			// exec code
			for (int i=0; i<count; i++) {
				fZec249[i] = (fSlow75 + (fVec55[i-3] + (fVec55[i-1] + fVec55[i-2])));
			}
			
			// LOOP 0x33b9d00
			// pre processing
			for (int i=0; i<4; i++) fRec196_tmp[i]=fRec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec196[i] = (fConst11 * ((fRec197[i] - fRec197[i-1]) + fRec196[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec196_perm[i]=fRec196_tmp[count+i];
			
			// LOOP 0x33bd050
			// exec code
			for (int i=0; i<count; i++) {
				fZec250[i] = (fSlow76 + (fVec56[i-3] + (fVec56[i-1] + fVec56[i-2])));
			}
			
			// LOOP 0x33c0200
			// pre processing
			for (int i=0; i<4; i++) fRec198_tmp[i]=fRec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec198[i] = (fConst11 * ((fRec199[i] - fRec199[i-1]) + fRec198[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec198_perm[i]=fRec198_tmp[count+i];
			
			// LOOP 0x33c3890
			// exec code
			for (int i=0; i<count; i++) {
				fZec251[i] = (fSlow77 + (fVec57[i-3] + (fVec57[i-1] + fVec57[i-2])));
			}
			
			// LOOP 0x33c6e40
			// pre processing
			for (int i=0; i<4; i++) fRec200_tmp[i]=fRec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec200[i] = (fConst11 * ((fRec201[i] - fRec201[i-1]) + fRec200[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec200_perm[i]=fRec200_tmp[count+i];
			
			// LOOP 0x33ca190
			// exec code
			for (int i=0; i<count; i++) {
				fZec252[i] = (fSlow78 + (fVec58[i-3] + (fVec58[i-1] + fVec58[i-2])));
			}
			
			// LOOP 0x33cc7e0
			// pre processing
			for (int i=0; i<4; i++) fRec202_tmp[i]=fRec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec202[i] = (fConst11 * ((fRec203[i] - fRec203[i-1]) + fRec202[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec202_perm[i]=fRec202_tmp[count+i];
			
			// LOOP 0x33cfb30
			// exec code
			for (int i=0; i<count; i++) {
				fZec253[i] = (fSlow79 + (fVec59[i-3] + (fVec59[i-1] + fVec59[i-2])));
			}
			
			// LOOP 0x33d3520
			// pre processing
			for (int i=0; i<4; i++) fRec204_tmp[i]=fRec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec204[i] = (fConst11 * ((fRec205[i] - fRec205[i-1]) + fRec204[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec204_perm[i]=fRec204_tmp[count+i];
			
			// LOOP 0x33d6870
			// exec code
			for (int i=0; i<count; i++) {
				fZec254[i] = (fSlow80 + (fVec60[i-3] + (fVec60[i-1] + fVec60[i-2])));
			}
			
			// LOOP 0x33da6e0
			// pre processing
			for (int i=0; i<4; i++) fRec206_tmp[i]=fRec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec206[i] = (fConst11 * ((fRec207[i] - fRec207[i-1]) + fRec206[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec206_perm[i]=fRec206_tmp[count+i];
			
			// LOOP 0x33def40
			// exec code
			for (int i=0; i<count; i++) {
				fZec258[i] = (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + fZec257[i]))));
			}
			
			// LOOP 0x33f0050
			// exec code
			for (int i=0; i<count; i++) {
				fZec263[i] = (0.5f * fYec134[i]);
			}
			
			// LOOP 0x33f6060
			// exec code
			for (int i=0; i<count; i++) {
				fZec264[i] = (0.5f * fYec136[i]);
			}
			
			// LOOP 0x33fb830
			// exec code
			for (int i=0; i<count; i++) {
				fZec265[i] = (0.5f * fYec138[i]);
			}
			
			// LOOP 0x3400fa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec266[i] = (0.5f * fYec140[i]);
			}
			
			// LOOP 0x3406810
			// exec code
			for (int i=0; i<count; i++) {
				fZec267[i] = (0.5f * fYec142[i]);
			}
			
			// LOOP 0x340c040
			// exec code
			for (int i=0; i<count; i++) {
				fZec268[i] = (0.5f * fYec144[i]);
			}
			
			// LOOP 0x3411910
			// exec code
			for (int i=0; i<count; i++) {
				fZec269[i] = (0.5f * fYec146[i]);
			}
			
			// LOOP 0x3417100
			// exec code
			for (int i=0; i<count; i++) {
				fZec270[i] = (0.5f * fYec148[i]);
			}
			
			// LOOP 0x341cb00
			// exec code
			for (int i=0; i<count; i++) {
				fZec271[i] = (0.5f * fYec150[i]);
			}
			
			// LOOP 0x3422470
			// exec code
			for (int i=0; i<count; i++) {
				fZec272[i] = (0.5f * fYec152[i]);
			}
			
			// LOOP 0x3427e00
			// exec code
			for (int i=0; i<count; i++) {
				fZec273[i] = (0.5f * fYec154[i]);
			}
			
			// LOOP 0x342d7e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec274[i] = (0.5f * fYec156[i]);
			}
			
			// LOOP 0x346b9f0
			// pre processing
			for (int i=0; i<4; i++) fRec245_tmp[i]=fRec245_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec245[i] = (fConst11 * ((fRec246[i] - fRec246[i-1]) + fRec245[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec245_perm[i]=fRec245_tmp[count+i];
			
			// LOOP 0x3470530
			// pre processing
			for (int i=0; i<4; i++) fRec247_tmp[i]=fRec247_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec247[i] = (fConst11 * ((fRec248[i] - fRec248[i-1]) + fRec247[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec247_perm[i]=fRec247_tmp[count+i];
			
			// LOOP 0x3474220
			// pre processing
			for (int i=0; i<4; i++) fRec249_tmp[i]=fRec249_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec249[i] = (fConst11 * ((fRec250[i] - fRec250[i-1]) + fRec249[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec249_perm[i]=fRec249_tmp[count+i];
			
			// LOOP 0x3477f50
			// pre processing
			for (int i=0; i<4; i++) fRec251_tmp[i]=fRec251_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec251[i] = (fConst11 * ((fRec252[i] - fRec252[i-1]) + fRec251[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec251_perm[i]=fRec251_tmp[count+i];
			
			// LOOP 0x347c030
			// pre processing
			for (int i=0; i<4; i++) fRec253_tmp[i]=fRec253_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec253[i] = (fConst11 * ((fRec254[i] - fRec254[i-1]) + fRec253[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec253_perm[i]=fRec253_tmp[count+i];
			
			// LOOP 0x347fdd0
			// pre processing
			for (int i=0; i<4; i++) fRec255_tmp[i]=fRec255_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec255[i] = (fConst11 * ((fRec256[i] - fRec256[i-1]) + fRec255[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec255_perm[i]=fRec255_tmp[count+i];
			
			// LOOP 0x3483bc0
			// pre processing
			for (int i=0; i<4; i++) fRec257_tmp[i]=fRec257_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec257[i] = (fConst11 * ((fRec258[i] - fRec258[i-1]) + fRec257[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec257_perm[i]=fRec257_tmp[count+i];
			
			// LOOP 0x34879f0
			// pre processing
			for (int i=0; i<4; i++) fRec259_tmp[i]=fRec259_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec259[i] = (fConst11 * ((fRec260[i] - fRec260[i-1]) + fRec259[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec259_perm[i]=fRec259_tmp[count+i];
			
			// LOOP 0x348bb90
			// pre processing
			for (int i=0; i<4; i++) fRec261_tmp[i]=fRec261_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec261[i] = (fConst11 * ((fRec262[i] - fRec262[i-1]) + fRec261[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec261_perm[i]=fRec261_tmp[count+i];
			
			// LOOP 0x348fa30
			// pre processing
			for (int i=0; i<4; i++) fRec263_tmp[i]=fRec263_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec263[i] = (fConst11 * ((fRec264[i] - fRec264[i-1]) + fRec263[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec263_perm[i]=fRec263_tmp[count+i];
			
			// LOOP 0x3493910
			// pre processing
			for (int i=0; i<4; i++) fRec265_tmp[i]=fRec265_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec265[i] = (fConst11 * ((fRec266[i] - fRec266[i-1]) + fRec265[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec265_perm[i]=fRec265_tmp[count+i];
			
			// LOOP 0x3497940
			// pre processing
			for (int i=0; i<4; i++) fRec267_tmp[i]=fRec267_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec267[i] = (fConst11 * (((1.95f * fYec171[i]) - (1.95f * fYec171[i-1])) + fRec267[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec267_perm[i]=fRec267_tmp[count+i];
			
			// LOOP 0x34b8090
			// pre processing
			for (int i=0; i<4; i++) fRec270_tmp[i]=fRec270_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec270[i] = (fConst11 * (((1.95f * fYec173[i]) - (1.95f * fYec173[i-1])) + fRec270[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec270_perm[i]=fRec270_tmp[count+i];
			
			// LOOP 0x34c0210
			// pre processing
			for (int i=0; i<4; i++) fRec271_tmp[i]=fRec271_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec271[i] = (fConst11 * (((1.95f * fYec175[i]) - (1.95f * fYec175[i-1])) + fRec271[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec271_perm[i]=fRec271_tmp[count+i];
			
			// LOOP 0x34c7650
			// pre processing
			for (int i=0; i<4; i++) fRec272_tmp[i]=fRec272_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec272[i] = (fConst11 * (((1.95f * fYec177[i]) - (1.95f * fYec177[i-1])) + fRec272[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec272_perm[i]=fRec272_tmp[count+i];
			
			// LOOP 0x34cad40
			// pre processing
			for (int i=0; i<4; i++) fRec273_tmp[i]=fRec273_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec273[i] = (fConst11 * (((1.95f * fYec179[i]) - (1.95f * fYec179[i-1])) + fRec273[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec273_perm[i]=fRec273_tmp[count+i];
			
			// LOOP 0x34ce480
			// pre processing
			for (int i=0; i<4; i++) fRec274_tmp[i]=fRec274_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec274[i] = (fConst11 * (((1.95f * fYec181[i]) - (1.95f * fYec181[i-1])) + fRec274[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec274_perm[i]=fRec274_tmp[count+i];
			
			// LOOP 0x34d1c00
			// pre processing
			for (int i=0; i<4; i++) fRec275_tmp[i]=fRec275_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec275[i] = (fConst11 * (((1.95f * fYec183[i]) - (1.95f * fYec183[i-1])) + fRec275[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec275_perm[i]=fRec275_tmp[count+i];
			
			// LOOP 0x34d53c0
			// pre processing
			for (int i=0; i<4; i++) fRec276_tmp[i]=fRec276_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec276[i] = (fConst11 * (((1.95f * fYec185[i]) - (1.95f * fYec185[i-1])) + fRec276[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec276_perm[i]=fRec276_tmp[count+i];
			
			// LOOP 0x3503730
			// pre processing
			for (int i=0; i<4; i++) fRec278_tmp[i]=fRec278_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec278[i] = (fConst11 * (((1.95f * fYec188[i]) - (1.95f * fYec188[i-1])) + fRec278[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec278_perm[i]=fRec278_tmp[count+i];
			
			// LOOP 0x350b970
			// pre processing
			for (int i=0; i<4; i++) fRec279_tmp[i]=fRec279_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec279[i] = (fConst11 * (((1.95f * fYec190[i]) - (1.95f * fYec190[i-1])) + fRec279[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec279_perm[i]=fRec279_tmp[count+i];
			
			// LOOP 0x350f3a0
			// pre processing
			for (int i=0; i<4; i++) fRec280_tmp[i]=fRec280_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec280[i] = (fConst11 * (((1.95f * fYec192[i]) - (1.95f * fYec192[i-1])) + fRec280[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec280_perm[i]=fRec280_tmp[count+i];
			
			// LOOP 0x3512e50
			// pre processing
			for (int i=0; i<4; i++) fRec281_tmp[i]=fRec281_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec281[i] = (fConst11 * (((1.95f * fYec194[i]) - (1.95f * fYec194[i-1])) + fRec281[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec281_perm[i]=fRec281_tmp[count+i];
			
			// SECTION : 26
			// LOOP 0x31a4340
			// exec code
			for (int i=0; i<count; i++) {
				fZec0[i] = (fSlow2 + (fVec0[i-3] + (fVec0[i-1] + fVec0[i-2])));
			}
			
			// LOOP 0x31a6350
			// pre processing
			for (int i=0; i<4; i++) fYec6_tmp[i]=fYec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec6[i] = ((fZec14[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec6_perm[i]=fYec6_tmp[count+i];
			
			// LOOP 0x31bf560
			// exec code
			for (int i=0; i<count; i++) {
				fZec18[i] = (fSlow8 + (fVec1[i-3] + (fVec1[i-1] + fVec1[i-2])));
			}
			
			// LOOP 0x31c17c0
			// pre processing
			for (int i=0; i<4; i++) fYec13_tmp[i]=fYec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec13[i] = ((fZec31[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec13_perm[i]=fYec13_tmp[count+i];
			
			// LOOP 0x31d5870
			// exec code
			for (int i=0; i<count; i++) {
				fZec35[i] = (fSlow10 + (fVec2[i-3] + (fVec2[i-1] + fVec2[i-2])));
			}
			
			// LOOP 0x31d7d50
			// pre processing
			for (int i=0; i<4; i++) fYec20_tmp[i]=fYec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec20[i] = ((fZec48[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec20_perm[i]=fYec20_tmp[count+i];
			
			// LOOP 0x31ebe10
			// exec code
			for (int i=0; i<count; i++) {
				fZec52[i] = (fSlow12 + (fVec3[i-3] + (fVec3[i-1] + fVec3[i-2])));
			}
			
			// LOOP 0x31ee1b0
			// pre processing
			for (int i=0; i<4; i++) fYec27_tmp[i]=fYec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec27[i] = ((fZec65[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec27_perm[i]=fYec27_tmp[count+i];
			
			// LOOP 0x3202360
			// exec code
			for (int i=0; i<count; i++) {
				fZec69[i] = (fSlow14 + (fVec4[i-3] + (fVec4[i-1] + fVec4[i-2])));
			}
			
			// LOOP 0x32048f0
			// pre processing
			for (int i=0; i<4; i++) fYec34_tmp[i]=fYec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec34[i] = ((fZec82[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec34_perm[i]=fYec34_tmp[count+i];
			
			// LOOP 0x3218da0
			// exec code
			for (int i=0; i<count; i++) {
				fZec86[i] = (fSlow16 + (fVec5[i-3] + (fVec5[i-1] + fVec5[i-2])));
			}
			
			// LOOP 0x321b430
			// pre processing
			for (int i=0; i<4; i++) fYec41_tmp[i]=fYec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec41[i] = ((fZec99[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec41_perm[i]=fYec41_tmp[count+i];
			
			// LOOP 0x322f650
			// exec code
			for (int i=0; i<count; i++) {
				fZec103[i] = (fSlow18 + (fVec6[i-3] + (fVec6[i-1] + fVec6[i-2])));
			}
			
			// LOOP 0x3231a40
			// pre processing
			for (int i=0; i<4; i++) fYec48_tmp[i]=fYec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec48[i] = ((fZec116[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec48_perm[i]=fYec48_tmp[count+i];
			
			// LOOP 0x3245cb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec120[i] = (fSlow20 + (fVec7[i-3] + (fVec7[i-1] + fVec7[i-2])));
			}
			
			// LOOP 0x3248460
			// pre processing
			for (int i=0; i<4; i++) fYec55_tmp[i]=fYec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec55[i] = ((fZec133[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec55_perm[i]=fYec55_tmp[count+i];
			
			// LOOP 0x325c730
			// exec code
			for (int i=0; i<count; i++) {
				fZec137[i] = (fSlow22 + (fVec8[i-3] + (fVec8[i-1] + fVec8[i-2])));
			}
			
			// LOOP 0x325eb90
			// pre processing
			for (int i=0; i<4; i++) fYec62_tmp[i]=fYec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec62[i] = ((fZec150[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec62_perm[i]=fYec62_tmp[count+i];
			
			// LOOP 0x3273220
			// exec code
			for (int i=0; i<count; i++) {
				fZec154[i] = (fSlow24 + (fVec9[i-3] + (fVec9[i-1] + fVec9[i-2])));
			}
			
			// LOOP 0x32757b0
			// pre processing
			for (int i=0; i<4; i++) fYec69_tmp[i]=fYec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec69[i] = ((fZec167[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec69_perm[i]=fYec69_tmp[count+i];
			
			// LOOP 0x3289ad0
			// exec code
			for (int i=0; i<count; i++) {
				fZec171[i] = (fSlow26 + (fVec10[i-3] + (fVec10[i-1] + fVec10[i-2])));
			}
			
			// LOOP 0x328bd00
			// pre processing
			for (int i=0; i<4; i++) fYec76_tmp[i]=fYec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec76[i] = ((fZec184[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec76_perm[i]=fYec76_tmp[count+i];
			
			// LOOP 0x32a0150
			// exec code
			for (int i=0; i<count; i++) {
				fZec188[i] = (fSlow28 + (fVec11[i-3] + (fVec11[i-1] + fVec11[i-2])));
			}
			
			// LOOP 0x32a28a0
			// pre processing
			for (int i=0; i<4; i++) fYec83_tmp[i]=fYec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec83[i] = ((fZec201[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec83_perm[i]=fYec83_tmp[count+i];
			
			// LOOP 0x32b6cb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec205[i] = (fSlow30 + (fVec12[i-3] + (fVec12[i-1] + fVec12[i-2])));
			}
			
			// LOOP 0x32b9520
			// pre processing
			for (int i=0; i<4; i++) fYec84_tmp[i]=fYec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec84[i] = ((fZec12[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec84_perm[i]=fYec84_tmp[count+i];
			
			// LOOP 0x32bc2f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec206[i] = (fSlow31 + (fVec13[i-3] + (fVec13[i-1] + fVec13[i-2])));
			}
			
			// LOOP 0x32beac0
			// pre processing
			for (int i=0; i<4; i++) fYec85_tmp[i]=fYec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec85[i] = ((fZec29[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec85_perm[i]=fYec85_tmp[count+i];
			
			// LOOP 0x32c13c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec207[i] = (fSlow32 + (fVec14[i-3] + (fVec14[i-1] + fVec14[i-2])));
			}
			
			// LOOP 0x32c4240
			// pre processing
			for (int i=0; i<4; i++) fYec86_tmp[i]=fYec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec86[i] = ((fZec46[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec86_perm[i]=fYec86_tmp[count+i];
			
			// LOOP 0x32c6b40
			// exec code
			for (int i=0; i<count; i++) {
				fZec208[i] = (fSlow33 + (fVec15[i-3] + (fVec15[i-1] + fVec15[i-2])));
			}
			
			// LOOP 0x32c9500
			// pre processing
			for (int i=0; i<4; i++) fYec87_tmp[i]=fYec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec87[i] = ((fZec63[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec87_perm[i]=fYec87_tmp[count+i];
			
			// LOOP 0x32cbe00
			// exec code
			for (int i=0; i<count; i++) {
				fZec209[i] = (fSlow34 + (fVec16[i-3] + (fVec16[i-1] + fVec16[i-2])));
			}
			
			// LOOP 0x32cef00
			// pre processing
			for (int i=0; i<4; i++) fYec88_tmp[i]=fYec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec88[i] = ((fZec80[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec88_perm[i]=fYec88_tmp[count+i];
			
			// LOOP 0x32d3330
			// exec code
			for (int i=0; i<count; i++) {
				fZec211[i] = (fSlow37 + (fVec17[i-3] + (fVec17[i-1] + fVec17[i-2])));
			}
			
			// LOOP 0x32d8bc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec212[i] = (fSlow38 + (fVec18[i-3] + (fVec18[i-1] + fVec18[i-2])));
			}
			
			// LOOP 0x32ddd60
			// exec code
			for (int i=0; i<count; i++) {
				fZec213[i] = (fSlow39 + (fVec19[i-3] + (fVec19[i-1] + fVec19[i-2])));
			}
			
			// LOOP 0x32e3900
			// exec code
			for (int i=0; i<count; i++) {
				fZec214[i] = (fSlow40 + (fVec20[i-3] + (fVec20[i-1] + fVec20[i-2])));
			}
			
			// LOOP 0x32e8f10
			// exec code
			for (int i=0; i<count; i++) {
				fZec215[i] = (fSlow41 + (fVec21[i-3] + (fVec21[i-1] + fVec21[i-2])));
			}
			
			// LOOP 0x32ee460
			// exec code
			for (int i=0; i<count; i++) {
				fZec216[i] = (fSlow42 + (fVec22[i-3] + (fVec22[i-1] + fVec22[i-2])));
			}
			
			// LOOP 0x32f3430
			// exec code
			for (int i=0; i<count; i++) {
				fZec217[i] = (fSlow43 + (fVec23[i-3] + (fVec23[i-1] + fVec23[i-2])));
			}
			
			// LOOP 0x32f8bf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec218[i] = (fSlow44 + (fVec24[i-3] + (fVec24[i-1] + fVec24[i-2])));
			}
			
			// LOOP 0x32fef10
			// exec code
			for (int i=0; i<count; i++) {
				fZec219[i] = (fSlow45 + (fVec25[i-3] + (fVec25[i-1] + fVec25[i-2])));
			}
			
			// LOOP 0x33040d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec220[i] = (fSlow46 + (fVec26[i-3] + (fVec26[i-1] + fVec26[i-2])));
			}
			
			// LOOP 0x3309e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec221[i] = (fSlow47 + (fVec27[i-3] + (fVec27[i-1] + fVec27[i-2])));
			}
			
			// LOOP 0x330edb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec222[i] = (fSlow48 + (fVec28[i-3] + (fVec28[i-1] + fVec28[i-2])));
			}
			
			// LOOP 0x33151e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec223[i] = (fSlow49 + (fVec29[i-3] + (fVec29[i-1] + fVec29[i-2])));
			}
			
			// LOOP 0x331b420
			// exec code
			for (int i=0; i<count; i++) {
				fZec224[i] = (fSlow50 + (fVec30[i-3] + (fVec30[i-1] + fVec30[i-2])));
			}
			
			// LOOP 0x3320ac0
			// exec code
			for (int i=0; i<count; i++) {
				fZec225[i] = (fSlow51 + (fVec31[i-3] + (fVec31[i-1] + fVec31[i-2])));
			}
			
			// LOOP 0x3327000
			// exec code
			for (int i=0; i<count; i++) {
				fZec226[i] = (fSlow52 + (fVec32[i-3] + (fVec32[i-1] + fVec32[i-2])));
			}
			
			// LOOP 0x332cb70
			// exec code
			for (int i=0; i<count; i++) {
				fZec227[i] = (fSlow53 + (fVec33[i-3] + (fVec33[i-1] + fVec33[i-2])));
			}
			
			// LOOP 0x3332740
			// exec code
			for (int i=0; i<count; i++) {
				fZec228[i] = (fSlow54 + (fVec34[i-3] + (fVec34[i-1] + fVec34[i-2])));
			}
			
			// LOOP 0x3337a00
			// exec code
			for (int i=0; i<count; i++) {
				fZec229[i] = (fSlow55 + (fVec35[i-3] + (fVec35[i-1] + fVec35[i-2])));
			}
			
			// LOOP 0x333d8e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec230[i] = (fSlow56 + (fVec36[i-3] + (fVec36[i-1] + fVec36[i-2])));
			}
			
			// LOOP 0x3343e00
			// exec code
			for (int i=0; i<count; i++) {
				fZec231[i] = (fSlow57 + (fVec37[i-3] + (fVec37[i-1] + fVec37[i-2])));
			}
			
			// LOOP 0x33493d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec232[i] = (fSlow58 + (fVec38[i-3] + (fVec38[i-1] + fVec38[i-2])));
			}
			
			// LOOP 0x334f980
			// exec code
			for (int i=0; i<count; i++) {
				fZec233[i] = (fSlow59 + (fVec39[i-3] + (fVec39[i-1] + fVec39[i-2])));
			}
			
			// LOOP 0x3355260
			// exec code
			for (int i=0; i<count; i++) {
				fZec234[i] = (fSlow60 + (fVec40[i-3] + (fVec40[i-1] + fVec40[i-2])));
			}
			
			// LOOP 0x335bee0
			// exec code
			for (int i=0; i<count; i++) {
				fZec235[i] = (fSlow61 + (fVec41[i-3] + (fVec41[i-1] + fVec41[i-2])));
			}
			
			// LOOP 0x3362af0
			// exec code
			for (int i=0; i<count; i++) {
				fZec236[i] = (fSlow62 + (fVec42[i-3] + (fVec42[i-1] + fVec42[i-2])));
			}
			
			// LOOP 0x3368700
			// exec code
			for (int i=0; i<count; i++) {
				fZec237[i] = (fSlow63 + (fVec43[i-3] + (fVec43[i-1] + fVec43[i-2])));
			}
			
			// LOOP 0x336f6c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec238[i] = (fSlow64 + (fVec44[i-3] + (fVec44[i-1] + fVec44[i-2])));
			}
			
			// LOOP 0x3375940
			// exec code
			for (int i=0; i<count; i++) {
				fZec239[i] = (fSlow65 + (fVec45[i-3] + (fVec45[i-1] + fVec45[i-2])));
			}
			
			// LOOP 0x337bb70
			// exec code
			for (int i=0; i<count; i++) {
				fZec240[i] = (fSlow66 + (fVec46[i-3] + (fVec46[i-1] + fVec46[i-2])));
			}
			
			// LOOP 0x3381190
			// exec code
			for (int i=0; i<count; i++) {
				fZec241[i] = (fSlow67 + (fVec47[i-3] + (fVec47[i-1] + fVec47[i-2])));
			}
			
			// LOOP 0x33dee30
			// exec code
			for (int i=0; i<count; i++) {
				fZec259[i] = (fRec190[i] + (fRec188[i] + (fRec186[i] + (fRec184[i] + fZec258[i]))));
			}
			
			// LOOP 0x33efee0
			// pre processing
			for (int i=0; i<4; i++) fYec135_tmp[i]=fYec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec135[i] = ((fZec263[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec135_perm[i]=fYec135_tmp[count+i];
			
			// LOOP 0x33f5f50
			// pre processing
			for (int i=0; i<4; i++) fYec137_tmp[i]=fYec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec137[i] = ((fZec264[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec137_perm[i]=fYec137_tmp[count+i];
			
			// LOOP 0x33fb6c0
			// pre processing
			for (int i=0; i<4; i++) fYec139_tmp[i]=fYec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec139[i] = ((fZec265[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec139_perm[i]=fYec139_tmp[count+i];
			
			// LOOP 0x3400e30
			// pre processing
			for (int i=0; i<4; i++) fYec141_tmp[i]=fYec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec141[i] = ((fZec266[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec141_perm[i]=fYec141_tmp[count+i];
			
			// LOOP 0x34066a0
			// pre processing
			for (int i=0; i<4; i++) fYec143_tmp[i]=fYec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec143[i] = ((fZec267[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec143_perm[i]=fYec143_tmp[count+i];
			
			// LOOP 0x340bed0
			// pre processing
			for (int i=0; i<4; i++) fYec145_tmp[i]=fYec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec145[i] = ((fZec268[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec145_perm[i]=fYec145_tmp[count+i];
			
			// LOOP 0x34117a0
			// pre processing
			for (int i=0; i<4; i++) fYec147_tmp[i]=fYec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec147[i] = ((fZec269[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec147_perm[i]=fYec147_tmp[count+i];
			
			// LOOP 0x3416ff0
			// pre processing
			for (int i=0; i<4; i++) fYec149_tmp[i]=fYec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec149[i] = ((fZec270[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec149_perm[i]=fYec149_tmp[count+i];
			
			// LOOP 0x341c990
			// pre processing
			for (int i=0; i<4; i++) fYec151_tmp[i]=fYec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec151[i] = ((fZec271[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec151_perm[i]=fYec151_tmp[count+i];
			
			// LOOP 0x3422300
			// pre processing
			for (int i=0; i<4; i++) fYec153_tmp[i]=fYec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec153[i] = ((fZec272[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec153_perm[i]=fYec153_tmp[count+i];
			
			// LOOP 0x3427c90
			// pre processing
			for (int i=0; i<4; i++) fYec155_tmp[i]=fYec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec155[i] = ((fZec273[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec155_perm[i]=fYec155_tmp[count+i];
			
			// LOOP 0x342d670
			// pre processing
			for (int i=0; i<4; i++) fYec157_tmp[i]=fYec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec157[i] = ((fZec274[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec157_perm[i]=fYec157_tmp[count+i];
			
			// LOOP 0x3497830
			// exec code
			for (int i=0; i<count; i++) {
				fZec280[i] = (fRec267[i] * fZec254[i]);
			}
			
			// LOOP 0x34f8bd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec286[i] = (fRec267[i] * fZec242[i]);
			}
			
			// LOOP 0x34fa650
			// exec code
			for (int i=0; i<count; i++) {
				fZec287[i] = (fRec270[i] * fZec243[i]);
			}
			
			// LOOP 0x34fb680
			// exec code
			for (int i=0; i<count; i++) {
				fZec288[i] = (fRec271[i] * fZec244[i]);
			}
			
			// LOOP 0x34fc740
			// exec code
			for (int i=0; i<count; i++) {
				fZec289[i] = (fRec272[i] * fZec245[i]);
			}
			
			// LOOP 0x34fe340
			// exec code
			for (int i=0; i<count; i++) {
				fZec290[i] = (fRec273[i] * fZec246[i]);
			}
			
			// LOOP 0x34ff420
			// exec code
			for (int i=0; i<count; i++) {
				fZec291[i] = (fRec274[i] * fZec247[i]);
			}
			
			// LOOP 0x35005e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec292[i] = (fRec275[i] * fZec248[i]);
			}
			
			// LOOP 0x35017d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec293[i] = (fRec276[i] * fZec249[i]);
			}
			
			// LOOP 0x35029f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec294[i] = (fRec278[i] * fZec250[i]);
			}
			
			// LOOP 0x350b860
			// exec code
			for (int i=0; i<count; i++) {
				fZec295[i] = (fRec279[i] * fZec251[i]);
			}
			
			// LOOP 0x350f290
			// exec code
			for (int i=0; i<count; i++) {
				fZec296[i] = (fRec280[i] * fZec252[i]);
			}
			
			// LOOP 0x3512d40
			// exec code
			for (int i=0; i<count; i++) {
				fZec297[i] = (fRec281[i] * fZec253[i]);
			}
			
			// LOOP 0x354cf80
			// exec code
			for (int i=0; i<count; i++) {
				fZec302[i] = (0.5f * fRec192[i]);
			}
			
			// LOOP 0x354f240
			// exec code
			for (int i=0; i<count; i++) {
				fZec303[i] = (0.5f * fRec194[i]);
			}
			
			// LOOP 0x3550750
			// exec code
			for (int i=0; i<count; i++) {
				fZec304[i] = (0.5f * fRec196[i]);
			}
			
			// LOOP 0x3551d80
			// exec code
			for (int i=0; i<count; i++) {
				fZec305[i] = (0.5f * fRec198[i]);
			}
			
			// LOOP 0x3554120
			// exec code
			for (int i=0; i<count; i++) {
				fZec306[i] = (0.5f * fRec200[i]);
			}
			
			// LOOP 0x3555860
			// exec code
			for (int i=0; i<count; i++) {
				fZec307[i] = (0.5f * fRec202[i]);
			}
			
			// LOOP 0x3556f20
			// exec code
			for (int i=0; i<count; i++) {
				fZec308[i] = (0.5f * fRec204[i]);
			}
			
			// LOOP 0x35586b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec309[i] = (0.5f * fRec206[i]);
			}
			
			// LOOP 0x3558ca0
			// exec code
			for (int i=0; i<count; i++) {
				fZec310[i] = (0.5f * fRec245[i]);
			}
			
			// LOOP 0x35595c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec311[i] = (0.5f * fRec247[i]);
			}
			
			// LOOP 0x355b150
			// exec code
			for (int i=0; i<count; i++) {
				fZec312[i] = (0.5f * fRec249[i]);
			}
			
			// LOOP 0x355bac0
			// exec code
			for (int i=0; i<count; i++) {
				fZec313[i] = (0.5f * fRec251[i]);
			}
			
			// LOOP 0x355c460
			// exec code
			for (int i=0; i<count; i++) {
				fZec314[i] = (0.5f * fRec253[i]);
			}
			
			// LOOP 0x355ce20
			// exec code
			for (int i=0; i<count; i++) {
				fZec315[i] = (0.5f * fRec255[i]);
			}
			
			// LOOP 0x355d3b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec316[i] = (0.5f * fRec257[i]);
			}
			
			// LOOP 0x355dd80
			// exec code
			for (int i=0; i<count; i++) {
				fZec317[i] = (0.5f * fRec259[i]);
			}
			
			// LOOP 0x355e780
			// exec code
			for (int i=0; i<count; i++) {
				fZec318[i] = (0.5f * fRec261[i]);
			}
			
			// LOOP 0x355f190
			// exec code
			for (int i=0; i<count; i++) {
				fZec319[i] = (0.5f * fRec263[i]);
			}
			
			// LOOP 0x355fbc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec320[i] = (0.5f * fRec265[i]);
			}
			
			// LOOP 0x3560650
			// exec code
			for (int i=0; i<count; i++) {
				fZec321[i] = (0.5f * fRec271[i]);
			}
			
			// LOOP 0x35619b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec322[i] = (0.5f * fRec272[i]);
			}
			
			// LOOP 0x3562470
			// exec code
			for (int i=0; i<count; i++) {
				fZec323[i] = (0.5f * fRec273[i]);
			}
			
			// LOOP 0x3562f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec324[i] = (0.5f * fRec274[i]);
			}
			
			// LOOP 0x3563ab0
			// exec code
			for (int i=0; i<count; i++) {
				fZec325[i] = (0.5f * fRec275[i]);
			}
			
			// LOOP 0x3564580
			// exec code
			for (int i=0; i<count; i++) {
				fZec326[i] = (0.5f * fRec276[i]);
			}
			
			// LOOP 0x3565060
			// exec code
			for (int i=0; i<count; i++) {
				fZec327[i] = (0.5f * fRec278[i]);
			}
			
			// LOOP 0x3565c40
			// exec code
			for (int i=0; i<count; i++) {
				fZec328[i] = (0.5f * fRec279[i]);
			}
			
			// LOOP 0x3566750
			// exec code
			for (int i=0; i<count; i++) {
				fZec329[i] = (0.5f * fRec280[i]);
			}
			
			// LOOP 0x3567380
			// exec code
			for (int i=0; i<count; i++) {
				fZec330[i] = (0.5f * fRec281[i]);
			}
			
			// SECTION : 27
			// LOOP 0x31a5ee0
			// pre processing
			for (int i=0; i<4; i++) fRec2_tmp[i]=fRec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec2[i] = (fRec2[i-1] + (fConst2 * ((square_polyblep_precalc(fZec14[i], fZec15[i], (0.5f * fYec5[i-2]), fZec17[i]) + (2 * fYec6[i-1])) - fRec2[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec2_perm[i]=fRec2_tmp[count+i];
			
			// LOOP 0x31c1270
			// pre processing
			for (int i=0; i<4; i++) fRec12_tmp[i]=fRec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec12[i] = (fRec12[i-1] + (fConst2 * ((square_polyblep_precalc(fZec31[i], fZec32[i], (0.5f * fYec12[i-2]), fZec34[i]) + (2 * fYec13[i-1])) - fRec12[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec12_perm[i]=fRec12_tmp[count+i];
			
			// LOOP 0x31d7800
			// pre processing
			for (int i=0; i<4; i++) fRec21_tmp[i]=fRec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec21[i] = (fRec21[i-1] + (fConst2 * ((square_polyblep_precalc(fZec48[i], fZec49[i], (0.5f * fYec19[i-2]), fZec51[i]) + (2 * fYec20[i-1])) - fRec21[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec21_perm[i]=fRec21_tmp[count+i];
			
			// LOOP 0x31edc60
			// pre processing
			for (int i=0; i<4; i++) fRec30_tmp[i]=fRec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec30[i] = (fRec30[i-1] + (fConst2 * ((square_polyblep_precalc(fZec65[i], fZec66[i], (0.5f * fYec26[i-2]), fZec68[i]) + (2 * fYec27[i-1])) - fRec30[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec30_perm[i]=fRec30_tmp[count+i];
			
			// LOOP 0x32043a0
			// pre processing
			for (int i=0; i<4; i++) fRec39_tmp[i]=fRec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec39[i] = (fRec39[i-1] + (fConst5 * ((square_polyblep_precalc(fZec82[i], fZec83[i], (0.5f * fYec33[i-2]), fZec85[i]) + (2 * fYec34[i-1])) - fRec39[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec39_perm[i]=fRec39_tmp[count+i];
			
			// LOOP 0x321aee0
			// pre processing
			for (int i=0; i<4; i++) fRec48_tmp[i]=fRec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec48[i] = (fRec48[i-1] + (fConst5 * ((square_polyblep_precalc(fZec99[i], fZec100[i], (0.5f * fYec40[i-2]), fZec102[i]) + (2 * fYec41[i-1])) - fRec48[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec48_perm[i]=fRec48_tmp[count+i];
			
			// LOOP 0x32314f0
			// pre processing
			for (int i=0; i<4; i++) fRec57_tmp[i]=fRec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec57[i] = (fRec57[i-1] + (fConst5 * ((square_polyblep_precalc(fZec116[i], fZec117[i], (0.5f * fYec47[i-2]), fZec119[i]) + (2 * fYec48[i-1])) - fRec57[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec57_perm[i]=fRec57_tmp[count+i];
			
			// LOOP 0x3247f10
			// pre processing
			for (int i=0; i<4; i++) fRec66_tmp[i]=fRec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec66[i] = (fRec66[i-1] + (fConst5 * ((square_polyblep_precalc(fZec133[i], fZec134[i], (0.5f * fYec54[i-2]), fZec136[i]) + (2 * fYec55[i-1])) - fRec66[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec66_perm[i]=fRec66_tmp[count+i];
			
			// LOOP 0x325e640
			// pre processing
			for (int i=0; i<4; i++) fRec75_tmp[i]=fRec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec75[i] = (fRec75[i-1] + (fConst6 * ((square_polyblep_precalc(fZec150[i], fZec151[i], (0.5f * fYec61[i-2]), fZec153[i]) + (2 * fYec62[i-1])) - fRec75[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec75_perm[i]=fRec75_tmp[count+i];
			
			// LOOP 0x3275260
			// pre processing
			for (int i=0; i<4; i++) fRec84_tmp[i]=fRec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec84[i] = (fRec84[i-1] + (fConst6 * ((square_polyblep_precalc(fZec167[i], fZec168[i], (0.5f * fYec68[i-2]), fZec170[i]) + (2 * fYec69[i-1])) - fRec84[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec84_perm[i]=fRec84_tmp[count+i];
			
			// LOOP 0x328b7b0
			// pre processing
			for (int i=0; i<4; i++) fRec93_tmp[i]=fRec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec93[i] = (fRec93[i-1] + (fConst6 * ((square_polyblep_precalc(fZec184[i], fZec185[i], (0.5f * fYec75[i-2]), fZec187[i]) + (2 * fYec76[i-1])) - fRec93[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec93_perm[i]=fRec93_tmp[count+i];
			
			// LOOP 0x32a2350
			// pre processing
			for (int i=0; i<4; i++) fRec102_tmp[i]=fRec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec102[i] = (fRec102[i-1] + (fConst6 * ((square_polyblep_precalc(fZec201[i], fZec202[i], (0.5f * fYec82[i-2]), fZec204[i]) + (2 * fYec83[i-1])) - fRec102[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec102_perm[i]=fRec102_tmp[count+i];
			
			// LOOP 0x32b8fd0
			// pre processing
			for (int i=0; i<4; i++) fRec111_tmp[i]=fRec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec111[i] = (fRec111[i-1] + (fConst6 * ((square_polyblep_precalc(fZec12[i], fZec13[i], (0.5f * fYec4[i-2]), fZec17[i]) + (2 * fYec84[i-1])) - fRec111[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec111_perm[i]=fRec111_tmp[count+i];
			
			// LOOP 0x32be570
			// pre processing
			for (int i=0; i<4; i++) fRec113_tmp[i]=fRec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec113[i] = (fRec113[i-1] + (fConst6 * ((square_polyblep_precalc(fZec29[i], fZec30[i], (0.5f * fYec11[i-2]), fZec34[i]) + (2 * fYec85[i-1])) - fRec113[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec113_perm[i]=fRec113_tmp[count+i];
			
			// LOOP 0x32c3cf0
			// pre processing
			for (int i=0; i<4; i++) fRec115_tmp[i]=fRec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec115[i] = (fRec115[i-1] + (fConst6 * ((square_polyblep_precalc(fZec46[i], fZec47[i], (0.5f * fYec18[i-2]), fZec51[i]) + (2 * fYec86[i-1])) - fRec115[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec115_perm[i]=fRec115_tmp[count+i];
			
			// LOOP 0x32c8fb0
			// pre processing
			for (int i=0; i<4; i++) fRec117_tmp[i]=fRec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec117[i] = (fRec117[i-1] + (fConst6 * ((square_polyblep_precalc(fZec63[i], fZec64[i], (0.5f * fYec25[i-2]), fZec68[i]) + (2 * fYec87[i-1])) - fRec117[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec117_perm[i]=fRec117_tmp[count+i];
			
			// LOOP 0x32ce9b0
			// pre processing
			for (int i=0; i<4; i++) fRec119_tmp[i]=fRec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec119[i] = (fRec119[i-1] + (fConst8 * ((square_polyblep_precalc(fZec80[i], fZec81[i], (0.5f * fYec32[i-2]), fZec85[i]) + (2 * fYec88[i-1])) - fRec119[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec119_perm[i]=fRec119_tmp[count+i];
			
			// LOOP 0x32d62b0
			// pre processing
			for (int i=0; i<4; i++) fYec89_tmp[i]=fYec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec89[i] = ((fZec97[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec89_perm[i]=fYec89_tmp[count+i];
			
			// LOOP 0x32db3a0
			// pre processing
			for (int i=0; i<4; i++) fYec90_tmp[i]=fYec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec90[i] = ((fZec114[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec90_perm[i]=fYec90_tmp[count+i];
			
			// LOOP 0x32e0e40
			// pre processing
			for (int i=0; i<4; i++) fYec91_tmp[i]=fYec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec91[i] = ((fZec131[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec91_perm[i]=fYec91_tmp[count+i];
			
			// LOOP 0x32e6130
			// pre processing
			for (int i=0; i<4; i++) fYec92_tmp[i]=fYec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec92[i] = ((fZec148[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec92_perm[i]=fYec92_tmp[count+i];
			
			// LOOP 0x32eb980
			// pre processing
			for (int i=0; i<4; i++) fYec93_tmp[i]=fYec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec93[i] = ((fZec165[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec93_perm[i]=fYec93_tmp[count+i];
			
			// LOOP 0x32f08d0
			// pre processing
			for (int i=0; i<4; i++) fYec94_tmp[i]=fYec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec94[i] = ((fZec182[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec94_perm[i]=fYec94_tmp[count+i];
			
			// LOOP 0x32f6040
			// pre processing
			for (int i=0; i<4; i++) fYec95_tmp[i]=fYec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec95[i] = ((fZec199[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec95_perm[i]=fYec95_tmp[count+i];
			
			// LOOP 0x32fba60
			// pre processing
			for (int i=0; i<4; i++) fYec96_tmp[i]=fYec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec96[i] = ((fZec10[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec96_perm[i]=fYec96_tmp[count+i];
			
			// LOOP 0x33013f0
			// pre processing
			for (int i=0; i<4; i++) fYec97_tmp[i]=fYec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec97[i] = ((fZec27[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec97_perm[i]=fYec97_tmp[count+i];
			
			// LOOP 0x33070f0
			// pre processing
			for (int i=0; i<4; i++) fYec98_tmp[i]=fYec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec98[i] = ((fZec44[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec98_perm[i]=fYec98_tmp[count+i];
			
			// LOOP 0x330c4d0
			// pre processing
			for (int i=0; i<4; i++) fYec99_tmp[i]=fYec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec99[i] = ((fZec61[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec99_perm[i]=fYec99_tmp[count+i];
			
			// LOOP 0x33124f0
			// pre processing
			for (int i=0; i<4; i++) fYec100_tmp[i]=fYec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec100[i] = ((fZec78[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec100_perm[i]=fYec100_tmp[count+i];
			
			// LOOP 0x3318a60
			// pre processing
			for (int i=0; i<4; i++) fYec101_tmp[i]=fYec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec101[i] = ((fZec95[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec101_perm[i]=fYec101_tmp[count+i];
			
			// LOOP 0x331e0f0
			// pre processing
			for (int i=0; i<4; i++) fYec102_tmp[i]=fYec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec102[i] = ((fZec112[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec102_perm[i]=fYec102_tmp[count+i];
			
			// LOOP 0x3324630
			// pre processing
			for (int i=0; i<4; i++) fYec103_tmp[i]=fYec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec103[i] = ((fZec129[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec103_perm[i]=fYec103_tmp[count+i];
			
			// LOOP 0x3329f20
			// pre processing
			for (int i=0; i<4; i++) fYec104_tmp[i]=fYec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec104[i] = ((fZec146[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec104_perm[i]=fYec104_tmp[count+i];
			
			// LOOP 0x332fe30
			// pre processing
			for (int i=0; i<4; i++) fYec105_tmp[i]=fYec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec105[i] = ((fZec163[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec105_perm[i]=fYec105_tmp[count+i];
			
			// LOOP 0x33350f0
			// pre processing
			for (int i=0; i<4; i++) fYec106_tmp[i]=fYec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec106[i] = ((fZec180[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec106_perm[i]=fYec106_tmp[count+i];
			
			// LOOP 0x333afd0
			// pre processing
			for (int i=0; i<4; i++) fYec107_tmp[i]=fYec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec107[i] = ((fZec197[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec107_perm[i]=fYec107_tmp[count+i];
			
			// LOOP 0x33ef9f0
			// pre processing
			for (int i=0; i<4; i++) fRec210_tmp[i]=fRec210_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec210[i] = (fRec210[i-1] + (fConst22 * ((square_polyblep_precalc(fZec263[i], (0.5f * fYec134[i-1]), (0.5f * fYec134[i-2]), fZec17[i]) + (2 * fYec135[i-1])) - fRec210[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec210_perm[i]=fRec210_tmp[count+i];
			
			// LOOP 0x33f5a00
			// pre processing
			for (int i=0; i<4; i++) fRec213_tmp[i]=fRec213_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec213[i] = (fRec213[i-1] + (fConst22 * ((square_polyblep_precalc(fZec264[i], (0.5f * fYec136[i-1]), (0.5f * fYec136[i-2]), fZec34[i]) + (2 * fYec137[i-1])) - fRec213[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec213_perm[i]=fRec213_tmp[count+i];
			
			// LOOP 0x33fb170
			// pre processing
			for (int i=0; i<4; i++) fRec216_tmp[i]=fRec216_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec216[i] = (fRec216[i-1] + (fConst22 * ((square_polyblep_precalc(fZec265[i], (0.5f * fYec138[i-1]), (0.5f * fYec138[i-2]), fZec51[i]) + (2 * fYec139[i-1])) - fRec216[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec216_perm[i]=fRec216_tmp[count+i];
			
			// LOOP 0x34008e0
			// pre processing
			for (int i=0; i<4; i++) fRec219_tmp[i]=fRec219_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec219[i] = (fRec219[i-1] + (fConst22 * ((square_polyblep_precalc(fZec266[i], (0.5f * fYec140[i-1]), (0.5f * fYec140[i-2]), fZec68[i]) + (2 * fYec141[i-1])) - fRec219[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec219_perm[i]=fRec219_tmp[count+i];
			
			// LOOP 0x3406150
			// pre processing
			for (int i=0; i<4; i++) fRec222_tmp[i]=fRec222_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec222[i] = (fRec222[i-1] + (fConst22 * ((square_polyblep_precalc(fZec267[i], (0.5f * fYec142[i-1]), (0.5f * fYec142[i-2]), fZec85[i]) + (2 * fYec143[i-1])) - fRec222[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec222_perm[i]=fRec222_tmp[count+i];
			
			// LOOP 0x340b980
			// pre processing
			for (int i=0; i<4; i++) fRec225_tmp[i]=fRec225_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec225[i] = (fRec225[i-1] + (fConst22 * ((square_polyblep_precalc(fZec268[i], (0.5f * fYec144[i-1]), (0.5f * fYec144[i-2]), fZec102[i]) + (2 * fYec145[i-1])) - fRec225[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec225_perm[i]=fRec225_tmp[count+i];
			
			// LOOP 0x3411250
			// pre processing
			for (int i=0; i<4; i++) fRec228_tmp[i]=fRec228_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec228[i] = (fRec228[i-1] + (fConst22 * ((square_polyblep_precalc(fZec269[i], (0.5f * fYec146[i-1]), (0.5f * fYec146[i-2]), fZec119[i]) + (2 * fYec147[i-1])) - fRec228[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec228_perm[i]=fRec228_tmp[count+i];
			
			// LOOP 0x3416b60
			// pre processing
			for (int i=0; i<4; i++) fRec231_tmp[i]=fRec231_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec231[i] = (fRec231[i-1] + (fConst22 * ((square_polyblep_precalc(fZec270[i], (0.5f * fYec148[i-1]), (0.5f * fYec148[i-2]), fZec136[i]) + (2 * fYec149[i-1])) - fRec231[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec231_perm[i]=fRec231_tmp[count+i];
			
			// LOOP 0x341c440
			// pre processing
			for (int i=0; i<4; i++) fRec234_tmp[i]=fRec234_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec234[i] = (fRec234[i-1] + (fConst2 * ((square_polyblep_precalc(fZec271[i], (0.5f * fYec150[i-1]), (0.5f * fYec150[i-2]), fZec153[i]) + (2 * fYec151[i-1])) - fRec234[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec234_perm[i]=fRec234_tmp[count+i];
			
			// LOOP 0x3421db0
			// pre processing
			for (int i=0; i<4; i++) fRec237_tmp[i]=fRec237_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec237[i] = (fRec237[i-1] + (fConst2 * ((square_polyblep_precalc(fZec272[i], (0.5f * fYec152[i-1]), (0.5f * fYec152[i-2]), fZec170[i]) + (2 * fYec153[i-1])) - fRec237[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec237_perm[i]=fRec237_tmp[count+i];
			
			// LOOP 0x3427740
			// pre processing
			for (int i=0; i<4; i++) fRec240_tmp[i]=fRec240_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec240[i] = (fRec240[i-1] + (fConst2 * ((square_polyblep_precalc(fZec273[i], (0.5f * fYec154[i-1]), (0.5f * fYec154[i-2]), fZec187[i]) + (2 * fYec155[i-1])) - fRec240[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec240_perm[i]=fRec240_tmp[count+i];
			
			// LOOP 0x342d120
			// pre processing
			for (int i=0; i<4; i++) fRec243_tmp[i]=fRec243_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec243[i] = (fRec243[i-1] + (fConst2 * ((square_polyblep_precalc(fZec274[i], (0.5f * fYec156[i-1]), (0.5f * fYec156[i-2]), fZec204[i]) + (2 * fYec157[i-1])) - fRec243[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec243_perm[i]=fRec243_tmp[count+i];
			
			// LOOP 0x356fca0
			// exec code
			for (int i=0; i<count; i++) {
				fZec332[i] = (0.25f * (fZec280[i] + (fZec297[i] + (fZec296[i] + (fZec295[i] + (fZec294[i] + (fZec293[i] + (fZec292[i] + (fZec291[i] + (fZec290[i] + (fZec289[i] + (fZec288[i] + (fZec287[i] + (fZec286[i] + ((fRec281[i] * fZec241[i]) + ((fRec280[i] * fZec240[i]) + ((fRec279[i] * fZec239[i]) + ((fRec278[i] * fZec238[i]) + ((fRec276[i] * fZec237[i]) + ((fRec275[i] * fZec236[i]) + ((fRec274[i] * fZec235[i]) + ((fRec273[i] * fZec234[i]) + ((fRec272[i] * fZec233[i]) + ((fRec271[i] * fZec232[i]) + ((fRec270[i] * fZec231[i]) + ((fRec267[i] * fZec230[i]) + ((fRec265[i] * fZec229[i]) + ((fRec263[i] * fZec228[i]) + ((fRec261[i] * fZec227[i]) + ((fRec259[i] * fZec226[i]) + ((fRec257[i] * fZec225[i]) + ((fRec255[i] * fZec224[i]) + ((fRec253[i] * fZec223[i]) + ((fRec251[i] * fZec222[i]) + ((fRec249[i] * fZec221[i]) + ((fRec247[i] * fZec220[i]) + ((fRec245[i] * fZec219[i]) + ((fRec206[i] * fZec218[i]) + ((fRec204[i] * fZec217[i]) + ((fRec202[i] * fZec216[i]) + ((fRec200[i] * fZec215[i]) + ((fRec198[i] * fZec214[i]) + ((fRec196[i] * fZec213[i]) + ((fRec194[i] * fZec212[i]) + ((fRec192[i] * fZec211[i]) + (fSlow36 * ((fRec190[i] * fZec209[i]) + ((fRec188[i] * fZec208[i]) + ((fRec186[i] * fZec207[i]) + ((fRec184[i] * fZec206[i]) + ((fRec182[i] * fZec205[i]) + ((fRec180[i] * fZec188[i]) + ((fRec178[i] * fZec171[i]) + ((fRec176[i] * fZec154[i]) + ((fRec174[i] * fZec137[i]) + ((fRec172[i] * fZec120[i]) + ((fRec170[i] * fZec103[i]) + ((fRec168[i] * fZec86[i]) + ((fRec166[i] * fZec69[i]) + ((fRec164[i] * fZec52[i]) + ((fRec162[i] * fZec35[i]) + ((fRec160[i] * fZec18[i]) + (fRec158[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3586230
			// exec code
			for (int i=0; i<count; i++) {
				fZec333[i] = ((2 * ((((((((((((fRec270[i] + (fRec267[i] + ((((((((((((((((((fZec302[i] + fZec303[i]) + fZec304[i]) + fZec305[i]) + fZec306[i]) + fZec307[i]) + fZec308[i]) + fZec309[i]) + fZec310[i]) + fZec311[i]) + fZec312[i]) + fZec313[i]) + fZec314[i]) + fZec315[i]) + fZec316[i]) + fZec317[i]) + fZec318[i]) + fZec319[i]) + fZec320[i]))) + fZec321[i]) + fZec322[i]) + fZec323[i]) + fZec324[i]) + fZec325[i]) + fZec326[i]) + fZec327[i]) + fZec328[i]) + fZec329[i]) + fZec330[i]) + (fSlow91 * fZec259[i]))) + (fRec281[i] + (fRec280[i] + (fRec279[i] + (fRec278[i] + (fRec276[i] + (fRec275[i] + (fRec274[i] + (fRec273[i] + (fRec272[i] + (fRec267[i] + fRec271[i])))))))))));
			}
			
			// SECTION : 28
			// LOOP 0x31a5ad0
			// pre processing
			for (int i=0; i<4; i++) fRec1_tmp[i]=fRec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec1[i] = (fConst4 * ((fRec2[i] - fRec2[i-1]) + fRec1[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec1_perm[i]=fRec1_tmp[count+i];
			
			// LOOP 0x31c0d80
			// pre processing
			for (int i=0; i<4; i++) fRec11_tmp[i]=fRec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec11[i] = (fConst4 * ((fRec12[i] - fRec12[i-1]) + fRec11[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec11_perm[i]=fRec11_tmp[count+i];
			
			// LOOP 0x31d7310
			// pre processing
			for (int i=0; i<4; i++) fRec20_tmp[i]=fRec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec20[i] = (fConst4 * ((fRec21[i] - fRec21[i-1]) + fRec20[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec20_perm[i]=fRec20_tmp[count+i];
			
			// LOOP 0x31ed770
			// pre processing
			for (int i=0; i<4; i++) fRec29_tmp[i]=fRec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec29[i] = (fConst4 * ((fRec30[i] - fRec30[i-1]) + fRec29[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec29_perm[i]=fRec29_tmp[count+i];
			
			// LOOP 0x3203eb0
			// pre processing
			for (int i=0; i<4; i++) fRec38_tmp[i]=fRec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec38[i] = (fConst4 * ((fRec39[i] - fRec39[i-1]) + fRec38[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec38_perm[i]=fRec38_tmp[count+i];
			
			// LOOP 0x321a9f0
			// pre processing
			for (int i=0; i<4; i++) fRec47_tmp[i]=fRec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec47[i] = (fConst4 * ((fRec48[i] - fRec48[i-1]) + fRec47[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec47_perm[i]=fRec47_tmp[count+i];
			
			// LOOP 0x3231000
			// pre processing
			for (int i=0; i<4; i++) fRec56_tmp[i]=fRec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec56[i] = (fConst4 * ((fRec57[i] - fRec57[i-1]) + fRec56[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec56_perm[i]=fRec56_tmp[count+i];
			
			// LOOP 0x3247a20
			// pre processing
			for (int i=0; i<4; i++) fRec65_tmp[i]=fRec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec65[i] = (fConst4 * ((fRec66[i] - fRec66[i-1]) + fRec65[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec65_perm[i]=fRec65_tmp[count+i];
			
			// LOOP 0x325e150
			// pre processing
			for (int i=0; i<4; i++) fRec74_tmp[i]=fRec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec74[i] = (fConst4 * ((fRec75[i] - fRec75[i-1]) + fRec74[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec74_perm[i]=fRec74_tmp[count+i];
			
			// LOOP 0x3274d70
			// pre processing
			for (int i=0; i<4; i++) fRec83_tmp[i]=fRec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec83[i] = (fConst4 * ((fRec84[i] - fRec84[i-1]) + fRec83[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec83_perm[i]=fRec83_tmp[count+i];
			
			// LOOP 0x328b290
			// pre processing
			for (int i=0; i<4; i++) fRec92_tmp[i]=fRec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec92[i] = (fConst4 * ((fRec93[i] - fRec93[i-1]) + fRec92[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec92_perm[i]=fRec92_tmp[count+i];
			
			// LOOP 0x32a1e60
			// pre processing
			for (int i=0; i<4; i++) fRec101_tmp[i]=fRec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec101[i] = (fConst4 * ((fRec102[i] - fRec102[i-1]) + fRec101[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec101_perm[i]=fRec101_tmp[count+i];
			
			// LOOP 0x32b8ae0
			// pre processing
			for (int i=0; i<4; i++) fRec110_tmp[i]=fRec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec110[i] = (fConst7 * ((fRec111[i] - fRec111[i-1]) + fRec110[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec110_perm[i]=fRec110_tmp[count+i];
			
			// LOOP 0x32be080
			// pre processing
			for (int i=0; i<4; i++) fRec112_tmp[i]=fRec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec112[i] = (fConst7 * ((fRec113[i] - fRec113[i-1]) + fRec112[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec112_perm[i]=fRec112_tmp[count+i];
			
			// LOOP 0x32c3800
			// pre processing
			for (int i=0; i<4; i++) fRec114_tmp[i]=fRec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec114[i] = (fConst7 * ((fRec115[i] - fRec115[i-1]) + fRec114[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec114_perm[i]=fRec114_tmp[count+i];
			
			// LOOP 0x32c8ac0
			// pre processing
			for (int i=0; i<4; i++) fRec116_tmp[i]=fRec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec116[i] = (fConst7 * ((fRec117[i] - fRec117[i-1]) + fRec116[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec116_perm[i]=fRec116_tmp[count+i];
			
			// LOOP 0x32ce4c0
			// pre processing
			for (int i=0; i<4; i++) fRec118_tmp[i]=fRec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec118[i] = (fConst7 * ((fRec119[i] - fRec119[i-1]) + fRec118[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec118_perm[i]=fRec118_tmp[count+i];
			
			// LOOP 0x32d5d60
			// pre processing
			for (int i=0; i<4; i++) fRec121_tmp[i]=fRec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec121[i] = (fRec121[i-1] + (fConst8 * ((square_polyblep_precalc(fZec97[i], fZec98[i], (0.5f * fYec39[i-2]), fZec102[i]) + (2 * fYec89[i-1])) - fRec121[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec121_perm[i]=fRec121_tmp[count+i];
			
			// LOOP 0x32dae50
			// pre processing
			for (int i=0; i<4; i++) fRec123_tmp[i]=fRec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec123[i] = (fRec123[i-1] + (fConst8 * ((square_polyblep_precalc(fZec114[i], fZec115[i], (0.5f * fYec46[i-2]), fZec119[i]) + (2 * fYec90[i-1])) - fRec123[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec123_perm[i]=fRec123_tmp[count+i];
			
			// LOOP 0x32e08f0
			// pre processing
			for (int i=0; i<4; i++) fRec125_tmp[i]=fRec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec125[i] = (fRec125[i-1] + (fConst8 * ((square_polyblep_precalc(fZec131[i], fZec132[i], (0.5f * fYec53[i-2]), fZec136[i]) + (2 * fYec91[i-1])) - fRec125[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec125_perm[i]=fRec125_tmp[count+i];
			
			// LOOP 0x32e5be0
			// pre processing
			for (int i=0; i<4; i++) fRec127_tmp[i]=fRec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec127[i] = (fRec127[i-1] + (fConst9 * ((square_polyblep_precalc(fZec148[i], fZec149[i], (0.5f * fYec60[i-2]), fZec153[i]) + (2 * fYec92[i-1])) - fRec127[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec127_perm[i]=fRec127_tmp[count+i];
			
			// LOOP 0x32eb430
			// pre processing
			for (int i=0; i<4; i++) fRec129_tmp[i]=fRec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec129[i] = (fRec129[i-1] + (fConst9 * ((square_polyblep_precalc(fZec165[i], fZec166[i], (0.5f * fYec67[i-2]), fZec170[i]) + (2 * fYec93[i-1])) - fRec129[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec129_perm[i]=fRec129_tmp[count+i];
			
			// LOOP 0x32f0380
			// pre processing
			for (int i=0; i<4; i++) fRec131_tmp[i]=fRec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec131[i] = (fRec131[i-1] + (fConst9 * ((square_polyblep_precalc(fZec182[i], fZec183[i], (0.5f * fYec74[i-2]), fZec187[i]) + (2 * fYec94[i-1])) - fRec131[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec131_perm[i]=fRec131_tmp[count+i];
			
			// LOOP 0x32f5af0
			// pre processing
			for (int i=0; i<4; i++) fRec133_tmp[i]=fRec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec133[i] = (fRec133[i-1] + (fConst9 * ((square_polyblep_precalc(fZec199[i], fZec200[i], (0.5f * fYec81[i-2]), fZec204[i]) + (2 * fYec95[i-1])) - fRec133[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec133_perm[i]=fRec133_tmp[count+i];
			
			// LOOP 0x32fb510
			// pre processing
			for (int i=0; i<4; i++) fRec135_tmp[i]=fRec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec135[i] = (fRec135[i-1] + (fConst10 * ((square_polyblep_precalc(fZec10[i], fZec11[i], (0.5f * fYec3[i-2]), fZec17[i]) + (2 * fYec96[i-1])) - fRec135[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec135_perm[i]=fRec135_tmp[count+i];
			
			// LOOP 0x3300ea0
			// pre processing
			for (int i=0; i<4; i++) fRec137_tmp[i]=fRec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec137[i] = (fRec137[i-1] + (fConst10 * ((square_polyblep_precalc(fZec27[i], fZec28[i], (0.5f * fYec10[i-2]), fZec34[i]) + (2 * fYec97[i-1])) - fRec137[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec137_perm[i]=fRec137_tmp[count+i];
			
			// LOOP 0x3306ba0
			// pre processing
			for (int i=0; i<4; i++) fRec139_tmp[i]=fRec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec139[i] = (fRec139[i-1] + (fConst10 * ((square_polyblep_precalc(fZec44[i], fZec45[i], (0.5f * fYec17[i-2]), fZec51[i]) + (2 * fYec98[i-1])) - fRec139[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec139_perm[i]=fRec139_tmp[count+i];
			
			// LOOP 0x330bf80
			// pre processing
			for (int i=0; i<4; i++) fRec141_tmp[i]=fRec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec141[i] = (fRec141[i-1] + (fConst10 * ((square_polyblep_precalc(fZec61[i], fZec62[i], (0.5f * fYec24[i-2]), fZec68[i]) + (2 * fYec99[i-1])) - fRec141[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec141_perm[i]=fRec141_tmp[count+i];
			
			// LOOP 0x3311fa0
			// pre processing
			for (int i=0; i<4; i++) fRec143_tmp[i]=fRec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec143[i] = (fRec143[i-1] + (fConst12 * ((square_polyblep_precalc(fZec78[i], fZec79[i], (0.5f * fYec31[i-2]), fZec85[i]) + (2 * fYec100[i-1])) - fRec143[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec143_perm[i]=fRec143_tmp[count+i];
			
			// LOOP 0x3318510
			// pre processing
			for (int i=0; i<4; i++) fRec145_tmp[i]=fRec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec145[i] = (fRec145[i-1] + (fConst12 * ((square_polyblep_precalc(fZec95[i], fZec96[i], (0.5f * fYec38[i-2]), fZec102[i]) + (2 * fYec101[i-1])) - fRec145[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec145_perm[i]=fRec145_tmp[count+i];
			
			// LOOP 0x331dba0
			// pre processing
			for (int i=0; i<4; i++) fRec147_tmp[i]=fRec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec147[i] = (fRec147[i-1] + (fConst12 * ((square_polyblep_precalc(fZec112[i], fZec113[i], (0.5f * fYec45[i-2]), fZec119[i]) + (2 * fYec102[i-1])) - fRec147[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec147_perm[i]=fRec147_tmp[count+i];
			
			// LOOP 0x33240e0
			// pre processing
			for (int i=0; i<4; i++) fRec149_tmp[i]=fRec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec149[i] = (fRec149[i-1] + (fConst12 * ((square_polyblep_precalc(fZec129[i], fZec130[i], (0.5f * fYec52[i-2]), fZec136[i]) + (2 * fYec103[i-1])) - fRec149[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec149_perm[i]=fRec149_tmp[count+i];
			
			// LOOP 0x33299d0
			// pre processing
			for (int i=0; i<4; i++) fRec151_tmp[i]=fRec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec151[i] = (fRec151[i-1] + (fConst13 * ((square_polyblep_precalc(fZec146[i], fZec147[i], (0.5f * fYec59[i-2]), fZec153[i]) + (2 * fYec104[i-1])) - fRec151[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec151_perm[i]=fRec151_tmp[count+i];
			
			// LOOP 0x332f8e0
			// pre processing
			for (int i=0; i<4; i++) fRec153_tmp[i]=fRec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec153[i] = (fRec153[i-1] + (fConst13 * ((square_polyblep_precalc(fZec163[i], fZec164[i], (0.5f * fYec66[i-2]), fZec170[i]) + (2 * fYec105[i-1])) - fRec153[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec153_perm[i]=fRec153_tmp[count+i];
			
			// LOOP 0x3334ba0
			// pre processing
			for (int i=0; i<4; i++) fRec155_tmp[i]=fRec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec155[i] = (fRec155[i-1] + (fConst13 * ((square_polyblep_precalc(fZec180[i], fZec181[i], (0.5f * fYec73[i-2]), fZec187[i]) + (2 * fYec106[i-1])) - fRec155[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec155_perm[i]=fRec155_tmp[count+i];
			
			// LOOP 0x333aa80
			// pre processing
			for (int i=0; i<4; i++) fRec157_tmp[i]=fRec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec157[i] = (fRec157[i-1] + (fConst13 * ((square_polyblep_precalc(fZec197[i], fZec198[i], (0.5f * fYec80[i-2]), fZec204[i]) + (2 * fYec107[i-1])) - fRec157[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec157_perm[i]=fRec157_tmp[count+i];
			
			// LOOP 0x33ef660
			// pre processing
			for (int i=0; i<4; i++) fRec209_tmp[i]=fRec209_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec209[i] = (fConst23 * (fRec209[i-1] + (fRec210[i] - fRec210[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec209_perm[i]=fRec209_tmp[count+i];
			
			// LOOP 0x33f5530
			// pre processing
			for (int i=0; i<4; i++) fRec212_tmp[i]=fRec212_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec212[i] = (fConst23 * ((fRec213[i] - fRec213[i-1]) + fRec212[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec212_perm[i]=fRec212_tmp[count+i];
			
			// LOOP 0x33fac80
			// pre processing
			for (int i=0; i<4; i++) fRec215_tmp[i]=fRec215_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec215[i] = (fConst23 * ((fRec216[i] - fRec216[i-1]) + fRec215[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec215_perm[i]=fRec215_tmp[count+i];
			
			// LOOP 0x34003f0
			// pre processing
			for (int i=0; i<4; i++) fRec218_tmp[i]=fRec218_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec218[i] = (fConst23 * ((fRec219[i] - fRec219[i-1]) + fRec218[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec218_perm[i]=fRec218_tmp[count+i];
			
			// LOOP 0x3405c60
			// pre processing
			for (int i=0; i<4; i++) fRec221_tmp[i]=fRec221_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec221[i] = (fConst23 * ((fRec222[i] - fRec222[i-1]) + fRec221[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec221_perm[i]=fRec221_tmp[count+i];
			
			// LOOP 0x340b4b0
			// pre processing
			for (int i=0; i<4; i++) fRec224_tmp[i]=fRec224_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec224[i] = (fConst23 * ((fRec225[i] - fRec225[i-1]) + fRec224[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec224_perm[i]=fRec224_tmp[count+i];
			
			// LOOP 0x3410db0
			// pre processing
			for (int i=0; i<4; i++) fRec227_tmp[i]=fRec227_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec227[i] = (fConst23 * ((fRec228[i] - fRec228[i-1]) + fRec227[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec227_perm[i]=fRec227_tmp[count+i];
			
			// LOOP 0x34166e0
			// pre processing
			for (int i=0; i<4; i++) fRec230_tmp[i]=fRec230_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec230[i] = (fConst23 * ((fRec231[i] - fRec231[i-1]) + fRec230[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec230_perm[i]=fRec230_tmp[count+i];
			
			// LOOP 0x341bfe0
			// pre processing
			for (int i=0; i<4; i++) fRec233_tmp[i]=fRec233_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec233[i] = (fConst23 * ((fRec234[i] - fRec234[i-1]) + fRec233[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec233_perm[i]=fRec233_tmp[count+i];
			
			// LOOP 0x3421970
			// pre processing
			for (int i=0; i<4; i++) fRec236_tmp[i]=fRec236_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec236[i] = (fConst23 * ((fRec237[i] - fRec237[i-1]) + fRec236[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec236_perm[i]=fRec236_tmp[count+i];
			
			// LOOP 0x3427320
			// pre processing
			for (int i=0; i<4; i++) fRec239_tmp[i]=fRec239_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec239[i] = (fConst23 * ((fRec240[i] - fRec240[i-1]) + fRec239[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec239_perm[i]=fRec239_tmp[count+i];
			
			// LOOP 0x342cd10
			// pre processing
			for (int i=0; i<4; i++) fRec242_tmp[i]=fRec242_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec242[i] = (fConst23 * ((fRec243[i] - fRec243[i-1]) + fRec242[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec242_perm[i]=fRec242_tmp[count+i];
			
			// LOOP 0x356fb90
			// pre processing
			for (int i=0; i<4; i++) fYec197_tmp[i]=fYec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec197[i] = (fZec333[i] - fZec332[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec197_perm[i]=fYec197_tmp[count+i];
			
			// SECTION : 29
			// LOOP 0x31a4200
			// exec code
			for (int i=0; i<count; i++) {
				fZec210[i] = ((fRec118[i] * fZec209[i]) + ((fRec116[i] * fZec208[i]) + ((fRec114[i] * fZec207[i]) + ((fRec112[i] * fZec206[i]) + ((fRec110[i] * fZec205[i]) + ((fRec101[i] * fZec188[i]) + ((fRec92[i] * fZec171[i]) + ((fRec83[i] * fZec154[i]) + ((fRec74[i] * fZec137[i]) + ((fRec65[i] * fZec120[i]) + ((fRec56[i] * fZec103[i]) + ((fRec47[i] * fZec86[i]) + ((fRec38[i] * fZec69[i]) + ((fRec29[i] * fZec52[i]) + ((fRec20[i] * fZec35[i]) + ((fRec11[i] * fZec18[i]) + (fRec1[i] * fZec0[i])))))))))))))))));
			}
			
			// LOOP 0x32d5870
			// pre processing
			for (int i=0; i<4; i++) fRec120_tmp[i]=fRec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec120[i] = (fConst7 * ((fRec121[i] - fRec121[i-1]) + fRec120[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec120_perm[i]=fRec120_tmp[count+i];
			
			// LOOP 0x32da960
			// pre processing
			for (int i=0; i<4; i++) fRec122_tmp[i]=fRec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec122[i] = (fConst7 * ((fRec123[i] - fRec123[i-1]) + fRec122[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec122_perm[i]=fRec122_tmp[count+i];
			
			// LOOP 0x32e0400
			// pre processing
			for (int i=0; i<4; i++) fRec124_tmp[i]=fRec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec124[i] = (fConst7 * ((fRec125[i] - fRec125[i-1]) + fRec124[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec124_perm[i]=fRec124_tmp[count+i];
			
			// LOOP 0x32e56f0
			// pre processing
			for (int i=0; i<4; i++) fRec126_tmp[i]=fRec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec126[i] = (fConst7 * ((fRec127[i] - fRec127[i-1]) + fRec126[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec126_perm[i]=fRec126_tmp[count+i];
			
			// LOOP 0x32eaf40
			// pre processing
			for (int i=0; i<4; i++) fRec128_tmp[i]=fRec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec128[i] = (fConst7 * ((fRec129[i] - fRec129[i-1]) + fRec128[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec128_perm[i]=fRec128_tmp[count+i];
			
			// LOOP 0x32efe90
			// pre processing
			for (int i=0; i<4; i++) fRec130_tmp[i]=fRec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec130[i] = (fConst7 * ((fRec131[i] - fRec131[i-1]) + fRec130[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec130_perm[i]=fRec130_tmp[count+i];
			
			// LOOP 0x32f5600
			// pre processing
			for (int i=0; i<4; i++) fRec132_tmp[i]=fRec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec132[i] = (fConst7 * ((fRec133[i] - fRec133[i-1]) + fRec132[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec132_perm[i]=fRec132_tmp[count+i];
			
			// LOOP 0x32fb020
			// pre processing
			for (int i=0; i<4; i++) fRec134_tmp[i]=fRec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec134[i] = (fConst11 * ((fRec135[i] - fRec135[i-1]) + fRec134[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec134_perm[i]=fRec134_tmp[count+i];
			
			// LOOP 0x33009b0
			// pre processing
			for (int i=0; i<4; i++) fRec136_tmp[i]=fRec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec136[i] = (fConst11 * ((fRec137[i] - fRec137[i-1]) + fRec136[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec136_perm[i]=fRec136_tmp[count+i];
			
			// LOOP 0x33066b0
			// pre processing
			for (int i=0; i<4; i++) fRec138_tmp[i]=fRec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec138[i] = (fConst11 * ((fRec139[i] - fRec139[i-1]) + fRec138[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec138_perm[i]=fRec138_tmp[count+i];
			
			// LOOP 0x330ba90
			// pre processing
			for (int i=0; i<4; i++) fRec140_tmp[i]=fRec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec140[i] = (fConst11 * ((fRec141[i] - fRec141[i-1]) + fRec140[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec140_perm[i]=fRec140_tmp[count+i];
			
			// LOOP 0x3311ab0
			// pre processing
			for (int i=0; i<4; i++) fRec142_tmp[i]=fRec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec142[i] = (fConst11 * ((fRec143[i] - fRec143[i-1]) + fRec142[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec142_perm[i]=fRec142_tmp[count+i];
			
			// LOOP 0x3318020
			// pre processing
			for (int i=0; i<4; i++) fRec144_tmp[i]=fRec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec144[i] = (fConst11 * ((fRec145[i] - fRec145[i-1]) + fRec144[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec144_perm[i]=fRec144_tmp[count+i];
			
			// LOOP 0x331d6b0
			// pre processing
			for (int i=0; i<4; i++) fRec146_tmp[i]=fRec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec146[i] = (fConst11 * ((fRec147[i] - fRec147[i-1]) + fRec146[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec146_perm[i]=fRec146_tmp[count+i];
			
			// LOOP 0x3323bf0
			// pre processing
			for (int i=0; i<4; i++) fRec148_tmp[i]=fRec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec148[i] = (fConst11 * ((fRec149[i] - fRec149[i-1]) + fRec148[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec148_perm[i]=fRec148_tmp[count+i];
			
			// LOOP 0x33294e0
			// pre processing
			for (int i=0; i<4; i++) fRec150_tmp[i]=fRec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec150[i] = (fConst11 * ((fRec151[i] - fRec151[i-1]) + fRec150[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec150_perm[i]=fRec150_tmp[count+i];
			
			// LOOP 0x332f3f0
			// pre processing
			for (int i=0; i<4; i++) fRec152_tmp[i]=fRec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec152[i] = (fConst11 * ((fRec153[i] - fRec153[i-1]) + fRec152[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec152_perm[i]=fRec152_tmp[count+i];
			
			// LOOP 0x33346b0
			// pre processing
			for (int i=0; i<4; i++) fRec154_tmp[i]=fRec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec154[i] = (fConst11 * ((fRec155[i] - fRec155[i-1]) + fRec154[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec154_perm[i]=fRec154_tmp[count+i];
			
			// LOOP 0x333a590
			// pre processing
			for (int i=0; i<4; i++) fRec156_tmp[i]=fRec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec156[i] = (fConst11 * ((fRec157[i] - fRec157[i-1]) + fRec156[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec156_perm[i]=fRec156_tmp[count+i];
			
			// LOOP 0x33ded20
			// exec code
			for (int i=0; i<count; i++) {
				fZec260[i] = (fRec206[i] + (fRec204[i] + (fRec202[i] + (fRec200[i] + (fRec198[i] + (fRec196[i] + (fRec194[i] + (fRec192[i] + fZec259[i]))))))));
			}
			
			// LOOP 0x33ef4c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec275[i] = ((fRec38[i] * fZec209[i]) + ((fRec29[i] * fZec208[i]) + ((fRec20[i] * fZec207[i]) + ((fRec11[i] * fZec206[i]) + ((fRec1[i] * fZec205[i]) + ((fRec242[i] * fZec188[i]) + ((fRec239[i] * fZec171[i]) + ((fRec236[i] * fZec154[i]) + ((fRec233[i] * fZec137[i]) + ((fRec230[i] * fZec120[i]) + ((fRec227[i] * fZec103[i]) + ((fRec224[i] * fZec86[i]) + ((fRec221[i] * fZec69[i]) + ((fRec218[i] * fZec52[i]) + ((fRec215[i] * fZec35[i]) + ((fRec212[i] * fZec18[i]) + (fRec209[i] * fZec0[i])))))))))))))))));
			}
			
			// LOOP 0x356f6d0
			// pre processing
			for (int i=0; i<4; i++) fRec283_tmp[i]=fRec283_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec283[i] = (fConst21 * ((fZec333[i] - (fZec332[i] + fYec197[i-1])) + fRec283[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec283_perm[i]=fRec283_tmp[count+i];
			
			// SECTION : 30
			// LOOP 0x31a40c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec255[i] = (0.25f * ((fRec206[i] * fZec254[i]) + ((fRec204[i] * fZec253[i]) + ((fRec202[i] * fZec252[i]) + ((fRec200[i] * fZec251[i]) + ((fRec198[i] * fZec250[i]) + ((fRec196[i] * fZec249[i]) + ((fRec194[i] * fZec248[i]) + ((fRec192[i] * fZec247[i]) + ((fRec190[i] * fZec246[i]) + ((fRec188[i] * fZec245[i]) + ((fRec186[i] * fZec244[i]) + ((fRec184[i] * fZec243[i]) + ((fRec182[i] * fZec242[i]) + ((fRec180[i] * fZec241[i]) + ((fRec178[i] * fZec240[i]) + ((fRec176[i] * fZec239[i]) + ((fRec174[i] * fZec238[i]) + ((fRec172[i] * fZec237[i]) + ((fRec170[i] * fZec236[i]) + ((fRec168[i] * fZec235[i]) + ((fRec166[i] * fZec234[i]) + ((fRec164[i] * fZec233[i]) + ((fRec162[i] * fZec232[i]) + ((fRec160[i] * fZec231[i]) + ((fRec158[i] * fZec230[i]) + ((fRec156[i] * fZec229[i]) + ((fRec154[i] * fZec228[i]) + ((fRec152[i] * fZec227[i]) + ((fRec150[i] * fZec226[i]) + ((fRec148[i] * fZec225[i]) + ((fRec146[i] * fZec224[i]) + ((fRec144[i] * fZec223[i]) + ((fRec142[i] * fZec222[i]) + ((fRec140[i] * fZec221[i]) + ((fRec138[i] * fZec220[i]) + ((fRec136[i] * fZec219[i]) + ((fRec134[i] * fZec218[i]) + ((fRec132[i] * fZec217[i]) + ((fRec130[i] * fZec216[i]) + ((fRec128[i] * fZec215[i]) + ((fRec126[i] * fZec214[i]) + ((fRec124[i] * fZec213[i]) + ((fRec122[i] * fZec212[i]) + ((fRec120[i] * fZec211[i]) + (fSlow36 * fZec210[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x33de140
			// exec code
			for (int i=0; i<count; i++) {
				fZec261[i] = ((fSlow36 * (fRec101[i] + (fRec92[i] + (fRec83[i] + (fRec74[i] + (fRec65[i] + (fRec56[i] + (fRec47[i] + (fRec38[i] + (fRec29[i] + (fRec20[i] + (fRec11[i] + (fRec1[i] + (fRec118[i] + (fRec116[i] + (fRec114[i] + (fRec110[i] + fRec112[i]))))))))))))))))) + (fRec122[i] + (fRec120[i] + (fRec132[i] + (fRec130[i] + (fRec128[i] + (fRec126[i] + (fRec124[i] + (fRec140[i] + (fRec138[i] + (fRec136[i] + (fRec134[i] + (fRec156[i] + (fRec154[i] + (fRec152[i] + (fRec150[i] + (fRec148[i] + (fRec146[i] + (fRec144[i] + (fRec142[i] + fZec260[i]))))))))))))))))))));
			}
			
			// LOOP 0x33ef380
			// exec code
			for (int i=0; i<count; i++) {
				fZec276[i] = (0.41975f * ((fRec182[i] * fZec254[i]) + ((fRec180[i] * fZec253[i]) + ((fRec178[i] * fZec252[i]) + ((fRec176[i] * fZec251[i]) + ((fRec174[i] * fZec250[i]) + ((fRec172[i] * fZec249[i]) + ((fRec170[i] * fZec248[i]) + ((fRec168[i] * fZec247[i]) + ((fRec166[i] * fZec246[i]) + ((fRec164[i] * fZec245[i]) + ((fRec162[i] * fZec244[i]) + ((fRec160[i] * fZec243[i]) + ((fRec158[i] * fZec242[i]) + ((fRec156[i] * fZec241[i]) + ((fRec154[i] * fZec240[i]) + ((fRec152[i] * fZec239[i]) + ((fRec150[i] * fZec238[i]) + ((fRec148[i] * fZec237[i]) + ((fRec146[i] * fZec236[i]) + ((fRec144[i] * fZec235[i]) + ((fRec142[i] * fZec234[i]) + ((fRec140[i] * fZec233[i]) + ((fRec138[i] * fZec232[i]) + ((fRec136[i] * fZec231[i]) + ((fRec134[i] * fZec230[i]) + ((fRec132[i] * fZec229[i]) + ((fRec130[i] * fZec228[i]) + ((fRec128[i] * fZec227[i]) + ((fRec126[i] * fZec226[i]) + ((fRec124[i] * fZec225[i]) + ((fRec122[i] * fZec224[i]) + ((fRec120[i] * fZec223[i]) + ((fRec118[i] * fZec222[i]) + ((fRec116[i] * fZec221[i]) + ((fRec114[i] * fZec220[i]) + ((fRec112[i] * fZec219[i]) + ((fRec110[i] * fZec218[i]) + ((fRec101[i] * fZec217[i]) + ((fRec92[i] * fZec216[i]) + ((fRec83[i] * fZec215[i]) + ((fRec74[i] * fZec214[i]) + ((fRec65[i] * fZec213[i]) + ((fRec56[i] * fZec212[i]) + ((fRec47[i] * fZec211[i]) + (fSlow36 * fZec275[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x34468b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec277[i] = (1.679f * ((fSlow36 * (fRec242[i] + (fRec239[i] + (fRec236[i] + (fRec233[i] + (fRec230[i] + (fRec227[i] + (fRec224[i] + (fRec221[i] + (fRec218[i] + (fRec215[i] + (fRec212[i] + (fRec209[i] + (fRec38[i] + (fRec29[i] + (fRec20[i] + (fRec1[i] + fRec11[i]))))))))))))))))) + (fRec101[i] + (fRec92[i] + (fRec83[i] + (fRec74[i] + (fRec65[i] + (fRec56[i] + (fRec47[i] + (fRec122[i] + (fRec120[i] + (fRec118[i] + (fRec116[i] + (fRec114[i] + (fRec112[i] + (fRec110[i] + (fRec132[i] + (fRec130[i] + (fRec128[i] + (fRec126[i] + (fRec124[i] + (fRec140[i] + (fRec138[i] + (fRec136[i] + (fRec134[i] + (fRec156[i] + (fRec154[i] + (fRec152[i] + (fRec150[i] + (fRec148[i] + (fRec146[i] + (fRec144[i] + (fRec142[i] + fZec258[i])))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x34e5f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec298[i] = (0.25f * (fZec280[i] + (fZec297[i] + (fZec296[i] + (fZec295[i] + (fZec294[i] + (fZec293[i] + (fZec292[i] + (fZec291[i] + (fZec290[i] + (fZec289[i] + (fZec288[i] + (fZec287[i] + (fZec286[i] + ((fRec265[i] * fZec241[i]) + ((fRec263[i] * fZec240[i]) + ((fRec261[i] * fZec239[i]) + ((fRec259[i] * fZec238[i]) + ((fRec257[i] * fZec237[i]) + ((fRec255[i] * fZec236[i]) + ((fRec253[i] * fZec235[i]) + ((fRec251[i] * fZec234[i]) + ((fRec249[i] * fZec233[i]) + ((fRec247[i] * fZec232[i]) + ((fRec245[i] * fZec231[i]) + ((fRec206[i] * fZec230[i]) + ((fRec204[i] * fZec229[i]) + ((fRec202[i] * fZec228[i]) + ((fRec200[i] * fZec227[i]) + ((fRec198[i] * fZec226[i]) + ((fRec196[i] * fZec225[i]) + ((fRec194[i] * fZec224[i]) + ((fRec192[i] * fZec223[i]) + ((fRec190[i] * fZec222[i]) + ((fRec188[i] * fZec221[i]) + ((fRec186[i] * fZec220[i]) + ((fRec184[i] * fZec219[i]) + ((fRec182[i] * fZec218[i]) + ((fRec180[i] * fZec217[i]) + ((fRec178[i] * fZec216[i]) + ((fRec176[i] * fZec215[i]) + ((fRec174[i] * fZec214[i]) + ((fRec172[i] * fZec213[i]) + ((fRec170[i] * fZec212[i]) + ((fRec168[i] * fZec211[i]) + (fSlow36 * ((fRec166[i] * fZec209[i]) + ((fRec164[i] * fZec208[i]) + ((fRec162[i] * fZec207[i]) + ((fRec160[i] * fZec206[i]) + ((fRec158[i] * fZec205[i]) + ((fRec156[i] * fZec188[i]) + ((fRec154[i] * fZec171[i]) + ((fRec152[i] * fZec154[i]) + ((fRec150[i] * fZec137[i]) + ((fRec148[i] * fZec120[i]) + ((fRec146[i] * fZec103[i]) + ((fRec144[i] * fZec86[i]) + ((fRec142[i] * fZec69[i]) + ((fRec140[i] * fZec52[i]) + ((fRec138[i] * fZec35[i]) + ((fRec136[i] * fZec18[i]) + (fRec134[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3518030
			// exec code
			for (int i=0; i<count; i++) {
				fZec299[i] = ((fSlow36 * (fRec140[i] + (fRec138[i] + (fRec136[i] + (fRec134[i] + (fRec156[i] + (fRec154[i] + (fRec152[i] + (fRec150[i] + (fRec148[i] + (fRec146[i] + (fRec144[i] + (fRec142[i] + fZec256[i]))))))))))))) + (fRec281[i] + (fRec280[i] + (fRec279[i] + (fRec278[i] + (fRec276[i] + (fRec275[i] + (fRec274[i] + (fRec273[i] + (fRec272[i] + (fRec271[i] + (fRec270[i] + ((2 * fRec267[i]) + (fRec265[i] + (fRec263[i] + (fRec261[i] + (fRec259[i] + (fRec257[i] + (fRec255[i] + (fRec253[i] + (fRec251[i] + (fRec249[i] + (fRec247[i] + (fRec245[i] + (fRec206[i] + (fRec204[i] + (fRec202[i] + (fRec200[i] + (fRec198[i] + (fRec196[i] + (fRec194[i] + (fRec192[i] + (fRec190[i] + (fRec188[i] + (fRec186[i] + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec174[i] + (fRec172[i] + (fRec168[i] + fRec170[i])))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x356f5c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec334[i] = (0.002f * (fRec283[i] * fSlow1));
			}
			
			// LOOP 0x35a8190
			// pre processing
			for (int i=0; i<4; i++) iRec289_tmp[i]=iRec289_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec289[i] = (12345 + (1103515245 * iRec289[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) iRec289_perm[i]=iRec289_tmp[count+i];
			
			// SECTION : 31
			// LOOP 0x31a3fb0
			// pre processing
			for (int i=0; i<4; i++) fYec133_tmp[i]=fYec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec133[i] = (fZec261[i] - fZec255[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec133_perm[i]=fYec133_tmp[count+i];
			
			// LOOP 0x33ef270
			// pre processing
			for (int i=0; i<4; i++) fYec158_tmp[i]=fYec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec158[i] = (fZec277[i] - fZec276[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec158_perm[i]=fYec158_tmp[count+i];
			
			// LOOP 0x34e5e40
			// pre processing
			for (int i=0; i<4; i++) fYec195_tmp[i]=fYec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec195[i] = (fZec299[i] - fZec298[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec195_perm[i]=fYec195_tmp[count+i];
			
			// LOOP 0x35a7ec0
			// exec code
			for (int i=0; i<count; i++) {
				fZec337[i] = faustpower<2>(float(min(1.0f, max(-1.0f, (fZec334[i] + ((4.656612875245796e-16f * iRec289[i]) + fZec332[i]))))));
			}
			
			// SECTION : 32
			// LOOP 0x31a3c80
			// pre processing
			for (int i=0; i<4; i++) fRec0_tmp[i]=fRec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec0[i] = (fConst21 * ((fZec261[i] - (fZec255[i] + fYec133[i-1])) + fRec0[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec0_perm[i]=fRec0_tmp[count+i];
			
			// LOOP 0x33eedb0
			// pre processing
			for (int i=0; i<4; i++) fRec208_tmp[i]=fRec208_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec208[i] = (fConst21 * ((fZec277[i] - (fZec276[i] + fYec158[i-1])) + fRec208[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec208_perm[i]=fRec208_tmp[count+i];
			
			// LOOP 0x345a960
			// exec code
			for (int i=0; i<count; i++) {
				fZec279[i] = ((fRec142[i] * fZec209[i]) + ((fRec140[i] * fZec208[i]) + ((fRec138[i] * fZec207[i]) + ((fRec136[i] * fZec206[i]) + ((fRec134[i] * fZec205[i]) + ((fRec132[i] * fZec188[i]) + ((fRec130[i] * fZec171[i]) + ((fRec128[i] * fZec154[i]) + ((fRec126[i] * fZec137[i]) + ((fRec124[i] * fZec120[i]) + ((fRec122[i] * fZec103[i]) + ((fRec120[i] * fZec86[i]) + ((fRec118[i] * fZec69[i]) + ((fRec116[i] * fZec52[i]) + ((fRec114[i] * fZec35[i]) + ((fRec112[i] * fZec18[i]) + (fRec110[i] * fZec0[i])))))))))))))))));
			}
			
			// LOOP 0x349b190
			// pre processing
			for (int i=0; i<4; i++) fRec268_tmp[i]=fRec268_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec268[i] = (fConst21 * fRec268[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec268_perm[i]=fRec268_tmp[count+i];
			
			// LOOP 0x34e59b0
			// pre processing
			for (int i=0; i<4; i++) fRec277_tmp[i]=fRec277_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec277[i] = (fConst21 * ((fZec299[i] - (fZec298[i] + fYec195[i-1])) + fRec277[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec277_perm[i]=fRec277_tmp[count+i];
			
			// LOOP 0x35a78b0
			// pre processing
			for (int i=0; i<4; i++) fRec286_tmp[i]=fRec286_perm[i];
			for (int i=0; i<4; i++) iRec287_tmp[i]=iRec287_perm[i];
			for (int i=0; i<4; i++) fRec288_tmp[i]=fRec288_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iZec338[i] = int((iRec287[i-1] < iConst28));
				fRec286[i] = ((iZec338[i])?(fRec286[i-1] + fZec337[i]):fZec337[i]);
				iRec287[i] = ((iZec338[i])?(1 + iRec287[i-1]):1);
				fRec288[i] = ((iZec338[i])?fRec288[i-1]:fRec286[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec288_perm[i]=fRec288_tmp[count+i];
			for (int i=0; i<4; i++) iRec287_perm[i]=iRec287_tmp[count+i];
			for (int i=0; i<4; i++) fRec286_perm[i]=fRec286_tmp[count+i];
			
			// SECTION : 33
			// LOOP 0x31a2d70
			// exec code
			for (int i=0; i<count; i++) {
				fZec262[i] = (fZec255[i] + (0.002f * (fRec0[i] * fSlow1)));
			}
			
			// LOOP 0x33eeca0
			// exec code
			for (int i=0; i<count; i++) {
				fZec278[i] = (fZec276[i] + (0.002f * (fRec208[i] * fSlow1)));
			}
			
			// LOOP 0x345a850
			// exec code
			for (int i=0; i<count; i++) {
				fZec281[i] = ((0.002f * (fRec268[i] * fSlow1)) + (0.25f * (fZec280[i] + ((fRec265[i] * fZec253[i]) + ((fRec263[i] * fZec252[i]) + ((fRec261[i] * fZec251[i]) + ((fRec259[i] * fZec250[i]) + ((fRec257[i] * fZec249[i]) + ((fRec255[i] * fZec248[i]) + ((fRec253[i] * fZec247[i]) + ((fRec251[i] * fZec246[i]) + ((fRec249[i] * fZec245[i]) + ((fRec247[i] * fZec244[i]) + ((fRec245[i] * fZec243[i]) + ((fRec206[i] * fZec242[i]) + ((fRec204[i] * fZec241[i]) + ((fRec202[i] * fZec240[i]) + ((fRec200[i] * fZec239[i]) + ((fRec198[i] * fZec238[i]) + ((fRec196[i] * fZec237[i]) + ((fRec194[i] * fZec236[i]) + ((fRec192[i] * fZec235[i]) + ((fRec190[i] * fZec234[i]) + ((fRec188[i] * fZec233[i]) + ((fRec186[i] * fZec232[i]) + ((fRec184[i] * fZec231[i]) + ((fRec182[i] * fZec230[i]) + ((fRec180[i] * fZec229[i]) + ((fRec178[i] * fZec228[i]) + ((fRec176[i] * fZec227[i]) + ((fRec174[i] * fZec226[i]) + ((fRec172[i] * fZec225[i]) + ((fRec170[i] * fZec224[i]) + ((fRec168[i] * fZec223[i]) + ((fRec166[i] * fZec222[i]) + ((fRec164[i] * fZec221[i]) + ((fRec162[i] * fZec220[i]) + ((fRec160[i] * fZec219[i]) + ((fRec158[i] * fZec218[i]) + ((fRec156[i] * fZec217[i]) + ((fRec154[i] * fZec216[i]) + ((fRec152[i] * fZec215[i]) + ((fRec150[i] * fZec214[i]) + ((fRec148[i] * fZec213[i]) + ((fRec146[i] * fZec212[i]) + ((fRec144[i] * fZec211[i]) + (fSlow36 * fZec279[i])))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x34a2770
			// exec code
			for (int i=0; i<count; i++) {
				fZec282[i] = ((fRec276[i] * fZec254[i]) + ((fRec275[i] * fZec253[i]) + ((fRec274[i] * fZec252[i]) + ((fRec273[i] * fZec251[i]) + ((fRec272[i] * fZec250[i]) + ((fRec271[i] * fZec249[i]) + ((fRec270[i] * fZec248[i]) + ((fRec267[i] * fZec247[i]) + ((fRec265[i] * fZec246[i]) + ((fRec263[i] * fZec245[i]) + ((fRec261[i] * fZec244[i]) + ((fRec259[i] * fZec243[i]) + ((fRec257[i] * fZec242[i]) + ((fRec255[i] * fZec241[i]) + ((fRec253[i] * fZec240[i]) + ((fRec251[i] * fZec239[i]) + ((fRec249[i] * fZec238[i]) + ((fRec247[i] * fZec237[i]) + ((fRec245[i] * fZec236[i]) + ((fRec206[i] * fZec235[i]) + ((fRec204[i] * fZec234[i]) + ((fRec202[i] * fZec233[i]) + ((fRec200[i] * fZec232[i]) + ((fRec198[i] * fZec231[i]) + ((fRec196[i] * fZec230[i]) + ((fRec194[i] * fZec229[i]) + ((fRec192[i] * fZec228[i]) + ((fRec190[i] * fZec227[i]) + ((fRec188[i] * fZec226[i]) + ((fRec186[i] * fZec225[i]) + ((fRec184[i] * fZec224[i]) + ((fRec182[i] * fZec223[i]) + ((fRec180[i] * fZec222[i]) + ((fRec178[i] * fZec221[i]) + ((fRec176[i] * fZec220[i]) + ((fRec174[i] * fZec219[i]) + ((fRec172[i] * fZec218[i]) + ((fRec170[i] * fZec217[i]) + ((fRec168[i] * fZec216[i]) + ((fRec166[i] * fZec215[i]) + ((fRec164[i] * fZec214[i]) + ((fRec162[i] * fZec213[i]) + ((fRec160[i] * fZec212[i]) + ((fRec158[i] * fZec211[i]) + (fSlow36 * ((fRec156[i] * fZec209[i]) + ((fRec154[i] * fZec208[i]) + ((fRec152[i] * fZec207[i]) + ((fRec150[i] * fZec206[i]) + ((fRec148[i] * fZec205[i]) + ((fRec146[i] * fZec188[i]) + ((fRec144[i] * fZec171[i]) + ((fRec142[i] * fZec154[i]) + ((fRec140[i] * fZec137[i]) + ((fRec138[i] * fZec120[i]) + ((fRec136[i] * fZec103[i]) + ((fRec134[i] * fZec86[i]) + ((fRec132[i] * fZec69[i]) + ((fRec130[i] * fZec52[i]) + ((fRec128[i] * fZec35[i]) + ((fRec126[i] * fZec18[i]) + (fRec124[i] * fZec0[i]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x34e58a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec300[i] = (fZec298[i] + (0.002f * (fRec277[i] * fSlow1)));
			}
			
			// LOOP 0x35a7770
			// pre processing
			for (int i=0; i<4; i++) fYec198_tmp[i]=fYec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec198[i] = log10f(sqrtf((fConst29 * fRec288[i])));
			}
			// post processing
			for (int i=0; i<4; i++) fYec198_perm[i]=fYec198_tmp[count+i];
			
			// SECTION : 34
			// LOOP 0x34a2630
			// exec code
			for (int i=0; i<count; i++) {
				fZec283[i] = (0.25f * fZec282[i]);
			}
			
			// LOOP 0x34d9230
			// exec code
			for (int i=0; i<count; i++) {
				fZec284[i] = ((fSlow36 * (fRec132[i] + (fRec130[i] + (fRec128[i] + (fRec126[i] + (fRec124[i] + (fRec140[i] + (fRec138[i] + (fRec136[i] + (fRec134[i] + (fRec156[i] + (fRec154[i] + (fRec152[i] + (fRec150[i] + (fRec148[i] + (fRec146[i] + (fRec142[i] + fRec144[i]))))))))))))))))) + (fRec276[i] + (fRec275[i] + (fRec274[i] + (fRec273[i] + (fRec272[i] + (fRec271[i] + (fRec270[i] + (fRec267[i] + (fRec265[i] + (fRec263[i] + (fRec261[i] + (fRec259[i] + (fRec257[i] + (fRec255[i] + (fRec253[i] + (fRec251[i] + (fRec249[i] + (fRec247[i] + (fRec245[i] + fZec260[i]))))))))))))))))))));
			}
			
			// LOOP 0x35a7660
			// exec code
			for (int i=0; i<count; i++) {
				fZec339[i] = (2e+01f * fYec198[i]);
			}
			
			// LOOP 0x35adf50
			// exec code
			for (int i=0; i<count; i++) {
				fZec340[i] = (2e+01f * fYec198[i-1]);
			}
			
			// LOOP 0x35c2000
			// pre processing
			for (int i=0; i<4; i++) fYec200_tmp[i]=fYec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec200[i] = (fSlow106 * fZec278[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec200_perm[i]=fYec200_tmp[count+i];
			
			// LOOP 0x35c9970
			// pre processing
			for (int i=0; i<4; i++) fYec202_tmp[i]=fYec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec202[i] = (fSlow109 * fZec262[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec202_perm[i]=fYec202_tmp[count+i];
			
			// LOOP 0x35d0fc0
			// pre processing
			for (int i=0; i<4; i++) fYec204_tmp[i]=fYec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec204[i] = (fSlow112 * fZec281[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec204_perm[i]=fYec204_tmp[count+i];
			
			// LOOP 0x35d8650
			// pre processing
			for (int i=0; i<4; i++) fYec206_tmp[i]=fYec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec206[i] = (fSlow115 * fZec300[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec206_perm[i]=fYec206_tmp[count+i];
			
			// SECTION : 35
			// LOOP 0x34a2520
			// pre processing
			for (int i=0; i<4; i++) fYec186_tmp[i]=fYec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec186[i] = (fZec284[i] - fZec283[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec186_perm[i]=fYec186_tmp[count+i];
			
			// LOOP 0x352baf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec301[i] = (0.25f * ((fRec273[i] * fZec254[i]) + ((fRec272[i] * fZec253[i]) + ((fRec271[i] * fZec252[i]) + ((fRec270[i] * fZec251[i]) + ((fRec267[i] * fZec250[i]) + ((fRec281[i] * fZec249[i]) + ((fRec280[i] * fZec248[i]) + ((fRec279[i] * fZec247[i]) + ((fRec278[i] * fZec246[i]) + ((fRec276[i] * fZec245[i]) + ((fRec275[i] * fZec244[i]) + ((fRec274[i] * fZec243[i]) + ((fRec273[i] * fZec242[i]) + ((fRec272[i] * fZec241[i]) + ((fRec271[i] * fZec240[i]) + ((fRec270[i] * fZec239[i]) + ((fRec267[i] * fZec238[i]) + ((fRec265[i] * fZec237[i]) + ((fRec263[i] * fZec236[i]) + ((fRec261[i] * fZec235[i]) + ((fRec259[i] * fZec234[i]) + ((fRec257[i] * fZec233[i]) + ((fRec255[i] * fZec232[i]) + ((fRec253[i] * fZec231[i]) + ((fRec251[i] * fZec230[i]) + ((fRec249[i] * fZec229[i]) + ((fRec247[i] * fZec228[i]) + ((fRec245[i] * fZec227[i]) + ((fRec206[i] * fZec226[i]) + ((fRec204[i] * fZec225[i]) + ((fRec202[i] * fZec224[i]) + ((fRec200[i] * fZec223[i]) + ((fRec198[i] * fZec222[i]) + ((fRec196[i] * fZec221[i]) + ((fRec194[i] * fZec220[i]) + ((fRec192[i] * fZec219[i]) + ((fRec190[i] * fZec218[i]) + ((fRec188[i] * fZec217[i]) + ((fRec186[i] * fZec216[i]) + ((fRec184[i] * fZec215[i]) + ((fRec182[i] * fZec214[i]) + ((fRec180[i] * fZec213[i]) + ((fRec178[i] * fZec212[i]) + ((fRec176[i] * fZec211[i]) + (fSlow36 * ((fRec174[i] * fZec209[i]) + ((fRec172[i] * fZec208[i]) + ((fRec170[i] * fZec207[i]) + ((fRec168[i] * fZec206[i]) + ((fRec166[i] * fZec205[i]) + ((fRec164[i] * fZec188[i]) + ((fRec162[i] * fZec171[i]) + ((fRec160[i] * fZec154[i]) + ((fRec158[i] * fZec137[i]) + ((fRec156[i] * fZec120[i]) + ((fRec154[i] * fZec103[i]) + ((fRec152[i] * fZec86[i]) + ((fRec150[i] * fZec69[i]) + ((fRec148[i] * fZec52[i]) + ((fRec146[i] * fZec35[i]) + ((fRec144[i] * fZec18[i]) + (fRec142[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3545190
			// exec code
			for (int i=0; i<count; i++) {
				fZec331[i] = ((fRec273[i] + (fRec271[i] + fRec272[i])) + (2 * ((fZec330[i] + (fZec329[i] + (fZec328[i] + (fZec327[i] + (fZec326[i] + (fZec325[i] + (fZec324[i] + (fZec323[i] + (fZec322[i] + (fZec321[i] + (fRec270[i] + (fRec267[i] + (fZec320[i] + (fZec319[i] + (fZec318[i] + (fZec317[i] + (fZec316[i] + (fZec315[i] + (fZec314[i] + (fZec313[i] + (fZec312[i] + (fZec311[i] + (fZec310[i] + (fZec309[i] + (fZec308[i] + (fZec307[i] + (fZec306[i] + (fZec305[i] + (fZec304[i] + (fZec303[i] + (fZec302[i] + ((((((((0.5f * fRec176[i]) + (0.5f * fRec178[i])) + (0.5f * fRec180[i])) + (0.5f * fRec182[i])) + (0.5f * fRec184[i])) + (0.5f * fRec186[i])) + (0.5f * fRec188[i])) + (0.5f * fRec190[i]))))))))))))))))))))))))))))))))) + (fSlow91 * (fRec156[i] + (fRec154[i] + (fRec152[i] + (fRec150[i] + (fRec148[i] + (fRec146[i] + (fRec144[i] + (fRec142[i] + fZec257[i]))))))))))));
			}
			
			// LOOP 0x35a7260
			// pre processing
			for (int i=0; i<4; i++) fRec285_tmp[i]=fRec285_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec285[i] = min(1.0f, max(0.0f, ((((int((fZec339[i] > -25.0f)))?((int((fZec340[i] < -25.0f)))?1.0f:0.0f):0.0f) + fRec285[i-1]) - ((int((fZec340[i] > -35.0f)))?((int((fZec339[i] < -35.0f)))?1.0f:0.0f):0.0f))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec285_perm[i]=fRec285_tmp[count+i];
			
			// LOOP 0x35c1a80
			// pre processing
			for (int i=0; i<4; i++) fRec293_tmp[i]=fRec293_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec293[i] = (fConst32 * ((fYec200[i] - fYec200[i-1]) + fRec293[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec293_perm[i]=fRec293_tmp[count+i];
			
			// LOOP 0x35c93f0
			// pre processing
			for (int i=0; i<4; i++) fRec295_tmp[i]=fRec295_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec295[i] = (fConst34 * ((fYec202[i] - fYec202[i-1]) + fRec295[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec295_perm[i]=fRec295_tmp[count+i];
			
			// LOOP 0x35d0a40
			// pre processing
			for (int i=0; i<4; i++) fRec297_tmp[i]=fRec297_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec297[i] = (fConst36 * ((fYec204[i] - fYec204[i-1]) + fRec297[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec297_perm[i]=fRec297_tmp[count+i];
			
			// LOOP 0x35d80d0
			// pre processing
			for (int i=0; i<4; i++) fRec299_tmp[i]=fRec299_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec299[i] = (fConst38 * ((fYec206[i] - fYec206[i-1]) + fRec299[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec299_perm[i]=fRec299_tmp[count+i];
			
			// SECTION : 36
			// LOOP 0x34a2090
			// pre processing
			for (int i=0; i<4; i++) fRec269_tmp[i]=fRec269_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec269[i] = (fConst21 * ((fZec284[i] - (fZec283[i] + fYec186[i-1])) + fRec269[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec269_perm[i]=fRec269_tmp[count+i];
			
			// LOOP 0x352b9e0
			// pre processing
			for (int i=0; i<4; i++) fYec196_tmp[i]=fYec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec196[i] = (fZec331[i] - fZec301[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec196_perm[i]=fYec196_tmp[count+i];
			
			// LOOP 0x35a66b0
			// pre processing
			for (int i=0; i<4; i++) fRec284_tmp[i]=fRec284_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec284[i] = ((fConst26 * ((int((fRec285[i] > 0.5f)))?((int((fRec285[i-1] < 0.5f)))?1.0f:0.0f):0.0f)) + (fConst27 * fRec284[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec284_perm[i]=fRec284_tmp[count+i];
			
			// LOOP 0x35c1970
			// pre processing
			for (int i=0; i<4; i++) fYec201_tmp[i]=fYec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec201[i] = ((fSlow107 * fZec278[i]) + (0.5416666666666667f * fRec293[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec201_perm[i]=fYec201_tmp[count+i];
			
			// LOOP 0x35c92e0
			// pre processing
			for (int i=0; i<4; i++) fYec203_tmp[i]=fYec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec203[i] = ((fSlow110 * fZec262[i]) + (0.5416666666666667f * fRec295[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec203_perm[i]=fYec203_tmp[count+i];
			
			// LOOP 0x35d0930
			// pre processing
			for (int i=0; i<4; i++) fYec205_tmp[i]=fYec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec205[i] = ((fSlow113 * fZec281[i]) + (0.5416666666666667f * fRec297[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec205_perm[i]=fYec205_tmp[count+i];
			
			// LOOP 0x35d7fc0
			// pre processing
			for (int i=0; i<4; i++) fYec207_tmp[i]=fYec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec207[i] = ((fSlow116 * fZec300[i]) + (0.5416666666666667f * fRec299[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec207_perm[i]=fYec207_tmp[count+i];
			
			// LOOP 0x35e3300
			// pre processing
			for (int i=0; i<4; i++) fRec301_tmp[i]=fRec301_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec301[i] = (fRec301[i-1] + (fConst12 * (fYec200[i] - fRec301[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec301_perm[i]=fRec301_tmp[count+i];
			
			// LOOP 0x35e4fd0
			// pre processing
			for (int i=0; i<4; i++) fRec303_tmp[i]=fRec303_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec303[i] = (fRec303[i-1] + (fConst14 * (fYec202[i] - fRec303[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec303_perm[i]=fRec303_tmp[count+i];
			
			// LOOP 0x35e6ef0
			// pre processing
			for (int i=0; i<4; i++) fRec305_tmp[i]=fRec305_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec305[i] = (fRec305[i-1] + (fConst17 * (fYec204[i] - fRec305[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec305_perm[i]=fRec305_tmp[count+i];
			
			// LOOP 0x35e8cf0
			// pre processing
			for (int i=0; i<4; i++) fRec307_tmp[i]=fRec307_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec307[i] = (fRec307[i-1] + (fConst20 * (fYec206[i] - fRec307[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec307_perm[i]=fRec307_tmp[count+i];
			
			// SECTION : 37
			// LOOP 0x34a1f80
			// exec code
			for (int i=0; i<count; i++) {
				fZec285[i] = (fRec269[i] * fSlow1);
			}
			
			// LOOP 0x352b5a0
			// pre processing
			for (int i=0; i<4; i++) fRec282_tmp[i]=fRec282_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec282[i] = (fConst21 * ((fZec331[i] - (fZec301[i] + fYec196[i-1])) + fRec282[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec282_perm[i]=fRec282_tmp[count+i];
			
			// LOOP 0x356f4b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec335[i] = (fZec332[i] + fZec334[i]);
			}
			
			// LOOP 0x35a6560
			// pre processing
			for (int i=0; i<4; i++) fYec199_tmp[i]=fYec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec199[i] = min(1.0f, (fConst30 * fRec284[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec199_perm[i]=fYec199_tmp[count+i];
			
			// LOOP 0x35b6560
			// pre processing
			for (int i=0; i<4; i++) fRec290_tmp[i]=fRec290_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec290[i] = (fSlow100 + (0.98f * fRec290[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec290_perm[i]=fRec290_tmp[count+i];
			
			// LOOP 0x35b9750
			// pre processing
			for (int i=0; i<4; i++) fRec291_tmp[i]=fRec291_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec291[i] = (fRec291[i-1] + (fConst31 * ((fSlow35 * ((fSlow104 * (((0.25f * fZec275[i]) + (0.125f * fZec210[i])) + (0.0625f * fZec279[i]))) + (fSlow102 * ((0.25f * fZec210[i]) + (0.125f * fZec279[i]))))) - fRec291[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec291_perm[i]=fRec291_tmp[count+i];
			
			// LOOP 0x35c1480
			// pre processing
			for (int i=0; i<4; i++) fRec292_tmp[i]=fRec292_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec292[i] = (fConst33 * ((fYec201[i] - fYec201[i-1]) + fRec292[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec292_perm[i]=fRec292_tmp[count+i];
			
			// LOOP 0x35c8e60
			// pre processing
			for (int i=0; i<4; i++) fRec294_tmp[i]=fRec294_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec294[i] = (fConst35 * ((fYec203[i] - fYec203[i-1]) + fRec294[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec294_perm[i]=fRec294_tmp[count+i];
			
			// LOOP 0x35d04b0
			// pre processing
			for (int i=0; i<4; i++) fRec296_tmp[i]=fRec296_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec296[i] = (fConst37 * ((fYec205[i] - fYec205[i-1]) + fRec296[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec296_perm[i]=fRec296_tmp[count+i];
			
			// LOOP 0x35d7b40
			// pre processing
			for (int i=0; i<4; i++) fRec298_tmp[i]=fRec298_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec298[i] = (fConst39 * ((fYec207[i] - fYec207[i-1]) + fRec298[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec298_perm[i]=fRec298_tmp[count+i];
			
			// LOOP 0x35e2ea0
			// pre processing
			for (int i=0; i<4; i++) fRec300_tmp[i]=fRec300_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec300[i] = (fRec300[i-1] + (fConst12 * (fRec301[i] - fRec300[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec300_perm[i]=fRec300_tmp[count+i];
			
			// LOOP 0x35e4c30
			// pre processing
			for (int i=0; i<4; i++) fRec302_tmp[i]=fRec302_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec302[i] = (fRec302[i-1] + (fConst14 * (fRec303[i] - fRec302[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec302_perm[i]=fRec302_tmp[count+i];
			
			// LOOP 0x35e6a40
			// pre processing
			for (int i=0; i<4; i++) fRec304_tmp[i]=fRec304_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec304[i] = (fRec304[i-1] + (fConst17 * (fRec305[i] - fRec304[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec304_perm[i]=fRec304_tmp[count+i];
			
			// LOOP 0x35e8840
			// pre processing
			for (int i=0; i<4; i++) fRec306_tmp[i]=fRec306_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec306[i] = (fRec306[i-1] + (fConst20 * (fRec307[i] - fRec306[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec306_perm[i]=fRec306_tmp[count+i];
			
			// LOOP 0x35ebdf0
			// pre processing
			for (int i=0; i<4; i++) fRec308_tmp[i]=fRec308_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec308[i] = (fSlow121 + (0.98f * fRec308[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec308_perm[i]=fRec308_tmp[count+i];
			
			// SECTION : 38
			// LOOP 0x31a2c30
			// exec code
			for (int i=0; i<count; i++) {
				fZec336[i] = (fSlow97 * ((fSlow95 * fZec335[i]) + ((fSlow93 * (fZec301[i] + (0.002f * (fRec282[i] * fSlow1)))) + ((fSlow90 * fZec300[i]) + ((fSlow88 * (fZec283[i] + (0.002f * fZec285[i]))) + ((fSlow86 * fZec281[i]) + ((fSlow84 * fZec278[i]) + (fSlow82 * fZec262[i]))))))));
			}
			
			// LOOP 0x35a5020
			// exec code
			for (int i=0; i<count; i++) {
				fZec341[i] = (fSlow99 * (max(fSlow98, (0.25f * (fYec199[i-4] + (fYec199[i-3] + (fYec199[i] + fYec199[i-2]))))) * ((0.5f * fZec278[i]) + (0.25f * ((fZec335[i] + fZec282[i]) + (0.008f * fZec285[i]))))));
			}
			
			// LOOP 0x35b6450
			// exec code
			for (int i=0; i<count; i++) {
				fZec342[i] = (fRec291[i] * (0.5f + (4.5f * fRec290[i])));
			}
			
			// LOOP 0x35c1370
			// exec code
			for (int i=0; i<count; i++) {
				fZec343[i] = (fSlow120 * ((fSlow119 * (((fRec306[i] + fRec304[i]) + fRec302[i]) + fRec300[i])) + (fSlow118 * (((fRec298[i] + fRec296[i]) + fRec294[i]) + fRec292[i]))));
			}
			
			// LOOP 0x35ebce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec344[i] = (0.001f + (0.05f * fRec308[i]));
			}
			
			// SECTION : 39
			// LOOP 0x31a2ac0
			// exec code
			for (int i=0; i<count; i++) {
				output0[i] = (FAUSTFLOAT)(fZec344[i] * ((fZec343[i] + (fZec342[i] + fZec341[i])) + fZec336[i]));
			}
			
			// LOOP 0x35f0740
			// exec code
			for (int i=0; i<count; i++) {
				output1[i] = (FAUSTFLOAT)(fZec344[i] * (fZec336[i] + (fZec341[i] + fZec343[i])));
			}
			
			// LOOP 0x35f0d80
			// exec code
			for (int i=0; i<count; i++) {
				output2[i] = (FAUSTFLOAT)(fZec342[i] * fZec344[i]);
			}
			
		}
	}
};


