//-----------------------------------------------------
//
// Code generated with Faust 0.9.54 (http://faust.grame.fr)
//-----------------------------------------------------
/* link with : "" */
#include "yc20-precalc.h"
#include <math.h>
#include <cmath>
template <int N> inline float faustpower(float x) 		{ return powf(x,N); } 
template <int N> inline double faustpower(double x) 	{ return pow(x,N); }
template <int N> inline int faustpower(int x) 			{ return faustpower<N/2>(x) * faustpower<N-N/2>(x); } 
template <> 	 inline int faustpower<0>(int x) 		{ return 1; }
template <> 	 inline int faustpower<1>(int x) 		{ return x; }
/************************************************************************
 ************************************************************************
    FAUST Architecture File
	Copyright (C) 2003-2011 GRAME, Centre National de Creation Musicale
    ---------------------------------------------------------------------

	This is sample code. This file is provided as an example of minimal
	FAUST architecture file. Redistribution and use in source and binary
	forms, with or without modification, in part or in full are permitted.
	In particular you can create a derived work of this FAUST architecture
	and distribute that work under terms of your choice.

	This sample code is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 ************************************************************************
 ************************************************************************/

#include <cmath>

#include "faust/gui/GUI.h"
#include "faust/audio/dsp.h"
#include "faust/misc.h"

/******************************************************************************
*******************************************************************************

							       VECTOR INTRINSICS

*******************************************************************************
*******************************************************************************/


/******************************************************************************
*******************************************************************************

			ABSTRACT USER INTERFACE

*******************************************************************************
*******************************************************************************/

//----------------------------------------------------------------------------
//  FAUST generated signal processor
//----------------------------------------------------------------------------

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif  

typedef long double quad;

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

class mydsp : public dsp {
  private:
	FAUSTFLOAT 	fslider0;
	float 	fRec0_perm[4];
	FAUSTFLOAT 	fslider1;
	int 	iConst0;
	float 	fConst1;
	float 	fConst2;
	float 	fRec3_perm[4];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT 	fslider4;
	float 	fRec2_perm[4];
	float 	fYec0_perm[4];
	float 	fConst3;
	float 	fConst4;
	float 	fRec1_perm[4];
	float 	fRec5_perm[4];
	float 	fYec1_perm[4];
	float 	fRec4_perm[4];
	float 	fRec7_perm[4];
	float 	fYec2_perm[4];
	float 	fRec6_perm[4];
	float 	fRec9_perm[4];
	float 	fYec3_perm[4];
	float 	fRec8_perm[4];
	float 	fRec11_perm[4];
	float 	fYec4_perm[4];
	float 	fRec10_perm[4];
	float 	fRec13_perm[4];
	float 	fYec5_perm[4];
	float 	fRec12_perm[4];
	float 	fRec15_perm[4];
	float 	fYec6_perm[4];
	float 	fRec14_perm[4];
	float 	fRec17_perm[4];
	float 	fYec7_perm[4];
	float 	fRec16_perm[4];
	float 	fRec19_perm[4];
	float 	fYec8_perm[4];
	float 	fRec18_perm[4];
	float 	fRec21_perm[4];
	float 	fYec9_perm[4];
	float 	fRec20_perm[4];
	float 	fRec23_perm[4];
	float 	fYec10_perm[4];
	float 	fRec22_perm[4];
	float 	fRec25_perm[4];
	float 	fYec11_perm[4];
	float 	fRec24_perm[4];
	int 	iRec28_perm[4];
	float 	fYec12_perm[4];
	float 	fConst5;
	float 	fRec27_perm[4];
	float 	fRec26_perm[4];
	int 	iRec31_perm[4];
	float 	fYec13_perm[4];
	float 	fRec30_perm[4];
	float 	fRec29_perm[4];
	int 	iRec34_perm[4];
	float 	fYec14_perm[4];
	float 	fRec33_perm[4];
	float 	fRec32_perm[4];
	int 	iRec37_perm[4];
	float 	fYec15_perm[4];
	float 	fRec36_perm[4];
	float 	fRec35_perm[4];
	int 	iRec40_perm[4];
	float 	fYec16_perm[4];
	float 	fConst6;
	float 	fRec39_perm[4];
	float 	fRec38_perm[4];
	int 	iRec43_perm[4];
	float 	fYec17_perm[4];
	float 	fRec42_perm[4];
	float 	fRec41_perm[4];
	int 	iRec46_perm[4];
	float 	fYec18_perm[4];
	float 	fRec45_perm[4];
	float 	fRec44_perm[4];
	int 	iRec49_perm[4];
	float 	fYec19_perm[4];
	float 	fRec48_perm[4];
	float 	fRec47_perm[4];
	int 	iRec52_perm[4];
	float 	fYec20_perm[4];
	float 	fConst7;
	float 	fRec51_perm[4];
	float 	fRec50_perm[4];
	int 	iRec55_perm[4];
	float 	fYec21_perm[4];
	float 	fRec54_perm[4];
	float 	fRec53_perm[4];
	int 	iRec58_perm[4];
	float 	fYec22_perm[4];
	float 	fRec57_perm[4];
	float 	fRec56_perm[4];
	int 	iRec61_perm[4];
	float 	fYec23_perm[4];
	float 	fRec60_perm[4];
	float 	fRec59_perm[4];
	int 	iRec64_perm[4];
	float 	fYec24_perm[4];
	float 	fConst8;
	float 	fRec63_perm[4];
	float 	fRec62_perm[4];
	int 	iRec67_perm[4];
	float 	fYec25_perm[4];
	float 	fRec66_perm[4];
	float 	fRec65_perm[4];
	int 	iRec70_perm[4];
	float 	fYec26_perm[4];
	float 	fRec69_perm[4];
	float 	fRec68_perm[4];
	int 	iRec73_perm[4];
	float 	fYec27_perm[4];
	float 	fRec72_perm[4];
	float 	fRec71_perm[4];
	int 	iRec76_perm[4];
	float 	fYec28_perm[4];
	float 	fConst9;
	float 	fRec75_perm[4];
	float 	fRec74_perm[4];
	int 	iRec79_perm[4];
	float 	fYec29_perm[4];
	float 	fRec78_perm[4];
	float 	fRec77_perm[4];
	int 	iRec82_perm[4];
	float 	fYec30_perm[4];
	float 	fRec81_perm[4];
	float 	fRec80_perm[4];
	int 	iRec85_perm[4];
	float 	fYec31_perm[4];
	float 	fRec84_perm[4];
	float 	fRec83_perm[4];
	int 	iRec88_perm[4];
	float 	fYec32_perm[4];
	float 	fConst10;
	float 	fRec87_perm[4];
	float 	fRec86_perm[4];
	int 	iRec91_perm[4];
	float 	fYec33_perm[4];
	float 	fRec90_perm[4];
	float 	fRec89_perm[4];
	int 	iRec94_perm[4];
	float 	fYec34_perm[4];
	float 	fRec93_perm[4];
	float 	fRec92_perm[4];
	int 	iRec97_perm[4];
	float 	fYec35_perm[4];
	float 	fRec96_perm[4];
	float 	fRec95_perm[4];
	int 	iRec100_perm[4];
	float 	fYec36_perm[4];
	float 	fConst11;
	float 	fRec99_perm[4];
	float 	fRec98_perm[4];
	int 	iRec103_perm[4];
	float 	fYec37_perm[4];
	float 	fRec102_perm[4];
	float 	fRec101_perm[4];
	int 	iRec106_perm[4];
	float 	fYec38_perm[4];
	float 	fRec105_perm[4];
	float 	fRec104_perm[4];
	int 	iRec109_perm[4];
	float 	fYec39_perm[4];
	float 	fRec108_perm[4];
	float 	fRec107_perm[4];
	int 	iRec112_perm[4];
	float 	fYec40_perm[4];
	float 	fConst12;
	float 	fRec111_perm[4];
	float 	fRec110_perm[4];
	int 	iRec115_perm[4];
	float 	fYec41_perm[4];
	float 	fRec114_perm[4];
	float 	fRec113_perm[4];
	int 	iRec118_perm[4];
	float 	fYec42_perm[4];
	float 	fRec117_perm[4];
	float 	fRec116_perm[4];
	int 	iRec121_perm[4];
	float 	fYec43_perm[4];
	float 	fRec120_perm[4];
	float 	fRec119_perm[4];
	int 	iRec124_perm[4];
	float 	fYec44_perm[4];
	float 	fConst13;
	float 	fRec123_perm[4];
	float 	fRec122_perm[4];
	int 	iRec127_perm[4];
	float 	fYec45_perm[4];
	float 	fRec126_perm[4];
	float 	fRec125_perm[4];
	int 	iRec130_perm[4];
	float 	fYec46_perm[4];
	float 	fRec129_perm[4];
	float 	fRec128_perm[4];
	int 	iRec133_perm[4];
	float 	fYec47_perm[4];
	float 	fRec132_perm[4];
	float 	fRec131_perm[4];
	FAUSTFLOAT 	fbutton0;
	float 	fVec0_perm[4];
	FAUSTFLOAT 	fbutton1;
	float 	fVec1_perm[4];
	FAUSTFLOAT 	fbutton2;
	float 	fVec2_perm[4];
	FAUSTFLOAT 	fbutton3;
	float 	fVec3_perm[4];
	FAUSTFLOAT 	fbutton4;
	float 	fVec4_perm[4];
	FAUSTFLOAT 	fbutton5;
	float 	fVec5_perm[4];
	FAUSTFLOAT 	fbutton6;
	float 	fVec6_perm[4];
	FAUSTFLOAT 	fbutton7;
	float 	fVec7_perm[4];
	FAUSTFLOAT 	fbutton8;
	float 	fVec8_perm[4];
	FAUSTFLOAT 	fbutton9;
	float 	fVec9_perm[4];
	FAUSTFLOAT 	fbutton10;
	float 	fVec10_perm[4];
	FAUSTFLOAT 	fbutton11;
	float 	fVec11_perm[4];
	FAUSTFLOAT 	fbutton12;
	float 	fVec12_perm[4];
	FAUSTFLOAT 	fbutton13;
	float 	fVec13_perm[4];
	FAUSTFLOAT 	fbutton14;
	float 	fVec14_perm[4];
	FAUSTFLOAT 	fbutton15;
	float 	fVec15_perm[4];
	FAUSTFLOAT 	fbutton16;
	float 	fVec16_perm[4];
	FAUSTFLOAT 	fslider5;
	FAUSTFLOAT 	fbutton17;
	float 	fVec17_perm[4];
	FAUSTFLOAT 	fbutton18;
	float 	fVec18_perm[4];
	FAUSTFLOAT 	fbutton19;
	float 	fVec19_perm[4];
	FAUSTFLOAT 	fbutton20;
	float 	fVec20_perm[4];
	FAUSTFLOAT 	fbutton21;
	float 	fVec21_perm[4];
	FAUSTFLOAT 	fbutton22;
	float 	fVec22_perm[4];
	FAUSTFLOAT 	fbutton23;
	float 	fVec23_perm[4];
	FAUSTFLOAT 	fbutton24;
	float 	fVec24_perm[4];
	FAUSTFLOAT 	fbutton25;
	float 	fVec25_perm[4];
	FAUSTFLOAT 	fbutton26;
	float 	fVec26_perm[4];
	FAUSTFLOAT 	fbutton27;
	float 	fVec27_perm[4];
	FAUSTFLOAT 	fbutton28;
	float 	fVec28_perm[4];
	FAUSTFLOAT 	fbutton29;
	float 	fVec29_perm[4];
	FAUSTFLOAT 	fbutton30;
	float 	fVec30_perm[4];
	FAUSTFLOAT 	fbutton31;
	float 	fVec31_perm[4];
	FAUSTFLOAT 	fbutton32;
	float 	fVec32_perm[4];
	FAUSTFLOAT 	fbutton33;
	float 	fVec33_perm[4];
	FAUSTFLOAT 	fbutton34;
	float 	fVec34_perm[4];
	FAUSTFLOAT 	fbutton35;
	float 	fVec35_perm[4];
	FAUSTFLOAT 	fbutton36;
	float 	fVec36_perm[4];
	FAUSTFLOAT 	fbutton37;
	float 	fVec37_perm[4];
	FAUSTFLOAT 	fbutton38;
	float 	fVec38_perm[4];
	FAUSTFLOAT 	fbutton39;
	float 	fVec39_perm[4];
	FAUSTFLOAT 	fbutton40;
	float 	fVec40_perm[4];
	FAUSTFLOAT 	fbutton41;
	float 	fVec41_perm[4];
	FAUSTFLOAT 	fbutton42;
	float 	fVec42_perm[4];
	FAUSTFLOAT 	fbutton43;
	float 	fVec43_perm[4];
	FAUSTFLOAT 	fbutton44;
	float 	fVec44_perm[4];
	FAUSTFLOAT 	fbutton45;
	float 	fVec45_perm[4];
	FAUSTFLOAT 	fbutton46;
	float 	fVec46_perm[4];
	FAUSTFLOAT 	fbutton47;
	float 	fVec47_perm[4];
	FAUSTFLOAT 	fbutton48;
	float 	fVec48_perm[4];
	FAUSTFLOAT 	fbutton49;
	float 	fVec49_perm[4];
	FAUSTFLOAT 	fbutton50;
	float 	fVec50_perm[4];
	FAUSTFLOAT 	fbutton51;
	float 	fVec51_perm[4];
	FAUSTFLOAT 	fbutton52;
	float 	fVec52_perm[4];
	FAUSTFLOAT 	fbutton53;
	float 	fVec53_perm[4];
	FAUSTFLOAT 	fbutton54;
	float 	fVec54_perm[4];
	FAUSTFLOAT 	fbutton55;
	float 	fVec55_perm[4];
	FAUSTFLOAT 	fbutton56;
	float 	fVec56_perm[4];
	FAUSTFLOAT 	fbutton57;
	float 	fVec57_perm[4];
	FAUSTFLOAT 	fbutton58;
	float 	fVec58_perm[4];
	FAUSTFLOAT 	fbutton59;
	float 	fVec59_perm[4];
	FAUSTFLOAT 	fbutton60;
	float 	fVec60_perm[4];
	float 	fYec48_perm[4];
	float 	fConst14;
	float 	fRec134_perm[4];
	int 	iRec137_perm[4];
	float 	fYec49_perm[4];
	float 	fConst15;
	float 	fRec136_perm[4];
	float 	fRec135_perm[4];
	int 	iRec140_perm[4];
	float 	fYec50_perm[4];
	float 	fRec139_perm[4];
	float 	fRec138_perm[4];
	int 	iRec143_perm[4];
	float 	fYec51_perm[4];
	float 	fRec142_perm[4];
	float 	fRec141_perm[4];
	int 	iRec146_perm[4];
	float 	fYec52_perm[4];
	float 	fRec145_perm[4];
	float 	fRec144_perm[4];
	int 	iRec149_perm[4];
	float 	fYec53_perm[4];
	float 	fConst16;
	float 	fRec148_perm[4];
	float 	fRec147_perm[4];
	int 	iRec152_perm[4];
	float 	fYec54_perm[4];
	float 	fRec151_perm[4];
	float 	fRec150_perm[4];
	int 	iRec155_perm[4];
	float 	fYec55_perm[4];
	float 	fRec154_perm[4];
	float 	fRec153_perm[4];
	int 	iRec158_perm[4];
	float 	fYec56_perm[4];
	float 	fRec157_perm[4];
	float 	fRec156_perm[4];
	float 	fYec57_perm[4];
	float 	fRec159_perm[4];
	int 	iRec162_perm[4];
	float 	fYec58_perm[4];
	float 	fConst17;
	float 	fRec161_perm[4];
	float 	fRec160_perm[4];
	int 	iRec165_perm[4];
	float 	fYec59_perm[4];
	float 	fRec164_perm[4];
	float 	fRec163_perm[4];
	int 	iRec168_perm[4];
	float 	fYec60_perm[4];
	float 	fRec167_perm[4];
	float 	fRec166_perm[4];
	int 	iRec171_perm[4];
	float 	fYec61_perm[4];
	float 	fRec170_perm[4];
	float 	fRec169_perm[4];
	float 	fYec62_perm[4];
	float 	fRec172_perm[4];
	int 	iRec175_perm[4];
	float 	fYec63_perm[4];
	float 	fConst18;
	float 	fRec174_perm[4];
	float 	fConst19;
	float 	fRec173_perm[4];
	int 	iRec178_perm[4];
	float 	fYec64_perm[4];
	float 	fRec177_perm[4];
	float 	fRec176_perm[4];
	int 	iRec181_perm[4];
	float 	fYec65_perm[4];
	float 	fRec180_perm[4];
	float 	fRec179_perm[4];
	int 	iRec184_perm[4];
	float 	fYec66_perm[4];
	float 	fRec183_perm[4];
	float 	fRec182_perm[4];
	int 	iRec187_perm[4];
	float 	fYec67_perm[4];
	float 	fConst20;
	float 	fRec186_perm[4];
	float 	fRec185_perm[4];
	float 	fYec68_perm[4];
	float 	fRec188_perm[4];
	int 	iRec191_perm[4];
	float 	fYec69_perm[4];
	float 	fRec190_perm[4];
	float 	fRec189_perm[4];
	int 	iRec194_perm[4];
	float 	fYec70_perm[4];
	float 	fRec193_perm[4];
	float 	fRec192_perm[4];
	int 	iRec197_perm[4];
	float 	fYec71_perm[4];
	float 	fRec196_perm[4];
	float 	fRec195_perm[4];
	int 	iRec200_perm[4];
	float 	fYec72_perm[4];
	float 	fConst21;
	float 	fRec199_perm[4];
	float 	fRec198_perm[4];
	int 	iRec203_perm[4];
	float 	fYec73_perm[4];
	float 	fRec202_perm[4];
	float 	fRec201_perm[4];
	int 	iRec206_perm[4];
	float 	fYec74_perm[4];
	float 	fRec205_perm[4];
	float 	fRec204_perm[4];
	int 	iRec209_perm[4];
	float 	fYec75_perm[4];
	float 	fRec208_perm[4];
	float 	fRec207_perm[4];
	float 	fYec76_perm[4];
	float 	fRec210_perm[4];
	int 	iRec213_perm[4];
	float 	fYec77_perm[4];
	float 	fRec212_perm[4];
	float 	fConst22;
	float 	fRec211_perm[4];
	int 	iRec216_perm[4];
	float 	fYec78_perm[4];
	float 	fRec215_perm[4];
	float 	fRec214_perm[4];
	int 	iRec219_perm[4];
	float 	fYec79_perm[4];
	float 	fRec218_perm[4];
	float 	fRec217_perm[4];
	int 	iRec222_perm[4];
	float 	fYec80_perm[4];
	float 	fRec221_perm[4];
	float 	fRec220_perm[4];
	int 	iRec225_perm[4];
	float 	fYec81_perm[4];
	float 	fConst23;
	float 	fRec224_perm[4];
	float 	fRec223_perm[4];
	int 	iRec228_perm[4];
	float 	fYec82_perm[4];
	float 	fRec227_perm[4];
	float 	fRec226_perm[4];
	int 	iRec231_perm[4];
	float 	fYec83_perm[4];
	float 	fRec230_perm[4];
	float 	fRec229_perm[4];
	int 	iRec234_perm[4];
	float 	fYec84_perm[4];
	float 	fRec233_perm[4];
	float 	fRec232_perm[4];
	int 	iRec237_perm[4];
	float 	fYec85_perm[4];
	float 	fConst24;
	float 	fRec236_perm[4];
	float 	fRec235_perm[4];
	int 	iRec240_perm[4];
	float 	fYec86_perm[4];
	float 	fRec239_perm[4];
	float 	fRec238_perm[4];
	int 	iRec243_perm[4];
	float 	fYec87_perm[4];
	float 	fRec242_perm[4];
	float 	fRec241_perm[4];
	int 	iRec246_perm[4];
	float 	fYec88_perm[4];
	float 	fRec245_perm[4];
	float 	fRec244_perm[4];
	int 	iRec249_perm[4];
	float 	fRec248_perm[4];
	float 	fConst25;
	float 	fRec247_perm[4];
	int 	iRec252_perm[4];
	float 	fRec251_perm[4];
	float 	fRec250_perm[4];
	int 	iRec255_perm[4];
	float 	fRec254_perm[4];
	float 	fRec253_perm[4];
	int 	iRec258_perm[4];
	float 	fRec257_perm[4];
	float 	fRec256_perm[4];
	int 	iRec261_perm[4];
	float 	fConst26;
	float 	fRec260_perm[4];
	float 	fRec259_perm[4];
	int 	iRec264_perm[4];
	float 	fRec263_perm[4];
	float 	fRec262_perm[4];
	int 	iRec267_perm[4];
	float 	fRec266_perm[4];
	float 	fRec265_perm[4];
	int 	iRec270_perm[4];
	float 	fRec269_perm[4];
	float 	fRec268_perm[4];
	int 	iRec273_perm[4];
	float 	fRec272_perm[4];
	float 	fRec271_perm[4];
	int 	iRec276_perm[4];
	float 	fRec275_perm[4];
	float 	fRec274_perm[4];
	int 	iRec279_perm[4];
	float 	fRec278_perm[4];
	float 	fRec277_perm[4];
	int 	iRec282_perm[4];
	float 	fRec281_perm[4];
	float 	fRec280_perm[4];
	float 	fYec89_perm[4];
	float 	fRec283_perm[4];
	float 	fYec90_perm[4];
	float 	fRec284_perm[4];
	FAUSTFLOAT 	fslider6;
	float 	fYec91_perm[4];
	float 	fRec286_perm[4];
	float 	fRec285_perm[4];
	FAUSTFLOAT 	fslider7;
	float 	fYec92_perm[4];
	float 	fRec288_perm[4];
	float 	fRec287_perm[4];
	FAUSTFLOAT 	fslider8;
	float 	fYec93_perm[4];
	float 	fRec290_perm[4];
	float 	fRec289_perm[4];
	FAUSTFLOAT 	fslider9;
	float 	fYec94_perm[4];
	float 	fRec292_perm[4];
	float 	fRec291_perm[4];
	float 	fConst27;
	float 	fRec294_perm[4];
	float 	fYec95_perm[4];
	float 	fConst28;
	float 	fRec293_perm[4];
	float 	fConst29;
	float 	fRec296_perm[4];
	float 	fYec96_perm[4];
	float 	fConst30;
	float 	fRec295_perm[4];
	float 	fConst31;
	float 	fRec298_perm[4];
	float 	fYec97_perm[4];
	float 	fConst32;
	float 	fRec297_perm[4];
	float 	fConst33;
	float 	fRec300_perm[4];
	float 	fYec98_perm[4];
	float 	fConst34;
	float 	fRec299_perm[4];
	FAUSTFLOAT 	fslider10;
	FAUSTFLOAT 	fslider11;
	float 	fConst35;
	float 	fRec301_perm[4];
	FAUSTFLOAT 	fslider12;
	float 	fRec302_perm[4];
	int 	iRec308_perm[4];
	int 	iConst36;
	float 	fRec305_perm[4];
	int 	iRec306_perm[4];
	float 	fRec307_perm[4];
	float 	fConst37;
	float 	fYec99_perm[4];
	float 	fRec304_perm[4];
	float 	fConst38;
	float 	fConst39;
	float 	fRec303_perm[4];
	float 	fConst40;
	float 	fYec100_perm[4];
	FAUSTFLOAT 	fslider13;
	FAUSTFLOAT 	fslider14;
	FAUSTFLOAT 	fslider15;
	FAUSTFLOAT 	fslider16;
	FAUSTFLOAT 	fslider17;
	FAUSTFLOAT 	fslider18;
	FAUSTFLOAT 	fslider19;
	FAUSTFLOAT 	fslider20;
	FAUSTFLOAT 	fslider21;
	FAUSTFLOAT 	fslider22;
  public:
	static void metadata(Meta* m) 	{ 
		m->declare("yc20.dsp/name", "Foo YC-20 simulation");
		m->declare("yc20.dsp/author", "Sampo Savolainen");
		m->declare("yc20.dsp/license", "GPLv3");
		m->declare("yc20.dsp/copyright", "(c)Sampo Savolainen 2009");
		m->declare("music.lib/name", "Music Library");
		m->declare("music.lib/author", "GRAME");
		m->declare("music.lib/copyright", "GRAME");
		m->declare("music.lib/version", "1.0");
		m->declare("music.lib/license", "LGPL with exception");
		m->declare("math.lib/license", "LGPL with exception");
		m->declare("math.lib/name", "Math Library");
		m->declare("math.lib/author", "GRAME");
		m->declare("math.lib/copyright", "GRAME");
		m->declare("math.lib/version", "1.0");
	}

	virtual int getNumInputs() 	{ return 0; }
	virtual int getNumOutputs() 	{ return 3; }
	static void classInit(int samplingFreq) {
	}
	virtual void instanceInit(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fslider0 = 0.5f;
		for (int i=0; i<4; i++) fRec0_perm[i]=0;
		fslider1 = 0.0f;
		iConst0 = min(192000, max(1, fSamplingFreq));
		fConst1 = float(iConst0);
		fConst2 = (1.0f / fConst1);
		for (int i=0; i<4; i++) fRec3_perm[i]=0;
		fslider2 = 0.0f;
		fslider3 = 0.0f;
		fslider4 = 0.0f;
		for (int i=0; i<4; i++) fRec2_perm[i]=0;
		for (int i=0; i<4; i++) fYec0_perm[i]=0;
		fConst3 = (1.0f / float(iConst0));
		fConst4 = (0.007374545454545454f / (fConst3 + 0.007374545454545454f));
		for (int i=0; i<4; i++) fRec1_perm[i]=0;
		for (int i=0; i<4; i++) fRec5_perm[i]=0;
		for (int i=0; i<4; i++) fYec1_perm[i]=0;
		for (int i=0; i<4; i++) fRec4_perm[i]=0;
		for (int i=0; i<4; i++) fRec7_perm[i]=0;
		for (int i=0; i<4; i++) fYec2_perm[i]=0;
		for (int i=0; i<4; i++) fRec6_perm[i]=0;
		for (int i=0; i<4; i++) fRec9_perm[i]=0;
		for (int i=0; i<4; i++) fYec3_perm[i]=0;
		for (int i=0; i<4; i++) fRec8_perm[i]=0;
		for (int i=0; i<4; i++) fRec11_perm[i]=0;
		for (int i=0; i<4; i++) fYec4_perm[i]=0;
		for (int i=0; i<4; i++) fRec10_perm[i]=0;
		for (int i=0; i<4; i++) fRec13_perm[i]=0;
		for (int i=0; i<4; i++) fYec5_perm[i]=0;
		for (int i=0; i<4; i++) fRec12_perm[i]=0;
		for (int i=0; i<4; i++) fRec15_perm[i]=0;
		for (int i=0; i<4; i++) fYec6_perm[i]=0;
		for (int i=0; i<4; i++) fRec14_perm[i]=0;
		for (int i=0; i<4; i++) fRec17_perm[i]=0;
		for (int i=0; i<4; i++) fYec7_perm[i]=0;
		for (int i=0; i<4; i++) fRec16_perm[i]=0;
		for (int i=0; i<4; i++) fRec19_perm[i]=0;
		for (int i=0; i<4; i++) fYec8_perm[i]=0;
		for (int i=0; i<4; i++) fRec18_perm[i]=0;
		for (int i=0; i<4; i++) fRec21_perm[i]=0;
		for (int i=0; i<4; i++) fYec9_perm[i]=0;
		for (int i=0; i<4; i++) fRec20_perm[i]=0;
		for (int i=0; i<4; i++) fRec23_perm[i]=0;
		for (int i=0; i<4; i++) fYec10_perm[i]=0;
		for (int i=0; i<4; i++) fRec22_perm[i]=0;
		for (int i=0; i<4; i++) fRec25_perm[i]=0;
		for (int i=0; i<4; i++) fYec11_perm[i]=0;
		for (int i=0; i<4; i++) fRec24_perm[i]=0;
		for (int i=0; i<4; i++) iRec28_perm[i]=0;
		for (int i=0; i<4; i++) fYec12_perm[i]=0;
		fConst5 = (37037.03703703704f / float(iConst0));
		for (int i=0; i<4; i++) fRec27_perm[i]=0;
		for (int i=0; i<4; i++) fRec26_perm[i]=0;
		for (int i=0; i<4; i++) iRec31_perm[i]=0;
		for (int i=0; i<4; i++) fYec13_perm[i]=0;
		for (int i=0; i<4; i++) fRec30_perm[i]=0;
		for (int i=0; i<4; i++) fRec29_perm[i]=0;
		for (int i=0; i<4; i++) iRec34_perm[i]=0;
		for (int i=0; i<4; i++) fYec14_perm[i]=0;
		for (int i=0; i<4; i++) fRec33_perm[i]=0;
		for (int i=0; i<4; i++) fRec32_perm[i]=0;
		for (int i=0; i<4; i++) iRec37_perm[i]=0;
		for (int i=0; i<4; i++) fYec15_perm[i]=0;
		for (int i=0; i<4; i++) fRec36_perm[i]=0;
		for (int i=0; i<4; i++) fRec35_perm[i]=0;
		for (int i=0; i<4; i++) iRec40_perm[i]=0;
		for (int i=0; i<4; i++) fYec16_perm[i]=0;
		fConst6 = (25641.02564102564f / float(iConst0));
		for (int i=0; i<4; i++) fRec39_perm[i]=0;
		for (int i=0; i<4; i++) fRec38_perm[i]=0;
		for (int i=0; i<4; i++) iRec43_perm[i]=0;
		for (int i=0; i<4; i++) fYec17_perm[i]=0;
		for (int i=0; i<4; i++) fRec42_perm[i]=0;
		for (int i=0; i<4; i++) fRec41_perm[i]=0;
		for (int i=0; i<4; i++) iRec46_perm[i]=0;
		for (int i=0; i<4; i++) fYec18_perm[i]=0;
		for (int i=0; i<4; i++) fRec45_perm[i]=0;
		for (int i=0; i<4; i++) fRec44_perm[i]=0;
		for (int i=0; i<4; i++) iRec49_perm[i]=0;
		for (int i=0; i<4; i++) fYec19_perm[i]=0;
		for (int i=0; i<4; i++) fRec48_perm[i]=0;
		for (int i=0; i<4; i++) fRec47_perm[i]=0;
		for (int i=0; i<4; i++) iRec52_perm[i]=0;
		for (int i=0; i<4; i++) fYec20_perm[i]=0;
		fConst7 = (21276.59574468085f / float(iConst0));
		for (int i=0; i<4; i++) fRec51_perm[i]=0;
		for (int i=0; i<4; i++) fRec50_perm[i]=0;
		for (int i=0; i<4; i++) iRec55_perm[i]=0;
		for (int i=0; i<4; i++) fYec21_perm[i]=0;
		for (int i=0; i<4; i++) fRec54_perm[i]=0;
		for (int i=0; i<4; i++) fRec53_perm[i]=0;
		for (int i=0; i<4; i++) iRec58_perm[i]=0;
		for (int i=0; i<4; i++) fYec22_perm[i]=0;
		for (int i=0; i<4; i++) fRec57_perm[i]=0;
		for (int i=0; i<4; i++) fRec56_perm[i]=0;
		for (int i=0; i<4; i++) iRec61_perm[i]=0;
		for (int i=0; i<4; i++) fYec23_perm[i]=0;
		for (int i=0; i<4; i++) fRec60_perm[i]=0;
		for (int i=0; i<4; i++) fRec59_perm[i]=0;
		for (int i=0; i<4; i++) iRec64_perm[i]=0;
		for (int i=0; i<4; i++) fYec24_perm[i]=0;
		fConst8 = (17857.14285714286f / float(iConst0));
		for (int i=0; i<4; i++) fRec63_perm[i]=0;
		for (int i=0; i<4; i++) fRec62_perm[i]=0;
		for (int i=0; i<4; i++) iRec67_perm[i]=0;
		for (int i=0; i<4; i++) fYec25_perm[i]=0;
		for (int i=0; i<4; i++) fRec66_perm[i]=0;
		for (int i=0; i<4; i++) fRec65_perm[i]=0;
		for (int i=0; i<4; i++) iRec70_perm[i]=0;
		for (int i=0; i<4; i++) fYec26_perm[i]=0;
		for (int i=0; i<4; i++) fRec69_perm[i]=0;
		for (int i=0; i<4; i++) fRec68_perm[i]=0;
		for (int i=0; i<4; i++) iRec73_perm[i]=0;
		for (int i=0; i<4; i++) fYec27_perm[i]=0;
		for (int i=0; i<4; i++) fRec72_perm[i]=0;
		for (int i=0; i<4; i++) fRec71_perm[i]=0;
		for (int i=0; i<4; i++) iRec76_perm[i]=0;
		for (int i=0; i<4; i++) fYec28_perm[i]=0;
		fConst9 = (12195.121951219513f / float(iConst0));
		for (int i=0; i<4; i++) fRec75_perm[i]=0;
		for (int i=0; i<4; i++) fRec74_perm[i]=0;
		for (int i=0; i<4; i++) iRec79_perm[i]=0;
		for (int i=0; i<4; i++) fYec29_perm[i]=0;
		for (int i=0; i<4; i++) fRec78_perm[i]=0;
		for (int i=0; i<4; i++) fRec77_perm[i]=0;
		for (int i=0; i<4; i++) iRec82_perm[i]=0;
		for (int i=0; i<4; i++) fYec30_perm[i]=0;
		for (int i=0; i<4; i++) fRec81_perm[i]=0;
		for (int i=0; i<4; i++) fRec80_perm[i]=0;
		for (int i=0; i<4; i++) iRec85_perm[i]=0;
		for (int i=0; i<4; i++) fYec31_perm[i]=0;
		for (int i=0; i<4; i++) fRec84_perm[i]=0;
		for (int i=0; i<4; i++) fRec83_perm[i]=0;
		for (int i=0; i<4; i++) iRec88_perm[i]=0;
		for (int i=0; i<4; i++) fYec32_perm[i]=0;
		fConst10 = (1e+04f / float(iConst0));
		for (int i=0; i<4; i++) fRec87_perm[i]=0;
		for (int i=0; i<4; i++) fRec86_perm[i]=0;
		for (int i=0; i<4; i++) iRec91_perm[i]=0;
		for (int i=0; i<4; i++) fYec33_perm[i]=0;
		for (int i=0; i<4; i++) fRec90_perm[i]=0;
		for (int i=0; i<4; i++) fRec89_perm[i]=0;
		for (int i=0; i<4; i++) iRec94_perm[i]=0;
		for (int i=0; i<4; i++) fYec34_perm[i]=0;
		for (int i=0; i<4; i++) fRec93_perm[i]=0;
		for (int i=0; i<4; i++) fRec92_perm[i]=0;
		for (int i=0; i<4; i++) iRec97_perm[i]=0;
		for (int i=0; i<4; i++) fYec35_perm[i]=0;
		for (int i=0; i<4; i++) fRec96_perm[i]=0;
		for (int i=0; i<4; i++) fRec95_perm[i]=0;
		for (int i=0; i<4; i++) iRec100_perm[i]=0;
		for (int i=0; i<4; i++) fYec36_perm[i]=0;
		fConst11 = (8333.333333333334f / float(iConst0));
		for (int i=0; i<4; i++) fRec99_perm[i]=0;
		for (int i=0; i<4; i++) fRec98_perm[i]=0;
		for (int i=0; i<4; i++) iRec103_perm[i]=0;
		for (int i=0; i<4; i++) fYec37_perm[i]=0;
		for (int i=0; i<4; i++) fRec102_perm[i]=0;
		for (int i=0; i<4; i++) fRec101_perm[i]=0;
		for (int i=0; i<4; i++) iRec106_perm[i]=0;
		for (int i=0; i<4; i++) fYec38_perm[i]=0;
		for (int i=0; i<4; i++) fRec105_perm[i]=0;
		for (int i=0; i<4; i++) fRec104_perm[i]=0;
		for (int i=0; i<4; i++) iRec109_perm[i]=0;
		for (int i=0; i<4; i++) fYec39_perm[i]=0;
		for (int i=0; i<4; i++) fRec108_perm[i]=0;
		for (int i=0; i<4; i++) fRec107_perm[i]=0;
		for (int i=0; i<4; i++) iRec112_perm[i]=0;
		for (int i=0; i<4; i++) fYec40_perm[i]=0;
		fConst12 = (5555.555555555556f / float(iConst0));
		for (int i=0; i<4; i++) fRec111_perm[i]=0;
		for (int i=0; i<4; i++) fRec110_perm[i]=0;
		for (int i=0; i<4; i++) iRec115_perm[i]=0;
		for (int i=0; i<4; i++) fYec41_perm[i]=0;
		for (int i=0; i<4; i++) fRec114_perm[i]=0;
		for (int i=0; i<4; i++) fRec113_perm[i]=0;
		for (int i=0; i<4; i++) iRec118_perm[i]=0;
		for (int i=0; i<4; i++) fYec42_perm[i]=0;
		for (int i=0; i<4; i++) fRec117_perm[i]=0;
		for (int i=0; i<4; i++) fRec116_perm[i]=0;
		for (int i=0; i<4; i++) iRec121_perm[i]=0;
		for (int i=0; i<4; i++) fYec43_perm[i]=0;
		for (int i=0; i<4; i++) fRec120_perm[i]=0;
		for (int i=0; i<4; i++) fRec119_perm[i]=0;
		for (int i=0; i<4; i++) iRec124_perm[i]=0;
		for (int i=0; i<4; i++) fYec44_perm[i]=0;
		fConst13 = (4545.454545454545f / float(iConst0));
		for (int i=0; i<4; i++) fRec123_perm[i]=0;
		for (int i=0; i<4; i++) fRec122_perm[i]=0;
		for (int i=0; i<4; i++) iRec127_perm[i]=0;
		for (int i=0; i<4; i++) fYec45_perm[i]=0;
		for (int i=0; i<4; i++) fRec126_perm[i]=0;
		for (int i=0; i<4; i++) fRec125_perm[i]=0;
		for (int i=0; i<4; i++) iRec130_perm[i]=0;
		for (int i=0; i<4; i++) fYec46_perm[i]=0;
		for (int i=0; i<4; i++) fRec129_perm[i]=0;
		for (int i=0; i<4; i++) fRec128_perm[i]=0;
		for (int i=0; i<4; i++) iRec133_perm[i]=0;
		for (int i=0; i<4; i++) fYec47_perm[i]=0;
		for (int i=0; i<4; i++) fRec132_perm[i]=0;
		for (int i=0; i<4; i++) fRec131_perm[i]=0;
		fbutton0 = 0.0;
		for (int i=0; i<4; i++) fVec0_perm[i]=0;
		fbutton1 = 0.0;
		for (int i=0; i<4; i++) fVec1_perm[i]=0;
		fbutton2 = 0.0;
		for (int i=0; i<4; i++) fVec2_perm[i]=0;
		fbutton3 = 0.0;
		for (int i=0; i<4; i++) fVec3_perm[i]=0;
		fbutton4 = 0.0;
		for (int i=0; i<4; i++) fVec4_perm[i]=0;
		fbutton5 = 0.0;
		for (int i=0; i<4; i++) fVec5_perm[i]=0;
		fbutton6 = 0.0;
		for (int i=0; i<4; i++) fVec6_perm[i]=0;
		fbutton7 = 0.0;
		for (int i=0; i<4; i++) fVec7_perm[i]=0;
		fbutton8 = 0.0;
		for (int i=0; i<4; i++) fVec8_perm[i]=0;
		fbutton9 = 0.0;
		for (int i=0; i<4; i++) fVec9_perm[i]=0;
		fbutton10 = 0.0;
		for (int i=0; i<4; i++) fVec10_perm[i]=0;
		fbutton11 = 0.0;
		for (int i=0; i<4; i++) fVec11_perm[i]=0;
		fbutton12 = 0.0;
		for (int i=0; i<4; i++) fVec12_perm[i]=0;
		fbutton13 = 0.0;
		for (int i=0; i<4; i++) fVec13_perm[i]=0;
		fbutton14 = 0.0;
		for (int i=0; i<4; i++) fVec14_perm[i]=0;
		fbutton15 = 0.0;
		for (int i=0; i<4; i++) fVec15_perm[i]=0;
		fbutton16 = 0.0;
		for (int i=0; i<4; i++) fVec16_perm[i]=0;
		fslider5 = 0.0f;
		fbutton17 = 0.0;
		for (int i=0; i<4; i++) fVec17_perm[i]=0;
		fbutton18 = 0.0;
		for (int i=0; i<4; i++) fVec18_perm[i]=0;
		fbutton19 = 0.0;
		for (int i=0; i<4; i++) fVec19_perm[i]=0;
		fbutton20 = 0.0;
		for (int i=0; i<4; i++) fVec20_perm[i]=0;
		fbutton21 = 0.0;
		for (int i=0; i<4; i++) fVec21_perm[i]=0;
		fbutton22 = 0.0;
		for (int i=0; i<4; i++) fVec22_perm[i]=0;
		fbutton23 = 0.0;
		for (int i=0; i<4; i++) fVec23_perm[i]=0;
		fbutton24 = 0.0;
		for (int i=0; i<4; i++) fVec24_perm[i]=0;
		fbutton25 = 0.0;
		for (int i=0; i<4; i++) fVec25_perm[i]=0;
		fbutton26 = 0.0;
		for (int i=0; i<4; i++) fVec26_perm[i]=0;
		fbutton27 = 0.0;
		for (int i=0; i<4; i++) fVec27_perm[i]=0;
		fbutton28 = 0.0;
		for (int i=0; i<4; i++) fVec28_perm[i]=0;
		fbutton29 = 0.0;
		for (int i=0; i<4; i++) fVec29_perm[i]=0;
		fbutton30 = 0.0;
		for (int i=0; i<4; i++) fVec30_perm[i]=0;
		fbutton31 = 0.0;
		for (int i=0; i<4; i++) fVec31_perm[i]=0;
		fbutton32 = 0.0;
		for (int i=0; i<4; i++) fVec32_perm[i]=0;
		fbutton33 = 0.0;
		for (int i=0; i<4; i++) fVec33_perm[i]=0;
		fbutton34 = 0.0;
		for (int i=0; i<4; i++) fVec34_perm[i]=0;
		fbutton35 = 0.0;
		for (int i=0; i<4; i++) fVec35_perm[i]=0;
		fbutton36 = 0.0;
		for (int i=0; i<4; i++) fVec36_perm[i]=0;
		fbutton37 = 0.0;
		for (int i=0; i<4; i++) fVec37_perm[i]=0;
		fbutton38 = 0.0;
		for (int i=0; i<4; i++) fVec38_perm[i]=0;
		fbutton39 = 0.0;
		for (int i=0; i<4; i++) fVec39_perm[i]=0;
		fbutton40 = 0.0;
		for (int i=0; i<4; i++) fVec40_perm[i]=0;
		fbutton41 = 0.0;
		for (int i=0; i<4; i++) fVec41_perm[i]=0;
		fbutton42 = 0.0;
		for (int i=0; i<4; i++) fVec42_perm[i]=0;
		fbutton43 = 0.0;
		for (int i=0; i<4; i++) fVec43_perm[i]=0;
		fbutton44 = 0.0;
		for (int i=0; i<4; i++) fVec44_perm[i]=0;
		fbutton45 = 0.0;
		for (int i=0; i<4; i++) fVec45_perm[i]=0;
		fbutton46 = 0.0;
		for (int i=0; i<4; i++) fVec46_perm[i]=0;
		fbutton47 = 0.0;
		for (int i=0; i<4; i++) fVec47_perm[i]=0;
		fbutton48 = 0.0;
		for (int i=0; i<4; i++) fVec48_perm[i]=0;
		fbutton49 = 0.0;
		for (int i=0; i<4; i++) fVec49_perm[i]=0;
		fbutton50 = 0.0;
		for (int i=0; i<4; i++) fVec50_perm[i]=0;
		fbutton51 = 0.0;
		for (int i=0; i<4; i++) fVec51_perm[i]=0;
		fbutton52 = 0.0;
		for (int i=0; i<4; i++) fVec52_perm[i]=0;
		fbutton53 = 0.0;
		for (int i=0; i<4; i++) fVec53_perm[i]=0;
		fbutton54 = 0.0;
		for (int i=0; i<4; i++) fVec54_perm[i]=0;
		fbutton55 = 0.0;
		for (int i=0; i<4; i++) fVec55_perm[i]=0;
		fbutton56 = 0.0;
		for (int i=0; i<4; i++) fVec56_perm[i]=0;
		fbutton57 = 0.0;
		for (int i=0; i<4; i++) fVec57_perm[i]=0;
		fbutton58 = 0.0;
		for (int i=0; i<4; i++) fVec58_perm[i]=0;
		fbutton59 = 0.0;
		for (int i=0; i<4; i++) fVec59_perm[i]=0;
		fbutton60 = 0.0;
		for (int i=0; i<4; i++) fVec60_perm[i]=0;
		for (int i=0; i<4; i++) fYec48_perm[i]=0;
		fConst14 = (0.0001f / (0.0001f + fConst3));
		for (int i=0; i<4; i++) fRec134_perm[i]=0;
		for (int i=0; i<4; i++) iRec137_perm[i]=0;
		for (int i=0; i<4; i++) fYec49_perm[i]=0;
		fConst15 = (3703.703703703704f / float(iConst0));
		for (int i=0; i<4; i++) fRec136_perm[i]=0;
		for (int i=0; i<4; i++) fRec135_perm[i]=0;
		for (int i=0; i<4; i++) iRec140_perm[i]=0;
		for (int i=0; i<4; i++) fYec50_perm[i]=0;
		for (int i=0; i<4; i++) fRec139_perm[i]=0;
		for (int i=0; i<4; i++) fRec138_perm[i]=0;
		for (int i=0; i<4; i++) iRec143_perm[i]=0;
		for (int i=0; i<4; i++) fYec51_perm[i]=0;
		for (int i=0; i<4; i++) fRec142_perm[i]=0;
		for (int i=0; i<4; i++) fRec141_perm[i]=0;
		for (int i=0; i<4; i++) iRec146_perm[i]=0;
		for (int i=0; i<4; i++) fYec52_perm[i]=0;
		for (int i=0; i<4; i++) fRec145_perm[i]=0;
		for (int i=0; i<4; i++) fRec144_perm[i]=0;
		for (int i=0; i<4; i++) iRec149_perm[i]=0;
		for (int i=0; i<4; i++) fYec53_perm[i]=0;
		fConst16 = (2564.102564102564f / float(iConst0));
		for (int i=0; i<4; i++) fRec148_perm[i]=0;
		for (int i=0; i<4; i++) fRec147_perm[i]=0;
		for (int i=0; i<4; i++) iRec152_perm[i]=0;
		for (int i=0; i<4; i++) fYec54_perm[i]=0;
		for (int i=0; i<4; i++) fRec151_perm[i]=0;
		for (int i=0; i<4; i++) fRec150_perm[i]=0;
		for (int i=0; i<4; i++) iRec155_perm[i]=0;
		for (int i=0; i<4; i++) fYec55_perm[i]=0;
		for (int i=0; i<4; i++) fRec154_perm[i]=0;
		for (int i=0; i<4; i++) fRec153_perm[i]=0;
		for (int i=0; i<4; i++) iRec158_perm[i]=0;
		for (int i=0; i<4; i++) fYec56_perm[i]=0;
		for (int i=0; i<4; i++) fRec157_perm[i]=0;
		for (int i=0; i<4; i++) fRec156_perm[i]=0;
		for (int i=0; i<4; i++) fYec57_perm[i]=0;
		for (int i=0; i<4; i++) fRec159_perm[i]=0;
		for (int i=0; i<4; i++) iRec162_perm[i]=0;
		for (int i=0; i<4; i++) fYec58_perm[i]=0;
		fConst17 = (2127.659574468085f / float(iConst0));
		for (int i=0; i<4; i++) fRec161_perm[i]=0;
		for (int i=0; i<4; i++) fRec160_perm[i]=0;
		for (int i=0; i<4; i++) iRec165_perm[i]=0;
		for (int i=0; i<4; i++) fYec59_perm[i]=0;
		for (int i=0; i<4; i++) fRec164_perm[i]=0;
		for (int i=0; i<4; i++) fRec163_perm[i]=0;
		for (int i=0; i<4; i++) iRec168_perm[i]=0;
		for (int i=0; i<4; i++) fYec60_perm[i]=0;
		for (int i=0; i<4; i++) fRec167_perm[i]=0;
		for (int i=0; i<4; i++) fRec166_perm[i]=0;
		for (int i=0; i<4; i++) iRec171_perm[i]=0;
		for (int i=0; i<4; i++) fYec61_perm[i]=0;
		for (int i=0; i<4; i++) fRec170_perm[i]=0;
		for (int i=0; i<4; i++) fRec169_perm[i]=0;
		for (int i=0; i<4; i++) fYec62_perm[i]=0;
		for (int i=0; i<4; i++) fRec172_perm[i]=0;
		for (int i=0; i<4; i++) iRec175_perm[i]=0;
		for (int i=0; i<4; i++) fYec63_perm[i]=0;
		fConst18 = (1785.7142857142858f / float(iConst0));
		for (int i=0; i<4; i++) fRec174_perm[i]=0;
		fConst19 = (0.003596453201970443f / (fConst3 + 0.003596453201970443f));
		for (int i=0; i<4; i++) fRec173_perm[i]=0;
		for (int i=0; i<4; i++) iRec178_perm[i]=0;
		for (int i=0; i<4; i++) fYec64_perm[i]=0;
		for (int i=0; i<4; i++) fRec177_perm[i]=0;
		for (int i=0; i<4; i++) fRec176_perm[i]=0;
		for (int i=0; i<4; i++) iRec181_perm[i]=0;
		for (int i=0; i<4; i++) fYec65_perm[i]=0;
		for (int i=0; i<4; i++) fRec180_perm[i]=0;
		for (int i=0; i<4; i++) fRec179_perm[i]=0;
		for (int i=0; i<4; i++) iRec184_perm[i]=0;
		for (int i=0; i<4; i++) fYec66_perm[i]=0;
		for (int i=0; i<4; i++) fRec183_perm[i]=0;
		for (int i=0; i<4; i++) fRec182_perm[i]=0;
		for (int i=0; i<4; i++) iRec187_perm[i]=0;
		for (int i=0; i<4; i++) fYec67_perm[i]=0;
		fConst20 = (1470.5882352941176f / float(iConst0));
		for (int i=0; i<4; i++) fRec186_perm[i]=0;
		for (int i=0; i<4; i++) fRec185_perm[i]=0;
		for (int i=0; i<4; i++) fYec68_perm[i]=0;
		for (int i=0; i<4; i++) fRec188_perm[i]=0;
		for (int i=0; i<4; i++) iRec191_perm[i]=0;
		for (int i=0; i<4; i++) fYec69_perm[i]=0;
		for (int i=0; i<4; i++) fRec190_perm[i]=0;
		for (int i=0; i<4; i++) fRec189_perm[i]=0;
		for (int i=0; i<4; i++) iRec194_perm[i]=0;
		for (int i=0; i<4; i++) fYec70_perm[i]=0;
		for (int i=0; i<4; i++) fRec193_perm[i]=0;
		for (int i=0; i<4; i++) fRec192_perm[i]=0;
		for (int i=0; i<4; i++) iRec197_perm[i]=0;
		for (int i=0; i<4; i++) fYec71_perm[i]=0;
		for (int i=0; i<4; i++) fRec196_perm[i]=0;
		for (int i=0; i<4; i++) fRec195_perm[i]=0;
		for (int i=0; i<4; i++) iRec200_perm[i]=0;
		for (int i=0; i<4; i++) fYec72_perm[i]=0;
		fConst21 = (1219.5121951219512f / float(iConst0));
		for (int i=0; i<4; i++) fRec199_perm[i]=0;
		for (int i=0; i<4; i++) fRec198_perm[i]=0;
		for (int i=0; i<4; i++) iRec203_perm[i]=0;
		for (int i=0; i<4; i++) fYec73_perm[i]=0;
		for (int i=0; i<4; i++) fRec202_perm[i]=0;
		for (int i=0; i<4; i++) fRec201_perm[i]=0;
		for (int i=0; i<4; i++) iRec206_perm[i]=0;
		for (int i=0; i<4; i++) fYec74_perm[i]=0;
		for (int i=0; i<4; i++) fRec205_perm[i]=0;
		for (int i=0; i<4; i++) fRec204_perm[i]=0;
		for (int i=0; i<4; i++) iRec209_perm[i]=0;
		for (int i=0; i<4; i++) fYec75_perm[i]=0;
		for (int i=0; i<4; i++) fRec208_perm[i]=0;
		for (int i=0; i<4; i++) fRec207_perm[i]=0;
		for (int i=0; i<4; i++) fYec76_perm[i]=0;
		for (int i=0; i<4; i++) fRec210_perm[i]=0;
		for (int i=0; i<4; i++) iRec213_perm[i]=0;
		for (int i=0; i<4; i++) fYec77_perm[i]=0;
		for (int i=0; i<4; i++) fRec212_perm[i]=0;
		fConst22 = (0.00223066398390342f / (fConst3 + 0.00223066398390342f));
		for (int i=0; i<4; i++) fRec211_perm[i]=0;
		for (int i=0; i<4; i++) iRec216_perm[i]=0;
		for (int i=0; i<4; i++) fYec78_perm[i]=0;
		for (int i=0; i<4; i++) fRec215_perm[i]=0;
		for (int i=0; i<4; i++) fRec214_perm[i]=0;
		for (int i=0; i<4; i++) iRec219_perm[i]=0;
		for (int i=0; i<4; i++) fYec79_perm[i]=0;
		for (int i=0; i<4; i++) fRec218_perm[i]=0;
		for (int i=0; i<4; i++) fRec217_perm[i]=0;
		for (int i=0; i<4; i++) iRec222_perm[i]=0;
		for (int i=0; i<4; i++) fYec80_perm[i]=0;
		for (int i=0; i<4; i++) fRec221_perm[i]=0;
		for (int i=0; i<4; i++) fRec220_perm[i]=0;
		for (int i=0; i<4; i++) iRec225_perm[i]=0;
		for (int i=0; i<4; i++) fYec81_perm[i]=0;
		fConst23 = (1e+03f / float(iConst0));
		for (int i=0; i<4; i++) fRec224_perm[i]=0;
		for (int i=0; i<4; i++) fRec223_perm[i]=0;
		for (int i=0; i<4; i++) iRec228_perm[i]=0;
		for (int i=0; i<4; i++) fYec82_perm[i]=0;
		for (int i=0; i<4; i++) fRec227_perm[i]=0;
		for (int i=0; i<4; i++) fRec226_perm[i]=0;
		for (int i=0; i<4; i++) iRec231_perm[i]=0;
		for (int i=0; i<4; i++) fYec83_perm[i]=0;
		for (int i=0; i<4; i++) fRec230_perm[i]=0;
		for (int i=0; i<4; i++) fRec229_perm[i]=0;
		for (int i=0; i<4; i++) iRec234_perm[i]=0;
		for (int i=0; i<4; i++) fYec84_perm[i]=0;
		for (int i=0; i<4; i++) fRec233_perm[i]=0;
		for (int i=0; i<4; i++) fRec232_perm[i]=0;
		for (int i=0; i<4; i++) iRec237_perm[i]=0;
		for (int i=0; i<4; i++) fYec85_perm[i]=0;
		fConst24 = (833.3333333333334f / float(iConst0));
		for (int i=0; i<4; i++) fRec236_perm[i]=0;
		for (int i=0; i<4; i++) fRec235_perm[i]=0;
		for (int i=0; i<4; i++) iRec240_perm[i]=0;
		for (int i=0; i<4; i++) fYec86_perm[i]=0;
		for (int i=0; i<4; i++) fRec239_perm[i]=0;
		for (int i=0; i<4; i++) fRec238_perm[i]=0;
		for (int i=0; i<4; i++) iRec243_perm[i]=0;
		for (int i=0; i<4; i++) fYec87_perm[i]=0;
		for (int i=0; i<4; i++) fRec242_perm[i]=0;
		for (int i=0; i<4; i++) fRec241_perm[i]=0;
		for (int i=0; i<4; i++) iRec246_perm[i]=0;
		for (int i=0; i<4; i++) fYec88_perm[i]=0;
		for (int i=0; i<4; i++) fRec245_perm[i]=0;
		for (int i=0; i<4; i++) fRec244_perm[i]=0;
		for (int i=0; i<4; i++) iRec249_perm[i]=0;
		for (int i=0; i<4; i++) fRec248_perm[i]=0;
		fConst25 = (0.0016849851632047478f / (fConst3 + 0.0016849851632047478f));
		for (int i=0; i<4; i++) fRec247_perm[i]=0;
		for (int i=0; i<4; i++) iRec252_perm[i]=0;
		for (int i=0; i<4; i++) fRec251_perm[i]=0;
		for (int i=0; i<4; i++) fRec250_perm[i]=0;
		for (int i=0; i<4; i++) iRec255_perm[i]=0;
		for (int i=0; i<4; i++) fRec254_perm[i]=0;
		for (int i=0; i<4; i++) fRec253_perm[i]=0;
		for (int i=0; i<4; i++) iRec258_perm[i]=0;
		for (int i=0; i<4; i++) fRec257_perm[i]=0;
		for (int i=0; i<4; i++) fRec256_perm[i]=0;
		for (int i=0; i<4; i++) iRec261_perm[i]=0;
		fConst26 = (666.6666666666666f / float(iConst0));
		for (int i=0; i<4; i++) fRec260_perm[i]=0;
		for (int i=0; i<4; i++) fRec259_perm[i]=0;
		for (int i=0; i<4; i++) iRec264_perm[i]=0;
		for (int i=0; i<4; i++) fRec263_perm[i]=0;
		for (int i=0; i<4; i++) fRec262_perm[i]=0;
		for (int i=0; i<4; i++) iRec267_perm[i]=0;
		for (int i=0; i<4; i++) fRec266_perm[i]=0;
		for (int i=0; i<4; i++) fRec265_perm[i]=0;
		for (int i=0; i<4; i++) iRec270_perm[i]=0;
		for (int i=0; i<4; i++) fRec269_perm[i]=0;
		for (int i=0; i<4; i++) fRec268_perm[i]=0;
		for (int i=0; i<4; i++) iRec273_perm[i]=0;
		for (int i=0; i<4; i++) fRec272_perm[i]=0;
		for (int i=0; i<4; i++) fRec271_perm[i]=0;
		for (int i=0; i<4; i++) iRec276_perm[i]=0;
		for (int i=0; i<4; i++) fRec275_perm[i]=0;
		for (int i=0; i<4; i++) fRec274_perm[i]=0;
		for (int i=0; i<4; i++) iRec279_perm[i]=0;
		for (int i=0; i<4; i++) fRec278_perm[i]=0;
		for (int i=0; i<4; i++) fRec277_perm[i]=0;
		for (int i=0; i<4; i++) iRec282_perm[i]=0;
		for (int i=0; i<4; i++) fRec281_perm[i]=0;
		for (int i=0; i<4; i++) fRec280_perm[i]=0;
		for (int i=0; i<4; i++) fYec89_perm[i]=0;
		for (int i=0; i<4; i++) fRec283_perm[i]=0;
		for (int i=0; i<4; i++) fYec90_perm[i]=0;
		for (int i=0; i<4; i++) fRec284_perm[i]=0;
		fslider6 = 1.0f;
		for (int i=0; i<4; i++) fYec91_perm[i]=0;
		for (int i=0; i<4; i++) fRec286_perm[i]=0;
		for (int i=0; i<4; i++) fRec285_perm[i]=0;
		fslider7 = 1.0f;
		for (int i=0; i<4; i++) fYec92_perm[i]=0;
		for (int i=0; i<4; i++) fRec288_perm[i]=0;
		for (int i=0; i<4; i++) fRec287_perm[i]=0;
		fslider8 = 1.0f;
		for (int i=0; i<4; i++) fYec93_perm[i]=0;
		for (int i=0; i<4; i++) fRec290_perm[i]=0;
		for (int i=0; i<4; i++) fRec289_perm[i]=0;
		fslider9 = 1.0f;
		for (int i=0; i<4; i++) fYec94_perm[i]=0;
		for (int i=0; i<4; i++) fRec292_perm[i]=0;
		for (int i=0; i<4; i++) fRec291_perm[i]=0;
		fConst27 = (0.00010530000000000001f / (fConst3 + 0.00010530000000000001f));
		for (int i=0; i<4; i++) fRec294_perm[i]=0;
		for (int i=0; i<4; i++) fYec95_perm[i]=0;
		fConst28 = (5.2650000000000006e-05f / (fConst3 + 5.2650000000000006e-05f));
		for (int i=0; i<4; i++) fRec293_perm[i]=0;
		fConst29 = (0.0001833f / (fConst3 + 0.0001833f));
		for (int i=0; i<4; i++) fRec296_perm[i]=0;
		for (int i=0; i<4; i++) fYec96_perm[i]=0;
		fConst30 = (9.165e-05f / (fConst3 + 9.165e-05f));
		for (int i=0; i<4; i++) fRec295_perm[i]=0;
		fConst31 = (0.00039f / (fConst3 + 0.00039f));
		for (int i=0; i<4; i++) fRec298_perm[i]=0;
		for (int i=0; i<4; i++) fYec97_perm[i]=0;
		fConst32 = (0.000195f / (fConst3 + 0.000195f));
		for (int i=0; i<4; i++) fRec297_perm[i]=0;
		fConst33 = (0.000858f / (fConst3 + 0.000858f));
		for (int i=0; i<4; i++) fRec300_perm[i]=0;
		for (int i=0; i<4; i++) fYec98_perm[i]=0;
		fConst34 = (0.000429f / (fConst3 + 0.000429f));
		for (int i=0; i<4; i++) fRec299_perm[i]=0;
		fslider10 = 1.0f;
		fslider11 = 1.0f;
		fConst35 = (3968.253968253968f / float(iConst0));
		for (int i=0; i<4; i++) fRec301_perm[i]=0;
		fslider12 = 1.0f;
		for (int i=0; i<4; i++) fRec302_perm[i]=0;
		for (int i=0; i<4; i++) iRec308_perm[i]=0;
		iConst36 = int((0.001f * max(2.205e+04f, min(1.92e+05f, fConst1))));
		for (int i=0; i<4; i++) fRec305_perm[i]=0;
		for (int i=0; i<4; i++) iRec306_perm[i]=0;
		for (int i=0; i<4; i++) fRec307_perm[i]=0;
		fConst37 = (1.0f / float(iConst36));
		for (int i=0; i<4; i++) fYec99_perm[i]=0;
		for (int i=0; i<4; i++) fRec304_perm[i]=0;
		fConst38 = (36.243757712787264f / fConst1);
		fConst39 = (1.0f - fConst38);
		for (int i=0; i<4; i++) fRec303_perm[i]=0;
		fConst40 = (0.027590958087858178f * fConst1);
		for (int i=0; i<4; i++) fYec100_perm[i]=0;
		fslider13 = 1.0f;
		fslider14 = 0.0f;
		fslider15 = 1.0f;
		fslider16 = 1.0f;
		fslider17 = 0.5f;
		fslider18 = 1.0f;
		fslider19 = 0.5f;
		fslider20 = 1.0f;
		fslider21 = 0.0f;
		fslider22 = 0.5f;
	}
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void buildUserInterface(UI* interface) {
		interface->openVerticalBox("standalone");
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
		interface->declare(0, "2", "");
		interface->openVerticalBox("vibrato");
		interface->declare(&fslider4, "1", "");
		interface->addHorizontalSlider("depth", &fslider4, 0.0f, 0.0f, 1.0f, 0.2f);
		interface->declare(&fslider1, "2", "");
		interface->addHorizontalSlider("speed", &fslider1, 0.0f, 0.0f, 1.0f, 0.2f);
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
		interface->addHorizontalSlider("balance", &fslider15, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->openHorizontalBox("bass");
		interface->declare(&fslider11, "1", "");
		interface->addVerticalSlider("16' b", &fslider11, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider10, "2", "");
		interface->addVerticalSlider("8' b", &fslider10, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider5, "3", "");
		interface->addHorizontalSlider("bass manual", &fslider5, 0.0f, 0.0f, 1.0f, 1.0f);
		interface->declare(&fslider12, "3", "");
		interface->addVerticalSlider("bass volume", &fslider12, 1.0f, 0.0f, 1.0f, 0.25f);
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
		interface->declare(&fslider17, "1", "");
		interface->addVerticalSlider("16' i", &fslider17, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider16, "2", "");
		interface->addVerticalSlider("8' i", &fslider16, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider18, "3", "");
		interface->addVerticalSlider("4' i", &fslider18, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider19, "4", "");
		interface->addVerticalSlider("2 2/3' i", &fslider19, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider20, "5", "");
		interface->addVerticalSlider("2' i", &fslider20, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider21, "6", "");
		interface->addVerticalSlider("1 3/5' i", &fslider21, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider22, "7", "");
		interface->addVerticalSlider("1' i", &fslider22, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->closeBox();
		interface->openHorizontalBox("ii");
		interface->declare(&fslider14, "1", "");
		interface->addVerticalSlider("bright", &fslider14, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider9, "2", "");
		interface->addVerticalSlider("16' ii", &fslider9, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider8, "3", "");
		interface->addVerticalSlider("8' ii", &fslider8, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider7, "4", "");
		interface->addVerticalSlider("4' ii", &fslider7, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider6, "5", "");
		interface->addVerticalSlider("2' ii", &fslider6, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->closeBox();
		interface->addHorizontalSlider("percussive", &fslider13, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->addHorizontalSlider("pitch", &fslider3, 0.0f, -1.0f, 1.0f, 0.05f);
		interface->addHorizontalSlider("realism", &fslider2, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->addHorizontalSlider("volume", &fslider0, 0.5f, 0.0f, 1.0f, 0.01f);
		interface->closeBox();
	}
	virtual void compute (int fullcount, FAUSTFLOAT** input, FAUSTFLOAT** output) {
		float 	fRec0_tmp[32+4];
		float 	fRec3_tmp[32+4];
		float 	fZec0[32];
		float 	fZec1[32];
		float 	fRec2_tmp[32+4];
		float 	fYec0_tmp[32+4];
		float 	fRec1_tmp[32+4];
		float 	fZec2[32];
		float 	fRec5_tmp[32+4];
		float 	fYec1_tmp[32+4];
		float 	fRec4_tmp[32+4];
		float 	fZec3[32];
		float 	fRec7_tmp[32+4];
		float 	fYec2_tmp[32+4];
		float 	fRec6_tmp[32+4];
		float 	fZec4[32];
		float 	fRec9_tmp[32+4];
		float 	fYec3_tmp[32+4];
		float 	fRec8_tmp[32+4];
		float 	fZec5[32];
		float 	fRec11_tmp[32+4];
		float 	fYec4_tmp[32+4];
		float 	fRec10_tmp[32+4];
		float 	fZec6[32];
		float 	fRec13_tmp[32+4];
		float 	fYec5_tmp[32+4];
		float 	fRec12_tmp[32+4];
		float 	fZec7[32];
		float 	fRec15_tmp[32+4];
		float 	fYec6_tmp[32+4];
		float 	fRec14_tmp[32+4];
		float 	fZec8[32];
		float 	fRec17_tmp[32+4];
		float 	fYec7_tmp[32+4];
		float 	fRec16_tmp[32+4];
		float 	fZec9[32];
		float 	fRec19_tmp[32+4];
		float 	fYec8_tmp[32+4];
		float 	fRec18_tmp[32+4];
		float 	fZec10[32];
		float 	fRec21_tmp[32+4];
		float 	fYec9_tmp[32+4];
		float 	fRec20_tmp[32+4];
		float 	fZec11[32];
		float 	fRec23_tmp[32+4];
		float 	fYec10_tmp[32+4];
		float 	fRec22_tmp[32+4];
		float 	fZec12[32];
		float 	fRec25_tmp[32+4];
		float 	fYec11_tmp[32+4];
		float 	fRec24_tmp[32+4];
		int 	iRec28_tmp[32+4];
		float 	fYec12_tmp[32+4];
		float 	fZec13[32];
		float 	fRec27_tmp[32+4];
		float 	fRec26_tmp[32+4];
		int 	iRec31_tmp[32+4];
		float 	fYec13_tmp[32+4];
		float 	fZec14[32];
		float 	fRec30_tmp[32+4];
		float 	fRec29_tmp[32+4];
		int 	iRec34_tmp[32+4];
		float 	fYec14_tmp[32+4];
		float 	fZec15[32];
		float 	fRec33_tmp[32+4];
		float 	fRec32_tmp[32+4];
		int 	iRec37_tmp[32+4];
		float 	fYec15_tmp[32+4];
		float 	fZec16[32];
		float 	fRec36_tmp[32+4];
		float 	fRec35_tmp[32+4];
		int 	iRec40_tmp[32+4];
		float 	fYec16_tmp[32+4];
		float 	fZec17[32];
		float 	fRec39_tmp[32+4];
		float 	fRec38_tmp[32+4];
		int 	iRec43_tmp[32+4];
		float 	fYec17_tmp[32+4];
		float 	fZec18[32];
		float 	fRec42_tmp[32+4];
		float 	fRec41_tmp[32+4];
		int 	iRec46_tmp[32+4];
		float 	fYec18_tmp[32+4];
		float 	fZec19[32];
		float 	fRec45_tmp[32+4];
		float 	fRec44_tmp[32+4];
		int 	iRec49_tmp[32+4];
		float 	fYec19_tmp[32+4];
		float 	fZec20[32];
		float 	fRec48_tmp[32+4];
		float 	fRec47_tmp[32+4];
		int 	iRec52_tmp[32+4];
		float 	fYec20_tmp[32+4];
		float 	fZec21[32];
		float 	fRec51_tmp[32+4];
		float 	fRec50_tmp[32+4];
		int 	iRec55_tmp[32+4];
		float 	fYec21_tmp[32+4];
		float 	fZec22[32];
		float 	fRec54_tmp[32+4];
		float 	fRec53_tmp[32+4];
		int 	iRec58_tmp[32+4];
		float 	fYec22_tmp[32+4];
		float 	fZec23[32];
		float 	fRec57_tmp[32+4];
		float 	fRec56_tmp[32+4];
		int 	iRec61_tmp[32+4];
		float 	fYec23_tmp[32+4];
		float 	fZec24[32];
		float 	fRec60_tmp[32+4];
		float 	fRec59_tmp[32+4];
		int 	iRec64_tmp[32+4];
		float 	fYec24_tmp[32+4];
		float 	fZec25[32];
		float 	fRec63_tmp[32+4];
		float 	fRec62_tmp[32+4];
		int 	iRec67_tmp[32+4];
		float 	fYec25_tmp[32+4];
		float 	fZec26[32];
		float 	fRec66_tmp[32+4];
		float 	fRec65_tmp[32+4];
		int 	iRec70_tmp[32+4];
		float 	fYec26_tmp[32+4];
		float 	fZec27[32];
		float 	fRec69_tmp[32+4];
		float 	fRec68_tmp[32+4];
		int 	iRec73_tmp[32+4];
		float 	fYec27_tmp[32+4];
		float 	fZec28[32];
		float 	fRec72_tmp[32+4];
		float 	fRec71_tmp[32+4];
		int 	iRec76_tmp[32+4];
		float 	fYec28_tmp[32+4];
		float 	fZec29[32];
		float 	fRec75_tmp[32+4];
		float 	fRec74_tmp[32+4];
		int 	iRec79_tmp[32+4];
		float 	fYec29_tmp[32+4];
		float 	fZec30[32];
		float 	fRec78_tmp[32+4];
		float 	fRec77_tmp[32+4];
		int 	iRec82_tmp[32+4];
		float 	fYec30_tmp[32+4];
		float 	fZec31[32];
		float 	fRec81_tmp[32+4];
		float 	fRec80_tmp[32+4];
		int 	iRec85_tmp[32+4];
		float 	fYec31_tmp[32+4];
		float 	fZec32[32];
		float 	fRec84_tmp[32+4];
		float 	fRec83_tmp[32+4];
		int 	iRec88_tmp[32+4];
		float 	fYec32_tmp[32+4];
		float 	fZec33[32];
		float 	fRec87_tmp[32+4];
		float 	fRec86_tmp[32+4];
		int 	iRec91_tmp[32+4];
		float 	fYec33_tmp[32+4];
		float 	fZec34[32];
		float 	fRec90_tmp[32+4];
		float 	fRec89_tmp[32+4];
		int 	iRec94_tmp[32+4];
		float 	fYec34_tmp[32+4];
		float 	fZec35[32];
		float 	fRec93_tmp[32+4];
		float 	fRec92_tmp[32+4];
		int 	iRec97_tmp[32+4];
		float 	fYec35_tmp[32+4];
		float 	fZec36[32];
		float 	fRec96_tmp[32+4];
		float 	fRec95_tmp[32+4];
		int 	iRec100_tmp[32+4];
		float 	fYec36_tmp[32+4];
		float 	fZec37[32];
		float 	fRec99_tmp[32+4];
		float 	fRec98_tmp[32+4];
		int 	iRec103_tmp[32+4];
		float 	fYec37_tmp[32+4];
		float 	fZec38[32];
		float 	fRec102_tmp[32+4];
		float 	fRec101_tmp[32+4];
		int 	iRec106_tmp[32+4];
		float 	fYec38_tmp[32+4];
		float 	fZec39[32];
		float 	fRec105_tmp[32+4];
		float 	fRec104_tmp[32+4];
		int 	iRec109_tmp[32+4];
		float 	fYec39_tmp[32+4];
		float 	fZec40[32];
		float 	fRec108_tmp[32+4];
		float 	fRec107_tmp[32+4];
		int 	iRec112_tmp[32+4];
		float 	fYec40_tmp[32+4];
		float 	fZec41[32];
		float 	fRec111_tmp[32+4];
		float 	fRec110_tmp[32+4];
		int 	iRec115_tmp[32+4];
		float 	fYec41_tmp[32+4];
		float 	fZec42[32];
		float 	fRec114_tmp[32+4];
		float 	fRec113_tmp[32+4];
		int 	iRec118_tmp[32+4];
		float 	fYec42_tmp[32+4];
		float 	fZec43[32];
		float 	fRec117_tmp[32+4];
		float 	fRec116_tmp[32+4];
		int 	iRec121_tmp[32+4];
		float 	fYec43_tmp[32+4];
		float 	fZec44[32];
		float 	fRec120_tmp[32+4];
		float 	fRec119_tmp[32+4];
		int 	iRec124_tmp[32+4];
		float 	fYec44_tmp[32+4];
		float 	fZec45[32];
		float 	fRec123_tmp[32+4];
		float 	fRec122_tmp[32+4];
		int 	iRec127_tmp[32+4];
		float 	fYec45_tmp[32+4];
		float 	fZec46[32];
		float 	fRec126_tmp[32+4];
		float 	fRec125_tmp[32+4];
		int 	iRec130_tmp[32+4];
		float 	fYec46_tmp[32+4];
		float 	fZec47[32];
		float 	fRec129_tmp[32+4];
		float 	fRec128_tmp[32+4];
		int 	iRec133_tmp[32+4];
		float 	fYec47_tmp[32+4];
		float 	fZec48[32];
		float 	fRec132_tmp[32+4];
		float 	fRec131_tmp[32+4];
		float 	fVec0_tmp[32+4];
		float 	fZec49[32];
		float 	fVec1_tmp[32+4];
		float 	fZec50[32];
		float 	fVec2_tmp[32+4];
		float 	fZec51[32];
		float 	fVec3_tmp[32+4];
		float 	fZec52[32];
		float 	fVec4_tmp[32+4];
		float 	fZec53[32];
		float 	fVec5_tmp[32+4];
		float 	fZec54[32];
		float 	fVec6_tmp[32+4];
		float 	fZec55[32];
		float 	fVec7_tmp[32+4];
		float 	fZec56[32];
		float 	fVec8_tmp[32+4];
		float 	fZec57[32];
		float 	fVec9_tmp[32+4];
		float 	fZec58[32];
		float 	fVec10_tmp[32+4];
		float 	fZec59[32];
		float 	fVec11_tmp[32+4];
		float 	fZec60[32];
		float 	fVec12_tmp[32+4];
		float 	fZec61[32];
		float 	fVec13_tmp[32+4];
		float 	fZec62[32];
		float 	fVec14_tmp[32+4];
		float 	fZec63[32];
		float 	fVec15_tmp[32+4];
		float 	fZec64[32];
		float 	fVec16_tmp[32+4];
		float 	fZec65[32];
		float 	fVec17_tmp[32+4];
		float 	fZec66[32];
		float 	fVec18_tmp[32+4];
		float 	fZec67[32];
		float 	fVec19_tmp[32+4];
		float 	fZec68[32];
		float 	fVec20_tmp[32+4];
		float 	fZec69[32];
		float 	fVec21_tmp[32+4];
		float 	fZec70[32];
		float 	fVec22_tmp[32+4];
		float 	fZec71[32];
		float 	fVec23_tmp[32+4];
		float 	fZec72[32];
		float 	fVec24_tmp[32+4];
		float 	fZec73[32];
		float 	fVec25_tmp[32+4];
		float 	fZec74[32];
		float 	fVec26_tmp[32+4];
		float 	fZec75[32];
		float 	fVec27_tmp[32+4];
		float 	fZec76[32];
		float 	fVec28_tmp[32+4];
		float 	fZec77[32];
		float 	fVec29_tmp[32+4];
		float 	fZec78[32];
		float 	fVec30_tmp[32+4];
		float 	fZec79[32];
		float 	fVec31_tmp[32+4];
		float 	fZec80[32];
		float 	fVec32_tmp[32+4];
		float 	fZec81[32];
		float 	fVec33_tmp[32+4];
		float 	fZec82[32];
		float 	fVec34_tmp[32+4];
		float 	fZec83[32];
		float 	fVec35_tmp[32+4];
		float 	fZec84[32];
		float 	fVec36_tmp[32+4];
		float 	fZec85[32];
		float 	fVec37_tmp[32+4];
		float 	fZec86[32];
		float 	fVec38_tmp[32+4];
		float 	fZec87[32];
		float 	fVec39_tmp[32+4];
		float 	fZec88[32];
		float 	fVec40_tmp[32+4];
		float 	fZec89[32];
		float 	fVec41_tmp[32+4];
		float 	fZec90[32];
		float 	fVec42_tmp[32+4];
		float 	fZec91[32];
		float 	fVec43_tmp[32+4];
		float 	fZec92[32];
		float 	fVec44_tmp[32+4];
		float 	fZec93[32];
		float 	fVec45_tmp[32+4];
		float 	fZec94[32];
		float 	fVec46_tmp[32+4];
		float 	fZec95[32];
		float 	fVec47_tmp[32+4];
		float 	fZec96[32];
		float 	fVec48_tmp[32+4];
		float 	fZec97[32];
		float 	fZec98[32];
		float 	fVec49_tmp[32+4];
		float 	fZec99[32];
		float 	fZec100[32];
		float 	fVec50_tmp[32+4];
		float 	fZec101[32];
		float 	fZec102[32];
		float 	fVec51_tmp[32+4];
		float 	fZec103[32];
		float 	fZec104[32];
		float 	fVec52_tmp[32+4];
		float 	fZec105[32];
		float 	fZec106[32];
		float 	fVec53_tmp[32+4];
		float 	fZec107[32];
		float 	fZec108[32];
		float 	fVec54_tmp[32+4];
		float 	fZec109[32];
		float 	fZec110[32];
		float 	fVec55_tmp[32+4];
		float 	fZec111[32];
		float 	fZec112[32];
		float 	fVec56_tmp[32+4];
		float 	fZec113[32];
		float 	fZec114[32];
		float 	fVec57_tmp[32+4];
		float 	fZec115[32];
		float 	fZec116[32];
		float 	fVec58_tmp[32+4];
		float 	fZec117[32];
		float 	fZec118[32];
		float 	fVec59_tmp[32+4];
		float 	fZec119[32];
		float 	fZec120[32];
		float 	fVec60_tmp[32+4];
		float 	fZec121[32];
		float 	fZec122[32];
		float 	fZec123[32];
		float 	fZec124[32];
		float 	fZec125[32];
		float 	fZec126[32];
		float 	fZec127[32];
		float 	fZec128[32];
		float 	fZec129[32];
		float 	fZec130[32];
		float 	fZec131[32];
		float 	fZec132[32];
		float 	fZec133[32];
		float 	fZec134[32];
		float 	fZec135[32];
		float 	fZec136[32];
		float 	fZec137[32];
		float 	fZec138[32];
		float 	fZec139[32];
		float 	fZec140[32];
		float 	fZec141[32];
		float 	fZec142[32];
		float 	fZec143[32];
		float 	fZec144[32];
		float 	fZec145[32];
		float 	fZec146[32];
		float 	fZec147[32];
		float 	fZec148[32];
		float 	fZec149[32];
		float 	fZec150[32];
		float 	fZec151[32];
		float 	fZec152[32];
		float 	fZec153[32];
		float 	fZec154[32];
		float 	fZec155[32];
		float 	fZec156[32];
		float 	fZec157[32];
		float 	fYec48_tmp[32+4];
		float 	fRec134_tmp[32+4];
		int 	iRec137_tmp[32+4];
		float 	fYec49_tmp[32+4];
		float 	fZec158[32];
		float 	fRec136_tmp[32+4];
		float 	fRec135_tmp[32+4];
		int 	iRec140_tmp[32+4];
		float 	fYec50_tmp[32+4];
		float 	fZec159[32];
		float 	fRec139_tmp[32+4];
		float 	fRec138_tmp[32+4];
		int 	iRec143_tmp[32+4];
		float 	fYec51_tmp[32+4];
		float 	fZec160[32];
		float 	fRec142_tmp[32+4];
		float 	fRec141_tmp[32+4];
		int 	iRec146_tmp[32+4];
		float 	fYec52_tmp[32+4];
		float 	fZec161[32];
		float 	fRec145_tmp[32+4];
		float 	fRec144_tmp[32+4];
		int 	iRec149_tmp[32+4];
		float 	fYec53_tmp[32+4];
		float 	fZec162[32];
		float 	fRec148_tmp[32+4];
		float 	fRec147_tmp[32+4];
		int 	iRec152_tmp[32+4];
		float 	fYec54_tmp[32+4];
		float 	fZec163[32];
		float 	fRec151_tmp[32+4];
		float 	fRec150_tmp[32+4];
		int 	iRec155_tmp[32+4];
		float 	fYec55_tmp[32+4];
		float 	fZec164[32];
		float 	fRec154_tmp[32+4];
		float 	fRec153_tmp[32+4];
		int 	iRec158_tmp[32+4];
		float 	fYec56_tmp[32+4];
		float 	fZec165[32];
		float 	fRec157_tmp[32+4];
		float 	fRec156_tmp[32+4];
		float 	fZec166[32];
		float 	fZec167[32];
		float 	fYec57_tmp[32+4];
		float 	fRec159_tmp[32+4];
		int 	iRec162_tmp[32+4];
		float 	fYec58_tmp[32+4];
		float 	fZec168[32];
		float 	fRec161_tmp[32+4];
		float 	fRec160_tmp[32+4];
		int 	iRec165_tmp[32+4];
		float 	fYec59_tmp[32+4];
		float 	fZec169[32];
		float 	fRec164_tmp[32+4];
		float 	fRec163_tmp[32+4];
		int 	iRec168_tmp[32+4];
		float 	fYec60_tmp[32+4];
		float 	fZec170[32];
		float 	fRec167_tmp[32+4];
		float 	fRec166_tmp[32+4];
		int 	iRec171_tmp[32+4];
		float 	fYec61_tmp[32+4];
		float 	fZec171[32];
		float 	fRec170_tmp[32+4];
		float 	fRec169_tmp[32+4];
		float 	fZec172[32];
		float 	fZec173[32];
		float 	fYec62_tmp[32+4];
		float 	fRec172_tmp[32+4];
		int 	iRec175_tmp[32+4];
		float 	fYec63_tmp[32+4];
		float 	fZec174[32];
		float 	fRec174_tmp[32+4];
		float 	fRec173_tmp[32+4];
		int 	iRec178_tmp[32+4];
		float 	fYec64_tmp[32+4];
		float 	fZec175[32];
		float 	fRec177_tmp[32+4];
		float 	fRec176_tmp[32+4];
		int 	iRec181_tmp[32+4];
		float 	fYec65_tmp[32+4];
		float 	fZec176[32];
		float 	fRec180_tmp[32+4];
		float 	fRec179_tmp[32+4];
		int 	iRec184_tmp[32+4];
		float 	fYec66_tmp[32+4];
		float 	fZec177[32];
		float 	fRec183_tmp[32+4];
		float 	fRec182_tmp[32+4];
		int 	iRec187_tmp[32+4];
		float 	fYec67_tmp[32+4];
		float 	fZec178[32];
		float 	fRec186_tmp[32+4];
		float 	fRec185_tmp[32+4];
		float 	fZec179[32];
		float 	fZec180[32];
		float 	fZec181[32];
		float 	fZec182[32];
		float 	fZec183[32];
		float 	fYec68_tmp[32+4];
		float 	fRec188_tmp[32+4];
		int 	iRec191_tmp[32+4];
		float 	fYec69_tmp[32+4];
		float 	fZec184[32];
		float 	fRec190_tmp[32+4];
		float 	fRec189_tmp[32+4];
		int 	iRec194_tmp[32+4];
		float 	fYec70_tmp[32+4];
		float 	fZec185[32];
		float 	fRec193_tmp[32+4];
		float 	fRec192_tmp[32+4];
		int 	iRec197_tmp[32+4];
		float 	fYec71_tmp[32+4];
		float 	fZec186[32];
		float 	fRec196_tmp[32+4];
		float 	fRec195_tmp[32+4];
		int 	iRec200_tmp[32+4];
		float 	fYec72_tmp[32+4];
		float 	fZec187[32];
		float 	fRec199_tmp[32+4];
		float 	fRec198_tmp[32+4];
		int 	iRec203_tmp[32+4];
		float 	fYec73_tmp[32+4];
		float 	fZec188[32];
		float 	fRec202_tmp[32+4];
		float 	fRec201_tmp[32+4];
		int 	iRec206_tmp[32+4];
		float 	fYec74_tmp[32+4];
		float 	fZec189[32];
		float 	fRec205_tmp[32+4];
		float 	fRec204_tmp[32+4];
		int 	iRec209_tmp[32+4];
		float 	fYec75_tmp[32+4];
		float 	fZec190[32];
		float 	fRec208_tmp[32+4];
		float 	fRec207_tmp[32+4];
		float 	fZec191[32];
		float 	fZec192[32];
		float 	fZec193[32];
		float 	fYec76_tmp[32+4];
		float 	fRec210_tmp[32+4];
		int 	iRec213_tmp[32+4];
		float 	fYec77_tmp[32+4];
		float 	fZec194[32];
		float 	fRec212_tmp[32+4];
		float 	fRec211_tmp[32+4];
		int 	iRec216_tmp[32+4];
		float 	fYec78_tmp[32+4];
		float 	fZec195[32];
		float 	fRec215_tmp[32+4];
		float 	fRec214_tmp[32+4];
		int 	iRec219_tmp[32+4];
		float 	fYec79_tmp[32+4];
		float 	fZec196[32];
		float 	fRec218_tmp[32+4];
		float 	fRec217_tmp[32+4];
		int 	iRec222_tmp[32+4];
		float 	fYec80_tmp[32+4];
		float 	fZec197[32];
		float 	fRec221_tmp[32+4];
		float 	fRec220_tmp[32+4];
		int 	iRec225_tmp[32+4];
		float 	fYec81_tmp[32+4];
		float 	fZec198[32];
		float 	fRec224_tmp[32+4];
		float 	fRec223_tmp[32+4];
		int 	iRec228_tmp[32+4];
		float 	fYec82_tmp[32+4];
		float 	fZec199[32];
		float 	fRec227_tmp[32+4];
		float 	fRec226_tmp[32+4];
		int 	iRec231_tmp[32+4];
		float 	fYec83_tmp[32+4];
		float 	fZec200[32];
		float 	fRec230_tmp[32+4];
		float 	fRec229_tmp[32+4];
		int 	iRec234_tmp[32+4];
		float 	fYec84_tmp[32+4];
		float 	fZec201[32];
		float 	fRec233_tmp[32+4];
		float 	fRec232_tmp[32+4];
		int 	iRec237_tmp[32+4];
		float 	fYec85_tmp[32+4];
		float 	fZec202[32];
		float 	fRec236_tmp[32+4];
		float 	fRec235_tmp[32+4];
		int 	iRec240_tmp[32+4];
		float 	fYec86_tmp[32+4];
		float 	fZec203[32];
		float 	fRec239_tmp[32+4];
		float 	fRec238_tmp[32+4];
		int 	iRec243_tmp[32+4];
		float 	fYec87_tmp[32+4];
		float 	fZec204[32];
		float 	fRec242_tmp[32+4];
		float 	fRec241_tmp[32+4];
		int 	iRec246_tmp[32+4];
		float 	fYec88_tmp[32+4];
		float 	fZec205[32];
		float 	fRec245_tmp[32+4];
		float 	fRec244_tmp[32+4];
		int 	iRec249_tmp[32+4];
		float 	fRec248_tmp[32+4];
		float 	fRec247_tmp[32+4];
		int 	iRec252_tmp[32+4];
		float 	fRec251_tmp[32+4];
		float 	fRec250_tmp[32+4];
		int 	iRec255_tmp[32+4];
		float 	fRec254_tmp[32+4];
		float 	fRec253_tmp[32+4];
		int 	iRec258_tmp[32+4];
		float 	fRec257_tmp[32+4];
		float 	fRec256_tmp[32+4];
		int 	iRec261_tmp[32+4];
		float 	fRec260_tmp[32+4];
		float 	fRec259_tmp[32+4];
		int 	iRec264_tmp[32+4];
		float 	fRec263_tmp[32+4];
		float 	fRec262_tmp[32+4];
		int 	iRec267_tmp[32+4];
		float 	fRec266_tmp[32+4];
		float 	fRec265_tmp[32+4];
		int 	iRec270_tmp[32+4];
		float 	fRec269_tmp[32+4];
		float 	fRec268_tmp[32+4];
		int 	iRec273_tmp[32+4];
		float 	fRec272_tmp[32+4];
		float 	fRec271_tmp[32+4];
		int 	iRec276_tmp[32+4];
		float 	fRec275_tmp[32+4];
		float 	fRec274_tmp[32+4];
		int 	iRec279_tmp[32+4];
		float 	fRec278_tmp[32+4];
		float 	fRec277_tmp[32+4];
		int 	iRec282_tmp[32+4];
		float 	fRec281_tmp[32+4];
		float 	fRec280_tmp[32+4];
		float 	fZec206[32];
		float 	fZec207[32];
		float 	fZec208[32];
		float 	fYec89_tmp[32+4];
		float 	fRec283_tmp[32+4];
		float 	fZec209[32];
		float 	fZec210[32];
		float 	fZec211[32];
		float 	fYec90_tmp[32+4];
		float 	fRec284_tmp[32+4];
		float 	fZec212[32];
		float 	fYec91_tmp[32+4];
		float 	fRec286_tmp[32+4];
		float 	fRec285_tmp[32+4];
		float 	fZec213[32];
		float 	fYec92_tmp[32+4];
		float 	fRec288_tmp[32+4];
		float 	fRec287_tmp[32+4];
		float 	fZec214[32];
		float 	fYec93_tmp[32+4];
		float 	fRec290_tmp[32+4];
		float 	fRec289_tmp[32+4];
		float 	fZec215[32];
		float 	fYec94_tmp[32+4];
		float 	fRec292_tmp[32+4];
		float 	fRec291_tmp[32+4];
		float 	fRec294_tmp[32+4];
		float 	fYec95_tmp[32+4];
		float 	fRec293_tmp[32+4];
		float 	fRec296_tmp[32+4];
		float 	fYec96_tmp[32+4];
		float 	fRec295_tmp[32+4];
		float 	fRec298_tmp[32+4];
		float 	fYec97_tmp[32+4];
		float 	fRec297_tmp[32+4];
		float 	fRec300_tmp[32+4];
		float 	fYec98_tmp[32+4];
		float 	fRec299_tmp[32+4];
		float 	fRec301_tmp[32+4];
		float 	fRec302_tmp[32+4];
		int 	iRec308_tmp[32+4];
		float 	fZec216[32];
		float 	fZec217[32];
		int 	iZec218[32];
		float 	fRec305_tmp[32+4];
		int 	iRec306_tmp[32+4];
		float 	fRec307_tmp[32+4];
		float 	fYec99_tmp[32+4];
		float 	fZec219[32];
		float 	fZec220[32];
		float 	fRec304_tmp[32+4];
		float 	fRec303_tmp[32+4];
		float 	fZec221[32];
		float 	fZec222[32];
		float 	fYec100_tmp[32+4];
		float 	fZec223[32];
		float 	fZec224[32];
		float 	fZec225[32];
		float 	fZec226[32];
		float 	fZec227[32];
		float 	fSlow0 = (0.02f * faustpower<2>(fslider0));
		float* 	fRec0 = &fRec0_tmp[4];
		float 	fSlow1 = (fConst2 * float((5.0f + (3 * fslider1))));
		float* 	fRec3 = &fRec3_tmp[4];
		float 	fSlow2 = fslider2;
		int 	iSlow3 = int((fSlow2 > 0.16666666666666666f));
		float 	fSlow4 = ((iSlow3)?1.001383f:1.0f);
		float 	fSlow5 = (1 + (0.03f * fslider3));
		float 	fSlow6 = (0.0001f + (0.0149f * fslider4));
		float* 	fRec2 = &fRec2_tmp[4];
		float* 	fYec0 = &fYec0_tmp[4];
		float* 	fRec1 = &fRec1_tmp[4];
		float 	fSlow7 = ((iSlow3)?1.003118f:1.0f);
		float* 	fRec5 = &fRec5_tmp[4];
		float* 	fYec1 = &fYec1_tmp[4];
		float* 	fRec4 = &fRec4_tmp[4];
		float 	fSlow8 = ((iSlow3)?0.996945f:1.0f);
		float* 	fRec7 = &fRec7_tmp[4];
		float* 	fYec2 = &fYec2_tmp[4];
		float* 	fRec6 = &fRec6_tmp[4];
		float 	fSlow9 = ((iSlow3)?1.002464f:1.0f);
		float* 	fRec9 = &fRec9_tmp[4];
		float* 	fYec3 = &fYec3_tmp[4];
		float* 	fRec8 = &fRec8_tmp[4];
		float 	fSlow10 = ((iSlow3)?1.000562f:1.0f);
		float* 	fRec11 = &fRec11_tmp[4];
		float* 	fYec4 = &fYec4_tmp[4];
		float* 	fRec10 = &fRec10_tmp[4];
		float 	fSlow11 = ((iSlow3)?0.997294f:1.0f);
		float* 	fRec13 = &fRec13_tmp[4];
		float* 	fYec5 = &fYec5_tmp[4];
		float* 	fRec12 = &fRec12_tmp[4];
		float 	fSlow12 = ((iSlow3)?0.997199f:1.0f);
		float* 	fRec15 = &fRec15_tmp[4];
		float* 	fYec6 = &fYec6_tmp[4];
		float* 	fRec14 = &fRec14_tmp[4];
		float 	fSlow13 = ((iSlow3)?0.998889f:1.0f);
		float* 	fRec17 = &fRec17_tmp[4];
		float* 	fYec7 = &fYec7_tmp[4];
		float* 	fRec16 = &fRec16_tmp[4];
		float 	fSlow14 = ((iSlow3)?1.000064f:1.0f);
		float* 	fRec19 = &fRec19_tmp[4];
		float* 	fYec8 = &fYec8_tmp[4];
		float* 	fRec18 = &fRec18_tmp[4];
		float 	fSlow15 = ((iSlow3)?1.001135f:1.0f);
		float* 	fRec21 = &fRec21_tmp[4];
		float* 	fYec9 = &fYec9_tmp[4];
		float* 	fRec20 = &fRec20_tmp[4];
		float 	fSlow16 = ((iSlow3)?0.999484f:1.0f);
		float* 	fRec23 = &fRec23_tmp[4];
		float* 	fYec10 = &fYec10_tmp[4];
		float* 	fRec22 = &fRec22_tmp[4];
		float 	fSlow17 = ((iSlow3)?1.003796f:1.0f);
		float* 	fRec25 = &fRec25_tmp[4];
		float* 	fYec11 = &fYec11_tmp[4];
		float* 	fRec24 = &fRec24_tmp[4];
		int* 	iRec28 = &iRec28_tmp[4];
		float* 	fYec12 = &fYec12_tmp[4];
		float* 	fRec27 = &fRec27_tmp[4];
		float* 	fRec26 = &fRec26_tmp[4];
		int* 	iRec31 = &iRec31_tmp[4];
		float* 	fYec13 = &fYec13_tmp[4];
		float* 	fRec30 = &fRec30_tmp[4];
		float* 	fRec29 = &fRec29_tmp[4];
		int* 	iRec34 = &iRec34_tmp[4];
		float* 	fYec14 = &fYec14_tmp[4];
		float* 	fRec33 = &fRec33_tmp[4];
		float* 	fRec32 = &fRec32_tmp[4];
		int* 	iRec37 = &iRec37_tmp[4];
		float* 	fYec15 = &fYec15_tmp[4];
		float* 	fRec36 = &fRec36_tmp[4];
		float* 	fRec35 = &fRec35_tmp[4];
		int* 	iRec40 = &iRec40_tmp[4];
		float* 	fYec16 = &fYec16_tmp[4];
		float* 	fRec39 = &fRec39_tmp[4];
		float* 	fRec38 = &fRec38_tmp[4];
		int* 	iRec43 = &iRec43_tmp[4];
		float* 	fYec17 = &fYec17_tmp[4];
		float* 	fRec42 = &fRec42_tmp[4];
		float* 	fRec41 = &fRec41_tmp[4];
		int* 	iRec46 = &iRec46_tmp[4];
		float* 	fYec18 = &fYec18_tmp[4];
		float* 	fRec45 = &fRec45_tmp[4];
		float* 	fRec44 = &fRec44_tmp[4];
		int* 	iRec49 = &iRec49_tmp[4];
		float* 	fYec19 = &fYec19_tmp[4];
		float* 	fRec48 = &fRec48_tmp[4];
		float* 	fRec47 = &fRec47_tmp[4];
		int* 	iRec52 = &iRec52_tmp[4];
		float* 	fYec20 = &fYec20_tmp[4];
		float* 	fRec51 = &fRec51_tmp[4];
		float* 	fRec50 = &fRec50_tmp[4];
		int* 	iRec55 = &iRec55_tmp[4];
		float* 	fYec21 = &fYec21_tmp[4];
		float* 	fRec54 = &fRec54_tmp[4];
		float* 	fRec53 = &fRec53_tmp[4];
		int* 	iRec58 = &iRec58_tmp[4];
		float* 	fYec22 = &fYec22_tmp[4];
		float* 	fRec57 = &fRec57_tmp[4];
		float* 	fRec56 = &fRec56_tmp[4];
		int* 	iRec61 = &iRec61_tmp[4];
		float* 	fYec23 = &fYec23_tmp[4];
		float* 	fRec60 = &fRec60_tmp[4];
		float* 	fRec59 = &fRec59_tmp[4];
		int* 	iRec64 = &iRec64_tmp[4];
		float* 	fYec24 = &fYec24_tmp[4];
		float* 	fRec63 = &fRec63_tmp[4];
		float* 	fRec62 = &fRec62_tmp[4];
		int* 	iRec67 = &iRec67_tmp[4];
		float* 	fYec25 = &fYec25_tmp[4];
		float* 	fRec66 = &fRec66_tmp[4];
		float* 	fRec65 = &fRec65_tmp[4];
		int* 	iRec70 = &iRec70_tmp[4];
		float* 	fYec26 = &fYec26_tmp[4];
		float* 	fRec69 = &fRec69_tmp[4];
		float* 	fRec68 = &fRec68_tmp[4];
		int* 	iRec73 = &iRec73_tmp[4];
		float* 	fYec27 = &fYec27_tmp[4];
		float* 	fRec72 = &fRec72_tmp[4];
		float* 	fRec71 = &fRec71_tmp[4];
		int* 	iRec76 = &iRec76_tmp[4];
		float* 	fYec28 = &fYec28_tmp[4];
		float* 	fRec75 = &fRec75_tmp[4];
		float* 	fRec74 = &fRec74_tmp[4];
		int* 	iRec79 = &iRec79_tmp[4];
		float* 	fYec29 = &fYec29_tmp[4];
		float* 	fRec78 = &fRec78_tmp[4];
		float* 	fRec77 = &fRec77_tmp[4];
		int* 	iRec82 = &iRec82_tmp[4];
		float* 	fYec30 = &fYec30_tmp[4];
		float* 	fRec81 = &fRec81_tmp[4];
		float* 	fRec80 = &fRec80_tmp[4];
		int* 	iRec85 = &iRec85_tmp[4];
		float* 	fYec31 = &fYec31_tmp[4];
		float* 	fRec84 = &fRec84_tmp[4];
		float* 	fRec83 = &fRec83_tmp[4];
		int* 	iRec88 = &iRec88_tmp[4];
		float* 	fYec32 = &fYec32_tmp[4];
		float* 	fRec87 = &fRec87_tmp[4];
		float* 	fRec86 = &fRec86_tmp[4];
		int* 	iRec91 = &iRec91_tmp[4];
		float* 	fYec33 = &fYec33_tmp[4];
		float* 	fRec90 = &fRec90_tmp[4];
		float* 	fRec89 = &fRec89_tmp[4];
		int* 	iRec94 = &iRec94_tmp[4];
		float* 	fYec34 = &fYec34_tmp[4];
		float* 	fRec93 = &fRec93_tmp[4];
		float* 	fRec92 = &fRec92_tmp[4];
		int* 	iRec97 = &iRec97_tmp[4];
		float* 	fYec35 = &fYec35_tmp[4];
		float* 	fRec96 = &fRec96_tmp[4];
		float* 	fRec95 = &fRec95_tmp[4];
		int* 	iRec100 = &iRec100_tmp[4];
		float* 	fYec36 = &fYec36_tmp[4];
		float* 	fRec99 = &fRec99_tmp[4];
		float* 	fRec98 = &fRec98_tmp[4];
		int* 	iRec103 = &iRec103_tmp[4];
		float* 	fYec37 = &fYec37_tmp[4];
		float* 	fRec102 = &fRec102_tmp[4];
		float* 	fRec101 = &fRec101_tmp[4];
		int* 	iRec106 = &iRec106_tmp[4];
		float* 	fYec38 = &fYec38_tmp[4];
		float* 	fRec105 = &fRec105_tmp[4];
		float* 	fRec104 = &fRec104_tmp[4];
		int* 	iRec109 = &iRec109_tmp[4];
		float* 	fYec39 = &fYec39_tmp[4];
		float* 	fRec108 = &fRec108_tmp[4];
		float* 	fRec107 = &fRec107_tmp[4];
		int* 	iRec112 = &iRec112_tmp[4];
		float* 	fYec40 = &fYec40_tmp[4];
		float* 	fRec111 = &fRec111_tmp[4];
		float* 	fRec110 = &fRec110_tmp[4];
		int* 	iRec115 = &iRec115_tmp[4];
		float* 	fYec41 = &fYec41_tmp[4];
		float* 	fRec114 = &fRec114_tmp[4];
		float* 	fRec113 = &fRec113_tmp[4];
		int* 	iRec118 = &iRec118_tmp[4];
		float* 	fYec42 = &fYec42_tmp[4];
		float* 	fRec117 = &fRec117_tmp[4];
		float* 	fRec116 = &fRec116_tmp[4];
		int* 	iRec121 = &iRec121_tmp[4];
		float* 	fYec43 = &fYec43_tmp[4];
		float* 	fRec120 = &fRec120_tmp[4];
		float* 	fRec119 = &fRec119_tmp[4];
		int* 	iRec124 = &iRec124_tmp[4];
		float* 	fYec44 = &fYec44_tmp[4];
		float* 	fRec123 = &fRec123_tmp[4];
		float* 	fRec122 = &fRec122_tmp[4];
		int* 	iRec127 = &iRec127_tmp[4];
		float* 	fYec45 = &fYec45_tmp[4];
		float* 	fRec126 = &fRec126_tmp[4];
		float* 	fRec125 = &fRec125_tmp[4];
		int* 	iRec130 = &iRec130_tmp[4];
		float* 	fYec46 = &fYec46_tmp[4];
		float* 	fRec129 = &fRec129_tmp[4];
		float* 	fRec128 = &fRec128_tmp[4];
		int* 	iRec133 = &iRec133_tmp[4];
		float* 	fYec47 = &fYec47_tmp[4];
		float* 	fRec132 = &fRec132_tmp[4];
		float* 	fRec131 = &fRec131_tmp[4];
		float 	fSlow18 = fbutton0;
		float* 	fVec0 = &fVec0_tmp[4];
		float 	fSlow19 = fbutton1;
		float* 	fVec1 = &fVec1_tmp[4];
		float 	fSlow20 = fbutton2;
		float* 	fVec2 = &fVec2_tmp[4];
		float 	fSlow21 = fbutton3;
		float* 	fVec3 = &fVec3_tmp[4];
		float 	fSlow22 = fbutton4;
		float* 	fVec4 = &fVec4_tmp[4];
		float 	fSlow23 = fbutton5;
		float* 	fVec5 = &fVec5_tmp[4];
		float 	fSlow24 = fbutton6;
		float* 	fVec6 = &fVec6_tmp[4];
		float 	fSlow25 = fbutton7;
		float* 	fVec7 = &fVec7_tmp[4];
		float 	fSlow26 = fbutton8;
		float* 	fVec8 = &fVec8_tmp[4];
		float 	fSlow27 = fbutton9;
		float* 	fVec9 = &fVec9_tmp[4];
		float 	fSlow28 = fbutton10;
		float* 	fVec10 = &fVec10_tmp[4];
		float 	fSlow29 = fbutton11;
		float* 	fVec11 = &fVec11_tmp[4];
		float 	fSlow30 = fbutton12;
		float* 	fVec12 = &fVec12_tmp[4];
		float 	fSlow31 = fbutton13;
		float* 	fVec13 = &fVec13_tmp[4];
		float 	fSlow32 = fbutton14;
		float* 	fVec14 = &fVec14_tmp[4];
		float 	fSlow33 = fbutton15;
		float* 	fVec15 = &fVec15_tmp[4];
		float 	fSlow34 = fbutton16;
		float* 	fVec16 = &fVec16_tmp[4];
		float 	fSlow35 = fslider5;
		float 	fSlow36 = (1.0f - fSlow35);
		float 	fSlow37 = fbutton17;
		float* 	fVec17 = &fVec17_tmp[4];
		float 	fSlow38 = fbutton18;
		float* 	fVec18 = &fVec18_tmp[4];
		float 	fSlow39 = fbutton19;
		float* 	fVec19 = &fVec19_tmp[4];
		float 	fSlow40 = fbutton20;
		float* 	fVec20 = &fVec20_tmp[4];
		float 	fSlow41 = fbutton21;
		float* 	fVec21 = &fVec21_tmp[4];
		float 	fSlow42 = fbutton22;
		float* 	fVec22 = &fVec22_tmp[4];
		float 	fSlow43 = fbutton23;
		float* 	fVec23 = &fVec23_tmp[4];
		float 	fSlow44 = fbutton24;
		float* 	fVec24 = &fVec24_tmp[4];
		float 	fSlow45 = fbutton25;
		float* 	fVec25 = &fVec25_tmp[4];
		float 	fSlow46 = fbutton26;
		float* 	fVec26 = &fVec26_tmp[4];
		float 	fSlow47 = fbutton27;
		float* 	fVec27 = &fVec27_tmp[4];
		float 	fSlow48 = fbutton28;
		float* 	fVec28 = &fVec28_tmp[4];
		float 	fSlow49 = fbutton29;
		float* 	fVec29 = &fVec29_tmp[4];
		float 	fSlow50 = fbutton30;
		float* 	fVec30 = &fVec30_tmp[4];
		float 	fSlow51 = fbutton31;
		float* 	fVec31 = &fVec31_tmp[4];
		float 	fSlow52 = fbutton32;
		float* 	fVec32 = &fVec32_tmp[4];
		float 	fSlow53 = fbutton33;
		float* 	fVec33 = &fVec33_tmp[4];
		float 	fSlow54 = fbutton34;
		float* 	fVec34 = &fVec34_tmp[4];
		float 	fSlow55 = fbutton35;
		float* 	fVec35 = &fVec35_tmp[4];
		float 	fSlow56 = fbutton36;
		float* 	fVec36 = &fVec36_tmp[4];
		float 	fSlow57 = fbutton37;
		float* 	fVec37 = &fVec37_tmp[4];
		float 	fSlow58 = fbutton38;
		float* 	fVec38 = &fVec38_tmp[4];
		float 	fSlow59 = fbutton39;
		float* 	fVec39 = &fVec39_tmp[4];
		float 	fSlow60 = fbutton40;
		float* 	fVec40 = &fVec40_tmp[4];
		float 	fSlow61 = fbutton41;
		float* 	fVec41 = &fVec41_tmp[4];
		float 	fSlow62 = fbutton42;
		float* 	fVec42 = &fVec42_tmp[4];
		float 	fSlow63 = fbutton43;
		float* 	fVec43 = &fVec43_tmp[4];
		float 	fSlow64 = fbutton44;
		float* 	fVec44 = &fVec44_tmp[4];
		float 	fSlow65 = fbutton45;
		float* 	fVec45 = &fVec45_tmp[4];
		float 	fSlow66 = fbutton46;
		float* 	fVec46 = &fVec46_tmp[4];
		float 	fSlow67 = fbutton47;
		float* 	fVec47 = &fVec47_tmp[4];
		float 	fSlow68 = fbutton48;
		float* 	fVec48 = &fVec48_tmp[4];
		float 	fSlow69 = fbutton49;
		float* 	fVec49 = &fVec49_tmp[4];
		float 	fSlow70 = fbutton50;
		float* 	fVec50 = &fVec50_tmp[4];
		float 	fSlow71 = fbutton51;
		float* 	fVec51 = &fVec51_tmp[4];
		float 	fSlow72 = fbutton52;
		float* 	fVec52 = &fVec52_tmp[4];
		float 	fSlow73 = fbutton53;
		float* 	fVec53 = &fVec53_tmp[4];
		float 	fSlow74 = fbutton54;
		float* 	fVec54 = &fVec54_tmp[4];
		float 	fSlow75 = fbutton55;
		float* 	fVec55 = &fVec55_tmp[4];
		float 	fSlow76 = fbutton56;
		float* 	fVec56 = &fVec56_tmp[4];
		float 	fSlow77 = fbutton57;
		float* 	fVec57 = &fVec57_tmp[4];
		float 	fSlow78 = fbutton58;
		float* 	fVec58 = &fVec58_tmp[4];
		float 	fSlow79 = fbutton59;
		float* 	fVec59 = &fVec59_tmp[4];
		float 	fSlow80 = fbutton60;
		float* 	fVec60 = &fVec60_tmp[4];
		float 	fSlow81 = (0.5f * fSlow36);
		float* 	fYec48 = &fYec48_tmp[4];
		float* 	fRec134 = &fRec134_tmp[4];
		int* 	iRec137 = &iRec137_tmp[4];
		float* 	fYec49 = &fYec49_tmp[4];
		float* 	fRec136 = &fRec136_tmp[4];
		float* 	fRec135 = &fRec135_tmp[4];
		int* 	iRec140 = &iRec140_tmp[4];
		float* 	fYec50 = &fYec50_tmp[4];
		float* 	fRec139 = &fRec139_tmp[4];
		float* 	fRec138 = &fRec138_tmp[4];
		int* 	iRec143 = &iRec143_tmp[4];
		float* 	fYec51 = &fYec51_tmp[4];
		float* 	fRec142 = &fRec142_tmp[4];
		float* 	fRec141 = &fRec141_tmp[4];
		int* 	iRec146 = &iRec146_tmp[4];
		float* 	fYec52 = &fYec52_tmp[4];
		float* 	fRec145 = &fRec145_tmp[4];
		float* 	fRec144 = &fRec144_tmp[4];
		int* 	iRec149 = &iRec149_tmp[4];
		float* 	fYec53 = &fYec53_tmp[4];
		float* 	fRec148 = &fRec148_tmp[4];
		float* 	fRec147 = &fRec147_tmp[4];
		int* 	iRec152 = &iRec152_tmp[4];
		float* 	fYec54 = &fYec54_tmp[4];
		float* 	fRec151 = &fRec151_tmp[4];
		float* 	fRec150 = &fRec150_tmp[4];
		int* 	iRec155 = &iRec155_tmp[4];
		float* 	fYec55 = &fYec55_tmp[4];
		float* 	fRec154 = &fRec154_tmp[4];
		float* 	fRec153 = &fRec153_tmp[4];
		int* 	iRec158 = &iRec158_tmp[4];
		float* 	fYec56 = &fYec56_tmp[4];
		float* 	fRec157 = &fRec157_tmp[4];
		float* 	fRec156 = &fRec156_tmp[4];
		float* 	fYec57 = &fYec57_tmp[4];
		float* 	fRec159 = &fRec159_tmp[4];
		int* 	iRec162 = &iRec162_tmp[4];
		float* 	fYec58 = &fYec58_tmp[4];
		float* 	fRec161 = &fRec161_tmp[4];
		float* 	fRec160 = &fRec160_tmp[4];
		int* 	iRec165 = &iRec165_tmp[4];
		float* 	fYec59 = &fYec59_tmp[4];
		float* 	fRec164 = &fRec164_tmp[4];
		float* 	fRec163 = &fRec163_tmp[4];
		int* 	iRec168 = &iRec168_tmp[4];
		float* 	fYec60 = &fYec60_tmp[4];
		float* 	fRec167 = &fRec167_tmp[4];
		float* 	fRec166 = &fRec166_tmp[4];
		int* 	iRec171 = &iRec171_tmp[4];
		float* 	fYec61 = &fYec61_tmp[4];
		float* 	fRec170 = &fRec170_tmp[4];
		float* 	fRec169 = &fRec169_tmp[4];
		float* 	fYec62 = &fYec62_tmp[4];
		float* 	fRec172 = &fRec172_tmp[4];
		int* 	iRec175 = &iRec175_tmp[4];
		float* 	fYec63 = &fYec63_tmp[4];
		float* 	fRec174 = &fRec174_tmp[4];
		float* 	fRec173 = &fRec173_tmp[4];
		int* 	iRec178 = &iRec178_tmp[4];
		float* 	fYec64 = &fYec64_tmp[4];
		float* 	fRec177 = &fRec177_tmp[4];
		float* 	fRec176 = &fRec176_tmp[4];
		int* 	iRec181 = &iRec181_tmp[4];
		float* 	fYec65 = &fYec65_tmp[4];
		float* 	fRec180 = &fRec180_tmp[4];
		float* 	fRec179 = &fRec179_tmp[4];
		int* 	iRec184 = &iRec184_tmp[4];
		float* 	fYec66 = &fYec66_tmp[4];
		float* 	fRec183 = &fRec183_tmp[4];
		float* 	fRec182 = &fRec182_tmp[4];
		int* 	iRec187 = &iRec187_tmp[4];
		float* 	fYec67 = &fYec67_tmp[4];
		float* 	fRec186 = &fRec186_tmp[4];
		float* 	fRec185 = &fRec185_tmp[4];
		float* 	fYec68 = &fYec68_tmp[4];
		float* 	fRec188 = &fRec188_tmp[4];
		int* 	iRec191 = &iRec191_tmp[4];
		float* 	fYec69 = &fYec69_tmp[4];
		float* 	fRec190 = &fRec190_tmp[4];
		float* 	fRec189 = &fRec189_tmp[4];
		int* 	iRec194 = &iRec194_tmp[4];
		float* 	fYec70 = &fYec70_tmp[4];
		float* 	fRec193 = &fRec193_tmp[4];
		float* 	fRec192 = &fRec192_tmp[4];
		int* 	iRec197 = &iRec197_tmp[4];
		float* 	fYec71 = &fYec71_tmp[4];
		float* 	fRec196 = &fRec196_tmp[4];
		float* 	fRec195 = &fRec195_tmp[4];
		int* 	iRec200 = &iRec200_tmp[4];
		float* 	fYec72 = &fYec72_tmp[4];
		float* 	fRec199 = &fRec199_tmp[4];
		float* 	fRec198 = &fRec198_tmp[4];
		int* 	iRec203 = &iRec203_tmp[4];
		float* 	fYec73 = &fYec73_tmp[4];
		float* 	fRec202 = &fRec202_tmp[4];
		float* 	fRec201 = &fRec201_tmp[4];
		int* 	iRec206 = &iRec206_tmp[4];
		float* 	fYec74 = &fYec74_tmp[4];
		float* 	fRec205 = &fRec205_tmp[4];
		float* 	fRec204 = &fRec204_tmp[4];
		int* 	iRec209 = &iRec209_tmp[4];
		float* 	fYec75 = &fYec75_tmp[4];
		float* 	fRec208 = &fRec208_tmp[4];
		float* 	fRec207 = &fRec207_tmp[4];
		float* 	fYec76 = &fYec76_tmp[4];
		float* 	fRec210 = &fRec210_tmp[4];
		int* 	iRec213 = &iRec213_tmp[4];
		float* 	fYec77 = &fYec77_tmp[4];
		float* 	fRec212 = &fRec212_tmp[4];
		float* 	fRec211 = &fRec211_tmp[4];
		int* 	iRec216 = &iRec216_tmp[4];
		float* 	fYec78 = &fYec78_tmp[4];
		float* 	fRec215 = &fRec215_tmp[4];
		float* 	fRec214 = &fRec214_tmp[4];
		int* 	iRec219 = &iRec219_tmp[4];
		float* 	fYec79 = &fYec79_tmp[4];
		float* 	fRec218 = &fRec218_tmp[4];
		float* 	fRec217 = &fRec217_tmp[4];
		int* 	iRec222 = &iRec222_tmp[4];
		float* 	fYec80 = &fYec80_tmp[4];
		float* 	fRec221 = &fRec221_tmp[4];
		float* 	fRec220 = &fRec220_tmp[4];
		int* 	iRec225 = &iRec225_tmp[4];
		float* 	fYec81 = &fYec81_tmp[4];
		float* 	fRec224 = &fRec224_tmp[4];
		float* 	fRec223 = &fRec223_tmp[4];
		int* 	iRec228 = &iRec228_tmp[4];
		float* 	fYec82 = &fYec82_tmp[4];
		float* 	fRec227 = &fRec227_tmp[4];
		float* 	fRec226 = &fRec226_tmp[4];
		int* 	iRec231 = &iRec231_tmp[4];
		float* 	fYec83 = &fYec83_tmp[4];
		float* 	fRec230 = &fRec230_tmp[4];
		float* 	fRec229 = &fRec229_tmp[4];
		int* 	iRec234 = &iRec234_tmp[4];
		float* 	fYec84 = &fYec84_tmp[4];
		float* 	fRec233 = &fRec233_tmp[4];
		float* 	fRec232 = &fRec232_tmp[4];
		int* 	iRec237 = &iRec237_tmp[4];
		float* 	fYec85 = &fYec85_tmp[4];
		float* 	fRec236 = &fRec236_tmp[4];
		float* 	fRec235 = &fRec235_tmp[4];
		int* 	iRec240 = &iRec240_tmp[4];
		float* 	fYec86 = &fYec86_tmp[4];
		float* 	fRec239 = &fRec239_tmp[4];
		float* 	fRec238 = &fRec238_tmp[4];
		int* 	iRec243 = &iRec243_tmp[4];
		float* 	fYec87 = &fYec87_tmp[4];
		float* 	fRec242 = &fRec242_tmp[4];
		float* 	fRec241 = &fRec241_tmp[4];
		int* 	iRec246 = &iRec246_tmp[4];
		float* 	fYec88 = &fYec88_tmp[4];
		float* 	fRec245 = &fRec245_tmp[4];
		float* 	fRec244 = &fRec244_tmp[4];
		int* 	iRec249 = &iRec249_tmp[4];
		float* 	fRec248 = &fRec248_tmp[4];
		float* 	fRec247 = &fRec247_tmp[4];
		int* 	iRec252 = &iRec252_tmp[4];
		float* 	fRec251 = &fRec251_tmp[4];
		float* 	fRec250 = &fRec250_tmp[4];
		int* 	iRec255 = &iRec255_tmp[4];
		float* 	fRec254 = &fRec254_tmp[4];
		float* 	fRec253 = &fRec253_tmp[4];
		int* 	iRec258 = &iRec258_tmp[4];
		float* 	fRec257 = &fRec257_tmp[4];
		float* 	fRec256 = &fRec256_tmp[4];
		int* 	iRec261 = &iRec261_tmp[4];
		float* 	fRec260 = &fRec260_tmp[4];
		float* 	fRec259 = &fRec259_tmp[4];
		int* 	iRec264 = &iRec264_tmp[4];
		float* 	fRec263 = &fRec263_tmp[4];
		float* 	fRec262 = &fRec262_tmp[4];
		int* 	iRec267 = &iRec267_tmp[4];
		float* 	fRec266 = &fRec266_tmp[4];
		float* 	fRec265 = &fRec265_tmp[4];
		int* 	iRec270 = &iRec270_tmp[4];
		float* 	fRec269 = &fRec269_tmp[4];
		float* 	fRec268 = &fRec268_tmp[4];
		int* 	iRec273 = &iRec273_tmp[4];
		float* 	fRec272 = &fRec272_tmp[4];
		float* 	fRec271 = &fRec271_tmp[4];
		int* 	iRec276 = &iRec276_tmp[4];
		float* 	fRec275 = &fRec275_tmp[4];
		float* 	fRec274 = &fRec274_tmp[4];
		int* 	iRec279 = &iRec279_tmp[4];
		float* 	fRec278 = &fRec278_tmp[4];
		float* 	fRec277 = &fRec277_tmp[4];
		int* 	iRec282 = &iRec282_tmp[4];
		float* 	fRec281 = &fRec281_tmp[4];
		float* 	fRec280 = &fRec280_tmp[4];
		float* 	fYec89 = &fYec89_tmp[4];
		float* 	fRec283 = &fRec283_tmp[4];
		float* 	fYec90 = &fYec90_tmp[4];
		float* 	fRec284 = &fRec284_tmp[4];
		float 	fSlow82 = ((int((fSlow2 >= 0.8333333333333334f)))?1.0f:0.0f);
		float 	fSlow83 = fslider6;
		float 	fSlow84 = (fSlow83 * (1 + (fSlow83 * ((2.81f * fSlow83) - 2.81f))));
		float* 	fYec91 = &fYec91_tmp[4];
		float* 	fRec286 = &fRec286_tmp[4];
		float* 	fRec285 = &fRec285_tmp[4];
		float 	fSlow85 = fslider7;
		float 	fSlow86 = (fSlow85 * (1 + (fSlow85 * ((2.81f * fSlow85) - 2.81f))));
		float* 	fYec92 = &fYec92_tmp[4];
		float* 	fRec288 = &fRec288_tmp[4];
		float* 	fRec287 = &fRec287_tmp[4];
		float 	fSlow87 = fslider8;
		float 	fSlow88 = (fSlow87 * (1 + (fSlow87 * ((2.81f * fSlow87) - 2.81f))));
		float* 	fYec93 = &fYec93_tmp[4];
		float* 	fRec290 = &fRec290_tmp[4];
		float* 	fRec289 = &fRec289_tmp[4];
		float 	fSlow89 = fslider9;
		float 	fSlow90 = (fSlow89 * (1 + (fSlow89 * ((2.81f * fSlow89) - 2.81f))));
		float* 	fYec94 = &fYec94_tmp[4];
		float* 	fRec292 = &fRec292_tmp[4];
		float* 	fRec291 = &fRec291_tmp[4];
		float* 	fRec294 = &fRec294_tmp[4];
		float 	fSlow91 = (0.4583333333333333f * fSlow84);
		float* 	fYec95 = &fYec95_tmp[4];
		float* 	fRec293 = &fRec293_tmp[4];
		float* 	fRec296 = &fRec296_tmp[4];
		float 	fSlow92 = (0.4583333333333333f * fSlow86);
		float* 	fYec96 = &fYec96_tmp[4];
		float* 	fRec295 = &fRec295_tmp[4];
		float* 	fRec298 = &fRec298_tmp[4];
		float 	fSlow93 = (0.4583333333333333f * fSlow88);
		float* 	fYec97 = &fYec97_tmp[4];
		float* 	fRec297 = &fRec297_tmp[4];
		float* 	fRec300 = &fRec300_tmp[4];
		float 	fSlow94 = (0.4583333333333333f * fSlow90);
		float* 	fYec98 = &fYec98_tmp[4];
		float* 	fRec299 = &fRec299_tmp[4];
		float 	fSlow95 = fslider10;
		float 	fSlow96 = (fSlow95 * (1 + (fSlow95 * ((2.81f * fSlow95) - 2.81f))));
		float 	fSlow97 = fslider11;
		float 	fSlow98 = (fSlow97 * (1 + (fSlow97 * ((2.81f * fSlow97) - 2.81f))));
		float* 	fRec301 = &fRec301_tmp[4];
		float 	fSlow99 = (0.02f * fslider12);
		float* 	fRec302 = &fRec302_tmp[4];
		int* 	iRec308 = &iRec308_tmp[4];
		float* 	fRec305 = &fRec305_tmp[4];
		int* 	iRec306 = &iRec306_tmp[4];
		float* 	fRec307 = &fRec307_tmp[4];
		float* 	fYec99 = &fYec99_tmp[4];
		float* 	fRec304 = &fRec304_tmp[4];
		float* 	fRec303 = &fRec303_tmp[4];
		float 	fSlow100 = ((int((fSlow2 > 0.5f)))?0.01357f:0.0f);
		float* 	fYec100 = &fYec100_tmp[4];
		float 	fSlow101 = (4.5f * fslider13);
		float 	fSlow102 = (0.9615384615384616f * fslider14);
		float 	fSlow103 = (0.019230769230769232f + fSlow102);
		float 	fSlow104 = (0.6f * (0.9807692307692307f - fSlow102));
		float 	fSlow105 = fslider15;
		float 	fSlow106 = (2.5f * fSlow105);
		float 	fSlow107 = fslider16;
		float 	fSlow108 = (fSlow107 * (1 + (fSlow107 * ((2.81f * fSlow107) - 2.81f))));
		float 	fSlow109 = fslider17;
		float 	fSlow110 = (fSlow109 * (1 + (fSlow109 * ((2.81f * fSlow109) - 2.81f))));
		float 	fSlow111 = fslider18;
		float 	fSlow112 = (fSlow111 * (1 + (fSlow111 * ((2.81f * fSlow111) - 2.81f))));
		float 	fSlow113 = fslider19;
		float 	fSlow114 = (fSlow113 * (1 + (fSlow113 * ((2.81f * fSlow113) - 2.81f))));
		float 	fSlow115 = fslider20;
		float 	fSlow116 = (fSlow115 * (1 + (fSlow115 * ((2.81f * fSlow115) - 2.81f))));
		float 	fSlow117 = fslider21;
		float 	fSlow118 = (fSlow117 * (1 + (fSlow117 * ((2.81f * fSlow117) - 2.81f))));
		float 	fSlow119 = fslider22;
		float 	fSlow120 = (fSlow119 * (1 + (fSlow119 * ((2.81f * fSlow119) - 2.81f))));
		float 	fSlow121 = (1 - fSlow105);
		int index;
		for (index = 0; index <= fullcount - 32; index += 32) {
			// compute by blocks of 32 samples
			const int count = 32;
			FAUSTFLOAT* output0 = &output[0][index];
			FAUSTFLOAT* output1 = &output[1][index];
			FAUSTFLOAT* output2 = &output[2][index];
			// SECTION : 1
			// LOOP 0x27de6b0
			// pre processing
			for (int i=0; i<4; i++) fRec3_tmp[i]=fRec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec3[i] = (((int((fRec3[i-1] > 1.0f)))?(fRec3[i-1] - 1.0f):fRec3[i-1]) + fSlow1);
			}
			// post processing
			for (int i=0; i<4; i++) fRec3_perm[i]=fRec3_tmp[count+i];
			
			// SECTION : 2
			// LOOP 0x27e2340
			// exec code
			for (int i=0; i<count; i++) {
				fZec0[i] = ((fSlow6 * sinf((6.283185307179586f * fRec3[i]))) + fSlow5);
			}
			
			// SECTION : 3
			// LOOP 0x27de410
			// pre processing
			for (int i=0; i<4; i++) fRec2_tmp[i]=fRec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec1[i] = ((fConst2 * float((4186.009044809578f * (fZec0[i] * fSlow4)))) + fRec2[i-1]);
				fRec2[i] = ((int((fZec1[i] > 1.0f)))?(fZec1[i] - 1.0f):fZec1[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec2_perm[i]=fRec2_tmp[count+i];
			
			// LOOP 0x27e80d0
			// pre processing
			for (int i=0; i<4; i++) fRec5_tmp[i]=fRec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec2[i] = ((fConst2 * float((7902.132820097988f * (fZec0[i] * fSlow7)))) + fRec5[i-1]);
				fRec5[i] = ((int((fZec2[i] > 1.0f)))?(fZec2[i] - 1.0f):fZec2[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec5_perm[i]=fRec5_tmp[count+i];
			
			// LOOP 0x27ebe30
			// pre processing
			for (int i=0; i<4; i++) fRec7_tmp[i]=fRec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec3[i] = ((fConst2 * float((7458.620184289437f * (fZec0[i] * fSlow8)))) + fRec7[i-1]);
				fRec7[i] = ((int((fZec3[i] > 1.0f)))?(fZec3[i] - 1.0f):fZec3[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec7_perm[i]=fRec7_tmp[count+i];
			
			// LOOP 0x27efc30
			// pre processing
			for (int i=0; i<4; i++) fRec9_tmp[i]=fRec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec4[i] = ((fConst2 * float((7.04e+03f * (fZec0[i] * fSlow9)))) + fRec9[i-1]);
				fRec9[i] = ((int((fZec4[i] > 1.0f)))?(fZec4[i] - 1.0f):fZec4[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec9_perm[i]=fRec9_tmp[count+i];
			
			// LOOP 0x27f3960
			// pre processing
			for (int i=0; i<4; i++) fRec11_tmp[i]=fRec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec5[i] = ((fConst2 * float((6644.875161279122f * (fZec0[i] * fSlow10)))) + fRec11[i-1]);
				fRec11[i] = ((int((fZec5[i] > 1.0f)))?(fZec5[i] - 1.0f):fZec5[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec11_perm[i]=fRec11_tmp[count+i];
			
			// LOOP 0x27f7710
			// pre processing
			for (int i=0; i<4; i++) fRec13_tmp[i]=fRec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec6[i] = ((fConst2 * float((6271.926975707989f * (fZec0[i] * fSlow11)))) + fRec13[i-1]);
				fRec13[i] = ((int((fZec6[i] > 1.0f)))?(fZec6[i] - 1.0f):fZec6[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec13_perm[i]=fRec13_tmp[count+i];
			
			// LOOP 0x27fb4c0
			// pre processing
			for (int i=0; i<4; i++) fRec15_tmp[i]=fRec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec7[i] = ((fConst2 * float((5919.91076338615f * (fZec0[i] * fSlow12)))) + fRec15[i-1]);
				fRec15[i] = ((int((fZec7[i] > 1.0f)))?(fZec7[i] - 1.0f):fZec7[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec15_perm[i]=fRec15_tmp[count+i];
			
			// LOOP 0x27ff270
			// pre processing
			for (int i=0; i<4; i++) fRec17_tmp[i]=fRec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec8[i] = ((fConst2 * float((5587.651702928062f * (fZec0[i] * fSlow13)))) + fRec17[i-1]);
				fRec17[i] = ((int((fZec8[i] > 1.0f)))?(fZec8[i] - 1.0f):fZec8[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec17_perm[i]=fRec17_tmp[count+i];
			
			// LOOP 0x2803020
			// pre processing
			for (int i=0; i<4; i++) fRec19_tmp[i]=fRec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec9[i] = ((fConst2 * float((5274.04091060592f * (fSlow14 * fZec0[i])))) + fRec19[i-1]);
				fRec19[i] = ((int((fZec9[i] > 1.0f)))?(fZec9[i] - 1.0f):fZec9[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec19_perm[i]=fRec19_tmp[count+i];
			
			// LOOP 0x2806dd0
			// pre processing
			for (int i=0; i<4; i++) fRec21_tmp[i]=fRec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec10[i] = ((fConst2 * float((4978.031739553295f * (fZec0[i] * fSlow15)))) + fRec21[i-1]);
				fRec21[i] = ((int((fZec10[i] > 1.0f)))?(fZec10[i] - 1.0f):fZec10[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec21_perm[i]=fRec21_tmp[count+i];
			
			// LOOP 0x280aa70
			// pre processing
			for (int i=0; i<4; i++) fRec23_tmp[i]=fRec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec11[i] = ((fConst2 * float((4698.63628667852f * (fZec0[i] * fSlow16)))) + fRec23[i-1]);
				fRec23[i] = ((int((fZec11[i] > 1.0f)))?(fZec11[i] - 1.0f):fZec11[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec23_perm[i]=fRec23_tmp[count+i];
			
			// LOOP 0x280e740
			// pre processing
			for (int i=0; i<4; i++) fRec25_tmp[i]=fRec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec12[i] = ((fConst2 * float((4434.922095629953f * (fZec0[i] * fSlow17)))) + fRec25[i-1]);
				fRec25[i] = ((int((fZec12[i] > 1.0f)))?(fZec12[i] - 1.0f):fZec12[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec25_perm[i]=fRec25_tmp[count+i];
			
			// SECTION : 4
			// LOOP 0x28129c0
			// pre processing
			for (int i=0; i<4; i++) iRec28_tmp[i]=iRec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec28[i] = ((int(((fRec5[i] - fRec5[i-1]) < 0)))?(1 - iRec28[i-1]):iRec28[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec28_perm[i]=iRec28_tmp[count+i];
			
			// LOOP 0x28174d0
			// pre processing
			for (int i=0; i<4; i++) iRec31_tmp[i]=iRec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec31[i] = ((int(((fRec7[i] - fRec7[i-1]) < 0)))?(1 - iRec31[i-1]):iRec31[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec31_perm[i]=iRec31_tmp[count+i];
			
			// LOOP 0x281bb90
			// pre processing
			for (int i=0; i<4; i++) iRec34_tmp[i]=iRec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec34[i] = ((int(((fRec9[i] - fRec9[i-1]) < 0)))?(1 - iRec34[i-1]):iRec34[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec34_perm[i]=iRec34_tmp[count+i];
			
			// LOOP 0x2820250
			// pre processing
			for (int i=0; i<4; i++) iRec37_tmp[i]=iRec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec37[i] = ((int(((fRec11[i] - fRec11[i-1]) < 0)))?(1 - iRec37[i-1]):iRec37[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec37_perm[i]=iRec37_tmp[count+i];
			
			// LOOP 0x2824910
			// pre processing
			for (int i=0; i<4; i++) iRec40_tmp[i]=iRec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec40[i] = ((int(((fRec13[i] - fRec13[i-1]) < 0)))?(1 - iRec40[i-1]):iRec40[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec40_perm[i]=iRec40_tmp[count+i];
			
			// LOOP 0x2829310
			// pre processing
			for (int i=0; i<4; i++) iRec43_tmp[i]=iRec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec43[i] = ((int(((fRec15[i] - fRec15[i-1]) < 0)))?(1 - iRec43[i-1]):iRec43[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec43_perm[i]=iRec43_tmp[count+i];
			
			// LOOP 0x282d780
			// pre processing
			for (int i=0; i<4; i++) iRec46_tmp[i]=iRec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec46[i] = ((int(((fRec17[i] - fRec17[i-1]) < 0)))?(1 - iRec46[i-1]):iRec46[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec46_perm[i]=iRec46_tmp[count+i];
			
			// LOOP 0x28320b0
			// pre processing
			for (int i=0; i<4; i++) iRec49_tmp[i]=iRec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec49[i] = ((int(((fRec19[i] - fRec19[i-1]) < 0)))?(1 - iRec49[i-1]):iRec49[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec49_perm[i]=iRec49_tmp[count+i];
			
			// LOOP 0x2836770
			// pre processing
			for (int i=0; i<4; i++) iRec52_tmp[i]=iRec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec52[i] = ((int(((fRec21[i] - fRec21[i-1]) < 0)))?(1 - iRec52[i-1]):iRec52[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec52_perm[i]=iRec52_tmp[count+i];
			
			// LOOP 0x283b170
			// pre processing
			for (int i=0; i<4; i++) iRec55_tmp[i]=iRec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec55[i] = ((int(((fRec23[i] - fRec23[i-1]) < 0)))?(1 - iRec55[i-1]):iRec55[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec55_perm[i]=iRec55_tmp[count+i];
			
			// LOOP 0x283f830
			// pre processing
			for (int i=0; i<4; i++) iRec58_tmp[i]=iRec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec58[i] = ((int(((fRec25[i] - fRec25[i-1]) < 0)))?(1 - iRec58[i-1]):iRec58[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec58_perm[i]=iRec58_tmp[count+i];
			
			// LOOP 0x2843ef0
			// pre processing
			for (int i=0; i<4; i++) iRec61_tmp[i]=iRec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec61[i] = ((int(((fRec2[i] - fRec2[i-1]) < 0)))?(1 - iRec61[i-1]):iRec61[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec61_perm[i]=iRec61_tmp[count+i];
			
			// SECTION : 5
			// LOOP 0x2813e10
			// pre processing
			for (int i=0; i<4; i++) fYec12_tmp[i]=fYec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec12[i] = (fRec5[i] + iRec28[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec12_perm[i]=fYec12_tmp[count+i];
			
			// LOOP 0x2818920
			// pre processing
			for (int i=0; i<4; i++) fYec13_tmp[i]=fYec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec13[i] = (fRec7[i] + iRec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec13_perm[i]=fYec13_tmp[count+i];
			
			// LOOP 0x281cfe0
			// pre processing
			for (int i=0; i<4; i++) fYec14_tmp[i]=fYec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec14[i] = (fRec9[i] + iRec34[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec14_perm[i]=fYec14_tmp[count+i];
			
			// LOOP 0x28216a0
			// pre processing
			for (int i=0; i<4; i++) fYec15_tmp[i]=fYec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec15[i] = (fRec11[i] + iRec37[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec15_perm[i]=fYec15_tmp[count+i];
			
			// LOOP 0x2825d60
			// pre processing
			for (int i=0; i<4; i++) fYec16_tmp[i]=fYec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec16[i] = (fRec13[i] + iRec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec16_perm[i]=fYec16_tmp[count+i];
			
			// LOOP 0x282a760
			// pre processing
			for (int i=0; i<4; i++) fYec17_tmp[i]=fYec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec17[i] = (fRec15[i] + iRec43[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec17_perm[i]=fYec17_tmp[count+i];
			
			// LOOP 0x282ee80
			// pre processing
			for (int i=0; i<4; i++) fYec18_tmp[i]=fYec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec18[i] = (fRec17[i] + iRec46[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec18_perm[i]=fYec18_tmp[count+i];
			
			// LOOP 0x2833500
			// pre processing
			for (int i=0; i<4; i++) fYec19_tmp[i]=fYec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec19[i] = (fRec19[i] + iRec49[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec19_perm[i]=fYec19_tmp[count+i];
			
			// LOOP 0x2837bc0
			// pre processing
			for (int i=0; i<4; i++) fYec20_tmp[i]=fYec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec20[i] = (fRec21[i] + iRec52[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec20_perm[i]=fYec20_tmp[count+i];
			
			// LOOP 0x283c5c0
			// pre processing
			for (int i=0; i<4; i++) fYec21_tmp[i]=fYec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec21[i] = (fRec23[i] + iRec55[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec21_perm[i]=fYec21_tmp[count+i];
			
			// LOOP 0x2840c80
			// pre processing
			for (int i=0; i<4; i++) fYec22_tmp[i]=fYec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec22[i] = (fRec25[i] + iRec58[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec22_perm[i]=fYec22_tmp[count+i];
			
			// LOOP 0x28452c0
			// pre processing
			for (int i=0; i<4; i++) fYec23_tmp[i]=fYec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec23[i] = (fRec2[i] + iRec61[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec23_perm[i]=fYec23_tmp[count+i];
			
			// SECTION : 6
			// LOOP 0x2813d30
			// exec code
			for (int i=0; i<count; i++) {
				fZec13[i] = (0.5f * fYec12[i]);
			}
			
			// LOOP 0x2818840
			// exec code
			for (int i=0; i<count; i++) {
				fZec14[i] = (0.5f * fYec13[i]);
			}
			
			// LOOP 0x281cf00
			// exec code
			for (int i=0; i<count; i++) {
				fZec15[i] = (0.5f * fYec14[i]);
			}
			
			// LOOP 0x28215c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec16[i] = (0.5f * fYec15[i]);
			}
			
			// LOOP 0x2825c80
			// exec code
			for (int i=0; i<count; i++) {
				fZec17[i] = (0.5f * fYec16[i]);
			}
			
			// LOOP 0x282a680
			// exec code
			for (int i=0; i<count; i++) {
				fZec18[i] = (0.5f * fYec17[i]);
			}
			
			// LOOP 0x282eda0
			// exec code
			for (int i=0; i<count; i++) {
				fZec19[i] = (0.5f * fYec18[i]);
			}
			
			// LOOP 0x2833420
			// exec code
			for (int i=0; i<count; i++) {
				fZec20[i] = (0.5f * fYec19[i]);
			}
			
			// LOOP 0x2837ae0
			// exec code
			for (int i=0; i<count; i++) {
				fZec21[i] = (0.5f * fYec20[i]);
			}
			
			// LOOP 0x283c4e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec22[i] = (0.5f * fYec21[i]);
			}
			
			// LOOP 0x2840ba0
			// exec code
			for (int i=0; i<count; i++) {
				fZec23[i] = (0.5f * fYec22[i]);
			}
			
			// LOOP 0x28451e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec24[i] = (0.5f * fYec23[i]);
			}
			
			// SECTION : 7
			// LOOP 0x2848510
			// pre processing
			for (int i=0; i<4; i++) iRec64_tmp[i]=iRec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec64[i] = ((int(((fZec13[i] - (0.5f * fYec12[i-1])) < 0)))?(1 - iRec64[i-1]):iRec64[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec64_perm[i]=iRec64_tmp[count+i];
			
			// LOOP 0x284d2f0
			// pre processing
			for (int i=0; i<4; i++) iRec67_tmp[i]=iRec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec67[i] = ((int(((fZec14[i] - (0.5f * fYec13[i-1])) < 0)))?(1 - iRec67[i-1]):iRec67[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec67_perm[i]=iRec67_tmp[count+i];
			
			// LOOP 0x2851db0
			// pre processing
			for (int i=0; i<4; i++) iRec70_tmp[i]=iRec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec70[i] = ((int(((fZec15[i] - (0.5f * fYec14[i-1])) < 0)))?(1 - iRec70[i-1]):iRec70[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec70_perm[i]=iRec70_tmp[count+i];
			
			// LOOP 0x2856850
			// pre processing
			for (int i=0; i<4; i++) iRec73_tmp[i]=iRec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec73[i] = ((int(((fZec16[i] - (0.5f * fYec15[i-1])) < 0)))?(1 - iRec73[i-1]):iRec73[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec73_perm[i]=iRec73_tmp[count+i];
			
			// LOOP 0x285b2f0
			// pre processing
			for (int i=0; i<4; i++) iRec76_tmp[i]=iRec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec76[i] = ((int(((fZec17[i] - (0.5f * fYec16[i-1])) < 0)))?(1 - iRec76[i-1]):iRec76[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec76_perm[i]=iRec76_tmp[count+i];
			
			// LOOP 0x28600e0
			// pre processing
			for (int i=0; i<4; i++) iRec79_tmp[i]=iRec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec79[i] = ((int(((fZec18[i] - (0.5f * fYec17[i-1])) < 0)))?(1 - iRec79[i-1]):iRec79[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec79_perm[i]=iRec79_tmp[count+i];
			
			// LOOP 0x2864b80
			// pre processing
			for (int i=0; i<4; i++) iRec82_tmp[i]=iRec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec82[i] = ((int(((fZec19[i] - (0.5f * fYec18[i-1])) < 0)))?(1 - iRec82[i-1]):iRec82[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec82_perm[i]=iRec82_tmp[count+i];
			
			// LOOP 0x2869640
			// pre processing
			for (int i=0; i<4; i++) iRec85_tmp[i]=iRec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec85[i] = ((int(((fZec20[i] - (0.5f * fYec19[i-1])) < 0)))?(1 - iRec85[i-1]):iRec85[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec85_perm[i]=iRec85_tmp[count+i];
			
			// LOOP 0x286e0e0
			// pre processing
			for (int i=0; i<4; i++) iRec88_tmp[i]=iRec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec88[i] = ((int(((fZec21[i] - (0.5f * fYec20[i-1])) < 0)))?(1 - iRec88[i-1]):iRec88[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec88_perm[i]=iRec88_tmp[count+i];
			
			// LOOP 0x2872ea0
			// pre processing
			for (int i=0; i<4; i++) iRec91_tmp[i]=iRec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec91[i] = ((int(((fZec22[i] - (0.5f * fYec21[i-1])) < 0)))?(1 - iRec91[i-1]):iRec91[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec91_perm[i]=iRec91_tmp[count+i];
			
			// LOOP 0x2877940
			// pre processing
			for (int i=0; i<4; i++) iRec94_tmp[i]=iRec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec94[i] = ((int(((fZec23[i] - (0.5f * fYec22[i-1])) < 0)))?(1 - iRec94[i-1]):iRec94[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec94_perm[i]=iRec94_tmp[count+i];
			
			// LOOP 0x287c3e0
			// pre processing
			for (int i=0; i<4; i++) iRec97_tmp[i]=iRec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec97[i] = ((int(((fZec24[i] - (0.5f * fYec23[i-1])) < 0)))?(1 - iRec97[i-1]):iRec97[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec97_perm[i]=iRec97_tmp[count+i];
			
			// SECTION : 8
			// LOOP 0x2849c20
			// pre processing
			for (int i=0; i<4; i++) fYec24_tmp[i]=fYec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec24[i] = (iRec64[i] + fZec13[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec24_perm[i]=fYec24_tmp[count+i];
			
			// LOOP 0x284ea20
			// pre processing
			for (int i=0; i<4; i++) fYec25_tmp[i]=fYec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec25[i] = (iRec67[i] + fZec14[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec25_perm[i]=fYec25_tmp[count+i];
			
			// LOOP 0x28534c0
			// pre processing
			for (int i=0; i<4; i++) fYec26_tmp[i]=fYec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec26[i] = (iRec70[i] + fZec15[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec26_perm[i]=fYec26_tmp[count+i];
			
			// LOOP 0x2857f60
			// pre processing
			for (int i=0; i<4; i++) fYec27_tmp[i]=fYec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec27[i] = (iRec73[i] + fZec16[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec27_perm[i]=fYec27_tmp[count+i];
			
			// LOOP 0x285ca00
			// pre processing
			for (int i=0; i<4; i++) fYec28_tmp[i]=fYec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec28[i] = (iRec76[i] + fZec17[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec28_perm[i]=fYec28_tmp[count+i];
			
			// LOOP 0x28617f0
			// pre processing
			for (int i=0; i<4; i++) fYec29_tmp[i]=fYec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec29[i] = (iRec79[i] + fZec18[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec29_perm[i]=fYec29_tmp[count+i];
			
			// LOOP 0x2866290
			// pre processing
			for (int i=0; i<4; i++) fYec30_tmp[i]=fYec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec30[i] = (iRec82[i] + fZec19[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec30_perm[i]=fYec30_tmp[count+i];
			
			// LOOP 0x286ad50
			// pre processing
			for (int i=0; i<4; i++) fYec31_tmp[i]=fYec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec31[i] = (iRec85[i] + fZec20[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec31_perm[i]=fYec31_tmp[count+i];
			
			// LOOP 0x286f860
			// pre processing
			for (int i=0; i<4; i++) fYec32_tmp[i]=fYec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec32[i] = (iRec88[i] + fZec21[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec32_perm[i]=fYec32_tmp[count+i];
			
			// LOOP 0x28745b0
			// pre processing
			for (int i=0; i<4; i++) fYec33_tmp[i]=fYec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec33[i] = (iRec91[i] + fZec22[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec33_perm[i]=fYec33_tmp[count+i];
			
			// LOOP 0x2879050
			// pre processing
			for (int i=0; i<4; i++) fYec34_tmp[i]=fYec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec34[i] = (iRec94[i] + fZec23[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec34_perm[i]=fYec34_tmp[count+i];
			
			// LOOP 0x287da70
			// pre processing
			for (int i=0; i<4; i++) fYec35_tmp[i]=fYec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec35[i] = (iRec97[i] + fZec24[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec35_perm[i]=fYec35_tmp[count+i];
			
			// SECTION : 9
			// LOOP 0x2849b40
			// exec code
			for (int i=0; i<count; i++) {
				fZec25[i] = (0.5f * fYec24[i]);
			}
			
			// LOOP 0x284e940
			// exec code
			for (int i=0; i<count; i++) {
				fZec26[i] = (0.5f * fYec25[i]);
			}
			
			// LOOP 0x28533e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec27[i] = (0.5f * fYec26[i]);
			}
			
			// LOOP 0x2857e80
			// exec code
			for (int i=0; i<count; i++) {
				fZec28[i] = (0.5f * fYec27[i]);
			}
			
			// LOOP 0x285c920
			// exec code
			for (int i=0; i<count; i++) {
				fZec29[i] = (0.5f * fYec28[i]);
			}
			
			// LOOP 0x2861710
			// exec code
			for (int i=0; i<count; i++) {
				fZec30[i] = (0.5f * fYec29[i]);
			}
			
			// LOOP 0x28661b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec31[i] = (0.5f * fYec30[i]);
			}
			
			// LOOP 0x286ac70
			// exec code
			for (int i=0; i<count; i++) {
				fZec32[i] = (0.5f * fYec31[i]);
			}
			
			// LOOP 0x286f780
			// exec code
			for (int i=0; i<count; i++) {
				fZec33[i] = (0.5f * fYec32[i]);
			}
			
			// LOOP 0x28744d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec34[i] = (0.5f * fYec33[i]);
			}
			
			// LOOP 0x2878f70
			// exec code
			for (int i=0; i<count; i++) {
				fZec35[i] = (0.5f * fYec34[i]);
			}
			
			// LOOP 0x287d990
			// exec code
			for (int i=0; i<count; i++) {
				fZec36[i] = (0.5f * fYec35[i]);
			}
			
			// SECTION : 10
			// LOOP 0x2880de0
			// pre processing
			for (int i=0; i<4; i++) iRec100_tmp[i]=iRec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec100[i] = ((int(((fZec25[i] - (0.5f * fYec24[i-1])) < 0)))?(1 - iRec100[i-1]):iRec100[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec100_perm[i]=iRec100_tmp[count+i];
			
			// LOOP 0x2885960
			// pre processing
			for (int i=0; i<4; i++) iRec103_tmp[i]=iRec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec103[i] = ((int(((fZec26[i] - (0.5f * fYec25[i-1])) < 0)))?(1 - iRec103[i-1]):iRec103[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec103_perm[i]=iRec103_tmp[count+i];
			
			// LOOP 0x288a190
			// pre processing
			for (int i=0; i<4; i++) iRec106_tmp[i]=iRec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec106[i] = ((int(((fZec27[i] - (0.5f * fYec26[i-1])) < 0)))?(1 - iRec106[i-1]):iRec106[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec106_perm[i]=iRec106_tmp[count+i];
			
			// LOOP 0x288e9c0
			// pre processing
			for (int i=0; i<4; i++) iRec109_tmp[i]=iRec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec109[i] = ((int(((fZec28[i] - (0.5f * fYec27[i-1])) < 0)))?(1 - iRec109[i-1]):iRec109[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec109_perm[i]=iRec109_tmp[count+i];
			
			// LOOP 0x28931f0
			// pre processing
			for (int i=0; i<4; i++) iRec112_tmp[i]=iRec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec112[i] = ((int(((fZec29[i] - (0.5f * fYec28[i-1])) < 0)))?(1 - iRec112[i-1]):iRec112[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec112_perm[i]=iRec112_tmp[count+i];
			
			// LOOP 0x2897d70
			// pre processing
			for (int i=0; i<4; i++) iRec115_tmp[i]=iRec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec115[i] = ((int(((fZec30[i] - (0.5f * fYec29[i-1])) < 0)))?(1 - iRec115[i-1]):iRec115[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec115_perm[i]=iRec115_tmp[count+i];
			
			// LOOP 0x289c5a0
			// pre processing
			for (int i=0; i<4; i++) iRec118_tmp[i]=iRec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec118[i] = ((int(((fZec31[i] - (0.5f * fYec30[i-1])) < 0)))?(1 - iRec118[i-1]):iRec118[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec118_perm[i]=iRec118_tmp[count+i];
			
			// LOOP 0x28a0dd0
			// pre processing
			for (int i=0; i<4; i++) iRec121_tmp[i]=iRec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec121[i] = ((int(((fZec32[i] - (0.5f * fYec31[i-1])) < 0)))?(1 - iRec121[i-1]):iRec121[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec121_perm[i]=iRec121_tmp[count+i];
			
			// LOOP 0x28a5600
			// pre processing
			for (int i=0; i<4; i++) iRec124_tmp[i]=iRec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec124[i] = ((int(((fZec33[i] - (0.5f * fYec32[i-1])) < 0)))?(1 - iRec124[i-1]):iRec124[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec124_perm[i]=iRec124_tmp[count+i];
			
			// LOOP 0x28aa180
			// pre processing
			for (int i=0; i<4; i++) iRec127_tmp[i]=iRec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec127[i] = ((int(((fZec34[i] - (0.5f * fYec33[i-1])) < 0)))?(1 - iRec127[i-1]):iRec127[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec127_perm[i]=iRec127_tmp[count+i];
			
			// LOOP 0x28ae9b0
			// pre processing
			for (int i=0; i<4; i++) iRec130_tmp[i]=iRec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec130[i] = ((int(((fZec35[i] - (0.5f * fYec34[i-1])) < 0)))?(1 - iRec130[i-1]):iRec130[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec130_perm[i]=iRec130_tmp[count+i];
			
			// LOOP 0x28b31e0
			// pre processing
			for (int i=0; i<4; i++) iRec133_tmp[i]=iRec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec133[i] = ((int(((fZec36[i] - (0.5f * fYec35[i-1])) < 0)))?(1 - iRec133[i-1]):iRec133[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec133_perm[i]=iRec133_tmp[count+i];
			
			// SECTION : 11
			// LOOP 0x2882500
			// pre processing
			for (int i=0; i<4; i++) fYec36_tmp[i]=fYec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec36[i] = (iRec100[i] + fZec25[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec36_perm[i]=fYec36_tmp[count+i];
			
			// LOOP 0x2887080
			// pre processing
			for (int i=0; i<4; i++) fYec37_tmp[i]=fYec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec37[i] = (iRec103[i] + fZec26[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec37_perm[i]=fYec37_tmp[count+i];
			
			// LOOP 0x288b8b0
			// pre processing
			for (int i=0; i<4; i++) fYec38_tmp[i]=fYec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec38[i] = (iRec106[i] + fZec27[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec38_perm[i]=fYec38_tmp[count+i];
			
			// LOOP 0x28900a0
			// pre processing
			for (int i=0; i<4; i++) fYec39_tmp[i]=fYec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec39[i] = (iRec109[i] + fZec28[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec39_perm[i]=fYec39_tmp[count+i];
			
			// LOOP 0x2894910
			// pre processing
			for (int i=0; i<4; i++) fYec40_tmp[i]=fYec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec40[i] = (iRec112[i] + fZec29[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec40_perm[i]=fYec40_tmp[count+i];
			
			// LOOP 0x2899490
			// pre processing
			for (int i=0; i<4; i++) fYec41_tmp[i]=fYec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec41[i] = (iRec115[i] + fZec30[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec41_perm[i]=fYec41_tmp[count+i];
			
			// LOOP 0x289dcc0
			// pre processing
			for (int i=0; i<4; i++) fYec42_tmp[i]=fYec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec42[i] = (iRec118[i] + fZec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec42_perm[i]=fYec42_tmp[count+i];
			
			// LOOP 0x28a24f0
			// pre processing
			for (int i=0; i<4; i++) fYec43_tmp[i]=fYec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec43[i] = (iRec121[i] + fZec32[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec43_perm[i]=fYec43_tmp[count+i];
			
			// LOOP 0x28a6d20
			// pre processing
			for (int i=0; i<4; i++) fYec44_tmp[i]=fYec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec44[i] = (iRec124[i] + fZec33[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec44_perm[i]=fYec44_tmp[count+i];
			
			// LOOP 0x28ab8a0
			// pre processing
			for (int i=0; i<4; i++) fYec45_tmp[i]=fYec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec45[i] = (iRec127[i] + fZec34[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec45_perm[i]=fYec45_tmp[count+i];
			
			// LOOP 0x28b00d0
			// pre processing
			for (int i=0; i<4; i++) fYec46_tmp[i]=fYec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec46[i] = (iRec130[i] + fZec35[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec46_perm[i]=fYec46_tmp[count+i];
			
			// LOOP 0x28b4880
			// pre processing
			for (int i=0; i<4; i++) fYec47_tmp[i]=fYec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec47[i] = (iRec133[i] + fZec36[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec47_perm[i]=fYec47_tmp[count+i];
			
			// SECTION : 12
			// LOOP 0x2882420
			// exec code
			for (int i=0; i<count; i++) {
				fZec37[i] = (0.5f * fYec36[i]);
			}
			
			// LOOP 0x2886fa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec38[i] = (0.5f * fYec37[i]);
			}
			
			// LOOP 0x288b7d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec39[i] = (0.5f * fYec38[i]);
			}
			
			// LOOP 0x288ffc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec40[i] = (0.5f * fYec39[i]);
			}
			
			// LOOP 0x2894830
			// exec code
			for (int i=0; i<count; i++) {
				fZec41[i] = (0.5f * fYec40[i]);
			}
			
			// LOOP 0x28993b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec42[i] = (0.5f * fYec41[i]);
			}
			
			// LOOP 0x289dbe0
			// exec code
			for (int i=0; i<count; i++) {
				fZec43[i] = (0.5f * fYec42[i]);
			}
			
			// LOOP 0x28a2410
			// exec code
			for (int i=0; i<count; i++) {
				fZec44[i] = (0.5f * fYec43[i]);
			}
			
			// LOOP 0x28a6c40
			// exec code
			for (int i=0; i<count; i++) {
				fZec45[i] = (0.5f * fYec44[i]);
			}
			
			// LOOP 0x28ab7c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec46[i] = (0.5f * fYec45[i]);
			}
			
			// LOOP 0x28afff0
			// exec code
			for (int i=0; i<count; i++) {
				fZec47[i] = (0.5f * fYec46[i]);
			}
			
			// LOOP 0x28b47a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec48[i] = (0.5f * fYec47[i]);
			}
			
			// SECTION : 13
			// LOOP 0x2a2d0d0
			// pre processing
			for (int i=0; i<4; i++) iRec137_tmp[i]=iRec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec137[i] = ((int(((fZec37[i] - (0.5f * fYec36[i-1])) < 0)))?(1 - iRec137[i-1]):iRec137[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec137_perm[i]=iRec137_tmp[count+i];
			
			// LOOP 0x2a31bd0
			// pre processing
			for (int i=0; i<4; i++) iRec140_tmp[i]=iRec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec140[i] = ((int(((fZec38[i] - (0.5f * fYec37[i-1])) < 0)))?(1 - iRec140[i-1]):iRec140[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec140_perm[i]=iRec140_tmp[count+i];
			
			// LOOP 0x2a36740
			// pre processing
			for (int i=0; i<4; i++) iRec143_tmp[i]=iRec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec143[i] = ((int(((fZec39[i] - (0.5f * fYec38[i-1])) < 0)))?(1 - iRec143[i-1]):iRec143[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec143_perm[i]=iRec143_tmp[count+i];
			
			// LOOP 0x2a3b510
			// pre processing
			for (int i=0; i<4; i++) iRec146_tmp[i]=iRec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec146[i] = ((int(((fZec40[i] - (0.5f * fYec39[i-1])) < 0)))?(1 - iRec146[i-1]):iRec146[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec146_perm[i]=iRec146_tmp[count+i];
			
			// LOOP 0x2a402e0
			// pre processing
			for (int i=0; i<4; i++) iRec149_tmp[i]=iRec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec149[i] = ((int(((fZec41[i] - (0.5f * fYec40[i-1])) < 0)))?(1 - iRec149[i-1]):iRec149[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec149_perm[i]=iRec149_tmp[count+i];
			
			// LOOP 0x2a45400
			// pre processing
			for (int i=0; i<4; i++) iRec152_tmp[i]=iRec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec152[i] = ((int(((fZec42[i] - (0.5f * fYec41[i-1])) < 0)))?(1 - iRec152[i-1]):iRec152[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec152_perm[i]=iRec152_tmp[count+i];
			
			// LOOP 0x2a4a1d0
			// pre processing
			for (int i=0; i<4; i++) iRec155_tmp[i]=iRec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec155[i] = ((int(((fZec43[i] - (0.5f * fYec42[i-1])) < 0)))?(1 - iRec155[i-1]):iRec155[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec155_perm[i]=iRec155_tmp[count+i];
			
			// LOOP 0x2a4ef80
			// pre processing
			for (int i=0; i<4; i++) iRec158_tmp[i]=iRec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec158[i] = ((int(((fZec44[i] - (0.5f * fYec43[i-1])) < 0)))?(1 - iRec158[i-1]):iRec158[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec158_perm[i]=iRec158_tmp[count+i];
			
			// LOOP 0x2b6a280
			// pre processing
			for (int i=0; i<4; i++) iRec162_tmp[i]=iRec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec162[i] = ((int(((fZec45[i] - (0.5f * fYec44[i-1])) < 0)))?(1 - iRec162[i-1]):iRec162[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec162_perm[i]=iRec162_tmp[count+i];
			
			// LOOP 0x2b6f500
			// pre processing
			for (int i=0; i<4; i++) iRec165_tmp[i]=iRec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec165[i] = ((int(((fZec46[i] - (0.5f * fYec45[i-1])) < 0)))?(1 - iRec165[i-1]):iRec165[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec165_perm[i]=iRec165_tmp[count+i];
			
			// LOOP 0x2b742d0
			// pre processing
			for (int i=0; i<4; i++) iRec168_tmp[i]=iRec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec168[i] = ((int(((fZec47[i] - (0.5f * fYec46[i-1])) < 0)))?(1 - iRec168[i-1]):iRec168[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec168_perm[i]=iRec168_tmp[count+i];
			
			// LOOP 0x2b79080
			// pre processing
			for (int i=0; i<4; i++) iRec171_tmp[i]=iRec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec171[i] = ((int(((fZec48[i] - (0.5f * fYec47[i-1])) < 0)))?(1 - iRec171[i-1]):iRec171[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec171_perm[i]=iRec171_tmp[count+i];
			
			// SECTION : 14
			// LOOP 0x2a2e7f0
			// pre processing
			for (int i=0; i<4; i++) fYec49_tmp[i]=fYec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec49[i] = (iRec137[i] + fZec37[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec49_perm[i]=fYec49_tmp[count+i];
			
			// LOOP 0x2a33290
			// pre processing
			for (int i=0; i<4; i++) fYec50_tmp[i]=fYec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec50[i] = (iRec140[i] + fZec38[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec50_perm[i]=fYec50_tmp[count+i];
			
			// LOOP 0x2a37fe0
			// pre processing
			for (int i=0; i<4; i++) fYec51_tmp[i]=fYec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec51[i] = (iRec143[i] + fZec39[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec51_perm[i]=fYec51_tmp[count+i];
			
			// LOOP 0x2a3cdb0
			// pre processing
			for (int i=0; i<4; i++) fYec52_tmp[i]=fYec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec52[i] = (iRec146[i] + fZec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec52_perm[i]=fYec52_tmp[count+i];
			
			// LOOP 0x2a41b80
			// pre processing
			for (int i=0; i<4; i++) fYec53_tmp[i]=fYec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec53[i] = (iRec149[i] + fZec41[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec53_perm[i]=fYec53_tmp[count+i];
			
			// LOOP 0x2a46ca0
			// pre processing
			for (int i=0; i<4; i++) fYec54_tmp[i]=fYec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec54[i] = (iRec152[i] + fZec42[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec54_perm[i]=fYec54_tmp[count+i];
			
			// LOOP 0x2a4ba70
			// pre processing
			for (int i=0; i<4; i++) fYec55_tmp[i]=fYec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec55[i] = (iRec155[i] + fZec43[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec55_perm[i]=fYec55_tmp[count+i];
			
			// LOOP 0x2a50820
			// pre processing
			for (int i=0; i<4; i++) fYec56_tmp[i]=fYec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec56[i] = (iRec158[i] + fZec44[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec56_perm[i]=fYec56_tmp[count+i];
			
			// LOOP 0x2b6bc80
			// pre processing
			for (int i=0; i<4; i++) fYec58_tmp[i]=fYec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec58[i] = (iRec162[i] + fZec45[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec58_perm[i]=fYec58_tmp[count+i];
			
			// LOOP 0x2b70da0
			// pre processing
			for (int i=0; i<4; i++) fYec59_tmp[i]=fYec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec59[i] = (iRec165[i] + fZec46[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec59_perm[i]=fYec59_tmp[count+i];
			
			// LOOP 0x2b75b70
			// pre processing
			for (int i=0; i<4; i++) fYec60_tmp[i]=fYec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec60[i] = (iRec168[i] + fZec47[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec60_perm[i]=fYec60_tmp[count+i];
			
			// LOOP 0x2b7a920
			// pre processing
			for (int i=0; i<4; i++) fYec61_tmp[i]=fYec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec61[i] = (iRec171[i] + fZec48[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec61_perm[i]=fYec61_tmp[count+i];
			
			// SECTION : 15
			// LOOP 0x2a2e710
			// exec code
			for (int i=0; i<count; i++) {
				fZec158[i] = (0.5f * fYec49[i]);
			}
			
			// LOOP 0x2a331b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec159[i] = (0.5f * fYec50[i]);
			}
			
			// LOOP 0x2a37f00
			// exec code
			for (int i=0; i<count; i++) {
				fZec160[i] = (0.5f * fYec51[i]);
			}
			
			// LOOP 0x2a3ccd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec161[i] = (0.5f * fYec52[i]);
			}
			
			// LOOP 0x2a41aa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec162[i] = (0.5f * fYec53[i]);
			}
			
			// LOOP 0x2a46bc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec163[i] = (0.5f * fYec54[i]);
			}
			
			// LOOP 0x2a4b990
			// exec code
			for (int i=0; i<count; i++) {
				fZec164[i] = (0.5f * fYec55[i]);
			}
			
			// LOOP 0x2a50740
			// exec code
			for (int i=0; i<count; i++) {
				fZec165[i] = (0.5f * fYec56[i]);
			}
			
			// LOOP 0x2b6bba0
			// exec code
			for (int i=0; i<count; i++) {
				fZec168[i] = (0.5f * fYec58[i]);
			}
			
			// LOOP 0x2b70cc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec169[i] = (0.5f * fYec59[i]);
			}
			
			// LOOP 0x2b75a90
			// exec code
			for (int i=0; i<count; i++) {
				fZec170[i] = (0.5f * fYec60[i]);
			}
			
			// LOOP 0x2b7a840
			// exec code
			for (int i=0; i<count; i++) {
				fZec171[i] = (0.5f * fYec61[i]);
			}
			
			// SECTION : 16
			// LOOP 0x2c929c0
			// pre processing
			for (int i=0; i<4; i++) iRec175_tmp[i]=iRec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec175[i] = ((int(((fZec158[i] - (0.5f * fYec49[i-1])) < 0)))?(1 - iRec175[i-1]):iRec175[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec175_perm[i]=iRec175_tmp[count+i];
			
			// LOOP 0x2c98310
			// pre processing
			for (int i=0; i<4; i++) iRec178_tmp[i]=iRec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec178[i] = ((int(((fZec159[i] - (0.5f * fYec50[i-1])) < 0)))?(1 - iRec178[i-1]):iRec178[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec178_perm[i]=iRec178_tmp[count+i];
			
			// LOOP 0x2c9d2f0
			// pre processing
			for (int i=0; i<4; i++) iRec181_tmp[i]=iRec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec181[i] = ((int(((fZec160[i] - (0.5f * fYec51[i-1])) < 0)))?(1 - iRec181[i-1]):iRec181[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec181_perm[i]=iRec181_tmp[count+i];
			
			// LOOP 0x2ca22c0
			// pre processing
			for (int i=0; i<4; i++) iRec184_tmp[i]=iRec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec184[i] = ((int(((fZec161[i] - (0.5f * fYec52[i-1])) < 0)))?(1 - iRec184[i-1]):iRec184[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec184_perm[i]=iRec184_tmp[count+i];
			
			// LOOP 0x2ca7270
			// pre processing
			for (int i=0; i<4; i++) iRec187_tmp[i]=iRec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec187[i] = ((int(((fZec162[i] - (0.5f * fYec53[i-1])) < 0)))?(1 - iRec187[i-1]):iRec187[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec187_perm[i]=iRec187_tmp[count+i];
			
			// LOOP 0x2da0a10
			// pre processing
			for (int i=0; i<4; i++) iRec191_tmp[i]=iRec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec191[i] = ((int(((fZec163[i] - (0.5f * fYec54[i-1])) < 0)))?(1 - iRec191[i-1]):iRec191[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec191_perm[i]=iRec191_tmp[count+i];
			
			// LOOP 0x2da5200
			// pre processing
			for (int i=0; i<4; i++) iRec194_tmp[i]=iRec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec194[i] = ((int(((fZec164[i] - (0.5f * fYec55[i-1])) < 0)))?(1 - iRec194[i-1]):iRec194[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec194_perm[i]=iRec194_tmp[count+i];
			
			// LOOP 0x2da9e40
			// pre processing
			for (int i=0; i<4; i++) iRec197_tmp[i]=iRec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec197[i] = ((int(((fZec165[i] - (0.5f * fYec56[i-1])) < 0)))?(1 - iRec197[i-1]):iRec197[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec197_perm[i]=iRec197_tmp[count+i];
			
			// LOOP 0x2daed50
			// pre processing
			for (int i=0; i<4; i++) iRec200_tmp[i]=iRec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec200[i] = ((int(((fZec168[i] - (0.5f * fYec58[i-1])) < 0)))?(1 - iRec200[i-1]):iRec200[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec200_perm[i]=iRec200_tmp[count+i];
			
			// LOOP 0x2db4070
			// pre processing
			for (int i=0; i<4; i++) iRec203_tmp[i]=iRec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec203[i] = ((int(((fZec169[i] - (0.5f * fYec59[i-1])) < 0)))?(1 - iRec203[i-1]):iRec203[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec203_perm[i]=iRec203_tmp[count+i];
			
			// LOOP 0x2db9020
			// pre processing
			for (int i=0; i<4; i++) iRec206_tmp[i]=iRec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec206[i] = ((int(((fZec170[i] - (0.5f * fYec60[i-1])) < 0)))?(1 - iRec206[i-1]):iRec206[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec206_perm[i]=iRec206_tmp[count+i];
			
			// LOOP 0x2dbe010
			// pre processing
			for (int i=0; i<4; i++) iRec209_tmp[i]=iRec209_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec209[i] = ((int(((fZec171[i] - (0.5f * fYec61[i-1])) < 0)))?(1 - iRec209[i-1]):iRec209[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec209_perm[i]=iRec209_tmp[count+i];
			
			// SECTION : 17
			// LOOP 0x28a0990
			// pre processing
			for (int i=0; i<4; i++) fRec120_tmp[i]=fRec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec120[i] = (fRec120[i-1] + (fConst12 * (yc20_get_sample(fZec44[i], 4, 0) - fRec120[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec120_perm[i]=fRec120_tmp[count+i];
			
			// LOOP 0x28a51c0
			// pre processing
			for (int i=0; i<4; i++) fRec123_tmp[i]=fRec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec123[i] = (fRec123[i-1] + (fConst13 * (yc20_get_sample(fZec45[i], 3, 0) - fRec123[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec123_perm[i]=fRec123_tmp[count+i];
			
			// LOOP 0x28a9d40
			// pre processing
			for (int i=0; i<4; i++) fRec126_tmp[i]=fRec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec126[i] = (fRec126[i-1] + (fConst13 * (yc20_get_sample(fZec46[i], 2, 0) - fRec126[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec126_perm[i]=fRec126_tmp[count+i];
			
			// LOOP 0x28ae570
			// pre processing
			for (int i=0; i<4; i++) fRec129_tmp[i]=fRec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec129[i] = (fRec129[i-1] + (fConst13 * (yc20_get_sample(fZec47[i], 1, 0) - fRec129[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec129_perm[i]=fRec129_tmp[count+i];
			
			// LOOP 0x28b2da0
			// pre processing
			for (int i=0; i<4; i++) fRec132_tmp[i]=fRec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec132[i] = (fRec132[i-1] + (fConst13 * (yc20_get_sample(fZec48[i], 0, 0) - fRec132[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec132_perm[i]=fRec132_tmp[count+i];
			
			// LOOP 0x2c94470
			// pre processing
			for (int i=0; i<4; i++) fYec63_tmp[i]=fYec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec63[i] = (iRec175[i] + fZec158[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec63_perm[i]=fYec63_tmp[count+i];
			
			// LOOP 0x2c99c60
			// pre processing
			for (int i=0; i<4; i++) fYec64_tmp[i]=fYec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec64[i] = (iRec178[i] + fZec159[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec64_perm[i]=fYec64_tmp[count+i];
			
			// LOOP 0x2c9ec40
			// pre processing
			for (int i=0; i<4; i++) fYec65_tmp[i]=fYec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec65[i] = (iRec181[i] + fZec160[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec65_perm[i]=fYec65_tmp[count+i];
			
			// LOOP 0x2ca3c10
			// pre processing
			for (int i=0; i<4; i++) fYec66_tmp[i]=fYec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec66[i] = (iRec184[i] + fZec161[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec66_perm[i]=fYec66_tmp[count+i];
			
			// LOOP 0x2ca8bc0
			// pre processing
			for (int i=0; i<4; i++) fYec67_tmp[i]=fYec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec67[i] = (iRec187[i] + fZec162[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec67_perm[i]=fYec67_tmp[count+i];
			
			// LOOP 0x2da2180
			// pre processing
			for (int i=0; i<4; i++) fYec69_tmp[i]=fYec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec69[i] = (iRec191[i] + fZec163[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec69_perm[i]=fYec69_tmp[count+i];
			
			// LOOP 0x2da6970
			// pre processing
			for (int i=0; i<4; i++) fYec70_tmp[i]=fYec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec70[i] = (iRec194[i] + fZec164[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec70_perm[i]=fYec70_tmp[count+i];
			
			// LOOP 0x2dab790
			// pre processing
			for (int i=0; i<4; i++) fYec71_tmp[i]=fYec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec71[i] = (iRec197[i] + fZec165[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec71_perm[i]=fYec71_tmp[count+i];
			
			// LOOP 0x2db06a0
			// pre processing
			for (int i=0; i<4; i++) fYec72_tmp[i]=fYec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec72[i] = (iRec200[i] + fZec168[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec72_perm[i]=fYec72_tmp[count+i];
			
			// LOOP 0x2db59c0
			// pre processing
			for (int i=0; i<4; i++) fYec73_tmp[i]=fYec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec73[i] = (iRec203[i] + fZec169[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec73_perm[i]=fYec73_tmp[count+i];
			
			// LOOP 0x2dbaa10
			// pre processing
			for (int i=0; i<4; i++) fYec74_tmp[i]=fYec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec74[i] = (iRec206[i] + fZec170[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec74_perm[i]=fYec74_tmp[count+i];
			
			// LOOP 0x2dbf960
			// pre processing
			for (int i=0; i<4; i++) fYec75_tmp[i]=fYec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec75[i] = (iRec209[i] + fZec171[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec75_perm[i]=fYec75_tmp[count+i];
			
			// SECTION : 18
			// LOOP 0x288e580
			// pre processing
			for (int i=0; i<4; i++) fRec108_tmp[i]=fRec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec108[i] = (fRec108[i-1] + (fConst11 * (yc20_get_sample(fZec40[i], 8, 0) - fRec108[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec108_perm[i]=fRec108_tmp[count+i];
			
			// LOOP 0x2892db0
			// pre processing
			for (int i=0; i<4; i++) fRec111_tmp[i]=fRec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec111[i] = (fRec111[i-1] + (fConst12 * (yc20_get_sample(fZec41[i], 7, 0) - fRec111[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec111_perm[i]=fRec111_tmp[count+i];
			
			// LOOP 0x2897930
			// pre processing
			for (int i=0; i<4; i++) fRec114_tmp[i]=fRec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec114[i] = (fRec114[i-1] + (fConst12 * (yc20_get_sample(fZec42[i], 6, 0) - fRec114[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec114_perm[i]=fRec114_tmp[count+i];
			
			// LOOP 0x289c160
			// pre processing
			for (int i=0; i<4; i++) fRec117_tmp[i]=fRec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec117[i] = (fRec117[i-1] + (fConst12 * (yc20_get_sample(fZec43[i], 5, 0) - fRec117[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec117_perm[i]=fRec117_tmp[count+i];
			
			// LOOP 0x28a05d0
			// pre processing
			for (int i=0; i<4; i++) fRec119_tmp[i]=fRec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec119[i] = (fConst4 * ((fRec120[i] - fRec120[i-1]) + fRec119[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec119_perm[i]=fRec119_tmp[count+i];
			
			// LOOP 0x28a4e00
			// pre processing
			for (int i=0; i<4; i++) fRec122_tmp[i]=fRec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec122[i] = (fConst4 * ((fRec123[i] - fRec123[i-1]) + fRec122[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec122_perm[i]=fRec122_tmp[count+i];
			
			// LOOP 0x28a9980
			// pre processing
			for (int i=0; i<4; i++) fRec125_tmp[i]=fRec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec125[i] = (fConst4 * ((fRec126[i] - fRec126[i-1]) + fRec125[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec125_perm[i]=fRec125_tmp[count+i];
			
			// LOOP 0x28ae1b0
			// pre processing
			for (int i=0; i<4; i++) fRec128_tmp[i]=fRec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec128[i] = (fConst4 * ((fRec129[i] - fRec129[i-1]) + fRec128[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec128_perm[i]=fRec128_tmp[count+i];
			
			// LOOP 0x28b2a00
			// pre processing
			for (int i=0; i<4; i++) fRec131_tmp[i]=fRec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec131[i] = (fConst4 * ((fRec132[i] - fRec132[i-1]) + fRec131[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec131_perm[i]=fRec131_tmp[count+i];
			
			// LOOP 0x2c94390
			// exec code
			for (int i=0; i<count; i++) {
				fZec174[i] = (0.5f * fYec63[i]);
			}
			
			// LOOP 0x2c99b80
			// exec code
			for (int i=0; i<count; i++) {
				fZec175[i] = (0.5f * fYec64[i]);
			}
			
			// LOOP 0x2c9eb60
			// exec code
			for (int i=0; i<count; i++) {
				fZec176[i] = (0.5f * fYec65[i]);
			}
			
			// LOOP 0x2ca3b30
			// exec code
			for (int i=0; i<count; i++) {
				fZec177[i] = (0.5f * fYec66[i]);
			}
			
			// LOOP 0x2ca8ae0
			// exec code
			for (int i=0; i<count; i++) {
				fZec178[i] = (0.5f * fYec67[i]);
			}
			
			// LOOP 0x2da20a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec184[i] = (0.5f * fYec69[i]);
			}
			
			// LOOP 0x2da6890
			// exec code
			for (int i=0; i<count; i++) {
				fZec185[i] = (0.5f * fYec70[i]);
			}
			
			// LOOP 0x2dab6b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec186[i] = (0.5f * fYec71[i]);
			}
			
			// LOOP 0x2db05c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec187[i] = (0.5f * fYec72[i]);
			}
			
			// LOOP 0x2db58e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec188[i] = (0.5f * fYec73[i]);
			}
			
			// LOOP 0x2dba930
			// exec code
			for (int i=0; i<count; i++) {
				fZec189[i] = (0.5f * fYec74[i]);
			}
			
			// LOOP 0x2dbf880
			// exec code
			for (int i=0; i<count; i++) {
				fZec190[i] = (0.5f * fYec75[i]);
			}
			
			// SECTION : 19
			// LOOP 0x287bfa0
			// pre processing
			for (int i=0; i<4; i++) fRec96_tmp[i]=fRec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec96[i] = (fRec96[i-1] + (fConst10 * (yc20_get_sample(fZec36[i], 0, 0) - fRec96[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec96_perm[i]=fRec96_tmp[count+i];
			
			// LOOP 0x28809a0
			// pre processing
			for (int i=0; i<4; i++) fRec99_tmp[i]=fRec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec99[i] = (fRec99[i-1] + (fConst11 * (yc20_get_sample(fZec37[i], 11, 0) - fRec99[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec99_perm[i]=fRec99_tmp[count+i];
			
			// LOOP 0x2885520
			// pre processing
			for (int i=0; i<4; i++) fRec102_tmp[i]=fRec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec102[i] = (fRec102[i-1] + (fConst11 * (yc20_get_sample(fZec38[i], 10, 0) - fRec102[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec102_perm[i]=fRec102_tmp[count+i];
			
			// LOOP 0x2889d50
			// pre processing
			for (int i=0; i<4; i++) fRec105_tmp[i]=fRec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec105[i] = (fRec105[i-1] + (fConst11 * (yc20_get_sample(fZec39[i], 9, 0) - fRec105[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec105_perm[i]=fRec105_tmp[count+i];
			
			// LOOP 0x288e1c0
			// pre processing
			for (int i=0; i<4; i++) fRec107_tmp[i]=fRec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec107[i] = (fConst4 * ((fRec108[i] - fRec108[i-1]) + fRec107[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec107_perm[i]=fRec107_tmp[count+i];
			
			// LOOP 0x28929f0
			// pre processing
			for (int i=0; i<4; i++) fRec110_tmp[i]=fRec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec110[i] = (fConst4 * ((fRec111[i] - fRec111[i-1]) + fRec110[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec110_perm[i]=fRec110_tmp[count+i];
			
			// LOOP 0x2897570
			// pre processing
			for (int i=0; i<4; i++) fRec113_tmp[i]=fRec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec113[i] = (fConst4 * ((fRec114[i] - fRec114[i-1]) + fRec113[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec113_perm[i]=fRec113_tmp[count+i];
			
			// LOOP 0x289bda0
			// pre processing
			for (int i=0; i<4; i++) fRec116_tmp[i]=fRec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec116[i] = (fConst4 * ((fRec117[i] - fRec117[i-1]) + fRec116[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec116_perm[i]=fRec116_tmp[count+i];
			
			// LOOP 0x29f5e10
			// exec code
			for (int i=0; i<count; i++) {
				fZec124[i] = (fRec119[i] + (fRec122[i] + (fRec125[i] + (fRec131[i] + fRec128[i]))));
			}
			
			// LOOP 0x2ec6040
			// pre processing
			for (int i=0; i<4; i++) iRec213_tmp[i]=iRec213_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec213[i] = ((int(((fZec174[i] - (0.5f * fYec63[i-1])) < 0)))?(1 - iRec213[i-1]):iRec213[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec213_perm[i]=iRec213_tmp[count+i];
			
			// LOOP 0x2ecb800
			// pre processing
			for (int i=0; i<4; i++) iRec216_tmp[i]=iRec216_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec216[i] = ((int(((fZec175[i] - (0.5f * fYec64[i-1])) < 0)))?(1 - iRec216[i-1]):iRec216[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec216_perm[i]=iRec216_tmp[count+i];
			
			// LOOP 0x2ed09c0
			// pre processing
			for (int i=0; i<4; i++) iRec219_tmp[i]=iRec219_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec219[i] = ((int(((fZec176[i] - (0.5f * fYec65[i-1])) < 0)))?(1 - iRec219[i-1]):iRec219[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec219_perm[i]=iRec219_tmp[count+i];
			
			// LOOP 0x2ed5b70
			// pre processing
			for (int i=0; i<4; i++) iRec222_tmp[i]=iRec222_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec222[i] = ((int(((fZec177[i] - (0.5f * fYec66[i-1])) < 0)))?(1 - iRec222[i-1]):iRec222[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec222_perm[i]=iRec222_tmp[count+i];
			
			// LOOP 0x2edad20
			// pre processing
			for (int i=0; i<4; i++) iRec225_tmp[i]=iRec225_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec225[i] = ((int(((fZec178[i] - (0.5f * fYec67[i-1])) < 0)))?(1 - iRec225[i-1]):iRec225[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec225_perm[i]=iRec225_tmp[count+i];
			
			// LOOP 0x2ee01e0
			// pre processing
			for (int i=0; i<4; i++) iRec228_tmp[i]=iRec228_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec228[i] = ((int(((fZec184[i] - (0.5f * fYec69[i-1])) < 0)))?(1 - iRec228[i-1]):iRec228[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec228_perm[i]=iRec228_tmp[count+i];
			
			// LOOP 0x2ee53c0
			// pre processing
			for (int i=0; i<4; i++) iRec231_tmp[i]=iRec231_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec231[i] = ((int(((fZec185[i] - (0.5f * fYec70[i-1])) < 0)))?(1 - iRec231[i-1]):iRec231[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec231_perm[i]=iRec231_tmp[count+i];
			
			// LOOP 0x2eea590
			// pre processing
			for (int i=0; i<4; i++) iRec234_tmp[i]=iRec234_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec234[i] = ((int(((fZec186[i] - (0.5f * fYec71[i-1])) < 0)))?(1 - iRec234[i-1]):iRec234[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec234_perm[i]=iRec234_tmp[count+i];
			
			// LOOP 0x2eef740
			// pre processing
			for (int i=0; i<4; i++) iRec237_tmp[i]=iRec237_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec237[i] = ((int(((fZec187[i] - (0.5f * fYec72[i-1])) < 0)))?(1 - iRec237[i-1]):iRec237[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec237_perm[i]=iRec237_tmp[count+i];
			
			// LOOP 0x2ef4c40
			// pre processing
			for (int i=0; i<4; i++) iRec240_tmp[i]=iRec240_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec240[i] = ((int(((fZec188[i] - (0.5f * fYec73[i-1])) < 0)))?(1 - iRec240[i-1]):iRec240[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec240_perm[i]=iRec240_tmp[count+i];
			
			// LOOP 0x2ef9df0
			// pre processing
			for (int i=0; i<4; i++) iRec243_tmp[i]=iRec243_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec243[i] = ((int(((fZec189[i] - (0.5f * fYec74[i-1])) < 0)))?(1 - iRec243[i-1]):iRec243[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec243_perm[i]=iRec243_tmp[count+i];
			
			// LOOP 0x2efefa0
			// pre processing
			for (int i=0; i<4; i++) iRec246_tmp[i]=iRec246_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec246[i] = ((int(((fZec190[i] - (0.5f * fYec75[i-1])) < 0)))?(1 - iRec246[i-1]):iRec246[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec246_perm[i]=iRec246_tmp[count+i];
			
			// SECTION : 20
			// LOOP 0x27e5cf0
			// pre processing
			for (int i=0; i<4; i++) fYec0_tmp[i]=fYec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec0[i] = yc20_get_sample(fRec2[i], 0, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec0_perm[i]=fYec0_tmp[count+i];
			
			// LOOP 0x27ea300
			// pre processing
			for (int i=0; i<4; i++) fYec1_tmp[i]=fYec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec1[i] = yc20_get_sample(fRec5[i], 11, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec1_perm[i]=fYec1_tmp[count+i];
			
			// LOOP 0x27ee0c0
			// pre processing
			for (int i=0; i<4; i++) fYec2_tmp[i]=fYec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec2[i] = yc20_get_sample(fRec7[i], 10, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec2_perm[i]=fYec2_tmp[count+i];
			
			// LOOP 0x27f1df0
			// pre processing
			for (int i=0; i<4; i++) fYec3_tmp[i]=fYec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec3[i] = yc20_get_sample(fRec9[i], 9, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec3_perm[i]=fYec3_tmp[count+i];
			
			// LOOP 0x27f5ba0
			// pre processing
			for (int i=0; i<4; i++) fYec4_tmp[i]=fYec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec4[i] = yc20_get_sample(fRec11[i], 8, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec4_perm[i]=fYec4_tmp[count+i];
			
			// LOOP 0x27f9950
			// pre processing
			for (int i=0; i<4; i++) fYec5_tmp[i]=fYec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec5[i] = yc20_get_sample(fRec13[i], 7, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec5_perm[i]=fYec5_tmp[count+i];
			
			// LOOP 0x27fd700
			// pre processing
			for (int i=0; i<4; i++) fYec6_tmp[i]=fYec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec6[i] = yc20_get_sample(fRec15[i], 6, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec6_perm[i]=fYec6_tmp[count+i];
			
			// LOOP 0x28014b0
			// pre processing
			for (int i=0; i<4; i++) fYec7_tmp[i]=fYec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec7[i] = yc20_get_sample(fRec17[i], 5, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec7_perm[i]=fYec7_tmp[count+i];
			
			// LOOP 0x2805260
			// pre processing
			for (int i=0; i<4; i++) fYec8_tmp[i]=fYec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec8[i] = yc20_get_sample(fRec19[i], 4, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec8_perm[i]=fYec8_tmp[count+i];
			
			// LOOP 0x2809010
			// pre processing
			for (int i=0; i<4; i++) fYec9_tmp[i]=fYec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec9[i] = yc20_get_sample(fRec21[i], 3, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec9_perm[i]=fYec9_tmp[count+i];
			
			// LOOP 0x280cc90
			// pre processing
			for (int i=0; i<4; i++) fYec10_tmp[i]=fYec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec10[i] = yc20_get_sample(fRec23[i], 2, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec10_perm[i]=fYec10_tmp[count+i];
			
			// LOOP 0x2810980
			// pre processing
			for (int i=0; i<4; i++) fYec11_tmp[i]=fYec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec11[i] = yc20_get_sample(fRec25[i], 1, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec11_perm[i]=fYec11_tmp[count+i];
			
			// LOOP 0x2812580
			// pre processing
			for (int i=0; i<4; i++) fRec27_tmp[i]=fRec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec27[i] = (fRec27[i-1] + (fConst5 * (yc20_get_sample(fZec13[i], 11, 0) - fRec27[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec27_perm[i]=fRec27_tmp[count+i];
			
			// LOOP 0x2817090
			// pre processing
			for (int i=0; i<4; i++) fRec30_tmp[i]=fRec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec30[i] = (fRec30[i-1] + (fConst5 * (yc20_get_sample(fZec14[i], 10, 0) - fRec30[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec30_perm[i]=fRec30_tmp[count+i];
			
			// LOOP 0x281b750
			// pre processing
			for (int i=0; i<4; i++) fRec33_tmp[i]=fRec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec33[i] = (fRec33[i-1] + (fConst5 * (yc20_get_sample(fZec15[i], 9, 0) - fRec33[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec33_perm[i]=fRec33_tmp[count+i];
			
			// LOOP 0x281fe10
			// pre processing
			for (int i=0; i<4; i++) fRec36_tmp[i]=fRec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec36[i] = (fRec36[i-1] + (fConst5 * (yc20_get_sample(fZec16[i], 8, 0) - fRec36[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec36_perm[i]=fRec36_tmp[count+i];
			
			// LOOP 0x28244d0
			// pre processing
			for (int i=0; i<4; i++) fRec39_tmp[i]=fRec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec39[i] = (fRec39[i-1] + (fConst6 * (yc20_get_sample(fZec17[i], 7, 0) - fRec39[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec39_perm[i]=fRec39_tmp[count+i];
			
			// LOOP 0x2828ed0
			// pre processing
			for (int i=0; i<4; i++) fRec42_tmp[i]=fRec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec42[i] = (fRec42[i-1] + (fConst6 * (yc20_get_sample(fZec18[i], 6, 0) - fRec42[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec42_perm[i]=fRec42_tmp[count+i];
			
			// LOOP 0x282d1c0
			// pre processing
			for (int i=0; i<4; i++) fRec45_tmp[i]=fRec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec45[i] = (fRec45[i-1] + (fConst6 * (yc20_get_sample(fZec19[i], 5, 0) - fRec45[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec45_perm[i]=fRec45_tmp[count+i];
			
			// LOOP 0x2831c70
			// pre processing
			for (int i=0; i<4; i++) fRec48_tmp[i]=fRec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec48[i] = (fRec48[i-1] + (fConst6 * (yc20_get_sample(fZec20[i], 4, 0) - fRec48[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec48_perm[i]=fRec48_tmp[count+i];
			
			// LOOP 0x2836330
			// pre processing
			for (int i=0; i<4; i++) fRec51_tmp[i]=fRec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec51[i] = (fRec51[i-1] + (fConst7 * (yc20_get_sample(fZec21[i], 3, 0) - fRec51[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec51_perm[i]=fRec51_tmp[count+i];
			
			// LOOP 0x283ad30
			// pre processing
			for (int i=0; i<4; i++) fRec54_tmp[i]=fRec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec54[i] = (fRec54[i-1] + (fConst7 * (yc20_get_sample(fZec22[i], 2, 0) - fRec54[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec54_perm[i]=fRec54_tmp[count+i];
			
			// LOOP 0x283f3f0
			// pre processing
			for (int i=0; i<4; i++) fRec57_tmp[i]=fRec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec57[i] = (fRec57[i-1] + (fConst7 * (yc20_get_sample(fZec23[i], 1, 0) - fRec57[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec57_perm[i]=fRec57_tmp[count+i];
			
			// LOOP 0x2843ab0
			// pre processing
			for (int i=0; i<4; i++) fRec60_tmp[i]=fRec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec60[i] = (fRec60[i-1] + (fConst7 * (yc20_get_sample(fZec24[i], 0, 0) - fRec60[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec60_perm[i]=fRec60_tmp[count+i];
			
			// LOOP 0x28480d0
			// pre processing
			for (int i=0; i<4; i++) fRec63_tmp[i]=fRec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec63[i] = (fRec63[i-1] + (fConst8 * (yc20_get_sample(fZec25[i], 11, 0) - fRec63[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec63_perm[i]=fRec63_tmp[count+i];
			
			// LOOP 0x284ceb0
			// pre processing
			for (int i=0; i<4; i++) fRec66_tmp[i]=fRec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec66[i] = (fRec66[i-1] + (fConst8 * (yc20_get_sample(fZec26[i], 10, 0) - fRec66[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec66_perm[i]=fRec66_tmp[count+i];
			
			// LOOP 0x2851970
			// pre processing
			for (int i=0; i<4; i++) fRec69_tmp[i]=fRec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec69[i] = (fRec69[i-1] + (fConst8 * (yc20_get_sample(fZec27[i], 9, 0) - fRec69[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec69_perm[i]=fRec69_tmp[count+i];
			
			// LOOP 0x2856410
			// pre processing
			for (int i=0; i<4; i++) fRec72_tmp[i]=fRec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec72[i] = (fRec72[i-1] + (fConst8 * (yc20_get_sample(fZec28[i], 8, 0) - fRec72[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec72_perm[i]=fRec72_tmp[count+i];
			
			// LOOP 0x285aeb0
			// pre processing
			for (int i=0; i<4; i++) fRec75_tmp[i]=fRec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec75[i] = (fRec75[i-1] + (fConst9 * (yc20_get_sample(fZec29[i], 7, 0) - fRec75[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec75_perm[i]=fRec75_tmp[count+i];
			
			// LOOP 0x285fca0
			// pre processing
			for (int i=0; i<4; i++) fRec78_tmp[i]=fRec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec78[i] = (fRec78[i-1] + (fConst9 * (yc20_get_sample(fZec30[i], 6, 0) - fRec78[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec78_perm[i]=fRec78_tmp[count+i];
			
			// LOOP 0x2864740
			// pre processing
			for (int i=0; i<4; i++) fRec81_tmp[i]=fRec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec81[i] = (fRec81[i-1] + (fConst9 * (yc20_get_sample(fZec31[i], 5, 0) - fRec81[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec81_perm[i]=fRec81_tmp[count+i];
			
			// LOOP 0x2869200
			// pre processing
			for (int i=0; i<4; i++) fRec84_tmp[i]=fRec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec84[i] = (fRec84[i-1] + (fConst9 * (yc20_get_sample(fZec32[i], 4, 0) - fRec84[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec84_perm[i]=fRec84_tmp[count+i];
			
			// LOOP 0x286dca0
			// pre processing
			for (int i=0; i<4; i++) fRec87_tmp[i]=fRec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec87[i] = (fRec87[i-1] + (fConst10 * (yc20_get_sample(fZec33[i], 3, 0) - fRec87[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec87_perm[i]=fRec87_tmp[count+i];
			
			// LOOP 0x2872a60
			// pre processing
			for (int i=0; i<4; i++) fRec90_tmp[i]=fRec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec90[i] = (fRec90[i-1] + (fConst10 * (yc20_get_sample(fZec34[i], 2, 0) - fRec90[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec90_perm[i]=fRec90_tmp[count+i];
			
			// LOOP 0x2877500
			// pre processing
			for (int i=0; i<4; i++) fRec93_tmp[i]=fRec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec93[i] = (fRec93[i-1] + (fConst10 * (yc20_get_sample(fZec35[i], 1, 0) - fRec93[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec93_perm[i]=fRec93_tmp[count+i];
			
			// LOOP 0x287bbc0
			// pre processing
			for (int i=0; i<4; i++) fRec95_tmp[i]=fRec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec95[i] = (fConst4 * ((fRec96[i] - fRec96[i-1]) + fRec95[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec95_perm[i]=fRec95_tmp[count+i];
			
			// LOOP 0x28805c0
			// pre processing
			for (int i=0; i<4; i++) fRec98_tmp[i]=fRec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec98[i] = (fConst4 * ((fRec99[i] - fRec99[i-1]) + fRec98[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec98_perm[i]=fRec98_tmp[count+i];
			
			// LOOP 0x2885160
			// pre processing
			for (int i=0; i<4; i++) fRec101_tmp[i]=fRec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec101[i] = (fConst4 * ((fRec102[i] - fRec102[i-1]) + fRec101[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec101_perm[i]=fRec101_tmp[count+i];
			
			// LOOP 0x2889990
			// pre processing
			for (int i=0; i<4; i++) fRec104_tmp[i]=fRec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec104[i] = (fConst4 * ((fRec105[i] - fRec105[i-1]) + fRec104[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec104_perm[i]=fRec104_tmp[count+i];
			
			// LOOP 0x29353e0
			// pre processing
			for (int i=0; i<4; i++) fVec48_tmp[i]=fVec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec48[i] = fSlow68;
			}
			// post processing
			for (int i=0; i<4; i++) fVec48_perm[i]=fVec48_tmp[count+i];
			
			// LOOP 0x29392d0
			// pre processing
			for (int i=0; i<4; i++) fVec49_tmp[i]=fVec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec49[i] = fSlow69;
			}
			// post processing
			for (int i=0; i<4; i++) fVec49_perm[i]=fVec49_tmp[count+i];
			
			// LOOP 0x293c1d0
			// pre processing
			for (int i=0; i<4; i++) fVec50_tmp[i]=fVec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec50[i] = fSlow70;
			}
			// post processing
			for (int i=0; i<4; i++) fVec50_perm[i]=fVec50_tmp[count+i];
			
			// LOOP 0x2940500
			// pre processing
			for (int i=0; i<4; i++) fVec51_tmp[i]=fVec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec51[i] = fSlow71;
			}
			// post processing
			for (int i=0; i<4; i++) fVec51_perm[i]=fVec51_tmp[count+i];
			
			// LOOP 0x2943760
			// pre processing
			for (int i=0; i<4; i++) fVec52_tmp[i]=fVec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec52[i] = fSlow72;
			}
			// post processing
			for (int i=0; i<4; i++) fVec52_perm[i]=fVec52_tmp[count+i];
			
			// LOOP 0x2947e90
			// pre processing
			for (int i=0; i<4; i++) fVec53_tmp[i]=fVec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec53[i] = fSlow73;
			}
			// post processing
			for (int i=0; i<4; i++) fVec53_perm[i]=fVec53_tmp[count+i];
			
			// LOOP 0x294c8e0
			// pre processing
			for (int i=0; i<4; i++) fVec54_tmp[i]=fVec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec54[i] = fSlow74;
			}
			// post processing
			for (int i=0; i<4; i++) fVec54_perm[i]=fVec54_tmp[count+i];
			
			// LOOP 0x294fec0
			// pre processing
			for (int i=0; i<4; i++) fVec55_tmp[i]=fVec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec55[i] = fSlow75;
			}
			// post processing
			for (int i=0; i<4; i++) fVec55_perm[i]=fVec55_tmp[count+i];
			
			// LOOP 0x2954d10
			// pre processing
			for (int i=0; i<4; i++) fVec56_tmp[i]=fVec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec56[i] = fSlow76;
			}
			// post processing
			for (int i=0; i<4; i++) fVec56_perm[i]=fVec56_tmp[count+i];
			
			// LOOP 0x2958660
			// pre processing
			for (int i=0; i<4; i++) fVec57_tmp[i]=fVec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec57[i] = fSlow77;
			}
			// post processing
			for (int i=0; i<4; i++) fVec57_perm[i]=fVec57_tmp[count+i];
			
			// LOOP 0x295c370
			// pre processing
			for (int i=0; i<4; i++) fVec58_tmp[i]=fVec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec58[i] = fSlow78;
			}
			// post processing
			for (int i=0; i<4; i++) fVec58_perm[i]=fVec58_tmp[count+i];
			
			// LOOP 0x295f110
			// pre processing
			for (int i=0; i<4; i++) fVec59_tmp[i]=fVec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec59[i] = fSlow79;
			}
			// post processing
			for (int i=0; i<4; i++) fVec59_perm[i]=fVec59_tmp[count+i];
			
			// LOOP 0x2963220
			// pre processing
			for (int i=0; i<4; i++) fVec60_tmp[i]=fVec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec60[i] = fSlow80;
			}
			// post processing
			for (int i=0; i<4; i++) fVec60_perm[i]=fVec60_tmp[count+i];
			
			// LOOP 0x29f5d30
			// exec code
			for (int i=0; i<count; i++) {
				fZec125[i] = (fRec107[i] + (fRec110[i] + (fRec113[i] + (fRec116[i] + fZec124[i]))));
			}
			
			// LOOP 0x2ec7b90
			// pre processing
			for (int i=0; i<4; i++) fYec77_tmp[i]=fYec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec77[i] = (iRec213[i] + fZec174[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec77_perm[i]=fYec77_tmp[count+i];
			
			// LOOP 0x2ecd1f0
			// pre processing
			for (int i=0; i<4; i++) fYec78_tmp[i]=fYec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec78[i] = (iRec216[i] + fZec175[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec78_perm[i]=fYec78_tmp[count+i];
			
			// LOOP 0x2ed23b0
			// pre processing
			for (int i=0; i<4; i++) fYec79_tmp[i]=fYec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec79[i] = (iRec219[i] + fZec176[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec79_perm[i]=fYec79_tmp[count+i];
			
			// LOOP 0x2ed7560
			// pre processing
			for (int i=0; i<4; i++) fYec80_tmp[i]=fYec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec80[i] = (iRec222[i] + fZec177[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec80_perm[i]=fYec80_tmp[count+i];
			
			// LOOP 0x2edc710
			// pre processing
			for (int i=0; i<4; i++) fYec81_tmp[i]=fYec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec81[i] = (iRec225[i] + fZec178[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec81_perm[i]=fYec81_tmp[count+i];
			
			// LOOP 0x2ee1c00
			// pre processing
			for (int i=0; i<4; i++) fYec82_tmp[i]=fYec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec82[i] = (iRec228[i] + fZec184[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec82_perm[i]=fYec82_tmp[count+i];
			
			// LOOP 0x2ee6db0
			// pre processing
			for (int i=0; i<4; i++) fYec83_tmp[i]=fYec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec83[i] = (iRec231[i] + fZec185[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec83_perm[i]=fYec83_tmp[count+i];
			
			// LOOP 0x2eebf80
			// pre processing
			for (int i=0; i<4; i++) fYec84_tmp[i]=fYec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec84[i] = (iRec234[i] + fZec186[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec84_perm[i]=fYec84_tmp[count+i];
			
			// LOOP 0x2ef1130
			// pre processing
			for (int i=0; i<4; i++) fYec85_tmp[i]=fYec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec85[i] = (iRec237[i] + fZec187[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec85_perm[i]=fYec85_tmp[count+i];
			
			// LOOP 0x2ef6630
			// pre processing
			for (int i=0; i<4; i++) fYec86_tmp[i]=fYec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec86[i] = (iRec240[i] + fZec188[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec86_perm[i]=fYec86_tmp[count+i];
			
			// LOOP 0x2efb7e0
			// pre processing
			for (int i=0; i<4; i++) fYec87_tmp[i]=fYec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec87[i] = (iRec243[i] + fZec189[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec87_perm[i]=fYec87_tmp[count+i];
			
			// LOOP 0x2f00990
			// pre processing
			for (int i=0; i<4; i++) fYec88_tmp[i]=fYec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec88[i] = (iRec246[i] + fZec190[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec88_perm[i]=fYec88_tmp[count+i];
			
			// SECTION : 21
			// LOOP 0x27de170
			// pre processing
			for (int i=0; i<4; i++) fRec1_tmp[i]=fRec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec1[i] = (fConst4 * (((1.95f * fYec0[i]) - (1.95f * fYec0[i-1])) + fRec1[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec1_perm[i]=fRec1_tmp[count+i];
			
			// LOOP 0x27e7d30
			// pre processing
			for (int i=0; i<4; i++) fRec4_tmp[i]=fRec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec4[i] = (fConst4 * (((1.95f * fYec1[i]) - (1.95f * fYec1[i-1])) + fRec4[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec4_perm[i]=fRec4_tmp[count+i];
			
			// LOOP 0x27eba70
			// pre processing
			for (int i=0; i<4; i++) fRec6_tmp[i]=fRec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec6[i] = (fConst4 * (((1.95f * fYec2[i]) - (1.95f * fYec2[i-1])) + fRec6[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec6_perm[i]=fRec6_tmp[count+i];
			
			// LOOP 0x27ef870
			// pre processing
			for (int i=0; i<4; i++) fRec8_tmp[i]=fRec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec8[i] = (fConst4 * (((1.95f * fYec3[i]) - (1.95f * fYec3[i-1])) + fRec8[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec8_perm[i]=fRec8_tmp[count+i];
			
			// LOOP 0x27f35a0
			// pre processing
			for (int i=0; i<4; i++) fRec10_tmp[i]=fRec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec10[i] = (fConst4 * (((1.95f * fYec4[i]) - (1.95f * fYec4[i-1])) + fRec10[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec10_perm[i]=fRec10_tmp[count+i];
			
			// LOOP 0x27f7350
			// pre processing
			for (int i=0; i<4; i++) fRec12_tmp[i]=fRec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec12[i] = (fConst4 * (((1.95f * fYec5[i]) - (1.95f * fYec5[i-1])) + fRec12[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec12_perm[i]=fRec12_tmp[count+i];
			
			// LOOP 0x27fb100
			// pre processing
			for (int i=0; i<4; i++) fRec14_tmp[i]=fRec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec14[i] = (fConst4 * (((1.95f * fYec6[i]) - (1.95f * fYec6[i-1])) + fRec14[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec14_perm[i]=fRec14_tmp[count+i];
			
			// LOOP 0x27feeb0
			// pre processing
			for (int i=0; i<4; i++) fRec16_tmp[i]=fRec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec16[i] = (fConst4 * (((1.95f * fYec7[i]) - (1.95f * fYec7[i-1])) + fRec16[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec16_perm[i]=fRec16_tmp[count+i];
			
			// LOOP 0x2802c60
			// pre processing
			for (int i=0; i<4; i++) fRec18_tmp[i]=fRec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec18[i] = (fConst4 * (((1.95f * fYec8[i]) - (1.95f * fYec8[i-1])) + fRec18[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec18_perm[i]=fRec18_tmp[count+i];
			
			// LOOP 0x2806a10
			// pre processing
			for (int i=0; i<4; i++) fRec20_tmp[i]=fRec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec20[i] = (fConst4 * (((1.95f * fYec9[i]) - (1.95f * fYec9[i-1])) + fRec20[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec20_perm[i]=fRec20_tmp[count+i];
			
			// LOOP 0x280a6b0
			// pre processing
			for (int i=0; i<4; i++) fRec22_tmp[i]=fRec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec22[i] = (fConst4 * (((1.95f * fYec10[i]) - (1.95f * fYec10[i-1])) + fRec22[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec22_perm[i]=fRec22_tmp[count+i];
			
			// LOOP 0x280e380
			// pre processing
			for (int i=0; i<4; i++) fRec24_tmp[i]=fRec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec24[i] = (fConst4 * (((1.95f * fYec11[i]) - (1.95f * fYec11[i-1])) + fRec24[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec24_perm[i]=fRec24_tmp[count+i];
			
			// LOOP 0x28121a0
			// pre processing
			for (int i=0; i<4; i++) fRec26_tmp[i]=fRec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec26[i] = (fConst4 * ((fRec27[i] - fRec27[i-1]) + fRec26[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec26_perm[i]=fRec26_tmp[count+i];
			
			// LOOP 0x2816cb0
			// pre processing
			for (int i=0; i<4; i++) fRec29_tmp[i]=fRec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec29[i] = (fConst4 * ((fRec30[i] - fRec30[i-1]) + fRec29[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec29_perm[i]=fRec29_tmp[count+i];
			
			// LOOP 0x281b370
			// pre processing
			for (int i=0; i<4; i++) fRec32_tmp[i]=fRec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec32[i] = (fConst4 * ((fRec33[i] - fRec33[i-1]) + fRec32[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec32_perm[i]=fRec32_tmp[count+i];
			
			// LOOP 0x281fa30
			// pre processing
			for (int i=0; i<4; i++) fRec35_tmp[i]=fRec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec35[i] = (fConst4 * ((fRec36[i] - fRec36[i-1]) + fRec35[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec35_perm[i]=fRec35_tmp[count+i];
			
			// LOOP 0x28240f0
			// pre processing
			for (int i=0; i<4; i++) fRec38_tmp[i]=fRec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec38[i] = (fConst4 * ((fRec39[i] - fRec39[i-1]) + fRec38[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec38_perm[i]=fRec38_tmp[count+i];
			
			// LOOP 0x2828af0
			// pre processing
			for (int i=0; i<4; i++) fRec41_tmp[i]=fRec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec41[i] = (fConst4 * ((fRec42[i] - fRec42[i-1]) + fRec41[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec41_perm[i]=fRec41_tmp[count+i];
			
			// LOOP 0x282cdc0
			// pre processing
			for (int i=0; i<4; i++) fRec44_tmp[i]=fRec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec44[i] = (fConst4 * ((fRec45[i] - fRec45[i-1]) + fRec44[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec44_perm[i]=fRec44_tmp[count+i];
			
			// LOOP 0x2831890
			// pre processing
			for (int i=0; i<4; i++) fRec47_tmp[i]=fRec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec47[i] = (fConst4 * ((fRec48[i] - fRec48[i-1]) + fRec47[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec47_perm[i]=fRec47_tmp[count+i];
			
			// LOOP 0x2835f50
			// pre processing
			for (int i=0; i<4; i++) fRec50_tmp[i]=fRec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec50[i] = (fConst4 * ((fRec51[i] - fRec51[i-1]) + fRec50[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec50_perm[i]=fRec50_tmp[count+i];
			
			// LOOP 0x283a950
			// pre processing
			for (int i=0; i<4; i++) fRec53_tmp[i]=fRec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec53[i] = (fConst4 * ((fRec54[i] - fRec54[i-1]) + fRec53[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec53_perm[i]=fRec53_tmp[count+i];
			
			// LOOP 0x283f010
			// pre processing
			for (int i=0; i<4; i++) fRec56_tmp[i]=fRec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec56[i] = (fConst4 * ((fRec57[i] - fRec57[i-1]) + fRec56[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec56_perm[i]=fRec56_tmp[count+i];
			
			// LOOP 0x28436d0
			// pre processing
			for (int i=0; i<4; i++) fRec59_tmp[i]=fRec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec59[i] = (fConst4 * ((fRec60[i] - fRec60[i-1]) + fRec59[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec59_perm[i]=fRec59_tmp[count+i];
			
			// LOOP 0x2847cf0
			// pre processing
			for (int i=0; i<4; i++) fRec62_tmp[i]=fRec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec62[i] = (fConst4 * ((fRec63[i] - fRec63[i-1]) + fRec62[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec62_perm[i]=fRec62_tmp[count+i];
			
			// LOOP 0x284cad0
			// pre processing
			for (int i=0; i<4; i++) fRec65_tmp[i]=fRec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec65[i] = (fConst4 * ((fRec66[i] - fRec66[i-1]) + fRec65[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec65_perm[i]=fRec65_tmp[count+i];
			
			// LOOP 0x2851590
			// pre processing
			for (int i=0; i<4; i++) fRec68_tmp[i]=fRec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec68[i] = (fConst4 * ((fRec69[i] - fRec69[i-1]) + fRec68[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec68_perm[i]=fRec68_tmp[count+i];
			
			// LOOP 0x2856030
			// pre processing
			for (int i=0; i<4; i++) fRec71_tmp[i]=fRec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec71[i] = (fConst4 * ((fRec72[i] - fRec72[i-1]) + fRec71[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec71_perm[i]=fRec71_tmp[count+i];
			
			// LOOP 0x285aad0
			// pre processing
			for (int i=0; i<4; i++) fRec74_tmp[i]=fRec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec74[i] = (fConst4 * ((fRec75[i] - fRec75[i-1]) + fRec74[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec74_perm[i]=fRec74_tmp[count+i];
			
			// LOOP 0x285f8c0
			// pre processing
			for (int i=0; i<4; i++) fRec77_tmp[i]=fRec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec77[i] = (fConst4 * ((fRec78[i] - fRec78[i-1]) + fRec77[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec77_perm[i]=fRec77_tmp[count+i];
			
			// LOOP 0x2864360
			// pre processing
			for (int i=0; i<4; i++) fRec80_tmp[i]=fRec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec80[i] = (fConst4 * ((fRec81[i] - fRec81[i-1]) + fRec80[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec80_perm[i]=fRec80_tmp[count+i];
			
			// LOOP 0x2868e00
			// pre processing
			for (int i=0; i<4; i++) fRec83_tmp[i]=fRec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec83[i] = (fConst4 * ((fRec84[i] - fRec84[i-1]) + fRec83[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec83_perm[i]=fRec83_tmp[count+i];
			
			// LOOP 0x286d8c0
			// pre processing
			for (int i=0; i<4; i++) fRec86_tmp[i]=fRec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec86[i] = (fConst4 * ((fRec87[i] - fRec87[i-1]) + fRec86[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec86_perm[i]=fRec86_tmp[count+i];
			
			// LOOP 0x2872680
			// pre processing
			for (int i=0; i<4; i++) fRec89_tmp[i]=fRec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec89[i] = (fConst4 * ((fRec90[i] - fRec90[i-1]) + fRec89[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec89_perm[i]=fRec89_tmp[count+i];
			
			// LOOP 0x2877120
			// pre processing
			for (int i=0; i<4; i++) fRec92_tmp[i]=fRec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec92[i] = (fConst4 * ((fRec93[i] - fRec93[i-1]) + fRec92[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec92_perm[i]=fRec92_tmp[count+i];
			
			// LOOP 0x28b77d0
			// pre processing
			for (int i=0; i<4; i++) fVec0_tmp[i]=fVec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec0[i] = fSlow18;
			}
			// post processing
			for (int i=0; i<4; i++) fVec0_perm[i]=fVec0_tmp[count+i];
			
			// LOOP 0x28b8ea0
			// pre processing
			for (int i=0; i<4; i++) fVec1_tmp[i]=fVec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec1[i] = fSlow19;
			}
			// post processing
			for (int i=0; i<4; i++) fVec1_perm[i]=fVec1_tmp[count+i];
			
			// LOOP 0x28ba730
			// pre processing
			for (int i=0; i<4; i++) fVec2_tmp[i]=fVec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec2[i] = fSlow20;
			}
			// post processing
			for (int i=0; i<4; i++) fVec2_perm[i]=fVec2_tmp[count+i];
			
			// LOOP 0x28bc550
			// pre processing
			for (int i=0; i<4; i++) fVec3_tmp[i]=fVec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec3[i] = fSlow21;
			}
			// post processing
			for (int i=0; i<4; i++) fVec3_perm[i]=fVec3_tmp[count+i];
			
			// LOOP 0x28be2b0
			// pre processing
			for (int i=0; i<4; i++) fVec4_tmp[i]=fVec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec4[i] = fSlow22;
			}
			// post processing
			for (int i=0; i<4; i++) fVec4_perm[i]=fVec4_tmp[count+i];
			
			// LOOP 0x28c02f0
			// pre processing
			for (int i=0; i<4; i++) fVec5_tmp[i]=fVec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec5[i] = fSlow23;
			}
			// post processing
			for (int i=0; i<4; i++) fVec5_perm[i]=fVec5_tmp[count+i];
			
			// LOOP 0x28c23c0
			// pre processing
			for (int i=0; i<4; i++) fVec6_tmp[i]=fVec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec6[i] = fSlow24;
			}
			// post processing
			for (int i=0; i<4; i++) fVec6_perm[i]=fVec6_tmp[count+i];
			
			// LOOP 0x28c4280
			// pre processing
			for (int i=0; i<4; i++) fVec7_tmp[i]=fVec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec7[i] = fSlow25;
			}
			// post processing
			for (int i=0; i<4; i++) fVec7_perm[i]=fVec7_tmp[count+i];
			
			// LOOP 0x28c6500
			// pre processing
			for (int i=0; i<4; i++) fVec8_tmp[i]=fVec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec8[i] = fSlow26;
			}
			// post processing
			for (int i=0; i<4; i++) fVec8_perm[i]=fVec8_tmp[count+i];
			
			// LOOP 0x28c84a0
			// pre processing
			for (int i=0; i<4; i++) fVec9_tmp[i]=fVec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec9[i] = fSlow27;
			}
			// post processing
			for (int i=0; i<4; i++) fVec9_perm[i]=fVec9_tmp[count+i];
			
			// LOOP 0x28ca5d0
			// pre processing
			for (int i=0; i<4; i++) fVec10_tmp[i]=fVec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec10[i] = fSlow28;
			}
			// post processing
			for (int i=0; i<4; i++) fVec10_perm[i]=fVec10_tmp[count+i];
			
			// LOOP 0x28cc4b0
			// pre processing
			for (int i=0; i<4; i++) fVec11_tmp[i]=fVec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec11[i] = fSlow29;
			}
			// post processing
			for (int i=0; i<4; i++) fVec11_perm[i]=fVec11_tmp[count+i];
			
			// LOOP 0x28ce7d0
			// pre processing
			for (int i=0; i<4; i++) fVec12_tmp[i]=fVec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec12[i] = fSlow30;
			}
			// post processing
			for (int i=0; i<4; i++) fVec12_perm[i]=fVec12_tmp[count+i];
			
			// LOOP 0x28d0c70
			// pre processing
			for (int i=0; i<4; i++) fVec13_tmp[i]=fVec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec13[i] = fSlow31;
			}
			// post processing
			for (int i=0; i<4; i++) fVec13_perm[i]=fVec13_tmp[count+i];
			
			// LOOP 0x28d2cb0
			// pre processing
			for (int i=0; i<4; i++) fVec14_tmp[i]=fVec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec14[i] = fSlow32;
			}
			// post processing
			for (int i=0; i<4; i++) fVec14_perm[i]=fVec14_tmp[count+i];
			
			// LOOP 0x28d53f0
			// pre processing
			for (int i=0; i<4; i++) fVec15_tmp[i]=fVec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec15[i] = fSlow33;
			}
			// post processing
			for (int i=0; i<4; i++) fVec15_perm[i]=fVec15_tmp[count+i];
			
			// LOOP 0x28d7610
			// pre processing
			for (int i=0; i<4; i++) fVec16_tmp[i]=fVec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec16[i] = fSlow34;
			}
			// post processing
			for (int i=0; i<4; i++) fVec16_perm[i]=fVec16_tmp[count+i];
			
			// LOOP 0x28db420
			// pre processing
			for (int i=0; i<4; i++) fVec17_tmp[i]=fVec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec17[i] = fSlow37;
			}
			// post processing
			for (int i=0; i<4; i++) fVec17_perm[i]=fVec17_tmp[count+i];
			
			// LOOP 0x28ddf20
			// pre processing
			for (int i=0; i<4; i++) fVec18_tmp[i]=fVec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec18[i] = fSlow38;
			}
			// post processing
			for (int i=0; i<4; i++) fVec18_perm[i]=fVec18_tmp[count+i];
			
			// LOOP 0x28e0380
			// pre processing
			for (int i=0; i<4; i++) fVec19_tmp[i]=fVec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec19[i] = fSlow39;
			}
			// post processing
			for (int i=0; i<4; i++) fVec19_perm[i]=fVec19_tmp[count+i];
			
			// LOOP 0x28e3150
			// pre processing
			for (int i=0; i<4; i++) fVec20_tmp[i]=fVec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec20[i] = fSlow40;
			}
			// post processing
			for (int i=0; i<4; i++) fVec20_perm[i]=fVec20_tmp[count+i];
			
			// LOOP 0x28e5720
			// pre processing
			for (int i=0; i<4; i++) fVec21_tmp[i]=fVec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec21[i] = fSlow41;
			}
			// post processing
			for (int i=0; i<4; i++) fVec21_perm[i]=fVec21_tmp[count+i];
			
			// LOOP 0x28e7f30
			// pre processing
			for (int i=0; i<4; i++) fVec22_tmp[i]=fVec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec22[i] = fSlow42;
			}
			// post processing
			for (int i=0; i<4; i++) fVec22_perm[i]=fVec22_tmp[count+i];
			
			// LOOP 0x28ea130
			// pre processing
			for (int i=0; i<4; i++) fVec23_tmp[i]=fVec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec23[i] = fSlow43;
			}
			// post processing
			for (int i=0; i<4; i++) fVec23_perm[i]=fVec23_tmp[count+i];
			
			// LOOP 0x28ecbb0
			// pre processing
			for (int i=0; i<4; i++) fVec24_tmp[i]=fVec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec24[i] = fSlow44;
			}
			// post processing
			for (int i=0; i<4; i++) fVec24_perm[i]=fVec24_tmp[count+i];
			
			// LOOP 0x28ef8d0
			// pre processing
			for (int i=0; i<4; i++) fVec25_tmp[i]=fVec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec25[i] = fSlow45;
			}
			// post processing
			for (int i=0; i<4; i++) fVec25_perm[i]=fVec25_tmp[count+i];
			
			// LOOP 0x28f1680
			// pre processing
			for (int i=0; i<4; i++) fVec26_tmp[i]=fVec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec26[i] = fSlow46;
			}
			// post processing
			for (int i=0; i<4; i++) fVec26_perm[i]=fVec26_tmp[count+i];
			
			// LOOP 0x28f4660
			// pre processing
			for (int i=0; i<4; i++) fVec27_tmp[i]=fVec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec27[i] = fSlow47;
			}
			// post processing
			for (int i=0; i<4; i++) fVec27_perm[i]=fVec27_tmp[count+i];
			
			// LOOP 0x28f6cd0
			// pre processing
			for (int i=0; i<4; i++) fVec28_tmp[i]=fVec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec28[i] = fSlow48;
			}
			// post processing
			for (int i=0; i<4; i++) fVec28_perm[i]=fVec28_tmp[count+i];
			
			// LOOP 0x28f9f60
			// pre processing
			for (int i=0; i<4; i++) fVec29_tmp[i]=fVec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec29[i] = fSlow49;
			}
			// post processing
			for (int i=0; i<4; i++) fVec29_perm[i]=fVec29_tmp[count+i];
			
			// LOOP 0x28fd420
			// pre processing
			for (int i=0; i<4; i++) fVec30_tmp[i]=fVec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec30[i] = fSlow50;
			}
			// post processing
			for (int i=0; i<4; i++) fVec30_perm[i]=fVec30_tmp[count+i];
			
			// LOOP 0x28ffd40
			// pre processing
			for (int i=0; i<4; i++) fVec31_tmp[i]=fVec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec31[i] = fSlow51;
			}
			// post processing
			for (int i=0; i<4; i++) fVec31_perm[i]=fVec31_tmp[count+i];
			
			// LOOP 0x29034e0
			// pre processing
			for (int i=0; i<4; i++) fVec32_tmp[i]=fVec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec32[i] = fSlow52;
			}
			// post processing
			for (int i=0; i<4; i++) fVec32_perm[i]=fVec32_tmp[count+i];
			
			// LOOP 0x2906050
			// pre processing
			for (int i=0; i<4; i++) fVec33_tmp[i]=fVec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec33[i] = fSlow53;
			}
			// post processing
			for (int i=0; i<4; i++) fVec33_perm[i]=fVec33_tmp[count+i];
			
			// LOOP 0x2908e70
			// pre processing
			for (int i=0; i<4; i++) fVec34_tmp[i]=fVec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec34[i] = fSlow54;
			}
			// post processing
			for (int i=0; i<4; i++) fVec34_perm[i]=fVec34_tmp[count+i];
			
			// LOOP 0x290b350
			// pre processing
			for (int i=0; i<4; i++) fVec35_tmp[i]=fVec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec35[i] = fSlow55;
			}
			// post processing
			for (int i=0; i<4; i++) fVec35_perm[i]=fVec35_tmp[count+i];
			
			// LOOP 0x290e460
			// pre processing
			for (int i=0; i<4; i++) fVec36_tmp[i]=fVec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec36[i] = fSlow56;
			}
			// post processing
			for (int i=0; i<4; i++) fVec36_perm[i]=fVec36_tmp[count+i];
			
			// LOOP 0x29118c0
			// pre processing
			for (int i=0; i<4; i++) fVec37_tmp[i]=fVec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec37[i] = fSlow57;
			}
			// post processing
			for (int i=0; i<4; i++) fVec37_perm[i]=fVec37_tmp[count+i];
			
			// LOOP 0x29140e0
			// pre processing
			for (int i=0; i<4; i++) fVec38_tmp[i]=fVec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec38[i] = fSlow58;
			}
			// post processing
			for (int i=0; i<4; i++) fVec38_perm[i]=fVec38_tmp[count+i];
			
			// LOOP 0x29178f0
			// pre processing
			for (int i=0; i<4; i++) fVec39_tmp[i]=fVec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec39[i] = fSlow59;
			}
			// post processing
			for (int i=0; i<4; i++) fVec39_perm[i]=fVec39_tmp[count+i];
			
			// LOOP 0x291a410
			// pre processing
			for (int i=0; i<4; i++) fVec40_tmp[i]=fVec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec40[i] = fSlow60;
			}
			// post processing
			for (int i=0; i<4; i++) fVec40_perm[i]=fVec40_tmp[count+i];
			
			// LOOP 0x291dfb0
			// pre processing
			for (int i=0; i<4; i++) fVec41_tmp[i]=fVec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec41[i] = fSlow61;
			}
			// post processing
			for (int i=0; i<4; i++) fVec41_perm[i]=fVec41_tmp[count+i];
			
			// LOOP 0x2921df0
			// pre processing
			for (int i=0; i<4; i++) fVec42_tmp[i]=fVec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec42[i] = fSlow62;
			}
			// post processing
			for (int i=0; i<4; i++) fVec42_perm[i]=fVec42_tmp[count+i];
			
			// LOOP 0x2924c30
			// pre processing
			for (int i=0; i<4; i++) fVec43_tmp[i]=fVec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec43[i] = fSlow63;
			}
			// post processing
			for (int i=0; i<4; i++) fVec43_perm[i]=fVec43_tmp[count+i];
			
			// LOOP 0x2928e00
			// pre processing
			for (int i=0; i<4; i++) fVec44_tmp[i]=fVec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec44[i] = fSlow64;
			}
			// post processing
			for (int i=0; i<4; i++) fVec44_perm[i]=fVec44_tmp[count+i];
			
			// LOOP 0x292bf30
			// pre processing
			for (int i=0; i<4; i++) fVec45_tmp[i]=fVec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec45[i] = fSlow65;
			}
			// post processing
			for (int i=0; i<4; i++) fVec45_perm[i]=fVec45_tmp[count+i];
			
			// LOOP 0x292f3c0
			// pre processing
			for (int i=0; i<4; i++) fVec46_tmp[i]=fVec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec46[i] = fSlow66;
			}
			// post processing
			for (int i=0; i<4; i++) fVec46_perm[i]=fVec46_tmp[count+i];
			
			// LOOP 0x2931bf0
			// pre processing
			for (int i=0; i<4; i++) fVec47_tmp[i]=fVec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec47[i] = fSlow67;
			}
			// post processing
			for (int i=0; i<4; i++) fVec47_perm[i]=fVec47_tmp[count+i];
			
			// LOOP 0x29352d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec97[i] = (fSlow68 + (fVec48[i-3] + (fVec48[i-1] + fVec48[i-2])));
			}
			
			// LOOP 0x29391f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec99[i] = (fSlow69 + (fVec49[i-3] + (fVec49[i-1] + fVec49[i-2])));
			}
			
			// LOOP 0x293c0f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec101[i] = (fSlow70 + (fVec50[i-3] + (fVec50[i-1] + fVec50[i-2])));
			}
			
			// LOOP 0x2940420
			// exec code
			for (int i=0; i<count; i++) {
				fZec103[i] = (fSlow71 + (fVec51[i-3] + (fVec51[i-1] + fVec51[i-2])));
			}
			
			// LOOP 0x2943680
			// exec code
			for (int i=0; i<count; i++) {
				fZec105[i] = (fSlow72 + (fVec52[i-3] + (fVec52[i-1] + fVec52[i-2])));
			}
			
			// LOOP 0x2947db0
			// exec code
			for (int i=0; i<count; i++) {
				fZec107[i] = (fSlow73 + (fVec53[i-3] + (fVec53[i-1] + fVec53[i-2])));
			}
			
			// LOOP 0x294c800
			// exec code
			for (int i=0; i<count; i++) {
				fZec109[i] = (fSlow74 + (fVec54[i-3] + (fVec54[i-1] + fVec54[i-2])));
			}
			
			// LOOP 0x294fde0
			// exec code
			for (int i=0; i<count; i++) {
				fZec111[i] = (fSlow75 + (fVec55[i-3] + (fVec55[i-1] + fVec55[i-2])));
			}
			
			// LOOP 0x2954c30
			// exec code
			for (int i=0; i<count; i++) {
				fZec113[i] = (fSlow76 + (fVec56[i-3] + (fVec56[i-1] + fVec56[i-2])));
			}
			
			// LOOP 0x2958580
			// exec code
			for (int i=0; i<count; i++) {
				fZec115[i] = (fSlow77 + (fVec57[i-3] + (fVec57[i-1] + fVec57[i-2])));
			}
			
			// LOOP 0x295c290
			// exec code
			for (int i=0; i<count; i++) {
				fZec117[i] = (fSlow78 + (fVec58[i-3] + (fVec58[i-1] + fVec58[i-2])));
			}
			
			// LOOP 0x295f030
			// exec code
			for (int i=0; i<count; i++) {
				fZec119[i] = (fSlow79 + (fVec59[i-3] + (fVec59[i-1] + fVec59[i-2])));
			}
			
			// LOOP 0x2963140
			// exec code
			for (int i=0; i<count; i++) {
				fZec121[i] = (fSlow80 + (fVec60[i-3] + (fVec60[i-1] + fVec60[i-2])));
			}
			
			// LOOP 0x29f5c50
			// exec code
			for (int i=0; i<count; i++) {
				fZec126[i] = (fRec95[i] + (fRec98[i] + (fRec101[i] + (fRec104[i] + fZec125[i]))));
			}
			
			// LOOP 0x2ec7ab0
			// exec code
			for (int i=0; i<count; i++) {
				fZec194[i] = (0.5f * fYec77[i]);
			}
			
			// LOOP 0x2ecd110
			// exec code
			for (int i=0; i<count; i++) {
				fZec195[i] = (0.5f * fYec78[i]);
			}
			
			// LOOP 0x2ed22d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec196[i] = (0.5f * fYec79[i]);
			}
			
			// LOOP 0x2ed7480
			// exec code
			for (int i=0; i<count; i++) {
				fZec197[i] = (0.5f * fYec80[i]);
			}
			
			// LOOP 0x2edc630
			// exec code
			for (int i=0; i<count; i++) {
				fZec198[i] = (0.5f * fYec81[i]);
			}
			
			// LOOP 0x2ee1b20
			// exec code
			for (int i=0; i<count; i++) {
				fZec199[i] = (0.5f * fYec82[i]);
			}
			
			// LOOP 0x2ee6cd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec200[i] = (0.5f * fYec83[i]);
			}
			
			// LOOP 0x2eebea0
			// exec code
			for (int i=0; i<count; i++) {
				fZec201[i] = (0.5f * fYec84[i]);
			}
			
			// LOOP 0x2ef1050
			// exec code
			for (int i=0; i<count; i++) {
				fZec202[i] = (0.5f * fYec85[i]);
			}
			
			// LOOP 0x2ef6550
			// exec code
			for (int i=0; i<count; i++) {
				fZec203[i] = (0.5f * fYec86[i]);
			}
			
			// LOOP 0x2efb700
			// exec code
			for (int i=0; i<count; i++) {
				fZec204[i] = (0.5f * fYec87[i]);
			}
			
			// LOOP 0x2f008b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec205[i] = (0.5f * fYec88[i]);
			}
			
			// SECTION : 22
			// LOOP 0x28b76f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec49[i] = (fSlow18 + (fVec0[i-3] + (fVec0[i-1] + fVec0[i-2])));
			}
			
			// LOOP 0x28b8dc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec50[i] = (fSlow19 + (fVec1[i-3] + (fVec1[i-1] + fVec1[i-2])));
			}
			
			// LOOP 0x28ba650
			// exec code
			for (int i=0; i<count; i++) {
				fZec51[i] = (fSlow20 + (fVec2[i-3] + (fVec2[i-1] + fVec2[i-2])));
			}
			
			// LOOP 0x28bc470
			// exec code
			for (int i=0; i<count; i++) {
				fZec52[i] = (fSlow21 + (fVec3[i-3] + (fVec3[i-1] + fVec3[i-2])));
			}
			
			// LOOP 0x28be1d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec53[i] = (fSlow22 + (fVec4[i-3] + (fVec4[i-1] + fVec4[i-2])));
			}
			
			// LOOP 0x28c0210
			// exec code
			for (int i=0; i<count; i++) {
				fZec54[i] = (fSlow23 + (fVec5[i-3] + (fVec5[i-1] + fVec5[i-2])));
			}
			
			// LOOP 0x28c22e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec55[i] = (fSlow24 + (fVec6[i-3] + (fVec6[i-1] + fVec6[i-2])));
			}
			
			// LOOP 0x28c41a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec56[i] = (fSlow25 + (fVec7[i-3] + (fVec7[i-1] + fVec7[i-2])));
			}
			
			// LOOP 0x28c6420
			// exec code
			for (int i=0; i<count; i++) {
				fZec57[i] = (fSlow26 + (fVec8[i-3] + (fVec8[i-1] + fVec8[i-2])));
			}
			
			// LOOP 0x28c83c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec58[i] = (fSlow27 + (fVec9[i-3] + (fVec9[i-1] + fVec9[i-2])));
			}
			
			// LOOP 0x28ca4f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec59[i] = (fSlow28 + (fVec10[i-3] + (fVec10[i-1] + fVec10[i-2])));
			}
			
			// LOOP 0x28cc3d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec60[i] = (fSlow29 + (fVec11[i-3] + (fVec11[i-1] + fVec11[i-2])));
			}
			
			// LOOP 0x28ce6f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec61[i] = (fSlow30 + (fVec12[i-3] + (fVec12[i-1] + fVec12[i-2])));
			}
			
			// LOOP 0x28d0b90
			// exec code
			for (int i=0; i<count; i++) {
				fZec62[i] = (fSlow31 + (fVec13[i-3] + (fVec13[i-1] + fVec13[i-2])));
			}
			
			// LOOP 0x28d2bd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec63[i] = (fSlow32 + (fVec14[i-3] + (fVec14[i-1] + fVec14[i-2])));
			}
			
			// LOOP 0x28d5310
			// exec code
			for (int i=0; i<count; i++) {
				fZec64[i] = (fSlow33 + (fVec15[i-3] + (fVec15[i-1] + fVec15[i-2])));
			}
			
			// LOOP 0x28d7530
			// exec code
			for (int i=0; i<count; i++) {
				fZec65[i] = (fSlow34 + (fVec16[i-3] + (fVec16[i-1] + fVec16[i-2])));
			}
			
			// LOOP 0x28db340
			// exec code
			for (int i=0; i<count; i++) {
				fZec66[i] = (fSlow37 + (fVec17[i-3] + (fVec17[i-1] + fVec17[i-2])));
			}
			
			// LOOP 0x28dd9f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec67[i] = (fSlow38 + (fVec18[i-3] + (fVec18[i-1] + fVec18[i-2])));
			}
			
			// LOOP 0x28dfe00
			// exec code
			for (int i=0; i<count; i++) {
				fZec68[i] = (fSlow39 + (fVec19[i-3] + (fVec19[i-1] + fVec19[i-2])));
			}
			
			// LOOP 0x28e2b70
			// exec code
			for (int i=0; i<count; i++) {
				fZec69[i] = (fSlow40 + (fVec20[i-3] + (fVec20[i-1] + fVec20[i-2])));
			}
			
			// LOOP 0x28e5100
			// exec code
			for (int i=0; i<count; i++) {
				fZec70[i] = (fSlow41 + (fVec21[i-3] + (fVec21[i-1] + fVec21[i-2])));
			}
			
			// LOOP 0x28e78b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec71[i] = (fSlow42 + (fVec22[i-3] + (fVec22[i-1] + fVec22[i-2])));
			}
			
			// LOOP 0x28e9a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec72[i] = (fSlow43 + (fVec23[i-3] + (fVec23[i-1] + fVec23[i-2])));
			}
			
			// LOOP 0x28ec480
			// exec code
			for (int i=0; i<count; i++) {
				fZec73[i] = (fSlow44 + (fVec24[i-3] + (fVec24[i-1] + fVec24[i-2])));
			}
			
			// LOOP 0x28ef160
			// exec code
			for (int i=0; i<count; i++) {
				fZec74[i] = (fSlow45 + (fVec25[i-3] + (fVec25[i-1] + fVec25[i-2])));
			}
			
			// LOOP 0x28f15a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec75[i] = (fSlow46 + (fVec26[i-3] + (fVec26[i-1] + fVec26[i-2])));
			}
			
			// LOOP 0x28f4580
			// exec code
			for (int i=0; i<count; i++) {
				fZec76[i] = (fSlow47 + (fVec27[i-3] + (fVec27[i-1] + fVec27[i-2])));
			}
			
			// LOOP 0x28f6bf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec77[i] = (fSlow48 + (fVec28[i-3] + (fVec28[i-1] + fVec28[i-2])));
			}
			
			// LOOP 0x28f9e80
			// exec code
			for (int i=0; i<count; i++) {
				fZec78[i] = (fSlow49 + (fVec29[i-3] + (fVec29[i-1] + fVec29[i-2])));
			}
			
			// LOOP 0x28fd340
			// exec code
			for (int i=0; i<count; i++) {
				fZec79[i] = (fSlow50 + (fVec30[i-3] + (fVec30[i-1] + fVec30[i-2])));
			}
			
			// LOOP 0x28ffc60
			// exec code
			for (int i=0; i<count; i++) {
				fZec80[i] = (fSlow51 + (fVec31[i-3] + (fVec31[i-1] + fVec31[i-2])));
			}
			
			// LOOP 0x2903400
			// exec code
			for (int i=0; i<count; i++) {
				fZec81[i] = (fSlow52 + (fVec32[i-3] + (fVec32[i-1] + fVec32[i-2])));
			}
			
			// LOOP 0x2905f70
			// exec code
			for (int i=0; i<count; i++) {
				fZec82[i] = (fSlow53 + (fVec33[i-3] + (fVec33[i-1] + fVec33[i-2])));
			}
			
			// LOOP 0x2908d90
			// exec code
			for (int i=0; i<count; i++) {
				fZec83[i] = (fSlow54 + (fVec34[i-3] + (fVec34[i-1] + fVec34[i-2])));
			}
			
			// LOOP 0x290b270
			// exec code
			for (int i=0; i<count; i++) {
				fZec84[i] = (fSlow55 + (fVec35[i-3] + (fVec35[i-1] + fVec35[i-2])));
			}
			
			// LOOP 0x290e380
			// exec code
			for (int i=0; i<count; i++) {
				fZec85[i] = (fSlow56 + (fVec36[i-3] + (fVec36[i-1] + fVec36[i-2])));
			}
			
			// LOOP 0x29117e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec86[i] = (fSlow57 + (fVec37[i-3] + (fVec37[i-1] + fVec37[i-2])));
			}
			
			// LOOP 0x2914000
			// exec code
			for (int i=0; i<count; i++) {
				fZec87[i] = (fSlow58 + (fVec38[i-3] + (fVec38[i-1] + fVec38[i-2])));
			}
			
			// LOOP 0x2917810
			// exec code
			for (int i=0; i<count; i++) {
				fZec88[i] = (fSlow59 + (fVec39[i-3] + (fVec39[i-1] + fVec39[i-2])));
			}
			
			// LOOP 0x291a330
			// exec code
			for (int i=0; i<count; i++) {
				fZec89[i] = (fSlow60 + (fVec40[i-3] + (fVec40[i-1] + fVec40[i-2])));
			}
			
			// LOOP 0x291ded0
			// exec code
			for (int i=0; i<count; i++) {
				fZec90[i] = (fSlow61 + (fVec41[i-3] + (fVec41[i-1] + fVec41[i-2])));
			}
			
			// LOOP 0x2921d10
			// exec code
			for (int i=0; i<count; i++) {
				fZec91[i] = (fSlow62 + (fVec42[i-3] + (fVec42[i-1] + fVec42[i-2])));
			}
			
			// LOOP 0x2924b50
			// exec code
			for (int i=0; i<count; i++) {
				fZec92[i] = (fSlow63 + (fVec43[i-3] + (fVec43[i-1] + fVec43[i-2])));
			}
			
			// LOOP 0x2928d20
			// exec code
			for (int i=0; i<count; i++) {
				fZec93[i] = (fSlow64 + (fVec44[i-3] + (fVec44[i-1] + fVec44[i-2])));
			}
			
			// LOOP 0x292be50
			// exec code
			for (int i=0; i<count; i++) {
				fZec94[i] = (fSlow65 + (fVec45[i-3] + (fVec45[i-1] + fVec45[i-2])));
			}
			
			// LOOP 0x292f2e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec95[i] = (fSlow66 + (fVec46[i-3] + (fVec46[i-1] + fVec46[i-2])));
			}
			
			// LOOP 0x2931b10
			// exec code
			for (int i=0; i<count; i++) {
				fZec96[i] = (fSlow67 + (fVec47[i-3] + (fVec47[i-1] + fVec47[i-2])));
			}
			
			// LOOP 0x29351f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec98[i] = (fRec1[i] * fZec97[i]);
			}
			
			// LOOP 0x29390d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec100[i] = (fRec24[i] * fZec99[i]);
			}
			
			// LOOP 0x293bfd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec102[i] = (fRec22[i] * fZec101[i]);
			}
			
			// LOOP 0x2940300
			// exec code
			for (int i=0; i<count; i++) {
				fZec104[i] = (fRec20[i] * fZec103[i]);
			}
			
			// LOOP 0x2943560
			// exec code
			for (int i=0; i<count; i++) {
				fZec106[i] = (fRec18[i] * fZec105[i]);
			}
			
			// LOOP 0x2947c90
			// exec code
			for (int i=0; i<count; i++) {
				fZec108[i] = (fRec16[i] * fZec107[i]);
			}
			
			// LOOP 0x294c6e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec110[i] = (fRec14[i] * fZec109[i]);
			}
			
			// LOOP 0x294fcc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec112[i] = (fRec12[i] * fZec111[i]);
			}
			
			// LOOP 0x2954b10
			// exec code
			for (int i=0; i<count; i++) {
				fZec114[i] = (fRec10[i] * fZec113[i]);
			}
			
			// LOOP 0x2958460
			// exec code
			for (int i=0; i<count; i++) {
				fZec116[i] = (fRec8[i] * fZec115[i]);
			}
			
			// LOOP 0x295c170
			// exec code
			for (int i=0; i<count; i++) {
				fZec118[i] = (fRec6[i] * fZec117[i]);
			}
			
			// LOOP 0x295ef10
			// exec code
			for (int i=0; i<count; i++) {
				fZec120[i] = (fRec4[i] * fZec119[i]);
			}
			
			// LOOP 0x2963020
			// exec code
			for (int i=0; i<count; i++) {
				fZec122[i] = (fRec1[i] * fZec121[i]);
			}
			
			// LOOP 0x29f5b70
			// exec code
			for (int i=0; i<count; i++) {
				fZec127[i] = (fRec83[i] + (fRec86[i] + (fRec89[i] + (fRec92[i] + fZec126[i]))));
			}
			
			// LOOP 0x29f8280
			// exec code
			for (int i=0; i<count; i++) {
				fZec128[i] = (0.5f * fRec4[i]);
			}
			
			// LOOP 0x29f86c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec129[i] = (0.5f * fRec6[i]);
			}
			
			// LOOP 0x29f8b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec130[i] = (0.5f * fRec8[i]);
			}
			
			// LOOP 0x29f9000
			// exec code
			for (int i=0; i<count; i++) {
				fZec131[i] = (0.5f * fRec10[i]);
			}
			
			// LOOP 0x29f94a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec132[i] = (0.5f * fRec12[i]);
			}
			
			// LOOP 0x29f9940
			// exec code
			for (int i=0; i<count; i++) {
				fZec133[i] = (0.5f * fRec14[i]);
			}
			
			// LOOP 0x29f9de0
			// exec code
			for (int i=0; i<count; i++) {
				fZec134[i] = (0.5f * fRec16[i]);
			}
			
			// LOOP 0x29fa280
			// exec code
			for (int i=0; i<count; i++) {
				fZec135[i] = (0.5f * fRec18[i]);
			}
			
			// LOOP 0x29fa720
			// exec code
			for (int i=0; i<count; i++) {
				fZec136[i] = (0.5f * fRec20[i]);
			}
			
			// LOOP 0x29fabc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec137[i] = (0.5f * fRec22[i]);
			}
			
			// LOOP 0x29fafc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec138[i] = (0.5f * fRec26[i]);
			}
			
			// LOOP 0x29fb0a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec139[i] = (0.5f * fRec29[i]);
			}
			
			// LOOP 0x29fb280
			// exec code
			for (int i=0; i<count; i++) {
				fZec140[i] = (0.5f * fRec32[i]);
			}
			
			// LOOP 0x29fb4e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec141[i] = (0.5f * fRec35[i]);
			}
			
			// LOOP 0x29fb740
			// exec code
			for (int i=0; i<count; i++) {
				fZec142[i] = (0.5f * fRec38[i]);
			}
			
			// LOOP 0x29fb9a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec143[i] = (0.5f * fRec41[i]);
			}
			
			// LOOP 0x29fbf20
			// exec code
			for (int i=0; i<count; i++) {
				fZec144[i] = (0.5f * fRec44[i]);
			}
			
			// LOOP 0x29fc4e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec145[i] = (0.5f * fRec47[i]);
			}
			
			// LOOP 0x29fcaa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec146[i] = (0.5f * fRec50[i]);
			}
			
			// LOOP 0x29fd060
			// exec code
			for (int i=0; i<count; i++) {
				fZec147[i] = (0.5f * fRec53[i]);
			}
			
			// LOOP 0x29fd620
			// exec code
			for (int i=0; i<count; i++) {
				fZec148[i] = (0.5f * fRec56[i]);
			}
			
			// LOOP 0x29fdbe0
			// exec code
			for (int i=0; i<count; i++) {
				fZec149[i] = (0.5f * fRec59[i]);
			}
			
			// LOOP 0x29fe1a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec150[i] = (0.5f * fRec62[i]);
			}
			
			// LOOP 0x29fe760
			// exec code
			for (int i=0; i<count; i++) {
				fZec151[i] = (0.5f * fRec65[i]);
			}
			
			// LOOP 0x29fed20
			// exec code
			for (int i=0; i<count; i++) {
				fZec152[i] = (0.5f * fRec68[i]);
			}
			
			// LOOP 0x29ff2e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec153[i] = (0.5f * fRec71[i]);
			}
			
			// LOOP 0x29ff8a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec154[i] = (0.5f * fRec74[i]);
			}
			
			// LOOP 0x29ffe60
			// exec code
			for (int i=0; i<count; i++) {
				fZec155[i] = (0.5f * fRec77[i]);
			}
			
			// LOOP 0x2a00420
			// exec code
			for (int i=0; i<count; i++) {
				fZec156[i] = (0.5f * fRec80[i]);
			}
			
			// LOOP 0x2f04160
			// pre processing
			for (int i=0; i<4; i++) iRec249_tmp[i]=iRec249_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec249[i] = ((int(((fZec194[i] - (0.5f * fYec77[i-1])) < 0)))?(1 - iRec249[i-1]):iRec249[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec249_perm[i]=iRec249_tmp[count+i];
			
			// LOOP 0x2f08f00
			// pre processing
			for (int i=0; i<4; i++) iRec252_tmp[i]=iRec252_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec252[i] = ((int(((fZec195[i] - (0.5f * fYec78[i-1])) < 0)))?(1 - iRec252[i-1]):iRec252[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec252_perm[i]=iRec252_tmp[count+i];
			
			// LOOP 0x2f0d7d0
			// pre processing
			for (int i=0; i<4; i++) iRec255_tmp[i]=iRec255_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec255[i] = ((int(((fZec196[i] - (0.5f * fYec79[i-1])) < 0)))?(1 - iRec255[i-1]):iRec255[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec255_perm[i]=iRec255_tmp[count+i];
			
			// LOOP 0x2f12090
			// pre processing
			for (int i=0; i<4; i++) iRec258_tmp[i]=iRec258_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec258[i] = ((int(((fZec197[i] - (0.5f * fYec80[i-1])) < 0)))?(1 - iRec258[i-1]):iRec258[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec258_perm[i]=iRec258_tmp[count+i];
			
			// LOOP 0x2f16950
			// pre processing
			for (int i=0; i<4; i++) iRec261_tmp[i]=iRec261_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec261[i] = ((int(((fZec198[i] - (0.5f * fYec81[i-1])) < 0)))?(1 - iRec261[i-1]):iRec261[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec261_perm[i]=iRec261_tmp[count+i];
			
			// LOOP 0x2f1b560
			// pre processing
			for (int i=0; i<4; i++) iRec264_tmp[i]=iRec264_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec264[i] = ((int(((fZec199[i] - (0.5f * fYec82[i-1])) < 0)))?(1 - iRec264[i-1]):iRec264[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec264_perm[i]=iRec264_tmp[count+i];
			
			// LOOP 0x2f1fe20
			// pre processing
			for (int i=0; i<4; i++) iRec267_tmp[i]=iRec267_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec267[i] = ((int(((fZec200[i] - (0.5f * fYec83[i-1])) < 0)))?(1 - iRec267[i-1]):iRec267[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec267_perm[i]=iRec267_tmp[count+i];
			
			// LOOP 0x2f24700
			// pre processing
			for (int i=0; i<4; i++) iRec270_tmp[i]=iRec270_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec270[i] = ((int(((fZec201[i] - (0.5f * fYec84[i-1])) < 0)))?(1 - iRec270[i-1]):iRec270[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec270_perm[i]=iRec270_tmp[count+i];
			
			// LOOP 0x2f28fc0
			// pre processing
			for (int i=0; i<4; i++) iRec273_tmp[i]=iRec273_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec273[i] = ((int(((fZec202[i] - (0.5f * fYec85[i-1])) < 0)))?(1 - iRec273[i-1]):iRec273[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec273_perm[i]=iRec273_tmp[count+i];
			
			// LOOP 0x2f2d880
			// pre processing
			for (int i=0; i<4; i++) iRec276_tmp[i]=iRec276_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec276[i] = ((int(((fZec203[i] - (0.5f * fYec86[i-1])) < 0)))?(1 - iRec276[i-1]):iRec276[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec276_perm[i]=iRec276_tmp[count+i];
			
			// LOOP 0x2f32140
			// pre processing
			for (int i=0; i<4; i++) iRec279_tmp[i]=iRec279_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec279[i] = ((int(((fZec204[i] - (0.5f * fYec87[i-1])) < 0)))?(1 - iRec279[i-1]):iRec279[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec279_perm[i]=iRec279_tmp[count+i];
			
			// LOOP 0x2f369e0
			// pre processing
			for (int i=0; i<4; i++) iRec282_tmp[i]=iRec282_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec282[i] = ((int(((fZec205[i] - (0.5f * fYec88[i-1])) < 0)))?(1 - iRec282[i-1]):iRec282[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec282_perm[i]=iRec282_tmp[count+i];
			
			// SECTION : 23
			// LOOP 0x28b7610
			// exec code
			for (int i=0; i<count; i++) {
				fZec123[i] = (0.25f * (fZec122[i] + (fZec120[i] + (fZec118[i] + (fZec116[i] + (fZec114[i] + (fZec112[i] + (fZec110[i] + (fZec108[i] + (fZec106[i] + (fZec104[i] + (fZec102[i] + (fZec100[i] + (fZec98[i] + ((fRec4[i] * fZec96[i]) + ((fRec6[i] * fZec95[i]) + ((fRec8[i] * fZec94[i]) + ((fRec10[i] * fZec93[i]) + ((fRec12[i] * fZec92[i]) + ((fRec14[i] * fZec91[i]) + ((fRec16[i] * fZec90[i]) + ((fRec18[i] * fZec89[i]) + ((fRec20[i] * fZec88[i]) + ((fRec22[i] * fZec87[i]) + ((fRec24[i] * fZec86[i]) + ((fRec1[i] * fZec85[i]) + ((fRec26[i] * fZec84[i]) + ((fRec29[i] * fZec83[i]) + ((fRec32[i] * fZec82[i]) + ((fRec35[i] * fZec81[i]) + ((fRec38[i] * fZec80[i]) + ((fRec41[i] * fZec79[i]) + ((fRec44[i] * fZec78[i]) + ((fRec47[i] * fZec77[i]) + ((fRec50[i] * fZec76[i]) + ((fRec53[i] * fZec75[i]) + ((fRec56[i] * fZec74[i]) + ((fRec59[i] * fZec73[i]) + ((fRec62[i] * fZec72[i]) + ((fRec65[i] * fZec71[i]) + ((fRec68[i] * fZec70[i]) + ((fRec71[i] * fZec69[i]) + ((fRec74[i] * fZec68[i]) + ((fRec77[i] * fZec67[i]) + ((fRec80[i] * fZec66[i]) + (fSlow36 * ((fRec83[i] * fZec65[i]) + ((fRec86[i] * fZec64[i]) + ((fRec89[i] * fZec63[i]) + ((fRec92[i] * fZec62[i]) + ((fRec95[i] * fZec61[i]) + ((fRec98[i] * fZec60[i]) + ((fRec101[i] * fZec59[i]) + ((fRec104[i] * fZec58[i]) + ((fRec107[i] * fZec57[i]) + ((fRec110[i] * fZec56[i]) + ((fRec113[i] * fZec55[i]) + ((fRec116[i] * fZec54[i]) + ((fRec119[i] * fZec53[i]) + ((fRec122[i] * fZec52[i]) + ((fRec125[i] * fZec51[i]) + ((fRec128[i] * fZec50[i]) + (fRec131[i] * fZec49[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x29f48a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec157[i] = ((2 * ((((((((((((fRec24[i] + (fRec1[i] + ((((((((((((((((((fZec156[i] + fZec155[i]) + fZec154[i]) + fZec153[i]) + fZec152[i]) + fZec151[i]) + fZec150[i]) + fZec149[i]) + fZec148[i]) + fZec147[i]) + fZec146[i]) + fZec145[i]) + fZec144[i]) + fZec143[i]) + fZec142[i]) + fZec141[i]) + fZec140[i]) + fZec139[i]) + fZec138[i]))) + fZec137[i]) + fZec136[i]) + fZec135[i]) + fZec134[i]) + fZec133[i]) + fZec132[i]) + fZec131[i]) + fZec130[i]) + fZec129[i]) + fZec128[i]) + (fSlow81 * fZec127[i]))) + (fRec4[i] + (fRec6[i] + (fRec8[i] + (fRec10[i] + (fRec12[i] + (fRec14[i] + (fRec16[i] + (fRec18[i] + (fRec20[i] + (fRec1[i] + fRec22[i])))))))))));
			}
			
			// LOOP 0x2a4eb40
			// pre processing
			for (int i=0; i<4; i++) fRec157_tmp[i]=fRec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec157[i] = (fRec157[i-1] + (fConst16 * (yc20_get_sample(fZec165[i], 4, 0) - fRec157[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec157_perm[i]=fRec157_tmp[count+i];
			
			// LOOP 0x2b69e40
			// pre processing
			for (int i=0; i<4; i++) fRec161_tmp[i]=fRec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec161[i] = (fRec161[i-1] + (fConst17 * (yc20_get_sample(fZec168[i], 3, 0) - fRec161[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec161_perm[i]=fRec161_tmp[count+i];
			
			// LOOP 0x2b6f0c0
			// pre processing
			for (int i=0; i<4; i++) fRec164_tmp[i]=fRec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec164[i] = (fRec164[i-1] + (fConst17 * (yc20_get_sample(fZec169[i], 2, 0) - fRec164[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec164_perm[i]=fRec164_tmp[count+i];
			
			// LOOP 0x2b73e90
			// pre processing
			for (int i=0; i<4; i++) fRec167_tmp[i]=fRec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec167[i] = (fRec167[i-1] + (fConst17 * (yc20_get_sample(fZec170[i], 1, 0) - fRec167[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec167_perm[i]=fRec167_tmp[count+i];
			
			// LOOP 0x2b78c40
			// pre processing
			for (int i=0; i<4; i++) fRec170_tmp[i]=fRec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec170[i] = (fRec170[i-1] + (fConst17 * (yc20_get_sample(fZec171[i], 0, 0) - fRec170[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec170_perm[i]=fRec170_tmp[count+i];
			
			// LOOP 0x2c92580
			// pre processing
			for (int i=0; i<4; i++) fRec174_tmp[i]=fRec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec174[i] = (fRec174[i-1] + (fConst18 * (yc20_get_sample(fZec174[i], 11, 0) - fRec174[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec174_perm[i]=fRec174_tmp[count+i];
			
			// LOOP 0x2c97ed0
			// pre processing
			for (int i=0; i<4; i++) fRec177_tmp[i]=fRec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec177[i] = (fRec177[i-1] + (fConst18 * (yc20_get_sample(fZec175[i], 10, 0) - fRec177[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec177_perm[i]=fRec177_tmp[count+i];
			
			// LOOP 0x2c9ceb0
			// pre processing
			for (int i=0; i<4; i++) fRec180_tmp[i]=fRec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec180[i] = (fRec180[i-1] + (fConst18 * (yc20_get_sample(fZec176[i], 9, 0) - fRec180[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec180_perm[i]=fRec180_tmp[count+i];
			
			// LOOP 0x2ca1e80
			// pre processing
			for (int i=0; i<4; i++) fRec183_tmp[i]=fRec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec183[i] = (fRec183[i-1] + (fConst18 * (yc20_get_sample(fZec177[i], 8, 0) - fRec183[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec183_perm[i]=fRec183_tmp[count+i];
			
			// LOOP 0x2ca6e30
			// pre processing
			for (int i=0; i<4; i++) fRec186_tmp[i]=fRec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec186[i] = (fRec186[i-1] + (fConst20 * (yc20_get_sample(fZec178[i], 7, 0) - fRec186[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec186_perm[i]=fRec186_tmp[count+i];
			
			// LOOP 0x2da05d0
			// pre processing
			for (int i=0; i<4; i++) fRec190_tmp[i]=fRec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec190[i] = (fRec190[i-1] + (fConst20 * (yc20_get_sample(fZec184[i], 6, 0) - fRec190[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec190_perm[i]=fRec190_tmp[count+i];
			
			// LOOP 0x2da4dc0
			// pre processing
			for (int i=0; i<4; i++) fRec193_tmp[i]=fRec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec193[i] = (fRec193[i-1] + (fConst20 * (yc20_get_sample(fZec185[i], 5, 0) - fRec193[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec193_perm[i]=fRec193_tmp[count+i];
			
			// LOOP 0x2da9a00
			// pre processing
			for (int i=0; i<4; i++) fRec196_tmp[i]=fRec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec196[i] = (fRec196[i-1] + (fConst20 * (yc20_get_sample(fZec186[i], 4, 0) - fRec196[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec196_perm[i]=fRec196_tmp[count+i];
			
			// LOOP 0x2dae910
			// pre processing
			for (int i=0; i<4; i++) fRec199_tmp[i]=fRec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec199[i] = (fRec199[i-1] + (fConst21 * (yc20_get_sample(fZec187[i], 3, 0) - fRec199[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec199_perm[i]=fRec199_tmp[count+i];
			
			// LOOP 0x2db3c30
			// pre processing
			for (int i=0; i<4; i++) fRec202_tmp[i]=fRec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec202[i] = (fRec202[i-1] + (fConst21 * (yc20_get_sample(fZec188[i], 2, 0) - fRec202[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec202_perm[i]=fRec202_tmp[count+i];
			
			// LOOP 0x2db8be0
			// pre processing
			for (int i=0; i<4; i++) fRec205_tmp[i]=fRec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec205[i] = (fRec205[i-1] + (fConst21 * (yc20_get_sample(fZec189[i], 1, 0) - fRec205[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec205_perm[i]=fRec205_tmp[count+i];
			
			// LOOP 0x2dbdbd0
			// pre processing
			for (int i=0; i<4; i++) fRec208_tmp[i]=fRec208_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec208[i] = (fRec208[i-1] + (fConst21 * (yc20_get_sample(fZec190[i], 0, 0) - fRec208[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec208_perm[i]=fRec208_tmp[count+i];
			
			// LOOP 0x2ec5c00
			// pre processing
			for (int i=0; i<4; i++) fRec212_tmp[i]=fRec212_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec212[i] = (fRec212[i-1] + (fConst21 * (yc20_get_sample(fZec194[i], 11, 0) - fRec212[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec212_perm[i]=fRec212_tmp[count+i];
			
			// LOOP 0x2ecb3c0
			// pre processing
			for (int i=0; i<4; i++) fRec215_tmp[i]=fRec215_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec215[i] = (fRec215[i-1] + (fConst21 * (yc20_get_sample(fZec195[i], 10, 0) - fRec215[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec215_perm[i]=fRec215_tmp[count+i];
			
			// LOOP 0x2ed0580
			// pre processing
			for (int i=0; i<4; i++) fRec218_tmp[i]=fRec218_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec218[i] = (fRec218[i-1] + (fConst21 * (yc20_get_sample(fZec196[i], 9, 0) - fRec218[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec218_perm[i]=fRec218_tmp[count+i];
			
			// LOOP 0x2ed5730
			// pre processing
			for (int i=0; i<4; i++) fRec221_tmp[i]=fRec221_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec221[i] = (fRec221[i-1] + (fConst21 * (yc20_get_sample(fZec197[i], 8, 0) - fRec221[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec221_perm[i]=fRec221_tmp[count+i];
			
			// LOOP 0x2eda8e0
			// pre processing
			for (int i=0; i<4; i++) fRec224_tmp[i]=fRec224_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec224[i] = (fRec224[i-1] + (fConst23 * (yc20_get_sample(fZec198[i], 7, 0) - fRec224[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec224_perm[i]=fRec224_tmp[count+i];
			
			// LOOP 0x2edfda0
			// pre processing
			for (int i=0; i<4; i++) fRec227_tmp[i]=fRec227_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec227[i] = (fRec227[i-1] + (fConst23 * (yc20_get_sample(fZec199[i], 6, 0) - fRec227[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec227_perm[i]=fRec227_tmp[count+i];
			
			// LOOP 0x2ee4f80
			// pre processing
			for (int i=0; i<4; i++) fRec230_tmp[i]=fRec230_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec230[i] = (fRec230[i-1] + (fConst23 * (yc20_get_sample(fZec200[i], 5, 0) - fRec230[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec230_perm[i]=fRec230_tmp[count+i];
			
			// LOOP 0x2eea150
			// pre processing
			for (int i=0; i<4; i++) fRec233_tmp[i]=fRec233_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec233[i] = (fRec233[i-1] + (fConst23 * (yc20_get_sample(fZec201[i], 4, 0) - fRec233[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec233_perm[i]=fRec233_tmp[count+i];
			
			// LOOP 0x2eef300
			// pre processing
			for (int i=0; i<4; i++) fRec236_tmp[i]=fRec236_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec236[i] = (fRec236[i-1] + (fConst24 * (yc20_get_sample(fZec202[i], 3, 0) - fRec236[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec236_perm[i]=fRec236_tmp[count+i];
			
			// LOOP 0x2ef4800
			// pre processing
			for (int i=0; i<4; i++) fRec239_tmp[i]=fRec239_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec239[i] = (fRec239[i-1] + (fConst24 * (yc20_get_sample(fZec203[i], 2, 0) - fRec239[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec239_perm[i]=fRec239_tmp[count+i];
			
			// LOOP 0x2ef99b0
			// pre processing
			for (int i=0; i<4; i++) fRec242_tmp[i]=fRec242_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec242[i] = (fRec242[i-1] + (fConst24 * (yc20_get_sample(fZec204[i], 1, 0) - fRec242[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec242_perm[i]=fRec242_tmp[count+i];
			
			// LOOP 0x2efeb60
			// pre processing
			for (int i=0; i<4; i++) fRec245_tmp[i]=fRec245_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec245[i] = (fRec245[i-1] + (fConst24 * (yc20_get_sample(fZec205[i], 0, 0) - fRec245[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec245_perm[i]=fRec245_tmp[count+i];
			
			// LOOP 0x2f03d20
			// pre processing
			for (int i=0; i<4; i++) fRec248_tmp[i]=fRec248_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec248[i] = (fRec248[i-1] + (fConst24 * (yc20_get_sample((0.5f * (iRec249[i] + fZec194[i])), 11, 0) - fRec248[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec248_perm[i]=fRec248_tmp[count+i];
			
			// LOOP 0x2f08ac0
			// pre processing
			for (int i=0; i<4; i++) fRec251_tmp[i]=fRec251_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec251[i] = (fRec251[i-1] + (fConst24 * (yc20_get_sample((0.5f * (iRec252[i] + fZec195[i])), 10, 0) - fRec251[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec251_perm[i]=fRec251_tmp[count+i];
			
			// LOOP 0x2f0d390
			// pre processing
			for (int i=0; i<4; i++) fRec254_tmp[i]=fRec254_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec254[i] = (fRec254[i-1] + (fConst24 * (yc20_get_sample((0.5f * (iRec255[i] + fZec196[i])), 9, 0) - fRec254[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec254_perm[i]=fRec254_tmp[count+i];
			
			// LOOP 0x2f11c50
			// pre processing
			for (int i=0; i<4; i++) fRec257_tmp[i]=fRec257_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec257[i] = (fRec257[i-1] + (fConst24 * (yc20_get_sample((0.5f * (iRec258[i] + fZec197[i])), 8, 0) - fRec257[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec257_perm[i]=fRec257_tmp[count+i];
			
			// LOOP 0x2f16510
			// pre processing
			for (int i=0; i<4; i++) fRec260_tmp[i]=fRec260_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec260[i] = (fRec260[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec261[i] + fZec198[i])), 7, 0) - fRec260[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec260_perm[i]=fRec260_tmp[count+i];
			
			// LOOP 0x2f1b120
			// pre processing
			for (int i=0; i<4; i++) fRec263_tmp[i]=fRec263_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec263[i] = (fRec263[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec264[i] + fZec199[i])), 6, 0) - fRec263[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec263_perm[i]=fRec263_tmp[count+i];
			
			// LOOP 0x2f1f9e0
			// pre processing
			for (int i=0; i<4; i++) fRec266_tmp[i]=fRec266_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec266[i] = (fRec266[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec267[i] + fZec200[i])), 5, 0) - fRec266[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec266_perm[i]=fRec266_tmp[count+i];
			
			// LOOP 0x2f242c0
			// pre processing
			for (int i=0; i<4; i++) fRec269_tmp[i]=fRec269_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec269[i] = (fRec269[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec270[i] + fZec201[i])), 4, 0) - fRec269[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec269_perm[i]=fRec269_tmp[count+i];
			
			// LOOP 0x2f28b80
			// pre processing
			for (int i=0; i<4; i++) fRec272_tmp[i]=fRec272_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec272[i] = (fRec272[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec273[i] + fZec202[i])), 3, 0) - fRec272[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec272_perm[i]=fRec272_tmp[count+i];
			
			// LOOP 0x2f2d440
			// pre processing
			for (int i=0; i<4; i++) fRec275_tmp[i]=fRec275_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec275[i] = (fRec275[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec276[i] + fZec203[i])), 2, 0) - fRec275[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec275_perm[i]=fRec275_tmp[count+i];
			
			// LOOP 0x2f31d00
			// pre processing
			for (int i=0; i<4; i++) fRec278_tmp[i]=fRec278_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec278[i] = (fRec278[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec279[i] + fZec204[i])), 1, 0) - fRec278[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec278_perm[i]=fRec278_tmp[count+i];
			
			// LOOP 0x2f365a0
			// pre processing
			for (int i=0; i<4; i++) fRec281_tmp[i]=fRec281_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec281[i] = (fRec281[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec282[i] + fZec205[i])), 0, 0) - fRec281[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec281_perm[i]=fRec281_tmp[count+i];
			
			// SECTION : 24
			// LOOP 0x28b7530
			// pre processing
			for (int i=0; i<4; i++) fYec48_tmp[i]=fYec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec48[i] = (fZec157[i] - fZec123[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec48_perm[i]=fYec48_tmp[count+i];
			
			// LOOP 0x2a2cc90
			// pre processing
			for (int i=0; i<4; i++) fRec136_tmp[i]=fRec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec136[i] = (fRec136[i-1] + (fConst15 * (yc20_get_sample(fZec158[i], 11, 0) - fRec136[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec136_perm[i]=fRec136_tmp[count+i];
			
			// LOOP 0x2a31790
			// pre processing
			for (int i=0; i<4; i++) fRec139_tmp[i]=fRec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec139[i] = (fRec139[i-1] + (fConst15 * (yc20_get_sample(fZec159[i], 10, 0) - fRec139[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec139_perm[i]=fRec139_tmp[count+i];
			
			// LOOP 0x2a36300
			// pre processing
			for (int i=0; i<4; i++) fRec142_tmp[i]=fRec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec142[i] = (fRec142[i-1] + (fConst15 * (yc20_get_sample(fZec160[i], 9, 0) - fRec142[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec142_perm[i]=fRec142_tmp[count+i];
			
			// LOOP 0x2a3b0d0
			// pre processing
			for (int i=0; i<4; i++) fRec145_tmp[i]=fRec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec145[i] = (fRec145[i-1] + (fConst15 * (yc20_get_sample(fZec161[i], 8, 0) - fRec145[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec145_perm[i]=fRec145_tmp[count+i];
			
			// LOOP 0x2a3fea0
			// pre processing
			for (int i=0; i<4; i++) fRec148_tmp[i]=fRec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec148[i] = (fRec148[i-1] + (fConst16 * (yc20_get_sample(fZec162[i], 7, 0) - fRec148[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec148_perm[i]=fRec148_tmp[count+i];
			
			// LOOP 0x2a44fc0
			// pre processing
			for (int i=0; i<4; i++) fRec151_tmp[i]=fRec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec151[i] = (fRec151[i-1] + (fConst16 * (yc20_get_sample(fZec163[i], 6, 0) - fRec151[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec151_perm[i]=fRec151_tmp[count+i];
			
			// LOOP 0x2a49d90
			// pre processing
			for (int i=0; i<4; i++) fRec154_tmp[i]=fRec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec154[i] = (fRec154[i-1] + (fConst16 * (yc20_get_sample(fZec164[i], 5, 0) - fRec154[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec154_perm[i]=fRec154_tmp[count+i];
			
			// LOOP 0x2a4e740
			// pre processing
			for (int i=0; i<4; i++) fRec156_tmp[i]=fRec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec156[i] = (fConst4 * ((fRec157[i] - fRec157[i-1]) + fRec156[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec156_perm[i]=fRec156_tmp[count+i];
			
			// LOOP 0x2b699e0
			// pre processing
			for (int i=0; i<4; i++) fRec160_tmp[i]=fRec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec160[i] = (fConst4 * ((fRec161[i] - fRec161[i-1]) + fRec160[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec160_perm[i]=fRec160_tmp[count+i];
			
			// LOOP 0x2b6ecc0
			// pre processing
			for (int i=0; i<4; i++) fRec163_tmp[i]=fRec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec163[i] = (fConst4 * ((fRec164[i] - fRec164[i-1]) + fRec163[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec163_perm[i]=fRec163_tmp[count+i];
			
			// LOOP 0x2b73a90
			// pre processing
			for (int i=0; i<4; i++) fRec166_tmp[i]=fRec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec166[i] = (fConst4 * ((fRec167[i] - fRec167[i-1]) + fRec166[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec166_perm[i]=fRec166_tmp[count+i];
			
			// LOOP 0x2b78840
			// pre processing
			for (int i=0; i<4; i++) fRec169_tmp[i]=fRec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec169[i] = (fConst4 * ((fRec170[i] - fRec170[i-1]) + fRec169[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec169_perm[i]=fRec169_tmp[count+i];
			
			// LOOP 0x2c92120
			// pre processing
			for (int i=0; i<4; i++) fRec173_tmp[i]=fRec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec173[i] = (fConst19 * ((fRec174[i] - fRec174[i-1]) + fRec173[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec173_perm[i]=fRec173_tmp[count+i];
			
			// LOOP 0x2c97ad0
			// pre processing
			for (int i=0; i<4; i++) fRec176_tmp[i]=fRec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec176[i] = (fConst19 * ((fRec177[i] - fRec177[i-1]) + fRec176[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec176_perm[i]=fRec176_tmp[count+i];
			
			// LOOP 0x2c9cab0
			// pre processing
			for (int i=0; i<4; i++) fRec179_tmp[i]=fRec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec179[i] = (fConst19 * ((fRec180[i] - fRec180[i-1]) + fRec179[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec179_perm[i]=fRec179_tmp[count+i];
			
			// LOOP 0x2ca1a80
			// pre processing
			for (int i=0; i<4; i++) fRec182_tmp[i]=fRec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec182[i] = (fConst19 * ((fRec183[i] - fRec183[i-1]) + fRec182[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec182_perm[i]=fRec182_tmp[count+i];
			
			// LOOP 0x2ca6a30
			// pre processing
			for (int i=0; i<4; i++) fRec185_tmp[i]=fRec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec185[i] = (fConst19 * ((fRec186[i] - fRec186[i-1]) + fRec185[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec185_perm[i]=fRec185_tmp[count+i];
			
			// LOOP 0x2d84fd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec181[i] = (fRec59[i] + (fRec62[i] + (fRec65[i] + (fRec68[i] + (fRec71[i] + (fRec74[i] + (fRec77[i] + (fRec80[i] + fZec127[i]))))))));
			}
			
			// LOOP 0x2da01d0
			// pre processing
			for (int i=0; i<4; i++) fRec189_tmp[i]=fRec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec189[i] = (fConst19 * ((fRec190[i] - fRec190[i-1]) + fRec189[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec189_perm[i]=fRec189_tmp[count+i];
			
			// LOOP 0x2da49c0
			// pre processing
			for (int i=0; i<4; i++) fRec192_tmp[i]=fRec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec192[i] = (fConst19 * ((fRec193[i] - fRec193[i-1]) + fRec192[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec192_perm[i]=fRec192_tmp[count+i];
			
			// LOOP 0x2da9600
			// pre processing
			for (int i=0; i<4; i++) fRec195_tmp[i]=fRec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec195[i] = (fConst19 * ((fRec196[i] - fRec196[i-1]) + fRec195[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec195_perm[i]=fRec195_tmp[count+i];
			
			// LOOP 0x2dae510
			// pre processing
			for (int i=0; i<4; i++) fRec198_tmp[i]=fRec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec198[i] = (fConst19 * ((fRec199[i] - fRec199[i-1]) + fRec198[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec198_perm[i]=fRec198_tmp[count+i];
			
			// LOOP 0x2db3830
			// pre processing
			for (int i=0; i<4; i++) fRec201_tmp[i]=fRec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec201[i] = (fConst19 * ((fRec202[i] - fRec202[i-1]) + fRec201[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec201_perm[i]=fRec201_tmp[count+i];
			
			// LOOP 0x2db87e0
			// pre processing
			for (int i=0; i<4; i++) fRec204_tmp[i]=fRec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec204[i] = (fConst19 * ((fRec205[i] - fRec205[i-1]) + fRec204[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec204_perm[i]=fRec204_tmp[count+i];
			
			// LOOP 0x2dbd7d0
			// pre processing
			for (int i=0; i<4; i++) fRec207_tmp[i]=fRec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec207[i] = (fConst19 * ((fRec208[i] - fRec208[i-1]) + fRec207[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec207_perm[i]=fRec207_tmp[count+i];
			
			// LOOP 0x2ec57a0
			// pre processing
			for (int i=0; i<4; i++) fRec211_tmp[i]=fRec211_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec211[i] = (fConst22 * ((fRec212[i] - fRec212[i-1]) + fRec211[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec211_perm[i]=fRec211_tmp[count+i];
			
			// LOOP 0x2ecafc0
			// pre processing
			for (int i=0; i<4; i++) fRec214_tmp[i]=fRec214_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec214[i] = (fConst22 * ((fRec215[i] - fRec215[i-1]) + fRec214[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec214_perm[i]=fRec214_tmp[count+i];
			
			// LOOP 0x2ed0180
			// pre processing
			for (int i=0; i<4; i++) fRec217_tmp[i]=fRec217_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec217[i] = (fConst22 * ((fRec218[i] - fRec218[i-1]) + fRec217[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec217_perm[i]=fRec217_tmp[count+i];
			
			// LOOP 0x2ed5330
			// pre processing
			for (int i=0; i<4; i++) fRec220_tmp[i]=fRec220_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec220[i] = (fConst22 * ((fRec221[i] - fRec221[i-1]) + fRec220[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec220_perm[i]=fRec220_tmp[count+i];
			
			// LOOP 0x2eda4e0
			// pre processing
			for (int i=0; i<4; i++) fRec223_tmp[i]=fRec223_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec223[i] = (fConst22 * ((fRec224[i] - fRec224[i-1]) + fRec223[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec223_perm[i]=fRec223_tmp[count+i];
			
			// LOOP 0x2edf9a0
			// pre processing
			for (int i=0; i<4; i++) fRec226_tmp[i]=fRec226_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec226[i] = (fConst22 * ((fRec227[i] - fRec227[i-1]) + fRec226[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec226_perm[i]=fRec226_tmp[count+i];
			
			// LOOP 0x2ee4b80
			// pre processing
			for (int i=0; i<4; i++) fRec229_tmp[i]=fRec229_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec229[i] = (fConst22 * ((fRec230[i] - fRec230[i-1]) + fRec229[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec229_perm[i]=fRec229_tmp[count+i];
			
			// LOOP 0x2ee9d50
			// pre processing
			for (int i=0; i<4; i++) fRec232_tmp[i]=fRec232_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec232[i] = (fConst22 * ((fRec233[i] - fRec233[i-1]) + fRec232[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec232_perm[i]=fRec232_tmp[count+i];
			
			// LOOP 0x2eeef00
			// pre processing
			for (int i=0; i<4; i++) fRec235_tmp[i]=fRec235_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec235[i] = (fConst22 * ((fRec236[i] - fRec236[i-1]) + fRec235[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec235_perm[i]=fRec235_tmp[count+i];
			
			// LOOP 0x2ef4400
			// pre processing
			for (int i=0; i<4; i++) fRec238_tmp[i]=fRec238_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec238[i] = (fConst22 * ((fRec239[i] - fRec239[i-1]) + fRec238[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec238_perm[i]=fRec238_tmp[count+i];
			
			// LOOP 0x2ef95b0
			// pre processing
			for (int i=0; i<4; i++) fRec241_tmp[i]=fRec241_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec241[i] = (fConst22 * ((fRec242[i] - fRec242[i-1]) + fRec241[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec241_perm[i]=fRec241_tmp[count+i];
			
			// LOOP 0x2efe760
			// pre processing
			for (int i=0; i<4; i++) fRec244_tmp[i]=fRec244_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec244[i] = (fConst22 * ((fRec245[i] - fRec245[i-1]) + fRec244[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec244_perm[i]=fRec244_tmp[count+i];
			
			// LOOP 0x2f03920
			// pre processing
			for (int i=0; i<4; i++) fRec247_tmp[i]=fRec247_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec247[i] = (fConst25 * ((fRec248[i] - fRec248[i-1]) + fRec247[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec247_perm[i]=fRec247_tmp[count+i];
			
			// LOOP 0x2f086c0
			// pre processing
			for (int i=0; i<4; i++) fRec250_tmp[i]=fRec250_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec250[i] = (fConst25 * ((fRec251[i] - fRec251[i-1]) + fRec250[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec250_perm[i]=fRec250_tmp[count+i];
			
			// LOOP 0x2f0cf90
			// pre processing
			for (int i=0; i<4; i++) fRec253_tmp[i]=fRec253_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec253[i] = (fConst25 * ((fRec254[i] - fRec254[i-1]) + fRec253[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec253_perm[i]=fRec253_tmp[count+i];
			
			// LOOP 0x2f11850
			// pre processing
			for (int i=0; i<4; i++) fRec256_tmp[i]=fRec256_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec256[i] = (fConst25 * ((fRec257[i] - fRec257[i-1]) + fRec256[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec256_perm[i]=fRec256_tmp[count+i];
			
			// LOOP 0x2f16110
			// pre processing
			for (int i=0; i<4; i++) fRec259_tmp[i]=fRec259_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec259[i] = (fConst25 * ((fRec260[i] - fRec260[i-1]) + fRec259[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec259_perm[i]=fRec259_tmp[count+i];
			
			// LOOP 0x2f1ad20
			// pre processing
			for (int i=0; i<4; i++) fRec262_tmp[i]=fRec262_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec262[i] = (fConst25 * ((fRec263[i] - fRec263[i-1]) + fRec262[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec262_perm[i]=fRec262_tmp[count+i];
			
			// LOOP 0x2f1f5e0
			// pre processing
			for (int i=0; i<4; i++) fRec265_tmp[i]=fRec265_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec265[i] = (fConst25 * ((fRec266[i] - fRec266[i-1]) + fRec265[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec265_perm[i]=fRec265_tmp[count+i];
			
			// LOOP 0x2f23ec0
			// pre processing
			for (int i=0; i<4; i++) fRec268_tmp[i]=fRec268_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec268[i] = (fConst25 * ((fRec269[i] - fRec269[i-1]) + fRec268[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec268_perm[i]=fRec268_tmp[count+i];
			
			// LOOP 0x2f28780
			// pre processing
			for (int i=0; i<4; i++) fRec271_tmp[i]=fRec271_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec271[i] = (fConst25 * ((fRec272[i] - fRec272[i-1]) + fRec271[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec271_perm[i]=fRec271_tmp[count+i];
			
			// LOOP 0x2f2d040
			// pre processing
			for (int i=0; i<4; i++) fRec274_tmp[i]=fRec274_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec274[i] = (fConst25 * ((fRec275[i] - fRec275[i-1]) + fRec274[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec274_perm[i]=fRec274_tmp[count+i];
			
			// LOOP 0x2f31900
			// pre processing
			for (int i=0; i<4; i++) fRec277_tmp[i]=fRec277_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec277[i] = (fConst25 * ((fRec278[i] - fRec278[i-1]) + fRec277[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec277_perm[i]=fRec277_tmp[count+i];
			
			// LOOP 0x2f361a0
			// pre processing
			for (int i=0; i<4; i++) fRec280_tmp[i]=fRec280_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec280[i] = (fConst25 * ((fRec281[i] - fRec281[i-1]) + fRec280[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec280_perm[i]=fRec280_tmp[count+i];
			
			// SECTION : 25
			// LOOP 0x28b7050
			// pre processing
			for (int i=0; i<4; i++) fRec134_tmp[i]=fRec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec134[i] = (fConst14 * ((fZec157[i] - (fZec123[i] + fYec48[i-1])) + fRec134[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec134_perm[i]=fRec134_tmp[count+i];
			
			// LOOP 0x2a2c890
			// pre processing
			for (int i=0; i<4; i++) fRec135_tmp[i]=fRec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec135[i] = (fConst4 * ((fRec136[i] - fRec136[i-1]) + fRec135[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec135_perm[i]=fRec135_tmp[count+i];
			
			// LOOP 0x2a31390
			// pre processing
			for (int i=0; i<4; i++) fRec138_tmp[i]=fRec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec138[i] = (fConst4 * ((fRec139[i] - fRec139[i-1]) + fRec138[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec138_perm[i]=fRec138_tmp[count+i];
			
			// LOOP 0x2a35f00
			// pre processing
			for (int i=0; i<4; i++) fRec141_tmp[i]=fRec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec141[i] = (fConst4 * ((fRec142[i] - fRec142[i-1]) + fRec141[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec141_perm[i]=fRec141_tmp[count+i];
			
			// LOOP 0x2a3acd0
			// pre processing
			for (int i=0; i<4; i++) fRec144_tmp[i]=fRec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec144[i] = (fConst4 * ((fRec145[i] - fRec145[i-1]) + fRec144[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec144_perm[i]=fRec144_tmp[count+i];
			
			// LOOP 0x2a3faa0
			// pre processing
			for (int i=0; i<4; i++) fRec147_tmp[i]=fRec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec147[i] = (fConst4 * ((fRec148[i] - fRec148[i-1]) + fRec147[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec147_perm[i]=fRec147_tmp[count+i];
			
			// LOOP 0x2a44bc0
			// pre processing
			for (int i=0; i<4; i++) fRec150_tmp[i]=fRec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec150[i] = (fConst4 * ((fRec151[i] - fRec151[i-1]) + fRec150[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec150_perm[i]=fRec150_tmp[count+i];
			
			// LOOP 0x2a49990
			// pre processing
			for (int i=0; i<4; i++) fRec153_tmp[i]=fRec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec153[i] = (fConst4 * ((fRec154[i] - fRec154[i-1]) + fRec153[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec153_perm[i]=fRec153_tmp[count+i];
			
			// LOOP 0x2d84ef0
			// exec code
			for (int i=0; i<count; i++) {
				fZec182[i] = (fRec1[i] + (fRec26[i] + (fRec29[i] + (fRec32[i] + (fRec35[i] + (fRec38[i] + (fRec41[i] + (fRec44[i] + (fRec47[i] + (fRec50[i] + (fRec53[i] + (fRec56[i] + fZec181[i]))))))))))));
			}
			
			// LOOP 0x2dc2e40
			// exec code
			for (int i=0; i<count; i++) {
				fZec191[i] = ((fRec156[i] * fZec65[i]) + ((fRec160[i] * fZec64[i]) + ((fRec163[i] * fZec63[i]) + ((fRec166[i] * fZec62[i]) + ((fRec169[i] * fZec61[i]) + ((fRec173[i] * fZec60[i]) + ((fRec176[i] * fZec59[i]) + ((fRec179[i] * fZec58[i]) + ((fRec182[i] * fZec57[i]) + ((fRec185[i] * fZec56[i]) + ((fRec189[i] * fZec55[i]) + ((fRec192[i] * fZec54[i]) + ((fRec195[i] * fZec53[i]) + ((fRec198[i] * fZec52[i]) + ((fRec201[i] * fZec51[i]) + ((fRec204[i] * fZec50[i]) + (fRec207[i] * fZec49[i])))))))))))))))));
			}
			
			// LOOP 0x2f3b100
			// exec code
			for (int i=0; i<count; i++) {
				fZec206[i] = ((fRec232[i] * fZec65[i]) + ((fRec235[i] * fZec64[i]) + ((fRec238[i] * fZec63[i]) + ((fRec241[i] * fZec62[i]) + ((fRec244[i] * fZec61[i]) + ((fRec247[i] * fZec60[i]) + ((fRec250[i] * fZec59[i]) + ((fRec253[i] * fZec58[i]) + ((fRec256[i] * fZec57[i]) + ((fRec259[i] * fZec56[i]) + ((fRec262[i] * fZec55[i]) + ((fRec265[i] * fZec54[i]) + ((fRec268[i] * fZec53[i]) + ((fRec271[i] * fZec52[i]) + ((fRec274[i] * fZec51[i]) + ((fRec277[i] * fZec50[i]) + (fRec280[i] * fZec49[i])))))))))))))))));
			}
			
			// LOOP 0x3085340
			// exec code
			for (int i=0; i<count; i++) {
				fZec209[i] = ((fRec195[i] * fZec65[i]) + ((fRec198[i] * fZec64[i]) + ((fRec201[i] * fZec63[i]) + ((fRec204[i] * fZec62[i]) + ((fRec207[i] * fZec61[i]) + ((fRec211[i] * fZec60[i]) + ((fRec214[i] * fZec59[i]) + ((fRec217[i] * fZec58[i]) + ((fRec220[i] * fZec57[i]) + ((fRec223[i] * fZec56[i]) + ((fRec226[i] * fZec55[i]) + ((fRec229[i] * fZec54[i]) + ((fRec232[i] * fZec53[i]) + ((fRec235[i] * fZec52[i]) + ((fRec238[i] * fZec51[i]) + ((fRec241[i] * fZec50[i]) + (fRec244[i] * fZec49[i])))))))))))))))));
			}
			
			// SECTION : 26
			// LOOP 0x2b7dbd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec172[i] = (0.25f * (fZec122[i] + (fZec120[i] + (fZec118[i] + (fZec116[i] + (fZec114[i] + (fZec112[i] + (fZec110[i] + (fZec108[i] + (fZec106[i] + (fZec104[i] + (fZec102[i] + (fZec100[i] + (fZec98[i] + ((fRec26[i] * fZec96[i]) + ((fRec29[i] * fZec95[i]) + ((fRec32[i] * fZec94[i]) + ((fRec35[i] * fZec93[i]) + ((fRec38[i] * fZec92[i]) + ((fRec41[i] * fZec91[i]) + ((fRec44[i] * fZec90[i]) + ((fRec47[i] * fZec89[i]) + ((fRec50[i] * fZec88[i]) + ((fRec53[i] * fZec87[i]) + ((fRec56[i] * fZec86[i]) + ((fRec59[i] * fZec85[i]) + ((fRec62[i] * fZec84[i]) + ((fRec65[i] * fZec83[i]) + ((fRec68[i] * fZec82[i]) + ((fRec71[i] * fZec81[i]) + ((fRec74[i] * fZec80[i]) + ((fRec77[i] * fZec79[i]) + ((fRec80[i] * fZec78[i]) + ((fRec83[i] * fZec77[i]) + ((fRec86[i] * fZec76[i]) + ((fRec89[i] * fZec75[i]) + ((fRec92[i] * fZec74[i]) + ((fRec95[i] * fZec73[i]) + ((fRec98[i] * fZec72[i]) + ((fRec101[i] * fZec71[i]) + ((fRec104[i] * fZec70[i]) + ((fRec107[i] * fZec69[i]) + ((fRec110[i] * fZec68[i]) + ((fRec113[i] * fZec67[i]) + ((fRec116[i] * fZec66[i]) + (fSlow36 * ((fRec119[i] * fZec65[i]) + ((fRec122[i] * fZec64[i]) + ((fRec125[i] * fZec63[i]) + ((fRec128[i] * fZec62[i]) + ((fRec131[i] * fZec61[i]) + ((fRec135[i] * fZec60[i]) + ((fRec138[i] * fZec59[i]) + ((fRec141[i] * fZec58[i]) + ((fRec144[i] * fZec57[i]) + ((fRec147[i] * fZec56[i]) + ((fRec150[i] * fZec55[i]) + ((fRec153[i] * fZec54[i]) + ((fRec156[i] * fZec53[i]) + ((fRec160[i] * fZec52[i]) + ((fRec163[i] * fZec51[i]) + ((fRec166[i] * fZec50[i]) + (fRec169[i] * fZec49[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x2c5d5b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec173[i] = ((fSlow36 * (fRec160[i] + (fRec163[i] + (fRec166[i] + (fRec169[i] + (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec153[i] + (fRec156[i] + fZec124[i]))))))))))))) + (fRec4[i] + (fRec6[i] + (fRec8[i] + (fRec10[i] + (fRec12[i] + (fRec14[i] + (fRec16[i] + (fRec18[i] + (fRec20[i] + (fRec22[i] + (fRec24[i] + ((2 * fRec1[i]) + (fRec26[i] + (fRec29[i] + (fRec32[i] + (fRec35[i] + (fRec38[i] + (fRec41[i] + (fRec44[i] + (fRec47[i] + (fRec50[i] + (fRec53[i] + (fRec56[i] + (fRec59[i] + (fRec62[i] + (fRec65[i] + (fRec68[i] + (fRec71[i] + (fRec74[i] + (fRec77[i] + (fRec80[i] + (fRec83[i] + (fRec86[i] + (fRec89[i] + (fRec92[i] + (fRec95[i] + (fRec98[i] + (fRec101[i] + (fRec104[i] + (fRec107[i] + (fRec110[i] + (fRec116[i] + fRec113[i])))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x2dc2d60
			// exec code
			for (int i=0; i<count; i++) {
				fZec192[i] = (0.25f * (fZec122[i] + ((fRec26[i] * fZec119[i]) + ((fRec29[i] * fZec117[i]) + ((fRec32[i] * fZec115[i]) + ((fRec35[i] * fZec113[i]) + ((fRec38[i] * fZec111[i]) + ((fRec41[i] * fZec109[i]) + ((fRec44[i] * fZec107[i]) + ((fRec47[i] * fZec105[i]) + ((fRec50[i] * fZec103[i]) + ((fRec53[i] * fZec101[i]) + ((fRec56[i] * fZec99[i]) + ((fRec59[i] * fZec97[i]) + ((fRec62[i] * fZec96[i]) + ((fRec65[i] * fZec95[i]) + ((fRec68[i] * fZec94[i]) + ((fRec71[i] * fZec93[i]) + ((fRec74[i] * fZec92[i]) + ((fRec77[i] * fZec91[i]) + ((fRec80[i] * fZec90[i]) + ((fRec83[i] * fZec89[i]) + ((fRec86[i] * fZec88[i]) + ((fRec89[i] * fZec87[i]) + ((fRec92[i] * fZec86[i]) + ((fRec95[i] * fZec85[i]) + ((fRec98[i] * fZec84[i]) + ((fRec101[i] * fZec83[i]) + ((fRec104[i] * fZec82[i]) + ((fRec107[i] * fZec81[i]) + ((fRec110[i] * fZec80[i]) + ((fRec113[i] * fZec79[i]) + ((fRec116[i] * fZec78[i]) + ((fRec119[i] * fZec77[i]) + ((fRec122[i] * fZec76[i]) + ((fRec125[i] * fZec75[i]) + ((fRec128[i] * fZec74[i]) + ((fRec131[i] * fZec73[i]) + ((fRec135[i] * fZec72[i]) + ((fRec138[i] * fZec71[i]) + ((fRec141[i] * fZec70[i]) + ((fRec144[i] * fZec69[i]) + ((fRec147[i] * fZec68[i]) + ((fRec150[i] * fZec67[i]) + ((fRec153[i] * fZec66[i]) + (fSlow36 * fZec191[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x2e80300
			// exec code
			for (int i=0; i<count; i++) {
				fZec193[i] = ((fSlow36 * (fRec189[i] + (fRec192[i] + (fRec195[i] + (fRec198[i] + (fRec201[i] + (fRec204[i] + (fRec207[i] + (fRec173[i] + (fRec176[i] + (fRec179[i] + (fRec182[i] + (fRec185[i] + (fRec160[i] + (fRec163[i] + (fRec166[i] + (fRec156[i] + fRec169[i]))))))))))))))))) + (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec153[i] + fZec182[i]))))))));
			}
			
			// LOOP 0x2f3b020
			// exec code
			for (int i=0; i<count; i++) {
				fZec207[i] = (0.41975f * ((fRec95[i] * fZec121[i]) + ((fRec98[i] * fZec119[i]) + ((fRec101[i] * fZec117[i]) + ((fRec104[i] * fZec115[i]) + ((fRec107[i] * fZec113[i]) + ((fRec110[i] * fZec111[i]) + ((fRec113[i] * fZec109[i]) + ((fRec116[i] * fZec107[i]) + ((fRec119[i] * fZec105[i]) + ((fRec122[i] * fZec103[i]) + ((fRec125[i] * fZec101[i]) + ((fRec128[i] * fZec99[i]) + ((fRec131[i] * fZec97[i]) + ((fRec135[i] * fZec96[i]) + ((fRec138[i] * fZec95[i]) + ((fRec141[i] * fZec94[i]) + ((fRec144[i] * fZec93[i]) + ((fRec147[i] * fZec92[i]) + ((fRec150[i] * fZec91[i]) + ((fRec153[i] * fZec90[i]) + ((fRec156[i] * fZec89[i]) + ((fRec160[i] * fZec88[i]) + ((fRec163[i] * fZec87[i]) + ((fRec166[i] * fZec86[i]) + ((fRec169[i] * fZec85[i]) + ((fRec173[i] * fZec84[i]) + ((fRec176[i] * fZec83[i]) + ((fRec179[i] * fZec82[i]) + ((fRec182[i] * fZec81[i]) + ((fRec185[i] * fZec80[i]) + ((fRec189[i] * fZec79[i]) + ((fRec192[i] * fZec78[i]) + ((fRec195[i] * fZec77[i]) + ((fRec198[i] * fZec76[i]) + ((fRec201[i] * fZec75[i]) + ((fRec204[i] * fZec74[i]) + ((fRec207[i] * fZec73[i]) + ((fRec211[i] * fZec72[i]) + ((fRec214[i] * fZec71[i]) + ((fRec217[i] * fZec70[i]) + ((fRec220[i] * fZec69[i]) + ((fRec223[i] * fZec68[i]) + ((fRec226[i] * fZec67[i]) + ((fRec229[i] * fZec66[i]) + (fSlow36 * fZec206[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x2fec880
			// exec code
			for (int i=0; i<count; i++) {
				fZec208[i] = (1.679f * ((fSlow36 * (fRec247[i] + (fRec250[i] + (fRec253[i] + (fRec256[i] + (fRec259[i] + (fRec262[i] + (fRec265[i] + (fRec268[i] + (fRec271[i] + (fRec274[i] + (fRec277[i] + (fRec280[i] + (fRec232[i] + (fRec235[i] + (fRec238[i] + (fRec244[i] + fRec241[i]))))))))))))))))) + (fRec211[i] + (fRec214[i] + (fRec217[i] + (fRec220[i] + (fRec223[i] + (fRec226[i] + (fRec229[i] + (fRec189[i] + (fRec192[i] + (fRec195[i] + (fRec198[i] + (fRec201[i] + (fRec204[i] + (fRec207[i] + (fRec173[i] + (fRec176[i] + (fRec179[i] + (fRec182[i] + (fRec185[i] + (fRec160[i] + (fRec163[i] + (fRec166[i] + (fRec169[i] + (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec153[i] + (fRec156[i] + fZec126[i])))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3085260
			// exec code
			for (int i=0; i<count; i++) {
				fZec210[i] = (0.25f * ((fRec59[i] * fZec121[i]) + ((fRec62[i] * fZec119[i]) + ((fRec65[i] * fZec117[i]) + ((fRec68[i] * fZec115[i]) + ((fRec71[i] * fZec113[i]) + ((fRec74[i] * fZec111[i]) + ((fRec77[i] * fZec109[i]) + ((fRec80[i] * fZec107[i]) + ((fRec83[i] * fZec105[i]) + ((fRec86[i] * fZec103[i]) + ((fRec89[i] * fZec101[i]) + ((fRec92[i] * fZec99[i]) + ((fRec95[i] * fZec97[i]) + ((fRec98[i] * fZec96[i]) + ((fRec101[i] * fZec95[i]) + ((fRec104[i] * fZec94[i]) + ((fRec107[i] * fZec93[i]) + ((fRec110[i] * fZec92[i]) + ((fRec113[i] * fZec91[i]) + ((fRec116[i] * fZec90[i]) + ((fRec119[i] * fZec89[i]) + ((fRec122[i] * fZec88[i]) + ((fRec125[i] * fZec87[i]) + ((fRec128[i] * fZec86[i]) + ((fRec131[i] * fZec85[i]) + ((fRec135[i] * fZec84[i]) + ((fRec138[i] * fZec83[i]) + ((fRec141[i] * fZec82[i]) + ((fRec144[i] * fZec81[i]) + ((fRec147[i] * fZec80[i]) + ((fRec150[i] * fZec79[i]) + ((fRec153[i] * fZec78[i]) + ((fRec156[i] * fZec77[i]) + ((fRec160[i] * fZec76[i]) + ((fRec163[i] * fZec75[i]) + ((fRec166[i] * fZec74[i]) + ((fRec169[i] * fZec73[i]) + ((fRec173[i] * fZec72[i]) + ((fRec176[i] * fZec71[i]) + ((fRec179[i] * fZec70[i]) + ((fRec182[i] * fZec69[i]) + ((fRec185[i] * fZec68[i]) + ((fRec189[i] * fZec67[i]) + ((fRec192[i] * fZec66[i]) + (fSlow36 * fZec209[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3130e60
			// exec code
			for (int i=0; i<count; i++) {
				fZec211[i] = ((fSlow36 * (fRec211[i] + (fRec214[i] + (fRec217[i] + (fRec220[i] + (fRec223[i] + (fRec226[i] + (fRec229[i] + (fRec232[i] + (fRec235[i] + (fRec238[i] + (fRec241[i] + (fRec244[i] + (fRec195[i] + (fRec198[i] + (fRec201[i] + (fRec207[i] + fRec204[i]))))))))))))))))) + (fRec189[i] + (fRec192[i] + (fRec173[i] + (fRec176[i] + (fRec179[i] + (fRec182[i] + (fRec185[i] + (fRec160[i] + (fRec163[i] + (fRec166[i] + (fRec169[i] + (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec153[i] + (fRec156[i] + fZec181[i]))))))))))))))))))));
			}
			
			// LOOP 0x324cbc0
			// pre processing
			for (int i=0; i<4; i++) iRec308_tmp[i]=iRec308_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec308[i] = (12345 + (1103515245 * iRec308[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) iRec308_perm[i]=iRec308_tmp[count+i];
			
			// LOOP 0x324deb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec216[i] = (0.002f * (fRec134[i] * fSlow82));
			}
			
			// SECTION : 27
			// LOOP 0x2b7daf0
			// pre processing
			for (int i=0; i<4; i++) fYec62_tmp[i]=fYec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec62[i] = (fZec173[i] - fZec172[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec62_perm[i]=fYec62_tmp[count+i];
			
			// LOOP 0x2dc2c80
			// pre processing
			for (int i=0; i<4; i++) fYec76_tmp[i]=fYec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec76[i] = (fZec193[i] - fZec192[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec76_perm[i]=fYec76_tmp[count+i];
			
			// LOOP 0x2f3af40
			// pre processing
			for (int i=0; i<4; i++) fYec89_tmp[i]=fYec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec89[i] = (fZec208[i] - fZec207[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec89_perm[i]=fYec89_tmp[count+i];
			
			// LOOP 0x3085180
			// pre processing
			for (int i=0; i<4; i++) fYec90_tmp[i]=fYec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec90[i] = (fZec211[i] - fZec210[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec90_perm[i]=fYec90_tmp[count+i];
			
			// LOOP 0x324d900
			// exec code
			for (int i=0; i<count; i++) {
				fZec217[i] = faustpower<2>(float(min(1.0f, max(-1.0f, (fZec216[i] + ((4.656612875245796e-16f * iRec308[i]) + fZec123[i]))))));
			}
			
			// SECTION : 28
			// LOOP 0x2b7d5f0
			// pre processing
			for (int i=0; i<4; i++) fRec172_tmp[i]=fRec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec172[i] = (fConst14 * ((fZec173[i] - (fZec172[i] + fYec62[i-1])) + fRec172[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec172_perm[i]=fRec172_tmp[count+i];
			
			// LOOP 0x2dc2760
			// pre processing
			for (int i=0; i<4; i++) fRec210_tmp[i]=fRec210_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec210[i] = (fConst14 * ((fZec193[i] - (fZec192[i] + fYec76[i-1])) + fRec210[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec210_perm[i]=fRec210_tmp[count+i];
			
			// LOOP 0x2f3aa20
			// pre processing
			for (int i=0; i<4; i++) fRec283_tmp[i]=fRec283_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec283[i] = (fConst14 * ((fZec208[i] - (fZec207[i] + fYec89[i-1])) + fRec283[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec283_perm[i]=fRec283_tmp[count+i];
			
			// LOOP 0x3084c60
			// pre processing
			for (int i=0; i<4; i++) fRec284_tmp[i]=fRec284_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec284[i] = (fConst14 * ((fZec211[i] - (fZec210[i] + fYec90[i-1])) + fRec284[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec284_perm[i]=fRec284_tmp[count+i];
			
			// LOOP 0x324c5e0
			// pre processing
			for (int i=0; i<4; i++) fRec305_tmp[i]=fRec305_perm[i];
			for (int i=0; i<4; i++) iRec306_tmp[i]=iRec306_perm[i];
			for (int i=0; i<4; i++) fRec307_tmp[i]=fRec307_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iZec218[i] = int((iRec306[i-1] < iConst36));
				fRec305[i] = ((iZec218[i])?(fRec305[i-1] + fZec217[i]):fZec217[i]);
				iRec306[i] = ((iZec218[i])?(1 + iRec306[i-1]):1);
				fRec307[i] = ((iZec218[i])?fRec307[i-1]:fRec305[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec307_perm[i]=fRec307_tmp[count+i];
			for (int i=0; i<4; i++) iRec306_perm[i]=iRec306_tmp[count+i];
			for (int i=0; i<4; i++) fRec305_perm[i]=fRec305_tmp[count+i];
			
			// SECTION : 29
			// LOOP 0x2cac3f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec179[i] = ((fRec12[i] * fZec121[i]) + ((fRec14[i] * fZec119[i]) + ((fRec16[i] * fZec117[i]) + ((fRec18[i] * fZec115[i]) + ((fRec20[i] * fZec113[i]) + ((fRec22[i] * fZec111[i]) + ((fRec24[i] * fZec109[i]) + ((fRec1[i] * fZec107[i]) + ((fRec26[i] * fZec105[i]) + ((fRec29[i] * fZec103[i]) + ((fRec32[i] * fZec101[i]) + ((fRec35[i] * fZec99[i]) + ((fRec38[i] * fZec97[i]) + ((fRec41[i] * fZec96[i]) + ((fRec44[i] * fZec95[i]) + ((fRec47[i] * fZec94[i]) + ((fRec50[i] * fZec93[i]) + ((fRec53[i] * fZec92[i]) + ((fRec56[i] * fZec91[i]) + ((fRec59[i] * fZec90[i]) + ((fRec62[i] * fZec89[i]) + ((fRec65[i] * fZec88[i]) + ((fRec68[i] * fZec87[i]) + ((fRec71[i] * fZec86[i]) + ((fRec74[i] * fZec85[i]) + ((fRec77[i] * fZec84[i]) + ((fRec80[i] * fZec83[i]) + ((fRec83[i] * fZec82[i]) + ((fRec86[i] * fZec81[i]) + ((fRec89[i] * fZec80[i]) + ((fRec92[i] * fZec79[i]) + ((fRec95[i] * fZec78[i]) + ((fRec98[i] * fZec77[i]) + ((fRec101[i] * fZec76[i]) + ((fRec104[i] * fZec75[i]) + ((fRec107[i] * fZec74[i]) + ((fRec110[i] * fZec73[i]) + ((fRec113[i] * fZec72[i]) + ((fRec116[i] * fZec71[i]) + ((fRec119[i] * fZec70[i]) + ((fRec122[i] * fZec69[i]) + ((fRec125[i] * fZec68[i]) + ((fRec128[i] * fZec67[i]) + ((fRec131[i] * fZec66[i]) + (fSlow36 * ((fRec135[i] * fZec65[i]) + ((fRec138[i] * fZec64[i]) + ((fRec141[i] * fZec63[i]) + ((fRec144[i] * fZec62[i]) + ((fRec147[i] * fZec61[i]) + ((fRec150[i] * fZec60[i]) + ((fRec153[i] * fZec59[i]) + ((fRec156[i] * fZec58[i]) + ((fRec160[i] * fZec57[i]) + ((fRec163[i] * fZec56[i]) + ((fRec166[i] * fZec55[i]) + ((fRec169[i] * fZec54[i]) + ((fRec173[i] * fZec53[i]) + ((fRec176[i] * fZec52[i]) + ((fRec179[i] * fZec51[i]) + ((fRec182[i] * fZec50[i]) + (fRec185[i] * fZec49[i]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3196b10
			// exec code
			for (int i=0; i<count; i++) {
				fZec212[i] = (fZec172[i] + (0.002f * (fRec172[i] * fSlow82)));
			}
			
			// LOOP 0x31ab010
			// exec code
			for (int i=0; i<count; i++) {
				fZec213[i] = (fZec192[i] + (0.002f * (fRec210[i] * fSlow82)));
			}
			
			// LOOP 0x31c0ac0
			// exec code
			for (int i=0; i<count; i++) {
				fZec214[i] = (fZec210[i] + (0.002f * (fRec284[i] * fSlow82)));
			}
			
			// LOOP 0x31d75b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec215[i] = (fZec207[i] + (0.002f * (fRec283[i] * fSlow82)));
			}
			
			// LOOP 0x3261b40
			// pre processing
			for (int i=0; i<4; i++) fYec99_tmp[i]=fYec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec99[i] = log10f(sqrtf((fConst37 * fRec307[i])));
			}
			// post processing
			for (int i=0; i<4; i++) fYec99_perm[i]=fYec99_tmp[count+i];
			
			// SECTION : 30
			// LOOP 0x2cac310
			// exec code
			for (int i=0; i<count; i++) {
				fZec180[i] = (0.25f * fZec179[i]);
			}
			
			// LOOP 0x2d84e10
			// exec code
			for (int i=0; i<count; i++) {
				fZec183[i] = ((fSlow36 * (fRec173[i] + (fRec176[i] + (fRec179[i] + (fRec182[i] + (fRec185[i] + (fRec160[i] + (fRec163[i] + (fRec166[i] + (fRec169[i] + (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec156[i] + fRec153[i]))))))))))))))))) + (fRec12[i] + (fRec14[i] + (fRec16[i] + (fRec18[i] + (fRec20[i] + (fRec22[i] + (fRec24[i] + fZec182[i]))))))));
			}
			
			// LOOP 0x3196a30
			// pre processing
			for (int i=0; i<4; i++) fYec91_tmp[i]=fYec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec91[i] = (fSlow84 * fZec212[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec91_perm[i]=fYec91_tmp[count+i];
			
			// LOOP 0x31aaf30
			// pre processing
			for (int i=0; i<4; i++) fYec92_tmp[i]=fYec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec92[i] = (fSlow86 * fZec213[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec92_perm[i]=fYec92_tmp[count+i];
			
			// LOOP 0x31c09e0
			// pre processing
			for (int i=0; i<4; i++) fYec93_tmp[i]=fYec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec93[i] = (fSlow88 * fZec214[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec93_perm[i]=fYec93_tmp[count+i];
			
			// LOOP 0x31d74d0
			// pre processing
			for (int i=0; i<4; i++) fYec94_tmp[i]=fYec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec94[i] = (fSlow90 * fZec215[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec94_perm[i]=fYec94_tmp[count+i];
			
			// LOOP 0x3261a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec219[i] = (2e+01f * fYec99[i]);
			}
			
			// LOOP 0x32630a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec220[i] = (2e+01f * fYec99[i-1]);
			}
			
			// SECTION : 31
			// LOOP 0x2a53ad0
			// exec code
			for (int i=0; i<count; i++) {
				fZec166[i] = (0.25f * ((fRec18[i] * fZec121[i]) + ((fRec20[i] * fZec119[i]) + ((fRec22[i] * fZec117[i]) + ((fRec24[i] * fZec115[i]) + ((fRec1[i] * fZec113[i]) + ((fRec4[i] * fZec111[i]) + ((fRec6[i] * fZec109[i]) + ((fRec8[i] * fZec107[i]) + ((fRec10[i] * fZec105[i]) + ((fRec12[i] * fZec103[i]) + ((fRec14[i] * fZec101[i]) + ((fRec16[i] * fZec99[i]) + ((fRec18[i] * fZec97[i]) + ((fRec20[i] * fZec96[i]) + ((fRec22[i] * fZec95[i]) + ((fRec24[i] * fZec94[i]) + ((fRec1[i] * fZec93[i]) + ((fRec26[i] * fZec92[i]) + ((fRec29[i] * fZec91[i]) + ((fRec32[i] * fZec90[i]) + ((fRec35[i] * fZec89[i]) + ((fRec38[i] * fZec88[i]) + ((fRec41[i] * fZec87[i]) + ((fRec44[i] * fZec86[i]) + ((fRec47[i] * fZec85[i]) + ((fRec50[i] * fZec84[i]) + ((fRec53[i] * fZec83[i]) + ((fRec56[i] * fZec82[i]) + ((fRec59[i] * fZec81[i]) + ((fRec62[i] * fZec80[i]) + ((fRec65[i] * fZec79[i]) + ((fRec68[i] * fZec78[i]) + ((fRec71[i] * fZec77[i]) + ((fRec74[i] * fZec76[i]) + ((fRec77[i] * fZec75[i]) + ((fRec80[i] * fZec74[i]) + ((fRec83[i] * fZec73[i]) + ((fRec86[i] * fZec72[i]) + ((fRec89[i] * fZec71[i]) + ((fRec92[i] * fZec70[i]) + ((fRec95[i] * fZec69[i]) + ((fRec98[i] * fZec68[i]) + ((fRec101[i] * fZec67[i]) + ((fRec104[i] * fZec66[i]) + (fSlow36 * ((fRec107[i] * fZec65[i]) + ((fRec110[i] * fZec64[i]) + ((fRec113[i] * fZec63[i]) + ((fRec116[i] * fZec62[i]) + ((fRec119[i] * fZec61[i]) + ((fRec122[i] * fZec60[i]) + ((fRec125[i] * fZec59[i]) + ((fRec128[i] * fZec58[i]) + ((fRec131[i] * fZec57[i]) + ((fRec135[i] * fZec56[i]) + ((fRec138[i] * fZec55[i]) + ((fRec141[i] * fZec54[i]) + ((fRec144[i] * fZec53[i]) + ((fRec147[i] * fZec52[i]) + ((fRec150[i] * fZec51[i]) + ((fRec153[i] * fZec50[i]) + (fRec156[i] * fZec49[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x2b29e60
			// exec code
			for (int i=0; i<count; i++) {
				fZec167[i] = ((fRec18[i] + (fRec22[i] + fRec20[i])) + (2 * ((fZec128[i] + (fZec129[i] + (fZec130[i] + (fZec131[i] + (fZec132[i] + (fZec133[i] + (fZec134[i] + (fZec135[i] + (fZec136[i] + (fZec137[i] + (fRec24[i] + (fRec1[i] + (fZec138[i] + (fZec139[i] + (fZec140[i] + (fZec141[i] + (fZec142[i] + (fZec143[i] + (fZec144[i] + (fZec145[i] + (fZec146[i] + (fZec147[i] + (fZec148[i] + (fZec149[i] + (fZec150[i] + (fZec151[i] + (fZec152[i] + (fZec153[i] + (fZec154[i] + (fZec155[i] + (fZec156[i] + ((((((((0.5f * fRec104[i]) + (0.5f * fRec101[i])) + (0.5f * fRec98[i])) + (0.5f * fRec95[i])) + (0.5f * fRec92[i])) + (0.5f * fRec89[i])) + (0.5f * fRec86[i])) + (0.5f * fRec83[i]))))))))))))))))))))))))))))))))) + (fSlow81 * (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec153[i] + (fRec156[i] + fZec125[i]))))))))))));
			}
			
			// LOOP 0x2cac230
			// pre processing
			for (int i=0; i<4; i++) fYec68_tmp[i]=fYec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec68[i] = (fZec183[i] - fZec180[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec68_perm[i]=fYec68_tmp[count+i];
			
			// LOOP 0x31eea70
			// pre processing
			for (int i=0; i<4; i++) fRec294_tmp[i]=fRec294_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec294[i] = (fConst27 * ((fYec91[i] - fYec91[i-1]) + fRec294[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec294_perm[i]=fRec294_tmp[count+i];
			
			// LOOP 0x31ff8b0
			// pre processing
			for (int i=0; i<4; i++) fRec296_tmp[i]=fRec296_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec296[i] = (fConst29 * ((fYec92[i] - fYec92[i-1]) + fRec296[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec296_perm[i]=fRec296_tmp[count+i];
			
			// LOOP 0x32124a0
			// pre processing
			for (int i=0; i<4; i++) fRec298_tmp[i]=fRec298_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec298[i] = (fConst31 * ((fYec93[i] - fYec93[i-1]) + fRec298[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec298_perm[i]=fRec298_tmp[count+i];
			
			// LOOP 0x3225fa0
			// pre processing
			for (int i=0; i<4; i++) fRec300_tmp[i]=fRec300_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec300[i] = (fConst33 * ((fYec94[i] - fYec94[i-1]) + fRec300[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec300_perm[i]=fRec300_tmp[count+i];
			
			// LOOP 0x324c0a0
			// pre processing
			for (int i=0; i<4; i++) fRec304_tmp[i]=fRec304_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec304[i] = min(1.0f, max(0.0f, ((((int((fZec219[i] > -25.0f)))?((int((fZec220[i] < -25.0f)))?1.0f:0.0f):0.0f) + fRec304[i-1]) - ((int((fZec220[i] > -35.0f)))?((int((fZec219[i] < -35.0f)))?1.0f:0.0f):0.0f))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec304_perm[i]=fRec304_tmp[count+i];
			
			// SECTION : 32
			// LOOP 0x2a539f0
			// pre processing
			for (int i=0; i<4; i++) fYec57_tmp[i]=fYec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec57[i] = (fZec167[i] - fZec166[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec57_perm[i]=fYec57_tmp[count+i];
			
			// LOOP 0x2cabd10
			// pre processing
			for (int i=0; i<4; i++) fRec188_tmp[i]=fRec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec188[i] = (fConst14 * ((fZec183[i] - (fZec180[i] + fYec68[i-1])) + fRec188[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec188_perm[i]=fRec188_tmp[count+i];
			
			// LOOP 0x31966b0
			// pre processing
			for (int i=0; i<4; i++) fRec286_tmp[i]=fRec286_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec286[i] = (fRec286[i-1] + (fConst7 * (fYec91[i] - fRec286[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec286_perm[i]=fRec286_tmp[count+i];
			
			// LOOP 0x31aaa30
			// pre processing
			for (int i=0; i<4; i++) fRec288_tmp[i]=fRec288_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec288[i] = (fRec288[i-1] + (fConst10 * (fYec92[i] - fRec288[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec288_perm[i]=fRec288_tmp[count+i];
			
			// LOOP 0x31c04e0
			// pre processing
			for (int i=0; i<4; i++) fRec290_tmp[i]=fRec290_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec290[i] = (fRec290[i-1] + (fConst13 * (fYec93[i] - fRec290[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec290_perm[i]=fRec290_tmp[count+i];
			
			// LOOP 0x31d6fd0
			// pre processing
			for (int i=0; i<4; i++) fRec292_tmp[i]=fRec292_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec292[i] = (fRec292[i-1] + (fConst16 * (fYec94[i] - fRec292[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec292_perm[i]=fRec292_tmp[count+i];
			
			// LOOP 0x31f6ae0
			// pre processing
			for (int i=0; i<4; i++) fYec95_tmp[i]=fYec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec95[i] = ((fSlow91 * fZec212[i]) + (0.5416666666666667f * fRec294[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec95_perm[i]=fYec95_tmp[count+i];
			
			// LOOP 0x3208920
			// pre processing
			for (int i=0; i<4; i++) fYec96_tmp[i]=fYec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec96[i] = ((fSlow92 * fZec213[i]) + (0.5416666666666667f * fRec296[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec96_perm[i]=fYec96_tmp[count+i];
			
			// LOOP 0x321bb10
			// pre processing
			for (int i=0; i<4; i++) fYec97_tmp[i]=fYec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec97[i] = ((fSlow93 * fZec214[i]) + (0.5416666666666667f * fRec298[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec97_perm[i]=fYec97_tmp[count+i];
			
			// LOOP 0x322fea0
			// pre processing
			for (int i=0; i<4; i++) fYec98_tmp[i]=fYec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec98[i] = ((fSlow94 * fZec215[i]) + (0.5416666666666667f * fRec300[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec98_perm[i]=fYec98_tmp[count+i];
			
			// LOOP 0x324bc80
			// pre processing
			for (int i=0; i<4; i++) fRec303_tmp[i]=fRec303_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec303[i] = ((fConst38 * ((int((fRec304[i] > 0.5f)))?((int((fRec304[i-1] < 0.5f)))?1.0f:0.0f):0.0f)) + (fConst39 * fRec303[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec303_perm[i]=fRec303_tmp[count+i];
			
			// SECTION : 33
			// LOOP 0x27dc940
			// pre processing
			for (int i=0; i<4; i++) fRec0_tmp[i]=fRec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec0[i] = (fSlow0 + (0.98f * fRec0[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec0_perm[i]=fRec0_tmp[count+i];
			
			// LOOP 0x2a534f0
			// pre processing
			for (int i=0; i<4; i++) fRec159_tmp[i]=fRec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec159[i] = (fConst14 * ((fZec167[i] - (fZec166[i] + fYec57[i-1])) + fRec159[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec159_perm[i]=fRec159_tmp[count+i];
			
			// LOOP 0x31964d0
			// pre processing
			for (int i=0; i<4; i++) fRec285_tmp[i]=fRec285_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec285[i] = (fRec285[i-1] + (fConst7 * (fRec286[i] - fRec285[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec285_perm[i]=fRec285_tmp[count+i];
			
			// LOOP 0x31aa630
			// pre processing
			for (int i=0; i<4; i++) fRec287_tmp[i]=fRec287_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec287[i] = (fRec287[i-1] + (fConst10 * (fRec288[i] - fRec287[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec287_perm[i]=fRec287_tmp[count+i];
			
			// LOOP 0x31c00e0
			// pre processing
			for (int i=0; i<4; i++) fRec289_tmp[i]=fRec289_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec289[i] = (fRec289[i-1] + (fConst13 * (fRec290[i] - fRec289[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec289_perm[i]=fRec289_tmp[count+i];
			
			// LOOP 0x31d6bd0
			// pre processing
			for (int i=0; i<4; i++) fRec291_tmp[i]=fRec291_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec291[i] = (fRec291[i-1] + (fConst16 * (fRec292[i] - fRec291[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec291_perm[i]=fRec291_tmp[count+i];
			
			// LOOP 0x31ee630
			// pre processing
			for (int i=0; i<4; i++) fRec293_tmp[i]=fRec293_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec293[i] = (fConst28 * ((fYec95[i] - fYec95[i-1]) + fRec293[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec293_perm[i]=fRec293_tmp[count+i];
			
			// LOOP 0x31ff410
			// pre processing
			for (int i=0; i<4; i++) fRec295_tmp[i]=fRec295_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec295[i] = (fConst30 * ((fYec96[i] - fYec96[i-1]) + fRec295[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec295_perm[i]=fRec295_tmp[count+i];
			
			// LOOP 0x3212060
			// pre processing
			for (int i=0; i<4; i++) fRec297_tmp[i]=fRec297_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec297[i] = (fConst32 * ((fYec97[i] - fYec97[i-1]) + fRec297[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec297_perm[i]=fRec297_tmp[count+i];
			
			// LOOP 0x3225b60
			// pre processing
			for (int i=0; i<4; i++) fRec299_tmp[i]=fRec299_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec299[i] = (fConst34 * ((fYec98[i] - fYec98[i-1]) + fRec299[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec299_perm[i]=fRec299_tmp[count+i];
			
			// LOOP 0x323a570
			// pre processing
			for (int i=0; i<4; i++) fRec301_tmp[i]=fRec301_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec301[i] = (fRec301[i-1] + (fConst35 * ((fSlow35 * ((fSlow98 * (((0.25f * fZec206[i]) + (0.125f * fZec209[i])) + (0.0625f * fZec191[i]))) + (fSlow96 * ((0.25f * fZec209[i]) + (0.125f * fZec191[i]))))) - fRec301[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec301_perm[i]=fRec301_tmp[count+i];
			
			// LOOP 0x3248f50
			// pre processing
			for (int i=0; i<4; i++) fRec302_tmp[i]=fRec302_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec302[i] = (fSlow99 + (0.98f * fRec302[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec302_perm[i]=fRec302_tmp[count+i];
			
			// LOOP 0x3271700
			// exec code
			for (int i=0; i<count; i++) {
				fZec221[i] = (fRec188[i] * fSlow82);
			}
			
			// LOOP 0x3271d90
			// exec code
			for (int i=0; i<count; i++) {
				fZec222[i] = (fZec123[i] + fZec216[i]);
			}
			
			// LOOP 0x3272e40
			// pre processing
			for (int i=0; i<4; i++) fYec100_tmp[i]=fYec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec100[i] = min(1.0f, (fConst40 * fRec303[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec100_perm[i]=fYec100_tmp[count+i];
			
			// SECTION : 34
			// LOOP 0x3271620
			// exec code
			for (int i=0; i<count; i++) {
				fZec223[i] = (fSlow101 * (max(fSlow100, (0.25f * (fYec100[i-4] + (fYec100[i-3] + (fYec100[i] + fYec100[i-2]))))) * ((0.5f * fZec215[i]) + (0.25f * ((fZec222[i] + fZec179[i]) + (0.008f * fZec221[i]))))));
			}
			
			// LOOP 0x3294be0
			// exec code
			for (int i=0; i<count; i++) {
				fZec224[i] = (fRec301[i] * (0.5f + (4.5f * fRec302[i])));
			}
			
			// LOOP 0x329c730
			// exec code
			for (int i=0; i<count; i++) {
				fZec225[i] = (fSlow106 * ((fSlow104 * (((fRec285[i] + fRec287[i]) + fRec289[i]) + fRec291[i])) + (fSlow103 * (((fRec293[i] + fRec295[i]) + fRec297[i]) + fRec299[i]))));
			}
			
			// LOOP 0x32e8580
			// exec code
			for (int i=0; i<count; i++) {
				fZec226[i] = (fSlow121 * ((fSlow120 * fZec222[i]) + ((fSlow118 * (fZec166[i] + (0.002f * (fRec159[i] * fSlow82)))) + ((fSlow116 * fZec212[i]) + ((fSlow114 * (fZec180[i] + (0.002f * fZec221[i]))) + ((fSlow112 * fZec213[i]) + ((fSlow110 * fZec215[i]) + (fSlow108 * fZec214[i]))))))));
			}
			
			// LOOP 0x33233d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec227[i] = (0.001f + (0.05f * fRec0[i]));
			}
			
			// SECTION : 35
			// LOOP 0x27dc740
			// exec code
			for (int i=0; i<count; i++) {
				output0[i] = (FAUSTFLOAT)(fZec227[i] * (fZec226[i] + (fZec225[i] + (fZec224[i] + fZec223[i]))));
			}
			
			// LOOP 0x33351a0
			// exec code
			for (int i=0; i<count; i++) {
				output1[i] = (FAUSTFLOAT)(fZec227[i] * (fZec226[i] + (fZec223[i] + fZec225[i])));
			}
			
			// LOOP 0x33528a0
			// exec code
			for (int i=0; i<count; i++) {
				output2[i] = (FAUSTFLOAT)(fZec224[i] * fZec227[i]);
			}
			
		}
		if (index < fullcount) {
			// compute the remaining samples if any
			int count = fullcount-index;
			FAUSTFLOAT* output0 = &output[0][index];
			FAUSTFLOAT* output1 = &output[1][index];
			FAUSTFLOAT* output2 = &output[2][index];
			// SECTION : 1
			// LOOP 0x27de6b0
			// pre processing
			for (int i=0; i<4; i++) fRec3_tmp[i]=fRec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec3[i] = (((int((fRec3[i-1] > 1.0f)))?(fRec3[i-1] - 1.0f):fRec3[i-1]) + fSlow1);
			}
			// post processing
			for (int i=0; i<4; i++) fRec3_perm[i]=fRec3_tmp[count+i];
			
			// SECTION : 2
			// LOOP 0x27e2340
			// exec code
			for (int i=0; i<count; i++) {
				fZec0[i] = ((fSlow6 * sinf((6.283185307179586f * fRec3[i]))) + fSlow5);
			}
			
			// SECTION : 3
			// LOOP 0x27de410
			// pre processing
			for (int i=0; i<4; i++) fRec2_tmp[i]=fRec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec1[i] = ((fConst2 * float((4186.009044809578f * (fZec0[i] * fSlow4)))) + fRec2[i-1]);
				fRec2[i] = ((int((fZec1[i] > 1.0f)))?(fZec1[i] - 1.0f):fZec1[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec2_perm[i]=fRec2_tmp[count+i];
			
			// LOOP 0x27e80d0
			// pre processing
			for (int i=0; i<4; i++) fRec5_tmp[i]=fRec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec2[i] = ((fConst2 * float((7902.132820097988f * (fZec0[i] * fSlow7)))) + fRec5[i-1]);
				fRec5[i] = ((int((fZec2[i] > 1.0f)))?(fZec2[i] - 1.0f):fZec2[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec5_perm[i]=fRec5_tmp[count+i];
			
			// LOOP 0x27ebe30
			// pre processing
			for (int i=0; i<4; i++) fRec7_tmp[i]=fRec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec3[i] = ((fConst2 * float((7458.620184289437f * (fZec0[i] * fSlow8)))) + fRec7[i-1]);
				fRec7[i] = ((int((fZec3[i] > 1.0f)))?(fZec3[i] - 1.0f):fZec3[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec7_perm[i]=fRec7_tmp[count+i];
			
			// LOOP 0x27efc30
			// pre processing
			for (int i=0; i<4; i++) fRec9_tmp[i]=fRec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec4[i] = ((fConst2 * float((7.04e+03f * (fZec0[i] * fSlow9)))) + fRec9[i-1]);
				fRec9[i] = ((int((fZec4[i] > 1.0f)))?(fZec4[i] - 1.0f):fZec4[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec9_perm[i]=fRec9_tmp[count+i];
			
			// LOOP 0x27f3960
			// pre processing
			for (int i=0; i<4; i++) fRec11_tmp[i]=fRec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec5[i] = ((fConst2 * float((6644.875161279122f * (fZec0[i] * fSlow10)))) + fRec11[i-1]);
				fRec11[i] = ((int((fZec5[i] > 1.0f)))?(fZec5[i] - 1.0f):fZec5[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec11_perm[i]=fRec11_tmp[count+i];
			
			// LOOP 0x27f7710
			// pre processing
			for (int i=0; i<4; i++) fRec13_tmp[i]=fRec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec6[i] = ((fConst2 * float((6271.926975707989f * (fZec0[i] * fSlow11)))) + fRec13[i-1]);
				fRec13[i] = ((int((fZec6[i] > 1.0f)))?(fZec6[i] - 1.0f):fZec6[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec13_perm[i]=fRec13_tmp[count+i];
			
			// LOOP 0x27fb4c0
			// pre processing
			for (int i=0; i<4; i++) fRec15_tmp[i]=fRec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec7[i] = ((fConst2 * float((5919.91076338615f * (fZec0[i] * fSlow12)))) + fRec15[i-1]);
				fRec15[i] = ((int((fZec7[i] > 1.0f)))?(fZec7[i] - 1.0f):fZec7[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec15_perm[i]=fRec15_tmp[count+i];
			
			// LOOP 0x27ff270
			// pre processing
			for (int i=0; i<4; i++) fRec17_tmp[i]=fRec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec8[i] = ((fConst2 * float((5587.651702928062f * (fZec0[i] * fSlow13)))) + fRec17[i-1]);
				fRec17[i] = ((int((fZec8[i] > 1.0f)))?(fZec8[i] - 1.0f):fZec8[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec17_perm[i]=fRec17_tmp[count+i];
			
			// LOOP 0x2803020
			// pre processing
			for (int i=0; i<4; i++) fRec19_tmp[i]=fRec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec9[i] = ((fConst2 * float((5274.04091060592f * (fSlow14 * fZec0[i])))) + fRec19[i-1]);
				fRec19[i] = ((int((fZec9[i] > 1.0f)))?(fZec9[i] - 1.0f):fZec9[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec19_perm[i]=fRec19_tmp[count+i];
			
			// LOOP 0x2806dd0
			// pre processing
			for (int i=0; i<4; i++) fRec21_tmp[i]=fRec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec10[i] = ((fConst2 * float((4978.031739553295f * (fZec0[i] * fSlow15)))) + fRec21[i-1]);
				fRec21[i] = ((int((fZec10[i] > 1.0f)))?(fZec10[i] - 1.0f):fZec10[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec21_perm[i]=fRec21_tmp[count+i];
			
			// LOOP 0x280aa70
			// pre processing
			for (int i=0; i<4; i++) fRec23_tmp[i]=fRec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec11[i] = ((fConst2 * float((4698.63628667852f * (fZec0[i] * fSlow16)))) + fRec23[i-1]);
				fRec23[i] = ((int((fZec11[i] > 1.0f)))?(fZec11[i] - 1.0f):fZec11[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec23_perm[i]=fRec23_tmp[count+i];
			
			// LOOP 0x280e740
			// pre processing
			for (int i=0; i<4; i++) fRec25_tmp[i]=fRec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec12[i] = ((fConst2 * float((4434.922095629953f * (fZec0[i] * fSlow17)))) + fRec25[i-1]);
				fRec25[i] = ((int((fZec12[i] > 1.0f)))?(fZec12[i] - 1.0f):fZec12[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec25_perm[i]=fRec25_tmp[count+i];
			
			// SECTION : 4
			// LOOP 0x28129c0
			// pre processing
			for (int i=0; i<4; i++) iRec28_tmp[i]=iRec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec28[i] = ((int(((fRec5[i] - fRec5[i-1]) < 0)))?(1 - iRec28[i-1]):iRec28[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec28_perm[i]=iRec28_tmp[count+i];
			
			// LOOP 0x28174d0
			// pre processing
			for (int i=0; i<4; i++) iRec31_tmp[i]=iRec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec31[i] = ((int(((fRec7[i] - fRec7[i-1]) < 0)))?(1 - iRec31[i-1]):iRec31[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec31_perm[i]=iRec31_tmp[count+i];
			
			// LOOP 0x281bb90
			// pre processing
			for (int i=0; i<4; i++) iRec34_tmp[i]=iRec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec34[i] = ((int(((fRec9[i] - fRec9[i-1]) < 0)))?(1 - iRec34[i-1]):iRec34[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec34_perm[i]=iRec34_tmp[count+i];
			
			// LOOP 0x2820250
			// pre processing
			for (int i=0; i<4; i++) iRec37_tmp[i]=iRec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec37[i] = ((int(((fRec11[i] - fRec11[i-1]) < 0)))?(1 - iRec37[i-1]):iRec37[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec37_perm[i]=iRec37_tmp[count+i];
			
			// LOOP 0x2824910
			// pre processing
			for (int i=0; i<4; i++) iRec40_tmp[i]=iRec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec40[i] = ((int(((fRec13[i] - fRec13[i-1]) < 0)))?(1 - iRec40[i-1]):iRec40[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec40_perm[i]=iRec40_tmp[count+i];
			
			// LOOP 0x2829310
			// pre processing
			for (int i=0; i<4; i++) iRec43_tmp[i]=iRec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec43[i] = ((int(((fRec15[i] - fRec15[i-1]) < 0)))?(1 - iRec43[i-1]):iRec43[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec43_perm[i]=iRec43_tmp[count+i];
			
			// LOOP 0x282d780
			// pre processing
			for (int i=0; i<4; i++) iRec46_tmp[i]=iRec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec46[i] = ((int(((fRec17[i] - fRec17[i-1]) < 0)))?(1 - iRec46[i-1]):iRec46[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec46_perm[i]=iRec46_tmp[count+i];
			
			// LOOP 0x28320b0
			// pre processing
			for (int i=0; i<4; i++) iRec49_tmp[i]=iRec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec49[i] = ((int(((fRec19[i] - fRec19[i-1]) < 0)))?(1 - iRec49[i-1]):iRec49[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec49_perm[i]=iRec49_tmp[count+i];
			
			// LOOP 0x2836770
			// pre processing
			for (int i=0; i<4; i++) iRec52_tmp[i]=iRec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec52[i] = ((int(((fRec21[i] - fRec21[i-1]) < 0)))?(1 - iRec52[i-1]):iRec52[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec52_perm[i]=iRec52_tmp[count+i];
			
			// LOOP 0x283b170
			// pre processing
			for (int i=0; i<4; i++) iRec55_tmp[i]=iRec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec55[i] = ((int(((fRec23[i] - fRec23[i-1]) < 0)))?(1 - iRec55[i-1]):iRec55[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec55_perm[i]=iRec55_tmp[count+i];
			
			// LOOP 0x283f830
			// pre processing
			for (int i=0; i<4; i++) iRec58_tmp[i]=iRec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec58[i] = ((int(((fRec25[i] - fRec25[i-1]) < 0)))?(1 - iRec58[i-1]):iRec58[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec58_perm[i]=iRec58_tmp[count+i];
			
			// LOOP 0x2843ef0
			// pre processing
			for (int i=0; i<4; i++) iRec61_tmp[i]=iRec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec61[i] = ((int(((fRec2[i] - fRec2[i-1]) < 0)))?(1 - iRec61[i-1]):iRec61[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec61_perm[i]=iRec61_tmp[count+i];
			
			// SECTION : 5
			// LOOP 0x2813e10
			// pre processing
			for (int i=0; i<4; i++) fYec12_tmp[i]=fYec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec12[i] = (fRec5[i] + iRec28[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec12_perm[i]=fYec12_tmp[count+i];
			
			// LOOP 0x2818920
			// pre processing
			for (int i=0; i<4; i++) fYec13_tmp[i]=fYec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec13[i] = (fRec7[i] + iRec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec13_perm[i]=fYec13_tmp[count+i];
			
			// LOOP 0x281cfe0
			// pre processing
			for (int i=0; i<4; i++) fYec14_tmp[i]=fYec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec14[i] = (fRec9[i] + iRec34[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec14_perm[i]=fYec14_tmp[count+i];
			
			// LOOP 0x28216a0
			// pre processing
			for (int i=0; i<4; i++) fYec15_tmp[i]=fYec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec15[i] = (fRec11[i] + iRec37[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec15_perm[i]=fYec15_tmp[count+i];
			
			// LOOP 0x2825d60
			// pre processing
			for (int i=0; i<4; i++) fYec16_tmp[i]=fYec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec16[i] = (fRec13[i] + iRec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec16_perm[i]=fYec16_tmp[count+i];
			
			// LOOP 0x282a760
			// pre processing
			for (int i=0; i<4; i++) fYec17_tmp[i]=fYec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec17[i] = (fRec15[i] + iRec43[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec17_perm[i]=fYec17_tmp[count+i];
			
			// LOOP 0x282ee80
			// pre processing
			for (int i=0; i<4; i++) fYec18_tmp[i]=fYec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec18[i] = (fRec17[i] + iRec46[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec18_perm[i]=fYec18_tmp[count+i];
			
			// LOOP 0x2833500
			// pre processing
			for (int i=0; i<4; i++) fYec19_tmp[i]=fYec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec19[i] = (fRec19[i] + iRec49[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec19_perm[i]=fYec19_tmp[count+i];
			
			// LOOP 0x2837bc0
			// pre processing
			for (int i=0; i<4; i++) fYec20_tmp[i]=fYec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec20[i] = (fRec21[i] + iRec52[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec20_perm[i]=fYec20_tmp[count+i];
			
			// LOOP 0x283c5c0
			// pre processing
			for (int i=0; i<4; i++) fYec21_tmp[i]=fYec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec21[i] = (fRec23[i] + iRec55[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec21_perm[i]=fYec21_tmp[count+i];
			
			// LOOP 0x2840c80
			// pre processing
			for (int i=0; i<4; i++) fYec22_tmp[i]=fYec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec22[i] = (fRec25[i] + iRec58[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec22_perm[i]=fYec22_tmp[count+i];
			
			// LOOP 0x28452c0
			// pre processing
			for (int i=0; i<4; i++) fYec23_tmp[i]=fYec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec23[i] = (fRec2[i] + iRec61[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec23_perm[i]=fYec23_tmp[count+i];
			
			// SECTION : 6
			// LOOP 0x2813d30
			// exec code
			for (int i=0; i<count; i++) {
				fZec13[i] = (0.5f * fYec12[i]);
			}
			
			// LOOP 0x2818840
			// exec code
			for (int i=0; i<count; i++) {
				fZec14[i] = (0.5f * fYec13[i]);
			}
			
			// LOOP 0x281cf00
			// exec code
			for (int i=0; i<count; i++) {
				fZec15[i] = (0.5f * fYec14[i]);
			}
			
			// LOOP 0x28215c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec16[i] = (0.5f * fYec15[i]);
			}
			
			// LOOP 0x2825c80
			// exec code
			for (int i=0; i<count; i++) {
				fZec17[i] = (0.5f * fYec16[i]);
			}
			
			// LOOP 0x282a680
			// exec code
			for (int i=0; i<count; i++) {
				fZec18[i] = (0.5f * fYec17[i]);
			}
			
			// LOOP 0x282eda0
			// exec code
			for (int i=0; i<count; i++) {
				fZec19[i] = (0.5f * fYec18[i]);
			}
			
			// LOOP 0x2833420
			// exec code
			for (int i=0; i<count; i++) {
				fZec20[i] = (0.5f * fYec19[i]);
			}
			
			// LOOP 0x2837ae0
			// exec code
			for (int i=0; i<count; i++) {
				fZec21[i] = (0.5f * fYec20[i]);
			}
			
			// LOOP 0x283c4e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec22[i] = (0.5f * fYec21[i]);
			}
			
			// LOOP 0x2840ba0
			// exec code
			for (int i=0; i<count; i++) {
				fZec23[i] = (0.5f * fYec22[i]);
			}
			
			// LOOP 0x28451e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec24[i] = (0.5f * fYec23[i]);
			}
			
			// SECTION : 7
			// LOOP 0x2848510
			// pre processing
			for (int i=0; i<4; i++) iRec64_tmp[i]=iRec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec64[i] = ((int(((fZec13[i] - (0.5f * fYec12[i-1])) < 0)))?(1 - iRec64[i-1]):iRec64[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec64_perm[i]=iRec64_tmp[count+i];
			
			// LOOP 0x284d2f0
			// pre processing
			for (int i=0; i<4; i++) iRec67_tmp[i]=iRec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec67[i] = ((int(((fZec14[i] - (0.5f * fYec13[i-1])) < 0)))?(1 - iRec67[i-1]):iRec67[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec67_perm[i]=iRec67_tmp[count+i];
			
			// LOOP 0x2851db0
			// pre processing
			for (int i=0; i<4; i++) iRec70_tmp[i]=iRec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec70[i] = ((int(((fZec15[i] - (0.5f * fYec14[i-1])) < 0)))?(1 - iRec70[i-1]):iRec70[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec70_perm[i]=iRec70_tmp[count+i];
			
			// LOOP 0x2856850
			// pre processing
			for (int i=0; i<4; i++) iRec73_tmp[i]=iRec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec73[i] = ((int(((fZec16[i] - (0.5f * fYec15[i-1])) < 0)))?(1 - iRec73[i-1]):iRec73[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec73_perm[i]=iRec73_tmp[count+i];
			
			// LOOP 0x285b2f0
			// pre processing
			for (int i=0; i<4; i++) iRec76_tmp[i]=iRec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec76[i] = ((int(((fZec17[i] - (0.5f * fYec16[i-1])) < 0)))?(1 - iRec76[i-1]):iRec76[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec76_perm[i]=iRec76_tmp[count+i];
			
			// LOOP 0x28600e0
			// pre processing
			for (int i=0; i<4; i++) iRec79_tmp[i]=iRec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec79[i] = ((int(((fZec18[i] - (0.5f * fYec17[i-1])) < 0)))?(1 - iRec79[i-1]):iRec79[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec79_perm[i]=iRec79_tmp[count+i];
			
			// LOOP 0x2864b80
			// pre processing
			for (int i=0; i<4; i++) iRec82_tmp[i]=iRec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec82[i] = ((int(((fZec19[i] - (0.5f * fYec18[i-1])) < 0)))?(1 - iRec82[i-1]):iRec82[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec82_perm[i]=iRec82_tmp[count+i];
			
			// LOOP 0x2869640
			// pre processing
			for (int i=0; i<4; i++) iRec85_tmp[i]=iRec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec85[i] = ((int(((fZec20[i] - (0.5f * fYec19[i-1])) < 0)))?(1 - iRec85[i-1]):iRec85[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec85_perm[i]=iRec85_tmp[count+i];
			
			// LOOP 0x286e0e0
			// pre processing
			for (int i=0; i<4; i++) iRec88_tmp[i]=iRec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec88[i] = ((int(((fZec21[i] - (0.5f * fYec20[i-1])) < 0)))?(1 - iRec88[i-1]):iRec88[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec88_perm[i]=iRec88_tmp[count+i];
			
			// LOOP 0x2872ea0
			// pre processing
			for (int i=0; i<4; i++) iRec91_tmp[i]=iRec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec91[i] = ((int(((fZec22[i] - (0.5f * fYec21[i-1])) < 0)))?(1 - iRec91[i-1]):iRec91[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec91_perm[i]=iRec91_tmp[count+i];
			
			// LOOP 0x2877940
			// pre processing
			for (int i=0; i<4; i++) iRec94_tmp[i]=iRec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec94[i] = ((int(((fZec23[i] - (0.5f * fYec22[i-1])) < 0)))?(1 - iRec94[i-1]):iRec94[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec94_perm[i]=iRec94_tmp[count+i];
			
			// LOOP 0x287c3e0
			// pre processing
			for (int i=0; i<4; i++) iRec97_tmp[i]=iRec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec97[i] = ((int(((fZec24[i] - (0.5f * fYec23[i-1])) < 0)))?(1 - iRec97[i-1]):iRec97[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec97_perm[i]=iRec97_tmp[count+i];
			
			// SECTION : 8
			// LOOP 0x2849c20
			// pre processing
			for (int i=0; i<4; i++) fYec24_tmp[i]=fYec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec24[i] = (iRec64[i] + fZec13[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec24_perm[i]=fYec24_tmp[count+i];
			
			// LOOP 0x284ea20
			// pre processing
			for (int i=0; i<4; i++) fYec25_tmp[i]=fYec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec25[i] = (iRec67[i] + fZec14[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec25_perm[i]=fYec25_tmp[count+i];
			
			// LOOP 0x28534c0
			// pre processing
			for (int i=0; i<4; i++) fYec26_tmp[i]=fYec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec26[i] = (iRec70[i] + fZec15[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec26_perm[i]=fYec26_tmp[count+i];
			
			// LOOP 0x2857f60
			// pre processing
			for (int i=0; i<4; i++) fYec27_tmp[i]=fYec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec27[i] = (iRec73[i] + fZec16[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec27_perm[i]=fYec27_tmp[count+i];
			
			// LOOP 0x285ca00
			// pre processing
			for (int i=0; i<4; i++) fYec28_tmp[i]=fYec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec28[i] = (iRec76[i] + fZec17[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec28_perm[i]=fYec28_tmp[count+i];
			
			// LOOP 0x28617f0
			// pre processing
			for (int i=0; i<4; i++) fYec29_tmp[i]=fYec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec29[i] = (iRec79[i] + fZec18[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec29_perm[i]=fYec29_tmp[count+i];
			
			// LOOP 0x2866290
			// pre processing
			for (int i=0; i<4; i++) fYec30_tmp[i]=fYec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec30[i] = (iRec82[i] + fZec19[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec30_perm[i]=fYec30_tmp[count+i];
			
			// LOOP 0x286ad50
			// pre processing
			for (int i=0; i<4; i++) fYec31_tmp[i]=fYec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec31[i] = (iRec85[i] + fZec20[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec31_perm[i]=fYec31_tmp[count+i];
			
			// LOOP 0x286f860
			// pre processing
			for (int i=0; i<4; i++) fYec32_tmp[i]=fYec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec32[i] = (iRec88[i] + fZec21[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec32_perm[i]=fYec32_tmp[count+i];
			
			// LOOP 0x28745b0
			// pre processing
			for (int i=0; i<4; i++) fYec33_tmp[i]=fYec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec33[i] = (iRec91[i] + fZec22[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec33_perm[i]=fYec33_tmp[count+i];
			
			// LOOP 0x2879050
			// pre processing
			for (int i=0; i<4; i++) fYec34_tmp[i]=fYec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec34[i] = (iRec94[i] + fZec23[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec34_perm[i]=fYec34_tmp[count+i];
			
			// LOOP 0x287da70
			// pre processing
			for (int i=0; i<4; i++) fYec35_tmp[i]=fYec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec35[i] = (iRec97[i] + fZec24[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec35_perm[i]=fYec35_tmp[count+i];
			
			// SECTION : 9
			// LOOP 0x2849b40
			// exec code
			for (int i=0; i<count; i++) {
				fZec25[i] = (0.5f * fYec24[i]);
			}
			
			// LOOP 0x284e940
			// exec code
			for (int i=0; i<count; i++) {
				fZec26[i] = (0.5f * fYec25[i]);
			}
			
			// LOOP 0x28533e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec27[i] = (0.5f * fYec26[i]);
			}
			
			// LOOP 0x2857e80
			// exec code
			for (int i=0; i<count; i++) {
				fZec28[i] = (0.5f * fYec27[i]);
			}
			
			// LOOP 0x285c920
			// exec code
			for (int i=0; i<count; i++) {
				fZec29[i] = (0.5f * fYec28[i]);
			}
			
			// LOOP 0x2861710
			// exec code
			for (int i=0; i<count; i++) {
				fZec30[i] = (0.5f * fYec29[i]);
			}
			
			// LOOP 0x28661b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec31[i] = (0.5f * fYec30[i]);
			}
			
			// LOOP 0x286ac70
			// exec code
			for (int i=0; i<count; i++) {
				fZec32[i] = (0.5f * fYec31[i]);
			}
			
			// LOOP 0x286f780
			// exec code
			for (int i=0; i<count; i++) {
				fZec33[i] = (0.5f * fYec32[i]);
			}
			
			// LOOP 0x28744d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec34[i] = (0.5f * fYec33[i]);
			}
			
			// LOOP 0x2878f70
			// exec code
			for (int i=0; i<count; i++) {
				fZec35[i] = (0.5f * fYec34[i]);
			}
			
			// LOOP 0x287d990
			// exec code
			for (int i=0; i<count; i++) {
				fZec36[i] = (0.5f * fYec35[i]);
			}
			
			// SECTION : 10
			// LOOP 0x2880de0
			// pre processing
			for (int i=0; i<4; i++) iRec100_tmp[i]=iRec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec100[i] = ((int(((fZec25[i] - (0.5f * fYec24[i-1])) < 0)))?(1 - iRec100[i-1]):iRec100[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec100_perm[i]=iRec100_tmp[count+i];
			
			// LOOP 0x2885960
			// pre processing
			for (int i=0; i<4; i++) iRec103_tmp[i]=iRec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec103[i] = ((int(((fZec26[i] - (0.5f * fYec25[i-1])) < 0)))?(1 - iRec103[i-1]):iRec103[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec103_perm[i]=iRec103_tmp[count+i];
			
			// LOOP 0x288a190
			// pre processing
			for (int i=0; i<4; i++) iRec106_tmp[i]=iRec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec106[i] = ((int(((fZec27[i] - (0.5f * fYec26[i-1])) < 0)))?(1 - iRec106[i-1]):iRec106[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec106_perm[i]=iRec106_tmp[count+i];
			
			// LOOP 0x288e9c0
			// pre processing
			for (int i=0; i<4; i++) iRec109_tmp[i]=iRec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec109[i] = ((int(((fZec28[i] - (0.5f * fYec27[i-1])) < 0)))?(1 - iRec109[i-1]):iRec109[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec109_perm[i]=iRec109_tmp[count+i];
			
			// LOOP 0x28931f0
			// pre processing
			for (int i=0; i<4; i++) iRec112_tmp[i]=iRec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec112[i] = ((int(((fZec29[i] - (0.5f * fYec28[i-1])) < 0)))?(1 - iRec112[i-1]):iRec112[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec112_perm[i]=iRec112_tmp[count+i];
			
			// LOOP 0x2897d70
			// pre processing
			for (int i=0; i<4; i++) iRec115_tmp[i]=iRec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec115[i] = ((int(((fZec30[i] - (0.5f * fYec29[i-1])) < 0)))?(1 - iRec115[i-1]):iRec115[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec115_perm[i]=iRec115_tmp[count+i];
			
			// LOOP 0x289c5a0
			// pre processing
			for (int i=0; i<4; i++) iRec118_tmp[i]=iRec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec118[i] = ((int(((fZec31[i] - (0.5f * fYec30[i-1])) < 0)))?(1 - iRec118[i-1]):iRec118[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec118_perm[i]=iRec118_tmp[count+i];
			
			// LOOP 0x28a0dd0
			// pre processing
			for (int i=0; i<4; i++) iRec121_tmp[i]=iRec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec121[i] = ((int(((fZec32[i] - (0.5f * fYec31[i-1])) < 0)))?(1 - iRec121[i-1]):iRec121[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec121_perm[i]=iRec121_tmp[count+i];
			
			// LOOP 0x28a5600
			// pre processing
			for (int i=0; i<4; i++) iRec124_tmp[i]=iRec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec124[i] = ((int(((fZec33[i] - (0.5f * fYec32[i-1])) < 0)))?(1 - iRec124[i-1]):iRec124[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec124_perm[i]=iRec124_tmp[count+i];
			
			// LOOP 0x28aa180
			// pre processing
			for (int i=0; i<4; i++) iRec127_tmp[i]=iRec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec127[i] = ((int(((fZec34[i] - (0.5f * fYec33[i-1])) < 0)))?(1 - iRec127[i-1]):iRec127[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec127_perm[i]=iRec127_tmp[count+i];
			
			// LOOP 0x28ae9b0
			// pre processing
			for (int i=0; i<4; i++) iRec130_tmp[i]=iRec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec130[i] = ((int(((fZec35[i] - (0.5f * fYec34[i-1])) < 0)))?(1 - iRec130[i-1]):iRec130[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec130_perm[i]=iRec130_tmp[count+i];
			
			// LOOP 0x28b31e0
			// pre processing
			for (int i=0; i<4; i++) iRec133_tmp[i]=iRec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec133[i] = ((int(((fZec36[i] - (0.5f * fYec35[i-1])) < 0)))?(1 - iRec133[i-1]):iRec133[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec133_perm[i]=iRec133_tmp[count+i];
			
			// SECTION : 11
			// LOOP 0x2882500
			// pre processing
			for (int i=0; i<4; i++) fYec36_tmp[i]=fYec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec36[i] = (iRec100[i] + fZec25[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec36_perm[i]=fYec36_tmp[count+i];
			
			// LOOP 0x2887080
			// pre processing
			for (int i=0; i<4; i++) fYec37_tmp[i]=fYec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec37[i] = (iRec103[i] + fZec26[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec37_perm[i]=fYec37_tmp[count+i];
			
			// LOOP 0x288b8b0
			// pre processing
			for (int i=0; i<4; i++) fYec38_tmp[i]=fYec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec38[i] = (iRec106[i] + fZec27[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec38_perm[i]=fYec38_tmp[count+i];
			
			// LOOP 0x28900a0
			// pre processing
			for (int i=0; i<4; i++) fYec39_tmp[i]=fYec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec39[i] = (iRec109[i] + fZec28[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec39_perm[i]=fYec39_tmp[count+i];
			
			// LOOP 0x2894910
			// pre processing
			for (int i=0; i<4; i++) fYec40_tmp[i]=fYec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec40[i] = (iRec112[i] + fZec29[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec40_perm[i]=fYec40_tmp[count+i];
			
			// LOOP 0x2899490
			// pre processing
			for (int i=0; i<4; i++) fYec41_tmp[i]=fYec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec41[i] = (iRec115[i] + fZec30[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec41_perm[i]=fYec41_tmp[count+i];
			
			// LOOP 0x289dcc0
			// pre processing
			for (int i=0; i<4; i++) fYec42_tmp[i]=fYec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec42[i] = (iRec118[i] + fZec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec42_perm[i]=fYec42_tmp[count+i];
			
			// LOOP 0x28a24f0
			// pre processing
			for (int i=0; i<4; i++) fYec43_tmp[i]=fYec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec43[i] = (iRec121[i] + fZec32[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec43_perm[i]=fYec43_tmp[count+i];
			
			// LOOP 0x28a6d20
			// pre processing
			for (int i=0; i<4; i++) fYec44_tmp[i]=fYec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec44[i] = (iRec124[i] + fZec33[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec44_perm[i]=fYec44_tmp[count+i];
			
			// LOOP 0x28ab8a0
			// pre processing
			for (int i=0; i<4; i++) fYec45_tmp[i]=fYec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec45[i] = (iRec127[i] + fZec34[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec45_perm[i]=fYec45_tmp[count+i];
			
			// LOOP 0x28b00d0
			// pre processing
			for (int i=0; i<4; i++) fYec46_tmp[i]=fYec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec46[i] = (iRec130[i] + fZec35[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec46_perm[i]=fYec46_tmp[count+i];
			
			// LOOP 0x28b4880
			// pre processing
			for (int i=0; i<4; i++) fYec47_tmp[i]=fYec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec47[i] = (iRec133[i] + fZec36[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec47_perm[i]=fYec47_tmp[count+i];
			
			// SECTION : 12
			// LOOP 0x2882420
			// exec code
			for (int i=0; i<count; i++) {
				fZec37[i] = (0.5f * fYec36[i]);
			}
			
			// LOOP 0x2886fa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec38[i] = (0.5f * fYec37[i]);
			}
			
			// LOOP 0x288b7d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec39[i] = (0.5f * fYec38[i]);
			}
			
			// LOOP 0x288ffc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec40[i] = (0.5f * fYec39[i]);
			}
			
			// LOOP 0x2894830
			// exec code
			for (int i=0; i<count; i++) {
				fZec41[i] = (0.5f * fYec40[i]);
			}
			
			// LOOP 0x28993b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec42[i] = (0.5f * fYec41[i]);
			}
			
			// LOOP 0x289dbe0
			// exec code
			for (int i=0; i<count; i++) {
				fZec43[i] = (0.5f * fYec42[i]);
			}
			
			// LOOP 0x28a2410
			// exec code
			for (int i=0; i<count; i++) {
				fZec44[i] = (0.5f * fYec43[i]);
			}
			
			// LOOP 0x28a6c40
			// exec code
			for (int i=0; i<count; i++) {
				fZec45[i] = (0.5f * fYec44[i]);
			}
			
			// LOOP 0x28ab7c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec46[i] = (0.5f * fYec45[i]);
			}
			
			// LOOP 0x28afff0
			// exec code
			for (int i=0; i<count; i++) {
				fZec47[i] = (0.5f * fYec46[i]);
			}
			
			// LOOP 0x28b47a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec48[i] = (0.5f * fYec47[i]);
			}
			
			// SECTION : 13
			// LOOP 0x2a2d0d0
			// pre processing
			for (int i=0; i<4; i++) iRec137_tmp[i]=iRec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec137[i] = ((int(((fZec37[i] - (0.5f * fYec36[i-1])) < 0)))?(1 - iRec137[i-1]):iRec137[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec137_perm[i]=iRec137_tmp[count+i];
			
			// LOOP 0x2a31bd0
			// pre processing
			for (int i=0; i<4; i++) iRec140_tmp[i]=iRec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec140[i] = ((int(((fZec38[i] - (0.5f * fYec37[i-1])) < 0)))?(1 - iRec140[i-1]):iRec140[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec140_perm[i]=iRec140_tmp[count+i];
			
			// LOOP 0x2a36740
			// pre processing
			for (int i=0; i<4; i++) iRec143_tmp[i]=iRec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec143[i] = ((int(((fZec39[i] - (0.5f * fYec38[i-1])) < 0)))?(1 - iRec143[i-1]):iRec143[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec143_perm[i]=iRec143_tmp[count+i];
			
			// LOOP 0x2a3b510
			// pre processing
			for (int i=0; i<4; i++) iRec146_tmp[i]=iRec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec146[i] = ((int(((fZec40[i] - (0.5f * fYec39[i-1])) < 0)))?(1 - iRec146[i-1]):iRec146[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec146_perm[i]=iRec146_tmp[count+i];
			
			// LOOP 0x2a402e0
			// pre processing
			for (int i=0; i<4; i++) iRec149_tmp[i]=iRec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec149[i] = ((int(((fZec41[i] - (0.5f * fYec40[i-1])) < 0)))?(1 - iRec149[i-1]):iRec149[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec149_perm[i]=iRec149_tmp[count+i];
			
			// LOOP 0x2a45400
			// pre processing
			for (int i=0; i<4; i++) iRec152_tmp[i]=iRec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec152[i] = ((int(((fZec42[i] - (0.5f * fYec41[i-1])) < 0)))?(1 - iRec152[i-1]):iRec152[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec152_perm[i]=iRec152_tmp[count+i];
			
			// LOOP 0x2a4a1d0
			// pre processing
			for (int i=0; i<4; i++) iRec155_tmp[i]=iRec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec155[i] = ((int(((fZec43[i] - (0.5f * fYec42[i-1])) < 0)))?(1 - iRec155[i-1]):iRec155[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec155_perm[i]=iRec155_tmp[count+i];
			
			// LOOP 0x2a4ef80
			// pre processing
			for (int i=0; i<4; i++) iRec158_tmp[i]=iRec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec158[i] = ((int(((fZec44[i] - (0.5f * fYec43[i-1])) < 0)))?(1 - iRec158[i-1]):iRec158[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec158_perm[i]=iRec158_tmp[count+i];
			
			// LOOP 0x2b6a280
			// pre processing
			for (int i=0; i<4; i++) iRec162_tmp[i]=iRec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec162[i] = ((int(((fZec45[i] - (0.5f * fYec44[i-1])) < 0)))?(1 - iRec162[i-1]):iRec162[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec162_perm[i]=iRec162_tmp[count+i];
			
			// LOOP 0x2b6f500
			// pre processing
			for (int i=0; i<4; i++) iRec165_tmp[i]=iRec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec165[i] = ((int(((fZec46[i] - (0.5f * fYec45[i-1])) < 0)))?(1 - iRec165[i-1]):iRec165[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec165_perm[i]=iRec165_tmp[count+i];
			
			// LOOP 0x2b742d0
			// pre processing
			for (int i=0; i<4; i++) iRec168_tmp[i]=iRec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec168[i] = ((int(((fZec47[i] - (0.5f * fYec46[i-1])) < 0)))?(1 - iRec168[i-1]):iRec168[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec168_perm[i]=iRec168_tmp[count+i];
			
			// LOOP 0x2b79080
			// pre processing
			for (int i=0; i<4; i++) iRec171_tmp[i]=iRec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec171[i] = ((int(((fZec48[i] - (0.5f * fYec47[i-1])) < 0)))?(1 - iRec171[i-1]):iRec171[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec171_perm[i]=iRec171_tmp[count+i];
			
			// SECTION : 14
			// LOOP 0x2a2e7f0
			// pre processing
			for (int i=0; i<4; i++) fYec49_tmp[i]=fYec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec49[i] = (iRec137[i] + fZec37[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec49_perm[i]=fYec49_tmp[count+i];
			
			// LOOP 0x2a33290
			// pre processing
			for (int i=0; i<4; i++) fYec50_tmp[i]=fYec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec50[i] = (iRec140[i] + fZec38[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec50_perm[i]=fYec50_tmp[count+i];
			
			// LOOP 0x2a37fe0
			// pre processing
			for (int i=0; i<4; i++) fYec51_tmp[i]=fYec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec51[i] = (iRec143[i] + fZec39[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec51_perm[i]=fYec51_tmp[count+i];
			
			// LOOP 0x2a3cdb0
			// pre processing
			for (int i=0; i<4; i++) fYec52_tmp[i]=fYec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec52[i] = (iRec146[i] + fZec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec52_perm[i]=fYec52_tmp[count+i];
			
			// LOOP 0x2a41b80
			// pre processing
			for (int i=0; i<4; i++) fYec53_tmp[i]=fYec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec53[i] = (iRec149[i] + fZec41[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec53_perm[i]=fYec53_tmp[count+i];
			
			// LOOP 0x2a46ca0
			// pre processing
			for (int i=0; i<4; i++) fYec54_tmp[i]=fYec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec54[i] = (iRec152[i] + fZec42[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec54_perm[i]=fYec54_tmp[count+i];
			
			// LOOP 0x2a4ba70
			// pre processing
			for (int i=0; i<4; i++) fYec55_tmp[i]=fYec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec55[i] = (iRec155[i] + fZec43[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec55_perm[i]=fYec55_tmp[count+i];
			
			// LOOP 0x2a50820
			// pre processing
			for (int i=0; i<4; i++) fYec56_tmp[i]=fYec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec56[i] = (iRec158[i] + fZec44[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec56_perm[i]=fYec56_tmp[count+i];
			
			// LOOP 0x2b6bc80
			// pre processing
			for (int i=0; i<4; i++) fYec58_tmp[i]=fYec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec58[i] = (iRec162[i] + fZec45[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec58_perm[i]=fYec58_tmp[count+i];
			
			// LOOP 0x2b70da0
			// pre processing
			for (int i=0; i<4; i++) fYec59_tmp[i]=fYec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec59[i] = (iRec165[i] + fZec46[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec59_perm[i]=fYec59_tmp[count+i];
			
			// LOOP 0x2b75b70
			// pre processing
			for (int i=0; i<4; i++) fYec60_tmp[i]=fYec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec60[i] = (iRec168[i] + fZec47[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec60_perm[i]=fYec60_tmp[count+i];
			
			// LOOP 0x2b7a920
			// pre processing
			for (int i=0; i<4; i++) fYec61_tmp[i]=fYec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec61[i] = (iRec171[i] + fZec48[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec61_perm[i]=fYec61_tmp[count+i];
			
			// SECTION : 15
			// LOOP 0x2a2e710
			// exec code
			for (int i=0; i<count; i++) {
				fZec158[i] = (0.5f * fYec49[i]);
			}
			
			// LOOP 0x2a331b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec159[i] = (0.5f * fYec50[i]);
			}
			
			// LOOP 0x2a37f00
			// exec code
			for (int i=0; i<count; i++) {
				fZec160[i] = (0.5f * fYec51[i]);
			}
			
			// LOOP 0x2a3ccd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec161[i] = (0.5f * fYec52[i]);
			}
			
			// LOOP 0x2a41aa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec162[i] = (0.5f * fYec53[i]);
			}
			
			// LOOP 0x2a46bc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec163[i] = (0.5f * fYec54[i]);
			}
			
			// LOOP 0x2a4b990
			// exec code
			for (int i=0; i<count; i++) {
				fZec164[i] = (0.5f * fYec55[i]);
			}
			
			// LOOP 0x2a50740
			// exec code
			for (int i=0; i<count; i++) {
				fZec165[i] = (0.5f * fYec56[i]);
			}
			
			// LOOP 0x2b6bba0
			// exec code
			for (int i=0; i<count; i++) {
				fZec168[i] = (0.5f * fYec58[i]);
			}
			
			// LOOP 0x2b70cc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec169[i] = (0.5f * fYec59[i]);
			}
			
			// LOOP 0x2b75a90
			// exec code
			for (int i=0; i<count; i++) {
				fZec170[i] = (0.5f * fYec60[i]);
			}
			
			// LOOP 0x2b7a840
			// exec code
			for (int i=0; i<count; i++) {
				fZec171[i] = (0.5f * fYec61[i]);
			}
			
			// SECTION : 16
			// LOOP 0x2c929c0
			// pre processing
			for (int i=0; i<4; i++) iRec175_tmp[i]=iRec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec175[i] = ((int(((fZec158[i] - (0.5f * fYec49[i-1])) < 0)))?(1 - iRec175[i-1]):iRec175[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec175_perm[i]=iRec175_tmp[count+i];
			
			// LOOP 0x2c98310
			// pre processing
			for (int i=0; i<4; i++) iRec178_tmp[i]=iRec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec178[i] = ((int(((fZec159[i] - (0.5f * fYec50[i-1])) < 0)))?(1 - iRec178[i-1]):iRec178[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec178_perm[i]=iRec178_tmp[count+i];
			
			// LOOP 0x2c9d2f0
			// pre processing
			for (int i=0; i<4; i++) iRec181_tmp[i]=iRec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec181[i] = ((int(((fZec160[i] - (0.5f * fYec51[i-1])) < 0)))?(1 - iRec181[i-1]):iRec181[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec181_perm[i]=iRec181_tmp[count+i];
			
			// LOOP 0x2ca22c0
			// pre processing
			for (int i=0; i<4; i++) iRec184_tmp[i]=iRec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec184[i] = ((int(((fZec161[i] - (0.5f * fYec52[i-1])) < 0)))?(1 - iRec184[i-1]):iRec184[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec184_perm[i]=iRec184_tmp[count+i];
			
			// LOOP 0x2ca7270
			// pre processing
			for (int i=0; i<4; i++) iRec187_tmp[i]=iRec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec187[i] = ((int(((fZec162[i] - (0.5f * fYec53[i-1])) < 0)))?(1 - iRec187[i-1]):iRec187[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec187_perm[i]=iRec187_tmp[count+i];
			
			// LOOP 0x2da0a10
			// pre processing
			for (int i=0; i<4; i++) iRec191_tmp[i]=iRec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec191[i] = ((int(((fZec163[i] - (0.5f * fYec54[i-1])) < 0)))?(1 - iRec191[i-1]):iRec191[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec191_perm[i]=iRec191_tmp[count+i];
			
			// LOOP 0x2da5200
			// pre processing
			for (int i=0; i<4; i++) iRec194_tmp[i]=iRec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec194[i] = ((int(((fZec164[i] - (0.5f * fYec55[i-1])) < 0)))?(1 - iRec194[i-1]):iRec194[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec194_perm[i]=iRec194_tmp[count+i];
			
			// LOOP 0x2da9e40
			// pre processing
			for (int i=0; i<4; i++) iRec197_tmp[i]=iRec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec197[i] = ((int(((fZec165[i] - (0.5f * fYec56[i-1])) < 0)))?(1 - iRec197[i-1]):iRec197[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec197_perm[i]=iRec197_tmp[count+i];
			
			// LOOP 0x2daed50
			// pre processing
			for (int i=0; i<4; i++) iRec200_tmp[i]=iRec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec200[i] = ((int(((fZec168[i] - (0.5f * fYec58[i-1])) < 0)))?(1 - iRec200[i-1]):iRec200[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec200_perm[i]=iRec200_tmp[count+i];
			
			// LOOP 0x2db4070
			// pre processing
			for (int i=0; i<4; i++) iRec203_tmp[i]=iRec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec203[i] = ((int(((fZec169[i] - (0.5f * fYec59[i-1])) < 0)))?(1 - iRec203[i-1]):iRec203[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec203_perm[i]=iRec203_tmp[count+i];
			
			// LOOP 0x2db9020
			// pre processing
			for (int i=0; i<4; i++) iRec206_tmp[i]=iRec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec206[i] = ((int(((fZec170[i] - (0.5f * fYec60[i-1])) < 0)))?(1 - iRec206[i-1]):iRec206[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec206_perm[i]=iRec206_tmp[count+i];
			
			// LOOP 0x2dbe010
			// pre processing
			for (int i=0; i<4; i++) iRec209_tmp[i]=iRec209_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec209[i] = ((int(((fZec171[i] - (0.5f * fYec61[i-1])) < 0)))?(1 - iRec209[i-1]):iRec209[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec209_perm[i]=iRec209_tmp[count+i];
			
			// SECTION : 17
			// LOOP 0x28a0990
			// pre processing
			for (int i=0; i<4; i++) fRec120_tmp[i]=fRec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec120[i] = (fRec120[i-1] + (fConst12 * (yc20_get_sample(fZec44[i], 4, 0) - fRec120[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec120_perm[i]=fRec120_tmp[count+i];
			
			// LOOP 0x28a51c0
			// pre processing
			for (int i=0; i<4; i++) fRec123_tmp[i]=fRec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec123[i] = (fRec123[i-1] + (fConst13 * (yc20_get_sample(fZec45[i], 3, 0) - fRec123[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec123_perm[i]=fRec123_tmp[count+i];
			
			// LOOP 0x28a9d40
			// pre processing
			for (int i=0; i<4; i++) fRec126_tmp[i]=fRec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec126[i] = (fRec126[i-1] + (fConst13 * (yc20_get_sample(fZec46[i], 2, 0) - fRec126[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec126_perm[i]=fRec126_tmp[count+i];
			
			// LOOP 0x28ae570
			// pre processing
			for (int i=0; i<4; i++) fRec129_tmp[i]=fRec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec129[i] = (fRec129[i-1] + (fConst13 * (yc20_get_sample(fZec47[i], 1, 0) - fRec129[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec129_perm[i]=fRec129_tmp[count+i];
			
			// LOOP 0x28b2da0
			// pre processing
			for (int i=0; i<4; i++) fRec132_tmp[i]=fRec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec132[i] = (fRec132[i-1] + (fConst13 * (yc20_get_sample(fZec48[i], 0, 0) - fRec132[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec132_perm[i]=fRec132_tmp[count+i];
			
			// LOOP 0x2c94470
			// pre processing
			for (int i=0; i<4; i++) fYec63_tmp[i]=fYec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec63[i] = (iRec175[i] + fZec158[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec63_perm[i]=fYec63_tmp[count+i];
			
			// LOOP 0x2c99c60
			// pre processing
			for (int i=0; i<4; i++) fYec64_tmp[i]=fYec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec64[i] = (iRec178[i] + fZec159[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec64_perm[i]=fYec64_tmp[count+i];
			
			// LOOP 0x2c9ec40
			// pre processing
			for (int i=0; i<4; i++) fYec65_tmp[i]=fYec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec65[i] = (iRec181[i] + fZec160[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec65_perm[i]=fYec65_tmp[count+i];
			
			// LOOP 0x2ca3c10
			// pre processing
			for (int i=0; i<4; i++) fYec66_tmp[i]=fYec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec66[i] = (iRec184[i] + fZec161[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec66_perm[i]=fYec66_tmp[count+i];
			
			// LOOP 0x2ca8bc0
			// pre processing
			for (int i=0; i<4; i++) fYec67_tmp[i]=fYec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec67[i] = (iRec187[i] + fZec162[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec67_perm[i]=fYec67_tmp[count+i];
			
			// LOOP 0x2da2180
			// pre processing
			for (int i=0; i<4; i++) fYec69_tmp[i]=fYec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec69[i] = (iRec191[i] + fZec163[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec69_perm[i]=fYec69_tmp[count+i];
			
			// LOOP 0x2da6970
			// pre processing
			for (int i=0; i<4; i++) fYec70_tmp[i]=fYec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec70[i] = (iRec194[i] + fZec164[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec70_perm[i]=fYec70_tmp[count+i];
			
			// LOOP 0x2dab790
			// pre processing
			for (int i=0; i<4; i++) fYec71_tmp[i]=fYec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec71[i] = (iRec197[i] + fZec165[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec71_perm[i]=fYec71_tmp[count+i];
			
			// LOOP 0x2db06a0
			// pre processing
			for (int i=0; i<4; i++) fYec72_tmp[i]=fYec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec72[i] = (iRec200[i] + fZec168[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec72_perm[i]=fYec72_tmp[count+i];
			
			// LOOP 0x2db59c0
			// pre processing
			for (int i=0; i<4; i++) fYec73_tmp[i]=fYec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec73[i] = (iRec203[i] + fZec169[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec73_perm[i]=fYec73_tmp[count+i];
			
			// LOOP 0x2dbaa10
			// pre processing
			for (int i=0; i<4; i++) fYec74_tmp[i]=fYec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec74[i] = (iRec206[i] + fZec170[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec74_perm[i]=fYec74_tmp[count+i];
			
			// LOOP 0x2dbf960
			// pre processing
			for (int i=0; i<4; i++) fYec75_tmp[i]=fYec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec75[i] = (iRec209[i] + fZec171[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec75_perm[i]=fYec75_tmp[count+i];
			
			// SECTION : 18
			// LOOP 0x288e580
			// pre processing
			for (int i=0; i<4; i++) fRec108_tmp[i]=fRec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec108[i] = (fRec108[i-1] + (fConst11 * (yc20_get_sample(fZec40[i], 8, 0) - fRec108[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec108_perm[i]=fRec108_tmp[count+i];
			
			// LOOP 0x2892db0
			// pre processing
			for (int i=0; i<4; i++) fRec111_tmp[i]=fRec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec111[i] = (fRec111[i-1] + (fConst12 * (yc20_get_sample(fZec41[i], 7, 0) - fRec111[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec111_perm[i]=fRec111_tmp[count+i];
			
			// LOOP 0x2897930
			// pre processing
			for (int i=0; i<4; i++) fRec114_tmp[i]=fRec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec114[i] = (fRec114[i-1] + (fConst12 * (yc20_get_sample(fZec42[i], 6, 0) - fRec114[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec114_perm[i]=fRec114_tmp[count+i];
			
			// LOOP 0x289c160
			// pre processing
			for (int i=0; i<4; i++) fRec117_tmp[i]=fRec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec117[i] = (fRec117[i-1] + (fConst12 * (yc20_get_sample(fZec43[i], 5, 0) - fRec117[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec117_perm[i]=fRec117_tmp[count+i];
			
			// LOOP 0x28a05d0
			// pre processing
			for (int i=0; i<4; i++) fRec119_tmp[i]=fRec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec119[i] = (fConst4 * ((fRec120[i] - fRec120[i-1]) + fRec119[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec119_perm[i]=fRec119_tmp[count+i];
			
			// LOOP 0x28a4e00
			// pre processing
			for (int i=0; i<4; i++) fRec122_tmp[i]=fRec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec122[i] = (fConst4 * ((fRec123[i] - fRec123[i-1]) + fRec122[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec122_perm[i]=fRec122_tmp[count+i];
			
			// LOOP 0x28a9980
			// pre processing
			for (int i=0; i<4; i++) fRec125_tmp[i]=fRec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec125[i] = (fConst4 * ((fRec126[i] - fRec126[i-1]) + fRec125[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec125_perm[i]=fRec125_tmp[count+i];
			
			// LOOP 0x28ae1b0
			// pre processing
			for (int i=0; i<4; i++) fRec128_tmp[i]=fRec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec128[i] = (fConst4 * ((fRec129[i] - fRec129[i-1]) + fRec128[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec128_perm[i]=fRec128_tmp[count+i];
			
			// LOOP 0x28b2a00
			// pre processing
			for (int i=0; i<4; i++) fRec131_tmp[i]=fRec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec131[i] = (fConst4 * ((fRec132[i] - fRec132[i-1]) + fRec131[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec131_perm[i]=fRec131_tmp[count+i];
			
			// LOOP 0x2c94390
			// exec code
			for (int i=0; i<count; i++) {
				fZec174[i] = (0.5f * fYec63[i]);
			}
			
			// LOOP 0x2c99b80
			// exec code
			for (int i=0; i<count; i++) {
				fZec175[i] = (0.5f * fYec64[i]);
			}
			
			// LOOP 0x2c9eb60
			// exec code
			for (int i=0; i<count; i++) {
				fZec176[i] = (0.5f * fYec65[i]);
			}
			
			// LOOP 0x2ca3b30
			// exec code
			for (int i=0; i<count; i++) {
				fZec177[i] = (0.5f * fYec66[i]);
			}
			
			// LOOP 0x2ca8ae0
			// exec code
			for (int i=0; i<count; i++) {
				fZec178[i] = (0.5f * fYec67[i]);
			}
			
			// LOOP 0x2da20a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec184[i] = (0.5f * fYec69[i]);
			}
			
			// LOOP 0x2da6890
			// exec code
			for (int i=0; i<count; i++) {
				fZec185[i] = (0.5f * fYec70[i]);
			}
			
			// LOOP 0x2dab6b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec186[i] = (0.5f * fYec71[i]);
			}
			
			// LOOP 0x2db05c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec187[i] = (0.5f * fYec72[i]);
			}
			
			// LOOP 0x2db58e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec188[i] = (0.5f * fYec73[i]);
			}
			
			// LOOP 0x2dba930
			// exec code
			for (int i=0; i<count; i++) {
				fZec189[i] = (0.5f * fYec74[i]);
			}
			
			// LOOP 0x2dbf880
			// exec code
			for (int i=0; i<count; i++) {
				fZec190[i] = (0.5f * fYec75[i]);
			}
			
			// SECTION : 19
			// LOOP 0x287bfa0
			// pre processing
			for (int i=0; i<4; i++) fRec96_tmp[i]=fRec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec96[i] = (fRec96[i-1] + (fConst10 * (yc20_get_sample(fZec36[i], 0, 0) - fRec96[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec96_perm[i]=fRec96_tmp[count+i];
			
			// LOOP 0x28809a0
			// pre processing
			for (int i=0; i<4; i++) fRec99_tmp[i]=fRec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec99[i] = (fRec99[i-1] + (fConst11 * (yc20_get_sample(fZec37[i], 11, 0) - fRec99[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec99_perm[i]=fRec99_tmp[count+i];
			
			// LOOP 0x2885520
			// pre processing
			for (int i=0; i<4; i++) fRec102_tmp[i]=fRec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec102[i] = (fRec102[i-1] + (fConst11 * (yc20_get_sample(fZec38[i], 10, 0) - fRec102[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec102_perm[i]=fRec102_tmp[count+i];
			
			// LOOP 0x2889d50
			// pre processing
			for (int i=0; i<4; i++) fRec105_tmp[i]=fRec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec105[i] = (fRec105[i-1] + (fConst11 * (yc20_get_sample(fZec39[i], 9, 0) - fRec105[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec105_perm[i]=fRec105_tmp[count+i];
			
			// LOOP 0x288e1c0
			// pre processing
			for (int i=0; i<4; i++) fRec107_tmp[i]=fRec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec107[i] = (fConst4 * ((fRec108[i] - fRec108[i-1]) + fRec107[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec107_perm[i]=fRec107_tmp[count+i];
			
			// LOOP 0x28929f0
			// pre processing
			for (int i=0; i<4; i++) fRec110_tmp[i]=fRec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec110[i] = (fConst4 * ((fRec111[i] - fRec111[i-1]) + fRec110[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec110_perm[i]=fRec110_tmp[count+i];
			
			// LOOP 0x2897570
			// pre processing
			for (int i=0; i<4; i++) fRec113_tmp[i]=fRec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec113[i] = (fConst4 * ((fRec114[i] - fRec114[i-1]) + fRec113[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec113_perm[i]=fRec113_tmp[count+i];
			
			// LOOP 0x289bda0
			// pre processing
			for (int i=0; i<4; i++) fRec116_tmp[i]=fRec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec116[i] = (fConst4 * ((fRec117[i] - fRec117[i-1]) + fRec116[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec116_perm[i]=fRec116_tmp[count+i];
			
			// LOOP 0x29f5e10
			// exec code
			for (int i=0; i<count; i++) {
				fZec124[i] = (fRec119[i] + (fRec122[i] + (fRec125[i] + (fRec131[i] + fRec128[i]))));
			}
			
			// LOOP 0x2ec6040
			// pre processing
			for (int i=0; i<4; i++) iRec213_tmp[i]=iRec213_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec213[i] = ((int(((fZec174[i] - (0.5f * fYec63[i-1])) < 0)))?(1 - iRec213[i-1]):iRec213[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec213_perm[i]=iRec213_tmp[count+i];
			
			// LOOP 0x2ecb800
			// pre processing
			for (int i=0; i<4; i++) iRec216_tmp[i]=iRec216_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec216[i] = ((int(((fZec175[i] - (0.5f * fYec64[i-1])) < 0)))?(1 - iRec216[i-1]):iRec216[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec216_perm[i]=iRec216_tmp[count+i];
			
			// LOOP 0x2ed09c0
			// pre processing
			for (int i=0; i<4; i++) iRec219_tmp[i]=iRec219_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec219[i] = ((int(((fZec176[i] - (0.5f * fYec65[i-1])) < 0)))?(1 - iRec219[i-1]):iRec219[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec219_perm[i]=iRec219_tmp[count+i];
			
			// LOOP 0x2ed5b70
			// pre processing
			for (int i=0; i<4; i++) iRec222_tmp[i]=iRec222_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec222[i] = ((int(((fZec177[i] - (0.5f * fYec66[i-1])) < 0)))?(1 - iRec222[i-1]):iRec222[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec222_perm[i]=iRec222_tmp[count+i];
			
			// LOOP 0x2edad20
			// pre processing
			for (int i=0; i<4; i++) iRec225_tmp[i]=iRec225_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec225[i] = ((int(((fZec178[i] - (0.5f * fYec67[i-1])) < 0)))?(1 - iRec225[i-1]):iRec225[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec225_perm[i]=iRec225_tmp[count+i];
			
			// LOOP 0x2ee01e0
			// pre processing
			for (int i=0; i<4; i++) iRec228_tmp[i]=iRec228_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec228[i] = ((int(((fZec184[i] - (0.5f * fYec69[i-1])) < 0)))?(1 - iRec228[i-1]):iRec228[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec228_perm[i]=iRec228_tmp[count+i];
			
			// LOOP 0x2ee53c0
			// pre processing
			for (int i=0; i<4; i++) iRec231_tmp[i]=iRec231_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec231[i] = ((int(((fZec185[i] - (0.5f * fYec70[i-1])) < 0)))?(1 - iRec231[i-1]):iRec231[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec231_perm[i]=iRec231_tmp[count+i];
			
			// LOOP 0x2eea590
			// pre processing
			for (int i=0; i<4; i++) iRec234_tmp[i]=iRec234_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec234[i] = ((int(((fZec186[i] - (0.5f * fYec71[i-1])) < 0)))?(1 - iRec234[i-1]):iRec234[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec234_perm[i]=iRec234_tmp[count+i];
			
			// LOOP 0x2eef740
			// pre processing
			for (int i=0; i<4; i++) iRec237_tmp[i]=iRec237_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec237[i] = ((int(((fZec187[i] - (0.5f * fYec72[i-1])) < 0)))?(1 - iRec237[i-1]):iRec237[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec237_perm[i]=iRec237_tmp[count+i];
			
			// LOOP 0x2ef4c40
			// pre processing
			for (int i=0; i<4; i++) iRec240_tmp[i]=iRec240_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec240[i] = ((int(((fZec188[i] - (0.5f * fYec73[i-1])) < 0)))?(1 - iRec240[i-1]):iRec240[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec240_perm[i]=iRec240_tmp[count+i];
			
			// LOOP 0x2ef9df0
			// pre processing
			for (int i=0; i<4; i++) iRec243_tmp[i]=iRec243_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec243[i] = ((int(((fZec189[i] - (0.5f * fYec74[i-1])) < 0)))?(1 - iRec243[i-1]):iRec243[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec243_perm[i]=iRec243_tmp[count+i];
			
			// LOOP 0x2efefa0
			// pre processing
			for (int i=0; i<4; i++) iRec246_tmp[i]=iRec246_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec246[i] = ((int(((fZec190[i] - (0.5f * fYec75[i-1])) < 0)))?(1 - iRec246[i-1]):iRec246[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec246_perm[i]=iRec246_tmp[count+i];
			
			// SECTION : 20
			// LOOP 0x27e5cf0
			// pre processing
			for (int i=0; i<4; i++) fYec0_tmp[i]=fYec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec0[i] = yc20_get_sample(fRec2[i], 0, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec0_perm[i]=fYec0_tmp[count+i];
			
			// LOOP 0x27ea300
			// pre processing
			for (int i=0; i<4; i++) fYec1_tmp[i]=fYec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec1[i] = yc20_get_sample(fRec5[i], 11, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec1_perm[i]=fYec1_tmp[count+i];
			
			// LOOP 0x27ee0c0
			// pre processing
			for (int i=0; i<4; i++) fYec2_tmp[i]=fYec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec2[i] = yc20_get_sample(fRec7[i], 10, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec2_perm[i]=fYec2_tmp[count+i];
			
			// LOOP 0x27f1df0
			// pre processing
			for (int i=0; i<4; i++) fYec3_tmp[i]=fYec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec3[i] = yc20_get_sample(fRec9[i], 9, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec3_perm[i]=fYec3_tmp[count+i];
			
			// LOOP 0x27f5ba0
			// pre processing
			for (int i=0; i<4; i++) fYec4_tmp[i]=fYec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec4[i] = yc20_get_sample(fRec11[i], 8, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec4_perm[i]=fYec4_tmp[count+i];
			
			// LOOP 0x27f9950
			// pre processing
			for (int i=0; i<4; i++) fYec5_tmp[i]=fYec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec5[i] = yc20_get_sample(fRec13[i], 7, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec5_perm[i]=fYec5_tmp[count+i];
			
			// LOOP 0x27fd700
			// pre processing
			for (int i=0; i<4; i++) fYec6_tmp[i]=fYec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec6[i] = yc20_get_sample(fRec15[i], 6, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec6_perm[i]=fYec6_tmp[count+i];
			
			// LOOP 0x28014b0
			// pre processing
			for (int i=0; i<4; i++) fYec7_tmp[i]=fYec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec7[i] = yc20_get_sample(fRec17[i], 5, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec7_perm[i]=fYec7_tmp[count+i];
			
			// LOOP 0x2805260
			// pre processing
			for (int i=0; i<4; i++) fYec8_tmp[i]=fYec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec8[i] = yc20_get_sample(fRec19[i], 4, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec8_perm[i]=fYec8_tmp[count+i];
			
			// LOOP 0x2809010
			// pre processing
			for (int i=0; i<4; i++) fYec9_tmp[i]=fYec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec9[i] = yc20_get_sample(fRec21[i], 3, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec9_perm[i]=fYec9_tmp[count+i];
			
			// LOOP 0x280cc90
			// pre processing
			for (int i=0; i<4; i++) fYec10_tmp[i]=fYec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec10[i] = yc20_get_sample(fRec23[i], 2, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec10_perm[i]=fYec10_tmp[count+i];
			
			// LOOP 0x2810980
			// pre processing
			for (int i=0; i<4; i++) fYec11_tmp[i]=fYec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec11[i] = yc20_get_sample(fRec25[i], 1, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec11_perm[i]=fYec11_tmp[count+i];
			
			// LOOP 0x2812580
			// pre processing
			for (int i=0; i<4; i++) fRec27_tmp[i]=fRec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec27[i] = (fRec27[i-1] + (fConst5 * (yc20_get_sample(fZec13[i], 11, 0) - fRec27[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec27_perm[i]=fRec27_tmp[count+i];
			
			// LOOP 0x2817090
			// pre processing
			for (int i=0; i<4; i++) fRec30_tmp[i]=fRec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec30[i] = (fRec30[i-1] + (fConst5 * (yc20_get_sample(fZec14[i], 10, 0) - fRec30[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec30_perm[i]=fRec30_tmp[count+i];
			
			// LOOP 0x281b750
			// pre processing
			for (int i=0; i<4; i++) fRec33_tmp[i]=fRec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec33[i] = (fRec33[i-1] + (fConst5 * (yc20_get_sample(fZec15[i], 9, 0) - fRec33[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec33_perm[i]=fRec33_tmp[count+i];
			
			// LOOP 0x281fe10
			// pre processing
			for (int i=0; i<4; i++) fRec36_tmp[i]=fRec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec36[i] = (fRec36[i-1] + (fConst5 * (yc20_get_sample(fZec16[i], 8, 0) - fRec36[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec36_perm[i]=fRec36_tmp[count+i];
			
			// LOOP 0x28244d0
			// pre processing
			for (int i=0; i<4; i++) fRec39_tmp[i]=fRec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec39[i] = (fRec39[i-1] + (fConst6 * (yc20_get_sample(fZec17[i], 7, 0) - fRec39[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec39_perm[i]=fRec39_tmp[count+i];
			
			// LOOP 0x2828ed0
			// pre processing
			for (int i=0; i<4; i++) fRec42_tmp[i]=fRec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec42[i] = (fRec42[i-1] + (fConst6 * (yc20_get_sample(fZec18[i], 6, 0) - fRec42[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec42_perm[i]=fRec42_tmp[count+i];
			
			// LOOP 0x282d1c0
			// pre processing
			for (int i=0; i<4; i++) fRec45_tmp[i]=fRec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec45[i] = (fRec45[i-1] + (fConst6 * (yc20_get_sample(fZec19[i], 5, 0) - fRec45[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec45_perm[i]=fRec45_tmp[count+i];
			
			// LOOP 0x2831c70
			// pre processing
			for (int i=0; i<4; i++) fRec48_tmp[i]=fRec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec48[i] = (fRec48[i-1] + (fConst6 * (yc20_get_sample(fZec20[i], 4, 0) - fRec48[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec48_perm[i]=fRec48_tmp[count+i];
			
			// LOOP 0x2836330
			// pre processing
			for (int i=0; i<4; i++) fRec51_tmp[i]=fRec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec51[i] = (fRec51[i-1] + (fConst7 * (yc20_get_sample(fZec21[i], 3, 0) - fRec51[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec51_perm[i]=fRec51_tmp[count+i];
			
			// LOOP 0x283ad30
			// pre processing
			for (int i=0; i<4; i++) fRec54_tmp[i]=fRec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec54[i] = (fRec54[i-1] + (fConst7 * (yc20_get_sample(fZec22[i], 2, 0) - fRec54[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec54_perm[i]=fRec54_tmp[count+i];
			
			// LOOP 0x283f3f0
			// pre processing
			for (int i=0; i<4; i++) fRec57_tmp[i]=fRec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec57[i] = (fRec57[i-1] + (fConst7 * (yc20_get_sample(fZec23[i], 1, 0) - fRec57[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec57_perm[i]=fRec57_tmp[count+i];
			
			// LOOP 0x2843ab0
			// pre processing
			for (int i=0; i<4; i++) fRec60_tmp[i]=fRec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec60[i] = (fRec60[i-1] + (fConst7 * (yc20_get_sample(fZec24[i], 0, 0) - fRec60[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec60_perm[i]=fRec60_tmp[count+i];
			
			// LOOP 0x28480d0
			// pre processing
			for (int i=0; i<4; i++) fRec63_tmp[i]=fRec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec63[i] = (fRec63[i-1] + (fConst8 * (yc20_get_sample(fZec25[i], 11, 0) - fRec63[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec63_perm[i]=fRec63_tmp[count+i];
			
			// LOOP 0x284ceb0
			// pre processing
			for (int i=0; i<4; i++) fRec66_tmp[i]=fRec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec66[i] = (fRec66[i-1] + (fConst8 * (yc20_get_sample(fZec26[i], 10, 0) - fRec66[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec66_perm[i]=fRec66_tmp[count+i];
			
			// LOOP 0x2851970
			// pre processing
			for (int i=0; i<4; i++) fRec69_tmp[i]=fRec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec69[i] = (fRec69[i-1] + (fConst8 * (yc20_get_sample(fZec27[i], 9, 0) - fRec69[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec69_perm[i]=fRec69_tmp[count+i];
			
			// LOOP 0x2856410
			// pre processing
			for (int i=0; i<4; i++) fRec72_tmp[i]=fRec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec72[i] = (fRec72[i-1] + (fConst8 * (yc20_get_sample(fZec28[i], 8, 0) - fRec72[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec72_perm[i]=fRec72_tmp[count+i];
			
			// LOOP 0x285aeb0
			// pre processing
			for (int i=0; i<4; i++) fRec75_tmp[i]=fRec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec75[i] = (fRec75[i-1] + (fConst9 * (yc20_get_sample(fZec29[i], 7, 0) - fRec75[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec75_perm[i]=fRec75_tmp[count+i];
			
			// LOOP 0x285fca0
			// pre processing
			for (int i=0; i<4; i++) fRec78_tmp[i]=fRec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec78[i] = (fRec78[i-1] + (fConst9 * (yc20_get_sample(fZec30[i], 6, 0) - fRec78[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec78_perm[i]=fRec78_tmp[count+i];
			
			// LOOP 0x2864740
			// pre processing
			for (int i=0; i<4; i++) fRec81_tmp[i]=fRec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec81[i] = (fRec81[i-1] + (fConst9 * (yc20_get_sample(fZec31[i], 5, 0) - fRec81[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec81_perm[i]=fRec81_tmp[count+i];
			
			// LOOP 0x2869200
			// pre processing
			for (int i=0; i<4; i++) fRec84_tmp[i]=fRec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec84[i] = (fRec84[i-1] + (fConst9 * (yc20_get_sample(fZec32[i], 4, 0) - fRec84[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec84_perm[i]=fRec84_tmp[count+i];
			
			// LOOP 0x286dca0
			// pre processing
			for (int i=0; i<4; i++) fRec87_tmp[i]=fRec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec87[i] = (fRec87[i-1] + (fConst10 * (yc20_get_sample(fZec33[i], 3, 0) - fRec87[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec87_perm[i]=fRec87_tmp[count+i];
			
			// LOOP 0x2872a60
			// pre processing
			for (int i=0; i<4; i++) fRec90_tmp[i]=fRec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec90[i] = (fRec90[i-1] + (fConst10 * (yc20_get_sample(fZec34[i], 2, 0) - fRec90[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec90_perm[i]=fRec90_tmp[count+i];
			
			// LOOP 0x2877500
			// pre processing
			for (int i=0; i<4; i++) fRec93_tmp[i]=fRec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec93[i] = (fRec93[i-1] + (fConst10 * (yc20_get_sample(fZec35[i], 1, 0) - fRec93[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec93_perm[i]=fRec93_tmp[count+i];
			
			// LOOP 0x287bbc0
			// pre processing
			for (int i=0; i<4; i++) fRec95_tmp[i]=fRec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec95[i] = (fConst4 * ((fRec96[i] - fRec96[i-1]) + fRec95[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec95_perm[i]=fRec95_tmp[count+i];
			
			// LOOP 0x28805c0
			// pre processing
			for (int i=0; i<4; i++) fRec98_tmp[i]=fRec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec98[i] = (fConst4 * ((fRec99[i] - fRec99[i-1]) + fRec98[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec98_perm[i]=fRec98_tmp[count+i];
			
			// LOOP 0x2885160
			// pre processing
			for (int i=0; i<4; i++) fRec101_tmp[i]=fRec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec101[i] = (fConst4 * ((fRec102[i] - fRec102[i-1]) + fRec101[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec101_perm[i]=fRec101_tmp[count+i];
			
			// LOOP 0x2889990
			// pre processing
			for (int i=0; i<4; i++) fRec104_tmp[i]=fRec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec104[i] = (fConst4 * ((fRec105[i] - fRec105[i-1]) + fRec104[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec104_perm[i]=fRec104_tmp[count+i];
			
			// LOOP 0x29353e0
			// pre processing
			for (int i=0; i<4; i++) fVec48_tmp[i]=fVec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec48[i] = fSlow68;
			}
			// post processing
			for (int i=0; i<4; i++) fVec48_perm[i]=fVec48_tmp[count+i];
			
			// LOOP 0x29392d0
			// pre processing
			for (int i=0; i<4; i++) fVec49_tmp[i]=fVec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec49[i] = fSlow69;
			}
			// post processing
			for (int i=0; i<4; i++) fVec49_perm[i]=fVec49_tmp[count+i];
			
			// LOOP 0x293c1d0
			// pre processing
			for (int i=0; i<4; i++) fVec50_tmp[i]=fVec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec50[i] = fSlow70;
			}
			// post processing
			for (int i=0; i<4; i++) fVec50_perm[i]=fVec50_tmp[count+i];
			
			// LOOP 0x2940500
			// pre processing
			for (int i=0; i<4; i++) fVec51_tmp[i]=fVec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec51[i] = fSlow71;
			}
			// post processing
			for (int i=0; i<4; i++) fVec51_perm[i]=fVec51_tmp[count+i];
			
			// LOOP 0x2943760
			// pre processing
			for (int i=0; i<4; i++) fVec52_tmp[i]=fVec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec52[i] = fSlow72;
			}
			// post processing
			for (int i=0; i<4; i++) fVec52_perm[i]=fVec52_tmp[count+i];
			
			// LOOP 0x2947e90
			// pre processing
			for (int i=0; i<4; i++) fVec53_tmp[i]=fVec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec53[i] = fSlow73;
			}
			// post processing
			for (int i=0; i<4; i++) fVec53_perm[i]=fVec53_tmp[count+i];
			
			// LOOP 0x294c8e0
			// pre processing
			for (int i=0; i<4; i++) fVec54_tmp[i]=fVec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec54[i] = fSlow74;
			}
			// post processing
			for (int i=0; i<4; i++) fVec54_perm[i]=fVec54_tmp[count+i];
			
			// LOOP 0x294fec0
			// pre processing
			for (int i=0; i<4; i++) fVec55_tmp[i]=fVec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec55[i] = fSlow75;
			}
			// post processing
			for (int i=0; i<4; i++) fVec55_perm[i]=fVec55_tmp[count+i];
			
			// LOOP 0x2954d10
			// pre processing
			for (int i=0; i<4; i++) fVec56_tmp[i]=fVec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec56[i] = fSlow76;
			}
			// post processing
			for (int i=0; i<4; i++) fVec56_perm[i]=fVec56_tmp[count+i];
			
			// LOOP 0x2958660
			// pre processing
			for (int i=0; i<4; i++) fVec57_tmp[i]=fVec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec57[i] = fSlow77;
			}
			// post processing
			for (int i=0; i<4; i++) fVec57_perm[i]=fVec57_tmp[count+i];
			
			// LOOP 0x295c370
			// pre processing
			for (int i=0; i<4; i++) fVec58_tmp[i]=fVec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec58[i] = fSlow78;
			}
			// post processing
			for (int i=0; i<4; i++) fVec58_perm[i]=fVec58_tmp[count+i];
			
			// LOOP 0x295f110
			// pre processing
			for (int i=0; i<4; i++) fVec59_tmp[i]=fVec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec59[i] = fSlow79;
			}
			// post processing
			for (int i=0; i<4; i++) fVec59_perm[i]=fVec59_tmp[count+i];
			
			// LOOP 0x2963220
			// pre processing
			for (int i=0; i<4; i++) fVec60_tmp[i]=fVec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec60[i] = fSlow80;
			}
			// post processing
			for (int i=0; i<4; i++) fVec60_perm[i]=fVec60_tmp[count+i];
			
			// LOOP 0x29f5d30
			// exec code
			for (int i=0; i<count; i++) {
				fZec125[i] = (fRec107[i] + (fRec110[i] + (fRec113[i] + (fRec116[i] + fZec124[i]))));
			}
			
			// LOOP 0x2ec7b90
			// pre processing
			for (int i=0; i<4; i++) fYec77_tmp[i]=fYec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec77[i] = (iRec213[i] + fZec174[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec77_perm[i]=fYec77_tmp[count+i];
			
			// LOOP 0x2ecd1f0
			// pre processing
			for (int i=0; i<4; i++) fYec78_tmp[i]=fYec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec78[i] = (iRec216[i] + fZec175[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec78_perm[i]=fYec78_tmp[count+i];
			
			// LOOP 0x2ed23b0
			// pre processing
			for (int i=0; i<4; i++) fYec79_tmp[i]=fYec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec79[i] = (iRec219[i] + fZec176[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec79_perm[i]=fYec79_tmp[count+i];
			
			// LOOP 0x2ed7560
			// pre processing
			for (int i=0; i<4; i++) fYec80_tmp[i]=fYec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec80[i] = (iRec222[i] + fZec177[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec80_perm[i]=fYec80_tmp[count+i];
			
			// LOOP 0x2edc710
			// pre processing
			for (int i=0; i<4; i++) fYec81_tmp[i]=fYec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec81[i] = (iRec225[i] + fZec178[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec81_perm[i]=fYec81_tmp[count+i];
			
			// LOOP 0x2ee1c00
			// pre processing
			for (int i=0; i<4; i++) fYec82_tmp[i]=fYec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec82[i] = (iRec228[i] + fZec184[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec82_perm[i]=fYec82_tmp[count+i];
			
			// LOOP 0x2ee6db0
			// pre processing
			for (int i=0; i<4; i++) fYec83_tmp[i]=fYec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec83[i] = (iRec231[i] + fZec185[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec83_perm[i]=fYec83_tmp[count+i];
			
			// LOOP 0x2eebf80
			// pre processing
			for (int i=0; i<4; i++) fYec84_tmp[i]=fYec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec84[i] = (iRec234[i] + fZec186[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec84_perm[i]=fYec84_tmp[count+i];
			
			// LOOP 0x2ef1130
			// pre processing
			for (int i=0; i<4; i++) fYec85_tmp[i]=fYec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec85[i] = (iRec237[i] + fZec187[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec85_perm[i]=fYec85_tmp[count+i];
			
			// LOOP 0x2ef6630
			// pre processing
			for (int i=0; i<4; i++) fYec86_tmp[i]=fYec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec86[i] = (iRec240[i] + fZec188[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec86_perm[i]=fYec86_tmp[count+i];
			
			// LOOP 0x2efb7e0
			// pre processing
			for (int i=0; i<4; i++) fYec87_tmp[i]=fYec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec87[i] = (iRec243[i] + fZec189[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec87_perm[i]=fYec87_tmp[count+i];
			
			// LOOP 0x2f00990
			// pre processing
			for (int i=0; i<4; i++) fYec88_tmp[i]=fYec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec88[i] = (iRec246[i] + fZec190[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec88_perm[i]=fYec88_tmp[count+i];
			
			// SECTION : 21
			// LOOP 0x27de170
			// pre processing
			for (int i=0; i<4; i++) fRec1_tmp[i]=fRec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec1[i] = (fConst4 * (((1.95f * fYec0[i]) - (1.95f * fYec0[i-1])) + fRec1[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec1_perm[i]=fRec1_tmp[count+i];
			
			// LOOP 0x27e7d30
			// pre processing
			for (int i=0; i<4; i++) fRec4_tmp[i]=fRec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec4[i] = (fConst4 * (((1.95f * fYec1[i]) - (1.95f * fYec1[i-1])) + fRec4[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec4_perm[i]=fRec4_tmp[count+i];
			
			// LOOP 0x27eba70
			// pre processing
			for (int i=0; i<4; i++) fRec6_tmp[i]=fRec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec6[i] = (fConst4 * (((1.95f * fYec2[i]) - (1.95f * fYec2[i-1])) + fRec6[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec6_perm[i]=fRec6_tmp[count+i];
			
			// LOOP 0x27ef870
			// pre processing
			for (int i=0; i<4; i++) fRec8_tmp[i]=fRec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec8[i] = (fConst4 * (((1.95f * fYec3[i]) - (1.95f * fYec3[i-1])) + fRec8[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec8_perm[i]=fRec8_tmp[count+i];
			
			// LOOP 0x27f35a0
			// pre processing
			for (int i=0; i<4; i++) fRec10_tmp[i]=fRec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec10[i] = (fConst4 * (((1.95f * fYec4[i]) - (1.95f * fYec4[i-1])) + fRec10[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec10_perm[i]=fRec10_tmp[count+i];
			
			// LOOP 0x27f7350
			// pre processing
			for (int i=0; i<4; i++) fRec12_tmp[i]=fRec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec12[i] = (fConst4 * (((1.95f * fYec5[i]) - (1.95f * fYec5[i-1])) + fRec12[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec12_perm[i]=fRec12_tmp[count+i];
			
			// LOOP 0x27fb100
			// pre processing
			for (int i=0; i<4; i++) fRec14_tmp[i]=fRec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec14[i] = (fConst4 * (((1.95f * fYec6[i]) - (1.95f * fYec6[i-1])) + fRec14[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec14_perm[i]=fRec14_tmp[count+i];
			
			// LOOP 0x27feeb0
			// pre processing
			for (int i=0; i<4; i++) fRec16_tmp[i]=fRec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec16[i] = (fConst4 * (((1.95f * fYec7[i]) - (1.95f * fYec7[i-1])) + fRec16[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec16_perm[i]=fRec16_tmp[count+i];
			
			// LOOP 0x2802c60
			// pre processing
			for (int i=0; i<4; i++) fRec18_tmp[i]=fRec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec18[i] = (fConst4 * (((1.95f * fYec8[i]) - (1.95f * fYec8[i-1])) + fRec18[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec18_perm[i]=fRec18_tmp[count+i];
			
			// LOOP 0x2806a10
			// pre processing
			for (int i=0; i<4; i++) fRec20_tmp[i]=fRec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec20[i] = (fConst4 * (((1.95f * fYec9[i]) - (1.95f * fYec9[i-1])) + fRec20[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec20_perm[i]=fRec20_tmp[count+i];
			
			// LOOP 0x280a6b0
			// pre processing
			for (int i=0; i<4; i++) fRec22_tmp[i]=fRec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec22[i] = (fConst4 * (((1.95f * fYec10[i]) - (1.95f * fYec10[i-1])) + fRec22[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec22_perm[i]=fRec22_tmp[count+i];
			
			// LOOP 0x280e380
			// pre processing
			for (int i=0; i<4; i++) fRec24_tmp[i]=fRec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec24[i] = (fConst4 * (((1.95f * fYec11[i]) - (1.95f * fYec11[i-1])) + fRec24[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec24_perm[i]=fRec24_tmp[count+i];
			
			// LOOP 0x28121a0
			// pre processing
			for (int i=0; i<4; i++) fRec26_tmp[i]=fRec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec26[i] = (fConst4 * ((fRec27[i] - fRec27[i-1]) + fRec26[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec26_perm[i]=fRec26_tmp[count+i];
			
			// LOOP 0x2816cb0
			// pre processing
			for (int i=0; i<4; i++) fRec29_tmp[i]=fRec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec29[i] = (fConst4 * ((fRec30[i] - fRec30[i-1]) + fRec29[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec29_perm[i]=fRec29_tmp[count+i];
			
			// LOOP 0x281b370
			// pre processing
			for (int i=0; i<4; i++) fRec32_tmp[i]=fRec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec32[i] = (fConst4 * ((fRec33[i] - fRec33[i-1]) + fRec32[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec32_perm[i]=fRec32_tmp[count+i];
			
			// LOOP 0x281fa30
			// pre processing
			for (int i=0; i<4; i++) fRec35_tmp[i]=fRec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec35[i] = (fConst4 * ((fRec36[i] - fRec36[i-1]) + fRec35[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec35_perm[i]=fRec35_tmp[count+i];
			
			// LOOP 0x28240f0
			// pre processing
			for (int i=0; i<4; i++) fRec38_tmp[i]=fRec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec38[i] = (fConst4 * ((fRec39[i] - fRec39[i-1]) + fRec38[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec38_perm[i]=fRec38_tmp[count+i];
			
			// LOOP 0x2828af0
			// pre processing
			for (int i=0; i<4; i++) fRec41_tmp[i]=fRec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec41[i] = (fConst4 * ((fRec42[i] - fRec42[i-1]) + fRec41[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec41_perm[i]=fRec41_tmp[count+i];
			
			// LOOP 0x282cdc0
			// pre processing
			for (int i=0; i<4; i++) fRec44_tmp[i]=fRec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec44[i] = (fConst4 * ((fRec45[i] - fRec45[i-1]) + fRec44[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec44_perm[i]=fRec44_tmp[count+i];
			
			// LOOP 0x2831890
			// pre processing
			for (int i=0; i<4; i++) fRec47_tmp[i]=fRec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec47[i] = (fConst4 * ((fRec48[i] - fRec48[i-1]) + fRec47[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec47_perm[i]=fRec47_tmp[count+i];
			
			// LOOP 0x2835f50
			// pre processing
			for (int i=0; i<4; i++) fRec50_tmp[i]=fRec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec50[i] = (fConst4 * ((fRec51[i] - fRec51[i-1]) + fRec50[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec50_perm[i]=fRec50_tmp[count+i];
			
			// LOOP 0x283a950
			// pre processing
			for (int i=0; i<4; i++) fRec53_tmp[i]=fRec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec53[i] = (fConst4 * ((fRec54[i] - fRec54[i-1]) + fRec53[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec53_perm[i]=fRec53_tmp[count+i];
			
			// LOOP 0x283f010
			// pre processing
			for (int i=0; i<4; i++) fRec56_tmp[i]=fRec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec56[i] = (fConst4 * ((fRec57[i] - fRec57[i-1]) + fRec56[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec56_perm[i]=fRec56_tmp[count+i];
			
			// LOOP 0x28436d0
			// pre processing
			for (int i=0; i<4; i++) fRec59_tmp[i]=fRec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec59[i] = (fConst4 * ((fRec60[i] - fRec60[i-1]) + fRec59[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec59_perm[i]=fRec59_tmp[count+i];
			
			// LOOP 0x2847cf0
			// pre processing
			for (int i=0; i<4; i++) fRec62_tmp[i]=fRec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec62[i] = (fConst4 * ((fRec63[i] - fRec63[i-1]) + fRec62[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec62_perm[i]=fRec62_tmp[count+i];
			
			// LOOP 0x284cad0
			// pre processing
			for (int i=0; i<4; i++) fRec65_tmp[i]=fRec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec65[i] = (fConst4 * ((fRec66[i] - fRec66[i-1]) + fRec65[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec65_perm[i]=fRec65_tmp[count+i];
			
			// LOOP 0x2851590
			// pre processing
			for (int i=0; i<4; i++) fRec68_tmp[i]=fRec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec68[i] = (fConst4 * ((fRec69[i] - fRec69[i-1]) + fRec68[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec68_perm[i]=fRec68_tmp[count+i];
			
			// LOOP 0x2856030
			// pre processing
			for (int i=0; i<4; i++) fRec71_tmp[i]=fRec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec71[i] = (fConst4 * ((fRec72[i] - fRec72[i-1]) + fRec71[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec71_perm[i]=fRec71_tmp[count+i];
			
			// LOOP 0x285aad0
			// pre processing
			for (int i=0; i<4; i++) fRec74_tmp[i]=fRec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec74[i] = (fConst4 * ((fRec75[i] - fRec75[i-1]) + fRec74[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec74_perm[i]=fRec74_tmp[count+i];
			
			// LOOP 0x285f8c0
			// pre processing
			for (int i=0; i<4; i++) fRec77_tmp[i]=fRec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec77[i] = (fConst4 * ((fRec78[i] - fRec78[i-1]) + fRec77[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec77_perm[i]=fRec77_tmp[count+i];
			
			// LOOP 0x2864360
			// pre processing
			for (int i=0; i<4; i++) fRec80_tmp[i]=fRec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec80[i] = (fConst4 * ((fRec81[i] - fRec81[i-1]) + fRec80[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec80_perm[i]=fRec80_tmp[count+i];
			
			// LOOP 0x2868e00
			// pre processing
			for (int i=0; i<4; i++) fRec83_tmp[i]=fRec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec83[i] = (fConst4 * ((fRec84[i] - fRec84[i-1]) + fRec83[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec83_perm[i]=fRec83_tmp[count+i];
			
			// LOOP 0x286d8c0
			// pre processing
			for (int i=0; i<4; i++) fRec86_tmp[i]=fRec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec86[i] = (fConst4 * ((fRec87[i] - fRec87[i-1]) + fRec86[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec86_perm[i]=fRec86_tmp[count+i];
			
			// LOOP 0x2872680
			// pre processing
			for (int i=0; i<4; i++) fRec89_tmp[i]=fRec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec89[i] = (fConst4 * ((fRec90[i] - fRec90[i-1]) + fRec89[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec89_perm[i]=fRec89_tmp[count+i];
			
			// LOOP 0x2877120
			// pre processing
			for (int i=0; i<4; i++) fRec92_tmp[i]=fRec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec92[i] = (fConst4 * ((fRec93[i] - fRec93[i-1]) + fRec92[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec92_perm[i]=fRec92_tmp[count+i];
			
			// LOOP 0x28b77d0
			// pre processing
			for (int i=0; i<4; i++) fVec0_tmp[i]=fVec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec0[i] = fSlow18;
			}
			// post processing
			for (int i=0; i<4; i++) fVec0_perm[i]=fVec0_tmp[count+i];
			
			// LOOP 0x28b8ea0
			// pre processing
			for (int i=0; i<4; i++) fVec1_tmp[i]=fVec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec1[i] = fSlow19;
			}
			// post processing
			for (int i=0; i<4; i++) fVec1_perm[i]=fVec1_tmp[count+i];
			
			// LOOP 0x28ba730
			// pre processing
			for (int i=0; i<4; i++) fVec2_tmp[i]=fVec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec2[i] = fSlow20;
			}
			// post processing
			for (int i=0; i<4; i++) fVec2_perm[i]=fVec2_tmp[count+i];
			
			// LOOP 0x28bc550
			// pre processing
			for (int i=0; i<4; i++) fVec3_tmp[i]=fVec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec3[i] = fSlow21;
			}
			// post processing
			for (int i=0; i<4; i++) fVec3_perm[i]=fVec3_tmp[count+i];
			
			// LOOP 0x28be2b0
			// pre processing
			for (int i=0; i<4; i++) fVec4_tmp[i]=fVec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec4[i] = fSlow22;
			}
			// post processing
			for (int i=0; i<4; i++) fVec4_perm[i]=fVec4_tmp[count+i];
			
			// LOOP 0x28c02f0
			// pre processing
			for (int i=0; i<4; i++) fVec5_tmp[i]=fVec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec5[i] = fSlow23;
			}
			// post processing
			for (int i=0; i<4; i++) fVec5_perm[i]=fVec5_tmp[count+i];
			
			// LOOP 0x28c23c0
			// pre processing
			for (int i=0; i<4; i++) fVec6_tmp[i]=fVec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec6[i] = fSlow24;
			}
			// post processing
			for (int i=0; i<4; i++) fVec6_perm[i]=fVec6_tmp[count+i];
			
			// LOOP 0x28c4280
			// pre processing
			for (int i=0; i<4; i++) fVec7_tmp[i]=fVec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec7[i] = fSlow25;
			}
			// post processing
			for (int i=0; i<4; i++) fVec7_perm[i]=fVec7_tmp[count+i];
			
			// LOOP 0x28c6500
			// pre processing
			for (int i=0; i<4; i++) fVec8_tmp[i]=fVec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec8[i] = fSlow26;
			}
			// post processing
			for (int i=0; i<4; i++) fVec8_perm[i]=fVec8_tmp[count+i];
			
			// LOOP 0x28c84a0
			// pre processing
			for (int i=0; i<4; i++) fVec9_tmp[i]=fVec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec9[i] = fSlow27;
			}
			// post processing
			for (int i=0; i<4; i++) fVec9_perm[i]=fVec9_tmp[count+i];
			
			// LOOP 0x28ca5d0
			// pre processing
			for (int i=0; i<4; i++) fVec10_tmp[i]=fVec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec10[i] = fSlow28;
			}
			// post processing
			for (int i=0; i<4; i++) fVec10_perm[i]=fVec10_tmp[count+i];
			
			// LOOP 0x28cc4b0
			// pre processing
			for (int i=0; i<4; i++) fVec11_tmp[i]=fVec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec11[i] = fSlow29;
			}
			// post processing
			for (int i=0; i<4; i++) fVec11_perm[i]=fVec11_tmp[count+i];
			
			// LOOP 0x28ce7d0
			// pre processing
			for (int i=0; i<4; i++) fVec12_tmp[i]=fVec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec12[i] = fSlow30;
			}
			// post processing
			for (int i=0; i<4; i++) fVec12_perm[i]=fVec12_tmp[count+i];
			
			// LOOP 0x28d0c70
			// pre processing
			for (int i=0; i<4; i++) fVec13_tmp[i]=fVec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec13[i] = fSlow31;
			}
			// post processing
			for (int i=0; i<4; i++) fVec13_perm[i]=fVec13_tmp[count+i];
			
			// LOOP 0x28d2cb0
			// pre processing
			for (int i=0; i<4; i++) fVec14_tmp[i]=fVec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec14[i] = fSlow32;
			}
			// post processing
			for (int i=0; i<4; i++) fVec14_perm[i]=fVec14_tmp[count+i];
			
			// LOOP 0x28d53f0
			// pre processing
			for (int i=0; i<4; i++) fVec15_tmp[i]=fVec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec15[i] = fSlow33;
			}
			// post processing
			for (int i=0; i<4; i++) fVec15_perm[i]=fVec15_tmp[count+i];
			
			// LOOP 0x28d7610
			// pre processing
			for (int i=0; i<4; i++) fVec16_tmp[i]=fVec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec16[i] = fSlow34;
			}
			// post processing
			for (int i=0; i<4; i++) fVec16_perm[i]=fVec16_tmp[count+i];
			
			// LOOP 0x28db420
			// pre processing
			for (int i=0; i<4; i++) fVec17_tmp[i]=fVec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec17[i] = fSlow37;
			}
			// post processing
			for (int i=0; i<4; i++) fVec17_perm[i]=fVec17_tmp[count+i];
			
			// LOOP 0x28ddf20
			// pre processing
			for (int i=0; i<4; i++) fVec18_tmp[i]=fVec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec18[i] = fSlow38;
			}
			// post processing
			for (int i=0; i<4; i++) fVec18_perm[i]=fVec18_tmp[count+i];
			
			// LOOP 0x28e0380
			// pre processing
			for (int i=0; i<4; i++) fVec19_tmp[i]=fVec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec19[i] = fSlow39;
			}
			// post processing
			for (int i=0; i<4; i++) fVec19_perm[i]=fVec19_tmp[count+i];
			
			// LOOP 0x28e3150
			// pre processing
			for (int i=0; i<4; i++) fVec20_tmp[i]=fVec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec20[i] = fSlow40;
			}
			// post processing
			for (int i=0; i<4; i++) fVec20_perm[i]=fVec20_tmp[count+i];
			
			// LOOP 0x28e5720
			// pre processing
			for (int i=0; i<4; i++) fVec21_tmp[i]=fVec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec21[i] = fSlow41;
			}
			// post processing
			for (int i=0; i<4; i++) fVec21_perm[i]=fVec21_tmp[count+i];
			
			// LOOP 0x28e7f30
			// pre processing
			for (int i=0; i<4; i++) fVec22_tmp[i]=fVec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec22[i] = fSlow42;
			}
			// post processing
			for (int i=0; i<4; i++) fVec22_perm[i]=fVec22_tmp[count+i];
			
			// LOOP 0x28ea130
			// pre processing
			for (int i=0; i<4; i++) fVec23_tmp[i]=fVec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec23[i] = fSlow43;
			}
			// post processing
			for (int i=0; i<4; i++) fVec23_perm[i]=fVec23_tmp[count+i];
			
			// LOOP 0x28ecbb0
			// pre processing
			for (int i=0; i<4; i++) fVec24_tmp[i]=fVec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec24[i] = fSlow44;
			}
			// post processing
			for (int i=0; i<4; i++) fVec24_perm[i]=fVec24_tmp[count+i];
			
			// LOOP 0x28ef8d0
			// pre processing
			for (int i=0; i<4; i++) fVec25_tmp[i]=fVec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec25[i] = fSlow45;
			}
			// post processing
			for (int i=0; i<4; i++) fVec25_perm[i]=fVec25_tmp[count+i];
			
			// LOOP 0x28f1680
			// pre processing
			for (int i=0; i<4; i++) fVec26_tmp[i]=fVec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec26[i] = fSlow46;
			}
			// post processing
			for (int i=0; i<4; i++) fVec26_perm[i]=fVec26_tmp[count+i];
			
			// LOOP 0x28f4660
			// pre processing
			for (int i=0; i<4; i++) fVec27_tmp[i]=fVec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec27[i] = fSlow47;
			}
			// post processing
			for (int i=0; i<4; i++) fVec27_perm[i]=fVec27_tmp[count+i];
			
			// LOOP 0x28f6cd0
			// pre processing
			for (int i=0; i<4; i++) fVec28_tmp[i]=fVec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec28[i] = fSlow48;
			}
			// post processing
			for (int i=0; i<4; i++) fVec28_perm[i]=fVec28_tmp[count+i];
			
			// LOOP 0x28f9f60
			// pre processing
			for (int i=0; i<4; i++) fVec29_tmp[i]=fVec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec29[i] = fSlow49;
			}
			// post processing
			for (int i=0; i<4; i++) fVec29_perm[i]=fVec29_tmp[count+i];
			
			// LOOP 0x28fd420
			// pre processing
			for (int i=0; i<4; i++) fVec30_tmp[i]=fVec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec30[i] = fSlow50;
			}
			// post processing
			for (int i=0; i<4; i++) fVec30_perm[i]=fVec30_tmp[count+i];
			
			// LOOP 0x28ffd40
			// pre processing
			for (int i=0; i<4; i++) fVec31_tmp[i]=fVec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec31[i] = fSlow51;
			}
			// post processing
			for (int i=0; i<4; i++) fVec31_perm[i]=fVec31_tmp[count+i];
			
			// LOOP 0x29034e0
			// pre processing
			for (int i=0; i<4; i++) fVec32_tmp[i]=fVec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec32[i] = fSlow52;
			}
			// post processing
			for (int i=0; i<4; i++) fVec32_perm[i]=fVec32_tmp[count+i];
			
			// LOOP 0x2906050
			// pre processing
			for (int i=0; i<4; i++) fVec33_tmp[i]=fVec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec33[i] = fSlow53;
			}
			// post processing
			for (int i=0; i<4; i++) fVec33_perm[i]=fVec33_tmp[count+i];
			
			// LOOP 0x2908e70
			// pre processing
			for (int i=0; i<4; i++) fVec34_tmp[i]=fVec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec34[i] = fSlow54;
			}
			// post processing
			for (int i=0; i<4; i++) fVec34_perm[i]=fVec34_tmp[count+i];
			
			// LOOP 0x290b350
			// pre processing
			for (int i=0; i<4; i++) fVec35_tmp[i]=fVec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec35[i] = fSlow55;
			}
			// post processing
			for (int i=0; i<4; i++) fVec35_perm[i]=fVec35_tmp[count+i];
			
			// LOOP 0x290e460
			// pre processing
			for (int i=0; i<4; i++) fVec36_tmp[i]=fVec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec36[i] = fSlow56;
			}
			// post processing
			for (int i=0; i<4; i++) fVec36_perm[i]=fVec36_tmp[count+i];
			
			// LOOP 0x29118c0
			// pre processing
			for (int i=0; i<4; i++) fVec37_tmp[i]=fVec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec37[i] = fSlow57;
			}
			// post processing
			for (int i=0; i<4; i++) fVec37_perm[i]=fVec37_tmp[count+i];
			
			// LOOP 0x29140e0
			// pre processing
			for (int i=0; i<4; i++) fVec38_tmp[i]=fVec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec38[i] = fSlow58;
			}
			// post processing
			for (int i=0; i<4; i++) fVec38_perm[i]=fVec38_tmp[count+i];
			
			// LOOP 0x29178f0
			// pre processing
			for (int i=0; i<4; i++) fVec39_tmp[i]=fVec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec39[i] = fSlow59;
			}
			// post processing
			for (int i=0; i<4; i++) fVec39_perm[i]=fVec39_tmp[count+i];
			
			// LOOP 0x291a410
			// pre processing
			for (int i=0; i<4; i++) fVec40_tmp[i]=fVec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec40[i] = fSlow60;
			}
			// post processing
			for (int i=0; i<4; i++) fVec40_perm[i]=fVec40_tmp[count+i];
			
			// LOOP 0x291dfb0
			// pre processing
			for (int i=0; i<4; i++) fVec41_tmp[i]=fVec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec41[i] = fSlow61;
			}
			// post processing
			for (int i=0; i<4; i++) fVec41_perm[i]=fVec41_tmp[count+i];
			
			// LOOP 0x2921df0
			// pre processing
			for (int i=0; i<4; i++) fVec42_tmp[i]=fVec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec42[i] = fSlow62;
			}
			// post processing
			for (int i=0; i<4; i++) fVec42_perm[i]=fVec42_tmp[count+i];
			
			// LOOP 0x2924c30
			// pre processing
			for (int i=0; i<4; i++) fVec43_tmp[i]=fVec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec43[i] = fSlow63;
			}
			// post processing
			for (int i=0; i<4; i++) fVec43_perm[i]=fVec43_tmp[count+i];
			
			// LOOP 0x2928e00
			// pre processing
			for (int i=0; i<4; i++) fVec44_tmp[i]=fVec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec44[i] = fSlow64;
			}
			// post processing
			for (int i=0; i<4; i++) fVec44_perm[i]=fVec44_tmp[count+i];
			
			// LOOP 0x292bf30
			// pre processing
			for (int i=0; i<4; i++) fVec45_tmp[i]=fVec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec45[i] = fSlow65;
			}
			// post processing
			for (int i=0; i<4; i++) fVec45_perm[i]=fVec45_tmp[count+i];
			
			// LOOP 0x292f3c0
			// pre processing
			for (int i=0; i<4; i++) fVec46_tmp[i]=fVec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec46[i] = fSlow66;
			}
			// post processing
			for (int i=0; i<4; i++) fVec46_perm[i]=fVec46_tmp[count+i];
			
			// LOOP 0x2931bf0
			// pre processing
			for (int i=0; i<4; i++) fVec47_tmp[i]=fVec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec47[i] = fSlow67;
			}
			// post processing
			for (int i=0; i<4; i++) fVec47_perm[i]=fVec47_tmp[count+i];
			
			// LOOP 0x29352d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec97[i] = (fSlow68 + (fVec48[i-3] + (fVec48[i-1] + fVec48[i-2])));
			}
			
			// LOOP 0x29391f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec99[i] = (fSlow69 + (fVec49[i-3] + (fVec49[i-1] + fVec49[i-2])));
			}
			
			// LOOP 0x293c0f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec101[i] = (fSlow70 + (fVec50[i-3] + (fVec50[i-1] + fVec50[i-2])));
			}
			
			// LOOP 0x2940420
			// exec code
			for (int i=0; i<count; i++) {
				fZec103[i] = (fSlow71 + (fVec51[i-3] + (fVec51[i-1] + fVec51[i-2])));
			}
			
			// LOOP 0x2943680
			// exec code
			for (int i=0; i<count; i++) {
				fZec105[i] = (fSlow72 + (fVec52[i-3] + (fVec52[i-1] + fVec52[i-2])));
			}
			
			// LOOP 0x2947db0
			// exec code
			for (int i=0; i<count; i++) {
				fZec107[i] = (fSlow73 + (fVec53[i-3] + (fVec53[i-1] + fVec53[i-2])));
			}
			
			// LOOP 0x294c800
			// exec code
			for (int i=0; i<count; i++) {
				fZec109[i] = (fSlow74 + (fVec54[i-3] + (fVec54[i-1] + fVec54[i-2])));
			}
			
			// LOOP 0x294fde0
			// exec code
			for (int i=0; i<count; i++) {
				fZec111[i] = (fSlow75 + (fVec55[i-3] + (fVec55[i-1] + fVec55[i-2])));
			}
			
			// LOOP 0x2954c30
			// exec code
			for (int i=0; i<count; i++) {
				fZec113[i] = (fSlow76 + (fVec56[i-3] + (fVec56[i-1] + fVec56[i-2])));
			}
			
			// LOOP 0x2958580
			// exec code
			for (int i=0; i<count; i++) {
				fZec115[i] = (fSlow77 + (fVec57[i-3] + (fVec57[i-1] + fVec57[i-2])));
			}
			
			// LOOP 0x295c290
			// exec code
			for (int i=0; i<count; i++) {
				fZec117[i] = (fSlow78 + (fVec58[i-3] + (fVec58[i-1] + fVec58[i-2])));
			}
			
			// LOOP 0x295f030
			// exec code
			for (int i=0; i<count; i++) {
				fZec119[i] = (fSlow79 + (fVec59[i-3] + (fVec59[i-1] + fVec59[i-2])));
			}
			
			// LOOP 0x2963140
			// exec code
			for (int i=0; i<count; i++) {
				fZec121[i] = (fSlow80 + (fVec60[i-3] + (fVec60[i-1] + fVec60[i-2])));
			}
			
			// LOOP 0x29f5c50
			// exec code
			for (int i=0; i<count; i++) {
				fZec126[i] = (fRec95[i] + (fRec98[i] + (fRec101[i] + (fRec104[i] + fZec125[i]))));
			}
			
			// LOOP 0x2ec7ab0
			// exec code
			for (int i=0; i<count; i++) {
				fZec194[i] = (0.5f * fYec77[i]);
			}
			
			// LOOP 0x2ecd110
			// exec code
			for (int i=0; i<count; i++) {
				fZec195[i] = (0.5f * fYec78[i]);
			}
			
			// LOOP 0x2ed22d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec196[i] = (0.5f * fYec79[i]);
			}
			
			// LOOP 0x2ed7480
			// exec code
			for (int i=0; i<count; i++) {
				fZec197[i] = (0.5f * fYec80[i]);
			}
			
			// LOOP 0x2edc630
			// exec code
			for (int i=0; i<count; i++) {
				fZec198[i] = (0.5f * fYec81[i]);
			}
			
			// LOOP 0x2ee1b20
			// exec code
			for (int i=0; i<count; i++) {
				fZec199[i] = (0.5f * fYec82[i]);
			}
			
			// LOOP 0x2ee6cd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec200[i] = (0.5f * fYec83[i]);
			}
			
			// LOOP 0x2eebea0
			// exec code
			for (int i=0; i<count; i++) {
				fZec201[i] = (0.5f * fYec84[i]);
			}
			
			// LOOP 0x2ef1050
			// exec code
			for (int i=0; i<count; i++) {
				fZec202[i] = (0.5f * fYec85[i]);
			}
			
			// LOOP 0x2ef6550
			// exec code
			for (int i=0; i<count; i++) {
				fZec203[i] = (0.5f * fYec86[i]);
			}
			
			// LOOP 0x2efb700
			// exec code
			for (int i=0; i<count; i++) {
				fZec204[i] = (0.5f * fYec87[i]);
			}
			
			// LOOP 0x2f008b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec205[i] = (0.5f * fYec88[i]);
			}
			
			// SECTION : 22
			// LOOP 0x28b76f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec49[i] = (fSlow18 + (fVec0[i-3] + (fVec0[i-1] + fVec0[i-2])));
			}
			
			// LOOP 0x28b8dc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec50[i] = (fSlow19 + (fVec1[i-3] + (fVec1[i-1] + fVec1[i-2])));
			}
			
			// LOOP 0x28ba650
			// exec code
			for (int i=0; i<count; i++) {
				fZec51[i] = (fSlow20 + (fVec2[i-3] + (fVec2[i-1] + fVec2[i-2])));
			}
			
			// LOOP 0x28bc470
			// exec code
			for (int i=0; i<count; i++) {
				fZec52[i] = (fSlow21 + (fVec3[i-3] + (fVec3[i-1] + fVec3[i-2])));
			}
			
			// LOOP 0x28be1d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec53[i] = (fSlow22 + (fVec4[i-3] + (fVec4[i-1] + fVec4[i-2])));
			}
			
			// LOOP 0x28c0210
			// exec code
			for (int i=0; i<count; i++) {
				fZec54[i] = (fSlow23 + (fVec5[i-3] + (fVec5[i-1] + fVec5[i-2])));
			}
			
			// LOOP 0x28c22e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec55[i] = (fSlow24 + (fVec6[i-3] + (fVec6[i-1] + fVec6[i-2])));
			}
			
			// LOOP 0x28c41a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec56[i] = (fSlow25 + (fVec7[i-3] + (fVec7[i-1] + fVec7[i-2])));
			}
			
			// LOOP 0x28c6420
			// exec code
			for (int i=0; i<count; i++) {
				fZec57[i] = (fSlow26 + (fVec8[i-3] + (fVec8[i-1] + fVec8[i-2])));
			}
			
			// LOOP 0x28c83c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec58[i] = (fSlow27 + (fVec9[i-3] + (fVec9[i-1] + fVec9[i-2])));
			}
			
			// LOOP 0x28ca4f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec59[i] = (fSlow28 + (fVec10[i-3] + (fVec10[i-1] + fVec10[i-2])));
			}
			
			// LOOP 0x28cc3d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec60[i] = (fSlow29 + (fVec11[i-3] + (fVec11[i-1] + fVec11[i-2])));
			}
			
			// LOOP 0x28ce6f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec61[i] = (fSlow30 + (fVec12[i-3] + (fVec12[i-1] + fVec12[i-2])));
			}
			
			// LOOP 0x28d0b90
			// exec code
			for (int i=0; i<count; i++) {
				fZec62[i] = (fSlow31 + (fVec13[i-3] + (fVec13[i-1] + fVec13[i-2])));
			}
			
			// LOOP 0x28d2bd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec63[i] = (fSlow32 + (fVec14[i-3] + (fVec14[i-1] + fVec14[i-2])));
			}
			
			// LOOP 0x28d5310
			// exec code
			for (int i=0; i<count; i++) {
				fZec64[i] = (fSlow33 + (fVec15[i-3] + (fVec15[i-1] + fVec15[i-2])));
			}
			
			// LOOP 0x28d7530
			// exec code
			for (int i=0; i<count; i++) {
				fZec65[i] = (fSlow34 + (fVec16[i-3] + (fVec16[i-1] + fVec16[i-2])));
			}
			
			// LOOP 0x28db340
			// exec code
			for (int i=0; i<count; i++) {
				fZec66[i] = (fSlow37 + (fVec17[i-3] + (fVec17[i-1] + fVec17[i-2])));
			}
			
			// LOOP 0x28dd9f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec67[i] = (fSlow38 + (fVec18[i-3] + (fVec18[i-1] + fVec18[i-2])));
			}
			
			// LOOP 0x28dfe00
			// exec code
			for (int i=0; i<count; i++) {
				fZec68[i] = (fSlow39 + (fVec19[i-3] + (fVec19[i-1] + fVec19[i-2])));
			}
			
			// LOOP 0x28e2b70
			// exec code
			for (int i=0; i<count; i++) {
				fZec69[i] = (fSlow40 + (fVec20[i-3] + (fVec20[i-1] + fVec20[i-2])));
			}
			
			// LOOP 0x28e5100
			// exec code
			for (int i=0; i<count; i++) {
				fZec70[i] = (fSlow41 + (fVec21[i-3] + (fVec21[i-1] + fVec21[i-2])));
			}
			
			// LOOP 0x28e78b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec71[i] = (fSlow42 + (fVec22[i-3] + (fVec22[i-1] + fVec22[i-2])));
			}
			
			// LOOP 0x28e9a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec72[i] = (fSlow43 + (fVec23[i-3] + (fVec23[i-1] + fVec23[i-2])));
			}
			
			// LOOP 0x28ec480
			// exec code
			for (int i=0; i<count; i++) {
				fZec73[i] = (fSlow44 + (fVec24[i-3] + (fVec24[i-1] + fVec24[i-2])));
			}
			
			// LOOP 0x28ef160
			// exec code
			for (int i=0; i<count; i++) {
				fZec74[i] = (fSlow45 + (fVec25[i-3] + (fVec25[i-1] + fVec25[i-2])));
			}
			
			// LOOP 0x28f15a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec75[i] = (fSlow46 + (fVec26[i-3] + (fVec26[i-1] + fVec26[i-2])));
			}
			
			// LOOP 0x28f4580
			// exec code
			for (int i=0; i<count; i++) {
				fZec76[i] = (fSlow47 + (fVec27[i-3] + (fVec27[i-1] + fVec27[i-2])));
			}
			
			// LOOP 0x28f6bf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec77[i] = (fSlow48 + (fVec28[i-3] + (fVec28[i-1] + fVec28[i-2])));
			}
			
			// LOOP 0x28f9e80
			// exec code
			for (int i=0; i<count; i++) {
				fZec78[i] = (fSlow49 + (fVec29[i-3] + (fVec29[i-1] + fVec29[i-2])));
			}
			
			// LOOP 0x28fd340
			// exec code
			for (int i=0; i<count; i++) {
				fZec79[i] = (fSlow50 + (fVec30[i-3] + (fVec30[i-1] + fVec30[i-2])));
			}
			
			// LOOP 0x28ffc60
			// exec code
			for (int i=0; i<count; i++) {
				fZec80[i] = (fSlow51 + (fVec31[i-3] + (fVec31[i-1] + fVec31[i-2])));
			}
			
			// LOOP 0x2903400
			// exec code
			for (int i=0; i<count; i++) {
				fZec81[i] = (fSlow52 + (fVec32[i-3] + (fVec32[i-1] + fVec32[i-2])));
			}
			
			// LOOP 0x2905f70
			// exec code
			for (int i=0; i<count; i++) {
				fZec82[i] = (fSlow53 + (fVec33[i-3] + (fVec33[i-1] + fVec33[i-2])));
			}
			
			// LOOP 0x2908d90
			// exec code
			for (int i=0; i<count; i++) {
				fZec83[i] = (fSlow54 + (fVec34[i-3] + (fVec34[i-1] + fVec34[i-2])));
			}
			
			// LOOP 0x290b270
			// exec code
			for (int i=0; i<count; i++) {
				fZec84[i] = (fSlow55 + (fVec35[i-3] + (fVec35[i-1] + fVec35[i-2])));
			}
			
			// LOOP 0x290e380
			// exec code
			for (int i=0; i<count; i++) {
				fZec85[i] = (fSlow56 + (fVec36[i-3] + (fVec36[i-1] + fVec36[i-2])));
			}
			
			// LOOP 0x29117e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec86[i] = (fSlow57 + (fVec37[i-3] + (fVec37[i-1] + fVec37[i-2])));
			}
			
			// LOOP 0x2914000
			// exec code
			for (int i=0; i<count; i++) {
				fZec87[i] = (fSlow58 + (fVec38[i-3] + (fVec38[i-1] + fVec38[i-2])));
			}
			
			// LOOP 0x2917810
			// exec code
			for (int i=0; i<count; i++) {
				fZec88[i] = (fSlow59 + (fVec39[i-3] + (fVec39[i-1] + fVec39[i-2])));
			}
			
			// LOOP 0x291a330
			// exec code
			for (int i=0; i<count; i++) {
				fZec89[i] = (fSlow60 + (fVec40[i-3] + (fVec40[i-1] + fVec40[i-2])));
			}
			
			// LOOP 0x291ded0
			// exec code
			for (int i=0; i<count; i++) {
				fZec90[i] = (fSlow61 + (fVec41[i-3] + (fVec41[i-1] + fVec41[i-2])));
			}
			
			// LOOP 0x2921d10
			// exec code
			for (int i=0; i<count; i++) {
				fZec91[i] = (fSlow62 + (fVec42[i-3] + (fVec42[i-1] + fVec42[i-2])));
			}
			
			// LOOP 0x2924b50
			// exec code
			for (int i=0; i<count; i++) {
				fZec92[i] = (fSlow63 + (fVec43[i-3] + (fVec43[i-1] + fVec43[i-2])));
			}
			
			// LOOP 0x2928d20
			// exec code
			for (int i=0; i<count; i++) {
				fZec93[i] = (fSlow64 + (fVec44[i-3] + (fVec44[i-1] + fVec44[i-2])));
			}
			
			// LOOP 0x292be50
			// exec code
			for (int i=0; i<count; i++) {
				fZec94[i] = (fSlow65 + (fVec45[i-3] + (fVec45[i-1] + fVec45[i-2])));
			}
			
			// LOOP 0x292f2e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec95[i] = (fSlow66 + (fVec46[i-3] + (fVec46[i-1] + fVec46[i-2])));
			}
			
			// LOOP 0x2931b10
			// exec code
			for (int i=0; i<count; i++) {
				fZec96[i] = (fSlow67 + (fVec47[i-3] + (fVec47[i-1] + fVec47[i-2])));
			}
			
			// LOOP 0x29351f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec98[i] = (fRec1[i] * fZec97[i]);
			}
			
			// LOOP 0x29390d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec100[i] = (fRec24[i] * fZec99[i]);
			}
			
			// LOOP 0x293bfd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec102[i] = (fRec22[i] * fZec101[i]);
			}
			
			// LOOP 0x2940300
			// exec code
			for (int i=0; i<count; i++) {
				fZec104[i] = (fRec20[i] * fZec103[i]);
			}
			
			// LOOP 0x2943560
			// exec code
			for (int i=0; i<count; i++) {
				fZec106[i] = (fRec18[i] * fZec105[i]);
			}
			
			// LOOP 0x2947c90
			// exec code
			for (int i=0; i<count; i++) {
				fZec108[i] = (fRec16[i] * fZec107[i]);
			}
			
			// LOOP 0x294c6e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec110[i] = (fRec14[i] * fZec109[i]);
			}
			
			// LOOP 0x294fcc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec112[i] = (fRec12[i] * fZec111[i]);
			}
			
			// LOOP 0x2954b10
			// exec code
			for (int i=0; i<count; i++) {
				fZec114[i] = (fRec10[i] * fZec113[i]);
			}
			
			// LOOP 0x2958460
			// exec code
			for (int i=0; i<count; i++) {
				fZec116[i] = (fRec8[i] * fZec115[i]);
			}
			
			// LOOP 0x295c170
			// exec code
			for (int i=0; i<count; i++) {
				fZec118[i] = (fRec6[i] * fZec117[i]);
			}
			
			// LOOP 0x295ef10
			// exec code
			for (int i=0; i<count; i++) {
				fZec120[i] = (fRec4[i] * fZec119[i]);
			}
			
			// LOOP 0x2963020
			// exec code
			for (int i=0; i<count; i++) {
				fZec122[i] = (fRec1[i] * fZec121[i]);
			}
			
			// LOOP 0x29f5b70
			// exec code
			for (int i=0; i<count; i++) {
				fZec127[i] = (fRec83[i] + (fRec86[i] + (fRec89[i] + (fRec92[i] + fZec126[i]))));
			}
			
			// LOOP 0x29f8280
			// exec code
			for (int i=0; i<count; i++) {
				fZec128[i] = (0.5f * fRec4[i]);
			}
			
			// LOOP 0x29f86c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec129[i] = (0.5f * fRec6[i]);
			}
			
			// LOOP 0x29f8b60
			// exec code
			for (int i=0; i<count; i++) {
				fZec130[i] = (0.5f * fRec8[i]);
			}
			
			// LOOP 0x29f9000
			// exec code
			for (int i=0; i<count; i++) {
				fZec131[i] = (0.5f * fRec10[i]);
			}
			
			// LOOP 0x29f94a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec132[i] = (0.5f * fRec12[i]);
			}
			
			// LOOP 0x29f9940
			// exec code
			for (int i=0; i<count; i++) {
				fZec133[i] = (0.5f * fRec14[i]);
			}
			
			// LOOP 0x29f9de0
			// exec code
			for (int i=0; i<count; i++) {
				fZec134[i] = (0.5f * fRec16[i]);
			}
			
			// LOOP 0x29fa280
			// exec code
			for (int i=0; i<count; i++) {
				fZec135[i] = (0.5f * fRec18[i]);
			}
			
			// LOOP 0x29fa720
			// exec code
			for (int i=0; i<count; i++) {
				fZec136[i] = (0.5f * fRec20[i]);
			}
			
			// LOOP 0x29fabc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec137[i] = (0.5f * fRec22[i]);
			}
			
			// LOOP 0x29fafc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec138[i] = (0.5f * fRec26[i]);
			}
			
			// LOOP 0x29fb0a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec139[i] = (0.5f * fRec29[i]);
			}
			
			// LOOP 0x29fb280
			// exec code
			for (int i=0; i<count; i++) {
				fZec140[i] = (0.5f * fRec32[i]);
			}
			
			// LOOP 0x29fb4e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec141[i] = (0.5f * fRec35[i]);
			}
			
			// LOOP 0x29fb740
			// exec code
			for (int i=0; i<count; i++) {
				fZec142[i] = (0.5f * fRec38[i]);
			}
			
			// LOOP 0x29fb9a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec143[i] = (0.5f * fRec41[i]);
			}
			
			// LOOP 0x29fbf20
			// exec code
			for (int i=0; i<count; i++) {
				fZec144[i] = (0.5f * fRec44[i]);
			}
			
			// LOOP 0x29fc4e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec145[i] = (0.5f * fRec47[i]);
			}
			
			// LOOP 0x29fcaa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec146[i] = (0.5f * fRec50[i]);
			}
			
			// LOOP 0x29fd060
			// exec code
			for (int i=0; i<count; i++) {
				fZec147[i] = (0.5f * fRec53[i]);
			}
			
			// LOOP 0x29fd620
			// exec code
			for (int i=0; i<count; i++) {
				fZec148[i] = (0.5f * fRec56[i]);
			}
			
			// LOOP 0x29fdbe0
			// exec code
			for (int i=0; i<count; i++) {
				fZec149[i] = (0.5f * fRec59[i]);
			}
			
			// LOOP 0x29fe1a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec150[i] = (0.5f * fRec62[i]);
			}
			
			// LOOP 0x29fe760
			// exec code
			for (int i=0; i<count; i++) {
				fZec151[i] = (0.5f * fRec65[i]);
			}
			
			// LOOP 0x29fed20
			// exec code
			for (int i=0; i<count; i++) {
				fZec152[i] = (0.5f * fRec68[i]);
			}
			
			// LOOP 0x29ff2e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec153[i] = (0.5f * fRec71[i]);
			}
			
			// LOOP 0x29ff8a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec154[i] = (0.5f * fRec74[i]);
			}
			
			// LOOP 0x29ffe60
			// exec code
			for (int i=0; i<count; i++) {
				fZec155[i] = (0.5f * fRec77[i]);
			}
			
			// LOOP 0x2a00420
			// exec code
			for (int i=0; i<count; i++) {
				fZec156[i] = (0.5f * fRec80[i]);
			}
			
			// LOOP 0x2f04160
			// pre processing
			for (int i=0; i<4; i++) iRec249_tmp[i]=iRec249_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec249[i] = ((int(((fZec194[i] - (0.5f * fYec77[i-1])) < 0)))?(1 - iRec249[i-1]):iRec249[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec249_perm[i]=iRec249_tmp[count+i];
			
			// LOOP 0x2f08f00
			// pre processing
			for (int i=0; i<4; i++) iRec252_tmp[i]=iRec252_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec252[i] = ((int(((fZec195[i] - (0.5f * fYec78[i-1])) < 0)))?(1 - iRec252[i-1]):iRec252[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec252_perm[i]=iRec252_tmp[count+i];
			
			// LOOP 0x2f0d7d0
			// pre processing
			for (int i=0; i<4; i++) iRec255_tmp[i]=iRec255_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec255[i] = ((int(((fZec196[i] - (0.5f * fYec79[i-1])) < 0)))?(1 - iRec255[i-1]):iRec255[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec255_perm[i]=iRec255_tmp[count+i];
			
			// LOOP 0x2f12090
			// pre processing
			for (int i=0; i<4; i++) iRec258_tmp[i]=iRec258_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec258[i] = ((int(((fZec197[i] - (0.5f * fYec80[i-1])) < 0)))?(1 - iRec258[i-1]):iRec258[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec258_perm[i]=iRec258_tmp[count+i];
			
			// LOOP 0x2f16950
			// pre processing
			for (int i=0; i<4; i++) iRec261_tmp[i]=iRec261_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec261[i] = ((int(((fZec198[i] - (0.5f * fYec81[i-1])) < 0)))?(1 - iRec261[i-1]):iRec261[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec261_perm[i]=iRec261_tmp[count+i];
			
			// LOOP 0x2f1b560
			// pre processing
			for (int i=0; i<4; i++) iRec264_tmp[i]=iRec264_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec264[i] = ((int(((fZec199[i] - (0.5f * fYec82[i-1])) < 0)))?(1 - iRec264[i-1]):iRec264[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec264_perm[i]=iRec264_tmp[count+i];
			
			// LOOP 0x2f1fe20
			// pre processing
			for (int i=0; i<4; i++) iRec267_tmp[i]=iRec267_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec267[i] = ((int(((fZec200[i] - (0.5f * fYec83[i-1])) < 0)))?(1 - iRec267[i-1]):iRec267[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec267_perm[i]=iRec267_tmp[count+i];
			
			// LOOP 0x2f24700
			// pre processing
			for (int i=0; i<4; i++) iRec270_tmp[i]=iRec270_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec270[i] = ((int(((fZec201[i] - (0.5f * fYec84[i-1])) < 0)))?(1 - iRec270[i-1]):iRec270[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec270_perm[i]=iRec270_tmp[count+i];
			
			// LOOP 0x2f28fc0
			// pre processing
			for (int i=0; i<4; i++) iRec273_tmp[i]=iRec273_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec273[i] = ((int(((fZec202[i] - (0.5f * fYec85[i-1])) < 0)))?(1 - iRec273[i-1]):iRec273[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec273_perm[i]=iRec273_tmp[count+i];
			
			// LOOP 0x2f2d880
			// pre processing
			for (int i=0; i<4; i++) iRec276_tmp[i]=iRec276_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec276[i] = ((int(((fZec203[i] - (0.5f * fYec86[i-1])) < 0)))?(1 - iRec276[i-1]):iRec276[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec276_perm[i]=iRec276_tmp[count+i];
			
			// LOOP 0x2f32140
			// pre processing
			for (int i=0; i<4; i++) iRec279_tmp[i]=iRec279_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec279[i] = ((int(((fZec204[i] - (0.5f * fYec87[i-1])) < 0)))?(1 - iRec279[i-1]):iRec279[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec279_perm[i]=iRec279_tmp[count+i];
			
			// LOOP 0x2f369e0
			// pre processing
			for (int i=0; i<4; i++) iRec282_tmp[i]=iRec282_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec282[i] = ((int(((fZec205[i] - (0.5f * fYec88[i-1])) < 0)))?(1 - iRec282[i-1]):iRec282[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec282_perm[i]=iRec282_tmp[count+i];
			
			// SECTION : 23
			// LOOP 0x28b7610
			// exec code
			for (int i=0; i<count; i++) {
				fZec123[i] = (0.25f * (fZec122[i] + (fZec120[i] + (fZec118[i] + (fZec116[i] + (fZec114[i] + (fZec112[i] + (fZec110[i] + (fZec108[i] + (fZec106[i] + (fZec104[i] + (fZec102[i] + (fZec100[i] + (fZec98[i] + ((fRec4[i] * fZec96[i]) + ((fRec6[i] * fZec95[i]) + ((fRec8[i] * fZec94[i]) + ((fRec10[i] * fZec93[i]) + ((fRec12[i] * fZec92[i]) + ((fRec14[i] * fZec91[i]) + ((fRec16[i] * fZec90[i]) + ((fRec18[i] * fZec89[i]) + ((fRec20[i] * fZec88[i]) + ((fRec22[i] * fZec87[i]) + ((fRec24[i] * fZec86[i]) + ((fRec1[i] * fZec85[i]) + ((fRec26[i] * fZec84[i]) + ((fRec29[i] * fZec83[i]) + ((fRec32[i] * fZec82[i]) + ((fRec35[i] * fZec81[i]) + ((fRec38[i] * fZec80[i]) + ((fRec41[i] * fZec79[i]) + ((fRec44[i] * fZec78[i]) + ((fRec47[i] * fZec77[i]) + ((fRec50[i] * fZec76[i]) + ((fRec53[i] * fZec75[i]) + ((fRec56[i] * fZec74[i]) + ((fRec59[i] * fZec73[i]) + ((fRec62[i] * fZec72[i]) + ((fRec65[i] * fZec71[i]) + ((fRec68[i] * fZec70[i]) + ((fRec71[i] * fZec69[i]) + ((fRec74[i] * fZec68[i]) + ((fRec77[i] * fZec67[i]) + ((fRec80[i] * fZec66[i]) + (fSlow36 * ((fRec83[i] * fZec65[i]) + ((fRec86[i] * fZec64[i]) + ((fRec89[i] * fZec63[i]) + ((fRec92[i] * fZec62[i]) + ((fRec95[i] * fZec61[i]) + ((fRec98[i] * fZec60[i]) + ((fRec101[i] * fZec59[i]) + ((fRec104[i] * fZec58[i]) + ((fRec107[i] * fZec57[i]) + ((fRec110[i] * fZec56[i]) + ((fRec113[i] * fZec55[i]) + ((fRec116[i] * fZec54[i]) + ((fRec119[i] * fZec53[i]) + ((fRec122[i] * fZec52[i]) + ((fRec125[i] * fZec51[i]) + ((fRec128[i] * fZec50[i]) + (fRec131[i] * fZec49[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x29f48a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec157[i] = ((2 * ((((((((((((fRec24[i] + (fRec1[i] + ((((((((((((((((((fZec156[i] + fZec155[i]) + fZec154[i]) + fZec153[i]) + fZec152[i]) + fZec151[i]) + fZec150[i]) + fZec149[i]) + fZec148[i]) + fZec147[i]) + fZec146[i]) + fZec145[i]) + fZec144[i]) + fZec143[i]) + fZec142[i]) + fZec141[i]) + fZec140[i]) + fZec139[i]) + fZec138[i]))) + fZec137[i]) + fZec136[i]) + fZec135[i]) + fZec134[i]) + fZec133[i]) + fZec132[i]) + fZec131[i]) + fZec130[i]) + fZec129[i]) + fZec128[i]) + (fSlow81 * fZec127[i]))) + (fRec4[i] + (fRec6[i] + (fRec8[i] + (fRec10[i] + (fRec12[i] + (fRec14[i] + (fRec16[i] + (fRec18[i] + (fRec20[i] + (fRec1[i] + fRec22[i])))))))))));
			}
			
			// LOOP 0x2a4eb40
			// pre processing
			for (int i=0; i<4; i++) fRec157_tmp[i]=fRec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec157[i] = (fRec157[i-1] + (fConst16 * (yc20_get_sample(fZec165[i], 4, 0) - fRec157[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec157_perm[i]=fRec157_tmp[count+i];
			
			// LOOP 0x2b69e40
			// pre processing
			for (int i=0; i<4; i++) fRec161_tmp[i]=fRec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec161[i] = (fRec161[i-1] + (fConst17 * (yc20_get_sample(fZec168[i], 3, 0) - fRec161[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec161_perm[i]=fRec161_tmp[count+i];
			
			// LOOP 0x2b6f0c0
			// pre processing
			for (int i=0; i<4; i++) fRec164_tmp[i]=fRec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec164[i] = (fRec164[i-1] + (fConst17 * (yc20_get_sample(fZec169[i], 2, 0) - fRec164[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec164_perm[i]=fRec164_tmp[count+i];
			
			// LOOP 0x2b73e90
			// pre processing
			for (int i=0; i<4; i++) fRec167_tmp[i]=fRec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec167[i] = (fRec167[i-1] + (fConst17 * (yc20_get_sample(fZec170[i], 1, 0) - fRec167[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec167_perm[i]=fRec167_tmp[count+i];
			
			// LOOP 0x2b78c40
			// pre processing
			for (int i=0; i<4; i++) fRec170_tmp[i]=fRec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec170[i] = (fRec170[i-1] + (fConst17 * (yc20_get_sample(fZec171[i], 0, 0) - fRec170[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec170_perm[i]=fRec170_tmp[count+i];
			
			// LOOP 0x2c92580
			// pre processing
			for (int i=0; i<4; i++) fRec174_tmp[i]=fRec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec174[i] = (fRec174[i-1] + (fConst18 * (yc20_get_sample(fZec174[i], 11, 0) - fRec174[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec174_perm[i]=fRec174_tmp[count+i];
			
			// LOOP 0x2c97ed0
			// pre processing
			for (int i=0; i<4; i++) fRec177_tmp[i]=fRec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec177[i] = (fRec177[i-1] + (fConst18 * (yc20_get_sample(fZec175[i], 10, 0) - fRec177[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec177_perm[i]=fRec177_tmp[count+i];
			
			// LOOP 0x2c9ceb0
			// pre processing
			for (int i=0; i<4; i++) fRec180_tmp[i]=fRec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec180[i] = (fRec180[i-1] + (fConst18 * (yc20_get_sample(fZec176[i], 9, 0) - fRec180[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec180_perm[i]=fRec180_tmp[count+i];
			
			// LOOP 0x2ca1e80
			// pre processing
			for (int i=0; i<4; i++) fRec183_tmp[i]=fRec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec183[i] = (fRec183[i-1] + (fConst18 * (yc20_get_sample(fZec177[i], 8, 0) - fRec183[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec183_perm[i]=fRec183_tmp[count+i];
			
			// LOOP 0x2ca6e30
			// pre processing
			for (int i=0; i<4; i++) fRec186_tmp[i]=fRec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec186[i] = (fRec186[i-1] + (fConst20 * (yc20_get_sample(fZec178[i], 7, 0) - fRec186[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec186_perm[i]=fRec186_tmp[count+i];
			
			// LOOP 0x2da05d0
			// pre processing
			for (int i=0; i<4; i++) fRec190_tmp[i]=fRec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec190[i] = (fRec190[i-1] + (fConst20 * (yc20_get_sample(fZec184[i], 6, 0) - fRec190[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec190_perm[i]=fRec190_tmp[count+i];
			
			// LOOP 0x2da4dc0
			// pre processing
			for (int i=0; i<4; i++) fRec193_tmp[i]=fRec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec193[i] = (fRec193[i-1] + (fConst20 * (yc20_get_sample(fZec185[i], 5, 0) - fRec193[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec193_perm[i]=fRec193_tmp[count+i];
			
			// LOOP 0x2da9a00
			// pre processing
			for (int i=0; i<4; i++) fRec196_tmp[i]=fRec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec196[i] = (fRec196[i-1] + (fConst20 * (yc20_get_sample(fZec186[i], 4, 0) - fRec196[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec196_perm[i]=fRec196_tmp[count+i];
			
			// LOOP 0x2dae910
			// pre processing
			for (int i=0; i<4; i++) fRec199_tmp[i]=fRec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec199[i] = (fRec199[i-1] + (fConst21 * (yc20_get_sample(fZec187[i], 3, 0) - fRec199[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec199_perm[i]=fRec199_tmp[count+i];
			
			// LOOP 0x2db3c30
			// pre processing
			for (int i=0; i<4; i++) fRec202_tmp[i]=fRec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec202[i] = (fRec202[i-1] + (fConst21 * (yc20_get_sample(fZec188[i], 2, 0) - fRec202[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec202_perm[i]=fRec202_tmp[count+i];
			
			// LOOP 0x2db8be0
			// pre processing
			for (int i=0; i<4; i++) fRec205_tmp[i]=fRec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec205[i] = (fRec205[i-1] + (fConst21 * (yc20_get_sample(fZec189[i], 1, 0) - fRec205[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec205_perm[i]=fRec205_tmp[count+i];
			
			// LOOP 0x2dbdbd0
			// pre processing
			for (int i=0; i<4; i++) fRec208_tmp[i]=fRec208_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec208[i] = (fRec208[i-1] + (fConst21 * (yc20_get_sample(fZec190[i], 0, 0) - fRec208[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec208_perm[i]=fRec208_tmp[count+i];
			
			// LOOP 0x2ec5c00
			// pre processing
			for (int i=0; i<4; i++) fRec212_tmp[i]=fRec212_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec212[i] = (fRec212[i-1] + (fConst21 * (yc20_get_sample(fZec194[i], 11, 0) - fRec212[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec212_perm[i]=fRec212_tmp[count+i];
			
			// LOOP 0x2ecb3c0
			// pre processing
			for (int i=0; i<4; i++) fRec215_tmp[i]=fRec215_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec215[i] = (fRec215[i-1] + (fConst21 * (yc20_get_sample(fZec195[i], 10, 0) - fRec215[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec215_perm[i]=fRec215_tmp[count+i];
			
			// LOOP 0x2ed0580
			// pre processing
			for (int i=0; i<4; i++) fRec218_tmp[i]=fRec218_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec218[i] = (fRec218[i-1] + (fConst21 * (yc20_get_sample(fZec196[i], 9, 0) - fRec218[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec218_perm[i]=fRec218_tmp[count+i];
			
			// LOOP 0x2ed5730
			// pre processing
			for (int i=0; i<4; i++) fRec221_tmp[i]=fRec221_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec221[i] = (fRec221[i-1] + (fConst21 * (yc20_get_sample(fZec197[i], 8, 0) - fRec221[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec221_perm[i]=fRec221_tmp[count+i];
			
			// LOOP 0x2eda8e0
			// pre processing
			for (int i=0; i<4; i++) fRec224_tmp[i]=fRec224_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec224[i] = (fRec224[i-1] + (fConst23 * (yc20_get_sample(fZec198[i], 7, 0) - fRec224[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec224_perm[i]=fRec224_tmp[count+i];
			
			// LOOP 0x2edfda0
			// pre processing
			for (int i=0; i<4; i++) fRec227_tmp[i]=fRec227_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec227[i] = (fRec227[i-1] + (fConst23 * (yc20_get_sample(fZec199[i], 6, 0) - fRec227[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec227_perm[i]=fRec227_tmp[count+i];
			
			// LOOP 0x2ee4f80
			// pre processing
			for (int i=0; i<4; i++) fRec230_tmp[i]=fRec230_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec230[i] = (fRec230[i-1] + (fConst23 * (yc20_get_sample(fZec200[i], 5, 0) - fRec230[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec230_perm[i]=fRec230_tmp[count+i];
			
			// LOOP 0x2eea150
			// pre processing
			for (int i=0; i<4; i++) fRec233_tmp[i]=fRec233_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec233[i] = (fRec233[i-1] + (fConst23 * (yc20_get_sample(fZec201[i], 4, 0) - fRec233[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec233_perm[i]=fRec233_tmp[count+i];
			
			// LOOP 0x2eef300
			// pre processing
			for (int i=0; i<4; i++) fRec236_tmp[i]=fRec236_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec236[i] = (fRec236[i-1] + (fConst24 * (yc20_get_sample(fZec202[i], 3, 0) - fRec236[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec236_perm[i]=fRec236_tmp[count+i];
			
			// LOOP 0x2ef4800
			// pre processing
			for (int i=0; i<4; i++) fRec239_tmp[i]=fRec239_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec239[i] = (fRec239[i-1] + (fConst24 * (yc20_get_sample(fZec203[i], 2, 0) - fRec239[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec239_perm[i]=fRec239_tmp[count+i];
			
			// LOOP 0x2ef99b0
			// pre processing
			for (int i=0; i<4; i++) fRec242_tmp[i]=fRec242_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec242[i] = (fRec242[i-1] + (fConst24 * (yc20_get_sample(fZec204[i], 1, 0) - fRec242[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec242_perm[i]=fRec242_tmp[count+i];
			
			// LOOP 0x2efeb60
			// pre processing
			for (int i=0; i<4; i++) fRec245_tmp[i]=fRec245_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec245[i] = (fRec245[i-1] + (fConst24 * (yc20_get_sample(fZec205[i], 0, 0) - fRec245[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec245_perm[i]=fRec245_tmp[count+i];
			
			// LOOP 0x2f03d20
			// pre processing
			for (int i=0; i<4; i++) fRec248_tmp[i]=fRec248_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec248[i] = (fRec248[i-1] + (fConst24 * (yc20_get_sample((0.5f * (iRec249[i] + fZec194[i])), 11, 0) - fRec248[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec248_perm[i]=fRec248_tmp[count+i];
			
			// LOOP 0x2f08ac0
			// pre processing
			for (int i=0; i<4; i++) fRec251_tmp[i]=fRec251_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec251[i] = (fRec251[i-1] + (fConst24 * (yc20_get_sample((0.5f * (iRec252[i] + fZec195[i])), 10, 0) - fRec251[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec251_perm[i]=fRec251_tmp[count+i];
			
			// LOOP 0x2f0d390
			// pre processing
			for (int i=0; i<4; i++) fRec254_tmp[i]=fRec254_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec254[i] = (fRec254[i-1] + (fConst24 * (yc20_get_sample((0.5f * (iRec255[i] + fZec196[i])), 9, 0) - fRec254[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec254_perm[i]=fRec254_tmp[count+i];
			
			// LOOP 0x2f11c50
			// pre processing
			for (int i=0; i<4; i++) fRec257_tmp[i]=fRec257_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec257[i] = (fRec257[i-1] + (fConst24 * (yc20_get_sample((0.5f * (iRec258[i] + fZec197[i])), 8, 0) - fRec257[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec257_perm[i]=fRec257_tmp[count+i];
			
			// LOOP 0x2f16510
			// pre processing
			for (int i=0; i<4; i++) fRec260_tmp[i]=fRec260_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec260[i] = (fRec260[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec261[i] + fZec198[i])), 7, 0) - fRec260[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec260_perm[i]=fRec260_tmp[count+i];
			
			// LOOP 0x2f1b120
			// pre processing
			for (int i=0; i<4; i++) fRec263_tmp[i]=fRec263_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec263[i] = (fRec263[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec264[i] + fZec199[i])), 6, 0) - fRec263[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec263_perm[i]=fRec263_tmp[count+i];
			
			// LOOP 0x2f1f9e0
			// pre processing
			for (int i=0; i<4; i++) fRec266_tmp[i]=fRec266_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec266[i] = (fRec266[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec267[i] + fZec200[i])), 5, 0) - fRec266[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec266_perm[i]=fRec266_tmp[count+i];
			
			// LOOP 0x2f242c0
			// pre processing
			for (int i=0; i<4; i++) fRec269_tmp[i]=fRec269_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec269[i] = (fRec269[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec270[i] + fZec201[i])), 4, 0) - fRec269[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec269_perm[i]=fRec269_tmp[count+i];
			
			// LOOP 0x2f28b80
			// pre processing
			for (int i=0; i<4; i++) fRec272_tmp[i]=fRec272_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec272[i] = (fRec272[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec273[i] + fZec202[i])), 3, 0) - fRec272[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec272_perm[i]=fRec272_tmp[count+i];
			
			// LOOP 0x2f2d440
			// pre processing
			for (int i=0; i<4; i++) fRec275_tmp[i]=fRec275_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec275[i] = (fRec275[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec276[i] + fZec203[i])), 2, 0) - fRec275[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec275_perm[i]=fRec275_tmp[count+i];
			
			// LOOP 0x2f31d00
			// pre processing
			for (int i=0; i<4; i++) fRec278_tmp[i]=fRec278_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec278[i] = (fRec278[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec279[i] + fZec204[i])), 1, 0) - fRec278[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec278_perm[i]=fRec278_tmp[count+i];
			
			// LOOP 0x2f365a0
			// pre processing
			for (int i=0; i<4; i++) fRec281_tmp[i]=fRec281_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec281[i] = (fRec281[i-1] + (fConst26 * (yc20_get_sample((0.5f * (iRec282[i] + fZec205[i])), 0, 0) - fRec281[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec281_perm[i]=fRec281_tmp[count+i];
			
			// SECTION : 24
			// LOOP 0x28b7530
			// pre processing
			for (int i=0; i<4; i++) fYec48_tmp[i]=fYec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec48[i] = (fZec157[i] - fZec123[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec48_perm[i]=fYec48_tmp[count+i];
			
			// LOOP 0x2a2cc90
			// pre processing
			for (int i=0; i<4; i++) fRec136_tmp[i]=fRec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec136[i] = (fRec136[i-1] + (fConst15 * (yc20_get_sample(fZec158[i], 11, 0) - fRec136[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec136_perm[i]=fRec136_tmp[count+i];
			
			// LOOP 0x2a31790
			// pre processing
			for (int i=0; i<4; i++) fRec139_tmp[i]=fRec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec139[i] = (fRec139[i-1] + (fConst15 * (yc20_get_sample(fZec159[i], 10, 0) - fRec139[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec139_perm[i]=fRec139_tmp[count+i];
			
			// LOOP 0x2a36300
			// pre processing
			for (int i=0; i<4; i++) fRec142_tmp[i]=fRec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec142[i] = (fRec142[i-1] + (fConst15 * (yc20_get_sample(fZec160[i], 9, 0) - fRec142[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec142_perm[i]=fRec142_tmp[count+i];
			
			// LOOP 0x2a3b0d0
			// pre processing
			for (int i=0; i<4; i++) fRec145_tmp[i]=fRec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec145[i] = (fRec145[i-1] + (fConst15 * (yc20_get_sample(fZec161[i], 8, 0) - fRec145[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec145_perm[i]=fRec145_tmp[count+i];
			
			// LOOP 0x2a3fea0
			// pre processing
			for (int i=0; i<4; i++) fRec148_tmp[i]=fRec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec148[i] = (fRec148[i-1] + (fConst16 * (yc20_get_sample(fZec162[i], 7, 0) - fRec148[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec148_perm[i]=fRec148_tmp[count+i];
			
			// LOOP 0x2a44fc0
			// pre processing
			for (int i=0; i<4; i++) fRec151_tmp[i]=fRec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec151[i] = (fRec151[i-1] + (fConst16 * (yc20_get_sample(fZec163[i], 6, 0) - fRec151[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec151_perm[i]=fRec151_tmp[count+i];
			
			// LOOP 0x2a49d90
			// pre processing
			for (int i=0; i<4; i++) fRec154_tmp[i]=fRec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec154[i] = (fRec154[i-1] + (fConst16 * (yc20_get_sample(fZec164[i], 5, 0) - fRec154[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec154_perm[i]=fRec154_tmp[count+i];
			
			// LOOP 0x2a4e740
			// pre processing
			for (int i=0; i<4; i++) fRec156_tmp[i]=fRec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec156[i] = (fConst4 * ((fRec157[i] - fRec157[i-1]) + fRec156[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec156_perm[i]=fRec156_tmp[count+i];
			
			// LOOP 0x2b699e0
			// pre processing
			for (int i=0; i<4; i++) fRec160_tmp[i]=fRec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec160[i] = (fConst4 * ((fRec161[i] - fRec161[i-1]) + fRec160[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec160_perm[i]=fRec160_tmp[count+i];
			
			// LOOP 0x2b6ecc0
			// pre processing
			for (int i=0; i<4; i++) fRec163_tmp[i]=fRec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec163[i] = (fConst4 * ((fRec164[i] - fRec164[i-1]) + fRec163[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec163_perm[i]=fRec163_tmp[count+i];
			
			// LOOP 0x2b73a90
			// pre processing
			for (int i=0; i<4; i++) fRec166_tmp[i]=fRec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec166[i] = (fConst4 * ((fRec167[i] - fRec167[i-1]) + fRec166[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec166_perm[i]=fRec166_tmp[count+i];
			
			// LOOP 0x2b78840
			// pre processing
			for (int i=0; i<4; i++) fRec169_tmp[i]=fRec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec169[i] = (fConst4 * ((fRec170[i] - fRec170[i-1]) + fRec169[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec169_perm[i]=fRec169_tmp[count+i];
			
			// LOOP 0x2c92120
			// pre processing
			for (int i=0; i<4; i++) fRec173_tmp[i]=fRec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec173[i] = (fConst19 * ((fRec174[i] - fRec174[i-1]) + fRec173[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec173_perm[i]=fRec173_tmp[count+i];
			
			// LOOP 0x2c97ad0
			// pre processing
			for (int i=0; i<4; i++) fRec176_tmp[i]=fRec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec176[i] = (fConst19 * ((fRec177[i] - fRec177[i-1]) + fRec176[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec176_perm[i]=fRec176_tmp[count+i];
			
			// LOOP 0x2c9cab0
			// pre processing
			for (int i=0; i<4; i++) fRec179_tmp[i]=fRec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec179[i] = (fConst19 * ((fRec180[i] - fRec180[i-1]) + fRec179[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec179_perm[i]=fRec179_tmp[count+i];
			
			// LOOP 0x2ca1a80
			// pre processing
			for (int i=0; i<4; i++) fRec182_tmp[i]=fRec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec182[i] = (fConst19 * ((fRec183[i] - fRec183[i-1]) + fRec182[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec182_perm[i]=fRec182_tmp[count+i];
			
			// LOOP 0x2ca6a30
			// pre processing
			for (int i=0; i<4; i++) fRec185_tmp[i]=fRec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec185[i] = (fConst19 * ((fRec186[i] - fRec186[i-1]) + fRec185[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec185_perm[i]=fRec185_tmp[count+i];
			
			// LOOP 0x2d84fd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec181[i] = (fRec59[i] + (fRec62[i] + (fRec65[i] + (fRec68[i] + (fRec71[i] + (fRec74[i] + (fRec77[i] + (fRec80[i] + fZec127[i]))))))));
			}
			
			// LOOP 0x2da01d0
			// pre processing
			for (int i=0; i<4; i++) fRec189_tmp[i]=fRec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec189[i] = (fConst19 * ((fRec190[i] - fRec190[i-1]) + fRec189[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec189_perm[i]=fRec189_tmp[count+i];
			
			// LOOP 0x2da49c0
			// pre processing
			for (int i=0; i<4; i++) fRec192_tmp[i]=fRec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec192[i] = (fConst19 * ((fRec193[i] - fRec193[i-1]) + fRec192[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec192_perm[i]=fRec192_tmp[count+i];
			
			// LOOP 0x2da9600
			// pre processing
			for (int i=0; i<4; i++) fRec195_tmp[i]=fRec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec195[i] = (fConst19 * ((fRec196[i] - fRec196[i-1]) + fRec195[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec195_perm[i]=fRec195_tmp[count+i];
			
			// LOOP 0x2dae510
			// pre processing
			for (int i=0; i<4; i++) fRec198_tmp[i]=fRec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec198[i] = (fConst19 * ((fRec199[i] - fRec199[i-1]) + fRec198[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec198_perm[i]=fRec198_tmp[count+i];
			
			// LOOP 0x2db3830
			// pre processing
			for (int i=0; i<4; i++) fRec201_tmp[i]=fRec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec201[i] = (fConst19 * ((fRec202[i] - fRec202[i-1]) + fRec201[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec201_perm[i]=fRec201_tmp[count+i];
			
			// LOOP 0x2db87e0
			// pre processing
			for (int i=0; i<4; i++) fRec204_tmp[i]=fRec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec204[i] = (fConst19 * ((fRec205[i] - fRec205[i-1]) + fRec204[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec204_perm[i]=fRec204_tmp[count+i];
			
			// LOOP 0x2dbd7d0
			// pre processing
			for (int i=0; i<4; i++) fRec207_tmp[i]=fRec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec207[i] = (fConst19 * ((fRec208[i] - fRec208[i-1]) + fRec207[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec207_perm[i]=fRec207_tmp[count+i];
			
			// LOOP 0x2ec57a0
			// pre processing
			for (int i=0; i<4; i++) fRec211_tmp[i]=fRec211_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec211[i] = (fConst22 * ((fRec212[i] - fRec212[i-1]) + fRec211[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec211_perm[i]=fRec211_tmp[count+i];
			
			// LOOP 0x2ecafc0
			// pre processing
			for (int i=0; i<4; i++) fRec214_tmp[i]=fRec214_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec214[i] = (fConst22 * ((fRec215[i] - fRec215[i-1]) + fRec214[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec214_perm[i]=fRec214_tmp[count+i];
			
			// LOOP 0x2ed0180
			// pre processing
			for (int i=0; i<4; i++) fRec217_tmp[i]=fRec217_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec217[i] = (fConst22 * ((fRec218[i] - fRec218[i-1]) + fRec217[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec217_perm[i]=fRec217_tmp[count+i];
			
			// LOOP 0x2ed5330
			// pre processing
			for (int i=0; i<4; i++) fRec220_tmp[i]=fRec220_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec220[i] = (fConst22 * ((fRec221[i] - fRec221[i-1]) + fRec220[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec220_perm[i]=fRec220_tmp[count+i];
			
			// LOOP 0x2eda4e0
			// pre processing
			for (int i=0; i<4; i++) fRec223_tmp[i]=fRec223_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec223[i] = (fConst22 * ((fRec224[i] - fRec224[i-1]) + fRec223[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec223_perm[i]=fRec223_tmp[count+i];
			
			// LOOP 0x2edf9a0
			// pre processing
			for (int i=0; i<4; i++) fRec226_tmp[i]=fRec226_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec226[i] = (fConst22 * ((fRec227[i] - fRec227[i-1]) + fRec226[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec226_perm[i]=fRec226_tmp[count+i];
			
			// LOOP 0x2ee4b80
			// pre processing
			for (int i=0; i<4; i++) fRec229_tmp[i]=fRec229_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec229[i] = (fConst22 * ((fRec230[i] - fRec230[i-1]) + fRec229[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec229_perm[i]=fRec229_tmp[count+i];
			
			// LOOP 0x2ee9d50
			// pre processing
			for (int i=0; i<4; i++) fRec232_tmp[i]=fRec232_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec232[i] = (fConst22 * ((fRec233[i] - fRec233[i-1]) + fRec232[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec232_perm[i]=fRec232_tmp[count+i];
			
			// LOOP 0x2eeef00
			// pre processing
			for (int i=0; i<4; i++) fRec235_tmp[i]=fRec235_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec235[i] = (fConst22 * ((fRec236[i] - fRec236[i-1]) + fRec235[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec235_perm[i]=fRec235_tmp[count+i];
			
			// LOOP 0x2ef4400
			// pre processing
			for (int i=0; i<4; i++) fRec238_tmp[i]=fRec238_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec238[i] = (fConst22 * ((fRec239[i] - fRec239[i-1]) + fRec238[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec238_perm[i]=fRec238_tmp[count+i];
			
			// LOOP 0x2ef95b0
			// pre processing
			for (int i=0; i<4; i++) fRec241_tmp[i]=fRec241_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec241[i] = (fConst22 * ((fRec242[i] - fRec242[i-1]) + fRec241[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec241_perm[i]=fRec241_tmp[count+i];
			
			// LOOP 0x2efe760
			// pre processing
			for (int i=0; i<4; i++) fRec244_tmp[i]=fRec244_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec244[i] = (fConst22 * ((fRec245[i] - fRec245[i-1]) + fRec244[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec244_perm[i]=fRec244_tmp[count+i];
			
			// LOOP 0x2f03920
			// pre processing
			for (int i=0; i<4; i++) fRec247_tmp[i]=fRec247_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec247[i] = (fConst25 * ((fRec248[i] - fRec248[i-1]) + fRec247[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec247_perm[i]=fRec247_tmp[count+i];
			
			// LOOP 0x2f086c0
			// pre processing
			for (int i=0; i<4; i++) fRec250_tmp[i]=fRec250_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec250[i] = (fConst25 * ((fRec251[i] - fRec251[i-1]) + fRec250[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec250_perm[i]=fRec250_tmp[count+i];
			
			// LOOP 0x2f0cf90
			// pre processing
			for (int i=0; i<4; i++) fRec253_tmp[i]=fRec253_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec253[i] = (fConst25 * ((fRec254[i] - fRec254[i-1]) + fRec253[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec253_perm[i]=fRec253_tmp[count+i];
			
			// LOOP 0x2f11850
			// pre processing
			for (int i=0; i<4; i++) fRec256_tmp[i]=fRec256_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec256[i] = (fConst25 * ((fRec257[i] - fRec257[i-1]) + fRec256[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec256_perm[i]=fRec256_tmp[count+i];
			
			// LOOP 0x2f16110
			// pre processing
			for (int i=0; i<4; i++) fRec259_tmp[i]=fRec259_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec259[i] = (fConst25 * ((fRec260[i] - fRec260[i-1]) + fRec259[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec259_perm[i]=fRec259_tmp[count+i];
			
			// LOOP 0x2f1ad20
			// pre processing
			for (int i=0; i<4; i++) fRec262_tmp[i]=fRec262_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec262[i] = (fConst25 * ((fRec263[i] - fRec263[i-1]) + fRec262[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec262_perm[i]=fRec262_tmp[count+i];
			
			// LOOP 0x2f1f5e0
			// pre processing
			for (int i=0; i<4; i++) fRec265_tmp[i]=fRec265_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec265[i] = (fConst25 * ((fRec266[i] - fRec266[i-1]) + fRec265[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec265_perm[i]=fRec265_tmp[count+i];
			
			// LOOP 0x2f23ec0
			// pre processing
			for (int i=0; i<4; i++) fRec268_tmp[i]=fRec268_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec268[i] = (fConst25 * ((fRec269[i] - fRec269[i-1]) + fRec268[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec268_perm[i]=fRec268_tmp[count+i];
			
			// LOOP 0x2f28780
			// pre processing
			for (int i=0; i<4; i++) fRec271_tmp[i]=fRec271_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec271[i] = (fConst25 * ((fRec272[i] - fRec272[i-1]) + fRec271[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec271_perm[i]=fRec271_tmp[count+i];
			
			// LOOP 0x2f2d040
			// pre processing
			for (int i=0; i<4; i++) fRec274_tmp[i]=fRec274_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec274[i] = (fConst25 * ((fRec275[i] - fRec275[i-1]) + fRec274[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec274_perm[i]=fRec274_tmp[count+i];
			
			// LOOP 0x2f31900
			// pre processing
			for (int i=0; i<4; i++) fRec277_tmp[i]=fRec277_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec277[i] = (fConst25 * ((fRec278[i] - fRec278[i-1]) + fRec277[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec277_perm[i]=fRec277_tmp[count+i];
			
			// LOOP 0x2f361a0
			// pre processing
			for (int i=0; i<4; i++) fRec280_tmp[i]=fRec280_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec280[i] = (fConst25 * ((fRec281[i] - fRec281[i-1]) + fRec280[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec280_perm[i]=fRec280_tmp[count+i];
			
			// SECTION : 25
			// LOOP 0x28b7050
			// pre processing
			for (int i=0; i<4; i++) fRec134_tmp[i]=fRec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec134[i] = (fConst14 * ((fZec157[i] - (fZec123[i] + fYec48[i-1])) + fRec134[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec134_perm[i]=fRec134_tmp[count+i];
			
			// LOOP 0x2a2c890
			// pre processing
			for (int i=0; i<4; i++) fRec135_tmp[i]=fRec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec135[i] = (fConst4 * ((fRec136[i] - fRec136[i-1]) + fRec135[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec135_perm[i]=fRec135_tmp[count+i];
			
			// LOOP 0x2a31390
			// pre processing
			for (int i=0; i<4; i++) fRec138_tmp[i]=fRec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec138[i] = (fConst4 * ((fRec139[i] - fRec139[i-1]) + fRec138[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec138_perm[i]=fRec138_tmp[count+i];
			
			// LOOP 0x2a35f00
			// pre processing
			for (int i=0; i<4; i++) fRec141_tmp[i]=fRec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec141[i] = (fConst4 * ((fRec142[i] - fRec142[i-1]) + fRec141[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec141_perm[i]=fRec141_tmp[count+i];
			
			// LOOP 0x2a3acd0
			// pre processing
			for (int i=0; i<4; i++) fRec144_tmp[i]=fRec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec144[i] = (fConst4 * ((fRec145[i] - fRec145[i-1]) + fRec144[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec144_perm[i]=fRec144_tmp[count+i];
			
			// LOOP 0x2a3faa0
			// pre processing
			for (int i=0; i<4; i++) fRec147_tmp[i]=fRec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec147[i] = (fConst4 * ((fRec148[i] - fRec148[i-1]) + fRec147[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec147_perm[i]=fRec147_tmp[count+i];
			
			// LOOP 0x2a44bc0
			// pre processing
			for (int i=0; i<4; i++) fRec150_tmp[i]=fRec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec150[i] = (fConst4 * ((fRec151[i] - fRec151[i-1]) + fRec150[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec150_perm[i]=fRec150_tmp[count+i];
			
			// LOOP 0x2a49990
			// pre processing
			for (int i=0; i<4; i++) fRec153_tmp[i]=fRec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec153[i] = (fConst4 * ((fRec154[i] - fRec154[i-1]) + fRec153[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec153_perm[i]=fRec153_tmp[count+i];
			
			// LOOP 0x2d84ef0
			// exec code
			for (int i=0; i<count; i++) {
				fZec182[i] = (fRec1[i] + (fRec26[i] + (fRec29[i] + (fRec32[i] + (fRec35[i] + (fRec38[i] + (fRec41[i] + (fRec44[i] + (fRec47[i] + (fRec50[i] + (fRec53[i] + (fRec56[i] + fZec181[i]))))))))))));
			}
			
			// LOOP 0x2dc2e40
			// exec code
			for (int i=0; i<count; i++) {
				fZec191[i] = ((fRec156[i] * fZec65[i]) + ((fRec160[i] * fZec64[i]) + ((fRec163[i] * fZec63[i]) + ((fRec166[i] * fZec62[i]) + ((fRec169[i] * fZec61[i]) + ((fRec173[i] * fZec60[i]) + ((fRec176[i] * fZec59[i]) + ((fRec179[i] * fZec58[i]) + ((fRec182[i] * fZec57[i]) + ((fRec185[i] * fZec56[i]) + ((fRec189[i] * fZec55[i]) + ((fRec192[i] * fZec54[i]) + ((fRec195[i] * fZec53[i]) + ((fRec198[i] * fZec52[i]) + ((fRec201[i] * fZec51[i]) + ((fRec204[i] * fZec50[i]) + (fRec207[i] * fZec49[i])))))))))))))))));
			}
			
			// LOOP 0x2f3b100
			// exec code
			for (int i=0; i<count; i++) {
				fZec206[i] = ((fRec232[i] * fZec65[i]) + ((fRec235[i] * fZec64[i]) + ((fRec238[i] * fZec63[i]) + ((fRec241[i] * fZec62[i]) + ((fRec244[i] * fZec61[i]) + ((fRec247[i] * fZec60[i]) + ((fRec250[i] * fZec59[i]) + ((fRec253[i] * fZec58[i]) + ((fRec256[i] * fZec57[i]) + ((fRec259[i] * fZec56[i]) + ((fRec262[i] * fZec55[i]) + ((fRec265[i] * fZec54[i]) + ((fRec268[i] * fZec53[i]) + ((fRec271[i] * fZec52[i]) + ((fRec274[i] * fZec51[i]) + ((fRec277[i] * fZec50[i]) + (fRec280[i] * fZec49[i])))))))))))))))));
			}
			
			// LOOP 0x3085340
			// exec code
			for (int i=0; i<count; i++) {
				fZec209[i] = ((fRec195[i] * fZec65[i]) + ((fRec198[i] * fZec64[i]) + ((fRec201[i] * fZec63[i]) + ((fRec204[i] * fZec62[i]) + ((fRec207[i] * fZec61[i]) + ((fRec211[i] * fZec60[i]) + ((fRec214[i] * fZec59[i]) + ((fRec217[i] * fZec58[i]) + ((fRec220[i] * fZec57[i]) + ((fRec223[i] * fZec56[i]) + ((fRec226[i] * fZec55[i]) + ((fRec229[i] * fZec54[i]) + ((fRec232[i] * fZec53[i]) + ((fRec235[i] * fZec52[i]) + ((fRec238[i] * fZec51[i]) + ((fRec241[i] * fZec50[i]) + (fRec244[i] * fZec49[i])))))))))))))))));
			}
			
			// SECTION : 26
			// LOOP 0x2b7dbd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec172[i] = (0.25f * (fZec122[i] + (fZec120[i] + (fZec118[i] + (fZec116[i] + (fZec114[i] + (fZec112[i] + (fZec110[i] + (fZec108[i] + (fZec106[i] + (fZec104[i] + (fZec102[i] + (fZec100[i] + (fZec98[i] + ((fRec26[i] * fZec96[i]) + ((fRec29[i] * fZec95[i]) + ((fRec32[i] * fZec94[i]) + ((fRec35[i] * fZec93[i]) + ((fRec38[i] * fZec92[i]) + ((fRec41[i] * fZec91[i]) + ((fRec44[i] * fZec90[i]) + ((fRec47[i] * fZec89[i]) + ((fRec50[i] * fZec88[i]) + ((fRec53[i] * fZec87[i]) + ((fRec56[i] * fZec86[i]) + ((fRec59[i] * fZec85[i]) + ((fRec62[i] * fZec84[i]) + ((fRec65[i] * fZec83[i]) + ((fRec68[i] * fZec82[i]) + ((fRec71[i] * fZec81[i]) + ((fRec74[i] * fZec80[i]) + ((fRec77[i] * fZec79[i]) + ((fRec80[i] * fZec78[i]) + ((fRec83[i] * fZec77[i]) + ((fRec86[i] * fZec76[i]) + ((fRec89[i] * fZec75[i]) + ((fRec92[i] * fZec74[i]) + ((fRec95[i] * fZec73[i]) + ((fRec98[i] * fZec72[i]) + ((fRec101[i] * fZec71[i]) + ((fRec104[i] * fZec70[i]) + ((fRec107[i] * fZec69[i]) + ((fRec110[i] * fZec68[i]) + ((fRec113[i] * fZec67[i]) + ((fRec116[i] * fZec66[i]) + (fSlow36 * ((fRec119[i] * fZec65[i]) + ((fRec122[i] * fZec64[i]) + ((fRec125[i] * fZec63[i]) + ((fRec128[i] * fZec62[i]) + ((fRec131[i] * fZec61[i]) + ((fRec135[i] * fZec60[i]) + ((fRec138[i] * fZec59[i]) + ((fRec141[i] * fZec58[i]) + ((fRec144[i] * fZec57[i]) + ((fRec147[i] * fZec56[i]) + ((fRec150[i] * fZec55[i]) + ((fRec153[i] * fZec54[i]) + ((fRec156[i] * fZec53[i]) + ((fRec160[i] * fZec52[i]) + ((fRec163[i] * fZec51[i]) + ((fRec166[i] * fZec50[i]) + (fRec169[i] * fZec49[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x2c5d5b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec173[i] = ((fSlow36 * (fRec160[i] + (fRec163[i] + (fRec166[i] + (fRec169[i] + (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec153[i] + (fRec156[i] + fZec124[i]))))))))))))) + (fRec4[i] + (fRec6[i] + (fRec8[i] + (fRec10[i] + (fRec12[i] + (fRec14[i] + (fRec16[i] + (fRec18[i] + (fRec20[i] + (fRec22[i] + (fRec24[i] + ((2 * fRec1[i]) + (fRec26[i] + (fRec29[i] + (fRec32[i] + (fRec35[i] + (fRec38[i] + (fRec41[i] + (fRec44[i] + (fRec47[i] + (fRec50[i] + (fRec53[i] + (fRec56[i] + (fRec59[i] + (fRec62[i] + (fRec65[i] + (fRec68[i] + (fRec71[i] + (fRec74[i] + (fRec77[i] + (fRec80[i] + (fRec83[i] + (fRec86[i] + (fRec89[i] + (fRec92[i] + (fRec95[i] + (fRec98[i] + (fRec101[i] + (fRec104[i] + (fRec107[i] + (fRec110[i] + (fRec116[i] + fRec113[i])))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x2dc2d60
			// exec code
			for (int i=0; i<count; i++) {
				fZec192[i] = (0.25f * (fZec122[i] + ((fRec26[i] * fZec119[i]) + ((fRec29[i] * fZec117[i]) + ((fRec32[i] * fZec115[i]) + ((fRec35[i] * fZec113[i]) + ((fRec38[i] * fZec111[i]) + ((fRec41[i] * fZec109[i]) + ((fRec44[i] * fZec107[i]) + ((fRec47[i] * fZec105[i]) + ((fRec50[i] * fZec103[i]) + ((fRec53[i] * fZec101[i]) + ((fRec56[i] * fZec99[i]) + ((fRec59[i] * fZec97[i]) + ((fRec62[i] * fZec96[i]) + ((fRec65[i] * fZec95[i]) + ((fRec68[i] * fZec94[i]) + ((fRec71[i] * fZec93[i]) + ((fRec74[i] * fZec92[i]) + ((fRec77[i] * fZec91[i]) + ((fRec80[i] * fZec90[i]) + ((fRec83[i] * fZec89[i]) + ((fRec86[i] * fZec88[i]) + ((fRec89[i] * fZec87[i]) + ((fRec92[i] * fZec86[i]) + ((fRec95[i] * fZec85[i]) + ((fRec98[i] * fZec84[i]) + ((fRec101[i] * fZec83[i]) + ((fRec104[i] * fZec82[i]) + ((fRec107[i] * fZec81[i]) + ((fRec110[i] * fZec80[i]) + ((fRec113[i] * fZec79[i]) + ((fRec116[i] * fZec78[i]) + ((fRec119[i] * fZec77[i]) + ((fRec122[i] * fZec76[i]) + ((fRec125[i] * fZec75[i]) + ((fRec128[i] * fZec74[i]) + ((fRec131[i] * fZec73[i]) + ((fRec135[i] * fZec72[i]) + ((fRec138[i] * fZec71[i]) + ((fRec141[i] * fZec70[i]) + ((fRec144[i] * fZec69[i]) + ((fRec147[i] * fZec68[i]) + ((fRec150[i] * fZec67[i]) + ((fRec153[i] * fZec66[i]) + (fSlow36 * fZec191[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x2e80300
			// exec code
			for (int i=0; i<count; i++) {
				fZec193[i] = ((fSlow36 * (fRec189[i] + (fRec192[i] + (fRec195[i] + (fRec198[i] + (fRec201[i] + (fRec204[i] + (fRec207[i] + (fRec173[i] + (fRec176[i] + (fRec179[i] + (fRec182[i] + (fRec185[i] + (fRec160[i] + (fRec163[i] + (fRec166[i] + (fRec156[i] + fRec169[i]))))))))))))))))) + (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec153[i] + fZec182[i]))))))));
			}
			
			// LOOP 0x2f3b020
			// exec code
			for (int i=0; i<count; i++) {
				fZec207[i] = (0.41975f * ((fRec95[i] * fZec121[i]) + ((fRec98[i] * fZec119[i]) + ((fRec101[i] * fZec117[i]) + ((fRec104[i] * fZec115[i]) + ((fRec107[i] * fZec113[i]) + ((fRec110[i] * fZec111[i]) + ((fRec113[i] * fZec109[i]) + ((fRec116[i] * fZec107[i]) + ((fRec119[i] * fZec105[i]) + ((fRec122[i] * fZec103[i]) + ((fRec125[i] * fZec101[i]) + ((fRec128[i] * fZec99[i]) + ((fRec131[i] * fZec97[i]) + ((fRec135[i] * fZec96[i]) + ((fRec138[i] * fZec95[i]) + ((fRec141[i] * fZec94[i]) + ((fRec144[i] * fZec93[i]) + ((fRec147[i] * fZec92[i]) + ((fRec150[i] * fZec91[i]) + ((fRec153[i] * fZec90[i]) + ((fRec156[i] * fZec89[i]) + ((fRec160[i] * fZec88[i]) + ((fRec163[i] * fZec87[i]) + ((fRec166[i] * fZec86[i]) + ((fRec169[i] * fZec85[i]) + ((fRec173[i] * fZec84[i]) + ((fRec176[i] * fZec83[i]) + ((fRec179[i] * fZec82[i]) + ((fRec182[i] * fZec81[i]) + ((fRec185[i] * fZec80[i]) + ((fRec189[i] * fZec79[i]) + ((fRec192[i] * fZec78[i]) + ((fRec195[i] * fZec77[i]) + ((fRec198[i] * fZec76[i]) + ((fRec201[i] * fZec75[i]) + ((fRec204[i] * fZec74[i]) + ((fRec207[i] * fZec73[i]) + ((fRec211[i] * fZec72[i]) + ((fRec214[i] * fZec71[i]) + ((fRec217[i] * fZec70[i]) + ((fRec220[i] * fZec69[i]) + ((fRec223[i] * fZec68[i]) + ((fRec226[i] * fZec67[i]) + ((fRec229[i] * fZec66[i]) + (fSlow36 * fZec206[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x2fec880
			// exec code
			for (int i=0; i<count; i++) {
				fZec208[i] = (1.679f * ((fSlow36 * (fRec247[i] + (fRec250[i] + (fRec253[i] + (fRec256[i] + (fRec259[i] + (fRec262[i] + (fRec265[i] + (fRec268[i] + (fRec271[i] + (fRec274[i] + (fRec277[i] + (fRec280[i] + (fRec232[i] + (fRec235[i] + (fRec238[i] + (fRec244[i] + fRec241[i]))))))))))))))))) + (fRec211[i] + (fRec214[i] + (fRec217[i] + (fRec220[i] + (fRec223[i] + (fRec226[i] + (fRec229[i] + (fRec189[i] + (fRec192[i] + (fRec195[i] + (fRec198[i] + (fRec201[i] + (fRec204[i] + (fRec207[i] + (fRec173[i] + (fRec176[i] + (fRec179[i] + (fRec182[i] + (fRec185[i] + (fRec160[i] + (fRec163[i] + (fRec166[i] + (fRec169[i] + (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec153[i] + (fRec156[i] + fZec126[i])))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3085260
			// exec code
			for (int i=0; i<count; i++) {
				fZec210[i] = (0.25f * ((fRec59[i] * fZec121[i]) + ((fRec62[i] * fZec119[i]) + ((fRec65[i] * fZec117[i]) + ((fRec68[i] * fZec115[i]) + ((fRec71[i] * fZec113[i]) + ((fRec74[i] * fZec111[i]) + ((fRec77[i] * fZec109[i]) + ((fRec80[i] * fZec107[i]) + ((fRec83[i] * fZec105[i]) + ((fRec86[i] * fZec103[i]) + ((fRec89[i] * fZec101[i]) + ((fRec92[i] * fZec99[i]) + ((fRec95[i] * fZec97[i]) + ((fRec98[i] * fZec96[i]) + ((fRec101[i] * fZec95[i]) + ((fRec104[i] * fZec94[i]) + ((fRec107[i] * fZec93[i]) + ((fRec110[i] * fZec92[i]) + ((fRec113[i] * fZec91[i]) + ((fRec116[i] * fZec90[i]) + ((fRec119[i] * fZec89[i]) + ((fRec122[i] * fZec88[i]) + ((fRec125[i] * fZec87[i]) + ((fRec128[i] * fZec86[i]) + ((fRec131[i] * fZec85[i]) + ((fRec135[i] * fZec84[i]) + ((fRec138[i] * fZec83[i]) + ((fRec141[i] * fZec82[i]) + ((fRec144[i] * fZec81[i]) + ((fRec147[i] * fZec80[i]) + ((fRec150[i] * fZec79[i]) + ((fRec153[i] * fZec78[i]) + ((fRec156[i] * fZec77[i]) + ((fRec160[i] * fZec76[i]) + ((fRec163[i] * fZec75[i]) + ((fRec166[i] * fZec74[i]) + ((fRec169[i] * fZec73[i]) + ((fRec173[i] * fZec72[i]) + ((fRec176[i] * fZec71[i]) + ((fRec179[i] * fZec70[i]) + ((fRec182[i] * fZec69[i]) + ((fRec185[i] * fZec68[i]) + ((fRec189[i] * fZec67[i]) + ((fRec192[i] * fZec66[i]) + (fSlow36 * fZec209[i]))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3130e60
			// exec code
			for (int i=0; i<count; i++) {
				fZec211[i] = ((fSlow36 * (fRec211[i] + (fRec214[i] + (fRec217[i] + (fRec220[i] + (fRec223[i] + (fRec226[i] + (fRec229[i] + (fRec232[i] + (fRec235[i] + (fRec238[i] + (fRec241[i] + (fRec244[i] + (fRec195[i] + (fRec198[i] + (fRec201[i] + (fRec207[i] + fRec204[i]))))))))))))))))) + (fRec189[i] + (fRec192[i] + (fRec173[i] + (fRec176[i] + (fRec179[i] + (fRec182[i] + (fRec185[i] + (fRec160[i] + (fRec163[i] + (fRec166[i] + (fRec169[i] + (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec153[i] + (fRec156[i] + fZec181[i]))))))))))))))))))));
			}
			
			// LOOP 0x324cbc0
			// pre processing
			for (int i=0; i<4; i++) iRec308_tmp[i]=iRec308_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec308[i] = (12345 + (1103515245 * iRec308[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) iRec308_perm[i]=iRec308_tmp[count+i];
			
			// LOOP 0x324deb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec216[i] = (0.002f * (fRec134[i] * fSlow82));
			}
			
			// SECTION : 27
			// LOOP 0x2b7daf0
			// pre processing
			for (int i=0; i<4; i++) fYec62_tmp[i]=fYec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec62[i] = (fZec173[i] - fZec172[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec62_perm[i]=fYec62_tmp[count+i];
			
			// LOOP 0x2dc2c80
			// pre processing
			for (int i=0; i<4; i++) fYec76_tmp[i]=fYec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec76[i] = (fZec193[i] - fZec192[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec76_perm[i]=fYec76_tmp[count+i];
			
			// LOOP 0x2f3af40
			// pre processing
			for (int i=0; i<4; i++) fYec89_tmp[i]=fYec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec89[i] = (fZec208[i] - fZec207[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec89_perm[i]=fYec89_tmp[count+i];
			
			// LOOP 0x3085180
			// pre processing
			for (int i=0; i<4; i++) fYec90_tmp[i]=fYec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec90[i] = (fZec211[i] - fZec210[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec90_perm[i]=fYec90_tmp[count+i];
			
			// LOOP 0x324d900
			// exec code
			for (int i=0; i<count; i++) {
				fZec217[i] = faustpower<2>(float(min(1.0f, max(-1.0f, (fZec216[i] + ((4.656612875245796e-16f * iRec308[i]) + fZec123[i]))))));
			}
			
			// SECTION : 28
			// LOOP 0x2b7d5f0
			// pre processing
			for (int i=0; i<4; i++) fRec172_tmp[i]=fRec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec172[i] = (fConst14 * ((fZec173[i] - (fZec172[i] + fYec62[i-1])) + fRec172[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec172_perm[i]=fRec172_tmp[count+i];
			
			// LOOP 0x2dc2760
			// pre processing
			for (int i=0; i<4; i++) fRec210_tmp[i]=fRec210_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec210[i] = (fConst14 * ((fZec193[i] - (fZec192[i] + fYec76[i-1])) + fRec210[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec210_perm[i]=fRec210_tmp[count+i];
			
			// LOOP 0x2f3aa20
			// pre processing
			for (int i=0; i<4; i++) fRec283_tmp[i]=fRec283_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec283[i] = (fConst14 * ((fZec208[i] - (fZec207[i] + fYec89[i-1])) + fRec283[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec283_perm[i]=fRec283_tmp[count+i];
			
			// LOOP 0x3084c60
			// pre processing
			for (int i=0; i<4; i++) fRec284_tmp[i]=fRec284_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec284[i] = (fConst14 * ((fZec211[i] - (fZec210[i] + fYec90[i-1])) + fRec284[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec284_perm[i]=fRec284_tmp[count+i];
			
			// LOOP 0x324c5e0
			// pre processing
			for (int i=0; i<4; i++) fRec305_tmp[i]=fRec305_perm[i];
			for (int i=0; i<4; i++) iRec306_tmp[i]=iRec306_perm[i];
			for (int i=0; i<4; i++) fRec307_tmp[i]=fRec307_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iZec218[i] = int((iRec306[i-1] < iConst36));
				fRec305[i] = ((iZec218[i])?(fRec305[i-1] + fZec217[i]):fZec217[i]);
				iRec306[i] = ((iZec218[i])?(1 + iRec306[i-1]):1);
				fRec307[i] = ((iZec218[i])?fRec307[i-1]:fRec305[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec307_perm[i]=fRec307_tmp[count+i];
			for (int i=0; i<4; i++) iRec306_perm[i]=iRec306_tmp[count+i];
			for (int i=0; i<4; i++) fRec305_perm[i]=fRec305_tmp[count+i];
			
			// SECTION : 29
			// LOOP 0x2cac3f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec179[i] = ((fRec12[i] * fZec121[i]) + ((fRec14[i] * fZec119[i]) + ((fRec16[i] * fZec117[i]) + ((fRec18[i] * fZec115[i]) + ((fRec20[i] * fZec113[i]) + ((fRec22[i] * fZec111[i]) + ((fRec24[i] * fZec109[i]) + ((fRec1[i] * fZec107[i]) + ((fRec26[i] * fZec105[i]) + ((fRec29[i] * fZec103[i]) + ((fRec32[i] * fZec101[i]) + ((fRec35[i] * fZec99[i]) + ((fRec38[i] * fZec97[i]) + ((fRec41[i] * fZec96[i]) + ((fRec44[i] * fZec95[i]) + ((fRec47[i] * fZec94[i]) + ((fRec50[i] * fZec93[i]) + ((fRec53[i] * fZec92[i]) + ((fRec56[i] * fZec91[i]) + ((fRec59[i] * fZec90[i]) + ((fRec62[i] * fZec89[i]) + ((fRec65[i] * fZec88[i]) + ((fRec68[i] * fZec87[i]) + ((fRec71[i] * fZec86[i]) + ((fRec74[i] * fZec85[i]) + ((fRec77[i] * fZec84[i]) + ((fRec80[i] * fZec83[i]) + ((fRec83[i] * fZec82[i]) + ((fRec86[i] * fZec81[i]) + ((fRec89[i] * fZec80[i]) + ((fRec92[i] * fZec79[i]) + ((fRec95[i] * fZec78[i]) + ((fRec98[i] * fZec77[i]) + ((fRec101[i] * fZec76[i]) + ((fRec104[i] * fZec75[i]) + ((fRec107[i] * fZec74[i]) + ((fRec110[i] * fZec73[i]) + ((fRec113[i] * fZec72[i]) + ((fRec116[i] * fZec71[i]) + ((fRec119[i] * fZec70[i]) + ((fRec122[i] * fZec69[i]) + ((fRec125[i] * fZec68[i]) + ((fRec128[i] * fZec67[i]) + ((fRec131[i] * fZec66[i]) + (fSlow36 * ((fRec135[i] * fZec65[i]) + ((fRec138[i] * fZec64[i]) + ((fRec141[i] * fZec63[i]) + ((fRec144[i] * fZec62[i]) + ((fRec147[i] * fZec61[i]) + ((fRec150[i] * fZec60[i]) + ((fRec153[i] * fZec59[i]) + ((fRec156[i] * fZec58[i]) + ((fRec160[i] * fZec57[i]) + ((fRec163[i] * fZec56[i]) + ((fRec166[i] * fZec55[i]) + ((fRec169[i] * fZec54[i]) + ((fRec173[i] * fZec53[i]) + ((fRec176[i] * fZec52[i]) + ((fRec179[i] * fZec51[i]) + ((fRec182[i] * fZec50[i]) + (fRec185[i] * fZec49[i]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x3196b10
			// exec code
			for (int i=0; i<count; i++) {
				fZec212[i] = (fZec172[i] + (0.002f * (fRec172[i] * fSlow82)));
			}
			
			// LOOP 0x31ab010
			// exec code
			for (int i=0; i<count; i++) {
				fZec213[i] = (fZec192[i] + (0.002f * (fRec210[i] * fSlow82)));
			}
			
			// LOOP 0x31c0ac0
			// exec code
			for (int i=0; i<count; i++) {
				fZec214[i] = (fZec210[i] + (0.002f * (fRec284[i] * fSlow82)));
			}
			
			// LOOP 0x31d75b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec215[i] = (fZec207[i] + (0.002f * (fRec283[i] * fSlow82)));
			}
			
			// LOOP 0x3261b40
			// pre processing
			for (int i=0; i<4; i++) fYec99_tmp[i]=fYec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec99[i] = log10f(sqrtf((fConst37 * fRec307[i])));
			}
			// post processing
			for (int i=0; i<4; i++) fYec99_perm[i]=fYec99_tmp[count+i];
			
			// SECTION : 30
			// LOOP 0x2cac310
			// exec code
			for (int i=0; i<count; i++) {
				fZec180[i] = (0.25f * fZec179[i]);
			}
			
			// LOOP 0x2d84e10
			// exec code
			for (int i=0; i<count; i++) {
				fZec183[i] = ((fSlow36 * (fRec173[i] + (fRec176[i] + (fRec179[i] + (fRec182[i] + (fRec185[i] + (fRec160[i] + (fRec163[i] + (fRec166[i] + (fRec169[i] + (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec156[i] + fRec153[i]))))))))))))))))) + (fRec12[i] + (fRec14[i] + (fRec16[i] + (fRec18[i] + (fRec20[i] + (fRec22[i] + (fRec24[i] + fZec182[i]))))))));
			}
			
			// LOOP 0x3196a30
			// pre processing
			for (int i=0; i<4; i++) fYec91_tmp[i]=fYec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec91[i] = (fSlow84 * fZec212[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec91_perm[i]=fYec91_tmp[count+i];
			
			// LOOP 0x31aaf30
			// pre processing
			for (int i=0; i<4; i++) fYec92_tmp[i]=fYec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec92[i] = (fSlow86 * fZec213[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec92_perm[i]=fYec92_tmp[count+i];
			
			// LOOP 0x31c09e0
			// pre processing
			for (int i=0; i<4; i++) fYec93_tmp[i]=fYec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec93[i] = (fSlow88 * fZec214[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec93_perm[i]=fYec93_tmp[count+i];
			
			// LOOP 0x31d74d0
			// pre processing
			for (int i=0; i<4; i++) fYec94_tmp[i]=fYec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec94[i] = (fSlow90 * fZec215[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec94_perm[i]=fYec94_tmp[count+i];
			
			// LOOP 0x3261a60
			// exec code
			for (int i=0; i<count; i++) {
				fZec219[i] = (2e+01f * fYec99[i]);
			}
			
			// LOOP 0x32630a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec220[i] = (2e+01f * fYec99[i-1]);
			}
			
			// SECTION : 31
			// LOOP 0x2a53ad0
			// exec code
			for (int i=0; i<count; i++) {
				fZec166[i] = (0.25f * ((fRec18[i] * fZec121[i]) + ((fRec20[i] * fZec119[i]) + ((fRec22[i] * fZec117[i]) + ((fRec24[i] * fZec115[i]) + ((fRec1[i] * fZec113[i]) + ((fRec4[i] * fZec111[i]) + ((fRec6[i] * fZec109[i]) + ((fRec8[i] * fZec107[i]) + ((fRec10[i] * fZec105[i]) + ((fRec12[i] * fZec103[i]) + ((fRec14[i] * fZec101[i]) + ((fRec16[i] * fZec99[i]) + ((fRec18[i] * fZec97[i]) + ((fRec20[i] * fZec96[i]) + ((fRec22[i] * fZec95[i]) + ((fRec24[i] * fZec94[i]) + ((fRec1[i] * fZec93[i]) + ((fRec26[i] * fZec92[i]) + ((fRec29[i] * fZec91[i]) + ((fRec32[i] * fZec90[i]) + ((fRec35[i] * fZec89[i]) + ((fRec38[i] * fZec88[i]) + ((fRec41[i] * fZec87[i]) + ((fRec44[i] * fZec86[i]) + ((fRec47[i] * fZec85[i]) + ((fRec50[i] * fZec84[i]) + ((fRec53[i] * fZec83[i]) + ((fRec56[i] * fZec82[i]) + ((fRec59[i] * fZec81[i]) + ((fRec62[i] * fZec80[i]) + ((fRec65[i] * fZec79[i]) + ((fRec68[i] * fZec78[i]) + ((fRec71[i] * fZec77[i]) + ((fRec74[i] * fZec76[i]) + ((fRec77[i] * fZec75[i]) + ((fRec80[i] * fZec74[i]) + ((fRec83[i] * fZec73[i]) + ((fRec86[i] * fZec72[i]) + ((fRec89[i] * fZec71[i]) + ((fRec92[i] * fZec70[i]) + ((fRec95[i] * fZec69[i]) + ((fRec98[i] * fZec68[i]) + ((fRec101[i] * fZec67[i]) + ((fRec104[i] * fZec66[i]) + (fSlow36 * ((fRec107[i] * fZec65[i]) + ((fRec110[i] * fZec64[i]) + ((fRec113[i] * fZec63[i]) + ((fRec116[i] * fZec62[i]) + ((fRec119[i] * fZec61[i]) + ((fRec122[i] * fZec60[i]) + ((fRec125[i] * fZec59[i]) + ((fRec128[i] * fZec58[i]) + ((fRec131[i] * fZec57[i]) + ((fRec135[i] * fZec56[i]) + ((fRec138[i] * fZec55[i]) + ((fRec141[i] * fZec54[i]) + ((fRec144[i] * fZec53[i]) + ((fRec147[i] * fZec52[i]) + ((fRec150[i] * fZec51[i]) + ((fRec153[i] * fZec50[i]) + (fRec156[i] * fZec49[i])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x2b29e60
			// exec code
			for (int i=0; i<count; i++) {
				fZec167[i] = ((fRec18[i] + (fRec22[i] + fRec20[i])) + (2 * ((fZec128[i] + (fZec129[i] + (fZec130[i] + (fZec131[i] + (fZec132[i] + (fZec133[i] + (fZec134[i] + (fZec135[i] + (fZec136[i] + (fZec137[i] + (fRec24[i] + (fRec1[i] + (fZec138[i] + (fZec139[i] + (fZec140[i] + (fZec141[i] + (fZec142[i] + (fZec143[i] + (fZec144[i] + (fZec145[i] + (fZec146[i] + (fZec147[i] + (fZec148[i] + (fZec149[i] + (fZec150[i] + (fZec151[i] + (fZec152[i] + (fZec153[i] + (fZec154[i] + (fZec155[i] + (fZec156[i] + ((((((((0.5f * fRec104[i]) + (0.5f * fRec101[i])) + (0.5f * fRec98[i])) + (0.5f * fRec95[i])) + (0.5f * fRec92[i])) + (0.5f * fRec89[i])) + (0.5f * fRec86[i])) + (0.5f * fRec83[i]))))))))))))))))))))))))))))))))) + (fSlow81 * (fRec135[i] + (fRec138[i] + (fRec141[i] + (fRec144[i] + (fRec147[i] + (fRec150[i] + (fRec153[i] + (fRec156[i] + fZec125[i]))))))))))));
			}
			
			// LOOP 0x2cac230
			// pre processing
			for (int i=0; i<4; i++) fYec68_tmp[i]=fYec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec68[i] = (fZec183[i] - fZec180[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec68_perm[i]=fYec68_tmp[count+i];
			
			// LOOP 0x31eea70
			// pre processing
			for (int i=0; i<4; i++) fRec294_tmp[i]=fRec294_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec294[i] = (fConst27 * ((fYec91[i] - fYec91[i-1]) + fRec294[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec294_perm[i]=fRec294_tmp[count+i];
			
			// LOOP 0x31ff8b0
			// pre processing
			for (int i=0; i<4; i++) fRec296_tmp[i]=fRec296_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec296[i] = (fConst29 * ((fYec92[i] - fYec92[i-1]) + fRec296[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec296_perm[i]=fRec296_tmp[count+i];
			
			// LOOP 0x32124a0
			// pre processing
			for (int i=0; i<4; i++) fRec298_tmp[i]=fRec298_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec298[i] = (fConst31 * ((fYec93[i] - fYec93[i-1]) + fRec298[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec298_perm[i]=fRec298_tmp[count+i];
			
			// LOOP 0x3225fa0
			// pre processing
			for (int i=0; i<4; i++) fRec300_tmp[i]=fRec300_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec300[i] = (fConst33 * ((fYec94[i] - fYec94[i-1]) + fRec300[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec300_perm[i]=fRec300_tmp[count+i];
			
			// LOOP 0x324c0a0
			// pre processing
			for (int i=0; i<4; i++) fRec304_tmp[i]=fRec304_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec304[i] = min(1.0f, max(0.0f, ((((int((fZec219[i] > -25.0f)))?((int((fZec220[i] < -25.0f)))?1.0f:0.0f):0.0f) + fRec304[i-1]) - ((int((fZec220[i] > -35.0f)))?((int((fZec219[i] < -35.0f)))?1.0f:0.0f):0.0f))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec304_perm[i]=fRec304_tmp[count+i];
			
			// SECTION : 32
			// LOOP 0x2a539f0
			// pre processing
			for (int i=0; i<4; i++) fYec57_tmp[i]=fYec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec57[i] = (fZec167[i] - fZec166[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec57_perm[i]=fYec57_tmp[count+i];
			
			// LOOP 0x2cabd10
			// pre processing
			for (int i=0; i<4; i++) fRec188_tmp[i]=fRec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec188[i] = (fConst14 * ((fZec183[i] - (fZec180[i] + fYec68[i-1])) + fRec188[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec188_perm[i]=fRec188_tmp[count+i];
			
			// LOOP 0x31966b0
			// pre processing
			for (int i=0; i<4; i++) fRec286_tmp[i]=fRec286_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec286[i] = (fRec286[i-1] + (fConst7 * (fYec91[i] - fRec286[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec286_perm[i]=fRec286_tmp[count+i];
			
			// LOOP 0x31aaa30
			// pre processing
			for (int i=0; i<4; i++) fRec288_tmp[i]=fRec288_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec288[i] = (fRec288[i-1] + (fConst10 * (fYec92[i] - fRec288[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec288_perm[i]=fRec288_tmp[count+i];
			
			// LOOP 0x31c04e0
			// pre processing
			for (int i=0; i<4; i++) fRec290_tmp[i]=fRec290_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec290[i] = (fRec290[i-1] + (fConst13 * (fYec93[i] - fRec290[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec290_perm[i]=fRec290_tmp[count+i];
			
			// LOOP 0x31d6fd0
			// pre processing
			for (int i=0; i<4; i++) fRec292_tmp[i]=fRec292_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec292[i] = (fRec292[i-1] + (fConst16 * (fYec94[i] - fRec292[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec292_perm[i]=fRec292_tmp[count+i];
			
			// LOOP 0x31f6ae0
			// pre processing
			for (int i=0; i<4; i++) fYec95_tmp[i]=fYec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec95[i] = ((fSlow91 * fZec212[i]) + (0.5416666666666667f * fRec294[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec95_perm[i]=fYec95_tmp[count+i];
			
			// LOOP 0x3208920
			// pre processing
			for (int i=0; i<4; i++) fYec96_tmp[i]=fYec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec96[i] = ((fSlow92 * fZec213[i]) + (0.5416666666666667f * fRec296[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec96_perm[i]=fYec96_tmp[count+i];
			
			// LOOP 0x321bb10
			// pre processing
			for (int i=0; i<4; i++) fYec97_tmp[i]=fYec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec97[i] = ((fSlow93 * fZec214[i]) + (0.5416666666666667f * fRec298[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec97_perm[i]=fYec97_tmp[count+i];
			
			// LOOP 0x322fea0
			// pre processing
			for (int i=0; i<4; i++) fYec98_tmp[i]=fYec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec98[i] = ((fSlow94 * fZec215[i]) + (0.5416666666666667f * fRec300[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec98_perm[i]=fYec98_tmp[count+i];
			
			// LOOP 0x324bc80
			// pre processing
			for (int i=0; i<4; i++) fRec303_tmp[i]=fRec303_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec303[i] = ((fConst38 * ((int((fRec304[i] > 0.5f)))?((int((fRec304[i-1] < 0.5f)))?1.0f:0.0f):0.0f)) + (fConst39 * fRec303[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec303_perm[i]=fRec303_tmp[count+i];
			
			// SECTION : 33
			// LOOP 0x27dc940
			// pre processing
			for (int i=0; i<4; i++) fRec0_tmp[i]=fRec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec0[i] = (fSlow0 + (0.98f * fRec0[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec0_perm[i]=fRec0_tmp[count+i];
			
			// LOOP 0x2a534f0
			// pre processing
			for (int i=0; i<4; i++) fRec159_tmp[i]=fRec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec159[i] = (fConst14 * ((fZec167[i] - (fZec166[i] + fYec57[i-1])) + fRec159[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec159_perm[i]=fRec159_tmp[count+i];
			
			// LOOP 0x31964d0
			// pre processing
			for (int i=0; i<4; i++) fRec285_tmp[i]=fRec285_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec285[i] = (fRec285[i-1] + (fConst7 * (fRec286[i] - fRec285[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec285_perm[i]=fRec285_tmp[count+i];
			
			// LOOP 0x31aa630
			// pre processing
			for (int i=0; i<4; i++) fRec287_tmp[i]=fRec287_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec287[i] = (fRec287[i-1] + (fConst10 * (fRec288[i] - fRec287[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec287_perm[i]=fRec287_tmp[count+i];
			
			// LOOP 0x31c00e0
			// pre processing
			for (int i=0; i<4; i++) fRec289_tmp[i]=fRec289_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec289[i] = (fRec289[i-1] + (fConst13 * (fRec290[i] - fRec289[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec289_perm[i]=fRec289_tmp[count+i];
			
			// LOOP 0x31d6bd0
			// pre processing
			for (int i=0; i<4; i++) fRec291_tmp[i]=fRec291_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec291[i] = (fRec291[i-1] + (fConst16 * (fRec292[i] - fRec291[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec291_perm[i]=fRec291_tmp[count+i];
			
			// LOOP 0x31ee630
			// pre processing
			for (int i=0; i<4; i++) fRec293_tmp[i]=fRec293_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec293[i] = (fConst28 * ((fYec95[i] - fYec95[i-1]) + fRec293[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec293_perm[i]=fRec293_tmp[count+i];
			
			// LOOP 0x31ff410
			// pre processing
			for (int i=0; i<4; i++) fRec295_tmp[i]=fRec295_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec295[i] = (fConst30 * ((fYec96[i] - fYec96[i-1]) + fRec295[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec295_perm[i]=fRec295_tmp[count+i];
			
			// LOOP 0x3212060
			// pre processing
			for (int i=0; i<4; i++) fRec297_tmp[i]=fRec297_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec297[i] = (fConst32 * ((fYec97[i] - fYec97[i-1]) + fRec297[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec297_perm[i]=fRec297_tmp[count+i];
			
			// LOOP 0x3225b60
			// pre processing
			for (int i=0; i<4; i++) fRec299_tmp[i]=fRec299_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec299[i] = (fConst34 * ((fYec98[i] - fYec98[i-1]) + fRec299[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec299_perm[i]=fRec299_tmp[count+i];
			
			// LOOP 0x323a570
			// pre processing
			for (int i=0; i<4; i++) fRec301_tmp[i]=fRec301_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec301[i] = (fRec301[i-1] + (fConst35 * ((fSlow35 * ((fSlow98 * (((0.25f * fZec206[i]) + (0.125f * fZec209[i])) + (0.0625f * fZec191[i]))) + (fSlow96 * ((0.25f * fZec209[i]) + (0.125f * fZec191[i]))))) - fRec301[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec301_perm[i]=fRec301_tmp[count+i];
			
			// LOOP 0x3248f50
			// pre processing
			for (int i=0; i<4; i++) fRec302_tmp[i]=fRec302_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec302[i] = (fSlow99 + (0.98f * fRec302[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec302_perm[i]=fRec302_tmp[count+i];
			
			// LOOP 0x3271700
			// exec code
			for (int i=0; i<count; i++) {
				fZec221[i] = (fRec188[i] * fSlow82);
			}
			
			// LOOP 0x3271d90
			// exec code
			for (int i=0; i<count; i++) {
				fZec222[i] = (fZec123[i] + fZec216[i]);
			}
			
			// LOOP 0x3272e40
			// pre processing
			for (int i=0; i<4; i++) fYec100_tmp[i]=fYec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec100[i] = min(1.0f, (fConst40 * fRec303[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec100_perm[i]=fYec100_tmp[count+i];
			
			// SECTION : 34
			// LOOP 0x3271620
			// exec code
			for (int i=0; i<count; i++) {
				fZec223[i] = (fSlow101 * (max(fSlow100, (0.25f * (fYec100[i-4] + (fYec100[i-3] + (fYec100[i] + fYec100[i-2]))))) * ((0.5f * fZec215[i]) + (0.25f * ((fZec222[i] + fZec179[i]) + (0.008f * fZec221[i]))))));
			}
			
			// LOOP 0x3294be0
			// exec code
			for (int i=0; i<count; i++) {
				fZec224[i] = (fRec301[i] * (0.5f + (4.5f * fRec302[i])));
			}
			
			// LOOP 0x329c730
			// exec code
			for (int i=0; i<count; i++) {
				fZec225[i] = (fSlow106 * ((fSlow104 * (((fRec285[i] + fRec287[i]) + fRec289[i]) + fRec291[i])) + (fSlow103 * (((fRec293[i] + fRec295[i]) + fRec297[i]) + fRec299[i]))));
			}
			
			// LOOP 0x32e8580
			// exec code
			for (int i=0; i<count; i++) {
				fZec226[i] = (fSlow121 * ((fSlow120 * fZec222[i]) + ((fSlow118 * (fZec166[i] + (0.002f * (fRec159[i] * fSlow82)))) + ((fSlow116 * fZec212[i]) + ((fSlow114 * (fZec180[i] + (0.002f * fZec221[i]))) + ((fSlow112 * fZec213[i]) + ((fSlow110 * fZec215[i]) + (fSlow108 * fZec214[i]))))))));
			}
			
			// LOOP 0x33233d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec227[i] = (0.001f + (0.05f * fRec0[i]));
			}
			
			// SECTION : 35
			// LOOP 0x27dc740
			// exec code
			for (int i=0; i<count; i++) {
				output0[i] = (FAUSTFLOAT)(fZec227[i] * (fZec226[i] + (fZec225[i] + (fZec224[i] + fZec223[i]))));
			}
			
			// LOOP 0x33351a0
			// exec code
			for (int i=0; i<count; i++) {
				output1[i] = (FAUSTFLOAT)(fZec227[i] * (fZec226[i] + (fZec223[i] + fZec225[i])));
			}
			
			// LOOP 0x33528a0
			// exec code
			for (int i=0; i<count; i++) {
				output2[i] = (FAUSTFLOAT)(fZec224[i] * fZec227[i]);
			}
			
		}
	}
};


