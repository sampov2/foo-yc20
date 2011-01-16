//-----------------------------------------------------
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
	float 	fYec5_perm[4];
	float 	fConst2;
	float 	fRec2_perm[4];
	float 	fConst3;
	float 	fConst4;
	float 	fRec1_perm[4];
	FAUSTFLOAT 	fbutton1;
	float 	fVec1_perm[4];
	float 	fRec13_perm[4];
	int 	iRec12_perm[4];
	float 	fYec6_perm[4];
	int 	iRec14_perm[4];
	float 	fYec7_perm[4];
	int 	iRec15_perm[4];
	float 	fYec8_perm[4];
	int 	iRec16_perm[4];
	float 	fYec9_perm[4];
	int 	iRec17_perm[4];
	float 	fYec10_perm[4];
	float 	fYec11_perm[4];
	float 	fConst5;
	float 	fRec11_perm[4];
	float 	fRec10_perm[4];
	FAUSTFLOAT 	fbutton2;
	float 	fVec2_perm[4];
	float 	fRec21_perm[4];
	int 	iRec20_perm[4];
	float 	fYec12_perm[4];
	int 	iRec22_perm[4];
	float 	fYec13_perm[4];
	int 	iRec23_perm[4];
	float 	fYec14_perm[4];
	int 	iRec24_perm[4];
	float 	fYec15_perm[4];
	int 	iRec25_perm[4];
	float 	fYec16_perm[4];
	float 	fYec17_perm[4];
	float 	fRec19_perm[4];
	float 	fRec18_perm[4];
	FAUSTFLOAT 	fbutton3;
	float 	fVec3_perm[4];
	float 	fRec29_perm[4];
	int 	iRec28_perm[4];
	float 	fYec18_perm[4];
	int 	iRec30_perm[4];
	float 	fYec19_perm[4];
	int 	iRec31_perm[4];
	float 	fYec20_perm[4];
	int 	iRec32_perm[4];
	float 	fYec21_perm[4];
	int 	iRec33_perm[4];
	float 	fYec22_perm[4];
	float 	fYec23_perm[4];
	float 	fRec27_perm[4];
	float 	fRec26_perm[4];
	FAUSTFLOAT 	fbutton4;
	float 	fVec4_perm[4];
	float 	fRec37_perm[4];
	int 	iRec36_perm[4];
	float 	fYec24_perm[4];
	int 	iRec38_perm[4];
	float 	fYec25_perm[4];
	int 	iRec39_perm[4];
	float 	fYec26_perm[4];
	int 	iRec40_perm[4];
	float 	fYec27_perm[4];
	int 	iRec41_perm[4];
	float 	fYec28_perm[4];
	float 	fYec29_perm[4];
	float 	fRec35_perm[4];
	float 	fRec34_perm[4];
	FAUSTFLOAT 	fbutton5;
	float 	fVec5_perm[4];
	float 	fRec45_perm[4];
	int 	iRec44_perm[4];
	float 	fYec30_perm[4];
	int 	iRec46_perm[4];
	float 	fYec31_perm[4];
	int 	iRec47_perm[4];
	float 	fYec32_perm[4];
	int 	iRec48_perm[4];
	float 	fYec33_perm[4];
	float 	fYec34_perm[4];
	float 	fConst6;
	float 	fRec43_perm[4];
	float 	fConst7;
	float 	fRec42_perm[4];
	FAUSTFLOAT 	fbutton6;
	float 	fVec6_perm[4];
	float 	fRec52_perm[4];
	int 	iRec51_perm[4];
	float 	fYec35_perm[4];
	int 	iRec53_perm[4];
	float 	fYec36_perm[4];
	int 	iRec54_perm[4];
	float 	fYec37_perm[4];
	int 	iRec55_perm[4];
	float 	fYec38_perm[4];
	float 	fYec39_perm[4];
	float 	fRec50_perm[4];
	float 	fRec49_perm[4];
	FAUSTFLOAT 	fbutton7;
	float 	fVec7_perm[4];
	float 	fRec59_perm[4];
	int 	iRec58_perm[4];
	float 	fYec40_perm[4];
	int 	iRec60_perm[4];
	float 	fYec41_perm[4];
	int 	iRec61_perm[4];
	float 	fYec42_perm[4];
	int 	iRec62_perm[4];
	float 	fYec43_perm[4];
	float 	fYec44_perm[4];
	float 	fRec57_perm[4];
	float 	fRec56_perm[4];
	FAUSTFLOAT 	fbutton8;
	float 	fVec8_perm[4];
	float 	fRec66_perm[4];
	int 	iRec65_perm[4];
	float 	fYec45_perm[4];
	int 	iRec67_perm[4];
	float 	fYec46_perm[4];
	int 	iRec68_perm[4];
	float 	fYec47_perm[4];
	int 	iRec69_perm[4];
	float 	fYec48_perm[4];
	float 	fYec49_perm[4];
	float 	fRec64_perm[4];
	float 	fRec63_perm[4];
	FAUSTFLOAT 	fbutton9;
	float 	fVec9_perm[4];
	float 	fRec73_perm[4];
	int 	iRec72_perm[4];
	float 	fYec50_perm[4];
	int 	iRec74_perm[4];
	float 	fYec51_perm[4];
	int 	iRec75_perm[4];
	float 	fYec52_perm[4];
	int 	iRec76_perm[4];
	float 	fYec53_perm[4];
	float 	fYec54_perm[4];
	float 	fConst8;
	float 	fRec71_perm[4];
	float 	fRec70_perm[4];
	FAUSTFLOAT 	fbutton10;
	float 	fVec10_perm[4];
	float 	fRec80_perm[4];
	int 	iRec79_perm[4];
	float 	fYec55_perm[4];
	int 	iRec81_perm[4];
	float 	fYec56_perm[4];
	int 	iRec82_perm[4];
	float 	fYec57_perm[4];
	int 	iRec83_perm[4];
	float 	fYec58_perm[4];
	float 	fYec59_perm[4];
	float 	fRec78_perm[4];
	float 	fRec77_perm[4];
	FAUSTFLOAT 	fbutton11;
	float 	fVec11_perm[4];
	float 	fRec87_perm[4];
	int 	iRec86_perm[4];
	float 	fYec60_perm[4];
	int 	iRec88_perm[4];
	float 	fYec61_perm[4];
	int 	iRec89_perm[4];
	float 	fYec62_perm[4];
	int 	iRec90_perm[4];
	float 	fYec63_perm[4];
	float 	fYec64_perm[4];
	float 	fRec85_perm[4];
	float 	fRec84_perm[4];
	FAUSTFLOAT 	fbutton12;
	float 	fVec12_perm[4];
	float 	fYec65_perm[4];
	float 	fRec92_perm[4];
	float 	fRec91_perm[4];
	FAUSTFLOAT 	fbutton13;
	float 	fVec13_perm[4];
	float 	fYec66_perm[4];
	float 	fConst9;
	float 	fRec94_perm[4];
	float 	fRec93_perm[4];
	FAUSTFLOAT 	fbutton14;
	float 	fVec14_perm[4];
	float 	fYec67_perm[4];
	float 	fRec96_perm[4];
	float 	fRec95_perm[4];
	FAUSTFLOAT 	fbutton15;
	float 	fVec15_perm[4];
	float 	fYec68_perm[4];
	float 	fRec98_perm[4];
	float 	fRec97_perm[4];
	FAUSTFLOAT 	fbutton16;
	float 	fVec16_perm[4];
	float 	fYec69_perm[4];
	float 	fRec100_perm[4];
	float 	fRec99_perm[4];
	FAUSTFLOAT 	fslider4;
	FAUSTFLOAT 	fbutton17;
	float 	fVec17_perm[4];
	float 	fYec70_perm[4];
	float 	fConst10;
	float 	fRec102_perm[4];
	float 	fRec101_perm[4];
	FAUSTFLOAT 	fbutton18;
	float 	fVec18_perm[4];
	float 	fYec71_perm[4];
	float 	fRec104_perm[4];
	float 	fRec103_perm[4];
	FAUSTFLOAT 	fbutton19;
	float 	fVec19_perm[4];
	float 	fYec72_perm[4];
	float 	fRec106_perm[4];
	float 	fRec105_perm[4];
	FAUSTFLOAT 	fbutton20;
	float 	fVec20_perm[4];
	float 	fYec73_perm[4];
	float 	fRec108_perm[4];
	float 	fRec107_perm[4];
	FAUSTFLOAT 	fbutton21;
	float 	fVec21_perm[4];
	float 	fYec74_perm[4];
	float 	fConst11;
	float 	fRec110_perm[4];
	float 	fRec109_perm[4];
	FAUSTFLOAT 	fbutton22;
	float 	fVec22_perm[4];
	float 	fYec75_perm[4];
	float 	fRec112_perm[4];
	float 	fRec111_perm[4];
	FAUSTFLOAT 	fbutton23;
	float 	fVec23_perm[4];
	float 	fYec76_perm[4];
	float 	fRec114_perm[4];
	float 	fRec113_perm[4];
	FAUSTFLOAT 	fbutton24;
	float 	fVec24_perm[4];
	float 	fYec77_perm[4];
	float 	fRec116_perm[4];
	float 	fRec115_perm[4];
	FAUSTFLOAT 	fbutton25;
	float 	fVec25_perm[4];
	float 	fYec78_perm[4];
	float 	fConst12;
	float 	fRec118_perm[4];
	float 	fRec117_perm[4];
	FAUSTFLOAT 	fbutton26;
	float 	fVec26_perm[4];
	float 	fYec79_perm[4];
	float 	fRec120_perm[4];
	float 	fRec119_perm[4];
	FAUSTFLOAT 	fbutton27;
	float 	fVec27_perm[4];
	float 	fYec80_perm[4];
	float 	fRec122_perm[4];
	float 	fRec121_perm[4];
	FAUSTFLOAT 	fbutton28;
	float 	fVec28_perm[4];
	float 	fYec81_perm[4];
	float 	fRec124_perm[4];
	float 	fRec123_perm[4];
	FAUSTFLOAT 	fbutton29;
	float 	fVec29_perm[4];
	float 	fYec82_perm[4];
	float 	fConst13;
	float 	fRec126_perm[4];
	float 	fRec125_perm[4];
	FAUSTFLOAT 	fbutton30;
	float 	fVec30_perm[4];
	float 	fYec83_perm[4];
	float 	fRec128_perm[4];
	float 	fRec127_perm[4];
	FAUSTFLOAT 	fbutton31;
	float 	fVec31_perm[4];
	float 	fYec84_perm[4];
	float 	fRec130_perm[4];
	float 	fRec129_perm[4];
	FAUSTFLOAT 	fbutton32;
	float 	fVec32_perm[4];
	float 	fYec85_perm[4];
	float 	fRec132_perm[4];
	float 	fRec131_perm[4];
	FAUSTFLOAT 	fbutton33;
	float 	fVec33_perm[4];
	float 	fYec86_perm[4];
	float 	fConst14;
	float 	fRec134_perm[4];
	float 	fRec133_perm[4];
	FAUSTFLOAT 	fbutton34;
	float 	fVec34_perm[4];
	float 	fYec87_perm[4];
	float 	fRec136_perm[4];
	float 	fRec135_perm[4];
	FAUSTFLOAT 	fbutton35;
	float 	fVec35_perm[4];
	float 	fYec88_perm[4];
	float 	fRec138_perm[4];
	float 	fRec137_perm[4];
	FAUSTFLOAT 	fbutton36;
	float 	fVec36_perm[4];
	float 	fYec89_perm[4];
	float 	fRec140_perm[4];
	float 	fRec139_perm[4];
	FAUSTFLOAT 	fbutton37;
	float 	fVec37_perm[4];
	float 	fYec90_perm[4];
	float 	fConst15;
	float 	fRec142_perm[4];
	float 	fRec141_perm[4];
	FAUSTFLOAT 	fbutton38;
	float 	fVec38_perm[4];
	float 	fYec91_perm[4];
	float 	fRec144_perm[4];
	float 	fRec143_perm[4];
	FAUSTFLOAT 	fbutton39;
	float 	fVec39_perm[4];
	float 	fYec92_perm[4];
	float 	fRec146_perm[4];
	float 	fRec145_perm[4];
	FAUSTFLOAT 	fbutton40;
	float 	fVec40_perm[4];
	float 	fYec93_perm[4];
	float 	fRec148_perm[4];
	float 	fRec147_perm[4];
	FAUSTFLOAT 	fbutton41;
	float 	fVec41_perm[4];
	float 	fYec94_perm[4];
	float 	fConst16;
	float 	fRec150_perm[4];
	float 	fRec149_perm[4];
	FAUSTFLOAT 	fbutton42;
	float 	fVec42_perm[4];
	float 	fYec95_perm[4];
	float 	fRec152_perm[4];
	float 	fRec151_perm[4];
	FAUSTFLOAT 	fbutton43;
	float 	fVec43_perm[4];
	float 	fYec96_perm[4];
	float 	fRec154_perm[4];
	float 	fRec153_perm[4];
	FAUSTFLOAT 	fbutton44;
	float 	fVec44_perm[4];
	float 	fYec97_perm[4];
	float 	fRec156_perm[4];
	float 	fRec155_perm[4];
	FAUSTFLOAT 	fbutton45;
	float 	fVec45_perm[4];
	float 	fYec98_perm[4];
	float 	fConst17;
	float 	fRec158_perm[4];
	float 	fRec157_perm[4];
	FAUSTFLOAT 	fbutton46;
	float 	fVec46_perm[4];
	float 	fYec99_perm[4];
	float 	fRec160_perm[4];
	float 	fRec159_perm[4];
	FAUSTFLOAT 	fbutton47;
	float 	fVec47_perm[4];
	float 	fYec100_perm[4];
	float 	fRec162_perm[4];
	float 	fRec161_perm[4];
	FAUSTFLOAT 	fbutton48;
	float 	fVec48_perm[4];
	float 	fYec101_perm[4];
	float 	fRec164_perm[4];
	float 	fRec163_perm[4];
	FAUSTFLOAT 	fbutton49;
	float 	fVec49_perm[4];
	float 	fYec102_perm[4];
	float 	fConst18;
	float 	fRec166_perm[4];
	float 	fRec165_perm[4];
	FAUSTFLOAT 	fbutton50;
	float 	fVec50_perm[4];
	float 	fYec103_perm[4];
	float 	fRec168_perm[4];
	float 	fRec167_perm[4];
	FAUSTFLOAT 	fbutton51;
	float 	fVec51_perm[4];
	float 	fYec104_perm[4];
	float 	fRec170_perm[4];
	float 	fRec169_perm[4];
	FAUSTFLOAT 	fbutton52;
	float 	fVec52_perm[4];
	float 	fYec105_perm[4];
	float 	fRec172_perm[4];
	float 	fRec171_perm[4];
	FAUSTFLOAT 	fbutton53;
	float 	fVec53_perm[4];
	float 	fYec106_perm[4];
	float 	fYec107_perm[4];
	float 	fRec173_perm[4];
	FAUSTFLOAT 	fbutton54;
	float 	fVec54_perm[4];
	float 	fYec108_perm[4];
	float 	fYec109_perm[4];
	float 	fRec174_perm[4];
	FAUSTFLOAT 	fbutton55;
	float 	fVec55_perm[4];
	float 	fYec110_perm[4];
	float 	fYec111_perm[4];
	float 	fRec175_perm[4];
	FAUSTFLOAT 	fbutton56;
	float 	fVec56_perm[4];
	float 	fYec112_perm[4];
	float 	fYec113_perm[4];
	float 	fRec176_perm[4];
	FAUSTFLOAT 	fbutton57;
	float 	fVec57_perm[4];
	float 	fYec114_perm[4];
	float 	fYec115_perm[4];
	float 	fRec177_perm[4];
	FAUSTFLOAT 	fbutton58;
	float 	fVec58_perm[4];
	float 	fYec116_perm[4];
	float 	fYec117_perm[4];
	float 	fRec178_perm[4];
	FAUSTFLOAT 	fbutton59;
	float 	fVec59_perm[4];
	float 	fYec118_perm[4];
	float 	fYec119_perm[4];
	float 	fRec179_perm[4];
	FAUSTFLOAT 	fbutton60;
	float 	fVec60_perm[4];
	float 	fYec120_perm[4];
	float 	fYec121_perm[4];
	float 	fRec180_perm[4];
	float 	fYec122_perm[4];
	float 	fConst19;
	float 	fRec0_perm[4];
	float 	fYec123_perm[4];
	float 	fYec124_perm[4];
	float 	fRec182_perm[4];
	float 	fYec125_perm[4];
	float 	fYec126_perm[4];
	float 	fRec183_perm[4];
	float 	fYec127_perm[4];
	float 	fYec128_perm[4];
	float 	fRec184_perm[4];
	float 	fYec129_perm[4];
	float 	fYec130_perm[4];
	float 	fRec185_perm[4];
	float 	fYec131_perm[4];
	float 	fRec181_perm[4];
	int 	iRec189_perm[4];
	float 	fYec132_perm[4];
	int 	iRec190_perm[4];
	float 	fYec133_perm[4];
	int 	iRec191_perm[4];
	float 	fYec134_perm[4];
	float 	fYec135_perm[4];
	float 	fConst20;
	float 	fRec188_perm[4];
	float 	fConst21;
	float 	fRec187_perm[4];
	int 	iRec194_perm[4];
	float 	fYec136_perm[4];
	int 	iRec195_perm[4];
	float 	fYec137_perm[4];
	int 	iRec196_perm[4];
	float 	fYec138_perm[4];
	float 	fYec139_perm[4];
	float 	fRec193_perm[4];
	float 	fRec192_perm[4];
	int 	iRec199_perm[4];
	float 	fYec140_perm[4];
	int 	iRec200_perm[4];
	float 	fYec141_perm[4];
	int 	iRec201_perm[4];
	float 	fYec142_perm[4];
	float 	fYec143_perm[4];
	float 	fRec198_perm[4];
	float 	fRec197_perm[4];
	int 	iRec204_perm[4];
	float 	fYec144_perm[4];
	int 	iRec205_perm[4];
	float 	fYec145_perm[4];
	int 	iRec206_perm[4];
	float 	fYec146_perm[4];
	float 	fYec147_perm[4];
	float 	fRec203_perm[4];
	float 	fRec202_perm[4];
	int 	iRec209_perm[4];
	float 	fYec148_perm[4];
	int 	iRec210_perm[4];
	float 	fYec149_perm[4];
	int 	iRec211_perm[4];
	float 	fYec150_perm[4];
	float 	fYec151_perm[4];
	float 	fRec208_perm[4];
	float 	fRec207_perm[4];
	int 	iRec214_perm[4];
	float 	fYec152_perm[4];
	int 	iRec215_perm[4];
	float 	fYec153_perm[4];
	int 	iRec216_perm[4];
	float 	fYec154_perm[4];
	float 	fYec155_perm[4];
	float 	fRec213_perm[4];
	float 	fRec212_perm[4];
	int 	iRec219_perm[4];
	float 	fYec156_perm[4];
	int 	iRec220_perm[4];
	float 	fYec157_perm[4];
	int 	iRec221_perm[4];
	float 	fYec158_perm[4];
	float 	fYec159_perm[4];
	float 	fRec218_perm[4];
	float 	fRec217_perm[4];
	int 	iRec224_perm[4];
	float 	fYec160_perm[4];
	int 	iRec225_perm[4];
	float 	fYec161_perm[4];
	float 	fYec162_perm[4];
	float 	fRec223_perm[4];
	float 	fRec222_perm[4];
	int 	iRec228_perm[4];
	float 	fYec163_perm[4];
	int 	iRec229_perm[4];
	float 	fYec164_perm[4];
	float 	fYec165_perm[4];
	float 	fConst22;
	float 	fRec227_perm[4];
	float 	fRec226_perm[4];
	int 	iRec232_perm[4];
	float 	fYec166_perm[4];
	int 	iRec233_perm[4];
	float 	fYec167_perm[4];
	float 	fYec168_perm[4];
	float 	fRec231_perm[4];
	float 	fRec230_perm[4];
	int 	iRec236_perm[4];
	float 	fYec169_perm[4];
	int 	iRec237_perm[4];
	float 	fYec170_perm[4];
	float 	fYec171_perm[4];
	float 	fRec235_perm[4];
	float 	fRec234_perm[4];
	int 	iRec240_perm[4];
	float 	fYec172_perm[4];
	int 	iRec241_perm[4];
	float 	fYec173_perm[4];
	float 	fYec174_perm[4];
	float 	fRec239_perm[4];
	float 	fRec238_perm[4];
	float 	fYec175_perm[4];
	float 	fRec243_perm[4];
	float 	fConst23;
	float 	fRec242_perm[4];
	float 	fYec176_perm[4];
	float 	fRec245_perm[4];
	float 	fRec244_perm[4];
	float 	fYec177_perm[4];
	float 	fRec247_perm[4];
	float 	fRec246_perm[4];
	float 	fYec178_perm[4];
	float 	fRec249_perm[4];
	float 	fRec248_perm[4];
	float 	fYec179_perm[4];
	float 	fConst24;
	float 	fRec251_perm[4];
	float 	fRec250_perm[4];
	float 	fYec180_perm[4];
	float 	fRec253_perm[4];
	float 	fRec252_perm[4];
	float 	fYec181_perm[4];
	float 	fRec255_perm[4];
	float 	fRec254_perm[4];
	float 	fYec182_perm[4];
	float 	fRec257_perm[4];
	float 	fRec256_perm[4];
	float 	fYec183_perm[4];
	float 	fConst25;
	float 	fRec259_perm[4];
	float 	fRec258_perm[4];
	float 	fYec184_perm[4];
	float 	fRec261_perm[4];
	float 	fRec260_perm[4];
	float 	fYec185_perm[4];
	float 	fRec263_perm[4];
	float 	fRec262_perm[4];
	float 	fYec186_perm[4];
	float 	fRec265_perm[4];
	float 	fRec264_perm[4];
	float 	fYec187_perm[4];
	float 	fRec267_perm[4];
	float 	fRec266_perm[4];
	float 	fYec188_perm[4];
	float 	fRec269_perm[4];
	float 	fRec268_perm[4];
	float 	fYec189_perm[4];
	float 	fRec271_perm[4];
	float 	fRec270_perm[4];
	float 	fYec190_perm[4];
	float 	fRec273_perm[4];
	float 	fRec272_perm[4];
	float 	fYec191_perm[4];
	float 	fRec275_perm[4];
	float 	fRec274_perm[4];
	float 	fYec192_perm[4];
	float 	fRec277_perm[4];
	float 	fRec276_perm[4];
	float 	fYec193_perm[4];
	float 	fRec279_perm[4];
	float 	fRec278_perm[4];
	float 	fYec194_perm[4];
	float 	fRec186_perm[4];
	float 	fConst26;
	float 	fConst27;
	int 	iRec285_perm[4];
	int 	iConst28;
	float 	fRec282_perm[4];
	int 	iRec283_perm[4];
	float 	fRec284_perm[4];
	float 	fConst29;
	float 	fYec195_perm[4];
	float 	fRec281_perm[4];
	float 	fRec280_perm[4];
	float 	fConst30;
	float 	fYec196_perm[4];
	FAUSTFLOAT 	fslider5;
	FAUSTFLOAT 	fslider6;
	float 	fRec286_perm[4];
	FAUSTFLOAT 	fslider7;
	FAUSTFLOAT 	fslider8;
	float 	fConst31;
	float 	fRec287_perm[4];
	FAUSTFLOAT 	fslider9;
	float 	fYec197_perm[4];
	float 	fConst32;
	float 	fRec289_perm[4];
	float 	fYec198_perm[4];
	float 	fConst33;
	float 	fRec288_perm[4];
	float 	fYec199_perm[4];
	float 	fRec292_perm[4];
	FAUSTFLOAT 	fslider10;
	float 	fYec200_perm[4];
	float 	fConst34;
	float 	fRec291_perm[4];
	float 	fYec201_perm[4];
	float 	fConst35;
	float 	fRec290_perm[4];
	float 	fYec202_perm[4];
	float 	fRec295_perm[4];
	FAUSTFLOAT 	fslider11;
	float 	fYec203_perm[4];
	float 	fConst36;
	float 	fRec294_perm[4];
	float 	fYec204_perm[4];
	float 	fConst37;
	float 	fRec293_perm[4];
	float 	fYec205_perm[4];
	float 	fRec298_perm[4];
	FAUSTFLOAT 	fslider12;
	float 	fYec206_perm[4];
	float 	fConst38;
	float 	fRec297_perm[4];
	float 	fYec207_perm[4];
	float 	fConst39;
	float 	fRec296_perm[4];
	FAUSTFLOAT 	fslider13;
	float 	fRec300_perm[4];
	float 	fRec299_perm[4];
	float 	fRec302_perm[4];
	float 	fRec301_perm[4];
	float 	fRec304_perm[4];
	float 	fRec303_perm[4];
	float 	fRec306_perm[4];
	float 	fRec305_perm[4];
	FAUSTFLOAT 	fslider14;
	FAUSTFLOAT 	fslider15;
	FAUSTFLOAT 	fslider16;
	FAUSTFLOAT 	fslider17;
	FAUSTFLOAT 	fslider18;
	FAUSTFLOAT 	fslider19;
	float 	fYec208_perm[4];
	float 	fRec307_perm[4];
	FAUSTFLOAT 	fslider20;
	FAUSTFLOAT 	fslider21;
	FAUSTFLOAT 	fslider22;
	float 	fRec308_perm[4];
  public:
	static void metadata(Meta* m) 	{ 
		m->declare("yc20.dsp/name", "Foo YC-20 simulation");
		m->declare("yc20.dsp/author", "Sampo Savolainen");
		m->declare("yc20.dsp/license", "GPLv3");
		m->declare("yc20.dsp/copyright", "(c)Sampo Savolainen 2009");
	}

	virtual int getNumInputs() 	{ return 0; }
	virtual int getNumOutputs() 	{ return 2; }
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
		for (int i=0; i<4; i++) fYec5_perm[i]=0;
		fConst2 = (1470.5882352941176f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec2_perm[i]=0;
		fConst3 = (1.0f / fSamplingFreq);
		fConst4 = (0.003596453201970443f / (fConst3 + 0.003596453201970443f));
		for (int i=0; i<4; i++) fRec1_perm[i]=0;
		fbutton1 = 0.0;
		for (int i=0; i<4; i++) fVec1_perm[i]=0;
		for (int i=0; i<4; i++) fRec13_perm[i]=0;
		for (int i=0; i<4; i++) iRec12_perm[i]=0;
		for (int i=0; i<4; i++) fYec6_perm[i]=0;
		for (int i=0; i<4; i++) iRec14_perm[i]=0;
		for (int i=0; i<4; i++) fYec7_perm[i]=0;
		for (int i=0; i<4; i++) iRec15_perm[i]=0;
		for (int i=0; i<4; i++) fYec8_perm[i]=0;
		for (int i=0; i<4; i++) iRec16_perm[i]=0;
		for (int i=0; i<4; i++) fYec9_perm[i]=0;
		for (int i=0; i<4; i++) iRec17_perm[i]=0;
		for (int i=0; i<4; i++) fYec10_perm[i]=0;
		for (int i=0; i<4; i++) fYec11_perm[i]=0;
		fConst5 = (1785.7142857142858f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec11_perm[i]=0;
		for (int i=0; i<4; i++) fRec10_perm[i]=0;
		fbutton2 = 0.0;
		for (int i=0; i<4; i++) fVec2_perm[i]=0;
		for (int i=0; i<4; i++) fRec21_perm[i]=0;
		for (int i=0; i<4; i++) iRec20_perm[i]=0;
		for (int i=0; i<4; i++) fYec12_perm[i]=0;
		for (int i=0; i<4; i++) iRec22_perm[i]=0;
		for (int i=0; i<4; i++) fYec13_perm[i]=0;
		for (int i=0; i<4; i++) iRec23_perm[i]=0;
		for (int i=0; i<4; i++) fYec14_perm[i]=0;
		for (int i=0; i<4; i++) iRec24_perm[i]=0;
		for (int i=0; i<4; i++) fYec15_perm[i]=0;
		for (int i=0; i<4; i++) iRec25_perm[i]=0;
		for (int i=0; i<4; i++) fYec16_perm[i]=0;
		for (int i=0; i<4; i++) fYec17_perm[i]=0;
		for (int i=0; i<4; i++) fRec19_perm[i]=0;
		for (int i=0; i<4; i++) fRec18_perm[i]=0;
		fbutton3 = 0.0;
		for (int i=0; i<4; i++) fVec3_perm[i]=0;
		for (int i=0; i<4; i++) fRec29_perm[i]=0;
		for (int i=0; i<4; i++) iRec28_perm[i]=0;
		for (int i=0; i<4; i++) fYec18_perm[i]=0;
		for (int i=0; i<4; i++) iRec30_perm[i]=0;
		for (int i=0; i<4; i++) fYec19_perm[i]=0;
		for (int i=0; i<4; i++) iRec31_perm[i]=0;
		for (int i=0; i<4; i++) fYec20_perm[i]=0;
		for (int i=0; i<4; i++) iRec32_perm[i]=0;
		for (int i=0; i<4; i++) fYec21_perm[i]=0;
		for (int i=0; i<4; i++) iRec33_perm[i]=0;
		for (int i=0; i<4; i++) fYec22_perm[i]=0;
		for (int i=0; i<4; i++) fYec23_perm[i]=0;
		for (int i=0; i<4; i++) fRec27_perm[i]=0;
		for (int i=0; i<4; i++) fRec26_perm[i]=0;
		fbutton4 = 0.0;
		for (int i=0; i<4; i++) fVec4_perm[i]=0;
		for (int i=0; i<4; i++) fRec37_perm[i]=0;
		for (int i=0; i<4; i++) iRec36_perm[i]=0;
		for (int i=0; i<4; i++) fYec24_perm[i]=0;
		for (int i=0; i<4; i++) iRec38_perm[i]=0;
		for (int i=0; i<4; i++) fYec25_perm[i]=0;
		for (int i=0; i<4; i++) iRec39_perm[i]=0;
		for (int i=0; i<4; i++) fYec26_perm[i]=0;
		for (int i=0; i<4; i++) iRec40_perm[i]=0;
		for (int i=0; i<4; i++) fYec27_perm[i]=0;
		for (int i=0; i<4; i++) iRec41_perm[i]=0;
		for (int i=0; i<4; i++) fYec28_perm[i]=0;
		for (int i=0; i<4; i++) fYec29_perm[i]=0;
		for (int i=0; i<4; i++) fRec35_perm[i]=0;
		for (int i=0; i<4; i++) fRec34_perm[i]=0;
		fbutton5 = 0.0;
		for (int i=0; i<4; i++) fVec5_perm[i]=0;
		for (int i=0; i<4; i++) fRec45_perm[i]=0;
		for (int i=0; i<4; i++) iRec44_perm[i]=0;
		for (int i=0; i<4; i++) fYec30_perm[i]=0;
		for (int i=0; i<4; i++) iRec46_perm[i]=0;
		for (int i=0; i<4; i++) fYec31_perm[i]=0;
		for (int i=0; i<4; i++) iRec47_perm[i]=0;
		for (int i=0; i<4; i++) fYec32_perm[i]=0;
		for (int i=0; i<4; i++) iRec48_perm[i]=0;
		for (int i=0; i<4; i++) fYec33_perm[i]=0;
		for (int i=0; i<4; i++) fYec34_perm[i]=0;
		fConst6 = (2127.659574468085f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec43_perm[i]=0;
		fConst7 = (0.007374545454545454f / (fConst3 + 0.007374545454545454f));
		for (int i=0; i<4; i++) fRec42_perm[i]=0;
		fbutton6 = 0.0;
		for (int i=0; i<4; i++) fVec6_perm[i]=0;
		for (int i=0; i<4; i++) fRec52_perm[i]=0;
		for (int i=0; i<4; i++) iRec51_perm[i]=0;
		for (int i=0; i<4; i++) fYec35_perm[i]=0;
		for (int i=0; i<4; i++) iRec53_perm[i]=0;
		for (int i=0; i<4; i++) fYec36_perm[i]=0;
		for (int i=0; i<4; i++) iRec54_perm[i]=0;
		for (int i=0; i<4; i++) fYec37_perm[i]=0;
		for (int i=0; i<4; i++) iRec55_perm[i]=0;
		for (int i=0; i<4; i++) fYec38_perm[i]=0;
		for (int i=0; i<4; i++) fYec39_perm[i]=0;
		for (int i=0; i<4; i++) fRec50_perm[i]=0;
		for (int i=0; i<4; i++) fRec49_perm[i]=0;
		fbutton7 = 0.0;
		for (int i=0; i<4; i++) fVec7_perm[i]=0;
		for (int i=0; i<4; i++) fRec59_perm[i]=0;
		for (int i=0; i<4; i++) iRec58_perm[i]=0;
		for (int i=0; i<4; i++) fYec40_perm[i]=0;
		for (int i=0; i<4; i++) iRec60_perm[i]=0;
		for (int i=0; i<4; i++) fYec41_perm[i]=0;
		for (int i=0; i<4; i++) iRec61_perm[i]=0;
		for (int i=0; i<4; i++) fYec42_perm[i]=0;
		for (int i=0; i<4; i++) iRec62_perm[i]=0;
		for (int i=0; i<4; i++) fYec43_perm[i]=0;
		for (int i=0; i<4; i++) fYec44_perm[i]=0;
		for (int i=0; i<4; i++) fRec57_perm[i]=0;
		for (int i=0; i<4; i++) fRec56_perm[i]=0;
		fbutton8 = 0.0;
		for (int i=0; i<4; i++) fVec8_perm[i]=0;
		for (int i=0; i<4; i++) fRec66_perm[i]=0;
		for (int i=0; i<4; i++) iRec65_perm[i]=0;
		for (int i=0; i<4; i++) fYec45_perm[i]=0;
		for (int i=0; i<4; i++) iRec67_perm[i]=0;
		for (int i=0; i<4; i++) fYec46_perm[i]=0;
		for (int i=0; i<4; i++) iRec68_perm[i]=0;
		for (int i=0; i<4; i++) fYec47_perm[i]=0;
		for (int i=0; i<4; i++) iRec69_perm[i]=0;
		for (int i=0; i<4; i++) fYec48_perm[i]=0;
		for (int i=0; i<4; i++) fYec49_perm[i]=0;
		for (int i=0; i<4; i++) fRec64_perm[i]=0;
		for (int i=0; i<4; i++) fRec63_perm[i]=0;
		fbutton9 = 0.0;
		for (int i=0; i<4; i++) fVec9_perm[i]=0;
		for (int i=0; i<4; i++) fRec73_perm[i]=0;
		for (int i=0; i<4; i++) iRec72_perm[i]=0;
		for (int i=0; i<4; i++) fYec50_perm[i]=0;
		for (int i=0; i<4; i++) iRec74_perm[i]=0;
		for (int i=0; i<4; i++) fYec51_perm[i]=0;
		for (int i=0; i<4; i++) iRec75_perm[i]=0;
		for (int i=0; i<4; i++) fYec52_perm[i]=0;
		for (int i=0; i<4; i++) iRec76_perm[i]=0;
		for (int i=0; i<4; i++) fYec53_perm[i]=0;
		for (int i=0; i<4; i++) fYec54_perm[i]=0;
		fConst8 = (2564.102564102564f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec71_perm[i]=0;
		for (int i=0; i<4; i++) fRec70_perm[i]=0;
		fbutton10 = 0.0;
		for (int i=0; i<4; i++) fVec10_perm[i]=0;
		for (int i=0; i<4; i++) fRec80_perm[i]=0;
		for (int i=0; i<4; i++) iRec79_perm[i]=0;
		for (int i=0; i<4; i++) fYec55_perm[i]=0;
		for (int i=0; i<4; i++) iRec81_perm[i]=0;
		for (int i=0; i<4; i++) fYec56_perm[i]=0;
		for (int i=0; i<4; i++) iRec82_perm[i]=0;
		for (int i=0; i<4; i++) fYec57_perm[i]=0;
		for (int i=0; i<4; i++) iRec83_perm[i]=0;
		for (int i=0; i<4; i++) fYec58_perm[i]=0;
		for (int i=0; i<4; i++) fYec59_perm[i]=0;
		for (int i=0; i<4; i++) fRec78_perm[i]=0;
		for (int i=0; i<4; i++) fRec77_perm[i]=0;
		fbutton11 = 0.0;
		for (int i=0; i<4; i++) fVec11_perm[i]=0;
		for (int i=0; i<4; i++) fRec87_perm[i]=0;
		for (int i=0; i<4; i++) iRec86_perm[i]=0;
		for (int i=0; i<4; i++) fYec60_perm[i]=0;
		for (int i=0; i<4; i++) iRec88_perm[i]=0;
		for (int i=0; i<4; i++) fYec61_perm[i]=0;
		for (int i=0; i<4; i++) iRec89_perm[i]=0;
		for (int i=0; i<4; i++) fYec62_perm[i]=0;
		for (int i=0; i<4; i++) iRec90_perm[i]=0;
		for (int i=0; i<4; i++) fYec63_perm[i]=0;
		for (int i=0; i<4; i++) fYec64_perm[i]=0;
		for (int i=0; i<4; i++) fRec85_perm[i]=0;
		for (int i=0; i<4; i++) fRec84_perm[i]=0;
		fbutton12 = 0.0;
		for (int i=0; i<4; i++) fVec12_perm[i]=0;
		for (int i=0; i<4; i++) fYec65_perm[i]=0;
		for (int i=0; i<4; i++) fRec92_perm[i]=0;
		for (int i=0; i<4; i++) fRec91_perm[i]=0;
		fbutton13 = 0.0;
		for (int i=0; i<4; i++) fVec13_perm[i]=0;
		for (int i=0; i<4; i++) fYec66_perm[i]=0;
		fConst9 = (3703.703703703704f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec94_perm[i]=0;
		for (int i=0; i<4; i++) fRec93_perm[i]=0;
		fbutton14 = 0.0;
		for (int i=0; i<4; i++) fVec14_perm[i]=0;
		for (int i=0; i<4; i++) fYec67_perm[i]=0;
		for (int i=0; i<4; i++) fRec96_perm[i]=0;
		for (int i=0; i<4; i++) fRec95_perm[i]=0;
		fbutton15 = 0.0;
		for (int i=0; i<4; i++) fVec15_perm[i]=0;
		for (int i=0; i<4; i++) fYec68_perm[i]=0;
		for (int i=0; i<4; i++) fRec98_perm[i]=0;
		for (int i=0; i<4; i++) fRec97_perm[i]=0;
		fbutton16 = 0.0;
		for (int i=0; i<4; i++) fVec16_perm[i]=0;
		for (int i=0; i<4; i++) fYec69_perm[i]=0;
		for (int i=0; i<4; i++) fRec100_perm[i]=0;
		for (int i=0; i<4; i++) fRec99_perm[i]=0;
		fslider4 = 0.0f;
		fbutton17 = 0.0;
		for (int i=0; i<4; i++) fVec17_perm[i]=0;
		for (int i=0; i<4; i++) fYec70_perm[i]=0;
		fConst10 = (4545.454545454545f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec102_perm[i]=0;
		for (int i=0; i<4; i++) fRec101_perm[i]=0;
		fbutton18 = 0.0;
		for (int i=0; i<4; i++) fVec18_perm[i]=0;
		for (int i=0; i<4; i++) fYec71_perm[i]=0;
		for (int i=0; i<4; i++) fRec104_perm[i]=0;
		for (int i=0; i<4; i++) fRec103_perm[i]=0;
		fbutton19 = 0.0;
		for (int i=0; i<4; i++) fVec19_perm[i]=0;
		for (int i=0; i<4; i++) fYec72_perm[i]=0;
		for (int i=0; i<4; i++) fRec106_perm[i]=0;
		for (int i=0; i<4; i++) fRec105_perm[i]=0;
		fbutton20 = 0.0;
		for (int i=0; i<4; i++) fVec20_perm[i]=0;
		for (int i=0; i<4; i++) fYec73_perm[i]=0;
		for (int i=0; i<4; i++) fRec108_perm[i]=0;
		for (int i=0; i<4; i++) fRec107_perm[i]=0;
		fbutton21 = 0.0;
		for (int i=0; i<4; i++) fVec21_perm[i]=0;
		for (int i=0; i<4; i++) fYec74_perm[i]=0;
		fConst11 = (5555.555555555556f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec110_perm[i]=0;
		for (int i=0; i<4; i++) fRec109_perm[i]=0;
		fbutton22 = 0.0;
		for (int i=0; i<4; i++) fVec22_perm[i]=0;
		for (int i=0; i<4; i++) fYec75_perm[i]=0;
		for (int i=0; i<4; i++) fRec112_perm[i]=0;
		for (int i=0; i<4; i++) fRec111_perm[i]=0;
		fbutton23 = 0.0;
		for (int i=0; i<4; i++) fVec23_perm[i]=0;
		for (int i=0; i<4; i++) fYec76_perm[i]=0;
		for (int i=0; i<4; i++) fRec114_perm[i]=0;
		for (int i=0; i<4; i++) fRec113_perm[i]=0;
		fbutton24 = 0.0;
		for (int i=0; i<4; i++) fVec24_perm[i]=0;
		for (int i=0; i<4; i++) fYec77_perm[i]=0;
		for (int i=0; i<4; i++) fRec116_perm[i]=0;
		for (int i=0; i<4; i++) fRec115_perm[i]=0;
		fbutton25 = 0.0;
		for (int i=0; i<4; i++) fVec25_perm[i]=0;
		for (int i=0; i<4; i++) fYec78_perm[i]=0;
		fConst12 = (8333.333333333334f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec118_perm[i]=0;
		for (int i=0; i<4; i++) fRec117_perm[i]=0;
		fbutton26 = 0.0;
		for (int i=0; i<4; i++) fVec26_perm[i]=0;
		for (int i=0; i<4; i++) fYec79_perm[i]=0;
		for (int i=0; i<4; i++) fRec120_perm[i]=0;
		for (int i=0; i<4; i++) fRec119_perm[i]=0;
		fbutton27 = 0.0;
		for (int i=0; i<4; i++) fVec27_perm[i]=0;
		for (int i=0; i<4; i++) fYec80_perm[i]=0;
		for (int i=0; i<4; i++) fRec122_perm[i]=0;
		for (int i=0; i<4; i++) fRec121_perm[i]=0;
		fbutton28 = 0.0;
		for (int i=0; i<4; i++) fVec28_perm[i]=0;
		for (int i=0; i<4; i++) fYec81_perm[i]=0;
		for (int i=0; i<4; i++) fRec124_perm[i]=0;
		for (int i=0; i<4; i++) fRec123_perm[i]=0;
		fbutton29 = 0.0;
		for (int i=0; i<4; i++) fVec29_perm[i]=0;
		for (int i=0; i<4; i++) fYec82_perm[i]=0;
		fConst13 = (1e+04f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec126_perm[i]=0;
		for (int i=0; i<4; i++) fRec125_perm[i]=0;
		fbutton30 = 0.0;
		for (int i=0; i<4; i++) fVec30_perm[i]=0;
		for (int i=0; i<4; i++) fYec83_perm[i]=0;
		for (int i=0; i<4; i++) fRec128_perm[i]=0;
		for (int i=0; i<4; i++) fRec127_perm[i]=0;
		fbutton31 = 0.0;
		for (int i=0; i<4; i++) fVec31_perm[i]=0;
		for (int i=0; i<4; i++) fYec84_perm[i]=0;
		for (int i=0; i<4; i++) fRec130_perm[i]=0;
		for (int i=0; i<4; i++) fRec129_perm[i]=0;
		fbutton32 = 0.0;
		for (int i=0; i<4; i++) fVec32_perm[i]=0;
		for (int i=0; i<4; i++) fYec85_perm[i]=0;
		for (int i=0; i<4; i++) fRec132_perm[i]=0;
		for (int i=0; i<4; i++) fRec131_perm[i]=0;
		fbutton33 = 0.0;
		for (int i=0; i<4; i++) fVec33_perm[i]=0;
		for (int i=0; i<4; i++) fYec86_perm[i]=0;
		fConst14 = (12195.121951219513f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec134_perm[i]=0;
		for (int i=0; i<4; i++) fRec133_perm[i]=0;
		fbutton34 = 0.0;
		for (int i=0; i<4; i++) fVec34_perm[i]=0;
		for (int i=0; i<4; i++) fYec87_perm[i]=0;
		for (int i=0; i<4; i++) fRec136_perm[i]=0;
		for (int i=0; i<4; i++) fRec135_perm[i]=0;
		fbutton35 = 0.0;
		for (int i=0; i<4; i++) fVec35_perm[i]=0;
		for (int i=0; i<4; i++) fYec88_perm[i]=0;
		for (int i=0; i<4; i++) fRec138_perm[i]=0;
		for (int i=0; i<4; i++) fRec137_perm[i]=0;
		fbutton36 = 0.0;
		for (int i=0; i<4; i++) fVec36_perm[i]=0;
		for (int i=0; i<4; i++) fYec89_perm[i]=0;
		for (int i=0; i<4; i++) fRec140_perm[i]=0;
		for (int i=0; i<4; i++) fRec139_perm[i]=0;
		fbutton37 = 0.0;
		for (int i=0; i<4; i++) fVec37_perm[i]=0;
		for (int i=0; i<4; i++) fYec90_perm[i]=0;
		fConst15 = (17857.14285714286f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec142_perm[i]=0;
		for (int i=0; i<4; i++) fRec141_perm[i]=0;
		fbutton38 = 0.0;
		for (int i=0; i<4; i++) fVec38_perm[i]=0;
		for (int i=0; i<4; i++) fYec91_perm[i]=0;
		for (int i=0; i<4; i++) fRec144_perm[i]=0;
		for (int i=0; i<4; i++) fRec143_perm[i]=0;
		fbutton39 = 0.0;
		for (int i=0; i<4; i++) fVec39_perm[i]=0;
		for (int i=0; i<4; i++) fYec92_perm[i]=0;
		for (int i=0; i<4; i++) fRec146_perm[i]=0;
		for (int i=0; i<4; i++) fRec145_perm[i]=0;
		fbutton40 = 0.0;
		for (int i=0; i<4; i++) fVec40_perm[i]=0;
		for (int i=0; i<4; i++) fYec93_perm[i]=0;
		for (int i=0; i<4; i++) fRec148_perm[i]=0;
		for (int i=0; i<4; i++) fRec147_perm[i]=0;
		fbutton41 = 0.0;
		for (int i=0; i<4; i++) fVec41_perm[i]=0;
		for (int i=0; i<4; i++) fYec94_perm[i]=0;
		fConst16 = (21276.59574468085f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec150_perm[i]=0;
		for (int i=0; i<4; i++) fRec149_perm[i]=0;
		fbutton42 = 0.0;
		for (int i=0; i<4; i++) fVec42_perm[i]=0;
		for (int i=0; i<4; i++) fYec95_perm[i]=0;
		for (int i=0; i<4; i++) fRec152_perm[i]=0;
		for (int i=0; i<4; i++) fRec151_perm[i]=0;
		fbutton43 = 0.0;
		for (int i=0; i<4; i++) fVec43_perm[i]=0;
		for (int i=0; i<4; i++) fYec96_perm[i]=0;
		for (int i=0; i<4; i++) fRec154_perm[i]=0;
		for (int i=0; i<4; i++) fRec153_perm[i]=0;
		fbutton44 = 0.0;
		for (int i=0; i<4; i++) fVec44_perm[i]=0;
		for (int i=0; i<4; i++) fYec97_perm[i]=0;
		for (int i=0; i<4; i++) fRec156_perm[i]=0;
		for (int i=0; i<4; i++) fRec155_perm[i]=0;
		fbutton45 = 0.0;
		for (int i=0; i<4; i++) fVec45_perm[i]=0;
		for (int i=0; i<4; i++) fYec98_perm[i]=0;
		fConst17 = (25641.02564102564f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec158_perm[i]=0;
		for (int i=0; i<4; i++) fRec157_perm[i]=0;
		fbutton46 = 0.0;
		for (int i=0; i<4; i++) fVec46_perm[i]=0;
		for (int i=0; i<4; i++) fYec99_perm[i]=0;
		for (int i=0; i<4; i++) fRec160_perm[i]=0;
		for (int i=0; i<4; i++) fRec159_perm[i]=0;
		fbutton47 = 0.0;
		for (int i=0; i<4; i++) fVec47_perm[i]=0;
		for (int i=0; i<4; i++) fYec100_perm[i]=0;
		for (int i=0; i<4; i++) fRec162_perm[i]=0;
		for (int i=0; i<4; i++) fRec161_perm[i]=0;
		fbutton48 = 0.0;
		for (int i=0; i<4; i++) fVec48_perm[i]=0;
		for (int i=0; i<4; i++) fYec101_perm[i]=0;
		for (int i=0; i<4; i++) fRec164_perm[i]=0;
		for (int i=0; i<4; i++) fRec163_perm[i]=0;
		fbutton49 = 0.0;
		for (int i=0; i<4; i++) fVec49_perm[i]=0;
		for (int i=0; i<4; i++) fYec102_perm[i]=0;
		fConst18 = (37037.03703703704f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec166_perm[i]=0;
		for (int i=0; i<4; i++) fRec165_perm[i]=0;
		fbutton50 = 0.0;
		for (int i=0; i<4; i++) fVec50_perm[i]=0;
		for (int i=0; i<4; i++) fYec103_perm[i]=0;
		for (int i=0; i<4; i++) fRec168_perm[i]=0;
		for (int i=0; i<4; i++) fRec167_perm[i]=0;
		fbutton51 = 0.0;
		for (int i=0; i<4; i++) fVec51_perm[i]=0;
		for (int i=0; i<4; i++) fYec104_perm[i]=0;
		for (int i=0; i<4; i++) fRec170_perm[i]=0;
		for (int i=0; i<4; i++) fRec169_perm[i]=0;
		fbutton52 = 0.0;
		for (int i=0; i<4; i++) fVec52_perm[i]=0;
		for (int i=0; i<4; i++) fYec105_perm[i]=0;
		for (int i=0; i<4; i++) fRec172_perm[i]=0;
		for (int i=0; i<4; i++) fRec171_perm[i]=0;
		fbutton53 = 0.0;
		for (int i=0; i<4; i++) fVec53_perm[i]=0;
		for (int i=0; i<4; i++) fYec106_perm[i]=0;
		for (int i=0; i<4; i++) fYec107_perm[i]=0;
		for (int i=0; i<4; i++) fRec173_perm[i]=0;
		fbutton54 = 0.0;
		for (int i=0; i<4; i++) fVec54_perm[i]=0;
		for (int i=0; i<4; i++) fYec108_perm[i]=0;
		for (int i=0; i<4; i++) fYec109_perm[i]=0;
		for (int i=0; i<4; i++) fRec174_perm[i]=0;
		fbutton55 = 0.0;
		for (int i=0; i<4; i++) fVec55_perm[i]=0;
		for (int i=0; i<4; i++) fYec110_perm[i]=0;
		for (int i=0; i<4; i++) fYec111_perm[i]=0;
		for (int i=0; i<4; i++) fRec175_perm[i]=0;
		fbutton56 = 0.0;
		for (int i=0; i<4; i++) fVec56_perm[i]=0;
		for (int i=0; i<4; i++) fYec112_perm[i]=0;
		for (int i=0; i<4; i++) fYec113_perm[i]=0;
		for (int i=0; i<4; i++) fRec176_perm[i]=0;
		fbutton57 = 0.0;
		for (int i=0; i<4; i++) fVec57_perm[i]=0;
		for (int i=0; i<4; i++) fYec114_perm[i]=0;
		for (int i=0; i<4; i++) fYec115_perm[i]=0;
		for (int i=0; i<4; i++) fRec177_perm[i]=0;
		fbutton58 = 0.0;
		for (int i=0; i<4; i++) fVec58_perm[i]=0;
		for (int i=0; i<4; i++) fYec116_perm[i]=0;
		for (int i=0; i<4; i++) fYec117_perm[i]=0;
		for (int i=0; i<4; i++) fRec178_perm[i]=0;
		fbutton59 = 0.0;
		for (int i=0; i<4; i++) fVec59_perm[i]=0;
		for (int i=0; i<4; i++) fYec118_perm[i]=0;
		for (int i=0; i<4; i++) fYec119_perm[i]=0;
		for (int i=0; i<4; i++) fRec179_perm[i]=0;
		fbutton60 = 0.0;
		for (int i=0; i<4; i++) fVec60_perm[i]=0;
		for (int i=0; i<4; i++) fYec120_perm[i]=0;
		for (int i=0; i<4; i++) fYec121_perm[i]=0;
		for (int i=0; i<4; i++) fRec180_perm[i]=0;
		for (int i=0; i<4; i++) fYec122_perm[i]=0;
		fConst19 = (0.0001f / (0.0001f + fConst3));
		for (int i=0; i<4; i++) fRec0_perm[i]=0;
		for (int i=0; i<4; i++) fYec123_perm[i]=0;
		for (int i=0; i<4; i++) fYec124_perm[i]=0;
		for (int i=0; i<4; i++) fRec182_perm[i]=0;
		for (int i=0; i<4; i++) fYec125_perm[i]=0;
		for (int i=0; i<4; i++) fYec126_perm[i]=0;
		for (int i=0; i<4; i++) fRec183_perm[i]=0;
		for (int i=0; i<4; i++) fYec127_perm[i]=0;
		for (int i=0; i<4; i++) fYec128_perm[i]=0;
		for (int i=0; i<4; i++) fRec184_perm[i]=0;
		for (int i=0; i<4; i++) fYec129_perm[i]=0;
		for (int i=0; i<4; i++) fYec130_perm[i]=0;
		for (int i=0; i<4; i++) fRec185_perm[i]=0;
		for (int i=0; i<4; i++) fYec131_perm[i]=0;
		for (int i=0; i<4; i++) fRec181_perm[i]=0;
		for (int i=0; i<4; i++) iRec189_perm[i]=0;
		for (int i=0; i<4; i++) fYec132_perm[i]=0;
		for (int i=0; i<4; i++) iRec190_perm[i]=0;
		for (int i=0; i<4; i++) fYec133_perm[i]=0;
		for (int i=0; i<4; i++) iRec191_perm[i]=0;
		for (int i=0; i<4; i++) fYec134_perm[i]=0;
		for (int i=0; i<4; i++) fYec135_perm[i]=0;
		fConst20 = (666.6666666666666f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec188_perm[i]=0;
		fConst21 = (0.0016849851632047478f / (fConst3 + 0.0016849851632047478f));
		for (int i=0; i<4; i++) fRec187_perm[i]=0;
		for (int i=0; i<4; i++) iRec194_perm[i]=0;
		for (int i=0; i<4; i++) fYec136_perm[i]=0;
		for (int i=0; i<4; i++) iRec195_perm[i]=0;
		for (int i=0; i<4; i++) fYec137_perm[i]=0;
		for (int i=0; i<4; i++) iRec196_perm[i]=0;
		for (int i=0; i<4; i++) fYec138_perm[i]=0;
		for (int i=0; i<4; i++) fYec139_perm[i]=0;
		for (int i=0; i<4; i++) fRec193_perm[i]=0;
		for (int i=0; i<4; i++) fRec192_perm[i]=0;
		for (int i=0; i<4; i++) iRec199_perm[i]=0;
		for (int i=0; i<4; i++) fYec140_perm[i]=0;
		for (int i=0; i<4; i++) iRec200_perm[i]=0;
		for (int i=0; i<4; i++) fYec141_perm[i]=0;
		for (int i=0; i<4; i++) iRec201_perm[i]=0;
		for (int i=0; i<4; i++) fYec142_perm[i]=0;
		for (int i=0; i<4; i++) fYec143_perm[i]=0;
		for (int i=0; i<4; i++) fRec198_perm[i]=0;
		for (int i=0; i<4; i++) fRec197_perm[i]=0;
		for (int i=0; i<4; i++) iRec204_perm[i]=0;
		for (int i=0; i<4; i++) fYec144_perm[i]=0;
		for (int i=0; i<4; i++) iRec205_perm[i]=0;
		for (int i=0; i<4; i++) fYec145_perm[i]=0;
		for (int i=0; i<4; i++) iRec206_perm[i]=0;
		for (int i=0; i<4; i++) fYec146_perm[i]=0;
		for (int i=0; i<4; i++) fYec147_perm[i]=0;
		for (int i=0; i<4; i++) fRec203_perm[i]=0;
		for (int i=0; i<4; i++) fRec202_perm[i]=0;
		for (int i=0; i<4; i++) iRec209_perm[i]=0;
		for (int i=0; i<4; i++) fYec148_perm[i]=0;
		for (int i=0; i<4; i++) iRec210_perm[i]=0;
		for (int i=0; i<4; i++) fYec149_perm[i]=0;
		for (int i=0; i<4; i++) iRec211_perm[i]=0;
		for (int i=0; i<4; i++) fYec150_perm[i]=0;
		for (int i=0; i<4; i++) fYec151_perm[i]=0;
		for (int i=0; i<4; i++) fRec208_perm[i]=0;
		for (int i=0; i<4; i++) fRec207_perm[i]=0;
		for (int i=0; i<4; i++) iRec214_perm[i]=0;
		for (int i=0; i<4; i++) fYec152_perm[i]=0;
		for (int i=0; i<4; i++) iRec215_perm[i]=0;
		for (int i=0; i<4; i++) fYec153_perm[i]=0;
		for (int i=0; i<4; i++) iRec216_perm[i]=0;
		for (int i=0; i<4; i++) fYec154_perm[i]=0;
		for (int i=0; i<4; i++) fYec155_perm[i]=0;
		for (int i=0; i<4; i++) fRec213_perm[i]=0;
		for (int i=0; i<4; i++) fRec212_perm[i]=0;
		for (int i=0; i<4; i++) iRec219_perm[i]=0;
		for (int i=0; i<4; i++) fYec156_perm[i]=0;
		for (int i=0; i<4; i++) iRec220_perm[i]=0;
		for (int i=0; i<4; i++) fYec157_perm[i]=0;
		for (int i=0; i<4; i++) iRec221_perm[i]=0;
		for (int i=0; i<4; i++) fYec158_perm[i]=0;
		for (int i=0; i<4; i++) fYec159_perm[i]=0;
		for (int i=0; i<4; i++) fRec218_perm[i]=0;
		for (int i=0; i<4; i++) fRec217_perm[i]=0;
		for (int i=0; i<4; i++) iRec224_perm[i]=0;
		for (int i=0; i<4; i++) fYec160_perm[i]=0;
		for (int i=0; i<4; i++) iRec225_perm[i]=0;
		for (int i=0; i<4; i++) fYec161_perm[i]=0;
		for (int i=0; i<4; i++) fYec162_perm[i]=0;
		for (int i=0; i<4; i++) fRec223_perm[i]=0;
		for (int i=0; i<4; i++) fRec222_perm[i]=0;
		for (int i=0; i<4; i++) iRec228_perm[i]=0;
		for (int i=0; i<4; i++) fYec163_perm[i]=0;
		for (int i=0; i<4; i++) iRec229_perm[i]=0;
		for (int i=0; i<4; i++) fYec164_perm[i]=0;
		for (int i=0; i<4; i++) fYec165_perm[i]=0;
		fConst22 = (833.3333333333334f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec227_perm[i]=0;
		for (int i=0; i<4; i++) fRec226_perm[i]=0;
		for (int i=0; i<4; i++) iRec232_perm[i]=0;
		for (int i=0; i<4; i++) fYec166_perm[i]=0;
		for (int i=0; i<4; i++) iRec233_perm[i]=0;
		for (int i=0; i<4; i++) fYec167_perm[i]=0;
		for (int i=0; i<4; i++) fYec168_perm[i]=0;
		for (int i=0; i<4; i++) fRec231_perm[i]=0;
		for (int i=0; i<4; i++) fRec230_perm[i]=0;
		for (int i=0; i<4; i++) iRec236_perm[i]=0;
		for (int i=0; i<4; i++) fYec169_perm[i]=0;
		for (int i=0; i<4; i++) iRec237_perm[i]=0;
		for (int i=0; i<4; i++) fYec170_perm[i]=0;
		for (int i=0; i<4; i++) fYec171_perm[i]=0;
		for (int i=0; i<4; i++) fRec235_perm[i]=0;
		for (int i=0; i<4; i++) fRec234_perm[i]=0;
		for (int i=0; i<4; i++) iRec240_perm[i]=0;
		for (int i=0; i<4; i++) fYec172_perm[i]=0;
		for (int i=0; i<4; i++) iRec241_perm[i]=0;
		for (int i=0; i<4; i++) fYec173_perm[i]=0;
		for (int i=0; i<4; i++) fYec174_perm[i]=0;
		for (int i=0; i<4; i++) fRec239_perm[i]=0;
		for (int i=0; i<4; i++) fRec238_perm[i]=0;
		for (int i=0; i<4; i++) fYec175_perm[i]=0;
		for (int i=0; i<4; i++) fRec243_perm[i]=0;
		fConst23 = (0.00223066398390342f / (fConst3 + 0.00223066398390342f));
		for (int i=0; i<4; i++) fRec242_perm[i]=0;
		for (int i=0; i<4; i++) fYec176_perm[i]=0;
		for (int i=0; i<4; i++) fRec245_perm[i]=0;
		for (int i=0; i<4; i++) fRec244_perm[i]=0;
		for (int i=0; i<4; i++) fYec177_perm[i]=0;
		for (int i=0; i<4; i++) fRec247_perm[i]=0;
		for (int i=0; i<4; i++) fRec246_perm[i]=0;
		for (int i=0; i<4; i++) fYec178_perm[i]=0;
		for (int i=0; i<4; i++) fRec249_perm[i]=0;
		for (int i=0; i<4; i++) fRec248_perm[i]=0;
		for (int i=0; i<4; i++) fYec179_perm[i]=0;
		fConst24 = (1e+03f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec251_perm[i]=0;
		for (int i=0; i<4; i++) fRec250_perm[i]=0;
		for (int i=0; i<4; i++) fYec180_perm[i]=0;
		for (int i=0; i<4; i++) fRec253_perm[i]=0;
		for (int i=0; i<4; i++) fRec252_perm[i]=0;
		for (int i=0; i<4; i++) fYec181_perm[i]=0;
		for (int i=0; i<4; i++) fRec255_perm[i]=0;
		for (int i=0; i<4; i++) fRec254_perm[i]=0;
		for (int i=0; i<4; i++) fYec182_perm[i]=0;
		for (int i=0; i<4; i++) fRec257_perm[i]=0;
		for (int i=0; i<4; i++) fRec256_perm[i]=0;
		for (int i=0; i<4; i++) fYec183_perm[i]=0;
		fConst25 = (1219.5121951219512f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec259_perm[i]=0;
		for (int i=0; i<4; i++) fRec258_perm[i]=0;
		for (int i=0; i<4; i++) fYec184_perm[i]=0;
		for (int i=0; i<4; i++) fRec261_perm[i]=0;
		for (int i=0; i<4; i++) fRec260_perm[i]=0;
		for (int i=0; i<4; i++) fYec185_perm[i]=0;
		for (int i=0; i<4; i++) fRec263_perm[i]=0;
		for (int i=0; i<4; i++) fRec262_perm[i]=0;
		for (int i=0; i<4; i++) fYec186_perm[i]=0;
		for (int i=0; i<4; i++) fRec265_perm[i]=0;
		for (int i=0; i<4; i++) fRec264_perm[i]=0;
		for (int i=0; i<4; i++) fYec187_perm[i]=0;
		for (int i=0; i<4; i++) fRec267_perm[i]=0;
		for (int i=0; i<4; i++) fRec266_perm[i]=0;
		for (int i=0; i<4; i++) fYec188_perm[i]=0;
		for (int i=0; i<4; i++) fRec269_perm[i]=0;
		for (int i=0; i<4; i++) fRec268_perm[i]=0;
		for (int i=0; i<4; i++) fYec189_perm[i]=0;
		for (int i=0; i<4; i++) fRec271_perm[i]=0;
		for (int i=0; i<4; i++) fRec270_perm[i]=0;
		for (int i=0; i<4; i++) fYec190_perm[i]=0;
		for (int i=0; i<4; i++) fRec273_perm[i]=0;
		for (int i=0; i<4; i++) fRec272_perm[i]=0;
		for (int i=0; i<4; i++) fYec191_perm[i]=0;
		for (int i=0; i<4; i++) fRec275_perm[i]=0;
		for (int i=0; i<4; i++) fRec274_perm[i]=0;
		for (int i=0; i<4; i++) fYec192_perm[i]=0;
		for (int i=0; i<4; i++) fRec277_perm[i]=0;
		for (int i=0; i<4; i++) fRec276_perm[i]=0;
		for (int i=0; i<4; i++) fYec193_perm[i]=0;
		for (int i=0; i<4; i++) fRec279_perm[i]=0;
		for (int i=0; i<4; i++) fRec278_perm[i]=0;
		for (int i=0; i<4; i++) fYec194_perm[i]=0;
		for (int i=0; i<4; i++) fRec186_perm[i]=0;
		fConst26 = (36.243757712787264f / fConst0);
		fConst27 = (1.0f - fConst26);
		for (int i=0; i<4; i++) iRec285_perm[i]=0;
		iConst28 = int((0.001f * max(2.205e+04f, min(1.92e+05f, fConst0))));
		for (int i=0; i<4; i++) fRec282_perm[i]=0;
		for (int i=0; i<4; i++) iRec283_perm[i]=0;
		for (int i=0; i<4; i++) fRec284_perm[i]=0;
		fConst29 = (1.0f / iConst28);
		for (int i=0; i<4; i++) fYec195_perm[i]=0;
		for (int i=0; i<4; i++) fRec281_perm[i]=0;
		for (int i=0; i<4; i++) fRec280_perm[i]=0;
		fConst30 = (0.027590958087858178f * fConst0);
		for (int i=0; i<4; i++) fYec196_perm[i]=0;
		fslider5 = 1.0f;
		fslider6 = 1.0f;
		for (int i=0; i<4; i++) fRec286_perm[i]=0;
		fslider7 = 1.0f;
		fslider8 = 1.0f;
		fConst31 = (3968.253968253968f / fSamplingFreq);
		for (int i=0; i<4; i++) fRec287_perm[i]=0;
		fslider9 = 1.0f;
		for (int i=0; i<4; i++) fYec197_perm[i]=0;
		fConst32 = (0.000858f / (fConst3 + 0.000858f));
		for (int i=0; i<4; i++) fRec289_perm[i]=0;
		for (int i=0; i<4; i++) fYec198_perm[i]=0;
		fConst33 = (0.000429f / (fConst3 + 0.000429f));
		for (int i=0; i<4; i++) fRec288_perm[i]=0;
		for (int i=0; i<4; i++) fYec199_perm[i]=0;
		for (int i=0; i<4; i++) fRec292_perm[i]=0;
		fslider10 = 1.0f;
		for (int i=0; i<4; i++) fYec200_perm[i]=0;
		fConst34 = (0.00039f / (fConst3 + 0.00039f));
		for (int i=0; i<4; i++) fRec291_perm[i]=0;
		for (int i=0; i<4; i++) fYec201_perm[i]=0;
		fConst35 = (0.000195f / (fConst3 + 0.000195f));
		for (int i=0; i<4; i++) fRec290_perm[i]=0;
		for (int i=0; i<4; i++) fYec202_perm[i]=0;
		for (int i=0; i<4; i++) fRec295_perm[i]=0;
		fslider11 = 1.0f;
		for (int i=0; i<4; i++) fYec203_perm[i]=0;
		fConst36 = (0.0001833f / (fConst3 + 0.0001833f));
		for (int i=0; i<4; i++) fRec294_perm[i]=0;
		for (int i=0; i<4; i++) fYec204_perm[i]=0;
		fConst37 = (9.165e-05f / (fConst3 + 9.165e-05f));
		for (int i=0; i<4; i++) fRec293_perm[i]=0;
		for (int i=0; i<4; i++) fYec205_perm[i]=0;
		for (int i=0; i<4; i++) fRec298_perm[i]=0;
		fslider12 = 1.0f;
		for (int i=0; i<4; i++) fYec206_perm[i]=0;
		fConst38 = (0.00010530000000000001f / (fConst3 + 0.00010530000000000001f));
		for (int i=0; i<4; i++) fRec297_perm[i]=0;
		for (int i=0; i<4; i++) fYec207_perm[i]=0;
		fConst39 = (5.2650000000000006e-05f / (fConst3 + 5.2650000000000006e-05f));
		for (int i=0; i<4; i++) fRec296_perm[i]=0;
		fslider13 = 0.0f;
		for (int i=0; i<4; i++) fRec300_perm[i]=0;
		for (int i=0; i<4; i++) fRec299_perm[i]=0;
		for (int i=0; i<4; i++) fRec302_perm[i]=0;
		for (int i=0; i<4; i++) fRec301_perm[i]=0;
		for (int i=0; i<4; i++) fRec304_perm[i]=0;
		for (int i=0; i<4; i++) fRec303_perm[i]=0;
		for (int i=0; i<4; i++) fRec306_perm[i]=0;
		for (int i=0; i<4; i++) fRec305_perm[i]=0;
		fslider14 = 1.0f;
		fslider15 = 1.0f;
		fslider16 = 0.5f;
		fslider17 = 1.0f;
		fslider18 = 0.5f;
		fslider19 = 1.0f;
		for (int i=0; i<4; i++) fYec208_perm[i]=0;
		for (int i=0; i<4; i++) fRec307_perm[i]=0;
		fslider20 = 0.0f;
		fslider21 = 0.5f;
		fslider22 = 0.5f;
		for (int i=0; i<4; i++) fRec308_perm[i]=0;
	}
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void buildUserInterface(UI* interface) {
		interface->openVerticalBox("plugin");
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
		interface->addHorizontalSlider("balance", &fslider14, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->openHorizontalBox("bass");
		interface->declare(&fslider8, "1", "");
		interface->addVerticalSlider("16' b", &fslider8, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider7, "2", "");
		interface->addVerticalSlider("8' b", &fslider7, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider4, "3", "");
		interface->addHorizontalSlider("bass manual", &fslider4, 0.0f, 0.0f, 1.0f, 1.0f);
		interface->declare(&fslider6, "3", "");
		interface->addVerticalSlider("bass volume", &fslider6, 1.0f, 0.0f, 1.0f, 0.25f);
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
		interface->declare(&fslider16, "1", "");
		interface->addVerticalSlider("16' i", &fslider16, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider15, "2", "");
		interface->addVerticalSlider("8' i", &fslider15, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider17, "3", "");
		interface->addVerticalSlider("4' i", &fslider17, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider18, "4", "");
		interface->addVerticalSlider("2 2/3' i", &fslider18, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider19, "5", "");
		interface->addVerticalSlider("2' i", &fslider19, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider20, "6", "");
		interface->addVerticalSlider("1 3/5' i", &fslider20, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider21, "7", "");
		interface->addVerticalSlider("1' i", &fslider21, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->closeBox();
		interface->openHorizontalBox("ii");
		interface->declare(&fslider13, "1", "");
		interface->addVerticalSlider("bright", &fslider13, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider9, "2", "");
		interface->addVerticalSlider("16' ii", &fslider9, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider10, "3", "");
		interface->addVerticalSlider("8' ii", &fslider10, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider11, "4", "");
		interface->addVerticalSlider("4' ii", &fslider11, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider12, "5", "");
		interface->addVerticalSlider("2' ii", &fslider12, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->closeBox();
		interface->addHorizontalSlider("percussive", &fslider5, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->addHorizontalSlider("pitch", &fslider1, 0.0f, -1.0f, 1.0f, 0.05f);
		interface->addHorizontalSlider("realism", &fslider0, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->addHorizontalSlider("volume", &fslider22, 0.5f, 0.0f, 1.0f, 0.01f);
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
		float 	fYec5_tmp[32+4];
		float 	fZec13[32];
		float 	fZec14[32];
		float 	fZec15[32];
		float 	fRec2_tmp[32+4];
		float 	fRec1_tmp[32+4];
		float 	fVec1_tmp[32+4];
		float 	fZec16[32];
		float 	fZec17[32];
		float 	fRec13_tmp[32+4];
		float 	fZec18[32];
		int 	iRec12_tmp[32+4];
		float 	fYec6_tmp[32+4];
		float 	fZec19[32];
		float 	fZec20[32];
		int 	iRec14_tmp[32+4];
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
		float 	fYec11_tmp[32+4];
		float 	fZec28[32];
		float 	fZec29[32];
		float 	fZec30[32];
		float 	fRec11_tmp[32+4];
		float 	fRec10_tmp[32+4];
		float 	fVec2_tmp[32+4];
		float 	fZec31[32];
		float 	fZec32[32];
		float 	fRec21_tmp[32+4];
		float 	fZec33[32];
		int 	iRec20_tmp[32+4];
		float 	fYec12_tmp[32+4];
		float 	fZec34[32];
		float 	fZec35[32];
		int 	iRec22_tmp[32+4];
		float 	fYec13_tmp[32+4];
		float 	fZec36[32];
		float 	fZec37[32];
		int 	iRec23_tmp[32+4];
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
		float 	fYec17_tmp[32+4];
		float 	fZec43[32];
		float 	fZec44[32];
		float 	fZec45[32];
		float 	fRec19_tmp[32+4];
		float 	fRec18_tmp[32+4];
		float 	fVec3_tmp[32+4];
		float 	fZec46[32];
		float 	fZec47[32];
		float 	fRec29_tmp[32+4];
		float 	fZec48[32];
		int 	iRec28_tmp[32+4];
		float 	fYec18_tmp[32+4];
		float 	fZec49[32];
		float 	fZec50[32];
		int 	iRec30_tmp[32+4];
		float 	fYec19_tmp[32+4];
		float 	fZec51[32];
		float 	fZec52[32];
		int 	iRec31_tmp[32+4];
		float 	fYec20_tmp[32+4];
		float 	fZec53[32];
		float 	fZec54[32];
		int 	iRec32_tmp[32+4];
		float 	fYec21_tmp[32+4];
		float 	fZec55[32];
		float 	fZec56[32];
		int 	iRec33_tmp[32+4];
		float 	fYec22_tmp[32+4];
		float 	fZec57[32];
		float 	fYec23_tmp[32+4];
		float 	fZec58[32];
		float 	fZec59[32];
		float 	fZec60[32];
		float 	fRec27_tmp[32+4];
		float 	fRec26_tmp[32+4];
		float 	fVec4_tmp[32+4];
		float 	fZec61[32];
		float 	fZec62[32];
		float 	fRec37_tmp[32+4];
		float 	fZec63[32];
		int 	iRec36_tmp[32+4];
		float 	fYec24_tmp[32+4];
		float 	fZec64[32];
		float 	fZec65[32];
		int 	iRec38_tmp[32+4];
		float 	fYec25_tmp[32+4];
		float 	fZec66[32];
		float 	fZec67[32];
		int 	iRec39_tmp[32+4];
		float 	fYec26_tmp[32+4];
		float 	fZec68[32];
		float 	fZec69[32];
		int 	iRec40_tmp[32+4];
		float 	fYec27_tmp[32+4];
		float 	fZec70[32];
		float 	fZec71[32];
		int 	iRec41_tmp[32+4];
		float 	fYec28_tmp[32+4];
		float 	fZec72[32];
		float 	fYec29_tmp[32+4];
		float 	fZec73[32];
		float 	fZec74[32];
		float 	fZec75[32];
		float 	fRec35_tmp[32+4];
		float 	fRec34_tmp[32+4];
		float 	fVec5_tmp[32+4];
		float 	fZec76[32];
		float 	fZec77[32];
		float 	fRec45_tmp[32+4];
		float 	fZec78[32];
		int 	iRec44_tmp[32+4];
		float 	fYec30_tmp[32+4];
		float 	fZec79[32];
		float 	fZec80[32];
		int 	iRec46_tmp[32+4];
		float 	fYec31_tmp[32+4];
		float 	fZec81[32];
		float 	fZec82[32];
		int 	iRec47_tmp[32+4];
		float 	fYec32_tmp[32+4];
		float 	fZec83[32];
		float 	fZec84[32];
		int 	iRec48_tmp[32+4];
		float 	fYec33_tmp[32+4];
		float 	fZec85[32];
		float 	fYec34_tmp[32+4];
		float 	fZec86[32];
		float 	fZec87[32];
		float 	fZec88[32];
		float 	fRec43_tmp[32+4];
		float 	fRec42_tmp[32+4];
		float 	fVec6_tmp[32+4];
		float 	fZec89[32];
		float 	fZec90[32];
		float 	fRec52_tmp[32+4];
		float 	fZec91[32];
		int 	iRec51_tmp[32+4];
		float 	fYec35_tmp[32+4];
		float 	fZec92[32];
		float 	fZec93[32];
		int 	iRec53_tmp[32+4];
		float 	fYec36_tmp[32+4];
		float 	fZec94[32];
		float 	fZec95[32];
		int 	iRec54_tmp[32+4];
		float 	fYec37_tmp[32+4];
		float 	fZec96[32];
		float 	fZec97[32];
		int 	iRec55_tmp[32+4];
		float 	fYec38_tmp[32+4];
		float 	fZec98[32];
		float 	fYec39_tmp[32+4];
		float 	fZec99[32];
		float 	fZec100[32];
		float 	fZec101[32];
		float 	fRec50_tmp[32+4];
		float 	fRec49_tmp[32+4];
		float 	fVec7_tmp[32+4];
		float 	fZec102[32];
		float 	fZec103[32];
		float 	fRec59_tmp[32+4];
		float 	fZec104[32];
		int 	iRec58_tmp[32+4];
		float 	fYec40_tmp[32+4];
		float 	fZec105[32];
		float 	fZec106[32];
		int 	iRec60_tmp[32+4];
		float 	fYec41_tmp[32+4];
		float 	fZec107[32];
		float 	fZec108[32];
		int 	iRec61_tmp[32+4];
		float 	fYec42_tmp[32+4];
		float 	fZec109[32];
		float 	fZec110[32];
		int 	iRec62_tmp[32+4];
		float 	fYec43_tmp[32+4];
		float 	fZec111[32];
		float 	fYec44_tmp[32+4];
		float 	fZec112[32];
		float 	fZec113[32];
		float 	fZec114[32];
		float 	fRec57_tmp[32+4];
		float 	fRec56_tmp[32+4];
		float 	fVec8_tmp[32+4];
		float 	fZec115[32];
		float 	fZec116[32];
		float 	fRec66_tmp[32+4];
		float 	fZec117[32];
		int 	iRec65_tmp[32+4];
		float 	fYec45_tmp[32+4];
		float 	fZec118[32];
		float 	fZec119[32];
		int 	iRec67_tmp[32+4];
		float 	fYec46_tmp[32+4];
		float 	fZec120[32];
		float 	fZec121[32];
		int 	iRec68_tmp[32+4];
		float 	fYec47_tmp[32+4];
		float 	fZec122[32];
		float 	fZec123[32];
		int 	iRec69_tmp[32+4];
		float 	fYec48_tmp[32+4];
		float 	fZec124[32];
		float 	fYec49_tmp[32+4];
		float 	fZec125[32];
		float 	fZec126[32];
		float 	fZec127[32];
		float 	fRec64_tmp[32+4];
		float 	fRec63_tmp[32+4];
		float 	fVec9_tmp[32+4];
		float 	fZec128[32];
		float 	fZec129[32];
		float 	fRec73_tmp[32+4];
		float 	fZec130[32];
		int 	iRec72_tmp[32+4];
		float 	fYec50_tmp[32+4];
		float 	fZec131[32];
		float 	fZec132[32];
		int 	iRec74_tmp[32+4];
		float 	fYec51_tmp[32+4];
		float 	fZec133[32];
		float 	fZec134[32];
		int 	iRec75_tmp[32+4];
		float 	fYec52_tmp[32+4];
		float 	fZec135[32];
		float 	fZec136[32];
		int 	iRec76_tmp[32+4];
		float 	fYec53_tmp[32+4];
		float 	fZec137[32];
		float 	fYec54_tmp[32+4];
		float 	fZec138[32];
		float 	fZec139[32];
		float 	fZec140[32];
		float 	fRec71_tmp[32+4];
		float 	fRec70_tmp[32+4];
		float 	fVec10_tmp[32+4];
		float 	fZec141[32];
		float 	fZec142[32];
		float 	fRec80_tmp[32+4];
		float 	fZec143[32];
		int 	iRec79_tmp[32+4];
		float 	fYec55_tmp[32+4];
		float 	fZec144[32];
		float 	fZec145[32];
		int 	iRec81_tmp[32+4];
		float 	fYec56_tmp[32+4];
		float 	fZec146[32];
		float 	fZec147[32];
		int 	iRec82_tmp[32+4];
		float 	fYec57_tmp[32+4];
		float 	fZec148[32];
		float 	fZec149[32];
		int 	iRec83_tmp[32+4];
		float 	fYec58_tmp[32+4];
		float 	fZec150[32];
		float 	fYec59_tmp[32+4];
		float 	fZec151[32];
		float 	fZec152[32];
		float 	fZec153[32];
		float 	fRec78_tmp[32+4];
		float 	fRec77_tmp[32+4];
		float 	fVec11_tmp[32+4];
		float 	fZec154[32];
		float 	fZec155[32];
		float 	fRec87_tmp[32+4];
		float 	fZec156[32];
		int 	iRec86_tmp[32+4];
		float 	fYec60_tmp[32+4];
		float 	fZec157[32];
		float 	fZec158[32];
		int 	iRec88_tmp[32+4];
		float 	fYec61_tmp[32+4];
		float 	fZec159[32];
		float 	fZec160[32];
		int 	iRec89_tmp[32+4];
		float 	fYec62_tmp[32+4];
		float 	fZec161[32];
		float 	fZec162[32];
		int 	iRec90_tmp[32+4];
		float 	fYec63_tmp[32+4];
		float 	fZec163[32];
		float 	fYec64_tmp[32+4];
		float 	fZec164[32];
		float 	fZec165[32];
		float 	fZec166[32];
		float 	fRec85_tmp[32+4];
		float 	fRec84_tmp[32+4];
		float 	fVec12_tmp[32+4];
		float 	fZec167[32];
		float 	fYec65_tmp[32+4];
		float 	fRec92_tmp[32+4];
		float 	fRec91_tmp[32+4];
		float 	fVec13_tmp[32+4];
		float 	fZec168[32];
		float 	fYec66_tmp[32+4];
		float 	fRec94_tmp[32+4];
		float 	fRec93_tmp[32+4];
		float 	fVec14_tmp[32+4];
		float 	fZec169[32];
		float 	fYec67_tmp[32+4];
		float 	fRec96_tmp[32+4];
		float 	fRec95_tmp[32+4];
		float 	fVec15_tmp[32+4];
		float 	fZec170[32];
		float 	fYec68_tmp[32+4];
		float 	fRec98_tmp[32+4];
		float 	fRec97_tmp[32+4];
		float 	fVec16_tmp[32+4];
		float 	fZec171[32];
		float 	fYec69_tmp[32+4];
		float 	fRec100_tmp[32+4];
		float 	fRec99_tmp[32+4];
		float 	fVec17_tmp[32+4];
		float 	fZec172[32];
		float 	fYec70_tmp[32+4];
		float 	fRec102_tmp[32+4];
		float 	fRec101_tmp[32+4];
		float 	fVec18_tmp[32+4];
		float 	fZec173[32];
		float 	fYec71_tmp[32+4];
		float 	fRec104_tmp[32+4];
		float 	fRec103_tmp[32+4];
		float 	fVec19_tmp[32+4];
		float 	fZec174[32];
		float 	fYec72_tmp[32+4];
		float 	fRec106_tmp[32+4];
		float 	fRec105_tmp[32+4];
		float 	fVec20_tmp[32+4];
		float 	fZec175[32];
		float 	fYec73_tmp[32+4];
		float 	fRec108_tmp[32+4];
		float 	fRec107_tmp[32+4];
		float 	fVec21_tmp[32+4];
		float 	fZec176[32];
		float 	fYec74_tmp[32+4];
		float 	fRec110_tmp[32+4];
		float 	fRec109_tmp[32+4];
		float 	fVec22_tmp[32+4];
		float 	fZec177[32];
		float 	fYec75_tmp[32+4];
		float 	fRec112_tmp[32+4];
		float 	fRec111_tmp[32+4];
		float 	fVec23_tmp[32+4];
		float 	fZec178[32];
		float 	fYec76_tmp[32+4];
		float 	fRec114_tmp[32+4];
		float 	fRec113_tmp[32+4];
		float 	fVec24_tmp[32+4];
		float 	fZec179[32];
		float 	fYec77_tmp[32+4];
		float 	fRec116_tmp[32+4];
		float 	fRec115_tmp[32+4];
		float 	fVec25_tmp[32+4];
		float 	fZec180[32];
		float 	fYec78_tmp[32+4];
		float 	fRec118_tmp[32+4];
		float 	fRec117_tmp[32+4];
		float 	fVec26_tmp[32+4];
		float 	fZec181[32];
		float 	fYec79_tmp[32+4];
		float 	fRec120_tmp[32+4];
		float 	fRec119_tmp[32+4];
		float 	fVec27_tmp[32+4];
		float 	fZec182[32];
		float 	fYec80_tmp[32+4];
		float 	fRec122_tmp[32+4];
		float 	fRec121_tmp[32+4];
		float 	fVec28_tmp[32+4];
		float 	fZec183[32];
		float 	fYec81_tmp[32+4];
		float 	fRec124_tmp[32+4];
		float 	fRec123_tmp[32+4];
		float 	fVec29_tmp[32+4];
		float 	fZec184[32];
		float 	fYec82_tmp[32+4];
		float 	fRec126_tmp[32+4];
		float 	fRec125_tmp[32+4];
		float 	fVec30_tmp[32+4];
		float 	fZec185[32];
		float 	fYec83_tmp[32+4];
		float 	fRec128_tmp[32+4];
		float 	fRec127_tmp[32+4];
		float 	fVec31_tmp[32+4];
		float 	fZec186[32];
		float 	fYec84_tmp[32+4];
		float 	fRec130_tmp[32+4];
		float 	fRec129_tmp[32+4];
		float 	fVec32_tmp[32+4];
		float 	fZec187[32];
		float 	fYec85_tmp[32+4];
		float 	fRec132_tmp[32+4];
		float 	fRec131_tmp[32+4];
		float 	fVec33_tmp[32+4];
		float 	fZec188[32];
		float 	fYec86_tmp[32+4];
		float 	fRec134_tmp[32+4];
		float 	fRec133_tmp[32+4];
		float 	fVec34_tmp[32+4];
		float 	fZec189[32];
		float 	fYec87_tmp[32+4];
		float 	fRec136_tmp[32+4];
		float 	fRec135_tmp[32+4];
		float 	fVec35_tmp[32+4];
		float 	fZec190[32];
		float 	fYec88_tmp[32+4];
		float 	fRec138_tmp[32+4];
		float 	fRec137_tmp[32+4];
		float 	fVec36_tmp[32+4];
		float 	fZec191[32];
		float 	fYec89_tmp[32+4];
		float 	fRec140_tmp[32+4];
		float 	fRec139_tmp[32+4];
		float 	fVec37_tmp[32+4];
		float 	fZec192[32];
		float 	fYec90_tmp[32+4];
		float 	fRec142_tmp[32+4];
		float 	fRec141_tmp[32+4];
		float 	fVec38_tmp[32+4];
		float 	fZec193[32];
		float 	fYec91_tmp[32+4];
		float 	fRec144_tmp[32+4];
		float 	fRec143_tmp[32+4];
		float 	fVec39_tmp[32+4];
		float 	fZec194[32];
		float 	fYec92_tmp[32+4];
		float 	fRec146_tmp[32+4];
		float 	fRec145_tmp[32+4];
		float 	fVec40_tmp[32+4];
		float 	fZec195[32];
		float 	fYec93_tmp[32+4];
		float 	fRec148_tmp[32+4];
		float 	fRec147_tmp[32+4];
		float 	fVec41_tmp[32+4];
		float 	fZec196[32];
		float 	fYec94_tmp[32+4];
		float 	fRec150_tmp[32+4];
		float 	fRec149_tmp[32+4];
		float 	fVec42_tmp[32+4];
		float 	fZec197[32];
		float 	fYec95_tmp[32+4];
		float 	fRec152_tmp[32+4];
		float 	fRec151_tmp[32+4];
		float 	fVec43_tmp[32+4];
		float 	fZec198[32];
		float 	fYec96_tmp[32+4];
		float 	fRec154_tmp[32+4];
		float 	fRec153_tmp[32+4];
		float 	fVec44_tmp[32+4];
		float 	fZec199[32];
		float 	fYec97_tmp[32+4];
		float 	fRec156_tmp[32+4];
		float 	fRec155_tmp[32+4];
		float 	fVec45_tmp[32+4];
		float 	fZec200[32];
		float 	fYec98_tmp[32+4];
		float 	fRec158_tmp[32+4];
		float 	fRec157_tmp[32+4];
		float 	fVec46_tmp[32+4];
		float 	fZec201[32];
		float 	fYec99_tmp[32+4];
		float 	fRec160_tmp[32+4];
		float 	fRec159_tmp[32+4];
		float 	fVec47_tmp[32+4];
		float 	fZec202[32];
		float 	fYec100_tmp[32+4];
		float 	fRec162_tmp[32+4];
		float 	fRec161_tmp[32+4];
		float 	fVec48_tmp[32+4];
		float 	fZec203[32];
		float 	fYec101_tmp[32+4];
		float 	fRec164_tmp[32+4];
		float 	fRec163_tmp[32+4];
		float 	fVec49_tmp[32+4];
		float 	fZec204[32];
		float 	fYec102_tmp[32+4];
		float 	fRec166_tmp[32+4];
		float 	fRec165_tmp[32+4];
		float 	fVec50_tmp[32+4];
		float 	fZec205[32];
		float 	fYec103_tmp[32+4];
		float 	fRec168_tmp[32+4];
		float 	fRec167_tmp[32+4];
		float 	fVec51_tmp[32+4];
		float 	fZec206[32];
		float 	fYec104_tmp[32+4];
		float 	fRec170_tmp[32+4];
		float 	fRec169_tmp[32+4];
		float 	fVec52_tmp[32+4];
		float 	fZec207[32];
		float 	fYec105_tmp[32+4];
		float 	fRec172_tmp[32+4];
		float 	fRec171_tmp[32+4];
		float 	fVec53_tmp[32+4];
		float 	fZec208[32];
		float 	fYec106_tmp[32+4];
		float 	fYec107_tmp[32+4];
		float 	fRec173_tmp[32+4];
		float 	fVec54_tmp[32+4];
		float 	fZec209[32];
		float 	fYec108_tmp[32+4];
		float 	fYec109_tmp[32+4];
		float 	fRec174_tmp[32+4];
		float 	fVec55_tmp[32+4];
		float 	fZec210[32];
		float 	fYec110_tmp[32+4];
		float 	fYec111_tmp[32+4];
		float 	fRec175_tmp[32+4];
		float 	fVec56_tmp[32+4];
		float 	fZec211[32];
		float 	fYec112_tmp[32+4];
		float 	fYec113_tmp[32+4];
		float 	fRec176_tmp[32+4];
		float 	fVec57_tmp[32+4];
		float 	fZec212[32];
		float 	fYec114_tmp[32+4];
		float 	fYec115_tmp[32+4];
		float 	fRec177_tmp[32+4];
		float 	fVec58_tmp[32+4];
		float 	fZec213[32];
		float 	fYec116_tmp[32+4];
		float 	fYec117_tmp[32+4];
		float 	fRec178_tmp[32+4];
		float 	fVec59_tmp[32+4];
		float 	fZec214[32];
		float 	fYec118_tmp[32+4];
		float 	fYec119_tmp[32+4];
		float 	fRec179_tmp[32+4];
		float 	fVec60_tmp[32+4];
		float 	fZec215[32];
		float 	fYec120_tmp[32+4];
		float 	fYec121_tmp[32+4];
		float 	fRec180_tmp[32+4];
		float 	fZec216[32];
		float 	fZec217[32];
		float 	fZec218[32];
		float 	fZec219[32];
		float 	fZec220[32];
		float 	fZec221[32];
		float 	fZec222[32];
		float 	fZec223[32];
		float 	fZec224[32];
		float 	fYec122_tmp[32+4];
		float 	fRec0_tmp[32+4];
		float 	fZec225[32];
		float 	fYec123_tmp[32+4];
		float 	fYec124_tmp[32+4];
		float 	fRec182_tmp[32+4];
		float 	fYec125_tmp[32+4];
		float 	fYec126_tmp[32+4];
		float 	fRec183_tmp[32+4];
		float 	fYec127_tmp[32+4];
		float 	fYec128_tmp[32+4];
		float 	fRec184_tmp[32+4];
		float 	fYec129_tmp[32+4];
		float 	fYec130_tmp[32+4];
		float 	fRec185_tmp[32+4];
		float 	fZec226[32];
		float 	fZec227[32];
		float 	fZec228[32];
		float 	fZec229[32];
		float 	fZec230[32];
		float 	fZec231[32];
		float 	fZec232[32];
		float 	fZec233[32];
		float 	fZec234[32];
		float 	fZec235[32];
		float 	fZec236[32];
		float 	fZec237[32];
		float 	fZec238[32];
		float 	fZec239[32];
		float 	fZec240[32];
		float 	fZec241[32];
		float 	fZec242[32];
		float 	fZec243[32];
		float 	fZec244[32];
		float 	fZec245[32];
		float 	fZec246[32];
		float 	fZec247[32];
		float 	fZec248[32];
		float 	fZec249[32];
		float 	fZec250[32];
		float 	fZec251[32];
		float 	fZec252[32];
		float 	fZec253[32];
		float 	fZec254[32];
		float 	fZec255[32];
		float 	fZec256[32];
		float 	fZec257[32];
		float 	fZec258[32];
		float 	fZec259[32];
		float 	fZec260[32];
		float 	fZec261[32];
		float 	fZec262[32];
		float 	fZec263[32];
		float 	fZec264[32];
		float 	fZec265[32];
		float 	fZec266[32];
		float 	fZec267[32];
		float 	fZec268[32];
		float 	fZec269[32];
		float 	fYec131_tmp[32+4];
		float 	fRec181_tmp[32+4];
		float 	fZec270[32];
		float 	fZec271[32];
		int 	iRec189_tmp[32+4];
		float 	fYec132_tmp[32+4];
		float 	fZec272[32];
		float 	fZec273[32];
		int 	iRec190_tmp[32+4];
		float 	fYec133_tmp[32+4];
		float 	fZec274[32];
		float 	fZec275[32];
		int 	iRec191_tmp[32+4];
		float 	fYec134_tmp[32+4];
		float 	fZec276[32];
		float 	fYec135_tmp[32+4];
		float 	fRec188_tmp[32+4];
		float 	fRec187_tmp[32+4];
		int 	iRec194_tmp[32+4];
		float 	fYec136_tmp[32+4];
		float 	fZec277[32];
		float 	fZec278[32];
		int 	iRec195_tmp[32+4];
		float 	fYec137_tmp[32+4];
		float 	fZec279[32];
		float 	fZec280[32];
		int 	iRec196_tmp[32+4];
		float 	fYec138_tmp[32+4];
		float 	fZec281[32];
		float 	fYec139_tmp[32+4];
		float 	fRec193_tmp[32+4];
		float 	fRec192_tmp[32+4];
		int 	iRec199_tmp[32+4];
		float 	fYec140_tmp[32+4];
		float 	fZec282[32];
		float 	fZec283[32];
		int 	iRec200_tmp[32+4];
		float 	fYec141_tmp[32+4];
		float 	fZec284[32];
		float 	fZec285[32];
		int 	iRec201_tmp[32+4];
		float 	fYec142_tmp[32+4];
		float 	fZec286[32];
		float 	fYec143_tmp[32+4];
		float 	fRec198_tmp[32+4];
		float 	fRec197_tmp[32+4];
		int 	iRec204_tmp[32+4];
		float 	fYec144_tmp[32+4];
		float 	fZec287[32];
		float 	fZec288[32];
		int 	iRec205_tmp[32+4];
		float 	fYec145_tmp[32+4];
		float 	fZec289[32];
		float 	fZec290[32];
		int 	iRec206_tmp[32+4];
		float 	fYec146_tmp[32+4];
		float 	fZec291[32];
		float 	fYec147_tmp[32+4];
		float 	fRec203_tmp[32+4];
		float 	fRec202_tmp[32+4];
		int 	iRec209_tmp[32+4];
		float 	fYec148_tmp[32+4];
		float 	fZec292[32];
		float 	fZec293[32];
		int 	iRec210_tmp[32+4];
		float 	fYec149_tmp[32+4];
		float 	fZec294[32];
		float 	fZec295[32];
		int 	iRec211_tmp[32+4];
		float 	fYec150_tmp[32+4];
		float 	fZec296[32];
		float 	fYec151_tmp[32+4];
		float 	fRec208_tmp[32+4];
		float 	fRec207_tmp[32+4];
		int 	iRec214_tmp[32+4];
		float 	fYec152_tmp[32+4];
		float 	fZec297[32];
		float 	fZec298[32];
		int 	iRec215_tmp[32+4];
		float 	fYec153_tmp[32+4];
		float 	fZec299[32];
		float 	fZec300[32];
		int 	iRec216_tmp[32+4];
		float 	fYec154_tmp[32+4];
		float 	fZec301[32];
		float 	fYec155_tmp[32+4];
		float 	fRec213_tmp[32+4];
		float 	fRec212_tmp[32+4];
		int 	iRec219_tmp[32+4];
		float 	fYec156_tmp[32+4];
		float 	fZec302[32];
		float 	fZec303[32];
		int 	iRec220_tmp[32+4];
		float 	fYec157_tmp[32+4];
		float 	fZec304[32];
		float 	fZec305[32];
		int 	iRec221_tmp[32+4];
		float 	fYec158_tmp[32+4];
		float 	fZec306[32];
		float 	fYec159_tmp[32+4];
		float 	fRec218_tmp[32+4];
		float 	fRec217_tmp[32+4];
		int 	iRec224_tmp[32+4];
		float 	fYec160_tmp[32+4];
		float 	fZec307[32];
		float 	fZec308[32];
		int 	iRec225_tmp[32+4];
		float 	fYec161_tmp[32+4];
		float 	fZec309[32];
		float 	fYec162_tmp[32+4];
		float 	fRec223_tmp[32+4];
		float 	fRec222_tmp[32+4];
		int 	iRec228_tmp[32+4];
		float 	fYec163_tmp[32+4];
		float 	fZec310[32];
		float 	fZec311[32];
		int 	iRec229_tmp[32+4];
		float 	fYec164_tmp[32+4];
		float 	fZec312[32];
		float 	fYec165_tmp[32+4];
		float 	fRec227_tmp[32+4];
		float 	fRec226_tmp[32+4];
		int 	iRec232_tmp[32+4];
		float 	fYec166_tmp[32+4];
		float 	fZec313[32];
		float 	fZec314[32];
		int 	iRec233_tmp[32+4];
		float 	fYec167_tmp[32+4];
		float 	fZec315[32];
		float 	fYec168_tmp[32+4];
		float 	fRec231_tmp[32+4];
		float 	fRec230_tmp[32+4];
		int 	iRec236_tmp[32+4];
		float 	fYec169_tmp[32+4];
		float 	fZec316[32];
		float 	fZec317[32];
		int 	iRec237_tmp[32+4];
		float 	fYec170_tmp[32+4];
		float 	fZec318[32];
		float 	fYec171_tmp[32+4];
		float 	fRec235_tmp[32+4];
		float 	fRec234_tmp[32+4];
		int 	iRec240_tmp[32+4];
		float 	fYec172_tmp[32+4];
		float 	fZec319[32];
		float 	fZec320[32];
		int 	iRec241_tmp[32+4];
		float 	fYec173_tmp[32+4];
		float 	fZec321[32];
		float 	fYec174_tmp[32+4];
		float 	fRec239_tmp[32+4];
		float 	fRec238_tmp[32+4];
		float 	fYec175_tmp[32+4];
		float 	fRec243_tmp[32+4];
		float 	fRec242_tmp[32+4];
		float 	fYec176_tmp[32+4];
		float 	fRec245_tmp[32+4];
		float 	fRec244_tmp[32+4];
		float 	fYec177_tmp[32+4];
		float 	fRec247_tmp[32+4];
		float 	fRec246_tmp[32+4];
		float 	fYec178_tmp[32+4];
		float 	fRec249_tmp[32+4];
		float 	fRec248_tmp[32+4];
		float 	fYec179_tmp[32+4];
		float 	fRec251_tmp[32+4];
		float 	fRec250_tmp[32+4];
		float 	fZec322[32];
		float 	fYec180_tmp[32+4];
		float 	fRec253_tmp[32+4];
		float 	fRec252_tmp[32+4];
		float 	fYec181_tmp[32+4];
		float 	fRec255_tmp[32+4];
		float 	fRec254_tmp[32+4];
		float 	fYec182_tmp[32+4];
		float 	fRec257_tmp[32+4];
		float 	fRec256_tmp[32+4];
		float 	fYec183_tmp[32+4];
		float 	fRec259_tmp[32+4];
		float 	fRec258_tmp[32+4];
		float 	fYec184_tmp[32+4];
		float 	fRec261_tmp[32+4];
		float 	fRec260_tmp[32+4];
		float 	fYec185_tmp[32+4];
		float 	fRec263_tmp[32+4];
		float 	fRec262_tmp[32+4];
		float 	fYec186_tmp[32+4];
		float 	fRec265_tmp[32+4];
		float 	fRec264_tmp[32+4];
		float 	fYec187_tmp[32+4];
		float 	fRec267_tmp[32+4];
		float 	fRec266_tmp[32+4];
		float 	fYec188_tmp[32+4];
		float 	fRec269_tmp[32+4];
		float 	fRec268_tmp[32+4];
		float 	fYec189_tmp[32+4];
		float 	fRec271_tmp[32+4];
		float 	fRec270_tmp[32+4];
		float 	fYec190_tmp[32+4];
		float 	fRec273_tmp[32+4];
		float 	fRec272_tmp[32+4];
		float 	fYec191_tmp[32+4];
		float 	fRec275_tmp[32+4];
		float 	fRec274_tmp[32+4];
		float 	fYec192_tmp[32+4];
		float 	fRec277_tmp[32+4];
		float 	fRec276_tmp[32+4];
		float 	fYec193_tmp[32+4];
		float 	fRec279_tmp[32+4];
		float 	fRec278_tmp[32+4];
		float 	fZec323[32];
		float 	fZec324[32];
		float 	fYec194_tmp[32+4];
		float 	fRec186_tmp[32+4];
		float 	fZec325[32];
		int 	iRec285_tmp[32+4];
		float 	fZec326[32];
		int 	iZec327[32];
		float 	fRec282_tmp[32+4];
		int 	iRec283_tmp[32+4];
		float 	fRec284_tmp[32+4];
		float 	fYec195_tmp[32+4];
		float 	fZec328[32];
		float 	fZec329[32];
		float 	fRec281_tmp[32+4];
		float 	fRec280_tmp[32+4];
		float 	fYec196_tmp[32+4];
		float 	fRec286_tmp[32+4];
		float 	fZec330[32];
		float 	fZec331[32];
		float 	fRec287_tmp[32+4];
		float 	fYec197_tmp[32+4];
		float 	fRec289_tmp[32+4];
		float 	fYec198_tmp[32+4];
		float 	fRec288_tmp[32+4];
		float 	fZec332[32];
		float 	fZec333[32];
		float 	fYec199_tmp[32+4];
		float 	fRec292_tmp[32+4];
		float 	fZec334[32];
		float 	fYec200_tmp[32+4];
		float 	fRec291_tmp[32+4];
		float 	fYec201_tmp[32+4];
		float 	fRec290_tmp[32+4];
		float 	fZec335[32];
		float 	fZec336[32];
		float 	fYec202_tmp[32+4];
		float 	fRec295_tmp[32+4];
		float 	fZec337[32];
		float 	fYec203_tmp[32+4];
		float 	fRec294_tmp[32+4];
		float 	fYec204_tmp[32+4];
		float 	fRec293_tmp[32+4];
		float 	fZec338[32];
		float 	fZec339[32];
		float 	fYec205_tmp[32+4];
		float 	fRec298_tmp[32+4];
		float 	fZec340[32];
		float 	fYec206_tmp[32+4];
		float 	fRec297_tmp[32+4];
		float 	fYec207_tmp[32+4];
		float 	fRec296_tmp[32+4];
		float 	fRec300_tmp[32+4];
		float 	fRec299_tmp[32+4];
		float 	fRec302_tmp[32+4];
		float 	fRec301_tmp[32+4];
		float 	fRec304_tmp[32+4];
		float 	fRec303_tmp[32+4];
		float 	fRec306_tmp[32+4];
		float 	fRec305_tmp[32+4];
		float 	fZec341[32];
		float 	fZec342[32];
		float 	fYec208_tmp[32+4];
		float 	fRec307_tmp[32+4];
		float 	fRec308_tmp[32+4];
		float 	fZec343[32];
		float 	fSlow0 = fslider0;
		float 	fSlow1 = ((int((fSlow0 >= 0.8333333333333334f)))?1.0f:0.0f);
		float 	fSlow2 = fbutton0;
		float* 	fVec0 = &fVec0_tmp[4];
		int 	iSlow3 = int((fSlow0 > 0.16666666666666666f));
		float 	fSlow4 = ((iSlow3)?0.997294f:1.0f);
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
		float* 	fYec5 = &fYec5_tmp[4];
		float* 	fRec2 = &fRec2_tmp[4];
		float* 	fRec1 = &fRec1_tmp[4];
		float 	fSlow8 = fbutton1;
		float* 	fVec1 = &fVec1_tmp[4];
		float 	fSlow9 = ((iSlow3)?1.000562f:1.0f);
		float* 	fRec13 = &fRec13_tmp[4];
		int* 	iRec12 = &iRec12_tmp[4];
		float* 	fYec6 = &fYec6_tmp[4];
		int* 	iRec14 = &iRec14_tmp[4];
		float* 	fYec7 = &fYec7_tmp[4];
		int* 	iRec15 = &iRec15_tmp[4];
		float* 	fYec8 = &fYec8_tmp[4];
		int* 	iRec16 = &iRec16_tmp[4];
		float* 	fYec9 = &fYec9_tmp[4];
		int* 	iRec17 = &iRec17_tmp[4];
		float* 	fYec10 = &fYec10_tmp[4];
		float* 	fYec11 = &fYec11_tmp[4];
		float* 	fRec11 = &fRec11_tmp[4];
		float* 	fRec10 = &fRec10_tmp[4];
		float 	fSlow10 = fbutton2;
		float* 	fVec2 = &fVec2_tmp[4];
		float 	fSlow11 = ((iSlow3)?1.002464f:1.0f);
		float* 	fRec21 = &fRec21_tmp[4];
		int* 	iRec20 = &iRec20_tmp[4];
		float* 	fYec12 = &fYec12_tmp[4];
		int* 	iRec22 = &iRec22_tmp[4];
		float* 	fYec13 = &fYec13_tmp[4];
		int* 	iRec23 = &iRec23_tmp[4];
		float* 	fYec14 = &fYec14_tmp[4];
		int* 	iRec24 = &iRec24_tmp[4];
		float* 	fYec15 = &fYec15_tmp[4];
		int* 	iRec25 = &iRec25_tmp[4];
		float* 	fYec16 = &fYec16_tmp[4];
		float* 	fYec17 = &fYec17_tmp[4];
		float* 	fRec19 = &fRec19_tmp[4];
		float* 	fRec18 = &fRec18_tmp[4];
		float 	fSlow12 = fbutton3;
		float* 	fVec3 = &fVec3_tmp[4];
		float 	fSlow13 = ((iSlow3)?0.996945f:1.0f);
		float* 	fRec29 = &fRec29_tmp[4];
		int* 	iRec28 = &iRec28_tmp[4];
		float* 	fYec18 = &fYec18_tmp[4];
		int* 	iRec30 = &iRec30_tmp[4];
		float* 	fYec19 = &fYec19_tmp[4];
		int* 	iRec31 = &iRec31_tmp[4];
		float* 	fYec20 = &fYec20_tmp[4];
		int* 	iRec32 = &iRec32_tmp[4];
		float* 	fYec21 = &fYec21_tmp[4];
		int* 	iRec33 = &iRec33_tmp[4];
		float* 	fYec22 = &fYec22_tmp[4];
		float* 	fYec23 = &fYec23_tmp[4];
		float* 	fRec27 = &fRec27_tmp[4];
		float* 	fRec26 = &fRec26_tmp[4];
		float 	fSlow14 = fbutton4;
		float* 	fVec4 = &fVec4_tmp[4];
		float 	fSlow15 = ((iSlow3)?1.003118f:1.0f);
		float* 	fRec37 = &fRec37_tmp[4];
		int* 	iRec36 = &iRec36_tmp[4];
		float* 	fYec24 = &fYec24_tmp[4];
		int* 	iRec38 = &iRec38_tmp[4];
		float* 	fYec25 = &fYec25_tmp[4];
		int* 	iRec39 = &iRec39_tmp[4];
		float* 	fYec26 = &fYec26_tmp[4];
		int* 	iRec40 = &iRec40_tmp[4];
		float* 	fYec27 = &fYec27_tmp[4];
		int* 	iRec41 = &iRec41_tmp[4];
		float* 	fYec28 = &fYec28_tmp[4];
		float* 	fYec29 = &fYec29_tmp[4];
		float* 	fRec35 = &fRec35_tmp[4];
		float* 	fRec34 = &fRec34_tmp[4];
		float 	fSlow16 = fbutton5;
		float* 	fVec5 = &fVec5_tmp[4];
		float 	fSlow17 = ((iSlow3)?1.001383f:1.0f);
		float* 	fRec45 = &fRec45_tmp[4];
		int* 	iRec44 = &iRec44_tmp[4];
		float* 	fYec30 = &fYec30_tmp[4];
		int* 	iRec46 = &iRec46_tmp[4];
		float* 	fYec31 = &fYec31_tmp[4];
		int* 	iRec47 = &iRec47_tmp[4];
		float* 	fYec32 = &fYec32_tmp[4];
		int* 	iRec48 = &iRec48_tmp[4];
		float* 	fYec33 = &fYec33_tmp[4];
		float* 	fYec34 = &fYec34_tmp[4];
		float* 	fRec43 = &fRec43_tmp[4];
		float* 	fRec42 = &fRec42_tmp[4];
		float 	fSlow18 = fbutton6;
		float* 	fVec6 = &fVec6_tmp[4];
		float 	fSlow19 = ((iSlow3)?1.003796f:1.0f);
		float* 	fRec52 = &fRec52_tmp[4];
		int* 	iRec51 = &iRec51_tmp[4];
		float* 	fYec35 = &fYec35_tmp[4];
		int* 	iRec53 = &iRec53_tmp[4];
		float* 	fYec36 = &fYec36_tmp[4];
		int* 	iRec54 = &iRec54_tmp[4];
		float* 	fYec37 = &fYec37_tmp[4];
		int* 	iRec55 = &iRec55_tmp[4];
		float* 	fYec38 = &fYec38_tmp[4];
		float* 	fYec39 = &fYec39_tmp[4];
		float* 	fRec50 = &fRec50_tmp[4];
		float* 	fRec49 = &fRec49_tmp[4];
		float 	fSlow20 = fbutton7;
		float* 	fVec7 = &fVec7_tmp[4];
		float 	fSlow21 = ((iSlow3)?0.999484f:1.0f);
		float* 	fRec59 = &fRec59_tmp[4];
		int* 	iRec58 = &iRec58_tmp[4];
		float* 	fYec40 = &fYec40_tmp[4];
		int* 	iRec60 = &iRec60_tmp[4];
		float* 	fYec41 = &fYec41_tmp[4];
		int* 	iRec61 = &iRec61_tmp[4];
		float* 	fYec42 = &fYec42_tmp[4];
		int* 	iRec62 = &iRec62_tmp[4];
		float* 	fYec43 = &fYec43_tmp[4];
		float* 	fYec44 = &fYec44_tmp[4];
		float* 	fRec57 = &fRec57_tmp[4];
		float* 	fRec56 = &fRec56_tmp[4];
		float 	fSlow22 = fbutton8;
		float* 	fVec8 = &fVec8_tmp[4];
		float 	fSlow23 = ((iSlow3)?1.001135f:1.0f);
		float* 	fRec66 = &fRec66_tmp[4];
		int* 	iRec65 = &iRec65_tmp[4];
		float* 	fYec45 = &fYec45_tmp[4];
		int* 	iRec67 = &iRec67_tmp[4];
		float* 	fYec46 = &fYec46_tmp[4];
		int* 	iRec68 = &iRec68_tmp[4];
		float* 	fYec47 = &fYec47_tmp[4];
		int* 	iRec69 = &iRec69_tmp[4];
		float* 	fYec48 = &fYec48_tmp[4];
		float* 	fYec49 = &fYec49_tmp[4];
		float* 	fRec64 = &fRec64_tmp[4];
		float* 	fRec63 = &fRec63_tmp[4];
		float 	fSlow24 = fbutton9;
		float* 	fVec9 = &fVec9_tmp[4];
		float 	fSlow25 = ((iSlow3)?1.000064f:1.0f);
		float* 	fRec73 = &fRec73_tmp[4];
		int* 	iRec72 = &iRec72_tmp[4];
		float* 	fYec50 = &fYec50_tmp[4];
		int* 	iRec74 = &iRec74_tmp[4];
		float* 	fYec51 = &fYec51_tmp[4];
		int* 	iRec75 = &iRec75_tmp[4];
		float* 	fYec52 = &fYec52_tmp[4];
		int* 	iRec76 = &iRec76_tmp[4];
		float* 	fYec53 = &fYec53_tmp[4];
		float* 	fYec54 = &fYec54_tmp[4];
		float* 	fRec71 = &fRec71_tmp[4];
		float* 	fRec70 = &fRec70_tmp[4];
		float 	fSlow26 = fbutton10;
		float* 	fVec10 = &fVec10_tmp[4];
		float 	fSlow27 = ((iSlow3)?0.998889f:1.0f);
		float* 	fRec80 = &fRec80_tmp[4];
		int* 	iRec79 = &iRec79_tmp[4];
		float* 	fYec55 = &fYec55_tmp[4];
		int* 	iRec81 = &iRec81_tmp[4];
		float* 	fYec56 = &fYec56_tmp[4];
		int* 	iRec82 = &iRec82_tmp[4];
		float* 	fYec57 = &fYec57_tmp[4];
		int* 	iRec83 = &iRec83_tmp[4];
		float* 	fYec58 = &fYec58_tmp[4];
		float* 	fYec59 = &fYec59_tmp[4];
		float* 	fRec78 = &fRec78_tmp[4];
		float* 	fRec77 = &fRec77_tmp[4];
		float 	fSlow28 = fbutton11;
		float* 	fVec11 = &fVec11_tmp[4];
		float 	fSlow29 = ((iSlow3)?0.997199f:1.0f);
		float* 	fRec87 = &fRec87_tmp[4];
		int* 	iRec86 = &iRec86_tmp[4];
		float* 	fYec60 = &fYec60_tmp[4];
		int* 	iRec88 = &iRec88_tmp[4];
		float* 	fYec61 = &fYec61_tmp[4];
		int* 	iRec89 = &iRec89_tmp[4];
		float* 	fYec62 = &fYec62_tmp[4];
		int* 	iRec90 = &iRec90_tmp[4];
		float* 	fYec63 = &fYec63_tmp[4];
		float* 	fYec64 = &fYec64_tmp[4];
		float* 	fRec85 = &fRec85_tmp[4];
		float* 	fRec84 = &fRec84_tmp[4];
		float 	fSlow30 = fbutton12;
		float* 	fVec12 = &fVec12_tmp[4];
		float* 	fYec65 = &fYec65_tmp[4];
		float* 	fRec92 = &fRec92_tmp[4];
		float* 	fRec91 = &fRec91_tmp[4];
		float 	fSlow31 = fbutton13;
		float* 	fVec13 = &fVec13_tmp[4];
		float* 	fYec66 = &fYec66_tmp[4];
		float* 	fRec94 = &fRec94_tmp[4];
		float* 	fRec93 = &fRec93_tmp[4];
		float 	fSlow32 = fbutton14;
		float* 	fVec14 = &fVec14_tmp[4];
		float* 	fYec67 = &fYec67_tmp[4];
		float* 	fRec96 = &fRec96_tmp[4];
		float* 	fRec95 = &fRec95_tmp[4];
		float 	fSlow33 = fbutton15;
		float* 	fVec15 = &fVec15_tmp[4];
		float* 	fYec68 = &fYec68_tmp[4];
		float* 	fRec98 = &fRec98_tmp[4];
		float* 	fRec97 = &fRec97_tmp[4];
		float 	fSlow34 = fbutton16;
		float* 	fVec16 = &fVec16_tmp[4];
		float* 	fYec69 = &fYec69_tmp[4];
		float* 	fRec100 = &fRec100_tmp[4];
		float* 	fRec99 = &fRec99_tmp[4];
		float 	fSlow35 = fslider4;
		float 	fSlow36 = (1.0f - fSlow35);
		float 	fSlow37 = fbutton17;
		float* 	fVec17 = &fVec17_tmp[4];
		float* 	fYec70 = &fYec70_tmp[4];
		float* 	fRec102 = &fRec102_tmp[4];
		float* 	fRec101 = &fRec101_tmp[4];
		float 	fSlow38 = fbutton18;
		float* 	fVec18 = &fVec18_tmp[4];
		float* 	fYec71 = &fYec71_tmp[4];
		float* 	fRec104 = &fRec104_tmp[4];
		float* 	fRec103 = &fRec103_tmp[4];
		float 	fSlow39 = fbutton19;
		float* 	fVec19 = &fVec19_tmp[4];
		float* 	fYec72 = &fYec72_tmp[4];
		float* 	fRec106 = &fRec106_tmp[4];
		float* 	fRec105 = &fRec105_tmp[4];
		float 	fSlow40 = fbutton20;
		float* 	fVec20 = &fVec20_tmp[4];
		float* 	fYec73 = &fYec73_tmp[4];
		float* 	fRec108 = &fRec108_tmp[4];
		float* 	fRec107 = &fRec107_tmp[4];
		float 	fSlow41 = fbutton21;
		float* 	fVec21 = &fVec21_tmp[4];
		float* 	fYec74 = &fYec74_tmp[4];
		float* 	fRec110 = &fRec110_tmp[4];
		float* 	fRec109 = &fRec109_tmp[4];
		float 	fSlow42 = fbutton22;
		float* 	fVec22 = &fVec22_tmp[4];
		float* 	fYec75 = &fYec75_tmp[4];
		float* 	fRec112 = &fRec112_tmp[4];
		float* 	fRec111 = &fRec111_tmp[4];
		float 	fSlow43 = fbutton23;
		float* 	fVec23 = &fVec23_tmp[4];
		float* 	fYec76 = &fYec76_tmp[4];
		float* 	fRec114 = &fRec114_tmp[4];
		float* 	fRec113 = &fRec113_tmp[4];
		float 	fSlow44 = fbutton24;
		float* 	fVec24 = &fVec24_tmp[4];
		float* 	fYec77 = &fYec77_tmp[4];
		float* 	fRec116 = &fRec116_tmp[4];
		float* 	fRec115 = &fRec115_tmp[4];
		float 	fSlow45 = fbutton25;
		float* 	fVec25 = &fVec25_tmp[4];
		float* 	fYec78 = &fYec78_tmp[4];
		float* 	fRec118 = &fRec118_tmp[4];
		float* 	fRec117 = &fRec117_tmp[4];
		float 	fSlow46 = fbutton26;
		float* 	fVec26 = &fVec26_tmp[4];
		float* 	fYec79 = &fYec79_tmp[4];
		float* 	fRec120 = &fRec120_tmp[4];
		float* 	fRec119 = &fRec119_tmp[4];
		float 	fSlow47 = fbutton27;
		float* 	fVec27 = &fVec27_tmp[4];
		float* 	fYec80 = &fYec80_tmp[4];
		float* 	fRec122 = &fRec122_tmp[4];
		float* 	fRec121 = &fRec121_tmp[4];
		float 	fSlow48 = fbutton28;
		float* 	fVec28 = &fVec28_tmp[4];
		float* 	fYec81 = &fYec81_tmp[4];
		float* 	fRec124 = &fRec124_tmp[4];
		float* 	fRec123 = &fRec123_tmp[4];
		float 	fSlow49 = fbutton29;
		float* 	fVec29 = &fVec29_tmp[4];
		float* 	fYec82 = &fYec82_tmp[4];
		float* 	fRec126 = &fRec126_tmp[4];
		float* 	fRec125 = &fRec125_tmp[4];
		float 	fSlow50 = fbutton30;
		float* 	fVec30 = &fVec30_tmp[4];
		float* 	fYec83 = &fYec83_tmp[4];
		float* 	fRec128 = &fRec128_tmp[4];
		float* 	fRec127 = &fRec127_tmp[4];
		float 	fSlow51 = fbutton31;
		float* 	fVec31 = &fVec31_tmp[4];
		float* 	fYec84 = &fYec84_tmp[4];
		float* 	fRec130 = &fRec130_tmp[4];
		float* 	fRec129 = &fRec129_tmp[4];
		float 	fSlow52 = fbutton32;
		float* 	fVec32 = &fVec32_tmp[4];
		float* 	fYec85 = &fYec85_tmp[4];
		float* 	fRec132 = &fRec132_tmp[4];
		float* 	fRec131 = &fRec131_tmp[4];
		float 	fSlow53 = fbutton33;
		float* 	fVec33 = &fVec33_tmp[4];
		float* 	fYec86 = &fYec86_tmp[4];
		float* 	fRec134 = &fRec134_tmp[4];
		float* 	fRec133 = &fRec133_tmp[4];
		float 	fSlow54 = fbutton34;
		float* 	fVec34 = &fVec34_tmp[4];
		float* 	fYec87 = &fYec87_tmp[4];
		float* 	fRec136 = &fRec136_tmp[4];
		float* 	fRec135 = &fRec135_tmp[4];
		float 	fSlow55 = fbutton35;
		float* 	fVec35 = &fVec35_tmp[4];
		float* 	fYec88 = &fYec88_tmp[4];
		float* 	fRec138 = &fRec138_tmp[4];
		float* 	fRec137 = &fRec137_tmp[4];
		float 	fSlow56 = fbutton36;
		float* 	fVec36 = &fVec36_tmp[4];
		float* 	fYec89 = &fYec89_tmp[4];
		float* 	fRec140 = &fRec140_tmp[4];
		float* 	fRec139 = &fRec139_tmp[4];
		float 	fSlow57 = fbutton37;
		float* 	fVec37 = &fVec37_tmp[4];
		float* 	fYec90 = &fYec90_tmp[4];
		float* 	fRec142 = &fRec142_tmp[4];
		float* 	fRec141 = &fRec141_tmp[4];
		float 	fSlow58 = fbutton38;
		float* 	fVec38 = &fVec38_tmp[4];
		float* 	fYec91 = &fYec91_tmp[4];
		float* 	fRec144 = &fRec144_tmp[4];
		float* 	fRec143 = &fRec143_tmp[4];
		float 	fSlow59 = fbutton39;
		float* 	fVec39 = &fVec39_tmp[4];
		float* 	fYec92 = &fYec92_tmp[4];
		float* 	fRec146 = &fRec146_tmp[4];
		float* 	fRec145 = &fRec145_tmp[4];
		float 	fSlow60 = fbutton40;
		float* 	fVec40 = &fVec40_tmp[4];
		float* 	fYec93 = &fYec93_tmp[4];
		float* 	fRec148 = &fRec148_tmp[4];
		float* 	fRec147 = &fRec147_tmp[4];
		float 	fSlow61 = fbutton41;
		float* 	fVec41 = &fVec41_tmp[4];
		float* 	fYec94 = &fYec94_tmp[4];
		float* 	fRec150 = &fRec150_tmp[4];
		float* 	fRec149 = &fRec149_tmp[4];
		float 	fSlow62 = fbutton42;
		float* 	fVec42 = &fVec42_tmp[4];
		float* 	fYec95 = &fYec95_tmp[4];
		float* 	fRec152 = &fRec152_tmp[4];
		float* 	fRec151 = &fRec151_tmp[4];
		float 	fSlow63 = fbutton43;
		float* 	fVec43 = &fVec43_tmp[4];
		float* 	fYec96 = &fYec96_tmp[4];
		float* 	fRec154 = &fRec154_tmp[4];
		float* 	fRec153 = &fRec153_tmp[4];
		float 	fSlow64 = fbutton44;
		float* 	fVec44 = &fVec44_tmp[4];
		float* 	fYec97 = &fYec97_tmp[4];
		float* 	fRec156 = &fRec156_tmp[4];
		float* 	fRec155 = &fRec155_tmp[4];
		float 	fSlow65 = fbutton45;
		float* 	fVec45 = &fVec45_tmp[4];
		float* 	fYec98 = &fYec98_tmp[4];
		float* 	fRec158 = &fRec158_tmp[4];
		float* 	fRec157 = &fRec157_tmp[4];
		float 	fSlow66 = fbutton46;
		float* 	fVec46 = &fVec46_tmp[4];
		float* 	fYec99 = &fYec99_tmp[4];
		float* 	fRec160 = &fRec160_tmp[4];
		float* 	fRec159 = &fRec159_tmp[4];
		float 	fSlow67 = fbutton47;
		float* 	fVec47 = &fVec47_tmp[4];
		float* 	fYec100 = &fYec100_tmp[4];
		float* 	fRec162 = &fRec162_tmp[4];
		float* 	fRec161 = &fRec161_tmp[4];
		float 	fSlow68 = fbutton48;
		float* 	fVec48 = &fVec48_tmp[4];
		float* 	fYec101 = &fYec101_tmp[4];
		float* 	fRec164 = &fRec164_tmp[4];
		float* 	fRec163 = &fRec163_tmp[4];
		float 	fSlow69 = fbutton49;
		float* 	fVec49 = &fVec49_tmp[4];
		float* 	fYec102 = &fYec102_tmp[4];
		float* 	fRec166 = &fRec166_tmp[4];
		float* 	fRec165 = &fRec165_tmp[4];
		float 	fSlow70 = fbutton50;
		float* 	fVec50 = &fVec50_tmp[4];
		float* 	fYec103 = &fYec103_tmp[4];
		float* 	fRec168 = &fRec168_tmp[4];
		float* 	fRec167 = &fRec167_tmp[4];
		float 	fSlow71 = fbutton51;
		float* 	fVec51 = &fVec51_tmp[4];
		float* 	fYec104 = &fYec104_tmp[4];
		float* 	fRec170 = &fRec170_tmp[4];
		float* 	fRec169 = &fRec169_tmp[4];
		float 	fSlow72 = fbutton52;
		float* 	fVec52 = &fVec52_tmp[4];
		float* 	fYec105 = &fYec105_tmp[4];
		float* 	fRec172 = &fRec172_tmp[4];
		float* 	fRec171 = &fRec171_tmp[4];
		float 	fSlow73 = fbutton53;
		float* 	fVec53 = &fVec53_tmp[4];
		float* 	fYec106 = &fYec106_tmp[4];
		float* 	fYec107 = &fYec107_tmp[4];
		float* 	fRec173 = &fRec173_tmp[4];
		float 	fSlow74 = fbutton54;
		float* 	fVec54 = &fVec54_tmp[4];
		float* 	fYec108 = &fYec108_tmp[4];
		float* 	fYec109 = &fYec109_tmp[4];
		float* 	fRec174 = &fRec174_tmp[4];
		float 	fSlow75 = fbutton55;
		float* 	fVec55 = &fVec55_tmp[4];
		float* 	fYec110 = &fYec110_tmp[4];
		float* 	fYec111 = &fYec111_tmp[4];
		float* 	fRec175 = &fRec175_tmp[4];
		float 	fSlow76 = fbutton56;
		float* 	fVec56 = &fVec56_tmp[4];
		float* 	fYec112 = &fYec112_tmp[4];
		float* 	fYec113 = &fYec113_tmp[4];
		float* 	fRec176 = &fRec176_tmp[4];
		float 	fSlow77 = fbutton57;
		float* 	fVec57 = &fVec57_tmp[4];
		float* 	fYec114 = &fYec114_tmp[4];
		float* 	fYec115 = &fYec115_tmp[4];
		float* 	fRec177 = &fRec177_tmp[4];
		float 	fSlow78 = fbutton58;
		float* 	fVec58 = &fVec58_tmp[4];
		float* 	fYec116 = &fYec116_tmp[4];
		float* 	fYec117 = &fYec117_tmp[4];
		float* 	fRec178 = &fRec178_tmp[4];
		float 	fSlow79 = fbutton59;
		float* 	fVec59 = &fVec59_tmp[4];
		float* 	fYec118 = &fYec118_tmp[4];
		float* 	fYec119 = &fYec119_tmp[4];
		float* 	fRec179 = &fRec179_tmp[4];
		float 	fSlow80 = fbutton60;
		float* 	fVec60 = &fVec60_tmp[4];
		float* 	fYec120 = &fYec120_tmp[4];
		float* 	fYec121 = &fYec121_tmp[4];
		float* 	fRec180 = &fRec180_tmp[4];
		float* 	fYec122 = &fYec122_tmp[4];
		float* 	fRec0 = &fRec0_tmp[4];
		float* 	fYec123 = &fYec123_tmp[4];
		float* 	fYec124 = &fYec124_tmp[4];
		float* 	fRec182 = &fRec182_tmp[4];
		float* 	fYec125 = &fYec125_tmp[4];
		float* 	fYec126 = &fYec126_tmp[4];
		float* 	fRec183 = &fRec183_tmp[4];
		float* 	fYec127 = &fYec127_tmp[4];
		float* 	fYec128 = &fYec128_tmp[4];
		float* 	fRec184 = &fRec184_tmp[4];
		float* 	fYec129 = &fYec129_tmp[4];
		float* 	fYec130 = &fYec130_tmp[4];
		float* 	fRec185 = &fRec185_tmp[4];
		float 	fSlow81 = (0.5f * fSlow36);
		float* 	fYec131 = &fYec131_tmp[4];
		float* 	fRec181 = &fRec181_tmp[4];
		int* 	iRec189 = &iRec189_tmp[4];
		float* 	fYec132 = &fYec132_tmp[4];
		int* 	iRec190 = &iRec190_tmp[4];
		float* 	fYec133 = &fYec133_tmp[4];
		int* 	iRec191 = &iRec191_tmp[4];
		float* 	fYec134 = &fYec134_tmp[4];
		float* 	fYec135 = &fYec135_tmp[4];
		float* 	fRec188 = &fRec188_tmp[4];
		float* 	fRec187 = &fRec187_tmp[4];
		int* 	iRec194 = &iRec194_tmp[4];
		float* 	fYec136 = &fYec136_tmp[4];
		int* 	iRec195 = &iRec195_tmp[4];
		float* 	fYec137 = &fYec137_tmp[4];
		int* 	iRec196 = &iRec196_tmp[4];
		float* 	fYec138 = &fYec138_tmp[4];
		float* 	fYec139 = &fYec139_tmp[4];
		float* 	fRec193 = &fRec193_tmp[4];
		float* 	fRec192 = &fRec192_tmp[4];
		int* 	iRec199 = &iRec199_tmp[4];
		float* 	fYec140 = &fYec140_tmp[4];
		int* 	iRec200 = &iRec200_tmp[4];
		float* 	fYec141 = &fYec141_tmp[4];
		int* 	iRec201 = &iRec201_tmp[4];
		float* 	fYec142 = &fYec142_tmp[4];
		float* 	fYec143 = &fYec143_tmp[4];
		float* 	fRec198 = &fRec198_tmp[4];
		float* 	fRec197 = &fRec197_tmp[4];
		int* 	iRec204 = &iRec204_tmp[4];
		float* 	fYec144 = &fYec144_tmp[4];
		int* 	iRec205 = &iRec205_tmp[4];
		float* 	fYec145 = &fYec145_tmp[4];
		int* 	iRec206 = &iRec206_tmp[4];
		float* 	fYec146 = &fYec146_tmp[4];
		float* 	fYec147 = &fYec147_tmp[4];
		float* 	fRec203 = &fRec203_tmp[4];
		float* 	fRec202 = &fRec202_tmp[4];
		int* 	iRec209 = &iRec209_tmp[4];
		float* 	fYec148 = &fYec148_tmp[4];
		int* 	iRec210 = &iRec210_tmp[4];
		float* 	fYec149 = &fYec149_tmp[4];
		int* 	iRec211 = &iRec211_tmp[4];
		float* 	fYec150 = &fYec150_tmp[4];
		float* 	fYec151 = &fYec151_tmp[4];
		float* 	fRec208 = &fRec208_tmp[4];
		float* 	fRec207 = &fRec207_tmp[4];
		int* 	iRec214 = &iRec214_tmp[4];
		float* 	fYec152 = &fYec152_tmp[4];
		int* 	iRec215 = &iRec215_tmp[4];
		float* 	fYec153 = &fYec153_tmp[4];
		int* 	iRec216 = &iRec216_tmp[4];
		float* 	fYec154 = &fYec154_tmp[4];
		float* 	fYec155 = &fYec155_tmp[4];
		float* 	fRec213 = &fRec213_tmp[4];
		float* 	fRec212 = &fRec212_tmp[4];
		int* 	iRec219 = &iRec219_tmp[4];
		float* 	fYec156 = &fYec156_tmp[4];
		int* 	iRec220 = &iRec220_tmp[4];
		float* 	fYec157 = &fYec157_tmp[4];
		int* 	iRec221 = &iRec221_tmp[4];
		float* 	fYec158 = &fYec158_tmp[4];
		float* 	fYec159 = &fYec159_tmp[4];
		float* 	fRec218 = &fRec218_tmp[4];
		float* 	fRec217 = &fRec217_tmp[4];
		int* 	iRec224 = &iRec224_tmp[4];
		float* 	fYec160 = &fYec160_tmp[4];
		int* 	iRec225 = &iRec225_tmp[4];
		float* 	fYec161 = &fYec161_tmp[4];
		float* 	fYec162 = &fYec162_tmp[4];
		float* 	fRec223 = &fRec223_tmp[4];
		float* 	fRec222 = &fRec222_tmp[4];
		int* 	iRec228 = &iRec228_tmp[4];
		float* 	fYec163 = &fYec163_tmp[4];
		int* 	iRec229 = &iRec229_tmp[4];
		float* 	fYec164 = &fYec164_tmp[4];
		float* 	fYec165 = &fYec165_tmp[4];
		float* 	fRec227 = &fRec227_tmp[4];
		float* 	fRec226 = &fRec226_tmp[4];
		int* 	iRec232 = &iRec232_tmp[4];
		float* 	fYec166 = &fYec166_tmp[4];
		int* 	iRec233 = &iRec233_tmp[4];
		float* 	fYec167 = &fYec167_tmp[4];
		float* 	fYec168 = &fYec168_tmp[4];
		float* 	fRec231 = &fRec231_tmp[4];
		float* 	fRec230 = &fRec230_tmp[4];
		int* 	iRec236 = &iRec236_tmp[4];
		float* 	fYec169 = &fYec169_tmp[4];
		int* 	iRec237 = &iRec237_tmp[4];
		float* 	fYec170 = &fYec170_tmp[4];
		float* 	fYec171 = &fYec171_tmp[4];
		float* 	fRec235 = &fRec235_tmp[4];
		float* 	fRec234 = &fRec234_tmp[4];
		int* 	iRec240 = &iRec240_tmp[4];
		float* 	fYec172 = &fYec172_tmp[4];
		int* 	iRec241 = &iRec241_tmp[4];
		float* 	fYec173 = &fYec173_tmp[4];
		float* 	fYec174 = &fYec174_tmp[4];
		float* 	fRec239 = &fRec239_tmp[4];
		float* 	fRec238 = &fRec238_tmp[4];
		float* 	fYec175 = &fYec175_tmp[4];
		float* 	fRec243 = &fRec243_tmp[4];
		float* 	fRec242 = &fRec242_tmp[4];
		float* 	fYec176 = &fYec176_tmp[4];
		float* 	fRec245 = &fRec245_tmp[4];
		float* 	fRec244 = &fRec244_tmp[4];
		float* 	fYec177 = &fYec177_tmp[4];
		float* 	fRec247 = &fRec247_tmp[4];
		float* 	fRec246 = &fRec246_tmp[4];
		float* 	fYec178 = &fYec178_tmp[4];
		float* 	fRec249 = &fRec249_tmp[4];
		float* 	fRec248 = &fRec248_tmp[4];
		float* 	fYec179 = &fYec179_tmp[4];
		float* 	fRec251 = &fRec251_tmp[4];
		float* 	fRec250 = &fRec250_tmp[4];
		float* 	fYec180 = &fYec180_tmp[4];
		float* 	fRec253 = &fRec253_tmp[4];
		float* 	fRec252 = &fRec252_tmp[4];
		float* 	fYec181 = &fYec181_tmp[4];
		float* 	fRec255 = &fRec255_tmp[4];
		float* 	fRec254 = &fRec254_tmp[4];
		float* 	fYec182 = &fYec182_tmp[4];
		float* 	fRec257 = &fRec257_tmp[4];
		float* 	fRec256 = &fRec256_tmp[4];
		float* 	fYec183 = &fYec183_tmp[4];
		float* 	fRec259 = &fRec259_tmp[4];
		float* 	fRec258 = &fRec258_tmp[4];
		float* 	fYec184 = &fYec184_tmp[4];
		float* 	fRec261 = &fRec261_tmp[4];
		float* 	fRec260 = &fRec260_tmp[4];
		float* 	fYec185 = &fYec185_tmp[4];
		float* 	fRec263 = &fRec263_tmp[4];
		float* 	fRec262 = &fRec262_tmp[4];
		float* 	fYec186 = &fYec186_tmp[4];
		float* 	fRec265 = &fRec265_tmp[4];
		float* 	fRec264 = &fRec264_tmp[4];
		float* 	fYec187 = &fYec187_tmp[4];
		float* 	fRec267 = &fRec267_tmp[4];
		float* 	fRec266 = &fRec266_tmp[4];
		float* 	fYec188 = &fYec188_tmp[4];
		float* 	fRec269 = &fRec269_tmp[4];
		float* 	fRec268 = &fRec268_tmp[4];
		float* 	fYec189 = &fYec189_tmp[4];
		float* 	fRec271 = &fRec271_tmp[4];
		float* 	fRec270 = &fRec270_tmp[4];
		float* 	fYec190 = &fYec190_tmp[4];
		float* 	fRec273 = &fRec273_tmp[4];
		float* 	fRec272 = &fRec272_tmp[4];
		float* 	fYec191 = &fYec191_tmp[4];
		float* 	fRec275 = &fRec275_tmp[4];
		float* 	fRec274 = &fRec274_tmp[4];
		float* 	fYec192 = &fYec192_tmp[4];
		float* 	fRec277 = &fRec277_tmp[4];
		float* 	fRec276 = &fRec276_tmp[4];
		float* 	fYec193 = &fYec193_tmp[4];
		float* 	fRec279 = &fRec279_tmp[4];
		float* 	fRec278 = &fRec278_tmp[4];
		float* 	fYec194 = &fYec194_tmp[4];
		float* 	fRec186 = &fRec186_tmp[4];
		float 	fSlow82 = ((int((fSlow0 > 0.5f)))?0.01357f:0.0f);
		int* 	iRec285 = &iRec285_tmp[4];
		float* 	fRec282 = &fRec282_tmp[4];
		int* 	iRec283 = &iRec283_tmp[4];
		float* 	fRec284 = &fRec284_tmp[4];
		float* 	fYec195 = &fYec195_tmp[4];
		float* 	fRec281 = &fRec281_tmp[4];
		float* 	fRec280 = &fRec280_tmp[4];
		float* 	fYec196 = &fYec196_tmp[4];
		float 	fSlow83 = (4.5f * fslider5);
		float 	fSlow84 = (0.02f * fslider6);
		float* 	fRec286 = &fRec286_tmp[4];
		float 	fSlow85 = fslider7;
		float 	fSlow86 = (fSlow85 * (1 + (fSlow85 * ((2.81f * fSlow85) - 2.81f))));
		float 	fSlow87 = fslider8;
		float 	fSlow88 = (fSlow87 * (1 + (fSlow87 * ((2.81f * fSlow87) - 2.81f))));
		float* 	fRec287 = &fRec287_tmp[4];
		float 	fSlow89 = fslider9;
		float 	fSlow90 = (fSlow89 * (1 + (fSlow89 * ((2.81f * fSlow89) - 2.81f))));
		float* 	fYec197 = &fYec197_tmp[4];
		float* 	fRec289 = &fRec289_tmp[4];
		float 	fSlow91 = (0.4583333333333333f * fSlow90);
		float* 	fYec198 = &fYec198_tmp[4];
		float* 	fRec288 = &fRec288_tmp[4];
		float* 	fYec199 = &fYec199_tmp[4];
		float* 	fRec292 = &fRec292_tmp[4];
		float 	fSlow92 = fslider10;
		float 	fSlow93 = (fSlow92 * (1 + (fSlow92 * ((2.81f * fSlow92) - 2.81f))));
		float* 	fYec200 = &fYec200_tmp[4];
		float* 	fRec291 = &fRec291_tmp[4];
		float 	fSlow94 = (0.4583333333333333f * fSlow93);
		float* 	fYec201 = &fYec201_tmp[4];
		float* 	fRec290 = &fRec290_tmp[4];
		float* 	fYec202 = &fYec202_tmp[4];
		float* 	fRec295 = &fRec295_tmp[4];
		float 	fSlow95 = fslider11;
		float 	fSlow96 = (fSlow95 * (1 + (fSlow95 * ((2.81f * fSlow95) - 2.81f))));
		float* 	fYec203 = &fYec203_tmp[4];
		float* 	fRec294 = &fRec294_tmp[4];
		float 	fSlow97 = (0.4583333333333333f * fSlow96);
		float* 	fYec204 = &fYec204_tmp[4];
		float* 	fRec293 = &fRec293_tmp[4];
		float* 	fYec205 = &fYec205_tmp[4];
		float* 	fRec298 = &fRec298_tmp[4];
		float 	fSlow98 = fslider12;
		float 	fSlow99 = (fSlow98 * (1 + (fSlow98 * ((2.81f * fSlow98) - 2.81f))));
		float* 	fYec206 = &fYec206_tmp[4];
		float* 	fRec297 = &fRec297_tmp[4];
		float 	fSlow100 = (0.4583333333333333f * fSlow99);
		float* 	fYec207 = &fYec207_tmp[4];
		float* 	fRec296 = &fRec296_tmp[4];
		float 	fSlow101 = (0.9615384615384616f * fslider13);
		float 	fSlow102 = (0.019230769230769232f + fSlow101);
		float* 	fRec300 = &fRec300_tmp[4];
		float* 	fRec299 = &fRec299_tmp[4];
		float* 	fRec302 = &fRec302_tmp[4];
		float* 	fRec301 = &fRec301_tmp[4];
		float* 	fRec304 = &fRec304_tmp[4];
		float* 	fRec303 = &fRec303_tmp[4];
		float* 	fRec306 = &fRec306_tmp[4];
		float* 	fRec305 = &fRec305_tmp[4];
		float 	fSlow103 = (0.6f * (0.9807692307692307f - fSlow101));
		float 	fSlow104 = fslider14;
		float 	fSlow105 = (2.5f * fSlow104);
		float 	fSlow106 = fslider15;
		float 	fSlow107 = (fSlow106 * (1 + (fSlow106 * ((2.81f * fSlow106) - 2.81f))));
		float 	fSlow108 = fslider16;
		float 	fSlow109 = (fSlow108 * (1 + (fSlow108 * ((2.81f * fSlow108) - 2.81f))));
		float 	fSlow110 = fslider17;
		float 	fSlow111 = (fSlow110 * (1 + (fSlow110 * ((2.81f * fSlow110) - 2.81f))));
		float 	fSlow112 = fslider18;
		float 	fSlow113 = (fSlow112 * (1 + (fSlow112 * ((2.81f * fSlow112) - 2.81f))));
		float 	fSlow114 = fslider19;
		float 	fSlow115 = (fSlow114 * (1 + (fSlow114 * ((2.81f * fSlow114) - 2.81f))));
		float* 	fYec208 = &fYec208_tmp[4];
		float* 	fRec307 = &fRec307_tmp[4];
		float 	fSlow116 = fslider20;
		float 	fSlow117 = (fSlow116 * (1 + (fSlow116 * ((2.81f * fSlow116) - 2.81f))));
		float 	fSlow118 = fslider21;
		float 	fSlow119 = (fSlow118 * (1 + (fSlow118 * ((2.81f * fSlow118) - 2.81f))));
		float 	fSlow120 = (1 - fSlow104);
		float 	fSlow121 = (0.02f * faustpower<2>(fslider22));
		float* 	fRec308 = &fRec308_tmp[4];
		int index;
		for (index = 0; index <= fullcount - 32; index += 32) {
			// compute by blocks of 32 samples
			const int count = 32;
			FAUSTFLOAT* output0 = &output[0][index];
			FAUSTFLOAT* output1 = &output[1][index];
			// SECTION : 1
			// LOOP 0x39897e0
			// pre processing
			for (int i=0; i<4; i++) fRec5_tmp[i]=fRec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec5[i] = (((int((fRec5[i-1] > 1.0f)))?(fRec5[i-1] - 1.0f):fRec5[i-1]) + fSlow6);
			}
			// post processing
			for (int i=0; i<4; i++) fRec5_perm[i]=fRec5_tmp[count+i];
			
			// SECTION : 2
			// LOOP 0x3988c70
			// exec code
			for (int i=0; i<count; i++) {
				fZec1[i] = ((fSlow7 * sinf((6.283185307179586f * fRec5[i]))) + fSlow5);
			}
			
			// SECTION : 3
			// LOOP 0x3987df0
			// pre processing
			for (int i=0; i<4; i++) fRec4_tmp[i]=fRec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec2[i] = ((fConst1 * float((6271.926975707989f * (fZec1[i] * fSlow4)))) + fRec4[i-1]);
				fRec4[i] = ((int((fZec2[i] > 1.0f)))?(fZec2[i] - 1.0f):fZec2[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec4_perm[i]=fRec4_tmp[count+i];
			
			// LOOP 0x39a0dd0
			// pre processing
			for (int i=0; i<4; i++) fRec13_tmp[i]=fRec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec17[i] = ((fConst1 * float((6644.875161279122f * (fZec1[i] * fSlow9)))) + fRec13[i-1]);
				fRec13[i] = ((int((fZec17[i] > 1.0f)))?(fZec17[i] - 1.0f):fZec17[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec13_perm[i]=fRec13_tmp[count+i];
			
			// LOOP 0x39b5070
			// pre processing
			for (int i=0; i<4; i++) fRec21_tmp[i]=fRec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec32[i] = ((fConst1 * float((7.04e+03f * (fZec1[i] * fSlow11)))) + fRec21[i-1]);
				fRec21[i] = ((int((fZec32[i] > 1.0f)))?(fZec32[i] - 1.0f):fZec32[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec21_perm[i]=fRec21_tmp[count+i];
			
			// LOOP 0x39c8e60
			// pre processing
			for (int i=0; i<4; i++) fRec29_tmp[i]=fRec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec47[i] = ((fConst1 * float((7458.620184289437f * (fZec1[i] * fSlow13)))) + fRec29[i-1]);
				fRec29[i] = ((int((fZec47[i] > 1.0f)))?(fZec47[i] - 1.0f):fZec47[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec29_perm[i]=fRec29_tmp[count+i];
			
			// LOOP 0x39dcfa0
			// pre processing
			for (int i=0; i<4; i++) fRec37_tmp[i]=fRec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec62[i] = ((fConst1 * float((7902.132820097988f * (fZec1[i] * fSlow15)))) + fRec37[i-1]);
				fRec37[i] = ((int((fZec62[i] > 1.0f)))?(fZec62[i] - 1.0f):fZec62[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec37_perm[i]=fRec37_tmp[count+i];
			
			// LOOP 0x39f0f30
			// pre processing
			for (int i=0; i<4; i++) fRec45_tmp[i]=fRec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec77[i] = ((fConst1 * float((4186.009044809578f * (fZec1[i] * fSlow17)))) + fRec45[i-1]);
				fRec45[i] = ((int((fZec77[i] > 1.0f)))?(fZec77[i] - 1.0f):fZec77[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec45_perm[i]=fRec45_tmp[count+i];
			
			// LOOP 0x3a03120
			// pre processing
			for (int i=0; i<4; i++) fRec52_tmp[i]=fRec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec90[i] = ((fConst1 * float((4434.922095629953f * (fZec1[i] * fSlow19)))) + fRec52[i-1]);
				fRec52[i] = ((int((fZec90[i] > 1.0f)))?(fZec90[i] - 1.0f):fZec90[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec52_perm[i]=fRec52_tmp[count+i];
			
			// LOOP 0x3a14f20
			// pre processing
			for (int i=0; i<4; i++) fRec59_tmp[i]=fRec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec103[i] = ((fConst1 * float((4698.63628667852f * (fZec1[i] * fSlow21)))) + fRec59[i-1]);
				fRec59[i] = ((int((fZec103[i] > 1.0f)))?(fZec103[i] - 1.0f):fZec103[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec59_perm[i]=fRec59_tmp[count+i];
			
			// LOOP 0x3a26a50
			// pre processing
			for (int i=0; i<4; i++) fRec66_tmp[i]=fRec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec116[i] = ((fConst1 * float((4978.031739553295f * (fZec1[i] * fSlow23)))) + fRec66[i-1]);
				fRec66[i] = ((int((fZec116[i] > 1.0f)))?(fZec116[i] - 1.0f):fZec116[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec66_perm[i]=fRec66_tmp[count+i];
			
			// LOOP 0x3a38700
			// pre processing
			for (int i=0; i<4; i++) fRec73_tmp[i]=fRec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec129[i] = ((fConst1 * float((5274.04091060592f * (fSlow25 * fZec1[i])))) + fRec73[i-1]);
				fRec73[i] = ((int((fZec129[i] > 1.0f)))?(fZec129[i] - 1.0f):fZec129[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec73_perm[i]=fRec73_tmp[count+i];
			
			// LOOP 0x3a4a480
			// pre processing
			for (int i=0; i<4; i++) fRec80_tmp[i]=fRec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec142[i] = ((fConst1 * float((5587.651702928062f * (fZec1[i] * fSlow27)))) + fRec80[i-1]);
				fRec80[i] = ((int((fZec142[i] > 1.0f)))?(fZec142[i] - 1.0f):fZec142[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec80_perm[i]=fRec80_tmp[count+i];
			
			// LOOP 0x3a5c340
			// pre processing
			for (int i=0; i<4; i++) fRec87_tmp[i]=fRec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec155[i] = ((fConst1 * float((5919.91076338615f * (fZec1[i] * fSlow29)))) + fRec87[i-1]);
				fRec87[i] = ((int((fZec155[i] > 1.0f)))?(fZec155[i] - 1.0f):fZec155[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec87_perm[i]=fRec87_tmp[count+i];
			
			// SECTION : 4
			// LOOP 0x3987ce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec3[i] = (fRec4[i] - fRec4[i-1]);
			}
			
			// LOOP 0x39a0cc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec18[i] = (fRec13[i] - fRec13[i-1]);
			}
			
			// LOOP 0x39b4f60
			// exec code
			for (int i=0; i<count; i++) {
				fZec33[i] = (fRec21[i] - fRec21[i-1]);
			}
			
			// LOOP 0x39c8d50
			// exec code
			for (int i=0; i<count; i++) {
				fZec48[i] = (fRec29[i] - fRec29[i-1]);
			}
			
			// LOOP 0x39dce90
			// exec code
			for (int i=0; i<count; i++) {
				fZec63[i] = (fRec37[i] - fRec37[i-1]);
			}
			
			// LOOP 0x39f0e20
			// exec code
			for (int i=0; i<count; i++) {
				fZec78[i] = (fRec45[i] - fRec45[i-1]);
			}
			
			// LOOP 0x3a03010
			// exec code
			for (int i=0; i<count; i++) {
				fZec91[i] = (fRec52[i] - fRec52[i-1]);
			}
			
			// LOOP 0x3a14e10
			// exec code
			for (int i=0; i<count; i++) {
				fZec104[i] = (fRec59[i] - fRec59[i-1]);
			}
			
			// LOOP 0x3a26940
			// exec code
			for (int i=0; i<count; i++) {
				fZec117[i] = (fRec66[i] - fRec66[i-1]);
			}
			
			// LOOP 0x3a385f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec130[i] = (fRec73[i] - fRec73[i-1]);
			}
			
			// LOOP 0x3a4a370
			// exec code
			for (int i=0; i<count; i++) {
				fZec143[i] = (fRec80[i] - fRec80[i-1]);
			}
			
			// LOOP 0x3a5c230
			// exec code
			for (int i=0; i<count; i++) {
				fZec156[i] = (fRec87[i] - fRec87[i-1]);
			}
			
			// SECTION : 5
			// LOOP 0x3987560
			// pre processing
			for (int i=0; i<4; i++) iRec3_tmp[i]=iRec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec3[i] = ((int((fZec3[i] < 0)))?(1 - iRec3[i-1]):iRec3[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec3_perm[i]=iRec3_tmp[count+i];
			
			// LOOP 0x39a05e0
			// pre processing
			for (int i=0; i<4; i++) iRec12_tmp[i]=iRec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec12[i] = ((int((fZec18[i] < 0)))?(1 - iRec12[i-1]):iRec12[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec12_perm[i]=iRec12_tmp[count+i];
			
			// LOOP 0x39b4880
			// pre processing
			for (int i=0; i<4; i++) iRec20_tmp[i]=iRec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec20[i] = ((int((fZec33[i] < 0)))?(1 - iRec20[i-1]):iRec20[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec20_perm[i]=iRec20_tmp[count+i];
			
			// LOOP 0x39c8670
			// pre processing
			for (int i=0; i<4; i++) iRec28_tmp[i]=iRec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec28[i] = ((int((fZec48[i] < 0)))?(1 - iRec28[i-1]):iRec28[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec28_perm[i]=iRec28_tmp[count+i];
			
			// LOOP 0x39dc7b0
			// pre processing
			for (int i=0; i<4; i++) iRec36_tmp[i]=iRec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec36[i] = ((int((fZec63[i] < 0)))?(1 - iRec36[i-1]):iRec36[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec36_perm[i]=iRec36_tmp[count+i];
			
			// LOOP 0x39f0740
			// pre processing
			for (int i=0; i<4; i++) iRec44_tmp[i]=iRec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec44[i] = ((int((fZec78[i] < 0)))?(1 - iRec44[i-1]):iRec44[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec44_perm[i]=iRec44_tmp[count+i];
			
			// LOOP 0x3a02930
			// pre processing
			for (int i=0; i<4; i++) iRec51_tmp[i]=iRec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec51[i] = ((int((fZec91[i] < 0)))?(1 - iRec51[i-1]):iRec51[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec51_perm[i]=iRec51_tmp[count+i];
			
			// LOOP 0x3a14730
			// pre processing
			for (int i=0; i<4; i++) iRec58_tmp[i]=iRec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec58[i] = ((int((fZec104[i] < 0)))?(1 - iRec58[i-1]):iRec58[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec58_perm[i]=iRec58_tmp[count+i];
			
			// LOOP 0x3a26260
			// pre processing
			for (int i=0; i<4; i++) iRec65_tmp[i]=iRec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec65[i] = ((int((fZec117[i] < 0)))?(1 - iRec65[i-1]):iRec65[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec65_perm[i]=iRec65_tmp[count+i];
			
			// LOOP 0x3a37f10
			// pre processing
			for (int i=0; i<4; i++) iRec72_tmp[i]=iRec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec72[i] = ((int((fZec130[i] < 0)))?(1 - iRec72[i-1]):iRec72[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec72_perm[i]=iRec72_tmp[count+i];
			
			// LOOP 0x3a49ce0
			// pre processing
			for (int i=0; i<4; i++) iRec79_tmp[i]=iRec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec79[i] = ((int((fZec143[i] < 0)))?(1 - iRec79[i-1]):iRec79[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec79_perm[i]=iRec79_tmp[count+i];
			
			// LOOP 0x3a5bba0
			// pre processing
			for (int i=0; i<4; i++) iRec86_tmp[i]=iRec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec86[i] = ((int((fZec156[i] < 0)))?(1 - iRec86[i-1]):iRec86[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec86_perm[i]=iRec86_tmp[count+i];
			
			// SECTION : 6
			// LOOP 0x3987420
			// pre processing
			for (int i=0; i<4; i++) fYec0_tmp[i]=fYec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec0[i] = (fRec4[i] + iRec3[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec0_perm[i]=fYec0_tmp[count+i];
			
			// LOOP 0x39a04a0
			// pre processing
			for (int i=0; i<4; i++) fYec6_tmp[i]=fYec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec6[i] = (fRec13[i] + iRec12[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec6_perm[i]=fYec6_tmp[count+i];
			
			// LOOP 0x39b4740
			// pre processing
			for (int i=0; i<4; i++) fYec12_tmp[i]=fYec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec12[i] = (fRec21[i] + iRec20[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec12_perm[i]=fYec12_tmp[count+i];
			
			// LOOP 0x39c8530
			// pre processing
			for (int i=0; i<4; i++) fYec18_tmp[i]=fYec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec18[i] = (fRec29[i] + iRec28[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec18_perm[i]=fYec18_tmp[count+i];
			
			// LOOP 0x39dc670
			// pre processing
			for (int i=0; i<4; i++) fYec24_tmp[i]=fYec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec24[i] = (fRec37[i] + iRec36[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec24_perm[i]=fYec24_tmp[count+i];
			
			// LOOP 0x39f0600
			// pre processing
			for (int i=0; i<4; i++) fYec30_tmp[i]=fYec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec30[i] = (fRec45[i] + iRec44[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec30_perm[i]=fYec30_tmp[count+i];
			
			// LOOP 0x3a027f0
			// pre processing
			for (int i=0; i<4; i++) fYec35_tmp[i]=fYec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec35[i] = (fRec52[i] + iRec51[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec35_perm[i]=fYec35_tmp[count+i];
			
			// LOOP 0x3a145f0
			// pre processing
			for (int i=0; i<4; i++) fYec40_tmp[i]=fYec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec40[i] = (fRec59[i] + iRec58[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec40_perm[i]=fYec40_tmp[count+i];
			
			// LOOP 0x3a26120
			// pre processing
			for (int i=0; i<4; i++) fYec45_tmp[i]=fYec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec45[i] = (fRec66[i] + iRec65[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec45_perm[i]=fYec45_tmp[count+i];
			
			// LOOP 0x3a37dd0
			// pre processing
			for (int i=0; i<4; i++) fYec50_tmp[i]=fYec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec50[i] = (fRec73[i] + iRec72[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec50_perm[i]=fYec50_tmp[count+i];
			
			// LOOP 0x3a49ba0
			// pre processing
			for (int i=0; i<4; i++) fYec55_tmp[i]=fYec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec55[i] = (fRec80[i] + iRec79[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec55_perm[i]=fYec55_tmp[count+i];
			
			// LOOP 0x3a5ba60
			// pre processing
			for (int i=0; i<4; i++) fYec60_tmp[i]=fYec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec60[i] = (fRec87[i] + iRec86[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec60_perm[i]=fYec60_tmp[count+i];
			
			// SECTION : 7
			// LOOP 0x39872e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec4[i] = (0.5f * fYec0[i]);
			}
			
			// LOOP 0x3990530
			// exec code
			for (int i=0; i<count; i++) {
				fZec5[i] = (0.5f * fYec0[i-1]);
			}
			
			// LOOP 0x39a0360
			// exec code
			for (int i=0; i<count; i++) {
				fZec19[i] = (0.5f * fYec6[i]);
			}
			
			// LOOP 0x39a4a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec20[i] = (0.5f * fYec6[i-1]);
			}
			
			// LOOP 0x39b4600
			// exec code
			for (int i=0; i<count; i++) {
				fZec34[i] = (0.5f * fYec12[i]);
			}
			
			// LOOP 0x39b8c50
			// exec code
			for (int i=0; i<count; i++) {
				fZec35[i] = (0.5f * fYec12[i-1]);
			}
			
			// LOOP 0x39c83f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec49[i] = (0.5f * fYec18[i]);
			}
			
			// LOOP 0x39ccaa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec50[i] = (0.5f * fYec18[i-1]);
			}
			
			// LOOP 0x39dc530
			// exec code
			for (int i=0; i<count; i++) {
				fZec64[i] = (0.5f * fYec24[i]);
			}
			
			// LOOP 0x39e0be0
			// exec code
			for (int i=0; i<count; i++) {
				fZec65[i] = (0.5f * fYec24[i-1]);
			}
			
			// LOOP 0x39f04c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec79[i] = (0.5f * fYec30[i]);
			}
			
			// LOOP 0x39f4af0
			// exec code
			for (int i=0; i<count; i++) {
				fZec80[i] = (0.5f * fYec30[i-1]);
			}
			
			// LOOP 0x3a026b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec92[i] = (0.5f * fYec35[i]);
			}
			
			// LOOP 0x3a06d60
			// exec code
			for (int i=0; i<count; i++) {
				fZec93[i] = (0.5f * fYec35[i-1]);
			}
			
			// LOOP 0x3a144b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec105[i] = (0.5f * fYec40[i]);
			}
			
			// LOOP 0x3a18b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec106[i] = (0.5f * fYec40[i-1]);
			}
			
			// LOOP 0x3a25fe0
			// exec code
			for (int i=0; i<count; i++) {
				fZec118[i] = (0.5f * fYec45[i]);
			}
			
			// LOOP 0x3a2a690
			// exec code
			for (int i=0; i<count; i++) {
				fZec119[i] = (0.5f * fYec45[i-1]);
			}
			
			// LOOP 0x3a37c90
			// exec code
			for (int i=0; i<count; i++) {
				fZec131[i] = (0.5f * fYec50[i]);
			}
			
			// LOOP 0x3a3c340
			// exec code
			for (int i=0; i<count; i++) {
				fZec132[i] = (0.5f * fYec50[i-1]);
			}
			
			// LOOP 0x3a49a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec144[i] = (0.5f * fYec55[i]);
			}
			
			// LOOP 0x3a4e070
			// exec code
			for (int i=0; i<count; i++) {
				fZec145[i] = (0.5f * fYec55[i-1]);
			}
			
			// LOOP 0x3a5b920
			// exec code
			for (int i=0; i<count; i++) {
				fZec157[i] = (0.5f * fYec60[i]);
			}
			
			// LOOP 0x3a5ff30
			// exec code
			for (int i=0; i<count; i++) {
				fZec158[i] = (0.5f * fYec60[i-1]);
			}
			
			// SECTION : 8
			// LOOP 0x398fef0
			// pre processing
			for (int i=0; i<4; i++) iRec6_tmp[i]=iRec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec6[i] = ((int(((fZec4[i] - fZec5[i]) < 0)))?(1 - iRec6[i-1]):iRec6[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec6_perm[i]=iRec6_tmp[count+i];
			
			// LOOP 0x39a4460
			// pre processing
			for (int i=0; i<4; i++) iRec14_tmp[i]=iRec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec14[i] = ((int(((fZec19[i] - fZec20[i]) < 0)))?(1 - iRec14[i-1]):iRec14[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec14_perm[i]=iRec14_tmp[count+i];
			
			// LOOP 0x39b8650
			// pre processing
			for (int i=0; i<4; i++) iRec22_tmp[i]=iRec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec22[i] = ((int(((fZec34[i] - fZec35[i]) < 0)))?(1 - iRec22[i-1]):iRec22[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec22_perm[i]=iRec22_tmp[count+i];
			
			// LOOP 0x39cc4a0
			// pre processing
			for (int i=0; i<4; i++) iRec30_tmp[i]=iRec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec30[i] = ((int(((fZec49[i] - fZec50[i]) < 0)))?(1 - iRec30[i-1]):iRec30[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec30_perm[i]=iRec30_tmp[count+i];
			
			// LOOP 0x39e05e0
			// pre processing
			for (int i=0; i<4; i++) iRec38_tmp[i]=iRec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec38[i] = ((int(((fZec64[i] - fZec65[i]) < 0)))?(1 - iRec38[i-1]):iRec38[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec38_perm[i]=iRec38_tmp[count+i];
			
			// LOOP 0x39f44a0
			// pre processing
			for (int i=0; i<4; i++) iRec46_tmp[i]=iRec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec46[i] = ((int(((fZec79[i] - fZec80[i]) < 0)))?(1 - iRec46[i-1]):iRec46[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec46_perm[i]=iRec46_tmp[count+i];
			
			// LOOP 0x3a06760
			// pre processing
			for (int i=0; i<4; i++) iRec53_tmp[i]=iRec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec53[i] = ((int(((fZec92[i] - fZec93[i]) < 0)))?(1 - iRec53[i-1]):iRec53[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec53_perm[i]=iRec53_tmp[count+i];
			
			// LOOP 0x3a18560
			// pre processing
			for (int i=0; i<4; i++) iRec60_tmp[i]=iRec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec60[i] = ((int(((fZec105[i] - fZec106[i]) < 0)))?(1 - iRec60[i-1]):iRec60[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec60_perm[i]=iRec60_tmp[count+i];
			
			// LOOP 0x3a2a090
			// pre processing
			for (int i=0; i<4; i++) iRec67_tmp[i]=iRec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec67[i] = ((int(((fZec118[i] - fZec119[i]) < 0)))?(1 - iRec67[i-1]):iRec67[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec67_perm[i]=iRec67_tmp[count+i];
			
			// LOOP 0x3a3bd40
			// pre processing
			for (int i=0; i<4; i++) iRec74_tmp[i]=iRec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec74[i] = ((int(((fZec131[i] - fZec132[i]) < 0)))?(1 - iRec74[i-1]):iRec74[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec74_perm[i]=iRec74_tmp[count+i];
			
			// LOOP 0x3a4da70
			// pre processing
			for (int i=0; i<4; i++) iRec81_tmp[i]=iRec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec81[i] = ((int(((fZec144[i] - fZec145[i]) < 0)))?(1 - iRec81[i-1]):iRec81[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec81_perm[i]=iRec81_tmp[count+i];
			
			// LOOP 0x3a5f930
			// pre processing
			for (int i=0; i<4; i++) iRec88_tmp[i]=iRec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec88[i] = ((int(((fZec157[i] - fZec158[i]) < 0)))?(1 - iRec88[i-1]):iRec88[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec88_perm[i]=iRec88_tmp[count+i];
			
			// SECTION : 9
			// LOOP 0x39871a0
			// pre processing
			for (int i=0; i<4; i++) fYec1_tmp[i]=fYec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec1[i] = (iRec6[i] + fZec4[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec1_perm[i]=fYec1_tmp[count+i];
			
			// LOOP 0x39a0220
			// pre processing
			for (int i=0; i<4; i++) fYec7_tmp[i]=fYec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec7[i] = (iRec14[i] + fZec19[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec7_perm[i]=fYec7_tmp[count+i];
			
			// LOOP 0x39b44c0
			// pre processing
			for (int i=0; i<4; i++) fYec13_tmp[i]=fYec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec13[i] = (iRec22[i] + fZec34[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec13_perm[i]=fYec13_tmp[count+i];
			
			// LOOP 0x39c82b0
			// pre processing
			for (int i=0; i<4; i++) fYec19_tmp[i]=fYec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec19[i] = (iRec30[i] + fZec49[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec19_perm[i]=fYec19_tmp[count+i];
			
			// LOOP 0x39dc3f0
			// pre processing
			for (int i=0; i<4; i++) fYec25_tmp[i]=fYec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec25[i] = (iRec38[i] + fZec64[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec25_perm[i]=fYec25_tmp[count+i];
			
			// LOOP 0x39f0380
			// pre processing
			for (int i=0; i<4; i++) fYec31_tmp[i]=fYec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec31[i] = (iRec46[i] + fZec79[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec31_perm[i]=fYec31_tmp[count+i];
			
			// LOOP 0x3a02570
			// pre processing
			for (int i=0; i<4; i++) fYec36_tmp[i]=fYec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec36[i] = (iRec53[i] + fZec92[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec36_perm[i]=fYec36_tmp[count+i];
			
			// LOOP 0x3a14370
			// pre processing
			for (int i=0; i<4; i++) fYec41_tmp[i]=fYec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec41[i] = (iRec60[i] + fZec105[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec41_perm[i]=fYec41_tmp[count+i];
			
			// LOOP 0x3a25ea0
			// pre processing
			for (int i=0; i<4; i++) fYec46_tmp[i]=fYec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec46[i] = (iRec67[i] + fZec118[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec46_perm[i]=fYec46_tmp[count+i];
			
			// LOOP 0x3a37b50
			// pre processing
			for (int i=0; i<4; i++) fYec51_tmp[i]=fYec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec51[i] = (iRec74[i] + fZec131[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec51_perm[i]=fYec51_tmp[count+i];
			
			// LOOP 0x3a49920
			// pre processing
			for (int i=0; i<4; i++) fYec56_tmp[i]=fYec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec56[i] = (iRec81[i] + fZec144[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec56_perm[i]=fYec56_tmp[count+i];
			
			// LOOP 0x3a5b7e0
			// pre processing
			for (int i=0; i<4; i++) fYec61_tmp[i]=fYec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec61[i] = (iRec88[i] + fZec157[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec61_perm[i]=fYec61_tmp[count+i];
			
			// SECTION : 10
			// LOOP 0x3987060
			// exec code
			for (int i=0; i<count; i++) {
				fZec6[i] = (0.5f * fYec1[i]);
			}
			
			// LOOP 0x39927c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec7[i] = (0.5f * fYec1[i-1]);
			}
			
			// LOOP 0x39a00e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec21[i] = (0.5f * fYec7[i]);
			}
			
			// LOOP 0x39a6db0
			// exec code
			for (int i=0; i<count; i++) {
				fZec22[i] = (0.5f * fYec7[i-1]);
			}
			
			// LOOP 0x39b4380
			// exec code
			for (int i=0; i<count; i++) {
				fZec36[i] = (0.5f * fYec13[i]);
			}
			
			// LOOP 0x39bafd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec37[i] = (0.5f * fYec13[i-1]);
			}
			
			// LOOP 0x39c8170
			// exec code
			for (int i=0; i<count; i++) {
				fZec51[i] = (0.5f * fYec19[i]);
			}
			
			// LOOP 0x39cee20
			// exec code
			for (int i=0; i<count; i++) {
				fZec52[i] = (0.5f * fYec19[i-1]);
			}
			
			// LOOP 0x39dc2b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec66[i] = (0.5f * fYec25[i]);
			}
			
			// LOOP 0x39e2f60
			// exec code
			for (int i=0; i<count; i++) {
				fZec67[i] = (0.5f * fYec25[i-1]);
			}
			
			// LOOP 0x39f0240
			// exec code
			for (int i=0; i<count; i++) {
				fZec81[i] = (0.5f * fYec31[i]);
			}
			
			// LOOP 0x39f6f10
			// exec code
			for (int i=0; i<count; i++) {
				fZec82[i] = (0.5f * fYec31[i-1]);
			}
			
			// LOOP 0x3a02430
			// exec code
			for (int i=0; i<count; i++) {
				fZec94[i] = (0.5f * fYec36[i]);
			}
			
			// LOOP 0x3a090e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec95[i] = (0.5f * fYec36[i-1]);
			}
			
			// LOOP 0x3a14230
			// exec code
			for (int i=0; i<count; i++) {
				fZec107[i] = (0.5f * fYec41[i]);
			}
			
			// LOOP 0x3a1aee0
			// exec code
			for (int i=0; i<count; i++) {
				fZec108[i] = (0.5f * fYec41[i-1]);
			}
			
			// LOOP 0x3a25d60
			// exec code
			for (int i=0; i<count; i++) {
				fZec120[i] = (0.5f * fYec46[i]);
			}
			
			// LOOP 0x3a2ca10
			// exec code
			for (int i=0; i<count; i++) {
				fZec121[i] = (0.5f * fYec46[i-1]);
			}
			
			// LOOP 0x3a37a10
			// exec code
			for (int i=0; i<count; i++) {
				fZec133[i] = (0.5f * fYec51[i]);
			}
			
			// LOOP 0x3a3e6c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec134[i] = (0.5f * fYec51[i-1]);
			}
			
			// LOOP 0x3a497e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec146[i] = (0.5f * fYec56[i]);
			}
			
			// LOOP 0x3a503f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec147[i] = (0.5f * fYec56[i-1]);
			}
			
			// LOOP 0x3a5b6a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec159[i] = (0.5f * fYec61[i]);
			}
			
			// LOOP 0x3a622b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec160[i] = (0.5f * fYec61[i-1]);
			}
			
			// SECTION : 11
			// LOOP 0x3992180
			// pre processing
			for (int i=0; i<4; i++) iRec7_tmp[i]=iRec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec7[i] = ((int(((fZec6[i] - fZec7[i]) < 0)))?(1 - iRec7[i-1]):iRec7[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec7_perm[i]=iRec7_tmp[count+i];
			
			// LOOP 0x39a67b0
			// pre processing
			for (int i=0; i<4; i++) iRec15_tmp[i]=iRec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec15[i] = ((int(((fZec21[i] - fZec22[i]) < 0)))?(1 - iRec15[i-1]):iRec15[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec15_perm[i]=iRec15_tmp[count+i];
			
			// LOOP 0x39ba9d0
			// pre processing
			for (int i=0; i<4; i++) iRec23_tmp[i]=iRec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec23[i] = ((int(((fZec36[i] - fZec37[i]) < 0)))?(1 - iRec23[i-1]):iRec23[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec23_perm[i]=iRec23_tmp[count+i];
			
			// LOOP 0x39ce820
			// pre processing
			for (int i=0; i<4; i++) iRec31_tmp[i]=iRec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec31[i] = ((int(((fZec51[i] - fZec52[i]) < 0)))?(1 - iRec31[i-1]):iRec31[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec31_perm[i]=iRec31_tmp[count+i];
			
			// LOOP 0x39e2960
			// pre processing
			for (int i=0; i<4; i++) iRec39_tmp[i]=iRec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec39[i] = ((int(((fZec66[i] - fZec67[i]) < 0)))?(1 - iRec39[i-1]):iRec39[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec39_perm[i]=iRec39_tmp[count+i];
			
			// LOOP 0x39f6910
			// pre processing
			for (int i=0; i<4; i++) iRec47_tmp[i]=iRec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec47[i] = ((int(((fZec81[i] - fZec82[i]) < 0)))?(1 - iRec47[i-1]):iRec47[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec47_perm[i]=iRec47_tmp[count+i];
			
			// LOOP 0x3a08ae0
			// pre processing
			for (int i=0; i<4; i++) iRec54_tmp[i]=iRec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec54[i] = ((int(((fZec94[i] - fZec95[i]) < 0)))?(1 - iRec54[i-1]):iRec54[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec54_perm[i]=iRec54_tmp[count+i];
			
			// LOOP 0x3a1a8e0
			// pre processing
			for (int i=0; i<4; i++) iRec61_tmp[i]=iRec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec61[i] = ((int(((fZec107[i] - fZec108[i]) < 0)))?(1 - iRec61[i-1]):iRec61[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec61_perm[i]=iRec61_tmp[count+i];
			
			// LOOP 0x3a2c410
			// pre processing
			for (int i=0; i<4; i++) iRec68_tmp[i]=iRec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec68[i] = ((int(((fZec120[i] - fZec121[i]) < 0)))?(1 - iRec68[i-1]):iRec68[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec68_perm[i]=iRec68_tmp[count+i];
			
			// LOOP 0x3a3e0c0
			// pre processing
			for (int i=0; i<4; i++) iRec75_tmp[i]=iRec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec75[i] = ((int(((fZec133[i] - fZec134[i]) < 0)))?(1 - iRec75[i-1]):iRec75[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec75_perm[i]=iRec75_tmp[count+i];
			
			// LOOP 0x3a4fdf0
			// pre processing
			for (int i=0; i<4; i++) iRec82_tmp[i]=iRec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec82[i] = ((int(((fZec146[i] - fZec147[i]) < 0)))?(1 - iRec82[i-1]):iRec82[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec82_perm[i]=iRec82_tmp[count+i];
			
			// LOOP 0x3a61cb0
			// pre processing
			for (int i=0; i<4; i++) iRec89_tmp[i]=iRec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec89[i] = ((int(((fZec159[i] - fZec160[i]) < 0)))?(1 - iRec89[i-1]):iRec89[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec89_perm[i]=iRec89_tmp[count+i];
			
			// SECTION : 12
			// LOOP 0x3986f20
			// pre processing
			for (int i=0; i<4; i++) fYec2_tmp[i]=fYec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec2[i] = (iRec7[i] + fZec6[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec2_perm[i]=fYec2_tmp[count+i];
			
			// LOOP 0x399ffa0
			// pre processing
			for (int i=0; i<4; i++) fYec8_tmp[i]=fYec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec8[i] = (iRec15[i] + fZec21[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec8_perm[i]=fYec8_tmp[count+i];
			
			// LOOP 0x39b4240
			// pre processing
			for (int i=0; i<4; i++) fYec14_tmp[i]=fYec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec14[i] = (iRec23[i] + fZec36[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec14_perm[i]=fYec14_tmp[count+i];
			
			// LOOP 0x39c8030
			// pre processing
			for (int i=0; i<4; i++) fYec20_tmp[i]=fYec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec20[i] = (iRec31[i] + fZec51[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec20_perm[i]=fYec20_tmp[count+i];
			
			// LOOP 0x39dc170
			// pre processing
			for (int i=0; i<4; i++) fYec26_tmp[i]=fYec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec26[i] = (iRec39[i] + fZec66[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec26_perm[i]=fYec26_tmp[count+i];
			
			// LOOP 0x39f0100
			// pre processing
			for (int i=0; i<4; i++) fYec32_tmp[i]=fYec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec32[i] = (iRec47[i] + fZec81[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec32_perm[i]=fYec32_tmp[count+i];
			
			// LOOP 0x3a022f0
			// pre processing
			for (int i=0; i<4; i++) fYec37_tmp[i]=fYec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec37[i] = (iRec54[i] + fZec94[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec37_perm[i]=fYec37_tmp[count+i];
			
			// LOOP 0x3a140f0
			// pre processing
			for (int i=0; i<4; i++) fYec42_tmp[i]=fYec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec42[i] = (iRec61[i] + fZec107[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec42_perm[i]=fYec42_tmp[count+i];
			
			// LOOP 0x3a25c20
			// pre processing
			for (int i=0; i<4; i++) fYec47_tmp[i]=fYec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec47[i] = (iRec68[i] + fZec120[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec47_perm[i]=fYec47_tmp[count+i];
			
			// LOOP 0x3a378d0
			// pre processing
			for (int i=0; i<4; i++) fYec52_tmp[i]=fYec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec52[i] = (iRec75[i] + fZec133[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec52_perm[i]=fYec52_tmp[count+i];
			
			// LOOP 0x3a496a0
			// pre processing
			for (int i=0; i<4; i++) fYec57_tmp[i]=fYec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec57[i] = (iRec82[i] + fZec146[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec57_perm[i]=fYec57_tmp[count+i];
			
			// LOOP 0x3a5b560
			// pre processing
			for (int i=0; i<4; i++) fYec62_tmp[i]=fYec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec62[i] = (iRec89[i] + fZec159[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec62_perm[i]=fYec62_tmp[count+i];
			
			// SECTION : 13
			// LOOP 0x3986de0
			// exec code
			for (int i=0; i<count; i++) {
				fZec8[i] = (0.5f * fYec2[i]);
			}
			
			// LOOP 0x3994aa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec9[i] = (0.5f * fYec2[i-1]);
			}
			
			// LOOP 0x399fe60
			// exec code
			for (int i=0; i<count; i++) {
				fZec23[i] = (0.5f * fYec8[i]);
			}
			
			// LOOP 0x39a9100
			// exec code
			for (int i=0; i<count; i++) {
				fZec24[i] = (0.5f * fYec8[i-1]);
			}
			
			// LOOP 0x39b4100
			// exec code
			for (int i=0; i<count; i++) {
				fZec38[i] = (0.5f * fYec14[i]);
			}
			
			// LOOP 0x39bd350
			// exec code
			for (int i=0; i<count; i++) {
				fZec39[i] = (0.5f * fYec14[i-1]);
			}
			
			// LOOP 0x39c7ef0
			// exec code
			for (int i=0; i<count; i++) {
				fZec53[i] = (0.5f * fYec20[i]);
			}
			
			// LOOP 0x39d11a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec54[i] = (0.5f * fYec20[i-1]);
			}
			
			// LOOP 0x39dc030
			// exec code
			for (int i=0; i<count; i++) {
				fZec68[i] = (0.5f * fYec26[i]);
			}
			
			// LOOP 0x39e52e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec69[i] = (0.5f * fYec26[i-1]);
			}
			
			// LOOP 0x39effc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec83[i] = (0.5f * fYec32[i]);
			}
			
			// LOOP 0x39f9290
			// exec code
			for (int i=0; i<count; i++) {
				fZec84[i] = (0.5f * fYec32[i-1]);
			}
			
			// LOOP 0x3a021b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec96[i] = (0.5f * fYec37[i]);
			}
			
			// LOOP 0x3a0b460
			// exec code
			for (int i=0; i<count; i++) {
				fZec97[i] = (0.5f * fYec37[i-1]);
			}
			
			// LOOP 0x3a13fb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec109[i] = (0.5f * fYec42[i]);
			}
			
			// LOOP 0x3a1d260
			// exec code
			for (int i=0; i<count; i++) {
				fZec110[i] = (0.5f * fYec42[i-1]);
			}
			
			// LOOP 0x3a25ae0
			// exec code
			for (int i=0; i<count; i++) {
				fZec122[i] = (0.5f * fYec47[i]);
			}
			
			// LOOP 0x3a2ed90
			// exec code
			for (int i=0; i<count; i++) {
				fZec123[i] = (0.5f * fYec47[i-1]);
			}
			
			// LOOP 0x3a37790
			// exec code
			for (int i=0; i<count; i++) {
				fZec135[i] = (0.5f * fYec52[i]);
			}
			
			// LOOP 0x3a40a40
			// exec code
			for (int i=0; i<count; i++) {
				fZec136[i] = (0.5f * fYec52[i-1]);
			}
			
			// LOOP 0x3a49560
			// exec code
			for (int i=0; i<count; i++) {
				fZec148[i] = (0.5f * fYec57[i]);
			}
			
			// LOOP 0x3a52770
			// exec code
			for (int i=0; i<count; i++) {
				fZec149[i] = (0.5f * fYec57[i-1]);
			}
			
			// LOOP 0x3a5b420
			// exec code
			for (int i=0; i<count; i++) {
				fZec161[i] = (0.5f * fYec62[i]);
			}
			
			// LOOP 0x3a64630
			// exec code
			for (int i=0; i<count; i++) {
				fZec162[i] = (0.5f * fYec62[i-1]);
			}
			
			// SECTION : 14
			// LOOP 0x3994460
			// pre processing
			for (int i=0; i<4; i++) iRec8_tmp[i]=iRec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec8[i] = ((int(((fZec8[i] - fZec9[i]) < 0)))?(1 - iRec8[i-1]):iRec8[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec8_perm[i]=iRec8_tmp[count+i];
			
			// LOOP 0x39a8b00
			// pre processing
			for (int i=0; i<4; i++) iRec16_tmp[i]=iRec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec16[i] = ((int(((fZec23[i] - fZec24[i]) < 0)))?(1 - iRec16[i-1]):iRec16[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec16_perm[i]=iRec16_tmp[count+i];
			
			// LOOP 0x39bcd50
			// pre processing
			for (int i=0; i<4; i++) iRec24_tmp[i]=iRec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec24[i] = ((int(((fZec38[i] - fZec39[i]) < 0)))?(1 - iRec24[i-1]):iRec24[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec24_perm[i]=iRec24_tmp[count+i];
			
			// LOOP 0x39d0ba0
			// pre processing
			for (int i=0; i<4; i++) iRec32_tmp[i]=iRec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec32[i] = ((int(((fZec53[i] - fZec54[i]) < 0)))?(1 - iRec32[i-1]):iRec32[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec32_perm[i]=iRec32_tmp[count+i];
			
			// LOOP 0x39e4ce0
			// pre processing
			for (int i=0; i<4; i++) iRec40_tmp[i]=iRec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec40[i] = ((int(((fZec68[i] - fZec69[i]) < 0)))?(1 - iRec40[i-1]):iRec40[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec40_perm[i]=iRec40_tmp[count+i];
			
			// LOOP 0x39f8c90
			// pre processing
			for (int i=0; i<4; i++) iRec48_tmp[i]=iRec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec48[i] = ((int(((fZec83[i] - fZec84[i]) < 0)))?(1 - iRec48[i-1]):iRec48[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec48_perm[i]=iRec48_tmp[count+i];
			
			// LOOP 0x3a0ae60
			// pre processing
			for (int i=0; i<4; i++) iRec55_tmp[i]=iRec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec55[i] = ((int(((fZec96[i] - fZec97[i]) < 0)))?(1 - iRec55[i-1]):iRec55[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec55_perm[i]=iRec55_tmp[count+i];
			
			// LOOP 0x3a1cc60
			// pre processing
			for (int i=0; i<4; i++) iRec62_tmp[i]=iRec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec62[i] = ((int(((fZec109[i] - fZec110[i]) < 0)))?(1 - iRec62[i-1]):iRec62[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec62_perm[i]=iRec62_tmp[count+i];
			
			// LOOP 0x3a2e790
			// pre processing
			for (int i=0; i<4; i++) iRec69_tmp[i]=iRec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec69[i] = ((int(((fZec122[i] - fZec123[i]) < 0)))?(1 - iRec69[i-1]):iRec69[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec69_perm[i]=iRec69_tmp[count+i];
			
			// LOOP 0x3a40440
			// pre processing
			for (int i=0; i<4; i++) iRec76_tmp[i]=iRec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec76[i] = ((int(((fZec135[i] - fZec136[i]) < 0)))?(1 - iRec76[i-1]):iRec76[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec76_perm[i]=iRec76_tmp[count+i];
			
			// LOOP 0x3a52170
			// pre processing
			for (int i=0; i<4; i++) iRec83_tmp[i]=iRec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec83[i] = ((int(((fZec148[i] - fZec149[i]) < 0)))?(1 - iRec83[i-1]):iRec83[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec83_perm[i]=iRec83_tmp[count+i];
			
			// LOOP 0x3a64030
			// pre processing
			for (int i=0; i<4; i++) iRec90_tmp[i]=iRec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec90[i] = ((int(((fZec161[i] - fZec162[i]) < 0)))?(1 - iRec90[i-1]):iRec90[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec90_perm[i]=iRec90_tmp[count+i];
			
			// SECTION : 15
			// LOOP 0x3986ca0
			// pre processing
			for (int i=0; i<4; i++) fYec3_tmp[i]=fYec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec3[i] = (iRec8[i] + fZec8[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec3_perm[i]=fYec3_tmp[count+i];
			
			// LOOP 0x399fd20
			// pre processing
			for (int i=0; i<4; i++) fYec9_tmp[i]=fYec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec9[i] = (iRec16[i] + fZec23[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec9_perm[i]=fYec9_tmp[count+i];
			
			// LOOP 0x39b3fc0
			// pre processing
			for (int i=0; i<4; i++) fYec15_tmp[i]=fYec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec15[i] = (iRec24[i] + fZec38[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec15_perm[i]=fYec15_tmp[count+i];
			
			// LOOP 0x39c7db0
			// pre processing
			for (int i=0; i<4; i++) fYec21_tmp[i]=fYec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec21[i] = (iRec32[i] + fZec53[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec21_perm[i]=fYec21_tmp[count+i];
			
			// LOOP 0x39dbef0
			// pre processing
			for (int i=0; i<4; i++) fYec27_tmp[i]=fYec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec27[i] = (iRec40[i] + fZec68[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec27_perm[i]=fYec27_tmp[count+i];
			
			// LOOP 0x39efe80
			// pre processing
			for (int i=0; i<4; i++) fYec33_tmp[i]=fYec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec33[i] = (iRec48[i] + fZec83[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec33_perm[i]=fYec33_tmp[count+i];
			
			// LOOP 0x3a02070
			// pre processing
			for (int i=0; i<4; i++) fYec38_tmp[i]=fYec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec38[i] = (iRec55[i] + fZec96[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec38_perm[i]=fYec38_tmp[count+i];
			
			// LOOP 0x3a13e70
			// pre processing
			for (int i=0; i<4; i++) fYec43_tmp[i]=fYec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec43[i] = (iRec62[i] + fZec109[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec43_perm[i]=fYec43_tmp[count+i];
			
			// LOOP 0x3a259a0
			// pre processing
			for (int i=0; i<4; i++) fYec48_tmp[i]=fYec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec48[i] = (iRec69[i] + fZec122[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec48_perm[i]=fYec48_tmp[count+i];
			
			// LOOP 0x3a37650
			// pre processing
			for (int i=0; i<4; i++) fYec53_tmp[i]=fYec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec53[i] = (iRec76[i] + fZec135[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec53_perm[i]=fYec53_tmp[count+i];
			
			// LOOP 0x3a49420
			// pre processing
			for (int i=0; i<4; i++) fYec58_tmp[i]=fYec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec58[i] = (iRec83[i] + fZec148[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec58_perm[i]=fYec58_tmp[count+i];
			
			// LOOP 0x3a5b2e0
			// pre processing
			for (int i=0; i<4; i++) fYec63_tmp[i]=fYec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec63[i] = (iRec90[i] + fZec161[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec63_perm[i]=fYec63_tmp[count+i];
			
			// SECTION : 16
			// LOOP 0x3986b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec10[i] = (0.5f * fYec3[i]);
			}
			
			// LOOP 0x3996de0
			// exec code
			for (int i=0; i<count; i++) {
				fZec11[i] = (0.5f * fYec3[i-1]);
			}
			
			// LOOP 0x399fbe0
			// exec code
			for (int i=0; i<count; i++) {
				fZec25[i] = (0.5f * fYec9[i]);
			}
			
			// LOOP 0x39ab450
			// exec code
			for (int i=0; i<count; i++) {
				fZec26[i] = (0.5f * fYec9[i-1]);
			}
			
			// LOOP 0x39b3e80
			// exec code
			for (int i=0; i<count; i++) {
				fZec40[i] = (0.5f * fYec15[i]);
			}
			
			// LOOP 0x39bf6d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec41[i] = (0.5f * fYec15[i-1]);
			}
			
			// LOOP 0x39c7c70
			// exec code
			for (int i=0; i<count; i++) {
				fZec55[i] = (0.5f * fYec21[i]);
			}
			
			// LOOP 0x39d3520
			// exec code
			for (int i=0; i<count; i++) {
				fZec56[i] = (0.5f * fYec21[i-1]);
			}
			
			// LOOP 0x39dbdb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec70[i] = (0.5f * fYec27[i]);
			}
			
			// LOOP 0x39e7660
			// exec code
			for (int i=0; i<count; i++) {
				fZec71[i] = (0.5f * fYec27[i-1]);
			}
			
			// LOOP 0x39efd40
			// exec code
			for (int i=0; i<count; i++) {
				fZec85[i] = (0.5f * fYec33[i]);
			}
			
			// LOOP 0x39fba60
			// exec code
			for (int i=0; i<count; i++) {
				fZec86[i] = (0.5f * fYec33[i-1]);
			}
			
			// LOOP 0x3a01f30
			// exec code
			for (int i=0; i<count; i++) {
				fZec98[i] = (0.5f * fYec38[i]);
			}
			
			// LOOP 0x3a0dc30
			// exec code
			for (int i=0; i<count; i++) {
				fZec99[i] = (0.5f * fYec38[i-1]);
			}
			
			// LOOP 0x3a13d30
			// exec code
			for (int i=0; i<count; i++) {
				fZec111[i] = (0.5f * fYec43[i]);
			}
			
			// LOOP 0x3a1fa40
			// exec code
			for (int i=0; i<count; i++) {
				fZec112[i] = (0.5f * fYec43[i-1]);
			}
			
			// LOOP 0x3a25860
			// exec code
			for (int i=0; i<count; i++) {
				fZec124[i] = (0.5f * fYec48[i]);
			}
			
			// LOOP 0x3a31570
			// exec code
			for (int i=0; i<count; i++) {
				fZec125[i] = (0.5f * fYec48[i-1]);
			}
			
			// LOOP 0x3a37510
			// exec code
			for (int i=0; i<count; i++) {
				fZec137[i] = (0.5f * fYec53[i]);
			}
			
			// LOOP 0x3a43220
			// exec code
			for (int i=0; i<count; i++) {
				fZec138[i] = (0.5f * fYec53[i-1]);
			}
			
			// LOOP 0x3a492e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec150[i] = (0.5f * fYec58[i]);
			}
			
			// LOOP 0x3a54f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec151[i] = (0.5f * fYec58[i-1]);
			}
			
			// LOOP 0x3a5b1a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec163[i] = (0.5f * fYec63[i]);
			}
			
			// LOOP 0x3a66e10
			// exec code
			for (int i=0; i<count; i++) {
				fZec164[i] = (0.5f * fYec63[i-1]);
			}
			
			// SECTION : 17
			// LOOP 0x39967a0
			// pre processing
			for (int i=0; i<4; i++) iRec9_tmp[i]=iRec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec9[i] = ((int(((fZec10[i] - fZec11[i]) < 0)))?(1 - iRec9[i-1]):iRec9[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec9_perm[i]=iRec9_tmp[count+i];
			
			// LOOP 0x39aae50
			// pre processing
			for (int i=0; i<4; i++) iRec17_tmp[i]=iRec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec17[i] = ((int(((fZec25[i] - fZec26[i]) < 0)))?(1 - iRec17[i-1]):iRec17[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec17_perm[i]=iRec17_tmp[count+i];
			
			// LOOP 0x39bf0d0
			// pre processing
			for (int i=0; i<4; i++) iRec25_tmp[i]=iRec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec25[i] = ((int(((fZec40[i] - fZec41[i]) < 0)))?(1 - iRec25[i-1]):iRec25[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec25_perm[i]=iRec25_tmp[count+i];
			
			// LOOP 0x39d2f20
			// pre processing
			for (int i=0; i<4; i++) iRec33_tmp[i]=iRec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec33[i] = ((int(((fZec55[i] - fZec56[i]) < 0)))?(1 - iRec33[i-1]):iRec33[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec33_perm[i]=iRec33_tmp[count+i];
			
			// LOOP 0x39e7060
			// pre processing
			for (int i=0; i<4; i++) iRec41_tmp[i]=iRec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec41[i] = ((int(((fZec70[i] - fZec71[i]) < 0)))?(1 - iRec41[i-1]):iRec41[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec41_perm[i]=iRec41_tmp[count+i];
			
			// LOOP 0x3bebbc0
			// pre processing
			for (int i=0; i<4; i++) iRec189_tmp[i]=iRec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec189[i] = ((int(((fZec85[i] - fZec86[i]) < 0)))?(1 - iRec189[i-1]):iRec189[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec189_perm[i]=iRec189_tmp[count+i];
			
			// LOOP 0x3bf6640
			// pre processing
			for (int i=0; i<4; i++) iRec194_tmp[i]=iRec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec194[i] = ((int(((fZec98[i] - fZec99[i]) < 0)))?(1 - iRec194[i-1]):iRec194[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec194_perm[i]=iRec194_tmp[count+i];
			
			// LOOP 0x3c00a70
			// pre processing
			for (int i=0; i<4; i++) iRec199_tmp[i]=iRec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec199[i] = ((int(((fZec111[i] - fZec112[i]) < 0)))?(1 - iRec199[i-1]):iRec199[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec199_perm[i]=iRec199_tmp[count+i];
			
			// LOOP 0x3c0aeb0
			// pre processing
			for (int i=0; i<4; i++) iRec204_tmp[i]=iRec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec204[i] = ((int(((fZec124[i] - fZec125[i]) < 0)))?(1 - iRec204[i-1]):iRec204[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec204_perm[i]=iRec204_tmp[count+i];
			
			// LOOP 0x3c153e0
			// pre processing
			for (int i=0; i<4; i++) iRec209_tmp[i]=iRec209_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec209[i] = ((int(((fZec137[i] - fZec138[i]) < 0)))?(1 - iRec209[i-1]):iRec209[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec209_perm[i]=iRec209_tmp[count+i];
			
			// LOOP 0x3c1f8d0
			// pre processing
			for (int i=0; i<4; i++) iRec214_tmp[i]=iRec214_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec214[i] = ((int(((fZec150[i] - fZec151[i]) < 0)))?(1 - iRec214[i-1]):iRec214[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec214_perm[i]=iRec214_tmp[count+i];
			
			// LOOP 0x3c29e00
			// pre processing
			for (int i=0; i<4; i++) iRec219_tmp[i]=iRec219_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec219[i] = ((int(((fZec163[i] - fZec164[i]) < 0)))?(1 - iRec219[i-1]):iRec219[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec219_perm[i]=iRec219_tmp[count+i];
			
			// SECTION : 18
			// LOOP 0x3986a20
			// pre processing
			for (int i=0; i<4; i++) fYec4_tmp[i]=fYec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec4[i] = (iRec9[i] + fZec10[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec4_perm[i]=fYec4_tmp[count+i];
			
			// LOOP 0x399faa0
			// pre processing
			for (int i=0; i<4; i++) fYec10_tmp[i]=fYec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec10[i] = (iRec17[i] + fZec25[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec10_perm[i]=fYec10_tmp[count+i];
			
			// LOOP 0x39b3d40
			// pre processing
			for (int i=0; i<4; i++) fYec16_tmp[i]=fYec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec16[i] = (iRec25[i] + fZec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec16_perm[i]=fYec16_tmp[count+i];
			
			// LOOP 0x39c7b30
			// pre processing
			for (int i=0; i<4; i++) fYec22_tmp[i]=fYec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec22[i] = (iRec33[i] + fZec55[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec22_perm[i]=fYec22_tmp[count+i];
			
			// LOOP 0x39dbc70
			// pre processing
			for (int i=0; i<4; i++) fYec28_tmp[i]=fYec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec28[i] = (iRec41[i] + fZec70[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec28_perm[i]=fYec28_tmp[count+i];
			
			// LOOP 0x3beba20
			// pre processing
			for (int i=0; i<4; i++) fYec132_tmp[i]=fYec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec132[i] = (iRec189[i] + fZec85[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec132_perm[i]=fYec132_tmp[count+i];
			
			// LOOP 0x3bf64a0
			// pre processing
			for (int i=0; i<4; i++) fYec136_tmp[i]=fYec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec136[i] = (iRec194[i] + fZec98[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec136_perm[i]=fYec136_tmp[count+i];
			
			// LOOP 0x3c008d0
			// pre processing
			for (int i=0; i<4; i++) fYec140_tmp[i]=fYec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec140[i] = (iRec199[i] + fZec111[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec140_perm[i]=fYec140_tmp[count+i];
			
			// LOOP 0x3c0ad10
			// pre processing
			for (int i=0; i<4; i++) fYec144_tmp[i]=fYec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec144[i] = (iRec204[i] + fZec124[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec144_perm[i]=fYec144_tmp[count+i];
			
			// LOOP 0x3c15240
			// pre processing
			for (int i=0; i<4; i++) fYec148_tmp[i]=fYec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec148[i] = (iRec209[i] + fZec137[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec148_perm[i]=fYec148_tmp[count+i];
			
			// LOOP 0x3c1f730
			// pre processing
			for (int i=0; i<4; i++) fYec152_tmp[i]=fYec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec152[i] = (iRec214[i] + fZec150[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec152_perm[i]=fYec152_tmp[count+i];
			
			// LOOP 0x3c29c60
			// pre processing
			for (int i=0; i<4; i++) fYec156_tmp[i]=fYec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec156[i] = (iRec219[i] + fZec163[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec156_perm[i]=fYec156_tmp[count+i];
			
			// SECTION : 19
			// LOOP 0x39868e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec12[i] = (0.5f * fYec4[i]);
			}
			
			// LOOP 0x39996a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec13[i] = (0.5f * fYec4[i-1]);
			}
			
			// LOOP 0x399f960
			// exec code
			for (int i=0; i<count; i++) {
				fZec27[i] = (0.5f * fYec10[i]);
			}
			
			// LOOP 0x39adc10
			// exec code
			for (int i=0; i<count; i++) {
				fZec28[i] = (0.5f * fYec10[i-1]);
			}
			
			// LOOP 0x39b3c00
			// exec code
			for (int i=0; i<count; i++) {
				fZec42[i] = (0.5f * fYec16[i]);
			}
			
			// LOOP 0x39c1ea0
			// exec code
			for (int i=0; i<count; i++) {
				fZec43[i] = (0.5f * fYec16[i-1]);
			}
			
			// LOOP 0x39c79f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec57[i] = (0.5f * fYec22[i]);
			}
			
			// LOOP 0x39d5cf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec58[i] = (0.5f * fYec22[i-1]);
			}
			
			// LOOP 0x39dbb30
			// exec code
			for (int i=0; i<count; i++) {
				fZec72[i] = (0.5f * fYec28[i]);
			}
			
			// LOOP 0x39e9e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec73[i] = (0.5f * fYec28[i-1]);
			}
			
			// LOOP 0x39fc6e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec87[i] = ((1 + fRec45[i]) - fRec45[i-1]);
			}
			
			// LOOP 0x3a0e8b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec100[i] = ((1 + fRec52[i]) - fRec52[i-1]);
			}
			
			// LOOP 0x3a206c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec113[i] = ((1 + fRec59[i]) - fRec59[i-1]);
			}
			
			// LOOP 0x3a321f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec126[i] = ((1 + fRec66[i]) - fRec66[i-1]);
			}
			
			// LOOP 0x3a43ea0
			// exec code
			for (int i=0; i<count; i++) {
				fZec139[i] = ((1 + fRec73[i]) - fRec73[i-1]);
			}
			
			// LOOP 0x3beb8e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec272[i] = (0.5f * fYec132[i]);
			}
			
			// LOOP 0x3bedfa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec273[i] = (0.5f * fYec132[i-1]);
			}
			
			// LOOP 0x3bf6360
			// exec code
			for (int i=0; i<count; i++) {
				fZec277[i] = (0.5f * fYec136[i]);
			}
			
			// LOOP 0x3bf8a20
			// exec code
			for (int i=0; i<count; i++) {
				fZec278[i] = (0.5f * fYec136[i-1]);
			}
			
			// LOOP 0x3c00790
			// exec code
			for (int i=0; i<count; i++) {
				fZec282[i] = (0.5f * fYec140[i]);
			}
			
			// LOOP 0x3c02e50
			// exec code
			for (int i=0; i<count; i++) {
				fZec283[i] = (0.5f * fYec140[i-1]);
			}
			
			// LOOP 0x3c0abd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec287[i] = (0.5f * fYec144[i]);
			}
			
			// LOOP 0x3c0d290
			// exec code
			for (int i=0; i<count; i++) {
				fZec288[i] = (0.5f * fYec144[i-1]);
			}
			
			// LOOP 0x3c15100
			// exec code
			for (int i=0; i<count; i++) {
				fZec292[i] = (0.5f * fYec148[i]);
			}
			
			// LOOP 0x3c177c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec293[i] = (0.5f * fYec148[i-1]);
			}
			
			// LOOP 0x3c1f5f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec297[i] = (0.5f * fYec152[i]);
			}
			
			// LOOP 0x3c21cb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec298[i] = (0.5f * fYec152[i-1]);
			}
			
			// LOOP 0x3c29b20
			// exec code
			for (int i=0; i<count; i++) {
				fZec302[i] = (0.5f * fYec156[i]);
			}
			
			// LOOP 0x3c2c1e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec303[i] = (0.5f * fYec156[i-1]);
			}
			
			// SECTION : 20
			// LOOP 0x399a370
			// exec code
			for (int i=0; i<count; i++) {
				fZec14[i] = ((1 + fRec4[i]) - fRec4[i-1]);
			}
			
			// LOOP 0x39ae890
			// exec code
			for (int i=0; i<count; i++) {
				fZec29[i] = ((1 + fRec13[i]) - fRec13[i-1]);
			}
			
			// LOOP 0x39fc3f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec88[i] = saw_polyblep_fast(fRec45[i], fRec45[i-1], fRec45[i-2], ((int((fZec87[i] > 1.0f)))?fZec78[i]:fZec87[i]));
			}
			
			// LOOP 0x3a0e5c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec101[i] = saw_polyblep_fast(fRec52[i], fRec52[i-1], fRec52[i-2], ((int((fZec100[i] > 1.0f)))?fZec91[i]:fZec100[i]));
			}
			
			// LOOP 0x3a203d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec114[i] = saw_polyblep_fast(fRec59[i], fRec59[i-1], fRec59[i-2], ((int((fZec113[i] > 1.0f)))?fZec104[i]:fZec113[i]));
			}
			
			// LOOP 0x3a31f00
			// exec code
			for (int i=0; i<count; i++) {
				fZec127[i] = saw_polyblep_fast(fRec66[i], fRec66[i-1], fRec66[i-2], ((int((fZec126[i] > 1.0f)))?fZec117[i]:fZec126[i]));
			}
			
			// LOOP 0x3a43bb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec140[i] = saw_polyblep_fast(fRec73[i], fRec73[i-1], fRec73[i-2], ((int((fZec139[i] > 1.0f)))?fZec130[i]:fZec139[i]));
			}
			
			// LOOP 0x3a55bd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec152[i] = ((1 + fRec80[i]) - fRec80[i-1]);
			}
			
			// LOOP 0x3a67a90
			// exec code
			for (int i=0; i<count; i++) {
				fZec165[i] = ((1 + fRec87[i]) - fRec87[i-1]);
			}
			
			// LOOP 0x3a898f0
			// pre processing
			for (int i=0; i<4; i++) fYec70_tmp[i]=fYec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec70[i] = ((fZec83[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec70_perm[i]=fYec70_tmp[count+i];
			
			// LOOP 0x3a8f0f0
			// pre processing
			for (int i=0; i<4; i++) fYec71_tmp[i]=fYec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec71[i] = ((fZec96[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec71_perm[i]=fYec71_tmp[count+i];
			
			// LOOP 0x3a94f60
			// pre processing
			for (int i=0; i<4; i++) fYec72_tmp[i]=fYec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec72[i] = ((fZec109[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec72_perm[i]=fYec72_tmp[count+i];
			
			// LOOP 0x3a9a580
			// pre processing
			for (int i=0; i<4; i++) fYec73_tmp[i]=fYec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec73[i] = ((fZec122[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec73_perm[i]=fYec73_tmp[count+i];
			
			// LOOP 0x3a9fef0
			// pre processing
			for (int i=0; i<4; i++) fYec74_tmp[i]=fYec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec74[i] = ((fZec135[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec74_perm[i]=fYec74_tmp[count+i];
			
			// LOOP 0x3bed9a0
			// pre processing
			for (int i=0; i<4; i++) iRec190_tmp[i]=iRec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec190[i] = ((int(((fZec272[i] - fZec273[i]) < 0)))?(1 - iRec190[i-1]):iRec190[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec190_perm[i]=iRec190_tmp[count+i];
			
			// LOOP 0x3bf8420
			// pre processing
			for (int i=0; i<4; i++) iRec195_tmp[i]=iRec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec195[i] = ((int(((fZec277[i] - fZec278[i]) < 0)))?(1 - iRec195[i-1]):iRec195[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec195_perm[i]=iRec195_tmp[count+i];
			
			// LOOP 0x3c02850
			// pre processing
			for (int i=0; i<4; i++) iRec200_tmp[i]=iRec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec200[i] = ((int(((fZec282[i] - fZec283[i]) < 0)))?(1 - iRec200[i-1]):iRec200[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec200_perm[i]=iRec200_tmp[count+i];
			
			// LOOP 0x3c0cc90
			// pre processing
			for (int i=0; i<4; i++) iRec205_tmp[i]=iRec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec205[i] = ((int(((fZec287[i] - fZec288[i]) < 0)))?(1 - iRec205[i-1]):iRec205[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec205_perm[i]=iRec205_tmp[count+i];
			
			// LOOP 0x3c171c0
			// pre processing
			for (int i=0; i<4; i++) iRec210_tmp[i]=iRec210_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec210[i] = ((int(((fZec292[i] - fZec293[i]) < 0)))?(1 - iRec210[i-1]):iRec210[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec210_perm[i]=iRec210_tmp[count+i];
			
			// LOOP 0x3c216b0
			// pre processing
			for (int i=0; i<4; i++) iRec215_tmp[i]=iRec215_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec215[i] = ((int(((fZec297[i] - fZec298[i]) < 0)))?(1 - iRec215[i-1]):iRec215[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec215_perm[i]=iRec215_tmp[count+i];
			
			// LOOP 0x3c2bbe0
			// pre processing
			for (int i=0; i<4; i++) iRec220_tmp[i]=iRec220_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec220[i] = ((int(((fZec302[i] - fZec303[i]) < 0)))?(1 - iRec220[i-1]):iRec220[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec220_perm[i]=iRec220_tmp[count+i];
			
			// LOOP 0x3c340d0
			// pre processing
			for (int i=0; i<4; i++) iRec224_tmp[i]=iRec224_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec224[i] = ((int(((fZec12[i] - fZec13[i]) < 0)))?(1 - iRec224[i-1]):iRec224[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec224_perm[i]=iRec224_tmp[count+i];
			
			// LOOP 0x3c3bfc0
			// pre processing
			for (int i=0; i<4; i++) iRec228_tmp[i]=iRec228_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec228[i] = ((int(((fZec27[i] - fZec28[i]) < 0)))?(1 - iRec228[i-1]):iRec228[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec228_perm[i]=iRec228_tmp[count+i];
			
			// LOOP 0x3c44230
			// pre processing
			for (int i=0; i<4; i++) iRec232_tmp[i]=iRec232_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec232[i] = ((int(((fZec42[i] - fZec43[i]) < 0)))?(1 - iRec232[i-1]):iRec232[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec232_perm[i]=iRec232_tmp[count+i];
			
			// LOOP 0x3c4c100
			// pre processing
			for (int i=0; i<4; i++) iRec236_tmp[i]=iRec236_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec236[i] = ((int(((fZec57[i] - fZec58[i]) < 0)))?(1 - iRec236[i-1]):iRec236[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec236_perm[i]=iRec236_tmp[count+i];
			
			// LOOP 0x3c540a0
			// pre processing
			for (int i=0; i<4; i++) iRec240_tmp[i]=iRec240_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec240[i] = ((int(((fZec72[i] - fZec73[i]) < 0)))?(1 - iRec240[i-1]):iRec240[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec240_perm[i]=iRec240_tmp[count+i];
			
			// SECTION : 21
			// LOOP 0x399a080
			// exec code
			for (int i=0; i<count; i++) {
				fZec15[i] = saw_polyblep_fast(fRec4[i], fRec4[i-1], fRec4[i-2], ((int((fZec14[i] > 1.0f)))?fZec3[i]:fZec14[i]));
			}
			
			// LOOP 0x39ae5a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec30[i] = saw_polyblep_fast(fRec13[i], fRec13[i-1], fRec13[i-2], ((int((fZec29[i] > 1.0f)))?fZec18[i]:fZec29[i]));
			}
			
			// LOOP 0x39c2b20
			// exec code
			for (int i=0; i<count; i++) {
				fZec44[i] = ((1 + fRec21[i]) - fRec21[i-1]);
			}
			
			// LOOP 0x39d6970
			// exec code
			for (int i=0; i<count; i++) {
				fZec59[i] = ((1 + fRec29[i]) - fRec29[i-1]);
			}
			
			// LOOP 0x39eaab0
			// exec code
			for (int i=0; i<count; i++) {
				fZec74[i] = ((1 + fRec37[i]) - fRec37[i-1]);
			}
			
			// LOOP 0x3a558e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec153[i] = saw_polyblep_fast(fRec80[i], fRec80[i-1], fRec80[i-2], ((int((fZec152[i] > 1.0f)))?fZec143[i]:fZec152[i]));
			}
			
			// LOOP 0x3a677a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec166[i] = saw_polyblep_fast(fRec87[i], fRec87[i-1], fRec87[i-2], ((int((fZec165[i] > 1.0f)))?fZec156[i]:fZec165[i]));
			}
			
			// LOOP 0x3a893a0
			// pre processing
			for (int i=0; i<4; i++) fRec102_tmp[i]=fRec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec102[i] = (fRec102[i-1] + (fConst10 * ((square_polyblep_precalc(fZec83[i], fZec84[i], (0.5f * fYec32[i-2]), fZec88[i]) + (2 * fYec70[i-1])) - fRec102[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec102_perm[i]=fRec102_tmp[count+i];
			
			// LOOP 0x3a8eba0
			// pre processing
			for (int i=0; i<4; i++) fRec104_tmp[i]=fRec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec104[i] = (fRec104[i-1] + (fConst10 * ((square_polyblep_precalc(fZec96[i], fZec97[i], (0.5f * fYec37[i-2]), fZec101[i]) + (2 * fYec71[i-1])) - fRec104[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec104_perm[i]=fRec104_tmp[count+i];
			
			// LOOP 0x3a94a10
			// pre processing
			for (int i=0; i<4; i++) fRec106_tmp[i]=fRec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec106[i] = (fRec106[i-1] + (fConst10 * ((square_polyblep_precalc(fZec109[i], fZec110[i], (0.5f * fYec42[i-2]), fZec114[i]) + (2 * fYec72[i-1])) - fRec106[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec106_perm[i]=fRec106_tmp[count+i];
			
			// LOOP 0x3a9a030
			// pre processing
			for (int i=0; i<4; i++) fRec108_tmp[i]=fRec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec108[i] = (fRec108[i-1] + (fConst10 * ((square_polyblep_precalc(fZec122[i], fZec123[i], (0.5f * fYec47[i-2]), fZec127[i]) + (2 * fYec73[i-1])) - fRec108[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec108_perm[i]=fRec108_tmp[count+i];
			
			// LOOP 0x3a9f9a0
			// pre processing
			for (int i=0; i<4; i++) fRec110_tmp[i]=fRec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec110[i] = (fRec110[i-1] + (fConst11 * ((square_polyblep_precalc(fZec135[i], fZec136[i], (0.5f * fYec52[i-2]), fZec140[i]) + (2 * fYec74[i-1])) - fRec110[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec110_perm[i]=fRec110_tmp[count+i];
			
			// LOOP 0x3aa5500
			// pre processing
			for (int i=0; i<4; i++) fYec75_tmp[i]=fYec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec75[i] = ((fZec148[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec75_perm[i]=fYec75_tmp[count+i];
			
			// LOOP 0x3aab010
			// pre processing
			for (int i=0; i<4; i++) fYec76_tmp[i]=fYec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec76[i] = ((fZec161[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec76_perm[i]=fYec76_tmp[count+i];
			
			// LOOP 0x3ab0df0
			// pre processing
			for (int i=0; i<4; i++) fYec77_tmp[i]=fYec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec77[i] = ((fZec8[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec77_perm[i]=fYec77_tmp[count+i];
			
			// LOOP 0x3ab6310
			// pre processing
			for (int i=0; i<4; i++) fYec78_tmp[i]=fYec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec78[i] = ((fZec23[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec78_perm[i]=fYec78_tmp[count+i];
			
			// LOOP 0x3beb7a0
			// pre processing
			for (int i=0; i<4; i++) fYec133_tmp[i]=fYec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec133[i] = (iRec190[i] + fZec272[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec133_perm[i]=fYec133_tmp[count+i];
			
			// LOOP 0x3bf6220
			// pre processing
			for (int i=0; i<4; i++) fYec137_tmp[i]=fYec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec137[i] = (iRec195[i] + fZec277[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec137_perm[i]=fYec137_tmp[count+i];
			
			// LOOP 0x3c00650
			// pre processing
			for (int i=0; i<4; i++) fYec141_tmp[i]=fYec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec141[i] = (iRec200[i] + fZec282[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec141_perm[i]=fYec141_tmp[count+i];
			
			// LOOP 0x3c0aa90
			// pre processing
			for (int i=0; i<4; i++) fYec145_tmp[i]=fYec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec145[i] = (iRec205[i] + fZec287[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec145_perm[i]=fYec145_tmp[count+i];
			
			// LOOP 0x3c14fc0
			// pre processing
			for (int i=0; i<4; i++) fYec149_tmp[i]=fYec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec149[i] = (iRec210[i] + fZec292[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec149_perm[i]=fYec149_tmp[count+i];
			
			// LOOP 0x3c1f4b0
			// pre processing
			for (int i=0; i<4; i++) fYec153_tmp[i]=fYec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec153[i] = (iRec215[i] + fZec297[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec153_perm[i]=fYec153_tmp[count+i];
			
			// LOOP 0x3c299e0
			// pre processing
			for (int i=0; i<4; i++) fYec157_tmp[i]=fYec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec157[i] = (iRec220[i] + fZec302[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec157_perm[i]=fYec157_tmp[count+i];
			
			// LOOP 0x3c33f30
			// pre processing
			for (int i=0; i<4; i++) fYec160_tmp[i]=fYec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec160[i] = (iRec224[i] + fZec12[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec160_perm[i]=fYec160_tmp[count+i];
			
			// LOOP 0x3c3be20
			// pre processing
			for (int i=0; i<4; i++) fYec163_tmp[i]=fYec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec163[i] = (iRec228[i] + fZec27[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec163_perm[i]=fYec163_tmp[count+i];
			
			// LOOP 0x3c44090
			// pre processing
			for (int i=0; i<4; i++) fYec166_tmp[i]=fYec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec166[i] = (iRec232[i] + fZec42[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec166_perm[i]=fYec166_tmp[count+i];
			
			// LOOP 0x3c4bf60
			// pre processing
			for (int i=0; i<4; i++) fYec169_tmp[i]=fYec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec169[i] = (iRec236[i] + fZec57[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec169_perm[i]=fYec169_tmp[count+i];
			
			// LOOP 0x3c53f00
			// pre processing
			for (int i=0; i<4; i++) fYec172_tmp[i]=fYec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec172[i] = (iRec240[i] + fZec72[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec172_perm[i]=fYec172_tmp[count+i];
			
			// SECTION : 22
			// LOOP 0x39c2830
			// exec code
			for (int i=0; i<count; i++) {
				fZec45[i] = saw_polyblep_fast(fRec21[i], fRec21[i-1], fRec21[i-2], ((int((fZec44[i] > 1.0f)))?fZec33[i]:fZec44[i]));
			}
			
			// LOOP 0x39d6680
			// exec code
			for (int i=0; i<count; i++) {
				fZec60[i] = saw_polyblep_fast(fRec29[i], fRec29[i-1], fRec29[i-2], ((int((fZec59[i] > 1.0f)))?fZec48[i]:fZec59[i]));
			}
			
			// LOOP 0x39ea7c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec75[i] = saw_polyblep_fast(fRec37[i], fRec37[i-1], fRec37[i-2], ((int((fZec74[i] > 1.0f)))?fZec63[i]:fZec74[i]));
			}
			
			// LOOP 0x3a88eb0
			// pre processing
			for (int i=0; i<4; i++) fRec101_tmp[i]=fRec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec101[i] = (fConst7 * ((fRec102[i] - fRec102[i-1]) + fRec101[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec101_perm[i]=fRec101_tmp[count+i];
			
			// LOOP 0x3a8e6b0
			// pre processing
			for (int i=0; i<4; i++) fRec103_tmp[i]=fRec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec103[i] = (fConst7 * ((fRec104[i] - fRec104[i-1]) + fRec103[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec103_perm[i]=fRec103_tmp[count+i];
			
			// LOOP 0x3a94520
			// pre processing
			for (int i=0; i<4; i++) fRec105_tmp[i]=fRec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec105[i] = (fConst7 * ((fRec106[i] - fRec106[i-1]) + fRec105[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec105_perm[i]=fRec105_tmp[count+i];
			
			// LOOP 0x3a99b40
			// pre processing
			for (int i=0; i<4; i++) fRec107_tmp[i]=fRec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec107[i] = (fConst7 * ((fRec108[i] - fRec108[i-1]) + fRec107[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec107_perm[i]=fRec107_tmp[count+i];
			
			// LOOP 0x3a9f4b0
			// pre processing
			for (int i=0; i<4; i++) fRec109_tmp[i]=fRec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec109[i] = (fConst7 * ((fRec110[i] - fRec110[i-1]) + fRec109[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec109_perm[i]=fRec109_tmp[count+i];
			
			// LOOP 0x3aa4fb0
			// pre processing
			for (int i=0; i<4; i++) fRec112_tmp[i]=fRec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec112[i] = (fRec112[i-1] + (fConst11 * ((square_polyblep_precalc(fZec148[i], fZec149[i], (0.5f * fYec57[i-2]), fZec153[i]) + (2 * fYec75[i-1])) - fRec112[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec112_perm[i]=fRec112_tmp[count+i];
			
			// LOOP 0x3aaaac0
			// pre processing
			for (int i=0; i<4; i++) fRec114_tmp[i]=fRec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec114[i] = (fRec114[i-1] + (fConst11 * ((square_polyblep_precalc(fZec161[i], fZec162[i], (0.5f * fYec62[i-2]), fZec166[i]) + (2 * fYec76[i-1])) - fRec114[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec114_perm[i]=fRec114_tmp[count+i];
			
			// LOOP 0x3ab08a0
			// pre processing
			for (int i=0; i<4; i++) fRec116_tmp[i]=fRec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec116[i] = (fRec116[i-1] + (fConst11 * ((square_polyblep_precalc(fZec8[i], fZec9[i], (0.5f * fYec2[i-2]), fZec15[i]) + (2 * fYec77[i-1])) - fRec116[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec116_perm[i]=fRec116_tmp[count+i];
			
			// LOOP 0x3ab5dc0
			// pre processing
			for (int i=0; i<4; i++) fRec118_tmp[i]=fRec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec118[i] = (fRec118[i-1] + (fConst12 * ((square_polyblep_precalc(fZec23[i], fZec24[i], (0.5f * fYec8[i-2]), fZec30[i]) + (2 * fYec78[i-1])) - fRec118[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec118_perm[i]=fRec118_tmp[count+i];
			
			// LOOP 0x3abc730
			// pre processing
			for (int i=0; i<4; i++) fYec79_tmp[i]=fYec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec79[i] = ((fZec38[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec79_perm[i]=fYec79_tmp[count+i];
			
			// LOOP 0x3ac1eb0
			// pre processing
			for (int i=0; i<4; i++) fYec80_tmp[i]=fYec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec80[i] = ((fZec53[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec80_perm[i]=fYec80_tmp[count+i];
			
			// LOOP 0x3ac8250
			// pre processing
			for (int i=0; i<4; i++) fYec81_tmp[i]=fYec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec81[i] = ((fZec68[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec81_perm[i]=fYec81_tmp[count+i];
			
			// LOOP 0x3ace810
			// pre processing
			for (int i=0; i<4; i++) fYec82_tmp[i]=fYec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec82[i] = ((fZec81[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec82_perm[i]=fYec82_tmp[count+i];
			
			// LOOP 0x3beb660
			// exec code
			for (int i=0; i<count; i++) {
				fZec274[i] = (0.5f * fYec133[i]);
			}
			
			// LOOP 0x3bf0340
			// exec code
			for (int i=0; i<count; i++) {
				fZec275[i] = (0.5f * fYec133[i-1]);
			}
			
			// LOOP 0x3bf60e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec279[i] = (0.5f * fYec137[i]);
			}
			
			// LOOP 0x3bfadc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec280[i] = (0.5f * fYec137[i-1]);
			}
			
			// LOOP 0x3c00510
			// exec code
			for (int i=0; i<count; i++) {
				fZec284[i] = (0.5f * fYec141[i]);
			}
			
			// LOOP 0x3c05200
			// exec code
			for (int i=0; i<count; i++) {
				fZec285[i] = (0.5f * fYec141[i-1]);
			}
			
			// LOOP 0x3c0a950
			// exec code
			for (int i=0; i<count; i++) {
				fZec289[i] = (0.5f * fYec145[i]);
			}
			
			// LOOP 0x3c0f630
			// exec code
			for (int i=0; i<count; i++) {
				fZec290[i] = (0.5f * fYec145[i-1]);
			}
			
			// LOOP 0x3c14e80
			// exec code
			for (int i=0; i<count; i++) {
				fZec294[i] = (0.5f * fYec149[i]);
			}
			
			// LOOP 0x3c19b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec295[i] = (0.5f * fYec149[i-1]);
			}
			
			// LOOP 0x3c1f370
			// exec code
			for (int i=0; i<count; i++) {
				fZec299[i] = (0.5f * fYec153[i]);
			}
			
			// LOOP 0x3c24050
			// exec code
			for (int i=0; i<count; i++) {
				fZec300[i] = (0.5f * fYec153[i-1]);
			}
			
			// LOOP 0x3c298a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec304[i] = (0.5f * fYec157[i]);
			}
			
			// LOOP 0x3c2e580
			// exec code
			for (int i=0; i<count; i++) {
				fZec305[i] = (0.5f * fYec157[i-1]);
			}
			
			// LOOP 0x3c33df0
			// exec code
			for (int i=0; i<count; i++) {
				fZec307[i] = (0.5f * fYec160[i]);
			}
			
			// LOOP 0x3c364b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec308[i] = (0.5f * fYec160[i-1]);
			}
			
			// LOOP 0x3c3bce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec310[i] = (0.5f * fYec163[i]);
			}
			
			// LOOP 0x3c3e3a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec311[i] = (0.5f * fYec163[i-1]);
			}
			
			// LOOP 0x3c43f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec313[i] = (0.5f * fYec166[i]);
			}
			
			// LOOP 0x3c46500
			// exec code
			for (int i=0; i<count; i++) {
				fZec314[i] = (0.5f * fYec166[i-1]);
			}
			
			// LOOP 0x3c4be20
			// exec code
			for (int i=0; i<count; i++) {
				fZec316[i] = (0.5f * fYec169[i]);
			}
			
			// LOOP 0x3c4e4e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec317[i] = (0.5f * fYec169[i-1]);
			}
			
			// LOOP 0x3c53dc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec319[i] = (0.5f * fYec172[i]);
			}
			
			// LOOP 0x3c56480
			// exec code
			for (int i=0; i<count; i++) {
				fZec320[i] = (0.5f * fYec172[i-1]);
			}
			
			// SECTION : 23
			// LOOP 0x3aa4ac0
			// pre processing
			for (int i=0; i<4; i++) fRec111_tmp[i]=fRec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec111[i] = (fConst7 * ((fRec112[i] - fRec112[i-1]) + fRec111[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec111_perm[i]=fRec111_tmp[count+i];
			
			// LOOP 0x3aaa5d0
			// pre processing
			for (int i=0; i<4; i++) fRec113_tmp[i]=fRec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec113[i] = (fConst7 * ((fRec114[i] - fRec114[i-1]) + fRec113[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec113_perm[i]=fRec113_tmp[count+i];
			
			// LOOP 0x3ab03b0
			// pre processing
			for (int i=0; i<4; i++) fRec115_tmp[i]=fRec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec115[i] = (fConst7 * ((fRec116[i] - fRec116[i-1]) + fRec115[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec115_perm[i]=fRec115_tmp[count+i];
			
			// LOOP 0x3ab58d0
			// pre processing
			for (int i=0; i<4; i++) fRec117_tmp[i]=fRec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec117[i] = (fConst7 * ((fRec118[i] - fRec118[i-1]) + fRec117[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec117_perm[i]=fRec117_tmp[count+i];
			
			// LOOP 0x3abc1e0
			// pre processing
			for (int i=0; i<4; i++) fRec120_tmp[i]=fRec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec120[i] = (fRec120[i-1] + (fConst12 * ((square_polyblep_precalc(fZec38[i], fZec39[i], (0.5f * fYec14[i-2]), fZec45[i]) + (2 * fYec79[i-1])) - fRec120[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec120_perm[i]=fRec120_tmp[count+i];
			
			// LOOP 0x3ac1960
			// pre processing
			for (int i=0; i<4; i++) fRec122_tmp[i]=fRec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec122[i] = (fRec122[i-1] + (fConst12 * ((square_polyblep_precalc(fZec53[i], fZec54[i], (0.5f * fYec20[i-2]), fZec60[i]) + (2 * fYec80[i-1])) - fRec122[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec122_perm[i]=fRec122_tmp[count+i];
			
			// LOOP 0x3ac7d00
			// pre processing
			for (int i=0; i<4; i++) fRec124_tmp[i]=fRec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec124[i] = (fRec124[i-1] + (fConst12 * ((square_polyblep_precalc(fZec68[i], fZec69[i], (0.5f * fYec26[i-2]), fZec75[i]) + (2 * fYec81[i-1])) - fRec124[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec124_perm[i]=fRec124_tmp[count+i];
			
			// LOOP 0x3ace2c0
			// pre processing
			for (int i=0; i<4; i++) fRec126_tmp[i]=fRec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec126[i] = (fRec126[i-1] + (fConst13 * ((square_polyblep_precalc(fZec81[i], fZec82[i], (0.5f * fYec31[i-2]), fZec88[i]) + (2 * fYec82[i-1])) - fRec126[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec126_perm[i]=fRec126_tmp[count+i];
			
			// LOOP 0x3ad4530
			// pre processing
			for (int i=0; i<4; i++) fYec83_tmp[i]=fYec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec83[i] = ((fZec94[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec83_perm[i]=fYec83_tmp[count+i];
			
			// LOOP 0x3adade0
			// pre processing
			for (int i=0; i<4; i++) fYec84_tmp[i]=fYec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec84[i] = ((fZec107[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec84_perm[i]=fYec84_tmp[count+i];
			
			// LOOP 0x3ae0a80
			// pre processing
			for (int i=0; i<4; i++) fYec85_tmp[i]=fYec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec85[i] = ((fZec120[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec85_perm[i]=fYec85_tmp[count+i];
			
			// LOOP 0x3ae69d0
			// pre processing
			for (int i=0; i<4; i++) fYec86_tmp[i]=fYec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec86[i] = ((fZec133[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec86_perm[i]=fYec86_tmp[count+i];
			
			// LOOP 0x3aec350
			// pre processing
			for (int i=0; i<4; i++) fYec87_tmp[i]=fYec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec87[i] = ((fZec146[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec87_perm[i]=fYec87_tmp[count+i];
			
			// LOOP 0x3af2590
			// pre processing
			for (int i=0; i<4; i++) fYec88_tmp[i]=fYec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec88[i] = ((fZec159[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec88_perm[i]=fYec88_tmp[count+i];
			
			// LOOP 0x3af8b30
			// pre processing
			for (int i=0; i<4; i++) fYec89_tmp[i]=fYec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec89[i] = ((fZec6[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec89_perm[i]=fYec89_tmp[count+i];
			
			// LOOP 0x3afe440
			// pre processing
			for (int i=0; i<4; i++) fYec90_tmp[i]=fYec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec90[i] = ((fZec21[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec90_perm[i]=fYec90_tmp[count+i];
			
			// LOOP 0x3b05090
			// pre processing
			for (int i=0; i<4; i++) fYec91_tmp[i]=fYec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec91[i] = ((fZec36[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec91_perm[i]=fYec91_tmp[count+i];
			
			// LOOP 0x3b0acc0
			// pre processing
			for (int i=0; i<4; i++) fYec92_tmp[i]=fYec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec92[i] = ((fZec51[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec92_perm[i]=fYec92_tmp[count+i];
			
			// LOOP 0x3b11970
			// pre processing
			for (int i=0; i<4; i++) fYec93_tmp[i]=fYec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec93[i] = ((fZec66[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec93_perm[i]=fYec93_tmp[count+i];
			
			// LOOP 0x3b188e0
			// pre processing
			for (int i=0; i<4; i++) fYec94_tmp[i]=fYec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec94[i] = ((fZec79[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec94_perm[i]=fYec94_tmp[count+i];
			
			// LOOP 0x3b1eba0
			// pre processing
			for (int i=0; i<4; i++) fYec95_tmp[i]=fYec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec95[i] = ((fZec92[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec95_perm[i]=fYec95_tmp[count+i];
			
			// LOOP 0x3b25eb0
			// pre processing
			for (int i=0; i<4; i++) fYec96_tmp[i]=fYec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec96[i] = ((fZec105[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec96_perm[i]=fYec96_tmp[count+i];
			
			// LOOP 0x3b2c140
			// pre processing
			for (int i=0; i<4; i++) fYec97_tmp[i]=fYec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec97[i] = ((fZec118[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec97_perm[i]=fYec97_tmp[count+i];
			
			// LOOP 0x3b32730
			// pre processing
			for (int i=0; i<4; i++) fYec98_tmp[i]=fYec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec98[i] = ((fZec131[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec98_perm[i]=fYec98_tmp[count+i];
			
			// LOOP 0x3b38420
			// pre processing
			for (int i=0; i<4; i++) fYec99_tmp[i]=fYec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec99[i] = ((fZec144[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec99_perm[i]=fYec99_tmp[count+i];
			
			// LOOP 0x3b3eca0
			// pre processing
			for (int i=0; i<4; i++) fYec100_tmp[i]=fYec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec100[i] = ((fZec157[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec100_perm[i]=fYec100_tmp[count+i];
			
			// LOOP 0x3b45b10
			// pre processing
			for (int i=0; i<4; i++) fYec101_tmp[i]=fYec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec101[i] = ((fZec4[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec101_perm[i]=fYec101_tmp[count+i];
			
			// LOOP 0x3b4b830
			// pre processing
			for (int i=0; i<4; i++) fYec102_tmp[i]=fYec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec102[i] = ((fZec19[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec102_perm[i]=fYec102_tmp[count+i];
			
			// LOOP 0x3b52d00
			// pre processing
			for (int i=0; i<4; i++) fYec103_tmp[i]=fYec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec103[i] = ((fZec34[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec103_perm[i]=fYec103_tmp[count+i];
			
			// LOOP 0x3b58de0
			// pre processing
			for (int i=0; i<4; i++) fYec104_tmp[i]=fYec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec104[i] = ((fZec49[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec104_perm[i]=fYec104_tmp[count+i];
			
			// LOOP 0x3b60310
			// pre processing
			for (int i=0; i<4; i++) fYec105_tmp[i]=fYec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec105[i] = ((fZec64[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec105_perm[i]=fYec105_tmp[count+i];
			
			// LOOP 0x3b67890
			// pre processing
			for (int i=0; i<4; i++) fYec106_tmp[i]=fYec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec106[i] = (0 - (2 * (fRec45[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec106_perm[i]=fYec106_tmp[count+i];
			
			// LOOP 0x3b6d370
			// pre processing
			for (int i=0; i<4; i++) fYec108_tmp[i]=fYec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec108[i] = (0 - (2 * (fRec52[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec108_perm[i]=fYec108_tmp[count+i];
			
			// LOOP 0x3b745f0
			// pre processing
			for (int i=0; i<4; i++) fYec110_tmp[i]=fYec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec110[i] = (0 - (2 * (fRec59[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec110_perm[i]=fYec110_tmp[count+i];
			
			// LOOP 0x3b7a370
			// pre processing
			for (int i=0; i<4; i++) fYec112_tmp[i]=fYec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec112[i] = (0 - (2 * (fRec66[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec112_perm[i]=fYec112_tmp[count+i];
			
			// LOOP 0x3b80320
			// pre processing
			for (int i=0; i<4; i++) fYec114_tmp[i]=fYec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec114[i] = (0 - (2 * (fRec73[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec114_perm[i]=fYec114_tmp[count+i];
			
			// LOOP 0x3b85720
			// pre processing
			for (int i=0; i<4; i++) fYec116_tmp[i]=fYec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec116[i] = (0 - (2 * (fRec80[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec116_perm[i]=fYec116_tmp[count+i];
			
			// LOOP 0x3b8bcd0
			// pre processing
			for (int i=0; i<4; i++) fYec118_tmp[i]=fYec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec118[i] = (0 - (2 * (fRec87[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec118_perm[i]=fYec118_tmp[count+i];
			
			// LOOP 0x3b92720
			// pre processing
			for (int i=0; i<4; i++) fYec120_tmp[i]=fYec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec120[i] = (0 - (2 * (fRec4[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec120_perm[i]=fYec120_tmp[count+i];
			
			// LOOP 0x3b95800
			// exec code
			for (int i=0; i<count; i++) {
				fZec218[i] = (fRec109[i] + (fRec107[i] + (fRec105[i] + (fRec101[i] + fRec103[i]))));
			}
			
			// LOOP 0x3bb4660
			// pre processing
			for (int i=0; i<4; i++) fYec123_tmp[i]=fYec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec123[i] = (0 - (2 * (fRec13[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec123_perm[i]=fYec123_tmp[count+i];
			
			// LOOP 0x3bbb520
			// pre processing
			for (int i=0; i<4; i++) fYec125_tmp[i]=fYec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec125[i] = (0 - (2 * (fRec21[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec125_perm[i]=fYec125_tmp[count+i];
			
			// LOOP 0x3bbe9f0
			// pre processing
			for (int i=0; i<4; i++) fYec127_tmp[i]=fYec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec127[i] = (0 - (2 * (fRec29[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec127_perm[i]=fYec127_tmp[count+i];
			
			// LOOP 0x3bc1f00
			// pre processing
			for (int i=0; i<4; i++) fYec129_tmp[i]=fYec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec129[i] = (0 - (2 * (fRec37[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec129_perm[i]=fYec129_tmp[count+i];
			
			// LOOP 0x3befd40
			// pre processing
			for (int i=0; i<4; i++) iRec191_tmp[i]=iRec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec191[i] = ((int(((fZec274[i] - fZec275[i]) < 0)))?(1 - iRec191[i-1]):iRec191[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec191_perm[i]=iRec191_tmp[count+i];
			
			// LOOP 0x3bfa7c0
			// pre processing
			for (int i=0; i<4; i++) iRec196_tmp[i]=iRec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec196[i] = ((int(((fZec279[i] - fZec280[i]) < 0)))?(1 - iRec196[i-1]):iRec196[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec196_perm[i]=iRec196_tmp[count+i];
			
			// LOOP 0x3c04c00
			// pre processing
			for (int i=0; i<4; i++) iRec201_tmp[i]=iRec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec201[i] = ((int(((fZec284[i] - fZec285[i]) < 0)))?(1 - iRec201[i-1]):iRec201[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec201_perm[i]=iRec201_tmp[count+i];
			
			// LOOP 0x3c0f030
			// pre processing
			for (int i=0; i<4; i++) iRec206_tmp[i]=iRec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec206[i] = ((int(((fZec289[i] - fZec290[i]) < 0)))?(1 - iRec206[i-1]):iRec206[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec206_perm[i]=iRec206_tmp[count+i];
			
			// LOOP 0x3c19560
			// pre processing
			for (int i=0; i<4; i++) iRec211_tmp[i]=iRec211_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec211[i] = ((int(((fZec294[i] - fZec295[i]) < 0)))?(1 - iRec211[i-1]):iRec211[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec211_perm[i]=iRec211_tmp[count+i];
			
			// LOOP 0x3c23a50
			// pre processing
			for (int i=0; i<4; i++) iRec216_tmp[i]=iRec216_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec216[i] = ((int(((fZec299[i] - fZec300[i]) < 0)))?(1 - iRec216[i-1]):iRec216[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec216_perm[i]=iRec216_tmp[count+i];
			
			// LOOP 0x3c2df80
			// pre processing
			for (int i=0; i<4; i++) iRec221_tmp[i]=iRec221_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec221[i] = ((int(((fZec304[i] - fZec305[i]) < 0)))?(1 - iRec221[i-1]):iRec221[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec221_perm[i]=iRec221_tmp[count+i];
			
			// LOOP 0x3c35eb0
			// pre processing
			for (int i=0; i<4; i++) iRec225_tmp[i]=iRec225_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec225[i] = ((int(((fZec307[i] - fZec308[i]) < 0)))?(1 - iRec225[i-1]):iRec225[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec225_perm[i]=iRec225_tmp[count+i];
			
			// LOOP 0x3c3dda0
			// pre processing
			for (int i=0; i<4; i++) iRec229_tmp[i]=iRec229_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec229[i] = ((int(((fZec310[i] - fZec311[i]) < 0)))?(1 - iRec229[i-1]):iRec229[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec229_perm[i]=iRec229_tmp[count+i];
			
			// LOOP 0x3c45fd0
			// pre processing
			for (int i=0; i<4; i++) iRec233_tmp[i]=iRec233_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec233[i] = ((int(((fZec313[i] - fZec314[i]) < 0)))?(1 - iRec233[i-1]):iRec233[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec233_perm[i]=iRec233_tmp[count+i];
			
			// LOOP 0x3c4dee0
			// pre processing
			for (int i=0; i<4; i++) iRec237_tmp[i]=iRec237_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec237[i] = ((int(((fZec316[i] - fZec317[i]) < 0)))?(1 - iRec237[i-1]):iRec237[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec237_perm[i]=iRec237_tmp[count+i];
			
			// LOOP 0x3c55e80
			// pre processing
			for (int i=0; i<4; i++) iRec241_tmp[i]=iRec241_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec241[i] = ((int(((fZec319[i] - fZec320[i]) < 0)))?(1 - iRec241[i-1]):iRec241[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec241_perm[i]=iRec241_tmp[count+i];
			
			// SECTION : 24
			// LOOP 0x3abbcf0
			// pre processing
			for (int i=0; i<4; i++) fRec119_tmp[i]=fRec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec119[i] = (fConst7 * ((fRec120[i] - fRec120[i-1]) + fRec119[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec119_perm[i]=fRec119_tmp[count+i];
			
			// LOOP 0x3ac1470
			// pre processing
			for (int i=0; i<4; i++) fRec121_tmp[i]=fRec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec121[i] = (fConst7 * ((fRec122[i] - fRec122[i-1]) + fRec121[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec121_perm[i]=fRec121_tmp[count+i];
			
			// LOOP 0x3ac7810
			// pre processing
			for (int i=0; i<4; i++) fRec123_tmp[i]=fRec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec123[i] = (fConst7 * ((fRec124[i] - fRec124[i-1]) + fRec123[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec123_perm[i]=fRec123_tmp[count+i];
			
			// LOOP 0x3acddd0
			// pre processing
			for (int i=0; i<4; i++) fRec125_tmp[i]=fRec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec125[i] = (fConst7 * ((fRec126[i] - fRec126[i-1]) + fRec125[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec125_perm[i]=fRec125_tmp[count+i];
			
			// LOOP 0x3ad3fe0
			// pre processing
			for (int i=0; i<4; i++) fRec128_tmp[i]=fRec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec128[i] = (fRec128[i-1] + (fConst13 * ((square_polyblep_precalc(fZec94[i], fZec95[i], (0.5f * fYec36[i-2]), fZec101[i]) + (2 * fYec83[i-1])) - fRec128[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec128_perm[i]=fRec128_tmp[count+i];
			
			// LOOP 0x3ada890
			// pre processing
			for (int i=0; i<4; i++) fRec130_tmp[i]=fRec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec130[i] = (fRec130[i-1] + (fConst13 * ((square_polyblep_precalc(fZec107[i], fZec108[i], (0.5f * fYec41[i-2]), fZec114[i]) + (2 * fYec84[i-1])) - fRec130[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec130_perm[i]=fRec130_tmp[count+i];
			
			// LOOP 0x3ae0530
			// pre processing
			for (int i=0; i<4; i++) fRec132_tmp[i]=fRec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec132[i] = (fRec132[i-1] + (fConst13 * ((square_polyblep_precalc(fZec120[i], fZec121[i], (0.5f * fYec46[i-2]), fZec127[i]) + (2 * fYec85[i-1])) - fRec132[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec132_perm[i]=fRec132_tmp[count+i];
			
			// LOOP 0x3ae6480
			// pre processing
			for (int i=0; i<4; i++) fRec134_tmp[i]=fRec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec134[i] = (fRec134[i-1] + (fConst14 * ((square_polyblep_precalc(fZec133[i], fZec134[i], (0.5f * fYec51[i-2]), fZec140[i]) + (2 * fYec86[i-1])) - fRec134[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec134_perm[i]=fRec134_tmp[count+i];
			
			// LOOP 0x3aebe00
			// pre processing
			for (int i=0; i<4; i++) fRec136_tmp[i]=fRec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec136[i] = (fRec136[i-1] + (fConst14 * ((square_polyblep_precalc(fZec146[i], fZec147[i], (0.5f * fYec56[i-2]), fZec153[i]) + (2 * fYec87[i-1])) - fRec136[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec136_perm[i]=fRec136_tmp[count+i];
			
			// LOOP 0x3af2040
			// pre processing
			for (int i=0; i<4; i++) fRec138_tmp[i]=fRec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec138[i] = (fRec138[i-1] + (fConst14 * ((square_polyblep_precalc(fZec159[i], fZec160[i], (0.5f * fYec61[i-2]), fZec166[i]) + (2 * fYec88[i-1])) - fRec138[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec138_perm[i]=fRec138_tmp[count+i];
			
			// LOOP 0x3af85e0
			// pre processing
			for (int i=0; i<4; i++) fRec140_tmp[i]=fRec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec140[i] = (fRec140[i-1] + (fConst14 * ((square_polyblep_precalc(fZec6[i], fZec7[i], (0.5f * fYec1[i-2]), fZec15[i]) + (2 * fYec89[i-1])) - fRec140[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec140_perm[i]=fRec140_tmp[count+i];
			
			// LOOP 0x3afdef0
			// pre processing
			for (int i=0; i<4; i++) fRec142_tmp[i]=fRec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec142[i] = (fRec142[i-1] + (fConst15 * ((square_polyblep_precalc(fZec21[i], fZec22[i], (0.5f * fYec7[i-2]), fZec30[i]) + (2 * fYec90[i-1])) - fRec142[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec142_perm[i]=fRec142_tmp[count+i];
			
			// LOOP 0x3b04b40
			// pre processing
			for (int i=0; i<4; i++) fRec144_tmp[i]=fRec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec144[i] = (fRec144[i-1] + (fConst15 * ((square_polyblep_precalc(fZec36[i], fZec37[i], (0.5f * fYec13[i-2]), fZec45[i]) + (2 * fYec91[i-1])) - fRec144[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec144_perm[i]=fRec144_tmp[count+i];
			
			// LOOP 0x3b0a770
			// pre processing
			for (int i=0; i<4; i++) fRec146_tmp[i]=fRec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec146[i] = (fRec146[i-1] + (fConst15 * ((square_polyblep_precalc(fZec51[i], fZec52[i], (0.5f * fYec19[i-2]), fZec60[i]) + (2 * fYec92[i-1])) - fRec146[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec146_perm[i]=fRec146_tmp[count+i];
			
			// LOOP 0x3b11420
			// pre processing
			for (int i=0; i<4; i++) fRec148_tmp[i]=fRec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec148[i] = (fRec148[i-1] + (fConst15 * ((square_polyblep_precalc(fZec66[i], fZec67[i], (0.5f * fYec25[i-2]), fZec75[i]) + (2 * fYec93[i-1])) - fRec148[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec148_perm[i]=fRec148_tmp[count+i];
			
			// LOOP 0x3b18390
			// pre processing
			for (int i=0; i<4; i++) fRec150_tmp[i]=fRec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec150[i] = (fRec150[i-1] + (fConst16 * ((square_polyblep_precalc(fZec79[i], fZec80[i], (0.5f * fYec30[i-2]), fZec88[i]) + (2 * fYec94[i-1])) - fRec150[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec150_perm[i]=fRec150_tmp[count+i];
			
			// LOOP 0x3b1e650
			// pre processing
			for (int i=0; i<4; i++) fRec152_tmp[i]=fRec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec152[i] = (fRec152[i-1] + (fConst16 * ((square_polyblep_precalc(fZec92[i], fZec93[i], (0.5f * fYec35[i-2]), fZec101[i]) + (2 * fYec95[i-1])) - fRec152[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec152_perm[i]=fRec152_tmp[count+i];
			
			// LOOP 0x3b25960
			// pre processing
			for (int i=0; i<4; i++) fRec154_tmp[i]=fRec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec154[i] = (fRec154[i-1] + (fConst16 * ((square_polyblep_precalc(fZec105[i], fZec106[i], (0.5f * fYec40[i-2]), fZec114[i]) + (2 * fYec96[i-1])) - fRec154[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec154_perm[i]=fRec154_tmp[count+i];
			
			// LOOP 0x3b2bbf0
			// pre processing
			for (int i=0; i<4; i++) fRec156_tmp[i]=fRec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec156[i] = (fRec156[i-1] + (fConst16 * ((square_polyblep_precalc(fZec118[i], fZec119[i], (0.5f * fYec45[i-2]), fZec127[i]) + (2 * fYec97[i-1])) - fRec156[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec156_perm[i]=fRec156_tmp[count+i];
			
			// LOOP 0x3b321e0
			// pre processing
			for (int i=0; i<4; i++) fRec158_tmp[i]=fRec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec158[i] = (fRec158[i-1] + (fConst17 * ((square_polyblep_precalc(fZec131[i], fZec132[i], (0.5f * fYec50[i-2]), fZec140[i]) + (2 * fYec98[i-1])) - fRec158[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec158_perm[i]=fRec158_tmp[count+i];
			
			// LOOP 0x3b37ed0
			// pre processing
			for (int i=0; i<4; i++) fRec160_tmp[i]=fRec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec160[i] = (fRec160[i-1] + (fConst17 * ((square_polyblep_precalc(fZec144[i], fZec145[i], (0.5f * fYec55[i-2]), fZec153[i]) + (2 * fYec99[i-1])) - fRec160[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec160_perm[i]=fRec160_tmp[count+i];
			
			// LOOP 0x3b3e750
			// pre processing
			for (int i=0; i<4; i++) fRec162_tmp[i]=fRec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec162[i] = (fRec162[i-1] + (fConst17 * ((square_polyblep_precalc(fZec157[i], fZec158[i], (0.5f * fYec60[i-2]), fZec166[i]) + (2 * fYec100[i-1])) - fRec162[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec162_perm[i]=fRec162_tmp[count+i];
			
			// LOOP 0x3b417e0
			// pre processing
			for (int i=0; i<4; i++) fVec48_tmp[i]=fVec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec48[i] = fSlow68;
			}
			// post processing
			for (int i=0; i<4; i++) fVec48_perm[i]=fVec48_tmp[count+i];
			
			// LOOP 0x3b455c0
			// pre processing
			for (int i=0; i<4; i++) fRec164_tmp[i]=fRec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec164[i] = (fRec164[i-1] + (fConst17 * ((square_polyblep_precalc(fZec4[i], fZec5[i], (0.5f * fYec0[i-2]), fZec15[i]) + (2 * fYec101[i-1])) - fRec164[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec164_perm[i]=fRec164_tmp[count+i];
			
			// LOOP 0x3b48500
			// pre processing
			for (int i=0; i<4; i++) fVec49_tmp[i]=fVec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec49[i] = fSlow69;
			}
			// post processing
			for (int i=0; i<4; i++) fVec49_perm[i]=fVec49_tmp[count+i];
			
			// LOOP 0x3b4b2e0
			// pre processing
			for (int i=0; i<4; i++) fRec166_tmp[i]=fRec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec166[i] = (fRec166[i-1] + (fConst18 * ((square_polyblep_precalc(fZec19[i], fZec20[i], (0.5f * fYec6[i-2]), fZec30[i]) + (2 * fYec102[i-1])) - fRec166[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec166_perm[i]=fRec166_tmp[count+i];
			
			// LOOP 0x3b4e590
			// pre processing
			for (int i=0; i<4; i++) fVec50_tmp[i]=fVec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec50[i] = fSlow70;
			}
			// post processing
			for (int i=0; i<4; i++) fVec50_perm[i]=fVec50_tmp[count+i];
			
			// LOOP 0x3b527b0
			// pre processing
			for (int i=0; i<4; i++) fRec168_tmp[i]=fRec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec168[i] = (fRec168[i-1] + (fConst18 * ((square_polyblep_precalc(fZec34[i], fZec35[i], (0.5f * fYec12[i-2]), fZec45[i]) + (2 * fYec103[i-1])) - fRec168[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec168_perm[i]=fRec168_tmp[count+i];
			
			// LOOP 0x3b55720
			// pre processing
			for (int i=0; i<4; i++) fVec51_tmp[i]=fVec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec51[i] = fSlow71;
			}
			// post processing
			for (int i=0; i<4; i++) fVec51_perm[i]=fVec51_tmp[count+i];
			
			// LOOP 0x3b58890
			// pre processing
			for (int i=0; i<4; i++) fRec170_tmp[i]=fRec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec170[i] = (fRec170[i-1] + (fConst18 * ((square_polyblep_precalc(fZec49[i], fZec50[i], (0.5f * fYec18[i-2]), fZec60[i]) + (2 * fYec104[i-1])) - fRec170[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec170_perm[i]=fRec170_tmp[count+i];
			
			// LOOP 0x3b5b800
			// pre processing
			for (int i=0; i<4; i++) fVec52_tmp[i]=fVec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec52[i] = fSlow72;
			}
			// post processing
			for (int i=0; i<4; i++) fVec52_perm[i]=fVec52_tmp[count+i];
			
			// LOOP 0x3b5fdc0
			// pre processing
			for (int i=0; i<4; i++) fRec172_tmp[i]=fRec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec172[i] = (fRec172[i-1] + (fConst18 * ((square_polyblep_precalc(fZec64[i], fZec65[i], (0.5f * fYec24[i-2]), fZec75[i]) + (2 * fYec105[i-1])) - fRec172[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec172_perm[i]=fRec172_tmp[count+i];
			
			// LOOP 0x3b62dd0
			// pre processing
			for (int i=0; i<4; i++) fVec53_tmp[i]=fVec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec53[i] = fSlow73;
			}
			// post processing
			for (int i=0; i<4; i++) fVec53_perm[i]=fVec53_tmp[count+i];
			
			// LOOP 0x3b67780
			// pre processing
			for (int i=0; i<4; i++) fYec107_tmp[i]=fYec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec107[i] = (fZec88[i] + fYec106[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec107_perm[i]=fYec107_tmp[count+i];
			
			// LOOP 0x3b69d10
			// pre processing
			for (int i=0; i<4; i++) fVec54_tmp[i]=fVec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec54[i] = fSlow74;
			}
			// post processing
			for (int i=0; i<4; i++) fVec54_perm[i]=fVec54_tmp[count+i];
			
			// LOOP 0x3b6d260
			// pre processing
			for (int i=0; i<4; i++) fYec109_tmp[i]=fYec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec109[i] = (fZec101[i] + fYec108[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec109_perm[i]=fYec109_tmp[count+i];
			
			// LOOP 0x3b6f6f0
			// pre processing
			for (int i=0; i<4; i++) fVec55_tmp[i]=fVec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec55[i] = fSlow75;
			}
			// post processing
			for (int i=0; i<4; i++) fVec55_perm[i]=fVec55_tmp[count+i];
			
			// LOOP 0x3b744e0
			// pre processing
			for (int i=0; i<4; i++) fYec111_tmp[i]=fYec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec111[i] = (fZec114[i] + fYec110[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec111_perm[i]=fYec111_tmp[count+i];
			
			// LOOP 0x3b76970
			// pre processing
			for (int i=0; i<4; i++) fVec56_tmp[i]=fVec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec56[i] = fSlow76;
			}
			// post processing
			for (int i=0; i<4; i++) fVec56_perm[i]=fVec56_tmp[count+i];
			
			// LOOP 0x3b7a260
			// pre processing
			for (int i=0; i<4; i++) fYec113_tmp[i]=fYec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec113[i] = (fZec127[i] + fYec112[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec113_perm[i]=fYec113_tmp[count+i];
			
			// LOOP 0x3b7c6f0
			// pre processing
			for (int i=0; i<4; i++) fVec57_tmp[i]=fVec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec57[i] = fSlow77;
			}
			// post processing
			for (int i=0; i<4; i++) fVec57_perm[i]=fVec57_tmp[count+i];
			
			// LOOP 0x3b80210
			// pre processing
			for (int i=0; i<4; i++) fYec115_tmp[i]=fYec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec115[i] = (fZec140[i] + fYec114[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec115_perm[i]=fYec115_tmp[count+i];
			
			// LOOP 0x3b82860
			// pre processing
			for (int i=0; i<4; i++) fVec58_tmp[i]=fVec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec58[i] = fSlow78;
			}
			// post processing
			for (int i=0; i<4; i++) fVec58_perm[i]=fVec58_tmp[count+i];
			
			// LOOP 0x3b85610
			// pre processing
			for (int i=0; i<4; i++) fYec117_tmp[i]=fYec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec117[i] = (fZec153[i] + fYec116[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec117_perm[i]=fYec117_tmp[count+i];
			
			// LOOP 0x3b87aa0
			// pre processing
			for (int i=0; i<4; i++) fVec59_tmp[i]=fVec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec59[i] = fSlow79;
			}
			// post processing
			for (int i=0; i<4; i++) fVec59_perm[i]=fVec59_tmp[count+i];
			
			// LOOP 0x3b8bbc0
			// pre processing
			for (int i=0; i<4; i++) fYec119_tmp[i]=fYec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec119[i] = (fZec166[i] + fYec118[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec119_perm[i]=fYec119_tmp[count+i];
			
			// LOOP 0x3b8e050
			// pre processing
			for (int i=0; i<4; i++) fVec60_tmp[i]=fVec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec60[i] = fSlow80;
			}
			// post processing
			for (int i=0; i<4; i++) fVec60_perm[i]=fVec60_tmp[count+i];
			
			// LOOP 0x3b92610
			// pre processing
			for (int i=0; i<4; i++) fYec121_tmp[i]=fYec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec121[i] = (fZec15[i] + fYec120[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec121_perm[i]=fYec121_tmp[count+i];
			
			// LOOP 0x3b956c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec219[i] = (fRec117[i] + (fRec115[i] + (fRec113[i] + (fRec111[i] + fZec218[i]))));
			}
			
			// LOOP 0x3bb3b50
			// pre processing
			for (int i=0; i<4; i++) fYec124_tmp[i]=fYec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec124[i] = (fZec30[i] + fYec123[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec124_perm[i]=fYec124_tmp[count+i];
			
			// LOOP 0x3bbb410
			// pre processing
			for (int i=0; i<4; i++) fYec126_tmp[i]=fYec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec126[i] = (fZec45[i] + fYec125[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec126_perm[i]=fYec126_tmp[count+i];
			
			// LOOP 0x3bbe8e0
			// pre processing
			for (int i=0; i<4; i++) fYec128_tmp[i]=fYec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec128[i] = (fZec60[i] + fYec127[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec128_perm[i]=fYec128_tmp[count+i];
			
			// LOOP 0x3bc1df0
			// pre processing
			for (int i=0; i<4; i++) fYec130_tmp[i]=fYec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec130[i] = (fZec75[i] + fYec129[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec130_perm[i]=fYec130_tmp[count+i];
			
			// LOOP 0x3beb520
			// pre processing
			for (int i=0; i<4; i++) fYec134_tmp[i]=fYec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec134[i] = (iRec191[i] + fZec274[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec134_perm[i]=fYec134_tmp[count+i];
			
			// LOOP 0x3bf5fa0
			// pre processing
			for (int i=0; i<4; i++) fYec138_tmp[i]=fYec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec138[i] = (iRec196[i] + fZec279[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec138_perm[i]=fYec138_tmp[count+i];
			
			// LOOP 0x3c003d0
			// pre processing
			for (int i=0; i<4; i++) fYec142_tmp[i]=fYec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec142[i] = (iRec201[i] + fZec284[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec142_perm[i]=fYec142_tmp[count+i];
			
			// LOOP 0x3c0a810
			// pre processing
			for (int i=0; i<4; i++) fYec146_tmp[i]=fYec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec146[i] = (iRec206[i] + fZec289[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec146_perm[i]=fYec146_tmp[count+i];
			
			// LOOP 0x3c14d40
			// pre processing
			for (int i=0; i<4; i++) fYec150_tmp[i]=fYec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec150[i] = (iRec211[i] + fZec294[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec150_perm[i]=fYec150_tmp[count+i];
			
			// LOOP 0x3c1f230
			// pre processing
			for (int i=0; i<4; i++) fYec154_tmp[i]=fYec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec154[i] = (iRec216[i] + fZec299[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec154_perm[i]=fYec154_tmp[count+i];
			
			// LOOP 0x3c29760
			// pre processing
			for (int i=0; i<4; i++) fYec158_tmp[i]=fYec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec158[i] = (iRec221[i] + fZec304[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec158_perm[i]=fYec158_tmp[count+i];
			
			// LOOP 0x3c33cb0
			// pre processing
			for (int i=0; i<4; i++) fYec161_tmp[i]=fYec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec161[i] = (iRec225[i] + fZec307[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec161_perm[i]=fYec161_tmp[count+i];
			
			// LOOP 0x3c3bba0
			// pre processing
			for (int i=0; i<4; i++) fYec164_tmp[i]=fYec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec164[i] = (iRec229[i] + fZec310[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec164_perm[i]=fYec164_tmp[count+i];
			
			// LOOP 0x3c43e10
			// pre processing
			for (int i=0; i<4; i++) fYec167_tmp[i]=fYec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec167[i] = (iRec233[i] + fZec313[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec167_perm[i]=fYec167_tmp[count+i];
			
			// LOOP 0x3c4bce0
			// pre processing
			for (int i=0; i<4; i++) fYec170_tmp[i]=fYec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec170[i] = (iRec237[i] + fZec316[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec170_perm[i]=fYec170_tmp[count+i];
			
			// LOOP 0x3c53c80
			// pre processing
			for (int i=0; i<4; i++) fYec173_tmp[i]=fYec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec173[i] = (iRec241[i] + fZec319[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec173_perm[i]=fYec173_tmp[count+i];
			
			// SECTION : 25
			// LOOP 0x3984940
			// pre processing
			for (int i=0; i<4; i++) fVec0_tmp[i]=fVec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec0[i] = fSlow2;
			}
			// post processing
			for (int i=0; i<4; i++) fVec0_perm[i]=fVec0_tmp[count+i];
			
			// LOOP 0x399d6a0
			// pre processing
			for (int i=0; i<4; i++) fVec1_tmp[i]=fVec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec1[i] = fSlow8;
			}
			// post processing
			for (int i=0; i<4; i++) fVec1_perm[i]=fVec1_tmp[count+i];
			
			// LOOP 0x39b16a0
			// pre processing
			for (int i=0; i<4; i++) fVec2_tmp[i]=fVec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec2[i] = fSlow10;
			}
			// post processing
			for (int i=0; i<4; i++) fVec2_perm[i]=fVec2_tmp[count+i];
			
			// LOOP 0x39c55f0
			// pre processing
			for (int i=0; i<4; i++) fVec3_tmp[i]=fVec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec3[i] = fSlow12;
			}
			// post processing
			for (int i=0; i<4; i++) fVec3_perm[i]=fVec3_tmp[count+i];
			
			// LOOP 0x39d9540
			// pre processing
			for (int i=0; i<4; i++) fVec4_tmp[i]=fVec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec4[i] = fSlow14;
			}
			// post processing
			for (int i=0; i<4; i++) fVec4_perm[i]=fVec4_tmp[count+i];
			
			// LOOP 0x39ed650
			// pre processing
			for (int i=0; i<4; i++) fVec5_tmp[i]=fVec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec5[i] = fSlow16;
			}
			// post processing
			for (int i=0; i<4; i++) fVec5_perm[i]=fVec5_tmp[count+i];
			
			// LOOP 0x39ffb10
			// pre processing
			for (int i=0; i<4; i++) fVec6_tmp[i]=fVec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec6[i] = fSlow18;
			}
			// post processing
			for (int i=0; i<4; i++) fVec6_perm[i]=fVec6_tmp[count+i];
			
			// LOOP 0x3a11520
			// pre processing
			for (int i=0; i<4; i++) fVec7_tmp[i]=fVec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec7[i] = fSlow20;
			}
			// post processing
			for (int i=0; i<4; i++) fVec7_perm[i]=fVec7_tmp[count+i];
			
			// LOOP 0x3a233a0
			// pre processing
			for (int i=0; i<4; i++) fVec8_tmp[i]=fVec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec8[i] = fSlow22;
			}
			// post processing
			for (int i=0; i<4; i++) fVec8_perm[i]=fVec8_tmp[count+i];
			
			// LOOP 0x3a34f20
			// pre processing
			for (int i=0; i<4; i++) fVec9_tmp[i]=fVec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec9[i] = fSlow24;
			}
			// post processing
			for (int i=0; i<4; i++) fVec9_perm[i]=fVec9_tmp[count+i];
			
			// LOOP 0x3a46f70
			// pre processing
			for (int i=0; i<4; i++) fVec10_tmp[i]=fVec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec10[i] = fSlow26;
			}
			// post processing
			for (int i=0; i<4; i++) fVec10_perm[i]=fVec10_tmp[count+i];
			
			// LOOP 0x3a589f0
			// pre processing
			for (int i=0; i<4; i++) fVec11_tmp[i]=fVec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec11[i] = fSlow28;
			}
			// post processing
			for (int i=0; i<4; i++) fVec11_perm[i]=fVec11_tmp[count+i];
			
			// LOOP 0x3a6a8c0
			// pre processing
			for (int i=0; i<4; i++) fVec12_tmp[i]=fVec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec12[i] = fSlow30;
			}
			// post processing
			for (int i=0; i<4; i++) fVec12_perm[i]=fVec12_tmp[count+i];
			
			// LOOP 0x3a6fd10
			// pre processing
			for (int i=0; i<4; i++) fVec13_tmp[i]=fVec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec13[i] = fSlow31;
			}
			// post processing
			for (int i=0; i<4; i++) fVec13_perm[i]=fVec13_tmp[count+i];
			
			// LOOP 0x3a75180
			// pre processing
			for (int i=0; i<4; i++) fVec14_tmp[i]=fVec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec14[i] = fSlow32;
			}
			// post processing
			for (int i=0; i<4; i++) fVec14_perm[i]=fVec14_tmp[count+i];
			
			// LOOP 0x3a7a940
			// pre processing
			for (int i=0; i<4; i++) fVec15_tmp[i]=fVec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec15[i] = fSlow33;
			}
			// post processing
			for (int i=0; i<4; i++) fVec15_perm[i]=fVec15_tmp[count+i];
			
			// LOOP 0x3a7fc30
			// pre processing
			for (int i=0; i<4; i++) fVec16_tmp[i]=fVec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec16[i] = fSlow34;
			}
			// post processing
			for (int i=0; i<4; i++) fVec16_perm[i]=fVec16_tmp[count+i];
			
			// LOOP 0x3a86b20
			// pre processing
			for (int i=0; i<4; i++) fVec17_tmp[i]=fVec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec17[i] = fSlow37;
			}
			// post processing
			for (int i=0; i<4; i++) fVec17_perm[i]=fVec17_tmp[count+i];
			
			// LOOP 0x3a8cb20
			// pre processing
			for (int i=0; i<4; i++) fVec18_tmp[i]=fVec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec18[i] = fSlow38;
			}
			// post processing
			for (int i=0; i<4; i++) fVec18_perm[i]=fVec18_tmp[count+i];
			
			// LOOP 0x3a92040
			// pre processing
			for (int i=0; i<4; i++) fVec19_tmp[i]=fVec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec19[i] = fSlow39;
			}
			// post processing
			for (int i=0; i<4; i++) fVec19_perm[i]=fVec19_tmp[count+i];
			
			// LOOP 0x3a97f30
			// pre processing
			for (int i=0; i<4; i++) fVec20_tmp[i]=fVec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec20[i] = fSlow40;
			}
			// post processing
			for (int i=0; i<4; i++) fVec20_perm[i]=fVec20_tmp[count+i];
			
			// LOOP 0x3a9d650
			// pre processing
			for (int i=0; i<4; i++) fVec21_tmp[i]=fVec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec21[i] = fSlow41;
			}
			// post processing
			for (int i=0; i<4; i++) fVec21_perm[i]=fVec21_tmp[count+i];
			
			// LOOP 0x3aa2c70
			// pre processing
			for (int i=0; i<4; i++) fVec22_tmp[i]=fVec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec22[i] = fSlow42;
			}
			// post processing
			for (int i=0; i<4; i++) fVec22_perm[i]=fVec22_tmp[count+i];
			
			// LOOP 0x3aa7f40
			// pre processing
			for (int i=0; i<4; i++) fVec23_tmp[i]=fVec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec23[i] = fSlow43;
			}
			// post processing
			for (int i=0; i<4; i++) fVec23_perm[i]=fVec23_tmp[count+i];
			
			// LOOP 0x3aada50
			// pre processing
			for (int i=0; i<4; i++) fVec24_tmp[i]=fVec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec24[i] = fSlow44;
			}
			// post processing
			for (int i=0; i<4; i++) fVec24_perm[i]=fVec24_tmp[count+i];
			
			// LOOP 0x3ab37e0
			// pre processing
			for (int i=0; i<4; i++) fVec25_tmp[i]=fVec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec25[i] = fSlow45;
			}
			// post processing
			for (int i=0; i<4; i++) fVec25_perm[i]=fVec25_tmp[count+i];
			
			// LOOP 0x3ab9060
			// pre processing
			for (int i=0; i<4; i++) fVec26_tmp[i]=fVec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec26[i] = fSlow46;
			}
			// post processing
			for (int i=0; i<4; i++) fVec26_perm[i]=fVec26_tmp[count+i];
			
			// LOOP 0x3abf140
			// pre processing
			for (int i=0; i<4; i++) fVec27_tmp[i]=fVec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec27[i] = fSlow47;
			}
			// post processing
			for (int i=0; i<4; i++) fVec27_perm[i]=fVec27_tmp[count+i];
			
			// LOOP 0x3ac48c0
			// pre processing
			for (int i=0; i<4; i++) fVec28_tmp[i]=fVec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec28[i] = fSlow48;
			}
			// post processing
			for (int i=0; i<4; i++) fVec28_perm[i]=fVec28_tmp[count+i];
			
			// LOOP 0x3acac60
			// pre processing
			for (int i=0; i<4; i++) fVec29_tmp[i]=fVec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec29[i] = fSlow49;
			}
			// post processing
			for (int i=0; i<4; i++) fVec29_perm[i]=fVec29_tmp[count+i];
			
			// LOOP 0x3ad1530
			// pre processing
			for (int i=0; i<4; i++) fVec30_tmp[i]=fVec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec30[i] = fSlow50;
			}
			// post processing
			for (int i=0; i<4; i++) fVec30_perm[i]=fVec30_tmp[count+i];
			
			// LOOP 0x3ad3af0
			// pre processing
			for (int i=0; i<4; i++) fRec127_tmp[i]=fRec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec127[i] = (fConst7 * ((fRec128[i] - fRec128[i-1]) + fRec127[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec127_perm[i]=fRec127_tmp[count+i];
			
			// LOOP 0x3ad6f50
			// pre processing
			for (int i=0; i<4; i++) fVec31_tmp[i]=fVec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec31[i] = fSlow51;
			}
			// post processing
			for (int i=0; i<4; i++) fVec31_perm[i]=fVec31_tmp[count+i];
			
			// LOOP 0x3ada3a0
			// pre processing
			for (int i=0; i<4; i++) fRec129_tmp[i]=fRec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec129[i] = (fConst7 * ((fRec130[i] - fRec130[i-1]) + fRec129[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec129_perm[i]=fRec129_tmp[count+i];
			
			// LOOP 0x3add830
			// pre processing
			for (int i=0; i<4; i++) fVec32_tmp[i]=fVec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec32[i] = fSlow52;
			}
			// post processing
			for (int i=0; i<4; i++) fVec32_perm[i]=fVec32_tmp[count+i];
			
			// LOOP 0x3ae0040
			// pre processing
			for (int i=0; i<4; i++) fRec131_tmp[i]=fRec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec131[i] = (fConst7 * ((fRec132[i] - fRec132[i-1]) + fRec131[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec131_perm[i]=fRec131_tmp[count+i];
			
			// LOOP 0x3ae34c0
			// pre processing
			for (int i=0; i<4; i++) fVec33_tmp[i]=fVec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec33[i] = fSlow53;
			}
			// post processing
			for (int i=0; i<4; i++) fVec33_perm[i]=fVec33_tmp[count+i];
			
			// LOOP 0x3ae5f90
			// pre processing
			for (int i=0; i<4; i++) fRec133_tmp[i]=fRec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec133[i] = (fConst7 * ((fRec134[i] - fRec134[i-1]) + fRec133[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec133_perm[i]=fRec133_tmp[count+i];
			
			// LOOP 0x3ae9760
			// pre processing
			for (int i=0; i<4; i++) fVec34_tmp[i]=fVec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec34[i] = fSlow54;
			}
			// post processing
			for (int i=0; i<4; i++) fVec34_perm[i]=fVec34_tmp[count+i];
			
			// LOOP 0x3aeb910
			// pre processing
			for (int i=0; i<4; i++) fRec135_tmp[i]=fRec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec135[i] = (fConst7 * ((fRec136[i] - fRec136[i-1]) + fRec135[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec135_perm[i]=fRec135_tmp[count+i];
			
			// LOOP 0x3aeed90
			// pre processing
			for (int i=0; i<4; i++) fVec35_tmp[i]=fVec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec35[i] = fSlow55;
			}
			// post processing
			for (int i=0; i<4; i++) fVec35_perm[i]=fVec35_tmp[count+i];
			
			// LOOP 0x3af1b50
			// pre processing
			for (int i=0; i<4; i++) fRec137_tmp[i]=fRec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec137[i] = (fConst7 * ((fRec138[i] - fRec138[i-1]) + fRec137[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec137_perm[i]=fRec137_tmp[count+i];
			
			// LOOP 0x3af4fd0
			// pre processing
			for (int i=0; i<4; i++) fVec36_tmp[i]=fVec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec36[i] = fSlow56;
			}
			// post processing
			for (int i=0; i<4; i++) fVec36_perm[i]=fVec36_tmp[count+i];
			
			// LOOP 0x3af80f0
			// pre processing
			for (int i=0; i<4; i++) fRec139_tmp[i]=fRec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec139[i] = (fConst7 * ((fRec140[i] - fRec140[i-1]) + fRec139[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec139_perm[i]=fRec139_tmp[count+i];
			
			// LOOP 0x3afb520
			// pre processing
			for (int i=0; i<4; i++) fVec37_tmp[i]=fVec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec37[i] = fSlow57;
			}
			// post processing
			for (int i=0; i<4; i++) fVec37_perm[i]=fVec37_tmp[count+i];
			
			// LOOP 0x3afda00
			// pre processing
			for (int i=0; i<4; i++) fRec141_tmp[i]=fRec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec141[i] = (fConst7 * ((fRec142[i] - fRec142[i-1]) + fRec141[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec141_perm[i]=fRec141_tmp[count+i];
			
			// LOOP 0x3b01190
			// pre processing
			for (int i=0; i<4; i++) fVec38_tmp[i]=fVec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec38[i] = fSlow58;
			}
			// post processing
			for (int i=0; i<4; i++) fVec38_perm[i]=fVec38_tmp[count+i];
			
			// LOOP 0x3b04650
			// pre processing
			for (int i=0; i<4; i++) fRec143_tmp[i]=fRec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec143[i] = (fConst7 * ((fRec144[i] - fRec144[i-1]) + fRec143[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec143_perm[i]=fRec143_tmp[count+i];
			
			// LOOP 0x3b07aa0
			// pre processing
			for (int i=0; i<4; i++) fVec39_tmp[i]=fVec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec39[i] = fSlow59;
			}
			// post processing
			for (int i=0; i<4; i++) fVec39_perm[i]=fVec39_tmp[count+i];
			
			// LOOP 0x3b0a280
			// pre processing
			for (int i=0; i<4; i++) fRec145_tmp[i]=fRec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec145[i] = (fConst7 * ((fRec146[i] - fRec146[i-1]) + fRec145[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec145_perm[i]=fRec145_tmp[count+i];
			
			// LOOP 0x3b0d6d0
			// pre processing
			for (int i=0; i<4; i++) fVec40_tmp[i]=fVec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec40[i] = fSlow60;
			}
			// post processing
			for (int i=0; i<4; i++) fVec40_perm[i]=fVec40_tmp[count+i];
			
			// LOOP 0x3b10f30
			// pre processing
			for (int i=0; i<4; i++) fRec147_tmp[i]=fRec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec147[i] = (fConst7 * ((fRec148[i] - fRec148[i-1]) + fRec147[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec147_perm[i]=fRec147_tmp[count+i];
			
			// LOOP 0x3b14380
			// pre processing
			for (int i=0; i<4; i++) fVec41_tmp[i]=fVec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec41[i] = fSlow61;
			}
			// post processing
			for (int i=0; i<4; i++) fVec41_perm[i]=fVec41_tmp[count+i];
			
			// LOOP 0x3b17ea0
			// pre processing
			for (int i=0; i<4; i++) fRec149_tmp[i]=fRec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec149[i] = (fConst7 * ((fRec150[i] - fRec150[i-1]) + fRec149[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec149_perm[i]=fRec149_tmp[count+i];
			
			// LOOP 0x3b1b630
			// pre processing
			for (int i=0; i<4; i++) fVec42_tmp[i]=fVec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec42[i] = fSlow62;
			}
			// post processing
			for (int i=0; i<4; i++) fVec42_perm[i]=fVec42_tmp[count+i];
			
			// LOOP 0x3b1e160
			// pre processing
			for (int i=0; i<4; i++) fRec151_tmp[i]=fRec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec151[i] = (fConst7 * ((fRec152[i] - fRec152[i-1]) + fRec151[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec151_perm[i]=fRec151_tmp[count+i];
			
			// LOOP 0x3b215c0
			// pre processing
			for (int i=0; i<4; i++) fVec43_tmp[i]=fVec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec43[i] = fSlow63;
			}
			// post processing
			for (int i=0; i<4; i++) fVec43_perm[i]=fVec43_tmp[count+i];
			
			// LOOP 0x3b25470
			// pre processing
			for (int i=0; i<4; i++) fRec153_tmp[i]=fRec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec153[i] = (fConst7 * ((fRec154[i] - fRec154[i-1]) + fRec153[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec153_perm[i]=fRec153_tmp[count+i];
			
			// LOOP 0x3b288f0
			// pre processing
			for (int i=0; i<4; i++) fVec44_tmp[i]=fVec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec44[i] = fSlow64;
			}
			// post processing
			for (int i=0; i<4; i++) fVec44_perm[i]=fVec44_tmp[count+i];
			
			// LOOP 0x3b2b700
			// pre processing
			for (int i=0; i<4; i++) fRec155_tmp[i]=fRec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec155[i] = (fConst7 * ((fRec156[i] - fRec156[i-1]) + fRec155[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec155_perm[i]=fRec155_tmp[count+i];
			
			// LOOP 0x3b2eb80
			// pre processing
			for (int i=0; i<4; i++) fVec45_tmp[i]=fVec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec45[i] = fSlow65;
			}
			// post processing
			for (int i=0; i<4; i++) fVec45_perm[i]=fVec45_tmp[count+i];
			
			// LOOP 0x3b31cf0
			// pre processing
			for (int i=0; i<4; i++) fRec157_tmp[i]=fRec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec157[i] = (fConst7 * ((fRec158[i] - fRec158[i-1]) + fRec157[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec157_perm[i]=fRec157_tmp[count+i];
			
			// LOOP 0x3b354b0
			// pre processing
			for (int i=0; i<4; i++) fVec46_tmp[i]=fVec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec46[i] = fSlow66;
			}
			// post processing
			for (int i=0; i<4; i++) fVec46_perm[i]=fVec46_tmp[count+i];
			
			// LOOP 0x3b379e0
			// pre processing
			for (int i=0; i<4; i++) fRec159_tmp[i]=fRec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec159[i] = (fConst7 * ((fRec160[i] - fRec160[i-1]) + fRec159[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec159_perm[i]=fRec159_tmp[count+i];
			
			// LOOP 0x3b3ae60
			// pre processing
			for (int i=0; i<4; i++) fVec47_tmp[i]=fVec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec47[i] = fSlow67;
			}
			// post processing
			for (int i=0; i<4; i++) fVec47_perm[i]=fVec47_tmp[count+i];
			
			// LOOP 0x3b3e230
			// pre processing
			for (int i=0; i<4; i++) fRec161_tmp[i]=fRec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec161[i] = (fConst7 * ((fRec162[i] - fRec162[i-1]) + fRec161[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec161_perm[i]=fRec161_tmp[count+i];
			
			// LOOP 0x3b416d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec203[i] = (fSlow68 + (fVec48[i-3] + (fVec48[i-1] + fVec48[i-2])));
			}
			
			// LOOP 0x3b450d0
			// pre processing
			for (int i=0; i<4; i++) fRec163_tmp[i]=fRec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec163[i] = (fConst7 * ((fRec164[i] - fRec164[i-1]) + fRec163[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec163_perm[i]=fRec163_tmp[count+i];
			
			// LOOP 0x3b483f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec204[i] = (fSlow69 + (fVec49[i-3] + (fVec49[i-1] + fVec49[i-2])));
			}
			
			// LOOP 0x3b4adf0
			// pre processing
			for (int i=0; i<4; i++) fRec165_tmp[i]=fRec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec165[i] = (fConst7 * ((fRec166[i] - fRec166[i-1]) + fRec165[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec165_perm[i]=fRec165_tmp[count+i];
			
			// LOOP 0x3b4e480
			// exec code
			for (int i=0; i<count; i++) {
				fZec205[i] = (fSlow70 + (fVec50[i-3] + (fVec50[i-1] + fVec50[i-2])));
			}
			
			// LOOP 0x3b522c0
			// pre processing
			for (int i=0; i<4; i++) fRec167_tmp[i]=fRec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec167[i] = (fConst7 * ((fRec168[i] - fRec168[i-1]) + fRec167[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec167_perm[i]=fRec167_tmp[count+i];
			
			// LOOP 0x3b55610
			// exec code
			for (int i=0; i<count; i++) {
				fZec206[i] = (fSlow71 + (fVec51[i-3] + (fVec51[i-1] + fVec51[i-2])));
			}
			
			// LOOP 0x3b583a0
			// pre processing
			for (int i=0; i<4; i++) fRec169_tmp[i]=fRec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec169[i] = (fConst7 * ((fRec170[i] - fRec170[i-1]) + fRec169[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec169_perm[i]=fRec169_tmp[count+i];
			
			// LOOP 0x3b5b6f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec207[i] = (fSlow72 + (fVec52[i-3] + (fVec52[i-1] + fVec52[i-2])));
			}
			
			// LOOP 0x3b5f8d0
			// pre processing
			for (int i=0; i<4; i++) fRec171_tmp[i]=fRec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec171[i] = (fConst7 * ((fRec172[i] - fRec172[i-1]) + fRec171[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec171_perm[i]=fRec171_tmp[count+i];
			
			// LOOP 0x3b62cc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec208[i] = (fSlow73 + (fVec53[i-3] + (fVec53[i-1] + fVec53[i-2])));
			}
			
			// LOOP 0x3b67290
			// pre processing
			for (int i=0; i<4; i++) fRec173_tmp[i]=fRec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec173[i] = (fConst7 * (((1.95f * fYec107[i]) - (1.95f * fYec107[i-1])) + fRec173[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec173_perm[i]=fRec173_tmp[count+i];
			
			// LOOP 0x3b69c00
			// exec code
			for (int i=0; i<count; i++) {
				fZec209[i] = (fSlow74 + (fVec54[i-3] + (fVec54[i-1] + fVec54[i-2])));
			}
			
			// LOOP 0x3b6cd70
			// pre processing
			for (int i=0; i<4; i++) fRec174_tmp[i]=fRec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec174[i] = (fConst7 * (((1.95f * fYec109[i]) - (1.95f * fYec109[i-1])) + fRec174[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec174_perm[i]=fRec174_tmp[count+i];
			
			// LOOP 0x3b6f5e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec210[i] = (fSlow75 + (fVec55[i-3] + (fVec55[i-1] + fVec55[i-2])));
			}
			
			// LOOP 0x3b73ff0
			// pre processing
			for (int i=0; i<4; i++) fRec175_tmp[i]=fRec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec175[i] = (fConst7 * (((1.95f * fYec111[i]) - (1.95f * fYec111[i-1])) + fRec175[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec175_perm[i]=fRec175_tmp[count+i];
			
			// LOOP 0x3b76860
			// exec code
			for (int i=0; i<count; i++) {
				fZec211[i] = (fSlow76 + (fVec56[i-3] + (fVec56[i-1] + fVec56[i-2])));
			}
			
			// LOOP 0x3b79d70
			// pre processing
			for (int i=0; i<4; i++) fRec176_tmp[i]=fRec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec176[i] = (fConst7 * (((1.95f * fYec113[i]) - (1.95f * fYec113[i-1])) + fRec176[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec176_perm[i]=fRec176_tmp[count+i];
			
			// LOOP 0x3b7c5e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec212[i] = (fSlow77 + (fVec57[i-3] + (fVec57[i-1] + fVec57[i-2])));
			}
			
			// LOOP 0x3b7f920
			// pre processing
			for (int i=0; i<4; i++) fRec177_tmp[i]=fRec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec177[i] = (fConst7 * (((1.95f * fYec115[i]) - (1.95f * fYec115[i-1])) + fRec177[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec177_perm[i]=fRec177_tmp[count+i];
			
			// LOOP 0x3b82750
			// exec code
			for (int i=0; i<count; i++) {
				fZec213[i] = (fSlow78 + (fVec58[i-3] + (fVec58[i-1] + fVec58[i-2])));
			}
			
			// LOOP 0x3b85120
			// pre processing
			for (int i=0; i<4; i++) fRec178_tmp[i]=fRec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec178[i] = (fConst7 * (((1.95f * fYec117[i]) - (1.95f * fYec117[i-1])) + fRec178[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec178_perm[i]=fRec178_tmp[count+i];
			
			// LOOP 0x3b87990
			// exec code
			for (int i=0; i<count; i++) {
				fZec214[i] = (fSlow79 + (fVec59[i-3] + (fVec59[i-1] + fVec59[i-2])));
			}
			
			// LOOP 0x3b8b6d0
			// pre processing
			for (int i=0; i<4; i++) fRec179_tmp[i]=fRec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec179[i] = (fConst7 * (((1.95f * fYec119[i]) - (1.95f * fYec119[i-1])) + fRec179[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec179_perm[i]=fRec179_tmp[count+i];
			
			// LOOP 0x3b8df40
			// exec code
			for (int i=0; i<count; i++) {
				fZec215[i] = (fSlow80 + (fVec60[i-3] + (fVec60[i-1] + fVec60[i-2])));
			}
			
			// LOOP 0x3b92120
			// pre processing
			for (int i=0; i<4; i++) fRec180_tmp[i]=fRec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec180[i] = (fConst7 * (((1.95f * fYec121[i]) - (1.95f * fYec121[i-1])) + fRec180[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec180_perm[i]=fRec180_tmp[count+i];
			
			// LOOP 0x3b95580
			// exec code
			for (int i=0; i<count; i++) {
				fZec220[i] = (fRec125[i] + (fRec123[i] + (fRec121[i] + (fRec119[i] + fZec219[i]))));
			}
			
			// LOOP 0x3bb2d00
			// pre processing
			for (int i=0; i<4; i++) fRec182_tmp[i]=fRec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec182[i] = (fConst7 * (((1.95f * fYec124[i]) - (1.95f * fYec124[i-1])) + fRec182[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec182_perm[i]=fRec182_tmp[count+i];
			
			// LOOP 0x3bba4b0
			// pre processing
			for (int i=0; i<4; i++) fRec183_tmp[i]=fRec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec183[i] = (fConst7 * (((1.95f * fYec126[i]) - (1.95f * fYec126[i-1])) + fRec183[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec183_perm[i]=fRec183_tmp[count+i];
			
			// LOOP 0x3bbd920
			// pre processing
			for (int i=0; i<4; i++) fRec184_tmp[i]=fRec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec184[i] = (fConst7 * (((1.95f * fYec128[i]) - (1.95f * fYec128[i-1])) + fRec184[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec184_perm[i]=fRec184_tmp[count+i];
			
			// LOOP 0x3bc0dd0
			// pre processing
			for (int i=0; i<4; i++) fRec185_tmp[i]=fRec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec185[i] = (fConst7 * (((1.95f * fYec130[i]) - (1.95f * fYec130[i-1])) + fRec185[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec185_perm[i]=fRec185_tmp[count+i];
			
			// LOOP 0x3beb3e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec276[i] = (0.5f * fYec134[i]);
			}
			
			// LOOP 0x3bf5e60
			// exec code
			for (int i=0; i<count; i++) {
				fZec281[i] = (0.5f * fYec138[i]);
			}
			
			// LOOP 0x3c00290
			// exec code
			for (int i=0; i<count; i++) {
				fZec286[i] = (0.5f * fYec142[i]);
			}
			
			// LOOP 0x3c0a6d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec291[i] = (0.5f * fYec146[i]);
			}
			
			// LOOP 0x3c14c00
			// exec code
			for (int i=0; i<count; i++) {
				fZec296[i] = (0.5f * fYec150[i]);
			}
			
			// LOOP 0x3c1f0f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec301[i] = (0.5f * fYec154[i]);
			}
			
			// LOOP 0x3c29620
			// exec code
			for (int i=0; i<count; i++) {
				fZec306[i] = (0.5f * fYec158[i]);
			}
			
			// LOOP 0x3c33b70
			// exec code
			for (int i=0; i<count; i++) {
				fZec309[i] = (0.5f * fYec161[i]);
			}
			
			// LOOP 0x3c3ba60
			// exec code
			for (int i=0; i<count; i++) {
				fZec312[i] = (0.5f * fYec164[i]);
			}
			
			// LOOP 0x3c43cd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec315[i] = (0.5f * fYec167[i]);
			}
			
			// LOOP 0x3c4bba0
			// exec code
			for (int i=0; i<count; i++) {
				fZec318[i] = (0.5f * fYec170[i]);
			}
			
			// LOOP 0x3c53b40
			// exec code
			for (int i=0; i<count; i++) {
				fZec321[i] = (0.5f * fYec173[i]);
			}
			
			// SECTION : 26
			// LOOP 0x3984800
			// exec code
			for (int i=0; i<count; i++) {
				fZec0[i] = (fSlow2 + (fVec0[i-3] + (fVec0[i-1] + fVec0[i-2])));
			}
			
			// LOOP 0x3986680
			// pre processing
			for (int i=0; i<4; i++) fYec5_tmp[i]=fYec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec5[i] = ((fZec12[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec5_perm[i]=fYec5_tmp[count+i];
			
			// LOOP 0x399d590
			// exec code
			for (int i=0; i<count; i++) {
				fZec16[i] = (fSlow8 + (fVec1[i-3] + (fVec1[i-1] + fVec1[i-2])));
			}
			
			// LOOP 0x399f7f0
			// pre processing
			for (int i=0; i<4; i++) fYec11_tmp[i]=fYec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec11[i] = ((fZec27[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec11_perm[i]=fYec11_tmp[count+i];
			
			// LOOP 0x39b1590
			// exec code
			for (int i=0; i<count; i++) {
				fZec31[i] = (fSlow10 + (fVec2[i-3] + (fVec2[i-1] + fVec2[i-2])));
			}
			
			// LOOP 0x39b3a90
			// pre processing
			for (int i=0; i<4; i++) fYec17_tmp[i]=fYec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec17[i] = ((fZec42[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec17_perm[i]=fYec17_tmp[count+i];
			
			// LOOP 0x39c54e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec46[i] = (fSlow12 + (fVec3[i-3] + (fVec3[i-1] + fVec3[i-2])));
			}
			
			// LOOP 0x39c7880
			// pre processing
			for (int i=0; i<4; i++) fYec23_tmp[i]=fYec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec23[i] = ((fZec57[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec23_perm[i]=fYec23_tmp[count+i];
			
			// LOOP 0x39d9430
			// exec code
			for (int i=0; i<count; i++) {
				fZec61[i] = (fSlow14 + (fVec4[i-3] + (fVec4[i-1] + fVec4[i-2])));
			}
			
			// LOOP 0x39db9c0
			// pre processing
			for (int i=0; i<4; i++) fYec29_tmp[i]=fYec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec29[i] = ((fZec72[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec29_perm[i]=fYec29_tmp[count+i];
			
			// LOOP 0x39ed540
			// exec code
			for (int i=0; i<count; i++) {
				fZec76[i] = (fSlow16 + (fVec5[i-3] + (fVec5[i-1] + fVec5[i-2])));
			}
			
			// LOOP 0x39efbd0
			// pre processing
			for (int i=0; i<4; i++) fYec34_tmp[i]=fYec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec34[i] = ((fZec85[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec34_perm[i]=fYec34_tmp[count+i];
			
			// LOOP 0x39ffa00
			// exec code
			for (int i=0; i<count; i++) {
				fZec89[i] = (fSlow18 + (fVec6[i-3] + (fVec6[i-1] + fVec6[i-2])));
			}
			
			// LOOP 0x3a01dc0
			// pre processing
			for (int i=0; i<4; i++) fYec39_tmp[i]=fYec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec39[i] = ((fZec98[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec39_perm[i]=fYec39_tmp[count+i];
			
			// LOOP 0x3a11410
			// exec code
			for (int i=0; i<count; i++) {
				fZec102[i] = (fSlow20 + (fVec7[i-3] + (fVec7[i-1] + fVec7[i-2])));
			}
			
			// LOOP 0x3a13bc0
			// pre processing
			for (int i=0; i<4; i++) fYec44_tmp[i]=fYec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec44[i] = ((fZec111[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec44_perm[i]=fYec44_tmp[count+i];
			
			// LOOP 0x3a23290
			// exec code
			for (int i=0; i<count; i++) {
				fZec115[i] = (fSlow22 + (fVec8[i-3] + (fVec8[i-1] + fVec8[i-2])));
			}
			
			// LOOP 0x3a256f0
			// pre processing
			for (int i=0; i<4; i++) fYec49_tmp[i]=fYec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec49[i] = ((fZec124[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec49_perm[i]=fYec49_tmp[count+i];
			
			// LOOP 0x3a34e10
			// exec code
			for (int i=0; i<count; i++) {
				fZec128[i] = (fSlow24 + (fVec9[i-3] + (fVec9[i-1] + fVec9[i-2])));
			}
			
			// LOOP 0x3a373a0
			// pre processing
			for (int i=0; i<4; i++) fYec54_tmp[i]=fYec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec54[i] = ((fZec137[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec54_perm[i]=fYec54_tmp[count+i];
			
			// LOOP 0x3a46e60
			// exec code
			for (int i=0; i<count; i++) {
				fZec141[i] = (fSlow26 + (fVec10[i-3] + (fVec10[i-1] + fVec10[i-2])));
			}
			
			// LOOP 0x3a588e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec154[i] = (fSlow28 + (fVec11[i-3] + (fVec11[i-1] + fVec11[i-2])));
			}
			
			// LOOP 0x3a6a7b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec167[i] = (fSlow30 + (fVec12[i-3] + (fVec12[i-1] + fVec12[i-2])));
			}
			
			// LOOP 0x3a6f900
			// exec code
			for (int i=0; i<count; i++) {
				fZec168[i] = (fSlow31 + (fVec13[i-3] + (fVec13[i-1] + fVec13[i-2])));
			}
			
			// LOOP 0x3a74d20
			// exec code
			for (int i=0; i<count; i++) {
				fZec169[i] = (fSlow32 + (fVec14[i-3] + (fVec14[i-1] + fVec14[i-2])));
			}
			
			// LOOP 0x3a7a480
			// exec code
			for (int i=0; i<count; i++) {
				fZec170[i] = (fSlow33 + (fVec15[i-3] + (fVec15[i-1] + fVec15[i-2])));
			}
			
			// LOOP 0x3a7f710
			// exec code
			for (int i=0; i<count; i++) {
				fZec171[i] = (fSlow34 + (fVec16[i-3] + (fVec16[i-1] + fVec16[i-2])));
			}
			
			// LOOP 0x3a86590
			// exec code
			for (int i=0; i<count; i++) {
				fZec172[i] = (fSlow37 + (fVec17[i-3] + (fVec17[i-1] + fVec17[i-2])));
			}
			
			// LOOP 0x3a8c530
			// exec code
			for (int i=0; i<count; i++) {
				fZec173[i] = (fSlow38 + (fVec18[i-3] + (fVec18[i-1] + fVec18[i-2])));
			}
			
			// LOOP 0x3a91a00
			// exec code
			for (int i=0; i<count; i++) {
				fZec174[i] = (fSlow39 + (fVec19[i-3] + (fVec19[i-1] + fVec19[i-2])));
			}
			
			// LOOP 0x3a97890
			// exec code
			for (int i=0; i<count; i++) {
				fZec175[i] = (fSlow40 + (fVec20[i-3] + (fVec20[i-1] + fVec20[i-2])));
			}
			
			// LOOP 0x3a9cf50
			// exec code
			for (int i=0; i<count; i++) {
				fZec176[i] = (fSlow41 + (fVec21[i-3] + (fVec21[i-1] + fVec21[i-2])));
			}
			
			// LOOP 0x3aa2b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec177[i] = (fSlow42 + (fVec22[i-3] + (fVec22[i-1] + fVec22[i-2])));
			}
			
			// LOOP 0x3aa7e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec178[i] = (fSlow43 + (fVec23[i-3] + (fVec23[i-1] + fVec23[i-2])));
			}
			
			// LOOP 0x3aad940
			// exec code
			for (int i=0; i<count; i++) {
				fZec179[i] = (fSlow44 + (fVec24[i-3] + (fVec24[i-1] + fVec24[i-2])));
			}
			
			// LOOP 0x3ab36d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec180[i] = (fSlow45 + (fVec25[i-3] + (fVec25[i-1] + fVec25[i-2])));
			}
			
			// LOOP 0x3ab8f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec181[i] = (fSlow46 + (fVec26[i-3] + (fVec26[i-1] + fVec26[i-2])));
			}
			
			// LOOP 0x3abf030
			// exec code
			for (int i=0; i<count; i++) {
				fZec182[i] = (fSlow47 + (fVec27[i-3] + (fVec27[i-1] + fVec27[i-2])));
			}
			
			// LOOP 0x3ac47b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec183[i] = (fSlow48 + (fVec28[i-3] + (fVec28[i-1] + fVec28[i-2])));
			}
			
			// LOOP 0x3acab50
			// exec code
			for (int i=0; i<count; i++) {
				fZec184[i] = (fSlow49 + (fVec29[i-3] + (fVec29[i-1] + fVec29[i-2])));
			}
			
			// LOOP 0x3ad1420
			// exec code
			for (int i=0; i<count; i++) {
				fZec185[i] = (fSlow50 + (fVec30[i-3] + (fVec30[i-1] + fVec30[i-2])));
			}
			
			// LOOP 0x3ad6e40
			// exec code
			for (int i=0; i<count; i++) {
				fZec186[i] = (fSlow51 + (fVec31[i-3] + (fVec31[i-1] + fVec31[i-2])));
			}
			
			// LOOP 0x3add720
			// exec code
			for (int i=0; i<count; i++) {
				fZec187[i] = (fSlow52 + (fVec32[i-3] + (fVec32[i-1] + fVec32[i-2])));
			}
			
			// LOOP 0x3ae33b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec188[i] = (fSlow53 + (fVec33[i-3] + (fVec33[i-1] + fVec33[i-2])));
			}
			
			// LOOP 0x3ae9650
			// exec code
			for (int i=0; i<count; i++) {
				fZec189[i] = (fSlow54 + (fVec34[i-3] + (fVec34[i-1] + fVec34[i-2])));
			}
			
			// LOOP 0x3aeec80
			// exec code
			for (int i=0; i<count; i++) {
				fZec190[i] = (fSlow55 + (fVec35[i-3] + (fVec35[i-1] + fVec35[i-2])));
			}
			
			// LOOP 0x3af4ec0
			// exec code
			for (int i=0; i<count; i++) {
				fZec191[i] = (fSlow56 + (fVec36[i-3] + (fVec36[i-1] + fVec36[i-2])));
			}
			
			// LOOP 0x3afb410
			// exec code
			for (int i=0; i<count; i++) {
				fZec192[i] = (fSlow57 + (fVec37[i-3] + (fVec37[i-1] + fVec37[i-2])));
			}
			
			// LOOP 0x3b01080
			// exec code
			for (int i=0; i<count; i++) {
				fZec193[i] = (fSlow58 + (fVec38[i-3] + (fVec38[i-1] + fVec38[i-2])));
			}
			
			// LOOP 0x3b07990
			// exec code
			for (int i=0; i<count; i++) {
				fZec194[i] = (fSlow59 + (fVec39[i-3] + (fVec39[i-1] + fVec39[i-2])));
			}
			
			// LOOP 0x3b0d5c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec195[i] = (fSlow60 + (fVec40[i-3] + (fVec40[i-1] + fVec40[i-2])));
			}
			
			// LOOP 0x3b14270
			// exec code
			for (int i=0; i<count; i++) {
				fZec196[i] = (fSlow61 + (fVec41[i-3] + (fVec41[i-1] + fVec41[i-2])));
			}
			
			// LOOP 0x3b1b520
			// exec code
			for (int i=0; i<count; i++) {
				fZec197[i] = (fSlow62 + (fVec42[i-3] + (fVec42[i-1] + fVec42[i-2])));
			}
			
			// LOOP 0x3b214b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec198[i] = (fSlow63 + (fVec43[i-3] + (fVec43[i-1] + fVec43[i-2])));
			}
			
			// LOOP 0x3b287e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec199[i] = (fSlow64 + (fVec44[i-3] + (fVec44[i-1] + fVec44[i-2])));
			}
			
			// LOOP 0x3b2ea70
			// exec code
			for (int i=0; i<count; i++) {
				fZec200[i] = (fSlow65 + (fVec45[i-3] + (fVec45[i-1] + fVec45[i-2])));
			}
			
			// LOOP 0x3b353a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec201[i] = (fSlow66 + (fVec46[i-3] + (fVec46[i-1] + fVec46[i-2])));
			}
			
			// LOOP 0x3b3ad50
			// exec code
			for (int i=0; i<count; i++) {
				fZec202[i] = (fSlow67 + (fVec47[i-3] + (fVec47[i-1] + fVec47[i-2])));
			}
			
			// LOOP 0x3b95440
			// exec code
			for (int i=0; i<count; i++) {
				fZec221[i] = (fRec133[i] + (fRec131[i] + (fRec129[i] + (fRec127[i] + fZec220[i]))));
			}
			
			// LOOP 0x3bc42b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec226[i] = (fRec173[i] * fZec203[i]);
			}
			
			// LOOP 0x3bc5490
			// exec code
			for (int i=0; i<count; i++) {
				fZec227[i] = (fRec174[i] * fZec204[i]);
			}
			
			// LOOP 0x3bc66e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec228[i] = (fRec175[i] * fZec205[i]);
			}
			
			// LOOP 0x3bc79a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec229[i] = (fRec176[i] * fZec206[i]);
			}
			
			// LOOP 0x3bc8c50
			// exec code
			for (int i=0; i<count; i++) {
				fZec230[i] = (fRec177[i] * fZec207[i]);
			}
			
			// LOOP 0x3bc9f30
			// exec code
			for (int i=0; i<count; i++) {
				fZec231[i] = (fRec178[i] * fZec208[i]);
			}
			
			// LOOP 0x3bcb1c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec232[i] = (fRec179[i] * fZec209[i]);
			}
			
			// LOOP 0x3bcc500
			// exec code
			for (int i=0; i<count; i++) {
				fZec233[i] = (fRec180[i] * fZec210[i]);
			}
			
			// LOOP 0x3bcd860
			// exec code
			for (int i=0; i<count; i++) {
				fZec234[i] = (fRec182[i] * fZec211[i]);
			}
			
			// LOOP 0x3bcebf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec235[i] = (fRec183[i] * fZec212[i]);
			}
			
			// LOOP 0x3bcff30
			// exec code
			for (int i=0; i<count; i++) {
				fZec236[i] = (fRec184[i] * fZec213[i]);
			}
			
			// LOOP 0x3bd12a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec237[i] = (fRec185[i] * fZec214[i]);
			}
			
			// LOOP 0x3bd2640
			// exec code
			for (int i=0; i<count; i++) {
				fZec238[i] = (fRec173[i] * fZec215[i]);
			}
			
			// LOOP 0x3bd61a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec240[i] = (0.5f * fRec185[i]);
			}
			
			// LOOP 0x3bd7420
			// exec code
			for (int i=0; i<count; i++) {
				fZec241[i] = (0.5f * fRec184[i]);
			}
			
			// LOOP 0x3bd79d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec242[i] = (0.5f * fRec183[i]);
			}
			
			// LOOP 0x3bd7fb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec243[i] = (0.5f * fRec182[i]);
			}
			
			// LOOP 0x3bd8590
			// exec code
			for (int i=0; i<count; i++) {
				fZec244[i] = (0.5f * fRec180[i]);
			}
			
			// LOOP 0x3bd8b70
			// exec code
			for (int i=0; i<count; i++) {
				fZec245[i] = (0.5f * fRec179[i]);
			}
			
			// LOOP 0x3bd9150
			// exec code
			for (int i=0; i<count; i++) {
				fZec246[i] = (0.5f * fRec178[i]);
			}
			
			// LOOP 0x3bd9730
			// exec code
			for (int i=0; i<count; i++) {
				fZec247[i] = (0.5f * fRec177[i]);
			}
			
			// LOOP 0x3bd9d10
			// exec code
			for (int i=0; i<count; i++) {
				fZec248[i] = (0.5f * fRec176[i]);
			}
			
			// LOOP 0x3bda2f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec249[i] = (0.5f * fRec175[i]);
			}
			
			// LOOP 0x3bda8d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec250[i] = (0.5f * fRec171[i]);
			}
			
			// LOOP 0x3bdaeb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec251[i] = (0.5f * fRec169[i]);
			}
			
			// LOOP 0x3bdb490
			// exec code
			for (int i=0; i<count; i++) {
				fZec252[i] = (0.5f * fRec167[i]);
			}
			
			// LOOP 0x3bdba70
			// exec code
			for (int i=0; i<count; i++) {
				fZec253[i] = (0.5f * fRec165[i]);
			}
			
			// LOOP 0x3bdc050
			// exec code
			for (int i=0; i<count; i++) {
				fZec254[i] = (0.5f * fRec163[i]);
			}
			
			// LOOP 0x3bdc630
			// exec code
			for (int i=0; i<count; i++) {
				fZec255[i] = (0.5f * fRec161[i]);
			}
			
			// LOOP 0x3bdcc10
			// exec code
			for (int i=0; i<count; i++) {
				fZec256[i] = (0.5f * fRec159[i]);
			}
			
			// LOOP 0x3bdd1f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec257[i] = (0.5f * fRec157[i]);
			}
			
			// LOOP 0x3bdd7d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec258[i] = (0.5f * fRec155[i]);
			}
			
			// LOOP 0x3bdddb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec259[i] = (0.5f * fRec153[i]);
			}
			
			// LOOP 0x3bde390
			// exec code
			for (int i=0; i<count; i++) {
				fZec260[i] = (0.5f * fRec151[i]);
			}
			
			// LOOP 0x3bde970
			// exec code
			for (int i=0; i<count; i++) {
				fZec261[i] = (0.5f * fRec149[i]);
			}
			
			// LOOP 0x3bdef50
			// exec code
			for (int i=0; i<count; i++) {
				fZec262[i] = (0.5f * fRec147[i]);
			}
			
			// LOOP 0x3bdf530
			// exec code
			for (int i=0; i<count; i++) {
				fZec263[i] = (0.5f * fRec145[i]);
			}
			
			// LOOP 0x3bdfb10
			// exec code
			for (int i=0; i<count; i++) {
				fZec264[i] = (0.5f * fRec143[i]);
			}
			
			// LOOP 0x3be00f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec265[i] = (0.5f * fRec141[i]);
			}
			
			// LOOP 0x3be06d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec266[i] = (0.5f * fRec139[i]);
			}
			
			// LOOP 0x3be0cb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec267[i] = (0.5f * fRec137[i]);
			}
			
			// LOOP 0x3be1290
			// exec code
			for (int i=0; i<count; i++) {
				fZec268[i] = (0.5f * fRec135[i]);
			}
			
			// LOOP 0x3beb270
			// pre processing
			for (int i=0; i<4; i++) fYec135_tmp[i]=fYec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec135[i] = ((fZec276[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec135_perm[i]=fYec135_tmp[count+i];
			
			// LOOP 0x3bf5cf0
			// pre processing
			for (int i=0; i<4; i++) fYec139_tmp[i]=fYec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec139[i] = ((fZec281[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec139_perm[i]=fYec139_tmp[count+i];
			
			// LOOP 0x3c00120
			// pre processing
			for (int i=0; i<4; i++) fYec143_tmp[i]=fYec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec143[i] = ((fZec286[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec143_perm[i]=fYec143_tmp[count+i];
			
			// LOOP 0x3c0a560
			// pre processing
			for (int i=0; i<4; i++) fYec147_tmp[i]=fYec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec147[i] = ((fZec291[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec147_perm[i]=fYec147_tmp[count+i];
			
			// LOOP 0x3c14a90
			// pre processing
			for (int i=0; i<4; i++) fYec151_tmp[i]=fYec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec151[i] = ((fZec296[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec151_perm[i]=fYec151_tmp[count+i];
			
			// LOOP 0x3c1ef80
			// pre processing
			for (int i=0; i<4; i++) fYec155_tmp[i]=fYec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec155[i] = ((fZec301[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec155_perm[i]=fYec155_tmp[count+i];
			
			// LOOP 0x3c294b0
			// pre processing
			for (int i=0; i<4; i++) fYec159_tmp[i]=fYec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec159[i] = ((fZec306[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec159_perm[i]=fYec159_tmp[count+i];
			
			// LOOP 0x3c33a00
			// pre processing
			for (int i=0; i<4; i++) fYec162_tmp[i]=fYec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec162[i] = ((fZec309[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec162_perm[i]=fYec162_tmp[count+i];
			
			// LOOP 0x3c3b8f0
			// pre processing
			for (int i=0; i<4; i++) fYec165_tmp[i]=fYec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec165[i] = ((fZec312[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec165_perm[i]=fYec165_tmp[count+i];
			
			// LOOP 0x3c43b60
			// pre processing
			for (int i=0; i<4; i++) fYec168_tmp[i]=fYec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec168[i] = ((fZec315[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec168_perm[i]=fYec168_tmp[count+i];
			
			// LOOP 0x3c4ba30
			// pre processing
			for (int i=0; i<4; i++) fYec171_tmp[i]=fYec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec171[i] = ((fZec318[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec171_perm[i]=fYec171_tmp[count+i];
			
			// LOOP 0x3c539d0
			// pre processing
			for (int i=0; i<4; i++) fYec174_tmp[i]=fYec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec174[i] = ((fZec321[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec174_perm[i]=fYec174_tmp[count+i];
			
			// LOOP 0x3c5b9b0
			// pre processing
			for (int i=0; i<4; i++) fYec175_tmp[i]=fYec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec175[i] = ((fZec274[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec175_perm[i]=fYec175_tmp[count+i];
			
			// LOOP 0x3c5f6f0
			// pre processing
			for (int i=0; i<4; i++) fYec176_tmp[i]=fYec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec176[i] = ((fZec279[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec176_perm[i]=fYec176_tmp[count+i];
			
			// LOOP 0x3c62f30
			// pre processing
			for (int i=0; i<4; i++) fYec177_tmp[i]=fYec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec177[i] = ((fZec284[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec177_perm[i]=fYec177_tmp[count+i];
			
			// LOOP 0x3c667a0
			// pre processing
			for (int i=0; i<4; i++) fYec178_tmp[i]=fYec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec178[i] = ((fZec289[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec178_perm[i]=fYec178_tmp[count+i];
			
			// LOOP 0x3c6a0a0
			// pre processing
			for (int i=0; i<4; i++) fYec179_tmp[i]=fYec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec179[i] = ((fZec294[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec179_perm[i]=fYec179_tmp[count+i];
			
			// LOOP 0x3c6dfc0
			// pre processing
			for (int i=0; i<4; i++) fYec180_tmp[i]=fYec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec180[i] = ((fZec299[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec180_perm[i]=fYec180_tmp[count+i];
			
			// LOOP 0x3c715e0
			// pre processing
			for (int i=0; i<4; i++) fYec181_tmp[i]=fYec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec181[i] = ((fZec304[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec181_perm[i]=fYec181_tmp[count+i];
			
			// LOOP 0x3c74b20
			// pre processing
			for (int i=0; i<4; i++) fYec182_tmp[i]=fYec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec182[i] = ((fZec307[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec182_perm[i]=fYec182_tmp[count+i];
			
			// LOOP 0x3c78190
			// pre processing
			for (int i=0; i<4; i++) fYec183_tmp[i]=fYec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec183[i] = ((fZec310[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec183_perm[i]=fYec183_tmp[count+i];
			
			// LOOP 0x3c7ba80
			// pre processing
			for (int i=0; i<4; i++) fYec184_tmp[i]=fYec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec184[i] = ((fZec313[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec184_perm[i]=fYec184_tmp[count+i];
			
			// LOOP 0x3c7f170
			// pre processing
			for (int i=0; i<4; i++) fYec185_tmp[i]=fYec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec185[i] = ((fZec316[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec185_perm[i]=fYec185_tmp[count+i];
			
			// LOOP 0x3c82810
			// pre processing
			for (int i=0; i<4; i++) fYec186_tmp[i]=fYec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec186[i] = ((fZec319[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec186_perm[i]=fYec186_tmp[count+i];
			
			// LOOP 0x3c85ee0
			// pre processing
			for (int i=0; i<4; i++) fYec187_tmp[i]=fYec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec187[i] = ((fZec272[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec187_perm[i]=fYec187_tmp[count+i];
			
			// LOOP 0x3c89570
			// pre processing
			for (int i=0; i<4; i++) fYec188_tmp[i]=fYec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec188[i] = ((fZec277[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec188_perm[i]=fYec188_tmp[count+i];
			
			// LOOP 0x3c8cca0
			// pre processing
			for (int i=0; i<4; i++) fYec189_tmp[i]=fYec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec189[i] = ((fZec282[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec189_perm[i]=fYec189_tmp[count+i];
			
			// LOOP 0x3c90420
			// pre processing
			for (int i=0; i<4; i++) fYec190_tmp[i]=fYec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec190[i] = ((fZec287[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec190_perm[i]=fYec190_tmp[count+i];
			
			// LOOP 0x3c93bd0
			// pre processing
			for (int i=0; i<4; i++) fYec191_tmp[i]=fYec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec191[i] = ((fZec292[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec191_perm[i]=fYec191_tmp[count+i];
			
			// LOOP 0x3c973d0
			// pre processing
			for (int i=0; i<4; i++) fYec192_tmp[i]=fYec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec192[i] = ((fZec297[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec192_perm[i]=fYec192_tmp[count+i];
			
			// LOOP 0x3c9ac10
			// pre processing
			for (int i=0; i<4; i++) fYec193_tmp[i]=fYec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec193[i] = ((fZec302[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec193_perm[i]=fYec193_tmp[count+i];
			
			// SECTION : 27
			// LOOP 0x3986210
			// pre processing
			for (int i=0; i<4; i++) fRec2_tmp[i]=fRec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec2[i] = (fRec2[i-1] + (fConst2 * ((square_polyblep_precalc(fZec12[i], fZec13[i], (0.5f * fYec4[i-2]), fZec15[i]) + (2 * fYec5[i-1])) - fRec2[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec2_perm[i]=fRec2_tmp[count+i];
			
			// LOOP 0x399f2a0
			// pre processing
			for (int i=0; i<4; i++) fRec11_tmp[i]=fRec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec11[i] = (fRec11[i-1] + (fConst5 * ((square_polyblep_precalc(fZec27[i], fZec28[i], (0.5f * fYec10[i-2]), fZec30[i]) + (2 * fYec11[i-1])) - fRec11[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec11_perm[i]=fRec11_tmp[count+i];
			
			// LOOP 0x39b3540
			// pre processing
			for (int i=0; i<4; i++) fRec19_tmp[i]=fRec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec19[i] = (fRec19[i-1] + (fConst5 * ((square_polyblep_precalc(fZec42[i], fZec43[i], (0.5f * fYec16[i-2]), fZec45[i]) + (2 * fYec17[i-1])) - fRec19[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec19_perm[i]=fRec19_tmp[count+i];
			
			// LOOP 0x39c7330
			// pre processing
			for (int i=0; i<4; i++) fRec27_tmp[i]=fRec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec27[i] = (fRec27[i-1] + (fConst5 * ((square_polyblep_precalc(fZec57[i], fZec58[i], (0.5f * fYec22[i-2]), fZec60[i]) + (2 * fYec23[i-1])) - fRec27[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec27_perm[i]=fRec27_tmp[count+i];
			
			// LOOP 0x39db470
			// pre processing
			for (int i=0; i<4; i++) fRec35_tmp[i]=fRec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec35[i] = (fRec35[i-1] + (fConst5 * ((square_polyblep_precalc(fZec72[i], fZec73[i], (0.5f * fYec28[i-2]), fZec75[i]) + (2 * fYec29[i-1])) - fRec35[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec35_perm[i]=fRec35_tmp[count+i];
			
			// LOOP 0x39ef680
			// pre processing
			for (int i=0; i<4; i++) fRec43_tmp[i]=fRec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec43[i] = (fRec43[i-1] + (fConst6 * ((square_polyblep_precalc(fZec85[i], fZec86[i], (0.5f * fYec33[i-2]), fZec88[i]) + (2 * fYec34[i-1])) - fRec43[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec43_perm[i]=fRec43_tmp[count+i];
			
			// LOOP 0x3a01870
			// pre processing
			for (int i=0; i<4; i++) fRec50_tmp[i]=fRec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec50[i] = (fRec50[i-1] + (fConst6 * ((square_polyblep_precalc(fZec98[i], fZec99[i], (0.5f * fYec38[i-2]), fZec101[i]) + (2 * fYec39[i-1])) - fRec50[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec50_perm[i]=fRec50_tmp[count+i];
			
			// LOOP 0x3a13670
			// pre processing
			for (int i=0; i<4; i++) fRec57_tmp[i]=fRec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec57[i] = (fRec57[i-1] + (fConst6 * ((square_polyblep_precalc(fZec111[i], fZec112[i], (0.5f * fYec43[i-2]), fZec114[i]) + (2 * fYec44[i-1])) - fRec57[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec57_perm[i]=fRec57_tmp[count+i];
			
			// LOOP 0x3a251a0
			// pre processing
			for (int i=0; i<4; i++) fRec64_tmp[i]=fRec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec64[i] = (fRec64[i-1] + (fConst6 * ((square_polyblep_precalc(fZec124[i], fZec125[i], (0.5f * fYec48[i-2]), fZec127[i]) + (2 * fYec49[i-1])) - fRec64[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec64_perm[i]=fRec64_tmp[count+i];
			
			// LOOP 0x3a36e50
			// pre processing
			for (int i=0; i<4; i++) fRec71_tmp[i]=fRec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec71[i] = (fRec71[i-1] + (fConst8 * ((square_polyblep_precalc(fZec137[i], fZec138[i], (0.5f * fYec53[i-2]), fZec140[i]) + (2 * fYec54[i-1])) - fRec71[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec71_perm[i]=fRec71_tmp[count+i];
			
			// LOOP 0x3a49170
			// pre processing
			for (int i=0; i<4; i++) fYec59_tmp[i]=fYec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec59[i] = ((fZec150[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec59_perm[i]=fYec59_tmp[count+i];
			
			// LOOP 0x3a5b030
			// pre processing
			for (int i=0; i<4; i++) fYec64_tmp[i]=fYec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec64[i] = ((fZec163[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec64_perm[i]=fYec64_tmp[count+i];
			
			// LOOP 0x3a6d020
			// pre processing
			for (int i=0; i<4; i++) fYec65_tmp[i]=fYec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec65[i] = ((fZec10[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec65_perm[i]=fYec65_tmp[count+i];
			
			// LOOP 0x3a72100
			// pre processing
			for (int i=0; i<4; i++) fYec66_tmp[i]=fYec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec66[i] = ((fZec25[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec66_perm[i]=fYec66_tmp[count+i];
			
			// LOOP 0x3a77b90
			// pre processing
			for (int i=0; i<4; i++) fYec67_tmp[i]=fYec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec67[i] = ((fZec40[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec67_perm[i]=fYec67_tmp[count+i];
			
			// LOOP 0x3a7ce30
			// pre processing
			for (int i=0; i<4; i++) fYec68_tmp[i]=fYec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec68[i] = ((fZec55[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec68_perm[i]=fYec68_tmp[count+i];
			
			// LOOP 0x3a827f0
			// pre processing
			for (int i=0; i<4; i++) fYec69_tmp[i]=fYec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec69[i] = ((fZec70[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec69_perm[i]=fYec69_tmp[count+i];
			
			// LOOP 0x3ba1a20
			// exec code
			for (int i=0; i<count; i++) {
				fZec239[i] = (0.25f * (fZec238[i] + (fZec237[i] + (fZec236[i] + (fZec235[i] + (fZec234[i] + (fZec233[i] + (fZec232[i] + (fZec231[i] + (fZec230[i] + (fZec229[i] + (fZec228[i] + (fZec227[i] + (fZec226[i] + ((fRec185[i] * fZec202[i]) + ((fRec184[i] * fZec201[i]) + ((fRec183[i] * fZec200[i]) + ((fRec182[i] * fZec199[i]) + ((fRec180[i] * fZec198[i]) + ((fRec179[i] * fZec197[i]) + ((fRec178[i] * fZec196[i]) + ((fRec177[i] * fZec195[i]) + ((fRec176[i] * fZec194[i]) + ((fRec175[i] * fZec193[i]) + ((fRec174[i] * fZec192[i]) + ((fRec173[i] * fZec191[i]) + ((fRec171[i] * fZec190[i]) + ((fRec169[i] * fZec189[i]) + ((fRec167[i] * fZec188[i]) + ((fRec165[i] * fZec187[i]) + ((fRec163[i] * fZec186[i]) + ((fRec161[i] * fZec185[i]) + ((fRec159[i] * fZec184[i]) + ((fRec157[i] * fZec183[i]) + ((fRec155[i] * fZec182[i]) + ((fRec153[i] * fZec181[i]) + ((fRec151[i] * fZec180[i]) + ((fRec149[i] * fZec179[i]) + ((fRec147[i] * fZec178[i]) + ((fRec145[i] * fZec177[i]) + ((fRec143[i] * fZec176[i]) + ((fRec141[i] * fZec175[i]) + ((fRec139[i] * fZec174[i]) + ((fRec137[i] * fZec173[i]) + ((fRec135[i] * fZec172[i]) + (fSlow36 * ((fRec133[i] * fZec171[i]) + ((fRec131[i] * fZec170[i]) + ((fRec129[i] * fZec169[i]) + ((fRec127[i] * fZec168[i]) + ((fRec125[i] * fZec167[i]) + ((fRec123[i] * fZec154[i]) + ((fRec121[i] * fZec141[i]) + ((fRec119[i] * fZec128[i]) + ((fRec117[i] * fZec115[i]) + ((fRec115[i] * fZec102[i]) + ((fRec113[i] * fZec89[i]) + ((fRec111[i] * fZec76[i]) + ((fRec109[i] * fZec61[i]) + ((fRec107[i] * fZec46[i]) + ((fRec105[i] * fZec31[i]) + ((fRec103[i] * fZec16[i]) + (fRec101[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3bd3c60
			// exec code
			for (int i=0; i<count; i++) {
				fZec269[i] = ((2 * ((((((((((((fRec174[i] + (fRec173[i] + ((((((((((((((((((fZec268[i] + fZec267[i]) + fZec266[i]) + fZec265[i]) + fZec264[i]) + fZec263[i]) + fZec262[i]) + fZec261[i]) + fZec260[i]) + fZec259[i]) + fZec258[i]) + fZec257[i]) + fZec256[i]) + fZec255[i]) + fZec254[i]) + fZec253[i]) + fZec252[i]) + fZec251[i]) + fZec250[i]))) + fZec249[i]) + fZec248[i]) + fZec247[i]) + fZec246[i]) + fZec245[i]) + fZec244[i]) + fZec243[i]) + fZec242[i]) + fZec241[i]) + fZec240[i]) + (fSlow81 * fZec221[i]))) + (fRec185[i] + (fRec184[i] + (fRec183[i] + (fRec182[i] + (fRec180[i] + (fRec179[i] + (fRec178[i] + (fRec177[i] + (fRec176[i] + (fRec173[i] + fRec175[i])))))))))));
			}
			
			// LOOP 0x3bead20
			// pre processing
			for (int i=0; i<4; i++) fRec188_tmp[i]=fRec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec188[i] = (fRec188[i-1] + (fConst20 * ((square_polyblep_precalc(fZec276[i], (0.5f * fYec134[i-1]), (0.5f * fYec134[i-2]), fZec88[i]) + (2 * fYec135[i-1])) - fRec188[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec188_perm[i]=fRec188_tmp[count+i];
			
			// LOOP 0x3bf57a0
			// pre processing
			for (int i=0; i<4; i++) fRec193_tmp[i]=fRec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec193[i] = (fRec193[i-1] + (fConst20 * ((square_polyblep_precalc(fZec281[i], (0.5f * fYec138[i-1]), (0.5f * fYec138[i-2]), fZec101[i]) + (2 * fYec139[i-1])) - fRec193[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec193_perm[i]=fRec193_tmp[count+i];
			
			// LOOP 0x3bffbd0
			// pre processing
			for (int i=0; i<4; i++) fRec198_tmp[i]=fRec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec198[i] = (fRec198[i-1] + (fConst20 * ((square_polyblep_precalc(fZec286[i], (0.5f * fYec142[i-1]), (0.5f * fYec142[i-2]), fZec114[i]) + (2 * fYec143[i-1])) - fRec198[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec198_perm[i]=fRec198_tmp[count+i];
			
			// LOOP 0x3c0a010
			// pre processing
			for (int i=0; i<4; i++) fRec203_tmp[i]=fRec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec203[i] = (fRec203[i-1] + (fConst20 * ((square_polyblep_precalc(fZec291[i], (0.5f * fYec146[i-1]), (0.5f * fYec146[i-2]), fZec127[i]) + (2 * fYec147[i-1])) - fRec203[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec203_perm[i]=fRec203_tmp[count+i];
			
			// LOOP 0x3c14540
			// pre processing
			for (int i=0; i<4; i++) fRec208_tmp[i]=fRec208_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec208[i] = (fRec208[i-1] + (fConst20 * ((square_polyblep_precalc(fZec296[i], (0.5f * fYec150[i-1]), (0.5f * fYec150[i-2]), fZec140[i]) + (2 * fYec151[i-1])) - fRec208[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec208_perm[i]=fRec208_tmp[count+i];
			
			// LOOP 0x3c1ea30
			// pre processing
			for (int i=0; i<4; i++) fRec213_tmp[i]=fRec213_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec213[i] = (fRec213[i-1] + (fConst20 * ((square_polyblep_precalc(fZec301[i], (0.5f * fYec154[i-1]), (0.5f * fYec154[i-2]), fZec153[i]) + (2 * fYec155[i-1])) - fRec213[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec213_perm[i]=fRec213_tmp[count+i];
			
			// LOOP 0x3c28f60
			// pre processing
			for (int i=0; i<4; i++) fRec218_tmp[i]=fRec218_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec218[i] = (fRec218[i-1] + (fConst20 * ((square_polyblep_precalc(fZec306[i], (0.5f * fYec158[i-1]), (0.5f * fYec158[i-2]), fZec166[i]) + (2 * fYec159[i-1])) - fRec218[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec218_perm[i]=fRec218_tmp[count+i];
			
			// LOOP 0x3c334b0
			// pre processing
			for (int i=0; i<4; i++) fRec223_tmp[i]=fRec223_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec223[i] = (fRec223[i-1] + (fConst20 * ((square_polyblep_precalc(fZec309[i], (0.5f * fYec161[i-1]), (0.5f * fYec161[i-2]), fZec15[i]) + (2 * fYec162[i-1])) - fRec223[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec223_perm[i]=fRec223_tmp[count+i];
			
			// LOOP 0x3c3b3a0
			// pre processing
			for (int i=0; i<4; i++) fRec227_tmp[i]=fRec227_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec227[i] = (fRec227[i-1] + (fConst22 * ((square_polyblep_precalc(fZec312[i], (0.5f * fYec164[i-1]), (0.5f * fYec164[i-2]), fZec30[i]) + (2 * fYec165[i-1])) - fRec227[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec227_perm[i]=fRec227_tmp[count+i];
			
			// LOOP 0x3c43610
			// pre processing
			for (int i=0; i<4; i++) fRec231_tmp[i]=fRec231_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec231[i] = (fRec231[i-1] + (fConst22 * ((square_polyblep_precalc(fZec315[i], (0.5f * fYec167[i-1]), (0.5f * fYec167[i-2]), fZec45[i]) + (2 * fYec168[i-1])) - fRec231[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec231_perm[i]=fRec231_tmp[count+i];
			
			// LOOP 0x3c4b4e0
			// pre processing
			for (int i=0; i<4; i++) fRec235_tmp[i]=fRec235_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec235[i] = (fRec235[i-1] + (fConst22 * ((square_polyblep_precalc(fZec318[i], (0.5f * fYec170[i-1]), (0.5f * fYec170[i-2]), fZec60[i]) + (2 * fYec171[i-1])) - fRec235[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec235_perm[i]=fRec235_tmp[count+i];
			
			// LOOP 0x3c53480
			// pre processing
			for (int i=0; i<4; i++) fRec239_tmp[i]=fRec239_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec239[i] = (fRec239[i-1] + (fConst22 * ((square_polyblep_precalc(fZec321[i], (0.5f * fYec173[i-1]), (0.5f * fYec173[i-2]), fZec75[i]) + (2 * fYec174[i-1])) - fRec239[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec239_perm[i]=fRec239_tmp[count+i];
			
			// LOOP 0x3c5b460
			// pre processing
			for (int i=0; i<4; i++) fRec243_tmp[i]=fRec243_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec243[i] = (fRec243[i-1] + (fConst22 * ((square_polyblep_precalc(fZec274[i], fZec275[i], (0.5f * fYec133[i-2]), fZec88[i]) + (2 * fYec175[i-1])) - fRec243[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec243_perm[i]=fRec243_tmp[count+i];
			
			// LOOP 0x3c5f1a0
			// pre processing
			for (int i=0; i<4; i++) fRec245_tmp[i]=fRec245_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec245[i] = (fRec245[i-1] + (fConst22 * ((square_polyblep_precalc(fZec279[i], fZec280[i], (0.5f * fYec137[i-2]), fZec101[i]) + (2 * fYec176[i-1])) - fRec245[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec245_perm[i]=fRec245_tmp[count+i];
			
			// LOOP 0x3c629e0
			// pre processing
			for (int i=0; i<4; i++) fRec247_tmp[i]=fRec247_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec247[i] = (fRec247[i-1] + (fConst22 * ((square_polyblep_precalc(fZec284[i], fZec285[i], (0.5f * fYec141[i-2]), fZec114[i]) + (2 * fYec177[i-1])) - fRec247[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec247_perm[i]=fRec247_tmp[count+i];
			
			// LOOP 0x3c66250
			// pre processing
			for (int i=0; i<4; i++) fRec249_tmp[i]=fRec249_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec249[i] = (fRec249[i-1] + (fConst22 * ((square_polyblep_precalc(fZec289[i], fZec290[i], (0.5f * fYec145[i-2]), fZec127[i]) + (2 * fYec178[i-1])) - fRec249[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec249_perm[i]=fRec249_tmp[count+i];
			
			// LOOP 0x3c69b50
			// pre processing
			for (int i=0; i<4; i++) fRec251_tmp[i]=fRec251_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec251[i] = (fRec251[i-1] + (fConst24 * ((square_polyblep_precalc(fZec294[i], fZec295[i], (0.5f * fYec149[i-2]), fZec140[i]) + (2 * fYec179[i-1])) - fRec251[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec251_perm[i]=fRec251_tmp[count+i];
			
			// LOOP 0x3c6da70
			// pre processing
			for (int i=0; i<4; i++) fRec253_tmp[i]=fRec253_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec253[i] = (fRec253[i-1] + (fConst24 * ((square_polyblep_precalc(fZec299[i], fZec300[i], (0.5f * fYec153[i-2]), fZec153[i]) + (2 * fYec180[i-1])) - fRec253[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec253_perm[i]=fRec253_tmp[count+i];
			
			// LOOP 0x3c71090
			// pre processing
			for (int i=0; i<4; i++) fRec255_tmp[i]=fRec255_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec255[i] = (fRec255[i-1] + (fConst24 * ((square_polyblep_precalc(fZec304[i], fZec305[i], (0.5f * fYec157[i-2]), fZec166[i]) + (2 * fYec181[i-1])) - fRec255[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec255_perm[i]=fRec255_tmp[count+i];
			
			// LOOP 0x3c745d0
			// pre processing
			for (int i=0; i<4; i++) fRec257_tmp[i]=fRec257_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec257[i] = (fRec257[i-1] + (fConst24 * ((square_polyblep_precalc(fZec307[i], fZec308[i], (0.5f * fYec160[i-2]), fZec15[i]) + (2 * fYec182[i-1])) - fRec257[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec257_perm[i]=fRec257_tmp[count+i];
			
			// LOOP 0x3c77c40
			// pre processing
			for (int i=0; i<4; i++) fRec259_tmp[i]=fRec259_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec259[i] = (fRec259[i-1] + (fConst25 * ((square_polyblep_precalc(fZec310[i], fZec311[i], (0.5f * fYec163[i-2]), fZec30[i]) + (2 * fYec183[i-1])) - fRec259[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec259_perm[i]=fRec259_tmp[count+i];
			
			// LOOP 0x3c7b530
			// pre processing
			for (int i=0; i<4; i++) fRec261_tmp[i]=fRec261_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec261[i] = (fRec261[i-1] + (fConst25 * ((square_polyblep_precalc(fZec313[i], fZec314[i], (0.5f * fYec166[i-2]), fZec45[i]) + (2 * fYec184[i-1])) - fRec261[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec261_perm[i]=fRec261_tmp[count+i];
			
			// LOOP 0x3c7ec20
			// pre processing
			for (int i=0; i<4; i++) fRec263_tmp[i]=fRec263_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec263[i] = (fRec263[i-1] + (fConst25 * ((square_polyblep_precalc(fZec316[i], fZec317[i], (0.5f * fYec169[i-2]), fZec60[i]) + (2 * fYec185[i-1])) - fRec263[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec263_perm[i]=fRec263_tmp[count+i];
			
			// LOOP 0x3c822c0
			// pre processing
			for (int i=0; i<4; i++) fRec265_tmp[i]=fRec265_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec265[i] = (fRec265[i-1] + (fConst25 * ((square_polyblep_precalc(fZec319[i], fZec320[i], (0.5f * fYec172[i-2]), fZec75[i]) + (2 * fYec186[i-1])) - fRec265[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec265_perm[i]=fRec265_tmp[count+i];
			
			// LOOP 0x3c85990
			// pre processing
			for (int i=0; i<4; i++) fRec267_tmp[i]=fRec267_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec267[i] = (fRec267[i-1] + (fConst25 * ((square_polyblep_precalc(fZec272[i], fZec273[i], (0.5f * fYec132[i-2]), fZec88[i]) + (2 * fYec187[i-1])) - fRec267[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec267_perm[i]=fRec267_tmp[count+i];
			
			// LOOP 0x3c89020
			// pre processing
			for (int i=0; i<4; i++) fRec269_tmp[i]=fRec269_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec269[i] = (fRec269[i-1] + (fConst25 * ((square_polyblep_precalc(fZec277[i], fZec278[i], (0.5f * fYec136[i-2]), fZec101[i]) + (2 * fYec188[i-1])) - fRec269[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec269_perm[i]=fRec269_tmp[count+i];
			
			// LOOP 0x3c8c750
			// pre processing
			for (int i=0; i<4; i++) fRec271_tmp[i]=fRec271_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec271[i] = (fRec271[i-1] + (fConst25 * ((square_polyblep_precalc(fZec282[i], fZec283[i], (0.5f * fYec140[i-2]), fZec114[i]) + (2 * fYec189[i-1])) - fRec271[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec271_perm[i]=fRec271_tmp[count+i];
			
			// LOOP 0x3c8fed0
			// pre processing
			for (int i=0; i<4; i++) fRec273_tmp[i]=fRec273_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec273[i] = (fRec273[i-1] + (fConst25 * ((square_polyblep_precalc(fZec287[i], fZec288[i], (0.5f * fYec144[i-2]), fZec127[i]) + (2 * fYec190[i-1])) - fRec273[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec273_perm[i]=fRec273_tmp[count+i];
			
			// LOOP 0x3c93680
			// pre processing
			for (int i=0; i<4; i++) fRec275_tmp[i]=fRec275_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec275[i] = (fRec275[i-1] + (fConst2 * ((square_polyblep_precalc(fZec292[i], fZec293[i], (0.5f * fYec148[i-2]), fZec140[i]) + (2 * fYec191[i-1])) - fRec275[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec275_perm[i]=fRec275_tmp[count+i];
			
			// LOOP 0x3c96e80
			// pre processing
			for (int i=0; i<4; i++) fRec277_tmp[i]=fRec277_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec277[i] = (fRec277[i-1] + (fConst2 * ((square_polyblep_precalc(fZec297[i], fZec298[i], (0.5f * fYec152[i-2]), fZec153[i]) + (2 * fYec192[i-1])) - fRec277[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec277_perm[i]=fRec277_tmp[count+i];
			
			// LOOP 0x3c9a6c0
			// pre processing
			for (int i=0; i<4; i++) fRec279_tmp[i]=fRec279_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec279[i] = (fRec279[i-1] + (fConst2 * ((square_polyblep_precalc(fZec302[i], fZec303[i], (0.5f * fYec156[i-2]), fZec166[i]) + (2 * fYec193[i-1])) - fRec279[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec279_perm[i]=fRec279_tmp[count+i];
			
			// SECTION : 28
			// LOOP 0x3985e00
			// pre processing
			for (int i=0; i<4; i++) fRec1_tmp[i]=fRec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec1[i] = (fConst4 * ((fRec2[i] - fRec2[i-1]) + fRec1[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec1_perm[i]=fRec1_tmp[count+i];
			
			// LOOP 0x399edb0
			// pre processing
			for (int i=0; i<4; i++) fRec10_tmp[i]=fRec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec10[i] = (fConst4 * ((fRec11[i] - fRec11[i-1]) + fRec10[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec10_perm[i]=fRec10_tmp[count+i];
			
			// LOOP 0x39b3050
			// pre processing
			for (int i=0; i<4; i++) fRec18_tmp[i]=fRec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec18[i] = (fConst4 * ((fRec19[i] - fRec19[i-1]) + fRec18[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec18_perm[i]=fRec18_tmp[count+i];
			
			// LOOP 0x39c6e40
			// pre processing
			for (int i=0; i<4; i++) fRec26_tmp[i]=fRec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec26[i] = (fConst4 * ((fRec27[i] - fRec27[i-1]) + fRec26[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec26_perm[i]=fRec26_tmp[count+i];
			
			// LOOP 0x39daf80
			// pre processing
			for (int i=0; i<4; i++) fRec34_tmp[i]=fRec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec34[i] = (fConst4 * ((fRec35[i] - fRec35[i-1]) + fRec34[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec34_perm[i]=fRec34_tmp[count+i];
			
			// LOOP 0x39ef190
			// pre processing
			for (int i=0; i<4; i++) fRec42_tmp[i]=fRec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec42[i] = (fConst7 * ((fRec43[i] - fRec43[i-1]) + fRec42[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec42_perm[i]=fRec42_tmp[count+i];
			
			// LOOP 0x3a01380
			// pre processing
			for (int i=0; i<4; i++) fRec49_tmp[i]=fRec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec49[i] = (fConst7 * ((fRec50[i] - fRec50[i-1]) + fRec49[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec49_perm[i]=fRec49_tmp[count+i];
			
			// LOOP 0x3a13180
			// pre processing
			for (int i=0; i<4; i++) fRec56_tmp[i]=fRec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec56[i] = (fConst7 * ((fRec57[i] - fRec57[i-1]) + fRec56[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec56_perm[i]=fRec56_tmp[count+i];
			
			// LOOP 0x3a24cb0
			// pre processing
			for (int i=0; i<4; i++) fRec63_tmp[i]=fRec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec63[i] = (fConst7 * ((fRec64[i] - fRec64[i-1]) + fRec63[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec63_perm[i]=fRec63_tmp[count+i];
			
			// LOOP 0x3a36960
			// pre processing
			for (int i=0; i<4; i++) fRec70_tmp[i]=fRec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec70[i] = (fConst7 * ((fRec71[i] - fRec71[i-1]) + fRec70[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec70_perm[i]=fRec70_tmp[count+i];
			
			// LOOP 0x3a48c20
			// pre processing
			for (int i=0; i<4; i++) fRec78_tmp[i]=fRec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec78[i] = (fRec78[i-1] + (fConst8 * ((square_polyblep_precalc(fZec150[i], fZec151[i], (0.5f * fYec58[i-2]), fZec153[i]) + (2 * fYec59[i-1])) - fRec78[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec78_perm[i]=fRec78_tmp[count+i];
			
			// LOOP 0x3a5aae0
			// pre processing
			for (int i=0; i<4; i++) fRec85_tmp[i]=fRec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec85[i] = (fRec85[i-1] + (fConst8 * ((square_polyblep_precalc(fZec163[i], fZec164[i], (0.5f * fYec63[i-2]), fZec166[i]) + (2 * fYec64[i-1])) - fRec85[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec85_perm[i]=fRec85_tmp[count+i];
			
			// LOOP 0x3a6cad0
			// pre processing
			for (int i=0; i<4; i++) fRec92_tmp[i]=fRec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec92[i] = (fRec92[i-1] + (fConst8 * ((square_polyblep_precalc(fZec10[i], fZec11[i], (0.5f * fYec3[i-2]), fZec15[i]) + (2 * fYec65[i-1])) - fRec92[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec92_perm[i]=fRec92_tmp[count+i];
			
			// LOOP 0x3a71bb0
			// pre processing
			for (int i=0; i<4; i++) fRec94_tmp[i]=fRec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec94[i] = (fRec94[i-1] + (fConst9 * ((square_polyblep_precalc(fZec25[i], fZec26[i], (0.5f * fYec9[i-2]), fZec30[i]) + (2 * fYec66[i-1])) - fRec94[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec94_perm[i]=fRec94_tmp[count+i];
			
			// LOOP 0x3a77640
			// pre processing
			for (int i=0; i<4; i++) fRec96_tmp[i]=fRec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec96[i] = (fRec96[i-1] + (fConst9 * ((square_polyblep_precalc(fZec40[i], fZec41[i], (0.5f * fYec15[i-2]), fZec45[i]) + (2 * fYec67[i-1])) - fRec96[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec96_perm[i]=fRec96_tmp[count+i];
			
			// LOOP 0x3a7c8e0
			// pre processing
			for (int i=0; i<4; i++) fRec98_tmp[i]=fRec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec98[i] = (fRec98[i-1] + (fConst9 * ((square_polyblep_precalc(fZec55[i], fZec56[i], (0.5f * fYec21[i-2]), fZec60[i]) + (2 * fYec68[i-1])) - fRec98[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec98_perm[i]=fRec98_tmp[count+i];
			
			// LOOP 0x3a822a0
			// pre processing
			for (int i=0; i<4; i++) fRec100_tmp[i]=fRec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec100[i] = (fRec100[i-1] + (fConst9 * ((square_polyblep_precalc(fZec70[i], fZec71[i], (0.5f * fYec27[i-2]), fZec75[i]) + (2 * fYec69[i-1])) - fRec100[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec100_perm[i]=fRec100_tmp[count+i];
			
			// LOOP 0x3b95330
			// exec code
			for (int i=0; i<count; i++) {
				fZec222[i] = (fRec149[i] + (fRec147[i] + (fRec145[i] + (fRec143[i] + (fRec141[i] + (fRec139[i] + (fRec137[i] + (fRec135[i] + fZec221[i]))))))));
			}
			
			// LOOP 0x3ba1910
			// pre processing
			for (int i=0; i<4; i++) fYec131_tmp[i]=fYec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec131[i] = (fZec269[i] - fZec239[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec131_perm[i]=fYec131_tmp[count+i];
			
			// LOOP 0x3bea7a0
			// pre processing
			for (int i=0; i<4; i++) fRec187_tmp[i]=fRec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec187[i] = (fConst21 * ((fRec188[i] - fRec188[i-1]) + fRec187[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec187_perm[i]=fRec187_tmp[count+i];
			
			// LOOP 0x3bf52d0
			// pre processing
			for (int i=0; i<4; i++) fRec192_tmp[i]=fRec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec192[i] = (fConst21 * ((fRec193[i] - fRec193[i-1]) + fRec192[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec192_perm[i]=fRec192_tmp[count+i];
			
			// LOOP 0x3bff6e0
			// pre processing
			for (int i=0; i<4; i++) fRec197_tmp[i]=fRec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec197[i] = (fConst21 * ((fRec198[i] - fRec198[i-1]) + fRec197[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec197_perm[i]=fRec197_tmp[count+i];
			
			// LOOP 0x3c09b20
			// pre processing
			for (int i=0; i<4; i++) fRec202_tmp[i]=fRec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec202[i] = (fConst21 * ((fRec203[i] - fRec203[i-1]) + fRec202[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec202_perm[i]=fRec202_tmp[count+i];
			
			// LOOP 0x3c14050
			// pre processing
			for (int i=0; i<4; i++) fRec207_tmp[i]=fRec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec207[i] = (fConst21 * ((fRec208[i] - fRec208[i-1]) + fRec207[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec207_perm[i]=fRec207_tmp[count+i];
			
			// LOOP 0x3c1e560
			// pre processing
			for (int i=0; i<4; i++) fRec212_tmp[i]=fRec212_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec212[i] = (fConst21 * ((fRec213[i] - fRec213[i-1]) + fRec212[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec212_perm[i]=fRec212_tmp[count+i];
			
			// LOOP 0x3c28ac0
			// pre processing
			for (int i=0; i<4; i++) fRec217_tmp[i]=fRec217_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec217[i] = (fConst21 * ((fRec218[i] - fRec218[i-1]) + fRec217[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec217_perm[i]=fRec217_tmp[count+i];
			
			// LOOP 0x3c33030
			// pre processing
			for (int i=0; i<4; i++) fRec222_tmp[i]=fRec222_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec222[i] = (fConst21 * ((fRec223[i] - fRec223[i-1]) + fRec222[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec222_perm[i]=fRec222_tmp[count+i];
			
			// LOOP 0x3c3af40
			// pre processing
			for (int i=0; i<4; i++) fRec226_tmp[i]=fRec226_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec226[i] = (fConst21 * ((fRec227[i] - fRec227[i-1]) + fRec226[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec226_perm[i]=fRec226_tmp[count+i];
			
			// LOOP 0x3c431d0
			// pre processing
			for (int i=0; i<4; i++) fRec230_tmp[i]=fRec230_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec230[i] = (fConst21 * ((fRec231[i] - fRec231[i-1]) + fRec230[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec230_perm[i]=fRec230_tmp[count+i];
			
			// LOOP 0x3c4b0c0
			// pre processing
			for (int i=0; i<4; i++) fRec234_tmp[i]=fRec234_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec234[i] = (fConst21 * ((fRec235[i] - fRec235[i-1]) + fRec234[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec234_perm[i]=fRec234_tmp[count+i];
			
			// LOOP 0x3c53070
			// pre processing
			for (int i=0; i<4; i++) fRec238_tmp[i]=fRec238_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec238[i] = (fConst21 * ((fRec239[i] - fRec239[i-1]) + fRec238[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec238_perm[i]=fRec238_tmp[count+i];
			
			// LOOP 0x3c5b070
			// pre processing
			for (int i=0; i<4; i++) fRec242_tmp[i]=fRec242_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec242[i] = (fConst23 * ((fRec243[i] - fRec243[i-1]) + fRec242[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec242_perm[i]=fRec242_tmp[count+i];
			
			// LOOP 0x3c5e9b0
			// pre processing
			for (int i=0; i<4; i++) fRec244_tmp[i]=fRec244_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec244[i] = (fConst23 * ((fRec245[i] - fRec245[i-1]) + fRec244[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec244_perm[i]=fRec244_tmp[count+i];
			
			// LOOP 0x3c62190
			// pre processing
			for (int i=0; i<4; i++) fRec246_tmp[i]=fRec246_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec246[i] = (fConst23 * ((fRec247[i] - fRec247[i-1]) + fRec246[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec246_perm[i]=fRec246_tmp[count+i];
			
			// LOOP 0x3c659f0
			// pre processing
			for (int i=0; i<4; i++) fRec248_tmp[i]=fRec248_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec248[i] = (fConst23 * ((fRec249[i] - fRec249[i-1]) + fRec248[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec248_perm[i]=fRec248_tmp[count+i];
			
			// LOOP 0x3c692b0
			// pre processing
			for (int i=0; i<4; i++) fRec250_tmp[i]=fRec250_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec250[i] = (fConst23 * ((fRec251[i] - fRec251[i-1]) + fRec250[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec250_perm[i]=fRec250_tmp[count+i];
			
			// LOOP 0x3c6d0c0
			// pre processing
			for (int i=0; i<4; i++) fRec252_tmp[i]=fRec252_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec252[i] = (fConst23 * ((fRec253[i] - fRec253[i-1]) + fRec252[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec252_perm[i]=fRec252_tmp[count+i];
			
			// LOOP 0x3c70ba0
			// pre processing
			for (int i=0; i<4; i++) fRec254_tmp[i]=fRec254_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec254[i] = (fConst23 * ((fRec255[i] - fRec255[i-1]) + fRec254[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec254_perm[i]=fRec254_tmp[count+i];
			
			// LOOP 0x3c740e0
			// pre processing
			for (int i=0; i<4; i++) fRec256_tmp[i]=fRec256_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec256[i] = (fConst23 * ((fRec257[i] - fRec257[i-1]) + fRec256[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec256_perm[i]=fRec256_tmp[count+i];
			
			// LOOP 0x3c77750
			// pre processing
			for (int i=0; i<4; i++) fRec258_tmp[i]=fRec258_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec258[i] = (fConst23 * ((fRec259[i] - fRec259[i-1]) + fRec258[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec258_perm[i]=fRec258_tmp[count+i];
			
			// LOOP 0x3c7b060
			// pre processing
			for (int i=0; i<4; i++) fRec260_tmp[i]=fRec260_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec260[i] = (fConst23 * ((fRec261[i] - fRec261[i-1]) + fRec260[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec260_perm[i]=fRec260_tmp[count+i];
			
			// LOOP 0x3c7e780
			// pre processing
			for (int i=0; i<4; i++) fRec262_tmp[i]=fRec262_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec262[i] = (fConst23 * ((fRec263[i] - fRec263[i-1]) + fRec262[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec262_perm[i]=fRec262_tmp[count+i];
			
			// LOOP 0x3c81e40
			// pre processing
			for (int i=0; i<4; i++) fRec264_tmp[i]=fRec264_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec264[i] = (fConst23 * ((fRec265[i] - fRec265[i-1]) + fRec264[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec264_perm[i]=fRec264_tmp[count+i];
			
			// LOOP 0x3c85530
			// pre processing
			for (int i=0; i<4; i++) fRec266_tmp[i]=fRec266_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec266[i] = (fConst4 * ((fRec267[i] - fRec267[i-1]) + fRec266[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec266_perm[i]=fRec266_tmp[count+i];
			
			// LOOP 0x3c88be0
			// pre processing
			for (int i=0; i<4; i++) fRec268_tmp[i]=fRec268_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec268[i] = (fConst4 * ((fRec269[i] - fRec269[i-1]) + fRec268[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec268_perm[i]=fRec268_tmp[count+i];
			
			// LOOP 0x3c8c340
			// pre processing
			for (int i=0; i<4; i++) fRec270_tmp[i]=fRec270_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec270[i] = (fConst4 * ((fRec271[i] - fRec271[i-1]) + fRec270[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec270_perm[i]=fRec270_tmp[count+i];
			
			// LOOP 0x3c8fad0
			// pre processing
			for (int i=0; i<4; i++) fRec272_tmp[i]=fRec272_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec272[i] = (fConst4 * ((fRec273[i] - fRec273[i-1]) + fRec272[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec272_perm[i]=fRec272_tmp[count+i];
			
			// LOOP 0x3c93290
			// pre processing
			for (int i=0; i<4; i++) fRec274_tmp[i]=fRec274_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec274[i] = (fConst4 * ((fRec275[i] - fRec275[i-1]) + fRec274[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec274_perm[i]=fRec274_tmp[count+i];
			
			// LOOP 0x3c96660
			// pre processing
			for (int i=0; i<4; i++) fRec276_tmp[i]=fRec276_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec276[i] = (fConst4 * ((fRec277[i] - fRec277[i-1]) + fRec276[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec276_perm[i]=fRec276_tmp[count+i];
			
			// LOOP 0x3c99e60
			// pre processing
			for (int i=0; i<4; i++) fRec278_tmp[i]=fRec278_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec278[i] = (fConst4 * ((fRec279[i] - fRec279[i-1]) + fRec278[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec278_perm[i]=fRec278_tmp[count+i];
			
			// SECTION : 29
			// LOOP 0x3a48730
			// pre processing
			for (int i=0; i<4; i++) fRec77_tmp[i]=fRec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec77[i] = (fConst7 * ((fRec78[i] - fRec78[i-1]) + fRec77[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec77_perm[i]=fRec77_tmp[count+i];
			
			// LOOP 0x3a5a5f0
			// pre processing
			for (int i=0; i<4; i++) fRec84_tmp[i]=fRec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec84[i] = (fConst7 * ((fRec85[i] - fRec85[i-1]) + fRec84[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec84_perm[i]=fRec84_tmp[count+i];
			
			// LOOP 0x3a6c5e0
			// pre processing
			for (int i=0; i<4; i++) fRec91_tmp[i]=fRec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec91[i] = (fConst7 * ((fRec92[i] - fRec92[i-1]) + fRec91[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec91_perm[i]=fRec91_tmp[count+i];
			
			// LOOP 0x3a716c0
			// pre processing
			for (int i=0; i<4; i++) fRec93_tmp[i]=fRec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec93[i] = (fConst7 * ((fRec94[i] - fRec94[i-1]) + fRec93[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec93_perm[i]=fRec93_tmp[count+i];
			
			// LOOP 0x3a77150
			// pre processing
			for (int i=0; i<4; i++) fRec95_tmp[i]=fRec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec95[i] = (fConst7 * ((fRec96[i] - fRec96[i-1]) + fRec95[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec95_perm[i]=fRec95_tmp[count+i];
			
			// LOOP 0x3a7c3f0
			// pre processing
			for (int i=0; i<4; i++) fRec97_tmp[i]=fRec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec97[i] = (fConst7 * ((fRec98[i] - fRec98[i-1]) + fRec97[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec97_perm[i]=fRec97_tmp[count+i];
			
			// LOOP 0x3a81db0
			// pre processing
			for (int i=0; i<4; i++) fRec99_tmp[i]=fRec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec99[i] = (fConst7 * ((fRec100[i] - fRec100[i-1]) + fRec99[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec99_perm[i]=fRec99_tmp[count+i];
			
			// LOOP 0x3b95220
			// exec code
			for (int i=0; i<count; i++) {
				fZec223[i] = (fRec173[i] + (fRec171[i] + (fRec169[i] + (fRec167[i] + (fRec165[i] + (fRec163[i] + (fRec161[i] + (fRec159[i] + (fRec157[i] + (fRec155[i] + (fRec153[i] + (fRec151[i] + fZec222[i]))))))))))));
			}
			
			// LOOP 0x3ba13b0
			// pre processing
			for (int i=0; i<4; i++) fRec181_tmp[i]=fRec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec181[i] = (fConst19 * ((fZec269[i] - (fZec239[i] + fYec131[i-1])) + fRec181[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec181_perm[i]=fRec181_tmp[count+i];
			
			// LOOP 0x3bea600
			// exec code
			for (int i=0; i<count; i++) {
				fZec322[i] = ((fRec250[i] * fZec171[i]) + ((fRec248[i] * fZec170[i]) + ((fRec246[i] * fZec169[i]) + ((fRec244[i] * fZec168[i]) + ((fRec242[i] * fZec167[i]) + ((fRec238[i] * fZec154[i]) + ((fRec234[i] * fZec141[i]) + ((fRec230[i] * fZec128[i]) + ((fRec226[i] * fZec115[i]) + ((fRec222[i] * fZec102[i]) + ((fRec217[i] * fZec89[i]) + ((fRec212[i] * fZec76[i]) + ((fRec207[i] * fZec61[i]) + ((fRec202[i] * fZec46[i]) + ((fRec197[i] * fZec31[i]) + ((fRec192[i] * fZec16[i]) + (fRec187[i] * fZec0[i])))))))))))))))));
			}
			
			// LOOP 0x3ccf670
			// exec code
			for (int i=0; i<count; i++) {
				fZec330[i] = ((fRec70[i] * fZec171[i]) + ((fRec63[i] * fZec170[i]) + ((fRec56[i] * fZec169[i]) + ((fRec49[i] * fZec168[i]) + ((fRec42[i] * fZec167[i]) + ((fRec34[i] * fZec154[i]) + ((fRec26[i] * fZec141[i]) + ((fRec18[i] * fZec128[i]) + ((fRec10[i] * fZec115[i]) + ((fRec1[i] * fZec102[i]) + ((fRec278[i] * fZec89[i]) + ((fRec276[i] * fZec76[i]) + ((fRec274[i] * fZec61[i]) + ((fRec272[i] * fZec46[i]) + ((fRec270[i] * fZec31[i]) + ((fRec268[i] * fZec16[i]) + (fRec266[i] * fZec0[i])))))))))))))))));
			}
			
			// LOOP 0x3cd4550
			// exec code
			for (int i=0; i<count; i++) {
				fZec331[i] = ((fRec274[i] * fZec171[i]) + ((fRec272[i] * fZec170[i]) + ((fRec270[i] * fZec169[i]) + ((fRec268[i] * fZec168[i]) + ((fRec266[i] * fZec167[i]) + ((fRec264[i] * fZec154[i]) + ((fRec262[i] * fZec141[i]) + ((fRec260[i] * fZec128[i]) + ((fRec258[i] * fZec115[i]) + ((fRec256[i] * fZec102[i]) + ((fRec254[i] * fZec89[i]) + ((fRec252[i] * fZec76[i]) + ((fRec250[i] * fZec61[i]) + ((fRec248[i] * fZec46[i]) + ((fRec246[i] * fZec31[i]) + ((fRec244[i] * fZec16[i]) + (fRec242[i] * fZec0[i])))))))))))))))));
			}
			
			// SECTION : 30
			// LOOP 0x3ba1240
			// exec code
			for (int i=0; i<count; i++) {
				fZec270[i] = (0.002f * (fRec181[i] * fSlow1));
			}
			
			// LOOP 0x3bea4c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec323[i] = (0.41975f * ((fRec125[i] * fZec215[i]) + ((fRec123[i] * fZec214[i]) + ((fRec121[i] * fZec213[i]) + ((fRec119[i] * fZec212[i]) + ((fRec117[i] * fZec211[i]) + ((fRec115[i] * fZec210[i]) + ((fRec113[i] * fZec209[i]) + ((fRec111[i] * fZec208[i]) + ((fRec109[i] * fZec207[i]) + ((fRec107[i] * fZec206[i]) + ((fRec105[i] * fZec205[i]) + ((fRec103[i] * fZec204[i]) + ((fRec101[i] * fZec203[i]) + ((fRec99[i] * fZec202[i]) + ((fRec97[i] * fZec201[i]) + ((fRec95[i] * fZec200[i]) + ((fRec93[i] * fZec199[i]) + ((fRec91[i] * fZec198[i]) + ((fRec84[i] * fZec197[i]) + ((fRec77[i] * fZec196[i]) + ((fRec70[i] * fZec195[i]) + ((fRec63[i] * fZec194[i]) + ((fRec56[i] * fZec193[i]) + ((fRec49[i] * fZec192[i]) + ((fRec42[i] * fZec191[i]) + ((fRec34[i] * fZec190[i]) + ((fRec26[i] * fZec189[i]) + ((fRec18[i] * fZec188[i]) + ((fRec10[i] * fZec187[i]) + ((fRec1[i] * fZec186[i]) + ((fRec278[i] * fZec185[i]) + ((fRec276[i] * fZec184[i]) + ((fRec274[i] * fZec183[i]) + ((fRec272[i] * fZec182[i]) + ((fRec270[i] * fZec181[i]) + ((fRec268[i] * fZec180[i]) + ((fRec266[i] * fZec179[i]) + ((fRec264[i] * fZec178[i]) + ((fRec262[i] * fZec177[i]) + ((fRec260[i] * fZec176[i]) + ((fRec258[i] * fZec175[i]) + ((fRec256[i] * fZec174[i]) + ((fRec254[i] * fZec173[i]) + ((fRec252[i] * fZec172[i]) + (fSlow36 * fZec322[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3caba50
			// exec code
			for (int i=0; i<count; i++) {
				fZec324[i] = (1.679f * ((fSlow36 * (fRec238[i] + (fRec234[i] + (fRec230[i] + (fRec226[i] + (fRec222[i] + (fRec217[i] + (fRec212[i] + (fRec207[i] + (fRec202[i] + (fRec197[i] + (fRec192[i] + (fRec187[i] + (fRec250[i] + (fRec248[i] + (fRec246[i] + (fRec242[i] + fRec244[i]))))))))))))))))) + (fRec264[i] + (fRec262[i] + (fRec260[i] + (fRec258[i] + (fRec256[i] + (fRec254[i] + (fRec252[i] + (fRec278[i] + (fRec276[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec268[i] + (fRec266[i] + (fRec34[i] + (fRec26[i] + (fRec18[i] + (fRec10[i] + (fRec1[i] + (fRec63[i] + (fRec56[i] + (fRec49[i] + (fRec42[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec77[i] + (fRec70[i] + fZec220[i])))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3cbe1e0
			// pre processing
			for (int i=0; i<4; i++) iRec285_tmp[i]=iRec285_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec285[i] = (12345 + (1103515245 * iRec285[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) iRec285_perm[i]=iRec285_tmp[count+i];
			
			// LOOP 0x3ce99d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec332[i] = (0.25f * ((fRec149[i] * fZec215[i]) + ((fRec147[i] * fZec214[i]) + ((fRec145[i] * fZec213[i]) + ((fRec143[i] * fZec212[i]) + ((fRec141[i] * fZec211[i]) + ((fRec139[i] * fZec210[i]) + ((fRec137[i] * fZec209[i]) + ((fRec135[i] * fZec208[i]) + ((fRec133[i] * fZec207[i]) + ((fRec131[i] * fZec206[i]) + ((fRec129[i] * fZec205[i]) + ((fRec127[i] * fZec204[i]) + ((fRec125[i] * fZec203[i]) + ((fRec123[i] * fZec202[i]) + ((fRec121[i] * fZec201[i]) + ((fRec119[i] * fZec200[i]) + ((fRec117[i] * fZec199[i]) + ((fRec115[i] * fZec198[i]) + ((fRec113[i] * fZec197[i]) + ((fRec111[i] * fZec196[i]) + ((fRec109[i] * fZec195[i]) + ((fRec107[i] * fZec194[i]) + ((fRec105[i] * fZec193[i]) + ((fRec103[i] * fZec192[i]) + ((fRec101[i] * fZec191[i]) + ((fRec99[i] * fZec190[i]) + ((fRec97[i] * fZec189[i]) + ((fRec95[i] * fZec188[i]) + ((fRec93[i] * fZec187[i]) + ((fRec91[i] * fZec186[i]) + ((fRec84[i] * fZec185[i]) + ((fRec77[i] * fZec184[i]) + ((fRec70[i] * fZec183[i]) + ((fRec63[i] * fZec182[i]) + ((fRec56[i] * fZec181[i]) + ((fRec49[i] * fZec180[i]) + ((fRec42[i] * fZec179[i]) + ((fRec34[i] * fZec178[i]) + ((fRec26[i] * fZec177[i]) + ((fRec18[i] * fZec176[i]) + ((fRec10[i] * fZec175[i]) + ((fRec1[i] * fZec174[i]) + ((fRec278[i] * fZec173[i]) + ((fRec276[i] * fZec172[i]) + (fSlow36 * fZec331[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3cfb9b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec333[i] = ((fSlow36 * (fRec264[i] + (fRec262[i] + (fRec260[i] + (fRec258[i] + (fRec256[i] + (fRec254[i] + (fRec252[i] + (fRec250[i] + (fRec248[i] + (fRec246[i] + (fRec244[i] + (fRec242[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec266[i] + fRec268[i]))))))))))))))))) + (fRec278[i] + (fRec276[i] + (fRec34[i] + (fRec26[i] + (fRec18[i] + (fRec10[i] + (fRec1[i] + (fRec63[i] + (fRec56[i] + (fRec49[i] + (fRec42[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec77[i] + (fRec70[i] + fZec222[i]))))))))))))))))))));
			}
			
			// LOOP 0x3d0ff30
			// exec code
			for (int i=0; i<count; i++) {
				fZec335[i] = (0.25f * (fZec238[i] + ((fRec171[i] * fZec214[i]) + ((fRec169[i] * fZec213[i]) + ((fRec167[i] * fZec212[i]) + ((fRec165[i] * fZec211[i]) + ((fRec163[i] * fZec210[i]) + ((fRec161[i] * fZec209[i]) + ((fRec159[i] * fZec208[i]) + ((fRec157[i] * fZec207[i]) + ((fRec155[i] * fZec206[i]) + ((fRec153[i] * fZec205[i]) + ((fRec151[i] * fZec204[i]) + ((fRec149[i] * fZec203[i]) + ((fRec147[i] * fZec202[i]) + ((fRec145[i] * fZec201[i]) + ((fRec143[i] * fZec200[i]) + ((fRec141[i] * fZec199[i]) + ((fRec139[i] * fZec198[i]) + ((fRec137[i] * fZec197[i]) + ((fRec135[i] * fZec196[i]) + ((fRec133[i] * fZec195[i]) + ((fRec131[i] * fZec194[i]) + ((fRec129[i] * fZec193[i]) + ((fRec127[i] * fZec192[i]) + ((fRec125[i] * fZec191[i]) + ((fRec123[i] * fZec190[i]) + ((fRec121[i] * fZec189[i]) + ((fRec119[i] * fZec188[i]) + ((fRec117[i] * fZec187[i]) + ((fRec115[i] * fZec186[i]) + ((fRec113[i] * fZec185[i]) + ((fRec111[i] * fZec184[i]) + ((fRec109[i] * fZec183[i]) + ((fRec107[i] * fZec182[i]) + ((fRec105[i] * fZec181[i]) + ((fRec103[i] * fZec180[i]) + ((fRec101[i] * fZec179[i]) + ((fRec99[i] * fZec178[i]) + ((fRec97[i] * fZec177[i]) + ((fRec95[i] * fZec176[i]) + ((fRec93[i] * fZec175[i]) + ((fRec91[i] * fZec174[i]) + ((fRec84[i] * fZec173[i]) + ((fRec77[i] * fZec172[i]) + (fSlow36 * fZec330[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3d216c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec336[i] = ((fSlow36 * (fRec278[i] + (fRec276[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec268[i] + (fRec266[i] + (fRec34[i] + (fRec26[i] + (fRec18[i] + (fRec10[i] + (fRec1[i] + (fRec63[i] + (fRec56[i] + (fRec49[i] + (fRec70[i] + fRec42[i]))))))))))))))))) + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec77[i] + fZec223[i]))))))));
			}
			
			// LOOP 0x3d34330
			// exec code
			for (int i=0; i<count; i++) {
				fZec338[i] = (0.25f * (fZec238[i] + (fZec237[i] + (fZec236[i] + (fZec235[i] + (fZec234[i] + (fZec233[i] + (fZec232[i] + (fZec231[i] + (fZec230[i] + (fZec229[i] + (fZec228[i] + (fZec227[i] + (fZec226[i] + ((fRec171[i] * fZec202[i]) + ((fRec169[i] * fZec201[i]) + ((fRec167[i] * fZec200[i]) + ((fRec165[i] * fZec199[i]) + ((fRec163[i] * fZec198[i]) + ((fRec161[i] * fZec197[i]) + ((fRec159[i] * fZec196[i]) + ((fRec157[i] * fZec195[i]) + ((fRec155[i] * fZec194[i]) + ((fRec153[i] * fZec193[i]) + ((fRec151[i] * fZec192[i]) + ((fRec149[i] * fZec191[i]) + ((fRec147[i] * fZec190[i]) + ((fRec145[i] * fZec189[i]) + ((fRec143[i] * fZec188[i]) + ((fRec141[i] * fZec187[i]) + ((fRec139[i] * fZec186[i]) + ((fRec137[i] * fZec185[i]) + ((fRec135[i] * fZec184[i]) + ((fRec133[i] * fZec183[i]) + ((fRec131[i] * fZec182[i]) + ((fRec129[i] * fZec181[i]) + ((fRec127[i] * fZec180[i]) + ((fRec125[i] * fZec179[i]) + ((fRec123[i] * fZec178[i]) + ((fRec121[i] * fZec177[i]) + ((fRec119[i] * fZec176[i]) + ((fRec117[i] * fZec175[i]) + ((fRec115[i] * fZec174[i]) + ((fRec113[i] * fZec173[i]) + ((fRec111[i] * fZec172[i]) + (fSlow36 * ((fRec109[i] * fZec171[i]) + ((fRec107[i] * fZec170[i]) + ((fRec105[i] * fZec169[i]) + ((fRec103[i] * fZec168[i]) + ((fRec101[i] * fZec167[i]) + ((fRec99[i] * fZec154[i]) + ((fRec97[i] * fZec141[i]) + ((fRec95[i] * fZec128[i]) + ((fRec93[i] * fZec115[i]) + ((fRec91[i] * fZec102[i]) + ((fRec84[i] * fZec89[i]) + ((fRec77[i] * fZec76[i]) + ((fRec70[i] * fZec61[i]) + ((fRec63[i] * fZec46[i]) + ((fRec56[i] * fZec31[i]) + ((fRec49[i] * fZec16[i]) + (fRec42[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3d4a540
			// exec code
			for (int i=0; i<count; i++) {
				fZec339[i] = ((fSlow36 * (fRec63[i] + (fRec56[i] + (fRec49[i] + (fRec42[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec77[i] + (fRec70[i] + fZec218[i]))))))))))))) + (fRec185[i] + (fRec184[i] + (fRec183[i] + (fRec182[i] + (fRec180[i] + (fRec179[i] + (fRec178[i] + (fRec177[i] + (fRec176[i] + (fRec175[i] + (fRec174[i] + ((2 * fRec173[i]) + (fRec171[i] + (fRec169[i] + (fRec167[i] + (fRec165[i] + (fRec163[i] + (fRec161[i] + (fRec159[i] + (fRec157[i] + (fRec155[i] + (fRec153[i] + (fRec151[i] + (fRec149[i] + (fRec147[i] + (fRec145[i] + (fRec143[i] + (fRec141[i] + (fRec139[i] + (fRec137[i] + (fRec135[i] + (fRec133[i] + (fRec131[i] + (fRec129[i] + (fRec127[i] + (fRec125[i] + (fRec123[i] + (fRec121[i] + (fRec119[i] + (fRec117[i] + (fRec115[i] + (fRec111[i] + fRec113[i])))))))))))))))))))))))))))))))))))))))))));
			}
			
			// SECTION : 31
			// LOOP 0x3bea3b0
			// pre processing
			for (int i=0; i<4; i++) fYec194_tmp[i]=fYec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec194[i] = (fZec324[i] - fZec323[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec194_perm[i]=fYec194_tmp[count+i];
			
			// LOOP 0x3cbdf10
			// exec code
			for (int i=0; i<count; i++) {
				fZec326[i] = faustpower<2>(float(min(1.0f, max(-1.0f, (fZec270[i] + ((4.656612875245796e-16f * iRec285[i]) + fZec239[i]))))));
			}
			
			// LOOP 0x3ce98c0
			// pre processing
			for (int i=0; i<4; i++) fYec199_tmp[i]=fYec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec199[i] = (fZec333[i] - fZec332[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec199_perm[i]=fYec199_tmp[count+i];
			
			// LOOP 0x3d0fe20
			// pre processing
			for (int i=0; i<4; i++) fYec202_tmp[i]=fYec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec202[i] = (fZec336[i] - fZec335[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec202_perm[i]=fYec202_tmp[count+i];
			
			// LOOP 0x3d34220
			// pre processing
			for (int i=0; i<4; i++) fYec205_tmp[i]=fYec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec205[i] = (fZec339[i] - fZec338[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec205_perm[i]=fYec205_tmp[count+i];
			
			// SECTION : 32
			// LOOP 0x3be9ec0
			// pre processing
			for (int i=0; i<4; i++) fRec186_tmp[i]=fRec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec186[i] = (fConst19 * ((fZec324[i] - (fZec323[i] + fYec194[i-1])) + fRec186[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec186_perm[i]=fRec186_tmp[count+i];
			
			// LOOP 0x3cbd900
			// pre processing
			for (int i=0; i<4; i++) fRec282_tmp[i]=fRec282_perm[i];
			for (int i=0; i<4; i++) iRec283_tmp[i]=iRec283_perm[i];
			for (int i=0; i<4; i++) fRec284_tmp[i]=fRec284_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iZec327[i] = int((iRec283[i-1] < iConst28));
				fRec282[i] = ((iZec327[i])?(fRec282[i-1] + fZec326[i]):fZec326[i]);
				iRec283[i] = ((iZec327[i])?(1 + iRec283[i-1]):1);
				fRec284[i] = ((iZec327[i])?fRec284[i-1]:fRec282[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec284_perm[i]=fRec284_tmp[count+i];
			for (int i=0; i<4; i++) iRec283_perm[i]=iRec283_tmp[count+i];
			for (int i=0; i<4; i++) fRec282_perm[i]=fRec282_tmp[count+i];
			
			// LOOP 0x3ce9340
			// pre processing
			for (int i=0; i<4; i++) fRec292_tmp[i]=fRec292_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec292[i] = (fConst19 * ((fZec333[i] - (fZec332[i] + fYec199[i-1])) + fRec292[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec292_perm[i]=fRec292_tmp[count+i];
			
			// LOOP 0x3d0f8a0
			// pre processing
			for (int i=0; i<4; i++) fRec295_tmp[i]=fRec295_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec295[i] = (fConst19 * ((fZec336[i] - (fZec335[i] + fYec202[i-1])) + fRec295[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec295_perm[i]=fRec295_tmp[count+i];
			
			// LOOP 0x3d33ca0
			// pre processing
			for (int i=0; i<4; i++) fRec298_tmp[i]=fRec298_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec298[i] = (fConst19 * ((fZec339[i] - (fZec338[i] + fYec205[i-1])) + fRec298[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec298_perm[i]=fRec298_tmp[count+i];
			
			// SECTION : 33
			// LOOP 0x39846c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec216[i] = ((fRec180[i] * fZec215[i]) + ((fRec179[i] * fZec214[i]) + ((fRec178[i] * fZec213[i]) + ((fRec177[i] * fZec212[i]) + ((fRec176[i] * fZec211[i]) + ((fRec175[i] * fZec210[i]) + ((fRec174[i] * fZec209[i]) + ((fRec173[i] * fZec208[i]) + ((fRec171[i] * fZec207[i]) + ((fRec169[i] * fZec206[i]) + ((fRec167[i] * fZec205[i]) + ((fRec165[i] * fZec204[i]) + ((fRec163[i] * fZec203[i]) + ((fRec161[i] * fZec202[i]) + ((fRec159[i] * fZec201[i]) + ((fRec157[i] * fZec200[i]) + ((fRec155[i] * fZec199[i]) + ((fRec153[i] * fZec198[i]) + ((fRec151[i] * fZec197[i]) + ((fRec149[i] * fZec196[i]) + ((fRec147[i] * fZec195[i]) + ((fRec145[i] * fZec194[i]) + ((fRec143[i] * fZec193[i]) + ((fRec141[i] * fZec192[i]) + ((fRec139[i] * fZec191[i]) + ((fRec137[i] * fZec190[i]) + ((fRec135[i] * fZec189[i]) + ((fRec133[i] * fZec188[i]) + ((fRec131[i] * fZec187[i]) + ((fRec129[i] * fZec186[i]) + ((fRec127[i] * fZec185[i]) + ((fRec125[i] * fZec184[i]) + ((fRec123[i] * fZec183[i]) + ((fRec121[i] * fZec182[i]) + ((fRec119[i] * fZec181[i]) + ((fRec117[i] * fZec180[i]) + ((fRec115[i] * fZec179[i]) + ((fRec113[i] * fZec178[i]) + ((fRec111[i] * fZec177[i]) + ((fRec109[i] * fZec176[i]) + ((fRec107[i] * fZec175[i]) + ((fRec105[i] * fZec174[i]) + ((fRec103[i] * fZec173[i]) + ((fRec101[i] * fZec172[i]) + (fSlow36 * ((fRec99[i] * fZec171[i]) + ((fRec97[i] * fZec170[i]) + ((fRec95[i] * fZec169[i]) + ((fRec93[i] * fZec168[i]) + ((fRec91[i] * fZec167[i]) + ((fRec84[i] * fZec154[i]) + ((fRec77[i] * fZec141[i]) + ((fRec70[i] * fZec128[i]) + ((fRec63[i] * fZec115[i]) + ((fRec56[i] * fZec102[i]) + ((fRec49[i] * fZec89[i]) + ((fRec42[i] * fZec76[i]) + ((fRec34[i] * fZec61[i]) + ((fRec26[i] * fZec46[i]) + ((fRec18[i] * fZec31[i]) + ((fRec10[i] * fZec16[i]) + (fRec1[i] * fZec0[i]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3be9db0
			// exec code
			for (int i=0; i<count; i++) {
				fZec325[i] = (fZec323[i] + (0.002f * (fRec186[i] * fSlow1)));
			}
			
			// LOOP 0x3cbd7c0
			// pre processing
			for (int i=0; i<4; i++) fYec195_tmp[i]=fYec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec195[i] = log10f(sqrtf((fConst29 * fRec284[i])));
			}
			// post processing
			for (int i=0; i<4; i++) fYec195_perm[i]=fYec195_tmp[count+i];
			
			// LOOP 0x3ce91d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec334[i] = (fZec332[i] + (0.002f * (fRec292[i] * fSlow1)));
			}
			
			// LOOP 0x3d0f730
			// exec code
			for (int i=0; i<count; i++) {
				fZec337[i] = (fZec335[i] + (0.002f * (fRec295[i] * fSlow1)));
			}
			
			// LOOP 0x3d33b30
			// exec code
			for (int i=0; i<count; i++) {
				fZec340[i] = (fZec338[i] + (0.002f * (fRec298[i] * fSlow1)));
			}
			
			// SECTION : 34
			// LOOP 0x3984580
			// exec code
			for (int i=0; i<count; i++) {
				fZec217[i] = (0.25f * fZec216[i]);
			}
			
			// LOOP 0x3b95110
			// exec code
			for (int i=0; i<count; i++) {
				fZec224[i] = ((fSlow36 * (fRec34[i] + (fRec26[i] + (fRec18[i] + (fRec10[i] + (fRec1[i] + (fRec63[i] + (fRec56[i] + (fRec49[i] + (fRec42[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec70[i] + fRec77[i]))))))))))))))))) + (fRec180[i] + (fRec179[i] + (fRec178[i] + (fRec177[i] + (fRec176[i] + (fRec175[i] + (fRec174[i] + fZec223[i]))))))));
			}
			
			// LOOP 0x3cbd6b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec328[i] = (2e+01f * fYec195[i]);
			}
			
			// LOOP 0x3cc3fa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec329[i] = (2e+01f * fYec195[i-1]);
			}
			
			// LOOP 0x3ce1950
			// pre processing
			for (int i=0; i<4; i++) fYec197_tmp[i]=fYec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec197[i] = (fSlow90 * fZec325[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec197_perm[i]=fYec197_tmp[count+i];
			
			// LOOP 0x3ce90c0
			// pre processing
			for (int i=0; i<4; i++) fYec200_tmp[i]=fYec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec200[i] = (fSlow93 * fZec334[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec200_perm[i]=fYec200_tmp[count+i];
			
			// LOOP 0x3d0f620
			// pre processing
			for (int i=0; i<4; i++) fYec203_tmp[i]=fYec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec203[i] = (fSlow96 * fZec337[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec203_perm[i]=fYec203_tmp[count+i];
			
			// LOOP 0x3d33a20
			// pre processing
			for (int i=0; i<4; i++) fYec206_tmp[i]=fYec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec206[i] = (fSlow99 * fZec340[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec206_perm[i]=fYec206_tmp[count+i];
			
			// SECTION : 35
			// LOOP 0x3984470
			// pre processing
			for (int i=0; i<4; i++) fYec122_tmp[i]=fYec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec122[i] = (fZec224[i] - fZec217[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec122_perm[i]=fYec122_tmp[count+i];
			
			// LOOP 0x3cbd2b0
			// pre processing
			for (int i=0; i<4; i++) fRec281_tmp[i]=fRec281_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec281[i] = min(1.0f, max(0.0f, ((((int((fZec328[i] > -25.0f)))?((int((fZec329[i] < -25.0f)))?1.0f:0.0f):0.0f) + fRec281[i-1]) - ((int((fZec329[i] > -35.0f)))?((int((fZec328[i] < -35.0f)))?1.0f:0.0f):0.0f))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec281_perm[i]=fRec281_tmp[count+i];
			
			// LOOP 0x3ce13d0
			// pre processing
			for (int i=0; i<4; i++) fRec289_tmp[i]=fRec289_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec289[i] = (fConst32 * ((fYec197[i] - fYec197[i-1]) + fRec289[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec289_perm[i]=fRec289_tmp[count+i];
			
			// LOOP 0x3ce8b40
			// pre processing
			for (int i=0; i<4; i++) fRec291_tmp[i]=fRec291_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec291[i] = (fConst34 * ((fYec200[i] - fYec200[i-1]) + fRec291[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec291_perm[i]=fRec291_tmp[count+i];
			
			// LOOP 0x3d0f0a0
			// pre processing
			for (int i=0; i<4; i++) fRec294_tmp[i]=fRec294_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec294[i] = (fConst36 * ((fYec203[i] - fYec203[i-1]) + fRec294[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec294_perm[i]=fRec294_tmp[count+i];
			
			// LOOP 0x3d334a0
			// pre processing
			for (int i=0; i<4; i++) fRec297_tmp[i]=fRec297_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec297[i] = (fConst38 * ((fYec206[i] - fYec206[i-1]) + fRec297[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec297_perm[i]=fRec297_tmp[count+i];
			
			// LOOP 0x3d8ef70
			// exec code
			for (int i=0; i<count; i++) {
				fZec341[i] = (0.25f * ((fRec177[i] * fZec215[i]) + ((fRec176[i] * fZec214[i]) + ((fRec175[i] * fZec213[i]) + ((fRec174[i] * fZec212[i]) + ((fRec173[i] * fZec211[i]) + ((fRec185[i] * fZec210[i]) + ((fRec184[i] * fZec209[i]) + ((fRec183[i] * fZec208[i]) + ((fRec182[i] * fZec207[i]) + ((fRec180[i] * fZec206[i]) + ((fRec179[i] * fZec205[i]) + ((fRec178[i] * fZec204[i]) + ((fRec177[i] * fZec203[i]) + ((fRec176[i] * fZec202[i]) + ((fRec175[i] * fZec201[i]) + ((fRec174[i] * fZec200[i]) + ((fRec173[i] * fZec199[i]) + ((fRec171[i] * fZec198[i]) + ((fRec169[i] * fZec197[i]) + ((fRec167[i] * fZec196[i]) + ((fRec165[i] * fZec195[i]) + ((fRec163[i] * fZec194[i]) + ((fRec161[i] * fZec193[i]) + ((fRec159[i] * fZec192[i]) + ((fRec157[i] * fZec191[i]) + ((fRec155[i] * fZec190[i]) + ((fRec153[i] * fZec189[i]) + ((fRec151[i] * fZec188[i]) + ((fRec149[i] * fZec187[i]) + ((fRec147[i] * fZec186[i]) + ((fRec145[i] * fZec185[i]) + ((fRec143[i] * fZec184[i]) + ((fRec141[i] * fZec183[i]) + ((fRec139[i] * fZec182[i]) + ((fRec137[i] * fZec181[i]) + ((fRec135[i] * fZec180[i]) + ((fRec133[i] * fZec179[i]) + ((fRec131[i] * fZec178[i]) + ((fRec129[i] * fZec177[i]) + ((fRec127[i] * fZec176[i]) + ((fRec125[i] * fZec175[i]) + ((fRec123[i] * fZec174[i]) + ((fRec121[i] * fZec173[i]) + ((fRec119[i] * fZec172[i]) + (fSlow36 * ((fRec117[i] * fZec171[i]) + ((fRec115[i] * fZec170[i]) + ((fRec113[i] * fZec169[i]) + ((fRec111[i] * fZec168[i]) + ((fRec109[i] * fZec167[i]) + ((fRec107[i] * fZec154[i]) + ((fRec105[i] * fZec141[i]) + ((fRec103[i] * fZec128[i]) + ((fRec101[i] * fZec115[i]) + ((fRec99[i] * fZec102[i]) + ((fRec97[i] * fZec89[i]) + ((fRec95[i] * fZec76[i]) + ((fRec93[i] * fZec61[i]) + ((fRec91[i] * fZec46[i]) + ((fRec84[i] * fZec31[i]) + ((fRec77[i] * fZec16[i]) + (fRec70[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3da82e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec342[i] = ((fRec177[i] + (fRec175[i] + fRec176[i])) + (2 * ((fZec240[i] + (fZec241[i] + (fZec242[i] + (fZec243[i] + (fZec244[i] + (fZec245[i] + (fZec246[i] + (fZec247[i] + (fZec248[i] + (fZec249[i] + (fRec174[i] + (fRec173[i] + (fZec250[i] + (fZec251[i] + (fZec252[i] + (fZec253[i] + (fZec254[i] + (fZec255[i] + (fZec256[i] + (fZec257[i] + (fZec258[i] + (fZec259[i] + (fZec260[i] + (fZec261[i] + (fZec262[i] + (fZec263[i] + (fZec264[i] + (fZec265[i] + (fZec266[i] + (fZec267[i] + (fZec268[i] + ((((((((0.5f * fRec119[i]) + (0.5f * fRec121[i])) + (0.5f * fRec123[i])) + (0.5f * fRec125[i])) + (0.5f * fRec127[i])) + (0.5f * fRec129[i])) + (0.5f * fRec131[i])) + (0.5f * fRec133[i]))))))))))))))))))))))))))))))))) + (fSlow81 * (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec77[i] + (fRec70[i] + fZec219[i]))))))))))));
			}
			
			// SECTION : 36
			// LOOP 0x3984020
			// pre processing
			for (int i=0; i<4; i++) fRec0_tmp[i]=fRec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec0[i] = (fConst19 * ((fZec224[i] - (fZec217[i] + fYec122[i-1])) + fRec0[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec0_perm[i]=fRec0_tmp[count+i];
			
			// LOOP 0x3cbc700
			// pre processing
			for (int i=0; i<4; i++) fRec280_tmp[i]=fRec280_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec280[i] = ((fConst26 * ((int((fRec281[i] > 0.5f)))?((int((fRec281[i-1] < 0.5f)))?1.0f:0.0f):0.0f)) + (fConst27 * fRec280[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec280_perm[i]=fRec280_tmp[count+i];
			
			// LOOP 0x3ce12c0
			// pre processing
			for (int i=0; i<4; i++) fYec198_tmp[i]=fYec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec198[i] = ((fSlow91 * fZec325[i]) + (0.5416666666666667f * fRec289[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec198_perm[i]=fYec198_tmp[count+i];
			
			// LOOP 0x3ce8a30
			// pre processing
			for (int i=0; i<4; i++) fYec201_tmp[i]=fYec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec201[i] = ((fSlow94 * fZec334[i]) + (0.5416666666666667f * fRec291[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec201_perm[i]=fYec201_tmp[count+i];
			
			// LOOP 0x3d0ef90
			// pre processing
			for (int i=0; i<4; i++) fYec204_tmp[i]=fYec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec204[i] = ((fSlow97 * fZec337[i]) + (0.5416666666666667f * fRec294[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec204_perm[i]=fYec204_tmp[count+i];
			
			// LOOP 0x3d33390
			// pre processing
			for (int i=0; i<4; i++) fYec207_tmp[i]=fYec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec207[i] = ((fSlow100 * fZec340[i]) + (0.5416666666666667f * fRec297[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec207_perm[i]=fYec207_tmp[count+i];
			
			// LOOP 0x3d71ce0
			// pre processing
			for (int i=0; i<4; i++) fRec300_tmp[i]=fRec300_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec300[i] = (fRec300[i-1] + (fConst8 * (fYec197[i] - fRec300[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec300_perm[i]=fRec300_tmp[count+i];
			
			// LOOP 0x3d73aa0
			// pre processing
			for (int i=0; i<4; i++) fRec302_tmp[i]=fRec302_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec302[i] = (fRec302[i-1] + (fConst10 * (fYec200[i] - fRec302[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec302_perm[i]=fRec302_tmp[count+i];
			
			// LOOP 0x3d758a0
			// pre processing
			for (int i=0; i<4; i++) fRec304_tmp[i]=fRec304_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec304[i] = (fRec304[i-1] + (fConst13 * (fYec203[i] - fRec304[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec304_perm[i]=fRec304_tmp[count+i];
			
			// LOOP 0x3d776a0
			// pre processing
			for (int i=0; i<4; i++) fRec306_tmp[i]=fRec306_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec306[i] = (fRec306[i-1] + (fConst16 * (fYec206[i] - fRec306[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec306_perm[i]=fRec306_tmp[count+i];
			
			// LOOP 0x3d8ee60
			// pre processing
			for (int i=0; i<4; i++) fYec208_tmp[i]=fYec208_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec208[i] = (fZec342[i] - fZec341[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec208_perm[i]=fYec208_tmp[count+i];
			
			// SECTION : 37
			// LOOP 0x3983110
			// exec code
			for (int i=0; i<count; i++) {
				fZec225[i] = (fRec0[i] * fSlow1);
			}
			
			// LOOP 0x3ba1100
			// exec code
			for (int i=0; i<count; i++) {
				fZec271[i] = (fZec239[i] + fZec270[i]);
			}
			
			// LOOP 0x3cbc5b0
			// pre processing
			for (int i=0; i<4; i++) fYec196_tmp[i]=fYec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec196[i] = min(1.0f, (fConst30 * fRec280[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec196_perm[i]=fYec196_tmp[count+i];
			
			// LOOP 0x3ccc020
			// pre processing
			for (int i=0; i<4; i++) fRec286_tmp[i]=fRec286_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec286[i] = (fSlow84 + (0.98f * fRec286[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec286_perm[i]=fRec286_tmp[count+i];
			
			// LOOP 0x3ccf1b0
			// pre processing
			for (int i=0; i<4; i++) fRec287_tmp[i]=fRec287_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec287[i] = (fRec287[i-1] + (fConst31 * ((fSlow35 * ((fSlow88 * (((0.25f * fZec322[i]) + (0.125f * fZec331[i])) + (0.0625f * fZec330[i]))) + (fSlow86 * ((0.25f * fZec331[i]) + (0.125f * fZec330[i]))))) - fRec287[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec287_perm[i]=fRec287_tmp[count+i];
			
			// LOOP 0x3ce0f50
			// pre processing
			for (int i=0; i<4; i++) fRec288_tmp[i]=fRec288_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec288[i] = (fConst33 * ((fYec198[i] - fYec198[i-1]) + fRec288[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec288_perm[i]=fRec288_tmp[count+i];
			
			// LOOP 0x3ce85b0
			// pre processing
			for (int i=0; i<4; i++) fRec290_tmp[i]=fRec290_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec290[i] = (fConst35 * ((fYec201[i] - fYec201[i-1]) + fRec290[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec290_perm[i]=fRec290_tmp[count+i];
			
			// LOOP 0x3d0eb10
			// pre processing
			for (int i=0; i<4; i++) fRec293_tmp[i]=fRec293_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec293[i] = (fConst37 * ((fYec204[i] - fYec204[i-1]) + fRec293[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec293_perm[i]=fRec293_tmp[count+i];
			
			// LOOP 0x3d32f10
			// pre processing
			for (int i=0; i<4; i++) fRec296_tmp[i]=fRec296_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec296[i] = (fConst39 * ((fYec207[i] - fYec207[i-1]) + fRec296[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec296_perm[i]=fRec296_tmp[count+i];
			
			// LOOP 0x3d71880
			// pre processing
			for (int i=0; i<4; i++) fRec299_tmp[i]=fRec299_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec299[i] = (fRec299[i-1] + (fConst8 * (fRec300[i] - fRec299[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec299_perm[i]=fRec299_tmp[count+i];
			
			// LOOP 0x3d735f0
			// pre processing
			for (int i=0; i<4; i++) fRec301_tmp[i]=fRec301_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec301[i] = (fRec301[i-1] + (fConst10 * (fRec302[i] - fRec301[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec301_perm[i]=fRec301_tmp[count+i];
			
			// LOOP 0x3d753f0
			// pre processing
			for (int i=0; i<4; i++) fRec303_tmp[i]=fRec303_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec303[i] = (fRec303[i-1] + (fConst13 * (fRec304[i] - fRec303[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec303_perm[i]=fRec303_tmp[count+i];
			
			// LOOP 0x3d771f0
			// pre processing
			for (int i=0; i<4; i++) fRec305_tmp[i]=fRec305_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec305[i] = (fRec305[i-1] + (fConst16 * (fRec306[i] - fRec305[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec305_perm[i]=fRec305_tmp[count+i];
			
			// LOOP 0x3d8ea20
			// pre processing
			for (int i=0; i<4; i++) fRec307_tmp[i]=fRec307_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec307[i] = (fConst19 * ((fZec342[i] - (fZec341[i] + fYec208[i-1])) + fRec307[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec307_perm[i]=fRec307_tmp[count+i];
			
			// LOOP 0x3dcc700
			// pre processing
			for (int i=0; i<4; i++) fRec308_tmp[i]=fRec308_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec308[i] = (fSlow121 + (0.98f * fRec308[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec308_perm[i]=fRec308_tmp[count+i];
			
			// SECTION : 38
			// LOOP 0x3982fd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec343[i] = ((0.001f + (0.05f * fRec308[i])) * ((fSlow120 * ((fSlow119 * fZec271[i]) + ((fSlow117 * (fZec341[i] + (0.002f * (fRec307[i] * fSlow1)))) + ((fSlow115 * fZec340[i]) + ((fSlow113 * (fZec217[i] + (0.002f * fZec225[i]))) + ((fSlow111 * fZec337[i]) + ((fSlow109 * fZec325[i]) + (fSlow107 * fZec334[i])))))))) + ((fSlow105 * ((fSlow103 * (((fRec305[i] + fRec303[i]) + fRec301[i]) + fRec299[i])) + (fSlow102 * (((fRec296[i] + fRec293[i]) + fRec290[i]) + fRec288[i])))) + ((fRec287[i] * (0.5f + (4.5f * fRec286[i]))) + (fSlow83 * (max(fSlow82, (0.25f * (fYec196[i-4] + (fYec196[i-3] + (fYec196[i] + fYec196[i-2]))))) * ((0.5f * fZec325[i]) + (0.25f * ((fZec271[i] + fZec216[i]) + (0.008f * fZec225[i]))))))))));
			}
			
			// SECTION : 39
			// LOOP 0x3982e60
			// exec code
			for (int i=0; i<count; i++) {
				output0[i] = (FAUSTFLOAT)fZec343[i];
			}
			
			// LOOP 0x3dd1350
			// exec code
			for (int i=0; i<count; i++) {
				output1[i] = (FAUSTFLOAT)fZec343[i];
			}
			
		}
		if (index < fullcount) {
			// compute the remaining samples if any
			int count = fullcount-index;
			FAUSTFLOAT* output0 = &output[0][index];
			FAUSTFLOAT* output1 = &output[1][index];
			// SECTION : 1
			// LOOP 0x39897e0
			// pre processing
			for (int i=0; i<4; i++) fRec5_tmp[i]=fRec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec5[i] = (((int((fRec5[i-1] > 1.0f)))?(fRec5[i-1] - 1.0f):fRec5[i-1]) + fSlow6);
			}
			// post processing
			for (int i=0; i<4; i++) fRec5_perm[i]=fRec5_tmp[count+i];
			
			// SECTION : 2
			// LOOP 0x3988c70
			// exec code
			for (int i=0; i<count; i++) {
				fZec1[i] = ((fSlow7 * sinf((6.283185307179586f * fRec5[i]))) + fSlow5);
			}
			
			// SECTION : 3
			// LOOP 0x3987df0
			// pre processing
			for (int i=0; i<4; i++) fRec4_tmp[i]=fRec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec2[i] = ((fConst1 * float((6271.926975707989f * (fZec1[i] * fSlow4)))) + fRec4[i-1]);
				fRec4[i] = ((int((fZec2[i] > 1.0f)))?(fZec2[i] - 1.0f):fZec2[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec4_perm[i]=fRec4_tmp[count+i];
			
			// LOOP 0x39a0dd0
			// pre processing
			for (int i=0; i<4; i++) fRec13_tmp[i]=fRec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec17[i] = ((fConst1 * float((6644.875161279122f * (fZec1[i] * fSlow9)))) + fRec13[i-1]);
				fRec13[i] = ((int((fZec17[i] > 1.0f)))?(fZec17[i] - 1.0f):fZec17[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec13_perm[i]=fRec13_tmp[count+i];
			
			// LOOP 0x39b5070
			// pre processing
			for (int i=0; i<4; i++) fRec21_tmp[i]=fRec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec32[i] = ((fConst1 * float((7.04e+03f * (fZec1[i] * fSlow11)))) + fRec21[i-1]);
				fRec21[i] = ((int((fZec32[i] > 1.0f)))?(fZec32[i] - 1.0f):fZec32[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec21_perm[i]=fRec21_tmp[count+i];
			
			// LOOP 0x39c8e60
			// pre processing
			for (int i=0; i<4; i++) fRec29_tmp[i]=fRec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec47[i] = ((fConst1 * float((7458.620184289437f * (fZec1[i] * fSlow13)))) + fRec29[i-1]);
				fRec29[i] = ((int((fZec47[i] > 1.0f)))?(fZec47[i] - 1.0f):fZec47[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec29_perm[i]=fRec29_tmp[count+i];
			
			// LOOP 0x39dcfa0
			// pre processing
			for (int i=0; i<4; i++) fRec37_tmp[i]=fRec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec62[i] = ((fConst1 * float((7902.132820097988f * (fZec1[i] * fSlow15)))) + fRec37[i-1]);
				fRec37[i] = ((int((fZec62[i] > 1.0f)))?(fZec62[i] - 1.0f):fZec62[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec37_perm[i]=fRec37_tmp[count+i];
			
			// LOOP 0x39f0f30
			// pre processing
			for (int i=0; i<4; i++) fRec45_tmp[i]=fRec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec77[i] = ((fConst1 * float((4186.009044809578f * (fZec1[i] * fSlow17)))) + fRec45[i-1]);
				fRec45[i] = ((int((fZec77[i] > 1.0f)))?(fZec77[i] - 1.0f):fZec77[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec45_perm[i]=fRec45_tmp[count+i];
			
			// LOOP 0x3a03120
			// pre processing
			for (int i=0; i<4; i++) fRec52_tmp[i]=fRec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec90[i] = ((fConst1 * float((4434.922095629953f * (fZec1[i] * fSlow19)))) + fRec52[i-1]);
				fRec52[i] = ((int((fZec90[i] > 1.0f)))?(fZec90[i] - 1.0f):fZec90[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec52_perm[i]=fRec52_tmp[count+i];
			
			// LOOP 0x3a14f20
			// pre processing
			for (int i=0; i<4; i++) fRec59_tmp[i]=fRec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec103[i] = ((fConst1 * float((4698.63628667852f * (fZec1[i] * fSlow21)))) + fRec59[i-1]);
				fRec59[i] = ((int((fZec103[i] > 1.0f)))?(fZec103[i] - 1.0f):fZec103[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec59_perm[i]=fRec59_tmp[count+i];
			
			// LOOP 0x3a26a50
			// pre processing
			for (int i=0; i<4; i++) fRec66_tmp[i]=fRec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec116[i] = ((fConst1 * float((4978.031739553295f * (fZec1[i] * fSlow23)))) + fRec66[i-1]);
				fRec66[i] = ((int((fZec116[i] > 1.0f)))?(fZec116[i] - 1.0f):fZec116[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec66_perm[i]=fRec66_tmp[count+i];
			
			// LOOP 0x3a38700
			// pre processing
			for (int i=0; i<4; i++) fRec73_tmp[i]=fRec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec129[i] = ((fConst1 * float((5274.04091060592f * (fSlow25 * fZec1[i])))) + fRec73[i-1]);
				fRec73[i] = ((int((fZec129[i] > 1.0f)))?(fZec129[i] - 1.0f):fZec129[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec73_perm[i]=fRec73_tmp[count+i];
			
			// LOOP 0x3a4a480
			// pre processing
			for (int i=0; i<4; i++) fRec80_tmp[i]=fRec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec142[i] = ((fConst1 * float((5587.651702928062f * (fZec1[i] * fSlow27)))) + fRec80[i-1]);
				fRec80[i] = ((int((fZec142[i] > 1.0f)))?(fZec142[i] - 1.0f):fZec142[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec80_perm[i]=fRec80_tmp[count+i];
			
			// LOOP 0x3a5c340
			// pre processing
			for (int i=0; i<4; i++) fRec87_tmp[i]=fRec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec155[i] = ((fConst1 * float((5919.91076338615f * (fZec1[i] * fSlow29)))) + fRec87[i-1]);
				fRec87[i] = ((int((fZec155[i] > 1.0f)))?(fZec155[i] - 1.0f):fZec155[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec87_perm[i]=fRec87_tmp[count+i];
			
			// SECTION : 4
			// LOOP 0x3987ce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec3[i] = (fRec4[i] - fRec4[i-1]);
			}
			
			// LOOP 0x39a0cc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec18[i] = (fRec13[i] - fRec13[i-1]);
			}
			
			// LOOP 0x39b4f60
			// exec code
			for (int i=0; i<count; i++) {
				fZec33[i] = (fRec21[i] - fRec21[i-1]);
			}
			
			// LOOP 0x39c8d50
			// exec code
			for (int i=0; i<count; i++) {
				fZec48[i] = (fRec29[i] - fRec29[i-1]);
			}
			
			// LOOP 0x39dce90
			// exec code
			for (int i=0; i<count; i++) {
				fZec63[i] = (fRec37[i] - fRec37[i-1]);
			}
			
			// LOOP 0x39f0e20
			// exec code
			for (int i=0; i<count; i++) {
				fZec78[i] = (fRec45[i] - fRec45[i-1]);
			}
			
			// LOOP 0x3a03010
			// exec code
			for (int i=0; i<count; i++) {
				fZec91[i] = (fRec52[i] - fRec52[i-1]);
			}
			
			// LOOP 0x3a14e10
			// exec code
			for (int i=0; i<count; i++) {
				fZec104[i] = (fRec59[i] - fRec59[i-1]);
			}
			
			// LOOP 0x3a26940
			// exec code
			for (int i=0; i<count; i++) {
				fZec117[i] = (fRec66[i] - fRec66[i-1]);
			}
			
			// LOOP 0x3a385f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec130[i] = (fRec73[i] - fRec73[i-1]);
			}
			
			// LOOP 0x3a4a370
			// exec code
			for (int i=0; i<count; i++) {
				fZec143[i] = (fRec80[i] - fRec80[i-1]);
			}
			
			// LOOP 0x3a5c230
			// exec code
			for (int i=0; i<count; i++) {
				fZec156[i] = (fRec87[i] - fRec87[i-1]);
			}
			
			// SECTION : 5
			// LOOP 0x3987560
			// pre processing
			for (int i=0; i<4; i++) iRec3_tmp[i]=iRec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec3[i] = ((int((fZec3[i] < 0)))?(1 - iRec3[i-1]):iRec3[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec3_perm[i]=iRec3_tmp[count+i];
			
			// LOOP 0x39a05e0
			// pre processing
			for (int i=0; i<4; i++) iRec12_tmp[i]=iRec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec12[i] = ((int((fZec18[i] < 0)))?(1 - iRec12[i-1]):iRec12[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec12_perm[i]=iRec12_tmp[count+i];
			
			// LOOP 0x39b4880
			// pre processing
			for (int i=0; i<4; i++) iRec20_tmp[i]=iRec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec20[i] = ((int((fZec33[i] < 0)))?(1 - iRec20[i-1]):iRec20[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec20_perm[i]=iRec20_tmp[count+i];
			
			// LOOP 0x39c8670
			// pre processing
			for (int i=0; i<4; i++) iRec28_tmp[i]=iRec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec28[i] = ((int((fZec48[i] < 0)))?(1 - iRec28[i-1]):iRec28[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec28_perm[i]=iRec28_tmp[count+i];
			
			// LOOP 0x39dc7b0
			// pre processing
			for (int i=0; i<4; i++) iRec36_tmp[i]=iRec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec36[i] = ((int((fZec63[i] < 0)))?(1 - iRec36[i-1]):iRec36[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec36_perm[i]=iRec36_tmp[count+i];
			
			// LOOP 0x39f0740
			// pre processing
			for (int i=0; i<4; i++) iRec44_tmp[i]=iRec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec44[i] = ((int((fZec78[i] < 0)))?(1 - iRec44[i-1]):iRec44[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec44_perm[i]=iRec44_tmp[count+i];
			
			// LOOP 0x3a02930
			// pre processing
			for (int i=0; i<4; i++) iRec51_tmp[i]=iRec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec51[i] = ((int((fZec91[i] < 0)))?(1 - iRec51[i-1]):iRec51[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec51_perm[i]=iRec51_tmp[count+i];
			
			// LOOP 0x3a14730
			// pre processing
			for (int i=0; i<4; i++) iRec58_tmp[i]=iRec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec58[i] = ((int((fZec104[i] < 0)))?(1 - iRec58[i-1]):iRec58[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec58_perm[i]=iRec58_tmp[count+i];
			
			// LOOP 0x3a26260
			// pre processing
			for (int i=0; i<4; i++) iRec65_tmp[i]=iRec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec65[i] = ((int((fZec117[i] < 0)))?(1 - iRec65[i-1]):iRec65[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec65_perm[i]=iRec65_tmp[count+i];
			
			// LOOP 0x3a37f10
			// pre processing
			for (int i=0; i<4; i++) iRec72_tmp[i]=iRec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec72[i] = ((int((fZec130[i] < 0)))?(1 - iRec72[i-1]):iRec72[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec72_perm[i]=iRec72_tmp[count+i];
			
			// LOOP 0x3a49ce0
			// pre processing
			for (int i=0; i<4; i++) iRec79_tmp[i]=iRec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec79[i] = ((int((fZec143[i] < 0)))?(1 - iRec79[i-1]):iRec79[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec79_perm[i]=iRec79_tmp[count+i];
			
			// LOOP 0x3a5bba0
			// pre processing
			for (int i=0; i<4; i++) iRec86_tmp[i]=iRec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec86[i] = ((int((fZec156[i] < 0)))?(1 - iRec86[i-1]):iRec86[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec86_perm[i]=iRec86_tmp[count+i];
			
			// SECTION : 6
			// LOOP 0x3987420
			// pre processing
			for (int i=0; i<4; i++) fYec0_tmp[i]=fYec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec0[i] = (fRec4[i] + iRec3[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec0_perm[i]=fYec0_tmp[count+i];
			
			// LOOP 0x39a04a0
			// pre processing
			for (int i=0; i<4; i++) fYec6_tmp[i]=fYec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec6[i] = (fRec13[i] + iRec12[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec6_perm[i]=fYec6_tmp[count+i];
			
			// LOOP 0x39b4740
			// pre processing
			for (int i=0; i<4; i++) fYec12_tmp[i]=fYec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec12[i] = (fRec21[i] + iRec20[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec12_perm[i]=fYec12_tmp[count+i];
			
			// LOOP 0x39c8530
			// pre processing
			for (int i=0; i<4; i++) fYec18_tmp[i]=fYec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec18[i] = (fRec29[i] + iRec28[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec18_perm[i]=fYec18_tmp[count+i];
			
			// LOOP 0x39dc670
			// pre processing
			for (int i=0; i<4; i++) fYec24_tmp[i]=fYec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec24[i] = (fRec37[i] + iRec36[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec24_perm[i]=fYec24_tmp[count+i];
			
			// LOOP 0x39f0600
			// pre processing
			for (int i=0; i<4; i++) fYec30_tmp[i]=fYec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec30[i] = (fRec45[i] + iRec44[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec30_perm[i]=fYec30_tmp[count+i];
			
			// LOOP 0x3a027f0
			// pre processing
			for (int i=0; i<4; i++) fYec35_tmp[i]=fYec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec35[i] = (fRec52[i] + iRec51[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec35_perm[i]=fYec35_tmp[count+i];
			
			// LOOP 0x3a145f0
			// pre processing
			for (int i=0; i<4; i++) fYec40_tmp[i]=fYec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec40[i] = (fRec59[i] + iRec58[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec40_perm[i]=fYec40_tmp[count+i];
			
			// LOOP 0x3a26120
			// pre processing
			for (int i=0; i<4; i++) fYec45_tmp[i]=fYec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec45[i] = (fRec66[i] + iRec65[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec45_perm[i]=fYec45_tmp[count+i];
			
			// LOOP 0x3a37dd0
			// pre processing
			for (int i=0; i<4; i++) fYec50_tmp[i]=fYec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec50[i] = (fRec73[i] + iRec72[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec50_perm[i]=fYec50_tmp[count+i];
			
			// LOOP 0x3a49ba0
			// pre processing
			for (int i=0; i<4; i++) fYec55_tmp[i]=fYec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec55[i] = (fRec80[i] + iRec79[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec55_perm[i]=fYec55_tmp[count+i];
			
			// LOOP 0x3a5ba60
			// pre processing
			for (int i=0; i<4; i++) fYec60_tmp[i]=fYec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec60[i] = (fRec87[i] + iRec86[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec60_perm[i]=fYec60_tmp[count+i];
			
			// SECTION : 7
			// LOOP 0x39872e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec4[i] = (0.5f * fYec0[i]);
			}
			
			// LOOP 0x3990530
			// exec code
			for (int i=0; i<count; i++) {
				fZec5[i] = (0.5f * fYec0[i-1]);
			}
			
			// LOOP 0x39a0360
			// exec code
			for (int i=0; i<count; i++) {
				fZec19[i] = (0.5f * fYec6[i]);
			}
			
			// LOOP 0x39a4a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec20[i] = (0.5f * fYec6[i-1]);
			}
			
			// LOOP 0x39b4600
			// exec code
			for (int i=0; i<count; i++) {
				fZec34[i] = (0.5f * fYec12[i]);
			}
			
			// LOOP 0x39b8c50
			// exec code
			for (int i=0; i<count; i++) {
				fZec35[i] = (0.5f * fYec12[i-1]);
			}
			
			// LOOP 0x39c83f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec49[i] = (0.5f * fYec18[i]);
			}
			
			// LOOP 0x39ccaa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec50[i] = (0.5f * fYec18[i-1]);
			}
			
			// LOOP 0x39dc530
			// exec code
			for (int i=0; i<count; i++) {
				fZec64[i] = (0.5f * fYec24[i]);
			}
			
			// LOOP 0x39e0be0
			// exec code
			for (int i=0; i<count; i++) {
				fZec65[i] = (0.5f * fYec24[i-1]);
			}
			
			// LOOP 0x39f04c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec79[i] = (0.5f * fYec30[i]);
			}
			
			// LOOP 0x39f4af0
			// exec code
			for (int i=0; i<count; i++) {
				fZec80[i] = (0.5f * fYec30[i-1]);
			}
			
			// LOOP 0x3a026b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec92[i] = (0.5f * fYec35[i]);
			}
			
			// LOOP 0x3a06d60
			// exec code
			for (int i=0; i<count; i++) {
				fZec93[i] = (0.5f * fYec35[i-1]);
			}
			
			// LOOP 0x3a144b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec105[i] = (0.5f * fYec40[i]);
			}
			
			// LOOP 0x3a18b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec106[i] = (0.5f * fYec40[i-1]);
			}
			
			// LOOP 0x3a25fe0
			// exec code
			for (int i=0; i<count; i++) {
				fZec118[i] = (0.5f * fYec45[i]);
			}
			
			// LOOP 0x3a2a690
			// exec code
			for (int i=0; i<count; i++) {
				fZec119[i] = (0.5f * fYec45[i-1]);
			}
			
			// LOOP 0x3a37c90
			// exec code
			for (int i=0; i<count; i++) {
				fZec131[i] = (0.5f * fYec50[i]);
			}
			
			// LOOP 0x3a3c340
			// exec code
			for (int i=0; i<count; i++) {
				fZec132[i] = (0.5f * fYec50[i-1]);
			}
			
			// LOOP 0x3a49a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec144[i] = (0.5f * fYec55[i]);
			}
			
			// LOOP 0x3a4e070
			// exec code
			for (int i=0; i<count; i++) {
				fZec145[i] = (0.5f * fYec55[i-1]);
			}
			
			// LOOP 0x3a5b920
			// exec code
			for (int i=0; i<count; i++) {
				fZec157[i] = (0.5f * fYec60[i]);
			}
			
			// LOOP 0x3a5ff30
			// exec code
			for (int i=0; i<count; i++) {
				fZec158[i] = (0.5f * fYec60[i-1]);
			}
			
			// SECTION : 8
			// LOOP 0x398fef0
			// pre processing
			for (int i=0; i<4; i++) iRec6_tmp[i]=iRec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec6[i] = ((int(((fZec4[i] - fZec5[i]) < 0)))?(1 - iRec6[i-1]):iRec6[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec6_perm[i]=iRec6_tmp[count+i];
			
			// LOOP 0x39a4460
			// pre processing
			for (int i=0; i<4; i++) iRec14_tmp[i]=iRec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec14[i] = ((int(((fZec19[i] - fZec20[i]) < 0)))?(1 - iRec14[i-1]):iRec14[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec14_perm[i]=iRec14_tmp[count+i];
			
			// LOOP 0x39b8650
			// pre processing
			for (int i=0; i<4; i++) iRec22_tmp[i]=iRec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec22[i] = ((int(((fZec34[i] - fZec35[i]) < 0)))?(1 - iRec22[i-1]):iRec22[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec22_perm[i]=iRec22_tmp[count+i];
			
			// LOOP 0x39cc4a0
			// pre processing
			for (int i=0; i<4; i++) iRec30_tmp[i]=iRec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec30[i] = ((int(((fZec49[i] - fZec50[i]) < 0)))?(1 - iRec30[i-1]):iRec30[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec30_perm[i]=iRec30_tmp[count+i];
			
			// LOOP 0x39e05e0
			// pre processing
			for (int i=0; i<4; i++) iRec38_tmp[i]=iRec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec38[i] = ((int(((fZec64[i] - fZec65[i]) < 0)))?(1 - iRec38[i-1]):iRec38[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec38_perm[i]=iRec38_tmp[count+i];
			
			// LOOP 0x39f44a0
			// pre processing
			for (int i=0; i<4; i++) iRec46_tmp[i]=iRec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec46[i] = ((int(((fZec79[i] - fZec80[i]) < 0)))?(1 - iRec46[i-1]):iRec46[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec46_perm[i]=iRec46_tmp[count+i];
			
			// LOOP 0x3a06760
			// pre processing
			for (int i=0; i<4; i++) iRec53_tmp[i]=iRec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec53[i] = ((int(((fZec92[i] - fZec93[i]) < 0)))?(1 - iRec53[i-1]):iRec53[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec53_perm[i]=iRec53_tmp[count+i];
			
			// LOOP 0x3a18560
			// pre processing
			for (int i=0; i<4; i++) iRec60_tmp[i]=iRec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec60[i] = ((int(((fZec105[i] - fZec106[i]) < 0)))?(1 - iRec60[i-1]):iRec60[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec60_perm[i]=iRec60_tmp[count+i];
			
			// LOOP 0x3a2a090
			// pre processing
			for (int i=0; i<4; i++) iRec67_tmp[i]=iRec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec67[i] = ((int(((fZec118[i] - fZec119[i]) < 0)))?(1 - iRec67[i-1]):iRec67[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec67_perm[i]=iRec67_tmp[count+i];
			
			// LOOP 0x3a3bd40
			// pre processing
			for (int i=0; i<4; i++) iRec74_tmp[i]=iRec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec74[i] = ((int(((fZec131[i] - fZec132[i]) < 0)))?(1 - iRec74[i-1]):iRec74[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec74_perm[i]=iRec74_tmp[count+i];
			
			// LOOP 0x3a4da70
			// pre processing
			for (int i=0; i<4; i++) iRec81_tmp[i]=iRec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec81[i] = ((int(((fZec144[i] - fZec145[i]) < 0)))?(1 - iRec81[i-1]):iRec81[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec81_perm[i]=iRec81_tmp[count+i];
			
			// LOOP 0x3a5f930
			// pre processing
			for (int i=0; i<4; i++) iRec88_tmp[i]=iRec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec88[i] = ((int(((fZec157[i] - fZec158[i]) < 0)))?(1 - iRec88[i-1]):iRec88[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec88_perm[i]=iRec88_tmp[count+i];
			
			// SECTION : 9
			// LOOP 0x39871a0
			// pre processing
			for (int i=0; i<4; i++) fYec1_tmp[i]=fYec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec1[i] = (iRec6[i] + fZec4[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec1_perm[i]=fYec1_tmp[count+i];
			
			// LOOP 0x39a0220
			// pre processing
			for (int i=0; i<4; i++) fYec7_tmp[i]=fYec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec7[i] = (iRec14[i] + fZec19[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec7_perm[i]=fYec7_tmp[count+i];
			
			// LOOP 0x39b44c0
			// pre processing
			for (int i=0; i<4; i++) fYec13_tmp[i]=fYec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec13[i] = (iRec22[i] + fZec34[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec13_perm[i]=fYec13_tmp[count+i];
			
			// LOOP 0x39c82b0
			// pre processing
			for (int i=0; i<4; i++) fYec19_tmp[i]=fYec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec19[i] = (iRec30[i] + fZec49[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec19_perm[i]=fYec19_tmp[count+i];
			
			// LOOP 0x39dc3f0
			// pre processing
			for (int i=0; i<4; i++) fYec25_tmp[i]=fYec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec25[i] = (iRec38[i] + fZec64[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec25_perm[i]=fYec25_tmp[count+i];
			
			// LOOP 0x39f0380
			// pre processing
			for (int i=0; i<4; i++) fYec31_tmp[i]=fYec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec31[i] = (iRec46[i] + fZec79[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec31_perm[i]=fYec31_tmp[count+i];
			
			// LOOP 0x3a02570
			// pre processing
			for (int i=0; i<4; i++) fYec36_tmp[i]=fYec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec36[i] = (iRec53[i] + fZec92[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec36_perm[i]=fYec36_tmp[count+i];
			
			// LOOP 0x3a14370
			// pre processing
			for (int i=0; i<4; i++) fYec41_tmp[i]=fYec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec41[i] = (iRec60[i] + fZec105[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec41_perm[i]=fYec41_tmp[count+i];
			
			// LOOP 0x3a25ea0
			// pre processing
			for (int i=0; i<4; i++) fYec46_tmp[i]=fYec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec46[i] = (iRec67[i] + fZec118[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec46_perm[i]=fYec46_tmp[count+i];
			
			// LOOP 0x3a37b50
			// pre processing
			for (int i=0; i<4; i++) fYec51_tmp[i]=fYec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec51[i] = (iRec74[i] + fZec131[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec51_perm[i]=fYec51_tmp[count+i];
			
			// LOOP 0x3a49920
			// pre processing
			for (int i=0; i<4; i++) fYec56_tmp[i]=fYec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec56[i] = (iRec81[i] + fZec144[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec56_perm[i]=fYec56_tmp[count+i];
			
			// LOOP 0x3a5b7e0
			// pre processing
			for (int i=0; i<4; i++) fYec61_tmp[i]=fYec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec61[i] = (iRec88[i] + fZec157[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec61_perm[i]=fYec61_tmp[count+i];
			
			// SECTION : 10
			// LOOP 0x3987060
			// exec code
			for (int i=0; i<count; i++) {
				fZec6[i] = (0.5f * fYec1[i]);
			}
			
			// LOOP 0x39927c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec7[i] = (0.5f * fYec1[i-1]);
			}
			
			// LOOP 0x39a00e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec21[i] = (0.5f * fYec7[i]);
			}
			
			// LOOP 0x39a6db0
			// exec code
			for (int i=0; i<count; i++) {
				fZec22[i] = (0.5f * fYec7[i-1]);
			}
			
			// LOOP 0x39b4380
			// exec code
			for (int i=0; i<count; i++) {
				fZec36[i] = (0.5f * fYec13[i]);
			}
			
			// LOOP 0x39bafd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec37[i] = (0.5f * fYec13[i-1]);
			}
			
			// LOOP 0x39c8170
			// exec code
			for (int i=0; i<count; i++) {
				fZec51[i] = (0.5f * fYec19[i]);
			}
			
			// LOOP 0x39cee20
			// exec code
			for (int i=0; i<count; i++) {
				fZec52[i] = (0.5f * fYec19[i-1]);
			}
			
			// LOOP 0x39dc2b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec66[i] = (0.5f * fYec25[i]);
			}
			
			// LOOP 0x39e2f60
			// exec code
			for (int i=0; i<count; i++) {
				fZec67[i] = (0.5f * fYec25[i-1]);
			}
			
			// LOOP 0x39f0240
			// exec code
			for (int i=0; i<count; i++) {
				fZec81[i] = (0.5f * fYec31[i]);
			}
			
			// LOOP 0x39f6f10
			// exec code
			for (int i=0; i<count; i++) {
				fZec82[i] = (0.5f * fYec31[i-1]);
			}
			
			// LOOP 0x3a02430
			// exec code
			for (int i=0; i<count; i++) {
				fZec94[i] = (0.5f * fYec36[i]);
			}
			
			// LOOP 0x3a090e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec95[i] = (0.5f * fYec36[i-1]);
			}
			
			// LOOP 0x3a14230
			// exec code
			for (int i=0; i<count; i++) {
				fZec107[i] = (0.5f * fYec41[i]);
			}
			
			// LOOP 0x3a1aee0
			// exec code
			for (int i=0; i<count; i++) {
				fZec108[i] = (0.5f * fYec41[i-1]);
			}
			
			// LOOP 0x3a25d60
			// exec code
			for (int i=0; i<count; i++) {
				fZec120[i] = (0.5f * fYec46[i]);
			}
			
			// LOOP 0x3a2ca10
			// exec code
			for (int i=0; i<count; i++) {
				fZec121[i] = (0.5f * fYec46[i-1]);
			}
			
			// LOOP 0x3a37a10
			// exec code
			for (int i=0; i<count; i++) {
				fZec133[i] = (0.5f * fYec51[i]);
			}
			
			// LOOP 0x3a3e6c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec134[i] = (0.5f * fYec51[i-1]);
			}
			
			// LOOP 0x3a497e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec146[i] = (0.5f * fYec56[i]);
			}
			
			// LOOP 0x3a503f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec147[i] = (0.5f * fYec56[i-1]);
			}
			
			// LOOP 0x3a5b6a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec159[i] = (0.5f * fYec61[i]);
			}
			
			// LOOP 0x3a622b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec160[i] = (0.5f * fYec61[i-1]);
			}
			
			// SECTION : 11
			// LOOP 0x3992180
			// pre processing
			for (int i=0; i<4; i++) iRec7_tmp[i]=iRec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec7[i] = ((int(((fZec6[i] - fZec7[i]) < 0)))?(1 - iRec7[i-1]):iRec7[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec7_perm[i]=iRec7_tmp[count+i];
			
			// LOOP 0x39a67b0
			// pre processing
			for (int i=0; i<4; i++) iRec15_tmp[i]=iRec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec15[i] = ((int(((fZec21[i] - fZec22[i]) < 0)))?(1 - iRec15[i-1]):iRec15[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec15_perm[i]=iRec15_tmp[count+i];
			
			// LOOP 0x39ba9d0
			// pre processing
			for (int i=0; i<4; i++) iRec23_tmp[i]=iRec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec23[i] = ((int(((fZec36[i] - fZec37[i]) < 0)))?(1 - iRec23[i-1]):iRec23[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec23_perm[i]=iRec23_tmp[count+i];
			
			// LOOP 0x39ce820
			// pre processing
			for (int i=0; i<4; i++) iRec31_tmp[i]=iRec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec31[i] = ((int(((fZec51[i] - fZec52[i]) < 0)))?(1 - iRec31[i-1]):iRec31[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec31_perm[i]=iRec31_tmp[count+i];
			
			// LOOP 0x39e2960
			// pre processing
			for (int i=0; i<4; i++) iRec39_tmp[i]=iRec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec39[i] = ((int(((fZec66[i] - fZec67[i]) < 0)))?(1 - iRec39[i-1]):iRec39[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec39_perm[i]=iRec39_tmp[count+i];
			
			// LOOP 0x39f6910
			// pre processing
			for (int i=0; i<4; i++) iRec47_tmp[i]=iRec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec47[i] = ((int(((fZec81[i] - fZec82[i]) < 0)))?(1 - iRec47[i-1]):iRec47[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec47_perm[i]=iRec47_tmp[count+i];
			
			// LOOP 0x3a08ae0
			// pre processing
			for (int i=0; i<4; i++) iRec54_tmp[i]=iRec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec54[i] = ((int(((fZec94[i] - fZec95[i]) < 0)))?(1 - iRec54[i-1]):iRec54[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec54_perm[i]=iRec54_tmp[count+i];
			
			// LOOP 0x3a1a8e0
			// pre processing
			for (int i=0; i<4; i++) iRec61_tmp[i]=iRec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec61[i] = ((int(((fZec107[i] - fZec108[i]) < 0)))?(1 - iRec61[i-1]):iRec61[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec61_perm[i]=iRec61_tmp[count+i];
			
			// LOOP 0x3a2c410
			// pre processing
			for (int i=0; i<4; i++) iRec68_tmp[i]=iRec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec68[i] = ((int(((fZec120[i] - fZec121[i]) < 0)))?(1 - iRec68[i-1]):iRec68[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec68_perm[i]=iRec68_tmp[count+i];
			
			// LOOP 0x3a3e0c0
			// pre processing
			for (int i=0; i<4; i++) iRec75_tmp[i]=iRec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec75[i] = ((int(((fZec133[i] - fZec134[i]) < 0)))?(1 - iRec75[i-1]):iRec75[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec75_perm[i]=iRec75_tmp[count+i];
			
			// LOOP 0x3a4fdf0
			// pre processing
			for (int i=0; i<4; i++) iRec82_tmp[i]=iRec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec82[i] = ((int(((fZec146[i] - fZec147[i]) < 0)))?(1 - iRec82[i-1]):iRec82[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec82_perm[i]=iRec82_tmp[count+i];
			
			// LOOP 0x3a61cb0
			// pre processing
			for (int i=0; i<4; i++) iRec89_tmp[i]=iRec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec89[i] = ((int(((fZec159[i] - fZec160[i]) < 0)))?(1 - iRec89[i-1]):iRec89[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec89_perm[i]=iRec89_tmp[count+i];
			
			// SECTION : 12
			// LOOP 0x3986f20
			// pre processing
			for (int i=0; i<4; i++) fYec2_tmp[i]=fYec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec2[i] = (iRec7[i] + fZec6[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec2_perm[i]=fYec2_tmp[count+i];
			
			// LOOP 0x399ffa0
			// pre processing
			for (int i=0; i<4; i++) fYec8_tmp[i]=fYec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec8[i] = (iRec15[i] + fZec21[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec8_perm[i]=fYec8_tmp[count+i];
			
			// LOOP 0x39b4240
			// pre processing
			for (int i=0; i<4; i++) fYec14_tmp[i]=fYec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec14[i] = (iRec23[i] + fZec36[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec14_perm[i]=fYec14_tmp[count+i];
			
			// LOOP 0x39c8030
			// pre processing
			for (int i=0; i<4; i++) fYec20_tmp[i]=fYec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec20[i] = (iRec31[i] + fZec51[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec20_perm[i]=fYec20_tmp[count+i];
			
			// LOOP 0x39dc170
			// pre processing
			for (int i=0; i<4; i++) fYec26_tmp[i]=fYec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec26[i] = (iRec39[i] + fZec66[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec26_perm[i]=fYec26_tmp[count+i];
			
			// LOOP 0x39f0100
			// pre processing
			for (int i=0; i<4; i++) fYec32_tmp[i]=fYec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec32[i] = (iRec47[i] + fZec81[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec32_perm[i]=fYec32_tmp[count+i];
			
			// LOOP 0x3a022f0
			// pre processing
			for (int i=0; i<4; i++) fYec37_tmp[i]=fYec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec37[i] = (iRec54[i] + fZec94[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec37_perm[i]=fYec37_tmp[count+i];
			
			// LOOP 0x3a140f0
			// pre processing
			for (int i=0; i<4; i++) fYec42_tmp[i]=fYec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec42[i] = (iRec61[i] + fZec107[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec42_perm[i]=fYec42_tmp[count+i];
			
			// LOOP 0x3a25c20
			// pre processing
			for (int i=0; i<4; i++) fYec47_tmp[i]=fYec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec47[i] = (iRec68[i] + fZec120[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec47_perm[i]=fYec47_tmp[count+i];
			
			// LOOP 0x3a378d0
			// pre processing
			for (int i=0; i<4; i++) fYec52_tmp[i]=fYec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec52[i] = (iRec75[i] + fZec133[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec52_perm[i]=fYec52_tmp[count+i];
			
			// LOOP 0x3a496a0
			// pre processing
			for (int i=0; i<4; i++) fYec57_tmp[i]=fYec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec57[i] = (iRec82[i] + fZec146[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec57_perm[i]=fYec57_tmp[count+i];
			
			// LOOP 0x3a5b560
			// pre processing
			for (int i=0; i<4; i++) fYec62_tmp[i]=fYec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec62[i] = (iRec89[i] + fZec159[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec62_perm[i]=fYec62_tmp[count+i];
			
			// SECTION : 13
			// LOOP 0x3986de0
			// exec code
			for (int i=0; i<count; i++) {
				fZec8[i] = (0.5f * fYec2[i]);
			}
			
			// LOOP 0x3994aa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec9[i] = (0.5f * fYec2[i-1]);
			}
			
			// LOOP 0x399fe60
			// exec code
			for (int i=0; i<count; i++) {
				fZec23[i] = (0.5f * fYec8[i]);
			}
			
			// LOOP 0x39a9100
			// exec code
			for (int i=0; i<count; i++) {
				fZec24[i] = (0.5f * fYec8[i-1]);
			}
			
			// LOOP 0x39b4100
			// exec code
			for (int i=0; i<count; i++) {
				fZec38[i] = (0.5f * fYec14[i]);
			}
			
			// LOOP 0x39bd350
			// exec code
			for (int i=0; i<count; i++) {
				fZec39[i] = (0.5f * fYec14[i-1]);
			}
			
			// LOOP 0x39c7ef0
			// exec code
			for (int i=0; i<count; i++) {
				fZec53[i] = (0.5f * fYec20[i]);
			}
			
			// LOOP 0x39d11a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec54[i] = (0.5f * fYec20[i-1]);
			}
			
			// LOOP 0x39dc030
			// exec code
			for (int i=0; i<count; i++) {
				fZec68[i] = (0.5f * fYec26[i]);
			}
			
			// LOOP 0x39e52e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec69[i] = (0.5f * fYec26[i-1]);
			}
			
			// LOOP 0x39effc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec83[i] = (0.5f * fYec32[i]);
			}
			
			// LOOP 0x39f9290
			// exec code
			for (int i=0; i<count; i++) {
				fZec84[i] = (0.5f * fYec32[i-1]);
			}
			
			// LOOP 0x3a021b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec96[i] = (0.5f * fYec37[i]);
			}
			
			// LOOP 0x3a0b460
			// exec code
			for (int i=0; i<count; i++) {
				fZec97[i] = (0.5f * fYec37[i-1]);
			}
			
			// LOOP 0x3a13fb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec109[i] = (0.5f * fYec42[i]);
			}
			
			// LOOP 0x3a1d260
			// exec code
			for (int i=0; i<count; i++) {
				fZec110[i] = (0.5f * fYec42[i-1]);
			}
			
			// LOOP 0x3a25ae0
			// exec code
			for (int i=0; i<count; i++) {
				fZec122[i] = (0.5f * fYec47[i]);
			}
			
			// LOOP 0x3a2ed90
			// exec code
			for (int i=0; i<count; i++) {
				fZec123[i] = (0.5f * fYec47[i-1]);
			}
			
			// LOOP 0x3a37790
			// exec code
			for (int i=0; i<count; i++) {
				fZec135[i] = (0.5f * fYec52[i]);
			}
			
			// LOOP 0x3a40a40
			// exec code
			for (int i=0; i<count; i++) {
				fZec136[i] = (0.5f * fYec52[i-1]);
			}
			
			// LOOP 0x3a49560
			// exec code
			for (int i=0; i<count; i++) {
				fZec148[i] = (0.5f * fYec57[i]);
			}
			
			// LOOP 0x3a52770
			// exec code
			for (int i=0; i<count; i++) {
				fZec149[i] = (0.5f * fYec57[i-1]);
			}
			
			// LOOP 0x3a5b420
			// exec code
			for (int i=0; i<count; i++) {
				fZec161[i] = (0.5f * fYec62[i]);
			}
			
			// LOOP 0x3a64630
			// exec code
			for (int i=0; i<count; i++) {
				fZec162[i] = (0.5f * fYec62[i-1]);
			}
			
			// SECTION : 14
			// LOOP 0x3994460
			// pre processing
			for (int i=0; i<4; i++) iRec8_tmp[i]=iRec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec8[i] = ((int(((fZec8[i] - fZec9[i]) < 0)))?(1 - iRec8[i-1]):iRec8[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec8_perm[i]=iRec8_tmp[count+i];
			
			// LOOP 0x39a8b00
			// pre processing
			for (int i=0; i<4; i++) iRec16_tmp[i]=iRec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec16[i] = ((int(((fZec23[i] - fZec24[i]) < 0)))?(1 - iRec16[i-1]):iRec16[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec16_perm[i]=iRec16_tmp[count+i];
			
			// LOOP 0x39bcd50
			// pre processing
			for (int i=0; i<4; i++) iRec24_tmp[i]=iRec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec24[i] = ((int(((fZec38[i] - fZec39[i]) < 0)))?(1 - iRec24[i-1]):iRec24[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec24_perm[i]=iRec24_tmp[count+i];
			
			// LOOP 0x39d0ba0
			// pre processing
			for (int i=0; i<4; i++) iRec32_tmp[i]=iRec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec32[i] = ((int(((fZec53[i] - fZec54[i]) < 0)))?(1 - iRec32[i-1]):iRec32[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec32_perm[i]=iRec32_tmp[count+i];
			
			// LOOP 0x39e4ce0
			// pre processing
			for (int i=0; i<4; i++) iRec40_tmp[i]=iRec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec40[i] = ((int(((fZec68[i] - fZec69[i]) < 0)))?(1 - iRec40[i-1]):iRec40[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec40_perm[i]=iRec40_tmp[count+i];
			
			// LOOP 0x39f8c90
			// pre processing
			for (int i=0; i<4; i++) iRec48_tmp[i]=iRec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec48[i] = ((int(((fZec83[i] - fZec84[i]) < 0)))?(1 - iRec48[i-1]):iRec48[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec48_perm[i]=iRec48_tmp[count+i];
			
			// LOOP 0x3a0ae60
			// pre processing
			for (int i=0; i<4; i++) iRec55_tmp[i]=iRec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec55[i] = ((int(((fZec96[i] - fZec97[i]) < 0)))?(1 - iRec55[i-1]):iRec55[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec55_perm[i]=iRec55_tmp[count+i];
			
			// LOOP 0x3a1cc60
			// pre processing
			for (int i=0; i<4; i++) iRec62_tmp[i]=iRec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec62[i] = ((int(((fZec109[i] - fZec110[i]) < 0)))?(1 - iRec62[i-1]):iRec62[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec62_perm[i]=iRec62_tmp[count+i];
			
			// LOOP 0x3a2e790
			// pre processing
			for (int i=0; i<4; i++) iRec69_tmp[i]=iRec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec69[i] = ((int(((fZec122[i] - fZec123[i]) < 0)))?(1 - iRec69[i-1]):iRec69[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec69_perm[i]=iRec69_tmp[count+i];
			
			// LOOP 0x3a40440
			// pre processing
			for (int i=0; i<4; i++) iRec76_tmp[i]=iRec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec76[i] = ((int(((fZec135[i] - fZec136[i]) < 0)))?(1 - iRec76[i-1]):iRec76[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec76_perm[i]=iRec76_tmp[count+i];
			
			// LOOP 0x3a52170
			// pre processing
			for (int i=0; i<4; i++) iRec83_tmp[i]=iRec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec83[i] = ((int(((fZec148[i] - fZec149[i]) < 0)))?(1 - iRec83[i-1]):iRec83[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec83_perm[i]=iRec83_tmp[count+i];
			
			// LOOP 0x3a64030
			// pre processing
			for (int i=0; i<4; i++) iRec90_tmp[i]=iRec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec90[i] = ((int(((fZec161[i] - fZec162[i]) < 0)))?(1 - iRec90[i-1]):iRec90[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec90_perm[i]=iRec90_tmp[count+i];
			
			// SECTION : 15
			// LOOP 0x3986ca0
			// pre processing
			for (int i=0; i<4; i++) fYec3_tmp[i]=fYec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec3[i] = (iRec8[i] + fZec8[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec3_perm[i]=fYec3_tmp[count+i];
			
			// LOOP 0x399fd20
			// pre processing
			for (int i=0; i<4; i++) fYec9_tmp[i]=fYec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec9[i] = (iRec16[i] + fZec23[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec9_perm[i]=fYec9_tmp[count+i];
			
			// LOOP 0x39b3fc0
			// pre processing
			for (int i=0; i<4; i++) fYec15_tmp[i]=fYec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec15[i] = (iRec24[i] + fZec38[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec15_perm[i]=fYec15_tmp[count+i];
			
			// LOOP 0x39c7db0
			// pre processing
			for (int i=0; i<4; i++) fYec21_tmp[i]=fYec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec21[i] = (iRec32[i] + fZec53[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec21_perm[i]=fYec21_tmp[count+i];
			
			// LOOP 0x39dbef0
			// pre processing
			for (int i=0; i<4; i++) fYec27_tmp[i]=fYec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec27[i] = (iRec40[i] + fZec68[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec27_perm[i]=fYec27_tmp[count+i];
			
			// LOOP 0x39efe80
			// pre processing
			for (int i=0; i<4; i++) fYec33_tmp[i]=fYec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec33[i] = (iRec48[i] + fZec83[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec33_perm[i]=fYec33_tmp[count+i];
			
			// LOOP 0x3a02070
			// pre processing
			for (int i=0; i<4; i++) fYec38_tmp[i]=fYec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec38[i] = (iRec55[i] + fZec96[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec38_perm[i]=fYec38_tmp[count+i];
			
			// LOOP 0x3a13e70
			// pre processing
			for (int i=0; i<4; i++) fYec43_tmp[i]=fYec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec43[i] = (iRec62[i] + fZec109[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec43_perm[i]=fYec43_tmp[count+i];
			
			// LOOP 0x3a259a0
			// pre processing
			for (int i=0; i<4; i++) fYec48_tmp[i]=fYec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec48[i] = (iRec69[i] + fZec122[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec48_perm[i]=fYec48_tmp[count+i];
			
			// LOOP 0x3a37650
			// pre processing
			for (int i=0; i<4; i++) fYec53_tmp[i]=fYec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec53[i] = (iRec76[i] + fZec135[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec53_perm[i]=fYec53_tmp[count+i];
			
			// LOOP 0x3a49420
			// pre processing
			for (int i=0; i<4; i++) fYec58_tmp[i]=fYec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec58[i] = (iRec83[i] + fZec148[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec58_perm[i]=fYec58_tmp[count+i];
			
			// LOOP 0x3a5b2e0
			// pre processing
			for (int i=0; i<4; i++) fYec63_tmp[i]=fYec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec63[i] = (iRec90[i] + fZec161[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec63_perm[i]=fYec63_tmp[count+i];
			
			// SECTION : 16
			// LOOP 0x3986b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec10[i] = (0.5f * fYec3[i]);
			}
			
			// LOOP 0x3996de0
			// exec code
			for (int i=0; i<count; i++) {
				fZec11[i] = (0.5f * fYec3[i-1]);
			}
			
			// LOOP 0x399fbe0
			// exec code
			for (int i=0; i<count; i++) {
				fZec25[i] = (0.5f * fYec9[i]);
			}
			
			// LOOP 0x39ab450
			// exec code
			for (int i=0; i<count; i++) {
				fZec26[i] = (0.5f * fYec9[i-1]);
			}
			
			// LOOP 0x39b3e80
			// exec code
			for (int i=0; i<count; i++) {
				fZec40[i] = (0.5f * fYec15[i]);
			}
			
			// LOOP 0x39bf6d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec41[i] = (0.5f * fYec15[i-1]);
			}
			
			// LOOP 0x39c7c70
			// exec code
			for (int i=0; i<count; i++) {
				fZec55[i] = (0.5f * fYec21[i]);
			}
			
			// LOOP 0x39d3520
			// exec code
			for (int i=0; i<count; i++) {
				fZec56[i] = (0.5f * fYec21[i-1]);
			}
			
			// LOOP 0x39dbdb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec70[i] = (0.5f * fYec27[i]);
			}
			
			// LOOP 0x39e7660
			// exec code
			for (int i=0; i<count; i++) {
				fZec71[i] = (0.5f * fYec27[i-1]);
			}
			
			// LOOP 0x39efd40
			// exec code
			for (int i=0; i<count; i++) {
				fZec85[i] = (0.5f * fYec33[i]);
			}
			
			// LOOP 0x39fba60
			// exec code
			for (int i=0; i<count; i++) {
				fZec86[i] = (0.5f * fYec33[i-1]);
			}
			
			// LOOP 0x3a01f30
			// exec code
			for (int i=0; i<count; i++) {
				fZec98[i] = (0.5f * fYec38[i]);
			}
			
			// LOOP 0x3a0dc30
			// exec code
			for (int i=0; i<count; i++) {
				fZec99[i] = (0.5f * fYec38[i-1]);
			}
			
			// LOOP 0x3a13d30
			// exec code
			for (int i=0; i<count; i++) {
				fZec111[i] = (0.5f * fYec43[i]);
			}
			
			// LOOP 0x3a1fa40
			// exec code
			for (int i=0; i<count; i++) {
				fZec112[i] = (0.5f * fYec43[i-1]);
			}
			
			// LOOP 0x3a25860
			// exec code
			for (int i=0; i<count; i++) {
				fZec124[i] = (0.5f * fYec48[i]);
			}
			
			// LOOP 0x3a31570
			// exec code
			for (int i=0; i<count; i++) {
				fZec125[i] = (0.5f * fYec48[i-1]);
			}
			
			// LOOP 0x3a37510
			// exec code
			for (int i=0; i<count; i++) {
				fZec137[i] = (0.5f * fYec53[i]);
			}
			
			// LOOP 0x3a43220
			// exec code
			for (int i=0; i<count; i++) {
				fZec138[i] = (0.5f * fYec53[i-1]);
			}
			
			// LOOP 0x3a492e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec150[i] = (0.5f * fYec58[i]);
			}
			
			// LOOP 0x3a54f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec151[i] = (0.5f * fYec58[i-1]);
			}
			
			// LOOP 0x3a5b1a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec163[i] = (0.5f * fYec63[i]);
			}
			
			// LOOP 0x3a66e10
			// exec code
			for (int i=0; i<count; i++) {
				fZec164[i] = (0.5f * fYec63[i-1]);
			}
			
			// SECTION : 17
			// LOOP 0x39967a0
			// pre processing
			for (int i=0; i<4; i++) iRec9_tmp[i]=iRec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec9[i] = ((int(((fZec10[i] - fZec11[i]) < 0)))?(1 - iRec9[i-1]):iRec9[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec9_perm[i]=iRec9_tmp[count+i];
			
			// LOOP 0x39aae50
			// pre processing
			for (int i=0; i<4; i++) iRec17_tmp[i]=iRec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec17[i] = ((int(((fZec25[i] - fZec26[i]) < 0)))?(1 - iRec17[i-1]):iRec17[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec17_perm[i]=iRec17_tmp[count+i];
			
			// LOOP 0x39bf0d0
			// pre processing
			for (int i=0; i<4; i++) iRec25_tmp[i]=iRec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec25[i] = ((int(((fZec40[i] - fZec41[i]) < 0)))?(1 - iRec25[i-1]):iRec25[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec25_perm[i]=iRec25_tmp[count+i];
			
			// LOOP 0x39d2f20
			// pre processing
			for (int i=0; i<4; i++) iRec33_tmp[i]=iRec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec33[i] = ((int(((fZec55[i] - fZec56[i]) < 0)))?(1 - iRec33[i-1]):iRec33[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec33_perm[i]=iRec33_tmp[count+i];
			
			// LOOP 0x39e7060
			// pre processing
			for (int i=0; i<4; i++) iRec41_tmp[i]=iRec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec41[i] = ((int(((fZec70[i] - fZec71[i]) < 0)))?(1 - iRec41[i-1]):iRec41[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec41_perm[i]=iRec41_tmp[count+i];
			
			// LOOP 0x3bebbc0
			// pre processing
			for (int i=0; i<4; i++) iRec189_tmp[i]=iRec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec189[i] = ((int(((fZec85[i] - fZec86[i]) < 0)))?(1 - iRec189[i-1]):iRec189[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec189_perm[i]=iRec189_tmp[count+i];
			
			// LOOP 0x3bf6640
			// pre processing
			for (int i=0; i<4; i++) iRec194_tmp[i]=iRec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec194[i] = ((int(((fZec98[i] - fZec99[i]) < 0)))?(1 - iRec194[i-1]):iRec194[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec194_perm[i]=iRec194_tmp[count+i];
			
			// LOOP 0x3c00a70
			// pre processing
			for (int i=0; i<4; i++) iRec199_tmp[i]=iRec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec199[i] = ((int(((fZec111[i] - fZec112[i]) < 0)))?(1 - iRec199[i-1]):iRec199[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec199_perm[i]=iRec199_tmp[count+i];
			
			// LOOP 0x3c0aeb0
			// pre processing
			for (int i=0; i<4; i++) iRec204_tmp[i]=iRec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec204[i] = ((int(((fZec124[i] - fZec125[i]) < 0)))?(1 - iRec204[i-1]):iRec204[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec204_perm[i]=iRec204_tmp[count+i];
			
			// LOOP 0x3c153e0
			// pre processing
			for (int i=0; i<4; i++) iRec209_tmp[i]=iRec209_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec209[i] = ((int(((fZec137[i] - fZec138[i]) < 0)))?(1 - iRec209[i-1]):iRec209[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec209_perm[i]=iRec209_tmp[count+i];
			
			// LOOP 0x3c1f8d0
			// pre processing
			for (int i=0; i<4; i++) iRec214_tmp[i]=iRec214_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec214[i] = ((int(((fZec150[i] - fZec151[i]) < 0)))?(1 - iRec214[i-1]):iRec214[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec214_perm[i]=iRec214_tmp[count+i];
			
			// LOOP 0x3c29e00
			// pre processing
			for (int i=0; i<4; i++) iRec219_tmp[i]=iRec219_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec219[i] = ((int(((fZec163[i] - fZec164[i]) < 0)))?(1 - iRec219[i-1]):iRec219[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec219_perm[i]=iRec219_tmp[count+i];
			
			// SECTION : 18
			// LOOP 0x3986a20
			// pre processing
			for (int i=0; i<4; i++) fYec4_tmp[i]=fYec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec4[i] = (iRec9[i] + fZec10[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec4_perm[i]=fYec4_tmp[count+i];
			
			// LOOP 0x399faa0
			// pre processing
			for (int i=0; i<4; i++) fYec10_tmp[i]=fYec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec10[i] = (iRec17[i] + fZec25[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec10_perm[i]=fYec10_tmp[count+i];
			
			// LOOP 0x39b3d40
			// pre processing
			for (int i=0; i<4; i++) fYec16_tmp[i]=fYec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec16[i] = (iRec25[i] + fZec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec16_perm[i]=fYec16_tmp[count+i];
			
			// LOOP 0x39c7b30
			// pre processing
			for (int i=0; i<4; i++) fYec22_tmp[i]=fYec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec22[i] = (iRec33[i] + fZec55[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec22_perm[i]=fYec22_tmp[count+i];
			
			// LOOP 0x39dbc70
			// pre processing
			for (int i=0; i<4; i++) fYec28_tmp[i]=fYec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec28[i] = (iRec41[i] + fZec70[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec28_perm[i]=fYec28_tmp[count+i];
			
			// LOOP 0x3beba20
			// pre processing
			for (int i=0; i<4; i++) fYec132_tmp[i]=fYec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec132[i] = (iRec189[i] + fZec85[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec132_perm[i]=fYec132_tmp[count+i];
			
			// LOOP 0x3bf64a0
			// pre processing
			for (int i=0; i<4; i++) fYec136_tmp[i]=fYec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec136[i] = (iRec194[i] + fZec98[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec136_perm[i]=fYec136_tmp[count+i];
			
			// LOOP 0x3c008d0
			// pre processing
			for (int i=0; i<4; i++) fYec140_tmp[i]=fYec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec140[i] = (iRec199[i] + fZec111[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec140_perm[i]=fYec140_tmp[count+i];
			
			// LOOP 0x3c0ad10
			// pre processing
			for (int i=0; i<4; i++) fYec144_tmp[i]=fYec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec144[i] = (iRec204[i] + fZec124[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec144_perm[i]=fYec144_tmp[count+i];
			
			// LOOP 0x3c15240
			// pre processing
			for (int i=0; i<4; i++) fYec148_tmp[i]=fYec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec148[i] = (iRec209[i] + fZec137[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec148_perm[i]=fYec148_tmp[count+i];
			
			// LOOP 0x3c1f730
			// pre processing
			for (int i=0; i<4; i++) fYec152_tmp[i]=fYec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec152[i] = (iRec214[i] + fZec150[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec152_perm[i]=fYec152_tmp[count+i];
			
			// LOOP 0x3c29c60
			// pre processing
			for (int i=0; i<4; i++) fYec156_tmp[i]=fYec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec156[i] = (iRec219[i] + fZec163[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec156_perm[i]=fYec156_tmp[count+i];
			
			// SECTION : 19
			// LOOP 0x39868e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec12[i] = (0.5f * fYec4[i]);
			}
			
			// LOOP 0x39996a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec13[i] = (0.5f * fYec4[i-1]);
			}
			
			// LOOP 0x399f960
			// exec code
			for (int i=0; i<count; i++) {
				fZec27[i] = (0.5f * fYec10[i]);
			}
			
			// LOOP 0x39adc10
			// exec code
			for (int i=0; i<count; i++) {
				fZec28[i] = (0.5f * fYec10[i-1]);
			}
			
			// LOOP 0x39b3c00
			// exec code
			for (int i=0; i<count; i++) {
				fZec42[i] = (0.5f * fYec16[i]);
			}
			
			// LOOP 0x39c1ea0
			// exec code
			for (int i=0; i<count; i++) {
				fZec43[i] = (0.5f * fYec16[i-1]);
			}
			
			// LOOP 0x39c79f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec57[i] = (0.5f * fYec22[i]);
			}
			
			// LOOP 0x39d5cf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec58[i] = (0.5f * fYec22[i-1]);
			}
			
			// LOOP 0x39dbb30
			// exec code
			for (int i=0; i<count; i++) {
				fZec72[i] = (0.5f * fYec28[i]);
			}
			
			// LOOP 0x39e9e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec73[i] = (0.5f * fYec28[i-1]);
			}
			
			// LOOP 0x39fc6e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec87[i] = ((1 + fRec45[i]) - fRec45[i-1]);
			}
			
			// LOOP 0x3a0e8b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec100[i] = ((1 + fRec52[i]) - fRec52[i-1]);
			}
			
			// LOOP 0x3a206c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec113[i] = ((1 + fRec59[i]) - fRec59[i-1]);
			}
			
			// LOOP 0x3a321f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec126[i] = ((1 + fRec66[i]) - fRec66[i-1]);
			}
			
			// LOOP 0x3a43ea0
			// exec code
			for (int i=0; i<count; i++) {
				fZec139[i] = ((1 + fRec73[i]) - fRec73[i-1]);
			}
			
			// LOOP 0x3beb8e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec272[i] = (0.5f * fYec132[i]);
			}
			
			// LOOP 0x3bedfa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec273[i] = (0.5f * fYec132[i-1]);
			}
			
			// LOOP 0x3bf6360
			// exec code
			for (int i=0; i<count; i++) {
				fZec277[i] = (0.5f * fYec136[i]);
			}
			
			// LOOP 0x3bf8a20
			// exec code
			for (int i=0; i<count; i++) {
				fZec278[i] = (0.5f * fYec136[i-1]);
			}
			
			// LOOP 0x3c00790
			// exec code
			for (int i=0; i<count; i++) {
				fZec282[i] = (0.5f * fYec140[i]);
			}
			
			// LOOP 0x3c02e50
			// exec code
			for (int i=0; i<count; i++) {
				fZec283[i] = (0.5f * fYec140[i-1]);
			}
			
			// LOOP 0x3c0abd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec287[i] = (0.5f * fYec144[i]);
			}
			
			// LOOP 0x3c0d290
			// exec code
			for (int i=0; i<count; i++) {
				fZec288[i] = (0.5f * fYec144[i-1]);
			}
			
			// LOOP 0x3c15100
			// exec code
			for (int i=0; i<count; i++) {
				fZec292[i] = (0.5f * fYec148[i]);
			}
			
			// LOOP 0x3c177c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec293[i] = (0.5f * fYec148[i-1]);
			}
			
			// LOOP 0x3c1f5f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec297[i] = (0.5f * fYec152[i]);
			}
			
			// LOOP 0x3c21cb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec298[i] = (0.5f * fYec152[i-1]);
			}
			
			// LOOP 0x3c29b20
			// exec code
			for (int i=0; i<count; i++) {
				fZec302[i] = (0.5f * fYec156[i]);
			}
			
			// LOOP 0x3c2c1e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec303[i] = (0.5f * fYec156[i-1]);
			}
			
			// SECTION : 20
			// LOOP 0x399a370
			// exec code
			for (int i=0; i<count; i++) {
				fZec14[i] = ((1 + fRec4[i]) - fRec4[i-1]);
			}
			
			// LOOP 0x39ae890
			// exec code
			for (int i=0; i<count; i++) {
				fZec29[i] = ((1 + fRec13[i]) - fRec13[i-1]);
			}
			
			// LOOP 0x39fc3f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec88[i] = saw_polyblep_fast(fRec45[i], fRec45[i-1], fRec45[i-2], ((int((fZec87[i] > 1.0f)))?fZec78[i]:fZec87[i]));
			}
			
			// LOOP 0x3a0e5c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec101[i] = saw_polyblep_fast(fRec52[i], fRec52[i-1], fRec52[i-2], ((int((fZec100[i] > 1.0f)))?fZec91[i]:fZec100[i]));
			}
			
			// LOOP 0x3a203d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec114[i] = saw_polyblep_fast(fRec59[i], fRec59[i-1], fRec59[i-2], ((int((fZec113[i] > 1.0f)))?fZec104[i]:fZec113[i]));
			}
			
			// LOOP 0x3a31f00
			// exec code
			for (int i=0; i<count; i++) {
				fZec127[i] = saw_polyblep_fast(fRec66[i], fRec66[i-1], fRec66[i-2], ((int((fZec126[i] > 1.0f)))?fZec117[i]:fZec126[i]));
			}
			
			// LOOP 0x3a43bb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec140[i] = saw_polyblep_fast(fRec73[i], fRec73[i-1], fRec73[i-2], ((int((fZec139[i] > 1.0f)))?fZec130[i]:fZec139[i]));
			}
			
			// LOOP 0x3a55bd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec152[i] = ((1 + fRec80[i]) - fRec80[i-1]);
			}
			
			// LOOP 0x3a67a90
			// exec code
			for (int i=0; i<count; i++) {
				fZec165[i] = ((1 + fRec87[i]) - fRec87[i-1]);
			}
			
			// LOOP 0x3a898f0
			// pre processing
			for (int i=0; i<4; i++) fYec70_tmp[i]=fYec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec70[i] = ((fZec83[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec70_perm[i]=fYec70_tmp[count+i];
			
			// LOOP 0x3a8f0f0
			// pre processing
			for (int i=0; i<4; i++) fYec71_tmp[i]=fYec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec71[i] = ((fZec96[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec71_perm[i]=fYec71_tmp[count+i];
			
			// LOOP 0x3a94f60
			// pre processing
			for (int i=0; i<4; i++) fYec72_tmp[i]=fYec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec72[i] = ((fZec109[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec72_perm[i]=fYec72_tmp[count+i];
			
			// LOOP 0x3a9a580
			// pre processing
			for (int i=0; i<4; i++) fYec73_tmp[i]=fYec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec73[i] = ((fZec122[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec73_perm[i]=fYec73_tmp[count+i];
			
			// LOOP 0x3a9fef0
			// pre processing
			for (int i=0; i<4; i++) fYec74_tmp[i]=fYec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec74[i] = ((fZec135[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec74_perm[i]=fYec74_tmp[count+i];
			
			// LOOP 0x3bed9a0
			// pre processing
			for (int i=0; i<4; i++) iRec190_tmp[i]=iRec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec190[i] = ((int(((fZec272[i] - fZec273[i]) < 0)))?(1 - iRec190[i-1]):iRec190[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec190_perm[i]=iRec190_tmp[count+i];
			
			// LOOP 0x3bf8420
			// pre processing
			for (int i=0; i<4; i++) iRec195_tmp[i]=iRec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec195[i] = ((int(((fZec277[i] - fZec278[i]) < 0)))?(1 - iRec195[i-1]):iRec195[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec195_perm[i]=iRec195_tmp[count+i];
			
			// LOOP 0x3c02850
			// pre processing
			for (int i=0; i<4; i++) iRec200_tmp[i]=iRec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec200[i] = ((int(((fZec282[i] - fZec283[i]) < 0)))?(1 - iRec200[i-1]):iRec200[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec200_perm[i]=iRec200_tmp[count+i];
			
			// LOOP 0x3c0cc90
			// pre processing
			for (int i=0; i<4; i++) iRec205_tmp[i]=iRec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec205[i] = ((int(((fZec287[i] - fZec288[i]) < 0)))?(1 - iRec205[i-1]):iRec205[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec205_perm[i]=iRec205_tmp[count+i];
			
			// LOOP 0x3c171c0
			// pre processing
			for (int i=0; i<4; i++) iRec210_tmp[i]=iRec210_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec210[i] = ((int(((fZec292[i] - fZec293[i]) < 0)))?(1 - iRec210[i-1]):iRec210[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec210_perm[i]=iRec210_tmp[count+i];
			
			// LOOP 0x3c216b0
			// pre processing
			for (int i=0; i<4; i++) iRec215_tmp[i]=iRec215_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec215[i] = ((int(((fZec297[i] - fZec298[i]) < 0)))?(1 - iRec215[i-1]):iRec215[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec215_perm[i]=iRec215_tmp[count+i];
			
			// LOOP 0x3c2bbe0
			// pre processing
			for (int i=0; i<4; i++) iRec220_tmp[i]=iRec220_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec220[i] = ((int(((fZec302[i] - fZec303[i]) < 0)))?(1 - iRec220[i-1]):iRec220[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec220_perm[i]=iRec220_tmp[count+i];
			
			// LOOP 0x3c340d0
			// pre processing
			for (int i=0; i<4; i++) iRec224_tmp[i]=iRec224_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec224[i] = ((int(((fZec12[i] - fZec13[i]) < 0)))?(1 - iRec224[i-1]):iRec224[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec224_perm[i]=iRec224_tmp[count+i];
			
			// LOOP 0x3c3bfc0
			// pre processing
			for (int i=0; i<4; i++) iRec228_tmp[i]=iRec228_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec228[i] = ((int(((fZec27[i] - fZec28[i]) < 0)))?(1 - iRec228[i-1]):iRec228[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec228_perm[i]=iRec228_tmp[count+i];
			
			// LOOP 0x3c44230
			// pre processing
			for (int i=0; i<4; i++) iRec232_tmp[i]=iRec232_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec232[i] = ((int(((fZec42[i] - fZec43[i]) < 0)))?(1 - iRec232[i-1]):iRec232[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec232_perm[i]=iRec232_tmp[count+i];
			
			// LOOP 0x3c4c100
			// pre processing
			for (int i=0; i<4; i++) iRec236_tmp[i]=iRec236_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec236[i] = ((int(((fZec57[i] - fZec58[i]) < 0)))?(1 - iRec236[i-1]):iRec236[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec236_perm[i]=iRec236_tmp[count+i];
			
			// LOOP 0x3c540a0
			// pre processing
			for (int i=0; i<4; i++) iRec240_tmp[i]=iRec240_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec240[i] = ((int(((fZec72[i] - fZec73[i]) < 0)))?(1 - iRec240[i-1]):iRec240[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec240_perm[i]=iRec240_tmp[count+i];
			
			// SECTION : 21
			// LOOP 0x399a080
			// exec code
			for (int i=0; i<count; i++) {
				fZec15[i] = saw_polyblep_fast(fRec4[i], fRec4[i-1], fRec4[i-2], ((int((fZec14[i] > 1.0f)))?fZec3[i]:fZec14[i]));
			}
			
			// LOOP 0x39ae5a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec30[i] = saw_polyblep_fast(fRec13[i], fRec13[i-1], fRec13[i-2], ((int((fZec29[i] > 1.0f)))?fZec18[i]:fZec29[i]));
			}
			
			// LOOP 0x39c2b20
			// exec code
			for (int i=0; i<count; i++) {
				fZec44[i] = ((1 + fRec21[i]) - fRec21[i-1]);
			}
			
			// LOOP 0x39d6970
			// exec code
			for (int i=0; i<count; i++) {
				fZec59[i] = ((1 + fRec29[i]) - fRec29[i-1]);
			}
			
			// LOOP 0x39eaab0
			// exec code
			for (int i=0; i<count; i++) {
				fZec74[i] = ((1 + fRec37[i]) - fRec37[i-1]);
			}
			
			// LOOP 0x3a558e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec153[i] = saw_polyblep_fast(fRec80[i], fRec80[i-1], fRec80[i-2], ((int((fZec152[i] > 1.0f)))?fZec143[i]:fZec152[i]));
			}
			
			// LOOP 0x3a677a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec166[i] = saw_polyblep_fast(fRec87[i], fRec87[i-1], fRec87[i-2], ((int((fZec165[i] > 1.0f)))?fZec156[i]:fZec165[i]));
			}
			
			// LOOP 0x3a893a0
			// pre processing
			for (int i=0; i<4; i++) fRec102_tmp[i]=fRec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec102[i] = (fRec102[i-1] + (fConst10 * ((square_polyblep_precalc(fZec83[i], fZec84[i], (0.5f * fYec32[i-2]), fZec88[i]) + (2 * fYec70[i-1])) - fRec102[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec102_perm[i]=fRec102_tmp[count+i];
			
			// LOOP 0x3a8eba0
			// pre processing
			for (int i=0; i<4; i++) fRec104_tmp[i]=fRec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec104[i] = (fRec104[i-1] + (fConst10 * ((square_polyblep_precalc(fZec96[i], fZec97[i], (0.5f * fYec37[i-2]), fZec101[i]) + (2 * fYec71[i-1])) - fRec104[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec104_perm[i]=fRec104_tmp[count+i];
			
			// LOOP 0x3a94a10
			// pre processing
			for (int i=0; i<4; i++) fRec106_tmp[i]=fRec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec106[i] = (fRec106[i-1] + (fConst10 * ((square_polyblep_precalc(fZec109[i], fZec110[i], (0.5f * fYec42[i-2]), fZec114[i]) + (2 * fYec72[i-1])) - fRec106[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec106_perm[i]=fRec106_tmp[count+i];
			
			// LOOP 0x3a9a030
			// pre processing
			for (int i=0; i<4; i++) fRec108_tmp[i]=fRec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec108[i] = (fRec108[i-1] + (fConst10 * ((square_polyblep_precalc(fZec122[i], fZec123[i], (0.5f * fYec47[i-2]), fZec127[i]) + (2 * fYec73[i-1])) - fRec108[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec108_perm[i]=fRec108_tmp[count+i];
			
			// LOOP 0x3a9f9a0
			// pre processing
			for (int i=0; i<4; i++) fRec110_tmp[i]=fRec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec110[i] = (fRec110[i-1] + (fConst11 * ((square_polyblep_precalc(fZec135[i], fZec136[i], (0.5f * fYec52[i-2]), fZec140[i]) + (2 * fYec74[i-1])) - fRec110[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec110_perm[i]=fRec110_tmp[count+i];
			
			// LOOP 0x3aa5500
			// pre processing
			for (int i=0; i<4; i++) fYec75_tmp[i]=fYec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec75[i] = ((fZec148[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec75_perm[i]=fYec75_tmp[count+i];
			
			// LOOP 0x3aab010
			// pre processing
			for (int i=0; i<4; i++) fYec76_tmp[i]=fYec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec76[i] = ((fZec161[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec76_perm[i]=fYec76_tmp[count+i];
			
			// LOOP 0x3ab0df0
			// pre processing
			for (int i=0; i<4; i++) fYec77_tmp[i]=fYec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec77[i] = ((fZec8[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec77_perm[i]=fYec77_tmp[count+i];
			
			// LOOP 0x3ab6310
			// pre processing
			for (int i=0; i<4; i++) fYec78_tmp[i]=fYec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec78[i] = ((fZec23[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec78_perm[i]=fYec78_tmp[count+i];
			
			// LOOP 0x3beb7a0
			// pre processing
			for (int i=0; i<4; i++) fYec133_tmp[i]=fYec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec133[i] = (iRec190[i] + fZec272[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec133_perm[i]=fYec133_tmp[count+i];
			
			// LOOP 0x3bf6220
			// pre processing
			for (int i=0; i<4; i++) fYec137_tmp[i]=fYec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec137[i] = (iRec195[i] + fZec277[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec137_perm[i]=fYec137_tmp[count+i];
			
			// LOOP 0x3c00650
			// pre processing
			for (int i=0; i<4; i++) fYec141_tmp[i]=fYec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec141[i] = (iRec200[i] + fZec282[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec141_perm[i]=fYec141_tmp[count+i];
			
			// LOOP 0x3c0aa90
			// pre processing
			for (int i=0; i<4; i++) fYec145_tmp[i]=fYec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec145[i] = (iRec205[i] + fZec287[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec145_perm[i]=fYec145_tmp[count+i];
			
			// LOOP 0x3c14fc0
			// pre processing
			for (int i=0; i<4; i++) fYec149_tmp[i]=fYec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec149[i] = (iRec210[i] + fZec292[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec149_perm[i]=fYec149_tmp[count+i];
			
			// LOOP 0x3c1f4b0
			// pre processing
			for (int i=0; i<4; i++) fYec153_tmp[i]=fYec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec153[i] = (iRec215[i] + fZec297[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec153_perm[i]=fYec153_tmp[count+i];
			
			// LOOP 0x3c299e0
			// pre processing
			for (int i=0; i<4; i++) fYec157_tmp[i]=fYec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec157[i] = (iRec220[i] + fZec302[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec157_perm[i]=fYec157_tmp[count+i];
			
			// LOOP 0x3c33f30
			// pre processing
			for (int i=0; i<4; i++) fYec160_tmp[i]=fYec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec160[i] = (iRec224[i] + fZec12[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec160_perm[i]=fYec160_tmp[count+i];
			
			// LOOP 0x3c3be20
			// pre processing
			for (int i=0; i<4; i++) fYec163_tmp[i]=fYec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec163[i] = (iRec228[i] + fZec27[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec163_perm[i]=fYec163_tmp[count+i];
			
			// LOOP 0x3c44090
			// pre processing
			for (int i=0; i<4; i++) fYec166_tmp[i]=fYec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec166[i] = (iRec232[i] + fZec42[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec166_perm[i]=fYec166_tmp[count+i];
			
			// LOOP 0x3c4bf60
			// pre processing
			for (int i=0; i<4; i++) fYec169_tmp[i]=fYec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec169[i] = (iRec236[i] + fZec57[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec169_perm[i]=fYec169_tmp[count+i];
			
			// LOOP 0x3c53f00
			// pre processing
			for (int i=0; i<4; i++) fYec172_tmp[i]=fYec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec172[i] = (iRec240[i] + fZec72[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec172_perm[i]=fYec172_tmp[count+i];
			
			// SECTION : 22
			// LOOP 0x39c2830
			// exec code
			for (int i=0; i<count; i++) {
				fZec45[i] = saw_polyblep_fast(fRec21[i], fRec21[i-1], fRec21[i-2], ((int((fZec44[i] > 1.0f)))?fZec33[i]:fZec44[i]));
			}
			
			// LOOP 0x39d6680
			// exec code
			for (int i=0; i<count; i++) {
				fZec60[i] = saw_polyblep_fast(fRec29[i], fRec29[i-1], fRec29[i-2], ((int((fZec59[i] > 1.0f)))?fZec48[i]:fZec59[i]));
			}
			
			// LOOP 0x39ea7c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec75[i] = saw_polyblep_fast(fRec37[i], fRec37[i-1], fRec37[i-2], ((int((fZec74[i] > 1.0f)))?fZec63[i]:fZec74[i]));
			}
			
			// LOOP 0x3a88eb0
			// pre processing
			for (int i=0; i<4; i++) fRec101_tmp[i]=fRec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec101[i] = (fConst7 * ((fRec102[i] - fRec102[i-1]) + fRec101[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec101_perm[i]=fRec101_tmp[count+i];
			
			// LOOP 0x3a8e6b0
			// pre processing
			for (int i=0; i<4; i++) fRec103_tmp[i]=fRec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec103[i] = (fConst7 * ((fRec104[i] - fRec104[i-1]) + fRec103[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec103_perm[i]=fRec103_tmp[count+i];
			
			// LOOP 0x3a94520
			// pre processing
			for (int i=0; i<4; i++) fRec105_tmp[i]=fRec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec105[i] = (fConst7 * ((fRec106[i] - fRec106[i-1]) + fRec105[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec105_perm[i]=fRec105_tmp[count+i];
			
			// LOOP 0x3a99b40
			// pre processing
			for (int i=0; i<4; i++) fRec107_tmp[i]=fRec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec107[i] = (fConst7 * ((fRec108[i] - fRec108[i-1]) + fRec107[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec107_perm[i]=fRec107_tmp[count+i];
			
			// LOOP 0x3a9f4b0
			// pre processing
			for (int i=0; i<4; i++) fRec109_tmp[i]=fRec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec109[i] = (fConst7 * ((fRec110[i] - fRec110[i-1]) + fRec109[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec109_perm[i]=fRec109_tmp[count+i];
			
			// LOOP 0x3aa4fb0
			// pre processing
			for (int i=0; i<4; i++) fRec112_tmp[i]=fRec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec112[i] = (fRec112[i-1] + (fConst11 * ((square_polyblep_precalc(fZec148[i], fZec149[i], (0.5f * fYec57[i-2]), fZec153[i]) + (2 * fYec75[i-1])) - fRec112[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec112_perm[i]=fRec112_tmp[count+i];
			
			// LOOP 0x3aaaac0
			// pre processing
			for (int i=0; i<4; i++) fRec114_tmp[i]=fRec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec114[i] = (fRec114[i-1] + (fConst11 * ((square_polyblep_precalc(fZec161[i], fZec162[i], (0.5f * fYec62[i-2]), fZec166[i]) + (2 * fYec76[i-1])) - fRec114[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec114_perm[i]=fRec114_tmp[count+i];
			
			// LOOP 0x3ab08a0
			// pre processing
			for (int i=0; i<4; i++) fRec116_tmp[i]=fRec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec116[i] = (fRec116[i-1] + (fConst11 * ((square_polyblep_precalc(fZec8[i], fZec9[i], (0.5f * fYec2[i-2]), fZec15[i]) + (2 * fYec77[i-1])) - fRec116[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec116_perm[i]=fRec116_tmp[count+i];
			
			// LOOP 0x3ab5dc0
			// pre processing
			for (int i=0; i<4; i++) fRec118_tmp[i]=fRec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec118[i] = (fRec118[i-1] + (fConst12 * ((square_polyblep_precalc(fZec23[i], fZec24[i], (0.5f * fYec8[i-2]), fZec30[i]) + (2 * fYec78[i-1])) - fRec118[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec118_perm[i]=fRec118_tmp[count+i];
			
			// LOOP 0x3abc730
			// pre processing
			for (int i=0; i<4; i++) fYec79_tmp[i]=fYec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec79[i] = ((fZec38[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec79_perm[i]=fYec79_tmp[count+i];
			
			// LOOP 0x3ac1eb0
			// pre processing
			for (int i=0; i<4; i++) fYec80_tmp[i]=fYec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec80[i] = ((fZec53[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec80_perm[i]=fYec80_tmp[count+i];
			
			// LOOP 0x3ac8250
			// pre processing
			for (int i=0; i<4; i++) fYec81_tmp[i]=fYec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec81[i] = ((fZec68[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec81_perm[i]=fYec81_tmp[count+i];
			
			// LOOP 0x3ace810
			// pre processing
			for (int i=0; i<4; i++) fYec82_tmp[i]=fYec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec82[i] = ((fZec81[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec82_perm[i]=fYec82_tmp[count+i];
			
			// LOOP 0x3beb660
			// exec code
			for (int i=0; i<count; i++) {
				fZec274[i] = (0.5f * fYec133[i]);
			}
			
			// LOOP 0x3bf0340
			// exec code
			for (int i=0; i<count; i++) {
				fZec275[i] = (0.5f * fYec133[i-1]);
			}
			
			// LOOP 0x3bf60e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec279[i] = (0.5f * fYec137[i]);
			}
			
			// LOOP 0x3bfadc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec280[i] = (0.5f * fYec137[i-1]);
			}
			
			// LOOP 0x3c00510
			// exec code
			for (int i=0; i<count; i++) {
				fZec284[i] = (0.5f * fYec141[i]);
			}
			
			// LOOP 0x3c05200
			// exec code
			for (int i=0; i<count; i++) {
				fZec285[i] = (0.5f * fYec141[i-1]);
			}
			
			// LOOP 0x3c0a950
			// exec code
			for (int i=0; i<count; i++) {
				fZec289[i] = (0.5f * fYec145[i]);
			}
			
			// LOOP 0x3c0f630
			// exec code
			for (int i=0; i<count; i++) {
				fZec290[i] = (0.5f * fYec145[i-1]);
			}
			
			// LOOP 0x3c14e80
			// exec code
			for (int i=0; i<count; i++) {
				fZec294[i] = (0.5f * fYec149[i]);
			}
			
			// LOOP 0x3c19b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec295[i] = (0.5f * fYec149[i-1]);
			}
			
			// LOOP 0x3c1f370
			// exec code
			for (int i=0; i<count; i++) {
				fZec299[i] = (0.5f * fYec153[i]);
			}
			
			// LOOP 0x3c24050
			// exec code
			for (int i=0; i<count; i++) {
				fZec300[i] = (0.5f * fYec153[i-1]);
			}
			
			// LOOP 0x3c298a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec304[i] = (0.5f * fYec157[i]);
			}
			
			// LOOP 0x3c2e580
			// exec code
			for (int i=0; i<count; i++) {
				fZec305[i] = (0.5f * fYec157[i-1]);
			}
			
			// LOOP 0x3c33df0
			// exec code
			for (int i=0; i<count; i++) {
				fZec307[i] = (0.5f * fYec160[i]);
			}
			
			// LOOP 0x3c364b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec308[i] = (0.5f * fYec160[i-1]);
			}
			
			// LOOP 0x3c3bce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec310[i] = (0.5f * fYec163[i]);
			}
			
			// LOOP 0x3c3e3a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec311[i] = (0.5f * fYec163[i-1]);
			}
			
			// LOOP 0x3c43f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec313[i] = (0.5f * fYec166[i]);
			}
			
			// LOOP 0x3c46500
			// exec code
			for (int i=0; i<count; i++) {
				fZec314[i] = (0.5f * fYec166[i-1]);
			}
			
			// LOOP 0x3c4be20
			// exec code
			for (int i=0; i<count; i++) {
				fZec316[i] = (0.5f * fYec169[i]);
			}
			
			// LOOP 0x3c4e4e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec317[i] = (0.5f * fYec169[i-1]);
			}
			
			// LOOP 0x3c53dc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec319[i] = (0.5f * fYec172[i]);
			}
			
			// LOOP 0x3c56480
			// exec code
			for (int i=0; i<count; i++) {
				fZec320[i] = (0.5f * fYec172[i-1]);
			}
			
			// SECTION : 23
			// LOOP 0x3aa4ac0
			// pre processing
			for (int i=0; i<4; i++) fRec111_tmp[i]=fRec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec111[i] = (fConst7 * ((fRec112[i] - fRec112[i-1]) + fRec111[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec111_perm[i]=fRec111_tmp[count+i];
			
			// LOOP 0x3aaa5d0
			// pre processing
			for (int i=0; i<4; i++) fRec113_tmp[i]=fRec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec113[i] = (fConst7 * ((fRec114[i] - fRec114[i-1]) + fRec113[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec113_perm[i]=fRec113_tmp[count+i];
			
			// LOOP 0x3ab03b0
			// pre processing
			for (int i=0; i<4; i++) fRec115_tmp[i]=fRec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec115[i] = (fConst7 * ((fRec116[i] - fRec116[i-1]) + fRec115[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec115_perm[i]=fRec115_tmp[count+i];
			
			// LOOP 0x3ab58d0
			// pre processing
			for (int i=0; i<4; i++) fRec117_tmp[i]=fRec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec117[i] = (fConst7 * ((fRec118[i] - fRec118[i-1]) + fRec117[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec117_perm[i]=fRec117_tmp[count+i];
			
			// LOOP 0x3abc1e0
			// pre processing
			for (int i=0; i<4; i++) fRec120_tmp[i]=fRec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec120[i] = (fRec120[i-1] + (fConst12 * ((square_polyblep_precalc(fZec38[i], fZec39[i], (0.5f * fYec14[i-2]), fZec45[i]) + (2 * fYec79[i-1])) - fRec120[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec120_perm[i]=fRec120_tmp[count+i];
			
			// LOOP 0x3ac1960
			// pre processing
			for (int i=0; i<4; i++) fRec122_tmp[i]=fRec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec122[i] = (fRec122[i-1] + (fConst12 * ((square_polyblep_precalc(fZec53[i], fZec54[i], (0.5f * fYec20[i-2]), fZec60[i]) + (2 * fYec80[i-1])) - fRec122[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec122_perm[i]=fRec122_tmp[count+i];
			
			// LOOP 0x3ac7d00
			// pre processing
			for (int i=0; i<4; i++) fRec124_tmp[i]=fRec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec124[i] = (fRec124[i-1] + (fConst12 * ((square_polyblep_precalc(fZec68[i], fZec69[i], (0.5f * fYec26[i-2]), fZec75[i]) + (2 * fYec81[i-1])) - fRec124[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec124_perm[i]=fRec124_tmp[count+i];
			
			// LOOP 0x3ace2c0
			// pre processing
			for (int i=0; i<4; i++) fRec126_tmp[i]=fRec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec126[i] = (fRec126[i-1] + (fConst13 * ((square_polyblep_precalc(fZec81[i], fZec82[i], (0.5f * fYec31[i-2]), fZec88[i]) + (2 * fYec82[i-1])) - fRec126[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec126_perm[i]=fRec126_tmp[count+i];
			
			// LOOP 0x3ad4530
			// pre processing
			for (int i=0; i<4; i++) fYec83_tmp[i]=fYec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec83[i] = ((fZec94[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec83_perm[i]=fYec83_tmp[count+i];
			
			// LOOP 0x3adade0
			// pre processing
			for (int i=0; i<4; i++) fYec84_tmp[i]=fYec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec84[i] = ((fZec107[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec84_perm[i]=fYec84_tmp[count+i];
			
			// LOOP 0x3ae0a80
			// pre processing
			for (int i=0; i<4; i++) fYec85_tmp[i]=fYec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec85[i] = ((fZec120[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec85_perm[i]=fYec85_tmp[count+i];
			
			// LOOP 0x3ae69d0
			// pre processing
			for (int i=0; i<4; i++) fYec86_tmp[i]=fYec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec86[i] = ((fZec133[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec86_perm[i]=fYec86_tmp[count+i];
			
			// LOOP 0x3aec350
			// pre processing
			for (int i=0; i<4; i++) fYec87_tmp[i]=fYec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec87[i] = ((fZec146[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec87_perm[i]=fYec87_tmp[count+i];
			
			// LOOP 0x3af2590
			// pre processing
			for (int i=0; i<4; i++) fYec88_tmp[i]=fYec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec88[i] = ((fZec159[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec88_perm[i]=fYec88_tmp[count+i];
			
			// LOOP 0x3af8b30
			// pre processing
			for (int i=0; i<4; i++) fYec89_tmp[i]=fYec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec89[i] = ((fZec6[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec89_perm[i]=fYec89_tmp[count+i];
			
			// LOOP 0x3afe440
			// pre processing
			for (int i=0; i<4; i++) fYec90_tmp[i]=fYec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec90[i] = ((fZec21[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec90_perm[i]=fYec90_tmp[count+i];
			
			// LOOP 0x3b05090
			// pre processing
			for (int i=0; i<4; i++) fYec91_tmp[i]=fYec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec91[i] = ((fZec36[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec91_perm[i]=fYec91_tmp[count+i];
			
			// LOOP 0x3b0acc0
			// pre processing
			for (int i=0; i<4; i++) fYec92_tmp[i]=fYec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec92[i] = ((fZec51[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec92_perm[i]=fYec92_tmp[count+i];
			
			// LOOP 0x3b11970
			// pre processing
			for (int i=0; i<4; i++) fYec93_tmp[i]=fYec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec93[i] = ((fZec66[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec93_perm[i]=fYec93_tmp[count+i];
			
			// LOOP 0x3b188e0
			// pre processing
			for (int i=0; i<4; i++) fYec94_tmp[i]=fYec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec94[i] = ((fZec79[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec94_perm[i]=fYec94_tmp[count+i];
			
			// LOOP 0x3b1eba0
			// pre processing
			for (int i=0; i<4; i++) fYec95_tmp[i]=fYec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec95[i] = ((fZec92[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec95_perm[i]=fYec95_tmp[count+i];
			
			// LOOP 0x3b25eb0
			// pre processing
			for (int i=0; i<4; i++) fYec96_tmp[i]=fYec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec96[i] = ((fZec105[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec96_perm[i]=fYec96_tmp[count+i];
			
			// LOOP 0x3b2c140
			// pre processing
			for (int i=0; i<4; i++) fYec97_tmp[i]=fYec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec97[i] = ((fZec118[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec97_perm[i]=fYec97_tmp[count+i];
			
			// LOOP 0x3b32730
			// pre processing
			for (int i=0; i<4; i++) fYec98_tmp[i]=fYec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec98[i] = ((fZec131[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec98_perm[i]=fYec98_tmp[count+i];
			
			// LOOP 0x3b38420
			// pre processing
			for (int i=0; i<4; i++) fYec99_tmp[i]=fYec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec99[i] = ((fZec144[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec99_perm[i]=fYec99_tmp[count+i];
			
			// LOOP 0x3b3eca0
			// pre processing
			for (int i=0; i<4; i++) fYec100_tmp[i]=fYec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec100[i] = ((fZec157[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec100_perm[i]=fYec100_tmp[count+i];
			
			// LOOP 0x3b45b10
			// pre processing
			for (int i=0; i<4; i++) fYec101_tmp[i]=fYec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec101[i] = ((fZec4[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec101_perm[i]=fYec101_tmp[count+i];
			
			// LOOP 0x3b4b830
			// pre processing
			for (int i=0; i<4; i++) fYec102_tmp[i]=fYec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec102[i] = ((fZec19[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec102_perm[i]=fYec102_tmp[count+i];
			
			// LOOP 0x3b52d00
			// pre processing
			for (int i=0; i<4; i++) fYec103_tmp[i]=fYec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec103[i] = ((fZec34[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec103_perm[i]=fYec103_tmp[count+i];
			
			// LOOP 0x3b58de0
			// pre processing
			for (int i=0; i<4; i++) fYec104_tmp[i]=fYec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec104[i] = ((fZec49[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec104_perm[i]=fYec104_tmp[count+i];
			
			// LOOP 0x3b60310
			// pre processing
			for (int i=0; i<4; i++) fYec105_tmp[i]=fYec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec105[i] = ((fZec64[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec105_perm[i]=fYec105_tmp[count+i];
			
			// LOOP 0x3b67890
			// pre processing
			for (int i=0; i<4; i++) fYec106_tmp[i]=fYec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec106[i] = (0 - (2 * (fRec45[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec106_perm[i]=fYec106_tmp[count+i];
			
			// LOOP 0x3b6d370
			// pre processing
			for (int i=0; i<4; i++) fYec108_tmp[i]=fYec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec108[i] = (0 - (2 * (fRec52[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec108_perm[i]=fYec108_tmp[count+i];
			
			// LOOP 0x3b745f0
			// pre processing
			for (int i=0; i<4; i++) fYec110_tmp[i]=fYec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec110[i] = (0 - (2 * (fRec59[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec110_perm[i]=fYec110_tmp[count+i];
			
			// LOOP 0x3b7a370
			// pre processing
			for (int i=0; i<4; i++) fYec112_tmp[i]=fYec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec112[i] = (0 - (2 * (fRec66[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec112_perm[i]=fYec112_tmp[count+i];
			
			// LOOP 0x3b80320
			// pre processing
			for (int i=0; i<4; i++) fYec114_tmp[i]=fYec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec114[i] = (0 - (2 * (fRec73[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec114_perm[i]=fYec114_tmp[count+i];
			
			// LOOP 0x3b85720
			// pre processing
			for (int i=0; i<4; i++) fYec116_tmp[i]=fYec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec116[i] = (0 - (2 * (fRec80[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec116_perm[i]=fYec116_tmp[count+i];
			
			// LOOP 0x3b8bcd0
			// pre processing
			for (int i=0; i<4; i++) fYec118_tmp[i]=fYec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec118[i] = (0 - (2 * (fRec87[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec118_perm[i]=fYec118_tmp[count+i];
			
			// LOOP 0x3b92720
			// pre processing
			for (int i=0; i<4; i++) fYec120_tmp[i]=fYec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec120[i] = (0 - (2 * (fRec4[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec120_perm[i]=fYec120_tmp[count+i];
			
			// LOOP 0x3b95800
			// exec code
			for (int i=0; i<count; i++) {
				fZec218[i] = (fRec109[i] + (fRec107[i] + (fRec105[i] + (fRec101[i] + fRec103[i]))));
			}
			
			// LOOP 0x3bb4660
			// pre processing
			for (int i=0; i<4; i++) fYec123_tmp[i]=fYec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec123[i] = (0 - (2 * (fRec13[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec123_perm[i]=fYec123_tmp[count+i];
			
			// LOOP 0x3bbb520
			// pre processing
			for (int i=0; i<4; i++) fYec125_tmp[i]=fYec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec125[i] = (0 - (2 * (fRec21[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec125_perm[i]=fYec125_tmp[count+i];
			
			// LOOP 0x3bbe9f0
			// pre processing
			for (int i=0; i<4; i++) fYec127_tmp[i]=fYec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec127[i] = (0 - (2 * (fRec29[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec127_perm[i]=fYec127_tmp[count+i];
			
			// LOOP 0x3bc1f00
			// pre processing
			for (int i=0; i<4; i++) fYec129_tmp[i]=fYec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec129[i] = (0 - (2 * (fRec37[i] - 0.5f)));
			}
			// post processing
			for (int i=0; i<4; i++) fYec129_perm[i]=fYec129_tmp[count+i];
			
			// LOOP 0x3befd40
			// pre processing
			for (int i=0; i<4; i++) iRec191_tmp[i]=iRec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec191[i] = ((int(((fZec274[i] - fZec275[i]) < 0)))?(1 - iRec191[i-1]):iRec191[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec191_perm[i]=iRec191_tmp[count+i];
			
			// LOOP 0x3bfa7c0
			// pre processing
			for (int i=0; i<4; i++) iRec196_tmp[i]=iRec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec196[i] = ((int(((fZec279[i] - fZec280[i]) < 0)))?(1 - iRec196[i-1]):iRec196[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec196_perm[i]=iRec196_tmp[count+i];
			
			// LOOP 0x3c04c00
			// pre processing
			for (int i=0; i<4; i++) iRec201_tmp[i]=iRec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec201[i] = ((int(((fZec284[i] - fZec285[i]) < 0)))?(1 - iRec201[i-1]):iRec201[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec201_perm[i]=iRec201_tmp[count+i];
			
			// LOOP 0x3c0f030
			// pre processing
			for (int i=0; i<4; i++) iRec206_tmp[i]=iRec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec206[i] = ((int(((fZec289[i] - fZec290[i]) < 0)))?(1 - iRec206[i-1]):iRec206[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec206_perm[i]=iRec206_tmp[count+i];
			
			// LOOP 0x3c19560
			// pre processing
			for (int i=0; i<4; i++) iRec211_tmp[i]=iRec211_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec211[i] = ((int(((fZec294[i] - fZec295[i]) < 0)))?(1 - iRec211[i-1]):iRec211[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec211_perm[i]=iRec211_tmp[count+i];
			
			// LOOP 0x3c23a50
			// pre processing
			for (int i=0; i<4; i++) iRec216_tmp[i]=iRec216_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec216[i] = ((int(((fZec299[i] - fZec300[i]) < 0)))?(1 - iRec216[i-1]):iRec216[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec216_perm[i]=iRec216_tmp[count+i];
			
			// LOOP 0x3c2df80
			// pre processing
			for (int i=0; i<4; i++) iRec221_tmp[i]=iRec221_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec221[i] = ((int(((fZec304[i] - fZec305[i]) < 0)))?(1 - iRec221[i-1]):iRec221[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec221_perm[i]=iRec221_tmp[count+i];
			
			// LOOP 0x3c35eb0
			// pre processing
			for (int i=0; i<4; i++) iRec225_tmp[i]=iRec225_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec225[i] = ((int(((fZec307[i] - fZec308[i]) < 0)))?(1 - iRec225[i-1]):iRec225[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec225_perm[i]=iRec225_tmp[count+i];
			
			// LOOP 0x3c3dda0
			// pre processing
			for (int i=0; i<4; i++) iRec229_tmp[i]=iRec229_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec229[i] = ((int(((fZec310[i] - fZec311[i]) < 0)))?(1 - iRec229[i-1]):iRec229[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec229_perm[i]=iRec229_tmp[count+i];
			
			// LOOP 0x3c45fd0
			// pre processing
			for (int i=0; i<4; i++) iRec233_tmp[i]=iRec233_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec233[i] = ((int(((fZec313[i] - fZec314[i]) < 0)))?(1 - iRec233[i-1]):iRec233[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec233_perm[i]=iRec233_tmp[count+i];
			
			// LOOP 0x3c4dee0
			// pre processing
			for (int i=0; i<4; i++) iRec237_tmp[i]=iRec237_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec237[i] = ((int(((fZec316[i] - fZec317[i]) < 0)))?(1 - iRec237[i-1]):iRec237[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec237_perm[i]=iRec237_tmp[count+i];
			
			// LOOP 0x3c55e80
			// pre processing
			for (int i=0; i<4; i++) iRec241_tmp[i]=iRec241_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec241[i] = ((int(((fZec319[i] - fZec320[i]) < 0)))?(1 - iRec241[i-1]):iRec241[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec241_perm[i]=iRec241_tmp[count+i];
			
			// SECTION : 24
			// LOOP 0x3abbcf0
			// pre processing
			for (int i=0; i<4; i++) fRec119_tmp[i]=fRec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec119[i] = (fConst7 * ((fRec120[i] - fRec120[i-1]) + fRec119[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec119_perm[i]=fRec119_tmp[count+i];
			
			// LOOP 0x3ac1470
			// pre processing
			for (int i=0; i<4; i++) fRec121_tmp[i]=fRec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec121[i] = (fConst7 * ((fRec122[i] - fRec122[i-1]) + fRec121[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec121_perm[i]=fRec121_tmp[count+i];
			
			// LOOP 0x3ac7810
			// pre processing
			for (int i=0; i<4; i++) fRec123_tmp[i]=fRec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec123[i] = (fConst7 * ((fRec124[i] - fRec124[i-1]) + fRec123[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec123_perm[i]=fRec123_tmp[count+i];
			
			// LOOP 0x3acddd0
			// pre processing
			for (int i=0; i<4; i++) fRec125_tmp[i]=fRec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec125[i] = (fConst7 * ((fRec126[i] - fRec126[i-1]) + fRec125[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec125_perm[i]=fRec125_tmp[count+i];
			
			// LOOP 0x3ad3fe0
			// pre processing
			for (int i=0; i<4; i++) fRec128_tmp[i]=fRec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec128[i] = (fRec128[i-1] + (fConst13 * ((square_polyblep_precalc(fZec94[i], fZec95[i], (0.5f * fYec36[i-2]), fZec101[i]) + (2 * fYec83[i-1])) - fRec128[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec128_perm[i]=fRec128_tmp[count+i];
			
			// LOOP 0x3ada890
			// pre processing
			for (int i=0; i<4; i++) fRec130_tmp[i]=fRec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec130[i] = (fRec130[i-1] + (fConst13 * ((square_polyblep_precalc(fZec107[i], fZec108[i], (0.5f * fYec41[i-2]), fZec114[i]) + (2 * fYec84[i-1])) - fRec130[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec130_perm[i]=fRec130_tmp[count+i];
			
			// LOOP 0x3ae0530
			// pre processing
			for (int i=0; i<4; i++) fRec132_tmp[i]=fRec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec132[i] = (fRec132[i-1] + (fConst13 * ((square_polyblep_precalc(fZec120[i], fZec121[i], (0.5f * fYec46[i-2]), fZec127[i]) + (2 * fYec85[i-1])) - fRec132[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec132_perm[i]=fRec132_tmp[count+i];
			
			// LOOP 0x3ae6480
			// pre processing
			for (int i=0; i<4; i++) fRec134_tmp[i]=fRec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec134[i] = (fRec134[i-1] + (fConst14 * ((square_polyblep_precalc(fZec133[i], fZec134[i], (0.5f * fYec51[i-2]), fZec140[i]) + (2 * fYec86[i-1])) - fRec134[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec134_perm[i]=fRec134_tmp[count+i];
			
			// LOOP 0x3aebe00
			// pre processing
			for (int i=0; i<4; i++) fRec136_tmp[i]=fRec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec136[i] = (fRec136[i-1] + (fConst14 * ((square_polyblep_precalc(fZec146[i], fZec147[i], (0.5f * fYec56[i-2]), fZec153[i]) + (2 * fYec87[i-1])) - fRec136[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec136_perm[i]=fRec136_tmp[count+i];
			
			// LOOP 0x3af2040
			// pre processing
			for (int i=0; i<4; i++) fRec138_tmp[i]=fRec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec138[i] = (fRec138[i-1] + (fConst14 * ((square_polyblep_precalc(fZec159[i], fZec160[i], (0.5f * fYec61[i-2]), fZec166[i]) + (2 * fYec88[i-1])) - fRec138[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec138_perm[i]=fRec138_tmp[count+i];
			
			// LOOP 0x3af85e0
			// pre processing
			for (int i=0; i<4; i++) fRec140_tmp[i]=fRec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec140[i] = (fRec140[i-1] + (fConst14 * ((square_polyblep_precalc(fZec6[i], fZec7[i], (0.5f * fYec1[i-2]), fZec15[i]) + (2 * fYec89[i-1])) - fRec140[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec140_perm[i]=fRec140_tmp[count+i];
			
			// LOOP 0x3afdef0
			// pre processing
			for (int i=0; i<4; i++) fRec142_tmp[i]=fRec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec142[i] = (fRec142[i-1] + (fConst15 * ((square_polyblep_precalc(fZec21[i], fZec22[i], (0.5f * fYec7[i-2]), fZec30[i]) + (2 * fYec90[i-1])) - fRec142[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec142_perm[i]=fRec142_tmp[count+i];
			
			// LOOP 0x3b04b40
			// pre processing
			for (int i=0; i<4; i++) fRec144_tmp[i]=fRec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec144[i] = (fRec144[i-1] + (fConst15 * ((square_polyblep_precalc(fZec36[i], fZec37[i], (0.5f * fYec13[i-2]), fZec45[i]) + (2 * fYec91[i-1])) - fRec144[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec144_perm[i]=fRec144_tmp[count+i];
			
			// LOOP 0x3b0a770
			// pre processing
			for (int i=0; i<4; i++) fRec146_tmp[i]=fRec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec146[i] = (fRec146[i-1] + (fConst15 * ((square_polyblep_precalc(fZec51[i], fZec52[i], (0.5f * fYec19[i-2]), fZec60[i]) + (2 * fYec92[i-1])) - fRec146[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec146_perm[i]=fRec146_tmp[count+i];
			
			// LOOP 0x3b11420
			// pre processing
			for (int i=0; i<4; i++) fRec148_tmp[i]=fRec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec148[i] = (fRec148[i-1] + (fConst15 * ((square_polyblep_precalc(fZec66[i], fZec67[i], (0.5f * fYec25[i-2]), fZec75[i]) + (2 * fYec93[i-1])) - fRec148[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec148_perm[i]=fRec148_tmp[count+i];
			
			// LOOP 0x3b18390
			// pre processing
			for (int i=0; i<4; i++) fRec150_tmp[i]=fRec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec150[i] = (fRec150[i-1] + (fConst16 * ((square_polyblep_precalc(fZec79[i], fZec80[i], (0.5f * fYec30[i-2]), fZec88[i]) + (2 * fYec94[i-1])) - fRec150[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec150_perm[i]=fRec150_tmp[count+i];
			
			// LOOP 0x3b1e650
			// pre processing
			for (int i=0; i<4; i++) fRec152_tmp[i]=fRec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec152[i] = (fRec152[i-1] + (fConst16 * ((square_polyblep_precalc(fZec92[i], fZec93[i], (0.5f * fYec35[i-2]), fZec101[i]) + (2 * fYec95[i-1])) - fRec152[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec152_perm[i]=fRec152_tmp[count+i];
			
			// LOOP 0x3b25960
			// pre processing
			for (int i=0; i<4; i++) fRec154_tmp[i]=fRec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec154[i] = (fRec154[i-1] + (fConst16 * ((square_polyblep_precalc(fZec105[i], fZec106[i], (0.5f * fYec40[i-2]), fZec114[i]) + (2 * fYec96[i-1])) - fRec154[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec154_perm[i]=fRec154_tmp[count+i];
			
			// LOOP 0x3b2bbf0
			// pre processing
			for (int i=0; i<4; i++) fRec156_tmp[i]=fRec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec156[i] = (fRec156[i-1] + (fConst16 * ((square_polyblep_precalc(fZec118[i], fZec119[i], (0.5f * fYec45[i-2]), fZec127[i]) + (2 * fYec97[i-1])) - fRec156[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec156_perm[i]=fRec156_tmp[count+i];
			
			// LOOP 0x3b321e0
			// pre processing
			for (int i=0; i<4; i++) fRec158_tmp[i]=fRec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec158[i] = (fRec158[i-1] + (fConst17 * ((square_polyblep_precalc(fZec131[i], fZec132[i], (0.5f * fYec50[i-2]), fZec140[i]) + (2 * fYec98[i-1])) - fRec158[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec158_perm[i]=fRec158_tmp[count+i];
			
			// LOOP 0x3b37ed0
			// pre processing
			for (int i=0; i<4; i++) fRec160_tmp[i]=fRec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec160[i] = (fRec160[i-1] + (fConst17 * ((square_polyblep_precalc(fZec144[i], fZec145[i], (0.5f * fYec55[i-2]), fZec153[i]) + (2 * fYec99[i-1])) - fRec160[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec160_perm[i]=fRec160_tmp[count+i];
			
			// LOOP 0x3b3e750
			// pre processing
			for (int i=0; i<4; i++) fRec162_tmp[i]=fRec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec162[i] = (fRec162[i-1] + (fConst17 * ((square_polyblep_precalc(fZec157[i], fZec158[i], (0.5f * fYec60[i-2]), fZec166[i]) + (2 * fYec100[i-1])) - fRec162[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec162_perm[i]=fRec162_tmp[count+i];
			
			// LOOP 0x3b417e0
			// pre processing
			for (int i=0; i<4; i++) fVec48_tmp[i]=fVec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec48[i] = fSlow68;
			}
			// post processing
			for (int i=0; i<4; i++) fVec48_perm[i]=fVec48_tmp[count+i];
			
			// LOOP 0x3b455c0
			// pre processing
			for (int i=0; i<4; i++) fRec164_tmp[i]=fRec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec164[i] = (fRec164[i-1] + (fConst17 * ((square_polyblep_precalc(fZec4[i], fZec5[i], (0.5f * fYec0[i-2]), fZec15[i]) + (2 * fYec101[i-1])) - fRec164[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec164_perm[i]=fRec164_tmp[count+i];
			
			// LOOP 0x3b48500
			// pre processing
			for (int i=0; i<4; i++) fVec49_tmp[i]=fVec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec49[i] = fSlow69;
			}
			// post processing
			for (int i=0; i<4; i++) fVec49_perm[i]=fVec49_tmp[count+i];
			
			// LOOP 0x3b4b2e0
			// pre processing
			for (int i=0; i<4; i++) fRec166_tmp[i]=fRec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec166[i] = (fRec166[i-1] + (fConst18 * ((square_polyblep_precalc(fZec19[i], fZec20[i], (0.5f * fYec6[i-2]), fZec30[i]) + (2 * fYec102[i-1])) - fRec166[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec166_perm[i]=fRec166_tmp[count+i];
			
			// LOOP 0x3b4e590
			// pre processing
			for (int i=0; i<4; i++) fVec50_tmp[i]=fVec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec50[i] = fSlow70;
			}
			// post processing
			for (int i=0; i<4; i++) fVec50_perm[i]=fVec50_tmp[count+i];
			
			// LOOP 0x3b527b0
			// pre processing
			for (int i=0; i<4; i++) fRec168_tmp[i]=fRec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec168[i] = (fRec168[i-1] + (fConst18 * ((square_polyblep_precalc(fZec34[i], fZec35[i], (0.5f * fYec12[i-2]), fZec45[i]) + (2 * fYec103[i-1])) - fRec168[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec168_perm[i]=fRec168_tmp[count+i];
			
			// LOOP 0x3b55720
			// pre processing
			for (int i=0; i<4; i++) fVec51_tmp[i]=fVec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec51[i] = fSlow71;
			}
			// post processing
			for (int i=0; i<4; i++) fVec51_perm[i]=fVec51_tmp[count+i];
			
			// LOOP 0x3b58890
			// pre processing
			for (int i=0; i<4; i++) fRec170_tmp[i]=fRec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec170[i] = (fRec170[i-1] + (fConst18 * ((square_polyblep_precalc(fZec49[i], fZec50[i], (0.5f * fYec18[i-2]), fZec60[i]) + (2 * fYec104[i-1])) - fRec170[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec170_perm[i]=fRec170_tmp[count+i];
			
			// LOOP 0x3b5b800
			// pre processing
			for (int i=0; i<4; i++) fVec52_tmp[i]=fVec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec52[i] = fSlow72;
			}
			// post processing
			for (int i=0; i<4; i++) fVec52_perm[i]=fVec52_tmp[count+i];
			
			// LOOP 0x3b5fdc0
			// pre processing
			for (int i=0; i<4; i++) fRec172_tmp[i]=fRec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec172[i] = (fRec172[i-1] + (fConst18 * ((square_polyblep_precalc(fZec64[i], fZec65[i], (0.5f * fYec24[i-2]), fZec75[i]) + (2 * fYec105[i-1])) - fRec172[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec172_perm[i]=fRec172_tmp[count+i];
			
			// LOOP 0x3b62dd0
			// pre processing
			for (int i=0; i<4; i++) fVec53_tmp[i]=fVec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec53[i] = fSlow73;
			}
			// post processing
			for (int i=0; i<4; i++) fVec53_perm[i]=fVec53_tmp[count+i];
			
			// LOOP 0x3b67780
			// pre processing
			for (int i=0; i<4; i++) fYec107_tmp[i]=fYec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec107[i] = (fZec88[i] + fYec106[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec107_perm[i]=fYec107_tmp[count+i];
			
			// LOOP 0x3b69d10
			// pre processing
			for (int i=0; i<4; i++) fVec54_tmp[i]=fVec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec54[i] = fSlow74;
			}
			// post processing
			for (int i=0; i<4; i++) fVec54_perm[i]=fVec54_tmp[count+i];
			
			// LOOP 0x3b6d260
			// pre processing
			for (int i=0; i<4; i++) fYec109_tmp[i]=fYec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec109[i] = (fZec101[i] + fYec108[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec109_perm[i]=fYec109_tmp[count+i];
			
			// LOOP 0x3b6f6f0
			// pre processing
			for (int i=0; i<4; i++) fVec55_tmp[i]=fVec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec55[i] = fSlow75;
			}
			// post processing
			for (int i=0; i<4; i++) fVec55_perm[i]=fVec55_tmp[count+i];
			
			// LOOP 0x3b744e0
			// pre processing
			for (int i=0; i<4; i++) fYec111_tmp[i]=fYec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec111[i] = (fZec114[i] + fYec110[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec111_perm[i]=fYec111_tmp[count+i];
			
			// LOOP 0x3b76970
			// pre processing
			for (int i=0; i<4; i++) fVec56_tmp[i]=fVec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec56[i] = fSlow76;
			}
			// post processing
			for (int i=0; i<4; i++) fVec56_perm[i]=fVec56_tmp[count+i];
			
			// LOOP 0x3b7a260
			// pre processing
			for (int i=0; i<4; i++) fYec113_tmp[i]=fYec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec113[i] = (fZec127[i] + fYec112[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec113_perm[i]=fYec113_tmp[count+i];
			
			// LOOP 0x3b7c6f0
			// pre processing
			for (int i=0; i<4; i++) fVec57_tmp[i]=fVec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec57[i] = fSlow77;
			}
			// post processing
			for (int i=0; i<4; i++) fVec57_perm[i]=fVec57_tmp[count+i];
			
			// LOOP 0x3b80210
			// pre processing
			for (int i=0; i<4; i++) fYec115_tmp[i]=fYec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec115[i] = (fZec140[i] + fYec114[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec115_perm[i]=fYec115_tmp[count+i];
			
			// LOOP 0x3b82860
			// pre processing
			for (int i=0; i<4; i++) fVec58_tmp[i]=fVec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec58[i] = fSlow78;
			}
			// post processing
			for (int i=0; i<4; i++) fVec58_perm[i]=fVec58_tmp[count+i];
			
			// LOOP 0x3b85610
			// pre processing
			for (int i=0; i<4; i++) fYec117_tmp[i]=fYec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec117[i] = (fZec153[i] + fYec116[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec117_perm[i]=fYec117_tmp[count+i];
			
			// LOOP 0x3b87aa0
			// pre processing
			for (int i=0; i<4; i++) fVec59_tmp[i]=fVec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec59[i] = fSlow79;
			}
			// post processing
			for (int i=0; i<4; i++) fVec59_perm[i]=fVec59_tmp[count+i];
			
			// LOOP 0x3b8bbc0
			// pre processing
			for (int i=0; i<4; i++) fYec119_tmp[i]=fYec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec119[i] = (fZec166[i] + fYec118[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec119_perm[i]=fYec119_tmp[count+i];
			
			// LOOP 0x3b8e050
			// pre processing
			for (int i=0; i<4; i++) fVec60_tmp[i]=fVec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec60[i] = fSlow80;
			}
			// post processing
			for (int i=0; i<4; i++) fVec60_perm[i]=fVec60_tmp[count+i];
			
			// LOOP 0x3b92610
			// pre processing
			for (int i=0; i<4; i++) fYec121_tmp[i]=fYec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec121[i] = (fZec15[i] + fYec120[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec121_perm[i]=fYec121_tmp[count+i];
			
			// LOOP 0x3b956c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec219[i] = (fRec117[i] + (fRec115[i] + (fRec113[i] + (fRec111[i] + fZec218[i]))));
			}
			
			// LOOP 0x3bb3b50
			// pre processing
			for (int i=0; i<4; i++) fYec124_tmp[i]=fYec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec124[i] = (fZec30[i] + fYec123[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec124_perm[i]=fYec124_tmp[count+i];
			
			// LOOP 0x3bbb410
			// pre processing
			for (int i=0; i<4; i++) fYec126_tmp[i]=fYec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec126[i] = (fZec45[i] + fYec125[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec126_perm[i]=fYec126_tmp[count+i];
			
			// LOOP 0x3bbe8e0
			// pre processing
			for (int i=0; i<4; i++) fYec128_tmp[i]=fYec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec128[i] = (fZec60[i] + fYec127[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec128_perm[i]=fYec128_tmp[count+i];
			
			// LOOP 0x3bc1df0
			// pre processing
			for (int i=0; i<4; i++) fYec130_tmp[i]=fYec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec130[i] = (fZec75[i] + fYec129[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec130_perm[i]=fYec130_tmp[count+i];
			
			// LOOP 0x3beb520
			// pre processing
			for (int i=0; i<4; i++) fYec134_tmp[i]=fYec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec134[i] = (iRec191[i] + fZec274[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec134_perm[i]=fYec134_tmp[count+i];
			
			// LOOP 0x3bf5fa0
			// pre processing
			for (int i=0; i<4; i++) fYec138_tmp[i]=fYec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec138[i] = (iRec196[i] + fZec279[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec138_perm[i]=fYec138_tmp[count+i];
			
			// LOOP 0x3c003d0
			// pre processing
			for (int i=0; i<4; i++) fYec142_tmp[i]=fYec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec142[i] = (iRec201[i] + fZec284[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec142_perm[i]=fYec142_tmp[count+i];
			
			// LOOP 0x3c0a810
			// pre processing
			for (int i=0; i<4; i++) fYec146_tmp[i]=fYec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec146[i] = (iRec206[i] + fZec289[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec146_perm[i]=fYec146_tmp[count+i];
			
			// LOOP 0x3c14d40
			// pre processing
			for (int i=0; i<4; i++) fYec150_tmp[i]=fYec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec150[i] = (iRec211[i] + fZec294[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec150_perm[i]=fYec150_tmp[count+i];
			
			// LOOP 0x3c1f230
			// pre processing
			for (int i=0; i<4; i++) fYec154_tmp[i]=fYec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec154[i] = (iRec216[i] + fZec299[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec154_perm[i]=fYec154_tmp[count+i];
			
			// LOOP 0x3c29760
			// pre processing
			for (int i=0; i<4; i++) fYec158_tmp[i]=fYec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec158[i] = (iRec221[i] + fZec304[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec158_perm[i]=fYec158_tmp[count+i];
			
			// LOOP 0x3c33cb0
			// pre processing
			for (int i=0; i<4; i++) fYec161_tmp[i]=fYec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec161[i] = (iRec225[i] + fZec307[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec161_perm[i]=fYec161_tmp[count+i];
			
			// LOOP 0x3c3bba0
			// pre processing
			for (int i=0; i<4; i++) fYec164_tmp[i]=fYec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec164[i] = (iRec229[i] + fZec310[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec164_perm[i]=fYec164_tmp[count+i];
			
			// LOOP 0x3c43e10
			// pre processing
			for (int i=0; i<4; i++) fYec167_tmp[i]=fYec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec167[i] = (iRec233[i] + fZec313[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec167_perm[i]=fYec167_tmp[count+i];
			
			// LOOP 0x3c4bce0
			// pre processing
			for (int i=0; i<4; i++) fYec170_tmp[i]=fYec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec170[i] = (iRec237[i] + fZec316[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec170_perm[i]=fYec170_tmp[count+i];
			
			// LOOP 0x3c53c80
			// pre processing
			for (int i=0; i<4; i++) fYec173_tmp[i]=fYec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec173[i] = (iRec241[i] + fZec319[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec173_perm[i]=fYec173_tmp[count+i];
			
			// SECTION : 25
			// LOOP 0x3984940
			// pre processing
			for (int i=0; i<4; i++) fVec0_tmp[i]=fVec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec0[i] = fSlow2;
			}
			// post processing
			for (int i=0; i<4; i++) fVec0_perm[i]=fVec0_tmp[count+i];
			
			// LOOP 0x399d6a0
			// pre processing
			for (int i=0; i<4; i++) fVec1_tmp[i]=fVec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec1[i] = fSlow8;
			}
			// post processing
			for (int i=0; i<4; i++) fVec1_perm[i]=fVec1_tmp[count+i];
			
			// LOOP 0x39b16a0
			// pre processing
			for (int i=0; i<4; i++) fVec2_tmp[i]=fVec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec2[i] = fSlow10;
			}
			// post processing
			for (int i=0; i<4; i++) fVec2_perm[i]=fVec2_tmp[count+i];
			
			// LOOP 0x39c55f0
			// pre processing
			for (int i=0; i<4; i++) fVec3_tmp[i]=fVec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec3[i] = fSlow12;
			}
			// post processing
			for (int i=0; i<4; i++) fVec3_perm[i]=fVec3_tmp[count+i];
			
			// LOOP 0x39d9540
			// pre processing
			for (int i=0; i<4; i++) fVec4_tmp[i]=fVec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec4[i] = fSlow14;
			}
			// post processing
			for (int i=0; i<4; i++) fVec4_perm[i]=fVec4_tmp[count+i];
			
			// LOOP 0x39ed650
			// pre processing
			for (int i=0; i<4; i++) fVec5_tmp[i]=fVec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec5[i] = fSlow16;
			}
			// post processing
			for (int i=0; i<4; i++) fVec5_perm[i]=fVec5_tmp[count+i];
			
			// LOOP 0x39ffb10
			// pre processing
			for (int i=0; i<4; i++) fVec6_tmp[i]=fVec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec6[i] = fSlow18;
			}
			// post processing
			for (int i=0; i<4; i++) fVec6_perm[i]=fVec6_tmp[count+i];
			
			// LOOP 0x3a11520
			// pre processing
			for (int i=0; i<4; i++) fVec7_tmp[i]=fVec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec7[i] = fSlow20;
			}
			// post processing
			for (int i=0; i<4; i++) fVec7_perm[i]=fVec7_tmp[count+i];
			
			// LOOP 0x3a233a0
			// pre processing
			for (int i=0; i<4; i++) fVec8_tmp[i]=fVec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec8[i] = fSlow22;
			}
			// post processing
			for (int i=0; i<4; i++) fVec8_perm[i]=fVec8_tmp[count+i];
			
			// LOOP 0x3a34f20
			// pre processing
			for (int i=0; i<4; i++) fVec9_tmp[i]=fVec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec9[i] = fSlow24;
			}
			// post processing
			for (int i=0; i<4; i++) fVec9_perm[i]=fVec9_tmp[count+i];
			
			// LOOP 0x3a46f70
			// pre processing
			for (int i=0; i<4; i++) fVec10_tmp[i]=fVec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec10[i] = fSlow26;
			}
			// post processing
			for (int i=0; i<4; i++) fVec10_perm[i]=fVec10_tmp[count+i];
			
			// LOOP 0x3a589f0
			// pre processing
			for (int i=0; i<4; i++) fVec11_tmp[i]=fVec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec11[i] = fSlow28;
			}
			// post processing
			for (int i=0; i<4; i++) fVec11_perm[i]=fVec11_tmp[count+i];
			
			// LOOP 0x3a6a8c0
			// pre processing
			for (int i=0; i<4; i++) fVec12_tmp[i]=fVec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec12[i] = fSlow30;
			}
			// post processing
			for (int i=0; i<4; i++) fVec12_perm[i]=fVec12_tmp[count+i];
			
			// LOOP 0x3a6fd10
			// pre processing
			for (int i=0; i<4; i++) fVec13_tmp[i]=fVec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec13[i] = fSlow31;
			}
			// post processing
			for (int i=0; i<4; i++) fVec13_perm[i]=fVec13_tmp[count+i];
			
			// LOOP 0x3a75180
			// pre processing
			for (int i=0; i<4; i++) fVec14_tmp[i]=fVec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec14[i] = fSlow32;
			}
			// post processing
			for (int i=0; i<4; i++) fVec14_perm[i]=fVec14_tmp[count+i];
			
			// LOOP 0x3a7a940
			// pre processing
			for (int i=0; i<4; i++) fVec15_tmp[i]=fVec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec15[i] = fSlow33;
			}
			// post processing
			for (int i=0; i<4; i++) fVec15_perm[i]=fVec15_tmp[count+i];
			
			// LOOP 0x3a7fc30
			// pre processing
			for (int i=0; i<4; i++) fVec16_tmp[i]=fVec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec16[i] = fSlow34;
			}
			// post processing
			for (int i=0; i<4; i++) fVec16_perm[i]=fVec16_tmp[count+i];
			
			// LOOP 0x3a86b20
			// pre processing
			for (int i=0; i<4; i++) fVec17_tmp[i]=fVec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec17[i] = fSlow37;
			}
			// post processing
			for (int i=0; i<4; i++) fVec17_perm[i]=fVec17_tmp[count+i];
			
			// LOOP 0x3a8cb20
			// pre processing
			for (int i=0; i<4; i++) fVec18_tmp[i]=fVec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec18[i] = fSlow38;
			}
			// post processing
			for (int i=0; i<4; i++) fVec18_perm[i]=fVec18_tmp[count+i];
			
			// LOOP 0x3a92040
			// pre processing
			for (int i=0; i<4; i++) fVec19_tmp[i]=fVec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec19[i] = fSlow39;
			}
			// post processing
			for (int i=0; i<4; i++) fVec19_perm[i]=fVec19_tmp[count+i];
			
			// LOOP 0x3a97f30
			// pre processing
			for (int i=0; i<4; i++) fVec20_tmp[i]=fVec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec20[i] = fSlow40;
			}
			// post processing
			for (int i=0; i<4; i++) fVec20_perm[i]=fVec20_tmp[count+i];
			
			// LOOP 0x3a9d650
			// pre processing
			for (int i=0; i<4; i++) fVec21_tmp[i]=fVec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec21[i] = fSlow41;
			}
			// post processing
			for (int i=0; i<4; i++) fVec21_perm[i]=fVec21_tmp[count+i];
			
			// LOOP 0x3aa2c70
			// pre processing
			for (int i=0; i<4; i++) fVec22_tmp[i]=fVec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec22[i] = fSlow42;
			}
			// post processing
			for (int i=0; i<4; i++) fVec22_perm[i]=fVec22_tmp[count+i];
			
			// LOOP 0x3aa7f40
			// pre processing
			for (int i=0; i<4; i++) fVec23_tmp[i]=fVec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec23[i] = fSlow43;
			}
			// post processing
			for (int i=0; i<4; i++) fVec23_perm[i]=fVec23_tmp[count+i];
			
			// LOOP 0x3aada50
			// pre processing
			for (int i=0; i<4; i++) fVec24_tmp[i]=fVec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec24[i] = fSlow44;
			}
			// post processing
			for (int i=0; i<4; i++) fVec24_perm[i]=fVec24_tmp[count+i];
			
			// LOOP 0x3ab37e0
			// pre processing
			for (int i=0; i<4; i++) fVec25_tmp[i]=fVec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec25[i] = fSlow45;
			}
			// post processing
			for (int i=0; i<4; i++) fVec25_perm[i]=fVec25_tmp[count+i];
			
			// LOOP 0x3ab9060
			// pre processing
			for (int i=0; i<4; i++) fVec26_tmp[i]=fVec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec26[i] = fSlow46;
			}
			// post processing
			for (int i=0; i<4; i++) fVec26_perm[i]=fVec26_tmp[count+i];
			
			// LOOP 0x3abf140
			// pre processing
			for (int i=0; i<4; i++) fVec27_tmp[i]=fVec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec27[i] = fSlow47;
			}
			// post processing
			for (int i=0; i<4; i++) fVec27_perm[i]=fVec27_tmp[count+i];
			
			// LOOP 0x3ac48c0
			// pre processing
			for (int i=0; i<4; i++) fVec28_tmp[i]=fVec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec28[i] = fSlow48;
			}
			// post processing
			for (int i=0; i<4; i++) fVec28_perm[i]=fVec28_tmp[count+i];
			
			// LOOP 0x3acac60
			// pre processing
			for (int i=0; i<4; i++) fVec29_tmp[i]=fVec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec29[i] = fSlow49;
			}
			// post processing
			for (int i=0; i<4; i++) fVec29_perm[i]=fVec29_tmp[count+i];
			
			// LOOP 0x3ad1530
			// pre processing
			for (int i=0; i<4; i++) fVec30_tmp[i]=fVec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec30[i] = fSlow50;
			}
			// post processing
			for (int i=0; i<4; i++) fVec30_perm[i]=fVec30_tmp[count+i];
			
			// LOOP 0x3ad3af0
			// pre processing
			for (int i=0; i<4; i++) fRec127_tmp[i]=fRec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec127[i] = (fConst7 * ((fRec128[i] - fRec128[i-1]) + fRec127[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec127_perm[i]=fRec127_tmp[count+i];
			
			// LOOP 0x3ad6f50
			// pre processing
			for (int i=0; i<4; i++) fVec31_tmp[i]=fVec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec31[i] = fSlow51;
			}
			// post processing
			for (int i=0; i<4; i++) fVec31_perm[i]=fVec31_tmp[count+i];
			
			// LOOP 0x3ada3a0
			// pre processing
			for (int i=0; i<4; i++) fRec129_tmp[i]=fRec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec129[i] = (fConst7 * ((fRec130[i] - fRec130[i-1]) + fRec129[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec129_perm[i]=fRec129_tmp[count+i];
			
			// LOOP 0x3add830
			// pre processing
			for (int i=0; i<4; i++) fVec32_tmp[i]=fVec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec32[i] = fSlow52;
			}
			// post processing
			for (int i=0; i<4; i++) fVec32_perm[i]=fVec32_tmp[count+i];
			
			// LOOP 0x3ae0040
			// pre processing
			for (int i=0; i<4; i++) fRec131_tmp[i]=fRec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec131[i] = (fConst7 * ((fRec132[i] - fRec132[i-1]) + fRec131[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec131_perm[i]=fRec131_tmp[count+i];
			
			// LOOP 0x3ae34c0
			// pre processing
			for (int i=0; i<4; i++) fVec33_tmp[i]=fVec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec33[i] = fSlow53;
			}
			// post processing
			for (int i=0; i<4; i++) fVec33_perm[i]=fVec33_tmp[count+i];
			
			// LOOP 0x3ae5f90
			// pre processing
			for (int i=0; i<4; i++) fRec133_tmp[i]=fRec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec133[i] = (fConst7 * ((fRec134[i] - fRec134[i-1]) + fRec133[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec133_perm[i]=fRec133_tmp[count+i];
			
			// LOOP 0x3ae9760
			// pre processing
			for (int i=0; i<4; i++) fVec34_tmp[i]=fVec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec34[i] = fSlow54;
			}
			// post processing
			for (int i=0; i<4; i++) fVec34_perm[i]=fVec34_tmp[count+i];
			
			// LOOP 0x3aeb910
			// pre processing
			for (int i=0; i<4; i++) fRec135_tmp[i]=fRec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec135[i] = (fConst7 * ((fRec136[i] - fRec136[i-1]) + fRec135[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec135_perm[i]=fRec135_tmp[count+i];
			
			// LOOP 0x3aeed90
			// pre processing
			for (int i=0; i<4; i++) fVec35_tmp[i]=fVec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec35[i] = fSlow55;
			}
			// post processing
			for (int i=0; i<4; i++) fVec35_perm[i]=fVec35_tmp[count+i];
			
			// LOOP 0x3af1b50
			// pre processing
			for (int i=0; i<4; i++) fRec137_tmp[i]=fRec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec137[i] = (fConst7 * ((fRec138[i] - fRec138[i-1]) + fRec137[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec137_perm[i]=fRec137_tmp[count+i];
			
			// LOOP 0x3af4fd0
			// pre processing
			for (int i=0; i<4; i++) fVec36_tmp[i]=fVec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec36[i] = fSlow56;
			}
			// post processing
			for (int i=0; i<4; i++) fVec36_perm[i]=fVec36_tmp[count+i];
			
			// LOOP 0x3af80f0
			// pre processing
			for (int i=0; i<4; i++) fRec139_tmp[i]=fRec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec139[i] = (fConst7 * ((fRec140[i] - fRec140[i-1]) + fRec139[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec139_perm[i]=fRec139_tmp[count+i];
			
			// LOOP 0x3afb520
			// pre processing
			for (int i=0; i<4; i++) fVec37_tmp[i]=fVec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec37[i] = fSlow57;
			}
			// post processing
			for (int i=0; i<4; i++) fVec37_perm[i]=fVec37_tmp[count+i];
			
			// LOOP 0x3afda00
			// pre processing
			for (int i=0; i<4; i++) fRec141_tmp[i]=fRec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec141[i] = (fConst7 * ((fRec142[i] - fRec142[i-1]) + fRec141[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec141_perm[i]=fRec141_tmp[count+i];
			
			// LOOP 0x3b01190
			// pre processing
			for (int i=0; i<4; i++) fVec38_tmp[i]=fVec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec38[i] = fSlow58;
			}
			// post processing
			for (int i=0; i<4; i++) fVec38_perm[i]=fVec38_tmp[count+i];
			
			// LOOP 0x3b04650
			// pre processing
			for (int i=0; i<4; i++) fRec143_tmp[i]=fRec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec143[i] = (fConst7 * ((fRec144[i] - fRec144[i-1]) + fRec143[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec143_perm[i]=fRec143_tmp[count+i];
			
			// LOOP 0x3b07aa0
			// pre processing
			for (int i=0; i<4; i++) fVec39_tmp[i]=fVec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec39[i] = fSlow59;
			}
			// post processing
			for (int i=0; i<4; i++) fVec39_perm[i]=fVec39_tmp[count+i];
			
			// LOOP 0x3b0a280
			// pre processing
			for (int i=0; i<4; i++) fRec145_tmp[i]=fRec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec145[i] = (fConst7 * ((fRec146[i] - fRec146[i-1]) + fRec145[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec145_perm[i]=fRec145_tmp[count+i];
			
			// LOOP 0x3b0d6d0
			// pre processing
			for (int i=0; i<4; i++) fVec40_tmp[i]=fVec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec40[i] = fSlow60;
			}
			// post processing
			for (int i=0; i<4; i++) fVec40_perm[i]=fVec40_tmp[count+i];
			
			// LOOP 0x3b10f30
			// pre processing
			for (int i=0; i<4; i++) fRec147_tmp[i]=fRec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec147[i] = (fConst7 * ((fRec148[i] - fRec148[i-1]) + fRec147[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec147_perm[i]=fRec147_tmp[count+i];
			
			// LOOP 0x3b14380
			// pre processing
			for (int i=0; i<4; i++) fVec41_tmp[i]=fVec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec41[i] = fSlow61;
			}
			// post processing
			for (int i=0; i<4; i++) fVec41_perm[i]=fVec41_tmp[count+i];
			
			// LOOP 0x3b17ea0
			// pre processing
			for (int i=0; i<4; i++) fRec149_tmp[i]=fRec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec149[i] = (fConst7 * ((fRec150[i] - fRec150[i-1]) + fRec149[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec149_perm[i]=fRec149_tmp[count+i];
			
			// LOOP 0x3b1b630
			// pre processing
			for (int i=0; i<4; i++) fVec42_tmp[i]=fVec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec42[i] = fSlow62;
			}
			// post processing
			for (int i=0; i<4; i++) fVec42_perm[i]=fVec42_tmp[count+i];
			
			// LOOP 0x3b1e160
			// pre processing
			for (int i=0; i<4; i++) fRec151_tmp[i]=fRec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec151[i] = (fConst7 * ((fRec152[i] - fRec152[i-1]) + fRec151[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec151_perm[i]=fRec151_tmp[count+i];
			
			// LOOP 0x3b215c0
			// pre processing
			for (int i=0; i<4; i++) fVec43_tmp[i]=fVec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec43[i] = fSlow63;
			}
			// post processing
			for (int i=0; i<4; i++) fVec43_perm[i]=fVec43_tmp[count+i];
			
			// LOOP 0x3b25470
			// pre processing
			for (int i=0; i<4; i++) fRec153_tmp[i]=fRec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec153[i] = (fConst7 * ((fRec154[i] - fRec154[i-1]) + fRec153[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec153_perm[i]=fRec153_tmp[count+i];
			
			// LOOP 0x3b288f0
			// pre processing
			for (int i=0; i<4; i++) fVec44_tmp[i]=fVec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec44[i] = fSlow64;
			}
			// post processing
			for (int i=0; i<4; i++) fVec44_perm[i]=fVec44_tmp[count+i];
			
			// LOOP 0x3b2b700
			// pre processing
			for (int i=0; i<4; i++) fRec155_tmp[i]=fRec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec155[i] = (fConst7 * ((fRec156[i] - fRec156[i-1]) + fRec155[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec155_perm[i]=fRec155_tmp[count+i];
			
			// LOOP 0x3b2eb80
			// pre processing
			for (int i=0; i<4; i++) fVec45_tmp[i]=fVec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec45[i] = fSlow65;
			}
			// post processing
			for (int i=0; i<4; i++) fVec45_perm[i]=fVec45_tmp[count+i];
			
			// LOOP 0x3b31cf0
			// pre processing
			for (int i=0; i<4; i++) fRec157_tmp[i]=fRec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec157[i] = (fConst7 * ((fRec158[i] - fRec158[i-1]) + fRec157[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec157_perm[i]=fRec157_tmp[count+i];
			
			// LOOP 0x3b354b0
			// pre processing
			for (int i=0; i<4; i++) fVec46_tmp[i]=fVec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec46[i] = fSlow66;
			}
			// post processing
			for (int i=0; i<4; i++) fVec46_perm[i]=fVec46_tmp[count+i];
			
			// LOOP 0x3b379e0
			// pre processing
			for (int i=0; i<4; i++) fRec159_tmp[i]=fRec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec159[i] = (fConst7 * ((fRec160[i] - fRec160[i-1]) + fRec159[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec159_perm[i]=fRec159_tmp[count+i];
			
			// LOOP 0x3b3ae60
			// pre processing
			for (int i=0; i<4; i++) fVec47_tmp[i]=fVec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec47[i] = fSlow67;
			}
			// post processing
			for (int i=0; i<4; i++) fVec47_perm[i]=fVec47_tmp[count+i];
			
			// LOOP 0x3b3e230
			// pre processing
			for (int i=0; i<4; i++) fRec161_tmp[i]=fRec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec161[i] = (fConst7 * ((fRec162[i] - fRec162[i-1]) + fRec161[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec161_perm[i]=fRec161_tmp[count+i];
			
			// LOOP 0x3b416d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec203[i] = (fSlow68 + (fVec48[i-3] + (fVec48[i-1] + fVec48[i-2])));
			}
			
			// LOOP 0x3b450d0
			// pre processing
			for (int i=0; i<4; i++) fRec163_tmp[i]=fRec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec163[i] = (fConst7 * ((fRec164[i] - fRec164[i-1]) + fRec163[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec163_perm[i]=fRec163_tmp[count+i];
			
			// LOOP 0x3b483f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec204[i] = (fSlow69 + (fVec49[i-3] + (fVec49[i-1] + fVec49[i-2])));
			}
			
			// LOOP 0x3b4adf0
			// pre processing
			for (int i=0; i<4; i++) fRec165_tmp[i]=fRec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec165[i] = (fConst7 * ((fRec166[i] - fRec166[i-1]) + fRec165[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec165_perm[i]=fRec165_tmp[count+i];
			
			// LOOP 0x3b4e480
			// exec code
			for (int i=0; i<count; i++) {
				fZec205[i] = (fSlow70 + (fVec50[i-3] + (fVec50[i-1] + fVec50[i-2])));
			}
			
			// LOOP 0x3b522c0
			// pre processing
			for (int i=0; i<4; i++) fRec167_tmp[i]=fRec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec167[i] = (fConst7 * ((fRec168[i] - fRec168[i-1]) + fRec167[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec167_perm[i]=fRec167_tmp[count+i];
			
			// LOOP 0x3b55610
			// exec code
			for (int i=0; i<count; i++) {
				fZec206[i] = (fSlow71 + (fVec51[i-3] + (fVec51[i-1] + fVec51[i-2])));
			}
			
			// LOOP 0x3b583a0
			// pre processing
			for (int i=0; i<4; i++) fRec169_tmp[i]=fRec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec169[i] = (fConst7 * ((fRec170[i] - fRec170[i-1]) + fRec169[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec169_perm[i]=fRec169_tmp[count+i];
			
			// LOOP 0x3b5b6f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec207[i] = (fSlow72 + (fVec52[i-3] + (fVec52[i-1] + fVec52[i-2])));
			}
			
			// LOOP 0x3b5f8d0
			// pre processing
			for (int i=0; i<4; i++) fRec171_tmp[i]=fRec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec171[i] = (fConst7 * ((fRec172[i] - fRec172[i-1]) + fRec171[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec171_perm[i]=fRec171_tmp[count+i];
			
			// LOOP 0x3b62cc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec208[i] = (fSlow73 + (fVec53[i-3] + (fVec53[i-1] + fVec53[i-2])));
			}
			
			// LOOP 0x3b67290
			// pre processing
			for (int i=0; i<4; i++) fRec173_tmp[i]=fRec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec173[i] = (fConst7 * (((1.95f * fYec107[i]) - (1.95f * fYec107[i-1])) + fRec173[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec173_perm[i]=fRec173_tmp[count+i];
			
			// LOOP 0x3b69c00
			// exec code
			for (int i=0; i<count; i++) {
				fZec209[i] = (fSlow74 + (fVec54[i-3] + (fVec54[i-1] + fVec54[i-2])));
			}
			
			// LOOP 0x3b6cd70
			// pre processing
			for (int i=0; i<4; i++) fRec174_tmp[i]=fRec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec174[i] = (fConst7 * (((1.95f * fYec109[i]) - (1.95f * fYec109[i-1])) + fRec174[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec174_perm[i]=fRec174_tmp[count+i];
			
			// LOOP 0x3b6f5e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec210[i] = (fSlow75 + (fVec55[i-3] + (fVec55[i-1] + fVec55[i-2])));
			}
			
			// LOOP 0x3b73ff0
			// pre processing
			for (int i=0; i<4; i++) fRec175_tmp[i]=fRec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec175[i] = (fConst7 * (((1.95f * fYec111[i]) - (1.95f * fYec111[i-1])) + fRec175[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec175_perm[i]=fRec175_tmp[count+i];
			
			// LOOP 0x3b76860
			// exec code
			for (int i=0; i<count; i++) {
				fZec211[i] = (fSlow76 + (fVec56[i-3] + (fVec56[i-1] + fVec56[i-2])));
			}
			
			// LOOP 0x3b79d70
			// pre processing
			for (int i=0; i<4; i++) fRec176_tmp[i]=fRec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec176[i] = (fConst7 * (((1.95f * fYec113[i]) - (1.95f * fYec113[i-1])) + fRec176[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec176_perm[i]=fRec176_tmp[count+i];
			
			// LOOP 0x3b7c5e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec212[i] = (fSlow77 + (fVec57[i-3] + (fVec57[i-1] + fVec57[i-2])));
			}
			
			// LOOP 0x3b7f920
			// pre processing
			for (int i=0; i<4; i++) fRec177_tmp[i]=fRec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec177[i] = (fConst7 * (((1.95f * fYec115[i]) - (1.95f * fYec115[i-1])) + fRec177[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec177_perm[i]=fRec177_tmp[count+i];
			
			// LOOP 0x3b82750
			// exec code
			for (int i=0; i<count; i++) {
				fZec213[i] = (fSlow78 + (fVec58[i-3] + (fVec58[i-1] + fVec58[i-2])));
			}
			
			// LOOP 0x3b85120
			// pre processing
			for (int i=0; i<4; i++) fRec178_tmp[i]=fRec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec178[i] = (fConst7 * (((1.95f * fYec117[i]) - (1.95f * fYec117[i-1])) + fRec178[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec178_perm[i]=fRec178_tmp[count+i];
			
			// LOOP 0x3b87990
			// exec code
			for (int i=0; i<count; i++) {
				fZec214[i] = (fSlow79 + (fVec59[i-3] + (fVec59[i-1] + fVec59[i-2])));
			}
			
			// LOOP 0x3b8b6d0
			// pre processing
			for (int i=0; i<4; i++) fRec179_tmp[i]=fRec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec179[i] = (fConst7 * (((1.95f * fYec119[i]) - (1.95f * fYec119[i-1])) + fRec179[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec179_perm[i]=fRec179_tmp[count+i];
			
			// LOOP 0x3b8df40
			// exec code
			for (int i=0; i<count; i++) {
				fZec215[i] = (fSlow80 + (fVec60[i-3] + (fVec60[i-1] + fVec60[i-2])));
			}
			
			// LOOP 0x3b92120
			// pre processing
			for (int i=0; i<4; i++) fRec180_tmp[i]=fRec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec180[i] = (fConst7 * (((1.95f * fYec121[i]) - (1.95f * fYec121[i-1])) + fRec180[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec180_perm[i]=fRec180_tmp[count+i];
			
			// LOOP 0x3b95580
			// exec code
			for (int i=0; i<count; i++) {
				fZec220[i] = (fRec125[i] + (fRec123[i] + (fRec121[i] + (fRec119[i] + fZec219[i]))));
			}
			
			// LOOP 0x3bb2d00
			// pre processing
			for (int i=0; i<4; i++) fRec182_tmp[i]=fRec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec182[i] = (fConst7 * (((1.95f * fYec124[i]) - (1.95f * fYec124[i-1])) + fRec182[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec182_perm[i]=fRec182_tmp[count+i];
			
			// LOOP 0x3bba4b0
			// pre processing
			for (int i=0; i<4; i++) fRec183_tmp[i]=fRec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec183[i] = (fConst7 * (((1.95f * fYec126[i]) - (1.95f * fYec126[i-1])) + fRec183[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec183_perm[i]=fRec183_tmp[count+i];
			
			// LOOP 0x3bbd920
			// pre processing
			for (int i=0; i<4; i++) fRec184_tmp[i]=fRec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec184[i] = (fConst7 * (((1.95f * fYec128[i]) - (1.95f * fYec128[i-1])) + fRec184[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec184_perm[i]=fRec184_tmp[count+i];
			
			// LOOP 0x3bc0dd0
			// pre processing
			for (int i=0; i<4; i++) fRec185_tmp[i]=fRec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec185[i] = (fConst7 * (((1.95f * fYec130[i]) - (1.95f * fYec130[i-1])) + fRec185[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec185_perm[i]=fRec185_tmp[count+i];
			
			// LOOP 0x3beb3e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec276[i] = (0.5f * fYec134[i]);
			}
			
			// LOOP 0x3bf5e60
			// exec code
			for (int i=0; i<count; i++) {
				fZec281[i] = (0.5f * fYec138[i]);
			}
			
			// LOOP 0x3c00290
			// exec code
			for (int i=0; i<count; i++) {
				fZec286[i] = (0.5f * fYec142[i]);
			}
			
			// LOOP 0x3c0a6d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec291[i] = (0.5f * fYec146[i]);
			}
			
			// LOOP 0x3c14c00
			// exec code
			for (int i=0; i<count; i++) {
				fZec296[i] = (0.5f * fYec150[i]);
			}
			
			// LOOP 0x3c1f0f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec301[i] = (0.5f * fYec154[i]);
			}
			
			// LOOP 0x3c29620
			// exec code
			for (int i=0; i<count; i++) {
				fZec306[i] = (0.5f * fYec158[i]);
			}
			
			// LOOP 0x3c33b70
			// exec code
			for (int i=0; i<count; i++) {
				fZec309[i] = (0.5f * fYec161[i]);
			}
			
			// LOOP 0x3c3ba60
			// exec code
			for (int i=0; i<count; i++) {
				fZec312[i] = (0.5f * fYec164[i]);
			}
			
			// LOOP 0x3c43cd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec315[i] = (0.5f * fYec167[i]);
			}
			
			// LOOP 0x3c4bba0
			// exec code
			for (int i=0; i<count; i++) {
				fZec318[i] = (0.5f * fYec170[i]);
			}
			
			// LOOP 0x3c53b40
			// exec code
			for (int i=0; i<count; i++) {
				fZec321[i] = (0.5f * fYec173[i]);
			}
			
			// SECTION : 26
			// LOOP 0x3984800
			// exec code
			for (int i=0; i<count; i++) {
				fZec0[i] = (fSlow2 + (fVec0[i-3] + (fVec0[i-1] + fVec0[i-2])));
			}
			
			// LOOP 0x3986680
			// pre processing
			for (int i=0; i<4; i++) fYec5_tmp[i]=fYec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec5[i] = ((fZec12[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec5_perm[i]=fYec5_tmp[count+i];
			
			// LOOP 0x399d590
			// exec code
			for (int i=0; i<count; i++) {
				fZec16[i] = (fSlow8 + (fVec1[i-3] + (fVec1[i-1] + fVec1[i-2])));
			}
			
			// LOOP 0x399f7f0
			// pre processing
			for (int i=0; i<4; i++) fYec11_tmp[i]=fYec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec11[i] = ((fZec27[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec11_perm[i]=fYec11_tmp[count+i];
			
			// LOOP 0x39b1590
			// exec code
			for (int i=0; i<count; i++) {
				fZec31[i] = (fSlow10 + (fVec2[i-3] + (fVec2[i-1] + fVec2[i-2])));
			}
			
			// LOOP 0x39b3a90
			// pre processing
			for (int i=0; i<4; i++) fYec17_tmp[i]=fYec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec17[i] = ((fZec42[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec17_perm[i]=fYec17_tmp[count+i];
			
			// LOOP 0x39c54e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec46[i] = (fSlow12 + (fVec3[i-3] + (fVec3[i-1] + fVec3[i-2])));
			}
			
			// LOOP 0x39c7880
			// pre processing
			for (int i=0; i<4; i++) fYec23_tmp[i]=fYec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec23[i] = ((fZec57[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec23_perm[i]=fYec23_tmp[count+i];
			
			// LOOP 0x39d9430
			// exec code
			for (int i=0; i<count; i++) {
				fZec61[i] = (fSlow14 + (fVec4[i-3] + (fVec4[i-1] + fVec4[i-2])));
			}
			
			// LOOP 0x39db9c0
			// pre processing
			for (int i=0; i<4; i++) fYec29_tmp[i]=fYec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec29[i] = ((fZec72[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec29_perm[i]=fYec29_tmp[count+i];
			
			// LOOP 0x39ed540
			// exec code
			for (int i=0; i<count; i++) {
				fZec76[i] = (fSlow16 + (fVec5[i-3] + (fVec5[i-1] + fVec5[i-2])));
			}
			
			// LOOP 0x39efbd0
			// pre processing
			for (int i=0; i<4; i++) fYec34_tmp[i]=fYec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec34[i] = ((fZec85[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec34_perm[i]=fYec34_tmp[count+i];
			
			// LOOP 0x39ffa00
			// exec code
			for (int i=0; i<count; i++) {
				fZec89[i] = (fSlow18 + (fVec6[i-3] + (fVec6[i-1] + fVec6[i-2])));
			}
			
			// LOOP 0x3a01dc0
			// pre processing
			for (int i=0; i<4; i++) fYec39_tmp[i]=fYec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec39[i] = ((fZec98[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec39_perm[i]=fYec39_tmp[count+i];
			
			// LOOP 0x3a11410
			// exec code
			for (int i=0; i<count; i++) {
				fZec102[i] = (fSlow20 + (fVec7[i-3] + (fVec7[i-1] + fVec7[i-2])));
			}
			
			// LOOP 0x3a13bc0
			// pre processing
			for (int i=0; i<4; i++) fYec44_tmp[i]=fYec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec44[i] = ((fZec111[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec44_perm[i]=fYec44_tmp[count+i];
			
			// LOOP 0x3a23290
			// exec code
			for (int i=0; i<count; i++) {
				fZec115[i] = (fSlow22 + (fVec8[i-3] + (fVec8[i-1] + fVec8[i-2])));
			}
			
			// LOOP 0x3a256f0
			// pre processing
			for (int i=0; i<4; i++) fYec49_tmp[i]=fYec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec49[i] = ((fZec124[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec49_perm[i]=fYec49_tmp[count+i];
			
			// LOOP 0x3a34e10
			// exec code
			for (int i=0; i<count; i++) {
				fZec128[i] = (fSlow24 + (fVec9[i-3] + (fVec9[i-1] + fVec9[i-2])));
			}
			
			// LOOP 0x3a373a0
			// pre processing
			for (int i=0; i<4; i++) fYec54_tmp[i]=fYec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec54[i] = ((fZec137[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec54_perm[i]=fYec54_tmp[count+i];
			
			// LOOP 0x3a46e60
			// exec code
			for (int i=0; i<count; i++) {
				fZec141[i] = (fSlow26 + (fVec10[i-3] + (fVec10[i-1] + fVec10[i-2])));
			}
			
			// LOOP 0x3a588e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec154[i] = (fSlow28 + (fVec11[i-3] + (fVec11[i-1] + fVec11[i-2])));
			}
			
			// LOOP 0x3a6a7b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec167[i] = (fSlow30 + (fVec12[i-3] + (fVec12[i-1] + fVec12[i-2])));
			}
			
			// LOOP 0x3a6f900
			// exec code
			for (int i=0; i<count; i++) {
				fZec168[i] = (fSlow31 + (fVec13[i-3] + (fVec13[i-1] + fVec13[i-2])));
			}
			
			// LOOP 0x3a74d20
			// exec code
			for (int i=0; i<count; i++) {
				fZec169[i] = (fSlow32 + (fVec14[i-3] + (fVec14[i-1] + fVec14[i-2])));
			}
			
			// LOOP 0x3a7a480
			// exec code
			for (int i=0; i<count; i++) {
				fZec170[i] = (fSlow33 + (fVec15[i-3] + (fVec15[i-1] + fVec15[i-2])));
			}
			
			// LOOP 0x3a7f710
			// exec code
			for (int i=0; i<count; i++) {
				fZec171[i] = (fSlow34 + (fVec16[i-3] + (fVec16[i-1] + fVec16[i-2])));
			}
			
			// LOOP 0x3a86590
			// exec code
			for (int i=0; i<count; i++) {
				fZec172[i] = (fSlow37 + (fVec17[i-3] + (fVec17[i-1] + fVec17[i-2])));
			}
			
			// LOOP 0x3a8c530
			// exec code
			for (int i=0; i<count; i++) {
				fZec173[i] = (fSlow38 + (fVec18[i-3] + (fVec18[i-1] + fVec18[i-2])));
			}
			
			// LOOP 0x3a91a00
			// exec code
			for (int i=0; i<count; i++) {
				fZec174[i] = (fSlow39 + (fVec19[i-3] + (fVec19[i-1] + fVec19[i-2])));
			}
			
			// LOOP 0x3a97890
			// exec code
			for (int i=0; i<count; i++) {
				fZec175[i] = (fSlow40 + (fVec20[i-3] + (fVec20[i-1] + fVec20[i-2])));
			}
			
			// LOOP 0x3a9cf50
			// exec code
			for (int i=0; i<count; i++) {
				fZec176[i] = (fSlow41 + (fVec21[i-3] + (fVec21[i-1] + fVec21[i-2])));
			}
			
			// LOOP 0x3aa2b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec177[i] = (fSlow42 + (fVec22[i-3] + (fVec22[i-1] + fVec22[i-2])));
			}
			
			// LOOP 0x3aa7e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec178[i] = (fSlow43 + (fVec23[i-3] + (fVec23[i-1] + fVec23[i-2])));
			}
			
			// LOOP 0x3aad940
			// exec code
			for (int i=0; i<count; i++) {
				fZec179[i] = (fSlow44 + (fVec24[i-3] + (fVec24[i-1] + fVec24[i-2])));
			}
			
			// LOOP 0x3ab36d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec180[i] = (fSlow45 + (fVec25[i-3] + (fVec25[i-1] + fVec25[i-2])));
			}
			
			// LOOP 0x3ab8f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec181[i] = (fSlow46 + (fVec26[i-3] + (fVec26[i-1] + fVec26[i-2])));
			}
			
			// LOOP 0x3abf030
			// exec code
			for (int i=0; i<count; i++) {
				fZec182[i] = (fSlow47 + (fVec27[i-3] + (fVec27[i-1] + fVec27[i-2])));
			}
			
			// LOOP 0x3ac47b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec183[i] = (fSlow48 + (fVec28[i-3] + (fVec28[i-1] + fVec28[i-2])));
			}
			
			// LOOP 0x3acab50
			// exec code
			for (int i=0; i<count; i++) {
				fZec184[i] = (fSlow49 + (fVec29[i-3] + (fVec29[i-1] + fVec29[i-2])));
			}
			
			// LOOP 0x3ad1420
			// exec code
			for (int i=0; i<count; i++) {
				fZec185[i] = (fSlow50 + (fVec30[i-3] + (fVec30[i-1] + fVec30[i-2])));
			}
			
			// LOOP 0x3ad6e40
			// exec code
			for (int i=0; i<count; i++) {
				fZec186[i] = (fSlow51 + (fVec31[i-3] + (fVec31[i-1] + fVec31[i-2])));
			}
			
			// LOOP 0x3add720
			// exec code
			for (int i=0; i<count; i++) {
				fZec187[i] = (fSlow52 + (fVec32[i-3] + (fVec32[i-1] + fVec32[i-2])));
			}
			
			// LOOP 0x3ae33b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec188[i] = (fSlow53 + (fVec33[i-3] + (fVec33[i-1] + fVec33[i-2])));
			}
			
			// LOOP 0x3ae9650
			// exec code
			for (int i=0; i<count; i++) {
				fZec189[i] = (fSlow54 + (fVec34[i-3] + (fVec34[i-1] + fVec34[i-2])));
			}
			
			// LOOP 0x3aeec80
			// exec code
			for (int i=0; i<count; i++) {
				fZec190[i] = (fSlow55 + (fVec35[i-3] + (fVec35[i-1] + fVec35[i-2])));
			}
			
			// LOOP 0x3af4ec0
			// exec code
			for (int i=0; i<count; i++) {
				fZec191[i] = (fSlow56 + (fVec36[i-3] + (fVec36[i-1] + fVec36[i-2])));
			}
			
			// LOOP 0x3afb410
			// exec code
			for (int i=0; i<count; i++) {
				fZec192[i] = (fSlow57 + (fVec37[i-3] + (fVec37[i-1] + fVec37[i-2])));
			}
			
			// LOOP 0x3b01080
			// exec code
			for (int i=0; i<count; i++) {
				fZec193[i] = (fSlow58 + (fVec38[i-3] + (fVec38[i-1] + fVec38[i-2])));
			}
			
			// LOOP 0x3b07990
			// exec code
			for (int i=0; i<count; i++) {
				fZec194[i] = (fSlow59 + (fVec39[i-3] + (fVec39[i-1] + fVec39[i-2])));
			}
			
			// LOOP 0x3b0d5c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec195[i] = (fSlow60 + (fVec40[i-3] + (fVec40[i-1] + fVec40[i-2])));
			}
			
			// LOOP 0x3b14270
			// exec code
			for (int i=0; i<count; i++) {
				fZec196[i] = (fSlow61 + (fVec41[i-3] + (fVec41[i-1] + fVec41[i-2])));
			}
			
			// LOOP 0x3b1b520
			// exec code
			for (int i=0; i<count; i++) {
				fZec197[i] = (fSlow62 + (fVec42[i-3] + (fVec42[i-1] + fVec42[i-2])));
			}
			
			// LOOP 0x3b214b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec198[i] = (fSlow63 + (fVec43[i-3] + (fVec43[i-1] + fVec43[i-2])));
			}
			
			// LOOP 0x3b287e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec199[i] = (fSlow64 + (fVec44[i-3] + (fVec44[i-1] + fVec44[i-2])));
			}
			
			// LOOP 0x3b2ea70
			// exec code
			for (int i=0; i<count; i++) {
				fZec200[i] = (fSlow65 + (fVec45[i-3] + (fVec45[i-1] + fVec45[i-2])));
			}
			
			// LOOP 0x3b353a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec201[i] = (fSlow66 + (fVec46[i-3] + (fVec46[i-1] + fVec46[i-2])));
			}
			
			// LOOP 0x3b3ad50
			// exec code
			for (int i=0; i<count; i++) {
				fZec202[i] = (fSlow67 + (fVec47[i-3] + (fVec47[i-1] + fVec47[i-2])));
			}
			
			// LOOP 0x3b95440
			// exec code
			for (int i=0; i<count; i++) {
				fZec221[i] = (fRec133[i] + (fRec131[i] + (fRec129[i] + (fRec127[i] + fZec220[i]))));
			}
			
			// LOOP 0x3bc42b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec226[i] = (fRec173[i] * fZec203[i]);
			}
			
			// LOOP 0x3bc5490
			// exec code
			for (int i=0; i<count; i++) {
				fZec227[i] = (fRec174[i] * fZec204[i]);
			}
			
			// LOOP 0x3bc66e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec228[i] = (fRec175[i] * fZec205[i]);
			}
			
			// LOOP 0x3bc79a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec229[i] = (fRec176[i] * fZec206[i]);
			}
			
			// LOOP 0x3bc8c50
			// exec code
			for (int i=0; i<count; i++) {
				fZec230[i] = (fRec177[i] * fZec207[i]);
			}
			
			// LOOP 0x3bc9f30
			// exec code
			for (int i=0; i<count; i++) {
				fZec231[i] = (fRec178[i] * fZec208[i]);
			}
			
			// LOOP 0x3bcb1c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec232[i] = (fRec179[i] * fZec209[i]);
			}
			
			// LOOP 0x3bcc500
			// exec code
			for (int i=0; i<count; i++) {
				fZec233[i] = (fRec180[i] * fZec210[i]);
			}
			
			// LOOP 0x3bcd860
			// exec code
			for (int i=0; i<count; i++) {
				fZec234[i] = (fRec182[i] * fZec211[i]);
			}
			
			// LOOP 0x3bcebf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec235[i] = (fRec183[i] * fZec212[i]);
			}
			
			// LOOP 0x3bcff30
			// exec code
			for (int i=0; i<count; i++) {
				fZec236[i] = (fRec184[i] * fZec213[i]);
			}
			
			// LOOP 0x3bd12a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec237[i] = (fRec185[i] * fZec214[i]);
			}
			
			// LOOP 0x3bd2640
			// exec code
			for (int i=0; i<count; i++) {
				fZec238[i] = (fRec173[i] * fZec215[i]);
			}
			
			// LOOP 0x3bd61a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec240[i] = (0.5f * fRec185[i]);
			}
			
			// LOOP 0x3bd7420
			// exec code
			for (int i=0; i<count; i++) {
				fZec241[i] = (0.5f * fRec184[i]);
			}
			
			// LOOP 0x3bd79d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec242[i] = (0.5f * fRec183[i]);
			}
			
			// LOOP 0x3bd7fb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec243[i] = (0.5f * fRec182[i]);
			}
			
			// LOOP 0x3bd8590
			// exec code
			for (int i=0; i<count; i++) {
				fZec244[i] = (0.5f * fRec180[i]);
			}
			
			// LOOP 0x3bd8b70
			// exec code
			for (int i=0; i<count; i++) {
				fZec245[i] = (0.5f * fRec179[i]);
			}
			
			// LOOP 0x3bd9150
			// exec code
			for (int i=0; i<count; i++) {
				fZec246[i] = (0.5f * fRec178[i]);
			}
			
			// LOOP 0x3bd9730
			// exec code
			for (int i=0; i<count; i++) {
				fZec247[i] = (0.5f * fRec177[i]);
			}
			
			// LOOP 0x3bd9d10
			// exec code
			for (int i=0; i<count; i++) {
				fZec248[i] = (0.5f * fRec176[i]);
			}
			
			// LOOP 0x3bda2f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec249[i] = (0.5f * fRec175[i]);
			}
			
			// LOOP 0x3bda8d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec250[i] = (0.5f * fRec171[i]);
			}
			
			// LOOP 0x3bdaeb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec251[i] = (0.5f * fRec169[i]);
			}
			
			// LOOP 0x3bdb490
			// exec code
			for (int i=0; i<count; i++) {
				fZec252[i] = (0.5f * fRec167[i]);
			}
			
			// LOOP 0x3bdba70
			// exec code
			for (int i=0; i<count; i++) {
				fZec253[i] = (0.5f * fRec165[i]);
			}
			
			// LOOP 0x3bdc050
			// exec code
			for (int i=0; i<count; i++) {
				fZec254[i] = (0.5f * fRec163[i]);
			}
			
			// LOOP 0x3bdc630
			// exec code
			for (int i=0; i<count; i++) {
				fZec255[i] = (0.5f * fRec161[i]);
			}
			
			// LOOP 0x3bdcc10
			// exec code
			for (int i=0; i<count; i++) {
				fZec256[i] = (0.5f * fRec159[i]);
			}
			
			// LOOP 0x3bdd1f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec257[i] = (0.5f * fRec157[i]);
			}
			
			// LOOP 0x3bdd7d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec258[i] = (0.5f * fRec155[i]);
			}
			
			// LOOP 0x3bdddb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec259[i] = (0.5f * fRec153[i]);
			}
			
			// LOOP 0x3bde390
			// exec code
			for (int i=0; i<count; i++) {
				fZec260[i] = (0.5f * fRec151[i]);
			}
			
			// LOOP 0x3bde970
			// exec code
			for (int i=0; i<count; i++) {
				fZec261[i] = (0.5f * fRec149[i]);
			}
			
			// LOOP 0x3bdef50
			// exec code
			for (int i=0; i<count; i++) {
				fZec262[i] = (0.5f * fRec147[i]);
			}
			
			// LOOP 0x3bdf530
			// exec code
			for (int i=0; i<count; i++) {
				fZec263[i] = (0.5f * fRec145[i]);
			}
			
			// LOOP 0x3bdfb10
			// exec code
			for (int i=0; i<count; i++) {
				fZec264[i] = (0.5f * fRec143[i]);
			}
			
			// LOOP 0x3be00f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec265[i] = (0.5f * fRec141[i]);
			}
			
			// LOOP 0x3be06d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec266[i] = (0.5f * fRec139[i]);
			}
			
			// LOOP 0x3be0cb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec267[i] = (0.5f * fRec137[i]);
			}
			
			// LOOP 0x3be1290
			// exec code
			for (int i=0; i<count; i++) {
				fZec268[i] = (0.5f * fRec135[i]);
			}
			
			// LOOP 0x3beb270
			// pre processing
			for (int i=0; i<4; i++) fYec135_tmp[i]=fYec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec135[i] = ((fZec276[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec135_perm[i]=fYec135_tmp[count+i];
			
			// LOOP 0x3bf5cf0
			// pre processing
			for (int i=0; i<4; i++) fYec139_tmp[i]=fYec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec139[i] = ((fZec281[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec139_perm[i]=fYec139_tmp[count+i];
			
			// LOOP 0x3c00120
			// pre processing
			for (int i=0; i<4; i++) fYec143_tmp[i]=fYec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec143[i] = ((fZec286[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec143_perm[i]=fYec143_tmp[count+i];
			
			// LOOP 0x3c0a560
			// pre processing
			for (int i=0; i<4; i++) fYec147_tmp[i]=fYec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec147[i] = ((fZec291[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec147_perm[i]=fYec147_tmp[count+i];
			
			// LOOP 0x3c14a90
			// pre processing
			for (int i=0; i<4; i++) fYec151_tmp[i]=fYec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec151[i] = ((fZec296[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec151_perm[i]=fYec151_tmp[count+i];
			
			// LOOP 0x3c1ef80
			// pre processing
			for (int i=0; i<4; i++) fYec155_tmp[i]=fYec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec155[i] = ((fZec301[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec155_perm[i]=fYec155_tmp[count+i];
			
			// LOOP 0x3c294b0
			// pre processing
			for (int i=0; i<4; i++) fYec159_tmp[i]=fYec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec159[i] = ((fZec306[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec159_perm[i]=fYec159_tmp[count+i];
			
			// LOOP 0x3c33a00
			// pre processing
			for (int i=0; i<4; i++) fYec162_tmp[i]=fYec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec162[i] = ((fZec309[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec162_perm[i]=fYec162_tmp[count+i];
			
			// LOOP 0x3c3b8f0
			// pre processing
			for (int i=0; i<4; i++) fYec165_tmp[i]=fYec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec165[i] = ((fZec312[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec165_perm[i]=fYec165_tmp[count+i];
			
			// LOOP 0x3c43b60
			// pre processing
			for (int i=0; i<4; i++) fYec168_tmp[i]=fYec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec168[i] = ((fZec315[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec168_perm[i]=fYec168_tmp[count+i];
			
			// LOOP 0x3c4ba30
			// pre processing
			for (int i=0; i<4; i++) fYec171_tmp[i]=fYec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec171[i] = ((fZec318[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec171_perm[i]=fYec171_tmp[count+i];
			
			// LOOP 0x3c539d0
			// pre processing
			for (int i=0; i<4; i++) fYec174_tmp[i]=fYec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec174[i] = ((fZec321[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec174_perm[i]=fYec174_tmp[count+i];
			
			// LOOP 0x3c5b9b0
			// pre processing
			for (int i=0; i<4; i++) fYec175_tmp[i]=fYec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec175[i] = ((fZec274[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec175_perm[i]=fYec175_tmp[count+i];
			
			// LOOP 0x3c5f6f0
			// pre processing
			for (int i=0; i<4; i++) fYec176_tmp[i]=fYec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec176[i] = ((fZec279[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec176_perm[i]=fYec176_tmp[count+i];
			
			// LOOP 0x3c62f30
			// pre processing
			for (int i=0; i<4; i++) fYec177_tmp[i]=fYec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec177[i] = ((fZec284[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec177_perm[i]=fYec177_tmp[count+i];
			
			// LOOP 0x3c667a0
			// pre processing
			for (int i=0; i<4; i++) fYec178_tmp[i]=fYec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec178[i] = ((fZec289[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec178_perm[i]=fYec178_tmp[count+i];
			
			// LOOP 0x3c6a0a0
			// pre processing
			for (int i=0; i<4; i++) fYec179_tmp[i]=fYec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec179[i] = ((fZec294[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec179_perm[i]=fYec179_tmp[count+i];
			
			// LOOP 0x3c6dfc0
			// pre processing
			for (int i=0; i<4; i++) fYec180_tmp[i]=fYec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec180[i] = ((fZec299[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec180_perm[i]=fYec180_tmp[count+i];
			
			// LOOP 0x3c715e0
			// pre processing
			for (int i=0; i<4; i++) fYec181_tmp[i]=fYec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec181[i] = ((fZec304[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec181_perm[i]=fYec181_tmp[count+i];
			
			// LOOP 0x3c74b20
			// pre processing
			for (int i=0; i<4; i++) fYec182_tmp[i]=fYec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec182[i] = ((fZec307[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec182_perm[i]=fYec182_tmp[count+i];
			
			// LOOP 0x3c78190
			// pre processing
			for (int i=0; i<4; i++) fYec183_tmp[i]=fYec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec183[i] = ((fZec310[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec183_perm[i]=fYec183_tmp[count+i];
			
			// LOOP 0x3c7ba80
			// pre processing
			for (int i=0; i<4; i++) fYec184_tmp[i]=fYec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec184[i] = ((fZec313[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec184_perm[i]=fYec184_tmp[count+i];
			
			// LOOP 0x3c7f170
			// pre processing
			for (int i=0; i<4; i++) fYec185_tmp[i]=fYec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec185[i] = ((fZec316[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec185_perm[i]=fYec185_tmp[count+i];
			
			// LOOP 0x3c82810
			// pre processing
			for (int i=0; i<4; i++) fYec186_tmp[i]=fYec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec186[i] = ((fZec319[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec186_perm[i]=fYec186_tmp[count+i];
			
			// LOOP 0x3c85ee0
			// pre processing
			for (int i=0; i<4; i++) fYec187_tmp[i]=fYec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec187[i] = ((fZec272[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec187_perm[i]=fYec187_tmp[count+i];
			
			// LOOP 0x3c89570
			// pre processing
			for (int i=0; i<4; i++) fYec188_tmp[i]=fYec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec188[i] = ((fZec277[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec188_perm[i]=fYec188_tmp[count+i];
			
			// LOOP 0x3c8cca0
			// pre processing
			for (int i=0; i<4; i++) fYec189_tmp[i]=fYec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec189[i] = ((fZec282[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec189_perm[i]=fYec189_tmp[count+i];
			
			// LOOP 0x3c90420
			// pre processing
			for (int i=0; i<4; i++) fYec190_tmp[i]=fYec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec190[i] = ((fZec287[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec190_perm[i]=fYec190_tmp[count+i];
			
			// LOOP 0x3c93bd0
			// pre processing
			for (int i=0; i<4; i++) fYec191_tmp[i]=fYec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec191[i] = ((fZec292[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec191_perm[i]=fYec191_tmp[count+i];
			
			// LOOP 0x3c973d0
			// pre processing
			for (int i=0; i<4; i++) fYec192_tmp[i]=fYec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec192[i] = ((fZec297[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec192_perm[i]=fYec192_tmp[count+i];
			
			// LOOP 0x3c9ac10
			// pre processing
			for (int i=0; i<4; i++) fYec193_tmp[i]=fYec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec193[i] = ((fZec302[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec193_perm[i]=fYec193_tmp[count+i];
			
			// SECTION : 27
			// LOOP 0x3986210
			// pre processing
			for (int i=0; i<4; i++) fRec2_tmp[i]=fRec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec2[i] = (fRec2[i-1] + (fConst2 * ((square_polyblep_precalc(fZec12[i], fZec13[i], (0.5f * fYec4[i-2]), fZec15[i]) + (2 * fYec5[i-1])) - fRec2[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec2_perm[i]=fRec2_tmp[count+i];
			
			// LOOP 0x399f2a0
			// pre processing
			for (int i=0; i<4; i++) fRec11_tmp[i]=fRec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec11[i] = (fRec11[i-1] + (fConst5 * ((square_polyblep_precalc(fZec27[i], fZec28[i], (0.5f * fYec10[i-2]), fZec30[i]) + (2 * fYec11[i-1])) - fRec11[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec11_perm[i]=fRec11_tmp[count+i];
			
			// LOOP 0x39b3540
			// pre processing
			for (int i=0; i<4; i++) fRec19_tmp[i]=fRec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec19[i] = (fRec19[i-1] + (fConst5 * ((square_polyblep_precalc(fZec42[i], fZec43[i], (0.5f * fYec16[i-2]), fZec45[i]) + (2 * fYec17[i-1])) - fRec19[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec19_perm[i]=fRec19_tmp[count+i];
			
			// LOOP 0x39c7330
			// pre processing
			for (int i=0; i<4; i++) fRec27_tmp[i]=fRec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec27[i] = (fRec27[i-1] + (fConst5 * ((square_polyblep_precalc(fZec57[i], fZec58[i], (0.5f * fYec22[i-2]), fZec60[i]) + (2 * fYec23[i-1])) - fRec27[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec27_perm[i]=fRec27_tmp[count+i];
			
			// LOOP 0x39db470
			// pre processing
			for (int i=0; i<4; i++) fRec35_tmp[i]=fRec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec35[i] = (fRec35[i-1] + (fConst5 * ((square_polyblep_precalc(fZec72[i], fZec73[i], (0.5f * fYec28[i-2]), fZec75[i]) + (2 * fYec29[i-1])) - fRec35[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec35_perm[i]=fRec35_tmp[count+i];
			
			// LOOP 0x39ef680
			// pre processing
			for (int i=0; i<4; i++) fRec43_tmp[i]=fRec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec43[i] = (fRec43[i-1] + (fConst6 * ((square_polyblep_precalc(fZec85[i], fZec86[i], (0.5f * fYec33[i-2]), fZec88[i]) + (2 * fYec34[i-1])) - fRec43[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec43_perm[i]=fRec43_tmp[count+i];
			
			// LOOP 0x3a01870
			// pre processing
			for (int i=0; i<4; i++) fRec50_tmp[i]=fRec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec50[i] = (fRec50[i-1] + (fConst6 * ((square_polyblep_precalc(fZec98[i], fZec99[i], (0.5f * fYec38[i-2]), fZec101[i]) + (2 * fYec39[i-1])) - fRec50[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec50_perm[i]=fRec50_tmp[count+i];
			
			// LOOP 0x3a13670
			// pre processing
			for (int i=0; i<4; i++) fRec57_tmp[i]=fRec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec57[i] = (fRec57[i-1] + (fConst6 * ((square_polyblep_precalc(fZec111[i], fZec112[i], (0.5f * fYec43[i-2]), fZec114[i]) + (2 * fYec44[i-1])) - fRec57[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec57_perm[i]=fRec57_tmp[count+i];
			
			// LOOP 0x3a251a0
			// pre processing
			for (int i=0; i<4; i++) fRec64_tmp[i]=fRec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec64[i] = (fRec64[i-1] + (fConst6 * ((square_polyblep_precalc(fZec124[i], fZec125[i], (0.5f * fYec48[i-2]), fZec127[i]) + (2 * fYec49[i-1])) - fRec64[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec64_perm[i]=fRec64_tmp[count+i];
			
			// LOOP 0x3a36e50
			// pre processing
			for (int i=0; i<4; i++) fRec71_tmp[i]=fRec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec71[i] = (fRec71[i-1] + (fConst8 * ((square_polyblep_precalc(fZec137[i], fZec138[i], (0.5f * fYec53[i-2]), fZec140[i]) + (2 * fYec54[i-1])) - fRec71[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec71_perm[i]=fRec71_tmp[count+i];
			
			// LOOP 0x3a49170
			// pre processing
			for (int i=0; i<4; i++) fYec59_tmp[i]=fYec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec59[i] = ((fZec150[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec59_perm[i]=fYec59_tmp[count+i];
			
			// LOOP 0x3a5b030
			// pre processing
			for (int i=0; i<4; i++) fYec64_tmp[i]=fYec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec64[i] = ((fZec163[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec64_perm[i]=fYec64_tmp[count+i];
			
			// LOOP 0x3a6d020
			// pre processing
			for (int i=0; i<4; i++) fYec65_tmp[i]=fYec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec65[i] = ((fZec10[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec65_perm[i]=fYec65_tmp[count+i];
			
			// LOOP 0x3a72100
			// pre processing
			for (int i=0; i<4; i++) fYec66_tmp[i]=fYec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec66[i] = ((fZec25[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec66_perm[i]=fYec66_tmp[count+i];
			
			// LOOP 0x3a77b90
			// pre processing
			for (int i=0; i<4; i++) fYec67_tmp[i]=fYec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec67[i] = ((fZec40[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec67_perm[i]=fYec67_tmp[count+i];
			
			// LOOP 0x3a7ce30
			// pre processing
			for (int i=0; i<4; i++) fYec68_tmp[i]=fYec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec68[i] = ((fZec55[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec68_perm[i]=fYec68_tmp[count+i];
			
			// LOOP 0x3a827f0
			// pre processing
			for (int i=0; i<4; i++) fYec69_tmp[i]=fYec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec69[i] = ((fZec70[i] < 0.5f) - 0.5f);
			}
			// post processing
			for (int i=0; i<4; i++) fYec69_perm[i]=fYec69_tmp[count+i];
			
			// LOOP 0x3ba1a20
			// exec code
			for (int i=0; i<count; i++) {
				fZec239[i] = (0.25f * (fZec238[i] + (fZec237[i] + (fZec236[i] + (fZec235[i] + (fZec234[i] + (fZec233[i] + (fZec232[i] + (fZec231[i] + (fZec230[i] + (fZec229[i] + (fZec228[i] + (fZec227[i] + (fZec226[i] + ((fRec185[i] * fZec202[i]) + ((fRec184[i] * fZec201[i]) + ((fRec183[i] * fZec200[i]) + ((fRec182[i] * fZec199[i]) + ((fRec180[i] * fZec198[i]) + ((fRec179[i] * fZec197[i]) + ((fRec178[i] * fZec196[i]) + ((fRec177[i] * fZec195[i]) + ((fRec176[i] * fZec194[i]) + ((fRec175[i] * fZec193[i]) + ((fRec174[i] * fZec192[i]) + ((fRec173[i] * fZec191[i]) + ((fRec171[i] * fZec190[i]) + ((fRec169[i] * fZec189[i]) + ((fRec167[i] * fZec188[i]) + ((fRec165[i] * fZec187[i]) + ((fRec163[i] * fZec186[i]) + ((fRec161[i] * fZec185[i]) + ((fRec159[i] * fZec184[i]) + ((fRec157[i] * fZec183[i]) + ((fRec155[i] * fZec182[i]) + ((fRec153[i] * fZec181[i]) + ((fRec151[i] * fZec180[i]) + ((fRec149[i] * fZec179[i]) + ((fRec147[i] * fZec178[i]) + ((fRec145[i] * fZec177[i]) + ((fRec143[i] * fZec176[i]) + ((fRec141[i] * fZec175[i]) + ((fRec139[i] * fZec174[i]) + ((fRec137[i] * fZec173[i]) + ((fRec135[i] * fZec172[i]) + (fSlow36 * ((fRec133[i] * fZec171[i]) + ((fRec131[i] * fZec170[i]) + ((fRec129[i] * fZec169[i]) + ((fRec127[i] * fZec168[i]) + ((fRec125[i] * fZec167[i]) + ((fRec123[i] * fZec154[i]) + ((fRec121[i] * fZec141[i]) + ((fRec119[i] * fZec128[i]) + ((fRec117[i] * fZec115[i]) + ((fRec115[i] * fZec102[i]) + ((fRec113[i] * fZec89[i]) + ((fRec111[i] * fZec76[i]) + ((fRec109[i] * fZec61[i]) + ((fRec107[i] * fZec46[i]) + ((fRec105[i] * fZec31[i]) + ((fRec103[i] * fZec16[i]) + (fRec101[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3bd3c60
			// exec code
			for (int i=0; i<count; i++) {
				fZec269[i] = ((2 * ((((((((((((fRec174[i] + (fRec173[i] + ((((((((((((((((((fZec268[i] + fZec267[i]) + fZec266[i]) + fZec265[i]) + fZec264[i]) + fZec263[i]) + fZec262[i]) + fZec261[i]) + fZec260[i]) + fZec259[i]) + fZec258[i]) + fZec257[i]) + fZec256[i]) + fZec255[i]) + fZec254[i]) + fZec253[i]) + fZec252[i]) + fZec251[i]) + fZec250[i]))) + fZec249[i]) + fZec248[i]) + fZec247[i]) + fZec246[i]) + fZec245[i]) + fZec244[i]) + fZec243[i]) + fZec242[i]) + fZec241[i]) + fZec240[i]) + (fSlow81 * fZec221[i]))) + (fRec185[i] + (fRec184[i] + (fRec183[i] + (fRec182[i] + (fRec180[i] + (fRec179[i] + (fRec178[i] + (fRec177[i] + (fRec176[i] + (fRec173[i] + fRec175[i])))))))))));
			}
			
			// LOOP 0x3bead20
			// pre processing
			for (int i=0; i<4; i++) fRec188_tmp[i]=fRec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec188[i] = (fRec188[i-1] + (fConst20 * ((square_polyblep_precalc(fZec276[i], (0.5f * fYec134[i-1]), (0.5f * fYec134[i-2]), fZec88[i]) + (2 * fYec135[i-1])) - fRec188[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec188_perm[i]=fRec188_tmp[count+i];
			
			// LOOP 0x3bf57a0
			// pre processing
			for (int i=0; i<4; i++) fRec193_tmp[i]=fRec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec193[i] = (fRec193[i-1] + (fConst20 * ((square_polyblep_precalc(fZec281[i], (0.5f * fYec138[i-1]), (0.5f * fYec138[i-2]), fZec101[i]) + (2 * fYec139[i-1])) - fRec193[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec193_perm[i]=fRec193_tmp[count+i];
			
			// LOOP 0x3bffbd0
			// pre processing
			for (int i=0; i<4; i++) fRec198_tmp[i]=fRec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec198[i] = (fRec198[i-1] + (fConst20 * ((square_polyblep_precalc(fZec286[i], (0.5f * fYec142[i-1]), (0.5f * fYec142[i-2]), fZec114[i]) + (2 * fYec143[i-1])) - fRec198[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec198_perm[i]=fRec198_tmp[count+i];
			
			// LOOP 0x3c0a010
			// pre processing
			for (int i=0; i<4; i++) fRec203_tmp[i]=fRec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec203[i] = (fRec203[i-1] + (fConst20 * ((square_polyblep_precalc(fZec291[i], (0.5f * fYec146[i-1]), (0.5f * fYec146[i-2]), fZec127[i]) + (2 * fYec147[i-1])) - fRec203[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec203_perm[i]=fRec203_tmp[count+i];
			
			// LOOP 0x3c14540
			// pre processing
			for (int i=0; i<4; i++) fRec208_tmp[i]=fRec208_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec208[i] = (fRec208[i-1] + (fConst20 * ((square_polyblep_precalc(fZec296[i], (0.5f * fYec150[i-1]), (0.5f * fYec150[i-2]), fZec140[i]) + (2 * fYec151[i-1])) - fRec208[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec208_perm[i]=fRec208_tmp[count+i];
			
			// LOOP 0x3c1ea30
			// pre processing
			for (int i=0; i<4; i++) fRec213_tmp[i]=fRec213_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec213[i] = (fRec213[i-1] + (fConst20 * ((square_polyblep_precalc(fZec301[i], (0.5f * fYec154[i-1]), (0.5f * fYec154[i-2]), fZec153[i]) + (2 * fYec155[i-1])) - fRec213[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec213_perm[i]=fRec213_tmp[count+i];
			
			// LOOP 0x3c28f60
			// pre processing
			for (int i=0; i<4; i++) fRec218_tmp[i]=fRec218_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec218[i] = (fRec218[i-1] + (fConst20 * ((square_polyblep_precalc(fZec306[i], (0.5f * fYec158[i-1]), (0.5f * fYec158[i-2]), fZec166[i]) + (2 * fYec159[i-1])) - fRec218[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec218_perm[i]=fRec218_tmp[count+i];
			
			// LOOP 0x3c334b0
			// pre processing
			for (int i=0; i<4; i++) fRec223_tmp[i]=fRec223_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec223[i] = (fRec223[i-1] + (fConst20 * ((square_polyblep_precalc(fZec309[i], (0.5f * fYec161[i-1]), (0.5f * fYec161[i-2]), fZec15[i]) + (2 * fYec162[i-1])) - fRec223[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec223_perm[i]=fRec223_tmp[count+i];
			
			// LOOP 0x3c3b3a0
			// pre processing
			for (int i=0; i<4; i++) fRec227_tmp[i]=fRec227_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec227[i] = (fRec227[i-1] + (fConst22 * ((square_polyblep_precalc(fZec312[i], (0.5f * fYec164[i-1]), (0.5f * fYec164[i-2]), fZec30[i]) + (2 * fYec165[i-1])) - fRec227[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec227_perm[i]=fRec227_tmp[count+i];
			
			// LOOP 0x3c43610
			// pre processing
			for (int i=0; i<4; i++) fRec231_tmp[i]=fRec231_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec231[i] = (fRec231[i-1] + (fConst22 * ((square_polyblep_precalc(fZec315[i], (0.5f * fYec167[i-1]), (0.5f * fYec167[i-2]), fZec45[i]) + (2 * fYec168[i-1])) - fRec231[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec231_perm[i]=fRec231_tmp[count+i];
			
			// LOOP 0x3c4b4e0
			// pre processing
			for (int i=0; i<4; i++) fRec235_tmp[i]=fRec235_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec235[i] = (fRec235[i-1] + (fConst22 * ((square_polyblep_precalc(fZec318[i], (0.5f * fYec170[i-1]), (0.5f * fYec170[i-2]), fZec60[i]) + (2 * fYec171[i-1])) - fRec235[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec235_perm[i]=fRec235_tmp[count+i];
			
			// LOOP 0x3c53480
			// pre processing
			for (int i=0; i<4; i++) fRec239_tmp[i]=fRec239_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec239[i] = (fRec239[i-1] + (fConst22 * ((square_polyblep_precalc(fZec321[i], (0.5f * fYec173[i-1]), (0.5f * fYec173[i-2]), fZec75[i]) + (2 * fYec174[i-1])) - fRec239[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec239_perm[i]=fRec239_tmp[count+i];
			
			// LOOP 0x3c5b460
			// pre processing
			for (int i=0; i<4; i++) fRec243_tmp[i]=fRec243_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec243[i] = (fRec243[i-1] + (fConst22 * ((square_polyblep_precalc(fZec274[i], fZec275[i], (0.5f * fYec133[i-2]), fZec88[i]) + (2 * fYec175[i-1])) - fRec243[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec243_perm[i]=fRec243_tmp[count+i];
			
			// LOOP 0x3c5f1a0
			// pre processing
			for (int i=0; i<4; i++) fRec245_tmp[i]=fRec245_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec245[i] = (fRec245[i-1] + (fConst22 * ((square_polyblep_precalc(fZec279[i], fZec280[i], (0.5f * fYec137[i-2]), fZec101[i]) + (2 * fYec176[i-1])) - fRec245[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec245_perm[i]=fRec245_tmp[count+i];
			
			// LOOP 0x3c629e0
			// pre processing
			for (int i=0; i<4; i++) fRec247_tmp[i]=fRec247_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec247[i] = (fRec247[i-1] + (fConst22 * ((square_polyblep_precalc(fZec284[i], fZec285[i], (0.5f * fYec141[i-2]), fZec114[i]) + (2 * fYec177[i-1])) - fRec247[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec247_perm[i]=fRec247_tmp[count+i];
			
			// LOOP 0x3c66250
			// pre processing
			for (int i=0; i<4; i++) fRec249_tmp[i]=fRec249_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec249[i] = (fRec249[i-1] + (fConst22 * ((square_polyblep_precalc(fZec289[i], fZec290[i], (0.5f * fYec145[i-2]), fZec127[i]) + (2 * fYec178[i-1])) - fRec249[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec249_perm[i]=fRec249_tmp[count+i];
			
			// LOOP 0x3c69b50
			// pre processing
			for (int i=0; i<4; i++) fRec251_tmp[i]=fRec251_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec251[i] = (fRec251[i-1] + (fConst24 * ((square_polyblep_precalc(fZec294[i], fZec295[i], (0.5f * fYec149[i-2]), fZec140[i]) + (2 * fYec179[i-1])) - fRec251[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec251_perm[i]=fRec251_tmp[count+i];
			
			// LOOP 0x3c6da70
			// pre processing
			for (int i=0; i<4; i++) fRec253_tmp[i]=fRec253_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec253[i] = (fRec253[i-1] + (fConst24 * ((square_polyblep_precalc(fZec299[i], fZec300[i], (0.5f * fYec153[i-2]), fZec153[i]) + (2 * fYec180[i-1])) - fRec253[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec253_perm[i]=fRec253_tmp[count+i];
			
			// LOOP 0x3c71090
			// pre processing
			for (int i=0; i<4; i++) fRec255_tmp[i]=fRec255_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec255[i] = (fRec255[i-1] + (fConst24 * ((square_polyblep_precalc(fZec304[i], fZec305[i], (0.5f * fYec157[i-2]), fZec166[i]) + (2 * fYec181[i-1])) - fRec255[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec255_perm[i]=fRec255_tmp[count+i];
			
			// LOOP 0x3c745d0
			// pre processing
			for (int i=0; i<4; i++) fRec257_tmp[i]=fRec257_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec257[i] = (fRec257[i-1] + (fConst24 * ((square_polyblep_precalc(fZec307[i], fZec308[i], (0.5f * fYec160[i-2]), fZec15[i]) + (2 * fYec182[i-1])) - fRec257[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec257_perm[i]=fRec257_tmp[count+i];
			
			// LOOP 0x3c77c40
			// pre processing
			for (int i=0; i<4; i++) fRec259_tmp[i]=fRec259_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec259[i] = (fRec259[i-1] + (fConst25 * ((square_polyblep_precalc(fZec310[i], fZec311[i], (0.5f * fYec163[i-2]), fZec30[i]) + (2 * fYec183[i-1])) - fRec259[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec259_perm[i]=fRec259_tmp[count+i];
			
			// LOOP 0x3c7b530
			// pre processing
			for (int i=0; i<4; i++) fRec261_tmp[i]=fRec261_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec261[i] = (fRec261[i-1] + (fConst25 * ((square_polyblep_precalc(fZec313[i], fZec314[i], (0.5f * fYec166[i-2]), fZec45[i]) + (2 * fYec184[i-1])) - fRec261[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec261_perm[i]=fRec261_tmp[count+i];
			
			// LOOP 0x3c7ec20
			// pre processing
			for (int i=0; i<4; i++) fRec263_tmp[i]=fRec263_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec263[i] = (fRec263[i-1] + (fConst25 * ((square_polyblep_precalc(fZec316[i], fZec317[i], (0.5f * fYec169[i-2]), fZec60[i]) + (2 * fYec185[i-1])) - fRec263[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec263_perm[i]=fRec263_tmp[count+i];
			
			// LOOP 0x3c822c0
			// pre processing
			for (int i=0; i<4; i++) fRec265_tmp[i]=fRec265_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec265[i] = (fRec265[i-1] + (fConst25 * ((square_polyblep_precalc(fZec319[i], fZec320[i], (0.5f * fYec172[i-2]), fZec75[i]) + (2 * fYec186[i-1])) - fRec265[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec265_perm[i]=fRec265_tmp[count+i];
			
			// LOOP 0x3c85990
			// pre processing
			for (int i=0; i<4; i++) fRec267_tmp[i]=fRec267_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec267[i] = (fRec267[i-1] + (fConst25 * ((square_polyblep_precalc(fZec272[i], fZec273[i], (0.5f * fYec132[i-2]), fZec88[i]) + (2 * fYec187[i-1])) - fRec267[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec267_perm[i]=fRec267_tmp[count+i];
			
			// LOOP 0x3c89020
			// pre processing
			for (int i=0; i<4; i++) fRec269_tmp[i]=fRec269_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec269[i] = (fRec269[i-1] + (fConst25 * ((square_polyblep_precalc(fZec277[i], fZec278[i], (0.5f * fYec136[i-2]), fZec101[i]) + (2 * fYec188[i-1])) - fRec269[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec269_perm[i]=fRec269_tmp[count+i];
			
			// LOOP 0x3c8c750
			// pre processing
			for (int i=0; i<4; i++) fRec271_tmp[i]=fRec271_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec271[i] = (fRec271[i-1] + (fConst25 * ((square_polyblep_precalc(fZec282[i], fZec283[i], (0.5f * fYec140[i-2]), fZec114[i]) + (2 * fYec189[i-1])) - fRec271[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec271_perm[i]=fRec271_tmp[count+i];
			
			// LOOP 0x3c8fed0
			// pre processing
			for (int i=0; i<4; i++) fRec273_tmp[i]=fRec273_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec273[i] = (fRec273[i-1] + (fConst25 * ((square_polyblep_precalc(fZec287[i], fZec288[i], (0.5f * fYec144[i-2]), fZec127[i]) + (2 * fYec190[i-1])) - fRec273[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec273_perm[i]=fRec273_tmp[count+i];
			
			// LOOP 0x3c93680
			// pre processing
			for (int i=0; i<4; i++) fRec275_tmp[i]=fRec275_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec275[i] = (fRec275[i-1] + (fConst2 * ((square_polyblep_precalc(fZec292[i], fZec293[i], (0.5f * fYec148[i-2]), fZec140[i]) + (2 * fYec191[i-1])) - fRec275[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec275_perm[i]=fRec275_tmp[count+i];
			
			// LOOP 0x3c96e80
			// pre processing
			for (int i=0; i<4; i++) fRec277_tmp[i]=fRec277_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec277[i] = (fRec277[i-1] + (fConst2 * ((square_polyblep_precalc(fZec297[i], fZec298[i], (0.5f * fYec152[i-2]), fZec153[i]) + (2 * fYec192[i-1])) - fRec277[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec277_perm[i]=fRec277_tmp[count+i];
			
			// LOOP 0x3c9a6c0
			// pre processing
			for (int i=0; i<4; i++) fRec279_tmp[i]=fRec279_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec279[i] = (fRec279[i-1] + (fConst2 * ((square_polyblep_precalc(fZec302[i], fZec303[i], (0.5f * fYec156[i-2]), fZec166[i]) + (2 * fYec193[i-1])) - fRec279[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec279_perm[i]=fRec279_tmp[count+i];
			
			// SECTION : 28
			// LOOP 0x3985e00
			// pre processing
			for (int i=0; i<4; i++) fRec1_tmp[i]=fRec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec1[i] = (fConst4 * ((fRec2[i] - fRec2[i-1]) + fRec1[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec1_perm[i]=fRec1_tmp[count+i];
			
			// LOOP 0x399edb0
			// pre processing
			for (int i=0; i<4; i++) fRec10_tmp[i]=fRec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec10[i] = (fConst4 * ((fRec11[i] - fRec11[i-1]) + fRec10[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec10_perm[i]=fRec10_tmp[count+i];
			
			// LOOP 0x39b3050
			// pre processing
			for (int i=0; i<4; i++) fRec18_tmp[i]=fRec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec18[i] = (fConst4 * ((fRec19[i] - fRec19[i-1]) + fRec18[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec18_perm[i]=fRec18_tmp[count+i];
			
			// LOOP 0x39c6e40
			// pre processing
			for (int i=0; i<4; i++) fRec26_tmp[i]=fRec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec26[i] = (fConst4 * ((fRec27[i] - fRec27[i-1]) + fRec26[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec26_perm[i]=fRec26_tmp[count+i];
			
			// LOOP 0x39daf80
			// pre processing
			for (int i=0; i<4; i++) fRec34_tmp[i]=fRec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec34[i] = (fConst4 * ((fRec35[i] - fRec35[i-1]) + fRec34[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec34_perm[i]=fRec34_tmp[count+i];
			
			// LOOP 0x39ef190
			// pre processing
			for (int i=0; i<4; i++) fRec42_tmp[i]=fRec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec42[i] = (fConst7 * ((fRec43[i] - fRec43[i-1]) + fRec42[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec42_perm[i]=fRec42_tmp[count+i];
			
			// LOOP 0x3a01380
			// pre processing
			for (int i=0; i<4; i++) fRec49_tmp[i]=fRec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec49[i] = (fConst7 * ((fRec50[i] - fRec50[i-1]) + fRec49[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec49_perm[i]=fRec49_tmp[count+i];
			
			// LOOP 0x3a13180
			// pre processing
			for (int i=0; i<4; i++) fRec56_tmp[i]=fRec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec56[i] = (fConst7 * ((fRec57[i] - fRec57[i-1]) + fRec56[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec56_perm[i]=fRec56_tmp[count+i];
			
			// LOOP 0x3a24cb0
			// pre processing
			for (int i=0; i<4; i++) fRec63_tmp[i]=fRec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec63[i] = (fConst7 * ((fRec64[i] - fRec64[i-1]) + fRec63[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec63_perm[i]=fRec63_tmp[count+i];
			
			// LOOP 0x3a36960
			// pre processing
			for (int i=0; i<4; i++) fRec70_tmp[i]=fRec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec70[i] = (fConst7 * ((fRec71[i] - fRec71[i-1]) + fRec70[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec70_perm[i]=fRec70_tmp[count+i];
			
			// LOOP 0x3a48c20
			// pre processing
			for (int i=0; i<4; i++) fRec78_tmp[i]=fRec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec78[i] = (fRec78[i-1] + (fConst8 * ((square_polyblep_precalc(fZec150[i], fZec151[i], (0.5f * fYec58[i-2]), fZec153[i]) + (2 * fYec59[i-1])) - fRec78[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec78_perm[i]=fRec78_tmp[count+i];
			
			// LOOP 0x3a5aae0
			// pre processing
			for (int i=0; i<4; i++) fRec85_tmp[i]=fRec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec85[i] = (fRec85[i-1] + (fConst8 * ((square_polyblep_precalc(fZec163[i], fZec164[i], (0.5f * fYec63[i-2]), fZec166[i]) + (2 * fYec64[i-1])) - fRec85[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec85_perm[i]=fRec85_tmp[count+i];
			
			// LOOP 0x3a6cad0
			// pre processing
			for (int i=0; i<4; i++) fRec92_tmp[i]=fRec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec92[i] = (fRec92[i-1] + (fConst8 * ((square_polyblep_precalc(fZec10[i], fZec11[i], (0.5f * fYec3[i-2]), fZec15[i]) + (2 * fYec65[i-1])) - fRec92[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec92_perm[i]=fRec92_tmp[count+i];
			
			// LOOP 0x3a71bb0
			// pre processing
			for (int i=0; i<4; i++) fRec94_tmp[i]=fRec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec94[i] = (fRec94[i-1] + (fConst9 * ((square_polyblep_precalc(fZec25[i], fZec26[i], (0.5f * fYec9[i-2]), fZec30[i]) + (2 * fYec66[i-1])) - fRec94[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec94_perm[i]=fRec94_tmp[count+i];
			
			// LOOP 0x3a77640
			// pre processing
			for (int i=0; i<4; i++) fRec96_tmp[i]=fRec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec96[i] = (fRec96[i-1] + (fConst9 * ((square_polyblep_precalc(fZec40[i], fZec41[i], (0.5f * fYec15[i-2]), fZec45[i]) + (2 * fYec67[i-1])) - fRec96[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec96_perm[i]=fRec96_tmp[count+i];
			
			// LOOP 0x3a7c8e0
			// pre processing
			for (int i=0; i<4; i++) fRec98_tmp[i]=fRec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec98[i] = (fRec98[i-1] + (fConst9 * ((square_polyblep_precalc(fZec55[i], fZec56[i], (0.5f * fYec21[i-2]), fZec60[i]) + (2 * fYec68[i-1])) - fRec98[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec98_perm[i]=fRec98_tmp[count+i];
			
			// LOOP 0x3a822a0
			// pre processing
			for (int i=0; i<4; i++) fRec100_tmp[i]=fRec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec100[i] = (fRec100[i-1] + (fConst9 * ((square_polyblep_precalc(fZec70[i], fZec71[i], (0.5f * fYec27[i-2]), fZec75[i]) + (2 * fYec69[i-1])) - fRec100[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec100_perm[i]=fRec100_tmp[count+i];
			
			// LOOP 0x3b95330
			// exec code
			for (int i=0; i<count; i++) {
				fZec222[i] = (fRec149[i] + (fRec147[i] + (fRec145[i] + (fRec143[i] + (fRec141[i] + (fRec139[i] + (fRec137[i] + (fRec135[i] + fZec221[i]))))))));
			}
			
			// LOOP 0x3ba1910
			// pre processing
			for (int i=0; i<4; i++) fYec131_tmp[i]=fYec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec131[i] = (fZec269[i] - fZec239[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec131_perm[i]=fYec131_tmp[count+i];
			
			// LOOP 0x3bea7a0
			// pre processing
			for (int i=0; i<4; i++) fRec187_tmp[i]=fRec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec187[i] = (fConst21 * ((fRec188[i] - fRec188[i-1]) + fRec187[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec187_perm[i]=fRec187_tmp[count+i];
			
			// LOOP 0x3bf52d0
			// pre processing
			for (int i=0; i<4; i++) fRec192_tmp[i]=fRec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec192[i] = (fConst21 * ((fRec193[i] - fRec193[i-1]) + fRec192[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec192_perm[i]=fRec192_tmp[count+i];
			
			// LOOP 0x3bff6e0
			// pre processing
			for (int i=0; i<4; i++) fRec197_tmp[i]=fRec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec197[i] = (fConst21 * ((fRec198[i] - fRec198[i-1]) + fRec197[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec197_perm[i]=fRec197_tmp[count+i];
			
			// LOOP 0x3c09b20
			// pre processing
			for (int i=0; i<4; i++) fRec202_tmp[i]=fRec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec202[i] = (fConst21 * ((fRec203[i] - fRec203[i-1]) + fRec202[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec202_perm[i]=fRec202_tmp[count+i];
			
			// LOOP 0x3c14050
			// pre processing
			for (int i=0; i<4; i++) fRec207_tmp[i]=fRec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec207[i] = (fConst21 * ((fRec208[i] - fRec208[i-1]) + fRec207[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec207_perm[i]=fRec207_tmp[count+i];
			
			// LOOP 0x3c1e560
			// pre processing
			for (int i=0; i<4; i++) fRec212_tmp[i]=fRec212_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec212[i] = (fConst21 * ((fRec213[i] - fRec213[i-1]) + fRec212[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec212_perm[i]=fRec212_tmp[count+i];
			
			// LOOP 0x3c28ac0
			// pre processing
			for (int i=0; i<4; i++) fRec217_tmp[i]=fRec217_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec217[i] = (fConst21 * ((fRec218[i] - fRec218[i-1]) + fRec217[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec217_perm[i]=fRec217_tmp[count+i];
			
			// LOOP 0x3c33030
			// pre processing
			for (int i=0; i<4; i++) fRec222_tmp[i]=fRec222_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec222[i] = (fConst21 * ((fRec223[i] - fRec223[i-1]) + fRec222[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec222_perm[i]=fRec222_tmp[count+i];
			
			// LOOP 0x3c3af40
			// pre processing
			for (int i=0; i<4; i++) fRec226_tmp[i]=fRec226_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec226[i] = (fConst21 * ((fRec227[i] - fRec227[i-1]) + fRec226[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec226_perm[i]=fRec226_tmp[count+i];
			
			// LOOP 0x3c431d0
			// pre processing
			for (int i=0; i<4; i++) fRec230_tmp[i]=fRec230_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec230[i] = (fConst21 * ((fRec231[i] - fRec231[i-1]) + fRec230[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec230_perm[i]=fRec230_tmp[count+i];
			
			// LOOP 0x3c4b0c0
			// pre processing
			for (int i=0; i<4; i++) fRec234_tmp[i]=fRec234_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec234[i] = (fConst21 * ((fRec235[i] - fRec235[i-1]) + fRec234[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec234_perm[i]=fRec234_tmp[count+i];
			
			// LOOP 0x3c53070
			// pre processing
			for (int i=0; i<4; i++) fRec238_tmp[i]=fRec238_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec238[i] = (fConst21 * ((fRec239[i] - fRec239[i-1]) + fRec238[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec238_perm[i]=fRec238_tmp[count+i];
			
			// LOOP 0x3c5b070
			// pre processing
			for (int i=0; i<4; i++) fRec242_tmp[i]=fRec242_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec242[i] = (fConst23 * ((fRec243[i] - fRec243[i-1]) + fRec242[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec242_perm[i]=fRec242_tmp[count+i];
			
			// LOOP 0x3c5e9b0
			// pre processing
			for (int i=0; i<4; i++) fRec244_tmp[i]=fRec244_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec244[i] = (fConst23 * ((fRec245[i] - fRec245[i-1]) + fRec244[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec244_perm[i]=fRec244_tmp[count+i];
			
			// LOOP 0x3c62190
			// pre processing
			for (int i=0; i<4; i++) fRec246_tmp[i]=fRec246_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec246[i] = (fConst23 * ((fRec247[i] - fRec247[i-1]) + fRec246[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec246_perm[i]=fRec246_tmp[count+i];
			
			// LOOP 0x3c659f0
			// pre processing
			for (int i=0; i<4; i++) fRec248_tmp[i]=fRec248_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec248[i] = (fConst23 * ((fRec249[i] - fRec249[i-1]) + fRec248[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec248_perm[i]=fRec248_tmp[count+i];
			
			// LOOP 0x3c692b0
			// pre processing
			for (int i=0; i<4; i++) fRec250_tmp[i]=fRec250_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec250[i] = (fConst23 * ((fRec251[i] - fRec251[i-1]) + fRec250[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec250_perm[i]=fRec250_tmp[count+i];
			
			// LOOP 0x3c6d0c0
			// pre processing
			for (int i=0; i<4; i++) fRec252_tmp[i]=fRec252_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec252[i] = (fConst23 * ((fRec253[i] - fRec253[i-1]) + fRec252[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec252_perm[i]=fRec252_tmp[count+i];
			
			// LOOP 0x3c70ba0
			// pre processing
			for (int i=0; i<4; i++) fRec254_tmp[i]=fRec254_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec254[i] = (fConst23 * ((fRec255[i] - fRec255[i-1]) + fRec254[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec254_perm[i]=fRec254_tmp[count+i];
			
			// LOOP 0x3c740e0
			// pre processing
			for (int i=0; i<4; i++) fRec256_tmp[i]=fRec256_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec256[i] = (fConst23 * ((fRec257[i] - fRec257[i-1]) + fRec256[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec256_perm[i]=fRec256_tmp[count+i];
			
			// LOOP 0x3c77750
			// pre processing
			for (int i=0; i<4; i++) fRec258_tmp[i]=fRec258_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec258[i] = (fConst23 * ((fRec259[i] - fRec259[i-1]) + fRec258[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec258_perm[i]=fRec258_tmp[count+i];
			
			// LOOP 0x3c7b060
			// pre processing
			for (int i=0; i<4; i++) fRec260_tmp[i]=fRec260_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec260[i] = (fConst23 * ((fRec261[i] - fRec261[i-1]) + fRec260[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec260_perm[i]=fRec260_tmp[count+i];
			
			// LOOP 0x3c7e780
			// pre processing
			for (int i=0; i<4; i++) fRec262_tmp[i]=fRec262_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec262[i] = (fConst23 * ((fRec263[i] - fRec263[i-1]) + fRec262[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec262_perm[i]=fRec262_tmp[count+i];
			
			// LOOP 0x3c81e40
			// pre processing
			for (int i=0; i<4; i++) fRec264_tmp[i]=fRec264_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec264[i] = (fConst23 * ((fRec265[i] - fRec265[i-1]) + fRec264[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec264_perm[i]=fRec264_tmp[count+i];
			
			// LOOP 0x3c85530
			// pre processing
			for (int i=0; i<4; i++) fRec266_tmp[i]=fRec266_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec266[i] = (fConst4 * ((fRec267[i] - fRec267[i-1]) + fRec266[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec266_perm[i]=fRec266_tmp[count+i];
			
			// LOOP 0x3c88be0
			// pre processing
			for (int i=0; i<4; i++) fRec268_tmp[i]=fRec268_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec268[i] = (fConst4 * ((fRec269[i] - fRec269[i-1]) + fRec268[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec268_perm[i]=fRec268_tmp[count+i];
			
			// LOOP 0x3c8c340
			// pre processing
			for (int i=0; i<4; i++) fRec270_tmp[i]=fRec270_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec270[i] = (fConst4 * ((fRec271[i] - fRec271[i-1]) + fRec270[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec270_perm[i]=fRec270_tmp[count+i];
			
			// LOOP 0x3c8fad0
			// pre processing
			for (int i=0; i<4; i++) fRec272_tmp[i]=fRec272_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec272[i] = (fConst4 * ((fRec273[i] - fRec273[i-1]) + fRec272[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec272_perm[i]=fRec272_tmp[count+i];
			
			// LOOP 0x3c93290
			// pre processing
			for (int i=0; i<4; i++) fRec274_tmp[i]=fRec274_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec274[i] = (fConst4 * ((fRec275[i] - fRec275[i-1]) + fRec274[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec274_perm[i]=fRec274_tmp[count+i];
			
			// LOOP 0x3c96660
			// pre processing
			for (int i=0; i<4; i++) fRec276_tmp[i]=fRec276_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec276[i] = (fConst4 * ((fRec277[i] - fRec277[i-1]) + fRec276[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec276_perm[i]=fRec276_tmp[count+i];
			
			// LOOP 0x3c99e60
			// pre processing
			for (int i=0; i<4; i++) fRec278_tmp[i]=fRec278_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec278[i] = (fConst4 * ((fRec279[i] - fRec279[i-1]) + fRec278[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec278_perm[i]=fRec278_tmp[count+i];
			
			// SECTION : 29
			// LOOP 0x3a48730
			// pre processing
			for (int i=0; i<4; i++) fRec77_tmp[i]=fRec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec77[i] = (fConst7 * ((fRec78[i] - fRec78[i-1]) + fRec77[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec77_perm[i]=fRec77_tmp[count+i];
			
			// LOOP 0x3a5a5f0
			// pre processing
			for (int i=0; i<4; i++) fRec84_tmp[i]=fRec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec84[i] = (fConst7 * ((fRec85[i] - fRec85[i-1]) + fRec84[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec84_perm[i]=fRec84_tmp[count+i];
			
			// LOOP 0x3a6c5e0
			// pre processing
			for (int i=0; i<4; i++) fRec91_tmp[i]=fRec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec91[i] = (fConst7 * ((fRec92[i] - fRec92[i-1]) + fRec91[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec91_perm[i]=fRec91_tmp[count+i];
			
			// LOOP 0x3a716c0
			// pre processing
			for (int i=0; i<4; i++) fRec93_tmp[i]=fRec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec93[i] = (fConst7 * ((fRec94[i] - fRec94[i-1]) + fRec93[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec93_perm[i]=fRec93_tmp[count+i];
			
			// LOOP 0x3a77150
			// pre processing
			for (int i=0; i<4; i++) fRec95_tmp[i]=fRec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec95[i] = (fConst7 * ((fRec96[i] - fRec96[i-1]) + fRec95[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec95_perm[i]=fRec95_tmp[count+i];
			
			// LOOP 0x3a7c3f0
			// pre processing
			for (int i=0; i<4; i++) fRec97_tmp[i]=fRec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec97[i] = (fConst7 * ((fRec98[i] - fRec98[i-1]) + fRec97[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec97_perm[i]=fRec97_tmp[count+i];
			
			// LOOP 0x3a81db0
			// pre processing
			for (int i=0; i<4; i++) fRec99_tmp[i]=fRec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec99[i] = (fConst7 * ((fRec100[i] - fRec100[i-1]) + fRec99[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec99_perm[i]=fRec99_tmp[count+i];
			
			// LOOP 0x3b95220
			// exec code
			for (int i=0; i<count; i++) {
				fZec223[i] = (fRec173[i] + (fRec171[i] + (fRec169[i] + (fRec167[i] + (fRec165[i] + (fRec163[i] + (fRec161[i] + (fRec159[i] + (fRec157[i] + (fRec155[i] + (fRec153[i] + (fRec151[i] + fZec222[i]))))))))))));
			}
			
			// LOOP 0x3ba13b0
			// pre processing
			for (int i=0; i<4; i++) fRec181_tmp[i]=fRec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec181[i] = (fConst19 * ((fZec269[i] - (fZec239[i] + fYec131[i-1])) + fRec181[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec181_perm[i]=fRec181_tmp[count+i];
			
			// LOOP 0x3bea600
			// exec code
			for (int i=0; i<count; i++) {
				fZec322[i] = ((fRec250[i] * fZec171[i]) + ((fRec248[i] * fZec170[i]) + ((fRec246[i] * fZec169[i]) + ((fRec244[i] * fZec168[i]) + ((fRec242[i] * fZec167[i]) + ((fRec238[i] * fZec154[i]) + ((fRec234[i] * fZec141[i]) + ((fRec230[i] * fZec128[i]) + ((fRec226[i] * fZec115[i]) + ((fRec222[i] * fZec102[i]) + ((fRec217[i] * fZec89[i]) + ((fRec212[i] * fZec76[i]) + ((fRec207[i] * fZec61[i]) + ((fRec202[i] * fZec46[i]) + ((fRec197[i] * fZec31[i]) + ((fRec192[i] * fZec16[i]) + (fRec187[i] * fZec0[i])))))))))))))))));
			}
			
			// LOOP 0x3ccf670
			// exec code
			for (int i=0; i<count; i++) {
				fZec330[i] = ((fRec70[i] * fZec171[i]) + ((fRec63[i] * fZec170[i]) + ((fRec56[i] * fZec169[i]) + ((fRec49[i] * fZec168[i]) + ((fRec42[i] * fZec167[i]) + ((fRec34[i] * fZec154[i]) + ((fRec26[i] * fZec141[i]) + ((fRec18[i] * fZec128[i]) + ((fRec10[i] * fZec115[i]) + ((fRec1[i] * fZec102[i]) + ((fRec278[i] * fZec89[i]) + ((fRec276[i] * fZec76[i]) + ((fRec274[i] * fZec61[i]) + ((fRec272[i] * fZec46[i]) + ((fRec270[i] * fZec31[i]) + ((fRec268[i] * fZec16[i]) + (fRec266[i] * fZec0[i])))))))))))))))));
			}
			
			// LOOP 0x3cd4550
			// exec code
			for (int i=0; i<count; i++) {
				fZec331[i] = ((fRec274[i] * fZec171[i]) + ((fRec272[i] * fZec170[i]) + ((fRec270[i] * fZec169[i]) + ((fRec268[i] * fZec168[i]) + ((fRec266[i] * fZec167[i]) + ((fRec264[i] * fZec154[i]) + ((fRec262[i] * fZec141[i]) + ((fRec260[i] * fZec128[i]) + ((fRec258[i] * fZec115[i]) + ((fRec256[i] * fZec102[i]) + ((fRec254[i] * fZec89[i]) + ((fRec252[i] * fZec76[i]) + ((fRec250[i] * fZec61[i]) + ((fRec248[i] * fZec46[i]) + ((fRec246[i] * fZec31[i]) + ((fRec244[i] * fZec16[i]) + (fRec242[i] * fZec0[i])))))))))))))))));
			}
			
			// SECTION : 30
			// LOOP 0x3ba1240
			// exec code
			for (int i=0; i<count; i++) {
				fZec270[i] = (0.002f * (fRec181[i] * fSlow1));
			}
			
			// LOOP 0x3bea4c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec323[i] = (0.41975f * ((fRec125[i] * fZec215[i]) + ((fRec123[i] * fZec214[i]) + ((fRec121[i] * fZec213[i]) + ((fRec119[i] * fZec212[i]) + ((fRec117[i] * fZec211[i]) + ((fRec115[i] * fZec210[i]) + ((fRec113[i] * fZec209[i]) + ((fRec111[i] * fZec208[i]) + ((fRec109[i] * fZec207[i]) + ((fRec107[i] * fZec206[i]) + ((fRec105[i] * fZec205[i]) + ((fRec103[i] * fZec204[i]) + ((fRec101[i] * fZec203[i]) + ((fRec99[i] * fZec202[i]) + ((fRec97[i] * fZec201[i]) + ((fRec95[i] * fZec200[i]) + ((fRec93[i] * fZec199[i]) + ((fRec91[i] * fZec198[i]) + ((fRec84[i] * fZec197[i]) + ((fRec77[i] * fZec196[i]) + ((fRec70[i] * fZec195[i]) + ((fRec63[i] * fZec194[i]) + ((fRec56[i] * fZec193[i]) + ((fRec49[i] * fZec192[i]) + ((fRec42[i] * fZec191[i]) + ((fRec34[i] * fZec190[i]) + ((fRec26[i] * fZec189[i]) + ((fRec18[i] * fZec188[i]) + ((fRec10[i] * fZec187[i]) + ((fRec1[i] * fZec186[i]) + ((fRec278[i] * fZec185[i]) + ((fRec276[i] * fZec184[i]) + ((fRec274[i] * fZec183[i]) + ((fRec272[i] * fZec182[i]) + ((fRec270[i] * fZec181[i]) + ((fRec268[i] * fZec180[i]) + ((fRec266[i] * fZec179[i]) + ((fRec264[i] * fZec178[i]) + ((fRec262[i] * fZec177[i]) + ((fRec260[i] * fZec176[i]) + ((fRec258[i] * fZec175[i]) + ((fRec256[i] * fZec174[i]) + ((fRec254[i] * fZec173[i]) + ((fRec252[i] * fZec172[i]) + (fSlow36 * fZec322[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3caba50
			// exec code
			for (int i=0; i<count; i++) {
				fZec324[i] = (1.679f * ((fSlow36 * (fRec238[i] + (fRec234[i] + (fRec230[i] + (fRec226[i] + (fRec222[i] + (fRec217[i] + (fRec212[i] + (fRec207[i] + (fRec202[i] + (fRec197[i] + (fRec192[i] + (fRec187[i] + (fRec250[i] + (fRec248[i] + (fRec246[i] + (fRec242[i] + fRec244[i]))))))))))))))))) + (fRec264[i] + (fRec262[i] + (fRec260[i] + (fRec258[i] + (fRec256[i] + (fRec254[i] + (fRec252[i] + (fRec278[i] + (fRec276[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec268[i] + (fRec266[i] + (fRec34[i] + (fRec26[i] + (fRec18[i] + (fRec10[i] + (fRec1[i] + (fRec63[i] + (fRec56[i] + (fRec49[i] + (fRec42[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec77[i] + (fRec70[i] + fZec220[i])))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3cbe1e0
			// pre processing
			for (int i=0; i<4; i++) iRec285_tmp[i]=iRec285_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec285[i] = (12345 + (1103515245 * iRec285[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) iRec285_perm[i]=iRec285_tmp[count+i];
			
			// LOOP 0x3ce99d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec332[i] = (0.25f * ((fRec149[i] * fZec215[i]) + ((fRec147[i] * fZec214[i]) + ((fRec145[i] * fZec213[i]) + ((fRec143[i] * fZec212[i]) + ((fRec141[i] * fZec211[i]) + ((fRec139[i] * fZec210[i]) + ((fRec137[i] * fZec209[i]) + ((fRec135[i] * fZec208[i]) + ((fRec133[i] * fZec207[i]) + ((fRec131[i] * fZec206[i]) + ((fRec129[i] * fZec205[i]) + ((fRec127[i] * fZec204[i]) + ((fRec125[i] * fZec203[i]) + ((fRec123[i] * fZec202[i]) + ((fRec121[i] * fZec201[i]) + ((fRec119[i] * fZec200[i]) + ((fRec117[i] * fZec199[i]) + ((fRec115[i] * fZec198[i]) + ((fRec113[i] * fZec197[i]) + ((fRec111[i] * fZec196[i]) + ((fRec109[i] * fZec195[i]) + ((fRec107[i] * fZec194[i]) + ((fRec105[i] * fZec193[i]) + ((fRec103[i] * fZec192[i]) + ((fRec101[i] * fZec191[i]) + ((fRec99[i] * fZec190[i]) + ((fRec97[i] * fZec189[i]) + ((fRec95[i] * fZec188[i]) + ((fRec93[i] * fZec187[i]) + ((fRec91[i] * fZec186[i]) + ((fRec84[i] * fZec185[i]) + ((fRec77[i] * fZec184[i]) + ((fRec70[i] * fZec183[i]) + ((fRec63[i] * fZec182[i]) + ((fRec56[i] * fZec181[i]) + ((fRec49[i] * fZec180[i]) + ((fRec42[i] * fZec179[i]) + ((fRec34[i] * fZec178[i]) + ((fRec26[i] * fZec177[i]) + ((fRec18[i] * fZec176[i]) + ((fRec10[i] * fZec175[i]) + ((fRec1[i] * fZec174[i]) + ((fRec278[i] * fZec173[i]) + ((fRec276[i] * fZec172[i]) + (fSlow36 * fZec331[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3cfb9b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec333[i] = ((fSlow36 * (fRec264[i] + (fRec262[i] + (fRec260[i] + (fRec258[i] + (fRec256[i] + (fRec254[i] + (fRec252[i] + (fRec250[i] + (fRec248[i] + (fRec246[i] + (fRec244[i] + (fRec242[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec266[i] + fRec268[i]))))))))))))))))) + (fRec278[i] + (fRec276[i] + (fRec34[i] + (fRec26[i] + (fRec18[i] + (fRec10[i] + (fRec1[i] + (fRec63[i] + (fRec56[i] + (fRec49[i] + (fRec42[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec77[i] + (fRec70[i] + fZec222[i]))))))))))))))))))));
			}
			
			// LOOP 0x3d0ff30
			// exec code
			for (int i=0; i<count; i++) {
				fZec335[i] = (0.25f * (fZec238[i] + ((fRec171[i] * fZec214[i]) + ((fRec169[i] * fZec213[i]) + ((fRec167[i] * fZec212[i]) + ((fRec165[i] * fZec211[i]) + ((fRec163[i] * fZec210[i]) + ((fRec161[i] * fZec209[i]) + ((fRec159[i] * fZec208[i]) + ((fRec157[i] * fZec207[i]) + ((fRec155[i] * fZec206[i]) + ((fRec153[i] * fZec205[i]) + ((fRec151[i] * fZec204[i]) + ((fRec149[i] * fZec203[i]) + ((fRec147[i] * fZec202[i]) + ((fRec145[i] * fZec201[i]) + ((fRec143[i] * fZec200[i]) + ((fRec141[i] * fZec199[i]) + ((fRec139[i] * fZec198[i]) + ((fRec137[i] * fZec197[i]) + ((fRec135[i] * fZec196[i]) + ((fRec133[i] * fZec195[i]) + ((fRec131[i] * fZec194[i]) + ((fRec129[i] * fZec193[i]) + ((fRec127[i] * fZec192[i]) + ((fRec125[i] * fZec191[i]) + ((fRec123[i] * fZec190[i]) + ((fRec121[i] * fZec189[i]) + ((fRec119[i] * fZec188[i]) + ((fRec117[i] * fZec187[i]) + ((fRec115[i] * fZec186[i]) + ((fRec113[i] * fZec185[i]) + ((fRec111[i] * fZec184[i]) + ((fRec109[i] * fZec183[i]) + ((fRec107[i] * fZec182[i]) + ((fRec105[i] * fZec181[i]) + ((fRec103[i] * fZec180[i]) + ((fRec101[i] * fZec179[i]) + ((fRec99[i] * fZec178[i]) + ((fRec97[i] * fZec177[i]) + ((fRec95[i] * fZec176[i]) + ((fRec93[i] * fZec175[i]) + ((fRec91[i] * fZec174[i]) + ((fRec84[i] * fZec173[i]) + ((fRec77[i] * fZec172[i]) + (fSlow36 * fZec330[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3d216c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec336[i] = ((fSlow36 * (fRec278[i] + (fRec276[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec268[i] + (fRec266[i] + (fRec34[i] + (fRec26[i] + (fRec18[i] + (fRec10[i] + (fRec1[i] + (fRec63[i] + (fRec56[i] + (fRec49[i] + (fRec70[i] + fRec42[i]))))))))))))))))) + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec77[i] + fZec223[i]))))))));
			}
			
			// LOOP 0x3d34330
			// exec code
			for (int i=0; i<count; i++) {
				fZec338[i] = (0.25f * (fZec238[i] + (fZec237[i] + (fZec236[i] + (fZec235[i] + (fZec234[i] + (fZec233[i] + (fZec232[i] + (fZec231[i] + (fZec230[i] + (fZec229[i] + (fZec228[i] + (fZec227[i] + (fZec226[i] + ((fRec171[i] * fZec202[i]) + ((fRec169[i] * fZec201[i]) + ((fRec167[i] * fZec200[i]) + ((fRec165[i] * fZec199[i]) + ((fRec163[i] * fZec198[i]) + ((fRec161[i] * fZec197[i]) + ((fRec159[i] * fZec196[i]) + ((fRec157[i] * fZec195[i]) + ((fRec155[i] * fZec194[i]) + ((fRec153[i] * fZec193[i]) + ((fRec151[i] * fZec192[i]) + ((fRec149[i] * fZec191[i]) + ((fRec147[i] * fZec190[i]) + ((fRec145[i] * fZec189[i]) + ((fRec143[i] * fZec188[i]) + ((fRec141[i] * fZec187[i]) + ((fRec139[i] * fZec186[i]) + ((fRec137[i] * fZec185[i]) + ((fRec135[i] * fZec184[i]) + ((fRec133[i] * fZec183[i]) + ((fRec131[i] * fZec182[i]) + ((fRec129[i] * fZec181[i]) + ((fRec127[i] * fZec180[i]) + ((fRec125[i] * fZec179[i]) + ((fRec123[i] * fZec178[i]) + ((fRec121[i] * fZec177[i]) + ((fRec119[i] * fZec176[i]) + ((fRec117[i] * fZec175[i]) + ((fRec115[i] * fZec174[i]) + ((fRec113[i] * fZec173[i]) + ((fRec111[i] * fZec172[i]) + (fSlow36 * ((fRec109[i] * fZec171[i]) + ((fRec107[i] * fZec170[i]) + ((fRec105[i] * fZec169[i]) + ((fRec103[i] * fZec168[i]) + ((fRec101[i] * fZec167[i]) + ((fRec99[i] * fZec154[i]) + ((fRec97[i] * fZec141[i]) + ((fRec95[i] * fZec128[i]) + ((fRec93[i] * fZec115[i]) + ((fRec91[i] * fZec102[i]) + ((fRec84[i] * fZec89[i]) + ((fRec77[i] * fZec76[i]) + ((fRec70[i] * fZec61[i]) + ((fRec63[i] * fZec46[i]) + ((fRec56[i] * fZec31[i]) + ((fRec49[i] * fZec16[i]) + (fRec42[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3d4a540
			// exec code
			for (int i=0; i<count; i++) {
				fZec339[i] = ((fSlow36 * (fRec63[i] + (fRec56[i] + (fRec49[i] + (fRec42[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec77[i] + (fRec70[i] + fZec218[i]))))))))))))) + (fRec185[i] + (fRec184[i] + (fRec183[i] + (fRec182[i] + (fRec180[i] + (fRec179[i] + (fRec178[i] + (fRec177[i] + (fRec176[i] + (fRec175[i] + (fRec174[i] + ((2 * fRec173[i]) + (fRec171[i] + (fRec169[i] + (fRec167[i] + (fRec165[i] + (fRec163[i] + (fRec161[i] + (fRec159[i] + (fRec157[i] + (fRec155[i] + (fRec153[i] + (fRec151[i] + (fRec149[i] + (fRec147[i] + (fRec145[i] + (fRec143[i] + (fRec141[i] + (fRec139[i] + (fRec137[i] + (fRec135[i] + (fRec133[i] + (fRec131[i] + (fRec129[i] + (fRec127[i] + (fRec125[i] + (fRec123[i] + (fRec121[i] + (fRec119[i] + (fRec117[i] + (fRec115[i] + (fRec111[i] + fRec113[i])))))))))))))))))))))))))))))))))))))))))));
			}
			
			// SECTION : 31
			// LOOP 0x3bea3b0
			// pre processing
			for (int i=0; i<4; i++) fYec194_tmp[i]=fYec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec194[i] = (fZec324[i] - fZec323[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec194_perm[i]=fYec194_tmp[count+i];
			
			// LOOP 0x3cbdf10
			// exec code
			for (int i=0; i<count; i++) {
				fZec326[i] = faustpower<2>(float(min(1.0f, max(-1.0f, (fZec270[i] + ((4.656612875245796e-16f * iRec285[i]) + fZec239[i]))))));
			}
			
			// LOOP 0x3ce98c0
			// pre processing
			for (int i=0; i<4; i++) fYec199_tmp[i]=fYec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec199[i] = (fZec333[i] - fZec332[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec199_perm[i]=fYec199_tmp[count+i];
			
			// LOOP 0x3d0fe20
			// pre processing
			for (int i=0; i<4; i++) fYec202_tmp[i]=fYec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec202[i] = (fZec336[i] - fZec335[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec202_perm[i]=fYec202_tmp[count+i];
			
			// LOOP 0x3d34220
			// pre processing
			for (int i=0; i<4; i++) fYec205_tmp[i]=fYec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec205[i] = (fZec339[i] - fZec338[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec205_perm[i]=fYec205_tmp[count+i];
			
			// SECTION : 32
			// LOOP 0x3be9ec0
			// pre processing
			for (int i=0; i<4; i++) fRec186_tmp[i]=fRec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec186[i] = (fConst19 * ((fZec324[i] - (fZec323[i] + fYec194[i-1])) + fRec186[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec186_perm[i]=fRec186_tmp[count+i];
			
			// LOOP 0x3cbd900
			// pre processing
			for (int i=0; i<4; i++) fRec282_tmp[i]=fRec282_perm[i];
			for (int i=0; i<4; i++) iRec283_tmp[i]=iRec283_perm[i];
			for (int i=0; i<4; i++) fRec284_tmp[i]=fRec284_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iZec327[i] = int((iRec283[i-1] < iConst28));
				fRec282[i] = ((iZec327[i])?(fRec282[i-1] + fZec326[i]):fZec326[i]);
				iRec283[i] = ((iZec327[i])?(1 + iRec283[i-1]):1);
				fRec284[i] = ((iZec327[i])?fRec284[i-1]:fRec282[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec284_perm[i]=fRec284_tmp[count+i];
			for (int i=0; i<4; i++) iRec283_perm[i]=iRec283_tmp[count+i];
			for (int i=0; i<4; i++) fRec282_perm[i]=fRec282_tmp[count+i];
			
			// LOOP 0x3ce9340
			// pre processing
			for (int i=0; i<4; i++) fRec292_tmp[i]=fRec292_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec292[i] = (fConst19 * ((fZec333[i] - (fZec332[i] + fYec199[i-1])) + fRec292[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec292_perm[i]=fRec292_tmp[count+i];
			
			// LOOP 0x3d0f8a0
			// pre processing
			for (int i=0; i<4; i++) fRec295_tmp[i]=fRec295_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec295[i] = (fConst19 * ((fZec336[i] - (fZec335[i] + fYec202[i-1])) + fRec295[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec295_perm[i]=fRec295_tmp[count+i];
			
			// LOOP 0x3d33ca0
			// pre processing
			for (int i=0; i<4; i++) fRec298_tmp[i]=fRec298_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec298[i] = (fConst19 * ((fZec339[i] - (fZec338[i] + fYec205[i-1])) + fRec298[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec298_perm[i]=fRec298_tmp[count+i];
			
			// SECTION : 33
			// LOOP 0x39846c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec216[i] = ((fRec180[i] * fZec215[i]) + ((fRec179[i] * fZec214[i]) + ((fRec178[i] * fZec213[i]) + ((fRec177[i] * fZec212[i]) + ((fRec176[i] * fZec211[i]) + ((fRec175[i] * fZec210[i]) + ((fRec174[i] * fZec209[i]) + ((fRec173[i] * fZec208[i]) + ((fRec171[i] * fZec207[i]) + ((fRec169[i] * fZec206[i]) + ((fRec167[i] * fZec205[i]) + ((fRec165[i] * fZec204[i]) + ((fRec163[i] * fZec203[i]) + ((fRec161[i] * fZec202[i]) + ((fRec159[i] * fZec201[i]) + ((fRec157[i] * fZec200[i]) + ((fRec155[i] * fZec199[i]) + ((fRec153[i] * fZec198[i]) + ((fRec151[i] * fZec197[i]) + ((fRec149[i] * fZec196[i]) + ((fRec147[i] * fZec195[i]) + ((fRec145[i] * fZec194[i]) + ((fRec143[i] * fZec193[i]) + ((fRec141[i] * fZec192[i]) + ((fRec139[i] * fZec191[i]) + ((fRec137[i] * fZec190[i]) + ((fRec135[i] * fZec189[i]) + ((fRec133[i] * fZec188[i]) + ((fRec131[i] * fZec187[i]) + ((fRec129[i] * fZec186[i]) + ((fRec127[i] * fZec185[i]) + ((fRec125[i] * fZec184[i]) + ((fRec123[i] * fZec183[i]) + ((fRec121[i] * fZec182[i]) + ((fRec119[i] * fZec181[i]) + ((fRec117[i] * fZec180[i]) + ((fRec115[i] * fZec179[i]) + ((fRec113[i] * fZec178[i]) + ((fRec111[i] * fZec177[i]) + ((fRec109[i] * fZec176[i]) + ((fRec107[i] * fZec175[i]) + ((fRec105[i] * fZec174[i]) + ((fRec103[i] * fZec173[i]) + ((fRec101[i] * fZec172[i]) + (fSlow36 * ((fRec99[i] * fZec171[i]) + ((fRec97[i] * fZec170[i]) + ((fRec95[i] * fZec169[i]) + ((fRec93[i] * fZec168[i]) + ((fRec91[i] * fZec167[i]) + ((fRec84[i] * fZec154[i]) + ((fRec77[i] * fZec141[i]) + ((fRec70[i] * fZec128[i]) + ((fRec63[i] * fZec115[i]) + ((fRec56[i] * fZec102[i]) + ((fRec49[i] * fZec89[i]) + ((fRec42[i] * fZec76[i]) + ((fRec34[i] * fZec61[i]) + ((fRec26[i] * fZec46[i]) + ((fRec18[i] * fZec31[i]) + ((fRec10[i] * fZec16[i]) + (fRec1[i] * fZec0[i]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3be9db0
			// exec code
			for (int i=0; i<count; i++) {
				fZec325[i] = (fZec323[i] + (0.002f * (fRec186[i] * fSlow1)));
			}
			
			// LOOP 0x3cbd7c0
			// pre processing
			for (int i=0; i<4; i++) fYec195_tmp[i]=fYec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec195[i] = log10f(sqrtf((fConst29 * fRec284[i])));
			}
			// post processing
			for (int i=0; i<4; i++) fYec195_perm[i]=fYec195_tmp[count+i];
			
			// LOOP 0x3ce91d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec334[i] = (fZec332[i] + (0.002f * (fRec292[i] * fSlow1)));
			}
			
			// LOOP 0x3d0f730
			// exec code
			for (int i=0; i<count; i++) {
				fZec337[i] = (fZec335[i] + (0.002f * (fRec295[i] * fSlow1)));
			}
			
			// LOOP 0x3d33b30
			// exec code
			for (int i=0; i<count; i++) {
				fZec340[i] = (fZec338[i] + (0.002f * (fRec298[i] * fSlow1)));
			}
			
			// SECTION : 34
			// LOOP 0x3984580
			// exec code
			for (int i=0; i<count; i++) {
				fZec217[i] = (0.25f * fZec216[i]);
			}
			
			// LOOP 0x3b95110
			// exec code
			for (int i=0; i<count; i++) {
				fZec224[i] = ((fSlow36 * (fRec34[i] + (fRec26[i] + (fRec18[i] + (fRec10[i] + (fRec1[i] + (fRec63[i] + (fRec56[i] + (fRec49[i] + (fRec42[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec70[i] + fRec77[i]))))))))))))))))) + (fRec180[i] + (fRec179[i] + (fRec178[i] + (fRec177[i] + (fRec176[i] + (fRec175[i] + (fRec174[i] + fZec223[i]))))))));
			}
			
			// LOOP 0x3cbd6b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec328[i] = (2e+01f * fYec195[i]);
			}
			
			// LOOP 0x3cc3fa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec329[i] = (2e+01f * fYec195[i-1]);
			}
			
			// LOOP 0x3ce1950
			// pre processing
			for (int i=0; i<4; i++) fYec197_tmp[i]=fYec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec197[i] = (fSlow90 * fZec325[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec197_perm[i]=fYec197_tmp[count+i];
			
			// LOOP 0x3ce90c0
			// pre processing
			for (int i=0; i<4; i++) fYec200_tmp[i]=fYec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec200[i] = (fSlow93 * fZec334[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec200_perm[i]=fYec200_tmp[count+i];
			
			// LOOP 0x3d0f620
			// pre processing
			for (int i=0; i<4; i++) fYec203_tmp[i]=fYec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec203[i] = (fSlow96 * fZec337[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec203_perm[i]=fYec203_tmp[count+i];
			
			// LOOP 0x3d33a20
			// pre processing
			for (int i=0; i<4; i++) fYec206_tmp[i]=fYec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec206[i] = (fSlow99 * fZec340[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec206_perm[i]=fYec206_tmp[count+i];
			
			// SECTION : 35
			// LOOP 0x3984470
			// pre processing
			for (int i=0; i<4; i++) fYec122_tmp[i]=fYec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec122[i] = (fZec224[i] - fZec217[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec122_perm[i]=fYec122_tmp[count+i];
			
			// LOOP 0x3cbd2b0
			// pre processing
			for (int i=0; i<4; i++) fRec281_tmp[i]=fRec281_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec281[i] = min(1.0f, max(0.0f, ((((int((fZec328[i] > -25.0f)))?((int((fZec329[i] < -25.0f)))?1.0f:0.0f):0.0f) + fRec281[i-1]) - ((int((fZec329[i] > -35.0f)))?((int((fZec328[i] < -35.0f)))?1.0f:0.0f):0.0f))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec281_perm[i]=fRec281_tmp[count+i];
			
			// LOOP 0x3ce13d0
			// pre processing
			for (int i=0; i<4; i++) fRec289_tmp[i]=fRec289_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec289[i] = (fConst32 * ((fYec197[i] - fYec197[i-1]) + fRec289[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec289_perm[i]=fRec289_tmp[count+i];
			
			// LOOP 0x3ce8b40
			// pre processing
			for (int i=0; i<4; i++) fRec291_tmp[i]=fRec291_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec291[i] = (fConst34 * ((fYec200[i] - fYec200[i-1]) + fRec291[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec291_perm[i]=fRec291_tmp[count+i];
			
			// LOOP 0x3d0f0a0
			// pre processing
			for (int i=0; i<4; i++) fRec294_tmp[i]=fRec294_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec294[i] = (fConst36 * ((fYec203[i] - fYec203[i-1]) + fRec294[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec294_perm[i]=fRec294_tmp[count+i];
			
			// LOOP 0x3d334a0
			// pre processing
			for (int i=0; i<4; i++) fRec297_tmp[i]=fRec297_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec297[i] = (fConst38 * ((fYec206[i] - fYec206[i-1]) + fRec297[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec297_perm[i]=fRec297_tmp[count+i];
			
			// LOOP 0x3d8ef70
			// exec code
			for (int i=0; i<count; i++) {
				fZec341[i] = (0.25f * ((fRec177[i] * fZec215[i]) + ((fRec176[i] * fZec214[i]) + ((fRec175[i] * fZec213[i]) + ((fRec174[i] * fZec212[i]) + ((fRec173[i] * fZec211[i]) + ((fRec185[i] * fZec210[i]) + ((fRec184[i] * fZec209[i]) + ((fRec183[i] * fZec208[i]) + ((fRec182[i] * fZec207[i]) + ((fRec180[i] * fZec206[i]) + ((fRec179[i] * fZec205[i]) + ((fRec178[i] * fZec204[i]) + ((fRec177[i] * fZec203[i]) + ((fRec176[i] * fZec202[i]) + ((fRec175[i] * fZec201[i]) + ((fRec174[i] * fZec200[i]) + ((fRec173[i] * fZec199[i]) + ((fRec171[i] * fZec198[i]) + ((fRec169[i] * fZec197[i]) + ((fRec167[i] * fZec196[i]) + ((fRec165[i] * fZec195[i]) + ((fRec163[i] * fZec194[i]) + ((fRec161[i] * fZec193[i]) + ((fRec159[i] * fZec192[i]) + ((fRec157[i] * fZec191[i]) + ((fRec155[i] * fZec190[i]) + ((fRec153[i] * fZec189[i]) + ((fRec151[i] * fZec188[i]) + ((fRec149[i] * fZec187[i]) + ((fRec147[i] * fZec186[i]) + ((fRec145[i] * fZec185[i]) + ((fRec143[i] * fZec184[i]) + ((fRec141[i] * fZec183[i]) + ((fRec139[i] * fZec182[i]) + ((fRec137[i] * fZec181[i]) + ((fRec135[i] * fZec180[i]) + ((fRec133[i] * fZec179[i]) + ((fRec131[i] * fZec178[i]) + ((fRec129[i] * fZec177[i]) + ((fRec127[i] * fZec176[i]) + ((fRec125[i] * fZec175[i]) + ((fRec123[i] * fZec174[i]) + ((fRec121[i] * fZec173[i]) + ((fRec119[i] * fZec172[i]) + (fSlow36 * ((fRec117[i] * fZec171[i]) + ((fRec115[i] * fZec170[i]) + ((fRec113[i] * fZec169[i]) + ((fRec111[i] * fZec168[i]) + ((fRec109[i] * fZec167[i]) + ((fRec107[i] * fZec154[i]) + ((fRec105[i] * fZec141[i]) + ((fRec103[i] * fZec128[i]) + ((fRec101[i] * fZec115[i]) + ((fRec99[i] * fZec102[i]) + ((fRec97[i] * fZec89[i]) + ((fRec95[i] * fZec76[i]) + ((fRec93[i] * fZec61[i]) + ((fRec91[i] * fZec46[i]) + ((fRec84[i] * fZec31[i]) + ((fRec77[i] * fZec16[i]) + (fRec70[i] * fZec0[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3da82e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec342[i] = ((fRec177[i] + (fRec175[i] + fRec176[i])) + (2 * ((fZec240[i] + (fZec241[i] + (fZec242[i] + (fZec243[i] + (fZec244[i] + (fZec245[i] + (fZec246[i] + (fZec247[i] + (fZec248[i] + (fZec249[i] + (fRec174[i] + (fRec173[i] + (fZec250[i] + (fZec251[i] + (fZec252[i] + (fZec253[i] + (fZec254[i] + (fZec255[i] + (fZec256[i] + (fZec257[i] + (fZec258[i] + (fZec259[i] + (fZec260[i] + (fZec261[i] + (fZec262[i] + (fZec263[i] + (fZec264[i] + (fZec265[i] + (fZec266[i] + (fZec267[i] + (fZec268[i] + ((((((((0.5f * fRec119[i]) + (0.5f * fRec121[i])) + (0.5f * fRec123[i])) + (0.5f * fRec125[i])) + (0.5f * fRec127[i])) + (0.5f * fRec129[i])) + (0.5f * fRec131[i])) + (0.5f * fRec133[i]))))))))))))))))))))))))))))))))) + (fSlow81 * (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec84[i] + (fRec77[i] + (fRec70[i] + fZec219[i]))))))))))));
			}
			
			// SECTION : 36
			// LOOP 0x3984020
			// pre processing
			for (int i=0; i<4; i++) fRec0_tmp[i]=fRec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec0[i] = (fConst19 * ((fZec224[i] - (fZec217[i] + fYec122[i-1])) + fRec0[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec0_perm[i]=fRec0_tmp[count+i];
			
			// LOOP 0x3cbc700
			// pre processing
			for (int i=0; i<4; i++) fRec280_tmp[i]=fRec280_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec280[i] = ((fConst26 * ((int((fRec281[i] > 0.5f)))?((int((fRec281[i-1] < 0.5f)))?1.0f:0.0f):0.0f)) + (fConst27 * fRec280[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec280_perm[i]=fRec280_tmp[count+i];
			
			// LOOP 0x3ce12c0
			// pre processing
			for (int i=0; i<4; i++) fYec198_tmp[i]=fYec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec198[i] = ((fSlow91 * fZec325[i]) + (0.5416666666666667f * fRec289[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec198_perm[i]=fYec198_tmp[count+i];
			
			// LOOP 0x3ce8a30
			// pre processing
			for (int i=0; i<4; i++) fYec201_tmp[i]=fYec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec201[i] = ((fSlow94 * fZec334[i]) + (0.5416666666666667f * fRec291[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec201_perm[i]=fYec201_tmp[count+i];
			
			// LOOP 0x3d0ef90
			// pre processing
			for (int i=0; i<4; i++) fYec204_tmp[i]=fYec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec204[i] = ((fSlow97 * fZec337[i]) + (0.5416666666666667f * fRec294[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec204_perm[i]=fYec204_tmp[count+i];
			
			// LOOP 0x3d33390
			// pre processing
			for (int i=0; i<4; i++) fYec207_tmp[i]=fYec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec207[i] = ((fSlow100 * fZec340[i]) + (0.5416666666666667f * fRec297[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec207_perm[i]=fYec207_tmp[count+i];
			
			// LOOP 0x3d71ce0
			// pre processing
			for (int i=0; i<4; i++) fRec300_tmp[i]=fRec300_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec300[i] = (fRec300[i-1] + (fConst8 * (fYec197[i] - fRec300[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec300_perm[i]=fRec300_tmp[count+i];
			
			// LOOP 0x3d73aa0
			// pre processing
			for (int i=0; i<4; i++) fRec302_tmp[i]=fRec302_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec302[i] = (fRec302[i-1] + (fConst10 * (fYec200[i] - fRec302[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec302_perm[i]=fRec302_tmp[count+i];
			
			// LOOP 0x3d758a0
			// pre processing
			for (int i=0; i<4; i++) fRec304_tmp[i]=fRec304_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec304[i] = (fRec304[i-1] + (fConst13 * (fYec203[i] - fRec304[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec304_perm[i]=fRec304_tmp[count+i];
			
			// LOOP 0x3d776a0
			// pre processing
			for (int i=0; i<4; i++) fRec306_tmp[i]=fRec306_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec306[i] = (fRec306[i-1] + (fConst16 * (fYec206[i] - fRec306[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec306_perm[i]=fRec306_tmp[count+i];
			
			// LOOP 0x3d8ee60
			// pre processing
			for (int i=0; i<4; i++) fYec208_tmp[i]=fYec208_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec208[i] = (fZec342[i] - fZec341[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec208_perm[i]=fYec208_tmp[count+i];
			
			// SECTION : 37
			// LOOP 0x3983110
			// exec code
			for (int i=0; i<count; i++) {
				fZec225[i] = (fRec0[i] * fSlow1);
			}
			
			// LOOP 0x3ba1100
			// exec code
			for (int i=0; i<count; i++) {
				fZec271[i] = (fZec239[i] + fZec270[i]);
			}
			
			// LOOP 0x3cbc5b0
			// pre processing
			for (int i=0; i<4; i++) fYec196_tmp[i]=fYec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec196[i] = min(1.0f, (fConst30 * fRec280[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec196_perm[i]=fYec196_tmp[count+i];
			
			// LOOP 0x3ccc020
			// pre processing
			for (int i=0; i<4; i++) fRec286_tmp[i]=fRec286_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec286[i] = (fSlow84 + (0.98f * fRec286[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec286_perm[i]=fRec286_tmp[count+i];
			
			// LOOP 0x3ccf1b0
			// pre processing
			for (int i=0; i<4; i++) fRec287_tmp[i]=fRec287_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec287[i] = (fRec287[i-1] + (fConst31 * ((fSlow35 * ((fSlow88 * (((0.25f * fZec322[i]) + (0.125f * fZec331[i])) + (0.0625f * fZec330[i]))) + (fSlow86 * ((0.25f * fZec331[i]) + (0.125f * fZec330[i]))))) - fRec287[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec287_perm[i]=fRec287_tmp[count+i];
			
			// LOOP 0x3ce0f50
			// pre processing
			for (int i=0; i<4; i++) fRec288_tmp[i]=fRec288_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec288[i] = (fConst33 * ((fYec198[i] - fYec198[i-1]) + fRec288[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec288_perm[i]=fRec288_tmp[count+i];
			
			// LOOP 0x3ce85b0
			// pre processing
			for (int i=0; i<4; i++) fRec290_tmp[i]=fRec290_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec290[i] = (fConst35 * ((fYec201[i] - fYec201[i-1]) + fRec290[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec290_perm[i]=fRec290_tmp[count+i];
			
			// LOOP 0x3d0eb10
			// pre processing
			for (int i=0; i<4; i++) fRec293_tmp[i]=fRec293_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec293[i] = (fConst37 * ((fYec204[i] - fYec204[i-1]) + fRec293[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec293_perm[i]=fRec293_tmp[count+i];
			
			// LOOP 0x3d32f10
			// pre processing
			for (int i=0; i<4; i++) fRec296_tmp[i]=fRec296_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec296[i] = (fConst39 * ((fYec207[i] - fYec207[i-1]) + fRec296[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec296_perm[i]=fRec296_tmp[count+i];
			
			// LOOP 0x3d71880
			// pre processing
			for (int i=0; i<4; i++) fRec299_tmp[i]=fRec299_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec299[i] = (fRec299[i-1] + (fConst8 * (fRec300[i] - fRec299[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec299_perm[i]=fRec299_tmp[count+i];
			
			// LOOP 0x3d735f0
			// pre processing
			for (int i=0; i<4; i++) fRec301_tmp[i]=fRec301_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec301[i] = (fRec301[i-1] + (fConst10 * (fRec302[i] - fRec301[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec301_perm[i]=fRec301_tmp[count+i];
			
			// LOOP 0x3d753f0
			// pre processing
			for (int i=0; i<4; i++) fRec303_tmp[i]=fRec303_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec303[i] = (fRec303[i-1] + (fConst13 * (fRec304[i] - fRec303[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec303_perm[i]=fRec303_tmp[count+i];
			
			// LOOP 0x3d771f0
			// pre processing
			for (int i=0; i<4; i++) fRec305_tmp[i]=fRec305_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec305[i] = (fRec305[i-1] + (fConst16 * (fRec306[i] - fRec305[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec305_perm[i]=fRec305_tmp[count+i];
			
			// LOOP 0x3d8ea20
			// pre processing
			for (int i=0; i<4; i++) fRec307_tmp[i]=fRec307_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec307[i] = (fConst19 * ((fZec342[i] - (fZec341[i] + fYec208[i-1])) + fRec307[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec307_perm[i]=fRec307_tmp[count+i];
			
			// LOOP 0x3dcc700
			// pre processing
			for (int i=0; i<4; i++) fRec308_tmp[i]=fRec308_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec308[i] = (fSlow121 + (0.98f * fRec308[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec308_perm[i]=fRec308_tmp[count+i];
			
			// SECTION : 38
			// LOOP 0x3982fd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec343[i] = ((0.001f + (0.05f * fRec308[i])) * ((fSlow120 * ((fSlow119 * fZec271[i]) + ((fSlow117 * (fZec341[i] + (0.002f * (fRec307[i] * fSlow1)))) + ((fSlow115 * fZec340[i]) + ((fSlow113 * (fZec217[i] + (0.002f * fZec225[i]))) + ((fSlow111 * fZec337[i]) + ((fSlow109 * fZec325[i]) + (fSlow107 * fZec334[i])))))))) + ((fSlow105 * ((fSlow103 * (((fRec305[i] + fRec303[i]) + fRec301[i]) + fRec299[i])) + (fSlow102 * (((fRec296[i] + fRec293[i]) + fRec290[i]) + fRec288[i])))) + ((fRec287[i] * (0.5f + (4.5f * fRec286[i]))) + (fSlow83 * (max(fSlow82, (0.25f * (fYec196[i-4] + (fYec196[i-3] + (fYec196[i] + fYec196[i-2]))))) * ((0.5f * fZec325[i]) + (0.25f * ((fZec271[i] + fZec216[i]) + (0.008f * fZec225[i]))))))))));
			}
			
			// SECTION : 39
			// LOOP 0x3982e60
			// exec code
			for (int i=0; i<count; i++) {
				output0[i] = (FAUSTFLOAT)fZec343[i];
			}
			
			// LOOP 0x3dd1350
			// exec code
			for (int i=0; i<count; i++) {
				output1[i] = (FAUSTFLOAT)fZec343[i];
			}
			
		}
	}
};


