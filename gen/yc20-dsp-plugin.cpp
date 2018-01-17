//-----------------------------------------------------
//
// Code generated with Faust 0.9.73 (http://faust.grame.fr)
//-----------------------------------------------------
/* link with : "" */
#include "yc20-precalc.h"
#include <math.h>
#ifndef FAUSTPOWER
#define FAUSTPOWER
#include <cmath>
template <int N> inline float faustpower(float x)          { return powf(x,N); } 
template <int N> inline double faustpower(double x)        { return pow(x,N); }
template <int N> inline int faustpower(int x)              { return faustpower<N/2>(x) * faustpower<N-N/2>(x); } 
template <> 	 inline int faustpower<0>(int x)            { return 1; }
template <> 	 inline int faustpower<1>(int x)            { return x; }
template <> 	 inline int faustpower<2>(int x)            { return x*x; }
#endif
#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif  


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
	float 	fRec6_perm[4];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT 	fslider4;
	float 	fRec5_perm[4];
	int 	iRec7_perm[4];
	float 	fYec0_perm[4];
	int 	iRec4_perm[4];
	float 	fYec1_perm[4];
	int 	iRec3_perm[4];
	float 	fYec2_perm[4];
	float 	fConst3;
	float 	fRec2_perm[4];
	float 	fConst4;
	float 	fConst5;
	float 	fRec1_perm[4];
	float 	fRec12_perm[4];
	int 	iRec13_perm[4];
	float 	fYec3_perm[4];
	int 	iRec11_perm[4];
	float 	fYec4_perm[4];
	int 	iRec10_perm[4];
	float 	fYec5_perm[4];
	float 	fRec9_perm[4];
	float 	fRec8_perm[4];
	float 	fRec18_perm[4];
	int 	iRec19_perm[4];
	float 	fYec6_perm[4];
	int 	iRec17_perm[4];
	float 	fYec7_perm[4];
	int 	iRec16_perm[4];
	float 	fYec8_perm[4];
	float 	fRec15_perm[4];
	float 	fRec14_perm[4];
	float 	fRec24_perm[4];
	int 	iRec25_perm[4];
	float 	fYec9_perm[4];
	int 	iRec23_perm[4];
	float 	fYec10_perm[4];
	int 	iRec22_perm[4];
	float 	fYec11_perm[4];
	float 	fRec21_perm[4];
	float 	fRec20_perm[4];
	float 	fRec30_perm[4];
	int 	iRec31_perm[4];
	float 	fYec12_perm[4];
	int 	iRec29_perm[4];
	float 	fYec13_perm[4];
	int 	iRec28_perm[4];
	float 	fYec14_perm[4];
	float 	fConst6;
	float 	fRec27_perm[4];
	float 	fRec26_perm[4];
	float 	fRec36_perm[4];
	int 	iRec37_perm[4];
	float 	fYec15_perm[4];
	int 	iRec35_perm[4];
	float 	fYec16_perm[4];
	int 	iRec34_perm[4];
	float 	fYec17_perm[4];
	float 	fRec33_perm[4];
	float 	fRec32_perm[4];
	float 	fRec42_perm[4];
	int 	iRec43_perm[4];
	float 	fYec18_perm[4];
	int 	iRec41_perm[4];
	float 	fYec19_perm[4];
	int 	iRec40_perm[4];
	float 	fYec20_perm[4];
	float 	fRec39_perm[4];
	float 	fRec38_perm[4];
	float 	fRec48_perm[4];
	int 	iRec49_perm[4];
	float 	fYec21_perm[4];
	int 	iRec47_perm[4];
	float 	fYec22_perm[4];
	int 	iRec46_perm[4];
	float 	fYec23_perm[4];
	float 	fRec45_perm[4];
	float 	fRec44_perm[4];
	float 	fRec54_perm[4];
	int 	iRec55_perm[4];
	float 	fYec24_perm[4];
	int 	iRec53_perm[4];
	float 	fYec25_perm[4];
	int 	iRec52_perm[4];
	float 	fYec26_perm[4];
	float 	fConst7;
	float 	fRec51_perm[4];
	float 	fRec50_perm[4];
	float 	fRec60_perm[4];
	int 	iRec61_perm[4];
	float 	fYec27_perm[4];
	int 	iRec59_perm[4];
	float 	fYec28_perm[4];
	int 	iRec58_perm[4];
	float 	fYec29_perm[4];
	float 	fRec57_perm[4];
	float 	fRec56_perm[4];
	float 	fRec66_perm[4];
	int 	iRec67_perm[4];
	float 	fYec30_perm[4];
	int 	iRec65_perm[4];
	float 	fYec31_perm[4];
	int 	iRec64_perm[4];
	float 	fYec32_perm[4];
	float 	fRec63_perm[4];
	float 	fRec62_perm[4];
	float 	fRec72_perm[4];
	int 	iRec73_perm[4];
	float 	fYec33_perm[4];
	int 	iRec71_perm[4];
	float 	fYec34_perm[4];
	int 	iRec70_perm[4];
	float 	fYec35_perm[4];
	float 	fRec69_perm[4];
	float 	fRec68_perm[4];
	float 	fConst8;
	float 	fRec75_perm[4];
	float 	fRec74_perm[4];
	float 	fRec77_perm[4];
	float 	fRec76_perm[4];
	float 	fRec79_perm[4];
	float 	fRec78_perm[4];
	float 	fRec81_perm[4];
	float 	fRec80_perm[4];
	float 	fConst9;
	float 	fRec83_perm[4];
	float 	fRec82_perm[4];
	float 	fRec85_perm[4];
	float 	fRec84_perm[4];
	float 	fRec87_perm[4];
	float 	fRec86_perm[4];
	float 	fRec89_perm[4];
	float 	fRec88_perm[4];
	float 	fConst10;
	float 	fRec91_perm[4];
	float 	fRec90_perm[4];
	float 	fRec93_perm[4];
	float 	fRec92_perm[4];
	float 	fRec95_perm[4];
	float 	fRec94_perm[4];
	float 	fRec97_perm[4];
	float 	fRec96_perm[4];
	float 	fConst11;
	float 	fRec99_perm[4];
	float 	fRec98_perm[4];
	float 	fRec101_perm[4];
	float 	fRec100_perm[4];
	float 	fRec103_perm[4];
	float 	fRec102_perm[4];
	float 	fRec105_perm[4];
	float 	fRec104_perm[4];
	float 	fConst12;
	float 	fRec107_perm[4];
	float 	fRec106_perm[4];
	float 	fRec109_perm[4];
	float 	fRec108_perm[4];
	float 	fRec111_perm[4];
	float 	fRec110_perm[4];
	float 	fRec113_perm[4];
	float 	fRec112_perm[4];
	float 	fConst13;
	float 	fRec115_perm[4];
	float 	fRec114_perm[4];
	float 	fRec117_perm[4];
	float 	fRec116_perm[4];
	float 	fRec119_perm[4];
	float 	fRec118_perm[4];
	float 	fRec121_perm[4];
	float 	fRec120_perm[4];
	float 	fYec36_perm[4];
	float 	fRec122_perm[4];
	float 	fYec37_perm[4];
	float 	fRec123_perm[4];
	float 	fYec38_perm[4];
	float 	fRec124_perm[4];
	float 	fYec39_perm[4];
	float 	fRec125_perm[4];
	float 	fYec40_perm[4];
	float 	fRec126_perm[4];
	float 	fYec41_perm[4];
	float 	fRec127_perm[4];
	float 	fYec42_perm[4];
	float 	fRec128_perm[4];
	float 	fYec43_perm[4];
	float 	fRec129_perm[4];
	float 	fYec44_perm[4];
	float 	fRec130_perm[4];
	float 	fYec45_perm[4];
	float 	fRec131_perm[4];
	float 	fYec46_perm[4];
	float 	fRec132_perm[4];
	float 	fYec47_perm[4];
	float 	fRec133_perm[4];
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
	FAUSTFLOAT 	fslider5;
	float 	fYec48_perm[4];
	float 	fConst14;
	float 	fRec134_perm[4];
	int 	iRec138_perm[4];
	float 	fYec49_perm[4];
	int 	iRec137_perm[4];
	float 	fYec50_perm[4];
	float 	fConst15;
	float 	fRec136_perm[4];
	float 	fConst16;
	float 	fRec135_perm[4];
	int 	iRec142_perm[4];
	float 	fYec51_perm[4];
	int 	iRec141_perm[4];
	float 	fYec52_perm[4];
	float 	fConst17;
	float 	fRec140_perm[4];
	float 	fRec139_perm[4];
	int 	iRec146_perm[4];
	float 	fYec53_perm[4];
	int 	iRec145_perm[4];
	float 	fYec54_perm[4];
	float 	fRec144_perm[4];
	float 	fRec143_perm[4];
	int 	iRec150_perm[4];
	float 	fYec55_perm[4];
	int 	iRec149_perm[4];
	float 	fYec56_perm[4];
	float 	fRec148_perm[4];
	float 	fRec147_perm[4];
	int 	iRec154_perm[4];
	float 	fYec57_perm[4];
	int 	iRec153_perm[4];
	float 	fYec58_perm[4];
	float 	fRec152_perm[4];
	float 	fRec151_perm[4];
	int 	iRec157_perm[4];
	float 	fYec59_perm[4];
	float 	fConst18;
	float 	fRec156_perm[4];
	float 	fRec155_perm[4];
	int 	iRec160_perm[4];
	float 	fYec60_perm[4];
	float 	fRec159_perm[4];
	float 	fRec158_perm[4];
	int 	iRec163_perm[4];
	float 	fYec61_perm[4];
	float 	fRec162_perm[4];
	float 	fRec161_perm[4];
	int 	iRec166_perm[4];
	float 	fYec62_perm[4];
	float 	fRec165_perm[4];
	float 	fRec164_perm[4];
	int 	iRec169_perm[4];
	float 	fYec63_perm[4];
	float 	fConst19;
	float 	fRec168_perm[4];
	float 	fRec167_perm[4];
	int 	iRec172_perm[4];
	float 	fYec64_perm[4];
	float 	fRec171_perm[4];
	float 	fRec170_perm[4];
	int 	iRec175_perm[4];
	float 	fYec65_perm[4];
	float 	fRec174_perm[4];
	float 	fRec173_perm[4];
	float 	fRec177_perm[4];
	float 	fRec176_perm[4];
	float 	fConst20;
	float 	fRec179_perm[4];
	float 	fRec178_perm[4];
	float 	fRec181_perm[4];
	float 	fRec180_perm[4];
	float 	fRec183_perm[4];
	float 	fRec182_perm[4];
	float 	fRec185_perm[4];
	float 	fRec184_perm[4];
	float 	fYec66_perm[4];
	float 	fRec186_perm[4];
	int 	iRec191_perm[4];
	float 	fYec67_perm[4];
	int 	iRec190_perm[4];
	float 	fYec68_perm[4];
	int 	iRec189_perm[4];
	float 	fConst21;
	float 	fRec188_perm[4];
	float 	fConst22;
	float 	fRec187_perm[4];
	int 	iRec196_perm[4];
	float 	fYec69_perm[4];
	int 	iRec195_perm[4];
	float 	fYec70_perm[4];
	int 	iRec194_perm[4];
	float 	fRec193_perm[4];
	float 	fRec192_perm[4];
	int 	iRec201_perm[4];
	float 	fYec71_perm[4];
	int 	iRec200_perm[4];
	float 	fYec72_perm[4];
	int 	iRec199_perm[4];
	float 	fRec198_perm[4];
	float 	fRec197_perm[4];
	int 	iRec206_perm[4];
	float 	fYec73_perm[4];
	int 	iRec205_perm[4];
	float 	fYec74_perm[4];
	int 	iRec204_perm[4];
	float 	fRec203_perm[4];
	float 	fRec202_perm[4];
	int 	iRec211_perm[4];
	float 	fYec75_perm[4];
	int 	iRec210_perm[4];
	float 	fYec76_perm[4];
	int 	iRec209_perm[4];
	float 	fRec208_perm[4];
	float 	fRec207_perm[4];
	int 	iRec216_perm[4];
	float 	fYec77_perm[4];
	int 	iRec215_perm[4];
	float 	fYec78_perm[4];
	int 	iRec214_perm[4];
	float 	fRec213_perm[4];
	float 	fRec212_perm[4];
	int 	iRec221_perm[4];
	float 	fYec79_perm[4];
	int 	iRec220_perm[4];
	float 	fYec80_perm[4];
	int 	iRec219_perm[4];
	float 	fRec218_perm[4];
	float 	fRec217_perm[4];
	int 	iRec225_perm[4];
	float 	fYec81_perm[4];
	int 	iRec224_perm[4];
	float 	fRec223_perm[4];
	float 	fRec222_perm[4];
	int 	iRec229_perm[4];
	float 	fYec82_perm[4];
	int 	iRec228_perm[4];
	float 	fConst23;
	float 	fRec227_perm[4];
	float 	fRec226_perm[4];
	int 	iRec233_perm[4];
	float 	fYec83_perm[4];
	int 	iRec232_perm[4];
	float 	fRec231_perm[4];
	float 	fRec230_perm[4];
	int 	iRec237_perm[4];
	float 	fYec84_perm[4];
	int 	iRec236_perm[4];
	float 	fRec235_perm[4];
	float 	fRec234_perm[4];
	int 	iRec241_perm[4];
	float 	fYec85_perm[4];
	int 	iRec240_perm[4];
	float 	fRec239_perm[4];
	float 	fRec238_perm[4];
	float 	fRec243_perm[4];
	float 	fConst24;
	float 	fRec242_perm[4];
	float 	fRec245_perm[4];
	float 	fRec244_perm[4];
	float 	fRec247_perm[4];
	float 	fRec246_perm[4];
	float 	fRec249_perm[4];
	float 	fRec248_perm[4];
	float 	fConst25;
	float 	fRec251_perm[4];
	float 	fRec250_perm[4];
	float 	fRec253_perm[4];
	float 	fRec252_perm[4];
	float 	fRec255_perm[4];
	float 	fRec254_perm[4];
	float 	fRec257_perm[4];
	float 	fRec256_perm[4];
	float 	fConst26;
	float 	fRec259_perm[4];
	float 	fRec258_perm[4];
	float 	fRec261_perm[4];
	float 	fRec260_perm[4];
	float 	fRec263_perm[4];
	float 	fRec262_perm[4];
	float 	fRec265_perm[4];
	float 	fRec264_perm[4];
	float 	fRec267_perm[4];
	float 	fRec266_perm[4];
	float 	fRec269_perm[4];
	float 	fRec268_perm[4];
	float 	fRec271_perm[4];
	float 	fRec270_perm[4];
	float 	fRec273_perm[4];
	float 	fRec272_perm[4];
	float 	fRec275_perm[4];
	float 	fRec274_perm[4];
	float 	fRec277_perm[4];
	float 	fRec276_perm[4];
	float 	fRec279_perm[4];
	float 	fRec278_perm[4];
	float 	fYec86_perm[4];
	float 	fRec280_perm[4];
	int 	iRec286_perm[4];
	int 	iConst27;
	float 	fRec283_perm[4];
	int 	iRec284_perm[4];
	float 	fRec285_perm[4];
	float 	fConst28;
	float 	fYec87_perm[4];
	float 	fRec282_perm[4];
	float 	fConst29;
	float 	fConst30;
	float 	fRec281_perm[4];
	float 	fYec88_perm[4];
	float 	fRec289_perm[4];
	FAUSTFLOAT 	fslider6;
	float 	fYec89_perm[4];
	float 	fConst31;
	float 	fRec288_perm[4];
	float 	fYec90_perm[4];
	float 	fConst32;
	float 	fRec287_perm[4];
	float 	fYec91_perm[4];
	float 	fRec292_perm[4];
	FAUSTFLOAT 	fslider7;
	float 	fYec92_perm[4];
	float 	fConst33;
	float 	fRec291_perm[4];
	float 	fYec93_perm[4];
	float 	fConst34;
	float 	fRec290_perm[4];
	float 	fYec94_perm[4];
	float 	fRec295_perm[4];
	FAUSTFLOAT 	fslider8;
	float 	fYec95_perm[4];
	float 	fConst35;
	float 	fRec294_perm[4];
	float 	fYec96_perm[4];
	float 	fConst36;
	float 	fRec293_perm[4];
	FAUSTFLOAT 	fslider9;
	float 	fYec97_perm[4];
	float 	fConst37;
	float 	fRec297_perm[4];
	float 	fYec98_perm[4];
	float 	fConst38;
	float 	fRec296_perm[4];
	float 	fRec299_perm[4];
	float 	fRec298_perm[4];
	float 	fRec301_perm[4];
	float 	fRec300_perm[4];
	float 	fRec303_perm[4];
	float 	fRec302_perm[4];
	float 	fRec305_perm[4];
	float 	fRec304_perm[4];
	FAUSTFLOAT 	fslider10;
	FAUSTFLOAT 	fslider11;
	float 	fConst39;
	float 	fRec306_perm[4];
	FAUSTFLOAT 	fslider12;
	float 	fRec307_perm[4];
	float 	fYec99_perm[4];
	float 	fRec308_perm[4];
	FAUSTFLOAT 	fslider13;
	FAUSTFLOAT 	fslider14;
	FAUSTFLOAT 	fslider15;
	FAUSTFLOAT 	fslider16;
	FAUSTFLOAT 	fslider17;
	FAUSTFLOAT 	fslider18;
	FAUSTFLOAT 	fslider19;
	FAUSTFLOAT 	fslider20;
	FAUSTFLOAT 	fslider21;
	float 	fConst40;
	float 	fYec100_perm[4];
	FAUSTFLOAT 	fslider22;
  public:
	static void metadata(Meta* m) 	{ 
		m->declare("music.lib/name", "Music Library");
		m->declare("music.lib/author", "GRAME");
		m->declare("yc20.dsp/name", "Foo YC-20 simulation");
		m->declare("yc20.dsp/author", "Sampo Savolainen");
		m->declare("yc20.dsp/license", "GPLv3");
		m->declare("yc20.dsp/copyright", "(c)Sampo Savolainen 2009");
		m->declare("music.lib/copyright", "GRAME");
		m->declare("music.lib/version", "1.0");
		m->declare("music.lib/license", "LGPL with exception");
		m->declare("math.lib/name", "Math Library");
		m->declare("math.lib/author", "GRAME");
		m->declare("math.lib/copyright", "GRAME");
		m->declare("math.lib/version", "1.0");
		m->declare("math.lib/license", "LGPL with exception");
	}

	virtual int getNumInputs() 	{ return 0; }
	virtual int getNumOutputs() 	{ return 2; }
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
		for (int i=0; i<4; i++) fRec6_perm[i]=0;
		fslider2 = 0.0f;
		fslider3 = 0.0f;
		fslider4 = 0.0f;
		for (int i=0; i<4; i++) fRec5_perm[i]=0;
		for (int i=0; i<4; i++) iRec7_perm[i]=0;
		for (int i=0; i<4; i++) fYec0_perm[i]=0;
		for (int i=0; i<4; i++) iRec4_perm[i]=0;
		for (int i=0; i<4; i++) fYec1_perm[i]=0;
		for (int i=0; i<4; i++) iRec3_perm[i]=0;
		for (int i=0; i<4; i++) fYec2_perm[i]=0;
		fConst3 = (4545.454545454545f / float(iConst0));
		for (int i=0; i<4; i++) fRec2_perm[i]=0;
		fConst4 = (1.0f / float(iConst0));
		fConst5 = (0.007374545454545454f / (0.007374545454545454f + fConst4));
		for (int i=0; i<4; i++) fRec1_perm[i]=0;
		for (int i=0; i<4; i++) fRec12_perm[i]=0;
		for (int i=0; i<4; i++) iRec13_perm[i]=0;
		for (int i=0; i<4; i++) fYec3_perm[i]=0;
		for (int i=0; i<4; i++) iRec11_perm[i]=0;
		for (int i=0; i<4; i++) fYec4_perm[i]=0;
		for (int i=0; i<4; i++) iRec10_perm[i]=0;
		for (int i=0; i<4; i++) fYec5_perm[i]=0;
		for (int i=0; i<4; i++) fRec9_perm[i]=0;
		for (int i=0; i<4; i++) fRec8_perm[i]=0;
		for (int i=0; i<4; i++) fRec18_perm[i]=0;
		for (int i=0; i<4; i++) iRec19_perm[i]=0;
		for (int i=0; i<4; i++) fYec6_perm[i]=0;
		for (int i=0; i<4; i++) iRec17_perm[i]=0;
		for (int i=0; i<4; i++) fYec7_perm[i]=0;
		for (int i=0; i<4; i++) iRec16_perm[i]=0;
		for (int i=0; i<4; i++) fYec8_perm[i]=0;
		for (int i=0; i<4; i++) fRec15_perm[i]=0;
		for (int i=0; i<4; i++) fRec14_perm[i]=0;
		for (int i=0; i<4; i++) fRec24_perm[i]=0;
		for (int i=0; i<4; i++) iRec25_perm[i]=0;
		for (int i=0; i<4; i++) fYec9_perm[i]=0;
		for (int i=0; i<4; i++) iRec23_perm[i]=0;
		for (int i=0; i<4; i++) fYec10_perm[i]=0;
		for (int i=0; i<4; i++) iRec22_perm[i]=0;
		for (int i=0; i<4; i++) fYec11_perm[i]=0;
		for (int i=0; i<4; i++) fRec21_perm[i]=0;
		for (int i=0; i<4; i++) fRec20_perm[i]=0;
		for (int i=0; i<4; i++) fRec30_perm[i]=0;
		for (int i=0; i<4; i++) iRec31_perm[i]=0;
		for (int i=0; i<4; i++) fYec12_perm[i]=0;
		for (int i=0; i<4; i++) iRec29_perm[i]=0;
		for (int i=0; i<4; i++) fYec13_perm[i]=0;
		for (int i=0; i<4; i++) iRec28_perm[i]=0;
		for (int i=0; i<4; i++) fYec14_perm[i]=0;
		fConst6 = (5555.555555555556f / float(iConst0));
		for (int i=0; i<4; i++) fRec27_perm[i]=0;
		for (int i=0; i<4; i++) fRec26_perm[i]=0;
		for (int i=0; i<4; i++) fRec36_perm[i]=0;
		for (int i=0; i<4; i++) iRec37_perm[i]=0;
		for (int i=0; i<4; i++) fYec15_perm[i]=0;
		for (int i=0; i<4; i++) iRec35_perm[i]=0;
		for (int i=0; i<4; i++) fYec16_perm[i]=0;
		for (int i=0; i<4; i++) iRec34_perm[i]=0;
		for (int i=0; i<4; i++) fYec17_perm[i]=0;
		for (int i=0; i<4; i++) fRec33_perm[i]=0;
		for (int i=0; i<4; i++) fRec32_perm[i]=0;
		for (int i=0; i<4; i++) fRec42_perm[i]=0;
		for (int i=0; i<4; i++) iRec43_perm[i]=0;
		for (int i=0; i<4; i++) fYec18_perm[i]=0;
		for (int i=0; i<4; i++) iRec41_perm[i]=0;
		for (int i=0; i<4; i++) fYec19_perm[i]=0;
		for (int i=0; i<4; i++) iRec40_perm[i]=0;
		for (int i=0; i<4; i++) fYec20_perm[i]=0;
		for (int i=0; i<4; i++) fRec39_perm[i]=0;
		for (int i=0; i<4; i++) fRec38_perm[i]=0;
		for (int i=0; i<4; i++) fRec48_perm[i]=0;
		for (int i=0; i<4; i++) iRec49_perm[i]=0;
		for (int i=0; i<4; i++) fYec21_perm[i]=0;
		for (int i=0; i<4; i++) iRec47_perm[i]=0;
		for (int i=0; i<4; i++) fYec22_perm[i]=0;
		for (int i=0; i<4; i++) iRec46_perm[i]=0;
		for (int i=0; i<4; i++) fYec23_perm[i]=0;
		for (int i=0; i<4; i++) fRec45_perm[i]=0;
		for (int i=0; i<4; i++) fRec44_perm[i]=0;
		for (int i=0; i<4; i++) fRec54_perm[i]=0;
		for (int i=0; i<4; i++) iRec55_perm[i]=0;
		for (int i=0; i<4; i++) fYec24_perm[i]=0;
		for (int i=0; i<4; i++) iRec53_perm[i]=0;
		for (int i=0; i<4; i++) fYec25_perm[i]=0;
		for (int i=0; i<4; i++) iRec52_perm[i]=0;
		for (int i=0; i<4; i++) fYec26_perm[i]=0;
		fConst7 = (8333.333333333334f / float(iConst0));
		for (int i=0; i<4; i++) fRec51_perm[i]=0;
		for (int i=0; i<4; i++) fRec50_perm[i]=0;
		for (int i=0; i<4; i++) fRec60_perm[i]=0;
		for (int i=0; i<4; i++) iRec61_perm[i]=0;
		for (int i=0; i<4; i++) fYec27_perm[i]=0;
		for (int i=0; i<4; i++) iRec59_perm[i]=0;
		for (int i=0; i<4; i++) fYec28_perm[i]=0;
		for (int i=0; i<4; i++) iRec58_perm[i]=0;
		for (int i=0; i<4; i++) fYec29_perm[i]=0;
		for (int i=0; i<4; i++) fRec57_perm[i]=0;
		for (int i=0; i<4; i++) fRec56_perm[i]=0;
		for (int i=0; i<4; i++) fRec66_perm[i]=0;
		for (int i=0; i<4; i++) iRec67_perm[i]=0;
		for (int i=0; i<4; i++) fYec30_perm[i]=0;
		for (int i=0; i<4; i++) iRec65_perm[i]=0;
		for (int i=0; i<4; i++) fYec31_perm[i]=0;
		for (int i=0; i<4; i++) iRec64_perm[i]=0;
		for (int i=0; i<4; i++) fYec32_perm[i]=0;
		for (int i=0; i<4; i++) fRec63_perm[i]=0;
		for (int i=0; i<4; i++) fRec62_perm[i]=0;
		for (int i=0; i<4; i++) fRec72_perm[i]=0;
		for (int i=0; i<4; i++) iRec73_perm[i]=0;
		for (int i=0; i<4; i++) fYec33_perm[i]=0;
		for (int i=0; i<4; i++) iRec71_perm[i]=0;
		for (int i=0; i<4; i++) fYec34_perm[i]=0;
		for (int i=0; i<4; i++) iRec70_perm[i]=0;
		for (int i=0; i<4; i++) fYec35_perm[i]=0;
		for (int i=0; i<4; i++) fRec69_perm[i]=0;
		for (int i=0; i<4; i++) fRec68_perm[i]=0;
		fConst8 = (1e+04f / float(iConst0));
		for (int i=0; i<4; i++) fRec75_perm[i]=0;
		for (int i=0; i<4; i++) fRec74_perm[i]=0;
		for (int i=0; i<4; i++) fRec77_perm[i]=0;
		for (int i=0; i<4; i++) fRec76_perm[i]=0;
		for (int i=0; i<4; i++) fRec79_perm[i]=0;
		for (int i=0; i<4; i++) fRec78_perm[i]=0;
		for (int i=0; i<4; i++) fRec81_perm[i]=0;
		for (int i=0; i<4; i++) fRec80_perm[i]=0;
		fConst9 = (12195.121951219513f / float(iConst0));
		for (int i=0; i<4; i++) fRec83_perm[i]=0;
		for (int i=0; i<4; i++) fRec82_perm[i]=0;
		for (int i=0; i<4; i++) fRec85_perm[i]=0;
		for (int i=0; i<4; i++) fRec84_perm[i]=0;
		for (int i=0; i<4; i++) fRec87_perm[i]=0;
		for (int i=0; i<4; i++) fRec86_perm[i]=0;
		for (int i=0; i<4; i++) fRec89_perm[i]=0;
		for (int i=0; i<4; i++) fRec88_perm[i]=0;
		fConst10 = (17857.14285714286f / float(iConst0));
		for (int i=0; i<4; i++) fRec91_perm[i]=0;
		for (int i=0; i<4; i++) fRec90_perm[i]=0;
		for (int i=0; i<4; i++) fRec93_perm[i]=0;
		for (int i=0; i<4; i++) fRec92_perm[i]=0;
		for (int i=0; i<4; i++) fRec95_perm[i]=0;
		for (int i=0; i<4; i++) fRec94_perm[i]=0;
		for (int i=0; i<4; i++) fRec97_perm[i]=0;
		for (int i=0; i<4; i++) fRec96_perm[i]=0;
		fConst11 = (21276.59574468085f / float(iConst0));
		for (int i=0; i<4; i++) fRec99_perm[i]=0;
		for (int i=0; i<4; i++) fRec98_perm[i]=0;
		for (int i=0; i<4; i++) fRec101_perm[i]=0;
		for (int i=0; i<4; i++) fRec100_perm[i]=0;
		for (int i=0; i<4; i++) fRec103_perm[i]=0;
		for (int i=0; i<4; i++) fRec102_perm[i]=0;
		for (int i=0; i<4; i++) fRec105_perm[i]=0;
		for (int i=0; i<4; i++) fRec104_perm[i]=0;
		fConst12 = (25641.02564102564f / float(iConst0));
		for (int i=0; i<4; i++) fRec107_perm[i]=0;
		for (int i=0; i<4; i++) fRec106_perm[i]=0;
		for (int i=0; i<4; i++) fRec109_perm[i]=0;
		for (int i=0; i<4; i++) fRec108_perm[i]=0;
		for (int i=0; i<4; i++) fRec111_perm[i]=0;
		for (int i=0; i<4; i++) fRec110_perm[i]=0;
		for (int i=0; i<4; i++) fRec113_perm[i]=0;
		for (int i=0; i<4; i++) fRec112_perm[i]=0;
		fConst13 = (37037.03703703704f / float(iConst0));
		for (int i=0; i<4; i++) fRec115_perm[i]=0;
		for (int i=0; i<4; i++) fRec114_perm[i]=0;
		for (int i=0; i<4; i++) fRec117_perm[i]=0;
		for (int i=0; i<4; i++) fRec116_perm[i]=0;
		for (int i=0; i<4; i++) fRec119_perm[i]=0;
		for (int i=0; i<4; i++) fRec118_perm[i]=0;
		for (int i=0; i<4; i++) fRec121_perm[i]=0;
		for (int i=0; i<4; i++) fRec120_perm[i]=0;
		for (int i=0; i<4; i++) fYec36_perm[i]=0;
		for (int i=0; i<4; i++) fRec122_perm[i]=0;
		for (int i=0; i<4; i++) fYec37_perm[i]=0;
		for (int i=0; i<4; i++) fRec123_perm[i]=0;
		for (int i=0; i<4; i++) fYec38_perm[i]=0;
		for (int i=0; i<4; i++) fRec124_perm[i]=0;
		for (int i=0; i<4; i++) fYec39_perm[i]=0;
		for (int i=0; i<4; i++) fRec125_perm[i]=0;
		for (int i=0; i<4; i++) fYec40_perm[i]=0;
		for (int i=0; i<4; i++) fRec126_perm[i]=0;
		for (int i=0; i<4; i++) fYec41_perm[i]=0;
		for (int i=0; i<4; i++) fRec127_perm[i]=0;
		for (int i=0; i<4; i++) fYec42_perm[i]=0;
		for (int i=0; i<4; i++) fRec128_perm[i]=0;
		for (int i=0; i<4; i++) fYec43_perm[i]=0;
		for (int i=0; i<4; i++) fRec129_perm[i]=0;
		for (int i=0; i<4; i++) fYec44_perm[i]=0;
		for (int i=0; i<4; i++) fRec130_perm[i]=0;
		for (int i=0; i<4; i++) fYec45_perm[i]=0;
		for (int i=0; i<4; i++) fRec131_perm[i]=0;
		for (int i=0; i<4; i++) fYec46_perm[i]=0;
		for (int i=0; i<4; i++) fRec132_perm[i]=0;
		for (int i=0; i<4; i++) fYec47_perm[i]=0;
		for (int i=0; i<4; i++) fRec133_perm[i]=0;
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
		fslider5 = 0.0f;
		for (int i=0; i<4; i++) fYec48_perm[i]=0;
		fConst14 = (0.0001f / (0.0001f + fConst4));
		for (int i=0; i<4; i++) fRec134_perm[i]=0;
		for (int i=0; i<4; i++) iRec138_perm[i]=0;
		for (int i=0; i<4; i++) fYec49_perm[i]=0;
		for (int i=0; i<4; i++) iRec137_perm[i]=0;
		for (int i=0; i<4; i++) fYec50_perm[i]=0;
		fConst15 = (1470.5882352941176f / float(iConst0));
		for (int i=0; i<4; i++) fRec136_perm[i]=0;
		fConst16 = (0.003596453201970443f / (fConst4 + 0.003596453201970443f));
		for (int i=0; i<4; i++) fRec135_perm[i]=0;
		for (int i=0; i<4; i++) iRec142_perm[i]=0;
		for (int i=0; i<4; i++) fYec51_perm[i]=0;
		for (int i=0; i<4; i++) iRec141_perm[i]=0;
		for (int i=0; i<4; i++) fYec52_perm[i]=0;
		fConst17 = (1785.7142857142858f / float(iConst0));
		for (int i=0; i<4; i++) fRec140_perm[i]=0;
		for (int i=0; i<4; i++) fRec139_perm[i]=0;
		for (int i=0; i<4; i++) iRec146_perm[i]=0;
		for (int i=0; i<4; i++) fYec53_perm[i]=0;
		for (int i=0; i<4; i++) iRec145_perm[i]=0;
		for (int i=0; i<4; i++) fYec54_perm[i]=0;
		for (int i=0; i<4; i++) fRec144_perm[i]=0;
		for (int i=0; i<4; i++) fRec143_perm[i]=0;
		for (int i=0; i<4; i++) iRec150_perm[i]=0;
		for (int i=0; i<4; i++) fYec55_perm[i]=0;
		for (int i=0; i<4; i++) iRec149_perm[i]=0;
		for (int i=0; i<4; i++) fYec56_perm[i]=0;
		for (int i=0; i<4; i++) fRec148_perm[i]=0;
		for (int i=0; i<4; i++) fRec147_perm[i]=0;
		for (int i=0; i<4; i++) iRec154_perm[i]=0;
		for (int i=0; i<4; i++) fYec57_perm[i]=0;
		for (int i=0; i<4; i++) iRec153_perm[i]=0;
		for (int i=0; i<4; i++) fYec58_perm[i]=0;
		for (int i=0; i<4; i++) fRec152_perm[i]=0;
		for (int i=0; i<4; i++) fRec151_perm[i]=0;
		for (int i=0; i<4; i++) iRec157_perm[i]=0;
		for (int i=0; i<4; i++) fYec59_perm[i]=0;
		fConst18 = (2127.659574468085f / float(iConst0));
		for (int i=0; i<4; i++) fRec156_perm[i]=0;
		for (int i=0; i<4; i++) fRec155_perm[i]=0;
		for (int i=0; i<4; i++) iRec160_perm[i]=0;
		for (int i=0; i<4; i++) fYec60_perm[i]=0;
		for (int i=0; i<4; i++) fRec159_perm[i]=0;
		for (int i=0; i<4; i++) fRec158_perm[i]=0;
		for (int i=0; i<4; i++) iRec163_perm[i]=0;
		for (int i=0; i<4; i++) fYec61_perm[i]=0;
		for (int i=0; i<4; i++) fRec162_perm[i]=0;
		for (int i=0; i<4; i++) fRec161_perm[i]=0;
		for (int i=0; i<4; i++) iRec166_perm[i]=0;
		for (int i=0; i<4; i++) fYec62_perm[i]=0;
		for (int i=0; i<4; i++) fRec165_perm[i]=0;
		for (int i=0; i<4; i++) fRec164_perm[i]=0;
		for (int i=0; i<4; i++) iRec169_perm[i]=0;
		for (int i=0; i<4; i++) fYec63_perm[i]=0;
		fConst19 = (2564.102564102564f / float(iConst0));
		for (int i=0; i<4; i++) fRec168_perm[i]=0;
		for (int i=0; i<4; i++) fRec167_perm[i]=0;
		for (int i=0; i<4; i++) iRec172_perm[i]=0;
		for (int i=0; i<4; i++) fYec64_perm[i]=0;
		for (int i=0; i<4; i++) fRec171_perm[i]=0;
		for (int i=0; i<4; i++) fRec170_perm[i]=0;
		for (int i=0; i<4; i++) iRec175_perm[i]=0;
		for (int i=0; i<4; i++) fYec65_perm[i]=0;
		for (int i=0; i<4; i++) fRec174_perm[i]=0;
		for (int i=0; i<4; i++) fRec173_perm[i]=0;
		for (int i=0; i<4; i++) fRec177_perm[i]=0;
		for (int i=0; i<4; i++) fRec176_perm[i]=0;
		fConst20 = (3703.703703703704f / float(iConst0));
		for (int i=0; i<4; i++) fRec179_perm[i]=0;
		for (int i=0; i<4; i++) fRec178_perm[i]=0;
		for (int i=0; i<4; i++) fRec181_perm[i]=0;
		for (int i=0; i<4; i++) fRec180_perm[i]=0;
		for (int i=0; i<4; i++) fRec183_perm[i]=0;
		for (int i=0; i<4; i++) fRec182_perm[i]=0;
		for (int i=0; i<4; i++) fRec185_perm[i]=0;
		for (int i=0; i<4; i++) fRec184_perm[i]=0;
		for (int i=0; i<4; i++) fYec66_perm[i]=0;
		for (int i=0; i<4; i++) fRec186_perm[i]=0;
		for (int i=0; i<4; i++) iRec191_perm[i]=0;
		for (int i=0; i<4; i++) fYec67_perm[i]=0;
		for (int i=0; i<4; i++) iRec190_perm[i]=0;
		for (int i=0; i<4; i++) fYec68_perm[i]=0;
		for (int i=0; i<4; i++) iRec189_perm[i]=0;
		fConst21 = (666.6666666666666f / float(iConst0));
		for (int i=0; i<4; i++) fRec188_perm[i]=0;
		fConst22 = (0.0016849851632047478f / (fConst4 + 0.0016849851632047478f));
		for (int i=0; i<4; i++) fRec187_perm[i]=0;
		for (int i=0; i<4; i++) iRec196_perm[i]=0;
		for (int i=0; i<4; i++) fYec69_perm[i]=0;
		for (int i=0; i<4; i++) iRec195_perm[i]=0;
		for (int i=0; i<4; i++) fYec70_perm[i]=0;
		for (int i=0; i<4; i++) iRec194_perm[i]=0;
		for (int i=0; i<4; i++) fRec193_perm[i]=0;
		for (int i=0; i<4; i++) fRec192_perm[i]=0;
		for (int i=0; i<4; i++) iRec201_perm[i]=0;
		for (int i=0; i<4; i++) fYec71_perm[i]=0;
		for (int i=0; i<4; i++) iRec200_perm[i]=0;
		for (int i=0; i<4; i++) fYec72_perm[i]=0;
		for (int i=0; i<4; i++) iRec199_perm[i]=0;
		for (int i=0; i<4; i++) fRec198_perm[i]=0;
		for (int i=0; i<4; i++) fRec197_perm[i]=0;
		for (int i=0; i<4; i++) iRec206_perm[i]=0;
		for (int i=0; i<4; i++) fYec73_perm[i]=0;
		for (int i=0; i<4; i++) iRec205_perm[i]=0;
		for (int i=0; i<4; i++) fYec74_perm[i]=0;
		for (int i=0; i<4; i++) iRec204_perm[i]=0;
		for (int i=0; i<4; i++) fRec203_perm[i]=0;
		for (int i=0; i<4; i++) fRec202_perm[i]=0;
		for (int i=0; i<4; i++) iRec211_perm[i]=0;
		for (int i=0; i<4; i++) fYec75_perm[i]=0;
		for (int i=0; i<4; i++) iRec210_perm[i]=0;
		for (int i=0; i<4; i++) fYec76_perm[i]=0;
		for (int i=0; i<4; i++) iRec209_perm[i]=0;
		for (int i=0; i<4; i++) fRec208_perm[i]=0;
		for (int i=0; i<4; i++) fRec207_perm[i]=0;
		for (int i=0; i<4; i++) iRec216_perm[i]=0;
		for (int i=0; i<4; i++) fYec77_perm[i]=0;
		for (int i=0; i<4; i++) iRec215_perm[i]=0;
		for (int i=0; i<4; i++) fYec78_perm[i]=0;
		for (int i=0; i<4; i++) iRec214_perm[i]=0;
		for (int i=0; i<4; i++) fRec213_perm[i]=0;
		for (int i=0; i<4; i++) fRec212_perm[i]=0;
		for (int i=0; i<4; i++) iRec221_perm[i]=0;
		for (int i=0; i<4; i++) fYec79_perm[i]=0;
		for (int i=0; i<4; i++) iRec220_perm[i]=0;
		for (int i=0; i<4; i++) fYec80_perm[i]=0;
		for (int i=0; i<4; i++) iRec219_perm[i]=0;
		for (int i=0; i<4; i++) fRec218_perm[i]=0;
		for (int i=0; i<4; i++) fRec217_perm[i]=0;
		for (int i=0; i<4; i++) iRec225_perm[i]=0;
		for (int i=0; i<4; i++) fYec81_perm[i]=0;
		for (int i=0; i<4; i++) iRec224_perm[i]=0;
		for (int i=0; i<4; i++) fRec223_perm[i]=0;
		for (int i=0; i<4; i++) fRec222_perm[i]=0;
		for (int i=0; i<4; i++) iRec229_perm[i]=0;
		for (int i=0; i<4; i++) fYec82_perm[i]=0;
		for (int i=0; i<4; i++) iRec228_perm[i]=0;
		fConst23 = (833.3333333333334f / float(iConst0));
		for (int i=0; i<4; i++) fRec227_perm[i]=0;
		for (int i=0; i<4; i++) fRec226_perm[i]=0;
		for (int i=0; i<4; i++) iRec233_perm[i]=0;
		for (int i=0; i<4; i++) fYec83_perm[i]=0;
		for (int i=0; i<4; i++) iRec232_perm[i]=0;
		for (int i=0; i<4; i++) fRec231_perm[i]=0;
		for (int i=0; i<4; i++) fRec230_perm[i]=0;
		for (int i=0; i<4; i++) iRec237_perm[i]=0;
		for (int i=0; i<4; i++) fYec84_perm[i]=0;
		for (int i=0; i<4; i++) iRec236_perm[i]=0;
		for (int i=0; i<4; i++) fRec235_perm[i]=0;
		for (int i=0; i<4; i++) fRec234_perm[i]=0;
		for (int i=0; i<4; i++) iRec241_perm[i]=0;
		for (int i=0; i<4; i++) fYec85_perm[i]=0;
		for (int i=0; i<4; i++) iRec240_perm[i]=0;
		for (int i=0; i<4; i++) fRec239_perm[i]=0;
		for (int i=0; i<4; i++) fRec238_perm[i]=0;
		for (int i=0; i<4; i++) fRec243_perm[i]=0;
		fConst24 = (0.00223066398390342f / (fConst4 + 0.00223066398390342f));
		for (int i=0; i<4; i++) fRec242_perm[i]=0;
		for (int i=0; i<4; i++) fRec245_perm[i]=0;
		for (int i=0; i<4; i++) fRec244_perm[i]=0;
		for (int i=0; i<4; i++) fRec247_perm[i]=0;
		for (int i=0; i<4; i++) fRec246_perm[i]=0;
		for (int i=0; i<4; i++) fRec249_perm[i]=0;
		for (int i=0; i<4; i++) fRec248_perm[i]=0;
		fConst25 = (1e+03f / float(iConst0));
		for (int i=0; i<4; i++) fRec251_perm[i]=0;
		for (int i=0; i<4; i++) fRec250_perm[i]=0;
		for (int i=0; i<4; i++) fRec253_perm[i]=0;
		for (int i=0; i<4; i++) fRec252_perm[i]=0;
		for (int i=0; i<4; i++) fRec255_perm[i]=0;
		for (int i=0; i<4; i++) fRec254_perm[i]=0;
		for (int i=0; i<4; i++) fRec257_perm[i]=0;
		for (int i=0; i<4; i++) fRec256_perm[i]=0;
		fConst26 = (1219.5121951219512f / float(iConst0));
		for (int i=0; i<4; i++) fRec259_perm[i]=0;
		for (int i=0; i<4; i++) fRec258_perm[i]=0;
		for (int i=0; i<4; i++) fRec261_perm[i]=0;
		for (int i=0; i<4; i++) fRec260_perm[i]=0;
		for (int i=0; i<4; i++) fRec263_perm[i]=0;
		for (int i=0; i<4; i++) fRec262_perm[i]=0;
		for (int i=0; i<4; i++) fRec265_perm[i]=0;
		for (int i=0; i<4; i++) fRec264_perm[i]=0;
		for (int i=0; i<4; i++) fRec267_perm[i]=0;
		for (int i=0; i<4; i++) fRec266_perm[i]=0;
		for (int i=0; i<4; i++) fRec269_perm[i]=0;
		for (int i=0; i<4; i++) fRec268_perm[i]=0;
		for (int i=0; i<4; i++) fRec271_perm[i]=0;
		for (int i=0; i<4; i++) fRec270_perm[i]=0;
		for (int i=0; i<4; i++) fRec273_perm[i]=0;
		for (int i=0; i<4; i++) fRec272_perm[i]=0;
		for (int i=0; i<4; i++) fRec275_perm[i]=0;
		for (int i=0; i<4; i++) fRec274_perm[i]=0;
		for (int i=0; i<4; i++) fRec277_perm[i]=0;
		for (int i=0; i<4; i++) fRec276_perm[i]=0;
		for (int i=0; i<4; i++) fRec279_perm[i]=0;
		for (int i=0; i<4; i++) fRec278_perm[i]=0;
		for (int i=0; i<4; i++) fYec86_perm[i]=0;
		for (int i=0; i<4; i++) fRec280_perm[i]=0;
		for (int i=0; i<4; i++) iRec286_perm[i]=0;
		iConst27 = int((0.001f * max(2.205e+04f, min(1.92e+05f, fConst1))));
		for (int i=0; i<4; i++) fRec283_perm[i]=0;
		for (int i=0; i<4; i++) iRec284_perm[i]=0;
		for (int i=0; i<4; i++) fRec285_perm[i]=0;
		fConst28 = (1.0f / float(iConst27));
		for (int i=0; i<4; i++) fYec87_perm[i]=0;
		for (int i=0; i<4; i++) fRec282_perm[i]=0;
		fConst29 = (36.243757712787264f / fConst1);
		fConst30 = (1.0f - fConst29);
		for (int i=0; i<4; i++) fRec281_perm[i]=0;
		for (int i=0; i<4; i++) fYec88_perm[i]=0;
		for (int i=0; i<4; i++) fRec289_perm[i]=0;
		fslider6 = 1.0f;
		for (int i=0; i<4; i++) fYec89_perm[i]=0;
		fConst31 = (0.00010530000000000001f / (fConst4 + 0.00010530000000000001f));
		for (int i=0; i<4; i++) fRec288_perm[i]=0;
		for (int i=0; i<4; i++) fYec90_perm[i]=0;
		fConst32 = (5.2650000000000006e-05f / (fConst4 + 5.2650000000000006e-05f));
		for (int i=0; i<4; i++) fRec287_perm[i]=0;
		for (int i=0; i<4; i++) fYec91_perm[i]=0;
		for (int i=0; i<4; i++) fRec292_perm[i]=0;
		fslider7 = 1.0f;
		for (int i=0; i<4; i++) fYec92_perm[i]=0;
		fConst33 = (0.0001833f / (fConst4 + 0.0001833f));
		for (int i=0; i<4; i++) fRec291_perm[i]=0;
		for (int i=0; i<4; i++) fYec93_perm[i]=0;
		fConst34 = (9.165e-05f / (fConst4 + 9.165e-05f));
		for (int i=0; i<4; i++) fRec290_perm[i]=0;
		for (int i=0; i<4; i++) fYec94_perm[i]=0;
		for (int i=0; i<4; i++) fRec295_perm[i]=0;
		fslider8 = 1.0f;
		for (int i=0; i<4; i++) fYec95_perm[i]=0;
		fConst35 = (0.00039f / (fConst4 + 0.00039f));
		for (int i=0; i<4; i++) fRec294_perm[i]=0;
		for (int i=0; i<4; i++) fYec96_perm[i]=0;
		fConst36 = (0.000195f / (fConst4 + 0.000195f));
		for (int i=0; i<4; i++) fRec293_perm[i]=0;
		fslider9 = 1.0f;
		for (int i=0; i<4; i++) fYec97_perm[i]=0;
		fConst37 = (0.000858f / (fConst4 + 0.000858f));
		for (int i=0; i<4; i++) fRec297_perm[i]=0;
		for (int i=0; i<4; i++) fYec98_perm[i]=0;
		fConst38 = (0.000429f / (fConst4 + 0.000429f));
		for (int i=0; i<4; i++) fRec296_perm[i]=0;
		for (int i=0; i<4; i++) fRec299_perm[i]=0;
		for (int i=0; i<4; i++) fRec298_perm[i]=0;
		for (int i=0; i<4; i++) fRec301_perm[i]=0;
		for (int i=0; i<4; i++) fRec300_perm[i]=0;
		for (int i=0; i<4; i++) fRec303_perm[i]=0;
		for (int i=0; i<4; i++) fRec302_perm[i]=0;
		for (int i=0; i<4; i++) fRec305_perm[i]=0;
		for (int i=0; i<4; i++) fRec304_perm[i]=0;
		fslider10 = 1.0f;
		fslider11 = 1.0f;
		fConst39 = (3968.253968253968f / float(iConst0));
		for (int i=0; i<4; i++) fRec306_perm[i]=0;
		fslider12 = 1.0f;
		for (int i=0; i<4; i++) fRec307_perm[i]=0;
		for (int i=0; i<4; i++) fYec99_perm[i]=0;
		for (int i=0; i<4; i++) fRec308_perm[i]=0;
		fslider13 = 0.5f;
		fslider14 = 1.0f;
		fslider15 = 1.0f;
		fslider16 = 0.5f;
		fslider17 = 1.0f;
		fslider18 = 0.0f;
		fslider19 = 0.5f;
		fslider20 = 1.0f;
		fslider21 = 0.0f;
		fConst40 = (0.027590958087858178f * fConst1);
		for (int i=0; i<4; i++) fYec100_perm[i]=0;
		fslider22 = 1.0f;
	}
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void buildUserInterface(UI* interface) {
		interface->openVerticalBox("0x00");
		interface->addButton("A0", &fbutton50);
		interface->addButton("A1", &fbutton38);
		interface->addButton("A2", &fbutton26);
		interface->addButton("A3", &fbutton14);
		interface->addButton("A4", &fbutton2);
		interface->addButton("C0", &fbutton59);
		interface->addButton("C1", &fbutton47);
		interface->addButton("C2", &fbutton35);
		interface->addButton("C3", &fbutton23);
		interface->addButton("C4", &fbutton11);
		interface->addButton("D0", &fbutton57);
		interface->addButton("D1", &fbutton45);
		interface->addButton("D2", &fbutton33);
		interface->addButton("D3", &fbutton21);
		interface->addButton("D4", &fbutton9);
		interface->addButton("F0", &fbutton54);
		interface->addButton("F1", &fbutton42);
		interface->addButton("F2", &fbutton30);
		interface->addButton("F3", &fbutton18);
		interface->addButton("F4", &fbutton6);
		interface->addButton("G0", &fbutton52);
		interface->addButton("G1", &fbutton40);
		interface->addButton("G2", &fbutton28);
		interface->addButton("G3", &fbutton16);
		interface->addButton("G4", &fbutton4);
		interface->declare(0, "2", "");
		interface->openVerticalBox("vibrato");
		interface->declare(&fslider4, "1", "");
		interface->addHorizontalSlider("depth", &fslider4, 0.0f, 0.0f, 1.0f, 0.2f);
		interface->declare(&fslider1, "2", "");
		interface->addHorizontalSlider("speed", &fslider1, 0.0f, 0.0f, 1.0f, 0.2f);
		interface->closeBox();
		interface->addButton("a0", &fbutton51);
		interface->addButton("a1", &fbutton39);
		interface->addButton("a2", &fbutton27);
		interface->addButton("a3", &fbutton15);
		interface->addButton("a4", &fbutton3);
		interface->addButton("b0", &fbutton49);
		interface->addButton("b1", &fbutton37);
		interface->addButton("b2", &fbutton25);
		interface->addButton("b3", &fbutton13);
		interface->addButton("b4", &fbutton1);
		interface->addHorizontalSlider("balance", &fslider20, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->openHorizontalBox("bass");
		interface->declare(&fslider10, "1", "");
		interface->addVerticalSlider("16' b", &fslider10, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider11, "2", "");
		interface->addVerticalSlider("8' b", &fslider11, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider5, "3", "");
		interface->addHorizontalSlider("bass manual", &fslider5, 0.0f, 0.0f, 1.0f, 1.0f);
		interface->declare(&fslider12, "3", "");
		interface->addVerticalSlider("bass volume", &fslider12, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->closeBox();
		interface->addButton("c0", &fbutton60);
		interface->addButton("c1", &fbutton48);
		interface->addButton("c2", &fbutton36);
		interface->addButton("c3", &fbutton24);
		interface->addButton("c4", &fbutton12);
		interface->addButton("c5", &fbutton0);
		interface->addButton("d0", &fbutton58);
		interface->addButton("d1", &fbutton46);
		interface->addButton("d2", &fbutton34);
		interface->addButton("d3", &fbutton22);
		interface->addButton("d4", &fbutton10);
		interface->addButton("e0", &fbutton56);
		interface->addButton("e1", &fbutton44);
		interface->addButton("e2", &fbutton32);
		interface->addButton("e3", &fbutton20);
		interface->addButton("e4", &fbutton8);
		interface->addButton("f0", &fbutton55);
		interface->addButton("f1", &fbutton43);
		interface->addButton("f2", &fbutton31);
		interface->addButton("f3", &fbutton19);
		interface->addButton("f4", &fbutton7);
		interface->addButton("g0", &fbutton53);
		interface->addButton("g1", &fbutton41);
		interface->addButton("g2", &fbutton29);
		interface->addButton("g3", &fbutton17);
		interface->addButton("g4", &fbutton5);
		interface->openHorizontalBox("i");
		interface->declare(&fslider13, "1", "");
		interface->addVerticalSlider("16' i", &fslider13, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider14, "2", "");
		interface->addVerticalSlider("8' i", &fslider14, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider15, "3", "");
		interface->addVerticalSlider("4' i", &fslider15, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider16, "4", "");
		interface->addVerticalSlider("2 2/3' i", &fslider16, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider17, "5", "");
		interface->addVerticalSlider("2' i", &fslider17, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider18, "6", "");
		interface->addVerticalSlider("1 3/5' i", &fslider18, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider19, "7", "");
		interface->addVerticalSlider("1' i", &fslider19, 0.5f, 0.0f, 1.0f, 0.25f);
		interface->closeBox();
		interface->openHorizontalBox("ii");
		interface->declare(&fslider21, "1", "");
		interface->addVerticalSlider("bright", &fslider21, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider9, "2", "");
		interface->addVerticalSlider("16' ii", &fslider9, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider8, "3", "");
		interface->addVerticalSlider("8' ii", &fslider8, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider7, "4", "");
		interface->addVerticalSlider("4' ii", &fslider7, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->declare(&fslider6, "5", "");
		interface->addVerticalSlider("2' ii", &fslider6, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->closeBox();
		interface->addHorizontalSlider("percussive", &fslider22, 1.0f, 0.0f, 1.0f, 0.25f);
		interface->addHorizontalSlider("pitch", &fslider3, 0.0f, -1.0f, 1.0f, 0.05f);
		interface->addHorizontalSlider("realism", &fslider2, 0.0f, 0.0f, 1.0f, 0.25f);
		interface->addHorizontalSlider("volume", &fslider0, 0.5f, 0.0f, 1.0f, 0.01f);
		interface->closeBox();
	}
	virtual void compute (int count, FAUSTFLOAT** input, FAUSTFLOAT** output) {
		float 	fRec0_tmp[32+4];
		float 	fRec6_tmp[32+4];
		float 	fZec0[32];
		float 	fZec1[32];
		float 	fRec5_tmp[32+4];
		int 	iRec7_tmp[32+4];
		float 	fYec0_tmp[32+4];
		float 	fZec2[32];
		int 	iRec4_tmp[32+4];
		float 	fYec1_tmp[32+4];
		float 	fZec3[32];
		int 	iRec3_tmp[32+4];
		float 	fYec2_tmp[32+4];
		float 	fZec4[32];
		float 	fRec2_tmp[32+4];
		float 	fRec1_tmp[32+4];
		float 	fZec5[32];
		float 	fRec12_tmp[32+4];
		int 	iRec13_tmp[32+4];
		float 	fYec3_tmp[32+4];
		float 	fZec6[32];
		int 	iRec11_tmp[32+4];
		float 	fYec4_tmp[32+4];
		float 	fZec7[32];
		int 	iRec10_tmp[32+4];
		float 	fYec5_tmp[32+4];
		float 	fZec8[32];
		float 	fRec9_tmp[32+4];
		float 	fRec8_tmp[32+4];
		float 	fZec9[32];
		float 	fRec18_tmp[32+4];
		int 	iRec19_tmp[32+4];
		float 	fYec6_tmp[32+4];
		float 	fZec10[32];
		int 	iRec17_tmp[32+4];
		float 	fYec7_tmp[32+4];
		float 	fZec11[32];
		int 	iRec16_tmp[32+4];
		float 	fYec8_tmp[32+4];
		float 	fZec12[32];
		float 	fRec15_tmp[32+4];
		float 	fRec14_tmp[32+4];
		float 	fZec13[32];
		float 	fRec24_tmp[32+4];
		int 	iRec25_tmp[32+4];
		float 	fYec9_tmp[32+4];
		float 	fZec14[32];
		int 	iRec23_tmp[32+4];
		float 	fYec10_tmp[32+4];
		float 	fZec15[32];
		int 	iRec22_tmp[32+4];
		float 	fYec11_tmp[32+4];
		float 	fZec16[32];
		float 	fRec21_tmp[32+4];
		float 	fRec20_tmp[32+4];
		float 	fZec17[32];
		float 	fRec30_tmp[32+4];
		int 	iRec31_tmp[32+4];
		float 	fYec12_tmp[32+4];
		float 	fZec18[32];
		int 	iRec29_tmp[32+4];
		float 	fYec13_tmp[32+4];
		float 	fZec19[32];
		int 	iRec28_tmp[32+4];
		float 	fYec14_tmp[32+4];
		float 	fZec20[32];
		float 	fRec27_tmp[32+4];
		float 	fRec26_tmp[32+4];
		float 	fZec21[32];
		float 	fRec36_tmp[32+4];
		int 	iRec37_tmp[32+4];
		float 	fYec15_tmp[32+4];
		float 	fZec22[32];
		int 	iRec35_tmp[32+4];
		float 	fYec16_tmp[32+4];
		float 	fZec23[32];
		int 	iRec34_tmp[32+4];
		float 	fYec17_tmp[32+4];
		float 	fZec24[32];
		float 	fRec33_tmp[32+4];
		float 	fRec32_tmp[32+4];
		float 	fZec25[32];
		float 	fRec42_tmp[32+4];
		int 	iRec43_tmp[32+4];
		float 	fYec18_tmp[32+4];
		float 	fZec26[32];
		int 	iRec41_tmp[32+4];
		float 	fYec19_tmp[32+4];
		float 	fZec27[32];
		int 	iRec40_tmp[32+4];
		float 	fYec20_tmp[32+4];
		float 	fZec28[32];
		float 	fRec39_tmp[32+4];
		float 	fRec38_tmp[32+4];
		float 	fZec29[32];
		float 	fRec48_tmp[32+4];
		int 	iRec49_tmp[32+4];
		float 	fYec21_tmp[32+4];
		float 	fZec30[32];
		int 	iRec47_tmp[32+4];
		float 	fYec22_tmp[32+4];
		float 	fZec31[32];
		int 	iRec46_tmp[32+4];
		float 	fYec23_tmp[32+4];
		float 	fZec32[32];
		float 	fRec45_tmp[32+4];
		float 	fRec44_tmp[32+4];
		float 	fZec33[32];
		float 	fRec54_tmp[32+4];
		int 	iRec55_tmp[32+4];
		float 	fYec24_tmp[32+4];
		float 	fZec34[32];
		int 	iRec53_tmp[32+4];
		float 	fYec25_tmp[32+4];
		float 	fZec35[32];
		int 	iRec52_tmp[32+4];
		float 	fYec26_tmp[32+4];
		float 	fZec36[32];
		float 	fRec51_tmp[32+4];
		float 	fRec50_tmp[32+4];
		float 	fZec37[32];
		float 	fRec60_tmp[32+4];
		int 	iRec61_tmp[32+4];
		float 	fYec27_tmp[32+4];
		float 	fZec38[32];
		int 	iRec59_tmp[32+4];
		float 	fYec28_tmp[32+4];
		float 	fZec39[32];
		int 	iRec58_tmp[32+4];
		float 	fYec29_tmp[32+4];
		float 	fZec40[32];
		float 	fRec57_tmp[32+4];
		float 	fRec56_tmp[32+4];
		float 	fZec41[32];
		float 	fRec66_tmp[32+4];
		int 	iRec67_tmp[32+4];
		float 	fYec30_tmp[32+4];
		float 	fZec42[32];
		int 	iRec65_tmp[32+4];
		float 	fYec31_tmp[32+4];
		float 	fZec43[32];
		int 	iRec64_tmp[32+4];
		float 	fYec32_tmp[32+4];
		float 	fZec44[32];
		float 	fRec63_tmp[32+4];
		float 	fRec62_tmp[32+4];
		float 	fZec45[32];
		float 	fRec72_tmp[32+4];
		int 	iRec73_tmp[32+4];
		float 	fYec33_tmp[32+4];
		float 	fZec46[32];
		int 	iRec71_tmp[32+4];
		float 	fYec34_tmp[32+4];
		float 	fZec47[32];
		int 	iRec70_tmp[32+4];
		float 	fYec35_tmp[32+4];
		float 	fZec48[32];
		float 	fRec69_tmp[32+4];
		float 	fRec68_tmp[32+4];
		float 	fRec75_tmp[32+4];
		float 	fRec74_tmp[32+4];
		float 	fRec77_tmp[32+4];
		float 	fRec76_tmp[32+4];
		float 	fRec79_tmp[32+4];
		float 	fRec78_tmp[32+4];
		float 	fRec81_tmp[32+4];
		float 	fRec80_tmp[32+4];
		float 	fRec83_tmp[32+4];
		float 	fRec82_tmp[32+4];
		float 	fRec85_tmp[32+4];
		float 	fRec84_tmp[32+4];
		float 	fRec87_tmp[32+4];
		float 	fRec86_tmp[32+4];
		float 	fRec89_tmp[32+4];
		float 	fRec88_tmp[32+4];
		float 	fRec91_tmp[32+4];
		float 	fRec90_tmp[32+4];
		float 	fRec93_tmp[32+4];
		float 	fRec92_tmp[32+4];
		float 	fRec95_tmp[32+4];
		float 	fRec94_tmp[32+4];
		float 	fRec97_tmp[32+4];
		float 	fRec96_tmp[32+4];
		float 	fRec99_tmp[32+4];
		float 	fRec98_tmp[32+4];
		float 	fRec101_tmp[32+4];
		float 	fRec100_tmp[32+4];
		float 	fRec103_tmp[32+4];
		float 	fRec102_tmp[32+4];
		float 	fRec105_tmp[32+4];
		float 	fRec104_tmp[32+4];
		float 	fRec107_tmp[32+4];
		float 	fRec106_tmp[32+4];
		float 	fRec109_tmp[32+4];
		float 	fRec108_tmp[32+4];
		float 	fRec111_tmp[32+4];
		float 	fRec110_tmp[32+4];
		float 	fRec113_tmp[32+4];
		float 	fRec112_tmp[32+4];
		float 	fRec115_tmp[32+4];
		float 	fRec114_tmp[32+4];
		float 	fRec117_tmp[32+4];
		float 	fRec116_tmp[32+4];
		float 	fRec119_tmp[32+4];
		float 	fRec118_tmp[32+4];
		float 	fRec121_tmp[32+4];
		float 	fRec120_tmp[32+4];
		float 	fYec36_tmp[32+4];
		float 	fRec122_tmp[32+4];
		float 	fYec37_tmp[32+4];
		float 	fRec123_tmp[32+4];
		float 	fYec38_tmp[32+4];
		float 	fRec124_tmp[32+4];
		float 	fYec39_tmp[32+4];
		float 	fRec125_tmp[32+4];
		float 	fYec40_tmp[32+4];
		float 	fRec126_tmp[32+4];
		float 	fYec41_tmp[32+4];
		float 	fRec127_tmp[32+4];
		float 	fYec42_tmp[32+4];
		float 	fRec128_tmp[32+4];
		float 	fYec43_tmp[32+4];
		float 	fRec129_tmp[32+4];
		float 	fYec44_tmp[32+4];
		float 	fRec130_tmp[32+4];
		float 	fYec45_tmp[32+4];
		float 	fRec131_tmp[32+4];
		float 	fYec46_tmp[32+4];
		float 	fRec132_tmp[32+4];
		float 	fYec47_tmp[32+4];
		float 	fRec133_tmp[32+4];
		float 	fVec0_tmp[32+4];
		float 	fZec49[32];
		float 	fZec50[32];
		float 	fVec1_tmp[32+4];
		float 	fZec51[32];
		float 	fZec52[32];
		float 	fVec2_tmp[32+4];
		float 	fZec53[32];
		float 	fZec54[32];
		float 	fVec3_tmp[32+4];
		float 	fZec55[32];
		float 	fZec56[32];
		float 	fVec4_tmp[32+4];
		float 	fZec57[32];
		float 	fZec58[32];
		float 	fVec5_tmp[32+4];
		float 	fZec59[32];
		float 	fZec60[32];
		float 	fVec6_tmp[32+4];
		float 	fZec61[32];
		float 	fZec62[32];
		float 	fVec7_tmp[32+4];
		float 	fZec63[32];
		float 	fZec64[32];
		float 	fVec8_tmp[32+4];
		float 	fZec65[32];
		float 	fZec66[32];
		float 	fVec9_tmp[32+4];
		float 	fZec67[32];
		float 	fZec68[32];
		float 	fVec10_tmp[32+4];
		float 	fZec69[32];
		float 	fZec70[32];
		float 	fVec11_tmp[32+4];
		float 	fZec71[32];
		float 	fZec72[32];
		float 	fVec12_tmp[32+4];
		float 	fZec73[32];
		float 	fZec74[32];
		float 	fVec13_tmp[32+4];
		float 	fZec75[32];
		float 	fVec14_tmp[32+4];
		float 	fZec76[32];
		float 	fVec15_tmp[32+4];
		float 	fZec77[32];
		float 	fVec16_tmp[32+4];
		float 	fZec78[32];
		float 	fVec17_tmp[32+4];
		float 	fZec79[32];
		float 	fVec18_tmp[32+4];
		float 	fZec80[32];
		float 	fVec19_tmp[32+4];
		float 	fZec81[32];
		float 	fVec20_tmp[32+4];
		float 	fZec82[32];
		float 	fVec21_tmp[32+4];
		float 	fZec83[32];
		float 	fVec22_tmp[32+4];
		float 	fZec84[32];
		float 	fVec23_tmp[32+4];
		float 	fZec85[32];
		float 	fVec24_tmp[32+4];
		float 	fZec86[32];
		float 	fVec25_tmp[32+4];
		float 	fZec87[32];
		float 	fVec26_tmp[32+4];
		float 	fZec88[32];
		float 	fVec27_tmp[32+4];
		float 	fZec89[32];
		float 	fVec28_tmp[32+4];
		float 	fZec90[32];
		float 	fVec29_tmp[32+4];
		float 	fZec91[32];
		float 	fVec30_tmp[32+4];
		float 	fZec92[32];
		float 	fVec31_tmp[32+4];
		float 	fZec93[32];
		float 	fVec32_tmp[32+4];
		float 	fZec94[32];
		float 	fVec33_tmp[32+4];
		float 	fZec95[32];
		float 	fVec34_tmp[32+4];
		float 	fZec96[32];
		float 	fVec35_tmp[32+4];
		float 	fZec97[32];
		float 	fVec36_tmp[32+4];
		float 	fZec98[32];
		float 	fVec37_tmp[32+4];
		float 	fZec99[32];
		float 	fVec38_tmp[32+4];
		float 	fZec100[32];
		float 	fVec39_tmp[32+4];
		float 	fZec101[32];
		float 	fVec40_tmp[32+4];
		float 	fZec102[32];
		float 	fVec41_tmp[32+4];
		float 	fZec103[32];
		float 	fVec42_tmp[32+4];
		float 	fZec104[32];
		float 	fVec43_tmp[32+4];
		float 	fZec105[32];
		float 	fVec44_tmp[32+4];
		float 	fZec106[32];
		float 	fVec45_tmp[32+4];
		float 	fZec107[32];
		float 	fVec46_tmp[32+4];
		float 	fZec108[32];
		float 	fVec47_tmp[32+4];
		float 	fZec109[32];
		float 	fVec48_tmp[32+4];
		float 	fZec110[32];
		float 	fVec49_tmp[32+4];
		float 	fZec111[32];
		float 	fVec50_tmp[32+4];
		float 	fZec112[32];
		float 	fVec51_tmp[32+4];
		float 	fZec113[32];
		float 	fVec52_tmp[32+4];
		float 	fZec114[32];
		float 	fVec53_tmp[32+4];
		float 	fZec115[32];
		float 	fVec54_tmp[32+4];
		float 	fZec116[32];
		float 	fVec55_tmp[32+4];
		float 	fZec117[32];
		float 	fVec56_tmp[32+4];
		float 	fZec118[32];
		float 	fVec57_tmp[32+4];
		float 	fZec119[32];
		float 	fVec58_tmp[32+4];
		float 	fZec120[32];
		float 	fVec59_tmp[32+4];
		float 	fZec121[32];
		float 	fVec60_tmp[32+4];
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
		int 	iRec138_tmp[32+4];
		float 	fYec49_tmp[32+4];
		float 	fZec158[32];
		int 	iRec137_tmp[32+4];
		float 	fYec50_tmp[32+4];
		float 	fZec159[32];
		float 	fRec136_tmp[32+4];
		float 	fRec135_tmp[32+4];
		int 	iRec142_tmp[32+4];
		float 	fYec51_tmp[32+4];
		float 	fZec160[32];
		int 	iRec141_tmp[32+4];
		float 	fYec52_tmp[32+4];
		float 	fZec161[32];
		float 	fRec140_tmp[32+4];
		float 	fRec139_tmp[32+4];
		int 	iRec146_tmp[32+4];
		float 	fYec53_tmp[32+4];
		float 	fZec162[32];
		int 	iRec145_tmp[32+4];
		float 	fYec54_tmp[32+4];
		float 	fZec163[32];
		float 	fRec144_tmp[32+4];
		float 	fRec143_tmp[32+4];
		int 	iRec150_tmp[32+4];
		float 	fYec55_tmp[32+4];
		float 	fZec164[32];
		int 	iRec149_tmp[32+4];
		float 	fYec56_tmp[32+4];
		float 	fZec165[32];
		float 	fRec148_tmp[32+4];
		float 	fRec147_tmp[32+4];
		int 	iRec154_tmp[32+4];
		float 	fYec57_tmp[32+4];
		float 	fZec166[32];
		int 	iRec153_tmp[32+4];
		float 	fYec58_tmp[32+4];
		float 	fZec167[32];
		float 	fRec152_tmp[32+4];
		float 	fRec151_tmp[32+4];
		int 	iRec157_tmp[32+4];
		float 	fYec59_tmp[32+4];
		float 	fZec168[32];
		float 	fRec156_tmp[32+4];
		float 	fRec155_tmp[32+4];
		int 	iRec160_tmp[32+4];
		float 	fYec60_tmp[32+4];
		float 	fZec169[32];
		float 	fRec159_tmp[32+4];
		float 	fRec158_tmp[32+4];
		int 	iRec163_tmp[32+4];
		float 	fYec61_tmp[32+4];
		float 	fZec170[32];
		float 	fRec162_tmp[32+4];
		float 	fRec161_tmp[32+4];
		int 	iRec166_tmp[32+4];
		float 	fYec62_tmp[32+4];
		float 	fZec171[32];
		float 	fRec165_tmp[32+4];
		float 	fRec164_tmp[32+4];
		int 	iRec169_tmp[32+4];
		float 	fYec63_tmp[32+4];
		float 	fZec172[32];
		float 	fRec168_tmp[32+4];
		float 	fRec167_tmp[32+4];
		int 	iRec172_tmp[32+4];
		float 	fYec64_tmp[32+4];
		float 	fZec173[32];
		float 	fRec171_tmp[32+4];
		float 	fRec170_tmp[32+4];
		int 	iRec175_tmp[32+4];
		float 	fYec65_tmp[32+4];
		float 	fZec174[32];
		float 	fRec174_tmp[32+4];
		float 	fRec173_tmp[32+4];
		float 	fRec177_tmp[32+4];
		float 	fRec176_tmp[32+4];
		float 	fRec179_tmp[32+4];
		float 	fRec178_tmp[32+4];
		float 	fRec181_tmp[32+4];
		float 	fRec180_tmp[32+4];
		float 	fRec183_tmp[32+4];
		float 	fRec182_tmp[32+4];
		float 	fRec185_tmp[32+4];
		float 	fRec184_tmp[32+4];
		float 	fZec175[32];
		float 	fZec176[32];
		float 	fZec177[32];
		float 	fZec178[32];
		float 	fZec179[32];
		float 	fYec66_tmp[32+4];
		float 	fRec186_tmp[32+4];
		int 	iRec191_tmp[32+4];
		float 	fYec67_tmp[32+4];
		float 	fZec180[32];
		int 	iRec190_tmp[32+4];
		float 	fYec68_tmp[32+4];
		float 	fZec181[32];
		int 	iRec189_tmp[32+4];
		float 	fRec188_tmp[32+4];
		float 	fRec187_tmp[32+4];
		int 	iRec196_tmp[32+4];
		float 	fYec69_tmp[32+4];
		float 	fZec182[32];
		int 	iRec195_tmp[32+4];
		float 	fYec70_tmp[32+4];
		float 	fZec183[32];
		int 	iRec194_tmp[32+4];
		float 	fRec193_tmp[32+4];
		float 	fRec192_tmp[32+4];
		int 	iRec201_tmp[32+4];
		float 	fYec71_tmp[32+4];
		float 	fZec184[32];
		int 	iRec200_tmp[32+4];
		float 	fYec72_tmp[32+4];
		float 	fZec185[32];
		int 	iRec199_tmp[32+4];
		float 	fRec198_tmp[32+4];
		float 	fRec197_tmp[32+4];
		int 	iRec206_tmp[32+4];
		float 	fYec73_tmp[32+4];
		float 	fZec186[32];
		int 	iRec205_tmp[32+4];
		float 	fYec74_tmp[32+4];
		float 	fZec187[32];
		int 	iRec204_tmp[32+4];
		float 	fRec203_tmp[32+4];
		float 	fRec202_tmp[32+4];
		int 	iRec211_tmp[32+4];
		float 	fYec75_tmp[32+4];
		float 	fZec188[32];
		int 	iRec210_tmp[32+4];
		float 	fYec76_tmp[32+4];
		float 	fZec189[32];
		int 	iRec209_tmp[32+4];
		float 	fRec208_tmp[32+4];
		float 	fRec207_tmp[32+4];
		int 	iRec216_tmp[32+4];
		float 	fYec77_tmp[32+4];
		float 	fZec190[32];
		int 	iRec215_tmp[32+4];
		float 	fYec78_tmp[32+4];
		float 	fZec191[32];
		int 	iRec214_tmp[32+4];
		float 	fRec213_tmp[32+4];
		float 	fRec212_tmp[32+4];
		int 	iRec221_tmp[32+4];
		float 	fYec79_tmp[32+4];
		float 	fZec192[32];
		int 	iRec220_tmp[32+4];
		float 	fYec80_tmp[32+4];
		float 	fZec193[32];
		int 	iRec219_tmp[32+4];
		float 	fRec218_tmp[32+4];
		float 	fRec217_tmp[32+4];
		int 	iRec225_tmp[32+4];
		float 	fYec81_tmp[32+4];
		float 	fZec194[32];
		int 	iRec224_tmp[32+4];
		float 	fRec223_tmp[32+4];
		float 	fRec222_tmp[32+4];
		int 	iRec229_tmp[32+4];
		float 	fYec82_tmp[32+4];
		float 	fZec195[32];
		int 	iRec228_tmp[32+4];
		float 	fRec227_tmp[32+4];
		float 	fRec226_tmp[32+4];
		int 	iRec233_tmp[32+4];
		float 	fYec83_tmp[32+4];
		float 	fZec196[32];
		int 	iRec232_tmp[32+4];
		float 	fRec231_tmp[32+4];
		float 	fRec230_tmp[32+4];
		int 	iRec237_tmp[32+4];
		float 	fYec84_tmp[32+4];
		float 	fZec197[32];
		int 	iRec236_tmp[32+4];
		float 	fRec235_tmp[32+4];
		float 	fRec234_tmp[32+4];
		int 	iRec241_tmp[32+4];
		float 	fYec85_tmp[32+4];
		float 	fZec198[32];
		int 	iRec240_tmp[32+4];
		float 	fRec239_tmp[32+4];
		float 	fRec238_tmp[32+4];
		float 	fRec243_tmp[32+4];
		float 	fRec242_tmp[32+4];
		float 	fRec245_tmp[32+4];
		float 	fRec244_tmp[32+4];
		float 	fRec247_tmp[32+4];
		float 	fRec246_tmp[32+4];
		float 	fRec249_tmp[32+4];
		float 	fRec248_tmp[32+4];
		float 	fRec251_tmp[32+4];
		float 	fRec250_tmp[32+4];
		float 	fRec253_tmp[32+4];
		float 	fRec252_tmp[32+4];
		float 	fRec255_tmp[32+4];
		float 	fRec254_tmp[32+4];
		float 	fRec257_tmp[32+4];
		float 	fRec256_tmp[32+4];
		float 	fRec259_tmp[32+4];
		float 	fRec258_tmp[32+4];
		float 	fRec261_tmp[32+4];
		float 	fRec260_tmp[32+4];
		float 	fRec263_tmp[32+4];
		float 	fRec262_tmp[32+4];
		float 	fRec265_tmp[32+4];
		float 	fRec264_tmp[32+4];
		float 	fRec267_tmp[32+4];
		float 	fRec266_tmp[32+4];
		float 	fRec269_tmp[32+4];
		float 	fRec268_tmp[32+4];
		float 	fRec271_tmp[32+4];
		float 	fRec270_tmp[32+4];
		float 	fRec273_tmp[32+4];
		float 	fRec272_tmp[32+4];
		float 	fRec275_tmp[32+4];
		float 	fRec274_tmp[32+4];
		float 	fRec277_tmp[32+4];
		float 	fRec276_tmp[32+4];
		float 	fRec279_tmp[32+4];
		float 	fRec278_tmp[32+4];
		float 	fZec199[32];
		float 	fZec200[32];
		float 	fZec201[32];
		float 	fYec86_tmp[32+4];
		float 	fRec280_tmp[32+4];
		int 	iRec286_tmp[32+4];
		float 	fZec202[32];
		float 	fZec203[32];
		int 	iZec204[32];
		float 	fRec283_tmp[32+4];
		int 	iRec284_tmp[32+4];
		float 	fRec285_tmp[32+4];
		float 	fYec87_tmp[32+4];
		float 	fZec205[32];
		float 	fZec206[32];
		float 	fRec282_tmp[32+4];
		float 	fRec281_tmp[32+4];
		float 	fZec207[32];
		float 	fZec208[32];
		float 	fYec88_tmp[32+4];
		float 	fRec289_tmp[32+4];
		float 	fZec209[32];
		float 	fYec89_tmp[32+4];
		float 	fRec288_tmp[32+4];
		float 	fYec90_tmp[32+4];
		float 	fRec287_tmp[32+4];
		float 	fZec210[32];
		float 	fZec211[32];
		float 	fZec212[32];
		float 	fYec91_tmp[32+4];
		float 	fRec292_tmp[32+4];
		float 	fZec213[32];
		float 	fYec92_tmp[32+4];
		float 	fRec291_tmp[32+4];
		float 	fYec93_tmp[32+4];
		float 	fRec290_tmp[32+4];
		float 	fZec214[32];
		float 	fZec215[32];
		float 	fZec216[32];
		float 	fYec94_tmp[32+4];
		float 	fRec295_tmp[32+4];
		float 	fZec217[32];
		float 	fYec95_tmp[32+4];
		float 	fRec294_tmp[32+4];
		float 	fYec96_tmp[32+4];
		float 	fRec293_tmp[32+4];
		float 	fZec218[32];
		float 	fYec97_tmp[32+4];
		float 	fRec297_tmp[32+4];
		float 	fYec98_tmp[32+4];
		float 	fRec296_tmp[32+4];
		float 	fRec299_tmp[32+4];
		float 	fRec298_tmp[32+4];
		float 	fRec301_tmp[32+4];
		float 	fRec300_tmp[32+4];
		float 	fRec303_tmp[32+4];
		float 	fRec302_tmp[32+4];
		float 	fRec305_tmp[32+4];
		float 	fRec304_tmp[32+4];
		float 	fRec306_tmp[32+4];
		float 	fRec307_tmp[32+4];
		float 	fZec219[32];
		float 	fZec220[32];
		float 	fYec99_tmp[32+4];
		float 	fRec308_tmp[32+4];
		float 	fZec221[32];
		float 	fZec222[32];
		float 	fYec100_tmp[32+4];
		float 	fZec223[32];
		float 	fSlow0 = (0.02f * faustpower<2>(float(fslider0)));
		float* 	fRec0 = &fRec0_tmp[4];
		float 	fSlow1 = (fConst2 * float((5.0f + (3 * float(fslider1)))));
		float* 	fRec6 = &fRec6_tmp[4];
		float 	fSlow2 = float(fslider2);
		int 	iSlow3 = int((fSlow2 > 0.16666666666666666f));
		float 	fSlow4 = ((iSlow3)?1.001383f:1.0f);
		float 	fSlow5 = (1 + (0.03f * float(fslider3)));
		float 	fSlow6 = (0.0001f + (0.0149f * float(fslider4)));
		float* 	fRec5 = &fRec5_tmp[4];
		int* 	iRec7 = &iRec7_tmp[4];
		float* 	fYec0 = &fYec0_tmp[4];
		int* 	iRec4 = &iRec4_tmp[4];
		float* 	fYec1 = &fYec1_tmp[4];
		int* 	iRec3 = &iRec3_tmp[4];
		float* 	fYec2 = &fYec2_tmp[4];
		float* 	fRec2 = &fRec2_tmp[4];
		float* 	fRec1 = &fRec1_tmp[4];
		float 	fSlow7 = ((iSlow3)?1.003796f:1.0f);
		float* 	fRec12 = &fRec12_tmp[4];
		int* 	iRec13 = &iRec13_tmp[4];
		float* 	fYec3 = &fYec3_tmp[4];
		int* 	iRec11 = &iRec11_tmp[4];
		float* 	fYec4 = &fYec4_tmp[4];
		int* 	iRec10 = &iRec10_tmp[4];
		float* 	fYec5 = &fYec5_tmp[4];
		float* 	fRec9 = &fRec9_tmp[4];
		float* 	fRec8 = &fRec8_tmp[4];
		float 	fSlow8 = ((iSlow3)?0.999484f:1.0f);
		float* 	fRec18 = &fRec18_tmp[4];
		int* 	iRec19 = &iRec19_tmp[4];
		float* 	fYec6 = &fYec6_tmp[4];
		int* 	iRec17 = &iRec17_tmp[4];
		float* 	fYec7 = &fYec7_tmp[4];
		int* 	iRec16 = &iRec16_tmp[4];
		float* 	fYec8 = &fYec8_tmp[4];
		float* 	fRec15 = &fRec15_tmp[4];
		float* 	fRec14 = &fRec14_tmp[4];
		float 	fSlow9 = ((iSlow3)?1.001135f:1.0f);
		float* 	fRec24 = &fRec24_tmp[4];
		int* 	iRec25 = &iRec25_tmp[4];
		float* 	fYec9 = &fYec9_tmp[4];
		int* 	iRec23 = &iRec23_tmp[4];
		float* 	fYec10 = &fYec10_tmp[4];
		int* 	iRec22 = &iRec22_tmp[4];
		float* 	fYec11 = &fYec11_tmp[4];
		float* 	fRec21 = &fRec21_tmp[4];
		float* 	fRec20 = &fRec20_tmp[4];
		float 	fSlow10 = ((iSlow3)?1.000064f:1.0f);
		float* 	fRec30 = &fRec30_tmp[4];
		int* 	iRec31 = &iRec31_tmp[4];
		float* 	fYec12 = &fYec12_tmp[4];
		int* 	iRec29 = &iRec29_tmp[4];
		float* 	fYec13 = &fYec13_tmp[4];
		int* 	iRec28 = &iRec28_tmp[4];
		float* 	fYec14 = &fYec14_tmp[4];
		float* 	fRec27 = &fRec27_tmp[4];
		float* 	fRec26 = &fRec26_tmp[4];
		float 	fSlow11 = ((iSlow3)?0.998889f:1.0f);
		float* 	fRec36 = &fRec36_tmp[4];
		int* 	iRec37 = &iRec37_tmp[4];
		float* 	fYec15 = &fYec15_tmp[4];
		int* 	iRec35 = &iRec35_tmp[4];
		float* 	fYec16 = &fYec16_tmp[4];
		int* 	iRec34 = &iRec34_tmp[4];
		float* 	fYec17 = &fYec17_tmp[4];
		float* 	fRec33 = &fRec33_tmp[4];
		float* 	fRec32 = &fRec32_tmp[4];
		float 	fSlow12 = ((iSlow3)?0.997199f:1.0f);
		float* 	fRec42 = &fRec42_tmp[4];
		int* 	iRec43 = &iRec43_tmp[4];
		float* 	fYec18 = &fYec18_tmp[4];
		int* 	iRec41 = &iRec41_tmp[4];
		float* 	fYec19 = &fYec19_tmp[4];
		int* 	iRec40 = &iRec40_tmp[4];
		float* 	fYec20 = &fYec20_tmp[4];
		float* 	fRec39 = &fRec39_tmp[4];
		float* 	fRec38 = &fRec38_tmp[4];
		float 	fSlow13 = ((iSlow3)?0.997294f:1.0f);
		float* 	fRec48 = &fRec48_tmp[4];
		int* 	iRec49 = &iRec49_tmp[4];
		float* 	fYec21 = &fYec21_tmp[4];
		int* 	iRec47 = &iRec47_tmp[4];
		float* 	fYec22 = &fYec22_tmp[4];
		int* 	iRec46 = &iRec46_tmp[4];
		float* 	fYec23 = &fYec23_tmp[4];
		float* 	fRec45 = &fRec45_tmp[4];
		float* 	fRec44 = &fRec44_tmp[4];
		float 	fSlow14 = ((iSlow3)?1.000562f:1.0f);
		float* 	fRec54 = &fRec54_tmp[4];
		int* 	iRec55 = &iRec55_tmp[4];
		float* 	fYec24 = &fYec24_tmp[4];
		int* 	iRec53 = &iRec53_tmp[4];
		float* 	fYec25 = &fYec25_tmp[4];
		int* 	iRec52 = &iRec52_tmp[4];
		float* 	fYec26 = &fYec26_tmp[4];
		float* 	fRec51 = &fRec51_tmp[4];
		float* 	fRec50 = &fRec50_tmp[4];
		float 	fSlow15 = ((iSlow3)?1.002464f:1.0f);
		float* 	fRec60 = &fRec60_tmp[4];
		int* 	iRec61 = &iRec61_tmp[4];
		float* 	fYec27 = &fYec27_tmp[4];
		int* 	iRec59 = &iRec59_tmp[4];
		float* 	fYec28 = &fYec28_tmp[4];
		int* 	iRec58 = &iRec58_tmp[4];
		float* 	fYec29 = &fYec29_tmp[4];
		float* 	fRec57 = &fRec57_tmp[4];
		float* 	fRec56 = &fRec56_tmp[4];
		float 	fSlow16 = ((iSlow3)?0.996945f:1.0f);
		float* 	fRec66 = &fRec66_tmp[4];
		int* 	iRec67 = &iRec67_tmp[4];
		float* 	fYec30 = &fYec30_tmp[4];
		int* 	iRec65 = &iRec65_tmp[4];
		float* 	fYec31 = &fYec31_tmp[4];
		int* 	iRec64 = &iRec64_tmp[4];
		float* 	fYec32 = &fYec32_tmp[4];
		float* 	fRec63 = &fRec63_tmp[4];
		float* 	fRec62 = &fRec62_tmp[4];
		float 	fSlow17 = ((iSlow3)?1.003118f:1.0f);
		float* 	fRec72 = &fRec72_tmp[4];
		int* 	iRec73 = &iRec73_tmp[4];
		float* 	fYec33 = &fYec33_tmp[4];
		int* 	iRec71 = &iRec71_tmp[4];
		float* 	fYec34 = &fYec34_tmp[4];
		int* 	iRec70 = &iRec70_tmp[4];
		float* 	fYec35 = &fYec35_tmp[4];
		float* 	fRec69 = &fRec69_tmp[4];
		float* 	fRec68 = &fRec68_tmp[4];
		float* 	fRec75 = &fRec75_tmp[4];
		float* 	fRec74 = &fRec74_tmp[4];
		float* 	fRec77 = &fRec77_tmp[4];
		float* 	fRec76 = &fRec76_tmp[4];
		float* 	fRec79 = &fRec79_tmp[4];
		float* 	fRec78 = &fRec78_tmp[4];
		float* 	fRec81 = &fRec81_tmp[4];
		float* 	fRec80 = &fRec80_tmp[4];
		float* 	fRec83 = &fRec83_tmp[4];
		float* 	fRec82 = &fRec82_tmp[4];
		float* 	fRec85 = &fRec85_tmp[4];
		float* 	fRec84 = &fRec84_tmp[4];
		float* 	fRec87 = &fRec87_tmp[4];
		float* 	fRec86 = &fRec86_tmp[4];
		float* 	fRec89 = &fRec89_tmp[4];
		float* 	fRec88 = &fRec88_tmp[4];
		float* 	fRec91 = &fRec91_tmp[4];
		float* 	fRec90 = &fRec90_tmp[4];
		float* 	fRec93 = &fRec93_tmp[4];
		float* 	fRec92 = &fRec92_tmp[4];
		float* 	fRec95 = &fRec95_tmp[4];
		float* 	fRec94 = &fRec94_tmp[4];
		float* 	fRec97 = &fRec97_tmp[4];
		float* 	fRec96 = &fRec96_tmp[4];
		float* 	fRec99 = &fRec99_tmp[4];
		float* 	fRec98 = &fRec98_tmp[4];
		float* 	fRec101 = &fRec101_tmp[4];
		float* 	fRec100 = &fRec100_tmp[4];
		float* 	fRec103 = &fRec103_tmp[4];
		float* 	fRec102 = &fRec102_tmp[4];
		float* 	fRec105 = &fRec105_tmp[4];
		float* 	fRec104 = &fRec104_tmp[4];
		float* 	fRec107 = &fRec107_tmp[4];
		float* 	fRec106 = &fRec106_tmp[4];
		float* 	fRec109 = &fRec109_tmp[4];
		float* 	fRec108 = &fRec108_tmp[4];
		float* 	fRec111 = &fRec111_tmp[4];
		float* 	fRec110 = &fRec110_tmp[4];
		float* 	fRec113 = &fRec113_tmp[4];
		float* 	fRec112 = &fRec112_tmp[4];
		float* 	fRec115 = &fRec115_tmp[4];
		float* 	fRec114 = &fRec114_tmp[4];
		float* 	fRec117 = &fRec117_tmp[4];
		float* 	fRec116 = &fRec116_tmp[4];
		float* 	fRec119 = &fRec119_tmp[4];
		float* 	fRec118 = &fRec118_tmp[4];
		float* 	fRec121 = &fRec121_tmp[4];
		float* 	fRec120 = &fRec120_tmp[4];
		float* 	fYec36 = &fYec36_tmp[4];
		float* 	fRec122 = &fRec122_tmp[4];
		float* 	fYec37 = &fYec37_tmp[4];
		float* 	fRec123 = &fRec123_tmp[4];
		float* 	fYec38 = &fYec38_tmp[4];
		float* 	fRec124 = &fRec124_tmp[4];
		float* 	fYec39 = &fYec39_tmp[4];
		float* 	fRec125 = &fRec125_tmp[4];
		float* 	fYec40 = &fYec40_tmp[4];
		float* 	fRec126 = &fRec126_tmp[4];
		float* 	fYec41 = &fYec41_tmp[4];
		float* 	fRec127 = &fRec127_tmp[4];
		float* 	fYec42 = &fYec42_tmp[4];
		float* 	fRec128 = &fRec128_tmp[4];
		float* 	fYec43 = &fYec43_tmp[4];
		float* 	fRec129 = &fRec129_tmp[4];
		float* 	fYec44 = &fYec44_tmp[4];
		float* 	fRec130 = &fRec130_tmp[4];
		float* 	fYec45 = &fYec45_tmp[4];
		float* 	fRec131 = &fRec131_tmp[4];
		float* 	fYec46 = &fYec46_tmp[4];
		float* 	fRec132 = &fRec132_tmp[4];
		float* 	fYec47 = &fYec47_tmp[4];
		float* 	fRec133 = &fRec133_tmp[4];
		float 	fSlow18 = float(fbutton0);
		float* 	fVec0 = &fVec0_tmp[4];
		float 	fSlow19 = float(fbutton1);
		float* 	fVec1 = &fVec1_tmp[4];
		float 	fSlow20 = float(fbutton2);
		float* 	fVec2 = &fVec2_tmp[4];
		float 	fSlow21 = float(fbutton3);
		float* 	fVec3 = &fVec3_tmp[4];
		float 	fSlow22 = float(fbutton4);
		float* 	fVec4 = &fVec4_tmp[4];
		float 	fSlow23 = float(fbutton5);
		float* 	fVec5 = &fVec5_tmp[4];
		float 	fSlow24 = float(fbutton6);
		float* 	fVec6 = &fVec6_tmp[4];
		float 	fSlow25 = float(fbutton7);
		float* 	fVec7 = &fVec7_tmp[4];
		float 	fSlow26 = float(fbutton8);
		float* 	fVec8 = &fVec8_tmp[4];
		float 	fSlow27 = float(fbutton9);
		float* 	fVec9 = &fVec9_tmp[4];
		float 	fSlow28 = float(fbutton10);
		float* 	fVec10 = &fVec10_tmp[4];
		float 	fSlow29 = float(fbutton11);
		float* 	fVec11 = &fVec11_tmp[4];
		float 	fSlow30 = float(fbutton12);
		float* 	fVec12 = &fVec12_tmp[4];
		float 	fSlow31 = float(fbutton13);
		float* 	fVec13 = &fVec13_tmp[4];
		float 	fSlow32 = float(fbutton14);
		float* 	fVec14 = &fVec14_tmp[4];
		float 	fSlow33 = float(fbutton15);
		float* 	fVec15 = &fVec15_tmp[4];
		float 	fSlow34 = float(fbutton16);
		float* 	fVec16 = &fVec16_tmp[4];
		float 	fSlow35 = float(fbutton17);
		float* 	fVec17 = &fVec17_tmp[4];
		float 	fSlow36 = float(fbutton18);
		float* 	fVec18 = &fVec18_tmp[4];
		float 	fSlow37 = float(fbutton19);
		float* 	fVec19 = &fVec19_tmp[4];
		float 	fSlow38 = float(fbutton20);
		float* 	fVec20 = &fVec20_tmp[4];
		float 	fSlow39 = float(fbutton21);
		float* 	fVec21 = &fVec21_tmp[4];
		float 	fSlow40 = float(fbutton22);
		float* 	fVec22 = &fVec22_tmp[4];
		float 	fSlow41 = float(fbutton23);
		float* 	fVec23 = &fVec23_tmp[4];
		float 	fSlow42 = float(fbutton24);
		float* 	fVec24 = &fVec24_tmp[4];
		float 	fSlow43 = float(fbutton25);
		float* 	fVec25 = &fVec25_tmp[4];
		float 	fSlow44 = float(fbutton26);
		float* 	fVec26 = &fVec26_tmp[4];
		float 	fSlow45 = float(fbutton27);
		float* 	fVec27 = &fVec27_tmp[4];
		float 	fSlow46 = float(fbutton28);
		float* 	fVec28 = &fVec28_tmp[4];
		float 	fSlow47 = float(fbutton29);
		float* 	fVec29 = &fVec29_tmp[4];
		float 	fSlow48 = float(fbutton30);
		float* 	fVec30 = &fVec30_tmp[4];
		float 	fSlow49 = float(fbutton31);
		float* 	fVec31 = &fVec31_tmp[4];
		float 	fSlow50 = float(fbutton32);
		float* 	fVec32 = &fVec32_tmp[4];
		float 	fSlow51 = float(fbutton33);
		float* 	fVec33 = &fVec33_tmp[4];
		float 	fSlow52 = float(fbutton34);
		float* 	fVec34 = &fVec34_tmp[4];
		float 	fSlow53 = float(fbutton35);
		float* 	fVec35 = &fVec35_tmp[4];
		float 	fSlow54 = float(fbutton36);
		float* 	fVec36 = &fVec36_tmp[4];
		float 	fSlow55 = float(fbutton37);
		float* 	fVec37 = &fVec37_tmp[4];
		float 	fSlow56 = float(fbutton38);
		float* 	fVec38 = &fVec38_tmp[4];
		float 	fSlow57 = float(fbutton39);
		float* 	fVec39 = &fVec39_tmp[4];
		float 	fSlow58 = float(fbutton40);
		float* 	fVec40 = &fVec40_tmp[4];
		float 	fSlow59 = float(fbutton41);
		float* 	fVec41 = &fVec41_tmp[4];
		float 	fSlow60 = float(fbutton42);
		float* 	fVec42 = &fVec42_tmp[4];
		float 	fSlow61 = float(fbutton43);
		float* 	fVec43 = &fVec43_tmp[4];
		float 	fSlow62 = float(fbutton44);
		float* 	fVec44 = &fVec44_tmp[4];
		float 	fSlow63 = float(fbutton45);
		float* 	fVec45 = &fVec45_tmp[4];
		float 	fSlow64 = float(fbutton46);
		float* 	fVec46 = &fVec46_tmp[4];
		float 	fSlow65 = float(fbutton47);
		float* 	fVec47 = &fVec47_tmp[4];
		float 	fSlow66 = float(fbutton48);
		float* 	fVec48 = &fVec48_tmp[4];
		float 	fSlow67 = float(fbutton49);
		float* 	fVec49 = &fVec49_tmp[4];
		float 	fSlow68 = float(fbutton50);
		float* 	fVec50 = &fVec50_tmp[4];
		float 	fSlow69 = float(fbutton51);
		float* 	fVec51 = &fVec51_tmp[4];
		float 	fSlow70 = float(fbutton52);
		float* 	fVec52 = &fVec52_tmp[4];
		float 	fSlow71 = float(fbutton53);
		float* 	fVec53 = &fVec53_tmp[4];
		float 	fSlow72 = float(fbutton54);
		float* 	fVec54 = &fVec54_tmp[4];
		float 	fSlow73 = float(fbutton55);
		float* 	fVec55 = &fVec55_tmp[4];
		float 	fSlow74 = float(fbutton56);
		float* 	fVec56 = &fVec56_tmp[4];
		float 	fSlow75 = float(fbutton57);
		float* 	fVec57 = &fVec57_tmp[4];
		float 	fSlow76 = float(fbutton58);
		float* 	fVec58 = &fVec58_tmp[4];
		float 	fSlow77 = float(fbutton59);
		float* 	fVec59 = &fVec59_tmp[4];
		float 	fSlow78 = float(fbutton60);
		float* 	fVec60 = &fVec60_tmp[4];
		float 	fSlow79 = float(fslider5);
		float 	fSlow80 = (1.0f - fSlow79);
		float 	fSlow81 = (0.5f * fSlow80);
		float* 	fYec48 = &fYec48_tmp[4];
		float* 	fRec134 = &fRec134_tmp[4];
		int* 	iRec138 = &iRec138_tmp[4];
		float* 	fYec49 = &fYec49_tmp[4];
		int* 	iRec137 = &iRec137_tmp[4];
		float* 	fYec50 = &fYec50_tmp[4];
		float* 	fRec136 = &fRec136_tmp[4];
		float* 	fRec135 = &fRec135_tmp[4];
		int* 	iRec142 = &iRec142_tmp[4];
		float* 	fYec51 = &fYec51_tmp[4];
		int* 	iRec141 = &iRec141_tmp[4];
		float* 	fYec52 = &fYec52_tmp[4];
		float* 	fRec140 = &fRec140_tmp[4];
		float* 	fRec139 = &fRec139_tmp[4];
		int* 	iRec146 = &iRec146_tmp[4];
		float* 	fYec53 = &fYec53_tmp[4];
		int* 	iRec145 = &iRec145_tmp[4];
		float* 	fYec54 = &fYec54_tmp[4];
		float* 	fRec144 = &fRec144_tmp[4];
		float* 	fRec143 = &fRec143_tmp[4];
		int* 	iRec150 = &iRec150_tmp[4];
		float* 	fYec55 = &fYec55_tmp[4];
		int* 	iRec149 = &iRec149_tmp[4];
		float* 	fYec56 = &fYec56_tmp[4];
		float* 	fRec148 = &fRec148_tmp[4];
		float* 	fRec147 = &fRec147_tmp[4];
		int* 	iRec154 = &iRec154_tmp[4];
		float* 	fYec57 = &fYec57_tmp[4];
		int* 	iRec153 = &iRec153_tmp[4];
		float* 	fYec58 = &fYec58_tmp[4];
		float* 	fRec152 = &fRec152_tmp[4];
		float* 	fRec151 = &fRec151_tmp[4];
		int* 	iRec157 = &iRec157_tmp[4];
		float* 	fYec59 = &fYec59_tmp[4];
		float* 	fRec156 = &fRec156_tmp[4];
		float* 	fRec155 = &fRec155_tmp[4];
		int* 	iRec160 = &iRec160_tmp[4];
		float* 	fYec60 = &fYec60_tmp[4];
		float* 	fRec159 = &fRec159_tmp[4];
		float* 	fRec158 = &fRec158_tmp[4];
		int* 	iRec163 = &iRec163_tmp[4];
		float* 	fYec61 = &fYec61_tmp[4];
		float* 	fRec162 = &fRec162_tmp[4];
		float* 	fRec161 = &fRec161_tmp[4];
		int* 	iRec166 = &iRec166_tmp[4];
		float* 	fYec62 = &fYec62_tmp[4];
		float* 	fRec165 = &fRec165_tmp[4];
		float* 	fRec164 = &fRec164_tmp[4];
		int* 	iRec169 = &iRec169_tmp[4];
		float* 	fYec63 = &fYec63_tmp[4];
		float* 	fRec168 = &fRec168_tmp[4];
		float* 	fRec167 = &fRec167_tmp[4];
		int* 	iRec172 = &iRec172_tmp[4];
		float* 	fYec64 = &fYec64_tmp[4];
		float* 	fRec171 = &fRec171_tmp[4];
		float* 	fRec170 = &fRec170_tmp[4];
		int* 	iRec175 = &iRec175_tmp[4];
		float* 	fYec65 = &fYec65_tmp[4];
		float* 	fRec174 = &fRec174_tmp[4];
		float* 	fRec173 = &fRec173_tmp[4];
		float* 	fRec177 = &fRec177_tmp[4];
		float* 	fRec176 = &fRec176_tmp[4];
		float* 	fRec179 = &fRec179_tmp[4];
		float* 	fRec178 = &fRec178_tmp[4];
		float* 	fRec181 = &fRec181_tmp[4];
		float* 	fRec180 = &fRec180_tmp[4];
		float* 	fRec183 = &fRec183_tmp[4];
		float* 	fRec182 = &fRec182_tmp[4];
		float* 	fRec185 = &fRec185_tmp[4];
		float* 	fRec184 = &fRec184_tmp[4];
		float* 	fYec66 = &fYec66_tmp[4];
		float* 	fRec186 = &fRec186_tmp[4];
		int* 	iRec191 = &iRec191_tmp[4];
		float* 	fYec67 = &fYec67_tmp[4];
		int* 	iRec190 = &iRec190_tmp[4];
		float* 	fYec68 = &fYec68_tmp[4];
		int* 	iRec189 = &iRec189_tmp[4];
		float* 	fRec188 = &fRec188_tmp[4];
		float* 	fRec187 = &fRec187_tmp[4];
		int* 	iRec196 = &iRec196_tmp[4];
		float* 	fYec69 = &fYec69_tmp[4];
		int* 	iRec195 = &iRec195_tmp[4];
		float* 	fYec70 = &fYec70_tmp[4];
		int* 	iRec194 = &iRec194_tmp[4];
		float* 	fRec193 = &fRec193_tmp[4];
		float* 	fRec192 = &fRec192_tmp[4];
		int* 	iRec201 = &iRec201_tmp[4];
		float* 	fYec71 = &fYec71_tmp[4];
		int* 	iRec200 = &iRec200_tmp[4];
		float* 	fYec72 = &fYec72_tmp[4];
		int* 	iRec199 = &iRec199_tmp[4];
		float* 	fRec198 = &fRec198_tmp[4];
		float* 	fRec197 = &fRec197_tmp[4];
		int* 	iRec206 = &iRec206_tmp[4];
		float* 	fYec73 = &fYec73_tmp[4];
		int* 	iRec205 = &iRec205_tmp[4];
		float* 	fYec74 = &fYec74_tmp[4];
		int* 	iRec204 = &iRec204_tmp[4];
		float* 	fRec203 = &fRec203_tmp[4];
		float* 	fRec202 = &fRec202_tmp[4];
		int* 	iRec211 = &iRec211_tmp[4];
		float* 	fYec75 = &fYec75_tmp[4];
		int* 	iRec210 = &iRec210_tmp[4];
		float* 	fYec76 = &fYec76_tmp[4];
		int* 	iRec209 = &iRec209_tmp[4];
		float* 	fRec208 = &fRec208_tmp[4];
		float* 	fRec207 = &fRec207_tmp[4];
		int* 	iRec216 = &iRec216_tmp[4];
		float* 	fYec77 = &fYec77_tmp[4];
		int* 	iRec215 = &iRec215_tmp[4];
		float* 	fYec78 = &fYec78_tmp[4];
		int* 	iRec214 = &iRec214_tmp[4];
		float* 	fRec213 = &fRec213_tmp[4];
		float* 	fRec212 = &fRec212_tmp[4];
		int* 	iRec221 = &iRec221_tmp[4];
		float* 	fYec79 = &fYec79_tmp[4];
		int* 	iRec220 = &iRec220_tmp[4];
		float* 	fYec80 = &fYec80_tmp[4];
		int* 	iRec219 = &iRec219_tmp[4];
		float* 	fRec218 = &fRec218_tmp[4];
		float* 	fRec217 = &fRec217_tmp[4];
		int* 	iRec225 = &iRec225_tmp[4];
		float* 	fYec81 = &fYec81_tmp[4];
		int* 	iRec224 = &iRec224_tmp[4];
		float* 	fRec223 = &fRec223_tmp[4];
		float* 	fRec222 = &fRec222_tmp[4];
		int* 	iRec229 = &iRec229_tmp[4];
		float* 	fYec82 = &fYec82_tmp[4];
		int* 	iRec228 = &iRec228_tmp[4];
		float* 	fRec227 = &fRec227_tmp[4];
		float* 	fRec226 = &fRec226_tmp[4];
		int* 	iRec233 = &iRec233_tmp[4];
		float* 	fYec83 = &fYec83_tmp[4];
		int* 	iRec232 = &iRec232_tmp[4];
		float* 	fRec231 = &fRec231_tmp[4];
		float* 	fRec230 = &fRec230_tmp[4];
		int* 	iRec237 = &iRec237_tmp[4];
		float* 	fYec84 = &fYec84_tmp[4];
		int* 	iRec236 = &iRec236_tmp[4];
		float* 	fRec235 = &fRec235_tmp[4];
		float* 	fRec234 = &fRec234_tmp[4];
		int* 	iRec241 = &iRec241_tmp[4];
		float* 	fYec85 = &fYec85_tmp[4];
		int* 	iRec240 = &iRec240_tmp[4];
		float* 	fRec239 = &fRec239_tmp[4];
		float* 	fRec238 = &fRec238_tmp[4];
		float* 	fRec243 = &fRec243_tmp[4];
		float* 	fRec242 = &fRec242_tmp[4];
		float* 	fRec245 = &fRec245_tmp[4];
		float* 	fRec244 = &fRec244_tmp[4];
		float* 	fRec247 = &fRec247_tmp[4];
		float* 	fRec246 = &fRec246_tmp[4];
		float* 	fRec249 = &fRec249_tmp[4];
		float* 	fRec248 = &fRec248_tmp[4];
		float* 	fRec251 = &fRec251_tmp[4];
		float* 	fRec250 = &fRec250_tmp[4];
		float* 	fRec253 = &fRec253_tmp[4];
		float* 	fRec252 = &fRec252_tmp[4];
		float* 	fRec255 = &fRec255_tmp[4];
		float* 	fRec254 = &fRec254_tmp[4];
		float* 	fRec257 = &fRec257_tmp[4];
		float* 	fRec256 = &fRec256_tmp[4];
		float* 	fRec259 = &fRec259_tmp[4];
		float* 	fRec258 = &fRec258_tmp[4];
		float* 	fRec261 = &fRec261_tmp[4];
		float* 	fRec260 = &fRec260_tmp[4];
		float* 	fRec263 = &fRec263_tmp[4];
		float* 	fRec262 = &fRec262_tmp[4];
		float* 	fRec265 = &fRec265_tmp[4];
		float* 	fRec264 = &fRec264_tmp[4];
		float* 	fRec267 = &fRec267_tmp[4];
		float* 	fRec266 = &fRec266_tmp[4];
		float* 	fRec269 = &fRec269_tmp[4];
		float* 	fRec268 = &fRec268_tmp[4];
		float* 	fRec271 = &fRec271_tmp[4];
		float* 	fRec270 = &fRec270_tmp[4];
		float* 	fRec273 = &fRec273_tmp[4];
		float* 	fRec272 = &fRec272_tmp[4];
		float* 	fRec275 = &fRec275_tmp[4];
		float* 	fRec274 = &fRec274_tmp[4];
		float* 	fRec277 = &fRec277_tmp[4];
		float* 	fRec276 = &fRec276_tmp[4];
		float* 	fRec279 = &fRec279_tmp[4];
		float* 	fRec278 = &fRec278_tmp[4];
		float* 	fYec86 = &fYec86_tmp[4];
		float* 	fRec280 = &fRec280_tmp[4];
		int* 	iRec286 = &iRec286_tmp[4];
		float 	fSlow82 = ((int((fSlow2 >= 0.8333333333333334f)))?1.0f:0.0f);
		float* 	fRec283 = &fRec283_tmp[4];
		int* 	iRec284 = &iRec284_tmp[4];
		float* 	fRec285 = &fRec285_tmp[4];
		float* 	fYec87 = &fYec87_tmp[4];
		float* 	fRec282 = &fRec282_tmp[4];
		float* 	fRec281 = &fRec281_tmp[4];
		float* 	fYec88 = &fYec88_tmp[4];
		float* 	fRec289 = &fRec289_tmp[4];
		float 	fSlow83 = float(fslider6);
		float 	fSlow84 = (fSlow83 * (1 + (fSlow83 * ((2.81f * fSlow83) - 2.81f))));
		float* 	fYec89 = &fYec89_tmp[4];
		float* 	fRec288 = &fRec288_tmp[4];
		float 	fSlow85 = (0.4583333333333333f * fSlow84);
		float* 	fYec90 = &fYec90_tmp[4];
		float* 	fRec287 = &fRec287_tmp[4];
		float* 	fYec91 = &fYec91_tmp[4];
		float* 	fRec292 = &fRec292_tmp[4];
		float 	fSlow86 = float(fslider7);
		float 	fSlow87 = (fSlow86 * (1 + (fSlow86 * ((2.81f * fSlow86) - 2.81f))));
		float* 	fYec92 = &fYec92_tmp[4];
		float* 	fRec291 = &fRec291_tmp[4];
		float 	fSlow88 = (0.4583333333333333f * fSlow87);
		float* 	fYec93 = &fYec93_tmp[4];
		float* 	fRec290 = &fRec290_tmp[4];
		float* 	fYec94 = &fYec94_tmp[4];
		float* 	fRec295 = &fRec295_tmp[4];
		float 	fSlow89 = float(fslider8);
		float 	fSlow90 = (fSlow89 * (1 + (fSlow89 * ((2.81f * fSlow89) - 2.81f))));
		float* 	fYec95 = &fYec95_tmp[4];
		float* 	fRec294 = &fRec294_tmp[4];
		float 	fSlow91 = (0.4583333333333333f * fSlow90);
		float* 	fYec96 = &fYec96_tmp[4];
		float* 	fRec293 = &fRec293_tmp[4];
		float 	fSlow92 = float(fslider9);
		float 	fSlow93 = (fSlow92 * (1 + (fSlow92 * ((2.81f * fSlow92) - 2.81f))));
		float* 	fYec97 = &fYec97_tmp[4];
		float* 	fRec297 = &fRec297_tmp[4];
		float 	fSlow94 = (0.4583333333333333f * fSlow93);
		float* 	fYec98 = &fYec98_tmp[4];
		float* 	fRec296 = &fRec296_tmp[4];
		float* 	fRec299 = &fRec299_tmp[4];
		float* 	fRec298 = &fRec298_tmp[4];
		float* 	fRec301 = &fRec301_tmp[4];
		float* 	fRec300 = &fRec300_tmp[4];
		float* 	fRec303 = &fRec303_tmp[4];
		float* 	fRec302 = &fRec302_tmp[4];
		float* 	fRec305 = &fRec305_tmp[4];
		float* 	fRec304 = &fRec304_tmp[4];
		float 	fSlow95 = float(fslider10);
		float 	fSlow96 = (fSlow95 * (1 + (fSlow95 * ((2.81f * fSlow95) - 2.81f))));
		float 	fSlow97 = float(fslider11);
		float 	fSlow98 = (fSlow97 * (1 + (fSlow97 * ((2.81f * fSlow97) - 2.81f))));
		float* 	fRec306 = &fRec306_tmp[4];
		float 	fSlow99 = (0.02f * float(fslider12));
		float* 	fRec307 = &fRec307_tmp[4];
		float* 	fYec99 = &fYec99_tmp[4];
		float* 	fRec308 = &fRec308_tmp[4];
		float 	fSlow100 = float(fslider13);
		float 	fSlow101 = (fSlow100 * (1 + (fSlow100 * ((2.81f * fSlow100) - 2.81f))));
		float 	fSlow102 = float(fslider14);
		float 	fSlow103 = (fSlow102 * (1 + (fSlow102 * ((2.81f * fSlow102) - 2.81f))));
		float 	fSlow104 = float(fslider15);
		float 	fSlow105 = (fSlow104 * (1 + (fSlow104 * ((2.81f * fSlow104) - 2.81f))));
		float 	fSlow106 = float(fslider16);
		float 	fSlow107 = (fSlow106 * (1 + (fSlow106 * ((2.81f * fSlow106) - 2.81f))));
		float 	fSlow108 = float(fslider17);
		float 	fSlow109 = (fSlow108 * (1 + (fSlow108 * ((2.81f * fSlow108) - 2.81f))));
		float 	fSlow110 = float(fslider18);
		float 	fSlow111 = (fSlow110 * (1 + (fSlow110 * ((2.81f * fSlow110) - 2.81f))));
		float 	fSlow112 = float(fslider19);
		float 	fSlow113 = (fSlow112 * (1 + (fSlow112 * ((2.81f * fSlow112) - 2.81f))));
		float 	fSlow114 = float(fslider20);
		float 	fSlow115 = (1 - fSlow114);
		float 	fSlow116 = (0.9615384615384616f * float(fslider21));
		float 	fSlow117 = (0.6f * (0.9807692307692307f - fSlow116));
		float 	fSlow118 = (0.019230769230769232f + fSlow116);
		float 	fSlow119 = (2.5f * fSlow114);
		float 	fSlow120 = ((int((fSlow2 > 0.5f)))?0.01357f:0.0f);
		float* 	fYec100 = &fYec100_tmp[4];
		float 	fSlow121 = (4.5f * float(fslider22));
		int index;
		int fullcount = count;
		for (index = 0; index <= fullcount - 32; index += 32) {
			// compute by blocks of 32 samples
			const int count = 32;
			FAUSTFLOAT* output0 = &output[0][index];
			FAUSTFLOAT* output1 = &output[1][index];
			// SECTION : 1
			// LOOP 0x55f852c1dbf0
			// pre processing
			for (int i=0; i<4; i++) fRec6_tmp[i]=fRec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec6[i] = (fSlow1 + ((int((fRec6[i-1] > 1.0f)))?(fRec6[i-1] - 1.0f):fRec6[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec6_perm[i]=fRec6_tmp[count+i];
			
			// SECTION : 2
			// LOOP 0x55f852c21380
			// exec code
			for (int i=0; i<count; i++) {
				fZec0[i] = ((fSlow6 * sinf((6.283185307179586f * fRec6[i]))) + fSlow5);
			}
			
			// SECTION : 3
			// LOOP 0x55f852c1d660
			// pre processing
			for (int i=0; i<4; i++) fRec5_tmp[i]=fRec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec1[i] = (fRec5[i-1] + (fConst2 * float((4186.009044809578f * (fZec0[i] * fSlow4)))));
				fRec5[i] = ((int((fZec1[i] > 1.0f)))?(fZec1[i] - 1.0f):fZec1[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec5_perm[i]=fRec5_tmp[count+i];
			
			// LOOP 0x55f852c2cfb0
			// pre processing
			for (int i=0; i<4; i++) fRec12_tmp[i]=fRec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec5[i] = (fRec12[i-1] + (fConst2 * float((4434.922095629953f * (fZec0[i] * fSlow7)))));
				fRec12[i] = ((int((fZec5[i] > 1.0f)))?(fZec5[i] - 1.0f):fZec5[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec12_perm[i]=fRec12_tmp[count+i];
			
			// LOOP 0x55f852c36c90
			// pre processing
			for (int i=0; i<4; i++) fRec18_tmp[i]=fRec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec9[i] = (fRec18[i-1] + (fConst2 * float((4698.63628667852f * (fZec0[i] * fSlow8)))));
				fRec18[i] = ((int((fZec9[i] > 1.0f)))?(fZec9[i] - 1.0f):fZec9[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec18_perm[i]=fRec18_tmp[count+i];
			
			// LOOP 0x55f852c40c10
			// pre processing
			for (int i=0; i<4; i++) fRec24_tmp[i]=fRec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec13[i] = (fRec24[i-1] + (fConst2 * float((4978.031739553295f * (fZec0[i] * fSlow9)))));
				fRec24[i] = ((int((fZec13[i] > 1.0f)))?(fZec13[i] - 1.0f):fZec13[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec24_perm[i]=fRec24_tmp[count+i];
			
			// LOOP 0x55f852c4abe0
			// pre processing
			for (int i=0; i<4; i++) fRec30_tmp[i]=fRec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec17[i] = (fRec30[i-1] + (fConst2 * float((5274.04091060592f * (fZec0[i] * fSlow10)))));
				fRec30[i] = ((int((fZec17[i] > 1.0f)))?(fZec17[i] - 1.0f):fZec17[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec30_perm[i]=fRec30_tmp[count+i];
			
			// LOOP 0x55f852c54f80
			// pre processing
			for (int i=0; i<4; i++) fRec36_tmp[i]=fRec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec21[i] = (fRec36[i-1] + (fConst2 * float((5587.651702928062f * (fZec0[i] * fSlow11)))));
				fRec36[i] = ((int((fZec21[i] > 1.0f)))?(fZec21[i] - 1.0f):fZec21[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec36_perm[i]=fRec36_tmp[count+i];
			
			// LOOP 0x55f852c5f060
			// pre processing
			for (int i=0; i<4; i++) fRec42_tmp[i]=fRec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec25[i] = (fRec42[i-1] + (fConst2 * float((5919.91076338615f * (fZec0[i] * fSlow12)))));
				fRec42[i] = ((int((fZec25[i] > 1.0f)))?(fZec25[i] - 1.0f):fZec25[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec42_perm[i]=fRec42_tmp[count+i];
			
			// LOOP 0x55f852c69140
			// pre processing
			for (int i=0; i<4; i++) fRec48_tmp[i]=fRec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec29[i] = (fRec48[i-1] + (fConst2 * float((6271.926975707989f * (fZec0[i] * fSlow13)))));
				fRec48[i] = ((int((fZec29[i] > 1.0f)))?(fZec29[i] - 1.0f):fZec29[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec48_perm[i]=fRec48_tmp[count+i];
			
			// LOOP 0x55f852c73230
			// pre processing
			for (int i=0; i<4; i++) fRec54_tmp[i]=fRec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec33[i] = (fRec54[i-1] + (fConst2 * float((6644.875161279122f * (fZec0[i] * fSlow14)))));
				fRec54[i] = ((int((fZec33[i] > 1.0f)))?(fZec33[i] - 1.0f):fZec33[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec54_perm[i]=fRec54_tmp[count+i];
			
			// LOOP 0x55f852c7d5d0
			// pre processing
			for (int i=0; i<4; i++) fRec60_tmp[i]=fRec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec37[i] = (fRec60[i-1] + (fConst2 * float((7.04e+03f * (fZec0[i] * fSlow15)))));
				fRec60[i] = ((int((fZec37[i] > 1.0f)))?(fZec37[i] - 1.0f):fZec37[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec60_perm[i]=fRec60_tmp[count+i];
			
			// LOOP 0x55f852c87650
			// pre processing
			for (int i=0; i<4; i++) fRec66_tmp[i]=fRec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec41[i] = (fRec66[i-1] + (fConst2 * float((7458.620184289437f * (fZec0[i] * fSlow16)))));
				fRec66[i] = ((int((fZec41[i] > 1.0f)))?(fZec41[i] - 1.0f):fZec41[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec66_perm[i]=fRec66_tmp[count+i];
			
			// LOOP 0x55f852c91730
			// pre processing
			for (int i=0; i<4; i++) fRec72_tmp[i]=fRec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec45[i] = (fRec72[i-1] + (fConst2 * float((7902.132820097988f * (fZec0[i] * fSlow17)))));
				fRec72[i] = ((int((fZec45[i] > 1.0f)))?(fZec45[i] - 1.0f):fZec45[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec72_perm[i]=fRec72_tmp[count+i];
			
			// SECTION : 4
			// LOOP 0x55f852c249a0
			// pre processing
			for (int i=0; i<4; i++) iRec7_tmp[i]=iRec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec7[i] = ((int(((fRec5[i] - fRec5[i-1]) < 0)))?(1 - iRec7[i-1]):iRec7[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec7_perm[i]=iRec7_tmp[count+i];
			
			// LOOP 0x55f852c2efe0
			// pre processing
			for (int i=0; i<4; i++) iRec13_tmp[i]=iRec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec13[i] = ((int(((fRec12[i] - fRec12[i-1]) < 0)))?(1 - iRec13[i-1]):iRec13[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec13_perm[i]=iRec13_tmp[count+i];
			
			// LOOP 0x55f852c38d30
			// pre processing
			for (int i=0; i<4; i++) iRec19_tmp[i]=iRec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec19[i] = ((int(((fRec18[i] - fRec18[i-1]) < 0)))?(1 - iRec19[i-1]):iRec19[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec19_perm[i]=iRec19_tmp[count+i];
			
			// LOOP 0x55f852c42d80
			// pre processing
			for (int i=0; i<4; i++) iRec25_tmp[i]=iRec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec25[i] = ((int(((fRec24[i] - fRec24[i-1]) < 0)))?(1 - iRec25[i-1]):iRec25[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec25_perm[i]=iRec25_tmp[count+i];
			
			// LOOP 0x55f852c4cd50
			// pre processing
			for (int i=0; i<4; i++) iRec31_tmp[i]=iRec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec31[i] = ((int(((fRec30[i] - fRec30[i-1]) < 0)))?(1 - iRec31[i-1]):iRec31[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec31_perm[i]=iRec31_tmp[count+i];
			
			// LOOP 0x55f852c570f0
			// pre processing
			for (int i=0; i<4; i++) iRec37_tmp[i]=iRec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec37[i] = ((int(((fRec36[i] - fRec36[i-1]) < 0)))?(1 - iRec37[i-1]):iRec37[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec37_perm[i]=iRec37_tmp[count+i];
			
			// LOOP 0x55f852c611d0
			// pre processing
			for (int i=0; i<4; i++) iRec43_tmp[i]=iRec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec43[i] = ((int(((fRec42[i] - fRec42[i-1]) < 0)))?(1 - iRec43[i-1]):iRec43[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec43_perm[i]=iRec43_tmp[count+i];
			
			// LOOP 0x55f852c6b2b0
			// pre processing
			for (int i=0; i<4; i++) iRec49_tmp[i]=iRec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec49[i] = ((int(((fRec48[i] - fRec48[i-1]) < 0)))?(1 - iRec49[i-1]):iRec49[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec49_perm[i]=iRec49_tmp[count+i];
			
			// LOOP 0x55f852c753a0
			// pre processing
			for (int i=0; i<4; i++) iRec55_tmp[i]=iRec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec55[i] = ((int(((fRec54[i] - fRec54[i-1]) < 0)))?(1 - iRec55[i-1]):iRec55[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec55_perm[i]=iRec55_tmp[count+i];
			
			// LOOP 0x55f852c7f620
			// pre processing
			for (int i=0; i<4; i++) iRec61_tmp[i]=iRec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec61[i] = ((int(((fRec60[i] - fRec60[i-1]) < 0)))?(1 - iRec61[i-1]):iRec61[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec61_perm[i]=iRec61_tmp[count+i];
			
			// LOOP 0x55f852c897c0
			// pre processing
			for (int i=0; i<4; i++) iRec67_tmp[i]=iRec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec67[i] = ((int(((fRec66[i] - fRec66[i-1]) < 0)))?(1 - iRec67[i-1]):iRec67[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec67_perm[i]=iRec67_tmp[count+i];
			
			// LOOP 0x55f852c938a0
			// pre processing
			for (int i=0; i<4; i++) iRec73_tmp[i]=iRec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec73[i] = ((int(((fRec72[i] - fRec72[i-1]) < 0)))?(1 - iRec73[i-1]):iRec73[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec73_perm[i]=iRec73_tmp[count+i];
			
			// SECTION : 5
			// LOOP 0x55f852c25b40
			// pre processing
			for (int i=0; i<4; i++) fYec0_tmp[i]=fYec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec0[i] = (fRec5[i] + iRec7[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec0_perm[i]=fYec0_tmp[count+i];
			
			// LOOP 0x55f852c30170
			// pre processing
			for (int i=0; i<4; i++) fYec3_tmp[i]=fYec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec3[i] = (fRec12[i] + iRec13[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec3_perm[i]=fYec3_tmp[count+i];
			
			// LOOP 0x55f852c39ec0
			// pre processing
			for (int i=0; i<4; i++) fYec6_tmp[i]=fYec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec6[i] = (fRec18[i] + iRec19[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec6_perm[i]=fYec6_tmp[count+i];
			
			// LOOP 0x55f852c43ec0
			// pre processing
			for (int i=0; i<4; i++) fYec9_tmp[i]=fYec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec9[i] = (fRec24[i] + iRec25[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec9_perm[i]=fYec9_tmp[count+i];
			
			// LOOP 0x55f852c4de90
			// pre processing
			for (int i=0; i<4; i++) fYec12_tmp[i]=fYec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec12[i] = (fRec30[i] + iRec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec12_perm[i]=fYec12_tmp[count+i];
			
			// LOOP 0x55f852c58230
			// pre processing
			for (int i=0; i<4; i++) fYec15_tmp[i]=fYec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec15[i] = (fRec36[i] + iRec37[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec15_perm[i]=fYec15_tmp[count+i];
			
			// LOOP 0x55f852c62310
			// pre processing
			for (int i=0; i<4; i++) fYec18_tmp[i]=fYec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec18[i] = (fRec42[i] + iRec43[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec18_perm[i]=fYec18_tmp[count+i];
			
			// LOOP 0x55f852c6c3f0
			// pre processing
			for (int i=0; i<4; i++) fYec21_tmp[i]=fYec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec21[i] = (fRec48[i] + iRec49[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec21_perm[i]=fYec21_tmp[count+i];
			
			// LOOP 0x55f852c764e0
			// pre processing
			for (int i=0; i<4; i++) fYec24_tmp[i]=fYec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec24[i] = (fRec54[i] + iRec55[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec24_perm[i]=fYec24_tmp[count+i];
			
			// LOOP 0x55f852c80760
			// pre processing
			for (int i=0; i<4; i++) fYec27_tmp[i]=fYec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec27[i] = (fRec60[i] + iRec61[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec27_perm[i]=fYec27_tmp[count+i];
			
			// LOOP 0x55f852c8a900
			// pre processing
			for (int i=0; i<4; i++) fYec30_tmp[i]=fYec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec30[i] = (fRec66[i] + iRec67[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec30_perm[i]=fYec30_tmp[count+i];
			
			// LOOP 0x55f852c949e0
			// pre processing
			for (int i=0; i<4; i++) fYec33_tmp[i]=fYec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec33[i] = (fRec72[i] + iRec73[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec33_perm[i]=fYec33_tmp[count+i];
			
			// SECTION : 6
			// LOOP 0x55f852c26520
			// exec code
			for (int i=0; i<count; i++) {
				fZec2[i] = (0.5f * fYec0[i]);
			}
			
			// LOOP 0x55f852c30a40
			// exec code
			for (int i=0; i<count; i++) {
				fZec6[i] = (0.5f * fYec3[i]);
			}
			
			// LOOP 0x55f852c3a790
			// exec code
			for (int i=0; i<count; i++) {
				fZec10[i] = (0.5f * fYec6[i]);
			}
			
			// LOOP 0x55f852c44790
			// exec code
			for (int i=0; i<count; i++) {
				fZec14[i] = (0.5f * fYec9[i]);
			}
			
			// LOOP 0x55f852c4e790
			// exec code
			for (int i=0; i<count; i++) {
				fZec18[i] = (0.5f * fYec12[i]);
			}
			
			// LOOP 0x55f852c58b30
			// exec code
			for (int i=0; i<count; i++) {
				fZec22[i] = (0.5f * fYec15[i]);
			}
			
			// LOOP 0x55f852c62c10
			// exec code
			for (int i=0; i<count; i++) {
				fZec26[i] = (0.5f * fYec18[i]);
			}
			
			// LOOP 0x55f852c6ccf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec30[i] = (0.5f * fYec21[i]);
			}
			
			// LOOP 0x55f852c76de0
			// exec code
			for (int i=0; i<count; i++) {
				fZec34[i] = (0.5f * fYec24[i]);
			}
			
			// LOOP 0x55f852c81060
			// exec code
			for (int i=0; i<count; i++) {
				fZec38[i] = (0.5f * fYec27[i]);
			}
			
			// LOOP 0x55f852c8b200
			// exec code
			for (int i=0; i<count; i++) {
				fZec42[i] = (0.5f * fYec30[i]);
			}
			
			// LOOP 0x55f852c952e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec46[i] = (0.5f * fYec33[i]);
			}
			
			// SECTION : 7
			// LOOP 0x55f852c1d190
			// pre processing
			for (int i=0; i<4; i++) iRec4_tmp[i]=iRec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec4[i] = ((int(((fZec2[i] - (0.5f * fYec0[i-1])) < 0)))?(1 - iRec4[i-1]):iRec4[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec4_perm[i]=iRec4_tmp[count+i];
			
			// LOOP 0x55f852c2cba0
			// pre processing
			for (int i=0; i<4; i++) iRec11_tmp[i]=iRec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec11[i] = ((int(((fZec6[i] - (0.5f * fYec3[i-1])) < 0)))?(1 - iRec11[i-1]):iRec11[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec11_perm[i]=iRec11_tmp[count+i];
			
			// LOOP 0x55f852c36880
			// pre processing
			for (int i=0; i<4; i++) iRec17_tmp[i]=iRec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec17[i] = ((int(((fZec10[i] - (0.5f * fYec6[i-1])) < 0)))?(1 - iRec17[i-1]):iRec17[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec17_perm[i]=iRec17_tmp[count+i];
			
			// LOOP 0x55f852c40800
			// pre processing
			for (int i=0; i<4; i++) iRec23_tmp[i]=iRec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec23[i] = ((int(((fZec14[i] - (0.5f * fYec9[i-1])) < 0)))?(1 - iRec23[i-1]):iRec23[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec23_perm[i]=iRec23_tmp[count+i];
			
			// LOOP 0x55f852c4a7d0
			// pre processing
			for (int i=0; i<4; i++) iRec29_tmp[i]=iRec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec29[i] = ((int(((fZec18[i] - (0.5f * fYec12[i-1])) < 0)))?(1 - iRec29[i-1]):iRec29[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec29_perm[i]=iRec29_tmp[count+i];
			
			// LOOP 0x55f852c54b70
			// pre processing
			for (int i=0; i<4; i++) iRec35_tmp[i]=iRec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec35[i] = ((int(((fZec22[i] - (0.5f * fYec15[i-1])) < 0)))?(1 - iRec35[i-1]):iRec35[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec35_perm[i]=iRec35_tmp[count+i];
			
			// LOOP 0x55f852c5ec50
			// pre processing
			for (int i=0; i<4; i++) iRec41_tmp[i]=iRec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec41[i] = ((int(((fZec26[i] - (0.5f * fYec18[i-1])) < 0)))?(1 - iRec41[i-1]):iRec41[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec41_perm[i]=iRec41_tmp[count+i];
			
			// LOOP 0x55f852c68d30
			// pre processing
			for (int i=0; i<4; i++) iRec47_tmp[i]=iRec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec47[i] = ((int(((fZec30[i] - (0.5f * fYec21[i-1])) < 0)))?(1 - iRec47[i-1]):iRec47[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec47_perm[i]=iRec47_tmp[count+i];
			
			// LOOP 0x55f852c72e20
			// pre processing
			for (int i=0; i<4; i++) iRec53_tmp[i]=iRec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec53[i] = ((int(((fZec34[i] - (0.5f * fYec24[i-1])) < 0)))?(1 - iRec53[i-1]):iRec53[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec53_perm[i]=iRec53_tmp[count+i];
			
			// LOOP 0x55f852c7d1c0
			// pre processing
			for (int i=0; i<4; i++) iRec59_tmp[i]=iRec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec59[i] = ((int(((fZec38[i] - (0.5f * fYec27[i-1])) < 0)))?(1 - iRec59[i-1]):iRec59[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec59_perm[i]=iRec59_tmp[count+i];
			
			// LOOP 0x55f852c87240
			// pre processing
			for (int i=0; i<4; i++) iRec65_tmp[i]=iRec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec65[i] = ((int(((fZec42[i] - (0.5f * fYec30[i-1])) < 0)))?(1 - iRec65[i-1]):iRec65[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec65_perm[i]=iRec65_tmp[count+i];
			
			// LOOP 0x55f852c912c0
			// pre processing
			for (int i=0; i<4; i++) iRec71_tmp[i]=iRec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec71[i] = ((int(((fZec46[i] - (0.5f * fYec33[i-1])) < 0)))?(1 - iRec71[i-1]):iRec71[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec71_perm[i]=iRec71_tmp[count+i];
			
			// SECTION : 8
			// LOOP 0x55f852c278c0
			// pre processing
			for (int i=0; i<4; i++) fYec1_tmp[i]=fYec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec1[i] = (iRec4[i] + fZec2[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec1_perm[i]=fYec1_tmp[count+i];
			
			// LOOP 0x55f852c31e30
			// pre processing
			for (int i=0; i<4; i++) fYec4_tmp[i]=fYec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec4[i] = (iRec11[i] + fZec6[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec4_perm[i]=fYec4_tmp[count+i];
			
			// LOOP 0x55f852c3bbf0
			// pre processing
			for (int i=0; i<4; i++) fYec7_tmp[i]=fYec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec7[i] = (iRec17[i] + fZec10[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec7_perm[i]=fYec7_tmp[count+i];
			
			// LOOP 0x55f852c45b90
			// pre processing
			for (int i=0; i<4; i++) fYec10_tmp[i]=fYec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec10[i] = (iRec23[i] + fZec14[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec10_perm[i]=fYec10_tmp[count+i];
			
			// LOOP 0x55f852c4fb80
			// pre processing
			for (int i=0; i<4; i++) fYec13_tmp[i]=fYec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec13[i] = (iRec29[i] + fZec18[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec13_perm[i]=fYec13_tmp[count+i];
			
			// LOOP 0x55f852c59f20
			// pre processing
			for (int i=0; i<4; i++) fYec16_tmp[i]=fYec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec16[i] = (iRec35[i] + fZec22[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec16_perm[i]=fYec16_tmp[count+i];
			
			// LOOP 0x55f852c64000
			// pre processing
			for (int i=0; i<4; i++) fYec19_tmp[i]=fYec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec19[i] = (iRec41[i] + fZec26[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec19_perm[i]=fYec19_tmp[count+i];
			
			// LOOP 0x55f852c6e0e0
			// pre processing
			for (int i=0; i<4; i++) fYec22_tmp[i]=fYec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec22[i] = (iRec47[i] + fZec30[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec22_perm[i]=fYec22_tmp[count+i];
			
			// LOOP 0x55f852c781d0
			// pre processing
			for (int i=0; i<4; i++) fYec25_tmp[i]=fYec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec25[i] = (iRec53[i] + fZec34[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec25_perm[i]=fYec25_tmp[count+i];
			
			// LOOP 0x55f852c82510
			// pre processing
			for (int i=0; i<4; i++) fYec28_tmp[i]=fYec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec28[i] = (iRec59[i] + fZec38[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec28_perm[i]=fYec28_tmp[count+i];
			
			// LOOP 0x55f852c8c5f0
			// pre processing
			for (int i=0; i<4; i++) fYec31_tmp[i]=fYec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec31[i] = (iRec65[i] + fZec42[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec31_perm[i]=fYec31_tmp[count+i];
			
			// LOOP 0x55f852c966d0
			// pre processing
			for (int i=0; i<4; i++) fYec34_tmp[i]=fYec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec34[i] = (iRec71[i] + fZec46[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec34_perm[i]=fYec34_tmp[count+i];
			
			// SECTION : 9
			// LOOP 0x55f852c281b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec3[i] = (0.5f * fYec1[i]);
			}
			
			// LOOP 0x55f852c32720
			// exec code
			for (int i=0; i<count; i++) {
				fZec7[i] = (0.5f * fYec4[i]);
			}
			
			// LOOP 0x55f852c3c4e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec11[i] = (0.5f * fYec7[i]);
			}
			
			// LOOP 0x55f852c464b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec15[i] = (0.5f * fYec10[i]);
			}
			
			// LOOP 0x55f852c504a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec19[i] = (0.5f * fYec13[i]);
			}
			
			// LOOP 0x55f852c5a840
			// exec code
			for (int i=0; i<count; i++) {
				fZec23[i] = (0.5f * fYec16[i]);
			}
			
			// LOOP 0x55f852c64920
			// exec code
			for (int i=0; i<count; i++) {
				fZec27[i] = (0.5f * fYec19[i]);
			}
			
			// LOOP 0x55f852c6ea00
			// exec code
			for (int i=0; i<count; i++) {
				fZec31[i] = (0.5f * fYec22[i]);
			}
			
			// LOOP 0x55f852c78af0
			// exec code
			for (int i=0; i<count; i++) {
				fZec35[i] = (0.5f * fYec25[i]);
			}
			
			// LOOP 0x55f852c82e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec39[i] = (0.5f * fYec28[i]);
			}
			
			// LOOP 0x55f852c8cf10
			// exec code
			for (int i=0; i<count; i++) {
				fZec43[i] = (0.5f * fYec31[i]);
			}
			
			// LOOP 0x55f852c96ff0
			// exec code
			for (int i=0; i<count; i++) {
				fZec47[i] = (0.5f * fYec34[i]);
			}
			
			// SECTION : 10
			// LOOP 0x55f852c1cdf0
			// pre processing
			for (int i=0; i<4; i++) iRec3_tmp[i]=iRec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec3[i] = ((int(((fZec3[i] - (0.5f * fYec1[i-1])) < 0)))?(1 - iRec3[i-1]):iRec3[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec3_perm[i]=iRec3_tmp[count+i];
			
			// LOOP 0x55f852c2c7c0
			// pre processing
			for (int i=0; i<4; i++) iRec10_tmp[i]=iRec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec10[i] = ((int(((fZec7[i] - (0.5f * fYec4[i-1])) < 0)))?(1 - iRec10[i-1]):iRec10[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec10_perm[i]=iRec10_tmp[count+i];
			
			// LOOP 0x55f852c364a0
			// pre processing
			for (int i=0; i<4; i++) iRec16_tmp[i]=iRec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec16[i] = ((int(((fZec11[i] - (0.5f * fYec7[i-1])) < 0)))?(1 - iRec16[i-1]):iRec16[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec16_perm[i]=iRec16_tmp[count+i];
			
			// LOOP 0x55f852c40420
			// pre processing
			for (int i=0; i<4; i++) iRec22_tmp[i]=iRec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec22[i] = ((int(((fZec15[i] - (0.5f * fYec10[i-1])) < 0)))?(1 - iRec22[i-1]):iRec22[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec22_perm[i]=iRec22_tmp[count+i];
			
			// LOOP 0x55f852c4a3f0
			// pre processing
			for (int i=0; i<4; i++) iRec28_tmp[i]=iRec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec28[i] = ((int(((fZec19[i] - (0.5f * fYec13[i-1])) < 0)))?(1 - iRec28[i-1]):iRec28[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec28_perm[i]=iRec28_tmp[count+i];
			
			// LOOP 0x55f852c54790
			// pre processing
			for (int i=0; i<4; i++) iRec34_tmp[i]=iRec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec34[i] = ((int(((fZec23[i] - (0.5f * fYec16[i-1])) < 0)))?(1 - iRec34[i-1]):iRec34[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec34_perm[i]=iRec34_tmp[count+i];
			
			// LOOP 0x55f852c5e870
			// pre processing
			for (int i=0; i<4; i++) iRec40_tmp[i]=iRec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec40[i] = ((int(((fZec27[i] - (0.5f * fYec19[i-1])) < 0)))?(1 - iRec40[i-1]):iRec40[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec40_perm[i]=iRec40_tmp[count+i];
			
			// LOOP 0x55f852c68950
			// pre processing
			for (int i=0; i<4; i++) iRec46_tmp[i]=iRec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec46[i] = ((int(((fZec31[i] - (0.5f * fYec22[i-1])) < 0)))?(1 - iRec46[i-1]):iRec46[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec46_perm[i]=iRec46_tmp[count+i];
			
			// LOOP 0x55f852c72a40
			// pre processing
			for (int i=0; i<4; i++) iRec52_tmp[i]=iRec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec52[i] = ((int(((fZec35[i] - (0.5f * fYec25[i-1])) < 0)))?(1 - iRec52[i-1]):iRec52[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec52_perm[i]=iRec52_tmp[count+i];
			
			// LOOP 0x55f852c7cde0
			// pre processing
			for (int i=0; i<4; i++) iRec58_tmp[i]=iRec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec58[i] = ((int(((fZec39[i] - (0.5f * fYec28[i-1])) < 0)))?(1 - iRec58[i-1]):iRec58[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec58_perm[i]=iRec58_tmp[count+i];
			
			// LOOP 0x55f852c86e60
			// pre processing
			for (int i=0; i<4; i++) iRec64_tmp[i]=iRec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec64[i] = ((int(((fZec43[i] - (0.5f * fYec31[i-1])) < 0)))?(1 - iRec64[i-1]):iRec64[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec64_perm[i]=iRec64_tmp[count+i];
			
			// LOOP 0x55f852c90f40
			// pre processing
			for (int i=0; i<4; i++) iRec70_tmp[i]=iRec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec70[i] = ((int(((fZec47[i] - (0.5f * fYec34[i-1])) < 0)))?(1 - iRec70[i-1]):iRec70[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec70_perm[i]=iRec70_tmp[count+i];
			
			// SECTION : 11
			// LOOP 0x55f852c29580
			// pre processing
			for (int i=0; i<4; i++) fYec2_tmp[i]=fYec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec2[i] = (iRec3[i] + fZec3[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec2_perm[i]=fYec2_tmp[count+i];
			
			// LOOP 0x55f852c33ae0
			// pre processing
			for (int i=0; i<4; i++) fYec5_tmp[i]=fYec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec5[i] = (iRec10[i] + fZec7[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec5_perm[i]=fYec5_tmp[count+i];
			
			// LOOP 0x55f852c3d910
			// pre processing
			for (int i=0; i<4; i++) fYec8_tmp[i]=fYec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec8[i] = (iRec16[i] + fZec11[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec8_perm[i]=fYec8_tmp[count+i];
			
			// LOOP 0x55f852c478d0
			// pre processing
			for (int i=0; i<4; i++) fYec11_tmp[i]=fYec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec11[i] = (iRec22[i] + fZec15[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec11_perm[i]=fYec11_tmp[count+i];
			
			// LOOP 0x55f852c518c0
			// pre processing
			for (int i=0; i<4; i++) fYec14_tmp[i]=fYec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec14[i] = (iRec28[i] + fZec19[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec14_perm[i]=fYec14_tmp[count+i];
			
			// LOOP 0x55f852c5bc60
			// pre processing
			for (int i=0; i<4; i++) fYec17_tmp[i]=fYec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec17[i] = (iRec34[i] + fZec23[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec17_perm[i]=fYec17_tmp[count+i];
			
			// LOOP 0x55f852c65d40
			// pre processing
			for (int i=0; i<4; i++) fYec20_tmp[i]=fYec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec20[i] = (iRec40[i] + fZec27[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec20_perm[i]=fYec20_tmp[count+i];
			
			// LOOP 0x55f852c6fe20
			// pre processing
			for (int i=0; i<4; i++) fYec23_tmp[i]=fYec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec23[i] = (iRec46[i] + fZec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec23_perm[i]=fYec23_tmp[count+i];
			
			// LOOP 0x55f852c79f10
			// pre processing
			for (int i=0; i<4; i++) fYec26_tmp[i]=fYec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec26[i] = (iRec52[i] + fZec35[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec26_perm[i]=fYec26_tmp[count+i];
			
			// LOOP 0x55f852c84250
			// pre processing
			for (int i=0; i<4; i++) fYec29_tmp[i]=fYec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec29[i] = (iRec58[i] + fZec39[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec29_perm[i]=fYec29_tmp[count+i];
			
			// LOOP 0x55f852c8e330
			// pre processing
			for (int i=0; i<4; i++) fYec32_tmp[i]=fYec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec32[i] = (iRec64[i] + fZec43[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec32_perm[i]=fYec32_tmp[count+i];
			
			// LOOP 0x55f852c98410
			// pre processing
			for (int i=0; i<4; i++) fYec35_tmp[i]=fYec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec35[i] = (iRec70[i] + fZec47[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec35_perm[i]=fYec35_tmp[count+i];
			
			// SECTION : 12
			// LOOP 0x55f852c29460
			// exec code
			for (int i=0; i<count; i++) {
				fZec4[i] = (0.5f * fYec2[i]);
			}
			
			// LOOP 0x55f852c339c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec8[i] = (0.5f * fYec5[i]);
			}
			
			// LOOP 0x55f852c3d7f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec12[i] = (0.5f * fYec8[i]);
			}
			
			// LOOP 0x55f852c477b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec16[i] = (0.5f * fYec11[i]);
			}
			
			// LOOP 0x55f852c517a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec20[i] = (0.5f * fYec14[i]);
			}
			
			// LOOP 0x55f852c5bb40
			// exec code
			for (int i=0; i<count; i++) {
				fZec24[i] = (0.5f * fYec17[i]);
			}
			
			// LOOP 0x55f852c65c20
			// exec code
			for (int i=0; i<count; i++) {
				fZec28[i] = (0.5f * fYec20[i]);
			}
			
			// LOOP 0x55f852c6fd00
			// exec code
			for (int i=0; i<count; i++) {
				fZec32[i] = (0.5f * fYec23[i]);
			}
			
			// LOOP 0x55f852c79df0
			// exec code
			for (int i=0; i<count; i++) {
				fZec36[i] = (0.5f * fYec26[i]);
			}
			
			// LOOP 0x55f852c84130
			// exec code
			for (int i=0; i<count; i++) {
				fZec40[i] = (0.5f * fYec29[i]);
			}
			
			// LOOP 0x55f852c8e210
			// exec code
			for (int i=0; i<count; i++) {
				fZec44[i] = (0.5f * fYec32[i]);
			}
			
			// LOOP 0x55f852c982f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec48[i] = (0.5f * fYec35[i]);
			}
			
			// SECTION : 13
			// LOOP 0x55f852dbf6c0
			// pre processing
			for (int i=0; i<4; i++) iRec138_tmp[i]=iRec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec138[i] = ((int(((fZec32[i] - (0.5f * fYec23[i-1])) < 0)))?(1 - iRec138[i-1]):iRec138[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec138_perm[i]=iRec138_tmp[count+i];
			
			// LOOP 0x55f852dc6290
			// pre processing
			for (int i=0; i<4; i++) iRec142_tmp[i]=iRec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec142[i] = ((int(((fZec36[i] - (0.5f * fYec26[i-1])) < 0)))?(1 - iRec142[i-1]):iRec142[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec142_perm[i]=iRec142_tmp[count+i];
			
			// LOOP 0x55f852dcd200
			// pre processing
			for (int i=0; i<4; i++) iRec146_tmp[i]=iRec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec146[i] = ((int(((fZec40[i] - (0.5f * fYec29[i-1])) < 0)))?(1 - iRec146[i-1]):iRec146[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec146_perm[i]=iRec146_tmp[count+i];
			
			// LOOP 0x55f852dd3e90
			// pre processing
			for (int i=0; i<4; i++) iRec150_tmp[i]=iRec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec150[i] = ((int(((fZec44[i] - (0.5f * fYec32[i-1])) < 0)))?(1 - iRec150[i-1]):iRec150[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec150_perm[i]=iRec150_tmp[count+i];
			
			// LOOP 0x55f852ddab20
			// pre processing
			for (int i=0; i<4; i++) iRec154_tmp[i]=iRec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec154[i] = ((int(((fZec48[i] - (0.5f * fYec35[i-1])) < 0)))?(1 - iRec154[i-1]):iRec154[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec154_perm[i]=iRec154_tmp[count+i];
			
			// LOOP 0x55f852de13d0
			// pre processing
			for (int i=0; i<4; i++) iRec157_tmp[i]=iRec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec157[i] = ((int(((fZec4[i] - (0.5f * fYec2[i-1])) < 0)))?(1 - iRec157[i-1]):iRec157[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec157_perm[i]=iRec157_tmp[count+i];
			
			// LOOP 0x55f852de5f00
			// pre processing
			for (int i=0; i<4; i++) iRec160_tmp[i]=iRec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec160[i] = ((int(((fZec8[i] - (0.5f * fYec5[i-1])) < 0)))?(1 - iRec160[i-1]):iRec160[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec160_perm[i]=iRec160_tmp[count+i];
			
			// LOOP 0x55f852dea750
			// pre processing
			for (int i=0; i<4; i++) iRec163_tmp[i]=iRec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec163[i] = ((int(((fZec12[i] - (0.5f * fYec8[i-1])) < 0)))?(1 - iRec163[i-1]):iRec163[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec163_perm[i]=iRec163_tmp[count+i];
			
			// LOOP 0x55f852deefa0
			// pre processing
			for (int i=0; i<4; i++) iRec166_tmp[i]=iRec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec166[i] = ((int(((fZec16[i] - (0.5f * fYec11[i-1])) < 0)))?(1 - iRec166[i-1]):iRec166[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec166_perm[i]=iRec166_tmp[count+i];
			
			// LOOP 0x55f852df3800
			// pre processing
			for (int i=0; i<4; i++) iRec169_tmp[i]=iRec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec169[i] = ((int(((fZec20[i] - (0.5f * fYec14[i-1])) < 0)))?(1 - iRec169[i-1]):iRec169[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec169_perm[i]=iRec169_tmp[count+i];
			
			// LOOP 0x55f852df8340
			// pre processing
			for (int i=0; i<4; i++) iRec172_tmp[i]=iRec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec172[i] = ((int(((fZec24[i] - (0.5f * fYec17[i-1])) < 0)))?(1 - iRec172[i-1]):iRec172[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec172_perm[i]=iRec172_tmp[count+i];
			
			// LOOP 0x55f852dfcba0
			// pre processing
			for (int i=0; i<4; i++) iRec175_tmp[i]=iRec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec175[i] = ((int(((fZec28[i] - (0.5f * fYec20[i-1])) < 0)))?(1 - iRec175[i-1]):iRec175[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec175_perm[i]=iRec175_tmp[count+i];
			
			// SECTION : 14
			// LOOP 0x55f852dc0a80
			// pre processing
			for (int i=0; i<4; i++) fYec49_tmp[i]=fYec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec49[i] = (iRec138[i] + fZec32[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec49_perm[i]=fYec49_tmp[count+i];
			
			// LOOP 0x55f852dc7ae0
			// pre processing
			for (int i=0; i<4; i++) fYec51_tmp[i]=fYec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec51[i] = (iRec142[i] + fZec36[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec51_perm[i]=fYec51_tmp[count+i];
			
			// LOOP 0x55f852dcea50
			// pre processing
			for (int i=0; i<4; i++) fYec53_tmp[i]=fYec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec53[i] = (iRec146[i] + fZec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec53_perm[i]=fYec53_tmp[count+i];
			
			// LOOP 0x55f852dd56e0
			// pre processing
			for (int i=0; i<4; i++) fYec55_tmp[i]=fYec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec55[i] = (iRec150[i] + fZec44[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec55_perm[i]=fYec55_tmp[count+i];
			
			// LOOP 0x55f852ddc370
			// pre processing
			for (int i=0; i<4; i++) fYec57_tmp[i]=fYec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec57[i] = (iRec154[i] + fZec48[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec57_perm[i]=fYec57_tmp[count+i];
			
			// LOOP 0x55f852de2b20
			// pre processing
			for (int i=0; i<4; i++) fYec59_tmp[i]=fYec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec59[i] = (iRec157[i] + fZec4[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec59_perm[i]=fYec59_tmp[count+i];
			
			// LOOP 0x55f852de7650
			// pre processing
			for (int i=0; i<4; i++) fYec60_tmp[i]=fYec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec60[i] = (iRec160[i] + fZec8[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec60_perm[i]=fYec60_tmp[count+i];
			
			// LOOP 0x55f852debea0
			// pre processing
			for (int i=0; i<4; i++) fYec61_tmp[i]=fYec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec61[i] = (iRec163[i] + fZec12[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec61_perm[i]=fYec61_tmp[count+i];
			
			// LOOP 0x55f852df0700
			// pre processing
			for (int i=0; i<4; i++) fYec62_tmp[i]=fYec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec62[i] = (iRec166[i] + fZec16[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec62_perm[i]=fYec62_tmp[count+i];
			
			// LOOP 0x55f852df4f60
			// pre processing
			for (int i=0; i<4; i++) fYec63_tmp[i]=fYec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec63[i] = (iRec169[i] + fZec20[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec63_perm[i]=fYec63_tmp[count+i];
			
			// LOOP 0x55f852df9aa0
			// pre processing
			for (int i=0; i<4; i++) fYec64_tmp[i]=fYec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec64[i] = (iRec172[i] + fZec24[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec64_perm[i]=fYec64_tmp[count+i];
			
			// LOOP 0x55f852dfe300
			// pre processing
			for (int i=0; i<4; i++) fYec65_tmp[i]=fYec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec65[i] = (iRec175[i] + fZec28[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec65_perm[i]=fYec65_tmp[count+i];
			
			// SECTION : 15
			// LOOP 0x55f852dc1370
			// exec code
			for (int i=0; i<count; i++) {
				fZec158[i] = (0.5f * fYec49[i]);
			}
			
			// LOOP 0x55f852dc8450
			// exec code
			for (int i=0; i<count; i++) {
				fZec160[i] = (0.5f * fYec51[i]);
			}
			
			// LOOP 0x55f852dcf3c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec162[i] = (0.5f * fYec53[i]);
			}
			
			// LOOP 0x55f852dd6050
			// exec code
			for (int i=0; i<count; i++) {
				fZec164[i] = (0.5f * fYec55[i]);
			}
			
			// LOOP 0x55f852ddcce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec166[i] = (0.5f * fYec57[i]);
			}
			
			// LOOP 0x55f852de2a00
			// exec code
			for (int i=0; i<count; i++) {
				fZec168[i] = (0.5f * fYec59[i]);
			}
			
			// LOOP 0x55f852de7530
			// exec code
			for (int i=0; i<count; i++) {
				fZec169[i] = (0.5f * fYec60[i]);
			}
			
			// LOOP 0x55f852debd80
			// exec code
			for (int i=0; i<count; i++) {
				fZec170[i] = (0.5f * fYec61[i]);
			}
			
			// LOOP 0x55f852df05e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec171[i] = (0.5f * fYec62[i]);
			}
			
			// LOOP 0x55f852df4e40
			// exec code
			for (int i=0; i<count; i++) {
				fZec172[i] = (0.5f * fYec63[i]);
			}
			
			// LOOP 0x55f852df9980
			// exec code
			for (int i=0; i<count; i++) {
				fZec173[i] = (0.5f * fYec64[i]);
			}
			
			// LOOP 0x55f852dfe1e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec174[i] = (0.5f * fYec65[i]);
			}
			
			// SECTION : 16
			// LOOP 0x55f852d95e60
			// pre processing
			for (int i=0; i<4; i++) iRec137_tmp[i]=iRec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec137[i] = ((int(((fZec158[i] - (0.5f * fYec49[i-1])) < 0)))?(1 - iRec137[i-1]):iRec137[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec137_perm[i]=iRec137_tmp[count+i];
			
			// LOOP 0x55f852dc5eb0
			// pre processing
			for (int i=0; i<4; i++) iRec141_tmp[i]=iRec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec141[i] = ((int(((fZec160[i] - (0.5f * fYec51[i-1])) < 0)))?(1 - iRec141[i-1]):iRec141[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec141_perm[i]=iRec141_tmp[count+i];
			
			// LOOP 0x55f852dcce20
			// pre processing
			for (int i=0; i<4; i++) iRec145_tmp[i]=iRec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec145[i] = ((int(((fZec162[i] - (0.5f * fYec53[i-1])) < 0)))?(1 - iRec145[i-1]):iRec145[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec145_perm[i]=iRec145_tmp[count+i];
			
			// LOOP 0x55f852dd3ab0
			// pre processing
			for (int i=0; i<4; i++) iRec149_tmp[i]=iRec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec149[i] = ((int(((fZec164[i] - (0.5f * fYec55[i-1])) < 0)))?(1 - iRec149[i-1]):iRec149[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec149_perm[i]=iRec149_tmp[count+i];
			
			// LOOP 0x55f852dda740
			// pre processing
			for (int i=0; i<4; i++) iRec153_tmp[i]=iRec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec153[i] = ((int(((fZec166[i] - (0.5f * fYec57[i-1])) < 0)))?(1 - iRec153[i-1]):iRec153[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec153_perm[i]=iRec153_tmp[count+i];
			
			// LOOP 0x55f852f03060
			// pre processing
			for (int i=0; i<4; i++) iRec191_tmp[i]=iRec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec191[i] = ((int(((fZec168[i] - (0.5f * fYec59[i-1])) < 0)))?(1 - iRec191[i-1]):iRec191[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec191_perm[i]=iRec191_tmp[count+i];
			
			// LOOP 0x55f852f0b840
			// pre processing
			for (int i=0; i<4; i++) iRec196_tmp[i]=iRec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec196[i] = ((int(((fZec169[i] - (0.5f * fYec60[i-1])) < 0)))?(1 - iRec196[i-1]):iRec196[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec196_perm[i]=iRec196_tmp[count+i];
			
			// LOOP 0x55f852f141a0
			// pre processing
			for (int i=0; i<4; i++) iRec201_tmp[i]=iRec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec201[i] = ((int(((fZec170[i] - (0.5f * fYec61[i-1])) < 0)))?(1 - iRec201[i-1]):iRec201[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec201_perm[i]=iRec201_tmp[count+i];
			
			// LOOP 0x55f852f1caa0
			// pre processing
			for (int i=0; i<4; i++) iRec206_tmp[i]=iRec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec206[i] = ((int(((fZec171[i] - (0.5f * fYec62[i-1])) < 0)))?(1 - iRec206[i-1]):iRec206[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec206_perm[i]=iRec206_tmp[count+i];
			
			// LOOP 0x55f852f253a0
			// pre processing
			for (int i=0; i<4; i++) iRec211_tmp[i]=iRec211_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec211[i] = ((int(((fZec172[i] - (0.5f * fYec63[i-1])) < 0)))?(1 - iRec211[i-1]):iRec211[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec211_perm[i]=iRec211_tmp[count+i];
			
			// LOOP 0x55f852f2dca0
			// pre processing
			for (int i=0; i<4; i++) iRec216_tmp[i]=iRec216_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec216[i] = ((int(((fZec173[i] - (0.5f * fYec64[i-1])) < 0)))?(1 - iRec216[i-1]):iRec216[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec216_perm[i]=iRec216_tmp[count+i];
			
			// LOOP 0x55f852f365a0
			// pre processing
			for (int i=0; i<4; i++) iRec221_tmp[i]=iRec221_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec221[i] = ((int(((fZec174[i] - (0.5f * fYec65[i-1])) < 0)))?(1 - iRec221[i-1]):iRec221[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec221_perm[i]=iRec221_tmp[count+i];
			
			// SECTION : 17
			// LOOP 0x55f852c1cb50
			// pre processing
			for (int i=0; i<4; i++) fRec2_tmp[i]=fRec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec2[i] = (fRec2[i-1] + (fConst3 * (yc20_get_sample(fZec4[i], 0, 0) - fRec2[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec2_perm[i]=fRec2_tmp[count+i];
			
			// LOOP 0x55f852c2c3e0
			// pre processing
			for (int i=0; i<4; i++) fRec9_tmp[i]=fRec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec9[i] = (fRec9[i-1] + (fConst3 * (yc20_get_sample(fZec8[i], 1, 0) - fRec9[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec9_perm[i]=fRec9_tmp[count+i];
			
			// LOOP 0x55f852c360c0
			// pre processing
			for (int i=0; i<4; i++) fRec15_tmp[i]=fRec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec15[i] = (fRec15[i-1] + (fConst3 * (yc20_get_sample(fZec12[i], 2, 0) - fRec15[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec15_perm[i]=fRec15_tmp[count+i];
			
			// LOOP 0x55f852c40040
			// pre processing
			for (int i=0; i<4; i++) fRec21_tmp[i]=fRec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec21[i] = (fRec21[i-1] + (fConst3 * (yc20_get_sample(fZec16[i], 3, 0) - fRec21[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec21_perm[i]=fRec21_tmp[count+i];
			
			// LOOP 0x55f852c4a010
			// pre processing
			for (int i=0; i<4; i++) fRec27_tmp[i]=fRec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec27[i] = (fRec27[i-1] + (fConst6 * (yc20_get_sample(fZec20[i], 4, 0) - fRec27[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec27_perm[i]=fRec27_tmp[count+i];
			
			// LOOP 0x55f852dc2710
			// pre processing
			for (int i=0; i<4; i++) fYec50_tmp[i]=fYec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec50[i] = (iRec137[i] + fZec158[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec50_perm[i]=fYec50_tmp[count+i];
			
			// LOOP 0x55f852dc9a40
			// pre processing
			for (int i=0; i<4; i++) fYec52_tmp[i]=fYec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec52[i] = (iRec141[i] + fZec160[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec52_perm[i]=fYec52_tmp[count+i];
			
			// LOOP 0x55f852dd09b0
			// pre processing
			for (int i=0; i<4; i++) fYec54_tmp[i]=fYec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec54[i] = (iRec145[i] + fZec162[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec54_perm[i]=fYec54_tmp[count+i];
			
			// LOOP 0x55f852dd7640
			// pre processing
			for (int i=0; i<4; i++) fYec56_tmp[i]=fYec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec56[i] = (iRec149[i] + fZec164[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec56_perm[i]=fYec56_tmp[count+i];
			
			// LOOP 0x55f852dde2d0
			// pre processing
			for (int i=0; i<4; i++) fYec58_tmp[i]=fYec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec58[i] = (iRec153[i] + fZec166[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec58_perm[i]=fYec58_tmp[count+i];
			
			// LOOP 0x55f852f04460
			// pre processing
			for (int i=0; i<4; i++) fYec67_tmp[i]=fYec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec67[i] = (iRec191[i] + fZec168[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec67_perm[i]=fYec67_tmp[count+i];
			
			// LOOP 0x55f852f0d1e0
			// pre processing
			for (int i=0; i<4; i++) fYec69_tmp[i]=fYec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec69[i] = (iRec196[i] + fZec169[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec69_perm[i]=fYec69_tmp[count+i];
			
			// LOOP 0x55f852f15ae0
			// pre processing
			for (int i=0; i<4; i++) fYec71_tmp[i]=fYec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec71[i] = (iRec201[i] + fZec170[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec71_perm[i]=fYec71_tmp[count+i];
			
			// LOOP 0x55f852f1e3e0
			// pre processing
			for (int i=0; i<4; i++) fYec73_tmp[i]=fYec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec73[i] = (iRec206[i] + fZec171[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec73_perm[i]=fYec73_tmp[count+i];
			
			// LOOP 0x55f852f26ce0
			// pre processing
			for (int i=0; i<4; i++) fYec75_tmp[i]=fYec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec75[i] = (iRec211[i] + fZec172[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec75_perm[i]=fYec75_tmp[count+i];
			
			// LOOP 0x55f852f2f5e0
			// pre processing
			for (int i=0; i<4; i++) fYec77_tmp[i]=fYec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec77[i] = (iRec216[i] + fZec173[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec77_perm[i]=fYec77_tmp[count+i];
			
			// LOOP 0x55f852f37ee0
			// pre processing
			for (int i=0; i<4; i++) fYec79_tmp[i]=fYec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec79[i] = (iRec221[i] + fZec174[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec79_perm[i]=fYec79_tmp[count+i];
			
			// SECTION : 18
			// LOOP 0x55f852c1c8b0
			// pre processing
			for (int i=0; i<4; i++) fRec1_tmp[i]=fRec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec1[i] = (fConst5 * (fRec1[i-1] + (fRec2[i] - fRec2[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec1_perm[i]=fRec1_tmp[count+i];
			
			// LOOP 0x55f852c2c0c0
			// pre processing
			for (int i=0; i<4; i++) fRec8_tmp[i]=fRec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec8[i] = (fConst5 * (fRec8[i-1] + (fRec9[i] - fRec9[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec8_perm[i]=fRec8_tmp[count+i];
			
			// LOOP 0x55f852c35dc0
			// pre processing
			for (int i=0; i<4; i++) fRec14_tmp[i]=fRec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec14[i] = (fConst5 * (fRec14[i-1] + (fRec15[i] - fRec15[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec14_perm[i]=fRec14_tmp[count+i];
			
			// LOOP 0x55f852c3fd80
			// pre processing
			for (int i=0; i<4; i++) fRec20_tmp[i]=fRec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec20[i] = (fConst5 * (fRec20[i-1] + (fRec21[i] - fRec21[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec20_perm[i]=fRec20_tmp[count+i];
			
			// LOOP 0x55f852c49d70
			// pre processing
			for (int i=0; i<4; i++) fRec26_tmp[i]=fRec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec26[i] = (fConst5 * (fRec26[i-1] + (fRec27[i] - fRec27[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec26_perm[i]=fRec26_tmp[count+i];
			
			// LOOP 0x55f852c543b0
			// pre processing
			for (int i=0; i<4; i++) fRec33_tmp[i]=fRec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec33[i] = (fRec33[i-1] + (fConst6 * (yc20_get_sample(fZec24[i], 5, 0) - fRec33[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec33_perm[i]=fRec33_tmp[count+i];
			
			// LOOP 0x55f852c5e490
			// pre processing
			for (int i=0; i<4; i++) fRec39_tmp[i]=fRec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec39[i] = (fRec39[i-1] + (fConst6 * (yc20_get_sample(fZec28[i], 6, 0) - fRec39[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec39_perm[i]=fRec39_tmp[count+i];
			
			// LOOP 0x55f852c68570
			// pre processing
			for (int i=0; i<4; i++) fRec45_tmp[i]=fRec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec45[i] = (fRec45[i-1] + (fConst6 * (yc20_get_sample(fZec32[i], 7, 0) - fRec45[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec45_perm[i]=fRec45_tmp[count+i];
			
			// LOOP 0x55f852c72660
			// pre processing
			for (int i=0; i<4; i++) fRec51_tmp[i]=fRec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec51[i] = (fRec51[i-1] + (fConst7 * (yc20_get_sample(fZec36[i], 8, 0) - fRec51[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec51_perm[i]=fRec51_tmp[count+i];
			
			// LOOP 0x55f852dc25f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec159[i] = (0.5f * fYec50[i]);
			}
			
			// LOOP 0x55f852dc9920
			// exec code
			for (int i=0; i<count; i++) {
				fZec161[i] = (0.5f * fYec52[i]);
			}
			
			// LOOP 0x55f852dd0890
			// exec code
			for (int i=0; i<count; i++) {
				fZec163[i] = (0.5f * fYec54[i]);
			}
			
			// LOOP 0x55f852dd7520
			// exec code
			for (int i=0; i<count; i++) {
				fZec165[i] = (0.5f * fYec56[i]);
			}
			
			// LOOP 0x55f852dde1b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec167[i] = (0.5f * fYec58[i]);
			}
			
			// LOOP 0x55f852f04d50
			// exec code
			for (int i=0; i<count; i++) {
				fZec180[i] = (0.5f * fYec67[i]);
			}
			
			// LOOP 0x55f852f0db50
			// exec code
			for (int i=0; i<count; i++) {
				fZec182[i] = (0.5f * fYec69[i]);
			}
			
			// LOOP 0x55f852f16450
			// exec code
			for (int i=0; i<count; i++) {
				fZec184[i] = (0.5f * fYec71[i]);
			}
			
			// LOOP 0x55f852f1ed50
			// exec code
			for (int i=0; i<count; i++) {
				fZec186[i] = (0.5f * fYec73[i]);
			}
			
			// LOOP 0x55f852f27650
			// exec code
			for (int i=0; i<count; i++) {
				fZec188[i] = (0.5f * fYec75[i]);
			}
			
			// LOOP 0x55f852f2ff50
			// exec code
			for (int i=0; i<count; i++) {
				fZec190[i] = (0.5f * fYec77[i]);
			}
			
			// LOOP 0x55f852f38850
			// exec code
			for (int i=0; i<count; i++) {
				fZec192[i] = (0.5f * fYec79[i]);
			}
			
			// SECTION : 19
			// LOOP 0x55f852c540f0
			// pre processing
			for (int i=0; i<4; i++) fRec32_tmp[i]=fRec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec32[i] = (fConst5 * (fRec32[i-1] + (fRec33[i] - fRec33[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec32_perm[i]=fRec32_tmp[count+i];
			
			// LOOP 0x55f852c5e1f0
			// pre processing
			for (int i=0; i<4; i++) fRec38_tmp[i]=fRec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec38[i] = (fConst5 * (fRec38[i-1] + (fRec39[i] - fRec39[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec38_perm[i]=fRec38_tmp[count+i];
			
			// LOOP 0x55f852c682d0
			// pre processing
			for (int i=0; i<4; i++) fRec44_tmp[i]=fRec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec44[i] = (fConst5 * (fRec44[i-1] + (fRec45[i] - fRec45[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec44_perm[i]=fRec44_tmp[count+i];
			
			// LOOP 0x55f852c723a0
			// pre processing
			for (int i=0; i<4; i++) fRec50_tmp[i]=fRec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec50[i] = (fConst5 * (fRec50[i-1] + (fRec51[i] - fRec51[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec50_perm[i]=fRec50_tmp[count+i];
			
			// LOOP 0x55f852c7ca00
			// pre processing
			for (int i=0; i<4; i++) fRec57_tmp[i]=fRec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec57[i] = (fRec57[i-1] + (fConst7 * (yc20_get_sample(fZec40[i], 9, 0) - fRec57[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec57_perm[i]=fRec57_tmp[count+i];
			
			// LOOP 0x55f852c86a80
			// pre processing
			for (int i=0; i<4; i++) fRec63_tmp[i]=fRec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec63[i] = (fRec63[i-1] + (fConst7 * (yc20_get_sample(fZec44[i], 10, 0) - fRec63[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec63_perm[i]=fRec63_tmp[count+i];
			
			// LOOP 0x55f852c90b60
			// pre processing
			for (int i=0; i<4; i++) fRec69_tmp[i]=fRec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec69[i] = (fRec69[i-1] + (fConst7 * (yc20_get_sample(fZec48[i], 11, 0) - fRec69[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec69_perm[i]=fRec69_tmp[count+i];
			
			// LOOP 0x55f852c9ac40
			// pre processing
			for (int i=0; i<4; i++) fRec75_tmp[i]=fRec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec75[i] = (fRec75[i-1] + (fConst8 * (yc20_get_sample(fZec3[i], 0, 0) - fRec75[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec75_perm[i]=fRec75_tmp[count+i];
			
			// LOOP 0x55f852d8a230
			// exec code
			for (int i=0; i<count; i++) {
				fZec124[i] = (fRec26[i] + (fRec20[i] + (fRec14[i] + (fRec1[i] + fRec8[i]))));
			}
			
			// LOOP 0x55f852f02c80
			// pre processing
			for (int i=0; i<4; i++) iRec190_tmp[i]=iRec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec190[i] = ((int(((fZec180[i] - (0.5f * fYec67[i-1])) < 0)))?(1 - iRec190[i-1]):iRec190[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec190_perm[i]=iRec190_tmp[count+i];
			
			// LOOP 0x55f852f0b430
			// pre processing
			for (int i=0; i<4; i++) iRec195_tmp[i]=iRec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec195[i] = ((int(((fZec182[i] - (0.5f * fYec69[i-1])) < 0)))?(1 - iRec195[i-1]):iRec195[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec195_perm[i]=iRec195_tmp[count+i];
			
			// LOOP 0x55f852f13d90
			// pre processing
			for (int i=0; i<4; i++) iRec200_tmp[i]=iRec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec200[i] = ((int(((fZec184[i] - (0.5f * fYec71[i-1])) < 0)))?(1 - iRec200[i-1]):iRec200[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec200_perm[i]=iRec200_tmp[count+i];
			
			// LOOP 0x55f852f1c690
			// pre processing
			for (int i=0; i<4; i++) iRec205_tmp[i]=iRec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec205[i] = ((int(((fZec186[i] - (0.5f * fYec73[i-1])) < 0)))?(1 - iRec205[i-1]):iRec205[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec205_perm[i]=iRec205_tmp[count+i];
			
			// LOOP 0x55f852f24f90
			// pre processing
			for (int i=0; i<4; i++) iRec210_tmp[i]=iRec210_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec210[i] = ((int(((fZec188[i] - (0.5f * fYec75[i-1])) < 0)))?(1 - iRec210[i-1]):iRec210[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec210_perm[i]=iRec210_tmp[count+i];
			
			// LOOP 0x55f852f2d890
			// pre processing
			for (int i=0; i<4; i++) iRec215_tmp[i]=iRec215_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec215[i] = ((int(((fZec190[i] - (0.5f * fYec77[i-1])) < 0)))?(1 - iRec215[i-1]):iRec215[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec215_perm[i]=iRec215_tmp[count+i];
			
			// LOOP 0x55f852f36190
			// pre processing
			for (int i=0; i<4; i++) iRec220_tmp[i]=iRec220_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec220[i] = ((int(((fZec192[i] - (0.5f * fYec79[i-1])) < 0)))?(1 - iRec220[i-1]):iRec220[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec220_perm[i]=iRec220_tmp[count+i];
			
			// LOOP 0x55f852f3ea90
			// pre processing
			for (int i=0; i<4; i++) iRec225_tmp[i]=iRec225_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec225[i] = ((int(((fZec159[i] - (0.5f * fYec50[i-1])) < 0)))?(1 - iRec225[i-1]):iRec225[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec225_perm[i]=iRec225_tmp[count+i];
			
			// LOOP 0x55f852f45140
			// pre processing
			for (int i=0; i<4; i++) iRec229_tmp[i]=iRec229_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec229[i] = ((int(((fZec161[i] - (0.5f * fYec52[i-1])) < 0)))?(1 - iRec229[i-1]):iRec229[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec229_perm[i]=iRec229_tmp[count+i];
			
			// LOOP 0x55f852f4bad0
			// pre processing
			for (int i=0; i<4; i++) iRec233_tmp[i]=iRec233_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec233[i] = ((int(((fZec163[i] - (0.5f * fYec54[i-1])) < 0)))?(1 - iRec233[i-1]):iRec233[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec233_perm[i]=iRec233_tmp[count+i];
			
			// LOOP 0x55f852f52180
			// pre processing
			for (int i=0; i<4; i++) iRec237_tmp[i]=iRec237_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec237[i] = ((int(((fZec165[i] - (0.5f * fYec56[i-1])) < 0)))?(1 - iRec237[i-1]):iRec237[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec237_perm[i]=iRec237_tmp[count+i];
			
			// LOOP 0x55f852f58920
			// pre processing
			for (int i=0; i<4; i++) iRec241_tmp[i]=iRec241_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec241[i] = ((int(((fZec167[i] - (0.5f * fYec58[i-1])) < 0)))?(1 - iRec241[i-1]):iRec241[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec241_perm[i]=iRec241_tmp[count+i];
			
			// SECTION : 20
			// LOOP 0x55f852c7c740
			// pre processing
			for (int i=0; i<4; i++) fRec56_tmp[i]=fRec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec56[i] = (fConst5 * (fRec56[i-1] + (fRec57[i] - fRec57[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec56_perm[i]=fRec56_tmp[count+i];
			
			// LOOP 0x55f852c867e0
			// pre processing
			for (int i=0; i<4; i++) fRec62_tmp[i]=fRec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec62[i] = (fConst5 * (fRec62[i-1] + (fRec63[i] - fRec63[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec62_perm[i]=fRec62_tmp[count+i];
			
			// LOOP 0x55f852c908c0
			// pre processing
			for (int i=0; i<4; i++) fRec68_tmp[i]=fRec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec68[i] = (fConst5 * (fRec68[i-1] + (fRec69[i] - fRec69[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec68_perm[i]=fRec68_tmp[count+i];
			
			// LOOP 0x55f852c9a9a0
			// pre processing
			for (int i=0; i<4; i++) fRec74_tmp[i]=fRec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec74[i] = (fConst5 * (fRec74[i-1] + (fRec75[i] - fRec75[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec74_perm[i]=fRec74_tmp[count+i];
			
			// LOOP 0x55f852c9d1b0
			// pre processing
			for (int i=0; i<4; i++) fRec77_tmp[i]=fRec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec77[i] = (fRec77[i-1] + (fConst8 * (yc20_get_sample(fZec7[i], 1, 0) - fRec77[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec77_perm[i]=fRec77_tmp[count+i];
			
			// LOOP 0x55f852c9f490
			// pre processing
			for (int i=0; i<4; i++) fRec79_tmp[i]=fRec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec79[i] = (fRec79[i-1] + (fConst8 * (yc20_get_sample(fZec11[i], 2, 0) - fRec79[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec79_perm[i]=fRec79_tmp[count+i];
			
			// LOOP 0x55f852ca1770
			// pre processing
			for (int i=0; i<4; i++) fRec81_tmp[i]=fRec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec81[i] = (fRec81[i-1] + (fConst8 * (yc20_get_sample(fZec15[i], 3, 0) - fRec81[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec81_perm[i]=fRec81_tmp[count+i];
			
			// LOOP 0x55f852ca3a50
			// pre processing
			for (int i=0; i<4; i++) fRec83_tmp[i]=fRec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec83[i] = (fRec83[i-1] + (fConst9 * (yc20_get_sample(fZec19[i], 4, 0) - fRec83[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec83_perm[i]=fRec83_tmp[count+i];
			
			// LOOP 0x55f852ca5fd0
			// pre processing
			for (int i=0; i<4; i++) fRec85_tmp[i]=fRec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec85[i] = (fRec85[i-1] + (fConst9 * (yc20_get_sample(fZec23[i], 5, 0) - fRec85[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec85_perm[i]=fRec85_tmp[count+i];
			
			// LOOP 0x55f852ca82b0
			// pre processing
			for (int i=0; i<4; i++) fRec87_tmp[i]=fRec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec87[i] = (fRec87[i-1] + (fConst9 * (yc20_get_sample(fZec27[i], 6, 0) - fRec87[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec87_perm[i]=fRec87_tmp[count+i];
			
			// LOOP 0x55f852caa590
			// pre processing
			for (int i=0; i<4; i++) fRec89_tmp[i]=fRec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec89[i] = (fRec89[i-1] + (fConst9 * (yc20_get_sample(fZec31[i], 7, 0) - fRec89[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec89_perm[i]=fRec89_tmp[count+i];
			
			// LOOP 0x55f852cac870
			// pre processing
			for (int i=0; i<4; i++) fRec91_tmp[i]=fRec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec91[i] = (fRec91[i-1] + (fConst10 * (yc20_get_sample(fZec35[i], 8, 0) - fRec91[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec91_perm[i]=fRec91_tmp[count+i];
			
			// LOOP 0x55f852caee30
			// pre processing
			for (int i=0; i<4; i++) fRec93_tmp[i]=fRec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec93[i] = (fRec93[i-1] + (fConst10 * (yc20_get_sample(fZec39[i], 9, 0) - fRec93[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec93_perm[i]=fRec93_tmp[count+i];
			
			// LOOP 0x55f852cb1110
			// pre processing
			for (int i=0; i<4; i++) fRec95_tmp[i]=fRec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec95[i] = (fRec95[i-1] + (fConst10 * (yc20_get_sample(fZec43[i], 10, 0) - fRec95[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec95_perm[i]=fRec95_tmp[count+i];
			
			// LOOP 0x55f852cb33f0
			// pre processing
			for (int i=0; i<4; i++) fRec97_tmp[i]=fRec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec97[i] = (fRec97[i-1] + (fConst10 * (yc20_get_sample(fZec47[i], 11, 0) - fRec97[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec97_perm[i]=fRec97_tmp[count+i];
			
			// LOOP 0x55f852cb56d0
			// pre processing
			for (int i=0; i<4; i++) fRec99_tmp[i]=fRec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec99[i] = (fRec99[i-1] + (fConst11 * (yc20_get_sample(fZec2[i], 0, 0) - fRec99[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec99_perm[i]=fRec99_tmp[count+i];
			
			// LOOP 0x55f852cb7b50
			// pre processing
			for (int i=0; i<4; i++) fRec101_tmp[i]=fRec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec101[i] = (fRec101[i-1] + (fConst11 * (yc20_get_sample(fZec6[i], 1, 0) - fRec101[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec101_perm[i]=fRec101_tmp[count+i];
			
			// LOOP 0x55f852cb9d00
			// pre processing
			for (int i=0; i<4; i++) fRec103_tmp[i]=fRec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec103[i] = (fRec103[i-1] + (fConst11 * (yc20_get_sample(fZec10[i], 2, 0) - fRec103[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec103_perm[i]=fRec103_tmp[count+i];
			
			// LOOP 0x55f852cbbeb0
			// pre processing
			for (int i=0; i<4; i++) fRec105_tmp[i]=fRec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec105[i] = (fRec105[i-1] + (fConst11 * (yc20_get_sample(fZec14[i], 3, 0) - fRec105[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec105_perm[i]=fRec105_tmp[count+i];
			
			// LOOP 0x55f852cbe060
			// pre processing
			for (int i=0; i<4; i++) fRec107_tmp[i]=fRec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec107[i] = (fRec107[i-1] + (fConst12 * (yc20_get_sample(fZec18[i], 4, 0) - fRec107[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec107_perm[i]=fRec107_tmp[count+i];
			
			// LOOP 0x55f852cc04f0
			// pre processing
			for (int i=0; i<4; i++) fRec109_tmp[i]=fRec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec109[i] = (fRec109[i-1] + (fConst12 * (yc20_get_sample(fZec22[i], 5, 0) - fRec109[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec109_perm[i]=fRec109_tmp[count+i];
			
			// LOOP 0x55f852cc26a0
			// pre processing
			for (int i=0; i<4; i++) fRec111_tmp[i]=fRec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec111[i] = (fRec111[i-1] + (fConst12 * (yc20_get_sample(fZec26[i], 6, 0) - fRec111[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec111_perm[i]=fRec111_tmp[count+i];
			
			// LOOP 0x55f852cc4850
			// pre processing
			for (int i=0; i<4; i++) fRec113_tmp[i]=fRec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec113[i] = (fRec113[i-1] + (fConst12 * (yc20_get_sample(fZec30[i], 7, 0) - fRec113[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec113_perm[i]=fRec113_tmp[count+i];
			
			// LOOP 0x55f852cc6a00
			// pre processing
			for (int i=0; i<4; i++) fRec115_tmp[i]=fRec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec115[i] = (fRec115[i-1] + (fConst13 * (yc20_get_sample(fZec34[i], 8, 0) - fRec115[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec115_perm[i]=fRec115_tmp[count+i];
			
			// LOOP 0x55f852cc8e90
			// pre processing
			for (int i=0; i<4; i++) fRec117_tmp[i]=fRec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec117[i] = (fRec117[i-1] + (fConst13 * (yc20_get_sample(fZec38[i], 9, 0) - fRec117[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec117_perm[i]=fRec117_tmp[count+i];
			
			// LOOP 0x55f852ccb040
			// pre processing
			for (int i=0; i<4; i++) fRec119_tmp[i]=fRec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec119[i] = (fRec119[i-1] + (fConst13 * (yc20_get_sample(fZec42[i], 10, 0) - fRec119[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec119_perm[i]=fRec119_tmp[count+i];
			
			// LOOP 0x55f852ccd1f0
			// pre processing
			for (int i=0; i<4; i++) fRec121_tmp[i]=fRec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec121[i] = (fRec121[i-1] + (fConst13 * (yc20_get_sample(fZec46[i], 11, 0) - fRec121[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec121_perm[i]=fRec121_tmp[count+i];
			
			// LOOP 0x55f852ccf2c0
			// pre processing
			for (int i=0; i<4; i++) fYec36_tmp[i]=fYec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec36[i] = yc20_get_sample(fRec5[i], 0, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec36_perm[i]=fYec36_tmp[count+i];
			
			// LOOP 0x55f852cd0e90
			// pre processing
			for (int i=0; i<4; i++) fYec37_tmp[i]=fYec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec37[i] = yc20_get_sample(fRec12[i], 1, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec37_perm[i]=fYec37_tmp[count+i];
			
			// LOOP 0x55f852cd2920
			// pre processing
			for (int i=0; i<4; i++) fYec38_tmp[i]=fYec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec38[i] = yc20_get_sample(fRec18[i], 2, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec38_perm[i]=fYec38_tmp[count+i];
			
			// LOOP 0x55f852cd43b0
			// pre processing
			for (int i=0; i<4; i++) fYec39_tmp[i]=fYec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec39[i] = yc20_get_sample(fRec24[i], 3, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec39_perm[i]=fYec39_tmp[count+i];
			
			// LOOP 0x55f852cd5e40
			// pre processing
			for (int i=0; i<4; i++) fYec40_tmp[i]=fYec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec40[i] = yc20_get_sample(fRec30[i], 4, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec40_perm[i]=fYec40_tmp[count+i];
			
			// LOOP 0x55f852cd78d0
			// pre processing
			for (int i=0; i<4; i++) fYec41_tmp[i]=fYec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec41[i] = yc20_get_sample(fRec36[i], 5, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec41_perm[i]=fYec41_tmp[count+i];
			
			// LOOP 0x55f852cd9360
			// pre processing
			for (int i=0; i<4; i++) fYec42_tmp[i]=fYec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec42[i] = yc20_get_sample(fRec42[i], 6, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec42_perm[i]=fYec42_tmp[count+i];
			
			// LOOP 0x55f852cdadf0
			// pre processing
			for (int i=0; i<4; i++) fYec43_tmp[i]=fYec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec43[i] = yc20_get_sample(fRec48[i], 7, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec43_perm[i]=fYec43_tmp[count+i];
			
			// LOOP 0x55f852cdc880
			// pre processing
			for (int i=0; i<4; i++) fYec44_tmp[i]=fYec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec44[i] = yc20_get_sample(fRec54[i], 8, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec44_perm[i]=fYec44_tmp[count+i];
			
			// LOOP 0x55f852cde310
			// pre processing
			for (int i=0; i<4; i++) fYec45_tmp[i]=fYec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec45[i] = yc20_get_sample(fRec60[i], 9, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec45_perm[i]=fYec45_tmp[count+i];
			
			// LOOP 0x55f852cdfda0
			// pre processing
			for (int i=0; i<4; i++) fYec46_tmp[i]=fYec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec46[i] = yc20_get_sample(fRec66[i], 10, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec46_perm[i]=fYec46_tmp[count+i];
			
			// LOOP 0x55f852ce1830
			// pre processing
			for (int i=0; i<4; i++) fYec47_tmp[i]=fYec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec47[i] = yc20_get_sample(fRec72[i], 11, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec47_perm[i]=fYec47_tmp[count+i];
			
			// LOOP 0x55f852ce3e00
			// pre processing
			for (int i=0; i<4; i++) fVec0_tmp[i]=fVec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec0[i] = fSlow18;
			}
			// post processing
			for (int i=0; i<4; i++) fVec0_perm[i]=fVec0_tmp[count+i];
			
			// LOOP 0x55f852ce5950
			// pre processing
			for (int i=0; i<4; i++) fVec1_tmp[i]=fVec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec1[i] = fSlow19;
			}
			// post processing
			for (int i=0; i<4; i++) fVec1_perm[i]=fVec1_tmp[count+i];
			
			// LOOP 0x55f852ce7780
			// pre processing
			for (int i=0; i<4; i++) fVec2_tmp[i]=fVec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec2[i] = fSlow20;
			}
			// post processing
			for (int i=0; i<4; i++) fVec2_perm[i]=fVec2_tmp[count+i];
			
			// LOOP 0x55f852ce9510
			// pre processing
			for (int i=0; i<4; i++) fVec3_tmp[i]=fVec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec3[i] = fSlow21;
			}
			// post processing
			for (int i=0; i<4; i++) fVec3_perm[i]=fVec3_tmp[count+i];
			
			// LOOP 0x55f852ceb3e0
			// pre processing
			for (int i=0; i<4; i++) fVec4_tmp[i]=fVec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec4[i] = fSlow22;
			}
			// post processing
			for (int i=0; i<4; i++) fVec4_perm[i]=fVec4_tmp[count+i];
			
			// LOOP 0x55f852ced210
			// pre processing
			for (int i=0; i<4; i++) fVec5_tmp[i]=fVec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec5[i] = fSlow23;
			}
			// post processing
			for (int i=0; i<4; i++) fVec5_perm[i]=fVec5_tmp[count+i];
			
			// LOOP 0x55f852cef360
			// pre processing
			for (int i=0; i<4; i++) fVec6_tmp[i]=fVec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec6[i] = fSlow24;
			}
			// post processing
			for (int i=0; i<4; i++) fVec6_perm[i]=fVec6_tmp[count+i];
			
			// LOOP 0x55f852cf1190
			// pre processing
			for (int i=0; i<4; i++) fVec7_tmp[i]=fVec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec7[i] = fSlow25;
			}
			// post processing
			for (int i=0; i<4; i++) fVec7_perm[i]=fVec7_tmp[count+i];
			
			// LOOP 0x55f852cf3380
			// pre processing
			for (int i=0; i<4; i++) fVec8_tmp[i]=fVec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec8[i] = fSlow26;
			}
			// post processing
			for (int i=0; i<4; i++) fVec8_perm[i]=fVec8_tmp[count+i];
			
			// LOOP 0x55f852cf5580
			// pre processing
			for (int i=0; i<4; i++) fVec9_tmp[i]=fVec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec9[i] = fSlow27;
			}
			// post processing
			for (int i=0; i<4; i++) fVec9_perm[i]=fVec9_tmp[count+i];
			
			// LOOP 0x55f852cf73b0
			// pre processing
			for (int i=0; i<4; i++) fVec10_tmp[i]=fVec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec10[i] = fSlow28;
			}
			// post processing
			for (int i=0; i<4; i++) fVec10_perm[i]=fVec10_tmp[count+i];
			
			// LOOP 0x55f852cf9670
			// pre processing
			for (int i=0; i<4; i++) fVec11_tmp[i]=fVec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec11[i] = fSlow29;
			}
			// post processing
			for (int i=0; i<4; i++) fVec11_perm[i]=fVec11_tmp[count+i];
			
			// LOOP 0x55f852cfb4d0
			// pre processing
			for (int i=0; i<4; i++) fVec12_tmp[i]=fVec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec12[i] = fSlow30;
			}
			// post processing
			for (int i=0; i<4; i++) fVec12_perm[i]=fVec12_tmp[count+i];
			
			// LOOP 0x55f852d8a110
			// exec code
			for (int i=0; i<count; i++) {
				fZec125[i] = (fRec50[i] + (fRec44[i] + (fRec38[i] + (fRec32[i] + fZec124[i]))));
			}
			
			// LOOP 0x55f852f06230
			// pre processing
			for (int i=0; i<4; i++) fYec68_tmp[i]=fYec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec68[i] = (iRec190[i] + fZec180[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec68_perm[i]=fYec68_tmp[count+i];
			
			// LOOP 0x55f852f0f1e0
			// pre processing
			for (int i=0; i<4; i++) fYec70_tmp[i]=fYec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec70[i] = (iRec195[i] + fZec182[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec70_perm[i]=fYec70_tmp[count+i];
			
			// LOOP 0x55f852f17ae0
			// pre processing
			for (int i=0; i<4; i++) fYec72_tmp[i]=fYec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec72[i] = (iRec200[i] + fZec184[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec72_perm[i]=fYec72_tmp[count+i];
			
			// LOOP 0x55f852f203e0
			// pre processing
			for (int i=0; i<4; i++) fYec74_tmp[i]=fYec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec74[i] = (iRec205[i] + fZec186[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec74_perm[i]=fYec74_tmp[count+i];
			
			// LOOP 0x55f852f28ce0
			// pre processing
			for (int i=0; i<4; i++) fYec76_tmp[i]=fYec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec76[i] = (iRec210[i] + fZec188[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec76_perm[i]=fYec76_tmp[count+i];
			
			// LOOP 0x55f852f315e0
			// pre processing
			for (int i=0; i<4; i++) fYec78_tmp[i]=fYec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec78[i] = (iRec215[i] + fZec190[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec78_perm[i]=fYec78_tmp[count+i];
			
			// LOOP 0x55f852f39ee0
			// pre processing
			for (int i=0; i<4; i++) fYec80_tmp[i]=fYec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec80[i] = (iRec220[i] + fZec192[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec80_perm[i]=fYec80_tmp[count+i];
			
			// LOOP 0x55f852f403b0
			// pre processing
			for (int i=0; i<4; i++) fYec81_tmp[i]=fYec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec81[i] = (iRec225[i] + fZec159[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec81_perm[i]=fYec81_tmp[count+i];
			
			// LOOP 0x55f852f46a60
			// pre processing
			for (int i=0; i<4; i++) fYec82_tmp[i]=fYec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec82[i] = (iRec229[i] + fZec161[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec82_perm[i]=fYec82_tmp[count+i];
			
			// LOOP 0x55f852f4d3f0
			// pre processing
			for (int i=0; i<4; i++) fYec83_tmp[i]=fYec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec83[i] = (iRec233[i] + fZec163[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec83_perm[i]=fYec83_tmp[count+i];
			
			// LOOP 0x55f852f53aa0
			// pre processing
			for (int i=0; i<4; i++) fYec84_tmp[i]=fYec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec84[i] = (iRec237[i] + fZec165[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec84_perm[i]=fYec84_tmp[count+i];
			
			// LOOP 0x55f852f5a240
			// pre processing
			for (int i=0; i<4; i++) fYec85_tmp[i]=fYec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec85[i] = (iRec241[i] + fZec167[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec85_perm[i]=fYec85_tmp[count+i];
			
			// SECTION : 21
			// LOOP 0x55f852c9ce30
			// pre processing
			for (int i=0; i<4; i++) fRec76_tmp[i]=fRec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec76[i] = (fConst5 * (fRec76[i-1] + (fRec77[i] - fRec77[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec76_perm[i]=fRec76_tmp[count+i];
			
			// LOOP 0x55f852c9f110
			// pre processing
			for (int i=0; i<4; i++) fRec78_tmp[i]=fRec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec78[i] = (fConst5 * (fRec78[i-1] + (fRec79[i] - fRec79[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec78_perm[i]=fRec78_tmp[count+i];
			
			// LOOP 0x55f852ca13f0
			// pre processing
			for (int i=0; i<4; i++) fRec80_tmp[i]=fRec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec80[i] = (fConst5 * (fRec80[i-1] + (fRec81[i] - fRec81[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec80_perm[i]=fRec80_tmp[count+i];
			
			// LOOP 0x55f852ca36d0
			// pre processing
			for (int i=0; i<4; i++) fRec82_tmp[i]=fRec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec82[i] = (fConst5 * (fRec82[i-1] + (fRec83[i] - fRec83[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec82_perm[i]=fRec82_tmp[count+i];
			
			// LOOP 0x55f852ca5c70
			// pre processing
			for (int i=0; i<4; i++) fRec84_tmp[i]=fRec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec84[i] = (fConst5 * (fRec84[i-1] + (fRec85[i] - fRec85[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec84_perm[i]=fRec84_tmp[count+i];
			
			// LOOP 0x55f852ca7f30
			// pre processing
			for (int i=0; i<4; i++) fRec86_tmp[i]=fRec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec86[i] = (fConst5 * (fRec86[i-1] + (fRec87[i] - fRec87[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec86_perm[i]=fRec86_tmp[count+i];
			
			// LOOP 0x55f852caa210
			// pre processing
			for (int i=0; i<4; i++) fRec88_tmp[i]=fRec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec88[i] = (fConst5 * (fRec88[i-1] + (fRec89[i] - fRec89[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec88_perm[i]=fRec88_tmp[count+i];
			
			// LOOP 0x55f852cac4f0
			// pre processing
			for (int i=0; i<4; i++) fRec90_tmp[i]=fRec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec90[i] = (fConst5 * (fRec90[i-1] + (fRec91[i] - fRec91[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec90_perm[i]=fRec90_tmp[count+i];
			
			// LOOP 0x55f852caeab0
			// pre processing
			for (int i=0; i<4; i++) fRec92_tmp[i]=fRec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec92[i] = (fConst5 * (fRec92[i-1] + (fRec93[i] - fRec93[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec92_perm[i]=fRec92_tmp[count+i];
			
			// LOOP 0x55f852cb0d90
			// pre processing
			for (int i=0; i<4; i++) fRec94_tmp[i]=fRec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec94[i] = (fConst5 * (fRec94[i-1] + (fRec95[i] - fRec95[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec94_perm[i]=fRec94_tmp[count+i];
			
			// LOOP 0x55f852cb3070
			// pre processing
			for (int i=0; i<4; i++) fRec96_tmp[i]=fRec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec96[i] = (fConst5 * (fRec96[i-1] + (fRec97[i] - fRec97[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec96_perm[i]=fRec96_tmp[count+i];
			
			// LOOP 0x55f852cb5350
			// pre processing
			for (int i=0; i<4; i++) fRec98_tmp[i]=fRec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec98[i] = (fConst5 * (fRec98[i-1] + (fRec99[i] - fRec99[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec98_perm[i]=fRec98_tmp[count+i];
			
			// LOOP 0x55f852cb77f0
			// pre processing
			for (int i=0; i<4; i++) fRec100_tmp[i]=fRec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec100[i] = (fConst5 * (fRec100[i-1] + (fRec101[i] - fRec101[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec100_perm[i]=fRec100_tmp[count+i];
			
			// LOOP 0x55f852cb99a0
			// pre processing
			for (int i=0; i<4; i++) fRec102_tmp[i]=fRec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec102[i] = (fConst5 * (fRec102[i-1] + (fRec103[i] - fRec103[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec102_perm[i]=fRec102_tmp[count+i];
			
			// LOOP 0x55f852cbbb50
			// pre processing
			for (int i=0; i<4; i++) fRec104_tmp[i]=fRec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec104[i] = (fConst5 * (fRec104[i-1] + (fRec105[i] - fRec105[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec104_perm[i]=fRec104_tmp[count+i];
			
			// LOOP 0x55f852cbdd00
			// pre processing
			for (int i=0; i<4; i++) fRec106_tmp[i]=fRec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec106[i] = (fConst5 * (fRec106[i-1] + (fRec107[i] - fRec107[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec106_perm[i]=fRec106_tmp[count+i];
			
			// LOOP 0x55f852cc0190
			// pre processing
			for (int i=0; i<4; i++) fRec108_tmp[i]=fRec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec108[i] = (fConst5 * (fRec108[i-1] + (fRec109[i] - fRec109[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec108_perm[i]=fRec108_tmp[count+i];
			
			// LOOP 0x55f852cc2340
			// pre processing
			for (int i=0; i<4; i++) fRec110_tmp[i]=fRec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec110[i] = (fConst5 * (fRec110[i-1] + (fRec111[i] - fRec111[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec110_perm[i]=fRec110_tmp[count+i];
			
			// LOOP 0x55f852cc44f0
			// pre processing
			for (int i=0; i<4; i++) fRec112_tmp[i]=fRec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec112[i] = (fConst5 * (fRec112[i-1] + (fRec113[i] - fRec113[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec112_perm[i]=fRec112_tmp[count+i];
			
			// LOOP 0x55f852cc66a0
			// pre processing
			for (int i=0; i<4; i++) fRec114_tmp[i]=fRec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec114[i] = (fConst5 * (fRec114[i-1] + (fRec115[i] - fRec115[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec114_perm[i]=fRec114_tmp[count+i];
			
			// LOOP 0x55f852cc8b30
			// pre processing
			for (int i=0; i<4; i++) fRec116_tmp[i]=fRec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec116[i] = (fConst5 * (fRec116[i-1] + (fRec117[i] - fRec117[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec116_perm[i]=fRec116_tmp[count+i];
			
			// LOOP 0x55f852ccace0
			// pre processing
			for (int i=0; i<4; i++) fRec118_tmp[i]=fRec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec118[i] = (fConst5 * (fRec118[i-1] + (fRec119[i] - fRec119[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec118_perm[i]=fRec118_tmp[count+i];
			
			// LOOP 0x55f852ccce90
			// pre processing
			for (int i=0; i<4; i++) fRec120_tmp[i]=fRec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec120[i] = (fConst5 * (fRec120[i-1] + (fRec121[i] - fRec121[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec120_perm[i]=fRec120_tmp[count+i];
			
			// LOOP 0x55f852ccf040
			// pre processing
			for (int i=0; i<4; i++) fRec122_tmp[i]=fRec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec122[i] = (fConst5 * (fRec122[i-1] + ((1.95f * fYec36[i]) - (1.95f * fYec36[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec122_perm[i]=fRec122_tmp[count+i];
			
			// LOOP 0x55f852cd0c10
			// pre processing
			for (int i=0; i<4; i++) fRec123_tmp[i]=fRec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec123[i] = (fConst5 * (fRec123[i-1] + ((1.95f * fYec37[i]) - (1.95f * fYec37[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec123_perm[i]=fRec123_tmp[count+i];
			
			// LOOP 0x55f852cd26a0
			// pre processing
			for (int i=0; i<4; i++) fRec124_tmp[i]=fRec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec124[i] = (fConst5 * (fRec124[i-1] + ((1.95f * fYec38[i]) - (1.95f * fYec38[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec124_perm[i]=fRec124_tmp[count+i];
			
			// LOOP 0x55f852cd4130
			// pre processing
			for (int i=0; i<4; i++) fRec125_tmp[i]=fRec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec125[i] = (fConst5 * (fRec125[i-1] + ((1.95f * fYec39[i]) - (1.95f * fYec39[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec125_perm[i]=fRec125_tmp[count+i];
			
			// LOOP 0x55f852cd5bc0
			// pre processing
			for (int i=0; i<4; i++) fRec126_tmp[i]=fRec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec126[i] = (fConst5 * (fRec126[i-1] + ((1.95f * fYec40[i]) - (1.95f * fYec40[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec126_perm[i]=fRec126_tmp[count+i];
			
			// LOOP 0x55f852cd7650
			// pre processing
			for (int i=0; i<4; i++) fRec127_tmp[i]=fRec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec127[i] = (fConst5 * (fRec127[i-1] + ((1.95f * fYec41[i]) - (1.95f * fYec41[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec127_perm[i]=fRec127_tmp[count+i];
			
			// LOOP 0x55f852cd90e0
			// pre processing
			for (int i=0; i<4; i++) fRec128_tmp[i]=fRec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec128[i] = (fConst5 * (fRec128[i-1] + ((1.95f * fYec42[i]) - (1.95f * fYec42[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec128_perm[i]=fRec128_tmp[count+i];
			
			// LOOP 0x55f852cdab70
			// pre processing
			for (int i=0; i<4; i++) fRec129_tmp[i]=fRec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec129[i] = (fConst5 * (fRec129[i-1] + ((1.95f * fYec43[i]) - (1.95f * fYec43[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec129_perm[i]=fRec129_tmp[count+i];
			
			// LOOP 0x55f852cdc600
			// pre processing
			for (int i=0; i<4; i++) fRec130_tmp[i]=fRec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec130[i] = (fConst5 * (fRec130[i-1] + ((1.95f * fYec44[i]) - (1.95f * fYec44[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec130_perm[i]=fRec130_tmp[count+i];
			
			// LOOP 0x55f852cde090
			// pre processing
			for (int i=0; i<4; i++) fRec131_tmp[i]=fRec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec131[i] = (fConst5 * (fRec131[i-1] + ((1.95f * fYec45[i]) - (1.95f * fYec45[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec131_perm[i]=fRec131_tmp[count+i];
			
			// LOOP 0x55f852cdfb20
			// pre processing
			for (int i=0; i<4; i++) fRec132_tmp[i]=fRec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec132[i] = (fConst5 * (fRec132[i-1] + ((1.95f * fYec46[i]) - (1.95f * fYec46[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec132_perm[i]=fRec132_tmp[count+i];
			
			// LOOP 0x55f852ce15b0
			// pre processing
			for (int i=0; i<4; i++) fRec133_tmp[i]=fRec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec133[i] = (fConst5 * (fRec133[i-1] + ((1.95f * fYec47[i]) - (1.95f * fYec47[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec133_perm[i]=fRec133_tmp[count+i];
			
			// LOOP 0x55f852ce3ce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec49[i] = (fSlow18 + (fVec0[i-3] + (fVec0[i-1] + fVec0[i-2])));
			}
			
			// LOOP 0x55f852ce5830
			// exec code
			for (int i=0; i<count; i++) {
				fZec51[i] = (fSlow19 + (fVec1[i-3] + (fVec1[i-1] + fVec1[i-2])));
			}
			
			// LOOP 0x55f852ce7660
			// exec code
			for (int i=0; i<count; i++) {
				fZec53[i] = (fSlow20 + (fVec2[i-3] + (fVec2[i-1] + fVec2[i-2])));
			}
			
			// LOOP 0x55f852ce93f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec55[i] = (fSlow21 + (fVec3[i-3] + (fVec3[i-1] + fVec3[i-2])));
			}
			
			// LOOP 0x55f852ceb2c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec57[i] = (fSlow22 + (fVec4[i-3] + (fVec4[i-1] + fVec4[i-2])));
			}
			
			// LOOP 0x55f852ced0f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec59[i] = (fSlow23 + (fVec5[i-3] + (fVec5[i-1] + fVec5[i-2])));
			}
			
			// LOOP 0x55f852cef240
			// exec code
			for (int i=0; i<count; i++) {
				fZec61[i] = (fSlow24 + (fVec6[i-3] + (fVec6[i-1] + fVec6[i-2])));
			}
			
			// LOOP 0x55f852cf1070
			// exec code
			for (int i=0; i<count; i++) {
				fZec63[i] = (fSlow25 + (fVec7[i-3] + (fVec7[i-1] + fVec7[i-2])));
			}
			
			// LOOP 0x55f852cf3260
			// exec code
			for (int i=0; i<count; i++) {
				fZec65[i] = (fSlow26 + (fVec8[i-3] + (fVec8[i-1] + fVec8[i-2])));
			}
			
			// LOOP 0x55f852cf5460
			// exec code
			for (int i=0; i<count; i++) {
				fZec67[i] = (fSlow27 + (fVec9[i-3] + (fVec9[i-1] + fVec9[i-2])));
			}
			
			// LOOP 0x55f852cf7290
			// exec code
			for (int i=0; i<count; i++) {
				fZec69[i] = (fSlow28 + (fVec10[i-3] + (fVec10[i-1] + fVec10[i-2])));
			}
			
			// LOOP 0x55f852cf9550
			// exec code
			for (int i=0; i<count; i++) {
				fZec71[i] = (fSlow29 + (fVec11[i-3] + (fVec11[i-1] + fVec11[i-2])));
			}
			
			// LOOP 0x55f852cfb3b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec73[i] = (fSlow30 + (fVec12[i-3] + (fVec12[i-1] + fVec12[i-2])));
			}
			
			// LOOP 0x55f852cfd580
			// pre processing
			for (int i=0; i<4; i++) fVec13_tmp[i]=fVec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec13[i] = fSlow31;
			}
			// post processing
			for (int i=0; i<4; i++) fVec13_perm[i]=fVec13_tmp[count+i];
			
			// LOOP 0x55f852cff2d0
			// pre processing
			for (int i=0; i<4; i++) fVec14_tmp[i]=fVec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec14[i] = fSlow32;
			}
			// post processing
			for (int i=0; i<4; i++) fVec14_perm[i]=fVec14_tmp[count+i];
			
			// LOOP 0x55f852d00b90
			// pre processing
			for (int i=0; i<4; i++) fVec15_tmp[i]=fVec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec15[i] = fSlow33;
			}
			// post processing
			for (int i=0; i<4; i++) fVec15_perm[i]=fVec15_tmp[count+i];
			
			// LOOP 0x55f852d028b0
			// pre processing
			for (int i=0; i<4; i++) fVec16_tmp[i]=fVec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec16[i] = fSlow34;
			}
			// post processing
			for (int i=0; i<4; i++) fVec16_perm[i]=fVec16_tmp[count+i];
			
			// LOOP 0x55f852d04490
			// pre processing
			for (int i=0; i<4; i++) fVec17_tmp[i]=fVec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec17[i] = fSlow35;
			}
			// post processing
			for (int i=0; i<4; i++) fVec17_perm[i]=fVec17_tmp[count+i];
			
			// LOOP 0x55f852d067f0
			// pre processing
			for (int i=0; i<4; i++) fVec18_tmp[i]=fVec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec18[i] = fSlow36;
			}
			// post processing
			for (int i=0; i<4; i++) fVec18_perm[i]=fVec18_tmp[count+i];
			
			// LOOP 0x55f852d08330
			// pre processing
			for (int i=0; i<4; i++) fVec19_tmp[i]=fVec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec19[i] = fSlow37;
			}
			// post processing
			for (int i=0; i<4; i++) fVec19_perm[i]=fVec19_tmp[count+i];
			
			// LOOP 0x55f852d0a690
			// pre processing
			for (int i=0; i<4; i++) fVec20_tmp[i]=fVec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec20[i] = fSlow38;
			}
			// post processing
			for (int i=0; i<4; i++) fVec20_perm[i]=fVec20_tmp[count+i];
			
			// LOOP 0x55f852d0c950
			// pre processing
			for (int i=0; i<4; i++) fVec21_tmp[i]=fVec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec21[i] = fSlow39;
			}
			// post processing
			for (int i=0; i<4; i++) fVec21_perm[i]=fVec21_tmp[count+i];
			
			// LOOP 0x55f852d0e3f0
			// pre processing
			for (int i=0; i<4; i++) fVec22_tmp[i]=fVec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec22[i] = fSlow40;
			}
			// post processing
			for (int i=0; i<4; i++) fVec22_perm[i]=fVec22_tmp[count+i];
			
			// LOOP 0x55f852d106b0
			// pre processing
			for (int i=0; i<4; i++) fVec23_tmp[i]=fVec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec23[i] = fSlow41;
			}
			// post processing
			for (int i=0; i<4; i++) fVec23_perm[i]=fVec23_tmp[count+i];
			
			// LOOP 0x55f852d120b0
			// pre processing
			for (int i=0; i<4; i++) fVec24_tmp[i]=fVec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec24[i] = fSlow42;
			}
			// post processing
			for (int i=0; i<4; i++) fVec24_perm[i]=fVec24_tmp[count+i];
			
			// LOOP 0x55f852d142d0
			// pre processing
			for (int i=0; i<4; i++) fVec25_tmp[i]=fVec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec25[i] = fSlow43;
			}
			// post processing
			for (int i=0; i<4; i++) fVec25_perm[i]=fVec25_tmp[count+i];
			
			// LOOP 0x55f852d16470
			// pre processing
			for (int i=0; i<4; i++) fVec26_tmp[i]=fVec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec26[i] = fSlow44;
			}
			// post processing
			for (int i=0; i<4; i++) fVec26_perm[i]=fVec26_tmp[count+i];
			
			// LOOP 0x55f852d17e20
			// pre processing
			for (int i=0; i<4; i++) fVec27_tmp[i]=fVec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec27[i] = fSlow45;
			}
			// post processing
			for (int i=0; i<4; i++) fVec27_perm[i]=fVec27_tmp[count+i];
			
			// LOOP 0x55f852d19f50
			// pre processing
			for (int i=0; i<4; i++) fVec28_tmp[i]=fVec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec28[i] = fSlow46;
			}
			// post processing
			for (int i=0; i<4; i++) fVec28_perm[i]=fVec28_tmp[count+i];
			
			// LOOP 0x55f852d1bea0
			// pre processing
			for (int i=0; i<4; i++) fVec29_tmp[i]=fVec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec29[i] = fSlow47;
			}
			// post processing
			for (int i=0; i<4; i++) fVec29_perm[i]=fVec29_tmp[count+i];
			
			// LOOP 0x55f852d1e9d0
			// pre processing
			for (int i=0; i<4; i++) fVec30_tmp[i]=fVec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec30[i] = fSlow48;
			}
			// post processing
			for (int i=0; i<4; i++) fVec30_perm[i]=fVec30_tmp[count+i];
			
			// LOOP 0x55f852d207e0
			// pre processing
			for (int i=0; i<4; i++) fVec31_tmp[i]=fVec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec31[i] = fSlow49;
			}
			// post processing
			for (int i=0; i<4; i++) fVec31_perm[i]=fVec31_tmp[count+i];
			
			// LOOP 0x55f852d23270
			// pre processing
			for (int i=0; i<4; i++) fVec32_tmp[i]=fVec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec32[i] = fSlow50;
			}
			// post processing
			for (int i=0; i<4; i++) fVec32_perm[i]=fVec32_tmp[count+i];
			
			// LOOP 0x55f852d25bc0
			// pre processing
			for (int i=0; i<4; i++) fVec33_tmp[i]=fVec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec33[i] = fSlow51;
			}
			// post processing
			for (int i=0; i<4; i++) fVec33_perm[i]=fVec33_tmp[count+i];
			
			// LOOP 0x55f852d27890
			// pre processing
			for (int i=0; i<4; i++) fVec34_tmp[i]=fVec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec34[i] = fSlow52;
			}
			// post processing
			for (int i=0; i<4; i++) fVec34_perm[i]=fVec34_tmp[count+i];
			
			// LOOP 0x55f852d2a140
			// pre processing
			for (int i=0; i<4; i++) fVec35_tmp[i]=fVec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec35[i] = fSlow53;
			}
			// post processing
			for (int i=0; i<4; i++) fVec35_perm[i]=fVec35_tmp[count+i];
			
			// LOOP 0x55f852d2bcd0
			// pre processing
			for (int i=0; i<4; i++) fVec36_tmp[i]=fVec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec36[i] = fSlow54;
			}
			// post processing
			for (int i=0; i<4; i++) fVec36_perm[i]=fVec36_tmp[count+i];
			
			// LOOP 0x55f852d2e480
			// pre processing
			for (int i=0; i<4; i++) fVec37_tmp[i]=fVec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec37[i] = fSlow55;
			}
			// post processing
			for (int i=0; i<4; i++) fVec37_perm[i]=fVec37_tmp[count+i];
			
			// LOOP 0x55f852d309f0
			// pre processing
			for (int i=0; i<4; i++) fVec38_tmp[i]=fVec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec38[i] = fSlow56;
			}
			// post processing
			for (int i=0; i<4; i++) fVec38_perm[i]=fVec38_tmp[count+i];
			
			// LOOP 0x55f852d32340
			// pre processing
			for (int i=0; i<4; i++) fVec39_tmp[i]=fVec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec39[i] = fSlow57;
			}
			// post processing
			for (int i=0; i<4; i++) fVec39_perm[i]=fVec39_tmp[count+i];
			
			// LOOP 0x55f852d34790
			// pre processing
			for (int i=0; i<4; i++) fVec40_tmp[i]=fVec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec40[i] = fSlow58;
			}
			// post processing
			for (int i=0; i<4; i++) fVec40_perm[i]=fVec40_tmp[count+i];
			
			// LOOP 0x55f852d36960
			// pre processing
			for (int i=0; i<4; i++) fVec41_tmp[i]=fVec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec41[i] = fSlow59;
			}
			// post processing
			for (int i=0; i<4; i++) fVec41_perm[i]=fVec41_tmp[count+i];
			
			// LOOP 0x55f852d39b70
			// pre processing
			for (int i=0; i<4; i++) fVec42_tmp[i]=fVec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec42[i] = fSlow60;
			}
			// post processing
			for (int i=0; i<4; i++) fVec42_perm[i]=fVec42_tmp[count+i];
			
			// LOOP 0x55f852d3bb60
			// pre processing
			for (int i=0; i<4; i++) fVec43_tmp[i]=fVec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec43[i] = fSlow61;
			}
			// post processing
			for (int i=0; i<4; i++) fVec43_perm[i]=fVec43_tmp[count+i];
			
			// LOOP 0x55f852d3ec30
			// pre processing
			for (int i=0; i<4; i++) fVec44_tmp[i]=fVec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec44[i] = fSlow62;
			}
			// post processing
			for (int i=0; i<4; i++) fVec44_perm[i]=fVec44_tmp[count+i];
			
			// LOOP 0x55f852d41b00
			// pre processing
			for (int i=0; i<4; i++) fVec45_tmp[i]=fVec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec45[i] = fSlow63;
			}
			// post processing
			for (int i=0; i<4; i++) fVec45_perm[i]=fVec45_tmp[count+i];
			
			// LOOP 0x55f852d43910
			// pre processing
			for (int i=0; i<4; i++) fVec46_tmp[i]=fVec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec46[i] = fSlow64;
			}
			// post processing
			for (int i=0; i<4; i++) fVec46_perm[i]=fVec46_tmp[count+i];
			
			// LOOP 0x55f852d466c0
			// pre processing
			for (int i=0; i<4; i++) fVec47_tmp[i]=fVec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec47[i] = fSlow65;
			}
			// post processing
			for (int i=0; i<4; i++) fVec47_perm[i]=fVec47_tmp[count+i];
			
			// LOOP 0x55f852d482f0
			// pre processing
			for (int i=0; i<4; i++) fVec48_tmp[i]=fVec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec48[i] = fSlow66;
			}
			// post processing
			for (int i=0; i<4; i++) fVec48_perm[i]=fVec48_tmp[count+i];
			
			// LOOP 0x55f852d4aec0
			// pre processing
			for (int i=0; i<4; i++) fVec49_tmp[i]=fVec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec49[i] = fSlow67;
			}
			// post processing
			for (int i=0; i<4; i++) fVec49_perm[i]=fVec49_tmp[count+i];
			
			// LOOP 0x55f852d4d810
			// pre processing
			for (int i=0; i<4; i++) fVec50_tmp[i]=fVec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec50[i] = fSlow68;
			}
			// post processing
			for (int i=0; i<4; i++) fVec50_perm[i]=fVec50_tmp[count+i];
			
			// LOOP 0x55f852d4f1c0
			// pre processing
			for (int i=0; i<4; i++) fVec51_tmp[i]=fVec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec51[i] = fSlow69;
			}
			// post processing
			for (int i=0; i<4; i++) fVec51_perm[i]=fVec51_tmp[count+i];
			
			// LOOP 0x55f852d51930
			// pre processing
			for (int i=0; i<4; i++) fVec52_tmp[i]=fVec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec52[i] = fSlow70;
			}
			// post processing
			for (int i=0; i<4; i++) fVec52_perm[i]=fVec52_tmp[count+i];
			
			// LOOP 0x55f852d53d80
			// pre processing
			for (int i=0; i<4; i++) fVec53_tmp[i]=fVec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec53[i] = fSlow71;
			}
			// post processing
			for (int i=0; i<4; i++) fVec53_perm[i]=fVec53_tmp[count+i];
			
			// LOOP 0x55f852d57670
			// pre processing
			for (int i=0; i<4; i++) fVec54_tmp[i]=fVec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec54[i] = fSlow72;
			}
			// post processing
			for (int i=0; i<4; i++) fVec54_perm[i]=fVec54_tmp[count+i];
			
			// LOOP 0x55f852d59840
			// pre processing
			for (int i=0; i<4; i++) fVec55_tmp[i]=fVec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec55[i] = fSlow73;
			}
			// post processing
			for (int i=0; i<4; i++) fVec55_perm[i]=fVec55_tmp[count+i];
			
			// LOOP 0x55f852d5cf50
			// pre processing
			for (int i=0; i<4; i++) fVec56_tmp[i]=fVec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec56[i] = fSlow74;
			}
			// post processing
			for (int i=0; i<4; i++) fVec56_perm[i]=fVec56_tmp[count+i];
			
			// LOOP 0x55f852d603e0
			// pre processing
			for (int i=0; i<4; i++) fVec57_tmp[i]=fVec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec57[i] = fSlow75;
			}
			// post processing
			for (int i=0; i<4; i++) fVec57_perm[i]=fVec57_tmp[count+i];
			
			// LOOP 0x55f852d62330
			// pre processing
			for (int i=0; i<4; i++) fVec58_tmp[i]=fVec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec58[i] = fSlow76;
			}
			// post processing
			for (int i=0; i<4; i++) fVec58_perm[i]=fVec58_tmp[count+i];
			
			// LOOP 0x55f852d655e0
			// pre processing
			for (int i=0; i<4; i++) fVec59_tmp[i]=fVec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec59[i] = fSlow77;
			}
			// post processing
			for (int i=0; i<4; i++) fVec59_perm[i]=fVec59_tmp[count+i];
			
			// LOOP 0x55f852d672f0
			// pre processing
			for (int i=0; i<4; i++) fVec60_tmp[i]=fVec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec60[i] = fSlow78;
			}
			// post processing
			for (int i=0; i<4; i++) fVec60_perm[i]=fVec60_tmp[count+i];
			
			// LOOP 0x55f852d89ff0
			// exec code
			for (int i=0; i<count; i++) {
				fZec126[i] = (fRec74[i] + (fRec68[i] + (fRec62[i] + (fRec56[i] + fZec125[i]))));
			}
			
			// LOOP 0x55f852f06ba0
			// exec code
			for (int i=0; i<count; i++) {
				fZec181[i] = (0.5f * fYec68[i]);
			}
			
			// LOOP 0x55f852f0fb50
			// exec code
			for (int i=0; i<count; i++) {
				fZec183[i] = (0.5f * fYec70[i]);
			}
			
			// LOOP 0x55f852f18450
			// exec code
			for (int i=0; i<count; i++) {
				fZec185[i] = (0.5f * fYec72[i]);
			}
			
			// LOOP 0x55f852f20d50
			// exec code
			for (int i=0; i<count; i++) {
				fZec187[i] = (0.5f * fYec74[i]);
			}
			
			// LOOP 0x55f852f29650
			// exec code
			for (int i=0; i<count; i++) {
				fZec189[i] = (0.5f * fYec76[i]);
			}
			
			// LOOP 0x55f852f31f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec191[i] = (0.5f * fYec78[i]);
			}
			
			// LOOP 0x55f852f3a850
			// exec code
			for (int i=0; i<count; i++) {
				fZec193[i] = (0.5f * fYec80[i]);
			}
			
			// LOOP 0x55f852f40d20
			// exec code
			for (int i=0; i<count; i++) {
				fZec194[i] = (0.5f * fYec81[i]);
			}
			
			// LOOP 0x55f852f473d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec195[i] = (0.5f * fYec82[i]);
			}
			
			// LOOP 0x55f852f4dd60
			// exec code
			for (int i=0; i<count; i++) {
				fZec196[i] = (0.5f * fYec83[i]);
			}
			
			// LOOP 0x55f852f54410
			// exec code
			for (int i=0; i<count; i++) {
				fZec197[i] = (0.5f * fYec84[i]);
			}
			
			// LOOP 0x55f852f5abb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec198[i] = (0.5f * fYec85[i]);
			}
			
			// SECTION : 22
			// LOOP 0x55f852ce3bc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec50[i] = (fRec122[i] * fZec49[i]);
			}
			
			// LOOP 0x55f852ce5710
			// exec code
			for (int i=0; i<count; i++) {
				fZec52[i] = (fRec133[i] * fZec51[i]);
			}
			
			// LOOP 0x55f852ce7540
			// exec code
			for (int i=0; i<count; i++) {
				fZec54[i] = (fRec132[i] * fZec53[i]);
			}
			
			// LOOP 0x55f852ce92d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec56[i] = (fRec131[i] * fZec55[i]);
			}
			
			// LOOP 0x55f852ceb1a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec58[i] = (fRec130[i] * fZec57[i]);
			}
			
			// LOOP 0x55f852cecfd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec60[i] = (fRec129[i] * fZec59[i]);
			}
			
			// LOOP 0x55f852cef120
			// exec code
			for (int i=0; i<count; i++) {
				fZec62[i] = (fRec128[i] * fZec61[i]);
			}
			
			// LOOP 0x55f852cf0f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec64[i] = (fRec127[i] * fZec63[i]);
			}
			
			// LOOP 0x55f852cf3140
			// exec code
			for (int i=0; i<count; i++) {
				fZec66[i] = (fRec126[i] * fZec65[i]);
			}
			
			// LOOP 0x55f852cf5340
			// exec code
			for (int i=0; i<count; i++) {
				fZec68[i] = (fRec125[i] * fZec67[i]);
			}
			
			// LOOP 0x55f852cf7170
			// exec code
			for (int i=0; i<count; i++) {
				fZec70[i] = (fRec124[i] * fZec69[i]);
			}
			
			// LOOP 0x55f852cf9430
			// exec code
			for (int i=0; i<count; i++) {
				fZec72[i] = (fRec123[i] * fZec71[i]);
			}
			
			// LOOP 0x55f852cfb290
			// exec code
			for (int i=0; i<count; i++) {
				fZec74[i] = (fRec122[i] * fZec73[i]);
			}
			
			// LOOP 0x55f852cfd460
			// exec code
			for (int i=0; i<count; i++) {
				fZec75[i] = (fSlow31 + (fVec13[i-3] + (fVec13[i-1] + fVec13[i-2])));
			}
			
			// LOOP 0x55f852cff1b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec76[i] = (fSlow32 + (fVec14[i-3] + (fVec14[i-1] + fVec14[i-2])));
			}
			
			// LOOP 0x55f852d00a70
			// exec code
			for (int i=0; i<count; i++) {
				fZec77[i] = (fSlow33 + (fVec15[i-3] + (fVec15[i-1] + fVec15[i-2])));
			}
			
			// LOOP 0x55f852d02790
			// exec code
			for (int i=0; i<count; i++) {
				fZec78[i] = (fSlow34 + (fVec16[i-3] + (fVec16[i-1] + fVec16[i-2])));
			}
			
			// LOOP 0x55f852d04370
			// exec code
			for (int i=0; i<count; i++) {
				fZec79[i] = (fSlow35 + (fVec17[i-3] + (fVec17[i-1] + fVec17[i-2])));
			}
			
			// LOOP 0x55f852d066d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec80[i] = (fSlow36 + (fVec18[i-3] + (fVec18[i-1] + fVec18[i-2])));
			}
			
			// LOOP 0x55f852d08210
			// exec code
			for (int i=0; i<count; i++) {
				fZec81[i] = (fSlow37 + (fVec19[i-3] + (fVec19[i-1] + fVec19[i-2])));
			}
			
			// LOOP 0x55f852d0a570
			// exec code
			for (int i=0; i<count; i++) {
				fZec82[i] = (fSlow38 + (fVec20[i-3] + (fVec20[i-1] + fVec20[i-2])));
			}
			
			// LOOP 0x55f852d0c830
			// exec code
			for (int i=0; i<count; i++) {
				fZec83[i] = (fSlow39 + (fVec21[i-3] + (fVec21[i-1] + fVec21[i-2])));
			}
			
			// LOOP 0x55f852d0e2d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec84[i] = (fSlow40 + (fVec22[i-3] + (fVec22[i-1] + fVec22[i-2])));
			}
			
			// LOOP 0x55f852d10590
			// exec code
			for (int i=0; i<count; i++) {
				fZec85[i] = (fSlow41 + (fVec23[i-3] + (fVec23[i-1] + fVec23[i-2])));
			}
			
			// LOOP 0x55f852d11f90
			// exec code
			for (int i=0; i<count; i++) {
				fZec86[i] = (fSlow42 + (fVec24[i-3] + (fVec24[i-1] + fVec24[i-2])));
			}
			
			// LOOP 0x55f852d141b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec87[i] = (fSlow43 + (fVec25[i-3] + (fVec25[i-1] + fVec25[i-2])));
			}
			
			// LOOP 0x55f852d16350
			// exec code
			for (int i=0; i<count; i++) {
				fZec88[i] = (fSlow44 + (fVec26[i-3] + (fVec26[i-1] + fVec26[i-2])));
			}
			
			// LOOP 0x55f852d17d00
			// exec code
			for (int i=0; i<count; i++) {
				fZec89[i] = (fSlow45 + (fVec27[i-3] + (fVec27[i-1] + fVec27[i-2])));
			}
			
			// LOOP 0x55f852d19e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec90[i] = (fSlow46 + (fVec28[i-3] + (fVec28[i-1] + fVec28[i-2])));
			}
			
			// LOOP 0x55f852d1bd80
			// exec code
			for (int i=0; i<count; i++) {
				fZec91[i] = (fSlow47 + (fVec29[i-3] + (fVec29[i-1] + fVec29[i-2])));
			}
			
			// LOOP 0x55f852d1e8b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec92[i] = (fSlow48 + (fVec30[i-3] + (fVec30[i-1] + fVec30[i-2])));
			}
			
			// LOOP 0x55f852d206c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec93[i] = (fSlow49 + (fVec31[i-3] + (fVec31[i-1] + fVec31[i-2])));
			}
			
			// LOOP 0x55f852d23150
			// exec code
			for (int i=0; i<count; i++) {
				fZec94[i] = (fSlow50 + (fVec32[i-3] + (fVec32[i-1] + fVec32[i-2])));
			}
			
			// LOOP 0x55f852d25aa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec95[i] = (fSlow51 + (fVec33[i-3] + (fVec33[i-1] + fVec33[i-2])));
			}
			
			// LOOP 0x55f852d27770
			// exec code
			for (int i=0; i<count; i++) {
				fZec96[i] = (fSlow52 + (fVec34[i-3] + (fVec34[i-1] + fVec34[i-2])));
			}
			
			// LOOP 0x55f852d2a020
			// exec code
			for (int i=0; i<count; i++) {
				fZec97[i] = (fSlow53 + (fVec35[i-3] + (fVec35[i-1] + fVec35[i-2])));
			}
			
			// LOOP 0x55f852d2bbb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec98[i] = (fSlow54 + (fVec36[i-3] + (fVec36[i-1] + fVec36[i-2])));
			}
			
			// LOOP 0x55f852d2e360
			// exec code
			for (int i=0; i<count; i++) {
				fZec99[i] = (fSlow55 + (fVec37[i-3] + (fVec37[i-1] + fVec37[i-2])));
			}
			
			// LOOP 0x55f852d308d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec100[i] = (fSlow56 + (fVec38[i-3] + (fVec38[i-1] + fVec38[i-2])));
			}
			
			// LOOP 0x55f852d32220
			// exec code
			for (int i=0; i<count; i++) {
				fZec101[i] = (fSlow57 + (fVec39[i-3] + (fVec39[i-1] + fVec39[i-2])));
			}
			
			// LOOP 0x55f852d34670
			// exec code
			for (int i=0; i<count; i++) {
				fZec102[i] = (fSlow58 + (fVec40[i-3] + (fVec40[i-1] + fVec40[i-2])));
			}
			
			// LOOP 0x55f852d36840
			// exec code
			for (int i=0; i<count; i++) {
				fZec103[i] = (fSlow59 + (fVec41[i-3] + (fVec41[i-1] + fVec41[i-2])));
			}
			
			// LOOP 0x55f852d39a50
			// exec code
			for (int i=0; i<count; i++) {
				fZec104[i] = (fSlow60 + (fVec42[i-3] + (fVec42[i-1] + fVec42[i-2])));
			}
			
			// LOOP 0x55f852d3ba40
			// exec code
			for (int i=0; i<count; i++) {
				fZec105[i] = (fSlow61 + (fVec43[i-3] + (fVec43[i-1] + fVec43[i-2])));
			}
			
			// LOOP 0x55f852d3eb10
			// exec code
			for (int i=0; i<count; i++) {
				fZec106[i] = (fSlow62 + (fVec44[i-3] + (fVec44[i-1] + fVec44[i-2])));
			}
			
			// LOOP 0x55f852d419e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec107[i] = (fSlow63 + (fVec45[i-3] + (fVec45[i-1] + fVec45[i-2])));
			}
			
			// LOOP 0x55f852d437f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec108[i] = (fSlow64 + (fVec46[i-3] + (fVec46[i-1] + fVec46[i-2])));
			}
			
			// LOOP 0x55f852d465a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec109[i] = (fSlow65 + (fVec47[i-3] + (fVec47[i-1] + fVec47[i-2])));
			}
			
			// LOOP 0x55f852d481d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec110[i] = (fSlow66 + (fVec48[i-3] + (fVec48[i-1] + fVec48[i-2])));
			}
			
			// LOOP 0x55f852d4ada0
			// exec code
			for (int i=0; i<count; i++) {
				fZec111[i] = (fSlow67 + (fVec49[i-3] + (fVec49[i-1] + fVec49[i-2])));
			}
			
			// LOOP 0x55f852d4d6f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec112[i] = (fSlow68 + (fVec50[i-3] + (fVec50[i-1] + fVec50[i-2])));
			}
			
			// LOOP 0x55f852d4f0a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec113[i] = (fSlow69 + (fVec51[i-3] + (fVec51[i-1] + fVec51[i-2])));
			}
			
			// LOOP 0x55f852d51810
			// exec code
			for (int i=0; i<count; i++) {
				fZec114[i] = (fSlow70 + (fVec52[i-3] + (fVec52[i-1] + fVec52[i-2])));
			}
			
			// LOOP 0x55f852d53c60
			// exec code
			for (int i=0; i<count; i++) {
				fZec115[i] = (fSlow71 + (fVec53[i-3] + (fVec53[i-1] + fVec53[i-2])));
			}
			
			// LOOP 0x55f852d57550
			// exec code
			for (int i=0; i<count; i++) {
				fZec116[i] = (fSlow72 + (fVec54[i-3] + (fVec54[i-1] + fVec54[i-2])));
			}
			
			// LOOP 0x55f852d59720
			// exec code
			for (int i=0; i<count; i++) {
				fZec117[i] = (fSlow73 + (fVec55[i-3] + (fVec55[i-1] + fVec55[i-2])));
			}
			
			// LOOP 0x55f852d5ce30
			// exec code
			for (int i=0; i<count; i++) {
				fZec118[i] = (fSlow74 + (fVec56[i-3] + (fVec56[i-1] + fVec56[i-2])));
			}
			
			// LOOP 0x55f852d602c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec119[i] = (fSlow75 + (fVec57[i-3] + (fVec57[i-1] + fVec57[i-2])));
			}
			
			// LOOP 0x55f852d62210
			// exec code
			for (int i=0; i<count; i++) {
				fZec120[i] = (fSlow76 + (fVec58[i-3] + (fVec58[i-1] + fVec58[i-2])));
			}
			
			// LOOP 0x55f852d654c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec121[i] = (fSlow77 + (fVec59[i-3] + (fVec59[i-1] + fVec59[i-2])));
			}
			
			// LOOP 0x55f852d671d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec122[i] = (fSlow78 + (fVec60[i-3] + (fVec60[i-1] + fVec60[i-2])));
			}
			
			// LOOP 0x55f852d89ed0
			// exec code
			for (int i=0; i<count; i++) {
				fZec127[i] = (fRec82[i] + (fRec80[i] + (fRec78[i] + (fRec76[i] + fZec126[i]))));
			}
			
			// LOOP 0x55f852d8bcb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec128[i] = (0.5f * fRec133[i]);
			}
			
			// LOOP 0x55f852d8c110
			// exec code
			for (int i=0; i<count; i++) {
				fZec129[i] = (0.5f * fRec132[i]);
			}
			
			// LOOP 0x55f852d8c570
			// exec code
			for (int i=0; i<count; i++) {
				fZec130[i] = (0.5f * fRec131[i]);
			}
			
			// LOOP 0x55f852d8c9d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec131[i] = (0.5f * fRec130[i]);
			}
			
			// LOOP 0x55f852d8ce30
			// exec code
			for (int i=0; i<count; i++) {
				fZec132[i] = (0.5f * fRec129[i]);
			}
			
			// LOOP 0x55f852d8d290
			// exec code
			for (int i=0; i<count; i++) {
				fZec133[i] = (0.5f * fRec128[i]);
			}
			
			// LOOP 0x55f852d8d6f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec134[i] = (0.5f * fRec127[i]);
			}
			
			// LOOP 0x55f852d8db50
			// exec code
			for (int i=0; i<count; i++) {
				fZec135[i] = (0.5f * fRec126[i]);
			}
			
			// LOOP 0x55f852d8dfb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec136[i] = (0.5f * fRec125[i]);
			}
			
			// LOOP 0x55f852d8e410
			// exec code
			for (int i=0; i<count; i++) {
				fZec137[i] = (0.5f * fRec124[i]);
			}
			
			// LOOP 0x55f852d8e870
			// exec code
			for (int i=0; i<count; i++) {
				fZec138[i] = (0.5f * fRec120[i]);
			}
			
			// LOOP 0x55f852d8ecd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec139[i] = (0.5f * fRec118[i]);
			}
			
			// LOOP 0x55f852d8f130
			// exec code
			for (int i=0; i<count; i++) {
				fZec140[i] = (0.5f * fRec116[i]);
			}
			
			// LOOP 0x55f852d8f590
			// exec code
			for (int i=0; i<count; i++) {
				fZec141[i] = (0.5f * fRec114[i]);
			}
			
			// LOOP 0x55f852d8f9f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec142[i] = (0.5f * fRec112[i]);
			}
			
			// LOOP 0x55f852d8fe50
			// exec code
			for (int i=0; i<count; i++) {
				fZec143[i] = (0.5f * fRec110[i]);
			}
			
			// LOOP 0x55f852d902b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec144[i] = (0.5f * fRec108[i]);
			}
			
			// LOOP 0x55f852d90710
			// exec code
			for (int i=0; i<count; i++) {
				fZec145[i] = (0.5f * fRec106[i]);
			}
			
			// LOOP 0x55f852d90b70
			// exec code
			for (int i=0; i<count; i++) {
				fZec146[i] = (0.5f * fRec104[i]);
			}
			
			// LOOP 0x55f852d90fd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec147[i] = (0.5f * fRec102[i]);
			}
			
			// LOOP 0x55f852d91430
			// exec code
			for (int i=0; i<count; i++) {
				fZec148[i] = (0.5f * fRec100[i]);
			}
			
			// LOOP 0x55f852d91890
			// exec code
			for (int i=0; i<count; i++) {
				fZec149[i] = (0.5f * fRec98[i]);
			}
			
			// LOOP 0x55f852d91cf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec150[i] = (0.5f * fRec96[i]);
			}
			
			// LOOP 0x55f852d92150
			// exec code
			for (int i=0; i<count; i++) {
				fZec151[i] = (0.5f * fRec94[i]);
			}
			
			// LOOP 0x55f852d925d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec152[i] = (0.5f * fRec92[i]);
			}
			
			// LOOP 0x55f852d92a50
			// exec code
			for (int i=0; i<count; i++) {
				fZec153[i] = (0.5f * fRec90[i]);
			}
			
			// LOOP 0x55f852d92ed0
			// exec code
			for (int i=0; i<count; i++) {
				fZec154[i] = (0.5f * fRec88[i]);
			}
			
			// LOOP 0x55f852d933b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec155[i] = (0.5f * fRec86[i]);
			}
			
			// LOOP 0x55f852d93920
			// exec code
			for (int i=0; i<count; i++) {
				fZec156[i] = (0.5f * fRec84[i]);
			}
			
			// LOOP 0x55f852f028a0
			// pre processing
			for (int i=0; i<4; i++) iRec189_tmp[i]=iRec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec189[i] = ((int(((fZec181[i] - (0.5f * fYec68[i-1])) < 0)))?(1 - iRec189[i-1]):iRec189[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec189_perm[i]=iRec189_tmp[count+i];
			
			// LOOP 0x55f852f0b050
			// pre processing
			for (int i=0; i<4; i++) iRec194_tmp[i]=iRec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec194[i] = ((int(((fZec183[i] - (0.5f * fYec70[i-1])) < 0)))?(1 - iRec194[i-1]):iRec194[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec194_perm[i]=iRec194_tmp[count+i];
			
			// LOOP 0x55f852f139b0
			// pre processing
			for (int i=0; i<4; i++) iRec199_tmp[i]=iRec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec199[i] = ((int(((fZec185[i] - (0.5f * fYec72[i-1])) < 0)))?(1 - iRec199[i-1]):iRec199[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec199_perm[i]=iRec199_tmp[count+i];
			
			// LOOP 0x55f852f1c2b0
			// pre processing
			for (int i=0; i<4; i++) iRec204_tmp[i]=iRec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec204[i] = ((int(((fZec187[i] - (0.5f * fYec74[i-1])) < 0)))?(1 - iRec204[i-1]):iRec204[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec204_perm[i]=iRec204_tmp[count+i];
			
			// LOOP 0x55f852f24bb0
			// pre processing
			for (int i=0; i<4; i++) iRec209_tmp[i]=iRec209_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec209[i] = ((int(((fZec189[i] - (0.5f * fYec76[i-1])) < 0)))?(1 - iRec209[i-1]):iRec209[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec209_perm[i]=iRec209_tmp[count+i];
			
			// LOOP 0x55f852f2d4b0
			// pre processing
			for (int i=0; i<4; i++) iRec214_tmp[i]=iRec214_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec214[i] = ((int(((fZec191[i] - (0.5f * fYec78[i-1])) < 0)))?(1 - iRec214[i-1]):iRec214[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec214_perm[i]=iRec214_tmp[count+i];
			
			// LOOP 0x55f852f35db0
			// pre processing
			for (int i=0; i<4; i++) iRec219_tmp[i]=iRec219_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec219[i] = ((int(((fZec193[i] - (0.5f * fYec80[i-1])) < 0)))?(1 - iRec219[i-1]):iRec219[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec219_perm[i]=iRec219_tmp[count+i];
			
			// LOOP 0x55f852f3e6b0
			// pre processing
			for (int i=0; i<4; i++) iRec224_tmp[i]=iRec224_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec224[i] = ((int(((fZec194[i] - (0.5f * fYec81[i-1])) < 0)))?(1 - iRec224[i-1]):iRec224[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec224_perm[i]=iRec224_tmp[count+i];
			
			// LOOP 0x55f852f44d60
			// pre processing
			for (int i=0; i<4; i++) iRec228_tmp[i]=iRec228_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec228[i] = ((int(((fZec195[i] - (0.5f * fYec82[i-1])) < 0)))?(1 - iRec228[i-1]):iRec228[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec228_perm[i]=iRec228_tmp[count+i];
			
			// LOOP 0x55f852f4b6f0
			// pre processing
			for (int i=0; i<4; i++) iRec232_tmp[i]=iRec232_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec232[i] = ((int(((fZec196[i] - (0.5f * fYec83[i-1])) < 0)))?(1 - iRec232[i-1]):iRec232[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec232_perm[i]=iRec232_tmp[count+i];
			
			// LOOP 0x55f852f51da0
			// pre processing
			for (int i=0; i<4; i++) iRec236_tmp[i]=iRec236_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec236[i] = ((int(((fZec197[i] - (0.5f * fYec84[i-1])) < 0)))?(1 - iRec236[i-1]):iRec236[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec236_perm[i]=iRec236_tmp[count+i];
			
			// LOOP 0x55f852f58540
			// pre processing
			for (int i=0; i<4; i++) iRec240_tmp[i]=iRec240_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec240[i] = ((int(((fZec198[i] - (0.5f * fYec85[i-1])) < 0)))?(1 - iRec240[i-1]):iRec240[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec240_perm[i]=iRec240_tmp[count+i];
			
			// SECTION : 23
			// LOOP 0x55f852ce3aa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec123[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow80 * (((((((((((((((((fRec1[i] * fZec122[i]) + (fRec8[i] * fZec121[i])) + (fRec14[i] * fZec120[i])) + (fRec20[i] * fZec119[i])) + (fRec26[i] * fZec118[i])) + (fRec32[i] * fZec117[i])) + (fRec38[i] * fZec116[i])) + (fRec44[i] * fZec115[i])) + (fRec50[i] * fZec114[i])) + (fRec56[i] * fZec113[i])) + (fRec62[i] * fZec112[i])) + (fRec68[i] * fZec111[i])) + (fRec74[i] * fZec110[i])) + (fRec76[i] * fZec109[i])) + (fRec78[i] * fZec108[i])) + (fRec80[i] * fZec107[i])) + (fRec82[i] * fZec106[i]))) + (fRec84[i] * fZec105[i])) + (fRec86[i] * fZec104[i])) + (fRec88[i] * fZec103[i])) + (fRec90[i] * fZec102[i])) + (fRec92[i] * fZec101[i])) + (fRec94[i] * fZec100[i])) + (fRec96[i] * fZec99[i])) + (fRec98[i] * fZec98[i])) + (fRec100[i] * fZec97[i])) + (fRec102[i] * fZec96[i])) + (fRec104[i] * fZec95[i])) + (fRec106[i] * fZec94[i])) + (fRec108[i] * fZec93[i])) + (fRec110[i] * fZec92[i])) + (fRec112[i] * fZec91[i])) + (fRec114[i] * fZec90[i])) + (fRec116[i] * fZec89[i])) + (fRec118[i] * fZec88[i])) + (fRec120[i] * fZec87[i])) + (fRec122[i] * fZec86[i])) + (fRec123[i] * fZec85[i])) + (fRec124[i] * fZec84[i])) + (fRec125[i] * fZec83[i])) + (fRec126[i] * fZec82[i])) + (fRec127[i] * fZec81[i])) + (fRec128[i] * fZec80[i])) + (fRec129[i] * fZec79[i])) + (fRec130[i] * fZec78[i])) + (fRec131[i] * fZec77[i])) + (fRec132[i] * fZec76[i])) + (fRec133[i] * fZec75[i])) + fZec74[i]) + fZec72[i]) + fZec70[i]) + fZec68[i]) + fZec66[i]) + fZec64[i]) + fZec62[i]) + fZec60[i]) + fZec58[i]) + fZec56[i]) + fZec54[i]) + fZec52[i]) + fZec50[i]));
			}
			
			// LOOP 0x55f852d6a830
			// exec code
			for (int i=0; i<count; i++) {
				fZec157[i] = ((2 * ((((((((((((fRec123[i] + (fRec122[i] + ((((((((((((((((((fZec156[i] + fZec155[i]) + fZec154[i]) + fZec153[i]) + fZec152[i]) + fZec151[i]) + fZec150[i]) + fZec149[i]) + fZec148[i]) + fZec147[i]) + fZec146[i]) + fZec145[i]) + fZec144[i]) + fZec143[i]) + fZec142[i]) + fZec141[i]) + fZec140[i]) + fZec139[i]) + fZec138[i]))) + fZec137[i]) + fZec136[i]) + fZec135[i]) + fZec134[i]) + fZec133[i]) + fZec132[i]) + fZec131[i]) + fZec130[i]) + fZec129[i]) + fZec128[i]) + (fSlow81 * fZec127[i]))) + (fRec133[i] + (fRec132[i] + (fRec131[i] + (fRec130[i] + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec125[i] + (fRec122[i] + fRec124[i])))))))))));
			}
			
			// LOOP 0x55f852d95f80
			// pre processing
			for (int i=0; i<4; i++) fRec136_tmp[i]=fRec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec136[i] = (fRec136[i-1] + (fConst15 * (yc20_get_sample(fZec159[i], 7, 0) - fRec136[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec136_perm[i]=fRec136_tmp[count+i];
			
			// LOOP 0x55f852dc5ad0
			// pre processing
			for (int i=0; i<4; i++) fRec140_tmp[i]=fRec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec140[i] = (fRec140[i-1] + (fConst17 * (yc20_get_sample(fZec161[i], 8, 0) - fRec140[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec140_perm[i]=fRec140_tmp[count+i];
			
			// LOOP 0x55f852dcca40
			// pre processing
			for (int i=0; i<4; i++) fRec144_tmp[i]=fRec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec144[i] = (fRec144[i-1] + (fConst17 * (yc20_get_sample(fZec163[i], 9, 0) - fRec144[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec144_perm[i]=fRec144_tmp[count+i];
			
			// LOOP 0x55f852dd36d0
			// pre processing
			for (int i=0; i<4; i++) fRec148_tmp[i]=fRec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec148[i] = (fRec148[i-1] + (fConst17 * (yc20_get_sample(fZec165[i], 10, 0) - fRec148[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec148_perm[i]=fRec148_tmp[count+i];
			
			// LOOP 0x55f852dda360
			// pre processing
			for (int i=0; i<4; i++) fRec152_tmp[i]=fRec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec152[i] = (fRec152[i-1] + (fConst17 * (yc20_get_sample(fZec167[i], 11, 0) - fRec152[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec152_perm[i]=fRec152_tmp[count+i];
			
			// LOOP 0x55f852de0ff0
			// pre processing
			for (int i=0; i<4; i++) fRec156_tmp[i]=fRec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec156[i] = (fRec156[i-1] + (fConst18 * (yc20_get_sample(fZec168[i], 0, 0) - fRec156[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec156_perm[i]=fRec156_tmp[count+i];
			
			// LOOP 0x55f852de5b20
			// pre processing
			for (int i=0; i<4; i++) fRec159_tmp[i]=fRec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec159[i] = (fRec159[i-1] + (fConst18 * (yc20_get_sample(fZec169[i], 1, 0) - fRec159[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec159_perm[i]=fRec159_tmp[count+i];
			
			// LOOP 0x55f852dea370
			// pre processing
			for (int i=0; i<4; i++) fRec162_tmp[i]=fRec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec162[i] = (fRec162[i-1] + (fConst18 * (yc20_get_sample(fZec170[i], 2, 0) - fRec162[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec162_perm[i]=fRec162_tmp[count+i];
			
			// LOOP 0x55f852deebc0
			// pre processing
			for (int i=0; i<4; i++) fRec165_tmp[i]=fRec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec165[i] = (fRec165[i-1] + (fConst18 * (yc20_get_sample(fZec171[i], 3, 0) - fRec165[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec165_perm[i]=fRec165_tmp[count+i];
			
			// LOOP 0x55f852df3420
			// pre processing
			for (int i=0; i<4; i++) fRec168_tmp[i]=fRec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec168[i] = (fRec168[i-1] + (fConst19 * (yc20_get_sample(fZec172[i], 4, 0) - fRec168[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec168_perm[i]=fRec168_tmp[count+i];
			
			// LOOP 0x55f852f024c0
			// pre processing
			for (int i=0; i<4; i++) fRec188_tmp[i]=fRec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec188[i] = (fRec188[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec189[i] + fZec181[i])), 0, 0) - fRec188[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec188_perm[i]=fRec188_tmp[count+i];
			
			// LOOP 0x55f852f0ac70
			// pre processing
			for (int i=0; i<4; i++) fRec193_tmp[i]=fRec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec193[i] = (fRec193[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec194[i] + fZec183[i])), 1, 0) - fRec193[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec193_perm[i]=fRec193_tmp[count+i];
			
			// LOOP 0x55f852f135d0
			// pre processing
			for (int i=0; i<4; i++) fRec198_tmp[i]=fRec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec198[i] = (fRec198[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec199[i] + fZec185[i])), 2, 0) - fRec198[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec198_perm[i]=fRec198_tmp[count+i];
			
			// LOOP 0x55f852f1bed0
			// pre processing
			for (int i=0; i<4; i++) fRec203_tmp[i]=fRec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec203[i] = (fRec203[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec204[i] + fZec187[i])), 3, 0) - fRec203[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec203_perm[i]=fRec203_tmp[count+i];
			
			// LOOP 0x55f852f247d0
			// pre processing
			for (int i=0; i<4; i++) fRec208_tmp[i]=fRec208_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec208[i] = (fRec208[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec209[i] + fZec189[i])), 4, 0) - fRec208[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec208_perm[i]=fRec208_tmp[count+i];
			
			// LOOP 0x55f852f2d0d0
			// pre processing
			for (int i=0; i<4; i++) fRec213_tmp[i]=fRec213_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec213[i] = (fRec213[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec214[i] + fZec191[i])), 5, 0) - fRec213[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec213_perm[i]=fRec213_tmp[count+i];
			
			// LOOP 0x55f852f359d0
			// pre processing
			for (int i=0; i<4; i++) fRec218_tmp[i]=fRec218_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec218[i] = (fRec218[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec219[i] + fZec193[i])), 6, 0) - fRec218[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec218_perm[i]=fRec218_tmp[count+i];
			
			// LOOP 0x55f852f3e2d0
			// pre processing
			for (int i=0; i<4; i++) fRec223_tmp[i]=fRec223_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec223[i] = (fRec223[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec224[i] + fZec194[i])), 7, 0) - fRec223[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec223_perm[i]=fRec223_tmp[count+i];
			
			// LOOP 0x55f852f44980
			// pre processing
			for (int i=0; i<4; i++) fRec227_tmp[i]=fRec227_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec227[i] = (fRec227[i-1] + (fConst23 * (yc20_get_sample((0.5f * (iRec228[i] + fZec195[i])), 8, 0) - fRec227[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec227_perm[i]=fRec227_tmp[count+i];
			
			// LOOP 0x55f852f4b310
			// pre processing
			for (int i=0; i<4; i++) fRec231_tmp[i]=fRec231_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec231[i] = (fRec231[i-1] + (fConst23 * (yc20_get_sample((0.5f * (iRec232[i] + fZec196[i])), 9, 0) - fRec231[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec231_perm[i]=fRec231_tmp[count+i];
			
			// LOOP 0x55f852f519c0
			// pre processing
			for (int i=0; i<4; i++) fRec235_tmp[i]=fRec235_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec235[i] = (fRec235[i-1] + (fConst23 * (yc20_get_sample((0.5f * (iRec236[i] + fZec197[i])), 10, 0) - fRec235[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec235_perm[i]=fRec235_tmp[count+i];
			
			// LOOP 0x55f852f58160
			// pre processing
			for (int i=0; i<4; i++) fRec239_tmp[i]=fRec239_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec239[i] = (fRec239[i-1] + (fConst23 * (yc20_get_sample((0.5f * (iRec240[i] + fZec198[i])), 11, 0) - fRec239[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec239_perm[i]=fRec239_tmp[count+i];
			
			// LOOP 0x55f852f5e820
			// pre processing
			for (int i=0; i<4; i++) fRec243_tmp[i]=fRec243_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec243[i] = (fRec243[i-1] + (fConst23 * (yc20_get_sample(fZec181[i], 0, 0) - fRec243[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec243_perm[i]=fRec243_tmp[count+i];
			
			// LOOP 0x55f852f613b0
			// pre processing
			for (int i=0; i<4; i++) fRec245_tmp[i]=fRec245_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec245[i] = (fRec245[i-1] + (fConst23 * (yc20_get_sample(fZec183[i], 1, 0) - fRec245[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec245_perm[i]=fRec245_tmp[count+i];
			
			// LOOP 0x55f852f63b30
			// pre processing
			for (int i=0; i<4; i++) fRec247_tmp[i]=fRec247_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec247[i] = (fRec247[i-1] + (fConst23 * (yc20_get_sample(fZec185[i], 2, 0) - fRec247[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec247_perm[i]=fRec247_tmp[count+i];
			
			// LOOP 0x55f852f662b0
			// pre processing
			for (int i=0; i<4; i++) fRec249_tmp[i]=fRec249_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec249[i] = (fRec249[i-1] + (fConst23 * (yc20_get_sample(fZec187[i], 3, 0) - fRec249[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec249_perm[i]=fRec249_tmp[count+i];
			
			// LOOP 0x55f852f68aa0
			// pre processing
			for (int i=0; i<4; i++) fRec251_tmp[i]=fRec251_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec251[i] = (fRec251[i-1] + (fConst25 * (yc20_get_sample(fZec189[i], 4, 0) - fRec251[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec251_perm[i]=fRec251_tmp[count+i];
			
			// LOOP 0x55f852f6b520
			// pre processing
			for (int i=0; i<4; i++) fRec253_tmp[i]=fRec253_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec253[i] = (fRec253[i-1] + (fConst25 * (yc20_get_sample(fZec191[i], 5, 0) - fRec253[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec253_perm[i]=fRec253_tmp[count+i];
			
			// LOOP 0x55f852f6dd10
			// pre processing
			for (int i=0; i<4; i++) fRec255_tmp[i]=fRec255_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec255[i] = (fRec255[i-1] + (fConst25 * (yc20_get_sample(fZec193[i], 6, 0) - fRec255[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec255_perm[i]=fRec255_tmp[count+i];
			
			// LOOP 0x55f852f70500
			// pre processing
			for (int i=0; i<4; i++) fRec257_tmp[i]=fRec257_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec257[i] = (fRec257[i-1] + (fConst25 * (yc20_get_sample(fZec194[i], 7, 0) - fRec257[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec257_perm[i]=fRec257_tmp[count+i];
			
			// LOOP 0x55f852f72cf0
			// pre processing
			for (int i=0; i<4; i++) fRec259_tmp[i]=fRec259_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec259[i] = (fRec259[i-1] + (fConst26 * (yc20_get_sample(fZec195[i], 8, 0) - fRec259[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec259_perm[i]=fRec259_tmp[count+i];
			
			// LOOP 0x55f852f757c0
			// pre processing
			for (int i=0; i<4; i++) fRec261_tmp[i]=fRec261_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec261[i] = (fRec261[i-1] + (fConst26 * (yc20_get_sample(fZec196[i], 9, 0) - fRec261[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec261_perm[i]=fRec261_tmp[count+i];
			
			// LOOP 0x55f852f77fb0
			// pre processing
			for (int i=0; i<4; i++) fRec263_tmp[i]=fRec263_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec263[i] = (fRec263[i-1] + (fConst26 * (yc20_get_sample(fZec197[i], 10, 0) - fRec263[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec263_perm[i]=fRec263_tmp[count+i];
			
			// LOOP 0x55f852f7a7a0
			// pre processing
			for (int i=0; i<4; i++) fRec265_tmp[i]=fRec265_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec265[i] = (fRec265[i-1] + (fConst26 * (yc20_get_sample(fZec198[i], 11, 0) - fRec265[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec265_perm[i]=fRec265_tmp[count+i];
			
			// LOOP 0x55f852f7cf90
			// pre processing
			for (int i=0; i<4; i++) fRec267_tmp[i]=fRec267_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec267[i] = (fRec267[i-1] + (fConst26 * (yc20_get_sample(fZec180[i], 0, 0) - fRec267[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec267_perm[i]=fRec267_tmp[count+i];
			
			// LOOP 0x55f852f7f640
			// pre processing
			for (int i=0; i<4; i++) fRec269_tmp[i]=fRec269_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec269[i] = (fRec269[i-1] + (fConst26 * (yc20_get_sample(fZec182[i], 1, 0) - fRec269[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec269_perm[i]=fRec269_tmp[count+i];
			
			// LOOP 0x55f852f81cf0
			// pre processing
			for (int i=0; i<4; i++) fRec271_tmp[i]=fRec271_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec271[i] = (fRec271[i-1] + (fConst26 * (yc20_get_sample(fZec184[i], 2, 0) - fRec271[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec271_perm[i]=fRec271_tmp[count+i];
			
			// LOOP 0x55f852f843a0
			// pre processing
			for (int i=0; i<4; i++) fRec273_tmp[i]=fRec273_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec273[i] = (fRec273[i-1] + (fConst26 * (yc20_get_sample(fZec186[i], 3, 0) - fRec273[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec273_perm[i]=fRec273_tmp[count+i];
			
			// LOOP 0x55f852f86a50
			// pre processing
			for (int i=0; i<4; i++) fRec275_tmp[i]=fRec275_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec275[i] = (fRec275[i-1] + (fConst15 * (yc20_get_sample(fZec188[i], 4, 0) - fRec275[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec275_perm[i]=fRec275_tmp[count+i];
			
			// LOOP 0x55f852f89100
			// pre processing
			for (int i=0; i<4; i++) fRec277_tmp[i]=fRec277_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec277[i] = (fRec277[i-1] + (fConst15 * (yc20_get_sample(fZec190[i], 5, 0) - fRec277[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec277_perm[i]=fRec277_tmp[count+i];
			
			// LOOP 0x55f852f8b7b0
			// pre processing
			for (int i=0; i<4; i++) fRec279_tmp[i]=fRec279_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec279[i] = (fRec279[i-1] + (fConst15 * (yc20_get_sample(fZec192[i], 6, 0) - fRec279[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec279_perm[i]=fRec279_tmp[count+i];
			
			// SECTION : 24
			// LOOP 0x55f852ce3980
			// pre processing
			for (int i=0; i<4; i++) fYec48_tmp[i]=fYec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec48[i] = (fZec157[i] - fZec123[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec48_perm[i]=fYec48_tmp[count+i];
			
			// LOOP 0x55f852d95b30
			// pre processing
			for (int i=0; i<4; i++) fRec135_tmp[i]=fRec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec135[i] = (fConst16 * (fRec135[i-1] + (fRec136[i] - fRec136[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec135_perm[i]=fRec135_tmp[count+i];
			
			// LOOP 0x55f852dc5730
			// pre processing
			for (int i=0; i<4; i++) fRec139_tmp[i]=fRec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec139[i] = (fConst16 * (fRec139[i-1] + (fRec140[i] - fRec140[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec139_perm[i]=fRec139_tmp[count+i];
			
			// LOOP 0x55f852dcc6a0
			// pre processing
			for (int i=0; i<4; i++) fRec143_tmp[i]=fRec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec143[i] = (fConst16 * (fRec143[i-1] + (fRec144[i] - fRec144[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec143_perm[i]=fRec143_tmp[count+i];
			
			// LOOP 0x55f852dd3330
			// pre processing
			for (int i=0; i<4; i++) fRec147_tmp[i]=fRec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec147[i] = (fConst16 * (fRec147[i-1] + (fRec148[i] - fRec148[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec147_perm[i]=fRec147_tmp[count+i];
			
			// LOOP 0x55f852dd9fc0
			// pre processing
			for (int i=0; i<4; i++) fRec151_tmp[i]=fRec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec151[i] = (fConst16 * (fRec151[i-1] + (fRec152[i] - fRec152[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec151_perm[i]=fRec151_tmp[count+i];
			
			// LOOP 0x55f852de0c50
			// pre processing
			for (int i=0; i<4; i++) fRec155_tmp[i]=fRec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec155[i] = (fConst5 * (fRec155[i-1] + (fRec156[i] - fRec156[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec155_perm[i]=fRec155_tmp[count+i];
			
			// LOOP 0x55f852de5780
			// pre processing
			for (int i=0; i<4; i++) fRec158_tmp[i]=fRec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec158[i] = (fConst5 * (fRec158[i-1] + (fRec159[i] - fRec159[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec158_perm[i]=fRec158_tmp[count+i];
			
			// LOOP 0x55f852de9fd0
			// pre processing
			for (int i=0; i<4; i++) fRec161_tmp[i]=fRec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec161[i] = (fConst5 * (fRec161[i-1] + (fRec162[i] - fRec162[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec161_perm[i]=fRec161_tmp[count+i];
			
			// LOOP 0x55f852dee820
			// pre processing
			for (int i=0; i<4; i++) fRec164_tmp[i]=fRec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec164[i] = (fConst5 * (fRec164[i-1] + (fRec165[i] - fRec165[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec164_perm[i]=fRec164_tmp[count+i];
			
			// LOOP 0x55f852df3080
			// pre processing
			for (int i=0; i<4; i++) fRec167_tmp[i]=fRec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec167[i] = (fConst5 * (fRec167[i-1] + (fRec168[i] - fRec168[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec167_perm[i]=fRec167_tmp[count+i];
			
			// LOOP 0x55f852df7f60
			// pre processing
			for (int i=0; i<4; i++) fRec171_tmp[i]=fRec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec171[i] = (fRec171[i-1] + (fConst19 * (yc20_get_sample(fZec173[i], 5, 0) - fRec171[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec171_perm[i]=fRec171_tmp[count+i];
			
			// LOOP 0x55f852dfc7c0
			// pre processing
			for (int i=0; i<4; i++) fRec174_tmp[i]=fRec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec174[i] = (fRec174[i-1] + (fConst19 * (yc20_get_sample(fZec174[i], 6, 0) - fRec174[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec174_perm[i]=fRec174_tmp[count+i];
			
			// LOOP 0x55f852e01020
			// pre processing
			for (int i=0; i<4; i++) fRec177_tmp[i]=fRec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec177[i] = (fRec177[i-1] + (fConst19 * (yc20_get_sample(fZec158[i], 7, 0) - fRec177[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec177_perm[i]=fRec177_tmp[count+i];
			
			// LOOP 0x55f852e03590
			// pre processing
			for (int i=0; i<4; i++) fRec179_tmp[i]=fRec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec179[i] = (fRec179[i-1] + (fConst20 * (yc20_get_sample(fZec160[i], 8, 0) - fRec179[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec179_perm[i]=fRec179_tmp[count+i];
			
			// LOOP 0x55f852e05de0
			// pre processing
			for (int i=0; i<4; i++) fRec181_tmp[i]=fRec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec181[i] = (fRec181[i-1] + (fConst20 * (yc20_get_sample(fZec162[i], 9, 0) - fRec181[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec181_perm[i]=fRec181_tmp[count+i];
			
			// LOOP 0x55f852e08350
			// pre processing
			for (int i=0; i<4; i++) fRec183_tmp[i]=fRec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec183[i] = (fRec183[i-1] + (fConst20 * (yc20_get_sample(fZec164[i], 10, 0) - fRec183[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec183_perm[i]=fRec183_tmp[count+i];
			
			// LOOP 0x55f852e0a8c0
			// pre processing
			for (int i=0; i<4; i++) fRec185_tmp[i]=fRec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec185[i] = (fRec185[i-1] + (fConst20 * (yc20_get_sample(fZec166[i], 11, 0) - fRec185[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec185_perm[i]=fRec185_tmp[count+i];
			
			// LOOP 0x55f852e14c70
			// exec code
			for (int i=0; i<count; i++) {
				fZec177[i] = (fRec98[i] + (fRec96[i] + (fRec94[i] + (fRec92[i] + (fRec90[i] + (fRec88[i] + (fRec86[i] + (fRec84[i] + fZec127[i]))))))));
			}
			
			// LOOP 0x55f852ed7730
			// pre processing
			for (int i=0; i<4; i++) fRec187_tmp[i]=fRec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec187[i] = (fConst22 * (fRec187[i-1] + (fRec188[i] - fRec188[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec187_perm[i]=fRec187_tmp[count+i];
			
			// LOOP 0x55f852f0a8d0
			// pre processing
			for (int i=0; i<4; i++) fRec192_tmp[i]=fRec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec192[i] = (fConst22 * (fRec192[i-1] + (fRec193[i] - fRec193[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec192_perm[i]=fRec192_tmp[count+i];
			
			// LOOP 0x55f852f13230
			// pre processing
			for (int i=0; i<4; i++) fRec197_tmp[i]=fRec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec197[i] = (fConst22 * (fRec197[i-1] + (fRec198[i] - fRec198[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec197_perm[i]=fRec197_tmp[count+i];
			
			// LOOP 0x55f852f1bb30
			// pre processing
			for (int i=0; i<4; i++) fRec202_tmp[i]=fRec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec202[i] = (fConst22 * (fRec202[i-1] + (fRec203[i] - fRec203[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec202_perm[i]=fRec202_tmp[count+i];
			
			// LOOP 0x55f852f24430
			// pre processing
			for (int i=0; i<4; i++) fRec207_tmp[i]=fRec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec207[i] = (fConst22 * (fRec207[i-1] + (fRec208[i] - fRec208[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec207_perm[i]=fRec207_tmp[count+i];
			
			// LOOP 0x55f852f2cd30
			// pre processing
			for (int i=0; i<4; i++) fRec212_tmp[i]=fRec212_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec212[i] = (fConst22 * (fRec212[i-1] + (fRec213[i] - fRec213[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec212_perm[i]=fRec212_tmp[count+i];
			
			// LOOP 0x55f852f35630
			// pre processing
			for (int i=0; i<4; i++) fRec217_tmp[i]=fRec217_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec217[i] = (fConst22 * (fRec217[i-1] + (fRec218[i] - fRec218[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec217_perm[i]=fRec217_tmp[count+i];
			
			// LOOP 0x55f852f3df30
			// pre processing
			for (int i=0; i<4; i++) fRec222_tmp[i]=fRec222_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec222[i] = (fConst22 * (fRec222[i-1] + (fRec223[i] - fRec223[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec222_perm[i]=fRec222_tmp[count+i];
			
			// LOOP 0x55f852f445e0
			// pre processing
			for (int i=0; i<4; i++) fRec226_tmp[i]=fRec226_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec226[i] = (fConst22 * (fRec226[i-1] + (fRec227[i] - fRec227[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec226_perm[i]=fRec226_tmp[count+i];
			
			// LOOP 0x55f852f4af70
			// pre processing
			for (int i=0; i<4; i++) fRec230_tmp[i]=fRec230_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec230[i] = (fConst22 * (fRec230[i-1] + (fRec231[i] - fRec231[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec230_perm[i]=fRec230_tmp[count+i];
			
			// LOOP 0x55f852f51620
			// pre processing
			for (int i=0; i<4; i++) fRec234_tmp[i]=fRec234_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec234[i] = (fConst22 * (fRec234[i-1] + (fRec235[i] - fRec235[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec234_perm[i]=fRec234_tmp[count+i];
			
			// LOOP 0x55f852f57dc0
			// pre processing
			for (int i=0; i<4; i++) fRec238_tmp[i]=fRec238_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec238[i] = (fConst22 * (fRec238[i-1] + (fRec239[i] - fRec239[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec238_perm[i]=fRec238_tmp[count+i];
			
			// LOOP 0x55f852f5e480
			// pre processing
			for (int i=0; i<4; i++) fRec242_tmp[i]=fRec242_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec242[i] = (fConst24 * (fRec242[i-1] + (fRec243[i] - fRec243[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec242_perm[i]=fRec242_tmp[count+i];
			
			// LOOP 0x55f852f61010
			// pre processing
			for (int i=0; i<4; i++) fRec244_tmp[i]=fRec244_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec244[i] = (fConst24 * (fRec244[i-1] + (fRec245[i] - fRec245[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec244_perm[i]=fRec244_tmp[count+i];
			
			// LOOP 0x55f852f63790
			// pre processing
			for (int i=0; i<4; i++) fRec246_tmp[i]=fRec246_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec246[i] = (fConst24 * (fRec246[i-1] + (fRec247[i] - fRec247[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec246_perm[i]=fRec246_tmp[count+i];
			
			// LOOP 0x55f852f65f10
			// pre processing
			for (int i=0; i<4; i++) fRec248_tmp[i]=fRec248_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec248[i] = (fConst24 * (fRec248[i-1] + (fRec249[i] - fRec249[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec248_perm[i]=fRec248_tmp[count+i];
			
			// LOOP 0x55f852f68700
			// pre processing
			for (int i=0; i<4; i++) fRec250_tmp[i]=fRec250_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec250[i] = (fConst24 * (fRec250[i-1] + (fRec251[i] - fRec251[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec250_perm[i]=fRec250_tmp[count+i];
			
			// LOOP 0x55f852f6b180
			// pre processing
			for (int i=0; i<4; i++) fRec252_tmp[i]=fRec252_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec252[i] = (fConst24 * (fRec252[i-1] + (fRec253[i] - fRec253[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec252_perm[i]=fRec252_tmp[count+i];
			
			// LOOP 0x55f852f6d970
			// pre processing
			for (int i=0; i<4; i++) fRec254_tmp[i]=fRec254_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec254[i] = (fConst24 * (fRec254[i-1] + (fRec255[i] - fRec255[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec254_perm[i]=fRec254_tmp[count+i];
			
			// LOOP 0x55f852f70160
			// pre processing
			for (int i=0; i<4; i++) fRec256_tmp[i]=fRec256_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec256[i] = (fConst24 * (fRec256[i-1] + (fRec257[i] - fRec257[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec256_perm[i]=fRec256_tmp[count+i];
			
			// LOOP 0x55f852f72950
			// pre processing
			for (int i=0; i<4; i++) fRec258_tmp[i]=fRec258_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec258[i] = (fConst24 * (fRec258[i-1] + (fRec259[i] - fRec259[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec258_perm[i]=fRec258_tmp[count+i];
			
			// LOOP 0x55f852f75420
			// pre processing
			for (int i=0; i<4; i++) fRec260_tmp[i]=fRec260_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec260[i] = (fConst24 * (fRec260[i-1] + (fRec261[i] - fRec261[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec260_perm[i]=fRec260_tmp[count+i];
			
			// LOOP 0x55f852f77c10
			// pre processing
			for (int i=0; i<4; i++) fRec262_tmp[i]=fRec262_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec262[i] = (fConst24 * (fRec262[i-1] + (fRec263[i] - fRec263[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec262_perm[i]=fRec262_tmp[count+i];
			
			// LOOP 0x55f852f7a400
			// pre processing
			for (int i=0; i<4; i++) fRec264_tmp[i]=fRec264_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec264[i] = (fConst24 * (fRec264[i-1] + (fRec265[i] - fRec265[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec264_perm[i]=fRec264_tmp[count+i];
			
			// LOOP 0x55f852f7cbf0
			// pre processing
			for (int i=0; i<4; i++) fRec266_tmp[i]=fRec266_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec266[i] = (fConst16 * (fRec266[i-1] + (fRec267[i] - fRec267[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec266_perm[i]=fRec266_tmp[count+i];
			
			// LOOP 0x55f852f7f2a0
			// pre processing
			for (int i=0; i<4; i++) fRec268_tmp[i]=fRec268_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec268[i] = (fConst16 * (fRec268[i-1] + (fRec269[i] - fRec269[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec268_perm[i]=fRec268_tmp[count+i];
			
			// LOOP 0x55f852f81950
			// pre processing
			for (int i=0; i<4; i++) fRec270_tmp[i]=fRec270_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec270[i] = (fConst16 * (fRec270[i-1] + (fRec271[i] - fRec271[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec270_perm[i]=fRec270_tmp[count+i];
			
			// LOOP 0x55f852f84000
			// pre processing
			for (int i=0; i<4; i++) fRec272_tmp[i]=fRec272_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec272[i] = (fConst16 * (fRec272[i-1] + (fRec273[i] - fRec273[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec272_perm[i]=fRec272_tmp[count+i];
			
			// LOOP 0x55f852f866b0
			// pre processing
			for (int i=0; i<4; i++) fRec274_tmp[i]=fRec274_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec274[i] = (fConst16 * (fRec274[i-1] + (fRec275[i] - fRec275[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec274_perm[i]=fRec274_tmp[count+i];
			
			// LOOP 0x55f852f88d60
			// pre processing
			for (int i=0; i<4; i++) fRec276_tmp[i]=fRec276_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec276[i] = (fConst16 * (fRec276[i-1] + (fRec277[i] - fRec277[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec276_perm[i]=fRec276_tmp[count+i];
			
			// LOOP 0x55f852f8b410
			// pre processing
			for (int i=0; i<4; i++) fRec278_tmp[i]=fRec278_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec278[i] = (fConst16 * (fRec278[i-1] + (fRec279[i] - fRec279[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec278_perm[i]=fRec278_tmp[count+i];
			
			// SECTION : 25
			// LOOP 0x55f852ce3040
			// pre processing
			for (int i=0; i<4; i++) fRec134_tmp[i]=fRec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec134[i] = (fConst14 * (fRec134[i-1] + (fZec157[i] - (fZec123[i] + fYec48[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec134_perm[i]=fRec134_tmp[count+i];
			
			// LOOP 0x55f852df7bc0
			// pre processing
			for (int i=0; i<4; i++) fRec170_tmp[i]=fRec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec170[i] = (fConst5 * (fRec170[i-1] + (fRec171[i] - fRec171[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec170_perm[i]=fRec170_tmp[count+i];
			
			// LOOP 0x55f852dfc420
			// pre processing
			for (int i=0; i<4; i++) fRec173_tmp[i]=fRec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec173[i] = (fConst5 * (fRec173[i-1] + (fRec174[i] - fRec174[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec173_perm[i]=fRec173_tmp[count+i];
			
			// LOOP 0x55f852e00c80
			// pre processing
			for (int i=0; i<4; i++) fRec176_tmp[i]=fRec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec176[i] = (fConst5 * (fRec176[i-1] + (fRec177[i] - fRec177[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec176_perm[i]=fRec176_tmp[count+i];
			
			// LOOP 0x55f852e031f0
			// pre processing
			for (int i=0; i<4; i++) fRec178_tmp[i]=fRec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec178[i] = (fConst5 * (fRec178[i-1] + (fRec179[i] - fRec179[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec178_perm[i]=fRec178_tmp[count+i];
			
			// LOOP 0x55f852e05a40
			// pre processing
			for (int i=0; i<4; i++) fRec180_tmp[i]=fRec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec180[i] = (fConst5 * (fRec180[i-1] + (fRec181[i] - fRec181[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec180_perm[i]=fRec180_tmp[count+i];
			
			// LOOP 0x55f852e07fb0
			// pre processing
			for (int i=0; i<4; i++) fRec182_tmp[i]=fRec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec182[i] = (fConst5 * (fRec182[i-1] + (fRec183[i] - fRec183[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec182_perm[i]=fRec182_tmp[count+i];
			
			// LOOP 0x55f852e0a520
			// pre processing
			for (int i=0; i<4; i++) fRec184_tmp[i]=fRec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec184[i] = (fConst5 * (fRec184[i-1] + (fRec185[i] - fRec185[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec184_perm[i]=fRec184_tmp[count+i];
			
			// LOOP 0x55f852e14d90
			// exec code
			for (int i=0; i<count; i++) {
				fZec178[i] = (fRec122[i] + (fRec120[i] + (fRec118[i] + (fRec116[i] + (fRec114[i] + (fRec112[i] + (fRec110[i] + (fRec108[i] + (fRec106[i] + (fRec104[i] + (fRec102[i] + (fRec100[i] + fZec177[i]))))))))))));
			}
			
			// LOOP 0x55f852f934d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec199[i] = (((((((((((((((((fRec187[i] * fZec122[i]) + (fRec192[i] * fZec121[i])) + (fRec197[i] * fZec120[i])) + (fRec202[i] * fZec119[i])) + (fRec207[i] * fZec118[i])) + (fRec212[i] * fZec117[i])) + (fRec217[i] * fZec116[i])) + (fRec222[i] * fZec115[i])) + (fRec226[i] * fZec114[i])) + (fRec230[i] * fZec113[i])) + (fRec234[i] * fZec112[i])) + (fRec238[i] * fZec111[i])) + (fRec242[i] * fZec110[i])) + (fRec244[i] * fZec109[i])) + (fRec246[i] * fZec108[i])) + (fRec248[i] * fZec107[i])) + (fRec250[i] * fZec106[i]));
			}
			
			// LOOP 0x55f8532027d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec210[i] = (((((((((((((((((fRec266[i] * fZec122[i]) + (fRec268[i] * fZec121[i])) + (fRec270[i] * fZec120[i])) + (fRec272[i] * fZec119[i])) + (fRec274[i] * fZec118[i])) + (fRec276[i] * fZec117[i])) + (fRec278[i] * fZec116[i])) + (fRec135[i] * fZec115[i])) + (fRec139[i] * fZec114[i])) + (fRec143[i] * fZec113[i])) + (fRec147[i] * fZec112[i])) + (fRec151[i] * fZec111[i])) + (fRec155[i] * fZec110[i])) + (fRec158[i] * fZec109[i])) + (fRec161[i] * fZec108[i])) + (fRec164[i] * fZec107[i])) + (fRec167[i] * fZec106[i]));
			}
			
			// LOOP 0x55f853307a00
			// exec code
			for (int i=0; i<count; i++) {
				fZec214[i] = (((((((((((((((((fRec242[i] * fZec122[i]) + (fRec244[i] * fZec121[i])) + (fRec246[i] * fZec120[i])) + (fRec248[i] * fZec119[i])) + (fRec250[i] * fZec118[i])) + (fRec252[i] * fZec117[i])) + (fRec254[i] * fZec116[i])) + (fRec256[i] * fZec115[i])) + (fRec258[i] * fZec114[i])) + (fRec260[i] * fZec113[i])) + (fRec262[i] * fZec112[i])) + (fRec264[i] * fZec111[i])) + (fRec266[i] * fZec110[i])) + (fRec268[i] * fZec109[i])) + (fRec270[i] * fZec108[i])) + (fRec272[i] * fZec107[i])) + (fRec274[i] * fZec106[i]));
			}
			
			// SECTION : 26
			// LOOP 0x55f852f8e2e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec200[i] = (0.41975f * (((((((((((((((((((((((((((((((((((((((((((((fSlow80 * fZec199[i]) + (fRec252[i] * fZec105[i])) + (fRec254[i] * fZec104[i])) + (fRec256[i] * fZec103[i])) + (fRec258[i] * fZec102[i])) + (fRec260[i] * fZec101[i])) + (fRec262[i] * fZec100[i])) + (fRec264[i] * fZec99[i])) + (fRec266[i] * fZec98[i])) + (fRec268[i] * fZec97[i])) + (fRec270[i] * fZec96[i])) + (fRec272[i] * fZec95[i])) + (fRec274[i] * fZec94[i])) + (fRec276[i] * fZec93[i])) + (fRec278[i] * fZec92[i])) + (fRec135[i] * fZec91[i])) + (fRec139[i] * fZec90[i])) + (fRec143[i] * fZec89[i])) + (fRec147[i] * fZec88[i])) + (fRec151[i] * fZec87[i])) + (fRec155[i] * fZec86[i])) + (fRec158[i] * fZec85[i])) + (fRec161[i] * fZec84[i])) + (fRec164[i] * fZec83[i])) + (fRec167[i] * fZec82[i])) + (fRec170[i] * fZec81[i])) + (fRec173[i] * fZec80[i])) + (fRec176[i] * fZec79[i])) + (fRec178[i] * fZec78[i])) + (fRec180[i] * fZec77[i])) + (fRec182[i] * fZec76[i])) + (fRec184[i] * fZec75[i])) + (fRec1[i] * fZec73[i])) + (fRec8[i] * fZec71[i])) + (fRec14[i] * fZec69[i])) + (fRec20[i] * fZec67[i])) + (fRec26[i] * fZec65[i])) + (fRec32[i] * fZec63[i])) + (fRec38[i] * fZec61[i])) + (fRec44[i] * fZec59[i])) + (fRec50[i] * fZec57[i])) + (fRec56[i] * fZec55[i])) + (fRec62[i] * fZec53[i])) + (fRec68[i] * fZec51[i])) + (fRec74[i] * fZec49[i])));
			}
			
			// LOOP 0x55f852f96c60
			// exec code
			for (int i=0; i<count; i++) {
				fZec201[i] = (1.679f * ((fSlow80 * (fRec238[i] + (fRec234[i] + (fRec230[i] + (fRec226[i] + (fRec222[i] + (fRec217[i] + (fRec212[i] + (fRec207[i] + (fRec202[i] + (fRec197[i] + (fRec192[i] + (fRec187[i] + (fRec250[i] + (fRec248[i] + (fRec246[i] + (fRec242[i] + fRec244[i]))))))))))))))))) + (fRec264[i] + (fRec262[i] + (fRec260[i] + (fRec258[i] + (fRec256[i] + (fRec254[i] + (fRec252[i] + (fRec278[i] + (fRec276[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec268[i] + (fRec266[i] + (fRec151[i] + (fRec147[i] + (fRec143[i] + (fRec139[i] + (fRec135[i] + (fRec164[i] + (fRec161[i] + (fRec158[i] + (fRec155[i] + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec170[i] + (fRec167[i] + fZec126[i])))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x55f8530cd3a0
			// pre processing
			for (int i=0; i<4; i++) iRec286_tmp[i]=iRec286_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec286[i] = (12345 + (1103515245 * iRec286[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) iRec286_perm[i]=iRec286_tmp[count+i];
			
			// LOOP 0x55f8530ce460
			// exec code
			for (int i=0; i<count; i++) {
				fZec202[i] = (0.002f * (fRec134[i] * fSlow82));
			}
			
			// LOOP 0x55f8530f1840
			// exec code
			for (int i=0; i<count; i++) {
				fZec207[i] = (0.25f * (fZec50[i] + (fZec52[i] + (fZec54[i] + (fZec56[i] + (fZec58[i] + (fZec60[i] + (fZec62[i] + (fZec64[i] + (fZec66[i] + (fZec68[i] + (fZec70[i] + (fZec72[i] + (fZec74[i] + ((((((((((((((((((((((((((((((((fSlow80 * (((((((((((((((((fRec155[i] * fZec122[i]) + (fRec158[i] * fZec121[i])) + (fRec161[i] * fZec120[i])) + (fRec164[i] * fZec119[i])) + (fRec167[i] * fZec118[i])) + (fRec170[i] * fZec117[i])) + (fRec173[i] * fZec116[i])) + (fRec176[i] * fZec115[i])) + (fRec178[i] * fZec114[i])) + (fRec180[i] * fZec113[i])) + (fRec182[i] * fZec112[i])) + (fRec184[i] * fZec111[i])) + (fRec1[i] * fZec110[i])) + (fRec8[i] * fZec109[i])) + (fRec14[i] * fZec108[i])) + (fRec20[i] * fZec107[i])) + (fRec26[i] * fZec106[i]))) + (fRec32[i] * fZec105[i])) + (fRec38[i] * fZec104[i])) + (fRec44[i] * fZec103[i])) + (fRec50[i] * fZec102[i])) + (fRec56[i] * fZec101[i])) + (fRec62[i] * fZec100[i])) + (fRec68[i] * fZec99[i])) + (fRec74[i] * fZec98[i])) + (fRec76[i] * fZec97[i])) + (fRec78[i] * fZec96[i])) + (fRec80[i] * fZec95[i])) + (fRec82[i] * fZec94[i])) + (fRec84[i] * fZec93[i])) + (fRec86[i] * fZec92[i])) + (fRec88[i] * fZec91[i])) + (fRec90[i] * fZec90[i])) + (fRec92[i] * fZec89[i])) + (fRec94[i] * fZec88[i])) + (fRec96[i] * fZec87[i])) + (fRec98[i] * fZec86[i])) + (fRec100[i] * fZec85[i])) + (fRec102[i] * fZec84[i])) + (fRec104[i] * fZec83[i])) + (fRec106[i] * fZec82[i])) + (fRec108[i] * fZec81[i])) + (fRec110[i] * fZec80[i])) + (fRec112[i] * fZec79[i])) + (fRec114[i] * fZec78[i])) + (fRec116[i] * fZec77[i])) + (fRec118[i] * fZec76[i])) + (fRec120[i] * fZec75[i]))))))))))))))));
			}
			
			// LOOP 0x55f8530f6a80
			// exec code
			for (int i=0; i<count; i++) {
				fZec208[i] = ((fSlow80 * (fRec164[i] + (fRec161[i] + (fRec158[i] + (fRec155[i] + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec170[i] + (fRec167[i] + fZec124[i]))))))))))))) + (fRec133[i] + (fRec132[i] + (fRec131[i] + (fRec130[i] + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec125[i] + (fRec124[i] + (fRec123[i] + ((2 * fRec122[i]) + (fRec120[i] + (fRec118[i] + (fRec116[i] + (fRec114[i] + (fRec112[i] + (fRec110[i] + (fRec108[i] + (fRec106[i] + (fRec104[i] + (fRec102[i] + (fRec100[i] + (fRec98[i] + (fRec96[i] + (fRec94[i] + (fRec92[i] + (fRec90[i] + (fRec88[i] + (fRec86[i] + (fRec84[i] + (fRec82[i] + (fRec80[i] + (fRec78[i] + (fRec76[i] + (fRec74[i] + (fRec68[i] + (fRec62[i] + (fRec56[i] + (fRec50[i] + (fRec44[i] + (fRec32[i] + fRec38[i])))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x55f8531fe7e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec211[i] = (0.25f * (fZec50[i] + ((((((((((((((((((((((((((((((((((((((((((((fSlow80 * fZec210[i]) + (fRec170[i] * fZec105[i])) + (fRec173[i] * fZec104[i])) + (fRec176[i] * fZec103[i])) + (fRec178[i] * fZec102[i])) + (fRec180[i] * fZec101[i])) + (fRec182[i] * fZec100[i])) + (fRec184[i] * fZec99[i])) + (fRec1[i] * fZec98[i])) + (fRec8[i] * fZec97[i])) + (fRec14[i] * fZec96[i])) + (fRec20[i] * fZec95[i])) + (fRec26[i] * fZec94[i])) + (fRec32[i] * fZec93[i])) + (fRec38[i] * fZec92[i])) + (fRec44[i] * fZec91[i])) + (fRec50[i] * fZec90[i])) + (fRec56[i] * fZec89[i])) + (fRec62[i] * fZec88[i])) + (fRec68[i] * fZec87[i])) + (fRec74[i] * fZec86[i])) + (fRec76[i] * fZec85[i])) + (fRec78[i] * fZec84[i])) + (fRec80[i] * fZec83[i])) + (fRec82[i] * fZec82[i])) + (fRec84[i] * fZec81[i])) + (fRec86[i] * fZec80[i])) + (fRec88[i] * fZec79[i])) + (fRec90[i] * fZec78[i])) + (fRec92[i] * fZec77[i])) + (fRec94[i] * fZec76[i])) + (fRec96[i] * fZec75[i])) + (fRec98[i] * fZec73[i])) + (fRec100[i] * fZec71[i])) + (fRec102[i] * fZec69[i])) + (fRec104[i] * fZec67[i])) + (fRec106[i] * fZec65[i])) + (fRec108[i] * fZec63[i])) + (fRec110[i] * fZec61[i])) + (fRec112[i] * fZec59[i])) + (fRec114[i] * fZec57[i])) + (fRec116[i] * fZec55[i])) + (fRec118[i] * fZec53[i])) + (fRec120[i] * fZec51[i]))));
			}
			
			// LOOP 0x55f8532050e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec212[i] = ((fSlow80 * (fRec278[i] + (fRec276[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec268[i] + (fRec266[i] + (fRec151[i] + (fRec147[i] + (fRec143[i] + (fRec139[i] + (fRec135[i] + (fRec164[i] + (fRec161[i] + (fRec158[i] + (fRec167[i] + fRec155[i]))))))))))))))))) + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec170[i] + fZec178[i]))))))));
			}
			
			// LOOP 0x55f853303620
			// exec code
			for (int i=0; i<count; i++) {
				fZec215[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow80 * fZec214[i]) + (fRec276[i] * fZec105[i])) + (fRec278[i] * fZec104[i])) + (fRec135[i] * fZec103[i])) + (fRec139[i] * fZec102[i])) + (fRec143[i] * fZec101[i])) + (fRec147[i] * fZec100[i])) + (fRec151[i] * fZec99[i])) + (fRec155[i] * fZec98[i])) + (fRec158[i] * fZec97[i])) + (fRec161[i] * fZec96[i])) + (fRec164[i] * fZec95[i])) + (fRec167[i] * fZec94[i])) + (fRec170[i] * fZec93[i])) + (fRec173[i] * fZec92[i])) + (fRec176[i] * fZec91[i])) + (fRec178[i] * fZec90[i])) + (fRec180[i] * fZec89[i])) + (fRec182[i] * fZec88[i])) + (fRec184[i] * fZec87[i])) + (fRec1[i] * fZec86[i])) + (fRec8[i] * fZec85[i])) + (fRec14[i] * fZec84[i])) + (fRec20[i] * fZec83[i])) + (fRec26[i] * fZec82[i])) + (fRec32[i] * fZec81[i])) + (fRec38[i] * fZec80[i])) + (fRec44[i] * fZec79[i])) + (fRec50[i] * fZec78[i])) + (fRec56[i] * fZec77[i])) + (fRec62[i] * fZec76[i])) + (fRec68[i] * fZec75[i])) + (fRec74[i] * fZec73[i])) + (fRec76[i] * fZec71[i])) + (fRec78[i] * fZec69[i])) + (fRec80[i] * fZec67[i])) + (fRec82[i] * fZec65[i])) + (fRec84[i] * fZec63[i])) + (fRec86[i] * fZec61[i])) + (fRec88[i] * fZec59[i])) + (fRec90[i] * fZec57[i])) + (fRec92[i] * fZec55[i])) + (fRec94[i] * fZec53[i])) + (fRec96[i] * fZec51[i])) + (fRec98[i] * fZec49[i])));
			}
			
			// LOOP 0x55f85330a2b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec216[i] = ((fSlow80 * (fRec264[i] + (fRec262[i] + (fRec260[i] + (fRec258[i] + (fRec256[i] + (fRec254[i] + (fRec252[i] + (fRec250[i] + (fRec248[i] + (fRec246[i] + (fRec244[i] + (fRec242[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec266[i] + fRec268[i]))))))))))))))))) + (fRec278[i] + (fRec276[i] + (fRec151[i] + (fRec147[i] + (fRec143[i] + (fRec139[i] + (fRec135[i] + (fRec164[i] + (fRec161[i] + (fRec158[i] + (fRec155[i] + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec170[i] + (fRec167[i] + fZec177[i]))))))))))))))))))));
			}
			
			// SECTION : 27
			// LOOP 0x55f852f8e1c0
			// pre processing
			for (int i=0; i<4; i++) fYec86_tmp[i]=fYec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec86[i] = (fZec201[i] - fZec200[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec86_perm[i]=fYec86_tmp[count+i];
			
			// LOOP 0x55f8530cde80
			// exec code
			for (int i=0; i<count; i++) {
				fZec203[i] = faustpower<2>(float(min(1.0f, max(-1.0f, (fZec202[i] + (fZec123[i] + (4.656612875245796e-16f * iRec286[i])))))));
			}
			
			// LOOP 0x55f8530f1720
			// pre processing
			for (int i=0; i<4; i++) fYec88_tmp[i]=fYec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec88[i] = (fZec208[i] - fZec207[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec88_perm[i]=fYec88_tmp[count+i];
			
			// LOOP 0x55f8531fe6c0
			// pre processing
			for (int i=0; i<4; i++) fYec91_tmp[i]=fYec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec91[i] = (fZec212[i] - fZec211[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec91_perm[i]=fYec91_tmp[count+i];
			
			// LOOP 0x55f853303500
			// pre processing
			for (int i=0; i<4; i++) fYec94_tmp[i]=fYec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec94[i] = (fZec216[i] - fZec215[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec94_perm[i]=fYec94_tmp[count+i];
			
			// SECTION : 28
			// LOOP 0x55f852f8da80
			// pre processing
			for (int i=0; i<4; i++) fRec280_tmp[i]=fRec280_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec280[i] = (fConst14 * (fRec280[i-1] + (fZec201[i] - (fZec200[i] + fYec86[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec280_perm[i]=fRec280_tmp[count+i];
			
			// LOOP 0x55f853026870
			// pre processing
			for (int i=0; i<4; i++) fRec283_tmp[i]=fRec283_perm[i];
			for (int i=0; i<4; i++) iRec284_tmp[i]=iRec284_perm[i];
			for (int i=0; i<4; i++) fRec285_tmp[i]=fRec285_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iZec204[i] = int((iRec284[i-1] < iConst27));
				fRec283[i] = ((iZec204[i])?(fZec203[i] + fRec283[i-1]):fZec203[i]);
				iRec284[i] = ((iZec204[i])?(1 + iRec284[i-1]):1);
				fRec285[i] = ((iZec204[i])?fRec285[i-1]:fRec283[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec285_perm[i]=fRec285_tmp[count+i];
			for (int i=0; i<4; i++) iRec284_perm[i]=iRec284_tmp[count+i];
			for (int i=0; i<4; i++) fRec283_perm[i]=fRec283_tmp[count+i];
			
			// LOOP 0x55f8530f13a0
			// pre processing
			for (int i=0; i<4; i++) fRec289_tmp[i]=fRec289_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec289[i] = (fConst14 * (fRec289[i-1] + (fZec208[i] - (fZec207[i] + fYec88[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec289_perm[i]=fRec289_tmp[count+i];
			
			// LOOP 0x55f8531fe340
			// pre processing
			for (int i=0; i<4; i++) fRec292_tmp[i]=fRec292_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec292[i] = (fConst14 * (fRec292[i-1] + (fZec212[i] - (fZec211[i] + fYec91[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec292_perm[i]=fRec292_tmp[count+i];
			
			// LOOP 0x55f853303140
			// pre processing
			for (int i=0; i<4; i++) fRec295_tmp[i]=fRec295_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec295[i] = (fConst14 * (fRec295[i-1] + (fZec216[i] - (fZec215[i] + fYec94[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec295_perm[i]=fRec295_tmp[count+i];
			
			// SECTION : 29
			// LOOP 0x55f852e0d1f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec175[i] = (((((((((((((((((((((((((((((((((((((((((((((fSlow80 * (((((((((((((((((fRec135[i] * fZec122[i]) + (fRec139[i] * fZec121[i])) + (fRec143[i] * fZec120[i])) + (fRec147[i] * fZec119[i])) + (fRec151[i] * fZec118[i])) + (fRec155[i] * fZec117[i])) + (fRec158[i] * fZec116[i])) + (fRec161[i] * fZec115[i])) + (fRec164[i] * fZec114[i])) + (fRec167[i] * fZec113[i])) + (fRec170[i] * fZec112[i])) + (fRec173[i] * fZec111[i])) + (fRec176[i] * fZec110[i])) + (fRec178[i] * fZec109[i])) + (fRec180[i] * fZec108[i])) + (fRec182[i] * fZec107[i])) + (fRec184[i] * fZec106[i]))) + (fRec1[i] * fZec105[i])) + (fRec8[i] * fZec104[i])) + (fRec14[i] * fZec103[i])) + (fRec20[i] * fZec102[i])) + (fRec26[i] * fZec101[i])) + (fRec32[i] * fZec100[i])) + (fRec38[i] * fZec99[i])) + (fRec44[i] * fZec98[i])) + (fRec50[i] * fZec97[i])) + (fRec56[i] * fZec96[i])) + (fRec62[i] * fZec95[i])) + (fRec68[i] * fZec94[i])) + (fRec74[i] * fZec93[i])) + (fRec76[i] * fZec92[i])) + (fRec78[i] * fZec91[i])) + (fRec80[i] * fZec90[i])) + (fRec82[i] * fZec89[i])) + (fRec84[i] * fZec88[i])) + (fRec86[i] * fZec87[i])) + (fRec88[i] * fZec86[i])) + (fRec90[i] * fZec85[i])) + (fRec92[i] * fZec84[i])) + (fRec94[i] * fZec83[i])) + (fRec96[i] * fZec82[i])) + (fRec98[i] * fZec81[i])) + (fRec100[i] * fZec80[i])) + (fRec102[i] * fZec79[i])) + (fRec104[i] * fZec78[i])) + (fRec106[i] * fZec77[i])) + (fRec108[i] * fZec76[i])) + (fRec110[i] * fZec75[i])) + (fRec112[i] * fZec73[i])) + (fRec114[i] * fZec71[i])) + (fRec116[i] * fZec69[i])) + (fRec118[i] * fZec67[i])) + (fRec120[i] * fZec65[i])) + (fRec122[i] * fZec63[i])) + (fRec123[i] * fZec61[i])) + (fRec124[i] * fZec59[i])) + (fRec125[i] * fZec57[i])) + (fRec126[i] * fZec55[i])) + (fRec127[i] * fZec53[i])) + (fRec128[i] * fZec51[i])) + (fRec129[i] * fZec49[i]));
			}
			
			// LOOP 0x55f8530e1240
			// pre processing
			for (int i=0; i<4; i++) fYec87_tmp[i]=fYec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec87[i] = log10f(sqrtf((fConst28 * fRec285[i])));
			}
			// post processing
			for (int i=0; i<4; i++) fYec87_perm[i]=fYec87_tmp[count+i];
			
			// LOOP 0x55f8531bfbc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec209[i] = (fZec207[i] + (0.002f * (fRec289[i] * fSlow82)));
			}
			
			// LOOP 0x55f8532053e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec213[i] = (fZec211[i] + (0.002f * (fRec292[i] * fSlow82)));
			}
			
			// LOOP 0x55f8533a8c30
			// exec code
			for (int i=0; i<count; i++) {
				fZec217[i] = (fZec215[i] + (0.002f * (fRec295[i] * fSlow82)));
			}
			
			// LOOP 0x55f853426830
			// exec code
			for (int i=0; i<count; i++) {
				fZec218[i] = (fZec200[i] + (0.002f * (fRec280[i] * fSlow82)));
			}
			
			// SECTION : 30
			// LOOP 0x55f852e0d0d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec176[i] = (0.25f * fZec175[i]);
			}
			
			// LOOP 0x55f852e14970
			// exec code
			for (int i=0; i<count; i++) {
				fZec179[i] = ((fSlow80 * (fRec151[i] + (fRec147[i] + (fRec143[i] + (fRec139[i] + (fRec135[i] + (fRec164[i] + (fRec161[i] + (fRec158[i] + (fRec155[i] + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec167[i] + fRec170[i]))))))))))))))))) + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec125[i] + (fRec124[i] + (fRec123[i] + fZec178[i]))))))));
			}
			
			// LOOP 0x55f8530e1120
			// exec code
			for (int i=0; i<count; i++) {
				fZec205[i] = (2e+01f * fYec87[i]);
			}
			
			// LOOP 0x55f8530e27d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec206[i] = (2e+01f * fYec87[i-1]);
			}
			
			// LOOP 0x55f8530f6ea0
			// pre processing
			for (int i=0; i<4; i++) fYec89_tmp[i]=fYec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec89[i] = (fSlow84 * fZec209[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec89_perm[i]=fYec89_tmp[count+i];
			
			// LOOP 0x55f853205500
			// pre processing
			for (int i=0; i<4; i++) fYec92_tmp[i]=fYec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec92[i] = (fSlow87 * fZec213[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec92_perm[i]=fYec92_tmp[count+i];
			
			// LOOP 0x55f85330a6d0
			// pre processing
			for (int i=0; i<4; i++) fYec95_tmp[i]=fYec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec95[i] = (fSlow90 * fZec217[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec95_perm[i]=fYec95_tmp[count+i];
			
			// LOOP 0x55f853426710
			// pre processing
			for (int i=0; i<4; i++) fYec97_tmp[i]=fYec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec97[i] = (fSlow93 * fZec218[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec97_perm[i]=fYec97_tmp[count+i];
			
			// SECTION : 31
			// LOOP 0x55f852e0cfb0
			// pre processing
			for (int i=0; i<4; i++) fYec66_tmp[i]=fYec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec66[i] = (fZec179[i] - fZec176[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec66_perm[i]=fYec66_tmp[count+i];
			
			// LOOP 0x55f853026990
			// pre processing
			for (int i=0; i<4; i++) fRec282_tmp[i]=fRec282_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec282[i] = min(1.0f, max(0.0f, ((fRec282[i-1] + ((int((fZec205[i] > -25.0f)))?((int((fZec206[i] < -25.0f)))?1.0f:0.0f):0.0f)) - ((int((fZec206[i] > -35.0f)))?((int((fZec205[i] < -35.0f)))?1.0f:0.0f):0.0f))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec282_perm[i]=fRec282_tmp[count+i];
			
			// LOOP 0x55f8530f0860
			// pre processing
			for (int i=0; i<4; i++) fRec288_tmp[i]=fRec288_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec288[i] = (fConst31 * (fRec288[i-1] + (fYec89[i] - fYec89[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec288_perm[i]=fRec288_tmp[count+i];
			
			// LOOP 0x55f8531fd800
			// pre processing
			for (int i=0; i<4; i++) fRec291_tmp[i]=fRec291_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec291[i] = (fConst33 * (fRec291[i-1] + (fYec92[i] - fYec92[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec291_perm[i]=fRec291_tmp[count+i];
			
			// LOOP 0x55f853302640
			// pre processing
			for (int i=0; i<4; i++) fRec294_tmp[i]=fRec294_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec294[i] = (fConst35 * (fRec294[i-1] + (fYec95[i] - fYec95[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec294_perm[i]=fRec294_tmp[count+i];
			
			// LOOP 0x55f8534263d0
			// pre processing
			for (int i=0; i<4; i++) fRec297_tmp[i]=fRec297_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec297[i] = (fConst37 * (fRec297[i-1] + (fYec97[i] - fYec97[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec297_perm[i]=fRec297_tmp[count+i];
			
			// LOOP 0x55f853495590
			// exec code
			for (int i=0; i<count; i++) {
				fZec219[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow80 * (((((((((((((((((fRec167[i] * fZec122[i]) + (fRec170[i] * fZec121[i])) + (fRec173[i] * fZec120[i])) + (fRec176[i] * fZec119[i])) + (fRec178[i] * fZec118[i])) + (fRec180[i] * fZec117[i])) + (fRec182[i] * fZec116[i])) + (fRec184[i] * fZec115[i])) + (fRec1[i] * fZec114[i])) + (fRec8[i] * fZec113[i])) + (fRec14[i] * fZec112[i])) + (fRec20[i] * fZec111[i])) + (fRec26[i] * fZec110[i])) + (fRec32[i] * fZec109[i])) + (fRec38[i] * fZec108[i])) + (fRec44[i] * fZec107[i])) + (fRec50[i] * fZec106[i]))) + (fRec56[i] * fZec105[i])) + (fRec62[i] * fZec104[i])) + (fRec68[i] * fZec103[i])) + (fRec74[i] * fZec102[i])) + (fRec76[i] * fZec101[i])) + (fRec78[i] * fZec100[i])) + (fRec80[i] * fZec99[i])) + (fRec82[i] * fZec98[i])) + (fRec84[i] * fZec97[i])) + (fRec86[i] * fZec96[i])) + (fRec88[i] * fZec95[i])) + (fRec90[i] * fZec94[i])) + (fRec92[i] * fZec93[i])) + (fRec94[i] * fZec92[i])) + (fRec96[i] * fZec91[i])) + (fRec98[i] * fZec90[i])) + (fRec100[i] * fZec89[i])) + (fRec102[i] * fZec88[i])) + (fRec104[i] * fZec87[i])) + (fRec106[i] * fZec86[i])) + (fRec108[i] * fZec85[i])) + (fRec110[i] * fZec84[i])) + (fRec112[i] * fZec83[i])) + (fRec114[i] * fZec82[i])) + (fRec116[i] * fZec81[i])) + (fRec118[i] * fZec80[i])) + (fRec120[i] * fZec79[i])) + (fRec122[i] * fZec78[i])) + (fRec123[i] * fZec77[i])) + (fRec124[i] * fZec76[i])) + (fRec125[i] * fZec75[i])) + (fRec126[i] * fZec73[i])) + (fRec127[i] * fZec71[i])) + (fRec128[i] * fZec69[i])) + (fRec129[i] * fZec67[i])) + (fRec130[i] * fZec65[i])) + (fRec131[i] * fZec63[i])) + (fRec132[i] * fZec61[i])) + (fRec133[i] * fZec59[i])) + (fRec122[i] * fZec57[i])) + (fRec123[i] * fZec55[i])) + (fRec124[i] * fZec53[i])) + (fRec125[i] * fZec51[i])) + (fRec126[i] * fZec49[i])));
			}
			
			// LOOP 0x55f85349c010
			// exec code
			for (int i=0; i<count; i++) {
				fZec220[i] = ((fRec126[i] + (fRec124[i] + fRec125[i])) + (2 * ((fZec128[i] + (fZec129[i] + (fZec130[i] + (fZec131[i] + (fZec132[i] + (fZec133[i] + (fZec134[i] + (fZec135[i] + (fZec136[i] + (fZec137[i] + (fRec123[i] + (fRec122[i] + (fZec138[i] + (fZec139[i] + (fZec140[i] + (fZec141[i] + (fZec142[i] + (fZec143[i] + (fZec144[i] + (fZec145[i] + (fZec146[i] + (fZec147[i] + (fZec148[i] + (fZec149[i] + (fZec150[i] + (fZec151[i] + (fZec152[i] + (fZec153[i] + (fZec154[i] + (fZec155[i] + (fZec156[i] + ((((((((0.5f * fRec56[i]) + (0.5f * fRec62[i])) + (0.5f * fRec68[i])) + (0.5f * fRec74[i])) + (0.5f * fRec76[i])) + (0.5f * fRec78[i])) + (0.5f * fRec80[i])) + (0.5f * fRec82[i]))))))))))))))))))))))))))))))))) + (fSlow81 * (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec170[i] + (fRec167[i] + fZec125[i]))))))))))));
			}
			
			// SECTION : 32
			// LOOP 0x55f852e0ca50
			// pre processing
			for (int i=0; i<4; i++) fRec186_tmp[i]=fRec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec186[i] = (fConst14 * (fRec186[i-1] + (fZec179[i] - (fZec176[i] + fYec66[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec186_perm[i]=fRec186_tmp[count+i];
			
			// LOOP 0x55f852f97080
			// pre processing
			for (int i=0; i<4; i++) fRec281_tmp[i]=fRec281_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec281[i] = ((fConst30 * fRec281[i-1]) + (fConst29 * ((int((fRec282[i] > 0.5f)))?((int((fRec282[i-1] < 0.5f)))?1.0f:0.0f):0.0f)));
			}
			// post processing
			for (int i=0; i<4; i++) fRec281_perm[i]=fRec281_tmp[count+i];
			
			// LOOP 0x55f8531bfaa0
			// pre processing
			for (int i=0; i<4; i++) fYec90_tmp[i]=fYec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec90[i] = ((0.5416666666666667f * fRec288[i]) + (fSlow85 * fZec209[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec90_perm[i]=fYec90_tmp[count+i];
			
			// LOOP 0x55f8532f8e20
			// pre processing
			for (int i=0; i<4; i++) fYec93_tmp[i]=fYec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec93[i] = ((0.5416666666666667f * fRec291[i]) + (fSlow88 * fZec213[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec93_perm[i]=fYec93_tmp[count+i];
			
			// LOOP 0x55f8533a8b10
			// pre processing
			for (int i=0; i<4; i++) fYec96_tmp[i]=fYec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec96[i] = ((0.5416666666666667f * fRec294[i]) + (fSlow91 * fZec217[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec96_perm[i]=fYec96_tmp[count+i];
			
			// LOOP 0x55f853434570
			// pre processing
			for (int i=0; i<4; i++) fYec98_tmp[i]=fYec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec98[i] = ((0.5416666666666667f * fRec297[i]) + (fSlow94 * fZec218[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec98_perm[i]=fYec98_tmp[count+i];
			
			// LOOP 0x55f85343eeb0
			// pre processing
			for (int i=0; i<4; i++) fRec299_tmp[i]=fRec299_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec299[i] = (fRec299[i-1] + (fConst11 * (fYec89[i] - fRec299[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec299_perm[i]=fRec299_tmp[count+i];
			
			// LOOP 0x55f85344dfe0
			// pre processing
			for (int i=0; i<4; i++) fRec301_tmp[i]=fRec301_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec301[i] = (fRec301[i-1] + (fConst8 * (fYec92[i] - fRec301[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec301_perm[i]=fRec301_tmp[count+i];
			
			// LOOP 0x55f85345eff0
			// pre processing
			for (int i=0; i<4; i++) fRec303_tmp[i]=fRec303_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec303[i] = (fRec303[i-1] + (fConst3 * (fYec95[i] - fRec303[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec303_perm[i]=fRec303_tmp[count+i];
			
			// LOOP 0x55f853471040
			// pre processing
			for (int i=0; i<4; i++) fRec305_tmp[i]=fRec305_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec305[i] = (fRec305[i-1] + (fConst19 * (fYec97[i] - fRec305[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec305_perm[i]=fRec305_tmp[count+i];
			
			// LOOP 0x55f853495470
			// pre processing
			for (int i=0; i<4; i++) fYec99_tmp[i]=fYec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec99[i] = (fZec220[i] - fZec219[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec99_perm[i]=fYec99_tmp[count+i];
			
			// SECTION : 33
			// LOOP 0x55f852c1b040
			// pre processing
			for (int i=0; i<4; i++) fRec0_tmp[i]=fRec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec0[i] = ((0.98f * fRec0[i-1]) + fSlow0);
			}
			// post processing
			for (int i=0; i<4; i++) fRec0_perm[i]=fRec0_tmp[count+i];
			
			// LOOP 0x55f8530f0480
			// pre processing
			for (int i=0; i<4; i++) fRec287_tmp[i]=fRec287_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec287[i] = (fConst32 * (fRec287[i-1] + (fYec90[i] - fYec90[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec287_perm[i]=fRec287_tmp[count+i];
			
			// LOOP 0x55f8531fd420
			// pre processing
			for (int i=0; i<4; i++) fRec290_tmp[i]=fRec290_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec290[i] = (fConst34 * (fRec290[i-1] + (fYec93[i] - fYec93[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec290_perm[i]=fRec290_tmp[count+i];
			
			// LOOP 0x55f853302260
			// pre processing
			for (int i=0; i<4; i++) fRec293_tmp[i]=fRec293_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec293[i] = (fConst36 * (fRec293[i-1] + (fYec96[i] - fYec96[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec293_perm[i]=fRec293_tmp[count+i];
			
			// LOOP 0x55f853425ff0
			// pre processing
			for (int i=0; i<4; i++) fRec296_tmp[i]=fRec296_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec296[i] = (fConst38 * (fRec296[i-1] + (fYec98[i] - fYec98[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec296_perm[i]=fRec296_tmp[count+i];
			
			// LOOP 0x55f85343eb10
			// pre processing
			for (int i=0; i<4; i++) fRec298_tmp[i]=fRec298_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec298[i] = (fRec298[i-1] + (fConst11 * (fRec299[i] - fRec298[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec298_perm[i]=fRec298_tmp[count+i];
			
			// LOOP 0x55f85344dc40
			// pre processing
			for (int i=0; i<4; i++) fRec300_tmp[i]=fRec300_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec300[i] = (fRec300[i-1] + (fConst8 * (fRec301[i] - fRec300[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec300_perm[i]=fRec300_tmp[count+i];
			
			// LOOP 0x55f85345ec50
			// pre processing
			for (int i=0; i<4; i++) fRec302_tmp[i]=fRec302_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec302[i] = (fRec302[i-1] + (fConst3 * (fRec303[i] - fRec302[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec302_perm[i]=fRec302_tmp[count+i];
			
			// LOOP 0x55f853470ca0
			// pre processing
			for (int i=0; i<4; i++) fRec304_tmp[i]=fRec304_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec304[i] = (fRec304[i-1] + (fConst19 * (fRec305[i] - fRec304[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec304_perm[i]=fRec304_tmp[count+i];
			
			// LOOP 0x55f853483bf0
			// pre processing
			for (int i=0; i<4; i++) fRec306_tmp[i]=fRec306_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec306[i] = (fRec306[i-1] + (fConst39 * ((fSlow79 * ((fSlow98 * ((0.25f * fZec214[i]) + (0.125f * fZec210[i]))) + (fSlow96 * (((0.25f * fZec199[i]) + (0.125f * fZec214[i])) + (0.0625f * fZec210[i]))))) - fRec306[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec306_perm[i]=fRec306_tmp[count+i];
			
			// LOOP 0x55f853491e30
			// pre processing
			for (int i=0; i<4; i++) fRec307_tmp[i]=fRec307_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec307[i] = ((0.98f * fRec307[i-1]) + fSlow99);
			}
			// post processing
			for (int i=0; i<4; i++) fRec307_perm[i]=fRec307_tmp[count+i];
			
			// LOOP 0x55f8534950f0
			// pre processing
			for (int i=0; i<4; i++) fRec308_tmp[i]=fRec308_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec308[i] = (fConst14 * (fRec308[i-1] + (fZec220[i] - (fZec219[i] + fYec99[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec308_perm[i]=fRec308_tmp[count+i];
			
			// LOOP 0x55f8534a7ea0
			// exec code
			for (int i=0; i<count; i++) {
				fZec222[i] = (fZec123[i] + fZec202[i]);
			}
			
			// LOOP 0x55f8534a7fc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec221[i] = (fRec186[i] * fSlow82);
			}
			
			// LOOP 0x55f8535a8c40
			// pre processing
			for (int i=0; i<4; i++) fYec100_tmp[i]=fYec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec100[i] = min(1.0f, (fConst40 * fRec281[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec100_perm[i]=fYec100_tmp[count+i];
			
			// SECTION : 34
			// LOOP 0x55f853552590
			// exec code
			for (int i=0; i<count; i++) {
				fZec223[i] = ((0.001f + (0.05f * fRec0[i])) * ((fSlow121 * (((0.25f * ((fZec222[i] + fZec175[i]) + (0.008f * fZec221[i]))) + (0.5f * fZec218[i])) * max(fSlow120, (0.25f * (((fYec100[i] + fYec100[i-2]) + fYec100[i-3]) + fYec100[i-4]))))) + ((fSlow119 * ((fSlow118 * (((fRec287[i] + fRec290[i]) + fRec293[i]) + fRec296[i])) + (fSlow117 * (((fRec298[i] + fRec300[i]) + fRec302[i]) + fRec304[i])))) + ((fRec306[i] * (0.5f + (4.5f * fRec307[i]))) + (fSlow115 * (((((((fSlow113 * fZec222[i]) + (fSlow111 * (fZec219[i] + (0.002f * (fRec308[i] * fSlow82))))) + (fSlow109 * fZec209[i])) + (fSlow107 * (fZec176[i] + (0.002f * fZec221[i])))) + (fSlow105 * fZec213[i])) + (fSlow103 * fZec217[i])) + (fSlow101 * fZec218[i])))))));
			}
			
			// SECTION : 35
			// LOOP 0x55f85219f2c0
			// exec code
			for (int i=0; i<count; i++) {
				output0[i] = (FAUSTFLOAT)fZec223[i];
			}
			
			// SECTION : 36
			// LOOP 0x55f8535a9090
			// exec code
			for (int i=0; i<count; i++) {
				output1[i] = (FAUSTFLOAT)fZec223[i];
			}
			
		}
		if (index < fullcount) {
			// compute the remaining samples if any
			int count = fullcount-index;
			FAUSTFLOAT* output0 = &output[0][index];
			FAUSTFLOAT* output1 = &output[1][index];
			// SECTION : 1
			// LOOP 0x55f852c1dbf0
			// pre processing
			for (int i=0; i<4; i++) fRec6_tmp[i]=fRec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec6[i] = (fSlow1 + ((int((fRec6[i-1] > 1.0f)))?(fRec6[i-1] - 1.0f):fRec6[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) fRec6_perm[i]=fRec6_tmp[count+i];
			
			// SECTION : 2
			// LOOP 0x55f852c21380
			// exec code
			for (int i=0; i<count; i++) {
				fZec0[i] = ((fSlow6 * sinf((6.283185307179586f * fRec6[i]))) + fSlow5);
			}
			
			// SECTION : 3
			// LOOP 0x55f852c1d660
			// pre processing
			for (int i=0; i<4; i++) fRec5_tmp[i]=fRec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec1[i] = (fRec5[i-1] + (fConst2 * float((4186.009044809578f * (fZec0[i] * fSlow4)))));
				fRec5[i] = ((int((fZec1[i] > 1.0f)))?(fZec1[i] - 1.0f):fZec1[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec5_perm[i]=fRec5_tmp[count+i];
			
			// LOOP 0x55f852c2cfb0
			// pre processing
			for (int i=0; i<4; i++) fRec12_tmp[i]=fRec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec5[i] = (fRec12[i-1] + (fConst2 * float((4434.922095629953f * (fZec0[i] * fSlow7)))));
				fRec12[i] = ((int((fZec5[i] > 1.0f)))?(fZec5[i] - 1.0f):fZec5[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec12_perm[i]=fRec12_tmp[count+i];
			
			// LOOP 0x55f852c36c90
			// pre processing
			for (int i=0; i<4; i++) fRec18_tmp[i]=fRec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec9[i] = (fRec18[i-1] + (fConst2 * float((4698.63628667852f * (fZec0[i] * fSlow8)))));
				fRec18[i] = ((int((fZec9[i] > 1.0f)))?(fZec9[i] - 1.0f):fZec9[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec18_perm[i]=fRec18_tmp[count+i];
			
			// LOOP 0x55f852c40c10
			// pre processing
			for (int i=0; i<4; i++) fRec24_tmp[i]=fRec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec13[i] = (fRec24[i-1] + (fConst2 * float((4978.031739553295f * (fZec0[i] * fSlow9)))));
				fRec24[i] = ((int((fZec13[i] > 1.0f)))?(fZec13[i] - 1.0f):fZec13[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec24_perm[i]=fRec24_tmp[count+i];
			
			// LOOP 0x55f852c4abe0
			// pre processing
			for (int i=0; i<4; i++) fRec30_tmp[i]=fRec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec17[i] = (fRec30[i-1] + (fConst2 * float((5274.04091060592f * (fZec0[i] * fSlow10)))));
				fRec30[i] = ((int((fZec17[i] > 1.0f)))?(fZec17[i] - 1.0f):fZec17[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec30_perm[i]=fRec30_tmp[count+i];
			
			// LOOP 0x55f852c54f80
			// pre processing
			for (int i=0; i<4; i++) fRec36_tmp[i]=fRec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec21[i] = (fRec36[i-1] + (fConst2 * float((5587.651702928062f * (fZec0[i] * fSlow11)))));
				fRec36[i] = ((int((fZec21[i] > 1.0f)))?(fZec21[i] - 1.0f):fZec21[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec36_perm[i]=fRec36_tmp[count+i];
			
			// LOOP 0x55f852c5f060
			// pre processing
			for (int i=0; i<4; i++) fRec42_tmp[i]=fRec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec25[i] = (fRec42[i-1] + (fConst2 * float((5919.91076338615f * (fZec0[i] * fSlow12)))));
				fRec42[i] = ((int((fZec25[i] > 1.0f)))?(fZec25[i] - 1.0f):fZec25[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec42_perm[i]=fRec42_tmp[count+i];
			
			// LOOP 0x55f852c69140
			// pre processing
			for (int i=0; i<4; i++) fRec48_tmp[i]=fRec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec29[i] = (fRec48[i-1] + (fConst2 * float((6271.926975707989f * (fZec0[i] * fSlow13)))));
				fRec48[i] = ((int((fZec29[i] > 1.0f)))?(fZec29[i] - 1.0f):fZec29[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec48_perm[i]=fRec48_tmp[count+i];
			
			// LOOP 0x55f852c73230
			// pre processing
			for (int i=0; i<4; i++) fRec54_tmp[i]=fRec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec33[i] = (fRec54[i-1] + (fConst2 * float((6644.875161279122f * (fZec0[i] * fSlow14)))));
				fRec54[i] = ((int((fZec33[i] > 1.0f)))?(fZec33[i] - 1.0f):fZec33[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec54_perm[i]=fRec54_tmp[count+i];
			
			// LOOP 0x55f852c7d5d0
			// pre processing
			for (int i=0; i<4; i++) fRec60_tmp[i]=fRec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec37[i] = (fRec60[i-1] + (fConst2 * float((7.04e+03f * (fZec0[i] * fSlow15)))));
				fRec60[i] = ((int((fZec37[i] > 1.0f)))?(fZec37[i] - 1.0f):fZec37[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec60_perm[i]=fRec60_tmp[count+i];
			
			// LOOP 0x55f852c87650
			// pre processing
			for (int i=0; i<4; i++) fRec66_tmp[i]=fRec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec41[i] = (fRec66[i-1] + (fConst2 * float((7458.620184289437f * (fZec0[i] * fSlow16)))));
				fRec66[i] = ((int((fZec41[i] > 1.0f)))?(fZec41[i] - 1.0f):fZec41[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec66_perm[i]=fRec66_tmp[count+i];
			
			// LOOP 0x55f852c91730
			// pre processing
			for (int i=0; i<4; i++) fRec72_tmp[i]=fRec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fZec45[i] = (fRec72[i-1] + (fConst2 * float((7902.132820097988f * (fZec0[i] * fSlow17)))));
				fRec72[i] = ((int((fZec45[i] > 1.0f)))?(fZec45[i] - 1.0f):fZec45[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec72_perm[i]=fRec72_tmp[count+i];
			
			// SECTION : 4
			// LOOP 0x55f852c249a0
			// pre processing
			for (int i=0; i<4; i++) iRec7_tmp[i]=iRec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec7[i] = ((int(((fRec5[i] - fRec5[i-1]) < 0)))?(1 - iRec7[i-1]):iRec7[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec7_perm[i]=iRec7_tmp[count+i];
			
			// LOOP 0x55f852c2efe0
			// pre processing
			for (int i=0; i<4; i++) iRec13_tmp[i]=iRec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec13[i] = ((int(((fRec12[i] - fRec12[i-1]) < 0)))?(1 - iRec13[i-1]):iRec13[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec13_perm[i]=iRec13_tmp[count+i];
			
			// LOOP 0x55f852c38d30
			// pre processing
			for (int i=0; i<4; i++) iRec19_tmp[i]=iRec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec19[i] = ((int(((fRec18[i] - fRec18[i-1]) < 0)))?(1 - iRec19[i-1]):iRec19[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec19_perm[i]=iRec19_tmp[count+i];
			
			// LOOP 0x55f852c42d80
			// pre processing
			for (int i=0; i<4; i++) iRec25_tmp[i]=iRec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec25[i] = ((int(((fRec24[i] - fRec24[i-1]) < 0)))?(1 - iRec25[i-1]):iRec25[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec25_perm[i]=iRec25_tmp[count+i];
			
			// LOOP 0x55f852c4cd50
			// pre processing
			for (int i=0; i<4; i++) iRec31_tmp[i]=iRec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec31[i] = ((int(((fRec30[i] - fRec30[i-1]) < 0)))?(1 - iRec31[i-1]):iRec31[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec31_perm[i]=iRec31_tmp[count+i];
			
			// LOOP 0x55f852c570f0
			// pre processing
			for (int i=0; i<4; i++) iRec37_tmp[i]=iRec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec37[i] = ((int(((fRec36[i] - fRec36[i-1]) < 0)))?(1 - iRec37[i-1]):iRec37[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec37_perm[i]=iRec37_tmp[count+i];
			
			// LOOP 0x55f852c611d0
			// pre processing
			for (int i=0; i<4; i++) iRec43_tmp[i]=iRec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec43[i] = ((int(((fRec42[i] - fRec42[i-1]) < 0)))?(1 - iRec43[i-1]):iRec43[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec43_perm[i]=iRec43_tmp[count+i];
			
			// LOOP 0x55f852c6b2b0
			// pre processing
			for (int i=0; i<4; i++) iRec49_tmp[i]=iRec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec49[i] = ((int(((fRec48[i] - fRec48[i-1]) < 0)))?(1 - iRec49[i-1]):iRec49[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec49_perm[i]=iRec49_tmp[count+i];
			
			// LOOP 0x55f852c753a0
			// pre processing
			for (int i=0; i<4; i++) iRec55_tmp[i]=iRec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec55[i] = ((int(((fRec54[i] - fRec54[i-1]) < 0)))?(1 - iRec55[i-1]):iRec55[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec55_perm[i]=iRec55_tmp[count+i];
			
			// LOOP 0x55f852c7f620
			// pre processing
			for (int i=0; i<4; i++) iRec61_tmp[i]=iRec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec61[i] = ((int(((fRec60[i] - fRec60[i-1]) < 0)))?(1 - iRec61[i-1]):iRec61[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec61_perm[i]=iRec61_tmp[count+i];
			
			// LOOP 0x55f852c897c0
			// pre processing
			for (int i=0; i<4; i++) iRec67_tmp[i]=iRec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec67[i] = ((int(((fRec66[i] - fRec66[i-1]) < 0)))?(1 - iRec67[i-1]):iRec67[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec67_perm[i]=iRec67_tmp[count+i];
			
			// LOOP 0x55f852c938a0
			// pre processing
			for (int i=0; i<4; i++) iRec73_tmp[i]=iRec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec73[i] = ((int(((fRec72[i] - fRec72[i-1]) < 0)))?(1 - iRec73[i-1]):iRec73[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec73_perm[i]=iRec73_tmp[count+i];
			
			// SECTION : 5
			// LOOP 0x55f852c25b40
			// pre processing
			for (int i=0; i<4; i++) fYec0_tmp[i]=fYec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec0[i] = (fRec5[i] + iRec7[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec0_perm[i]=fYec0_tmp[count+i];
			
			// LOOP 0x55f852c30170
			// pre processing
			for (int i=0; i<4; i++) fYec3_tmp[i]=fYec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec3[i] = (fRec12[i] + iRec13[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec3_perm[i]=fYec3_tmp[count+i];
			
			// LOOP 0x55f852c39ec0
			// pre processing
			for (int i=0; i<4; i++) fYec6_tmp[i]=fYec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec6[i] = (fRec18[i] + iRec19[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec6_perm[i]=fYec6_tmp[count+i];
			
			// LOOP 0x55f852c43ec0
			// pre processing
			for (int i=0; i<4; i++) fYec9_tmp[i]=fYec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec9[i] = (fRec24[i] + iRec25[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec9_perm[i]=fYec9_tmp[count+i];
			
			// LOOP 0x55f852c4de90
			// pre processing
			for (int i=0; i<4; i++) fYec12_tmp[i]=fYec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec12[i] = (fRec30[i] + iRec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec12_perm[i]=fYec12_tmp[count+i];
			
			// LOOP 0x55f852c58230
			// pre processing
			for (int i=0; i<4; i++) fYec15_tmp[i]=fYec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec15[i] = (fRec36[i] + iRec37[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec15_perm[i]=fYec15_tmp[count+i];
			
			// LOOP 0x55f852c62310
			// pre processing
			for (int i=0; i<4; i++) fYec18_tmp[i]=fYec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec18[i] = (fRec42[i] + iRec43[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec18_perm[i]=fYec18_tmp[count+i];
			
			// LOOP 0x55f852c6c3f0
			// pre processing
			for (int i=0; i<4; i++) fYec21_tmp[i]=fYec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec21[i] = (fRec48[i] + iRec49[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec21_perm[i]=fYec21_tmp[count+i];
			
			// LOOP 0x55f852c764e0
			// pre processing
			for (int i=0; i<4; i++) fYec24_tmp[i]=fYec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec24[i] = (fRec54[i] + iRec55[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec24_perm[i]=fYec24_tmp[count+i];
			
			// LOOP 0x55f852c80760
			// pre processing
			for (int i=0; i<4; i++) fYec27_tmp[i]=fYec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec27[i] = (fRec60[i] + iRec61[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec27_perm[i]=fYec27_tmp[count+i];
			
			// LOOP 0x55f852c8a900
			// pre processing
			for (int i=0; i<4; i++) fYec30_tmp[i]=fYec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec30[i] = (fRec66[i] + iRec67[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec30_perm[i]=fYec30_tmp[count+i];
			
			// LOOP 0x55f852c949e0
			// pre processing
			for (int i=0; i<4; i++) fYec33_tmp[i]=fYec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec33[i] = (fRec72[i] + iRec73[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec33_perm[i]=fYec33_tmp[count+i];
			
			// SECTION : 6
			// LOOP 0x55f852c26520
			// exec code
			for (int i=0; i<count; i++) {
				fZec2[i] = (0.5f * fYec0[i]);
			}
			
			// LOOP 0x55f852c30a40
			// exec code
			for (int i=0; i<count; i++) {
				fZec6[i] = (0.5f * fYec3[i]);
			}
			
			// LOOP 0x55f852c3a790
			// exec code
			for (int i=0; i<count; i++) {
				fZec10[i] = (0.5f * fYec6[i]);
			}
			
			// LOOP 0x55f852c44790
			// exec code
			for (int i=0; i<count; i++) {
				fZec14[i] = (0.5f * fYec9[i]);
			}
			
			// LOOP 0x55f852c4e790
			// exec code
			for (int i=0; i<count; i++) {
				fZec18[i] = (0.5f * fYec12[i]);
			}
			
			// LOOP 0x55f852c58b30
			// exec code
			for (int i=0; i<count; i++) {
				fZec22[i] = (0.5f * fYec15[i]);
			}
			
			// LOOP 0x55f852c62c10
			// exec code
			for (int i=0; i<count; i++) {
				fZec26[i] = (0.5f * fYec18[i]);
			}
			
			// LOOP 0x55f852c6ccf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec30[i] = (0.5f * fYec21[i]);
			}
			
			// LOOP 0x55f852c76de0
			// exec code
			for (int i=0; i<count; i++) {
				fZec34[i] = (0.5f * fYec24[i]);
			}
			
			// LOOP 0x55f852c81060
			// exec code
			for (int i=0; i<count; i++) {
				fZec38[i] = (0.5f * fYec27[i]);
			}
			
			// LOOP 0x55f852c8b200
			// exec code
			for (int i=0; i<count; i++) {
				fZec42[i] = (0.5f * fYec30[i]);
			}
			
			// LOOP 0x55f852c952e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec46[i] = (0.5f * fYec33[i]);
			}
			
			// SECTION : 7
			// LOOP 0x55f852c1d190
			// pre processing
			for (int i=0; i<4; i++) iRec4_tmp[i]=iRec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec4[i] = ((int(((fZec2[i] - (0.5f * fYec0[i-1])) < 0)))?(1 - iRec4[i-1]):iRec4[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec4_perm[i]=iRec4_tmp[count+i];
			
			// LOOP 0x55f852c2cba0
			// pre processing
			for (int i=0; i<4; i++) iRec11_tmp[i]=iRec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec11[i] = ((int(((fZec6[i] - (0.5f * fYec3[i-1])) < 0)))?(1 - iRec11[i-1]):iRec11[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec11_perm[i]=iRec11_tmp[count+i];
			
			// LOOP 0x55f852c36880
			// pre processing
			for (int i=0; i<4; i++) iRec17_tmp[i]=iRec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec17[i] = ((int(((fZec10[i] - (0.5f * fYec6[i-1])) < 0)))?(1 - iRec17[i-1]):iRec17[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec17_perm[i]=iRec17_tmp[count+i];
			
			// LOOP 0x55f852c40800
			// pre processing
			for (int i=0; i<4; i++) iRec23_tmp[i]=iRec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec23[i] = ((int(((fZec14[i] - (0.5f * fYec9[i-1])) < 0)))?(1 - iRec23[i-1]):iRec23[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec23_perm[i]=iRec23_tmp[count+i];
			
			// LOOP 0x55f852c4a7d0
			// pre processing
			for (int i=0; i<4; i++) iRec29_tmp[i]=iRec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec29[i] = ((int(((fZec18[i] - (0.5f * fYec12[i-1])) < 0)))?(1 - iRec29[i-1]):iRec29[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec29_perm[i]=iRec29_tmp[count+i];
			
			// LOOP 0x55f852c54b70
			// pre processing
			for (int i=0; i<4; i++) iRec35_tmp[i]=iRec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec35[i] = ((int(((fZec22[i] - (0.5f * fYec15[i-1])) < 0)))?(1 - iRec35[i-1]):iRec35[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec35_perm[i]=iRec35_tmp[count+i];
			
			// LOOP 0x55f852c5ec50
			// pre processing
			for (int i=0; i<4; i++) iRec41_tmp[i]=iRec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec41[i] = ((int(((fZec26[i] - (0.5f * fYec18[i-1])) < 0)))?(1 - iRec41[i-1]):iRec41[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec41_perm[i]=iRec41_tmp[count+i];
			
			// LOOP 0x55f852c68d30
			// pre processing
			for (int i=0; i<4; i++) iRec47_tmp[i]=iRec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec47[i] = ((int(((fZec30[i] - (0.5f * fYec21[i-1])) < 0)))?(1 - iRec47[i-1]):iRec47[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec47_perm[i]=iRec47_tmp[count+i];
			
			// LOOP 0x55f852c72e20
			// pre processing
			for (int i=0; i<4; i++) iRec53_tmp[i]=iRec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec53[i] = ((int(((fZec34[i] - (0.5f * fYec24[i-1])) < 0)))?(1 - iRec53[i-1]):iRec53[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec53_perm[i]=iRec53_tmp[count+i];
			
			// LOOP 0x55f852c7d1c0
			// pre processing
			for (int i=0; i<4; i++) iRec59_tmp[i]=iRec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec59[i] = ((int(((fZec38[i] - (0.5f * fYec27[i-1])) < 0)))?(1 - iRec59[i-1]):iRec59[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec59_perm[i]=iRec59_tmp[count+i];
			
			// LOOP 0x55f852c87240
			// pre processing
			for (int i=0; i<4; i++) iRec65_tmp[i]=iRec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec65[i] = ((int(((fZec42[i] - (0.5f * fYec30[i-1])) < 0)))?(1 - iRec65[i-1]):iRec65[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec65_perm[i]=iRec65_tmp[count+i];
			
			// LOOP 0x55f852c912c0
			// pre processing
			for (int i=0; i<4; i++) iRec71_tmp[i]=iRec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec71[i] = ((int(((fZec46[i] - (0.5f * fYec33[i-1])) < 0)))?(1 - iRec71[i-1]):iRec71[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec71_perm[i]=iRec71_tmp[count+i];
			
			// SECTION : 8
			// LOOP 0x55f852c278c0
			// pre processing
			for (int i=0; i<4; i++) fYec1_tmp[i]=fYec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec1[i] = (iRec4[i] + fZec2[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec1_perm[i]=fYec1_tmp[count+i];
			
			// LOOP 0x55f852c31e30
			// pre processing
			for (int i=0; i<4; i++) fYec4_tmp[i]=fYec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec4[i] = (iRec11[i] + fZec6[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec4_perm[i]=fYec4_tmp[count+i];
			
			// LOOP 0x55f852c3bbf0
			// pre processing
			for (int i=0; i<4; i++) fYec7_tmp[i]=fYec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec7[i] = (iRec17[i] + fZec10[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec7_perm[i]=fYec7_tmp[count+i];
			
			// LOOP 0x55f852c45b90
			// pre processing
			for (int i=0; i<4; i++) fYec10_tmp[i]=fYec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec10[i] = (iRec23[i] + fZec14[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec10_perm[i]=fYec10_tmp[count+i];
			
			// LOOP 0x55f852c4fb80
			// pre processing
			for (int i=0; i<4; i++) fYec13_tmp[i]=fYec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec13[i] = (iRec29[i] + fZec18[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec13_perm[i]=fYec13_tmp[count+i];
			
			// LOOP 0x55f852c59f20
			// pre processing
			for (int i=0; i<4; i++) fYec16_tmp[i]=fYec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec16[i] = (iRec35[i] + fZec22[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec16_perm[i]=fYec16_tmp[count+i];
			
			// LOOP 0x55f852c64000
			// pre processing
			for (int i=0; i<4; i++) fYec19_tmp[i]=fYec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec19[i] = (iRec41[i] + fZec26[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec19_perm[i]=fYec19_tmp[count+i];
			
			// LOOP 0x55f852c6e0e0
			// pre processing
			for (int i=0; i<4; i++) fYec22_tmp[i]=fYec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec22[i] = (iRec47[i] + fZec30[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec22_perm[i]=fYec22_tmp[count+i];
			
			// LOOP 0x55f852c781d0
			// pre processing
			for (int i=0; i<4; i++) fYec25_tmp[i]=fYec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec25[i] = (iRec53[i] + fZec34[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec25_perm[i]=fYec25_tmp[count+i];
			
			// LOOP 0x55f852c82510
			// pre processing
			for (int i=0; i<4; i++) fYec28_tmp[i]=fYec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec28[i] = (iRec59[i] + fZec38[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec28_perm[i]=fYec28_tmp[count+i];
			
			// LOOP 0x55f852c8c5f0
			// pre processing
			for (int i=0; i<4; i++) fYec31_tmp[i]=fYec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec31[i] = (iRec65[i] + fZec42[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec31_perm[i]=fYec31_tmp[count+i];
			
			// LOOP 0x55f852c966d0
			// pre processing
			for (int i=0; i<4; i++) fYec34_tmp[i]=fYec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec34[i] = (iRec71[i] + fZec46[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec34_perm[i]=fYec34_tmp[count+i];
			
			// SECTION : 9
			// LOOP 0x55f852c281b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec3[i] = (0.5f * fYec1[i]);
			}
			
			// LOOP 0x55f852c32720
			// exec code
			for (int i=0; i<count; i++) {
				fZec7[i] = (0.5f * fYec4[i]);
			}
			
			// LOOP 0x55f852c3c4e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec11[i] = (0.5f * fYec7[i]);
			}
			
			// LOOP 0x55f852c464b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec15[i] = (0.5f * fYec10[i]);
			}
			
			// LOOP 0x55f852c504a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec19[i] = (0.5f * fYec13[i]);
			}
			
			// LOOP 0x55f852c5a840
			// exec code
			for (int i=0; i<count; i++) {
				fZec23[i] = (0.5f * fYec16[i]);
			}
			
			// LOOP 0x55f852c64920
			// exec code
			for (int i=0; i<count; i++) {
				fZec27[i] = (0.5f * fYec19[i]);
			}
			
			// LOOP 0x55f852c6ea00
			// exec code
			for (int i=0; i<count; i++) {
				fZec31[i] = (0.5f * fYec22[i]);
			}
			
			// LOOP 0x55f852c78af0
			// exec code
			for (int i=0; i<count; i++) {
				fZec35[i] = (0.5f * fYec25[i]);
			}
			
			// LOOP 0x55f852c82e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec39[i] = (0.5f * fYec28[i]);
			}
			
			// LOOP 0x55f852c8cf10
			// exec code
			for (int i=0; i<count; i++) {
				fZec43[i] = (0.5f * fYec31[i]);
			}
			
			// LOOP 0x55f852c96ff0
			// exec code
			for (int i=0; i<count; i++) {
				fZec47[i] = (0.5f * fYec34[i]);
			}
			
			// SECTION : 10
			// LOOP 0x55f852c1cdf0
			// pre processing
			for (int i=0; i<4; i++) iRec3_tmp[i]=iRec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec3[i] = ((int(((fZec3[i] - (0.5f * fYec1[i-1])) < 0)))?(1 - iRec3[i-1]):iRec3[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec3_perm[i]=iRec3_tmp[count+i];
			
			// LOOP 0x55f852c2c7c0
			// pre processing
			for (int i=0; i<4; i++) iRec10_tmp[i]=iRec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec10[i] = ((int(((fZec7[i] - (0.5f * fYec4[i-1])) < 0)))?(1 - iRec10[i-1]):iRec10[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec10_perm[i]=iRec10_tmp[count+i];
			
			// LOOP 0x55f852c364a0
			// pre processing
			for (int i=0; i<4; i++) iRec16_tmp[i]=iRec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec16[i] = ((int(((fZec11[i] - (0.5f * fYec7[i-1])) < 0)))?(1 - iRec16[i-1]):iRec16[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec16_perm[i]=iRec16_tmp[count+i];
			
			// LOOP 0x55f852c40420
			// pre processing
			for (int i=0; i<4; i++) iRec22_tmp[i]=iRec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec22[i] = ((int(((fZec15[i] - (0.5f * fYec10[i-1])) < 0)))?(1 - iRec22[i-1]):iRec22[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec22_perm[i]=iRec22_tmp[count+i];
			
			// LOOP 0x55f852c4a3f0
			// pre processing
			for (int i=0; i<4; i++) iRec28_tmp[i]=iRec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec28[i] = ((int(((fZec19[i] - (0.5f * fYec13[i-1])) < 0)))?(1 - iRec28[i-1]):iRec28[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec28_perm[i]=iRec28_tmp[count+i];
			
			// LOOP 0x55f852c54790
			// pre processing
			for (int i=0; i<4; i++) iRec34_tmp[i]=iRec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec34[i] = ((int(((fZec23[i] - (0.5f * fYec16[i-1])) < 0)))?(1 - iRec34[i-1]):iRec34[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec34_perm[i]=iRec34_tmp[count+i];
			
			// LOOP 0x55f852c5e870
			// pre processing
			for (int i=0; i<4; i++) iRec40_tmp[i]=iRec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec40[i] = ((int(((fZec27[i] - (0.5f * fYec19[i-1])) < 0)))?(1 - iRec40[i-1]):iRec40[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec40_perm[i]=iRec40_tmp[count+i];
			
			// LOOP 0x55f852c68950
			// pre processing
			for (int i=0; i<4; i++) iRec46_tmp[i]=iRec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec46[i] = ((int(((fZec31[i] - (0.5f * fYec22[i-1])) < 0)))?(1 - iRec46[i-1]):iRec46[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec46_perm[i]=iRec46_tmp[count+i];
			
			// LOOP 0x55f852c72a40
			// pre processing
			for (int i=0; i<4; i++) iRec52_tmp[i]=iRec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec52[i] = ((int(((fZec35[i] - (0.5f * fYec25[i-1])) < 0)))?(1 - iRec52[i-1]):iRec52[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec52_perm[i]=iRec52_tmp[count+i];
			
			// LOOP 0x55f852c7cde0
			// pre processing
			for (int i=0; i<4; i++) iRec58_tmp[i]=iRec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec58[i] = ((int(((fZec39[i] - (0.5f * fYec28[i-1])) < 0)))?(1 - iRec58[i-1]):iRec58[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec58_perm[i]=iRec58_tmp[count+i];
			
			// LOOP 0x55f852c86e60
			// pre processing
			for (int i=0; i<4; i++) iRec64_tmp[i]=iRec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec64[i] = ((int(((fZec43[i] - (0.5f * fYec31[i-1])) < 0)))?(1 - iRec64[i-1]):iRec64[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec64_perm[i]=iRec64_tmp[count+i];
			
			// LOOP 0x55f852c90f40
			// pre processing
			for (int i=0; i<4; i++) iRec70_tmp[i]=iRec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec70[i] = ((int(((fZec47[i] - (0.5f * fYec34[i-1])) < 0)))?(1 - iRec70[i-1]):iRec70[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec70_perm[i]=iRec70_tmp[count+i];
			
			// SECTION : 11
			// LOOP 0x55f852c29580
			// pre processing
			for (int i=0; i<4; i++) fYec2_tmp[i]=fYec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec2[i] = (iRec3[i] + fZec3[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec2_perm[i]=fYec2_tmp[count+i];
			
			// LOOP 0x55f852c33ae0
			// pre processing
			for (int i=0; i<4; i++) fYec5_tmp[i]=fYec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec5[i] = (iRec10[i] + fZec7[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec5_perm[i]=fYec5_tmp[count+i];
			
			// LOOP 0x55f852c3d910
			// pre processing
			for (int i=0; i<4; i++) fYec8_tmp[i]=fYec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec8[i] = (iRec16[i] + fZec11[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec8_perm[i]=fYec8_tmp[count+i];
			
			// LOOP 0x55f852c478d0
			// pre processing
			for (int i=0; i<4; i++) fYec11_tmp[i]=fYec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec11[i] = (iRec22[i] + fZec15[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec11_perm[i]=fYec11_tmp[count+i];
			
			// LOOP 0x55f852c518c0
			// pre processing
			for (int i=0; i<4; i++) fYec14_tmp[i]=fYec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec14[i] = (iRec28[i] + fZec19[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec14_perm[i]=fYec14_tmp[count+i];
			
			// LOOP 0x55f852c5bc60
			// pre processing
			for (int i=0; i<4; i++) fYec17_tmp[i]=fYec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec17[i] = (iRec34[i] + fZec23[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec17_perm[i]=fYec17_tmp[count+i];
			
			// LOOP 0x55f852c65d40
			// pre processing
			for (int i=0; i<4; i++) fYec20_tmp[i]=fYec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec20[i] = (iRec40[i] + fZec27[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec20_perm[i]=fYec20_tmp[count+i];
			
			// LOOP 0x55f852c6fe20
			// pre processing
			for (int i=0; i<4; i++) fYec23_tmp[i]=fYec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec23[i] = (iRec46[i] + fZec31[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec23_perm[i]=fYec23_tmp[count+i];
			
			// LOOP 0x55f852c79f10
			// pre processing
			for (int i=0; i<4; i++) fYec26_tmp[i]=fYec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec26[i] = (iRec52[i] + fZec35[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec26_perm[i]=fYec26_tmp[count+i];
			
			// LOOP 0x55f852c84250
			// pre processing
			for (int i=0; i<4; i++) fYec29_tmp[i]=fYec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec29[i] = (iRec58[i] + fZec39[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec29_perm[i]=fYec29_tmp[count+i];
			
			// LOOP 0x55f852c8e330
			// pre processing
			for (int i=0; i<4; i++) fYec32_tmp[i]=fYec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec32[i] = (iRec64[i] + fZec43[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec32_perm[i]=fYec32_tmp[count+i];
			
			// LOOP 0x55f852c98410
			// pre processing
			for (int i=0; i<4; i++) fYec35_tmp[i]=fYec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec35[i] = (iRec70[i] + fZec47[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec35_perm[i]=fYec35_tmp[count+i];
			
			// SECTION : 12
			// LOOP 0x55f852c29460
			// exec code
			for (int i=0; i<count; i++) {
				fZec4[i] = (0.5f * fYec2[i]);
			}
			
			// LOOP 0x55f852c339c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec8[i] = (0.5f * fYec5[i]);
			}
			
			// LOOP 0x55f852c3d7f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec12[i] = (0.5f * fYec8[i]);
			}
			
			// LOOP 0x55f852c477b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec16[i] = (0.5f * fYec11[i]);
			}
			
			// LOOP 0x55f852c517a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec20[i] = (0.5f * fYec14[i]);
			}
			
			// LOOP 0x55f852c5bb40
			// exec code
			for (int i=0; i<count; i++) {
				fZec24[i] = (0.5f * fYec17[i]);
			}
			
			// LOOP 0x55f852c65c20
			// exec code
			for (int i=0; i<count; i++) {
				fZec28[i] = (0.5f * fYec20[i]);
			}
			
			// LOOP 0x55f852c6fd00
			// exec code
			for (int i=0; i<count; i++) {
				fZec32[i] = (0.5f * fYec23[i]);
			}
			
			// LOOP 0x55f852c79df0
			// exec code
			for (int i=0; i<count; i++) {
				fZec36[i] = (0.5f * fYec26[i]);
			}
			
			// LOOP 0x55f852c84130
			// exec code
			for (int i=0; i<count; i++) {
				fZec40[i] = (0.5f * fYec29[i]);
			}
			
			// LOOP 0x55f852c8e210
			// exec code
			for (int i=0; i<count; i++) {
				fZec44[i] = (0.5f * fYec32[i]);
			}
			
			// LOOP 0x55f852c982f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec48[i] = (0.5f * fYec35[i]);
			}
			
			// SECTION : 13
			// LOOP 0x55f852dbf6c0
			// pre processing
			for (int i=0; i<4; i++) iRec138_tmp[i]=iRec138_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec138[i] = ((int(((fZec32[i] - (0.5f * fYec23[i-1])) < 0)))?(1 - iRec138[i-1]):iRec138[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec138_perm[i]=iRec138_tmp[count+i];
			
			// LOOP 0x55f852dc6290
			// pre processing
			for (int i=0; i<4; i++) iRec142_tmp[i]=iRec142_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec142[i] = ((int(((fZec36[i] - (0.5f * fYec26[i-1])) < 0)))?(1 - iRec142[i-1]):iRec142[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec142_perm[i]=iRec142_tmp[count+i];
			
			// LOOP 0x55f852dcd200
			// pre processing
			for (int i=0; i<4; i++) iRec146_tmp[i]=iRec146_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec146[i] = ((int(((fZec40[i] - (0.5f * fYec29[i-1])) < 0)))?(1 - iRec146[i-1]):iRec146[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec146_perm[i]=iRec146_tmp[count+i];
			
			// LOOP 0x55f852dd3e90
			// pre processing
			for (int i=0; i<4; i++) iRec150_tmp[i]=iRec150_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec150[i] = ((int(((fZec44[i] - (0.5f * fYec32[i-1])) < 0)))?(1 - iRec150[i-1]):iRec150[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec150_perm[i]=iRec150_tmp[count+i];
			
			// LOOP 0x55f852ddab20
			// pre processing
			for (int i=0; i<4; i++) iRec154_tmp[i]=iRec154_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec154[i] = ((int(((fZec48[i] - (0.5f * fYec35[i-1])) < 0)))?(1 - iRec154[i-1]):iRec154[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec154_perm[i]=iRec154_tmp[count+i];
			
			// LOOP 0x55f852de13d0
			// pre processing
			for (int i=0; i<4; i++) iRec157_tmp[i]=iRec157_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec157[i] = ((int(((fZec4[i] - (0.5f * fYec2[i-1])) < 0)))?(1 - iRec157[i-1]):iRec157[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec157_perm[i]=iRec157_tmp[count+i];
			
			// LOOP 0x55f852de5f00
			// pre processing
			for (int i=0; i<4; i++) iRec160_tmp[i]=iRec160_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec160[i] = ((int(((fZec8[i] - (0.5f * fYec5[i-1])) < 0)))?(1 - iRec160[i-1]):iRec160[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec160_perm[i]=iRec160_tmp[count+i];
			
			// LOOP 0x55f852dea750
			// pre processing
			for (int i=0; i<4; i++) iRec163_tmp[i]=iRec163_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec163[i] = ((int(((fZec12[i] - (0.5f * fYec8[i-1])) < 0)))?(1 - iRec163[i-1]):iRec163[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec163_perm[i]=iRec163_tmp[count+i];
			
			// LOOP 0x55f852deefa0
			// pre processing
			for (int i=0; i<4; i++) iRec166_tmp[i]=iRec166_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec166[i] = ((int(((fZec16[i] - (0.5f * fYec11[i-1])) < 0)))?(1 - iRec166[i-1]):iRec166[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec166_perm[i]=iRec166_tmp[count+i];
			
			// LOOP 0x55f852df3800
			// pre processing
			for (int i=0; i<4; i++) iRec169_tmp[i]=iRec169_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec169[i] = ((int(((fZec20[i] - (0.5f * fYec14[i-1])) < 0)))?(1 - iRec169[i-1]):iRec169[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec169_perm[i]=iRec169_tmp[count+i];
			
			// LOOP 0x55f852df8340
			// pre processing
			for (int i=0; i<4; i++) iRec172_tmp[i]=iRec172_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec172[i] = ((int(((fZec24[i] - (0.5f * fYec17[i-1])) < 0)))?(1 - iRec172[i-1]):iRec172[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec172_perm[i]=iRec172_tmp[count+i];
			
			// LOOP 0x55f852dfcba0
			// pre processing
			for (int i=0; i<4; i++) iRec175_tmp[i]=iRec175_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec175[i] = ((int(((fZec28[i] - (0.5f * fYec20[i-1])) < 0)))?(1 - iRec175[i-1]):iRec175[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec175_perm[i]=iRec175_tmp[count+i];
			
			// SECTION : 14
			// LOOP 0x55f852dc0a80
			// pre processing
			for (int i=0; i<4; i++) fYec49_tmp[i]=fYec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec49[i] = (iRec138[i] + fZec32[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec49_perm[i]=fYec49_tmp[count+i];
			
			// LOOP 0x55f852dc7ae0
			// pre processing
			for (int i=0; i<4; i++) fYec51_tmp[i]=fYec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec51[i] = (iRec142[i] + fZec36[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec51_perm[i]=fYec51_tmp[count+i];
			
			// LOOP 0x55f852dcea50
			// pre processing
			for (int i=0; i<4; i++) fYec53_tmp[i]=fYec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec53[i] = (iRec146[i] + fZec40[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec53_perm[i]=fYec53_tmp[count+i];
			
			// LOOP 0x55f852dd56e0
			// pre processing
			for (int i=0; i<4; i++) fYec55_tmp[i]=fYec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec55[i] = (iRec150[i] + fZec44[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec55_perm[i]=fYec55_tmp[count+i];
			
			// LOOP 0x55f852ddc370
			// pre processing
			for (int i=0; i<4; i++) fYec57_tmp[i]=fYec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec57[i] = (iRec154[i] + fZec48[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec57_perm[i]=fYec57_tmp[count+i];
			
			// LOOP 0x55f852de2b20
			// pre processing
			for (int i=0; i<4; i++) fYec59_tmp[i]=fYec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec59[i] = (iRec157[i] + fZec4[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec59_perm[i]=fYec59_tmp[count+i];
			
			// LOOP 0x55f852de7650
			// pre processing
			for (int i=0; i<4; i++) fYec60_tmp[i]=fYec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec60[i] = (iRec160[i] + fZec8[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec60_perm[i]=fYec60_tmp[count+i];
			
			// LOOP 0x55f852debea0
			// pre processing
			for (int i=0; i<4; i++) fYec61_tmp[i]=fYec61_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec61[i] = (iRec163[i] + fZec12[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec61_perm[i]=fYec61_tmp[count+i];
			
			// LOOP 0x55f852df0700
			// pre processing
			for (int i=0; i<4; i++) fYec62_tmp[i]=fYec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec62[i] = (iRec166[i] + fZec16[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec62_perm[i]=fYec62_tmp[count+i];
			
			// LOOP 0x55f852df4f60
			// pre processing
			for (int i=0; i<4; i++) fYec63_tmp[i]=fYec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec63[i] = (iRec169[i] + fZec20[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec63_perm[i]=fYec63_tmp[count+i];
			
			// LOOP 0x55f852df9aa0
			// pre processing
			for (int i=0; i<4; i++) fYec64_tmp[i]=fYec64_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec64[i] = (iRec172[i] + fZec24[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec64_perm[i]=fYec64_tmp[count+i];
			
			// LOOP 0x55f852dfe300
			// pre processing
			for (int i=0; i<4; i++) fYec65_tmp[i]=fYec65_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec65[i] = (iRec175[i] + fZec28[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec65_perm[i]=fYec65_tmp[count+i];
			
			// SECTION : 15
			// LOOP 0x55f852dc1370
			// exec code
			for (int i=0; i<count; i++) {
				fZec158[i] = (0.5f * fYec49[i]);
			}
			
			// LOOP 0x55f852dc8450
			// exec code
			for (int i=0; i<count; i++) {
				fZec160[i] = (0.5f * fYec51[i]);
			}
			
			// LOOP 0x55f852dcf3c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec162[i] = (0.5f * fYec53[i]);
			}
			
			// LOOP 0x55f852dd6050
			// exec code
			for (int i=0; i<count; i++) {
				fZec164[i] = (0.5f * fYec55[i]);
			}
			
			// LOOP 0x55f852ddcce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec166[i] = (0.5f * fYec57[i]);
			}
			
			// LOOP 0x55f852de2a00
			// exec code
			for (int i=0; i<count; i++) {
				fZec168[i] = (0.5f * fYec59[i]);
			}
			
			// LOOP 0x55f852de7530
			// exec code
			for (int i=0; i<count; i++) {
				fZec169[i] = (0.5f * fYec60[i]);
			}
			
			// LOOP 0x55f852debd80
			// exec code
			for (int i=0; i<count; i++) {
				fZec170[i] = (0.5f * fYec61[i]);
			}
			
			// LOOP 0x55f852df05e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec171[i] = (0.5f * fYec62[i]);
			}
			
			// LOOP 0x55f852df4e40
			// exec code
			for (int i=0; i<count; i++) {
				fZec172[i] = (0.5f * fYec63[i]);
			}
			
			// LOOP 0x55f852df9980
			// exec code
			for (int i=0; i<count; i++) {
				fZec173[i] = (0.5f * fYec64[i]);
			}
			
			// LOOP 0x55f852dfe1e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec174[i] = (0.5f * fYec65[i]);
			}
			
			// SECTION : 16
			// LOOP 0x55f852d95e60
			// pre processing
			for (int i=0; i<4; i++) iRec137_tmp[i]=iRec137_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec137[i] = ((int(((fZec158[i] - (0.5f * fYec49[i-1])) < 0)))?(1 - iRec137[i-1]):iRec137[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec137_perm[i]=iRec137_tmp[count+i];
			
			// LOOP 0x55f852dc5eb0
			// pre processing
			for (int i=0; i<4; i++) iRec141_tmp[i]=iRec141_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec141[i] = ((int(((fZec160[i] - (0.5f * fYec51[i-1])) < 0)))?(1 - iRec141[i-1]):iRec141[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec141_perm[i]=iRec141_tmp[count+i];
			
			// LOOP 0x55f852dcce20
			// pre processing
			for (int i=0; i<4; i++) iRec145_tmp[i]=iRec145_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec145[i] = ((int(((fZec162[i] - (0.5f * fYec53[i-1])) < 0)))?(1 - iRec145[i-1]):iRec145[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec145_perm[i]=iRec145_tmp[count+i];
			
			// LOOP 0x55f852dd3ab0
			// pre processing
			for (int i=0; i<4; i++) iRec149_tmp[i]=iRec149_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec149[i] = ((int(((fZec164[i] - (0.5f * fYec55[i-1])) < 0)))?(1 - iRec149[i-1]):iRec149[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec149_perm[i]=iRec149_tmp[count+i];
			
			// LOOP 0x55f852dda740
			// pre processing
			for (int i=0; i<4; i++) iRec153_tmp[i]=iRec153_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec153[i] = ((int(((fZec166[i] - (0.5f * fYec57[i-1])) < 0)))?(1 - iRec153[i-1]):iRec153[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec153_perm[i]=iRec153_tmp[count+i];
			
			// LOOP 0x55f852f03060
			// pre processing
			for (int i=0; i<4; i++) iRec191_tmp[i]=iRec191_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec191[i] = ((int(((fZec168[i] - (0.5f * fYec59[i-1])) < 0)))?(1 - iRec191[i-1]):iRec191[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec191_perm[i]=iRec191_tmp[count+i];
			
			// LOOP 0x55f852f0b840
			// pre processing
			for (int i=0; i<4; i++) iRec196_tmp[i]=iRec196_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec196[i] = ((int(((fZec169[i] - (0.5f * fYec60[i-1])) < 0)))?(1 - iRec196[i-1]):iRec196[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec196_perm[i]=iRec196_tmp[count+i];
			
			// LOOP 0x55f852f141a0
			// pre processing
			for (int i=0; i<4; i++) iRec201_tmp[i]=iRec201_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec201[i] = ((int(((fZec170[i] - (0.5f * fYec61[i-1])) < 0)))?(1 - iRec201[i-1]):iRec201[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec201_perm[i]=iRec201_tmp[count+i];
			
			// LOOP 0x55f852f1caa0
			// pre processing
			for (int i=0; i<4; i++) iRec206_tmp[i]=iRec206_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec206[i] = ((int(((fZec171[i] - (0.5f * fYec62[i-1])) < 0)))?(1 - iRec206[i-1]):iRec206[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec206_perm[i]=iRec206_tmp[count+i];
			
			// LOOP 0x55f852f253a0
			// pre processing
			for (int i=0; i<4; i++) iRec211_tmp[i]=iRec211_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec211[i] = ((int(((fZec172[i] - (0.5f * fYec63[i-1])) < 0)))?(1 - iRec211[i-1]):iRec211[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec211_perm[i]=iRec211_tmp[count+i];
			
			// LOOP 0x55f852f2dca0
			// pre processing
			for (int i=0; i<4; i++) iRec216_tmp[i]=iRec216_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec216[i] = ((int(((fZec173[i] - (0.5f * fYec64[i-1])) < 0)))?(1 - iRec216[i-1]):iRec216[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec216_perm[i]=iRec216_tmp[count+i];
			
			// LOOP 0x55f852f365a0
			// pre processing
			for (int i=0; i<4; i++) iRec221_tmp[i]=iRec221_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec221[i] = ((int(((fZec174[i] - (0.5f * fYec65[i-1])) < 0)))?(1 - iRec221[i-1]):iRec221[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec221_perm[i]=iRec221_tmp[count+i];
			
			// SECTION : 17
			// LOOP 0x55f852c1cb50
			// pre processing
			for (int i=0; i<4; i++) fRec2_tmp[i]=fRec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec2[i] = (fRec2[i-1] + (fConst3 * (yc20_get_sample(fZec4[i], 0, 0) - fRec2[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec2_perm[i]=fRec2_tmp[count+i];
			
			// LOOP 0x55f852c2c3e0
			// pre processing
			for (int i=0; i<4; i++) fRec9_tmp[i]=fRec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec9[i] = (fRec9[i-1] + (fConst3 * (yc20_get_sample(fZec8[i], 1, 0) - fRec9[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec9_perm[i]=fRec9_tmp[count+i];
			
			// LOOP 0x55f852c360c0
			// pre processing
			for (int i=0; i<4; i++) fRec15_tmp[i]=fRec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec15[i] = (fRec15[i-1] + (fConst3 * (yc20_get_sample(fZec12[i], 2, 0) - fRec15[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec15_perm[i]=fRec15_tmp[count+i];
			
			// LOOP 0x55f852c40040
			// pre processing
			for (int i=0; i<4; i++) fRec21_tmp[i]=fRec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec21[i] = (fRec21[i-1] + (fConst3 * (yc20_get_sample(fZec16[i], 3, 0) - fRec21[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec21_perm[i]=fRec21_tmp[count+i];
			
			// LOOP 0x55f852c4a010
			// pre processing
			for (int i=0; i<4; i++) fRec27_tmp[i]=fRec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec27[i] = (fRec27[i-1] + (fConst6 * (yc20_get_sample(fZec20[i], 4, 0) - fRec27[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec27_perm[i]=fRec27_tmp[count+i];
			
			// LOOP 0x55f852dc2710
			// pre processing
			for (int i=0; i<4; i++) fYec50_tmp[i]=fYec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec50[i] = (iRec137[i] + fZec158[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec50_perm[i]=fYec50_tmp[count+i];
			
			// LOOP 0x55f852dc9a40
			// pre processing
			for (int i=0; i<4; i++) fYec52_tmp[i]=fYec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec52[i] = (iRec141[i] + fZec160[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec52_perm[i]=fYec52_tmp[count+i];
			
			// LOOP 0x55f852dd09b0
			// pre processing
			for (int i=0; i<4; i++) fYec54_tmp[i]=fYec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec54[i] = (iRec145[i] + fZec162[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec54_perm[i]=fYec54_tmp[count+i];
			
			// LOOP 0x55f852dd7640
			// pre processing
			for (int i=0; i<4; i++) fYec56_tmp[i]=fYec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec56[i] = (iRec149[i] + fZec164[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec56_perm[i]=fYec56_tmp[count+i];
			
			// LOOP 0x55f852dde2d0
			// pre processing
			for (int i=0; i<4; i++) fYec58_tmp[i]=fYec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec58[i] = (iRec153[i] + fZec166[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec58_perm[i]=fYec58_tmp[count+i];
			
			// LOOP 0x55f852f04460
			// pre processing
			for (int i=0; i<4; i++) fYec67_tmp[i]=fYec67_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec67[i] = (iRec191[i] + fZec168[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec67_perm[i]=fYec67_tmp[count+i];
			
			// LOOP 0x55f852f0d1e0
			// pre processing
			for (int i=0; i<4; i++) fYec69_tmp[i]=fYec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec69[i] = (iRec196[i] + fZec169[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec69_perm[i]=fYec69_tmp[count+i];
			
			// LOOP 0x55f852f15ae0
			// pre processing
			for (int i=0; i<4; i++) fYec71_tmp[i]=fYec71_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec71[i] = (iRec201[i] + fZec170[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec71_perm[i]=fYec71_tmp[count+i];
			
			// LOOP 0x55f852f1e3e0
			// pre processing
			for (int i=0; i<4; i++) fYec73_tmp[i]=fYec73_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec73[i] = (iRec206[i] + fZec171[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec73_perm[i]=fYec73_tmp[count+i];
			
			// LOOP 0x55f852f26ce0
			// pre processing
			for (int i=0; i<4; i++) fYec75_tmp[i]=fYec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec75[i] = (iRec211[i] + fZec172[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec75_perm[i]=fYec75_tmp[count+i];
			
			// LOOP 0x55f852f2f5e0
			// pre processing
			for (int i=0; i<4; i++) fYec77_tmp[i]=fYec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec77[i] = (iRec216[i] + fZec173[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec77_perm[i]=fYec77_tmp[count+i];
			
			// LOOP 0x55f852f37ee0
			// pre processing
			for (int i=0; i<4; i++) fYec79_tmp[i]=fYec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec79[i] = (iRec221[i] + fZec174[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec79_perm[i]=fYec79_tmp[count+i];
			
			// SECTION : 18
			// LOOP 0x55f852c1c8b0
			// pre processing
			for (int i=0; i<4; i++) fRec1_tmp[i]=fRec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec1[i] = (fConst5 * (fRec1[i-1] + (fRec2[i] - fRec2[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec1_perm[i]=fRec1_tmp[count+i];
			
			// LOOP 0x55f852c2c0c0
			// pre processing
			for (int i=0; i<4; i++) fRec8_tmp[i]=fRec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec8[i] = (fConst5 * (fRec8[i-1] + (fRec9[i] - fRec9[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec8_perm[i]=fRec8_tmp[count+i];
			
			// LOOP 0x55f852c35dc0
			// pre processing
			for (int i=0; i<4; i++) fRec14_tmp[i]=fRec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec14[i] = (fConst5 * (fRec14[i-1] + (fRec15[i] - fRec15[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec14_perm[i]=fRec14_tmp[count+i];
			
			// LOOP 0x55f852c3fd80
			// pre processing
			for (int i=0; i<4; i++) fRec20_tmp[i]=fRec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec20[i] = (fConst5 * (fRec20[i-1] + (fRec21[i] - fRec21[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec20_perm[i]=fRec20_tmp[count+i];
			
			// LOOP 0x55f852c49d70
			// pre processing
			for (int i=0; i<4; i++) fRec26_tmp[i]=fRec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec26[i] = (fConst5 * (fRec26[i-1] + (fRec27[i] - fRec27[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec26_perm[i]=fRec26_tmp[count+i];
			
			// LOOP 0x55f852c543b0
			// pre processing
			for (int i=0; i<4; i++) fRec33_tmp[i]=fRec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec33[i] = (fRec33[i-1] + (fConst6 * (yc20_get_sample(fZec24[i], 5, 0) - fRec33[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec33_perm[i]=fRec33_tmp[count+i];
			
			// LOOP 0x55f852c5e490
			// pre processing
			for (int i=0; i<4; i++) fRec39_tmp[i]=fRec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec39[i] = (fRec39[i-1] + (fConst6 * (yc20_get_sample(fZec28[i], 6, 0) - fRec39[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec39_perm[i]=fRec39_tmp[count+i];
			
			// LOOP 0x55f852c68570
			// pre processing
			for (int i=0; i<4; i++) fRec45_tmp[i]=fRec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec45[i] = (fRec45[i-1] + (fConst6 * (yc20_get_sample(fZec32[i], 7, 0) - fRec45[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec45_perm[i]=fRec45_tmp[count+i];
			
			// LOOP 0x55f852c72660
			// pre processing
			for (int i=0; i<4; i++) fRec51_tmp[i]=fRec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec51[i] = (fRec51[i-1] + (fConst7 * (yc20_get_sample(fZec36[i], 8, 0) - fRec51[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec51_perm[i]=fRec51_tmp[count+i];
			
			// LOOP 0x55f852dc25f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec159[i] = (0.5f * fYec50[i]);
			}
			
			// LOOP 0x55f852dc9920
			// exec code
			for (int i=0; i<count; i++) {
				fZec161[i] = (0.5f * fYec52[i]);
			}
			
			// LOOP 0x55f852dd0890
			// exec code
			for (int i=0; i<count; i++) {
				fZec163[i] = (0.5f * fYec54[i]);
			}
			
			// LOOP 0x55f852dd7520
			// exec code
			for (int i=0; i<count; i++) {
				fZec165[i] = (0.5f * fYec56[i]);
			}
			
			// LOOP 0x55f852dde1b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec167[i] = (0.5f * fYec58[i]);
			}
			
			// LOOP 0x55f852f04d50
			// exec code
			for (int i=0; i<count; i++) {
				fZec180[i] = (0.5f * fYec67[i]);
			}
			
			// LOOP 0x55f852f0db50
			// exec code
			for (int i=0; i<count; i++) {
				fZec182[i] = (0.5f * fYec69[i]);
			}
			
			// LOOP 0x55f852f16450
			// exec code
			for (int i=0; i<count; i++) {
				fZec184[i] = (0.5f * fYec71[i]);
			}
			
			// LOOP 0x55f852f1ed50
			// exec code
			for (int i=0; i<count; i++) {
				fZec186[i] = (0.5f * fYec73[i]);
			}
			
			// LOOP 0x55f852f27650
			// exec code
			for (int i=0; i<count; i++) {
				fZec188[i] = (0.5f * fYec75[i]);
			}
			
			// LOOP 0x55f852f2ff50
			// exec code
			for (int i=0; i<count; i++) {
				fZec190[i] = (0.5f * fYec77[i]);
			}
			
			// LOOP 0x55f852f38850
			// exec code
			for (int i=0; i<count; i++) {
				fZec192[i] = (0.5f * fYec79[i]);
			}
			
			// SECTION : 19
			// LOOP 0x55f852c540f0
			// pre processing
			for (int i=0; i<4; i++) fRec32_tmp[i]=fRec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec32[i] = (fConst5 * (fRec32[i-1] + (fRec33[i] - fRec33[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec32_perm[i]=fRec32_tmp[count+i];
			
			// LOOP 0x55f852c5e1f0
			// pre processing
			for (int i=0; i<4; i++) fRec38_tmp[i]=fRec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec38[i] = (fConst5 * (fRec38[i-1] + (fRec39[i] - fRec39[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec38_perm[i]=fRec38_tmp[count+i];
			
			// LOOP 0x55f852c682d0
			// pre processing
			for (int i=0; i<4; i++) fRec44_tmp[i]=fRec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec44[i] = (fConst5 * (fRec44[i-1] + (fRec45[i] - fRec45[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec44_perm[i]=fRec44_tmp[count+i];
			
			// LOOP 0x55f852c723a0
			// pre processing
			for (int i=0; i<4; i++) fRec50_tmp[i]=fRec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec50[i] = (fConst5 * (fRec50[i-1] + (fRec51[i] - fRec51[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec50_perm[i]=fRec50_tmp[count+i];
			
			// LOOP 0x55f852c7ca00
			// pre processing
			for (int i=0; i<4; i++) fRec57_tmp[i]=fRec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec57[i] = (fRec57[i-1] + (fConst7 * (yc20_get_sample(fZec40[i], 9, 0) - fRec57[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec57_perm[i]=fRec57_tmp[count+i];
			
			// LOOP 0x55f852c86a80
			// pre processing
			for (int i=0; i<4; i++) fRec63_tmp[i]=fRec63_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec63[i] = (fRec63[i-1] + (fConst7 * (yc20_get_sample(fZec44[i], 10, 0) - fRec63[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec63_perm[i]=fRec63_tmp[count+i];
			
			// LOOP 0x55f852c90b60
			// pre processing
			for (int i=0; i<4; i++) fRec69_tmp[i]=fRec69_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec69[i] = (fRec69[i-1] + (fConst7 * (yc20_get_sample(fZec48[i], 11, 0) - fRec69[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec69_perm[i]=fRec69_tmp[count+i];
			
			// LOOP 0x55f852c9ac40
			// pre processing
			for (int i=0; i<4; i++) fRec75_tmp[i]=fRec75_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec75[i] = (fRec75[i-1] + (fConst8 * (yc20_get_sample(fZec3[i], 0, 0) - fRec75[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec75_perm[i]=fRec75_tmp[count+i];
			
			// LOOP 0x55f852d8a230
			// exec code
			for (int i=0; i<count; i++) {
				fZec124[i] = (fRec26[i] + (fRec20[i] + (fRec14[i] + (fRec1[i] + fRec8[i]))));
			}
			
			// LOOP 0x55f852f02c80
			// pre processing
			for (int i=0; i<4; i++) iRec190_tmp[i]=iRec190_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec190[i] = ((int(((fZec180[i] - (0.5f * fYec67[i-1])) < 0)))?(1 - iRec190[i-1]):iRec190[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec190_perm[i]=iRec190_tmp[count+i];
			
			// LOOP 0x55f852f0b430
			// pre processing
			for (int i=0; i<4; i++) iRec195_tmp[i]=iRec195_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec195[i] = ((int(((fZec182[i] - (0.5f * fYec69[i-1])) < 0)))?(1 - iRec195[i-1]):iRec195[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec195_perm[i]=iRec195_tmp[count+i];
			
			// LOOP 0x55f852f13d90
			// pre processing
			for (int i=0; i<4; i++) iRec200_tmp[i]=iRec200_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec200[i] = ((int(((fZec184[i] - (0.5f * fYec71[i-1])) < 0)))?(1 - iRec200[i-1]):iRec200[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec200_perm[i]=iRec200_tmp[count+i];
			
			// LOOP 0x55f852f1c690
			// pre processing
			for (int i=0; i<4; i++) iRec205_tmp[i]=iRec205_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec205[i] = ((int(((fZec186[i] - (0.5f * fYec73[i-1])) < 0)))?(1 - iRec205[i-1]):iRec205[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec205_perm[i]=iRec205_tmp[count+i];
			
			// LOOP 0x55f852f24f90
			// pre processing
			for (int i=0; i<4; i++) iRec210_tmp[i]=iRec210_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec210[i] = ((int(((fZec188[i] - (0.5f * fYec75[i-1])) < 0)))?(1 - iRec210[i-1]):iRec210[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec210_perm[i]=iRec210_tmp[count+i];
			
			// LOOP 0x55f852f2d890
			// pre processing
			for (int i=0; i<4; i++) iRec215_tmp[i]=iRec215_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec215[i] = ((int(((fZec190[i] - (0.5f * fYec77[i-1])) < 0)))?(1 - iRec215[i-1]):iRec215[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec215_perm[i]=iRec215_tmp[count+i];
			
			// LOOP 0x55f852f36190
			// pre processing
			for (int i=0; i<4; i++) iRec220_tmp[i]=iRec220_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec220[i] = ((int(((fZec192[i] - (0.5f * fYec79[i-1])) < 0)))?(1 - iRec220[i-1]):iRec220[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec220_perm[i]=iRec220_tmp[count+i];
			
			// LOOP 0x55f852f3ea90
			// pre processing
			for (int i=0; i<4; i++) iRec225_tmp[i]=iRec225_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec225[i] = ((int(((fZec159[i] - (0.5f * fYec50[i-1])) < 0)))?(1 - iRec225[i-1]):iRec225[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec225_perm[i]=iRec225_tmp[count+i];
			
			// LOOP 0x55f852f45140
			// pre processing
			for (int i=0; i<4; i++) iRec229_tmp[i]=iRec229_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec229[i] = ((int(((fZec161[i] - (0.5f * fYec52[i-1])) < 0)))?(1 - iRec229[i-1]):iRec229[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec229_perm[i]=iRec229_tmp[count+i];
			
			// LOOP 0x55f852f4bad0
			// pre processing
			for (int i=0; i<4; i++) iRec233_tmp[i]=iRec233_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec233[i] = ((int(((fZec163[i] - (0.5f * fYec54[i-1])) < 0)))?(1 - iRec233[i-1]):iRec233[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec233_perm[i]=iRec233_tmp[count+i];
			
			// LOOP 0x55f852f52180
			// pre processing
			for (int i=0; i<4; i++) iRec237_tmp[i]=iRec237_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec237[i] = ((int(((fZec165[i] - (0.5f * fYec56[i-1])) < 0)))?(1 - iRec237[i-1]):iRec237[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec237_perm[i]=iRec237_tmp[count+i];
			
			// LOOP 0x55f852f58920
			// pre processing
			for (int i=0; i<4; i++) iRec241_tmp[i]=iRec241_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec241[i] = ((int(((fZec167[i] - (0.5f * fYec58[i-1])) < 0)))?(1 - iRec241[i-1]):iRec241[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec241_perm[i]=iRec241_tmp[count+i];
			
			// SECTION : 20
			// LOOP 0x55f852c7c740
			// pre processing
			for (int i=0; i<4; i++) fRec56_tmp[i]=fRec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec56[i] = (fConst5 * (fRec56[i-1] + (fRec57[i] - fRec57[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec56_perm[i]=fRec56_tmp[count+i];
			
			// LOOP 0x55f852c867e0
			// pre processing
			for (int i=0; i<4; i++) fRec62_tmp[i]=fRec62_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec62[i] = (fConst5 * (fRec62[i-1] + (fRec63[i] - fRec63[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec62_perm[i]=fRec62_tmp[count+i];
			
			// LOOP 0x55f852c908c0
			// pre processing
			for (int i=0; i<4; i++) fRec68_tmp[i]=fRec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec68[i] = (fConst5 * (fRec68[i-1] + (fRec69[i] - fRec69[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec68_perm[i]=fRec68_tmp[count+i];
			
			// LOOP 0x55f852c9a9a0
			// pre processing
			for (int i=0; i<4; i++) fRec74_tmp[i]=fRec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec74[i] = (fConst5 * (fRec74[i-1] + (fRec75[i] - fRec75[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec74_perm[i]=fRec74_tmp[count+i];
			
			// LOOP 0x55f852c9d1b0
			// pre processing
			for (int i=0; i<4; i++) fRec77_tmp[i]=fRec77_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec77[i] = (fRec77[i-1] + (fConst8 * (yc20_get_sample(fZec7[i], 1, 0) - fRec77[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec77_perm[i]=fRec77_tmp[count+i];
			
			// LOOP 0x55f852c9f490
			// pre processing
			for (int i=0; i<4; i++) fRec79_tmp[i]=fRec79_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec79[i] = (fRec79[i-1] + (fConst8 * (yc20_get_sample(fZec11[i], 2, 0) - fRec79[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec79_perm[i]=fRec79_tmp[count+i];
			
			// LOOP 0x55f852ca1770
			// pre processing
			for (int i=0; i<4; i++) fRec81_tmp[i]=fRec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec81[i] = (fRec81[i-1] + (fConst8 * (yc20_get_sample(fZec15[i], 3, 0) - fRec81[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec81_perm[i]=fRec81_tmp[count+i];
			
			// LOOP 0x55f852ca3a50
			// pre processing
			for (int i=0; i<4; i++) fRec83_tmp[i]=fRec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec83[i] = (fRec83[i-1] + (fConst9 * (yc20_get_sample(fZec19[i], 4, 0) - fRec83[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec83_perm[i]=fRec83_tmp[count+i];
			
			// LOOP 0x55f852ca5fd0
			// pre processing
			for (int i=0; i<4; i++) fRec85_tmp[i]=fRec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec85[i] = (fRec85[i-1] + (fConst9 * (yc20_get_sample(fZec23[i], 5, 0) - fRec85[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec85_perm[i]=fRec85_tmp[count+i];
			
			// LOOP 0x55f852ca82b0
			// pre processing
			for (int i=0; i<4; i++) fRec87_tmp[i]=fRec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec87[i] = (fRec87[i-1] + (fConst9 * (yc20_get_sample(fZec27[i], 6, 0) - fRec87[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec87_perm[i]=fRec87_tmp[count+i];
			
			// LOOP 0x55f852caa590
			// pre processing
			for (int i=0; i<4; i++) fRec89_tmp[i]=fRec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec89[i] = (fRec89[i-1] + (fConst9 * (yc20_get_sample(fZec31[i], 7, 0) - fRec89[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec89_perm[i]=fRec89_tmp[count+i];
			
			// LOOP 0x55f852cac870
			// pre processing
			for (int i=0; i<4; i++) fRec91_tmp[i]=fRec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec91[i] = (fRec91[i-1] + (fConst10 * (yc20_get_sample(fZec35[i], 8, 0) - fRec91[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec91_perm[i]=fRec91_tmp[count+i];
			
			// LOOP 0x55f852caee30
			// pre processing
			for (int i=0; i<4; i++) fRec93_tmp[i]=fRec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec93[i] = (fRec93[i-1] + (fConst10 * (yc20_get_sample(fZec39[i], 9, 0) - fRec93[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec93_perm[i]=fRec93_tmp[count+i];
			
			// LOOP 0x55f852cb1110
			// pre processing
			for (int i=0; i<4; i++) fRec95_tmp[i]=fRec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec95[i] = (fRec95[i-1] + (fConst10 * (yc20_get_sample(fZec43[i], 10, 0) - fRec95[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec95_perm[i]=fRec95_tmp[count+i];
			
			// LOOP 0x55f852cb33f0
			// pre processing
			for (int i=0; i<4; i++) fRec97_tmp[i]=fRec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec97[i] = (fRec97[i-1] + (fConst10 * (yc20_get_sample(fZec47[i], 11, 0) - fRec97[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec97_perm[i]=fRec97_tmp[count+i];
			
			// LOOP 0x55f852cb56d0
			// pre processing
			for (int i=0; i<4; i++) fRec99_tmp[i]=fRec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec99[i] = (fRec99[i-1] + (fConst11 * (yc20_get_sample(fZec2[i], 0, 0) - fRec99[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec99_perm[i]=fRec99_tmp[count+i];
			
			// LOOP 0x55f852cb7b50
			// pre processing
			for (int i=0; i<4; i++) fRec101_tmp[i]=fRec101_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec101[i] = (fRec101[i-1] + (fConst11 * (yc20_get_sample(fZec6[i], 1, 0) - fRec101[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec101_perm[i]=fRec101_tmp[count+i];
			
			// LOOP 0x55f852cb9d00
			// pre processing
			for (int i=0; i<4; i++) fRec103_tmp[i]=fRec103_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec103[i] = (fRec103[i-1] + (fConst11 * (yc20_get_sample(fZec10[i], 2, 0) - fRec103[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec103_perm[i]=fRec103_tmp[count+i];
			
			// LOOP 0x55f852cbbeb0
			// pre processing
			for (int i=0; i<4; i++) fRec105_tmp[i]=fRec105_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec105[i] = (fRec105[i-1] + (fConst11 * (yc20_get_sample(fZec14[i], 3, 0) - fRec105[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec105_perm[i]=fRec105_tmp[count+i];
			
			// LOOP 0x55f852cbe060
			// pre processing
			for (int i=0; i<4; i++) fRec107_tmp[i]=fRec107_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec107[i] = (fRec107[i-1] + (fConst12 * (yc20_get_sample(fZec18[i], 4, 0) - fRec107[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec107_perm[i]=fRec107_tmp[count+i];
			
			// LOOP 0x55f852cc04f0
			// pre processing
			for (int i=0; i<4; i++) fRec109_tmp[i]=fRec109_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec109[i] = (fRec109[i-1] + (fConst12 * (yc20_get_sample(fZec22[i], 5, 0) - fRec109[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec109_perm[i]=fRec109_tmp[count+i];
			
			// LOOP 0x55f852cc26a0
			// pre processing
			for (int i=0; i<4; i++) fRec111_tmp[i]=fRec111_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec111[i] = (fRec111[i-1] + (fConst12 * (yc20_get_sample(fZec26[i], 6, 0) - fRec111[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec111_perm[i]=fRec111_tmp[count+i];
			
			// LOOP 0x55f852cc4850
			// pre processing
			for (int i=0; i<4; i++) fRec113_tmp[i]=fRec113_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec113[i] = (fRec113[i-1] + (fConst12 * (yc20_get_sample(fZec30[i], 7, 0) - fRec113[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec113_perm[i]=fRec113_tmp[count+i];
			
			// LOOP 0x55f852cc6a00
			// pre processing
			for (int i=0; i<4; i++) fRec115_tmp[i]=fRec115_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec115[i] = (fRec115[i-1] + (fConst13 * (yc20_get_sample(fZec34[i], 8, 0) - fRec115[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec115_perm[i]=fRec115_tmp[count+i];
			
			// LOOP 0x55f852cc8e90
			// pre processing
			for (int i=0; i<4; i++) fRec117_tmp[i]=fRec117_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec117[i] = (fRec117[i-1] + (fConst13 * (yc20_get_sample(fZec38[i], 9, 0) - fRec117[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec117_perm[i]=fRec117_tmp[count+i];
			
			// LOOP 0x55f852ccb040
			// pre processing
			for (int i=0; i<4; i++) fRec119_tmp[i]=fRec119_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec119[i] = (fRec119[i-1] + (fConst13 * (yc20_get_sample(fZec42[i], 10, 0) - fRec119[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec119_perm[i]=fRec119_tmp[count+i];
			
			// LOOP 0x55f852ccd1f0
			// pre processing
			for (int i=0; i<4; i++) fRec121_tmp[i]=fRec121_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec121[i] = (fRec121[i-1] + (fConst13 * (yc20_get_sample(fZec46[i], 11, 0) - fRec121[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec121_perm[i]=fRec121_tmp[count+i];
			
			// LOOP 0x55f852ccf2c0
			// pre processing
			for (int i=0; i<4; i++) fYec36_tmp[i]=fYec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec36[i] = yc20_get_sample(fRec5[i], 0, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec36_perm[i]=fYec36_tmp[count+i];
			
			// LOOP 0x55f852cd0e90
			// pre processing
			for (int i=0; i<4; i++) fYec37_tmp[i]=fYec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec37[i] = yc20_get_sample(fRec12[i], 1, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec37_perm[i]=fYec37_tmp[count+i];
			
			// LOOP 0x55f852cd2920
			// pre processing
			for (int i=0; i<4; i++) fYec38_tmp[i]=fYec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec38[i] = yc20_get_sample(fRec18[i], 2, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec38_perm[i]=fYec38_tmp[count+i];
			
			// LOOP 0x55f852cd43b0
			// pre processing
			for (int i=0; i<4; i++) fYec39_tmp[i]=fYec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec39[i] = yc20_get_sample(fRec24[i], 3, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec39_perm[i]=fYec39_tmp[count+i];
			
			// LOOP 0x55f852cd5e40
			// pre processing
			for (int i=0; i<4; i++) fYec40_tmp[i]=fYec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec40[i] = yc20_get_sample(fRec30[i], 4, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec40_perm[i]=fYec40_tmp[count+i];
			
			// LOOP 0x55f852cd78d0
			// pre processing
			for (int i=0; i<4; i++) fYec41_tmp[i]=fYec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec41[i] = yc20_get_sample(fRec36[i], 5, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec41_perm[i]=fYec41_tmp[count+i];
			
			// LOOP 0x55f852cd9360
			// pre processing
			for (int i=0; i<4; i++) fYec42_tmp[i]=fYec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec42[i] = yc20_get_sample(fRec42[i], 6, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec42_perm[i]=fYec42_tmp[count+i];
			
			// LOOP 0x55f852cdadf0
			// pre processing
			for (int i=0; i<4; i++) fYec43_tmp[i]=fYec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec43[i] = yc20_get_sample(fRec48[i], 7, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec43_perm[i]=fYec43_tmp[count+i];
			
			// LOOP 0x55f852cdc880
			// pre processing
			for (int i=0; i<4; i++) fYec44_tmp[i]=fYec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec44[i] = yc20_get_sample(fRec54[i], 8, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec44_perm[i]=fYec44_tmp[count+i];
			
			// LOOP 0x55f852cde310
			// pre processing
			for (int i=0; i<4; i++) fYec45_tmp[i]=fYec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec45[i] = yc20_get_sample(fRec60[i], 9, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec45_perm[i]=fYec45_tmp[count+i];
			
			// LOOP 0x55f852cdfda0
			// pre processing
			for (int i=0; i<4; i++) fYec46_tmp[i]=fYec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec46[i] = yc20_get_sample(fRec66[i], 10, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec46_perm[i]=fYec46_tmp[count+i];
			
			// LOOP 0x55f852ce1830
			// pre processing
			for (int i=0; i<4; i++) fYec47_tmp[i]=fYec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec47[i] = yc20_get_sample(fRec72[i], 11, 0);
			}
			// post processing
			for (int i=0; i<4; i++) fYec47_perm[i]=fYec47_tmp[count+i];
			
			// LOOP 0x55f852ce3e00
			// pre processing
			for (int i=0; i<4; i++) fVec0_tmp[i]=fVec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec0[i] = fSlow18;
			}
			// post processing
			for (int i=0; i<4; i++) fVec0_perm[i]=fVec0_tmp[count+i];
			
			// LOOP 0x55f852ce5950
			// pre processing
			for (int i=0; i<4; i++) fVec1_tmp[i]=fVec1_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec1[i] = fSlow19;
			}
			// post processing
			for (int i=0; i<4; i++) fVec1_perm[i]=fVec1_tmp[count+i];
			
			// LOOP 0x55f852ce7780
			// pre processing
			for (int i=0; i<4; i++) fVec2_tmp[i]=fVec2_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec2[i] = fSlow20;
			}
			// post processing
			for (int i=0; i<4; i++) fVec2_perm[i]=fVec2_tmp[count+i];
			
			// LOOP 0x55f852ce9510
			// pre processing
			for (int i=0; i<4; i++) fVec3_tmp[i]=fVec3_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec3[i] = fSlow21;
			}
			// post processing
			for (int i=0; i<4; i++) fVec3_perm[i]=fVec3_tmp[count+i];
			
			// LOOP 0x55f852ceb3e0
			// pre processing
			for (int i=0; i<4; i++) fVec4_tmp[i]=fVec4_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec4[i] = fSlow22;
			}
			// post processing
			for (int i=0; i<4; i++) fVec4_perm[i]=fVec4_tmp[count+i];
			
			// LOOP 0x55f852ced210
			// pre processing
			for (int i=0; i<4; i++) fVec5_tmp[i]=fVec5_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec5[i] = fSlow23;
			}
			// post processing
			for (int i=0; i<4; i++) fVec5_perm[i]=fVec5_tmp[count+i];
			
			// LOOP 0x55f852cef360
			// pre processing
			for (int i=0; i<4; i++) fVec6_tmp[i]=fVec6_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec6[i] = fSlow24;
			}
			// post processing
			for (int i=0; i<4; i++) fVec6_perm[i]=fVec6_tmp[count+i];
			
			// LOOP 0x55f852cf1190
			// pre processing
			for (int i=0; i<4; i++) fVec7_tmp[i]=fVec7_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec7[i] = fSlow25;
			}
			// post processing
			for (int i=0; i<4; i++) fVec7_perm[i]=fVec7_tmp[count+i];
			
			// LOOP 0x55f852cf3380
			// pre processing
			for (int i=0; i<4; i++) fVec8_tmp[i]=fVec8_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec8[i] = fSlow26;
			}
			// post processing
			for (int i=0; i<4; i++) fVec8_perm[i]=fVec8_tmp[count+i];
			
			// LOOP 0x55f852cf5580
			// pre processing
			for (int i=0; i<4; i++) fVec9_tmp[i]=fVec9_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec9[i] = fSlow27;
			}
			// post processing
			for (int i=0; i<4; i++) fVec9_perm[i]=fVec9_tmp[count+i];
			
			// LOOP 0x55f852cf73b0
			// pre processing
			for (int i=0; i<4; i++) fVec10_tmp[i]=fVec10_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec10[i] = fSlow28;
			}
			// post processing
			for (int i=0; i<4; i++) fVec10_perm[i]=fVec10_tmp[count+i];
			
			// LOOP 0x55f852cf9670
			// pre processing
			for (int i=0; i<4; i++) fVec11_tmp[i]=fVec11_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec11[i] = fSlow29;
			}
			// post processing
			for (int i=0; i<4; i++) fVec11_perm[i]=fVec11_tmp[count+i];
			
			// LOOP 0x55f852cfb4d0
			// pre processing
			for (int i=0; i<4; i++) fVec12_tmp[i]=fVec12_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec12[i] = fSlow30;
			}
			// post processing
			for (int i=0; i<4; i++) fVec12_perm[i]=fVec12_tmp[count+i];
			
			// LOOP 0x55f852d8a110
			// exec code
			for (int i=0; i<count; i++) {
				fZec125[i] = (fRec50[i] + (fRec44[i] + (fRec38[i] + (fRec32[i] + fZec124[i]))));
			}
			
			// LOOP 0x55f852f06230
			// pre processing
			for (int i=0; i<4; i++) fYec68_tmp[i]=fYec68_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec68[i] = (iRec190[i] + fZec180[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec68_perm[i]=fYec68_tmp[count+i];
			
			// LOOP 0x55f852f0f1e0
			// pre processing
			for (int i=0; i<4; i++) fYec70_tmp[i]=fYec70_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec70[i] = (iRec195[i] + fZec182[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec70_perm[i]=fYec70_tmp[count+i];
			
			// LOOP 0x55f852f17ae0
			// pre processing
			for (int i=0; i<4; i++) fYec72_tmp[i]=fYec72_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec72[i] = (iRec200[i] + fZec184[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec72_perm[i]=fYec72_tmp[count+i];
			
			// LOOP 0x55f852f203e0
			// pre processing
			for (int i=0; i<4; i++) fYec74_tmp[i]=fYec74_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec74[i] = (iRec205[i] + fZec186[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec74_perm[i]=fYec74_tmp[count+i];
			
			// LOOP 0x55f852f28ce0
			// pre processing
			for (int i=0; i<4; i++) fYec76_tmp[i]=fYec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec76[i] = (iRec210[i] + fZec188[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec76_perm[i]=fYec76_tmp[count+i];
			
			// LOOP 0x55f852f315e0
			// pre processing
			for (int i=0; i<4; i++) fYec78_tmp[i]=fYec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec78[i] = (iRec215[i] + fZec190[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec78_perm[i]=fYec78_tmp[count+i];
			
			// LOOP 0x55f852f39ee0
			// pre processing
			for (int i=0; i<4; i++) fYec80_tmp[i]=fYec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec80[i] = (iRec220[i] + fZec192[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec80_perm[i]=fYec80_tmp[count+i];
			
			// LOOP 0x55f852f403b0
			// pre processing
			for (int i=0; i<4; i++) fYec81_tmp[i]=fYec81_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec81[i] = (iRec225[i] + fZec159[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec81_perm[i]=fYec81_tmp[count+i];
			
			// LOOP 0x55f852f46a60
			// pre processing
			for (int i=0; i<4; i++) fYec82_tmp[i]=fYec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec82[i] = (iRec229[i] + fZec161[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec82_perm[i]=fYec82_tmp[count+i];
			
			// LOOP 0x55f852f4d3f0
			// pre processing
			for (int i=0; i<4; i++) fYec83_tmp[i]=fYec83_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec83[i] = (iRec233[i] + fZec163[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec83_perm[i]=fYec83_tmp[count+i];
			
			// LOOP 0x55f852f53aa0
			// pre processing
			for (int i=0; i<4; i++) fYec84_tmp[i]=fYec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec84[i] = (iRec237[i] + fZec165[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec84_perm[i]=fYec84_tmp[count+i];
			
			// LOOP 0x55f852f5a240
			// pre processing
			for (int i=0; i<4; i++) fYec85_tmp[i]=fYec85_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec85[i] = (iRec241[i] + fZec167[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec85_perm[i]=fYec85_tmp[count+i];
			
			// SECTION : 21
			// LOOP 0x55f852c9ce30
			// pre processing
			for (int i=0; i<4; i++) fRec76_tmp[i]=fRec76_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec76[i] = (fConst5 * (fRec76[i-1] + (fRec77[i] - fRec77[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec76_perm[i]=fRec76_tmp[count+i];
			
			// LOOP 0x55f852c9f110
			// pre processing
			for (int i=0; i<4; i++) fRec78_tmp[i]=fRec78_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec78[i] = (fConst5 * (fRec78[i-1] + (fRec79[i] - fRec79[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec78_perm[i]=fRec78_tmp[count+i];
			
			// LOOP 0x55f852ca13f0
			// pre processing
			for (int i=0; i<4; i++) fRec80_tmp[i]=fRec80_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec80[i] = (fConst5 * (fRec80[i-1] + (fRec81[i] - fRec81[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec80_perm[i]=fRec80_tmp[count+i];
			
			// LOOP 0x55f852ca36d0
			// pre processing
			for (int i=0; i<4; i++) fRec82_tmp[i]=fRec82_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec82[i] = (fConst5 * (fRec82[i-1] + (fRec83[i] - fRec83[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec82_perm[i]=fRec82_tmp[count+i];
			
			// LOOP 0x55f852ca5c70
			// pre processing
			for (int i=0; i<4; i++) fRec84_tmp[i]=fRec84_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec84[i] = (fConst5 * (fRec84[i-1] + (fRec85[i] - fRec85[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec84_perm[i]=fRec84_tmp[count+i];
			
			// LOOP 0x55f852ca7f30
			// pre processing
			for (int i=0; i<4; i++) fRec86_tmp[i]=fRec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec86[i] = (fConst5 * (fRec86[i-1] + (fRec87[i] - fRec87[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec86_perm[i]=fRec86_tmp[count+i];
			
			// LOOP 0x55f852caa210
			// pre processing
			for (int i=0; i<4; i++) fRec88_tmp[i]=fRec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec88[i] = (fConst5 * (fRec88[i-1] + (fRec89[i] - fRec89[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec88_perm[i]=fRec88_tmp[count+i];
			
			// LOOP 0x55f852cac4f0
			// pre processing
			for (int i=0; i<4; i++) fRec90_tmp[i]=fRec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec90[i] = (fConst5 * (fRec90[i-1] + (fRec91[i] - fRec91[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec90_perm[i]=fRec90_tmp[count+i];
			
			// LOOP 0x55f852caeab0
			// pre processing
			for (int i=0; i<4; i++) fRec92_tmp[i]=fRec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec92[i] = (fConst5 * (fRec92[i-1] + (fRec93[i] - fRec93[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec92_perm[i]=fRec92_tmp[count+i];
			
			// LOOP 0x55f852cb0d90
			// pre processing
			for (int i=0; i<4; i++) fRec94_tmp[i]=fRec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec94[i] = (fConst5 * (fRec94[i-1] + (fRec95[i] - fRec95[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec94_perm[i]=fRec94_tmp[count+i];
			
			// LOOP 0x55f852cb3070
			// pre processing
			for (int i=0; i<4; i++) fRec96_tmp[i]=fRec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec96[i] = (fConst5 * (fRec96[i-1] + (fRec97[i] - fRec97[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec96_perm[i]=fRec96_tmp[count+i];
			
			// LOOP 0x55f852cb5350
			// pre processing
			for (int i=0; i<4; i++) fRec98_tmp[i]=fRec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec98[i] = (fConst5 * (fRec98[i-1] + (fRec99[i] - fRec99[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec98_perm[i]=fRec98_tmp[count+i];
			
			// LOOP 0x55f852cb77f0
			// pre processing
			for (int i=0; i<4; i++) fRec100_tmp[i]=fRec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec100[i] = (fConst5 * (fRec100[i-1] + (fRec101[i] - fRec101[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec100_perm[i]=fRec100_tmp[count+i];
			
			// LOOP 0x55f852cb99a0
			// pre processing
			for (int i=0; i<4; i++) fRec102_tmp[i]=fRec102_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec102[i] = (fConst5 * (fRec102[i-1] + (fRec103[i] - fRec103[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec102_perm[i]=fRec102_tmp[count+i];
			
			// LOOP 0x55f852cbbb50
			// pre processing
			for (int i=0; i<4; i++) fRec104_tmp[i]=fRec104_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec104[i] = (fConst5 * (fRec104[i-1] + (fRec105[i] - fRec105[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec104_perm[i]=fRec104_tmp[count+i];
			
			// LOOP 0x55f852cbdd00
			// pre processing
			for (int i=0; i<4; i++) fRec106_tmp[i]=fRec106_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec106[i] = (fConst5 * (fRec106[i-1] + (fRec107[i] - fRec107[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec106_perm[i]=fRec106_tmp[count+i];
			
			// LOOP 0x55f852cc0190
			// pre processing
			for (int i=0; i<4; i++) fRec108_tmp[i]=fRec108_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec108[i] = (fConst5 * (fRec108[i-1] + (fRec109[i] - fRec109[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec108_perm[i]=fRec108_tmp[count+i];
			
			// LOOP 0x55f852cc2340
			// pre processing
			for (int i=0; i<4; i++) fRec110_tmp[i]=fRec110_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec110[i] = (fConst5 * (fRec110[i-1] + (fRec111[i] - fRec111[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec110_perm[i]=fRec110_tmp[count+i];
			
			// LOOP 0x55f852cc44f0
			// pre processing
			for (int i=0; i<4; i++) fRec112_tmp[i]=fRec112_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec112[i] = (fConst5 * (fRec112[i-1] + (fRec113[i] - fRec113[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec112_perm[i]=fRec112_tmp[count+i];
			
			// LOOP 0x55f852cc66a0
			// pre processing
			for (int i=0; i<4; i++) fRec114_tmp[i]=fRec114_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec114[i] = (fConst5 * (fRec114[i-1] + (fRec115[i] - fRec115[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec114_perm[i]=fRec114_tmp[count+i];
			
			// LOOP 0x55f852cc8b30
			// pre processing
			for (int i=0; i<4; i++) fRec116_tmp[i]=fRec116_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec116[i] = (fConst5 * (fRec116[i-1] + (fRec117[i] - fRec117[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec116_perm[i]=fRec116_tmp[count+i];
			
			// LOOP 0x55f852ccace0
			// pre processing
			for (int i=0; i<4; i++) fRec118_tmp[i]=fRec118_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec118[i] = (fConst5 * (fRec118[i-1] + (fRec119[i] - fRec119[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec118_perm[i]=fRec118_tmp[count+i];
			
			// LOOP 0x55f852ccce90
			// pre processing
			for (int i=0; i<4; i++) fRec120_tmp[i]=fRec120_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec120[i] = (fConst5 * (fRec120[i-1] + (fRec121[i] - fRec121[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec120_perm[i]=fRec120_tmp[count+i];
			
			// LOOP 0x55f852ccf040
			// pre processing
			for (int i=0; i<4; i++) fRec122_tmp[i]=fRec122_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec122[i] = (fConst5 * (fRec122[i-1] + ((1.95f * fYec36[i]) - (1.95f * fYec36[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec122_perm[i]=fRec122_tmp[count+i];
			
			// LOOP 0x55f852cd0c10
			// pre processing
			for (int i=0; i<4; i++) fRec123_tmp[i]=fRec123_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec123[i] = (fConst5 * (fRec123[i-1] + ((1.95f * fYec37[i]) - (1.95f * fYec37[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec123_perm[i]=fRec123_tmp[count+i];
			
			// LOOP 0x55f852cd26a0
			// pre processing
			for (int i=0; i<4; i++) fRec124_tmp[i]=fRec124_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec124[i] = (fConst5 * (fRec124[i-1] + ((1.95f * fYec38[i]) - (1.95f * fYec38[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec124_perm[i]=fRec124_tmp[count+i];
			
			// LOOP 0x55f852cd4130
			// pre processing
			for (int i=0; i<4; i++) fRec125_tmp[i]=fRec125_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec125[i] = (fConst5 * (fRec125[i-1] + ((1.95f * fYec39[i]) - (1.95f * fYec39[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec125_perm[i]=fRec125_tmp[count+i];
			
			// LOOP 0x55f852cd5bc0
			// pre processing
			for (int i=0; i<4; i++) fRec126_tmp[i]=fRec126_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec126[i] = (fConst5 * (fRec126[i-1] + ((1.95f * fYec40[i]) - (1.95f * fYec40[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec126_perm[i]=fRec126_tmp[count+i];
			
			// LOOP 0x55f852cd7650
			// pre processing
			for (int i=0; i<4; i++) fRec127_tmp[i]=fRec127_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec127[i] = (fConst5 * (fRec127[i-1] + ((1.95f * fYec41[i]) - (1.95f * fYec41[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec127_perm[i]=fRec127_tmp[count+i];
			
			// LOOP 0x55f852cd90e0
			// pre processing
			for (int i=0; i<4; i++) fRec128_tmp[i]=fRec128_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec128[i] = (fConst5 * (fRec128[i-1] + ((1.95f * fYec42[i]) - (1.95f * fYec42[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec128_perm[i]=fRec128_tmp[count+i];
			
			// LOOP 0x55f852cdab70
			// pre processing
			for (int i=0; i<4; i++) fRec129_tmp[i]=fRec129_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec129[i] = (fConst5 * (fRec129[i-1] + ((1.95f * fYec43[i]) - (1.95f * fYec43[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec129_perm[i]=fRec129_tmp[count+i];
			
			// LOOP 0x55f852cdc600
			// pre processing
			for (int i=0; i<4; i++) fRec130_tmp[i]=fRec130_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec130[i] = (fConst5 * (fRec130[i-1] + ((1.95f * fYec44[i]) - (1.95f * fYec44[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec130_perm[i]=fRec130_tmp[count+i];
			
			// LOOP 0x55f852cde090
			// pre processing
			for (int i=0; i<4; i++) fRec131_tmp[i]=fRec131_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec131[i] = (fConst5 * (fRec131[i-1] + ((1.95f * fYec45[i]) - (1.95f * fYec45[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec131_perm[i]=fRec131_tmp[count+i];
			
			// LOOP 0x55f852cdfb20
			// pre processing
			for (int i=0; i<4; i++) fRec132_tmp[i]=fRec132_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec132[i] = (fConst5 * (fRec132[i-1] + ((1.95f * fYec46[i]) - (1.95f * fYec46[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec132_perm[i]=fRec132_tmp[count+i];
			
			// LOOP 0x55f852ce15b0
			// pre processing
			for (int i=0; i<4; i++) fRec133_tmp[i]=fRec133_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec133[i] = (fConst5 * (fRec133[i-1] + ((1.95f * fYec47[i]) - (1.95f * fYec47[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec133_perm[i]=fRec133_tmp[count+i];
			
			// LOOP 0x55f852ce3ce0
			// exec code
			for (int i=0; i<count; i++) {
				fZec49[i] = (fSlow18 + (fVec0[i-3] + (fVec0[i-1] + fVec0[i-2])));
			}
			
			// LOOP 0x55f852ce5830
			// exec code
			for (int i=0; i<count; i++) {
				fZec51[i] = (fSlow19 + (fVec1[i-3] + (fVec1[i-1] + fVec1[i-2])));
			}
			
			// LOOP 0x55f852ce7660
			// exec code
			for (int i=0; i<count; i++) {
				fZec53[i] = (fSlow20 + (fVec2[i-3] + (fVec2[i-1] + fVec2[i-2])));
			}
			
			// LOOP 0x55f852ce93f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec55[i] = (fSlow21 + (fVec3[i-3] + (fVec3[i-1] + fVec3[i-2])));
			}
			
			// LOOP 0x55f852ceb2c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec57[i] = (fSlow22 + (fVec4[i-3] + (fVec4[i-1] + fVec4[i-2])));
			}
			
			// LOOP 0x55f852ced0f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec59[i] = (fSlow23 + (fVec5[i-3] + (fVec5[i-1] + fVec5[i-2])));
			}
			
			// LOOP 0x55f852cef240
			// exec code
			for (int i=0; i<count; i++) {
				fZec61[i] = (fSlow24 + (fVec6[i-3] + (fVec6[i-1] + fVec6[i-2])));
			}
			
			// LOOP 0x55f852cf1070
			// exec code
			for (int i=0; i<count; i++) {
				fZec63[i] = (fSlow25 + (fVec7[i-3] + (fVec7[i-1] + fVec7[i-2])));
			}
			
			// LOOP 0x55f852cf3260
			// exec code
			for (int i=0; i<count; i++) {
				fZec65[i] = (fSlow26 + (fVec8[i-3] + (fVec8[i-1] + fVec8[i-2])));
			}
			
			// LOOP 0x55f852cf5460
			// exec code
			for (int i=0; i<count; i++) {
				fZec67[i] = (fSlow27 + (fVec9[i-3] + (fVec9[i-1] + fVec9[i-2])));
			}
			
			// LOOP 0x55f852cf7290
			// exec code
			for (int i=0; i<count; i++) {
				fZec69[i] = (fSlow28 + (fVec10[i-3] + (fVec10[i-1] + fVec10[i-2])));
			}
			
			// LOOP 0x55f852cf9550
			// exec code
			for (int i=0; i<count; i++) {
				fZec71[i] = (fSlow29 + (fVec11[i-3] + (fVec11[i-1] + fVec11[i-2])));
			}
			
			// LOOP 0x55f852cfb3b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec73[i] = (fSlow30 + (fVec12[i-3] + (fVec12[i-1] + fVec12[i-2])));
			}
			
			// LOOP 0x55f852cfd580
			// pre processing
			for (int i=0; i<4; i++) fVec13_tmp[i]=fVec13_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec13[i] = fSlow31;
			}
			// post processing
			for (int i=0; i<4; i++) fVec13_perm[i]=fVec13_tmp[count+i];
			
			// LOOP 0x55f852cff2d0
			// pre processing
			for (int i=0; i<4; i++) fVec14_tmp[i]=fVec14_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec14[i] = fSlow32;
			}
			// post processing
			for (int i=0; i<4; i++) fVec14_perm[i]=fVec14_tmp[count+i];
			
			// LOOP 0x55f852d00b90
			// pre processing
			for (int i=0; i<4; i++) fVec15_tmp[i]=fVec15_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec15[i] = fSlow33;
			}
			// post processing
			for (int i=0; i<4; i++) fVec15_perm[i]=fVec15_tmp[count+i];
			
			// LOOP 0x55f852d028b0
			// pre processing
			for (int i=0; i<4; i++) fVec16_tmp[i]=fVec16_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec16[i] = fSlow34;
			}
			// post processing
			for (int i=0; i<4; i++) fVec16_perm[i]=fVec16_tmp[count+i];
			
			// LOOP 0x55f852d04490
			// pre processing
			for (int i=0; i<4; i++) fVec17_tmp[i]=fVec17_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec17[i] = fSlow35;
			}
			// post processing
			for (int i=0; i<4; i++) fVec17_perm[i]=fVec17_tmp[count+i];
			
			// LOOP 0x55f852d067f0
			// pre processing
			for (int i=0; i<4; i++) fVec18_tmp[i]=fVec18_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec18[i] = fSlow36;
			}
			// post processing
			for (int i=0; i<4; i++) fVec18_perm[i]=fVec18_tmp[count+i];
			
			// LOOP 0x55f852d08330
			// pre processing
			for (int i=0; i<4; i++) fVec19_tmp[i]=fVec19_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec19[i] = fSlow37;
			}
			// post processing
			for (int i=0; i<4; i++) fVec19_perm[i]=fVec19_tmp[count+i];
			
			// LOOP 0x55f852d0a690
			// pre processing
			for (int i=0; i<4; i++) fVec20_tmp[i]=fVec20_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec20[i] = fSlow38;
			}
			// post processing
			for (int i=0; i<4; i++) fVec20_perm[i]=fVec20_tmp[count+i];
			
			// LOOP 0x55f852d0c950
			// pre processing
			for (int i=0; i<4; i++) fVec21_tmp[i]=fVec21_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec21[i] = fSlow39;
			}
			// post processing
			for (int i=0; i<4; i++) fVec21_perm[i]=fVec21_tmp[count+i];
			
			// LOOP 0x55f852d0e3f0
			// pre processing
			for (int i=0; i<4; i++) fVec22_tmp[i]=fVec22_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec22[i] = fSlow40;
			}
			// post processing
			for (int i=0; i<4; i++) fVec22_perm[i]=fVec22_tmp[count+i];
			
			// LOOP 0x55f852d106b0
			// pre processing
			for (int i=0; i<4; i++) fVec23_tmp[i]=fVec23_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec23[i] = fSlow41;
			}
			// post processing
			for (int i=0; i<4; i++) fVec23_perm[i]=fVec23_tmp[count+i];
			
			// LOOP 0x55f852d120b0
			// pre processing
			for (int i=0; i<4; i++) fVec24_tmp[i]=fVec24_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec24[i] = fSlow42;
			}
			// post processing
			for (int i=0; i<4; i++) fVec24_perm[i]=fVec24_tmp[count+i];
			
			// LOOP 0x55f852d142d0
			// pre processing
			for (int i=0; i<4; i++) fVec25_tmp[i]=fVec25_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec25[i] = fSlow43;
			}
			// post processing
			for (int i=0; i<4; i++) fVec25_perm[i]=fVec25_tmp[count+i];
			
			// LOOP 0x55f852d16470
			// pre processing
			for (int i=0; i<4; i++) fVec26_tmp[i]=fVec26_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec26[i] = fSlow44;
			}
			// post processing
			for (int i=0; i<4; i++) fVec26_perm[i]=fVec26_tmp[count+i];
			
			// LOOP 0x55f852d17e20
			// pre processing
			for (int i=0; i<4; i++) fVec27_tmp[i]=fVec27_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec27[i] = fSlow45;
			}
			// post processing
			for (int i=0; i<4; i++) fVec27_perm[i]=fVec27_tmp[count+i];
			
			// LOOP 0x55f852d19f50
			// pre processing
			for (int i=0; i<4; i++) fVec28_tmp[i]=fVec28_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec28[i] = fSlow46;
			}
			// post processing
			for (int i=0; i<4; i++) fVec28_perm[i]=fVec28_tmp[count+i];
			
			// LOOP 0x55f852d1bea0
			// pre processing
			for (int i=0; i<4; i++) fVec29_tmp[i]=fVec29_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec29[i] = fSlow47;
			}
			// post processing
			for (int i=0; i<4; i++) fVec29_perm[i]=fVec29_tmp[count+i];
			
			// LOOP 0x55f852d1e9d0
			// pre processing
			for (int i=0; i<4; i++) fVec30_tmp[i]=fVec30_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec30[i] = fSlow48;
			}
			// post processing
			for (int i=0; i<4; i++) fVec30_perm[i]=fVec30_tmp[count+i];
			
			// LOOP 0x55f852d207e0
			// pre processing
			for (int i=0; i<4; i++) fVec31_tmp[i]=fVec31_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec31[i] = fSlow49;
			}
			// post processing
			for (int i=0; i<4; i++) fVec31_perm[i]=fVec31_tmp[count+i];
			
			// LOOP 0x55f852d23270
			// pre processing
			for (int i=0; i<4; i++) fVec32_tmp[i]=fVec32_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec32[i] = fSlow50;
			}
			// post processing
			for (int i=0; i<4; i++) fVec32_perm[i]=fVec32_tmp[count+i];
			
			// LOOP 0x55f852d25bc0
			// pre processing
			for (int i=0; i<4; i++) fVec33_tmp[i]=fVec33_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec33[i] = fSlow51;
			}
			// post processing
			for (int i=0; i<4; i++) fVec33_perm[i]=fVec33_tmp[count+i];
			
			// LOOP 0x55f852d27890
			// pre processing
			for (int i=0; i<4; i++) fVec34_tmp[i]=fVec34_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec34[i] = fSlow52;
			}
			// post processing
			for (int i=0; i<4; i++) fVec34_perm[i]=fVec34_tmp[count+i];
			
			// LOOP 0x55f852d2a140
			// pre processing
			for (int i=0; i<4; i++) fVec35_tmp[i]=fVec35_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec35[i] = fSlow53;
			}
			// post processing
			for (int i=0; i<4; i++) fVec35_perm[i]=fVec35_tmp[count+i];
			
			// LOOP 0x55f852d2bcd0
			// pre processing
			for (int i=0; i<4; i++) fVec36_tmp[i]=fVec36_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec36[i] = fSlow54;
			}
			// post processing
			for (int i=0; i<4; i++) fVec36_perm[i]=fVec36_tmp[count+i];
			
			// LOOP 0x55f852d2e480
			// pre processing
			for (int i=0; i<4; i++) fVec37_tmp[i]=fVec37_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec37[i] = fSlow55;
			}
			// post processing
			for (int i=0; i<4; i++) fVec37_perm[i]=fVec37_tmp[count+i];
			
			// LOOP 0x55f852d309f0
			// pre processing
			for (int i=0; i<4; i++) fVec38_tmp[i]=fVec38_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec38[i] = fSlow56;
			}
			// post processing
			for (int i=0; i<4; i++) fVec38_perm[i]=fVec38_tmp[count+i];
			
			// LOOP 0x55f852d32340
			// pre processing
			for (int i=0; i<4; i++) fVec39_tmp[i]=fVec39_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec39[i] = fSlow57;
			}
			// post processing
			for (int i=0; i<4; i++) fVec39_perm[i]=fVec39_tmp[count+i];
			
			// LOOP 0x55f852d34790
			// pre processing
			for (int i=0; i<4; i++) fVec40_tmp[i]=fVec40_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec40[i] = fSlow58;
			}
			// post processing
			for (int i=0; i<4; i++) fVec40_perm[i]=fVec40_tmp[count+i];
			
			// LOOP 0x55f852d36960
			// pre processing
			for (int i=0; i<4; i++) fVec41_tmp[i]=fVec41_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec41[i] = fSlow59;
			}
			// post processing
			for (int i=0; i<4; i++) fVec41_perm[i]=fVec41_tmp[count+i];
			
			// LOOP 0x55f852d39b70
			// pre processing
			for (int i=0; i<4; i++) fVec42_tmp[i]=fVec42_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec42[i] = fSlow60;
			}
			// post processing
			for (int i=0; i<4; i++) fVec42_perm[i]=fVec42_tmp[count+i];
			
			// LOOP 0x55f852d3bb60
			// pre processing
			for (int i=0; i<4; i++) fVec43_tmp[i]=fVec43_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec43[i] = fSlow61;
			}
			// post processing
			for (int i=0; i<4; i++) fVec43_perm[i]=fVec43_tmp[count+i];
			
			// LOOP 0x55f852d3ec30
			// pre processing
			for (int i=0; i<4; i++) fVec44_tmp[i]=fVec44_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec44[i] = fSlow62;
			}
			// post processing
			for (int i=0; i<4; i++) fVec44_perm[i]=fVec44_tmp[count+i];
			
			// LOOP 0x55f852d41b00
			// pre processing
			for (int i=0; i<4; i++) fVec45_tmp[i]=fVec45_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec45[i] = fSlow63;
			}
			// post processing
			for (int i=0; i<4; i++) fVec45_perm[i]=fVec45_tmp[count+i];
			
			// LOOP 0x55f852d43910
			// pre processing
			for (int i=0; i<4; i++) fVec46_tmp[i]=fVec46_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec46[i] = fSlow64;
			}
			// post processing
			for (int i=0; i<4; i++) fVec46_perm[i]=fVec46_tmp[count+i];
			
			// LOOP 0x55f852d466c0
			// pre processing
			for (int i=0; i<4; i++) fVec47_tmp[i]=fVec47_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec47[i] = fSlow65;
			}
			// post processing
			for (int i=0; i<4; i++) fVec47_perm[i]=fVec47_tmp[count+i];
			
			// LOOP 0x55f852d482f0
			// pre processing
			for (int i=0; i<4; i++) fVec48_tmp[i]=fVec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec48[i] = fSlow66;
			}
			// post processing
			for (int i=0; i<4; i++) fVec48_perm[i]=fVec48_tmp[count+i];
			
			// LOOP 0x55f852d4aec0
			// pre processing
			for (int i=0; i<4; i++) fVec49_tmp[i]=fVec49_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec49[i] = fSlow67;
			}
			// post processing
			for (int i=0; i<4; i++) fVec49_perm[i]=fVec49_tmp[count+i];
			
			// LOOP 0x55f852d4d810
			// pre processing
			for (int i=0; i<4; i++) fVec50_tmp[i]=fVec50_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec50[i] = fSlow68;
			}
			// post processing
			for (int i=0; i<4; i++) fVec50_perm[i]=fVec50_tmp[count+i];
			
			// LOOP 0x55f852d4f1c0
			// pre processing
			for (int i=0; i<4; i++) fVec51_tmp[i]=fVec51_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec51[i] = fSlow69;
			}
			// post processing
			for (int i=0; i<4; i++) fVec51_perm[i]=fVec51_tmp[count+i];
			
			// LOOP 0x55f852d51930
			// pre processing
			for (int i=0; i<4; i++) fVec52_tmp[i]=fVec52_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec52[i] = fSlow70;
			}
			// post processing
			for (int i=0; i<4; i++) fVec52_perm[i]=fVec52_tmp[count+i];
			
			// LOOP 0x55f852d53d80
			// pre processing
			for (int i=0; i<4; i++) fVec53_tmp[i]=fVec53_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec53[i] = fSlow71;
			}
			// post processing
			for (int i=0; i<4; i++) fVec53_perm[i]=fVec53_tmp[count+i];
			
			// LOOP 0x55f852d57670
			// pre processing
			for (int i=0; i<4; i++) fVec54_tmp[i]=fVec54_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec54[i] = fSlow72;
			}
			// post processing
			for (int i=0; i<4; i++) fVec54_perm[i]=fVec54_tmp[count+i];
			
			// LOOP 0x55f852d59840
			// pre processing
			for (int i=0; i<4; i++) fVec55_tmp[i]=fVec55_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec55[i] = fSlow73;
			}
			// post processing
			for (int i=0; i<4; i++) fVec55_perm[i]=fVec55_tmp[count+i];
			
			// LOOP 0x55f852d5cf50
			// pre processing
			for (int i=0; i<4; i++) fVec56_tmp[i]=fVec56_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec56[i] = fSlow74;
			}
			// post processing
			for (int i=0; i<4; i++) fVec56_perm[i]=fVec56_tmp[count+i];
			
			// LOOP 0x55f852d603e0
			// pre processing
			for (int i=0; i<4; i++) fVec57_tmp[i]=fVec57_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec57[i] = fSlow75;
			}
			// post processing
			for (int i=0; i<4; i++) fVec57_perm[i]=fVec57_tmp[count+i];
			
			// LOOP 0x55f852d62330
			// pre processing
			for (int i=0; i<4; i++) fVec58_tmp[i]=fVec58_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec58[i] = fSlow76;
			}
			// post processing
			for (int i=0; i<4; i++) fVec58_perm[i]=fVec58_tmp[count+i];
			
			// LOOP 0x55f852d655e0
			// pre processing
			for (int i=0; i<4; i++) fVec59_tmp[i]=fVec59_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec59[i] = fSlow77;
			}
			// post processing
			for (int i=0; i<4; i++) fVec59_perm[i]=fVec59_tmp[count+i];
			
			// LOOP 0x55f852d672f0
			// pre processing
			for (int i=0; i<4; i++) fVec60_tmp[i]=fVec60_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fVec60[i] = fSlow78;
			}
			// post processing
			for (int i=0; i<4; i++) fVec60_perm[i]=fVec60_tmp[count+i];
			
			// LOOP 0x55f852d89ff0
			// exec code
			for (int i=0; i<count; i++) {
				fZec126[i] = (fRec74[i] + (fRec68[i] + (fRec62[i] + (fRec56[i] + fZec125[i]))));
			}
			
			// LOOP 0x55f852f06ba0
			// exec code
			for (int i=0; i<count; i++) {
				fZec181[i] = (0.5f * fYec68[i]);
			}
			
			// LOOP 0x55f852f0fb50
			// exec code
			for (int i=0; i<count; i++) {
				fZec183[i] = (0.5f * fYec70[i]);
			}
			
			// LOOP 0x55f852f18450
			// exec code
			for (int i=0; i<count; i++) {
				fZec185[i] = (0.5f * fYec72[i]);
			}
			
			// LOOP 0x55f852f20d50
			// exec code
			for (int i=0; i<count; i++) {
				fZec187[i] = (0.5f * fYec74[i]);
			}
			
			// LOOP 0x55f852f29650
			// exec code
			for (int i=0; i<count; i++) {
				fZec189[i] = (0.5f * fYec76[i]);
			}
			
			// LOOP 0x55f852f31f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec191[i] = (0.5f * fYec78[i]);
			}
			
			// LOOP 0x55f852f3a850
			// exec code
			for (int i=0; i<count; i++) {
				fZec193[i] = (0.5f * fYec80[i]);
			}
			
			// LOOP 0x55f852f40d20
			// exec code
			for (int i=0; i<count; i++) {
				fZec194[i] = (0.5f * fYec81[i]);
			}
			
			// LOOP 0x55f852f473d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec195[i] = (0.5f * fYec82[i]);
			}
			
			// LOOP 0x55f852f4dd60
			// exec code
			for (int i=0; i<count; i++) {
				fZec196[i] = (0.5f * fYec83[i]);
			}
			
			// LOOP 0x55f852f54410
			// exec code
			for (int i=0; i<count; i++) {
				fZec197[i] = (0.5f * fYec84[i]);
			}
			
			// LOOP 0x55f852f5abb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec198[i] = (0.5f * fYec85[i]);
			}
			
			// SECTION : 22
			// LOOP 0x55f852ce3bc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec50[i] = (fRec122[i] * fZec49[i]);
			}
			
			// LOOP 0x55f852ce5710
			// exec code
			for (int i=0; i<count; i++) {
				fZec52[i] = (fRec133[i] * fZec51[i]);
			}
			
			// LOOP 0x55f852ce7540
			// exec code
			for (int i=0; i<count; i++) {
				fZec54[i] = (fRec132[i] * fZec53[i]);
			}
			
			// LOOP 0x55f852ce92d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec56[i] = (fRec131[i] * fZec55[i]);
			}
			
			// LOOP 0x55f852ceb1a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec58[i] = (fRec130[i] * fZec57[i]);
			}
			
			// LOOP 0x55f852cecfd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec60[i] = (fRec129[i] * fZec59[i]);
			}
			
			// LOOP 0x55f852cef120
			// exec code
			for (int i=0; i<count; i++) {
				fZec62[i] = (fRec128[i] * fZec61[i]);
			}
			
			// LOOP 0x55f852cf0f50
			// exec code
			for (int i=0; i<count; i++) {
				fZec64[i] = (fRec127[i] * fZec63[i]);
			}
			
			// LOOP 0x55f852cf3140
			// exec code
			for (int i=0; i<count; i++) {
				fZec66[i] = (fRec126[i] * fZec65[i]);
			}
			
			// LOOP 0x55f852cf5340
			// exec code
			for (int i=0; i<count; i++) {
				fZec68[i] = (fRec125[i] * fZec67[i]);
			}
			
			// LOOP 0x55f852cf7170
			// exec code
			for (int i=0; i<count; i++) {
				fZec70[i] = (fRec124[i] * fZec69[i]);
			}
			
			// LOOP 0x55f852cf9430
			// exec code
			for (int i=0; i<count; i++) {
				fZec72[i] = (fRec123[i] * fZec71[i]);
			}
			
			// LOOP 0x55f852cfb290
			// exec code
			for (int i=0; i<count; i++) {
				fZec74[i] = (fRec122[i] * fZec73[i]);
			}
			
			// LOOP 0x55f852cfd460
			// exec code
			for (int i=0; i<count; i++) {
				fZec75[i] = (fSlow31 + (fVec13[i-3] + (fVec13[i-1] + fVec13[i-2])));
			}
			
			// LOOP 0x55f852cff1b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec76[i] = (fSlow32 + (fVec14[i-3] + (fVec14[i-1] + fVec14[i-2])));
			}
			
			// LOOP 0x55f852d00a70
			// exec code
			for (int i=0; i<count; i++) {
				fZec77[i] = (fSlow33 + (fVec15[i-3] + (fVec15[i-1] + fVec15[i-2])));
			}
			
			// LOOP 0x55f852d02790
			// exec code
			for (int i=0; i<count; i++) {
				fZec78[i] = (fSlow34 + (fVec16[i-3] + (fVec16[i-1] + fVec16[i-2])));
			}
			
			// LOOP 0x55f852d04370
			// exec code
			for (int i=0; i<count; i++) {
				fZec79[i] = (fSlow35 + (fVec17[i-3] + (fVec17[i-1] + fVec17[i-2])));
			}
			
			// LOOP 0x55f852d066d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec80[i] = (fSlow36 + (fVec18[i-3] + (fVec18[i-1] + fVec18[i-2])));
			}
			
			// LOOP 0x55f852d08210
			// exec code
			for (int i=0; i<count; i++) {
				fZec81[i] = (fSlow37 + (fVec19[i-3] + (fVec19[i-1] + fVec19[i-2])));
			}
			
			// LOOP 0x55f852d0a570
			// exec code
			for (int i=0; i<count; i++) {
				fZec82[i] = (fSlow38 + (fVec20[i-3] + (fVec20[i-1] + fVec20[i-2])));
			}
			
			// LOOP 0x55f852d0c830
			// exec code
			for (int i=0; i<count; i++) {
				fZec83[i] = (fSlow39 + (fVec21[i-3] + (fVec21[i-1] + fVec21[i-2])));
			}
			
			// LOOP 0x55f852d0e2d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec84[i] = (fSlow40 + (fVec22[i-3] + (fVec22[i-1] + fVec22[i-2])));
			}
			
			// LOOP 0x55f852d10590
			// exec code
			for (int i=0; i<count; i++) {
				fZec85[i] = (fSlow41 + (fVec23[i-3] + (fVec23[i-1] + fVec23[i-2])));
			}
			
			// LOOP 0x55f852d11f90
			// exec code
			for (int i=0; i<count; i++) {
				fZec86[i] = (fSlow42 + (fVec24[i-3] + (fVec24[i-1] + fVec24[i-2])));
			}
			
			// LOOP 0x55f852d141b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec87[i] = (fSlow43 + (fVec25[i-3] + (fVec25[i-1] + fVec25[i-2])));
			}
			
			// LOOP 0x55f852d16350
			// exec code
			for (int i=0; i<count; i++) {
				fZec88[i] = (fSlow44 + (fVec26[i-3] + (fVec26[i-1] + fVec26[i-2])));
			}
			
			// LOOP 0x55f852d17d00
			// exec code
			for (int i=0; i<count; i++) {
				fZec89[i] = (fSlow45 + (fVec27[i-3] + (fVec27[i-1] + fVec27[i-2])));
			}
			
			// LOOP 0x55f852d19e30
			// exec code
			for (int i=0; i<count; i++) {
				fZec90[i] = (fSlow46 + (fVec28[i-3] + (fVec28[i-1] + fVec28[i-2])));
			}
			
			// LOOP 0x55f852d1bd80
			// exec code
			for (int i=0; i<count; i++) {
				fZec91[i] = (fSlow47 + (fVec29[i-3] + (fVec29[i-1] + fVec29[i-2])));
			}
			
			// LOOP 0x55f852d1e8b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec92[i] = (fSlow48 + (fVec30[i-3] + (fVec30[i-1] + fVec30[i-2])));
			}
			
			// LOOP 0x55f852d206c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec93[i] = (fSlow49 + (fVec31[i-3] + (fVec31[i-1] + fVec31[i-2])));
			}
			
			// LOOP 0x55f852d23150
			// exec code
			for (int i=0; i<count; i++) {
				fZec94[i] = (fSlow50 + (fVec32[i-3] + (fVec32[i-1] + fVec32[i-2])));
			}
			
			// LOOP 0x55f852d25aa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec95[i] = (fSlow51 + (fVec33[i-3] + (fVec33[i-1] + fVec33[i-2])));
			}
			
			// LOOP 0x55f852d27770
			// exec code
			for (int i=0; i<count; i++) {
				fZec96[i] = (fSlow52 + (fVec34[i-3] + (fVec34[i-1] + fVec34[i-2])));
			}
			
			// LOOP 0x55f852d2a020
			// exec code
			for (int i=0; i<count; i++) {
				fZec97[i] = (fSlow53 + (fVec35[i-3] + (fVec35[i-1] + fVec35[i-2])));
			}
			
			// LOOP 0x55f852d2bbb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec98[i] = (fSlow54 + (fVec36[i-3] + (fVec36[i-1] + fVec36[i-2])));
			}
			
			// LOOP 0x55f852d2e360
			// exec code
			for (int i=0; i<count; i++) {
				fZec99[i] = (fSlow55 + (fVec37[i-3] + (fVec37[i-1] + fVec37[i-2])));
			}
			
			// LOOP 0x55f852d308d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec100[i] = (fSlow56 + (fVec38[i-3] + (fVec38[i-1] + fVec38[i-2])));
			}
			
			// LOOP 0x55f852d32220
			// exec code
			for (int i=0; i<count; i++) {
				fZec101[i] = (fSlow57 + (fVec39[i-3] + (fVec39[i-1] + fVec39[i-2])));
			}
			
			// LOOP 0x55f852d34670
			// exec code
			for (int i=0; i<count; i++) {
				fZec102[i] = (fSlow58 + (fVec40[i-3] + (fVec40[i-1] + fVec40[i-2])));
			}
			
			// LOOP 0x55f852d36840
			// exec code
			for (int i=0; i<count; i++) {
				fZec103[i] = (fSlow59 + (fVec41[i-3] + (fVec41[i-1] + fVec41[i-2])));
			}
			
			// LOOP 0x55f852d39a50
			// exec code
			for (int i=0; i<count; i++) {
				fZec104[i] = (fSlow60 + (fVec42[i-3] + (fVec42[i-1] + fVec42[i-2])));
			}
			
			// LOOP 0x55f852d3ba40
			// exec code
			for (int i=0; i<count; i++) {
				fZec105[i] = (fSlow61 + (fVec43[i-3] + (fVec43[i-1] + fVec43[i-2])));
			}
			
			// LOOP 0x55f852d3eb10
			// exec code
			for (int i=0; i<count; i++) {
				fZec106[i] = (fSlow62 + (fVec44[i-3] + (fVec44[i-1] + fVec44[i-2])));
			}
			
			// LOOP 0x55f852d419e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec107[i] = (fSlow63 + (fVec45[i-3] + (fVec45[i-1] + fVec45[i-2])));
			}
			
			// LOOP 0x55f852d437f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec108[i] = (fSlow64 + (fVec46[i-3] + (fVec46[i-1] + fVec46[i-2])));
			}
			
			// LOOP 0x55f852d465a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec109[i] = (fSlow65 + (fVec47[i-3] + (fVec47[i-1] + fVec47[i-2])));
			}
			
			// LOOP 0x55f852d481d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec110[i] = (fSlow66 + (fVec48[i-3] + (fVec48[i-1] + fVec48[i-2])));
			}
			
			// LOOP 0x55f852d4ada0
			// exec code
			for (int i=0; i<count; i++) {
				fZec111[i] = (fSlow67 + (fVec49[i-3] + (fVec49[i-1] + fVec49[i-2])));
			}
			
			// LOOP 0x55f852d4d6f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec112[i] = (fSlow68 + (fVec50[i-3] + (fVec50[i-1] + fVec50[i-2])));
			}
			
			// LOOP 0x55f852d4f0a0
			// exec code
			for (int i=0; i<count; i++) {
				fZec113[i] = (fSlow69 + (fVec51[i-3] + (fVec51[i-1] + fVec51[i-2])));
			}
			
			// LOOP 0x55f852d51810
			// exec code
			for (int i=0; i<count; i++) {
				fZec114[i] = (fSlow70 + (fVec52[i-3] + (fVec52[i-1] + fVec52[i-2])));
			}
			
			// LOOP 0x55f852d53c60
			// exec code
			for (int i=0; i<count; i++) {
				fZec115[i] = (fSlow71 + (fVec53[i-3] + (fVec53[i-1] + fVec53[i-2])));
			}
			
			// LOOP 0x55f852d57550
			// exec code
			for (int i=0; i<count; i++) {
				fZec116[i] = (fSlow72 + (fVec54[i-3] + (fVec54[i-1] + fVec54[i-2])));
			}
			
			// LOOP 0x55f852d59720
			// exec code
			for (int i=0; i<count; i++) {
				fZec117[i] = (fSlow73 + (fVec55[i-3] + (fVec55[i-1] + fVec55[i-2])));
			}
			
			// LOOP 0x55f852d5ce30
			// exec code
			for (int i=0; i<count; i++) {
				fZec118[i] = (fSlow74 + (fVec56[i-3] + (fVec56[i-1] + fVec56[i-2])));
			}
			
			// LOOP 0x55f852d602c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec119[i] = (fSlow75 + (fVec57[i-3] + (fVec57[i-1] + fVec57[i-2])));
			}
			
			// LOOP 0x55f852d62210
			// exec code
			for (int i=0; i<count; i++) {
				fZec120[i] = (fSlow76 + (fVec58[i-3] + (fVec58[i-1] + fVec58[i-2])));
			}
			
			// LOOP 0x55f852d654c0
			// exec code
			for (int i=0; i<count; i++) {
				fZec121[i] = (fSlow77 + (fVec59[i-3] + (fVec59[i-1] + fVec59[i-2])));
			}
			
			// LOOP 0x55f852d671d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec122[i] = (fSlow78 + (fVec60[i-3] + (fVec60[i-1] + fVec60[i-2])));
			}
			
			// LOOP 0x55f852d89ed0
			// exec code
			for (int i=0; i<count; i++) {
				fZec127[i] = (fRec82[i] + (fRec80[i] + (fRec78[i] + (fRec76[i] + fZec126[i]))));
			}
			
			// LOOP 0x55f852d8bcb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec128[i] = (0.5f * fRec133[i]);
			}
			
			// LOOP 0x55f852d8c110
			// exec code
			for (int i=0; i<count; i++) {
				fZec129[i] = (0.5f * fRec132[i]);
			}
			
			// LOOP 0x55f852d8c570
			// exec code
			for (int i=0; i<count; i++) {
				fZec130[i] = (0.5f * fRec131[i]);
			}
			
			// LOOP 0x55f852d8c9d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec131[i] = (0.5f * fRec130[i]);
			}
			
			// LOOP 0x55f852d8ce30
			// exec code
			for (int i=0; i<count; i++) {
				fZec132[i] = (0.5f * fRec129[i]);
			}
			
			// LOOP 0x55f852d8d290
			// exec code
			for (int i=0; i<count; i++) {
				fZec133[i] = (0.5f * fRec128[i]);
			}
			
			// LOOP 0x55f852d8d6f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec134[i] = (0.5f * fRec127[i]);
			}
			
			// LOOP 0x55f852d8db50
			// exec code
			for (int i=0; i<count; i++) {
				fZec135[i] = (0.5f * fRec126[i]);
			}
			
			// LOOP 0x55f852d8dfb0
			// exec code
			for (int i=0; i<count; i++) {
				fZec136[i] = (0.5f * fRec125[i]);
			}
			
			// LOOP 0x55f852d8e410
			// exec code
			for (int i=0; i<count; i++) {
				fZec137[i] = (0.5f * fRec124[i]);
			}
			
			// LOOP 0x55f852d8e870
			// exec code
			for (int i=0; i<count; i++) {
				fZec138[i] = (0.5f * fRec120[i]);
			}
			
			// LOOP 0x55f852d8ecd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec139[i] = (0.5f * fRec118[i]);
			}
			
			// LOOP 0x55f852d8f130
			// exec code
			for (int i=0; i<count; i++) {
				fZec140[i] = (0.5f * fRec116[i]);
			}
			
			// LOOP 0x55f852d8f590
			// exec code
			for (int i=0; i<count; i++) {
				fZec141[i] = (0.5f * fRec114[i]);
			}
			
			// LOOP 0x55f852d8f9f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec142[i] = (0.5f * fRec112[i]);
			}
			
			// LOOP 0x55f852d8fe50
			// exec code
			for (int i=0; i<count; i++) {
				fZec143[i] = (0.5f * fRec110[i]);
			}
			
			// LOOP 0x55f852d902b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec144[i] = (0.5f * fRec108[i]);
			}
			
			// LOOP 0x55f852d90710
			// exec code
			for (int i=0; i<count; i++) {
				fZec145[i] = (0.5f * fRec106[i]);
			}
			
			// LOOP 0x55f852d90b70
			// exec code
			for (int i=0; i<count; i++) {
				fZec146[i] = (0.5f * fRec104[i]);
			}
			
			// LOOP 0x55f852d90fd0
			// exec code
			for (int i=0; i<count; i++) {
				fZec147[i] = (0.5f * fRec102[i]);
			}
			
			// LOOP 0x55f852d91430
			// exec code
			for (int i=0; i<count; i++) {
				fZec148[i] = (0.5f * fRec100[i]);
			}
			
			// LOOP 0x55f852d91890
			// exec code
			for (int i=0; i<count; i++) {
				fZec149[i] = (0.5f * fRec98[i]);
			}
			
			// LOOP 0x55f852d91cf0
			// exec code
			for (int i=0; i<count; i++) {
				fZec150[i] = (0.5f * fRec96[i]);
			}
			
			// LOOP 0x55f852d92150
			// exec code
			for (int i=0; i<count; i++) {
				fZec151[i] = (0.5f * fRec94[i]);
			}
			
			// LOOP 0x55f852d925d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec152[i] = (0.5f * fRec92[i]);
			}
			
			// LOOP 0x55f852d92a50
			// exec code
			for (int i=0; i<count; i++) {
				fZec153[i] = (0.5f * fRec90[i]);
			}
			
			// LOOP 0x55f852d92ed0
			// exec code
			for (int i=0; i<count; i++) {
				fZec154[i] = (0.5f * fRec88[i]);
			}
			
			// LOOP 0x55f852d933b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec155[i] = (0.5f * fRec86[i]);
			}
			
			// LOOP 0x55f852d93920
			// exec code
			for (int i=0; i<count; i++) {
				fZec156[i] = (0.5f * fRec84[i]);
			}
			
			// LOOP 0x55f852f028a0
			// pre processing
			for (int i=0; i<4; i++) iRec189_tmp[i]=iRec189_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec189[i] = ((int(((fZec181[i] - (0.5f * fYec68[i-1])) < 0)))?(1 - iRec189[i-1]):iRec189[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec189_perm[i]=iRec189_tmp[count+i];
			
			// LOOP 0x55f852f0b050
			// pre processing
			for (int i=0; i<4; i++) iRec194_tmp[i]=iRec194_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec194[i] = ((int(((fZec183[i] - (0.5f * fYec70[i-1])) < 0)))?(1 - iRec194[i-1]):iRec194[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec194_perm[i]=iRec194_tmp[count+i];
			
			// LOOP 0x55f852f139b0
			// pre processing
			for (int i=0; i<4; i++) iRec199_tmp[i]=iRec199_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec199[i] = ((int(((fZec185[i] - (0.5f * fYec72[i-1])) < 0)))?(1 - iRec199[i-1]):iRec199[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec199_perm[i]=iRec199_tmp[count+i];
			
			// LOOP 0x55f852f1c2b0
			// pre processing
			for (int i=0; i<4; i++) iRec204_tmp[i]=iRec204_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec204[i] = ((int(((fZec187[i] - (0.5f * fYec74[i-1])) < 0)))?(1 - iRec204[i-1]):iRec204[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec204_perm[i]=iRec204_tmp[count+i];
			
			// LOOP 0x55f852f24bb0
			// pre processing
			for (int i=0; i<4; i++) iRec209_tmp[i]=iRec209_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec209[i] = ((int(((fZec189[i] - (0.5f * fYec76[i-1])) < 0)))?(1 - iRec209[i-1]):iRec209[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec209_perm[i]=iRec209_tmp[count+i];
			
			// LOOP 0x55f852f2d4b0
			// pre processing
			for (int i=0; i<4; i++) iRec214_tmp[i]=iRec214_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec214[i] = ((int(((fZec191[i] - (0.5f * fYec78[i-1])) < 0)))?(1 - iRec214[i-1]):iRec214[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec214_perm[i]=iRec214_tmp[count+i];
			
			// LOOP 0x55f852f35db0
			// pre processing
			for (int i=0; i<4; i++) iRec219_tmp[i]=iRec219_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec219[i] = ((int(((fZec193[i] - (0.5f * fYec80[i-1])) < 0)))?(1 - iRec219[i-1]):iRec219[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec219_perm[i]=iRec219_tmp[count+i];
			
			// LOOP 0x55f852f3e6b0
			// pre processing
			for (int i=0; i<4; i++) iRec224_tmp[i]=iRec224_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec224[i] = ((int(((fZec194[i] - (0.5f * fYec81[i-1])) < 0)))?(1 - iRec224[i-1]):iRec224[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec224_perm[i]=iRec224_tmp[count+i];
			
			// LOOP 0x55f852f44d60
			// pre processing
			for (int i=0; i<4; i++) iRec228_tmp[i]=iRec228_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec228[i] = ((int(((fZec195[i] - (0.5f * fYec82[i-1])) < 0)))?(1 - iRec228[i-1]):iRec228[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec228_perm[i]=iRec228_tmp[count+i];
			
			// LOOP 0x55f852f4b6f0
			// pre processing
			for (int i=0; i<4; i++) iRec232_tmp[i]=iRec232_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec232[i] = ((int(((fZec196[i] - (0.5f * fYec83[i-1])) < 0)))?(1 - iRec232[i-1]):iRec232[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec232_perm[i]=iRec232_tmp[count+i];
			
			// LOOP 0x55f852f51da0
			// pre processing
			for (int i=0; i<4; i++) iRec236_tmp[i]=iRec236_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec236[i] = ((int(((fZec197[i] - (0.5f * fYec84[i-1])) < 0)))?(1 - iRec236[i-1]):iRec236[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec236_perm[i]=iRec236_tmp[count+i];
			
			// LOOP 0x55f852f58540
			// pre processing
			for (int i=0; i<4; i++) iRec240_tmp[i]=iRec240_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec240[i] = ((int(((fZec198[i] - (0.5f * fYec85[i-1])) < 0)))?(1 - iRec240[i-1]):iRec240[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) iRec240_perm[i]=iRec240_tmp[count+i];
			
			// SECTION : 23
			// LOOP 0x55f852ce3aa0
			// exec code
			for (int i=0; i<count; i++) {
				fZec123[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow80 * (((((((((((((((((fRec1[i] * fZec122[i]) + (fRec8[i] * fZec121[i])) + (fRec14[i] * fZec120[i])) + (fRec20[i] * fZec119[i])) + (fRec26[i] * fZec118[i])) + (fRec32[i] * fZec117[i])) + (fRec38[i] * fZec116[i])) + (fRec44[i] * fZec115[i])) + (fRec50[i] * fZec114[i])) + (fRec56[i] * fZec113[i])) + (fRec62[i] * fZec112[i])) + (fRec68[i] * fZec111[i])) + (fRec74[i] * fZec110[i])) + (fRec76[i] * fZec109[i])) + (fRec78[i] * fZec108[i])) + (fRec80[i] * fZec107[i])) + (fRec82[i] * fZec106[i]))) + (fRec84[i] * fZec105[i])) + (fRec86[i] * fZec104[i])) + (fRec88[i] * fZec103[i])) + (fRec90[i] * fZec102[i])) + (fRec92[i] * fZec101[i])) + (fRec94[i] * fZec100[i])) + (fRec96[i] * fZec99[i])) + (fRec98[i] * fZec98[i])) + (fRec100[i] * fZec97[i])) + (fRec102[i] * fZec96[i])) + (fRec104[i] * fZec95[i])) + (fRec106[i] * fZec94[i])) + (fRec108[i] * fZec93[i])) + (fRec110[i] * fZec92[i])) + (fRec112[i] * fZec91[i])) + (fRec114[i] * fZec90[i])) + (fRec116[i] * fZec89[i])) + (fRec118[i] * fZec88[i])) + (fRec120[i] * fZec87[i])) + (fRec122[i] * fZec86[i])) + (fRec123[i] * fZec85[i])) + (fRec124[i] * fZec84[i])) + (fRec125[i] * fZec83[i])) + (fRec126[i] * fZec82[i])) + (fRec127[i] * fZec81[i])) + (fRec128[i] * fZec80[i])) + (fRec129[i] * fZec79[i])) + (fRec130[i] * fZec78[i])) + (fRec131[i] * fZec77[i])) + (fRec132[i] * fZec76[i])) + (fRec133[i] * fZec75[i])) + fZec74[i]) + fZec72[i]) + fZec70[i]) + fZec68[i]) + fZec66[i]) + fZec64[i]) + fZec62[i]) + fZec60[i]) + fZec58[i]) + fZec56[i]) + fZec54[i]) + fZec52[i]) + fZec50[i]));
			}
			
			// LOOP 0x55f852d6a830
			// exec code
			for (int i=0; i<count; i++) {
				fZec157[i] = ((2 * ((((((((((((fRec123[i] + (fRec122[i] + ((((((((((((((((((fZec156[i] + fZec155[i]) + fZec154[i]) + fZec153[i]) + fZec152[i]) + fZec151[i]) + fZec150[i]) + fZec149[i]) + fZec148[i]) + fZec147[i]) + fZec146[i]) + fZec145[i]) + fZec144[i]) + fZec143[i]) + fZec142[i]) + fZec141[i]) + fZec140[i]) + fZec139[i]) + fZec138[i]))) + fZec137[i]) + fZec136[i]) + fZec135[i]) + fZec134[i]) + fZec133[i]) + fZec132[i]) + fZec131[i]) + fZec130[i]) + fZec129[i]) + fZec128[i]) + (fSlow81 * fZec127[i]))) + (fRec133[i] + (fRec132[i] + (fRec131[i] + (fRec130[i] + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec125[i] + (fRec122[i] + fRec124[i])))))))))));
			}
			
			// LOOP 0x55f852d95f80
			// pre processing
			for (int i=0; i<4; i++) fRec136_tmp[i]=fRec136_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec136[i] = (fRec136[i-1] + (fConst15 * (yc20_get_sample(fZec159[i], 7, 0) - fRec136[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec136_perm[i]=fRec136_tmp[count+i];
			
			// LOOP 0x55f852dc5ad0
			// pre processing
			for (int i=0; i<4; i++) fRec140_tmp[i]=fRec140_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec140[i] = (fRec140[i-1] + (fConst17 * (yc20_get_sample(fZec161[i], 8, 0) - fRec140[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec140_perm[i]=fRec140_tmp[count+i];
			
			// LOOP 0x55f852dcca40
			// pre processing
			for (int i=0; i<4; i++) fRec144_tmp[i]=fRec144_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec144[i] = (fRec144[i-1] + (fConst17 * (yc20_get_sample(fZec163[i], 9, 0) - fRec144[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec144_perm[i]=fRec144_tmp[count+i];
			
			// LOOP 0x55f852dd36d0
			// pre processing
			for (int i=0; i<4; i++) fRec148_tmp[i]=fRec148_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec148[i] = (fRec148[i-1] + (fConst17 * (yc20_get_sample(fZec165[i], 10, 0) - fRec148[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec148_perm[i]=fRec148_tmp[count+i];
			
			// LOOP 0x55f852dda360
			// pre processing
			for (int i=0; i<4; i++) fRec152_tmp[i]=fRec152_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec152[i] = (fRec152[i-1] + (fConst17 * (yc20_get_sample(fZec167[i], 11, 0) - fRec152[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec152_perm[i]=fRec152_tmp[count+i];
			
			// LOOP 0x55f852de0ff0
			// pre processing
			for (int i=0; i<4; i++) fRec156_tmp[i]=fRec156_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec156[i] = (fRec156[i-1] + (fConst18 * (yc20_get_sample(fZec168[i], 0, 0) - fRec156[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec156_perm[i]=fRec156_tmp[count+i];
			
			// LOOP 0x55f852de5b20
			// pre processing
			for (int i=0; i<4; i++) fRec159_tmp[i]=fRec159_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec159[i] = (fRec159[i-1] + (fConst18 * (yc20_get_sample(fZec169[i], 1, 0) - fRec159[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec159_perm[i]=fRec159_tmp[count+i];
			
			// LOOP 0x55f852dea370
			// pre processing
			for (int i=0; i<4; i++) fRec162_tmp[i]=fRec162_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec162[i] = (fRec162[i-1] + (fConst18 * (yc20_get_sample(fZec170[i], 2, 0) - fRec162[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec162_perm[i]=fRec162_tmp[count+i];
			
			// LOOP 0x55f852deebc0
			// pre processing
			for (int i=0; i<4; i++) fRec165_tmp[i]=fRec165_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec165[i] = (fRec165[i-1] + (fConst18 * (yc20_get_sample(fZec171[i], 3, 0) - fRec165[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec165_perm[i]=fRec165_tmp[count+i];
			
			// LOOP 0x55f852df3420
			// pre processing
			for (int i=0; i<4; i++) fRec168_tmp[i]=fRec168_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec168[i] = (fRec168[i-1] + (fConst19 * (yc20_get_sample(fZec172[i], 4, 0) - fRec168[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec168_perm[i]=fRec168_tmp[count+i];
			
			// LOOP 0x55f852f024c0
			// pre processing
			for (int i=0; i<4; i++) fRec188_tmp[i]=fRec188_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec188[i] = (fRec188[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec189[i] + fZec181[i])), 0, 0) - fRec188[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec188_perm[i]=fRec188_tmp[count+i];
			
			// LOOP 0x55f852f0ac70
			// pre processing
			for (int i=0; i<4; i++) fRec193_tmp[i]=fRec193_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec193[i] = (fRec193[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec194[i] + fZec183[i])), 1, 0) - fRec193[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec193_perm[i]=fRec193_tmp[count+i];
			
			// LOOP 0x55f852f135d0
			// pre processing
			for (int i=0; i<4; i++) fRec198_tmp[i]=fRec198_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec198[i] = (fRec198[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec199[i] + fZec185[i])), 2, 0) - fRec198[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec198_perm[i]=fRec198_tmp[count+i];
			
			// LOOP 0x55f852f1bed0
			// pre processing
			for (int i=0; i<4; i++) fRec203_tmp[i]=fRec203_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec203[i] = (fRec203[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec204[i] + fZec187[i])), 3, 0) - fRec203[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec203_perm[i]=fRec203_tmp[count+i];
			
			// LOOP 0x55f852f247d0
			// pre processing
			for (int i=0; i<4; i++) fRec208_tmp[i]=fRec208_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec208[i] = (fRec208[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec209[i] + fZec189[i])), 4, 0) - fRec208[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec208_perm[i]=fRec208_tmp[count+i];
			
			// LOOP 0x55f852f2d0d0
			// pre processing
			for (int i=0; i<4; i++) fRec213_tmp[i]=fRec213_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec213[i] = (fRec213[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec214[i] + fZec191[i])), 5, 0) - fRec213[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec213_perm[i]=fRec213_tmp[count+i];
			
			// LOOP 0x55f852f359d0
			// pre processing
			for (int i=0; i<4; i++) fRec218_tmp[i]=fRec218_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec218[i] = (fRec218[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec219[i] + fZec193[i])), 6, 0) - fRec218[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec218_perm[i]=fRec218_tmp[count+i];
			
			// LOOP 0x55f852f3e2d0
			// pre processing
			for (int i=0; i<4; i++) fRec223_tmp[i]=fRec223_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec223[i] = (fRec223[i-1] + (fConst21 * (yc20_get_sample((0.5f * (iRec224[i] + fZec194[i])), 7, 0) - fRec223[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec223_perm[i]=fRec223_tmp[count+i];
			
			// LOOP 0x55f852f44980
			// pre processing
			for (int i=0; i<4; i++) fRec227_tmp[i]=fRec227_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec227[i] = (fRec227[i-1] + (fConst23 * (yc20_get_sample((0.5f * (iRec228[i] + fZec195[i])), 8, 0) - fRec227[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec227_perm[i]=fRec227_tmp[count+i];
			
			// LOOP 0x55f852f4b310
			// pre processing
			for (int i=0; i<4; i++) fRec231_tmp[i]=fRec231_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec231[i] = (fRec231[i-1] + (fConst23 * (yc20_get_sample((0.5f * (iRec232[i] + fZec196[i])), 9, 0) - fRec231[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec231_perm[i]=fRec231_tmp[count+i];
			
			// LOOP 0x55f852f519c0
			// pre processing
			for (int i=0; i<4; i++) fRec235_tmp[i]=fRec235_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec235[i] = (fRec235[i-1] + (fConst23 * (yc20_get_sample((0.5f * (iRec236[i] + fZec197[i])), 10, 0) - fRec235[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec235_perm[i]=fRec235_tmp[count+i];
			
			// LOOP 0x55f852f58160
			// pre processing
			for (int i=0; i<4; i++) fRec239_tmp[i]=fRec239_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec239[i] = (fRec239[i-1] + (fConst23 * (yc20_get_sample((0.5f * (iRec240[i] + fZec198[i])), 11, 0) - fRec239[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec239_perm[i]=fRec239_tmp[count+i];
			
			// LOOP 0x55f852f5e820
			// pre processing
			for (int i=0; i<4; i++) fRec243_tmp[i]=fRec243_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec243[i] = (fRec243[i-1] + (fConst23 * (yc20_get_sample(fZec181[i], 0, 0) - fRec243[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec243_perm[i]=fRec243_tmp[count+i];
			
			// LOOP 0x55f852f613b0
			// pre processing
			for (int i=0; i<4; i++) fRec245_tmp[i]=fRec245_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec245[i] = (fRec245[i-1] + (fConst23 * (yc20_get_sample(fZec183[i], 1, 0) - fRec245[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec245_perm[i]=fRec245_tmp[count+i];
			
			// LOOP 0x55f852f63b30
			// pre processing
			for (int i=0; i<4; i++) fRec247_tmp[i]=fRec247_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec247[i] = (fRec247[i-1] + (fConst23 * (yc20_get_sample(fZec185[i], 2, 0) - fRec247[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec247_perm[i]=fRec247_tmp[count+i];
			
			// LOOP 0x55f852f662b0
			// pre processing
			for (int i=0; i<4; i++) fRec249_tmp[i]=fRec249_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec249[i] = (fRec249[i-1] + (fConst23 * (yc20_get_sample(fZec187[i], 3, 0) - fRec249[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec249_perm[i]=fRec249_tmp[count+i];
			
			// LOOP 0x55f852f68aa0
			// pre processing
			for (int i=0; i<4; i++) fRec251_tmp[i]=fRec251_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec251[i] = (fRec251[i-1] + (fConst25 * (yc20_get_sample(fZec189[i], 4, 0) - fRec251[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec251_perm[i]=fRec251_tmp[count+i];
			
			// LOOP 0x55f852f6b520
			// pre processing
			for (int i=0; i<4; i++) fRec253_tmp[i]=fRec253_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec253[i] = (fRec253[i-1] + (fConst25 * (yc20_get_sample(fZec191[i], 5, 0) - fRec253[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec253_perm[i]=fRec253_tmp[count+i];
			
			// LOOP 0x55f852f6dd10
			// pre processing
			for (int i=0; i<4; i++) fRec255_tmp[i]=fRec255_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec255[i] = (fRec255[i-1] + (fConst25 * (yc20_get_sample(fZec193[i], 6, 0) - fRec255[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec255_perm[i]=fRec255_tmp[count+i];
			
			// LOOP 0x55f852f70500
			// pre processing
			for (int i=0; i<4; i++) fRec257_tmp[i]=fRec257_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec257[i] = (fRec257[i-1] + (fConst25 * (yc20_get_sample(fZec194[i], 7, 0) - fRec257[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec257_perm[i]=fRec257_tmp[count+i];
			
			// LOOP 0x55f852f72cf0
			// pre processing
			for (int i=0; i<4; i++) fRec259_tmp[i]=fRec259_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec259[i] = (fRec259[i-1] + (fConst26 * (yc20_get_sample(fZec195[i], 8, 0) - fRec259[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec259_perm[i]=fRec259_tmp[count+i];
			
			// LOOP 0x55f852f757c0
			// pre processing
			for (int i=0; i<4; i++) fRec261_tmp[i]=fRec261_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec261[i] = (fRec261[i-1] + (fConst26 * (yc20_get_sample(fZec196[i], 9, 0) - fRec261[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec261_perm[i]=fRec261_tmp[count+i];
			
			// LOOP 0x55f852f77fb0
			// pre processing
			for (int i=0; i<4; i++) fRec263_tmp[i]=fRec263_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec263[i] = (fRec263[i-1] + (fConst26 * (yc20_get_sample(fZec197[i], 10, 0) - fRec263[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec263_perm[i]=fRec263_tmp[count+i];
			
			// LOOP 0x55f852f7a7a0
			// pre processing
			for (int i=0; i<4; i++) fRec265_tmp[i]=fRec265_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec265[i] = (fRec265[i-1] + (fConst26 * (yc20_get_sample(fZec198[i], 11, 0) - fRec265[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec265_perm[i]=fRec265_tmp[count+i];
			
			// LOOP 0x55f852f7cf90
			// pre processing
			for (int i=0; i<4; i++) fRec267_tmp[i]=fRec267_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec267[i] = (fRec267[i-1] + (fConst26 * (yc20_get_sample(fZec180[i], 0, 0) - fRec267[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec267_perm[i]=fRec267_tmp[count+i];
			
			// LOOP 0x55f852f7f640
			// pre processing
			for (int i=0; i<4; i++) fRec269_tmp[i]=fRec269_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec269[i] = (fRec269[i-1] + (fConst26 * (yc20_get_sample(fZec182[i], 1, 0) - fRec269[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec269_perm[i]=fRec269_tmp[count+i];
			
			// LOOP 0x55f852f81cf0
			// pre processing
			for (int i=0; i<4; i++) fRec271_tmp[i]=fRec271_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec271[i] = (fRec271[i-1] + (fConst26 * (yc20_get_sample(fZec184[i], 2, 0) - fRec271[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec271_perm[i]=fRec271_tmp[count+i];
			
			// LOOP 0x55f852f843a0
			// pre processing
			for (int i=0; i<4; i++) fRec273_tmp[i]=fRec273_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec273[i] = (fRec273[i-1] + (fConst26 * (yc20_get_sample(fZec186[i], 3, 0) - fRec273[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec273_perm[i]=fRec273_tmp[count+i];
			
			// LOOP 0x55f852f86a50
			// pre processing
			for (int i=0; i<4; i++) fRec275_tmp[i]=fRec275_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec275[i] = (fRec275[i-1] + (fConst15 * (yc20_get_sample(fZec188[i], 4, 0) - fRec275[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec275_perm[i]=fRec275_tmp[count+i];
			
			// LOOP 0x55f852f89100
			// pre processing
			for (int i=0; i<4; i++) fRec277_tmp[i]=fRec277_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec277[i] = (fRec277[i-1] + (fConst15 * (yc20_get_sample(fZec190[i], 5, 0) - fRec277[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec277_perm[i]=fRec277_tmp[count+i];
			
			// LOOP 0x55f852f8b7b0
			// pre processing
			for (int i=0; i<4; i++) fRec279_tmp[i]=fRec279_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec279[i] = (fRec279[i-1] + (fConst15 * (yc20_get_sample(fZec192[i], 6, 0) - fRec279[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec279_perm[i]=fRec279_tmp[count+i];
			
			// SECTION : 24
			// LOOP 0x55f852ce3980
			// pre processing
			for (int i=0; i<4; i++) fYec48_tmp[i]=fYec48_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec48[i] = (fZec157[i] - fZec123[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec48_perm[i]=fYec48_tmp[count+i];
			
			// LOOP 0x55f852d95b30
			// pre processing
			for (int i=0; i<4; i++) fRec135_tmp[i]=fRec135_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec135[i] = (fConst16 * (fRec135[i-1] + (fRec136[i] - fRec136[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec135_perm[i]=fRec135_tmp[count+i];
			
			// LOOP 0x55f852dc5730
			// pre processing
			for (int i=0; i<4; i++) fRec139_tmp[i]=fRec139_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec139[i] = (fConst16 * (fRec139[i-1] + (fRec140[i] - fRec140[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec139_perm[i]=fRec139_tmp[count+i];
			
			// LOOP 0x55f852dcc6a0
			// pre processing
			for (int i=0; i<4; i++) fRec143_tmp[i]=fRec143_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec143[i] = (fConst16 * (fRec143[i-1] + (fRec144[i] - fRec144[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec143_perm[i]=fRec143_tmp[count+i];
			
			// LOOP 0x55f852dd3330
			// pre processing
			for (int i=0; i<4; i++) fRec147_tmp[i]=fRec147_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec147[i] = (fConst16 * (fRec147[i-1] + (fRec148[i] - fRec148[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec147_perm[i]=fRec147_tmp[count+i];
			
			// LOOP 0x55f852dd9fc0
			// pre processing
			for (int i=0; i<4; i++) fRec151_tmp[i]=fRec151_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec151[i] = (fConst16 * (fRec151[i-1] + (fRec152[i] - fRec152[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec151_perm[i]=fRec151_tmp[count+i];
			
			// LOOP 0x55f852de0c50
			// pre processing
			for (int i=0; i<4; i++) fRec155_tmp[i]=fRec155_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec155[i] = (fConst5 * (fRec155[i-1] + (fRec156[i] - fRec156[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec155_perm[i]=fRec155_tmp[count+i];
			
			// LOOP 0x55f852de5780
			// pre processing
			for (int i=0; i<4; i++) fRec158_tmp[i]=fRec158_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec158[i] = (fConst5 * (fRec158[i-1] + (fRec159[i] - fRec159[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec158_perm[i]=fRec158_tmp[count+i];
			
			// LOOP 0x55f852de9fd0
			// pre processing
			for (int i=0; i<4; i++) fRec161_tmp[i]=fRec161_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec161[i] = (fConst5 * (fRec161[i-1] + (fRec162[i] - fRec162[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec161_perm[i]=fRec161_tmp[count+i];
			
			// LOOP 0x55f852dee820
			// pre processing
			for (int i=0; i<4; i++) fRec164_tmp[i]=fRec164_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec164[i] = (fConst5 * (fRec164[i-1] + (fRec165[i] - fRec165[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec164_perm[i]=fRec164_tmp[count+i];
			
			// LOOP 0x55f852df3080
			// pre processing
			for (int i=0; i<4; i++) fRec167_tmp[i]=fRec167_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec167[i] = (fConst5 * (fRec167[i-1] + (fRec168[i] - fRec168[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec167_perm[i]=fRec167_tmp[count+i];
			
			// LOOP 0x55f852df7f60
			// pre processing
			for (int i=0; i<4; i++) fRec171_tmp[i]=fRec171_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec171[i] = (fRec171[i-1] + (fConst19 * (yc20_get_sample(fZec173[i], 5, 0) - fRec171[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec171_perm[i]=fRec171_tmp[count+i];
			
			// LOOP 0x55f852dfc7c0
			// pre processing
			for (int i=0; i<4; i++) fRec174_tmp[i]=fRec174_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec174[i] = (fRec174[i-1] + (fConst19 * (yc20_get_sample(fZec174[i], 6, 0) - fRec174[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec174_perm[i]=fRec174_tmp[count+i];
			
			// LOOP 0x55f852e01020
			// pre processing
			for (int i=0; i<4; i++) fRec177_tmp[i]=fRec177_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec177[i] = (fRec177[i-1] + (fConst19 * (yc20_get_sample(fZec158[i], 7, 0) - fRec177[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec177_perm[i]=fRec177_tmp[count+i];
			
			// LOOP 0x55f852e03590
			// pre processing
			for (int i=0; i<4; i++) fRec179_tmp[i]=fRec179_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec179[i] = (fRec179[i-1] + (fConst20 * (yc20_get_sample(fZec160[i], 8, 0) - fRec179[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec179_perm[i]=fRec179_tmp[count+i];
			
			// LOOP 0x55f852e05de0
			// pre processing
			for (int i=0; i<4; i++) fRec181_tmp[i]=fRec181_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec181[i] = (fRec181[i-1] + (fConst20 * (yc20_get_sample(fZec162[i], 9, 0) - fRec181[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec181_perm[i]=fRec181_tmp[count+i];
			
			// LOOP 0x55f852e08350
			// pre processing
			for (int i=0; i<4; i++) fRec183_tmp[i]=fRec183_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec183[i] = (fRec183[i-1] + (fConst20 * (yc20_get_sample(fZec164[i], 10, 0) - fRec183[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec183_perm[i]=fRec183_tmp[count+i];
			
			// LOOP 0x55f852e0a8c0
			// pre processing
			for (int i=0; i<4; i++) fRec185_tmp[i]=fRec185_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec185[i] = (fRec185[i-1] + (fConst20 * (yc20_get_sample(fZec166[i], 11, 0) - fRec185[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec185_perm[i]=fRec185_tmp[count+i];
			
			// LOOP 0x55f852e14c70
			// exec code
			for (int i=0; i<count; i++) {
				fZec177[i] = (fRec98[i] + (fRec96[i] + (fRec94[i] + (fRec92[i] + (fRec90[i] + (fRec88[i] + (fRec86[i] + (fRec84[i] + fZec127[i]))))))));
			}
			
			// LOOP 0x55f852ed7730
			// pre processing
			for (int i=0; i<4; i++) fRec187_tmp[i]=fRec187_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec187[i] = (fConst22 * (fRec187[i-1] + (fRec188[i] - fRec188[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec187_perm[i]=fRec187_tmp[count+i];
			
			// LOOP 0x55f852f0a8d0
			// pre processing
			for (int i=0; i<4; i++) fRec192_tmp[i]=fRec192_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec192[i] = (fConst22 * (fRec192[i-1] + (fRec193[i] - fRec193[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec192_perm[i]=fRec192_tmp[count+i];
			
			// LOOP 0x55f852f13230
			// pre processing
			for (int i=0; i<4; i++) fRec197_tmp[i]=fRec197_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec197[i] = (fConst22 * (fRec197[i-1] + (fRec198[i] - fRec198[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec197_perm[i]=fRec197_tmp[count+i];
			
			// LOOP 0x55f852f1bb30
			// pre processing
			for (int i=0; i<4; i++) fRec202_tmp[i]=fRec202_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec202[i] = (fConst22 * (fRec202[i-1] + (fRec203[i] - fRec203[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec202_perm[i]=fRec202_tmp[count+i];
			
			// LOOP 0x55f852f24430
			// pre processing
			for (int i=0; i<4; i++) fRec207_tmp[i]=fRec207_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec207[i] = (fConst22 * (fRec207[i-1] + (fRec208[i] - fRec208[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec207_perm[i]=fRec207_tmp[count+i];
			
			// LOOP 0x55f852f2cd30
			// pre processing
			for (int i=0; i<4; i++) fRec212_tmp[i]=fRec212_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec212[i] = (fConst22 * (fRec212[i-1] + (fRec213[i] - fRec213[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec212_perm[i]=fRec212_tmp[count+i];
			
			// LOOP 0x55f852f35630
			// pre processing
			for (int i=0; i<4; i++) fRec217_tmp[i]=fRec217_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec217[i] = (fConst22 * (fRec217[i-1] + (fRec218[i] - fRec218[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec217_perm[i]=fRec217_tmp[count+i];
			
			// LOOP 0x55f852f3df30
			// pre processing
			for (int i=0; i<4; i++) fRec222_tmp[i]=fRec222_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec222[i] = (fConst22 * (fRec222[i-1] + (fRec223[i] - fRec223[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec222_perm[i]=fRec222_tmp[count+i];
			
			// LOOP 0x55f852f445e0
			// pre processing
			for (int i=0; i<4; i++) fRec226_tmp[i]=fRec226_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec226[i] = (fConst22 * (fRec226[i-1] + (fRec227[i] - fRec227[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec226_perm[i]=fRec226_tmp[count+i];
			
			// LOOP 0x55f852f4af70
			// pre processing
			for (int i=0; i<4; i++) fRec230_tmp[i]=fRec230_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec230[i] = (fConst22 * (fRec230[i-1] + (fRec231[i] - fRec231[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec230_perm[i]=fRec230_tmp[count+i];
			
			// LOOP 0x55f852f51620
			// pre processing
			for (int i=0; i<4; i++) fRec234_tmp[i]=fRec234_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec234[i] = (fConst22 * (fRec234[i-1] + (fRec235[i] - fRec235[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec234_perm[i]=fRec234_tmp[count+i];
			
			// LOOP 0x55f852f57dc0
			// pre processing
			for (int i=0; i<4; i++) fRec238_tmp[i]=fRec238_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec238[i] = (fConst22 * (fRec238[i-1] + (fRec239[i] - fRec239[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec238_perm[i]=fRec238_tmp[count+i];
			
			// LOOP 0x55f852f5e480
			// pre processing
			for (int i=0; i<4; i++) fRec242_tmp[i]=fRec242_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec242[i] = (fConst24 * (fRec242[i-1] + (fRec243[i] - fRec243[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec242_perm[i]=fRec242_tmp[count+i];
			
			// LOOP 0x55f852f61010
			// pre processing
			for (int i=0; i<4; i++) fRec244_tmp[i]=fRec244_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec244[i] = (fConst24 * (fRec244[i-1] + (fRec245[i] - fRec245[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec244_perm[i]=fRec244_tmp[count+i];
			
			// LOOP 0x55f852f63790
			// pre processing
			for (int i=0; i<4; i++) fRec246_tmp[i]=fRec246_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec246[i] = (fConst24 * (fRec246[i-1] + (fRec247[i] - fRec247[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec246_perm[i]=fRec246_tmp[count+i];
			
			// LOOP 0x55f852f65f10
			// pre processing
			for (int i=0; i<4; i++) fRec248_tmp[i]=fRec248_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec248[i] = (fConst24 * (fRec248[i-1] + (fRec249[i] - fRec249[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec248_perm[i]=fRec248_tmp[count+i];
			
			// LOOP 0x55f852f68700
			// pre processing
			for (int i=0; i<4; i++) fRec250_tmp[i]=fRec250_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec250[i] = (fConst24 * (fRec250[i-1] + (fRec251[i] - fRec251[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec250_perm[i]=fRec250_tmp[count+i];
			
			// LOOP 0x55f852f6b180
			// pre processing
			for (int i=0; i<4; i++) fRec252_tmp[i]=fRec252_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec252[i] = (fConst24 * (fRec252[i-1] + (fRec253[i] - fRec253[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec252_perm[i]=fRec252_tmp[count+i];
			
			// LOOP 0x55f852f6d970
			// pre processing
			for (int i=0; i<4; i++) fRec254_tmp[i]=fRec254_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec254[i] = (fConst24 * (fRec254[i-1] + (fRec255[i] - fRec255[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec254_perm[i]=fRec254_tmp[count+i];
			
			// LOOP 0x55f852f70160
			// pre processing
			for (int i=0; i<4; i++) fRec256_tmp[i]=fRec256_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec256[i] = (fConst24 * (fRec256[i-1] + (fRec257[i] - fRec257[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec256_perm[i]=fRec256_tmp[count+i];
			
			// LOOP 0x55f852f72950
			// pre processing
			for (int i=0; i<4; i++) fRec258_tmp[i]=fRec258_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec258[i] = (fConst24 * (fRec258[i-1] + (fRec259[i] - fRec259[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec258_perm[i]=fRec258_tmp[count+i];
			
			// LOOP 0x55f852f75420
			// pre processing
			for (int i=0; i<4; i++) fRec260_tmp[i]=fRec260_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec260[i] = (fConst24 * (fRec260[i-1] + (fRec261[i] - fRec261[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec260_perm[i]=fRec260_tmp[count+i];
			
			// LOOP 0x55f852f77c10
			// pre processing
			for (int i=0; i<4; i++) fRec262_tmp[i]=fRec262_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec262[i] = (fConst24 * (fRec262[i-1] + (fRec263[i] - fRec263[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec262_perm[i]=fRec262_tmp[count+i];
			
			// LOOP 0x55f852f7a400
			// pre processing
			for (int i=0; i<4; i++) fRec264_tmp[i]=fRec264_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec264[i] = (fConst24 * (fRec264[i-1] + (fRec265[i] - fRec265[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec264_perm[i]=fRec264_tmp[count+i];
			
			// LOOP 0x55f852f7cbf0
			// pre processing
			for (int i=0; i<4; i++) fRec266_tmp[i]=fRec266_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec266[i] = (fConst16 * (fRec266[i-1] + (fRec267[i] - fRec267[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec266_perm[i]=fRec266_tmp[count+i];
			
			// LOOP 0x55f852f7f2a0
			// pre processing
			for (int i=0; i<4; i++) fRec268_tmp[i]=fRec268_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec268[i] = (fConst16 * (fRec268[i-1] + (fRec269[i] - fRec269[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec268_perm[i]=fRec268_tmp[count+i];
			
			// LOOP 0x55f852f81950
			// pre processing
			for (int i=0; i<4; i++) fRec270_tmp[i]=fRec270_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec270[i] = (fConst16 * (fRec270[i-1] + (fRec271[i] - fRec271[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec270_perm[i]=fRec270_tmp[count+i];
			
			// LOOP 0x55f852f84000
			// pre processing
			for (int i=0; i<4; i++) fRec272_tmp[i]=fRec272_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec272[i] = (fConst16 * (fRec272[i-1] + (fRec273[i] - fRec273[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec272_perm[i]=fRec272_tmp[count+i];
			
			// LOOP 0x55f852f866b0
			// pre processing
			for (int i=0; i<4; i++) fRec274_tmp[i]=fRec274_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec274[i] = (fConst16 * (fRec274[i-1] + (fRec275[i] - fRec275[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec274_perm[i]=fRec274_tmp[count+i];
			
			// LOOP 0x55f852f88d60
			// pre processing
			for (int i=0; i<4; i++) fRec276_tmp[i]=fRec276_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec276[i] = (fConst16 * (fRec276[i-1] + (fRec277[i] - fRec277[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec276_perm[i]=fRec276_tmp[count+i];
			
			// LOOP 0x55f852f8b410
			// pre processing
			for (int i=0; i<4; i++) fRec278_tmp[i]=fRec278_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec278[i] = (fConst16 * (fRec278[i-1] + (fRec279[i] - fRec279[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec278_perm[i]=fRec278_tmp[count+i];
			
			// SECTION : 25
			// LOOP 0x55f852ce3040
			// pre processing
			for (int i=0; i<4; i++) fRec134_tmp[i]=fRec134_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec134[i] = (fConst14 * (fRec134[i-1] + (fZec157[i] - (fZec123[i] + fYec48[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec134_perm[i]=fRec134_tmp[count+i];
			
			// LOOP 0x55f852df7bc0
			// pre processing
			for (int i=0; i<4; i++) fRec170_tmp[i]=fRec170_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec170[i] = (fConst5 * (fRec170[i-1] + (fRec171[i] - fRec171[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec170_perm[i]=fRec170_tmp[count+i];
			
			// LOOP 0x55f852dfc420
			// pre processing
			for (int i=0; i<4; i++) fRec173_tmp[i]=fRec173_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec173[i] = (fConst5 * (fRec173[i-1] + (fRec174[i] - fRec174[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec173_perm[i]=fRec173_tmp[count+i];
			
			// LOOP 0x55f852e00c80
			// pre processing
			for (int i=0; i<4; i++) fRec176_tmp[i]=fRec176_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec176[i] = (fConst5 * (fRec176[i-1] + (fRec177[i] - fRec177[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec176_perm[i]=fRec176_tmp[count+i];
			
			// LOOP 0x55f852e031f0
			// pre processing
			for (int i=0; i<4; i++) fRec178_tmp[i]=fRec178_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec178[i] = (fConst5 * (fRec178[i-1] + (fRec179[i] - fRec179[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec178_perm[i]=fRec178_tmp[count+i];
			
			// LOOP 0x55f852e05a40
			// pre processing
			for (int i=0; i<4; i++) fRec180_tmp[i]=fRec180_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec180[i] = (fConst5 * (fRec180[i-1] + (fRec181[i] - fRec181[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec180_perm[i]=fRec180_tmp[count+i];
			
			// LOOP 0x55f852e07fb0
			// pre processing
			for (int i=0; i<4; i++) fRec182_tmp[i]=fRec182_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec182[i] = (fConst5 * (fRec182[i-1] + (fRec183[i] - fRec183[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec182_perm[i]=fRec182_tmp[count+i];
			
			// LOOP 0x55f852e0a520
			// pre processing
			for (int i=0; i<4; i++) fRec184_tmp[i]=fRec184_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec184[i] = (fConst5 * (fRec184[i-1] + (fRec185[i] - fRec185[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec184_perm[i]=fRec184_tmp[count+i];
			
			// LOOP 0x55f852e14d90
			// exec code
			for (int i=0; i<count; i++) {
				fZec178[i] = (fRec122[i] + (fRec120[i] + (fRec118[i] + (fRec116[i] + (fRec114[i] + (fRec112[i] + (fRec110[i] + (fRec108[i] + (fRec106[i] + (fRec104[i] + (fRec102[i] + (fRec100[i] + fZec177[i]))))))))))));
			}
			
			// LOOP 0x55f852f934d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec199[i] = (((((((((((((((((fRec187[i] * fZec122[i]) + (fRec192[i] * fZec121[i])) + (fRec197[i] * fZec120[i])) + (fRec202[i] * fZec119[i])) + (fRec207[i] * fZec118[i])) + (fRec212[i] * fZec117[i])) + (fRec217[i] * fZec116[i])) + (fRec222[i] * fZec115[i])) + (fRec226[i] * fZec114[i])) + (fRec230[i] * fZec113[i])) + (fRec234[i] * fZec112[i])) + (fRec238[i] * fZec111[i])) + (fRec242[i] * fZec110[i])) + (fRec244[i] * fZec109[i])) + (fRec246[i] * fZec108[i])) + (fRec248[i] * fZec107[i])) + (fRec250[i] * fZec106[i]));
			}
			
			// LOOP 0x55f8532027d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec210[i] = (((((((((((((((((fRec266[i] * fZec122[i]) + (fRec268[i] * fZec121[i])) + (fRec270[i] * fZec120[i])) + (fRec272[i] * fZec119[i])) + (fRec274[i] * fZec118[i])) + (fRec276[i] * fZec117[i])) + (fRec278[i] * fZec116[i])) + (fRec135[i] * fZec115[i])) + (fRec139[i] * fZec114[i])) + (fRec143[i] * fZec113[i])) + (fRec147[i] * fZec112[i])) + (fRec151[i] * fZec111[i])) + (fRec155[i] * fZec110[i])) + (fRec158[i] * fZec109[i])) + (fRec161[i] * fZec108[i])) + (fRec164[i] * fZec107[i])) + (fRec167[i] * fZec106[i]));
			}
			
			// LOOP 0x55f853307a00
			// exec code
			for (int i=0; i<count; i++) {
				fZec214[i] = (((((((((((((((((fRec242[i] * fZec122[i]) + (fRec244[i] * fZec121[i])) + (fRec246[i] * fZec120[i])) + (fRec248[i] * fZec119[i])) + (fRec250[i] * fZec118[i])) + (fRec252[i] * fZec117[i])) + (fRec254[i] * fZec116[i])) + (fRec256[i] * fZec115[i])) + (fRec258[i] * fZec114[i])) + (fRec260[i] * fZec113[i])) + (fRec262[i] * fZec112[i])) + (fRec264[i] * fZec111[i])) + (fRec266[i] * fZec110[i])) + (fRec268[i] * fZec109[i])) + (fRec270[i] * fZec108[i])) + (fRec272[i] * fZec107[i])) + (fRec274[i] * fZec106[i]));
			}
			
			// SECTION : 26
			// LOOP 0x55f852f8e2e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec200[i] = (0.41975f * (((((((((((((((((((((((((((((((((((((((((((((fSlow80 * fZec199[i]) + (fRec252[i] * fZec105[i])) + (fRec254[i] * fZec104[i])) + (fRec256[i] * fZec103[i])) + (fRec258[i] * fZec102[i])) + (fRec260[i] * fZec101[i])) + (fRec262[i] * fZec100[i])) + (fRec264[i] * fZec99[i])) + (fRec266[i] * fZec98[i])) + (fRec268[i] * fZec97[i])) + (fRec270[i] * fZec96[i])) + (fRec272[i] * fZec95[i])) + (fRec274[i] * fZec94[i])) + (fRec276[i] * fZec93[i])) + (fRec278[i] * fZec92[i])) + (fRec135[i] * fZec91[i])) + (fRec139[i] * fZec90[i])) + (fRec143[i] * fZec89[i])) + (fRec147[i] * fZec88[i])) + (fRec151[i] * fZec87[i])) + (fRec155[i] * fZec86[i])) + (fRec158[i] * fZec85[i])) + (fRec161[i] * fZec84[i])) + (fRec164[i] * fZec83[i])) + (fRec167[i] * fZec82[i])) + (fRec170[i] * fZec81[i])) + (fRec173[i] * fZec80[i])) + (fRec176[i] * fZec79[i])) + (fRec178[i] * fZec78[i])) + (fRec180[i] * fZec77[i])) + (fRec182[i] * fZec76[i])) + (fRec184[i] * fZec75[i])) + (fRec1[i] * fZec73[i])) + (fRec8[i] * fZec71[i])) + (fRec14[i] * fZec69[i])) + (fRec20[i] * fZec67[i])) + (fRec26[i] * fZec65[i])) + (fRec32[i] * fZec63[i])) + (fRec38[i] * fZec61[i])) + (fRec44[i] * fZec59[i])) + (fRec50[i] * fZec57[i])) + (fRec56[i] * fZec55[i])) + (fRec62[i] * fZec53[i])) + (fRec68[i] * fZec51[i])) + (fRec74[i] * fZec49[i])));
			}
			
			// LOOP 0x55f852f96c60
			// exec code
			for (int i=0; i<count; i++) {
				fZec201[i] = (1.679f * ((fSlow80 * (fRec238[i] + (fRec234[i] + (fRec230[i] + (fRec226[i] + (fRec222[i] + (fRec217[i] + (fRec212[i] + (fRec207[i] + (fRec202[i] + (fRec197[i] + (fRec192[i] + (fRec187[i] + (fRec250[i] + (fRec248[i] + (fRec246[i] + (fRec242[i] + fRec244[i]))))))))))))))))) + (fRec264[i] + (fRec262[i] + (fRec260[i] + (fRec258[i] + (fRec256[i] + (fRec254[i] + (fRec252[i] + (fRec278[i] + (fRec276[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec268[i] + (fRec266[i] + (fRec151[i] + (fRec147[i] + (fRec143[i] + (fRec139[i] + (fRec135[i] + (fRec164[i] + (fRec161[i] + (fRec158[i] + (fRec155[i] + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec170[i] + (fRec167[i] + fZec126[i])))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x55f8530cd3a0
			// pre processing
			for (int i=0; i<4; i++) iRec286_tmp[i]=iRec286_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iRec286[i] = (12345 + (1103515245 * iRec286[i-1]));
			}
			// post processing
			for (int i=0; i<4; i++) iRec286_perm[i]=iRec286_tmp[count+i];
			
			// LOOP 0x55f8530ce460
			// exec code
			for (int i=0; i<count; i++) {
				fZec202[i] = (0.002f * (fRec134[i] * fSlow82));
			}
			
			// LOOP 0x55f8530f1840
			// exec code
			for (int i=0; i<count; i++) {
				fZec207[i] = (0.25f * (fZec50[i] + (fZec52[i] + (fZec54[i] + (fZec56[i] + (fZec58[i] + (fZec60[i] + (fZec62[i] + (fZec64[i] + (fZec66[i] + (fZec68[i] + (fZec70[i] + (fZec72[i] + (fZec74[i] + ((((((((((((((((((((((((((((((((fSlow80 * (((((((((((((((((fRec155[i] * fZec122[i]) + (fRec158[i] * fZec121[i])) + (fRec161[i] * fZec120[i])) + (fRec164[i] * fZec119[i])) + (fRec167[i] * fZec118[i])) + (fRec170[i] * fZec117[i])) + (fRec173[i] * fZec116[i])) + (fRec176[i] * fZec115[i])) + (fRec178[i] * fZec114[i])) + (fRec180[i] * fZec113[i])) + (fRec182[i] * fZec112[i])) + (fRec184[i] * fZec111[i])) + (fRec1[i] * fZec110[i])) + (fRec8[i] * fZec109[i])) + (fRec14[i] * fZec108[i])) + (fRec20[i] * fZec107[i])) + (fRec26[i] * fZec106[i]))) + (fRec32[i] * fZec105[i])) + (fRec38[i] * fZec104[i])) + (fRec44[i] * fZec103[i])) + (fRec50[i] * fZec102[i])) + (fRec56[i] * fZec101[i])) + (fRec62[i] * fZec100[i])) + (fRec68[i] * fZec99[i])) + (fRec74[i] * fZec98[i])) + (fRec76[i] * fZec97[i])) + (fRec78[i] * fZec96[i])) + (fRec80[i] * fZec95[i])) + (fRec82[i] * fZec94[i])) + (fRec84[i] * fZec93[i])) + (fRec86[i] * fZec92[i])) + (fRec88[i] * fZec91[i])) + (fRec90[i] * fZec90[i])) + (fRec92[i] * fZec89[i])) + (fRec94[i] * fZec88[i])) + (fRec96[i] * fZec87[i])) + (fRec98[i] * fZec86[i])) + (fRec100[i] * fZec85[i])) + (fRec102[i] * fZec84[i])) + (fRec104[i] * fZec83[i])) + (fRec106[i] * fZec82[i])) + (fRec108[i] * fZec81[i])) + (fRec110[i] * fZec80[i])) + (fRec112[i] * fZec79[i])) + (fRec114[i] * fZec78[i])) + (fRec116[i] * fZec77[i])) + (fRec118[i] * fZec76[i])) + (fRec120[i] * fZec75[i]))))))))))))))));
			}
			
			// LOOP 0x55f8530f6a80
			// exec code
			for (int i=0; i<count; i++) {
				fZec208[i] = ((fSlow80 * (fRec164[i] + (fRec161[i] + (fRec158[i] + (fRec155[i] + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec170[i] + (fRec167[i] + fZec124[i]))))))))))))) + (fRec133[i] + (fRec132[i] + (fRec131[i] + (fRec130[i] + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec125[i] + (fRec124[i] + (fRec123[i] + ((2 * fRec122[i]) + (fRec120[i] + (fRec118[i] + (fRec116[i] + (fRec114[i] + (fRec112[i] + (fRec110[i] + (fRec108[i] + (fRec106[i] + (fRec104[i] + (fRec102[i] + (fRec100[i] + (fRec98[i] + (fRec96[i] + (fRec94[i] + (fRec92[i] + (fRec90[i] + (fRec88[i] + (fRec86[i] + (fRec84[i] + (fRec82[i] + (fRec80[i] + (fRec78[i] + (fRec76[i] + (fRec74[i] + (fRec68[i] + (fRec62[i] + (fRec56[i] + (fRec50[i] + (fRec44[i] + (fRec32[i] + fRec38[i])))))))))))))))))))))))))))))))))))))))))));
			}
			
			// LOOP 0x55f8531fe7e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec211[i] = (0.25f * (fZec50[i] + ((((((((((((((((((((((((((((((((((((((((((((fSlow80 * fZec210[i]) + (fRec170[i] * fZec105[i])) + (fRec173[i] * fZec104[i])) + (fRec176[i] * fZec103[i])) + (fRec178[i] * fZec102[i])) + (fRec180[i] * fZec101[i])) + (fRec182[i] * fZec100[i])) + (fRec184[i] * fZec99[i])) + (fRec1[i] * fZec98[i])) + (fRec8[i] * fZec97[i])) + (fRec14[i] * fZec96[i])) + (fRec20[i] * fZec95[i])) + (fRec26[i] * fZec94[i])) + (fRec32[i] * fZec93[i])) + (fRec38[i] * fZec92[i])) + (fRec44[i] * fZec91[i])) + (fRec50[i] * fZec90[i])) + (fRec56[i] * fZec89[i])) + (fRec62[i] * fZec88[i])) + (fRec68[i] * fZec87[i])) + (fRec74[i] * fZec86[i])) + (fRec76[i] * fZec85[i])) + (fRec78[i] * fZec84[i])) + (fRec80[i] * fZec83[i])) + (fRec82[i] * fZec82[i])) + (fRec84[i] * fZec81[i])) + (fRec86[i] * fZec80[i])) + (fRec88[i] * fZec79[i])) + (fRec90[i] * fZec78[i])) + (fRec92[i] * fZec77[i])) + (fRec94[i] * fZec76[i])) + (fRec96[i] * fZec75[i])) + (fRec98[i] * fZec73[i])) + (fRec100[i] * fZec71[i])) + (fRec102[i] * fZec69[i])) + (fRec104[i] * fZec67[i])) + (fRec106[i] * fZec65[i])) + (fRec108[i] * fZec63[i])) + (fRec110[i] * fZec61[i])) + (fRec112[i] * fZec59[i])) + (fRec114[i] * fZec57[i])) + (fRec116[i] * fZec55[i])) + (fRec118[i] * fZec53[i])) + (fRec120[i] * fZec51[i]))));
			}
			
			// LOOP 0x55f8532050e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec212[i] = ((fSlow80 * (fRec278[i] + (fRec276[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec268[i] + (fRec266[i] + (fRec151[i] + (fRec147[i] + (fRec143[i] + (fRec139[i] + (fRec135[i] + (fRec164[i] + (fRec161[i] + (fRec158[i] + (fRec167[i] + fRec155[i]))))))))))))))))) + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec170[i] + fZec178[i]))))))));
			}
			
			// LOOP 0x55f853303620
			// exec code
			for (int i=0; i<count; i++) {
				fZec215[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow80 * fZec214[i]) + (fRec276[i] * fZec105[i])) + (fRec278[i] * fZec104[i])) + (fRec135[i] * fZec103[i])) + (fRec139[i] * fZec102[i])) + (fRec143[i] * fZec101[i])) + (fRec147[i] * fZec100[i])) + (fRec151[i] * fZec99[i])) + (fRec155[i] * fZec98[i])) + (fRec158[i] * fZec97[i])) + (fRec161[i] * fZec96[i])) + (fRec164[i] * fZec95[i])) + (fRec167[i] * fZec94[i])) + (fRec170[i] * fZec93[i])) + (fRec173[i] * fZec92[i])) + (fRec176[i] * fZec91[i])) + (fRec178[i] * fZec90[i])) + (fRec180[i] * fZec89[i])) + (fRec182[i] * fZec88[i])) + (fRec184[i] * fZec87[i])) + (fRec1[i] * fZec86[i])) + (fRec8[i] * fZec85[i])) + (fRec14[i] * fZec84[i])) + (fRec20[i] * fZec83[i])) + (fRec26[i] * fZec82[i])) + (fRec32[i] * fZec81[i])) + (fRec38[i] * fZec80[i])) + (fRec44[i] * fZec79[i])) + (fRec50[i] * fZec78[i])) + (fRec56[i] * fZec77[i])) + (fRec62[i] * fZec76[i])) + (fRec68[i] * fZec75[i])) + (fRec74[i] * fZec73[i])) + (fRec76[i] * fZec71[i])) + (fRec78[i] * fZec69[i])) + (fRec80[i] * fZec67[i])) + (fRec82[i] * fZec65[i])) + (fRec84[i] * fZec63[i])) + (fRec86[i] * fZec61[i])) + (fRec88[i] * fZec59[i])) + (fRec90[i] * fZec57[i])) + (fRec92[i] * fZec55[i])) + (fRec94[i] * fZec53[i])) + (fRec96[i] * fZec51[i])) + (fRec98[i] * fZec49[i])));
			}
			
			// LOOP 0x55f85330a2b0
			// exec code
			for (int i=0; i<count; i++) {
				fZec216[i] = ((fSlow80 * (fRec264[i] + (fRec262[i] + (fRec260[i] + (fRec258[i] + (fRec256[i] + (fRec254[i] + (fRec252[i] + (fRec250[i] + (fRec248[i] + (fRec246[i] + (fRec244[i] + (fRec242[i] + (fRec274[i] + (fRec272[i] + (fRec270[i] + (fRec266[i] + fRec268[i]))))))))))))))))) + (fRec278[i] + (fRec276[i] + (fRec151[i] + (fRec147[i] + (fRec143[i] + (fRec139[i] + (fRec135[i] + (fRec164[i] + (fRec161[i] + (fRec158[i] + (fRec155[i] + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec170[i] + (fRec167[i] + fZec177[i]))))))))))))))))))));
			}
			
			// SECTION : 27
			// LOOP 0x55f852f8e1c0
			// pre processing
			for (int i=0; i<4; i++) fYec86_tmp[i]=fYec86_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec86[i] = (fZec201[i] - fZec200[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec86_perm[i]=fYec86_tmp[count+i];
			
			// LOOP 0x55f8530cde80
			// exec code
			for (int i=0; i<count; i++) {
				fZec203[i] = faustpower<2>(float(min(1.0f, max(-1.0f, (fZec202[i] + (fZec123[i] + (4.656612875245796e-16f * iRec286[i])))))));
			}
			
			// LOOP 0x55f8530f1720
			// pre processing
			for (int i=0; i<4; i++) fYec88_tmp[i]=fYec88_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec88[i] = (fZec208[i] - fZec207[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec88_perm[i]=fYec88_tmp[count+i];
			
			// LOOP 0x55f8531fe6c0
			// pre processing
			for (int i=0; i<4; i++) fYec91_tmp[i]=fYec91_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec91[i] = (fZec212[i] - fZec211[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec91_perm[i]=fYec91_tmp[count+i];
			
			// LOOP 0x55f853303500
			// pre processing
			for (int i=0; i<4; i++) fYec94_tmp[i]=fYec94_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec94[i] = (fZec216[i] - fZec215[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec94_perm[i]=fYec94_tmp[count+i];
			
			// SECTION : 28
			// LOOP 0x55f852f8da80
			// pre processing
			for (int i=0; i<4; i++) fRec280_tmp[i]=fRec280_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec280[i] = (fConst14 * (fRec280[i-1] + (fZec201[i] - (fZec200[i] + fYec86[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec280_perm[i]=fRec280_tmp[count+i];
			
			// LOOP 0x55f853026870
			// pre processing
			for (int i=0; i<4; i++) fRec283_tmp[i]=fRec283_perm[i];
			for (int i=0; i<4; i++) iRec284_tmp[i]=iRec284_perm[i];
			for (int i=0; i<4; i++) fRec285_tmp[i]=fRec285_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				iZec204[i] = int((iRec284[i-1] < iConst27));
				fRec283[i] = ((iZec204[i])?(fZec203[i] + fRec283[i-1]):fZec203[i]);
				iRec284[i] = ((iZec204[i])?(1 + iRec284[i-1]):1);
				fRec285[i] = ((iZec204[i])?fRec285[i-1]:fRec283[i-1]);
			}
			// post processing
			for (int i=0; i<4; i++) fRec285_perm[i]=fRec285_tmp[count+i];
			for (int i=0; i<4; i++) iRec284_perm[i]=iRec284_tmp[count+i];
			for (int i=0; i<4; i++) fRec283_perm[i]=fRec283_tmp[count+i];
			
			// LOOP 0x55f8530f13a0
			// pre processing
			for (int i=0; i<4; i++) fRec289_tmp[i]=fRec289_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec289[i] = (fConst14 * (fRec289[i-1] + (fZec208[i] - (fZec207[i] + fYec88[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec289_perm[i]=fRec289_tmp[count+i];
			
			// LOOP 0x55f8531fe340
			// pre processing
			for (int i=0; i<4; i++) fRec292_tmp[i]=fRec292_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec292[i] = (fConst14 * (fRec292[i-1] + (fZec212[i] - (fZec211[i] + fYec91[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec292_perm[i]=fRec292_tmp[count+i];
			
			// LOOP 0x55f853303140
			// pre processing
			for (int i=0; i<4; i++) fRec295_tmp[i]=fRec295_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec295[i] = (fConst14 * (fRec295[i-1] + (fZec216[i] - (fZec215[i] + fYec94[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec295_perm[i]=fRec295_tmp[count+i];
			
			// SECTION : 29
			// LOOP 0x55f852e0d1f0
			// exec code
			for (int i=0; i<count; i++) {
				fZec175[i] = (((((((((((((((((((((((((((((((((((((((((((((fSlow80 * (((((((((((((((((fRec135[i] * fZec122[i]) + (fRec139[i] * fZec121[i])) + (fRec143[i] * fZec120[i])) + (fRec147[i] * fZec119[i])) + (fRec151[i] * fZec118[i])) + (fRec155[i] * fZec117[i])) + (fRec158[i] * fZec116[i])) + (fRec161[i] * fZec115[i])) + (fRec164[i] * fZec114[i])) + (fRec167[i] * fZec113[i])) + (fRec170[i] * fZec112[i])) + (fRec173[i] * fZec111[i])) + (fRec176[i] * fZec110[i])) + (fRec178[i] * fZec109[i])) + (fRec180[i] * fZec108[i])) + (fRec182[i] * fZec107[i])) + (fRec184[i] * fZec106[i]))) + (fRec1[i] * fZec105[i])) + (fRec8[i] * fZec104[i])) + (fRec14[i] * fZec103[i])) + (fRec20[i] * fZec102[i])) + (fRec26[i] * fZec101[i])) + (fRec32[i] * fZec100[i])) + (fRec38[i] * fZec99[i])) + (fRec44[i] * fZec98[i])) + (fRec50[i] * fZec97[i])) + (fRec56[i] * fZec96[i])) + (fRec62[i] * fZec95[i])) + (fRec68[i] * fZec94[i])) + (fRec74[i] * fZec93[i])) + (fRec76[i] * fZec92[i])) + (fRec78[i] * fZec91[i])) + (fRec80[i] * fZec90[i])) + (fRec82[i] * fZec89[i])) + (fRec84[i] * fZec88[i])) + (fRec86[i] * fZec87[i])) + (fRec88[i] * fZec86[i])) + (fRec90[i] * fZec85[i])) + (fRec92[i] * fZec84[i])) + (fRec94[i] * fZec83[i])) + (fRec96[i] * fZec82[i])) + (fRec98[i] * fZec81[i])) + (fRec100[i] * fZec80[i])) + (fRec102[i] * fZec79[i])) + (fRec104[i] * fZec78[i])) + (fRec106[i] * fZec77[i])) + (fRec108[i] * fZec76[i])) + (fRec110[i] * fZec75[i])) + (fRec112[i] * fZec73[i])) + (fRec114[i] * fZec71[i])) + (fRec116[i] * fZec69[i])) + (fRec118[i] * fZec67[i])) + (fRec120[i] * fZec65[i])) + (fRec122[i] * fZec63[i])) + (fRec123[i] * fZec61[i])) + (fRec124[i] * fZec59[i])) + (fRec125[i] * fZec57[i])) + (fRec126[i] * fZec55[i])) + (fRec127[i] * fZec53[i])) + (fRec128[i] * fZec51[i])) + (fRec129[i] * fZec49[i]));
			}
			
			// LOOP 0x55f8530e1240
			// pre processing
			for (int i=0; i<4; i++) fYec87_tmp[i]=fYec87_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec87[i] = log10f(sqrtf((fConst28 * fRec285[i])));
			}
			// post processing
			for (int i=0; i<4; i++) fYec87_perm[i]=fYec87_tmp[count+i];
			
			// LOOP 0x55f8531bfbc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec209[i] = (fZec207[i] + (0.002f * (fRec289[i] * fSlow82)));
			}
			
			// LOOP 0x55f8532053e0
			// exec code
			for (int i=0; i<count; i++) {
				fZec213[i] = (fZec211[i] + (0.002f * (fRec292[i] * fSlow82)));
			}
			
			// LOOP 0x55f8533a8c30
			// exec code
			for (int i=0; i<count; i++) {
				fZec217[i] = (fZec215[i] + (0.002f * (fRec295[i] * fSlow82)));
			}
			
			// LOOP 0x55f853426830
			// exec code
			for (int i=0; i<count; i++) {
				fZec218[i] = (fZec200[i] + (0.002f * (fRec280[i] * fSlow82)));
			}
			
			// SECTION : 30
			// LOOP 0x55f852e0d0d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec176[i] = (0.25f * fZec175[i]);
			}
			
			// LOOP 0x55f852e14970
			// exec code
			for (int i=0; i<count; i++) {
				fZec179[i] = ((fSlow80 * (fRec151[i] + (fRec147[i] + (fRec143[i] + (fRec139[i] + (fRec135[i] + (fRec164[i] + (fRec161[i] + (fRec158[i] + (fRec155[i] + (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec167[i] + fRec170[i]))))))))))))))))) + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec125[i] + (fRec124[i] + (fRec123[i] + fZec178[i]))))))));
			}
			
			// LOOP 0x55f8530e1120
			// exec code
			for (int i=0; i<count; i++) {
				fZec205[i] = (2e+01f * fYec87[i]);
			}
			
			// LOOP 0x55f8530e27d0
			// exec code
			for (int i=0; i<count; i++) {
				fZec206[i] = (2e+01f * fYec87[i-1]);
			}
			
			// LOOP 0x55f8530f6ea0
			// pre processing
			for (int i=0; i<4; i++) fYec89_tmp[i]=fYec89_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec89[i] = (fSlow84 * fZec209[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec89_perm[i]=fYec89_tmp[count+i];
			
			// LOOP 0x55f853205500
			// pre processing
			for (int i=0; i<4; i++) fYec92_tmp[i]=fYec92_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec92[i] = (fSlow87 * fZec213[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec92_perm[i]=fYec92_tmp[count+i];
			
			// LOOP 0x55f85330a6d0
			// pre processing
			for (int i=0; i<4; i++) fYec95_tmp[i]=fYec95_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec95[i] = (fSlow90 * fZec217[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec95_perm[i]=fYec95_tmp[count+i];
			
			// LOOP 0x55f853426710
			// pre processing
			for (int i=0; i<4; i++) fYec97_tmp[i]=fYec97_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec97[i] = (fSlow93 * fZec218[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec97_perm[i]=fYec97_tmp[count+i];
			
			// SECTION : 31
			// LOOP 0x55f852e0cfb0
			// pre processing
			for (int i=0; i<4; i++) fYec66_tmp[i]=fYec66_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec66[i] = (fZec179[i] - fZec176[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec66_perm[i]=fYec66_tmp[count+i];
			
			// LOOP 0x55f853026990
			// pre processing
			for (int i=0; i<4; i++) fRec282_tmp[i]=fRec282_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec282[i] = min(1.0f, max(0.0f, ((fRec282[i-1] + ((int((fZec205[i] > -25.0f)))?((int((fZec206[i] < -25.0f)))?1.0f:0.0f):0.0f)) - ((int((fZec206[i] > -35.0f)))?((int((fZec205[i] < -35.0f)))?1.0f:0.0f):0.0f))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec282_perm[i]=fRec282_tmp[count+i];
			
			// LOOP 0x55f8530f0860
			// pre processing
			for (int i=0; i<4; i++) fRec288_tmp[i]=fRec288_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec288[i] = (fConst31 * (fRec288[i-1] + (fYec89[i] - fYec89[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec288_perm[i]=fRec288_tmp[count+i];
			
			// LOOP 0x55f8531fd800
			// pre processing
			for (int i=0; i<4; i++) fRec291_tmp[i]=fRec291_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec291[i] = (fConst33 * (fRec291[i-1] + (fYec92[i] - fYec92[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec291_perm[i]=fRec291_tmp[count+i];
			
			// LOOP 0x55f853302640
			// pre processing
			for (int i=0; i<4; i++) fRec294_tmp[i]=fRec294_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec294[i] = (fConst35 * (fRec294[i-1] + (fYec95[i] - fYec95[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec294_perm[i]=fRec294_tmp[count+i];
			
			// LOOP 0x55f8534263d0
			// pre processing
			for (int i=0; i<4; i++) fRec297_tmp[i]=fRec297_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec297[i] = (fConst37 * (fRec297[i-1] + (fYec97[i] - fYec97[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec297_perm[i]=fRec297_tmp[count+i];
			
			// LOOP 0x55f853495590
			// exec code
			for (int i=0; i<count; i++) {
				fZec219[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow80 * (((((((((((((((((fRec167[i] * fZec122[i]) + (fRec170[i] * fZec121[i])) + (fRec173[i] * fZec120[i])) + (fRec176[i] * fZec119[i])) + (fRec178[i] * fZec118[i])) + (fRec180[i] * fZec117[i])) + (fRec182[i] * fZec116[i])) + (fRec184[i] * fZec115[i])) + (fRec1[i] * fZec114[i])) + (fRec8[i] * fZec113[i])) + (fRec14[i] * fZec112[i])) + (fRec20[i] * fZec111[i])) + (fRec26[i] * fZec110[i])) + (fRec32[i] * fZec109[i])) + (fRec38[i] * fZec108[i])) + (fRec44[i] * fZec107[i])) + (fRec50[i] * fZec106[i]))) + (fRec56[i] * fZec105[i])) + (fRec62[i] * fZec104[i])) + (fRec68[i] * fZec103[i])) + (fRec74[i] * fZec102[i])) + (fRec76[i] * fZec101[i])) + (fRec78[i] * fZec100[i])) + (fRec80[i] * fZec99[i])) + (fRec82[i] * fZec98[i])) + (fRec84[i] * fZec97[i])) + (fRec86[i] * fZec96[i])) + (fRec88[i] * fZec95[i])) + (fRec90[i] * fZec94[i])) + (fRec92[i] * fZec93[i])) + (fRec94[i] * fZec92[i])) + (fRec96[i] * fZec91[i])) + (fRec98[i] * fZec90[i])) + (fRec100[i] * fZec89[i])) + (fRec102[i] * fZec88[i])) + (fRec104[i] * fZec87[i])) + (fRec106[i] * fZec86[i])) + (fRec108[i] * fZec85[i])) + (fRec110[i] * fZec84[i])) + (fRec112[i] * fZec83[i])) + (fRec114[i] * fZec82[i])) + (fRec116[i] * fZec81[i])) + (fRec118[i] * fZec80[i])) + (fRec120[i] * fZec79[i])) + (fRec122[i] * fZec78[i])) + (fRec123[i] * fZec77[i])) + (fRec124[i] * fZec76[i])) + (fRec125[i] * fZec75[i])) + (fRec126[i] * fZec73[i])) + (fRec127[i] * fZec71[i])) + (fRec128[i] * fZec69[i])) + (fRec129[i] * fZec67[i])) + (fRec130[i] * fZec65[i])) + (fRec131[i] * fZec63[i])) + (fRec132[i] * fZec61[i])) + (fRec133[i] * fZec59[i])) + (fRec122[i] * fZec57[i])) + (fRec123[i] * fZec55[i])) + (fRec124[i] * fZec53[i])) + (fRec125[i] * fZec51[i])) + (fRec126[i] * fZec49[i])));
			}
			
			// LOOP 0x55f85349c010
			// exec code
			for (int i=0; i<count; i++) {
				fZec220[i] = ((fRec126[i] + (fRec124[i] + fRec125[i])) + (2 * ((fZec128[i] + (fZec129[i] + (fZec130[i] + (fZec131[i] + (fZec132[i] + (fZec133[i] + (fZec134[i] + (fZec135[i] + (fZec136[i] + (fZec137[i] + (fRec123[i] + (fRec122[i] + (fZec138[i] + (fZec139[i] + (fZec140[i] + (fZec141[i] + (fZec142[i] + (fZec143[i] + (fZec144[i] + (fZec145[i] + (fZec146[i] + (fZec147[i] + (fZec148[i] + (fZec149[i] + (fZec150[i] + (fZec151[i] + (fZec152[i] + (fZec153[i] + (fZec154[i] + (fZec155[i] + (fZec156[i] + ((((((((0.5f * fRec56[i]) + (0.5f * fRec62[i])) + (0.5f * fRec68[i])) + (0.5f * fRec74[i])) + (0.5f * fRec76[i])) + (0.5f * fRec78[i])) + (0.5f * fRec80[i])) + (0.5f * fRec82[i]))))))))))))))))))))))))))))))))) + (fSlow81 * (fRec184[i] + (fRec182[i] + (fRec180[i] + (fRec178[i] + (fRec176[i] + (fRec173[i] + (fRec170[i] + (fRec167[i] + fZec125[i]))))))))))));
			}
			
			// SECTION : 32
			// LOOP 0x55f852e0ca50
			// pre processing
			for (int i=0; i<4; i++) fRec186_tmp[i]=fRec186_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec186[i] = (fConst14 * (fRec186[i-1] + (fZec179[i] - (fZec176[i] + fYec66[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec186_perm[i]=fRec186_tmp[count+i];
			
			// LOOP 0x55f852f97080
			// pre processing
			for (int i=0; i<4; i++) fRec281_tmp[i]=fRec281_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec281[i] = ((fConst30 * fRec281[i-1]) + (fConst29 * ((int((fRec282[i] > 0.5f)))?((int((fRec282[i-1] < 0.5f)))?1.0f:0.0f):0.0f)));
			}
			// post processing
			for (int i=0; i<4; i++) fRec281_perm[i]=fRec281_tmp[count+i];
			
			// LOOP 0x55f8531bfaa0
			// pre processing
			for (int i=0; i<4; i++) fYec90_tmp[i]=fYec90_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec90[i] = ((0.5416666666666667f * fRec288[i]) + (fSlow85 * fZec209[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec90_perm[i]=fYec90_tmp[count+i];
			
			// LOOP 0x55f8532f8e20
			// pre processing
			for (int i=0; i<4; i++) fYec93_tmp[i]=fYec93_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec93[i] = ((0.5416666666666667f * fRec291[i]) + (fSlow88 * fZec213[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec93_perm[i]=fYec93_tmp[count+i];
			
			// LOOP 0x55f8533a8b10
			// pre processing
			for (int i=0; i<4; i++) fYec96_tmp[i]=fYec96_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec96[i] = ((0.5416666666666667f * fRec294[i]) + (fSlow91 * fZec217[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec96_perm[i]=fYec96_tmp[count+i];
			
			// LOOP 0x55f853434570
			// pre processing
			for (int i=0; i<4; i++) fYec98_tmp[i]=fYec98_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec98[i] = ((0.5416666666666667f * fRec297[i]) + (fSlow94 * fZec218[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec98_perm[i]=fYec98_tmp[count+i];
			
			// LOOP 0x55f85343eeb0
			// pre processing
			for (int i=0; i<4; i++) fRec299_tmp[i]=fRec299_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec299[i] = (fRec299[i-1] + (fConst11 * (fYec89[i] - fRec299[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec299_perm[i]=fRec299_tmp[count+i];
			
			// LOOP 0x55f85344dfe0
			// pre processing
			for (int i=0; i<4; i++) fRec301_tmp[i]=fRec301_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec301[i] = (fRec301[i-1] + (fConst8 * (fYec92[i] - fRec301[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec301_perm[i]=fRec301_tmp[count+i];
			
			// LOOP 0x55f85345eff0
			// pre processing
			for (int i=0; i<4; i++) fRec303_tmp[i]=fRec303_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec303[i] = (fRec303[i-1] + (fConst3 * (fYec95[i] - fRec303[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec303_perm[i]=fRec303_tmp[count+i];
			
			// LOOP 0x55f853471040
			// pre processing
			for (int i=0; i<4; i++) fRec305_tmp[i]=fRec305_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec305[i] = (fRec305[i-1] + (fConst19 * (fYec97[i] - fRec305[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec305_perm[i]=fRec305_tmp[count+i];
			
			// LOOP 0x55f853495470
			// pre processing
			for (int i=0; i<4; i++) fYec99_tmp[i]=fYec99_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec99[i] = (fZec220[i] - fZec219[i]);
			}
			// post processing
			for (int i=0; i<4; i++) fYec99_perm[i]=fYec99_tmp[count+i];
			
			// SECTION : 33
			// LOOP 0x55f852c1b040
			// pre processing
			for (int i=0; i<4; i++) fRec0_tmp[i]=fRec0_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec0[i] = ((0.98f * fRec0[i-1]) + fSlow0);
			}
			// post processing
			for (int i=0; i<4; i++) fRec0_perm[i]=fRec0_tmp[count+i];
			
			// LOOP 0x55f8530f0480
			// pre processing
			for (int i=0; i<4; i++) fRec287_tmp[i]=fRec287_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec287[i] = (fConst32 * (fRec287[i-1] + (fYec90[i] - fYec90[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec287_perm[i]=fRec287_tmp[count+i];
			
			// LOOP 0x55f8531fd420
			// pre processing
			for (int i=0; i<4; i++) fRec290_tmp[i]=fRec290_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec290[i] = (fConst34 * (fRec290[i-1] + (fYec93[i] - fYec93[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec290_perm[i]=fRec290_tmp[count+i];
			
			// LOOP 0x55f853302260
			// pre processing
			for (int i=0; i<4; i++) fRec293_tmp[i]=fRec293_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec293[i] = (fConst36 * (fRec293[i-1] + (fYec96[i] - fYec96[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec293_perm[i]=fRec293_tmp[count+i];
			
			// LOOP 0x55f853425ff0
			// pre processing
			for (int i=0; i<4; i++) fRec296_tmp[i]=fRec296_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec296[i] = (fConst38 * (fRec296[i-1] + (fYec98[i] - fYec98[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec296_perm[i]=fRec296_tmp[count+i];
			
			// LOOP 0x55f85343eb10
			// pre processing
			for (int i=0; i<4; i++) fRec298_tmp[i]=fRec298_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec298[i] = (fRec298[i-1] + (fConst11 * (fRec299[i] - fRec298[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec298_perm[i]=fRec298_tmp[count+i];
			
			// LOOP 0x55f85344dc40
			// pre processing
			for (int i=0; i<4; i++) fRec300_tmp[i]=fRec300_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec300[i] = (fRec300[i-1] + (fConst8 * (fRec301[i] - fRec300[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec300_perm[i]=fRec300_tmp[count+i];
			
			// LOOP 0x55f85345ec50
			// pre processing
			for (int i=0; i<4; i++) fRec302_tmp[i]=fRec302_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec302[i] = (fRec302[i-1] + (fConst3 * (fRec303[i] - fRec302[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec302_perm[i]=fRec302_tmp[count+i];
			
			// LOOP 0x55f853470ca0
			// pre processing
			for (int i=0; i<4; i++) fRec304_tmp[i]=fRec304_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec304[i] = (fRec304[i-1] + (fConst19 * (fRec305[i] - fRec304[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec304_perm[i]=fRec304_tmp[count+i];
			
			// LOOP 0x55f853483bf0
			// pre processing
			for (int i=0; i<4; i++) fRec306_tmp[i]=fRec306_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec306[i] = (fRec306[i-1] + (fConst39 * ((fSlow79 * ((fSlow98 * ((0.25f * fZec214[i]) + (0.125f * fZec210[i]))) + (fSlow96 * (((0.25f * fZec199[i]) + (0.125f * fZec214[i])) + (0.0625f * fZec210[i]))))) - fRec306[i-1])));
			}
			// post processing
			for (int i=0; i<4; i++) fRec306_perm[i]=fRec306_tmp[count+i];
			
			// LOOP 0x55f853491e30
			// pre processing
			for (int i=0; i<4; i++) fRec307_tmp[i]=fRec307_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec307[i] = ((0.98f * fRec307[i-1]) + fSlow99);
			}
			// post processing
			for (int i=0; i<4; i++) fRec307_perm[i]=fRec307_tmp[count+i];
			
			// LOOP 0x55f8534950f0
			// pre processing
			for (int i=0; i<4; i++) fRec308_tmp[i]=fRec308_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fRec308[i] = (fConst14 * (fRec308[i-1] + (fZec220[i] - (fZec219[i] + fYec99[i-1]))));
			}
			// post processing
			for (int i=0; i<4; i++) fRec308_perm[i]=fRec308_tmp[count+i];
			
			// LOOP 0x55f8534a7ea0
			// exec code
			for (int i=0; i<count; i++) {
				fZec222[i] = (fZec123[i] + fZec202[i]);
			}
			
			// LOOP 0x55f8534a7fc0
			// exec code
			for (int i=0; i<count; i++) {
				fZec221[i] = (fRec186[i] * fSlow82);
			}
			
			// LOOP 0x55f8535a8c40
			// pre processing
			for (int i=0; i<4; i++) fYec100_tmp[i]=fYec100_perm[i];
			// exec code
			for (int i=0; i<count; i++) {
				fYec100[i] = min(1.0f, (fConst40 * fRec281[i]));
			}
			// post processing
			for (int i=0; i<4; i++) fYec100_perm[i]=fYec100_tmp[count+i];
			
			// SECTION : 34
			// LOOP 0x55f853552590
			// exec code
			for (int i=0; i<count; i++) {
				fZec223[i] = ((0.001f + (0.05f * fRec0[i])) * ((fSlow121 * (((0.25f * ((fZec222[i] + fZec175[i]) + (0.008f * fZec221[i]))) + (0.5f * fZec218[i])) * max(fSlow120, (0.25f * (((fYec100[i] + fYec100[i-2]) + fYec100[i-3]) + fYec100[i-4]))))) + ((fSlow119 * ((fSlow118 * (((fRec287[i] + fRec290[i]) + fRec293[i]) + fRec296[i])) + (fSlow117 * (((fRec298[i] + fRec300[i]) + fRec302[i]) + fRec304[i])))) + ((fRec306[i] * (0.5f + (4.5f * fRec307[i]))) + (fSlow115 * (((((((fSlow113 * fZec222[i]) + (fSlow111 * (fZec219[i] + (0.002f * (fRec308[i] * fSlow82))))) + (fSlow109 * fZec209[i])) + (fSlow107 * (fZec176[i] + (0.002f * fZec221[i])))) + (fSlow105 * fZec213[i])) + (fSlow103 * fZec217[i])) + (fSlow101 * fZec218[i])))))));
			}
			
			// SECTION : 35
			// LOOP 0x55f85219f2c0
			// exec code
			for (int i=0; i<count; i++) {
				output0[i] = (FAUSTFLOAT)fZec223[i];
			}
			
			// SECTION : 36
			// LOOP 0x55f8535a9090
			// exec code
			for (int i=0; i<count; i++) {
				output1[i] = (FAUSTFLOAT)fZec223[i];
			}
			
		}
	}
};


