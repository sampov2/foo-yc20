/* ------------------------------------------------------------
name: "standalone"
Code generated with Faust 2.72.14 (https://faust.grame.fr)
Compilation options: -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0 -vec -lv 0 -vs 32
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

/* link with : "" */
#include "polyblep.cpp"
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

static float mydsp_faustpower2_f(float value) {
	return value * value;
}
static float mydsp_faustpower3_f(float value) {
	return value * value * value;
}

class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT fHslider0;
	float fRec0_perm[4];
	FAUSTFLOAT fHslider1;
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fRec11_perm[4];
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	float fConst2;
	float fRec10_perm[4];
	int iRec12_perm[4];
	float fYec0_perm[4];
	int iRec9_perm[4];
	float fYec1_perm[4];
	float fYec2_perm[4];
	float fConst3;
	float fRec8_perm[4];
	float fConst4;
	float fConst5;
	float fRec7_perm[4];
	float fConst6;
	float fRec16_perm[4];
	int iRec17_perm[4];
	float fYec3_perm[4];
	int iRec15_perm[4];
	float fYec4_perm[4];
	float fYec5_perm[4];
	float fConst7;
	float fRec14_perm[4];
	float fRec13_perm[4];
	float fConst8;
	float fRec21_perm[4];
	int iRec22_perm[4];
	float fYec6_perm[4];
	int iRec20_perm[4];
	float fYec7_perm[4];
	float fYec8_perm[4];
	float fRec19_perm[4];
	float fRec18_perm[4];
	float fConst9;
	float fRec26_perm[4];
	int iRec27_perm[4];
	float fYec9_perm[4];
	int iRec25_perm[4];
	float fYec10_perm[4];
	float fYec11_perm[4];
	float fRec24_perm[4];
	float fRec23_perm[4];
	float fConst10;
	float fRec31_perm[4];
	int iRec32_perm[4];
	float fYec12_perm[4];
	int iRec30_perm[4];
	float fYec13_perm[4];
	float fYec14_perm[4];
	float fRec29_perm[4];
	float fRec28_perm[4];
	float fConst11;
	float fRec37_perm[4];
	int iRec38_perm[4];
	float fYec15_perm[4];
	int iRec36_perm[4];
	float fYec16_perm[4];
	int iRec35_perm[4];
	float fYec17_perm[4];
	float fYec18_perm[4];
	float fConst12;
	float fRec34_perm[4];
	float fRec33_perm[4];
	float fConst13;
	float fRec43_perm[4];
	int iRec44_perm[4];
	float fYec19_perm[4];
	int iRec42_perm[4];
	float fYec20_perm[4];
	int iRec41_perm[4];
	float fYec21_perm[4];
	float fYec22_perm[4];
	float fRec40_perm[4];
	float fRec39_perm[4];
	float fConst14;
	float fRec49_perm[4];
	int iRec50_perm[4];
	float fYec23_perm[4];
	int iRec48_perm[4];
	float fYec24_perm[4];
	int iRec47_perm[4];
	float fYec25_perm[4];
	float fYec26_perm[4];
	float fRec46_perm[4];
	float fRec45_perm[4];
	float fConst15;
	float fRec55_perm[4];
	int iRec56_perm[4];
	float fYec27_perm[4];
	int iRec54_perm[4];
	float fYec28_perm[4];
	int iRec53_perm[4];
	float fYec29_perm[4];
	float fYec30_perm[4];
	float fRec52_perm[4];
	float fRec51_perm[4];
	float fConst16;
	float fRec61_perm[4];
	int iRec62_perm[4];
	float fYec31_perm[4];
	int iRec60_perm[4];
	float fYec32_perm[4];
	int iRec59_perm[4];
	float fYec33_perm[4];
	float fYec34_perm[4];
	float fConst17;
	float fRec58_perm[4];
	float fRec57_perm[4];
	float fConst18;
	float fRec67_perm[4];
	int iRec68_perm[4];
	float fYec35_perm[4];
	int iRec66_perm[4];
	float fYec36_perm[4];
	int iRec65_perm[4];
	float fYec37_perm[4];
	float fYec38_perm[4];
	float fRec64_perm[4];
	float fRec63_perm[4];
	float fConst19;
	float fRec73_perm[4];
	int iRec74_perm[4];
	float fYec39_perm[4];
	int iRec72_perm[4];
	float fYec40_perm[4];
	int iRec71_perm[4];
	float fYec41_perm[4];
	float fYec42_perm[4];
	float fRec70_perm[4];
	float fRec69_perm[4];
	int iRec77_perm[4];
	float fYec43_perm[4];
	float fYec44_perm[4];
	float fRec76_perm[4];
	float fRec75_perm[4];
	int iRec80_perm[4];
	float fYec45_perm[4];
	float fYec46_perm[4];
	float fConst20;
	float fRec79_perm[4];
	float fRec78_perm[4];
	int iRec83_perm[4];
	float fYec47_perm[4];
	float fYec48_perm[4];
	float fRec82_perm[4];
	float fRec81_perm[4];
	int iRec86_perm[4];
	float fYec49_perm[4];
	float fYec50_perm[4];
	float fRec85_perm[4];
	float fRec84_perm[4];
	int iRec89_perm[4];
	float fYec51_perm[4];
	float fYec52_perm[4];
	float fRec88_perm[4];
	float fRec87_perm[4];
	float fYec53_perm[4];
	float fYec54_perm[4];
	float fConst21;
	float fRec90_perm[4];
	float fYec55_perm[4];
	float fConst22;
	float fRec92_perm[4];
	float fRec91_perm[4];
	float fYec56_perm[4];
	float fRec94_perm[4];
	float fRec93_perm[4];
	float fYec57_perm[4];
	float fRec96_perm[4];
	float fRec95_perm[4];
	float fYec58_perm[4];
	float fRec98_perm[4];
	float fRec97_perm[4];
	float fYec59_perm[4];
	float fConst23;
	float fRec100_perm[4];
	float fRec99_perm[4];
	float fYec60_perm[4];
	float fRec102_perm[4];
	float fRec101_perm[4];
	float fYec61_perm[4];
	float fRec104_perm[4];
	float fRec103_perm[4];
	float fYec62_perm[4];
	float fRec106_perm[4];
	float fRec105_perm[4];
	float fYec63_perm[4];
	float fConst24;
	float fRec108_perm[4];
	float fRec107_perm[4];
	float fYec64_perm[4];
	float fRec110_perm[4];
	float fRec109_perm[4];
	float fYec65_perm[4];
	float fRec112_perm[4];
	float fRec111_perm[4];
	float fYec66_perm[4];
	float fRec114_perm[4];
	float fRec113_perm[4];
	float fYec67_perm[4];
	float fConst25;
	float fRec116_perm[4];
	float fRec115_perm[4];
	float fYec68_perm[4];
	float fRec118_perm[4];
	float fRec117_perm[4];
	float fYec69_perm[4];
	float fRec120_perm[4];
	float fRec119_perm[4];
	float fYec70_perm[4];
	float fRec122_perm[4];
	float fRec121_perm[4];
	float fYec71_perm[4];
	float fRec124_perm[4];
	float fRec123_perm[4];
	float fYec72_perm[4];
	float fRec126_perm[4];
	float fRec125_perm[4];
	float fYec73_perm[4];
	float fRec128_perm[4];
	float fRec127_perm[4];
	float fYec74_perm[4];
	float fYec75_perm[4];
	float fRec129_perm[4];
	float fYec76_perm[4];
	float fYec77_perm[4];
	float fRec130_perm[4];
	float fYec78_perm[4];
	float fYec79_perm[4];
	float fRec131_perm[4];
	float fYec80_perm[4];
	float fYec81_perm[4];
	float fRec132_perm[4];
	float fYec82_perm[4];
	float fYec83_perm[4];
	float fRec133_perm[4];
	float fYec84_perm[4];
	float fYec85_perm[4];
	float fRec134_perm[4];
	float fYec86_perm[4];
	float fYec87_perm[4];
	float fRec135_perm[4];
	float fYec88_perm[4];
	float fYec89_perm[4];
	float fRec136_perm[4];
	float fYec90_perm[4];
	float fYec91_perm[4];
	float fRec137_perm[4];
	float fYec92_perm[4];
	float fYec93_perm[4];
	float fRec138_perm[4];
	float fYec94_perm[4];
	float fYec95_perm[4];
	float fRec139_perm[4];
	FAUSTFLOAT fButton0;
	float fVec0_perm[4];
	FAUSTFLOAT fButton1;
	float fVec1_perm[4];
	FAUSTFLOAT fButton2;
	float fVec2_perm[4];
	FAUSTFLOAT fButton3;
	float fVec3_perm[4];
	FAUSTFLOAT fButton4;
	float fVec4_perm[4];
	FAUSTFLOAT fButton5;
	float fVec5_perm[4];
	FAUSTFLOAT fButton6;
	float fVec6_perm[4];
	FAUSTFLOAT fButton7;
	float fVec7_perm[4];
	FAUSTFLOAT fButton8;
	float fVec8_perm[4];
	FAUSTFLOAT fButton9;
	float fVec9_perm[4];
	FAUSTFLOAT fButton10;
	float fVec10_perm[4];
	FAUSTFLOAT fButton11;
	float fVec11_perm[4];
	FAUSTFLOAT fButton12;
	float fVec12_perm[4];
	FAUSTFLOAT fButton13;
	float fVec13_perm[4];
	FAUSTFLOAT fButton14;
	float fVec14_perm[4];
	FAUSTFLOAT fButton15;
	float fVec15_perm[4];
	FAUSTFLOAT fButton16;
	float fVec16_perm[4];
	FAUSTFLOAT fButton17;
	float fVec17_perm[4];
	FAUSTFLOAT fButton18;
	float fVec18_perm[4];
	FAUSTFLOAT fButton19;
	float fVec19_perm[4];
	FAUSTFLOAT fButton20;
	float fVec20_perm[4];
	FAUSTFLOAT fButton21;
	float fVec21_perm[4];
	FAUSTFLOAT fButton22;
	float fVec22_perm[4];
	FAUSTFLOAT fButton23;
	float fVec23_perm[4];
	FAUSTFLOAT fButton24;
	float fVec24_perm[4];
	FAUSTFLOAT fButton25;
	float fVec25_perm[4];
	FAUSTFLOAT fButton26;
	float fVec26_perm[4];
	FAUSTFLOAT fButton27;
	float fVec27_perm[4];
	FAUSTFLOAT fButton28;
	float fVec28_perm[4];
	FAUSTFLOAT fButton29;
	float fVec29_perm[4];
	FAUSTFLOAT fButton30;
	float fVec30_perm[4];
	FAUSTFLOAT fButton31;
	float fVec31_perm[4];
	FAUSTFLOAT fButton32;
	float fVec32_perm[4];
	FAUSTFLOAT fButton33;
	float fVec33_perm[4];
	FAUSTFLOAT fButton34;
	float fVec34_perm[4];
	FAUSTFLOAT fButton35;
	float fVec35_perm[4];
	FAUSTFLOAT fButton36;
	float fVec36_perm[4];
	FAUSTFLOAT fButton37;
	float fVec37_perm[4];
	FAUSTFLOAT fButton38;
	float fVec38_perm[4];
	FAUSTFLOAT fButton39;
	float fVec39_perm[4];
	FAUSTFLOAT fButton40;
	float fVec40_perm[4];
	FAUSTFLOAT fButton41;
	float fVec41_perm[4];
	FAUSTFLOAT fButton42;
	float fVec42_perm[4];
	FAUSTFLOAT fButton43;
	float fVec43_perm[4];
	FAUSTFLOAT fButton44;
	float fVec44_perm[4];
	FAUSTFLOAT fButton45;
	float fVec45_perm[4];
	FAUSTFLOAT fButton46;
	float fVec46_perm[4];
	FAUSTFLOAT fButton47;
	float fVec47_perm[4];
	FAUSTFLOAT fButton48;
	float fVec48_perm[4];
	FAUSTFLOAT fButton49;
	float fVec49_perm[4];
	FAUSTFLOAT fButton50;
	float fVec50_perm[4];
	FAUSTFLOAT fButton51;
	float fVec51_perm[4];
	FAUSTFLOAT fButton52;
	float fVec52_perm[4];
	FAUSTFLOAT fButton53;
	float fVec53_perm[4];
	FAUSTFLOAT fButton54;
	float fVec54_perm[4];
	FAUSTFLOAT fButton55;
	float fVec55_perm[4];
	FAUSTFLOAT fButton56;
	float fVec56_perm[4];
	FAUSTFLOAT fButton57;
	float fVec57_perm[4];
	FAUSTFLOAT fButton58;
	float fVec58_perm[4];
	FAUSTFLOAT fButton59;
	float fVec59_perm[4];
	FAUSTFLOAT fButton60;
	float fVec60_perm[4];
	FAUSTFLOAT fHslider5;
	float fYec96_perm[4];
	float fConst26;
	float fRec6_perm[4];
	int iRec140_perm[4];
	int iConst27;
	float fRec3_perm[4];
	int iRec4_perm[4];
	float fRec5_perm[4];
	float fConst28;
	float fYec97_perm[4];
	float fRec2_perm[4];
	float fConst29;
	float fConst30;
	float fRec1_perm[4];
	int iRec145_perm[4];
	float fYec98_perm[4];
	int iRec144_perm[4];
	float fYec99_perm[4];
	float fYec100_perm[4];
	float fConst31;
	float fRec143_perm[4];
	float fConst32;
	float fRec142_perm[4];
	int iRec149_perm[4];
	float fYec101_perm[4];
	int iRec148_perm[4];
	float fYec102_perm[4];
	float fYec103_perm[4];
	float fRec147_perm[4];
	float fRec146_perm[4];
	int iRec153_perm[4];
	float fYec104_perm[4];
	int iRec152_perm[4];
	float fYec105_perm[4];
	float fYec106_perm[4];
	float fRec151_perm[4];
	float fRec150_perm[4];
	int iRec157_perm[4];
	float fYec107_perm[4];
	int iRec156_perm[4];
	float fYec108_perm[4];
	float fYec109_perm[4];
	float fRec155_perm[4];
	float fRec154_perm[4];
	int iRec161_perm[4];
	float fYec110_perm[4];
	int iRec160_perm[4];
	float fYec111_perm[4];
	float fYec112_perm[4];
	float fConst33;
	float fRec159_perm[4];
	float fRec158_perm[4];
	int iRec164_perm[4];
	float fYec113_perm[4];
	float fYec114_perm[4];
	float fConst34;
	float fRec163_perm[4];
	float fRec162_perm[4];
	int iRec167_perm[4];
	float fYec115_perm[4];
	float fYec116_perm[4];
	float fRec166_perm[4];
	float fRec165_perm[4];
	int iRec170_perm[4];
	float fYec117_perm[4];
	float fYec118_perm[4];
	float fRec169_perm[4];
	float fRec168_perm[4];
	int iRec173_perm[4];
	float fYec119_perm[4];
	float fYec120_perm[4];
	float fRec172_perm[4];
	float fRec171_perm[4];
	float fYec121_perm[4];
	float fConst35;
	float fRec175_perm[4];
	float fRec174_perm[4];
	float fYec122_perm[4];
	float fRec177_perm[4];
	float fRec176_perm[4];
	float fYec123_perm[4];
	float fRec179_perm[4];
	float fRec178_perm[4];
	float fYec124_perm[4];
	float fRec181_perm[4];
	float fRec180_perm[4];
	float fYec125_perm[4];
	float fConst36;
	float fRec183_perm[4];
	float fRec182_perm[4];
	int iRec186_perm[4];
	float fYec126_perm[4];
	float fYec127_perm[4];
	float fRec185_perm[4];
	float fRec184_perm[4];
	int iRec189_perm[4];
	float fYec128_perm[4];
	float fYec129_perm[4];
	float fRec188_perm[4];
	float fRec187_perm[4];
	int iRec192_perm[4];
	float fYec130_perm[4];
	float fYec131_perm[4];
	float fRec191_perm[4];
	float fRec190_perm[4];
	float fYec132_perm[4];
	float fRec141_perm[4];
	int iRec197_perm[4];
	float fYec133_perm[4];
	int iRec196_perm[4];
	float fYec134_perm[4];
	int iRec195_perm[4];
	float fYec135_perm[4];
	float fYec136_perm[4];
	float fConst37;
	float fRec194_perm[4];
	float fConst38;
	float fRec193_perm[4];
	int iRec202_perm[4];
	float fYec137_perm[4];
	int iRec201_perm[4];
	float fYec138_perm[4];
	int iRec200_perm[4];
	float fYec139_perm[4];
	float fYec140_perm[4];
	float fRec199_perm[4];
	float fRec198_perm[4];
	int iRec207_perm[4];
	float fYec141_perm[4];
	int iRec206_perm[4];
	float fYec142_perm[4];
	int iRec205_perm[4];
	float fYec143_perm[4];
	float fYec144_perm[4];
	float fRec204_perm[4];
	float fRec203_perm[4];
	int iRec212_perm[4];
	float fYec145_perm[4];
	int iRec211_perm[4];
	float fYec146_perm[4];
	int iRec210_perm[4];
	float fYec147_perm[4];
	float fYec148_perm[4];
	float fRec209_perm[4];
	float fRec208_perm[4];
	int iRec217_perm[4];
	float fYec149_perm[4];
	int iRec216_perm[4];
	float fYec150_perm[4];
	int iRec215_perm[4];
	float fYec151_perm[4];
	float fYec152_perm[4];
	float fRec214_perm[4];
	float fRec213_perm[4];
	int iRec222_perm[4];
	float fYec153_perm[4];
	int iRec221_perm[4];
	float fYec154_perm[4];
	int iRec220_perm[4];
	float fYec155_perm[4];
	float fYec156_perm[4];
	float fRec219_perm[4];
	float fRec218_perm[4];
	int iRec227_perm[4];
	float fYec157_perm[4];
	int iRec226_perm[4];
	float fYec158_perm[4];
	int iRec225_perm[4];
	float fYec159_perm[4];
	float fYec160_perm[4];
	float fRec224_perm[4];
	float fRec223_perm[4];
	int iRec231_perm[4];
	float fYec161_perm[4];
	int iRec230_perm[4];
	float fYec162_perm[4];
	float fYec163_perm[4];
	float fRec229_perm[4];
	float fRec228_perm[4];
	int iRec235_perm[4];
	float fYec164_perm[4];
	int iRec234_perm[4];
	float fYec165_perm[4];
	float fYec166_perm[4];
	float fConst39;
	float fRec233_perm[4];
	float fRec232_perm[4];
	int iRec239_perm[4];
	float fYec167_perm[4];
	int iRec238_perm[4];
	float fYec168_perm[4];
	float fYec169_perm[4];
	float fRec237_perm[4];
	float fRec236_perm[4];
	int iRec243_perm[4];
	float fYec170_perm[4];
	int iRec242_perm[4];
	float fYec171_perm[4];
	float fYec172_perm[4];
	float fRec241_perm[4];
	float fRec240_perm[4];
	int iRec247_perm[4];
	float fYec173_perm[4];
	int iRec246_perm[4];
	float fYec174_perm[4];
	float fYec175_perm[4];
	float fRec245_perm[4];
	float fRec244_perm[4];
	float fYec176_perm[4];
	float fRec249_perm[4];
	float fConst40;
	float fRec248_perm[4];
	float fYec177_perm[4];
	float fRec251_perm[4];
	float fRec250_perm[4];
	float fYec178_perm[4];
	float fRec253_perm[4];
	float fRec252_perm[4];
	float fYec179_perm[4];
	float fRec255_perm[4];
	float fRec254_perm[4];
	float fYec180_perm[4];
	float fConst41;
	float fRec257_perm[4];
	float fRec256_perm[4];
	float fYec181_perm[4];
	float fRec259_perm[4];
	float fRec258_perm[4];
	float fYec182_perm[4];
	float fRec261_perm[4];
	float fRec260_perm[4];
	float fYec183_perm[4];
	float fRec263_perm[4];
	float fRec262_perm[4];
	float fYec184_perm[4];
	float fConst42;
	float fRec265_perm[4];
	float fRec264_perm[4];
	float fYec185_perm[4];
	float fRec267_perm[4];
	float fRec266_perm[4];
	float fYec186_perm[4];
	float fRec269_perm[4];
	float fRec268_perm[4];
	float fYec187_perm[4];
	float fRec271_perm[4];
	float fRec270_perm[4];
	float fYec188_perm[4];
	float fRec273_perm[4];
	float fRec272_perm[4];
	float fYec189_perm[4];
	float fRec275_perm[4];
	float fRec274_perm[4];
	float fYec190_perm[4];
	float fRec277_perm[4];
	float fRec276_perm[4];
	float fYec191_perm[4];
	float fRec279_perm[4];
	float fRec278_perm[4];
	float fYec192_perm[4];
	float fRec281_perm[4];
	float fRec280_perm[4];
	float fYec193_perm[4];
	float fRec283_perm[4];
	float fRec282_perm[4];
	float fYec194_perm[4];
	float fRec285_perm[4];
	float fRec284_perm[4];
	float fYec195_perm[4];
	float fRec286_perm[4];
	float fYec196_perm[4];
	float fRec287_perm[4];
	float fYec197_perm[4];
	float fRec288_perm[4];
	float fYec198_perm[4];
	float fRec289_perm[4];
	float fYec199_perm[4];
	float fRec290_perm[4];
	FAUSTFLOAT fVslider0;
	float fYec200_perm[4];
	float fConst43;
	float fRec292_perm[4];
	float fYec201_perm[4];
	float fConst44;
	float fRec291_perm[4];
	FAUSTFLOAT fVslider1;
	float fYec202_perm[4];
	float fConst45;
	float fRec294_perm[4];
	float fYec203_perm[4];
	float fConst46;
	float fRec293_perm[4];
	FAUSTFLOAT fVslider2;
	float fYec204_perm[4];
	float fConst47;
	float fRec296_perm[4];
	float fYec205_perm[4];
	float fConst48;
	float fRec295_perm[4];
	FAUSTFLOAT fVslider3;
	float fYec206_perm[4];
	float fConst49;
	float fRec298_perm[4];
	float fYec207_perm[4];
	float fConst50;
	float fRec297_perm[4];
	float fRec300_perm[4];
	float fRec299_perm[4];
	float fRec302_perm[4];
	float fRec301_perm[4];
	float fRec304_perm[4];
	float fRec303_perm[4];
	float fRec306_perm[4];
	float fRec305_perm[4];
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVslider5;
	float fConst51;
	float fRec307_perm[4];
	FAUSTFLOAT fVslider6;
	float fRec308_perm[4];
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVslider10;
	FAUSTFLOAT fVslider11;
	FAUSTFLOAT fVslider12;
	FAUSTFLOAT fVslider13;
	FAUSTFLOAT fVslider14;
	float fConst52;
	float fYec208_perm[4];
	FAUSTFLOAT fHslider7;
	
 public:
	mydsp() {}

	void metadata(Meta* m) { 
		m->declare("compile_options", "-lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0 -vec -lv 0 -vs 32");
		m->declare("filename", "standalone.dsp");
		m->declare("math.lib/author", "GRAME");
		m->declare("math.lib/copyright", "GRAME");
		m->declare("math.lib/deprecated", "This library is deprecated and is not maintained anymore. It will be removed in August 2017.");
		m->declare("math.lib/license", "LGPL with exception");
		m->declare("math.lib/name", "Math Library");
		m->declare("math.lib/version", "1.0");
		m->declare("music.lib/author", "GRAME");
		m->declare("music.lib/copyright", "GRAME");
		m->declare("music.lib/deprecated", "This library is deprecated and is not maintained anymore. It will be removed in August 2017.");
		m->declare("music.lib/license", "LGPL with exception");
		m->declare("music.lib/name", "Music Library");
		m->declare("music.lib/version", "1.0");
		m->declare("name", "standalone");
		m->declare("yc20.dsp/author", "Sampo Savolainen");
		m->declare("yc20.dsp/copyright", "(c)Sampo Savolainen 2009-2024");
		m->declare("yc20.dsp/license", "GPLv3");
		m->declare("yc20.dsp/name", "Foo YC-20 simulation");
	}

	virtual int getNumInputs() {
		return 0;
	}
	virtual int getNumOutputs() {
		return 3;
	}
	
	static void classInit(int sample_rate) {
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 1.0f / fConst0;
		fConst2 = 5274.041f / fConst0;
		fConst3 = 12195.122f / fConst0;
		fConst4 = fConst1 + 0.0073745456f;
		fConst5 = 0.0073745456f / fConst4;
		fConst6 = 4978.0317f / fConst0;
		fConst7 = 1e+04f / fConst0;
		fConst8 = 4698.636f / fConst0;
		fConst9 = 4434.922f / fConst0;
		fConst10 = 4186.0093f / fConst0;
		fConst11 = 7902.133f / fConst0;
		fConst12 = 8333.333f / fConst0;
		fConst13 = 7458.62f / fConst0;
		fConst14 = 7.04e+03f / fConst0;
		fConst15 = 6644.875f / fConst0;
		fConst16 = 6271.927f / fConst0;
		fConst17 = 5555.5557f / fConst0;
		fConst18 = 5919.9106f / fConst0;
		fConst19 = 5587.652f / fConst0;
		fConst20 = 4545.4546f / fConst0;
		fConst21 = 1.0f / fConst4;
		fConst22 = 37037.035f / fConst0;
		fConst23 = 25641.025f / fConst0;
		fConst24 = 21276.596f / fConst0;
		fConst25 = 17857.143f / fConst0;
		fConst26 = 0.0001f / (fConst1 + 0.0001f);
		iConst27 = int(0.001f * std::max<float>(2.205e+04f, std::min<float>(1.92e+05f, fConst0)));
		fConst28 = 1.0f / float(iConst27);
		fConst29 = 36.24376f / fConst0;
		fConst30 = 1.0f - fConst29;
		fConst31 = 1785.7142f / fConst0;
		fConst32 = 0.0035964532f / (fConst1 + 0.0035964532f);
		fConst33 = 1470.5883f / fConst0;
		fConst34 = 2127.6597f / fConst0;
		fConst35 = 3703.7036f / fConst0;
		fConst36 = 2564.1025f / fConst0;
		fConst37 = 666.6667f / fConst0;
		fConst38 = 0.0016849851f / (fConst1 + 0.0016849851f);
		fConst39 = 833.3333f / fConst0;
		fConst40 = 0.002230664f / (fConst1 + 0.002230664f);
		fConst41 = 1e+03f / fConst0;
		fConst42 = 1219.5122f / fConst0;
		fConst43 = 0.0001053f / (fConst1 + 0.0001053f);
		fConst44 = 5.265e-05f / (fConst1 + 5.265e-05f);
		fConst45 = 0.0001833f / (fConst1 + 0.0001833f);
		fConst46 = 9.165e-05f / (fConst1 + 9.165e-05f);
		fConst47 = 0.00039f / (fConst1 + 0.00039f);
		fConst48 = 0.000195f / (fConst1 + 0.000195f);
		fConst49 = 0.000858f / (fConst1 + 0.000858f);
		fConst50 = 0.000429f / (fConst1 + 0.000429f);
		fConst51 = 3968.254f / fConst0;
		fConst52 = 0.027590958f * fConst0;
	}
	
	virtual void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.5f);
		fHslider1 = FAUSTFLOAT(0.0f);
		fHslider2 = FAUSTFLOAT(0.0f);
		fHslider3 = FAUSTFLOAT(0.0f);
		fHslider4 = FAUSTFLOAT(0.0f);
		fButton0 = FAUSTFLOAT(0.0f);
		fButton1 = FAUSTFLOAT(0.0f);
		fButton2 = FAUSTFLOAT(0.0f);
		fButton3 = FAUSTFLOAT(0.0f);
		fButton4 = FAUSTFLOAT(0.0f);
		fButton5 = FAUSTFLOAT(0.0f);
		fButton6 = FAUSTFLOAT(0.0f);
		fButton7 = FAUSTFLOAT(0.0f);
		fButton8 = FAUSTFLOAT(0.0f);
		fButton9 = FAUSTFLOAT(0.0f);
		fButton10 = FAUSTFLOAT(0.0f);
		fButton11 = FAUSTFLOAT(0.0f);
		fButton12 = FAUSTFLOAT(0.0f);
		fButton13 = FAUSTFLOAT(0.0f);
		fButton14 = FAUSTFLOAT(0.0f);
		fButton15 = FAUSTFLOAT(0.0f);
		fButton16 = FAUSTFLOAT(0.0f);
		fButton17 = FAUSTFLOAT(0.0f);
		fButton18 = FAUSTFLOAT(0.0f);
		fButton19 = FAUSTFLOAT(0.0f);
		fButton20 = FAUSTFLOAT(0.0f);
		fButton21 = FAUSTFLOAT(0.0f);
		fButton22 = FAUSTFLOAT(0.0f);
		fButton23 = FAUSTFLOAT(0.0f);
		fButton24 = FAUSTFLOAT(0.0f);
		fButton25 = FAUSTFLOAT(0.0f);
		fButton26 = FAUSTFLOAT(0.0f);
		fButton27 = FAUSTFLOAT(0.0f);
		fButton28 = FAUSTFLOAT(0.0f);
		fButton29 = FAUSTFLOAT(0.0f);
		fButton30 = FAUSTFLOAT(0.0f);
		fButton31 = FAUSTFLOAT(0.0f);
		fButton32 = FAUSTFLOAT(0.0f);
		fButton33 = FAUSTFLOAT(0.0f);
		fButton34 = FAUSTFLOAT(0.0f);
		fButton35 = FAUSTFLOAT(0.0f);
		fButton36 = FAUSTFLOAT(0.0f);
		fButton37 = FAUSTFLOAT(0.0f);
		fButton38 = FAUSTFLOAT(0.0f);
		fButton39 = FAUSTFLOAT(0.0f);
		fButton40 = FAUSTFLOAT(0.0f);
		fButton41 = FAUSTFLOAT(0.0f);
		fButton42 = FAUSTFLOAT(0.0f);
		fButton43 = FAUSTFLOAT(0.0f);
		fButton44 = FAUSTFLOAT(0.0f);
		fButton45 = FAUSTFLOAT(0.0f);
		fButton46 = FAUSTFLOAT(0.0f);
		fButton47 = FAUSTFLOAT(0.0f);
		fButton48 = FAUSTFLOAT(0.0f);
		fButton49 = FAUSTFLOAT(0.0f);
		fButton50 = FAUSTFLOAT(0.0f);
		fButton51 = FAUSTFLOAT(0.0f);
		fButton52 = FAUSTFLOAT(0.0f);
		fButton53 = FAUSTFLOAT(0.0f);
		fButton54 = FAUSTFLOAT(0.0f);
		fButton55 = FAUSTFLOAT(0.0f);
		fButton56 = FAUSTFLOAT(0.0f);
		fButton57 = FAUSTFLOAT(0.0f);
		fButton58 = FAUSTFLOAT(0.0f);
		fButton59 = FAUSTFLOAT(0.0f);
		fButton60 = FAUSTFLOAT(0.0f);
		fHslider5 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(1.0f);
		fVslider1 = FAUSTFLOAT(1.0f);
		fVslider2 = FAUSTFLOAT(1.0f);
		fVslider3 = FAUSTFLOAT(1.0f);
		fVslider4 = FAUSTFLOAT(1.0f);
		fVslider5 = FAUSTFLOAT(1.0f);
		fVslider6 = FAUSTFLOAT(1.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fHslider6 = FAUSTFLOAT(1.0f);
		fVslider8 = FAUSTFLOAT(1.0f);
		fVslider9 = FAUSTFLOAT(0.5f);
		fVslider10 = FAUSTFLOAT(0.5f);
		fVslider11 = FAUSTFLOAT(0.5f);
		fVslider12 = FAUSTFLOAT(0.0f);
		fVslider13 = FAUSTFLOAT(1.0f);
		fVslider14 = FAUSTFLOAT(1.0f);
		fHslider7 = FAUSTFLOAT(1.0f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; l0 < 4; l0 = l0 + 1) {
			fRec0_perm[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 4; l1 = l1 + 1) {
			fRec11_perm[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 4; l2 = l2 + 1) {
			fRec10_perm[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 4; l3 = l3 + 1) {
			iRec12_perm[l3] = 0;
		}
		for (int l4 = 0; l4 < 4; l4 = l4 + 1) {
			fYec0_perm[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 4; l5 = l5 + 1) {
			iRec9_perm[l5] = 0;
		}
		for (int l6 = 0; l6 < 4; l6 = l6 + 1) {
			fYec1_perm[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 4; l7 = l7 + 1) {
			fYec2_perm[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 4; l8 = l8 + 1) {
			fRec8_perm[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 4; l9 = l9 + 1) {
			fRec7_perm[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 4; l10 = l10 + 1) {
			fRec16_perm[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 4; l11 = l11 + 1) {
			iRec17_perm[l11] = 0;
		}
		for (int l12 = 0; l12 < 4; l12 = l12 + 1) {
			fYec3_perm[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 4; l13 = l13 + 1) {
			iRec15_perm[l13] = 0;
		}
		for (int l14 = 0; l14 < 4; l14 = l14 + 1) {
			fYec4_perm[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 4; l15 = l15 + 1) {
			fYec5_perm[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 4; l16 = l16 + 1) {
			fRec14_perm[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 4; l17 = l17 + 1) {
			fRec13_perm[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 4; l18 = l18 + 1) {
			fRec21_perm[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 4; l19 = l19 + 1) {
			iRec22_perm[l19] = 0;
		}
		for (int l20 = 0; l20 < 4; l20 = l20 + 1) {
			fYec6_perm[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 4; l21 = l21 + 1) {
			iRec20_perm[l21] = 0;
		}
		for (int l22 = 0; l22 < 4; l22 = l22 + 1) {
			fYec7_perm[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 4; l23 = l23 + 1) {
			fYec8_perm[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 4; l24 = l24 + 1) {
			fRec19_perm[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 4; l25 = l25 + 1) {
			fRec18_perm[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 4; l26 = l26 + 1) {
			fRec26_perm[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 4; l27 = l27 + 1) {
			iRec27_perm[l27] = 0;
		}
		for (int l28 = 0; l28 < 4; l28 = l28 + 1) {
			fYec9_perm[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 4; l29 = l29 + 1) {
			iRec25_perm[l29] = 0;
		}
		for (int l30 = 0; l30 < 4; l30 = l30 + 1) {
			fYec10_perm[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 4; l31 = l31 + 1) {
			fYec11_perm[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 4; l32 = l32 + 1) {
			fRec24_perm[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 4; l33 = l33 + 1) {
			fRec23_perm[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 4; l34 = l34 + 1) {
			fRec31_perm[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 4; l35 = l35 + 1) {
			iRec32_perm[l35] = 0;
		}
		for (int l36 = 0; l36 < 4; l36 = l36 + 1) {
			fYec12_perm[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 4; l37 = l37 + 1) {
			iRec30_perm[l37] = 0;
		}
		for (int l38 = 0; l38 < 4; l38 = l38 + 1) {
			fYec13_perm[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 4; l39 = l39 + 1) {
			fYec14_perm[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 4; l40 = l40 + 1) {
			fRec29_perm[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 4; l41 = l41 + 1) {
			fRec28_perm[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 4; l42 = l42 + 1) {
			fRec37_perm[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 4; l43 = l43 + 1) {
			iRec38_perm[l43] = 0;
		}
		for (int l44 = 0; l44 < 4; l44 = l44 + 1) {
			fYec15_perm[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 4; l45 = l45 + 1) {
			iRec36_perm[l45] = 0;
		}
		for (int l46 = 0; l46 < 4; l46 = l46 + 1) {
			fYec16_perm[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 4; l47 = l47 + 1) {
			iRec35_perm[l47] = 0;
		}
		for (int l48 = 0; l48 < 4; l48 = l48 + 1) {
			fYec17_perm[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 4; l49 = l49 + 1) {
			fYec18_perm[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 4; l50 = l50 + 1) {
			fRec34_perm[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 4; l51 = l51 + 1) {
			fRec33_perm[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 4; l52 = l52 + 1) {
			fRec43_perm[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 4; l53 = l53 + 1) {
			iRec44_perm[l53] = 0;
		}
		for (int l54 = 0; l54 < 4; l54 = l54 + 1) {
			fYec19_perm[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 4; l55 = l55 + 1) {
			iRec42_perm[l55] = 0;
		}
		for (int l56 = 0; l56 < 4; l56 = l56 + 1) {
			fYec20_perm[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 4; l57 = l57 + 1) {
			iRec41_perm[l57] = 0;
		}
		for (int l58 = 0; l58 < 4; l58 = l58 + 1) {
			fYec21_perm[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 4; l59 = l59 + 1) {
			fYec22_perm[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 4; l60 = l60 + 1) {
			fRec40_perm[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 4; l61 = l61 + 1) {
			fRec39_perm[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 4; l62 = l62 + 1) {
			fRec49_perm[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 4; l63 = l63 + 1) {
			iRec50_perm[l63] = 0;
		}
		for (int l64 = 0; l64 < 4; l64 = l64 + 1) {
			fYec23_perm[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 4; l65 = l65 + 1) {
			iRec48_perm[l65] = 0;
		}
		for (int l66 = 0; l66 < 4; l66 = l66 + 1) {
			fYec24_perm[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 4; l67 = l67 + 1) {
			iRec47_perm[l67] = 0;
		}
		for (int l68 = 0; l68 < 4; l68 = l68 + 1) {
			fYec25_perm[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 4; l69 = l69 + 1) {
			fYec26_perm[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 4; l70 = l70 + 1) {
			fRec46_perm[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 4; l71 = l71 + 1) {
			fRec45_perm[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 4; l72 = l72 + 1) {
			fRec55_perm[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 4; l73 = l73 + 1) {
			iRec56_perm[l73] = 0;
		}
		for (int l74 = 0; l74 < 4; l74 = l74 + 1) {
			fYec27_perm[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 4; l75 = l75 + 1) {
			iRec54_perm[l75] = 0;
		}
		for (int l76 = 0; l76 < 4; l76 = l76 + 1) {
			fYec28_perm[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 4; l77 = l77 + 1) {
			iRec53_perm[l77] = 0;
		}
		for (int l78 = 0; l78 < 4; l78 = l78 + 1) {
			fYec29_perm[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 4; l79 = l79 + 1) {
			fYec30_perm[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 4; l80 = l80 + 1) {
			fRec52_perm[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 4; l81 = l81 + 1) {
			fRec51_perm[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 4; l82 = l82 + 1) {
			fRec61_perm[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 4; l83 = l83 + 1) {
			iRec62_perm[l83] = 0;
		}
		for (int l84 = 0; l84 < 4; l84 = l84 + 1) {
			fYec31_perm[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 4; l85 = l85 + 1) {
			iRec60_perm[l85] = 0;
		}
		for (int l86 = 0; l86 < 4; l86 = l86 + 1) {
			fYec32_perm[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 4; l87 = l87 + 1) {
			iRec59_perm[l87] = 0;
		}
		for (int l88 = 0; l88 < 4; l88 = l88 + 1) {
			fYec33_perm[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 4; l89 = l89 + 1) {
			fYec34_perm[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 4; l90 = l90 + 1) {
			fRec58_perm[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 4; l91 = l91 + 1) {
			fRec57_perm[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 4; l92 = l92 + 1) {
			fRec67_perm[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 4; l93 = l93 + 1) {
			iRec68_perm[l93] = 0;
		}
		for (int l94 = 0; l94 < 4; l94 = l94 + 1) {
			fYec35_perm[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 4; l95 = l95 + 1) {
			iRec66_perm[l95] = 0;
		}
		for (int l96 = 0; l96 < 4; l96 = l96 + 1) {
			fYec36_perm[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 4; l97 = l97 + 1) {
			iRec65_perm[l97] = 0;
		}
		for (int l98 = 0; l98 < 4; l98 = l98 + 1) {
			fYec37_perm[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 4; l99 = l99 + 1) {
			fYec38_perm[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 4; l100 = l100 + 1) {
			fRec64_perm[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 4; l101 = l101 + 1) {
			fRec63_perm[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 4; l102 = l102 + 1) {
			fRec73_perm[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 4; l103 = l103 + 1) {
			iRec74_perm[l103] = 0;
		}
		for (int l104 = 0; l104 < 4; l104 = l104 + 1) {
			fYec39_perm[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 4; l105 = l105 + 1) {
			iRec72_perm[l105] = 0;
		}
		for (int l106 = 0; l106 < 4; l106 = l106 + 1) {
			fYec40_perm[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 4; l107 = l107 + 1) {
			iRec71_perm[l107] = 0;
		}
		for (int l108 = 0; l108 < 4; l108 = l108 + 1) {
			fYec41_perm[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 4; l109 = l109 + 1) {
			fYec42_perm[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 4; l110 = l110 + 1) {
			fRec70_perm[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 4; l111 = l111 + 1) {
			fRec69_perm[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 4; l112 = l112 + 1) {
			iRec77_perm[l112] = 0;
		}
		for (int l113 = 0; l113 < 4; l113 = l113 + 1) {
			fYec43_perm[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 4; l114 = l114 + 1) {
			fYec44_perm[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 4; l115 = l115 + 1) {
			fRec76_perm[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 4; l116 = l116 + 1) {
			fRec75_perm[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 4; l117 = l117 + 1) {
			iRec80_perm[l117] = 0;
		}
		for (int l118 = 0; l118 < 4; l118 = l118 + 1) {
			fYec45_perm[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 4; l119 = l119 + 1) {
			fYec46_perm[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 4; l120 = l120 + 1) {
			fRec79_perm[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 4; l121 = l121 + 1) {
			fRec78_perm[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 4; l122 = l122 + 1) {
			iRec83_perm[l122] = 0;
		}
		for (int l123 = 0; l123 < 4; l123 = l123 + 1) {
			fYec47_perm[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 4; l124 = l124 + 1) {
			fYec48_perm[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 4; l125 = l125 + 1) {
			fRec82_perm[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 4; l126 = l126 + 1) {
			fRec81_perm[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 4; l127 = l127 + 1) {
			iRec86_perm[l127] = 0;
		}
		for (int l128 = 0; l128 < 4; l128 = l128 + 1) {
			fYec49_perm[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 4; l129 = l129 + 1) {
			fYec50_perm[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 4; l130 = l130 + 1) {
			fRec85_perm[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 4; l131 = l131 + 1) {
			fRec84_perm[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 4; l132 = l132 + 1) {
			iRec89_perm[l132] = 0;
		}
		for (int l133 = 0; l133 < 4; l133 = l133 + 1) {
			fYec51_perm[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 4; l134 = l134 + 1) {
			fYec52_perm[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 4; l135 = l135 + 1) {
			fRec88_perm[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 4; l136 = l136 + 1) {
			fRec87_perm[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 4; l137 = l137 + 1) {
			fYec53_perm[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 4; l138 = l138 + 1) {
			fYec54_perm[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 4; l139 = l139 + 1) {
			fRec90_perm[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 4; l140 = l140 + 1) {
			fYec55_perm[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 4; l141 = l141 + 1) {
			fRec92_perm[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 4; l142 = l142 + 1) {
			fRec91_perm[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 4; l143 = l143 + 1) {
			fYec56_perm[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 4; l144 = l144 + 1) {
			fRec94_perm[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 4; l145 = l145 + 1) {
			fRec93_perm[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 4; l146 = l146 + 1) {
			fYec57_perm[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 4; l147 = l147 + 1) {
			fRec96_perm[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 4; l148 = l148 + 1) {
			fRec95_perm[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 4; l149 = l149 + 1) {
			fYec58_perm[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 4; l150 = l150 + 1) {
			fRec98_perm[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 4; l151 = l151 + 1) {
			fRec97_perm[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 4; l152 = l152 + 1) {
			fYec59_perm[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 4; l153 = l153 + 1) {
			fRec100_perm[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 4; l154 = l154 + 1) {
			fRec99_perm[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 4; l155 = l155 + 1) {
			fYec60_perm[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 4; l156 = l156 + 1) {
			fRec102_perm[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 4; l157 = l157 + 1) {
			fRec101_perm[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 4; l158 = l158 + 1) {
			fYec61_perm[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 4; l159 = l159 + 1) {
			fRec104_perm[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 4; l160 = l160 + 1) {
			fRec103_perm[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 4; l161 = l161 + 1) {
			fYec62_perm[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 4; l162 = l162 + 1) {
			fRec106_perm[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 4; l163 = l163 + 1) {
			fRec105_perm[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 4; l164 = l164 + 1) {
			fYec63_perm[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 4; l165 = l165 + 1) {
			fRec108_perm[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 4; l166 = l166 + 1) {
			fRec107_perm[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 4; l167 = l167 + 1) {
			fYec64_perm[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 4; l168 = l168 + 1) {
			fRec110_perm[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 4; l169 = l169 + 1) {
			fRec109_perm[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 4; l170 = l170 + 1) {
			fYec65_perm[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 4; l171 = l171 + 1) {
			fRec112_perm[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 4; l172 = l172 + 1) {
			fRec111_perm[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 4; l173 = l173 + 1) {
			fYec66_perm[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 4; l174 = l174 + 1) {
			fRec114_perm[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 4; l175 = l175 + 1) {
			fRec113_perm[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 4; l176 = l176 + 1) {
			fYec67_perm[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 4; l177 = l177 + 1) {
			fRec116_perm[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 4; l178 = l178 + 1) {
			fRec115_perm[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 4; l179 = l179 + 1) {
			fYec68_perm[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 4; l180 = l180 + 1) {
			fRec118_perm[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 4; l181 = l181 + 1) {
			fRec117_perm[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 4; l182 = l182 + 1) {
			fYec69_perm[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 4; l183 = l183 + 1) {
			fRec120_perm[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 4; l184 = l184 + 1) {
			fRec119_perm[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 4; l185 = l185 + 1) {
			fYec70_perm[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 4; l186 = l186 + 1) {
			fRec122_perm[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 4; l187 = l187 + 1) {
			fRec121_perm[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 4; l188 = l188 + 1) {
			fYec71_perm[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 4; l189 = l189 + 1) {
			fRec124_perm[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 4; l190 = l190 + 1) {
			fRec123_perm[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 4; l191 = l191 + 1) {
			fYec72_perm[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 4; l192 = l192 + 1) {
			fRec126_perm[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 4; l193 = l193 + 1) {
			fRec125_perm[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 4; l194 = l194 + 1) {
			fYec73_perm[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 4; l195 = l195 + 1) {
			fRec128_perm[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 4; l196 = l196 + 1) {
			fRec127_perm[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 4; l197 = l197 + 1) {
			fYec74_perm[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 4; l198 = l198 + 1) {
			fYec75_perm[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 4; l199 = l199 + 1) {
			fRec129_perm[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 4; l200 = l200 + 1) {
			fYec76_perm[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 4; l201 = l201 + 1) {
			fYec77_perm[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 4; l202 = l202 + 1) {
			fRec130_perm[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 4; l203 = l203 + 1) {
			fYec78_perm[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 4; l204 = l204 + 1) {
			fYec79_perm[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 4; l205 = l205 + 1) {
			fRec131_perm[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 4; l206 = l206 + 1) {
			fYec80_perm[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 4; l207 = l207 + 1) {
			fYec81_perm[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 4; l208 = l208 + 1) {
			fRec132_perm[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 4; l209 = l209 + 1) {
			fYec82_perm[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 4; l210 = l210 + 1) {
			fYec83_perm[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 4; l211 = l211 + 1) {
			fRec133_perm[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 4; l212 = l212 + 1) {
			fYec84_perm[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 4; l213 = l213 + 1) {
			fYec85_perm[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 4; l214 = l214 + 1) {
			fRec134_perm[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 4; l215 = l215 + 1) {
			fYec86_perm[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 4; l216 = l216 + 1) {
			fYec87_perm[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 4; l217 = l217 + 1) {
			fRec135_perm[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 4; l218 = l218 + 1) {
			fYec88_perm[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 4; l219 = l219 + 1) {
			fYec89_perm[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 4; l220 = l220 + 1) {
			fRec136_perm[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 4; l221 = l221 + 1) {
			fYec90_perm[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 4; l222 = l222 + 1) {
			fYec91_perm[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 4; l223 = l223 + 1) {
			fRec137_perm[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 4; l224 = l224 + 1) {
			fYec92_perm[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 4; l225 = l225 + 1) {
			fYec93_perm[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 4; l226 = l226 + 1) {
			fRec138_perm[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 4; l227 = l227 + 1) {
			fYec94_perm[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 4; l228 = l228 + 1) {
			fYec95_perm[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 4; l229 = l229 + 1) {
			fRec139_perm[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 4; l230 = l230 + 1) {
			fVec0_perm[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 4; l231 = l231 + 1) {
			fVec1_perm[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 4; l232 = l232 + 1) {
			fVec2_perm[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 4; l233 = l233 + 1) {
			fVec3_perm[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 4; l234 = l234 + 1) {
			fVec4_perm[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 4; l235 = l235 + 1) {
			fVec5_perm[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 4; l236 = l236 + 1) {
			fVec6_perm[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 4; l237 = l237 + 1) {
			fVec7_perm[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 4; l238 = l238 + 1) {
			fVec8_perm[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 4; l239 = l239 + 1) {
			fVec9_perm[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 4; l240 = l240 + 1) {
			fVec10_perm[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 4; l241 = l241 + 1) {
			fVec11_perm[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 4; l242 = l242 + 1) {
			fVec12_perm[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 4; l243 = l243 + 1) {
			fVec13_perm[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 4; l244 = l244 + 1) {
			fVec14_perm[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 4; l245 = l245 + 1) {
			fVec15_perm[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 4; l246 = l246 + 1) {
			fVec16_perm[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 4; l247 = l247 + 1) {
			fVec17_perm[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 4; l248 = l248 + 1) {
			fVec18_perm[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 4; l249 = l249 + 1) {
			fVec19_perm[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 4; l250 = l250 + 1) {
			fVec20_perm[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 4; l251 = l251 + 1) {
			fVec21_perm[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 4; l252 = l252 + 1) {
			fVec22_perm[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 4; l253 = l253 + 1) {
			fVec23_perm[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 4; l254 = l254 + 1) {
			fVec24_perm[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 4; l255 = l255 + 1) {
			fVec25_perm[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 4; l256 = l256 + 1) {
			fVec26_perm[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 4; l257 = l257 + 1) {
			fVec27_perm[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 4; l258 = l258 + 1) {
			fVec28_perm[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 4; l259 = l259 + 1) {
			fVec29_perm[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 4; l260 = l260 + 1) {
			fVec30_perm[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 4; l261 = l261 + 1) {
			fVec31_perm[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 4; l262 = l262 + 1) {
			fVec32_perm[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 4; l263 = l263 + 1) {
			fVec33_perm[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 4; l264 = l264 + 1) {
			fVec34_perm[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 4; l265 = l265 + 1) {
			fVec35_perm[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 4; l266 = l266 + 1) {
			fVec36_perm[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 4; l267 = l267 + 1) {
			fVec37_perm[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 4; l268 = l268 + 1) {
			fVec38_perm[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 4; l269 = l269 + 1) {
			fVec39_perm[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 4; l270 = l270 + 1) {
			fVec40_perm[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 4; l271 = l271 + 1) {
			fVec41_perm[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 4; l272 = l272 + 1) {
			fVec42_perm[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 4; l273 = l273 + 1) {
			fVec43_perm[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 4; l274 = l274 + 1) {
			fVec44_perm[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 4; l275 = l275 + 1) {
			fVec45_perm[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 4; l276 = l276 + 1) {
			fVec46_perm[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 4; l277 = l277 + 1) {
			fVec47_perm[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 4; l278 = l278 + 1) {
			fVec48_perm[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 4; l279 = l279 + 1) {
			fVec49_perm[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 4; l280 = l280 + 1) {
			fVec50_perm[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 4; l281 = l281 + 1) {
			fVec51_perm[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 4; l282 = l282 + 1) {
			fVec52_perm[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 4; l283 = l283 + 1) {
			fVec53_perm[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 4; l284 = l284 + 1) {
			fVec54_perm[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 4; l285 = l285 + 1) {
			fVec55_perm[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 4; l286 = l286 + 1) {
			fVec56_perm[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 4; l287 = l287 + 1) {
			fVec57_perm[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 4; l288 = l288 + 1) {
			fVec58_perm[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 4; l289 = l289 + 1) {
			fVec59_perm[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 4; l290 = l290 + 1) {
			fVec60_perm[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 4; l291 = l291 + 1) {
			fYec96_perm[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 4; l292 = l292 + 1) {
			fRec6_perm[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 4; l293 = l293 + 1) {
			iRec140_perm[l293] = 0;
		}
		for (int l294 = 0; l294 < 4; l294 = l294 + 1) {
			fRec3_perm[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 4; l295 = l295 + 1) {
			iRec4_perm[l295] = 0;
		}
		for (int l296 = 0; l296 < 4; l296 = l296 + 1) {
			fRec5_perm[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 4; l297 = l297 + 1) {
			fYec97_perm[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 4; l298 = l298 + 1) {
			fRec2_perm[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 4; l299 = l299 + 1) {
			fRec1_perm[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 4; l300 = l300 + 1) {
			iRec145_perm[l300] = 0;
		}
		for (int l301 = 0; l301 < 4; l301 = l301 + 1) {
			fYec98_perm[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 4; l302 = l302 + 1) {
			iRec144_perm[l302] = 0;
		}
		for (int l303 = 0; l303 < 4; l303 = l303 + 1) {
			fYec99_perm[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 4; l304 = l304 + 1) {
			fYec100_perm[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 4; l305 = l305 + 1) {
			fRec143_perm[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 4; l306 = l306 + 1) {
			fRec142_perm[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 4; l307 = l307 + 1) {
			iRec149_perm[l307] = 0;
		}
		for (int l308 = 0; l308 < 4; l308 = l308 + 1) {
			fYec101_perm[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 4; l309 = l309 + 1) {
			iRec148_perm[l309] = 0;
		}
		for (int l310 = 0; l310 < 4; l310 = l310 + 1) {
			fYec102_perm[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 4; l311 = l311 + 1) {
			fYec103_perm[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 4; l312 = l312 + 1) {
			fRec147_perm[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 4; l313 = l313 + 1) {
			fRec146_perm[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 4; l314 = l314 + 1) {
			iRec153_perm[l314] = 0;
		}
		for (int l315 = 0; l315 < 4; l315 = l315 + 1) {
			fYec104_perm[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 4; l316 = l316 + 1) {
			iRec152_perm[l316] = 0;
		}
		for (int l317 = 0; l317 < 4; l317 = l317 + 1) {
			fYec105_perm[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 4; l318 = l318 + 1) {
			fYec106_perm[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 4; l319 = l319 + 1) {
			fRec151_perm[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 4; l320 = l320 + 1) {
			fRec150_perm[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 4; l321 = l321 + 1) {
			iRec157_perm[l321] = 0;
		}
		for (int l322 = 0; l322 < 4; l322 = l322 + 1) {
			fYec107_perm[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 4; l323 = l323 + 1) {
			iRec156_perm[l323] = 0;
		}
		for (int l324 = 0; l324 < 4; l324 = l324 + 1) {
			fYec108_perm[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 4; l325 = l325 + 1) {
			fYec109_perm[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 4; l326 = l326 + 1) {
			fRec155_perm[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 4; l327 = l327 + 1) {
			fRec154_perm[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 4; l328 = l328 + 1) {
			iRec161_perm[l328] = 0;
		}
		for (int l329 = 0; l329 < 4; l329 = l329 + 1) {
			fYec110_perm[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 4; l330 = l330 + 1) {
			iRec160_perm[l330] = 0;
		}
		for (int l331 = 0; l331 < 4; l331 = l331 + 1) {
			fYec111_perm[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 4; l332 = l332 + 1) {
			fYec112_perm[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 4; l333 = l333 + 1) {
			fRec159_perm[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 4; l334 = l334 + 1) {
			fRec158_perm[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 4; l335 = l335 + 1) {
			iRec164_perm[l335] = 0;
		}
		for (int l336 = 0; l336 < 4; l336 = l336 + 1) {
			fYec113_perm[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 4; l337 = l337 + 1) {
			fYec114_perm[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 4; l338 = l338 + 1) {
			fRec163_perm[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 4; l339 = l339 + 1) {
			fRec162_perm[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 4; l340 = l340 + 1) {
			iRec167_perm[l340] = 0;
		}
		for (int l341 = 0; l341 < 4; l341 = l341 + 1) {
			fYec115_perm[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 4; l342 = l342 + 1) {
			fYec116_perm[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 4; l343 = l343 + 1) {
			fRec166_perm[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 4; l344 = l344 + 1) {
			fRec165_perm[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 4; l345 = l345 + 1) {
			iRec170_perm[l345] = 0;
		}
		for (int l346 = 0; l346 < 4; l346 = l346 + 1) {
			fYec117_perm[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 4; l347 = l347 + 1) {
			fYec118_perm[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 4; l348 = l348 + 1) {
			fRec169_perm[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 4; l349 = l349 + 1) {
			fRec168_perm[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 4; l350 = l350 + 1) {
			iRec173_perm[l350] = 0;
		}
		for (int l351 = 0; l351 < 4; l351 = l351 + 1) {
			fYec119_perm[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 4; l352 = l352 + 1) {
			fYec120_perm[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 4; l353 = l353 + 1) {
			fRec172_perm[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 4; l354 = l354 + 1) {
			fRec171_perm[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 4; l355 = l355 + 1) {
			fYec121_perm[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 4; l356 = l356 + 1) {
			fRec175_perm[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 4; l357 = l357 + 1) {
			fRec174_perm[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 4; l358 = l358 + 1) {
			fYec122_perm[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 4; l359 = l359 + 1) {
			fRec177_perm[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 4; l360 = l360 + 1) {
			fRec176_perm[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 4; l361 = l361 + 1) {
			fYec123_perm[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 4; l362 = l362 + 1) {
			fRec179_perm[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 4; l363 = l363 + 1) {
			fRec178_perm[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 4; l364 = l364 + 1) {
			fYec124_perm[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 4; l365 = l365 + 1) {
			fRec181_perm[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 4; l366 = l366 + 1) {
			fRec180_perm[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 4; l367 = l367 + 1) {
			fYec125_perm[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 4; l368 = l368 + 1) {
			fRec183_perm[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 4; l369 = l369 + 1) {
			fRec182_perm[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 4; l370 = l370 + 1) {
			iRec186_perm[l370] = 0;
		}
		for (int l371 = 0; l371 < 4; l371 = l371 + 1) {
			fYec126_perm[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 4; l372 = l372 + 1) {
			fYec127_perm[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 4; l373 = l373 + 1) {
			fRec185_perm[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 4; l374 = l374 + 1) {
			fRec184_perm[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 4; l375 = l375 + 1) {
			iRec189_perm[l375] = 0;
		}
		for (int l376 = 0; l376 < 4; l376 = l376 + 1) {
			fYec128_perm[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 4; l377 = l377 + 1) {
			fYec129_perm[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 4; l378 = l378 + 1) {
			fRec188_perm[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 4; l379 = l379 + 1) {
			fRec187_perm[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 4; l380 = l380 + 1) {
			iRec192_perm[l380] = 0;
		}
		for (int l381 = 0; l381 < 4; l381 = l381 + 1) {
			fYec130_perm[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 4; l382 = l382 + 1) {
			fYec131_perm[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 4; l383 = l383 + 1) {
			fRec191_perm[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 4; l384 = l384 + 1) {
			fRec190_perm[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 4; l385 = l385 + 1) {
			fYec132_perm[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 4; l386 = l386 + 1) {
			fRec141_perm[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 4; l387 = l387 + 1) {
			iRec197_perm[l387] = 0;
		}
		for (int l388 = 0; l388 < 4; l388 = l388 + 1) {
			fYec133_perm[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 4; l389 = l389 + 1) {
			iRec196_perm[l389] = 0;
		}
		for (int l390 = 0; l390 < 4; l390 = l390 + 1) {
			fYec134_perm[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 4; l391 = l391 + 1) {
			iRec195_perm[l391] = 0;
		}
		for (int l392 = 0; l392 < 4; l392 = l392 + 1) {
			fYec135_perm[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 4; l393 = l393 + 1) {
			fYec136_perm[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 4; l394 = l394 + 1) {
			fRec194_perm[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 4; l395 = l395 + 1) {
			fRec193_perm[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 4; l396 = l396 + 1) {
			iRec202_perm[l396] = 0;
		}
		for (int l397 = 0; l397 < 4; l397 = l397 + 1) {
			fYec137_perm[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 4; l398 = l398 + 1) {
			iRec201_perm[l398] = 0;
		}
		for (int l399 = 0; l399 < 4; l399 = l399 + 1) {
			fYec138_perm[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 4; l400 = l400 + 1) {
			iRec200_perm[l400] = 0;
		}
		for (int l401 = 0; l401 < 4; l401 = l401 + 1) {
			fYec139_perm[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 4; l402 = l402 + 1) {
			fYec140_perm[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 4; l403 = l403 + 1) {
			fRec199_perm[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 4; l404 = l404 + 1) {
			fRec198_perm[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 4; l405 = l405 + 1) {
			iRec207_perm[l405] = 0;
		}
		for (int l406 = 0; l406 < 4; l406 = l406 + 1) {
			fYec141_perm[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 4; l407 = l407 + 1) {
			iRec206_perm[l407] = 0;
		}
		for (int l408 = 0; l408 < 4; l408 = l408 + 1) {
			fYec142_perm[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 4; l409 = l409 + 1) {
			iRec205_perm[l409] = 0;
		}
		for (int l410 = 0; l410 < 4; l410 = l410 + 1) {
			fYec143_perm[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 4; l411 = l411 + 1) {
			fYec144_perm[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 4; l412 = l412 + 1) {
			fRec204_perm[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 4; l413 = l413 + 1) {
			fRec203_perm[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 4; l414 = l414 + 1) {
			iRec212_perm[l414] = 0;
		}
		for (int l415 = 0; l415 < 4; l415 = l415 + 1) {
			fYec145_perm[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 4; l416 = l416 + 1) {
			iRec211_perm[l416] = 0;
		}
		for (int l417 = 0; l417 < 4; l417 = l417 + 1) {
			fYec146_perm[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 4; l418 = l418 + 1) {
			iRec210_perm[l418] = 0;
		}
		for (int l419 = 0; l419 < 4; l419 = l419 + 1) {
			fYec147_perm[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 4; l420 = l420 + 1) {
			fYec148_perm[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 4; l421 = l421 + 1) {
			fRec209_perm[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 4; l422 = l422 + 1) {
			fRec208_perm[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 4; l423 = l423 + 1) {
			iRec217_perm[l423] = 0;
		}
		for (int l424 = 0; l424 < 4; l424 = l424 + 1) {
			fYec149_perm[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 4; l425 = l425 + 1) {
			iRec216_perm[l425] = 0;
		}
		for (int l426 = 0; l426 < 4; l426 = l426 + 1) {
			fYec150_perm[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 4; l427 = l427 + 1) {
			iRec215_perm[l427] = 0;
		}
		for (int l428 = 0; l428 < 4; l428 = l428 + 1) {
			fYec151_perm[l428] = 0.0f;
		}
		for (int l429 = 0; l429 < 4; l429 = l429 + 1) {
			fYec152_perm[l429] = 0.0f;
		}
		for (int l430 = 0; l430 < 4; l430 = l430 + 1) {
			fRec214_perm[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 4; l431 = l431 + 1) {
			fRec213_perm[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 4; l432 = l432 + 1) {
			iRec222_perm[l432] = 0;
		}
		for (int l433 = 0; l433 < 4; l433 = l433 + 1) {
			fYec153_perm[l433] = 0.0f;
		}
		for (int l434 = 0; l434 < 4; l434 = l434 + 1) {
			iRec221_perm[l434] = 0;
		}
		for (int l435 = 0; l435 < 4; l435 = l435 + 1) {
			fYec154_perm[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 4; l436 = l436 + 1) {
			iRec220_perm[l436] = 0;
		}
		for (int l437 = 0; l437 < 4; l437 = l437 + 1) {
			fYec155_perm[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 4; l438 = l438 + 1) {
			fYec156_perm[l438] = 0.0f;
		}
		for (int l439 = 0; l439 < 4; l439 = l439 + 1) {
			fRec219_perm[l439] = 0.0f;
		}
		for (int l440 = 0; l440 < 4; l440 = l440 + 1) {
			fRec218_perm[l440] = 0.0f;
		}
		for (int l441 = 0; l441 < 4; l441 = l441 + 1) {
			iRec227_perm[l441] = 0;
		}
		for (int l442 = 0; l442 < 4; l442 = l442 + 1) {
			fYec157_perm[l442] = 0.0f;
		}
		for (int l443 = 0; l443 < 4; l443 = l443 + 1) {
			iRec226_perm[l443] = 0;
		}
		for (int l444 = 0; l444 < 4; l444 = l444 + 1) {
			fYec158_perm[l444] = 0.0f;
		}
		for (int l445 = 0; l445 < 4; l445 = l445 + 1) {
			iRec225_perm[l445] = 0;
		}
		for (int l446 = 0; l446 < 4; l446 = l446 + 1) {
			fYec159_perm[l446] = 0.0f;
		}
		for (int l447 = 0; l447 < 4; l447 = l447 + 1) {
			fYec160_perm[l447] = 0.0f;
		}
		for (int l448 = 0; l448 < 4; l448 = l448 + 1) {
			fRec224_perm[l448] = 0.0f;
		}
		for (int l449 = 0; l449 < 4; l449 = l449 + 1) {
			fRec223_perm[l449] = 0.0f;
		}
		for (int l450 = 0; l450 < 4; l450 = l450 + 1) {
			iRec231_perm[l450] = 0;
		}
		for (int l451 = 0; l451 < 4; l451 = l451 + 1) {
			fYec161_perm[l451] = 0.0f;
		}
		for (int l452 = 0; l452 < 4; l452 = l452 + 1) {
			iRec230_perm[l452] = 0;
		}
		for (int l453 = 0; l453 < 4; l453 = l453 + 1) {
			fYec162_perm[l453] = 0.0f;
		}
		for (int l454 = 0; l454 < 4; l454 = l454 + 1) {
			fYec163_perm[l454] = 0.0f;
		}
		for (int l455 = 0; l455 < 4; l455 = l455 + 1) {
			fRec229_perm[l455] = 0.0f;
		}
		for (int l456 = 0; l456 < 4; l456 = l456 + 1) {
			fRec228_perm[l456] = 0.0f;
		}
		for (int l457 = 0; l457 < 4; l457 = l457 + 1) {
			iRec235_perm[l457] = 0;
		}
		for (int l458 = 0; l458 < 4; l458 = l458 + 1) {
			fYec164_perm[l458] = 0.0f;
		}
		for (int l459 = 0; l459 < 4; l459 = l459 + 1) {
			iRec234_perm[l459] = 0;
		}
		for (int l460 = 0; l460 < 4; l460 = l460 + 1) {
			fYec165_perm[l460] = 0.0f;
		}
		for (int l461 = 0; l461 < 4; l461 = l461 + 1) {
			fYec166_perm[l461] = 0.0f;
		}
		for (int l462 = 0; l462 < 4; l462 = l462 + 1) {
			fRec233_perm[l462] = 0.0f;
		}
		for (int l463 = 0; l463 < 4; l463 = l463 + 1) {
			fRec232_perm[l463] = 0.0f;
		}
		for (int l464 = 0; l464 < 4; l464 = l464 + 1) {
			iRec239_perm[l464] = 0;
		}
		for (int l465 = 0; l465 < 4; l465 = l465 + 1) {
			fYec167_perm[l465] = 0.0f;
		}
		for (int l466 = 0; l466 < 4; l466 = l466 + 1) {
			iRec238_perm[l466] = 0;
		}
		for (int l467 = 0; l467 < 4; l467 = l467 + 1) {
			fYec168_perm[l467] = 0.0f;
		}
		for (int l468 = 0; l468 < 4; l468 = l468 + 1) {
			fYec169_perm[l468] = 0.0f;
		}
		for (int l469 = 0; l469 < 4; l469 = l469 + 1) {
			fRec237_perm[l469] = 0.0f;
		}
		for (int l470 = 0; l470 < 4; l470 = l470 + 1) {
			fRec236_perm[l470] = 0.0f;
		}
		for (int l471 = 0; l471 < 4; l471 = l471 + 1) {
			iRec243_perm[l471] = 0;
		}
		for (int l472 = 0; l472 < 4; l472 = l472 + 1) {
			fYec170_perm[l472] = 0.0f;
		}
		for (int l473 = 0; l473 < 4; l473 = l473 + 1) {
			iRec242_perm[l473] = 0;
		}
		for (int l474 = 0; l474 < 4; l474 = l474 + 1) {
			fYec171_perm[l474] = 0.0f;
		}
		for (int l475 = 0; l475 < 4; l475 = l475 + 1) {
			fYec172_perm[l475] = 0.0f;
		}
		for (int l476 = 0; l476 < 4; l476 = l476 + 1) {
			fRec241_perm[l476] = 0.0f;
		}
		for (int l477 = 0; l477 < 4; l477 = l477 + 1) {
			fRec240_perm[l477] = 0.0f;
		}
		for (int l478 = 0; l478 < 4; l478 = l478 + 1) {
			iRec247_perm[l478] = 0;
		}
		for (int l479 = 0; l479 < 4; l479 = l479 + 1) {
			fYec173_perm[l479] = 0.0f;
		}
		for (int l480 = 0; l480 < 4; l480 = l480 + 1) {
			iRec246_perm[l480] = 0;
		}
		for (int l481 = 0; l481 < 4; l481 = l481 + 1) {
			fYec174_perm[l481] = 0.0f;
		}
		for (int l482 = 0; l482 < 4; l482 = l482 + 1) {
			fYec175_perm[l482] = 0.0f;
		}
		for (int l483 = 0; l483 < 4; l483 = l483 + 1) {
			fRec245_perm[l483] = 0.0f;
		}
		for (int l484 = 0; l484 < 4; l484 = l484 + 1) {
			fRec244_perm[l484] = 0.0f;
		}
		for (int l485 = 0; l485 < 4; l485 = l485 + 1) {
			fYec176_perm[l485] = 0.0f;
		}
		for (int l486 = 0; l486 < 4; l486 = l486 + 1) {
			fRec249_perm[l486] = 0.0f;
		}
		for (int l487 = 0; l487 < 4; l487 = l487 + 1) {
			fRec248_perm[l487] = 0.0f;
		}
		for (int l488 = 0; l488 < 4; l488 = l488 + 1) {
			fYec177_perm[l488] = 0.0f;
		}
		for (int l489 = 0; l489 < 4; l489 = l489 + 1) {
			fRec251_perm[l489] = 0.0f;
		}
		for (int l490 = 0; l490 < 4; l490 = l490 + 1) {
			fRec250_perm[l490] = 0.0f;
		}
		for (int l491 = 0; l491 < 4; l491 = l491 + 1) {
			fYec178_perm[l491] = 0.0f;
		}
		for (int l492 = 0; l492 < 4; l492 = l492 + 1) {
			fRec253_perm[l492] = 0.0f;
		}
		for (int l493 = 0; l493 < 4; l493 = l493 + 1) {
			fRec252_perm[l493] = 0.0f;
		}
		for (int l494 = 0; l494 < 4; l494 = l494 + 1) {
			fYec179_perm[l494] = 0.0f;
		}
		for (int l495 = 0; l495 < 4; l495 = l495 + 1) {
			fRec255_perm[l495] = 0.0f;
		}
		for (int l496 = 0; l496 < 4; l496 = l496 + 1) {
			fRec254_perm[l496] = 0.0f;
		}
		for (int l497 = 0; l497 < 4; l497 = l497 + 1) {
			fYec180_perm[l497] = 0.0f;
		}
		for (int l498 = 0; l498 < 4; l498 = l498 + 1) {
			fRec257_perm[l498] = 0.0f;
		}
		for (int l499 = 0; l499 < 4; l499 = l499 + 1) {
			fRec256_perm[l499] = 0.0f;
		}
		for (int l500 = 0; l500 < 4; l500 = l500 + 1) {
			fYec181_perm[l500] = 0.0f;
		}
		for (int l501 = 0; l501 < 4; l501 = l501 + 1) {
			fRec259_perm[l501] = 0.0f;
		}
		for (int l502 = 0; l502 < 4; l502 = l502 + 1) {
			fRec258_perm[l502] = 0.0f;
		}
		for (int l503 = 0; l503 < 4; l503 = l503 + 1) {
			fYec182_perm[l503] = 0.0f;
		}
		for (int l504 = 0; l504 < 4; l504 = l504 + 1) {
			fRec261_perm[l504] = 0.0f;
		}
		for (int l505 = 0; l505 < 4; l505 = l505 + 1) {
			fRec260_perm[l505] = 0.0f;
		}
		for (int l506 = 0; l506 < 4; l506 = l506 + 1) {
			fYec183_perm[l506] = 0.0f;
		}
		for (int l507 = 0; l507 < 4; l507 = l507 + 1) {
			fRec263_perm[l507] = 0.0f;
		}
		for (int l508 = 0; l508 < 4; l508 = l508 + 1) {
			fRec262_perm[l508] = 0.0f;
		}
		for (int l509 = 0; l509 < 4; l509 = l509 + 1) {
			fYec184_perm[l509] = 0.0f;
		}
		for (int l510 = 0; l510 < 4; l510 = l510 + 1) {
			fRec265_perm[l510] = 0.0f;
		}
		for (int l511 = 0; l511 < 4; l511 = l511 + 1) {
			fRec264_perm[l511] = 0.0f;
		}
		for (int l512 = 0; l512 < 4; l512 = l512 + 1) {
			fYec185_perm[l512] = 0.0f;
		}
		for (int l513 = 0; l513 < 4; l513 = l513 + 1) {
			fRec267_perm[l513] = 0.0f;
		}
		for (int l514 = 0; l514 < 4; l514 = l514 + 1) {
			fRec266_perm[l514] = 0.0f;
		}
		for (int l515 = 0; l515 < 4; l515 = l515 + 1) {
			fYec186_perm[l515] = 0.0f;
		}
		for (int l516 = 0; l516 < 4; l516 = l516 + 1) {
			fRec269_perm[l516] = 0.0f;
		}
		for (int l517 = 0; l517 < 4; l517 = l517 + 1) {
			fRec268_perm[l517] = 0.0f;
		}
		for (int l518 = 0; l518 < 4; l518 = l518 + 1) {
			fYec187_perm[l518] = 0.0f;
		}
		for (int l519 = 0; l519 < 4; l519 = l519 + 1) {
			fRec271_perm[l519] = 0.0f;
		}
		for (int l520 = 0; l520 < 4; l520 = l520 + 1) {
			fRec270_perm[l520] = 0.0f;
		}
		for (int l521 = 0; l521 < 4; l521 = l521 + 1) {
			fYec188_perm[l521] = 0.0f;
		}
		for (int l522 = 0; l522 < 4; l522 = l522 + 1) {
			fRec273_perm[l522] = 0.0f;
		}
		for (int l523 = 0; l523 < 4; l523 = l523 + 1) {
			fRec272_perm[l523] = 0.0f;
		}
		for (int l524 = 0; l524 < 4; l524 = l524 + 1) {
			fYec189_perm[l524] = 0.0f;
		}
		for (int l525 = 0; l525 < 4; l525 = l525 + 1) {
			fRec275_perm[l525] = 0.0f;
		}
		for (int l526 = 0; l526 < 4; l526 = l526 + 1) {
			fRec274_perm[l526] = 0.0f;
		}
		for (int l527 = 0; l527 < 4; l527 = l527 + 1) {
			fYec190_perm[l527] = 0.0f;
		}
		for (int l528 = 0; l528 < 4; l528 = l528 + 1) {
			fRec277_perm[l528] = 0.0f;
		}
		for (int l529 = 0; l529 < 4; l529 = l529 + 1) {
			fRec276_perm[l529] = 0.0f;
		}
		for (int l530 = 0; l530 < 4; l530 = l530 + 1) {
			fYec191_perm[l530] = 0.0f;
		}
		for (int l531 = 0; l531 < 4; l531 = l531 + 1) {
			fRec279_perm[l531] = 0.0f;
		}
		for (int l532 = 0; l532 < 4; l532 = l532 + 1) {
			fRec278_perm[l532] = 0.0f;
		}
		for (int l533 = 0; l533 < 4; l533 = l533 + 1) {
			fYec192_perm[l533] = 0.0f;
		}
		for (int l534 = 0; l534 < 4; l534 = l534 + 1) {
			fRec281_perm[l534] = 0.0f;
		}
		for (int l535 = 0; l535 < 4; l535 = l535 + 1) {
			fRec280_perm[l535] = 0.0f;
		}
		for (int l536 = 0; l536 < 4; l536 = l536 + 1) {
			fYec193_perm[l536] = 0.0f;
		}
		for (int l537 = 0; l537 < 4; l537 = l537 + 1) {
			fRec283_perm[l537] = 0.0f;
		}
		for (int l538 = 0; l538 < 4; l538 = l538 + 1) {
			fRec282_perm[l538] = 0.0f;
		}
		for (int l539 = 0; l539 < 4; l539 = l539 + 1) {
			fYec194_perm[l539] = 0.0f;
		}
		for (int l540 = 0; l540 < 4; l540 = l540 + 1) {
			fRec285_perm[l540] = 0.0f;
		}
		for (int l541 = 0; l541 < 4; l541 = l541 + 1) {
			fRec284_perm[l541] = 0.0f;
		}
		for (int l542 = 0; l542 < 4; l542 = l542 + 1) {
			fYec195_perm[l542] = 0.0f;
		}
		for (int l543 = 0; l543 < 4; l543 = l543 + 1) {
			fRec286_perm[l543] = 0.0f;
		}
		for (int l544 = 0; l544 < 4; l544 = l544 + 1) {
			fYec196_perm[l544] = 0.0f;
		}
		for (int l545 = 0; l545 < 4; l545 = l545 + 1) {
			fRec287_perm[l545] = 0.0f;
		}
		for (int l546 = 0; l546 < 4; l546 = l546 + 1) {
			fYec197_perm[l546] = 0.0f;
		}
		for (int l547 = 0; l547 < 4; l547 = l547 + 1) {
			fRec288_perm[l547] = 0.0f;
		}
		for (int l548 = 0; l548 < 4; l548 = l548 + 1) {
			fYec198_perm[l548] = 0.0f;
		}
		for (int l549 = 0; l549 < 4; l549 = l549 + 1) {
			fRec289_perm[l549] = 0.0f;
		}
		for (int l550 = 0; l550 < 4; l550 = l550 + 1) {
			fYec199_perm[l550] = 0.0f;
		}
		for (int l551 = 0; l551 < 4; l551 = l551 + 1) {
			fRec290_perm[l551] = 0.0f;
		}
		for (int l552 = 0; l552 < 4; l552 = l552 + 1) {
			fYec200_perm[l552] = 0.0f;
		}
		for (int l553 = 0; l553 < 4; l553 = l553 + 1) {
			fRec292_perm[l553] = 0.0f;
		}
		for (int l554 = 0; l554 < 4; l554 = l554 + 1) {
			fYec201_perm[l554] = 0.0f;
		}
		for (int l555 = 0; l555 < 4; l555 = l555 + 1) {
			fRec291_perm[l555] = 0.0f;
		}
		for (int l556 = 0; l556 < 4; l556 = l556 + 1) {
			fYec202_perm[l556] = 0.0f;
		}
		for (int l557 = 0; l557 < 4; l557 = l557 + 1) {
			fRec294_perm[l557] = 0.0f;
		}
		for (int l558 = 0; l558 < 4; l558 = l558 + 1) {
			fYec203_perm[l558] = 0.0f;
		}
		for (int l559 = 0; l559 < 4; l559 = l559 + 1) {
			fRec293_perm[l559] = 0.0f;
		}
		for (int l560 = 0; l560 < 4; l560 = l560 + 1) {
			fYec204_perm[l560] = 0.0f;
		}
		for (int l561 = 0; l561 < 4; l561 = l561 + 1) {
			fRec296_perm[l561] = 0.0f;
		}
		for (int l562 = 0; l562 < 4; l562 = l562 + 1) {
			fYec205_perm[l562] = 0.0f;
		}
		for (int l563 = 0; l563 < 4; l563 = l563 + 1) {
			fRec295_perm[l563] = 0.0f;
		}
		for (int l564 = 0; l564 < 4; l564 = l564 + 1) {
			fYec206_perm[l564] = 0.0f;
		}
		for (int l565 = 0; l565 < 4; l565 = l565 + 1) {
			fRec298_perm[l565] = 0.0f;
		}
		for (int l566 = 0; l566 < 4; l566 = l566 + 1) {
			fYec207_perm[l566] = 0.0f;
		}
		for (int l567 = 0; l567 < 4; l567 = l567 + 1) {
			fRec297_perm[l567] = 0.0f;
		}
		for (int l568 = 0; l568 < 4; l568 = l568 + 1) {
			fRec300_perm[l568] = 0.0f;
		}
		for (int l569 = 0; l569 < 4; l569 = l569 + 1) {
			fRec299_perm[l569] = 0.0f;
		}
		for (int l570 = 0; l570 < 4; l570 = l570 + 1) {
			fRec302_perm[l570] = 0.0f;
		}
		for (int l571 = 0; l571 < 4; l571 = l571 + 1) {
			fRec301_perm[l571] = 0.0f;
		}
		for (int l572 = 0; l572 < 4; l572 = l572 + 1) {
			fRec304_perm[l572] = 0.0f;
		}
		for (int l573 = 0; l573 < 4; l573 = l573 + 1) {
			fRec303_perm[l573] = 0.0f;
		}
		for (int l574 = 0; l574 < 4; l574 = l574 + 1) {
			fRec306_perm[l574] = 0.0f;
		}
		for (int l575 = 0; l575 < 4; l575 = l575 + 1) {
			fRec305_perm[l575] = 0.0f;
		}
		for (int l576 = 0; l576 < 4; l576 = l576 + 1) {
			fRec307_perm[l576] = 0.0f;
		}
		for (int l577 = 0; l577 < 4; l577 = l577 + 1) {
			fRec308_perm[l577] = 0.0f;
		}
		for (int l578 = 0; l578 < 4; l578 = l578 + 1) {
			fYec208_perm[l578] = 0.0f;
		}
	}
	
	virtual void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	virtual void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp();
	}
	
	virtual int getSampleRate() {
		return fSampleRate;
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("standalone");
		ui_interface->addButton("A0", &fButton50);
		ui_interface->addButton("A1", &fButton38);
		ui_interface->addButton("A2", &fButton26);
		ui_interface->addButton("A3", &fButton14);
		ui_interface->addButton("A4", &fButton2);
		ui_interface->addButton("C0", &fButton59);
		ui_interface->addButton("C1", &fButton47);
		ui_interface->addButton("C2", &fButton35);
		ui_interface->addButton("C3", &fButton23);
		ui_interface->addButton("C4", &fButton11);
		ui_interface->addButton("D0", &fButton57);
		ui_interface->addButton("D1", &fButton45);
		ui_interface->addButton("D2", &fButton33);
		ui_interface->addButton("D3", &fButton21);
		ui_interface->addButton("D4", &fButton9);
		ui_interface->addButton("F0", &fButton54);
		ui_interface->addButton("F1", &fButton42);
		ui_interface->addButton("F2", &fButton30);
		ui_interface->addButton("F3", &fButton18);
		ui_interface->addButton("F4", &fButton6);
		ui_interface->addButton("G0", &fButton52);
		ui_interface->addButton("G1", &fButton40);
		ui_interface->addButton("G2", &fButton28);
		ui_interface->addButton("G3", &fButton16);
		ui_interface->addButton("G4", &fButton4);
		ui_interface->declare(0, "2", "");
		ui_interface->openVerticalBox("vibrato");
		ui_interface->declare(&fHslider2, "1", "");
		ui_interface->addHorizontalSlider("depth", &fHslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.2f));
		ui_interface->declare(&fHslider1, "2", "");
		ui_interface->addHorizontalSlider("speed", &fHslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.2f));
		ui_interface->closeBox();
		ui_interface->addButton("a0", &fButton51);
		ui_interface->addButton("a1", &fButton39);
		ui_interface->addButton("a2", &fButton27);
		ui_interface->addButton("a3", &fButton15);
		ui_interface->addButton("a4", &fButton3);
		ui_interface->addButton("b0", &fButton49);
		ui_interface->addButton("b1", &fButton37);
		ui_interface->addButton("b2", &fButton25);
		ui_interface->addButton("b3", &fButton13);
		ui_interface->addButton("b4", &fButton1);
		ui_interface->addHorizontalSlider("balance", &fHslider6, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->openHorizontalBox("bass");
		ui_interface->declare(&fVslider4, "1", "");
		ui_interface->addVerticalSlider("16' b", &fVslider4, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider5, "2", "");
		ui_interface->addVerticalSlider("8' b", &fVslider5, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fHslider5, "3", "");
		ui_interface->addHorizontalSlider("bass manual", &fHslider5, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider6, "3", "");
		ui_interface->addVerticalSlider("bass volume", &fVslider6, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->closeBox();
		ui_interface->addButton("c0", &fButton60);
		ui_interface->addButton("c1", &fButton48);
		ui_interface->addButton("c2", &fButton36);
		ui_interface->addButton("c3", &fButton24);
		ui_interface->addButton("c4", &fButton12);
		ui_interface->addButton("c5", &fButton0);
		ui_interface->addButton("d0", &fButton58);
		ui_interface->addButton("d1", &fButton46);
		ui_interface->addButton("d2", &fButton34);
		ui_interface->addButton("d3", &fButton22);
		ui_interface->addButton("d4", &fButton10);
		ui_interface->addButton("e0", &fButton56);
		ui_interface->addButton("e1", &fButton44);
		ui_interface->addButton("e2", &fButton32);
		ui_interface->addButton("e3", &fButton20);
		ui_interface->addButton("e4", &fButton8);
		ui_interface->addButton("f0", &fButton55);
		ui_interface->addButton("f1", &fButton43);
		ui_interface->addButton("f2", &fButton31);
		ui_interface->addButton("f3", &fButton19);
		ui_interface->addButton("f4", &fButton7);
		ui_interface->addButton("g0", &fButton53);
		ui_interface->addButton("g1", &fButton41);
		ui_interface->addButton("g2", &fButton29);
		ui_interface->addButton("g3", &fButton17);
		ui_interface->addButton("g4", &fButton5);
		ui_interface->openHorizontalBox("i");
		ui_interface->declare(&fVslider10, "1", "");
		ui_interface->addVerticalSlider("16' i", &fVslider10, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider8, "2", "");
		ui_interface->addVerticalSlider("8' i", &fVslider8, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider14, "3", "");
		ui_interface->addVerticalSlider("4' i", &fVslider14, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider9, "4", "");
		ui_interface->addVerticalSlider("2 2/3' i", &fVslider9, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider13, "5", "");
		ui_interface->addVerticalSlider("2' i", &fVslider13, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider12, "6", "");
		ui_interface->addVerticalSlider("1 3/5' i", &fVslider12, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider11, "7", "");
		ui_interface->addVerticalSlider("1' i", &fVslider11, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("ii");
		ui_interface->declare(&fVslider7, "1", "");
		ui_interface->addVerticalSlider("bright", &fVslider7, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->addVerticalSlider("16' ii", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider2, "3", "");
		ui_interface->addVerticalSlider("8' ii", &fVslider2, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider1, "4", "");
		ui_interface->addVerticalSlider("4' ii", &fVslider1, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider0, "5", "");
		ui_interface->addVerticalSlider("2' ii", &fVslider0, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->closeBox();
		ui_interface->addHorizontalSlider("percussive", &fHslider7, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->addHorizontalSlider("pitch", &fHslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(-1.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.05f));
		ui_interface->addHorizontalSlider("realism", &fHslider4, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->addHorizontalSlider("volume", &fHslider0, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* output0_ptr = outputs[0];
		FAUSTFLOAT* output1_ptr = outputs[1];
		FAUSTFLOAT* output2_ptr = outputs[2];
		float fSlow0 = 0.02f * mydsp_faustpower2_f(float(fHslider0));
		float fRec0_tmp[36];
		float* fRec0 = &fRec0_tmp[4];
		float fSlow1 = fConst1 * (3.0f * float(fHslider1) + 5.0f);
		float fRec11_tmp[36];
		float* fRec11 = &fRec11_tmp[4];
		float fSlow2 = 0.0149f * float(fHslider2) + 0.0001f;
		float fSlow3 = 0.03f * float(fHslider3);
		float fZec0[32];
		float fSlow4 = float(fHslider4);
		int iSlow5 = fSlow4 > 0.16666667f;
		float fSlow6 = ((iSlow5) ? 1.000064f : 1.0f);
		float fZec1[32];
		float fRec10_tmp[36];
		float* fRec10 = &fRec10_tmp[4];
		float fZec2[32];
		int iRec12_tmp[36];
		int* iRec12 = &iRec12_tmp[4];
		float fYec0_tmp[36];
		float* fYec0 = &fYec0_tmp[4];
		int iRec9_tmp[36];
		int* iRec9 = &iRec9_tmp[4];
		float fZec3[32];
		float fYec1_tmp[36];
		float* fYec1 = &fYec1_tmp[4];
		float fZec4[32];
		float fZec5[32];
		float fZec6[32];
		float fYec2_tmp[36];
		float* fYec2 = &fYec2_tmp[4];
		float fRec8_tmp[36];
		float* fRec8 = &fRec8_tmp[4];
		float fRec7_tmp[36];
		float* fRec7 = &fRec7_tmp[4];
		float fSlow7 = ((iSlow5) ? 1.001135f : 1.0f);
		float fZec7[32];
		float fRec16_tmp[36];
		float* fRec16 = &fRec16_tmp[4];
		float fZec8[32];
		int iRec17_tmp[36];
		int* iRec17 = &iRec17_tmp[4];
		float fYec3_tmp[36];
		float* fYec3 = &fYec3_tmp[4];
		int iRec15_tmp[36];
		int* iRec15 = &iRec15_tmp[4];
		float fZec9[32];
		float fYec4_tmp[36];
		float* fYec4 = &fYec4_tmp[4];
		float fZec10[32];
		float fZec11[32];
		float fZec12[32];
		float fYec5_tmp[36];
		float* fYec5 = &fYec5_tmp[4];
		float fRec14_tmp[36];
		float* fRec14 = &fRec14_tmp[4];
		float fRec13_tmp[36];
		float* fRec13 = &fRec13_tmp[4];
		float fSlow8 = ((iSlow5) ? 0.999484f : 1.0f);
		float fZec13[32];
		float fRec21_tmp[36];
		float* fRec21 = &fRec21_tmp[4];
		float fZec14[32];
		int iRec22_tmp[36];
		int* iRec22 = &iRec22_tmp[4];
		float fYec6_tmp[36];
		float* fYec6 = &fYec6_tmp[4];
		int iRec20_tmp[36];
		int* iRec20 = &iRec20_tmp[4];
		float fZec15[32];
		float fYec7_tmp[36];
		float* fYec7 = &fYec7_tmp[4];
		float fZec16[32];
		float fZec17[32];
		float fZec18[32];
		float fYec8_tmp[36];
		float* fYec8 = &fYec8_tmp[4];
		float fRec19_tmp[36];
		float* fRec19 = &fRec19_tmp[4];
		float fRec18_tmp[36];
		float* fRec18 = &fRec18_tmp[4];
		float fSlow9 = ((iSlow5) ? 1.003796f : 1.0f);
		float fZec19[32];
		float fRec26_tmp[36];
		float* fRec26 = &fRec26_tmp[4];
		float fZec20[32];
		int iRec27_tmp[36];
		int* iRec27 = &iRec27_tmp[4];
		float fYec9_tmp[36];
		float* fYec9 = &fYec9_tmp[4];
		int iRec25_tmp[36];
		int* iRec25 = &iRec25_tmp[4];
		float fZec21[32];
		float fYec10_tmp[36];
		float* fYec10 = &fYec10_tmp[4];
		float fZec22[32];
		float fZec23[32];
		float fZec24[32];
		float fYec11_tmp[36];
		float* fYec11 = &fYec11_tmp[4];
		float fRec24_tmp[36];
		float* fRec24 = &fRec24_tmp[4];
		float fRec23_tmp[36];
		float* fRec23 = &fRec23_tmp[4];
		float fSlow10 = ((iSlow5) ? 1.001383f : 1.0f);
		float fZec25[32];
		float fRec31_tmp[36];
		float* fRec31 = &fRec31_tmp[4];
		float fZec26[32];
		int iRec32_tmp[36];
		int* iRec32 = &iRec32_tmp[4];
		float fYec12_tmp[36];
		float* fYec12 = &fYec12_tmp[4];
		int iRec30_tmp[36];
		int* iRec30 = &iRec30_tmp[4];
		float fZec27[32];
		float fYec13_tmp[36];
		float* fYec13 = &fYec13_tmp[4];
		float fZec28[32];
		float fZec29[32];
		float fZec30[32];
		float fYec14_tmp[36];
		float* fYec14 = &fYec14_tmp[4];
		float fRec29_tmp[36];
		float* fRec29 = &fRec29_tmp[4];
		float fRec28_tmp[36];
		float* fRec28 = &fRec28_tmp[4];
		float fSlow11 = ((iSlow5) ? 1.003118f : 1.0f);
		float fZec31[32];
		float fRec37_tmp[36];
		float* fRec37 = &fRec37_tmp[4];
		float fZec32[32];
		int iRec38_tmp[36];
		int* iRec38 = &iRec38_tmp[4];
		float fYec15_tmp[36];
		float* fYec15 = &fYec15_tmp[4];
		int iRec36_tmp[36];
		int* iRec36 = &iRec36_tmp[4];
		float fZec33[32];
		float fYec16_tmp[36];
		float* fYec16 = &fYec16_tmp[4];
		int iRec35_tmp[36];
		int* iRec35 = &iRec35_tmp[4];
		float fZec34[32];
		float fYec17_tmp[36];
		float* fYec17 = &fYec17_tmp[4];
		float fZec35[32];
		float fZec36[32];
		float fZec37[32];
		float fYec18_tmp[36];
		float* fYec18 = &fYec18_tmp[4];
		float fRec34_tmp[36];
		float* fRec34 = &fRec34_tmp[4];
		float fRec33_tmp[36];
		float* fRec33 = &fRec33_tmp[4];
		float fSlow12 = ((iSlow5) ? 0.996945f : 1.0f);
		float fZec38[32];
		float fRec43_tmp[36];
		float* fRec43 = &fRec43_tmp[4];
		float fZec39[32];
		int iRec44_tmp[36];
		int* iRec44 = &iRec44_tmp[4];
		float fYec19_tmp[36];
		float* fYec19 = &fYec19_tmp[4];
		int iRec42_tmp[36];
		int* iRec42 = &iRec42_tmp[4];
		float fZec40[32];
		float fYec20_tmp[36];
		float* fYec20 = &fYec20_tmp[4];
		int iRec41_tmp[36];
		int* iRec41 = &iRec41_tmp[4];
		float fZec41[32];
		float fYec21_tmp[36];
		float* fYec21 = &fYec21_tmp[4];
		float fZec42[32];
		float fZec43[32];
		float fZec44[32];
		float fYec22_tmp[36];
		float* fYec22 = &fYec22_tmp[4];
		float fRec40_tmp[36];
		float* fRec40 = &fRec40_tmp[4];
		float fRec39_tmp[36];
		float* fRec39 = &fRec39_tmp[4];
		float fSlow13 = ((iSlow5) ? 1.002464f : 1.0f);
		float fZec45[32];
		float fRec49_tmp[36];
		float* fRec49 = &fRec49_tmp[4];
		float fZec46[32];
		int iRec50_tmp[36];
		int* iRec50 = &iRec50_tmp[4];
		float fYec23_tmp[36];
		float* fYec23 = &fYec23_tmp[4];
		int iRec48_tmp[36];
		int* iRec48 = &iRec48_tmp[4];
		float fZec47[32];
		float fYec24_tmp[36];
		float* fYec24 = &fYec24_tmp[4];
		int iRec47_tmp[36];
		int* iRec47 = &iRec47_tmp[4];
		float fZec48[32];
		float fYec25_tmp[36];
		float* fYec25 = &fYec25_tmp[4];
		float fZec49[32];
		float fZec50[32];
		float fZec51[32];
		float fYec26_tmp[36];
		float* fYec26 = &fYec26_tmp[4];
		float fRec46_tmp[36];
		float* fRec46 = &fRec46_tmp[4];
		float fRec45_tmp[36];
		float* fRec45 = &fRec45_tmp[4];
		float fSlow14 = ((iSlow5) ? 1.000562f : 1.0f);
		float fZec52[32];
		float fRec55_tmp[36];
		float* fRec55 = &fRec55_tmp[4];
		float fZec53[32];
		int iRec56_tmp[36];
		int* iRec56 = &iRec56_tmp[4];
		float fYec27_tmp[36];
		float* fYec27 = &fYec27_tmp[4];
		int iRec54_tmp[36];
		int* iRec54 = &iRec54_tmp[4];
		float fZec54[32];
		float fYec28_tmp[36];
		float* fYec28 = &fYec28_tmp[4];
		int iRec53_tmp[36];
		int* iRec53 = &iRec53_tmp[4];
		float fZec55[32];
		float fYec29_tmp[36];
		float* fYec29 = &fYec29_tmp[4];
		float fZec56[32];
		float fZec57[32];
		float fZec58[32];
		float fYec30_tmp[36];
		float* fYec30 = &fYec30_tmp[4];
		float fRec52_tmp[36];
		float* fRec52 = &fRec52_tmp[4];
		float fRec51_tmp[36];
		float* fRec51 = &fRec51_tmp[4];
		float fSlow15 = ((iSlow5) ? 0.997294f : 1.0f);
		float fZec59[32];
		float fRec61_tmp[36];
		float* fRec61 = &fRec61_tmp[4];
		float fZec60[32];
		int iRec62_tmp[36];
		int* iRec62 = &iRec62_tmp[4];
		float fYec31_tmp[36];
		float* fYec31 = &fYec31_tmp[4];
		int iRec60_tmp[36];
		int* iRec60 = &iRec60_tmp[4];
		float fZec61[32];
		float fYec32_tmp[36];
		float* fYec32 = &fYec32_tmp[4];
		int iRec59_tmp[36];
		int* iRec59 = &iRec59_tmp[4];
		float fZec62[32];
		float fYec33_tmp[36];
		float* fYec33 = &fYec33_tmp[4];
		float fZec63[32];
		float fZec64[32];
		float fZec65[32];
		float fYec34_tmp[36];
		float* fYec34 = &fYec34_tmp[4];
		float fRec58_tmp[36];
		float* fRec58 = &fRec58_tmp[4];
		float fRec57_tmp[36];
		float* fRec57 = &fRec57_tmp[4];
		float fSlow16 = ((iSlow5) ? 0.997199f : 1.0f);
		float fZec66[32];
		float fRec67_tmp[36];
		float* fRec67 = &fRec67_tmp[4];
		float fZec67[32];
		int iRec68_tmp[36];
		int* iRec68 = &iRec68_tmp[4];
		float fYec35_tmp[36];
		float* fYec35 = &fYec35_tmp[4];
		int iRec66_tmp[36];
		int* iRec66 = &iRec66_tmp[4];
		float fZec68[32];
		float fYec36_tmp[36];
		float* fYec36 = &fYec36_tmp[4];
		int iRec65_tmp[36];
		int* iRec65 = &iRec65_tmp[4];
		float fZec69[32];
		float fYec37_tmp[36];
		float* fYec37 = &fYec37_tmp[4];
		float fZec70[32];
		float fZec71[32];
		float fZec72[32];
		float fYec38_tmp[36];
		float* fYec38 = &fYec38_tmp[4];
		float fRec64_tmp[36];
		float* fRec64 = &fRec64_tmp[4];
		float fRec63_tmp[36];
		float* fRec63 = &fRec63_tmp[4];
		float fSlow17 = ((iSlow5) ? 0.998889f : 1.0f);
		float fZec73[32];
		float fRec73_tmp[36];
		float* fRec73 = &fRec73_tmp[4];
		float fZec74[32];
		int iRec74_tmp[36];
		int* iRec74 = &iRec74_tmp[4];
		float fYec39_tmp[36];
		float* fYec39 = &fYec39_tmp[4];
		int iRec72_tmp[36];
		int* iRec72 = &iRec72_tmp[4];
		float fZec75[32];
		float fYec40_tmp[36];
		float* fYec40 = &fYec40_tmp[4];
		int iRec71_tmp[36];
		int* iRec71 = &iRec71_tmp[4];
		float fZec76[32];
		float fYec41_tmp[36];
		float* fYec41 = &fYec41_tmp[4];
		float fZec77[32];
		float fZec78[32];
		float fZec79[32];
		float fYec42_tmp[36];
		float* fYec42 = &fYec42_tmp[4];
		float fRec70_tmp[36];
		float* fRec70 = &fRec70_tmp[4];
		float fRec69_tmp[36];
		float* fRec69 = &fRec69_tmp[4];
		int iRec77_tmp[36];
		int* iRec77 = &iRec77_tmp[4];
		float fYec43_tmp[36];
		float* fYec43 = &fYec43_tmp[4];
		float fZec80[32];
		float fYec44_tmp[36];
		float* fYec44 = &fYec44_tmp[4];
		float fRec76_tmp[36];
		float* fRec76 = &fRec76_tmp[4];
		float fRec75_tmp[36];
		float* fRec75 = &fRec75_tmp[4];
		int iRec80_tmp[36];
		int* iRec80 = &iRec80_tmp[4];
		float fYec45_tmp[36];
		float* fYec45 = &fYec45_tmp[4];
		float fZec81[32];
		float fYec46_tmp[36];
		float* fYec46 = &fYec46_tmp[4];
		float fRec79_tmp[36];
		float* fRec79 = &fRec79_tmp[4];
		float fRec78_tmp[36];
		float* fRec78 = &fRec78_tmp[4];
		int iRec83_tmp[36];
		int* iRec83 = &iRec83_tmp[4];
		float fYec47_tmp[36];
		float* fYec47 = &fYec47_tmp[4];
		float fZec82[32];
		float fYec48_tmp[36];
		float* fYec48 = &fYec48_tmp[4];
		float fRec82_tmp[36];
		float* fRec82 = &fRec82_tmp[4];
		float fRec81_tmp[36];
		float* fRec81 = &fRec81_tmp[4];
		int iRec86_tmp[36];
		int* iRec86 = &iRec86_tmp[4];
		float fYec49_tmp[36];
		float* fYec49 = &fYec49_tmp[4];
		float fZec83[32];
		float fYec50_tmp[36];
		float* fYec50 = &fYec50_tmp[4];
		float fRec85_tmp[36];
		float* fRec85 = &fRec85_tmp[4];
		float fRec84_tmp[36];
		float* fRec84 = &fRec84_tmp[4];
		int iRec89_tmp[36];
		int* iRec89 = &iRec89_tmp[4];
		float fYec51_tmp[36];
		float* fYec51 = &fYec51_tmp[4];
		float fZec84[32];
		float fYec52_tmp[36];
		float* fYec52 = &fYec52_tmp[4];
		float fRec88_tmp[36];
		float* fRec88 = &fRec88_tmp[4];
		float fRec87_tmp[36];
		float* fRec87 = &fRec87_tmp[4];
		float fYec53_tmp[36];
		float* fYec53 = &fYec53_tmp[4];
		float fYec54_tmp[36];
		float* fYec54 = &fYec54_tmp[4];
		float fRec90_tmp[36];
		float* fRec90 = &fRec90_tmp[4];
		float fYec55_tmp[36];
		float* fYec55 = &fYec55_tmp[4];
		float fRec92_tmp[36];
		float* fRec92 = &fRec92_tmp[4];
		float fRec91_tmp[36];
		float* fRec91 = &fRec91_tmp[4];
		float fYec56_tmp[36];
		float* fYec56 = &fYec56_tmp[4];
		float fRec94_tmp[36];
		float* fRec94 = &fRec94_tmp[4];
		float fRec93_tmp[36];
		float* fRec93 = &fRec93_tmp[4];
		float fYec57_tmp[36];
		float* fYec57 = &fYec57_tmp[4];
		float fRec96_tmp[36];
		float* fRec96 = &fRec96_tmp[4];
		float fRec95_tmp[36];
		float* fRec95 = &fRec95_tmp[4];
		float fYec58_tmp[36];
		float* fYec58 = &fYec58_tmp[4];
		float fRec98_tmp[36];
		float* fRec98 = &fRec98_tmp[4];
		float fRec97_tmp[36];
		float* fRec97 = &fRec97_tmp[4];
		float fYec59_tmp[36];
		float* fYec59 = &fYec59_tmp[4];
		float fRec100_tmp[36];
		float* fRec100 = &fRec100_tmp[4];
		float fRec99_tmp[36];
		float* fRec99 = &fRec99_tmp[4];
		float fYec60_tmp[36];
		float* fYec60 = &fYec60_tmp[4];
		float fRec102_tmp[36];
		float* fRec102 = &fRec102_tmp[4];
		float fRec101_tmp[36];
		float* fRec101 = &fRec101_tmp[4];
		float fYec61_tmp[36];
		float* fYec61 = &fYec61_tmp[4];
		float fRec104_tmp[36];
		float* fRec104 = &fRec104_tmp[4];
		float fRec103_tmp[36];
		float* fRec103 = &fRec103_tmp[4];
		float fYec62_tmp[36];
		float* fYec62 = &fYec62_tmp[4];
		float fRec106_tmp[36];
		float* fRec106 = &fRec106_tmp[4];
		float fRec105_tmp[36];
		float* fRec105 = &fRec105_tmp[4];
		float fYec63_tmp[36];
		float* fYec63 = &fYec63_tmp[4];
		float fRec108_tmp[36];
		float* fRec108 = &fRec108_tmp[4];
		float fRec107_tmp[36];
		float* fRec107 = &fRec107_tmp[4];
		float fYec64_tmp[36];
		float* fYec64 = &fYec64_tmp[4];
		float fRec110_tmp[36];
		float* fRec110 = &fRec110_tmp[4];
		float fRec109_tmp[36];
		float* fRec109 = &fRec109_tmp[4];
		float fYec65_tmp[36];
		float* fYec65 = &fYec65_tmp[4];
		float fRec112_tmp[36];
		float* fRec112 = &fRec112_tmp[4];
		float fRec111_tmp[36];
		float* fRec111 = &fRec111_tmp[4];
		float fYec66_tmp[36];
		float* fYec66 = &fYec66_tmp[4];
		float fRec114_tmp[36];
		float* fRec114 = &fRec114_tmp[4];
		float fRec113_tmp[36];
		float* fRec113 = &fRec113_tmp[4];
		float fYec67_tmp[36];
		float* fYec67 = &fYec67_tmp[4];
		float fRec116_tmp[36];
		float* fRec116 = &fRec116_tmp[4];
		float fRec115_tmp[36];
		float* fRec115 = &fRec115_tmp[4];
		float fYec68_tmp[36];
		float* fYec68 = &fYec68_tmp[4];
		float fRec118_tmp[36];
		float* fRec118 = &fRec118_tmp[4];
		float fRec117_tmp[36];
		float* fRec117 = &fRec117_tmp[4];
		float fYec69_tmp[36];
		float* fYec69 = &fYec69_tmp[4];
		float fRec120_tmp[36];
		float* fRec120 = &fRec120_tmp[4];
		float fRec119_tmp[36];
		float* fRec119 = &fRec119_tmp[4];
		float fYec70_tmp[36];
		float* fYec70 = &fYec70_tmp[4];
		float fRec122_tmp[36];
		float* fRec122 = &fRec122_tmp[4];
		float fRec121_tmp[36];
		float* fRec121 = &fRec121_tmp[4];
		float fYec71_tmp[36];
		float* fYec71 = &fYec71_tmp[4];
		float fRec124_tmp[36];
		float* fRec124 = &fRec124_tmp[4];
		float fRec123_tmp[36];
		float* fRec123 = &fRec123_tmp[4];
		float fYec72_tmp[36];
		float* fYec72 = &fYec72_tmp[4];
		float fRec126_tmp[36];
		float* fRec126 = &fRec126_tmp[4];
		float fRec125_tmp[36];
		float* fRec125 = &fRec125_tmp[4];
		float fYec73_tmp[36];
		float* fYec73 = &fYec73_tmp[4];
		float fRec128_tmp[36];
		float* fRec128 = &fRec128_tmp[4];
		float fRec127_tmp[36];
		float* fRec127 = &fRec127_tmp[4];
		float fYec74_tmp[36];
		float* fYec74 = &fYec74_tmp[4];
		float fYec75_tmp[36];
		float* fYec75 = &fYec75_tmp[4];
		float fRec129_tmp[36];
		float* fRec129 = &fRec129_tmp[4];
		float fYec76_tmp[36];
		float* fYec76 = &fYec76_tmp[4];
		float fYec77_tmp[36];
		float* fYec77 = &fYec77_tmp[4];
		float fRec130_tmp[36];
		float* fRec130 = &fRec130_tmp[4];
		float fYec78_tmp[36];
		float* fYec78 = &fYec78_tmp[4];
		float fYec79_tmp[36];
		float* fYec79 = &fYec79_tmp[4];
		float fRec131_tmp[36];
		float* fRec131 = &fRec131_tmp[4];
		float fYec80_tmp[36];
		float* fYec80 = &fYec80_tmp[4];
		float fYec81_tmp[36];
		float* fYec81 = &fYec81_tmp[4];
		float fRec132_tmp[36];
		float* fRec132 = &fRec132_tmp[4];
		float fYec82_tmp[36];
		float* fYec82 = &fYec82_tmp[4];
		float fYec83_tmp[36];
		float* fYec83 = &fYec83_tmp[4];
		float fRec133_tmp[36];
		float* fRec133 = &fRec133_tmp[4];
		float fYec84_tmp[36];
		float* fYec84 = &fYec84_tmp[4];
		float fYec85_tmp[36];
		float* fYec85 = &fYec85_tmp[4];
		float fRec134_tmp[36];
		float* fRec134 = &fRec134_tmp[4];
		float fYec86_tmp[36];
		float* fYec86 = &fYec86_tmp[4];
		float fYec87_tmp[36];
		float* fYec87 = &fYec87_tmp[4];
		float fRec135_tmp[36];
		float* fRec135 = &fRec135_tmp[4];
		float fYec88_tmp[36];
		float* fYec88 = &fYec88_tmp[4];
		float fYec89_tmp[36];
		float* fYec89 = &fYec89_tmp[4];
		float fRec136_tmp[36];
		float* fRec136 = &fRec136_tmp[4];
		float fYec90_tmp[36];
		float* fYec90 = &fYec90_tmp[4];
		float fYec91_tmp[36];
		float* fYec91 = &fYec91_tmp[4];
		float fRec137_tmp[36];
		float* fRec137 = &fRec137_tmp[4];
		float fYec92_tmp[36];
		float* fYec92 = &fYec92_tmp[4];
		float fYec93_tmp[36];
		float* fYec93 = &fYec93_tmp[4];
		float fRec138_tmp[36];
		float* fRec138 = &fRec138_tmp[4];
		float fYec94_tmp[36];
		float* fYec94 = &fYec94_tmp[4];
		float fYec95_tmp[36];
		float* fYec95 = &fYec95_tmp[4];
		float fRec139_tmp[36];
		float* fRec139 = &fRec139_tmp[4];
		float fSlow18 = float(fButton0);
		float fVec0_tmp[36];
		float* fVec0 = &fVec0_tmp[4];
		float fZec85[32];
		float fZec86[32];
		float fSlow19 = float(fButton1);
		float fVec1_tmp[36];
		float* fVec1 = &fVec1_tmp[4];
		float fZec87[32];
		float fZec88[32];
		float fSlow20 = float(fButton2);
		float fVec2_tmp[36];
		float* fVec2 = &fVec2_tmp[4];
		float fZec89[32];
		float fZec90[32];
		float fSlow21 = float(fButton3);
		float fVec3_tmp[36];
		float* fVec3 = &fVec3_tmp[4];
		float fZec91[32];
		float fZec92[32];
		float fSlow22 = float(fButton4);
		float fVec4_tmp[36];
		float* fVec4 = &fVec4_tmp[4];
		float fZec93[32];
		float fZec94[32];
		float fSlow23 = float(fButton5);
		float fVec5_tmp[36];
		float* fVec5 = &fVec5_tmp[4];
		float fZec95[32];
		float fZec96[32];
		float fSlow24 = float(fButton6);
		float fVec6_tmp[36];
		float* fVec6 = &fVec6_tmp[4];
		float fZec97[32];
		float fZec98[32];
		float fSlow25 = float(fButton7);
		float fVec7_tmp[36];
		float* fVec7 = &fVec7_tmp[4];
		float fZec99[32];
		float fZec100[32];
		float fSlow26 = float(fButton8);
		float fVec8_tmp[36];
		float* fVec8 = &fVec8_tmp[4];
		float fZec101[32];
		float fZec102[32];
		float fSlow27 = float(fButton9);
		float fVec9_tmp[36];
		float* fVec9 = &fVec9_tmp[4];
		float fZec103[32];
		float fZec104[32];
		float fSlow28 = float(fButton10);
		float fVec10_tmp[36];
		float* fVec10 = &fVec10_tmp[4];
		float fZec105[32];
		float fZec106[32];
		float fSlow29 = float(fButton11);
		float fVec11_tmp[36];
		float* fVec11 = &fVec11_tmp[4];
		float fZec107[32];
		float fZec108[32];
		float fSlow30 = float(fButton12);
		float fVec12_tmp[36];
		float* fVec12 = &fVec12_tmp[4];
		float fZec109[32];
		float fZec110[32];
		float fSlow31 = float(fButton13);
		float fVec13_tmp[36];
		float* fVec13 = &fVec13_tmp[4];
		float fZec111[32];
		float fSlow32 = float(fButton14);
		float fVec14_tmp[36];
		float* fVec14 = &fVec14_tmp[4];
		float fZec112[32];
		float fSlow33 = float(fButton15);
		float fVec15_tmp[36];
		float* fVec15 = &fVec15_tmp[4];
		float fZec113[32];
		float fSlow34 = float(fButton16);
		float fVec16_tmp[36];
		float* fVec16 = &fVec16_tmp[4];
		float fZec114[32];
		float fSlow35 = float(fButton17);
		float fVec17_tmp[36];
		float* fVec17 = &fVec17_tmp[4];
		float fZec115[32];
		float fSlow36 = float(fButton18);
		float fVec18_tmp[36];
		float* fVec18 = &fVec18_tmp[4];
		float fZec116[32];
		float fSlow37 = float(fButton19);
		float fVec19_tmp[36];
		float* fVec19 = &fVec19_tmp[4];
		float fZec117[32];
		float fSlow38 = float(fButton20);
		float fVec20_tmp[36];
		float* fVec20 = &fVec20_tmp[4];
		float fZec118[32];
		float fSlow39 = float(fButton21);
		float fVec21_tmp[36];
		float* fVec21 = &fVec21_tmp[4];
		float fZec119[32];
		float fSlow40 = float(fButton22);
		float fVec22_tmp[36];
		float* fVec22 = &fVec22_tmp[4];
		float fZec120[32];
		float fSlow41 = float(fButton23);
		float fVec23_tmp[36];
		float* fVec23 = &fVec23_tmp[4];
		float fZec121[32];
		float fSlow42 = float(fButton24);
		float fVec24_tmp[36];
		float* fVec24 = &fVec24_tmp[4];
		float fZec122[32];
		float fSlow43 = float(fButton25);
		float fVec25_tmp[36];
		float* fVec25 = &fVec25_tmp[4];
		float fZec123[32];
		float fSlow44 = float(fButton26);
		float fVec26_tmp[36];
		float* fVec26 = &fVec26_tmp[4];
		float fZec124[32];
		float fSlow45 = float(fButton27);
		float fVec27_tmp[36];
		float* fVec27 = &fVec27_tmp[4];
		float fZec125[32];
		float fSlow46 = float(fButton28);
		float fVec28_tmp[36];
		float* fVec28 = &fVec28_tmp[4];
		float fZec126[32];
		float fSlow47 = float(fButton29);
		float fVec29_tmp[36];
		float* fVec29 = &fVec29_tmp[4];
		float fZec127[32];
		float fSlow48 = float(fButton30);
		float fVec30_tmp[36];
		float* fVec30 = &fVec30_tmp[4];
		float fZec128[32];
		float fSlow49 = float(fButton31);
		float fVec31_tmp[36];
		float* fVec31 = &fVec31_tmp[4];
		float fZec129[32];
		float fSlow50 = float(fButton32);
		float fVec32_tmp[36];
		float* fVec32 = &fVec32_tmp[4];
		float fZec130[32];
		float fSlow51 = float(fButton33);
		float fVec33_tmp[36];
		float* fVec33 = &fVec33_tmp[4];
		float fZec131[32];
		float fSlow52 = float(fButton34);
		float fVec34_tmp[36];
		float* fVec34 = &fVec34_tmp[4];
		float fZec132[32];
		float fSlow53 = float(fButton35);
		float fVec35_tmp[36];
		float* fVec35 = &fVec35_tmp[4];
		float fZec133[32];
		float fSlow54 = float(fButton36);
		float fVec36_tmp[36];
		float* fVec36 = &fVec36_tmp[4];
		float fZec134[32];
		float fSlow55 = float(fButton37);
		float fVec37_tmp[36];
		float* fVec37 = &fVec37_tmp[4];
		float fZec135[32];
		float fSlow56 = float(fButton38);
		float fVec38_tmp[36];
		float* fVec38 = &fVec38_tmp[4];
		float fZec136[32];
		float fSlow57 = float(fButton39);
		float fVec39_tmp[36];
		float* fVec39 = &fVec39_tmp[4];
		float fZec137[32];
		float fSlow58 = float(fButton40);
		float fVec40_tmp[36];
		float* fVec40 = &fVec40_tmp[4];
		float fZec138[32];
		float fSlow59 = float(fButton41);
		float fVec41_tmp[36];
		float* fVec41 = &fVec41_tmp[4];
		float fZec139[32];
		float fSlow60 = float(fButton42);
		float fVec42_tmp[36];
		float* fVec42 = &fVec42_tmp[4];
		float fZec140[32];
		float fSlow61 = float(fButton43);
		float fVec43_tmp[36];
		float* fVec43 = &fVec43_tmp[4];
		float fZec141[32];
		float fSlow62 = float(fButton44);
		float fVec44_tmp[36];
		float* fVec44 = &fVec44_tmp[4];
		float fZec142[32];
		float fSlow63 = float(fButton45);
		float fVec45_tmp[36];
		float* fVec45 = &fVec45_tmp[4];
		float fZec143[32];
		float fSlow64 = float(fButton46);
		float fVec46_tmp[36];
		float* fVec46 = &fVec46_tmp[4];
		float fZec144[32];
		float fSlow65 = float(fButton47);
		float fVec47_tmp[36];
		float* fVec47 = &fVec47_tmp[4];
		float fZec145[32];
		float fSlow66 = float(fButton48);
		float fVec48_tmp[36];
		float* fVec48 = &fVec48_tmp[4];
		float fZec146[32];
		float fSlow67 = float(fButton49);
		float fVec49_tmp[36];
		float* fVec49 = &fVec49_tmp[4];
		float fZec147[32];
		float fSlow68 = float(fButton50);
		float fVec50_tmp[36];
		float* fVec50 = &fVec50_tmp[4];
		float fZec148[32];
		float fSlow69 = float(fButton51);
		float fVec51_tmp[36];
		float* fVec51 = &fVec51_tmp[4];
		float fZec149[32];
		float fSlow70 = float(fButton52);
		float fVec52_tmp[36];
		float* fVec52 = &fVec52_tmp[4];
		float fZec150[32];
		float fSlow71 = float(fButton53);
		float fVec53_tmp[36];
		float* fVec53 = &fVec53_tmp[4];
		float fZec151[32];
		float fSlow72 = float(fButton54);
		float fVec54_tmp[36];
		float* fVec54 = &fVec54_tmp[4];
		float fZec152[32];
		float fSlow73 = float(fButton55);
		float fVec55_tmp[36];
		float* fVec55 = &fVec55_tmp[4];
		float fZec153[32];
		float fSlow74 = float(fButton56);
		float fVec56_tmp[36];
		float* fVec56 = &fVec56_tmp[4];
		float fZec154[32];
		float fSlow75 = float(fButton57);
		float fVec57_tmp[36];
		float* fVec57 = &fVec57_tmp[4];
		float fZec155[32];
		float fSlow76 = float(fButton58);
		float fVec58_tmp[36];
		float* fVec58 = &fVec58_tmp[4];
		float fZec156[32];
		float fSlow77 = float(fButton59);
		float fVec59_tmp[36];
		float* fVec59 = &fVec59_tmp[4];
		float fZec157[32];
		float fSlow78 = float(fButton60);
		float fVec60_tmp[36];
		float* fVec60 = &fVec60_tmp[4];
		float fZec158[32];
		float fSlow79 = float(fHslider5);
		float fSlow80 = 1.0f - fSlow79;
		float fZec159[32];
		float fZec160[32];
		float fZec161[32];
		float fZec162[32];
		float fZec163[32];
		float fZec164[32];
		float fZec165[32];
		float fZec166[32];
		float fYec96_tmp[36];
		float* fYec96 = &fYec96_tmp[4];
		float fRec6_tmp[36];
		float* fRec6 = &fRec6_tmp[4];
		int iRec140_tmp[36];
		int* iRec140 = &iRec140_tmp[4];
		int iZec167[32];
		float fSlow81 = ((fSlow4 >= 0.8333333f) ? 1.0f : 0.0f);
		float fZec168[32];
		float fZec169[32];
		float fRec3_tmp[36];
		float* fRec3 = &fRec3_tmp[4];
		int iRec4_tmp[36];
		int* iRec4 = &iRec4_tmp[4];
		float fRec5_tmp[36];
		float* fRec5 = &fRec5_tmp[4];
		float fYec97_tmp[36];
		float* fYec97 = &fYec97_tmp[4];
		float fZec170[32];
		float fZec171[32];
		float fRec2_tmp[36];
		float* fRec2 = &fRec2_tmp[4];
		float fRec1_tmp[36];
		float* fRec1 = &fRec1_tmp[4];
		int iRec145_tmp[36];
		int* iRec145 = &iRec145_tmp[4];
		float fYec98_tmp[36];
		float* fYec98 = &fYec98_tmp[4];
		int iRec144_tmp[36];
		int* iRec144 = &iRec144_tmp[4];
		float fZec172[32];
		float fYec99_tmp[36];
		float* fYec99 = &fYec99_tmp[4];
		float fZec173[32];
		float fYec100_tmp[36];
		float* fYec100 = &fYec100_tmp[4];
		float fRec143_tmp[36];
		float* fRec143 = &fRec143_tmp[4];
		float fRec142_tmp[36];
		float* fRec142 = &fRec142_tmp[4];
		int iRec149_tmp[36];
		int* iRec149 = &iRec149_tmp[4];
		float fYec101_tmp[36];
		float* fYec101 = &fYec101_tmp[4];
		int iRec148_tmp[36];
		int* iRec148 = &iRec148_tmp[4];
		float fZec174[32];
		float fYec102_tmp[36];
		float* fYec102 = &fYec102_tmp[4];
		float fZec175[32];
		float fYec103_tmp[36];
		float* fYec103 = &fYec103_tmp[4];
		float fRec147_tmp[36];
		float* fRec147 = &fRec147_tmp[4];
		float fRec146_tmp[36];
		float* fRec146 = &fRec146_tmp[4];
		int iRec153_tmp[36];
		int* iRec153 = &iRec153_tmp[4];
		float fYec104_tmp[36];
		float* fYec104 = &fYec104_tmp[4];
		int iRec152_tmp[36];
		int* iRec152 = &iRec152_tmp[4];
		float fZec176[32];
		float fYec105_tmp[36];
		float* fYec105 = &fYec105_tmp[4];
		float fZec177[32];
		float fYec106_tmp[36];
		float* fYec106 = &fYec106_tmp[4];
		float fRec151_tmp[36];
		float* fRec151 = &fRec151_tmp[4];
		float fRec150_tmp[36];
		float* fRec150 = &fRec150_tmp[4];
		int iRec157_tmp[36];
		int* iRec157 = &iRec157_tmp[4];
		float fYec107_tmp[36];
		float* fYec107 = &fYec107_tmp[4];
		int iRec156_tmp[36];
		int* iRec156 = &iRec156_tmp[4];
		float fZec178[32];
		float fYec108_tmp[36];
		float* fYec108 = &fYec108_tmp[4];
		float fZec179[32];
		float fYec109_tmp[36];
		float* fYec109 = &fYec109_tmp[4];
		float fRec155_tmp[36];
		float* fRec155 = &fRec155_tmp[4];
		float fRec154_tmp[36];
		float* fRec154 = &fRec154_tmp[4];
		int iRec161_tmp[36];
		int* iRec161 = &iRec161_tmp[4];
		float fYec110_tmp[36];
		float* fYec110 = &fYec110_tmp[4];
		int iRec160_tmp[36];
		int* iRec160 = &iRec160_tmp[4];
		float fZec180[32];
		float fYec111_tmp[36];
		float* fYec111 = &fYec111_tmp[4];
		float fZec181[32];
		float fYec112_tmp[36];
		float* fYec112 = &fYec112_tmp[4];
		float fRec159_tmp[36];
		float* fRec159 = &fRec159_tmp[4];
		float fRec158_tmp[36];
		float* fRec158 = &fRec158_tmp[4];
		int iRec164_tmp[36];
		int* iRec164 = &iRec164_tmp[4];
		float fYec113_tmp[36];
		float* fYec113 = &fYec113_tmp[4];
		float fZec182[32];
		float fYec114_tmp[36];
		float* fYec114 = &fYec114_tmp[4];
		float fRec163_tmp[36];
		float* fRec163 = &fRec163_tmp[4];
		float fRec162_tmp[36];
		float* fRec162 = &fRec162_tmp[4];
		int iRec167_tmp[36];
		int* iRec167 = &iRec167_tmp[4];
		float fYec115_tmp[36];
		float* fYec115 = &fYec115_tmp[4];
		float fZec183[32];
		float fYec116_tmp[36];
		float* fYec116 = &fYec116_tmp[4];
		float fRec166_tmp[36];
		float* fRec166 = &fRec166_tmp[4];
		float fRec165_tmp[36];
		float* fRec165 = &fRec165_tmp[4];
		int iRec170_tmp[36];
		int* iRec170 = &iRec170_tmp[4];
		float fYec117_tmp[36];
		float* fYec117 = &fYec117_tmp[4];
		float fZec184[32];
		float fYec118_tmp[36];
		float* fYec118 = &fYec118_tmp[4];
		float fRec169_tmp[36];
		float* fRec169 = &fRec169_tmp[4];
		float fRec168_tmp[36];
		float* fRec168 = &fRec168_tmp[4];
		int iRec173_tmp[36];
		int* iRec173 = &iRec173_tmp[4];
		float fYec119_tmp[36];
		float* fYec119 = &fYec119_tmp[4];
		float fZec185[32];
		float fYec120_tmp[36];
		float* fYec120 = &fYec120_tmp[4];
		float fRec172_tmp[36];
		float* fRec172 = &fRec172_tmp[4];
		float fRec171_tmp[36];
		float* fRec171 = &fRec171_tmp[4];
		float fYec121_tmp[36];
		float* fYec121 = &fYec121_tmp[4];
		float fRec175_tmp[36];
		float* fRec175 = &fRec175_tmp[4];
		float fRec174_tmp[36];
		float* fRec174 = &fRec174_tmp[4];
		float fYec122_tmp[36];
		float* fYec122 = &fYec122_tmp[4];
		float fRec177_tmp[36];
		float* fRec177 = &fRec177_tmp[4];
		float fRec176_tmp[36];
		float* fRec176 = &fRec176_tmp[4];
		float fYec123_tmp[36];
		float* fYec123 = &fYec123_tmp[4];
		float fRec179_tmp[36];
		float* fRec179 = &fRec179_tmp[4];
		float fRec178_tmp[36];
		float* fRec178 = &fRec178_tmp[4];
		float fYec124_tmp[36];
		float* fYec124 = &fYec124_tmp[4];
		float fRec181_tmp[36];
		float* fRec181 = &fRec181_tmp[4];
		float fRec180_tmp[36];
		float* fRec180 = &fRec180_tmp[4];
		float fYec125_tmp[36];
		float* fYec125 = &fYec125_tmp[4];
		float fRec183_tmp[36];
		float* fRec183 = &fRec183_tmp[4];
		float fRec182_tmp[36];
		float* fRec182 = &fRec182_tmp[4];
		int iRec186_tmp[36];
		int* iRec186 = &iRec186_tmp[4];
		float fYec126_tmp[36];
		float* fYec126 = &fYec126_tmp[4];
		float fZec186[32];
		float fYec127_tmp[36];
		float* fYec127 = &fYec127_tmp[4];
		float fRec185_tmp[36];
		float* fRec185 = &fRec185_tmp[4];
		float fRec184_tmp[36];
		float* fRec184 = &fRec184_tmp[4];
		int iRec189_tmp[36];
		int* iRec189 = &iRec189_tmp[4];
		float fYec128_tmp[36];
		float* fYec128 = &fYec128_tmp[4];
		float fZec187[32];
		float fYec129_tmp[36];
		float* fYec129 = &fYec129_tmp[4];
		float fRec188_tmp[36];
		float* fRec188 = &fRec188_tmp[4];
		float fRec187_tmp[36];
		float* fRec187 = &fRec187_tmp[4];
		int iRec192_tmp[36];
		int* iRec192 = &iRec192_tmp[4];
		float fYec130_tmp[36];
		float* fYec130 = &fYec130_tmp[4];
		float fZec188[32];
		float fYec131_tmp[36];
		float* fYec131 = &fYec131_tmp[4];
		float fRec191_tmp[36];
		float* fRec191 = &fRec191_tmp[4];
		float fRec190_tmp[36];
		float* fRec190 = &fRec190_tmp[4];
		float fZec189[32];
		float fZec190[32];
		float fZec191[32];
		float fZec192[32];
		float fZec193[32];
		float fZec194[32];
		float fZec195[32];
		float fZec196[32];
		float fZec197[32];
		float fZec198[32];
		float fZec199[32];
		float fZec200[32];
		float fZec201[32];
		float fZec202[32];
		float fZec203[32];
		float fZec204[32];
		float fZec205[32];
		float fZec206[32];
		float fZec207[32];
		float fZec208[32];
		float fZec209[32];
		float fZec210[32];
		float fZec211[32];
		float fZec212[32];
		float fZec213[32];
		float fZec214[32];
		float fZec215[32];
		float fZec216[32];
		float fZec217[32];
		float fZec218[32];
		float fZec219[32];
		float fZec220[32];
		float fZec221[32];
		float fZec222[32];
		float fZec223[32];
		float fZec224[32];
		float fZec225[32];
		float fZec226[32];
		float fZec227[32];
		float fZec228[32];
		float fZec229[32];
		float fZec230[32];
		float fZec231[32];
		float fZec232[32];
		float fZec233[32];
		float fZec234[32];
		float fZec235[32];
		float fZec236[32];
		float fZec237[32];
		float fYec132_tmp[36];
		float* fYec132 = &fYec132_tmp[4];
		float fRec141_tmp[36];
		float* fRec141 = &fRec141_tmp[4];
		int iRec197_tmp[36];
		int* iRec197 = &iRec197_tmp[4];
		float fYec133_tmp[36];
		float* fYec133 = &fYec133_tmp[4];
		int iRec196_tmp[36];
		int* iRec196 = &iRec196_tmp[4];
		float fZec238[32];
		float fYec134_tmp[36];
		float* fYec134 = &fYec134_tmp[4];
		int iRec195_tmp[36];
		int* iRec195 = &iRec195_tmp[4];
		float fZec239[32];
		float fYec135_tmp[36];
		float* fYec135 = &fYec135_tmp[4];
		float fZec240[32];
		float fYec136_tmp[36];
		float* fYec136 = &fYec136_tmp[4];
		float fRec194_tmp[36];
		float* fRec194 = &fRec194_tmp[4];
		float fRec193_tmp[36];
		float* fRec193 = &fRec193_tmp[4];
		int iRec202_tmp[36];
		int* iRec202 = &iRec202_tmp[4];
		float fYec137_tmp[36];
		float* fYec137 = &fYec137_tmp[4];
		int iRec201_tmp[36];
		int* iRec201 = &iRec201_tmp[4];
		float fZec241[32];
		float fYec138_tmp[36];
		float* fYec138 = &fYec138_tmp[4];
		int iRec200_tmp[36];
		int* iRec200 = &iRec200_tmp[4];
		float fZec242[32];
		float fYec139_tmp[36];
		float* fYec139 = &fYec139_tmp[4];
		float fZec243[32];
		float fYec140_tmp[36];
		float* fYec140 = &fYec140_tmp[4];
		float fRec199_tmp[36];
		float* fRec199 = &fRec199_tmp[4];
		float fRec198_tmp[36];
		float* fRec198 = &fRec198_tmp[4];
		int iRec207_tmp[36];
		int* iRec207 = &iRec207_tmp[4];
		float fYec141_tmp[36];
		float* fYec141 = &fYec141_tmp[4];
		int iRec206_tmp[36];
		int* iRec206 = &iRec206_tmp[4];
		float fZec244[32];
		float fYec142_tmp[36];
		float* fYec142 = &fYec142_tmp[4];
		int iRec205_tmp[36];
		int* iRec205 = &iRec205_tmp[4];
		float fZec245[32];
		float fYec143_tmp[36];
		float* fYec143 = &fYec143_tmp[4];
		float fZec246[32];
		float fYec144_tmp[36];
		float* fYec144 = &fYec144_tmp[4];
		float fRec204_tmp[36];
		float* fRec204 = &fRec204_tmp[4];
		float fRec203_tmp[36];
		float* fRec203 = &fRec203_tmp[4];
		int iRec212_tmp[36];
		int* iRec212 = &iRec212_tmp[4];
		float fYec145_tmp[36];
		float* fYec145 = &fYec145_tmp[4];
		int iRec211_tmp[36];
		int* iRec211 = &iRec211_tmp[4];
		float fZec247[32];
		float fYec146_tmp[36];
		float* fYec146 = &fYec146_tmp[4];
		int iRec210_tmp[36];
		int* iRec210 = &iRec210_tmp[4];
		float fZec248[32];
		float fYec147_tmp[36];
		float* fYec147 = &fYec147_tmp[4];
		float fZec249[32];
		float fYec148_tmp[36];
		float* fYec148 = &fYec148_tmp[4];
		float fRec209_tmp[36];
		float* fRec209 = &fRec209_tmp[4];
		float fRec208_tmp[36];
		float* fRec208 = &fRec208_tmp[4];
		int iRec217_tmp[36];
		int* iRec217 = &iRec217_tmp[4];
		float fYec149_tmp[36];
		float* fYec149 = &fYec149_tmp[4];
		int iRec216_tmp[36];
		int* iRec216 = &iRec216_tmp[4];
		float fZec250[32];
		float fYec150_tmp[36];
		float* fYec150 = &fYec150_tmp[4];
		int iRec215_tmp[36];
		int* iRec215 = &iRec215_tmp[4];
		float fZec251[32];
		float fYec151_tmp[36];
		float* fYec151 = &fYec151_tmp[4];
		float fZec252[32];
		float fYec152_tmp[36];
		float* fYec152 = &fYec152_tmp[4];
		float fRec214_tmp[36];
		float* fRec214 = &fRec214_tmp[4];
		float fRec213_tmp[36];
		float* fRec213 = &fRec213_tmp[4];
		int iRec222_tmp[36];
		int* iRec222 = &iRec222_tmp[4];
		float fYec153_tmp[36];
		float* fYec153 = &fYec153_tmp[4];
		int iRec221_tmp[36];
		int* iRec221 = &iRec221_tmp[4];
		float fZec253[32];
		float fYec154_tmp[36];
		float* fYec154 = &fYec154_tmp[4];
		int iRec220_tmp[36];
		int* iRec220 = &iRec220_tmp[4];
		float fZec254[32];
		float fYec155_tmp[36];
		float* fYec155 = &fYec155_tmp[4];
		float fZec255[32];
		float fYec156_tmp[36];
		float* fYec156 = &fYec156_tmp[4];
		float fRec219_tmp[36];
		float* fRec219 = &fRec219_tmp[4];
		float fRec218_tmp[36];
		float* fRec218 = &fRec218_tmp[4];
		int iRec227_tmp[36];
		int* iRec227 = &iRec227_tmp[4];
		float fYec157_tmp[36];
		float* fYec157 = &fYec157_tmp[4];
		int iRec226_tmp[36];
		int* iRec226 = &iRec226_tmp[4];
		float fZec256[32];
		float fYec158_tmp[36];
		float* fYec158 = &fYec158_tmp[4];
		int iRec225_tmp[36];
		int* iRec225 = &iRec225_tmp[4];
		float fZec257[32];
		float fYec159_tmp[36];
		float* fYec159 = &fYec159_tmp[4];
		float fZec258[32];
		float fYec160_tmp[36];
		float* fYec160 = &fYec160_tmp[4];
		float fRec224_tmp[36];
		float* fRec224 = &fRec224_tmp[4];
		float fRec223_tmp[36];
		float* fRec223 = &fRec223_tmp[4];
		int iRec231_tmp[36];
		int* iRec231 = &iRec231_tmp[4];
		float fYec161_tmp[36];
		float* fYec161 = &fYec161_tmp[4];
		int iRec230_tmp[36];
		int* iRec230 = &iRec230_tmp[4];
		float fZec259[32];
		float fYec162_tmp[36];
		float* fYec162 = &fYec162_tmp[4];
		float fZec260[32];
		float fYec163_tmp[36];
		float* fYec163 = &fYec163_tmp[4];
		float fRec229_tmp[36];
		float* fRec229 = &fRec229_tmp[4];
		float fRec228_tmp[36];
		float* fRec228 = &fRec228_tmp[4];
		int iRec235_tmp[36];
		int* iRec235 = &iRec235_tmp[4];
		float fYec164_tmp[36];
		float* fYec164 = &fYec164_tmp[4];
		int iRec234_tmp[36];
		int* iRec234 = &iRec234_tmp[4];
		float fZec261[32];
		float fYec165_tmp[36];
		float* fYec165 = &fYec165_tmp[4];
		float fZec262[32];
		float fYec166_tmp[36];
		float* fYec166 = &fYec166_tmp[4];
		float fRec233_tmp[36];
		float* fRec233 = &fRec233_tmp[4];
		float fRec232_tmp[36];
		float* fRec232 = &fRec232_tmp[4];
		int iRec239_tmp[36];
		int* iRec239 = &iRec239_tmp[4];
		float fYec167_tmp[36];
		float* fYec167 = &fYec167_tmp[4];
		int iRec238_tmp[36];
		int* iRec238 = &iRec238_tmp[4];
		float fZec263[32];
		float fYec168_tmp[36];
		float* fYec168 = &fYec168_tmp[4];
		float fZec264[32];
		float fYec169_tmp[36];
		float* fYec169 = &fYec169_tmp[4];
		float fRec237_tmp[36];
		float* fRec237 = &fRec237_tmp[4];
		float fRec236_tmp[36];
		float* fRec236 = &fRec236_tmp[4];
		int iRec243_tmp[36];
		int* iRec243 = &iRec243_tmp[4];
		float fYec170_tmp[36];
		float* fYec170 = &fYec170_tmp[4];
		int iRec242_tmp[36];
		int* iRec242 = &iRec242_tmp[4];
		float fZec265[32];
		float fYec171_tmp[36];
		float* fYec171 = &fYec171_tmp[4];
		float fZec266[32];
		float fYec172_tmp[36];
		float* fYec172 = &fYec172_tmp[4];
		float fRec241_tmp[36];
		float* fRec241 = &fRec241_tmp[4];
		float fRec240_tmp[36];
		float* fRec240 = &fRec240_tmp[4];
		int iRec247_tmp[36];
		int* iRec247 = &iRec247_tmp[4];
		float fYec173_tmp[36];
		float* fYec173 = &fYec173_tmp[4];
		int iRec246_tmp[36];
		int* iRec246 = &iRec246_tmp[4];
		float fZec267[32];
		float fYec174_tmp[36];
		float* fYec174 = &fYec174_tmp[4];
		float fZec268[32];
		float fYec175_tmp[36];
		float* fYec175 = &fYec175_tmp[4];
		float fRec245_tmp[36];
		float* fRec245 = &fRec245_tmp[4];
		float fRec244_tmp[36];
		float* fRec244 = &fRec244_tmp[4];
		float fYec176_tmp[36];
		float* fYec176 = &fYec176_tmp[4];
		float fRec249_tmp[36];
		float* fRec249 = &fRec249_tmp[4];
		float fRec248_tmp[36];
		float* fRec248 = &fRec248_tmp[4];
		float fYec177_tmp[36];
		float* fYec177 = &fYec177_tmp[4];
		float fRec251_tmp[36];
		float* fRec251 = &fRec251_tmp[4];
		float fRec250_tmp[36];
		float* fRec250 = &fRec250_tmp[4];
		float fYec178_tmp[36];
		float* fYec178 = &fYec178_tmp[4];
		float fRec253_tmp[36];
		float* fRec253 = &fRec253_tmp[4];
		float fRec252_tmp[36];
		float* fRec252 = &fRec252_tmp[4];
		float fYec179_tmp[36];
		float* fYec179 = &fYec179_tmp[4];
		float fRec255_tmp[36];
		float* fRec255 = &fRec255_tmp[4];
		float fRec254_tmp[36];
		float* fRec254 = &fRec254_tmp[4];
		float fYec180_tmp[36];
		float* fYec180 = &fYec180_tmp[4];
		float fRec257_tmp[36];
		float* fRec257 = &fRec257_tmp[4];
		float fRec256_tmp[36];
		float* fRec256 = &fRec256_tmp[4];
		float fYec181_tmp[36];
		float* fYec181 = &fYec181_tmp[4];
		float fRec259_tmp[36];
		float* fRec259 = &fRec259_tmp[4];
		float fRec258_tmp[36];
		float* fRec258 = &fRec258_tmp[4];
		float fYec182_tmp[36];
		float* fYec182 = &fYec182_tmp[4];
		float fRec261_tmp[36];
		float* fRec261 = &fRec261_tmp[4];
		float fRec260_tmp[36];
		float* fRec260 = &fRec260_tmp[4];
		float fYec183_tmp[36];
		float* fYec183 = &fYec183_tmp[4];
		float fRec263_tmp[36];
		float* fRec263 = &fRec263_tmp[4];
		float fRec262_tmp[36];
		float* fRec262 = &fRec262_tmp[4];
		float fYec184_tmp[36];
		float* fYec184 = &fYec184_tmp[4];
		float fRec265_tmp[36];
		float* fRec265 = &fRec265_tmp[4];
		float fRec264_tmp[36];
		float* fRec264 = &fRec264_tmp[4];
		float fYec185_tmp[36];
		float* fYec185 = &fYec185_tmp[4];
		float fRec267_tmp[36];
		float* fRec267 = &fRec267_tmp[4];
		float fRec266_tmp[36];
		float* fRec266 = &fRec266_tmp[4];
		float fYec186_tmp[36];
		float* fYec186 = &fYec186_tmp[4];
		float fRec269_tmp[36];
		float* fRec269 = &fRec269_tmp[4];
		float fRec268_tmp[36];
		float* fRec268 = &fRec268_tmp[4];
		float fYec187_tmp[36];
		float* fYec187 = &fYec187_tmp[4];
		float fRec271_tmp[36];
		float* fRec271 = &fRec271_tmp[4];
		float fRec270_tmp[36];
		float* fRec270 = &fRec270_tmp[4];
		float fYec188_tmp[36];
		float* fYec188 = &fYec188_tmp[4];
		float fRec273_tmp[36];
		float* fRec273 = &fRec273_tmp[4];
		float fRec272_tmp[36];
		float* fRec272 = &fRec272_tmp[4];
		float fYec189_tmp[36];
		float* fYec189 = &fYec189_tmp[4];
		float fRec275_tmp[36];
		float* fRec275 = &fRec275_tmp[4];
		float fRec274_tmp[36];
		float* fRec274 = &fRec274_tmp[4];
		float fYec190_tmp[36];
		float* fYec190 = &fYec190_tmp[4];
		float fRec277_tmp[36];
		float* fRec277 = &fRec277_tmp[4];
		float fRec276_tmp[36];
		float* fRec276 = &fRec276_tmp[4];
		float fYec191_tmp[36];
		float* fYec191 = &fYec191_tmp[4];
		float fRec279_tmp[36];
		float* fRec279 = &fRec279_tmp[4];
		float fRec278_tmp[36];
		float* fRec278 = &fRec278_tmp[4];
		float fYec192_tmp[36];
		float* fYec192 = &fYec192_tmp[4];
		float fRec281_tmp[36];
		float* fRec281 = &fRec281_tmp[4];
		float fRec280_tmp[36];
		float* fRec280 = &fRec280_tmp[4];
		float fYec193_tmp[36];
		float* fYec193 = &fYec193_tmp[4];
		float fRec283_tmp[36];
		float* fRec283 = &fRec283_tmp[4];
		float fRec282_tmp[36];
		float* fRec282 = &fRec282_tmp[4];
		float fYec194_tmp[36];
		float* fYec194 = &fYec194_tmp[4];
		float fRec285_tmp[36];
		float* fRec285 = &fRec285_tmp[4];
		float fRec284_tmp[36];
		float* fRec284 = &fRec284_tmp[4];
		float fZec269[32];
		float fZec270[32];
		float fZec271[32];
		float fYec195_tmp[36];
		float* fYec195 = &fYec195_tmp[4];
		float fRec286_tmp[36];
		float* fRec286 = &fRec286_tmp[4];
		float fZec272[32];
		float fZec273[32];
		float fZec274[32];
		float fZec275[32];
		float fZec276[32];
		float fZec277[32];
		float fZec278[32];
		float fZec279[32];
		float fZec280[32];
		float fZec281[32];
		float fZec282[32];
		float fZec283[32];
		float fZec284[32];
		float fZec285[32];
		float fZec286[32];
		float fZec287[32];
		float fZec288[32];
		float fZec289[32];
		float fZec290[32];
		float fZec291[32];
		float fZec292[32];
		float fZec293[32];
		float fZec294[32];
		float fZec295[32];
		float fZec296[32];
		float fZec297[32];
		float fZec298[32];
		float fZec299[32];
		float fZec300[32];
		float fZec301[32];
		float fZec302[32];
		float fZec303[32];
		float fZec304[32];
		float fZec305[32];
		float fZec306[32];
		float fZec307[32];
		float fZec308[32];
		float fZec309[32];
		float fZec310[32];
		float fZec311[32];
		float fZec312[32];
		float fZec313[32];
		float fZec314[32];
		float fZec315[32];
		float fZec316[32];
		float fZec317[32];
		float fZec318[32];
		float fYec196_tmp[36];
		float* fYec196 = &fYec196_tmp[4];
		float fRec287_tmp[36];
		float* fRec287 = &fRec287_tmp[4];
		float fZec319[32];
		float fZec320[32];
		float fZec321[32];
		float fZec322[32];
		float fZec323[32];
		float fZec324[32];
		float fZec325[32];
		float fZec326[32];
		float fZec327[32];
		float fZec328[32];
		float fZec329[32];
		float fZec330[32];
		float fZec331[32];
		float fZec332[32];
		float fZec333[32];
		float fZec334[32];
		float fZec335[32];
		float fZec336[32];
		float fZec337[32];
		float fZec338[32];
		float fZec339[32];
		float fZec340[32];
		float fZec341[32];
		float fZec342[32];
		float fZec343[32];
		float fZec344[32];
		float fZec345[32];
		float fZec346[32];
		float fZec347[32];
		float fZec348[32];
		float fZec349[32];
		float fZec350[32];
		float fZec351[32];
		float fZec352[32];
		float fYec197_tmp[36];
		float* fYec197 = &fYec197_tmp[4];
		float fRec288_tmp[36];
		float* fRec288 = &fRec288_tmp[4];
		float fZec353[32];
		float fZec354[32];
		float fZec355[32];
		float fZec356[32];
		float fZec357[32];
		float fZec358[32];
		float fZec359[32];
		float fZec360[32];
		float fZec361[32];
		float fZec362[32];
		float fYec198_tmp[36];
		float* fYec198 = &fYec198_tmp[4];
		float fRec289_tmp[36];
		float* fRec289 = &fRec289_tmp[4];
		float fZec363[32];
		float fZec364[32];
		float fZec365[32];
		float fYec199_tmp[36];
		float* fYec199 = &fYec199_tmp[4];
		float fRec290_tmp[36];
		float* fRec290 = &fRec290_tmp[4];
		float fZec366[32];
		float fZec367[32];
		float fSlow82 = float(fVslider0);
		float fSlow83 = fSlow82 - 2.81f * (mydsp_faustpower2_f(fSlow82) - mydsp_faustpower3_f(fSlow82));
		float fYec200_tmp[36];
		float* fYec200 = &fYec200_tmp[4];
		float fRec292_tmp[36];
		float* fRec292 = &fRec292_tmp[4];
		float fSlow84 = 0.45833334f * fSlow83;
		float fYec201_tmp[36];
		float* fYec201 = &fYec201_tmp[4];
		float fRec291_tmp[36];
		float* fRec291 = &fRec291_tmp[4];
		float fZec368[32];
		float fZec369[32];
		float fSlow85 = float(fVslider1);
		float fSlow86 = fSlow85 - 2.81f * (mydsp_faustpower2_f(fSlow85) - mydsp_faustpower3_f(fSlow85));
		float fYec202_tmp[36];
		float* fYec202 = &fYec202_tmp[4];
		float fRec294_tmp[36];
		float* fRec294 = &fRec294_tmp[4];
		float fSlow87 = 0.45833334f * fSlow86;
		float fYec203_tmp[36];
		float* fYec203 = &fYec203_tmp[4];
		float fRec293_tmp[36];
		float* fRec293 = &fRec293_tmp[4];
		float fZec370[32];
		float fSlow88 = float(fVslider2);
		float fSlow89 = fSlow88 - 2.81f * (mydsp_faustpower2_f(fSlow88) - mydsp_faustpower3_f(fSlow88));
		float fYec204_tmp[36];
		float* fYec204 = &fYec204_tmp[4];
		float fRec296_tmp[36];
		float* fRec296 = &fRec296_tmp[4];
		float fSlow90 = 0.45833334f * fSlow89;
		float fYec205_tmp[36];
		float* fYec205 = &fYec205_tmp[4];
		float fRec295_tmp[36];
		float* fRec295 = &fRec295_tmp[4];
		float fZec371[32];
		float fSlow91 = float(fVslider3);
		float fSlow92 = fSlow91 - 2.81f * (mydsp_faustpower2_f(fSlow91) - mydsp_faustpower3_f(fSlow91));
		float fYec206_tmp[36];
		float* fYec206 = &fYec206_tmp[4];
		float fRec298_tmp[36];
		float* fRec298 = &fRec298_tmp[4];
		float fSlow93 = 0.45833334f * fSlow92;
		float fYec207_tmp[36];
		float* fYec207 = &fYec207_tmp[4];
		float fRec297_tmp[36];
		float* fRec297 = &fRec297_tmp[4];
		float fRec300_tmp[36];
		float* fRec300 = &fRec300_tmp[4];
		float fRec299_tmp[36];
		float* fRec299 = &fRec299_tmp[4];
		float fRec302_tmp[36];
		float* fRec302 = &fRec302_tmp[4];
		float fRec301_tmp[36];
		float* fRec301 = &fRec301_tmp[4];
		float fRec304_tmp[36];
		float* fRec304 = &fRec304_tmp[4];
		float fRec303_tmp[36];
		float* fRec303 = &fRec303_tmp[4];
		float fRec306_tmp[36];
		float* fRec306 = &fRec306_tmp[4];
		float fRec305_tmp[36];
		float* fRec305 = &fRec305_tmp[4];
		float fSlow94 = float(fVslider4);
		float fSlow95 = fSlow94 - 2.81f * (mydsp_faustpower2_f(fSlow94) - mydsp_faustpower3_f(fSlow94));
		float fSlow96 = float(fVslider5);
		float fSlow97 = fSlow96 - 2.81f * (mydsp_faustpower2_f(fSlow96) - mydsp_faustpower3_f(fSlow96));
		float fRec307_tmp[36];
		float* fRec307 = &fRec307_tmp[4];
		float fSlow98 = 0.02f * float(fVslider6);
		float fRec308_tmp[36];
		float* fRec308 = &fRec308_tmp[4];
		float fZec372[32];
		float fSlow99 = 0.96153843f * float(fVslider7);
		float fSlow100 = 0.6f * (0.9807692f - fSlow99);
		float fSlow101 = fSlow99 + 0.01923077f;
		float fSlow102 = float(fHslider6);
		float fSlow103 = 2.5f * fSlow102;
		float fZec373[32];
		float fSlow104 = float(fVslider8);
		float fSlow105 = fSlow104 - 2.81f * (mydsp_faustpower2_f(fSlow104) - mydsp_faustpower3_f(fSlow104));
		float fZec374[32];
		float fSlow106 = float(fVslider9);
		float fSlow107 = fSlow106 - 2.81f * (mydsp_faustpower2_f(fSlow106) - mydsp_faustpower3_f(fSlow106));
		float fSlow108 = float(fVslider10);
		float fSlow109 = fSlow108 - 2.81f * (mydsp_faustpower2_f(fSlow108) - mydsp_faustpower3_f(fSlow108));
		float fZec375[32];
		float fZec376[32];
		float fZec377[32];
		float fZec378[32];
		float fZec379[32];
		float fSlow110 = float(fVslider11);
		float fSlow111 = fSlow110 - 2.81f * (mydsp_faustpower2_f(fSlow110) - mydsp_faustpower3_f(fSlow110));
		float fZec380[32];
		float fSlow112 = float(fVslider12);
		float fSlow113 = fSlow112 - 2.81f * (mydsp_faustpower2_f(fSlow112) - mydsp_faustpower3_f(fSlow112));
		float fSlow114 = float(fVslider13);
		float fSlow115 = fSlow114 - 2.81f * (mydsp_faustpower2_f(fSlow114) - mydsp_faustpower3_f(fSlow114));
		float fSlow116 = float(fVslider14);
		float fSlow117 = fSlow116 - 2.81f * (mydsp_faustpower2_f(fSlow116) - mydsp_faustpower3_f(fSlow116));
		float fSlow118 = 1.0f - fSlow102;
		float fZec381[32];
		float fSlow119 = ((fSlow4 > 0.5f) ? 0.01357f : 0.0f);
		float fYec208_tmp[36];
		float* fYec208 = &fYec208_tmp[4];
		float fSlow120 = 4.5f * float(fHslider7);
		float fZec382[32];
		float fZec383[32];
		int vindex = 0;
		/* Main loop */
		for (vindex = 0; vindex <= (count - 32); vindex = vindex + 32) {
			FAUSTFLOAT* output0 = &output0_ptr[vindex];
			FAUSTFLOAT* output1 = &output1_ptr[vindex];
			FAUSTFLOAT* output2 = &output2_ptr[vindex];
			int vsize = 32;
			/* Recursive loop 0 */
			/* Pre code */
			for (int j2 = 0; j2 < 4; j2 = j2 + 1) {
				fRec11_tmp[j2] = fRec11_perm[j2];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec11[i] = fSlow1 + ((fRec11[i - 1] > 1.0f) ? fRec11[i - 1] + -1.0f : fRec11[i - 1]);
			}
			/* Post code */
			for (int j3 = 0; j3 < 4; j3 = j3 + 1) {
				fRec11_perm[j3] = fRec11_tmp[vsize + j3];
			}
			/* Vectorizable loop 1 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec0[i] = fSlow3 + fSlow2 * std::sin(6.2831855f * fRec11[i]) + 1.0f;
			}
			/* Recursive loop 2 */
			/* Pre code */
			for (int j4 = 0; j4 < 4; j4 = j4 + 1) {
				fRec10_tmp[j4] = fRec10_perm[j4];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec1[i] = fRec10[i - 1] + fConst2 * fSlow6 * fZec0[i];
				fRec10[i] = ((fZec1[i] > 1.0f) ? fZec1[i] + -1.0f : fZec1[i]);
			}
			/* Post code */
			for (int j5 = 0; j5 < 4; j5 = j5 + 1) {
				fRec10_perm[j5] = fRec10_tmp[vsize + j5];
			}
			/* Recursive loop 3 */
			/* Pre code */
			for (int j20 = 0; j20 < 4; j20 = j20 + 1) {
				fRec16_tmp[j20] = fRec16_perm[j20];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec7[i] = fRec16[i - 1] + fConst6 * fSlow7 * fZec0[i];
				fRec16[i] = ((fZec7[i] > 1.0f) ? fZec7[i] + -1.0f : fZec7[i]);
			}
			/* Post code */
			for (int j21 = 0; j21 < 4; j21 = j21 + 1) {
				fRec16_perm[j21] = fRec16_tmp[vsize + j21];
			}
			/* Recursive loop 4 */
			/* Pre code */
			for (int j36 = 0; j36 < 4; j36 = j36 + 1) {
				fRec21_tmp[j36] = fRec21_perm[j36];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec13[i] = fRec21[i - 1] + fConst8 * fSlow8 * fZec0[i];
				fRec21[i] = ((fZec13[i] > 1.0f) ? fZec13[i] + -1.0f : fZec13[i]);
			}
			/* Post code */
			for (int j37 = 0; j37 < 4; j37 = j37 + 1) {
				fRec21_perm[j37] = fRec21_tmp[vsize + j37];
			}
			/* Recursive loop 5 */
			/* Pre code */
			for (int j52 = 0; j52 < 4; j52 = j52 + 1) {
				fRec26_tmp[j52] = fRec26_perm[j52];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec19[i] = fRec26[i - 1] + fConst9 * fSlow9 * fZec0[i];
				fRec26[i] = ((fZec19[i] > 1.0f) ? fZec19[i] + -1.0f : fZec19[i]);
			}
			/* Post code */
			for (int j53 = 0; j53 < 4; j53 = j53 + 1) {
				fRec26_perm[j53] = fRec26_tmp[vsize + j53];
			}
			/* Recursive loop 6 */
			/* Pre code */
			for (int j68 = 0; j68 < 4; j68 = j68 + 1) {
				fRec31_tmp[j68] = fRec31_perm[j68];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec25[i] = fRec31[i - 1] + fConst10 * fSlow10 * fZec0[i];
				fRec31[i] = ((fZec25[i] > 1.0f) ? fZec25[i] + -1.0f : fZec25[i]);
			}
			/* Post code */
			for (int j69 = 0; j69 < 4; j69 = j69 + 1) {
				fRec31_perm[j69] = fRec31_tmp[vsize + j69];
			}
			/* Recursive loop 7 */
			/* Pre code */
			for (int j84 = 0; j84 < 4; j84 = j84 + 1) {
				fRec37_tmp[j84] = fRec37_perm[j84];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec31[i] = fRec37[i - 1] + fConst11 * fSlow11 * fZec0[i];
				fRec37[i] = ((fZec31[i] > 1.0f) ? fZec31[i] + -1.0f : fZec31[i]);
			}
			/* Post code */
			for (int j85 = 0; j85 < 4; j85 = j85 + 1) {
				fRec37_perm[j85] = fRec37_tmp[vsize + j85];
			}
			/* Recursive loop 8 */
			/* Pre code */
			for (int j104 = 0; j104 < 4; j104 = j104 + 1) {
				fRec43_tmp[j104] = fRec43_perm[j104];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec38[i] = fRec43[i - 1] + fConst13 * fSlow12 * fZec0[i];
				fRec43[i] = ((fZec38[i] > 1.0f) ? fZec38[i] + -1.0f : fZec38[i]);
			}
			/* Post code */
			for (int j105 = 0; j105 < 4; j105 = j105 + 1) {
				fRec43_perm[j105] = fRec43_tmp[vsize + j105];
			}
			/* Recursive loop 9 */
			/* Pre code */
			for (int j124 = 0; j124 < 4; j124 = j124 + 1) {
				fRec49_tmp[j124] = fRec49_perm[j124];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec45[i] = fRec49[i - 1] + fConst14 * fSlow13 * fZec0[i];
				fRec49[i] = ((fZec45[i] > 1.0f) ? fZec45[i] + -1.0f : fZec45[i]);
			}
			/* Post code */
			for (int j125 = 0; j125 < 4; j125 = j125 + 1) {
				fRec49_perm[j125] = fRec49_tmp[vsize + j125];
			}
			/* Recursive loop 10 */
			/* Pre code */
			for (int j144 = 0; j144 < 4; j144 = j144 + 1) {
				fRec55_tmp[j144] = fRec55_perm[j144];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec52[i] = fRec55[i - 1] + fConst15 * fSlow14 * fZec0[i];
				fRec55[i] = ((fZec52[i] > 1.0f) ? fZec52[i] + -1.0f : fZec52[i]);
			}
			/* Post code */
			for (int j145 = 0; j145 < 4; j145 = j145 + 1) {
				fRec55_perm[j145] = fRec55_tmp[vsize + j145];
			}
			/* Recursive loop 11 */
			/* Pre code */
			for (int j164 = 0; j164 < 4; j164 = j164 + 1) {
				fRec61_tmp[j164] = fRec61_perm[j164];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec59[i] = fRec61[i - 1] + fConst16 * fSlow15 * fZec0[i];
				fRec61[i] = ((fZec59[i] > 1.0f) ? fZec59[i] + -1.0f : fZec59[i]);
			}
			/* Post code */
			for (int j165 = 0; j165 < 4; j165 = j165 + 1) {
				fRec61_perm[j165] = fRec61_tmp[vsize + j165];
			}
			/* Recursive loop 12 */
			/* Pre code */
			for (int j184 = 0; j184 < 4; j184 = j184 + 1) {
				fRec67_tmp[j184] = fRec67_perm[j184];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec66[i] = fRec67[i - 1] + fConst18 * fSlow16 * fZec0[i];
				fRec67[i] = ((fZec66[i] > 1.0f) ? fZec66[i] + -1.0f : fZec66[i]);
			}
			/* Post code */
			for (int j185 = 0; j185 < 4; j185 = j185 + 1) {
				fRec67_perm[j185] = fRec67_tmp[vsize + j185];
			}
			/* Recursive loop 13 */
			/* Pre code */
			for (int j204 = 0; j204 < 4; j204 = j204 + 1) {
				fRec73_tmp[j204] = fRec73_perm[j204];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec73[i] = fRec73[i - 1] + fConst19 * fSlow17 * fZec0[i];
				fRec73[i] = ((fZec73[i] > 1.0f) ? fZec73[i] + -1.0f : fZec73[i]);
			}
			/* Post code */
			for (int j205 = 0; j205 < 4; j205 = j205 + 1) {
				fRec73_perm[j205] = fRec73_tmp[vsize + j205];
			}
			/* Vectorizable loop 14 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec2[i] = fRec10[i] - fRec10[i - 1];
			}
			/* Vectorizable loop 15 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec8[i] = fRec16[i] - fRec16[i - 1];
			}
			/* Vectorizable loop 16 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec14[i] = fRec21[i] - fRec21[i - 1];
			}
			/* Vectorizable loop 17 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec20[i] = fRec26[i] - fRec26[i - 1];
			}
			/* Vectorizable loop 18 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec26[i] = fRec31[i] - fRec31[i - 1];
			}
			/* Vectorizable loop 19 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec32[i] = fRec37[i] - fRec37[i - 1];
			}
			/* Vectorizable loop 20 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec39[i] = fRec43[i] - fRec43[i - 1];
			}
			/* Vectorizable loop 21 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec46[i] = fRec49[i] - fRec49[i - 1];
			}
			/* Vectorizable loop 22 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec53[i] = fRec55[i] - fRec55[i - 1];
			}
			/* Vectorizable loop 23 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec60[i] = fRec61[i] - fRec61[i - 1];
			}
			/* Vectorizable loop 24 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec67[i] = fRec67[i] - fRec67[i - 1];
			}
			/* Vectorizable loop 25 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec74[i] = fRec73[i] - fRec73[i - 1];
			}
			/* Recursive loop 26 */
			/* Pre code */
			for (int j6 = 0; j6 < 4; j6 = j6 + 1) {
				iRec12_tmp[j6] = iRec12_perm[j6];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec12[i] = ((fZec2[i] < 0.0f) ? 1 - iRec12[i - 1] : iRec12[i - 1]);
			}
			/* Post code */
			for (int j7 = 0; j7 < 4; j7 = j7 + 1) {
				iRec12_perm[j7] = iRec12_tmp[vsize + j7];
			}
			/* Recursive loop 27 */
			/* Pre code */
			for (int j22 = 0; j22 < 4; j22 = j22 + 1) {
				iRec17_tmp[j22] = iRec17_perm[j22];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec17[i] = ((fZec8[i] < 0.0f) ? 1 - iRec17[i - 1] : iRec17[i - 1]);
			}
			/* Post code */
			for (int j23 = 0; j23 < 4; j23 = j23 + 1) {
				iRec17_perm[j23] = iRec17_tmp[vsize + j23];
			}
			/* Recursive loop 28 */
			/* Pre code */
			for (int j38 = 0; j38 < 4; j38 = j38 + 1) {
				iRec22_tmp[j38] = iRec22_perm[j38];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec22[i] = ((fZec14[i] < 0.0f) ? 1 - iRec22[i - 1] : iRec22[i - 1]);
			}
			/* Post code */
			for (int j39 = 0; j39 < 4; j39 = j39 + 1) {
				iRec22_perm[j39] = iRec22_tmp[vsize + j39];
			}
			/* Recursive loop 29 */
			/* Pre code */
			for (int j54 = 0; j54 < 4; j54 = j54 + 1) {
				iRec27_tmp[j54] = iRec27_perm[j54];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec27[i] = ((fZec20[i] < 0.0f) ? 1 - iRec27[i - 1] : iRec27[i - 1]);
			}
			/* Post code */
			for (int j55 = 0; j55 < 4; j55 = j55 + 1) {
				iRec27_perm[j55] = iRec27_tmp[vsize + j55];
			}
			/* Recursive loop 30 */
			/* Pre code */
			for (int j70 = 0; j70 < 4; j70 = j70 + 1) {
				iRec32_tmp[j70] = iRec32_perm[j70];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec32[i] = ((fZec26[i] < 0.0f) ? 1 - iRec32[i - 1] : iRec32[i - 1]);
			}
			/* Post code */
			for (int j71 = 0; j71 < 4; j71 = j71 + 1) {
				iRec32_perm[j71] = iRec32_tmp[vsize + j71];
			}
			/* Recursive loop 31 */
			/* Pre code */
			for (int j86 = 0; j86 < 4; j86 = j86 + 1) {
				iRec38_tmp[j86] = iRec38_perm[j86];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec38[i] = ((fZec32[i] < 0.0f) ? 1 - iRec38[i - 1] : iRec38[i - 1]);
			}
			/* Post code */
			for (int j87 = 0; j87 < 4; j87 = j87 + 1) {
				iRec38_perm[j87] = iRec38_tmp[vsize + j87];
			}
			/* Recursive loop 32 */
			/* Pre code */
			for (int j106 = 0; j106 < 4; j106 = j106 + 1) {
				iRec44_tmp[j106] = iRec44_perm[j106];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec44[i] = ((fZec39[i] < 0.0f) ? 1 - iRec44[i - 1] : iRec44[i - 1]);
			}
			/* Post code */
			for (int j107 = 0; j107 < 4; j107 = j107 + 1) {
				iRec44_perm[j107] = iRec44_tmp[vsize + j107];
			}
			/* Recursive loop 33 */
			/* Pre code */
			for (int j126 = 0; j126 < 4; j126 = j126 + 1) {
				iRec50_tmp[j126] = iRec50_perm[j126];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec50[i] = ((fZec46[i] < 0.0f) ? 1 - iRec50[i - 1] : iRec50[i - 1]);
			}
			/* Post code */
			for (int j127 = 0; j127 < 4; j127 = j127 + 1) {
				iRec50_perm[j127] = iRec50_tmp[vsize + j127];
			}
			/* Recursive loop 34 */
			/* Pre code */
			for (int j146 = 0; j146 < 4; j146 = j146 + 1) {
				iRec56_tmp[j146] = iRec56_perm[j146];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec56[i] = ((fZec53[i] < 0.0f) ? 1 - iRec56[i - 1] : iRec56[i - 1]);
			}
			/* Post code */
			for (int j147 = 0; j147 < 4; j147 = j147 + 1) {
				iRec56_perm[j147] = iRec56_tmp[vsize + j147];
			}
			/* Recursive loop 35 */
			/* Pre code */
			for (int j166 = 0; j166 < 4; j166 = j166 + 1) {
				iRec62_tmp[j166] = iRec62_perm[j166];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec62[i] = ((fZec60[i] < 0.0f) ? 1 - iRec62[i - 1] : iRec62[i - 1]);
			}
			/* Post code */
			for (int j167 = 0; j167 < 4; j167 = j167 + 1) {
				iRec62_perm[j167] = iRec62_tmp[vsize + j167];
			}
			/* Recursive loop 36 */
			/* Pre code */
			for (int j186 = 0; j186 < 4; j186 = j186 + 1) {
				iRec68_tmp[j186] = iRec68_perm[j186];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec68[i] = ((fZec67[i] < 0.0f) ? 1 - iRec68[i - 1] : iRec68[i - 1]);
			}
			/* Post code */
			for (int j187 = 0; j187 < 4; j187 = j187 + 1) {
				iRec68_perm[j187] = iRec68_tmp[vsize + j187];
			}
			/* Recursive loop 37 */
			/* Pre code */
			for (int j206 = 0; j206 < 4; j206 = j206 + 1) {
				iRec74_tmp[j206] = iRec74_perm[j206];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec74[i] = ((fZec74[i] < 0.0f) ? 1 - iRec74[i - 1] : iRec74[i - 1]);
			}
			/* Post code */
			for (int j207 = 0; j207 < 4; j207 = j207 + 1) {
				iRec74_perm[j207] = iRec74_tmp[vsize + j207];
			}
			/* Vectorizable loop 38 */
			/* Pre code */
			for (int j8 = 0; j8 < 4; j8 = j8 + 1) {
				fYec0_tmp[j8] = fYec0_perm[j8];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec0[i] = fRec10[i] + float(iRec12[i]);
			}
			/* Post code */
			for (int j9 = 0; j9 < 4; j9 = j9 + 1) {
				fYec0_perm[j9] = fYec0_tmp[vsize + j9];
			}
			/* Vectorizable loop 39 */
			/* Pre code */
			for (int j24 = 0; j24 < 4; j24 = j24 + 1) {
				fYec3_tmp[j24] = fYec3_perm[j24];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec3[i] = fRec16[i] + float(iRec17[i]);
			}
			/* Post code */
			for (int j25 = 0; j25 < 4; j25 = j25 + 1) {
				fYec3_perm[j25] = fYec3_tmp[vsize + j25];
			}
			/* Vectorizable loop 40 */
			/* Pre code */
			for (int j40 = 0; j40 < 4; j40 = j40 + 1) {
				fYec6_tmp[j40] = fYec6_perm[j40];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec6[i] = fRec21[i] + float(iRec22[i]);
			}
			/* Post code */
			for (int j41 = 0; j41 < 4; j41 = j41 + 1) {
				fYec6_perm[j41] = fYec6_tmp[vsize + j41];
			}
			/* Vectorizable loop 41 */
			/* Pre code */
			for (int j56 = 0; j56 < 4; j56 = j56 + 1) {
				fYec9_tmp[j56] = fYec9_perm[j56];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec9[i] = fRec26[i] + float(iRec27[i]);
			}
			/* Post code */
			for (int j57 = 0; j57 < 4; j57 = j57 + 1) {
				fYec9_perm[j57] = fYec9_tmp[vsize + j57];
			}
			/* Vectorizable loop 42 */
			/* Pre code */
			for (int j72 = 0; j72 < 4; j72 = j72 + 1) {
				fYec12_tmp[j72] = fYec12_perm[j72];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec12[i] = fRec31[i] + float(iRec32[i]);
			}
			/* Post code */
			for (int j73 = 0; j73 < 4; j73 = j73 + 1) {
				fYec12_perm[j73] = fYec12_tmp[vsize + j73];
			}
			/* Vectorizable loop 43 */
			/* Pre code */
			for (int j88 = 0; j88 < 4; j88 = j88 + 1) {
				fYec15_tmp[j88] = fYec15_perm[j88];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec15[i] = fRec37[i] + float(iRec38[i]);
			}
			/* Post code */
			for (int j89 = 0; j89 < 4; j89 = j89 + 1) {
				fYec15_perm[j89] = fYec15_tmp[vsize + j89];
			}
			/* Vectorizable loop 44 */
			/* Pre code */
			for (int j108 = 0; j108 < 4; j108 = j108 + 1) {
				fYec19_tmp[j108] = fYec19_perm[j108];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec19[i] = fRec43[i] + float(iRec44[i]);
			}
			/* Post code */
			for (int j109 = 0; j109 < 4; j109 = j109 + 1) {
				fYec19_perm[j109] = fYec19_tmp[vsize + j109];
			}
			/* Vectorizable loop 45 */
			/* Pre code */
			for (int j128 = 0; j128 < 4; j128 = j128 + 1) {
				fYec23_tmp[j128] = fYec23_perm[j128];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec23[i] = fRec49[i] + float(iRec50[i]);
			}
			/* Post code */
			for (int j129 = 0; j129 < 4; j129 = j129 + 1) {
				fYec23_perm[j129] = fYec23_tmp[vsize + j129];
			}
			/* Vectorizable loop 46 */
			/* Pre code */
			for (int j148 = 0; j148 < 4; j148 = j148 + 1) {
				fYec27_tmp[j148] = fYec27_perm[j148];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec27[i] = fRec55[i] + float(iRec56[i]);
			}
			/* Post code */
			for (int j149 = 0; j149 < 4; j149 = j149 + 1) {
				fYec27_perm[j149] = fYec27_tmp[vsize + j149];
			}
			/* Vectorizable loop 47 */
			/* Pre code */
			for (int j168 = 0; j168 < 4; j168 = j168 + 1) {
				fYec31_tmp[j168] = fYec31_perm[j168];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec31[i] = fRec61[i] + float(iRec62[i]);
			}
			/* Post code */
			for (int j169 = 0; j169 < 4; j169 = j169 + 1) {
				fYec31_perm[j169] = fYec31_tmp[vsize + j169];
			}
			/* Vectorizable loop 48 */
			/* Pre code */
			for (int j188 = 0; j188 < 4; j188 = j188 + 1) {
				fYec35_tmp[j188] = fYec35_perm[j188];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec35[i] = fRec67[i] + float(iRec68[i]);
			}
			/* Post code */
			for (int j189 = 0; j189 < 4; j189 = j189 + 1) {
				fYec35_perm[j189] = fYec35_tmp[vsize + j189];
			}
			/* Vectorizable loop 49 */
			/* Pre code */
			for (int j208 = 0; j208 < 4; j208 = j208 + 1) {
				fYec39_tmp[j208] = fYec39_perm[j208];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec39[i] = fRec73[i] + float(iRec74[i]);
			}
			/* Post code */
			for (int j209 = 0; j209 < 4; j209 = j209 + 1) {
				fYec39_perm[j209] = fYec39_tmp[vsize + j209];
			}
			/* Recursive loop 50 */
			/* Pre code */
			for (int j10 = 0; j10 < 4; j10 = j10 + 1) {
				iRec9_tmp[j10] = iRec9_perm[j10];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec9[i] = (((0.5f * (fYec0[i] - fYec0[i - 1])) < 0.0f) ? 1 - iRec9[i - 1] : iRec9[i - 1]);
			}
			/* Post code */
			for (int j11 = 0; j11 < 4; j11 = j11 + 1) {
				iRec9_perm[j11] = iRec9_tmp[vsize + j11];
			}
			/* Vectorizable loop 51 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec3[i] = 0.5f * fYec0[i];
			}
			/* Recursive loop 52 */
			/* Pre code */
			for (int j26 = 0; j26 < 4; j26 = j26 + 1) {
				iRec15_tmp[j26] = iRec15_perm[j26];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec15[i] = (((0.5f * (fYec3[i] - fYec3[i - 1])) < 0.0f) ? 1 - iRec15[i - 1] : iRec15[i - 1]);
			}
			/* Post code */
			for (int j27 = 0; j27 < 4; j27 = j27 + 1) {
				iRec15_perm[j27] = iRec15_tmp[vsize + j27];
			}
			/* Vectorizable loop 53 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec9[i] = 0.5f * fYec3[i];
			}
			/* Recursive loop 54 */
			/* Pre code */
			for (int j42 = 0; j42 < 4; j42 = j42 + 1) {
				iRec20_tmp[j42] = iRec20_perm[j42];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec20[i] = (((0.5f * (fYec6[i] - fYec6[i - 1])) < 0.0f) ? 1 - iRec20[i - 1] : iRec20[i - 1]);
			}
			/* Post code */
			for (int j43 = 0; j43 < 4; j43 = j43 + 1) {
				iRec20_perm[j43] = iRec20_tmp[vsize + j43];
			}
			/* Vectorizable loop 55 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec15[i] = 0.5f * fYec6[i];
			}
			/* Recursive loop 56 */
			/* Pre code */
			for (int j58 = 0; j58 < 4; j58 = j58 + 1) {
				iRec25_tmp[j58] = iRec25_perm[j58];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec25[i] = (((0.5f * (fYec9[i] - fYec9[i - 1])) < 0.0f) ? 1 - iRec25[i - 1] : iRec25[i - 1]);
			}
			/* Post code */
			for (int j59 = 0; j59 < 4; j59 = j59 + 1) {
				iRec25_perm[j59] = iRec25_tmp[vsize + j59];
			}
			/* Vectorizable loop 57 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec21[i] = 0.5f * fYec9[i];
			}
			/* Recursive loop 58 */
			/* Pre code */
			for (int j74 = 0; j74 < 4; j74 = j74 + 1) {
				iRec30_tmp[j74] = iRec30_perm[j74];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec30[i] = (((0.5f * (fYec12[i] - fYec12[i - 1])) < 0.0f) ? 1 - iRec30[i - 1] : iRec30[i - 1]);
			}
			/* Post code */
			for (int j75 = 0; j75 < 4; j75 = j75 + 1) {
				iRec30_perm[j75] = iRec30_tmp[vsize + j75];
			}
			/* Vectorizable loop 59 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec27[i] = 0.5f * fYec12[i];
			}
			/* Recursive loop 60 */
			/* Pre code */
			for (int j90 = 0; j90 < 4; j90 = j90 + 1) {
				iRec36_tmp[j90] = iRec36_perm[j90];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec36[i] = (((0.5f * (fYec15[i] - fYec15[i - 1])) < 0.0f) ? 1 - iRec36[i - 1] : iRec36[i - 1]);
			}
			/* Post code */
			for (int j91 = 0; j91 < 4; j91 = j91 + 1) {
				iRec36_perm[j91] = iRec36_tmp[vsize + j91];
			}
			/* Vectorizable loop 61 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec33[i] = 0.5f * fYec15[i];
			}
			/* Recursive loop 62 */
			/* Pre code */
			for (int j110 = 0; j110 < 4; j110 = j110 + 1) {
				iRec42_tmp[j110] = iRec42_perm[j110];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec42[i] = (((0.5f * (fYec19[i] - fYec19[i - 1])) < 0.0f) ? 1 - iRec42[i - 1] : iRec42[i - 1]);
			}
			/* Post code */
			for (int j111 = 0; j111 < 4; j111 = j111 + 1) {
				iRec42_perm[j111] = iRec42_tmp[vsize + j111];
			}
			/* Vectorizable loop 63 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec40[i] = 0.5f * fYec19[i];
			}
			/* Recursive loop 64 */
			/* Pre code */
			for (int j130 = 0; j130 < 4; j130 = j130 + 1) {
				iRec48_tmp[j130] = iRec48_perm[j130];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec48[i] = (((0.5f * (fYec23[i] - fYec23[i - 1])) < 0.0f) ? 1 - iRec48[i - 1] : iRec48[i - 1]);
			}
			/* Post code */
			for (int j131 = 0; j131 < 4; j131 = j131 + 1) {
				iRec48_perm[j131] = iRec48_tmp[vsize + j131];
			}
			/* Vectorizable loop 65 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec47[i] = 0.5f * fYec23[i];
			}
			/* Recursive loop 66 */
			/* Pre code */
			for (int j150 = 0; j150 < 4; j150 = j150 + 1) {
				iRec54_tmp[j150] = iRec54_perm[j150];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec54[i] = (((0.5f * (fYec27[i] - fYec27[i - 1])) < 0.0f) ? 1 - iRec54[i - 1] : iRec54[i - 1]);
			}
			/* Post code */
			for (int j151 = 0; j151 < 4; j151 = j151 + 1) {
				iRec54_perm[j151] = iRec54_tmp[vsize + j151];
			}
			/* Vectorizable loop 67 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec54[i] = 0.5f * fYec27[i];
			}
			/* Recursive loop 68 */
			/* Pre code */
			for (int j170 = 0; j170 < 4; j170 = j170 + 1) {
				iRec60_tmp[j170] = iRec60_perm[j170];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec60[i] = (((0.5f * (fYec31[i] - fYec31[i - 1])) < 0.0f) ? 1 - iRec60[i - 1] : iRec60[i - 1]);
			}
			/* Post code */
			for (int j171 = 0; j171 < 4; j171 = j171 + 1) {
				iRec60_perm[j171] = iRec60_tmp[vsize + j171];
			}
			/* Vectorizable loop 69 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec61[i] = 0.5f * fYec31[i];
			}
			/* Recursive loop 70 */
			/* Pre code */
			for (int j190 = 0; j190 < 4; j190 = j190 + 1) {
				iRec66_tmp[j190] = iRec66_perm[j190];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec66[i] = (((0.5f * (fYec35[i] - fYec35[i - 1])) < 0.0f) ? 1 - iRec66[i - 1] : iRec66[i - 1]);
			}
			/* Post code */
			for (int j191 = 0; j191 < 4; j191 = j191 + 1) {
				iRec66_perm[j191] = iRec66_tmp[vsize + j191];
			}
			/* Vectorizable loop 71 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec68[i] = 0.5f * fYec35[i];
			}
			/* Recursive loop 72 */
			/* Pre code */
			for (int j210 = 0; j210 < 4; j210 = j210 + 1) {
				iRec72_tmp[j210] = iRec72_perm[j210];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec72[i] = (((0.5f * (fYec39[i] - fYec39[i - 1])) < 0.0f) ? 1 - iRec72[i - 1] : iRec72[i - 1]);
			}
			/* Post code */
			for (int j211 = 0; j211 < 4; j211 = j211 + 1) {
				iRec72_perm[j211] = iRec72_tmp[vsize + j211];
			}
			/* Vectorizable loop 73 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec75[i] = 0.5f * fYec39[i];
			}
			/* Vectorizable loop 74 */
			/* Pre code */
			for (int j12 = 0; j12 < 4; j12 = j12 + 1) {
				fYec1_tmp[j12] = fYec1_perm[j12];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec1[i] = float(iRec9[i]) + fZec3[i];
			}
			/* Post code */
			for (int j13 = 0; j13 < 4; j13 = j13 + 1) {
				fYec1_perm[j13] = fYec1_tmp[vsize + j13];
			}
			/* Vectorizable loop 75 */
			/* Pre code */
			for (int j28 = 0; j28 < 4; j28 = j28 + 1) {
				fYec4_tmp[j28] = fYec4_perm[j28];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec4[i] = float(iRec15[i]) + fZec9[i];
			}
			/* Post code */
			for (int j29 = 0; j29 < 4; j29 = j29 + 1) {
				fYec4_perm[j29] = fYec4_tmp[vsize + j29];
			}
			/* Vectorizable loop 76 */
			/* Pre code */
			for (int j44 = 0; j44 < 4; j44 = j44 + 1) {
				fYec7_tmp[j44] = fYec7_perm[j44];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec7[i] = float(iRec20[i]) + fZec15[i];
			}
			/* Post code */
			for (int j45 = 0; j45 < 4; j45 = j45 + 1) {
				fYec7_perm[j45] = fYec7_tmp[vsize + j45];
			}
			/* Vectorizable loop 77 */
			/* Pre code */
			for (int j60 = 0; j60 < 4; j60 = j60 + 1) {
				fYec10_tmp[j60] = fYec10_perm[j60];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec10[i] = float(iRec25[i]) + fZec21[i];
			}
			/* Post code */
			for (int j61 = 0; j61 < 4; j61 = j61 + 1) {
				fYec10_perm[j61] = fYec10_tmp[vsize + j61];
			}
			/* Vectorizable loop 78 */
			/* Pre code */
			for (int j76 = 0; j76 < 4; j76 = j76 + 1) {
				fYec13_tmp[j76] = fYec13_perm[j76];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec13[i] = float(iRec30[i]) + fZec27[i];
			}
			/* Post code */
			for (int j77 = 0; j77 < 4; j77 = j77 + 1) {
				fYec13_perm[j77] = fYec13_tmp[vsize + j77];
			}
			/* Vectorizable loop 79 */
			/* Pre code */
			for (int j92 = 0; j92 < 4; j92 = j92 + 1) {
				fYec16_tmp[j92] = fYec16_perm[j92];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec16[i] = float(iRec36[i]) + fZec33[i];
			}
			/* Post code */
			for (int j93 = 0; j93 < 4; j93 = j93 + 1) {
				fYec16_perm[j93] = fYec16_tmp[vsize + j93];
			}
			/* Vectorizable loop 80 */
			/* Pre code */
			for (int j112 = 0; j112 < 4; j112 = j112 + 1) {
				fYec20_tmp[j112] = fYec20_perm[j112];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec20[i] = float(iRec42[i]) + fZec40[i];
			}
			/* Post code */
			for (int j113 = 0; j113 < 4; j113 = j113 + 1) {
				fYec20_perm[j113] = fYec20_tmp[vsize + j113];
			}
			/* Vectorizable loop 81 */
			/* Pre code */
			for (int j132 = 0; j132 < 4; j132 = j132 + 1) {
				fYec24_tmp[j132] = fYec24_perm[j132];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec24[i] = float(iRec48[i]) + fZec47[i];
			}
			/* Post code */
			for (int j133 = 0; j133 < 4; j133 = j133 + 1) {
				fYec24_perm[j133] = fYec24_tmp[vsize + j133];
			}
			/* Vectorizable loop 82 */
			/* Pre code */
			for (int j152 = 0; j152 < 4; j152 = j152 + 1) {
				fYec28_tmp[j152] = fYec28_perm[j152];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec28[i] = float(iRec54[i]) + fZec54[i];
			}
			/* Post code */
			for (int j153 = 0; j153 < 4; j153 = j153 + 1) {
				fYec28_perm[j153] = fYec28_tmp[vsize + j153];
			}
			/* Vectorizable loop 83 */
			/* Pre code */
			for (int j172 = 0; j172 < 4; j172 = j172 + 1) {
				fYec32_tmp[j172] = fYec32_perm[j172];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec32[i] = float(iRec60[i]) + fZec61[i];
			}
			/* Post code */
			for (int j173 = 0; j173 < 4; j173 = j173 + 1) {
				fYec32_perm[j173] = fYec32_tmp[vsize + j173];
			}
			/* Vectorizable loop 84 */
			/* Pre code */
			for (int j192 = 0; j192 < 4; j192 = j192 + 1) {
				fYec36_tmp[j192] = fYec36_perm[j192];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec36[i] = float(iRec66[i]) + fZec68[i];
			}
			/* Post code */
			for (int j193 = 0; j193 < 4; j193 = j193 + 1) {
				fYec36_perm[j193] = fYec36_tmp[vsize + j193];
			}
			/* Vectorizable loop 85 */
			/* Pre code */
			for (int j212 = 0; j212 < 4; j212 = j212 + 1) {
				fYec40_tmp[j212] = fYec40_perm[j212];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec40[i] = float(iRec72[i]) + fZec75[i];
			}
			/* Post code */
			for (int j213 = 0; j213 < 4; j213 = j213 + 1) {
				fYec40_perm[j213] = fYec40_tmp[vsize + j213];
			}
			/* Vectorizable loop 86 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec4[i] = 0.5f * fYec1[i];
			}
			/* Vectorizable loop 87 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec10[i] = 0.5f * fYec4[i];
			}
			/* Vectorizable loop 88 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec16[i] = 0.5f * fYec7[i];
			}
			/* Vectorizable loop 89 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec22[i] = 0.5f * fYec10[i];
			}
			/* Vectorizable loop 90 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec28[i] = 0.5f * fYec13[i];
			}
			/* Recursive loop 91 */
			/* Pre code */
			for (int j94 = 0; j94 < 4; j94 = j94 + 1) {
				iRec35_tmp[j94] = iRec35_perm[j94];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec35[i] = (((0.5f * (fYec16[i] - fYec16[i - 1])) < 0.0f) ? 1 - iRec35[i - 1] : iRec35[i - 1]);
			}
			/* Post code */
			for (int j95 = 0; j95 < 4; j95 = j95 + 1) {
				iRec35_perm[j95] = iRec35_tmp[vsize + j95];
			}
			/* Vectorizable loop 92 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec34[i] = 0.5f * fYec16[i];
			}
			/* Recursive loop 93 */
			/* Pre code */
			for (int j114 = 0; j114 < 4; j114 = j114 + 1) {
				iRec41_tmp[j114] = iRec41_perm[j114];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec41[i] = (((0.5f * (fYec20[i] - fYec20[i - 1])) < 0.0f) ? 1 - iRec41[i - 1] : iRec41[i - 1]);
			}
			/* Post code */
			for (int j115 = 0; j115 < 4; j115 = j115 + 1) {
				iRec41_perm[j115] = iRec41_tmp[vsize + j115];
			}
			/* Vectorizable loop 94 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec41[i] = 0.5f * fYec20[i];
			}
			/* Recursive loop 95 */
			/* Pre code */
			for (int j134 = 0; j134 < 4; j134 = j134 + 1) {
				iRec47_tmp[j134] = iRec47_perm[j134];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec47[i] = (((0.5f * (fYec24[i] - fYec24[i - 1])) < 0.0f) ? 1 - iRec47[i - 1] : iRec47[i - 1]);
			}
			/* Post code */
			for (int j135 = 0; j135 < 4; j135 = j135 + 1) {
				iRec47_perm[j135] = iRec47_tmp[vsize + j135];
			}
			/* Vectorizable loop 96 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec48[i] = 0.5f * fYec24[i];
			}
			/* Recursive loop 97 */
			/* Pre code */
			for (int j154 = 0; j154 < 4; j154 = j154 + 1) {
				iRec53_tmp[j154] = iRec53_perm[j154];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec53[i] = (((0.5f * (fYec28[i] - fYec28[i - 1])) < 0.0f) ? 1 - iRec53[i - 1] : iRec53[i - 1]);
			}
			/* Post code */
			for (int j155 = 0; j155 < 4; j155 = j155 + 1) {
				iRec53_perm[j155] = iRec53_tmp[vsize + j155];
			}
			/* Vectorizable loop 98 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec55[i] = 0.5f * fYec28[i];
			}
			/* Recursive loop 99 */
			/* Pre code */
			for (int j174 = 0; j174 < 4; j174 = j174 + 1) {
				iRec59_tmp[j174] = iRec59_perm[j174];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec59[i] = (((0.5f * (fYec32[i] - fYec32[i - 1])) < 0.0f) ? 1 - iRec59[i - 1] : iRec59[i - 1]);
			}
			/* Post code */
			for (int j175 = 0; j175 < 4; j175 = j175 + 1) {
				iRec59_perm[j175] = iRec59_tmp[vsize + j175];
			}
			/* Vectorizable loop 100 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec62[i] = 0.5f * fYec32[i];
			}
			/* Recursive loop 101 */
			/* Pre code */
			for (int j194 = 0; j194 < 4; j194 = j194 + 1) {
				iRec65_tmp[j194] = iRec65_perm[j194];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec65[i] = (((0.5f * (fYec36[i] - fYec36[i - 1])) < 0.0f) ? 1 - iRec65[i - 1] : iRec65[i - 1]);
			}
			/* Post code */
			for (int j195 = 0; j195 < 4; j195 = j195 + 1) {
				iRec65_perm[j195] = iRec65_tmp[vsize + j195];
			}
			/* Vectorizable loop 102 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec69[i] = 0.5f * fYec36[i];
			}
			/* Recursive loop 103 */
			/* Pre code */
			for (int j214 = 0; j214 < 4; j214 = j214 + 1) {
				iRec71_tmp[j214] = iRec71_perm[j214];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec71[i] = (((0.5f * (fYec40[i] - fYec40[i - 1])) < 0.0f) ? 1 - iRec71[i - 1] : iRec71[i - 1]);
			}
			/* Post code */
			for (int j215 = 0; j215 < 4; j215 = j215 + 1) {
				iRec71_perm[j215] = iRec71_tmp[vsize + j215];
			}
			/* Vectorizable loop 104 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec76[i] = 0.5f * fYec40[i];
			}
			/* Recursive loop 105 */
			/* Pre code */
			for (int j224 = 0; j224 < 4; j224 = j224 + 1) {
				iRec77_tmp[j224] = iRec77_perm[j224];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec77[i] = (((0.5f * (fYec1[i] - fYec1[i - 1])) < 0.0f) ? 1 - iRec77[i - 1] : iRec77[i - 1]);
			}
			/* Post code */
			for (int j225 = 0; j225 < 4; j225 = j225 + 1) {
				iRec77_perm[j225] = iRec77_tmp[vsize + j225];
			}
			/* Recursive loop 106 */
			/* Pre code */
			for (int j234 = 0; j234 < 4; j234 = j234 + 1) {
				iRec80_tmp[j234] = iRec80_perm[j234];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec80[i] = (((0.5f * (fYec4[i] - fYec4[i - 1])) < 0.0f) ? 1 - iRec80[i - 1] : iRec80[i - 1]);
			}
			/* Post code */
			for (int j235 = 0; j235 < 4; j235 = j235 + 1) {
				iRec80_perm[j235] = iRec80_tmp[vsize + j235];
			}
			/* Recursive loop 107 */
			/* Pre code */
			for (int j244 = 0; j244 < 4; j244 = j244 + 1) {
				iRec83_tmp[j244] = iRec83_perm[j244];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec83[i] = (((0.5f * (fYec7[i] - fYec7[i - 1])) < 0.0f) ? 1 - iRec83[i - 1] : iRec83[i - 1]);
			}
			/* Post code */
			for (int j245 = 0; j245 < 4; j245 = j245 + 1) {
				iRec83_perm[j245] = iRec83_tmp[vsize + j245];
			}
			/* Recursive loop 108 */
			/* Pre code */
			for (int j254 = 0; j254 < 4; j254 = j254 + 1) {
				iRec86_tmp[j254] = iRec86_perm[j254];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec86[i] = (((0.5f * (fYec13[i] - fYec13[i - 1])) < 0.0f) ? 1 - iRec86[i - 1] : iRec86[i - 1]);
			}
			/* Post code */
			for (int j255 = 0; j255 < 4; j255 = j255 + 1) {
				iRec86_perm[j255] = iRec86_tmp[vsize + j255];
			}
			/* Recursive loop 109 */
			/* Pre code */
			for (int j264 = 0; j264 < 4; j264 = j264 + 1) {
				iRec89_tmp[j264] = iRec89_perm[j264];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec89[i] = (((0.5f * (fYec10[i] - fYec10[i - 1])) < 0.0f) ? 1 - iRec89[i - 1] : iRec89[i - 1]);
			}
			/* Post code */
			for (int j265 = 0; j265 < 4; j265 = j265 + 1) {
				iRec89_perm[j265] = iRec89_tmp[vsize + j265];
			}
			/* Vectorizable loop 110 */
			/* Pre code */
			for (int j96 = 0; j96 < 4; j96 = j96 + 1) {
				fYec17_tmp[j96] = fYec17_perm[j96];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec17[i] = float(iRec35[i]) + fZec34[i];
			}
			/* Post code */
			for (int j97 = 0; j97 < 4; j97 = j97 + 1) {
				fYec17_perm[j97] = fYec17_tmp[vsize + j97];
			}
			/* Vectorizable loop 111 */
			/* Pre code */
			for (int j116 = 0; j116 < 4; j116 = j116 + 1) {
				fYec21_tmp[j116] = fYec21_perm[j116];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec21[i] = float(iRec41[i]) + fZec41[i];
			}
			/* Post code */
			for (int j117 = 0; j117 < 4; j117 = j117 + 1) {
				fYec21_perm[j117] = fYec21_tmp[vsize + j117];
			}
			/* Vectorizable loop 112 */
			/* Pre code */
			for (int j136 = 0; j136 < 4; j136 = j136 + 1) {
				fYec25_tmp[j136] = fYec25_perm[j136];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec25[i] = float(iRec47[i]) + fZec48[i];
			}
			/* Post code */
			for (int j137 = 0; j137 < 4; j137 = j137 + 1) {
				fYec25_perm[j137] = fYec25_tmp[vsize + j137];
			}
			/* Vectorizable loop 113 */
			/* Pre code */
			for (int j156 = 0; j156 < 4; j156 = j156 + 1) {
				fYec29_tmp[j156] = fYec29_perm[j156];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec29[i] = float(iRec53[i]) + fZec55[i];
			}
			/* Post code */
			for (int j157 = 0; j157 < 4; j157 = j157 + 1) {
				fYec29_perm[j157] = fYec29_tmp[vsize + j157];
			}
			/* Vectorizable loop 114 */
			/* Pre code */
			for (int j176 = 0; j176 < 4; j176 = j176 + 1) {
				fYec33_tmp[j176] = fYec33_perm[j176];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec33[i] = float(iRec59[i]) + fZec62[i];
			}
			/* Post code */
			for (int j177 = 0; j177 < 4; j177 = j177 + 1) {
				fYec33_perm[j177] = fYec33_tmp[vsize + j177];
			}
			/* Vectorizable loop 115 */
			/* Pre code */
			for (int j196 = 0; j196 < 4; j196 = j196 + 1) {
				fYec37_tmp[j196] = fYec37_perm[j196];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec37[i] = float(iRec65[i]) + fZec69[i];
			}
			/* Post code */
			for (int j197 = 0; j197 < 4; j197 = j197 + 1) {
				fYec37_perm[j197] = fYec37_tmp[vsize + j197];
			}
			/* Vectorizable loop 116 */
			/* Pre code */
			for (int j216 = 0; j216 < 4; j216 = j216 + 1) {
				fYec41_tmp[j216] = fYec41_perm[j216];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec41[i] = float(iRec71[i]) + fZec76[i];
			}
			/* Post code */
			for (int j217 = 0; j217 < 4; j217 = j217 + 1) {
				fYec41_perm[j217] = fYec41_tmp[vsize + j217];
			}
			/* Vectorizable loop 117 */
			/* Pre code */
			for (int j226 = 0; j226 < 4; j226 = j226 + 1) {
				fYec43_tmp[j226] = fYec43_perm[j226];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec43[i] = float(iRec77[i]) + fZec4[i];
			}
			/* Post code */
			for (int j227 = 0; j227 < 4; j227 = j227 + 1) {
				fYec43_perm[j227] = fYec43_tmp[vsize + j227];
			}
			/* Vectorizable loop 118 */
			/* Pre code */
			for (int j236 = 0; j236 < 4; j236 = j236 + 1) {
				fYec45_tmp[j236] = fYec45_perm[j236];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec45[i] = float(iRec80[i]) + fZec10[i];
			}
			/* Post code */
			for (int j237 = 0; j237 < 4; j237 = j237 + 1) {
				fYec45_perm[j237] = fYec45_tmp[vsize + j237];
			}
			/* Vectorizable loop 119 */
			/* Pre code */
			for (int j246 = 0; j246 < 4; j246 = j246 + 1) {
				fYec47_tmp[j246] = fYec47_perm[j246];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec47[i] = float(iRec83[i]) + fZec16[i];
			}
			/* Post code */
			for (int j247 = 0; j247 < 4; j247 = j247 + 1) {
				fYec47_perm[j247] = fYec47_tmp[vsize + j247];
			}
			/* Vectorizable loop 120 */
			/* Pre code */
			for (int j256 = 0; j256 < 4; j256 = j256 + 1) {
				fYec49_tmp[j256] = fYec49_perm[j256];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec49[i] = float(iRec86[i]) + fZec28[i];
			}
			/* Post code */
			for (int j257 = 0; j257 < 4; j257 = j257 + 1) {
				fYec49_perm[j257] = fYec49_tmp[vsize + j257];
			}
			/* Vectorizable loop 121 */
			/* Pre code */
			for (int j266 = 0; j266 < 4; j266 = j266 + 1) {
				fYec51_tmp[j266] = fYec51_perm[j266];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec51[i] = float(iRec89[i]) + fZec22[i];
			}
			/* Post code */
			for (int j267 = 0; j267 < 4; j267 = j267 + 1) {
				fYec51_perm[j267] = fYec51_tmp[vsize + j267];
			}
			/* Vectorizable loop 122 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec35[i] = 0.5f * fYec17[i];
			}
			/* Vectorizable loop 123 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec42[i] = 0.5f * fYec21[i];
			}
			/* Vectorizable loop 124 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec49[i] = 0.5f * fYec25[i];
			}
			/* Vectorizable loop 125 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec56[i] = 0.5f * fYec29[i];
			}
			/* Vectorizable loop 126 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec63[i] = 0.5f * fYec33[i];
			}
			/* Vectorizable loop 127 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec70[i] = 0.5f * fYec37[i];
			}
			/* Vectorizable loop 128 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec77[i] = 0.5f * fYec41[i];
			}
			/* Vectorizable loop 129 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec80[i] = 0.5f * fYec43[i];
			}
			/* Vectorizable loop 130 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec81[i] = 0.5f * fYec45[i];
			}
			/* Vectorizable loop 131 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec82[i] = 0.5f * fYec47[i];
			}
			/* Vectorizable loop 132 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec83[i] = 0.5f * fYec49[i];
			}
			/* Vectorizable loop 133 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec84[i] = 0.5f * fYec51[i];
			}
			/* Recursive loop 134 */
			/* Pre code */
			for (int j600 = 0; j600 < 4; j600 = j600 + 1) {
				iRec145_tmp[j600] = iRec145_perm[j600];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec145[i] = (((0.5f * (fYec17[i] - fYec17[i - 1])) < 0.0f) ? 1 - iRec145[i - 1] : iRec145[i - 1]);
			}
			/* Post code */
			for (int j601 = 0; j601 < 4; j601 = j601 + 1) {
				iRec145_perm[j601] = iRec145_tmp[vsize + j601];
			}
			/* Recursive loop 135 */
			/* Pre code */
			for (int j614 = 0; j614 < 4; j614 = j614 + 1) {
				iRec149_tmp[j614] = iRec149_perm[j614];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec149[i] = (((0.5f * (fYec21[i] - fYec21[i - 1])) < 0.0f) ? 1 - iRec149[i - 1] : iRec149[i - 1]);
			}
			/* Post code */
			for (int j615 = 0; j615 < 4; j615 = j615 + 1) {
				iRec149_perm[j615] = iRec149_tmp[vsize + j615];
			}
			/* Recursive loop 136 */
			/* Pre code */
			for (int j628 = 0; j628 < 4; j628 = j628 + 1) {
				iRec153_tmp[j628] = iRec153_perm[j628];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec153[i] = (((0.5f * (fYec25[i] - fYec25[i - 1])) < 0.0f) ? 1 - iRec153[i - 1] : iRec153[i - 1]);
			}
			/* Post code */
			for (int j629 = 0; j629 < 4; j629 = j629 + 1) {
				iRec153_perm[j629] = iRec153_tmp[vsize + j629];
			}
			/* Recursive loop 137 */
			/* Pre code */
			for (int j642 = 0; j642 < 4; j642 = j642 + 1) {
				iRec157_tmp[j642] = iRec157_perm[j642];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec157[i] = (((0.5f * (fYec29[i] - fYec29[i - 1])) < 0.0f) ? 1 - iRec157[i - 1] : iRec157[i - 1]);
			}
			/* Post code */
			for (int j643 = 0; j643 < 4; j643 = j643 + 1) {
				iRec157_perm[j643] = iRec157_tmp[vsize + j643];
			}
			/* Recursive loop 138 */
			/* Pre code */
			for (int j656 = 0; j656 < 4; j656 = j656 + 1) {
				iRec161_tmp[j656] = iRec161_perm[j656];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec161[i] = (((0.5f * (fYec33[i] - fYec33[i - 1])) < 0.0f) ? 1 - iRec161[i - 1] : iRec161[i - 1]);
			}
			/* Post code */
			for (int j657 = 0; j657 < 4; j657 = j657 + 1) {
				iRec161_perm[j657] = iRec161_tmp[vsize + j657];
			}
			/* Recursive loop 139 */
			/* Pre code */
			for (int j670 = 0; j670 < 4; j670 = j670 + 1) {
				iRec164_tmp[j670] = iRec164_perm[j670];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec164[i] = (((0.5f * (fYec45[i] - fYec45[i - 1])) < 0.0f) ? 1 - iRec164[i - 1] : iRec164[i - 1]);
			}
			/* Post code */
			for (int j671 = 0; j671 < 4; j671 = j671 + 1) {
				iRec164_perm[j671] = iRec164_tmp[vsize + j671];
			}
			/* Recursive loop 140 */
			/* Pre code */
			for (int j680 = 0; j680 < 4; j680 = j680 + 1) {
				iRec167_tmp[j680] = iRec167_perm[j680];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec167[i] = (((0.5f * (fYec47[i] - fYec47[i - 1])) < 0.0f) ? 1 - iRec167[i - 1] : iRec167[i - 1]);
			}
			/* Post code */
			for (int j681 = 0; j681 < 4; j681 = j681 + 1) {
				iRec167_perm[j681] = iRec167_tmp[vsize + j681];
			}
			/* Recursive loop 141 */
			/* Pre code */
			for (int j690 = 0; j690 < 4; j690 = j690 + 1) {
				iRec170_tmp[j690] = iRec170_perm[j690];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec170[i] = (((0.5f * (fYec51[i] - fYec51[i - 1])) < 0.0f) ? 1 - iRec170[i - 1] : iRec170[i - 1]);
			}
			/* Post code */
			for (int j691 = 0; j691 < 4; j691 = j691 + 1) {
				iRec170_perm[j691] = iRec170_tmp[vsize + j691];
			}
			/* Recursive loop 142 */
			/* Pre code */
			for (int j700 = 0; j700 < 4; j700 = j700 + 1) {
				iRec173_tmp[j700] = iRec173_perm[j700];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec173[i] = (((0.5f * (fYec49[i] - fYec49[i - 1])) < 0.0f) ? 1 - iRec173[i - 1] : iRec173[i - 1]);
			}
			/* Post code */
			for (int j701 = 0; j701 < 4; j701 = j701 + 1) {
				iRec173_perm[j701] = iRec173_tmp[vsize + j701];
			}
			/* Recursive loop 143 */
			/* Pre code */
			for (int j740 = 0; j740 < 4; j740 = j740 + 1) {
				iRec186_tmp[j740] = iRec186_perm[j740];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec186[i] = (((0.5f * (fYec37[i] - fYec37[i - 1])) < 0.0f) ? 1 - iRec186[i - 1] : iRec186[i - 1]);
			}
			/* Post code */
			for (int j741 = 0; j741 < 4; j741 = j741 + 1) {
				iRec186_perm[j741] = iRec186_tmp[vsize + j741];
			}
			/* Recursive loop 144 */
			/* Pre code */
			for (int j750 = 0; j750 < 4; j750 = j750 + 1) {
				iRec189_tmp[j750] = iRec189_perm[j750];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec189[i] = (((0.5f * (fYec43[i] - fYec43[i - 1])) < 0.0f) ? 1 - iRec189[i - 1] : iRec189[i - 1]);
			}
			/* Post code */
			for (int j751 = 0; j751 < 4; j751 = j751 + 1) {
				iRec189_perm[j751] = iRec189_tmp[vsize + j751];
			}
			/* Recursive loop 145 */
			/* Pre code */
			for (int j760 = 0; j760 < 4; j760 = j760 + 1) {
				iRec192_tmp[j760] = iRec192_perm[j760];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec192[i] = (((0.5f * (fYec41[i] - fYec41[i - 1])) < 0.0f) ? 1 - iRec192[i - 1] : iRec192[i - 1]);
			}
			/* Post code */
			for (int j761 = 0; j761 < 4; j761 = j761 + 1) {
				iRec192_perm[j761] = iRec192_tmp[vsize + j761];
			}
			/* Vectorizable loop 146 */
			/* Pre code */
			for (int j602 = 0; j602 < 4; j602 = j602 + 1) {
				fYec98_tmp[j602] = fYec98_perm[j602];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec98[i] = float(iRec145[i]) + fZec35[i];
			}
			/* Post code */
			for (int j603 = 0; j603 < 4; j603 = j603 + 1) {
				fYec98_perm[j603] = fYec98_tmp[vsize + j603];
			}
			/* Vectorizable loop 147 */
			/* Pre code */
			for (int j616 = 0; j616 < 4; j616 = j616 + 1) {
				fYec101_tmp[j616] = fYec101_perm[j616];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec101[i] = float(iRec149[i]) + fZec42[i];
			}
			/* Post code */
			for (int j617 = 0; j617 < 4; j617 = j617 + 1) {
				fYec101_perm[j617] = fYec101_tmp[vsize + j617];
			}
			/* Vectorizable loop 148 */
			/* Pre code */
			for (int j630 = 0; j630 < 4; j630 = j630 + 1) {
				fYec104_tmp[j630] = fYec104_perm[j630];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec104[i] = float(iRec153[i]) + fZec49[i];
			}
			/* Post code */
			for (int j631 = 0; j631 < 4; j631 = j631 + 1) {
				fYec104_perm[j631] = fYec104_tmp[vsize + j631];
			}
			/* Vectorizable loop 149 */
			/* Pre code */
			for (int j644 = 0; j644 < 4; j644 = j644 + 1) {
				fYec107_tmp[j644] = fYec107_perm[j644];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec107[i] = float(iRec157[i]) + fZec56[i];
			}
			/* Post code */
			for (int j645 = 0; j645 < 4; j645 = j645 + 1) {
				fYec107_perm[j645] = fYec107_tmp[vsize + j645];
			}
			/* Vectorizable loop 150 */
			/* Pre code */
			for (int j658 = 0; j658 < 4; j658 = j658 + 1) {
				fYec110_tmp[j658] = fYec110_perm[j658];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec110[i] = float(iRec161[i]) + fZec63[i];
			}
			/* Post code */
			for (int j659 = 0; j659 < 4; j659 = j659 + 1) {
				fYec110_perm[j659] = fYec110_tmp[vsize + j659];
			}
			/* Vectorizable loop 151 */
			/* Pre code */
			for (int j672 = 0; j672 < 4; j672 = j672 + 1) {
				fYec113_tmp[j672] = fYec113_perm[j672];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec113[i] = float(iRec164[i]) + fZec81[i];
			}
			/* Post code */
			for (int j673 = 0; j673 < 4; j673 = j673 + 1) {
				fYec113_perm[j673] = fYec113_tmp[vsize + j673];
			}
			/* Vectorizable loop 152 */
			/* Pre code */
			for (int j682 = 0; j682 < 4; j682 = j682 + 1) {
				fYec115_tmp[j682] = fYec115_perm[j682];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec115[i] = float(iRec167[i]) + fZec82[i];
			}
			/* Post code */
			for (int j683 = 0; j683 < 4; j683 = j683 + 1) {
				fYec115_perm[j683] = fYec115_tmp[vsize + j683];
			}
			/* Vectorizable loop 153 */
			/* Pre code */
			for (int j692 = 0; j692 < 4; j692 = j692 + 1) {
				fYec117_tmp[j692] = fYec117_perm[j692];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec117[i] = float(iRec170[i]) + fZec84[i];
			}
			/* Post code */
			for (int j693 = 0; j693 < 4; j693 = j693 + 1) {
				fYec117_perm[j693] = fYec117_tmp[vsize + j693];
			}
			/* Vectorizable loop 154 */
			/* Pre code */
			for (int j702 = 0; j702 < 4; j702 = j702 + 1) {
				fYec119_tmp[j702] = fYec119_perm[j702];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec119[i] = float(iRec173[i]) + fZec83[i];
			}
			/* Post code */
			for (int j703 = 0; j703 < 4; j703 = j703 + 1) {
				fYec119_perm[j703] = fYec119_tmp[vsize + j703];
			}
			/* Vectorizable loop 155 */
			/* Pre code */
			for (int j742 = 0; j742 < 4; j742 = j742 + 1) {
				fYec126_tmp[j742] = fYec126_perm[j742];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec126[i] = float(iRec186[i]) + fZec70[i];
			}
			/* Post code */
			for (int j743 = 0; j743 < 4; j743 = j743 + 1) {
				fYec126_perm[j743] = fYec126_tmp[vsize + j743];
			}
			/* Vectorizable loop 156 */
			/* Pre code */
			for (int j752 = 0; j752 < 4; j752 = j752 + 1) {
				fYec128_tmp[j752] = fYec128_perm[j752];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec128[i] = float(iRec189[i]) + fZec80[i];
			}
			/* Post code */
			for (int j753 = 0; j753 < 4; j753 = j753 + 1) {
				fYec128_perm[j753] = fYec128_tmp[vsize + j753];
			}
			/* Vectorizable loop 157 */
			/* Pre code */
			for (int j762 = 0; j762 < 4; j762 = j762 + 1) {
				fYec130_tmp[j762] = fYec130_perm[j762];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec130[i] = float(iRec192[i]) + fZec77[i];
			}
			/* Post code */
			for (int j763 = 0; j763 < 4; j763 = j763 + 1) {
				fYec130_perm[j763] = fYec130_tmp[vsize + j763];
			}
			/* Vectorizable loop 158 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec5[i] = fRec10[i] + (1.0f - fRec10[i - 1]);
			}
			/* Vectorizable loop 159 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec11[i] = fRec16[i] + (1.0f - fRec16[i - 1]);
			}
			/* Vectorizable loop 160 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec17[i] = fRec21[i] + (1.0f - fRec21[i - 1]);
			}
			/* Vectorizable loop 161 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec23[i] = fRec26[i] + (1.0f - fRec26[i - 1]);
			}
			/* Vectorizable loop 162 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec29[i] = fRec31[i] + (1.0f - fRec31[i - 1]);
			}
			/* Recursive loop 163 */
			/* Pre code */
			for (int j604 = 0; j604 < 4; j604 = j604 + 1) {
				iRec144_tmp[j604] = iRec144_perm[j604];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec144[i] = (((0.5f * (fYec98[i] - fYec98[i - 1])) < 0.0f) ? 1 - iRec144[i - 1] : iRec144[i - 1]);
			}
			/* Post code */
			for (int j605 = 0; j605 < 4; j605 = j605 + 1) {
				iRec144_perm[j605] = iRec144_tmp[vsize + j605];
			}
			/* Vectorizable loop 164 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec172[i] = 0.5f * fYec98[i];
			}
			/* Recursive loop 165 */
			/* Pre code */
			for (int j618 = 0; j618 < 4; j618 = j618 + 1) {
				iRec148_tmp[j618] = iRec148_perm[j618];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec148[i] = (((0.5f * (fYec101[i] - fYec101[i - 1])) < 0.0f) ? 1 - iRec148[i - 1] : iRec148[i - 1]);
			}
			/* Post code */
			for (int j619 = 0; j619 < 4; j619 = j619 + 1) {
				iRec148_perm[j619] = iRec148_tmp[vsize + j619];
			}
			/* Vectorizable loop 166 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec174[i] = 0.5f * fYec101[i];
			}
			/* Recursive loop 167 */
			/* Pre code */
			for (int j632 = 0; j632 < 4; j632 = j632 + 1) {
				iRec152_tmp[j632] = iRec152_perm[j632];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec152[i] = (((0.5f * (fYec104[i] - fYec104[i - 1])) < 0.0f) ? 1 - iRec152[i - 1] : iRec152[i - 1]);
			}
			/* Post code */
			for (int j633 = 0; j633 < 4; j633 = j633 + 1) {
				iRec152_perm[j633] = iRec152_tmp[vsize + j633];
			}
			/* Vectorizable loop 168 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec176[i] = 0.5f * fYec104[i];
			}
			/* Recursive loop 169 */
			/* Pre code */
			for (int j646 = 0; j646 < 4; j646 = j646 + 1) {
				iRec156_tmp[j646] = iRec156_perm[j646];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec156[i] = (((0.5f * (fYec107[i] - fYec107[i - 1])) < 0.0f) ? 1 - iRec156[i - 1] : iRec156[i - 1]);
			}
			/* Post code */
			for (int j647 = 0; j647 < 4; j647 = j647 + 1) {
				iRec156_perm[j647] = iRec156_tmp[vsize + j647];
			}
			/* Vectorizable loop 170 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec178[i] = 0.5f * fYec107[i];
			}
			/* Recursive loop 171 */
			/* Pre code */
			for (int j660 = 0; j660 < 4; j660 = j660 + 1) {
				iRec160_tmp[j660] = iRec160_perm[j660];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec160[i] = (((0.5f * (fYec110[i] - fYec110[i - 1])) < 0.0f) ? 1 - iRec160[i - 1] : iRec160[i - 1]);
			}
			/* Post code */
			for (int j661 = 0; j661 < 4; j661 = j661 + 1) {
				iRec160_perm[j661] = iRec160_tmp[vsize + j661];
			}
			/* Vectorizable loop 172 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec180[i] = 0.5f * fYec110[i];
			}
			/* Vectorizable loop 173 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec182[i] = 0.5f * fYec113[i];
			}
			/* Vectorizable loop 174 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec183[i] = 0.5f * fYec115[i];
			}
			/* Vectorizable loop 175 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec184[i] = 0.5f * fYec117[i];
			}
			/* Vectorizable loop 176 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec185[i] = 0.5f * fYec119[i];
			}
			/* Vectorizable loop 177 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec186[i] = 0.5f * fYec126[i];
			}
			/* Vectorizable loop 178 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec187[i] = 0.5f * fYec128[i];
			}
			/* Vectorizable loop 179 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec188[i] = 0.5f * fYec130[i];
			}
			/* Recursive loop 180 */
			/* Pre code */
			for (int j774 = 0; j774 < 4; j774 = j774 + 1) {
				iRec197_tmp[j774] = iRec197_perm[j774];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec197[i] = (((0.5f * (fYec119[i] - fYec119[i - 1])) < 0.0f) ? 1 - iRec197[i - 1] : iRec197[i - 1]);
			}
			/* Post code */
			for (int j775 = 0; j775 < 4; j775 = j775 + 1) {
				iRec197_perm[j775] = iRec197_tmp[vsize + j775];
			}
			/* Recursive loop 181 */
			/* Pre code */
			for (int j792 = 0; j792 < 4; j792 = j792 + 1) {
				iRec202_tmp[j792] = iRec202_perm[j792];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec202[i] = (((0.5f * (fYec117[i] - fYec117[i - 1])) < 0.0f) ? 1 - iRec202[i - 1] : iRec202[i - 1]);
			}
			/* Post code */
			for (int j793 = 0; j793 < 4; j793 = j793 + 1) {
				iRec202_perm[j793] = iRec202_tmp[vsize + j793];
			}
			/* Recursive loop 182 */
			/* Pre code */
			for (int j810 = 0; j810 < 4; j810 = j810 + 1) {
				iRec207_tmp[j810] = iRec207_perm[j810];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec207[i] = (((0.5f * (fYec115[i] - fYec115[i - 1])) < 0.0f) ? 1 - iRec207[i - 1] : iRec207[i - 1]);
			}
			/* Post code */
			for (int j811 = 0; j811 < 4; j811 = j811 + 1) {
				iRec207_perm[j811] = iRec207_tmp[vsize + j811];
			}
			/* Recursive loop 183 */
			/* Pre code */
			for (int j828 = 0; j828 < 4; j828 = j828 + 1) {
				iRec212_tmp[j828] = iRec212_perm[j828];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec212[i] = (((0.5f * (fYec113[i] - fYec113[i - 1])) < 0.0f) ? 1 - iRec212[i - 1] : iRec212[i - 1]);
			}
			/* Post code */
			for (int j829 = 0; j829 < 4; j829 = j829 + 1) {
				iRec212_perm[j829] = iRec212_tmp[vsize + j829];
			}
			/* Recursive loop 184 */
			/* Pre code */
			for (int j846 = 0; j846 < 4; j846 = j846 + 1) {
				iRec217_tmp[j846] = iRec217_perm[j846];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec217[i] = (((0.5f * (fYec128[i] - fYec128[i - 1])) < 0.0f) ? 1 - iRec217[i - 1] : iRec217[i - 1]);
			}
			/* Post code */
			for (int j847 = 0; j847 < 4; j847 = j847 + 1) {
				iRec217_perm[j847] = iRec217_tmp[vsize + j847];
			}
			/* Recursive loop 185 */
			/* Pre code */
			for (int j864 = 0; j864 < 4; j864 = j864 + 1) {
				iRec222_tmp[j864] = iRec222_perm[j864];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec222[i] = (((0.5f * (fYec130[i] - fYec130[i - 1])) < 0.0f) ? 1 - iRec222[i - 1] : iRec222[i - 1]);
			}
			/* Post code */
			for (int j865 = 0; j865 < 4; j865 = j865 + 1) {
				iRec222_perm[j865] = iRec222_tmp[vsize + j865];
			}
			/* Recursive loop 186 */
			/* Pre code */
			for (int j882 = 0; j882 < 4; j882 = j882 + 1) {
				iRec227_tmp[j882] = iRec227_perm[j882];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec227[i] = (((0.5f * (fYec126[i] - fYec126[i - 1])) < 0.0f) ? 1 - iRec227[i - 1] : iRec227[i - 1]);
			}
			/* Post code */
			for (int j883 = 0; j883 < 4; j883 = j883 + 1) {
				iRec227_perm[j883] = iRec227_tmp[vsize + j883];
			}
			/* Vectorizable loop 187 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec6[i] = saw_polyblep_fast(fRec10[i], fRec10[i - 1], fRec10[i - 2], ((fZec5[i] > 1.0f) ? fZec2[i] : fZec5[i]));
			}
			/* Vectorizable loop 188 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec12[i] = saw_polyblep_fast(fRec16[i], fRec16[i - 1], fRec16[i - 2], ((fZec11[i] > 1.0f) ? fZec8[i] : fZec11[i]));
			}
			/* Vectorizable loop 189 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec18[i] = saw_polyblep_fast(fRec21[i], fRec21[i - 1], fRec21[i - 2], ((fZec17[i] > 1.0f) ? fZec14[i] : fZec17[i]));
			}
			/* Vectorizable loop 190 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec24[i] = saw_polyblep_fast(fRec26[i], fRec26[i - 1], fRec26[i - 2], ((fZec23[i] > 1.0f) ? fZec20[i] : fZec23[i]));
			}
			/* Vectorizable loop 191 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec30[i] = saw_polyblep_fast(fRec31[i], fRec31[i - 1], fRec31[i - 2], ((fZec29[i] > 1.0f) ? fZec26[i] : fZec29[i]));
			}
			/* Vectorizable loop 192 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec57[i] = fRec55[i] + (1.0f - fRec55[i - 1]);
			}
			/* Vectorizable loop 193 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec64[i] = fRec61[i] + (1.0f - fRec61[i - 1]);
			}
			/* Vectorizable loop 194 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec71[i] = fRec67[i] + (1.0f - fRec67[i - 1]);
			}
			/* Vectorizable loop 195 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec78[i] = fRec73[i] + (1.0f - fRec73[i - 1]);
			}
			/* Vectorizable loop 196 */
			/* Pre code */
			for (int j228 = 0; j228 < 4; j228 = j228 + 1) {
				fYec44_tmp[j228] = fYec44_perm[j228];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec44[i] = float(fZec80[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j229 = 0; j229 < 4; j229 = j229 + 1) {
				fYec44_perm[j229] = fYec44_tmp[vsize + j229];
			}
			/* Vectorizable loop 197 */
			/* Pre code */
			for (int j238 = 0; j238 < 4; j238 = j238 + 1) {
				fYec46_tmp[j238] = fYec46_perm[j238];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec46[i] = float(fZec81[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j239 = 0; j239 < 4; j239 = j239 + 1) {
				fYec46_perm[j239] = fYec46_tmp[vsize + j239];
			}
			/* Vectorizable loop 198 */
			/* Pre code */
			for (int j248 = 0; j248 < 4; j248 = j248 + 1) {
				fYec48_tmp[j248] = fYec48_perm[j248];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec48[i] = float(fZec82[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j249 = 0; j249 < 4; j249 = j249 + 1) {
				fYec48_perm[j249] = fYec48_tmp[vsize + j249];
			}
			/* Vectorizable loop 199 */
			/* Pre code */
			for (int j258 = 0; j258 < 4; j258 = j258 + 1) {
				fYec50_tmp[j258] = fYec50_perm[j258];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec50[i] = float(fZec83[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j259 = 0; j259 < 4; j259 = j259 + 1) {
				fYec50_perm[j259] = fYec50_tmp[vsize + j259];
			}
			/* Vectorizable loop 200 */
			/* Pre code */
			for (int j268 = 0; j268 < 4; j268 = j268 + 1) {
				fYec52_tmp[j268] = fYec52_perm[j268];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec52[i] = float(fZec84[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j269 = 0; j269 < 4; j269 = j269 + 1) {
				fYec52_perm[j269] = fYec52_tmp[vsize + j269];
			}
			/* Vectorizable loop 201 */
			/* Pre code */
			for (int j606 = 0; j606 < 4; j606 = j606 + 1) {
				fYec99_tmp[j606] = fYec99_perm[j606];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec99[i] = float(iRec144[i]) + fZec172[i];
			}
			/* Post code */
			for (int j607 = 0; j607 < 4; j607 = j607 + 1) {
				fYec99_perm[j607] = fYec99_tmp[vsize + j607];
			}
			/* Vectorizable loop 202 */
			/* Pre code */
			for (int j620 = 0; j620 < 4; j620 = j620 + 1) {
				fYec102_tmp[j620] = fYec102_perm[j620];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec102[i] = float(iRec148[i]) + fZec174[i];
			}
			/* Post code */
			for (int j621 = 0; j621 < 4; j621 = j621 + 1) {
				fYec102_perm[j621] = fYec102_tmp[vsize + j621];
			}
			/* Vectorizable loop 203 */
			/* Pre code */
			for (int j634 = 0; j634 < 4; j634 = j634 + 1) {
				fYec105_tmp[j634] = fYec105_perm[j634];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec105[i] = float(iRec152[i]) + fZec176[i];
			}
			/* Post code */
			for (int j635 = 0; j635 < 4; j635 = j635 + 1) {
				fYec105_perm[j635] = fYec105_tmp[vsize + j635];
			}
			/* Vectorizable loop 204 */
			/* Pre code */
			for (int j648 = 0; j648 < 4; j648 = j648 + 1) {
				fYec108_tmp[j648] = fYec108_perm[j648];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec108[i] = float(iRec156[i]) + fZec178[i];
			}
			/* Post code */
			for (int j649 = 0; j649 < 4; j649 = j649 + 1) {
				fYec108_perm[j649] = fYec108_tmp[vsize + j649];
			}
			/* Vectorizable loop 205 */
			/* Pre code */
			for (int j662 = 0; j662 < 4; j662 = j662 + 1) {
				fYec111_tmp[j662] = fYec111_perm[j662];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec111[i] = float(iRec160[i]) + fZec180[i];
			}
			/* Post code */
			for (int j663 = 0; j663 < 4; j663 = j663 + 1) {
				fYec111_perm[j663] = fYec111_tmp[vsize + j663];
			}
			/* Vectorizable loop 206 */
			/* Pre code */
			for (int j776 = 0; j776 < 4; j776 = j776 + 1) {
				fYec133_tmp[j776] = fYec133_perm[j776];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec133[i] = float(iRec197[i]) + fZec185[i];
			}
			/* Post code */
			for (int j777 = 0; j777 < 4; j777 = j777 + 1) {
				fYec133_perm[j777] = fYec133_tmp[vsize + j777];
			}
			/* Vectorizable loop 207 */
			/* Pre code */
			for (int j794 = 0; j794 < 4; j794 = j794 + 1) {
				fYec137_tmp[j794] = fYec137_perm[j794];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec137[i] = float(iRec202[i]) + fZec184[i];
			}
			/* Post code */
			for (int j795 = 0; j795 < 4; j795 = j795 + 1) {
				fYec137_perm[j795] = fYec137_tmp[vsize + j795];
			}
			/* Vectorizable loop 208 */
			/* Pre code */
			for (int j812 = 0; j812 < 4; j812 = j812 + 1) {
				fYec141_tmp[j812] = fYec141_perm[j812];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec141[i] = float(iRec207[i]) + fZec183[i];
			}
			/* Post code */
			for (int j813 = 0; j813 < 4; j813 = j813 + 1) {
				fYec141_perm[j813] = fYec141_tmp[vsize + j813];
			}
			/* Vectorizable loop 209 */
			/* Pre code */
			for (int j830 = 0; j830 < 4; j830 = j830 + 1) {
				fYec145_tmp[j830] = fYec145_perm[j830];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec145[i] = float(iRec212[i]) + fZec182[i];
			}
			/* Post code */
			for (int j831 = 0; j831 < 4; j831 = j831 + 1) {
				fYec145_perm[j831] = fYec145_tmp[vsize + j831];
			}
			/* Vectorizable loop 210 */
			/* Pre code */
			for (int j848 = 0; j848 < 4; j848 = j848 + 1) {
				fYec149_tmp[j848] = fYec149_perm[j848];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec149[i] = float(iRec217[i]) + fZec187[i];
			}
			/* Post code */
			for (int j849 = 0; j849 < 4; j849 = j849 + 1) {
				fYec149_perm[j849] = fYec149_tmp[vsize + j849];
			}
			/* Vectorizable loop 211 */
			/* Pre code */
			for (int j866 = 0; j866 < 4; j866 = j866 + 1) {
				fYec153_tmp[j866] = fYec153_perm[j866];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec153[i] = float(iRec222[i]) + fZec188[i];
			}
			/* Post code */
			for (int j867 = 0; j867 < 4; j867 = j867 + 1) {
				fYec153_perm[j867] = fYec153_tmp[vsize + j867];
			}
			/* Vectorizable loop 212 */
			/* Pre code */
			for (int j884 = 0; j884 < 4; j884 = j884 + 1) {
				fYec157_tmp[j884] = fYec157_perm[j884];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec157[i] = float(iRec227[i]) + fZec186[i];
			}
			/* Post code */
			for (int j885 = 0; j885 < 4; j885 = j885 + 1) {
				fYec157_perm[j885] = fYec157_tmp[vsize + j885];
			}
			/* Vectorizable loop 213 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec36[i] = fRec37[i] + (1.0f - fRec37[i - 1]);
			}
			/* Vectorizable loop 214 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec43[i] = fRec43[i] + (1.0f - fRec43[i - 1]);
			}
			/* Vectorizable loop 215 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec50[i] = fRec49[i] + (1.0f - fRec49[i - 1]);
			}
			/* Vectorizable loop 216 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec58[i] = saw_polyblep_fast(fRec55[i], fRec55[i - 1], fRec55[i - 2], ((fZec57[i] > 1.0f) ? fZec53[i] : fZec57[i]));
			}
			/* Vectorizable loop 217 */
			/* Pre code */
			for (int j158 = 0; j158 < 4; j158 = j158 + 1) {
				fYec30_tmp[j158] = fYec30_perm[j158];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec30[i] = float(fZec56[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j159 = 0; j159 < 4; j159 = j159 + 1) {
				fYec30_perm[j159] = fYec30_tmp[vsize + j159];
			}
			/* Vectorizable loop 218 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec65[i] = saw_polyblep_fast(fRec61[i], fRec61[i - 1], fRec61[i - 2], ((fZec64[i] > 1.0f) ? fZec60[i] : fZec64[i]));
			}
			/* Vectorizable loop 219 */
			/* Pre code */
			for (int j178 = 0; j178 < 4; j178 = j178 + 1) {
				fYec34_tmp[j178] = fYec34_perm[j178];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec34[i] = float(fZec63[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j179 = 0; j179 < 4; j179 = j179 + 1) {
				fYec34_perm[j179] = fYec34_tmp[vsize + j179];
			}
			/* Vectorizable loop 220 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec72[i] = saw_polyblep_fast(fRec67[i], fRec67[i - 1], fRec67[i - 2], ((fZec71[i] > 1.0f) ? fZec67[i] : fZec71[i]));
			}
			/* Vectorizable loop 221 */
			/* Pre code */
			for (int j198 = 0; j198 < 4; j198 = j198 + 1) {
				fYec38_tmp[j198] = fYec38_perm[j198];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec38[i] = float(fZec70[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j199 = 0; j199 < 4; j199 = j199 + 1) {
				fYec38_perm[j199] = fYec38_tmp[vsize + j199];
			}
			/* Vectorizable loop 222 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec79[i] = saw_polyblep_fast(fRec73[i], fRec73[i - 1], fRec73[i - 2], ((fZec78[i] > 1.0f) ? fZec74[i] : fZec78[i]));
			}
			/* Vectorizable loop 223 */
			/* Pre code */
			for (int j218 = 0; j218 < 4; j218 = j218 + 1) {
				fYec42_tmp[j218] = fYec42_perm[j218];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec42[i] = float(fZec77[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j219 = 0; j219 < 4; j219 = j219 + 1) {
				fYec42_perm[j219] = fYec42_tmp[vsize + j219];
			}
			/* Recursive loop 224 */
			/* Pre code */
			for (int j230 = 0; j230 < 4; j230 = j230 + 1) {
				fRec76_tmp[j230] = fRec76_perm[j230];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec76[i] = fRec76[i - 1] + fConst17 * (2.0f * fYec44[i - 1] + square_polyblep_precalc(fZec80[i], 0.5f * fYec43[i - 1], 0.5f * fYec43[i - 2], fZec6[i]) - fRec76[i - 1]);
			}
			/* Post code */
			for (int j231 = 0; j231 < 4; j231 = j231 + 1) {
				fRec76_perm[j231] = fRec76_tmp[vsize + j231];
			}
			/* Recursive loop 225 */
			/* Pre code */
			for (int j240 = 0; j240 < 4; j240 = j240 + 1) {
				fRec79_tmp[j240] = fRec79_perm[j240];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec79[i] = fRec79[i - 1] + fConst20 * (2.0f * fYec46[i - 1] + square_polyblep_precalc(fZec81[i], 0.5f * fYec45[i - 1], 0.5f * fYec45[i - 2], fZec12[i]) - fRec79[i - 1]);
			}
			/* Post code */
			for (int j241 = 0; j241 < 4; j241 = j241 + 1) {
				fRec79_perm[j241] = fRec79_tmp[vsize + j241];
			}
			/* Recursive loop 226 */
			/* Pre code */
			for (int j250 = 0; j250 < 4; j250 = j250 + 1) {
				fRec82_tmp[j250] = fRec82_perm[j250];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec82[i] = fRec82[i - 1] + fConst20 * (2.0f * fYec48[i - 1] + square_polyblep_precalc(fZec82[i], 0.5f * fYec47[i - 1], 0.5f * fYec47[i - 2], fZec18[i]) - fRec82[i - 1]);
			}
			/* Post code */
			for (int j251 = 0; j251 < 4; j251 = j251 + 1) {
				fRec82_perm[j251] = fRec82_tmp[vsize + j251];
			}
			/* Recursive loop 227 */
			/* Pre code */
			for (int j260 = 0; j260 < 4; j260 = j260 + 1) {
				fRec85_tmp[j260] = fRec85_perm[j260];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec85[i] = fRec85[i - 1] + fConst20 * (2.0f * fYec50[i - 1] + square_polyblep_precalc(fZec83[i], 0.5f * fYec49[i - 1], 0.5f * fYec49[i - 2], fZec30[i]) - fRec85[i - 1]);
			}
			/* Post code */
			for (int j261 = 0; j261 < 4; j261 = j261 + 1) {
				fRec85_perm[j261] = fRec85_tmp[vsize + j261];
			}
			/* Recursive loop 228 */
			/* Pre code */
			for (int j270 = 0; j270 < 4; j270 = j270 + 1) {
				fRec88_tmp[j270] = fRec88_perm[j270];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec88[i] = fRec88[i - 1] + fConst20 * (2.0f * fYec52[i - 1] + square_polyblep_precalc(fZec84[i], 0.5f * fYec51[i - 1], 0.5f * fYec51[i - 2], fZec24[i]) - fRec88[i - 1]);
			}
			/* Post code */
			for (int j271 = 0; j271 < 4; j271 = j271 + 1) {
				fRec88_perm[j271] = fRec88_tmp[vsize + j271];
			}
			/* Vectorizable loop 229 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec173[i] = 0.5f * fYec99[i];
			}
			/* Vectorizable loop 230 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec175[i] = 0.5f * fYec102[i];
			}
			/* Vectorizable loop 231 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec177[i] = 0.5f * fYec105[i];
			}
			/* Vectorizable loop 232 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec179[i] = 0.5f * fYec108[i];
			}
			/* Vectorizable loop 233 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec181[i] = 0.5f * fYec111[i];
			}
			/* Recursive loop 234 */
			/* Pre code */
			for (int j778 = 0; j778 < 4; j778 = j778 + 1) {
				iRec196_tmp[j778] = iRec196_perm[j778];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec196[i] = (((0.5f * (fYec133[i] - fYec133[i - 1])) < 0.0f) ? 1 - iRec196[i - 1] : iRec196[i - 1]);
			}
			/* Post code */
			for (int j779 = 0; j779 < 4; j779 = j779 + 1) {
				iRec196_perm[j779] = iRec196_tmp[vsize + j779];
			}
			/* Vectorizable loop 235 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec238[i] = 0.5f * fYec133[i];
			}
			/* Recursive loop 236 */
			/* Pre code */
			for (int j796 = 0; j796 < 4; j796 = j796 + 1) {
				iRec201_tmp[j796] = iRec201_perm[j796];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec201[i] = (((0.5f * (fYec137[i] - fYec137[i - 1])) < 0.0f) ? 1 - iRec201[i - 1] : iRec201[i - 1]);
			}
			/* Post code */
			for (int j797 = 0; j797 < 4; j797 = j797 + 1) {
				iRec201_perm[j797] = iRec201_tmp[vsize + j797];
			}
			/* Vectorizable loop 237 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec241[i] = 0.5f * fYec137[i];
			}
			/* Recursive loop 238 */
			/* Pre code */
			for (int j814 = 0; j814 < 4; j814 = j814 + 1) {
				iRec206_tmp[j814] = iRec206_perm[j814];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec206[i] = (((0.5f * (fYec141[i] - fYec141[i - 1])) < 0.0f) ? 1 - iRec206[i - 1] : iRec206[i - 1]);
			}
			/* Post code */
			for (int j815 = 0; j815 < 4; j815 = j815 + 1) {
				iRec206_perm[j815] = iRec206_tmp[vsize + j815];
			}
			/* Vectorizable loop 239 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec244[i] = 0.5f * fYec141[i];
			}
			/* Recursive loop 240 */
			/* Pre code */
			for (int j832 = 0; j832 < 4; j832 = j832 + 1) {
				iRec211_tmp[j832] = iRec211_perm[j832];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec211[i] = (((0.5f * (fYec145[i] - fYec145[i - 1])) < 0.0f) ? 1 - iRec211[i - 1] : iRec211[i - 1]);
			}
			/* Post code */
			for (int j833 = 0; j833 < 4; j833 = j833 + 1) {
				iRec211_perm[j833] = iRec211_tmp[vsize + j833];
			}
			/* Vectorizable loop 241 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec247[i] = 0.5f * fYec145[i];
			}
			/* Recursive loop 242 */
			/* Pre code */
			for (int j850 = 0; j850 < 4; j850 = j850 + 1) {
				iRec216_tmp[j850] = iRec216_perm[j850];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec216[i] = (((0.5f * (fYec149[i] - fYec149[i - 1])) < 0.0f) ? 1 - iRec216[i - 1] : iRec216[i - 1]);
			}
			/* Post code */
			for (int j851 = 0; j851 < 4; j851 = j851 + 1) {
				iRec216_perm[j851] = iRec216_tmp[vsize + j851];
			}
			/* Vectorizable loop 243 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec250[i] = 0.5f * fYec149[i];
			}
			/* Recursive loop 244 */
			/* Pre code */
			for (int j868 = 0; j868 < 4; j868 = j868 + 1) {
				iRec221_tmp[j868] = iRec221_perm[j868];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec221[i] = (((0.5f * (fYec153[i] - fYec153[i - 1])) < 0.0f) ? 1 - iRec221[i - 1] : iRec221[i - 1]);
			}
			/* Post code */
			for (int j869 = 0; j869 < 4; j869 = j869 + 1) {
				iRec221_perm[j869] = iRec221_tmp[vsize + j869];
			}
			/* Vectorizable loop 245 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec253[i] = 0.5f * fYec153[i];
			}
			/* Recursive loop 246 */
			/* Pre code */
			for (int j886 = 0; j886 < 4; j886 = j886 + 1) {
				iRec226_tmp[j886] = iRec226_perm[j886];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec226[i] = (((0.5f * (fYec157[i] - fYec157[i - 1])) < 0.0f) ? 1 - iRec226[i - 1] : iRec226[i - 1]);
			}
			/* Post code */
			for (int j887 = 0; j887 < 4; j887 = j887 + 1) {
				iRec226_perm[j887] = iRec226_tmp[vsize + j887];
			}
			/* Vectorizable loop 247 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec256[i] = 0.5f * fYec157[i];
			}
			/* Recursive loop 248 */
			/* Pre code */
			for (int j900 = 0; j900 < 4; j900 = j900 + 1) {
				iRec231_tmp[j900] = iRec231_perm[j900];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec231[i] = (((0.5f * (fYec111[i] - fYec111[i - 1])) < 0.0f) ? 1 - iRec231[i - 1] : iRec231[i - 1]);
			}
			/* Post code */
			for (int j901 = 0; j901 < 4; j901 = j901 + 1) {
				iRec231_perm[j901] = iRec231_tmp[vsize + j901];
			}
			/* Recursive loop 249 */
			/* Pre code */
			for (int j914 = 0; j914 < 4; j914 = j914 + 1) {
				iRec235_tmp[j914] = iRec235_perm[j914];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec235[i] = (((0.5f * (fYec108[i] - fYec108[i - 1])) < 0.0f) ? 1 - iRec235[i - 1] : iRec235[i - 1]);
			}
			/* Post code */
			for (int j915 = 0; j915 < 4; j915 = j915 + 1) {
				iRec235_perm[j915] = iRec235_tmp[vsize + j915];
			}
			/* Recursive loop 250 */
			/* Pre code */
			for (int j928 = 0; j928 < 4; j928 = j928 + 1) {
				iRec239_tmp[j928] = iRec239_perm[j928];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec239[i] = (((0.5f * (fYec105[i] - fYec105[i - 1])) < 0.0f) ? 1 - iRec239[i - 1] : iRec239[i - 1]);
			}
			/* Post code */
			for (int j929 = 0; j929 < 4; j929 = j929 + 1) {
				iRec239_perm[j929] = iRec239_tmp[vsize + j929];
			}
			/* Recursive loop 251 */
			/* Pre code */
			for (int j942 = 0; j942 < 4; j942 = j942 + 1) {
				iRec243_tmp[j942] = iRec243_perm[j942];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec243[i] = (((0.5f * (fYec102[i] - fYec102[i - 1])) < 0.0f) ? 1 - iRec243[i - 1] : iRec243[i - 1]);
			}
			/* Post code */
			for (int j943 = 0; j943 < 4; j943 = j943 + 1) {
				iRec243_perm[j943] = iRec243_tmp[vsize + j943];
			}
			/* Recursive loop 252 */
			/* Pre code */
			for (int j956 = 0; j956 < 4; j956 = j956 + 1) {
				iRec247_tmp[j956] = iRec247_perm[j956];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec247[i] = (((0.5f * (fYec99[i] - fYec99[i - 1])) < 0.0f) ? 1 - iRec247[i - 1] : iRec247[i - 1]);
			}
			/* Post code */
			for (int j957 = 0; j957 < 4; j957 = j957 + 1) {
				iRec247_perm[j957] = iRec247_tmp[vsize + j957];
			}
			/* Vectorizable loop 253 */
			/* Pre code */
			for (int j78 = 0; j78 < 4; j78 = j78 + 1) {
				fYec14_tmp[j78] = fYec14_perm[j78];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec14[i] = float(fZec28[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j79 = 0; j79 < 4; j79 = j79 + 1) {
				fYec14_perm[j79] = fYec14_tmp[vsize + j79];
			}
			/* Vectorizable loop 254 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec37[i] = saw_polyblep_fast(fRec37[i], fRec37[i - 1], fRec37[i - 2], ((fZec36[i] > 1.0f) ? fZec32[i] : fZec36[i]));
			}
			/* Vectorizable loop 255 */
			/* Pre code */
			for (int j98 = 0; j98 < 4; j98 = j98 + 1) {
				fYec18_tmp[j98] = fYec18_perm[j98];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec18[i] = float(fZec35[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j99 = 0; j99 < 4; j99 = j99 + 1) {
				fYec18_perm[j99] = fYec18_tmp[vsize + j99];
			}
			/* Vectorizable loop 256 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec44[i] = saw_polyblep_fast(fRec43[i], fRec43[i - 1], fRec43[i - 2], ((fZec43[i] > 1.0f) ? fZec39[i] : fZec43[i]));
			}
			/* Vectorizable loop 257 */
			/* Pre code */
			for (int j118 = 0; j118 < 4; j118 = j118 + 1) {
				fYec22_tmp[j118] = fYec22_perm[j118];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec22[i] = float(fZec42[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j119 = 0; j119 < 4; j119 = j119 + 1) {
				fYec22_perm[j119] = fYec22_tmp[vsize + j119];
			}
			/* Vectorizable loop 258 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec51[i] = saw_polyblep_fast(fRec49[i], fRec49[i - 1], fRec49[i - 2], ((fZec50[i] > 1.0f) ? fZec46[i] : fZec50[i]));
			}
			/* Vectorizable loop 259 */
			/* Pre code */
			for (int j138 = 0; j138 < 4; j138 = j138 + 1) {
				fYec26_tmp[j138] = fYec26_perm[j138];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec26[i] = float(fZec49[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j139 = 0; j139 < 4; j139 = j139 + 1) {
				fYec26_perm[j139] = fYec26_tmp[vsize + j139];
			}
			/* Recursive loop 260 */
			/* Pre code */
			for (int j160 = 0; j160 < 4; j160 = j160 + 1) {
				fRec52_tmp[j160] = fRec52_perm[j160];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec52[i] = fRec52[i - 1] + fConst12 * (2.0f * fYec30[i - 1] + square_polyblep_precalc(fZec56[i], 0.5f * fYec29[i - 1], 0.5f * fYec29[i - 2], fZec58[i]) - fRec52[i - 1]);
			}
			/* Post code */
			for (int j161 = 0; j161 < 4; j161 = j161 + 1) {
				fRec52_perm[j161] = fRec52_tmp[vsize + j161];
			}
			/* Recursive loop 261 */
			/* Pre code */
			for (int j180 = 0; j180 < 4; j180 = j180 + 1) {
				fRec58_tmp[j180] = fRec58_perm[j180];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec58[i] = fRec58[i - 1] + fConst17 * (2.0f * fYec34[i - 1] + square_polyblep_precalc(fZec63[i], 0.5f * fYec33[i - 1], 0.5f * fYec33[i - 2], fZec65[i]) - fRec58[i - 1]);
			}
			/* Post code */
			for (int j181 = 0; j181 < 4; j181 = j181 + 1) {
				fRec58_perm[j181] = fRec58_tmp[vsize + j181];
			}
			/* Recursive loop 262 */
			/* Pre code */
			for (int j200 = 0; j200 < 4; j200 = j200 + 1) {
				fRec64_tmp[j200] = fRec64_perm[j200];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec64[i] = fRec64[i - 1] + fConst17 * (2.0f * fYec38[i - 1] + square_polyblep_precalc(fZec70[i], 0.5f * fYec37[i - 1], 0.5f * fYec37[i - 2], fZec72[i]) - fRec64[i - 1]);
			}
			/* Post code */
			for (int j201 = 0; j201 < 4; j201 = j201 + 1) {
				fRec64_perm[j201] = fRec64_tmp[vsize + j201];
			}
			/* Recursive loop 263 */
			/* Pre code */
			for (int j220 = 0; j220 < 4; j220 = j220 + 1) {
				fRec70_tmp[j220] = fRec70_perm[j220];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec70[i] = fRec70[i - 1] + fConst17 * (2.0f * fYec42[i - 1] + square_polyblep_precalc(fZec77[i], 0.5f * fYec41[i - 1], 0.5f * fYec41[i - 2], fZec79[i]) - fRec70[i - 1]);
			}
			/* Post code */
			for (int j221 = 0; j221 < 4; j221 = j221 + 1) {
				fRec70_perm[j221] = fRec70_tmp[vsize + j221];
			}
			/* Recursive loop 264 */
			/* Pre code */
			for (int j232 = 0; j232 < 4; j232 = j232 + 1) {
				fRec75_tmp[j232] = fRec75_perm[j232];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec75[i] = fConst5 * (fRec75[i - 1] + (fRec76[i] - fRec76[i - 1]));
			}
			/* Post code */
			for (int j233 = 0; j233 < 4; j233 = j233 + 1) {
				fRec75_perm[j233] = fRec75_tmp[vsize + j233];
			}
			/* Recursive loop 265 */
			/* Pre code */
			for (int j242 = 0; j242 < 4; j242 = j242 + 1) {
				fRec78_tmp[j242] = fRec78_perm[j242];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec78[i] = fConst5 * (fRec78[i - 1] + (fRec79[i] - fRec79[i - 1]));
			}
			/* Post code */
			for (int j243 = 0; j243 < 4; j243 = j243 + 1) {
				fRec78_perm[j243] = fRec78_tmp[vsize + j243];
			}
			/* Recursive loop 266 */
			/* Pre code */
			for (int j252 = 0; j252 < 4; j252 = j252 + 1) {
				fRec81_tmp[j252] = fRec81_perm[j252];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec81[i] = fConst5 * (fRec81[i - 1] + (fRec82[i] - fRec82[i - 1]));
			}
			/* Post code */
			for (int j253 = 0; j253 < 4; j253 = j253 + 1) {
				fRec81_perm[j253] = fRec81_tmp[vsize + j253];
			}
			/* Recursive loop 267 */
			/* Pre code */
			for (int j262 = 0; j262 < 4; j262 = j262 + 1) {
				fRec84_tmp[j262] = fRec84_perm[j262];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec84[i] = fConst5 * (fRec84[i - 1] + (fRec85[i] - fRec85[i - 1]));
			}
			/* Post code */
			for (int j263 = 0; j263 < 4; j263 = j263 + 1) {
				fRec84_perm[j263] = fRec84_tmp[vsize + j263];
			}
			/* Recursive loop 268 */
			/* Pre code */
			for (int j272 = 0; j272 < 4; j272 = j272 + 1) {
				fRec87_tmp[j272] = fRec87_perm[j272];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec87[i] = fConst5 * (fRec87[i - 1] + (fRec88[i] - fRec88[i - 1]));
			}
			/* Post code */
			for (int j273 = 0; j273 < 4; j273 = j273 + 1) {
				fRec87_perm[j273] = fRec87_tmp[vsize + j273];
			}
			/* Vectorizable loop 269 */
			/* Pre code */
			for (int j780 = 0; j780 < 4; j780 = j780 + 1) {
				fYec134_tmp[j780] = fYec134_perm[j780];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec134[i] = float(iRec196[i]) + fZec238[i];
			}
			/* Post code */
			for (int j781 = 0; j781 < 4; j781 = j781 + 1) {
				fYec134_perm[j781] = fYec134_tmp[vsize + j781];
			}
			/* Vectorizable loop 270 */
			/* Pre code */
			for (int j798 = 0; j798 < 4; j798 = j798 + 1) {
				fYec138_tmp[j798] = fYec138_perm[j798];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec138[i] = float(iRec201[i]) + fZec241[i];
			}
			/* Post code */
			for (int j799 = 0; j799 < 4; j799 = j799 + 1) {
				fYec138_perm[j799] = fYec138_tmp[vsize + j799];
			}
			/* Vectorizable loop 271 */
			/* Pre code */
			for (int j816 = 0; j816 < 4; j816 = j816 + 1) {
				fYec142_tmp[j816] = fYec142_perm[j816];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec142[i] = float(iRec206[i]) + fZec244[i];
			}
			/* Post code */
			for (int j817 = 0; j817 < 4; j817 = j817 + 1) {
				fYec142_perm[j817] = fYec142_tmp[vsize + j817];
			}
			/* Vectorizable loop 272 */
			/* Pre code */
			for (int j834 = 0; j834 < 4; j834 = j834 + 1) {
				fYec146_tmp[j834] = fYec146_perm[j834];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec146[i] = float(iRec211[i]) + fZec247[i];
			}
			/* Post code */
			for (int j835 = 0; j835 < 4; j835 = j835 + 1) {
				fYec146_perm[j835] = fYec146_tmp[vsize + j835];
			}
			/* Vectorizable loop 273 */
			/* Pre code */
			for (int j852 = 0; j852 < 4; j852 = j852 + 1) {
				fYec150_tmp[j852] = fYec150_perm[j852];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec150[i] = float(iRec216[i]) + fZec250[i];
			}
			/* Post code */
			for (int j853 = 0; j853 < 4; j853 = j853 + 1) {
				fYec150_perm[j853] = fYec150_tmp[vsize + j853];
			}
			/* Vectorizable loop 274 */
			/* Pre code */
			for (int j870 = 0; j870 < 4; j870 = j870 + 1) {
				fYec154_tmp[j870] = fYec154_perm[j870];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec154[i] = float(iRec221[i]) + fZec253[i];
			}
			/* Post code */
			for (int j871 = 0; j871 < 4; j871 = j871 + 1) {
				fYec154_perm[j871] = fYec154_tmp[vsize + j871];
			}
			/* Vectorizable loop 275 */
			/* Pre code */
			for (int j888 = 0; j888 < 4; j888 = j888 + 1) {
				fYec158_tmp[j888] = fYec158_perm[j888];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec158[i] = float(iRec226[i]) + fZec256[i];
			}
			/* Post code */
			for (int j889 = 0; j889 < 4; j889 = j889 + 1) {
				fYec158_perm[j889] = fYec158_tmp[vsize + j889];
			}
			/* Vectorizable loop 276 */
			/* Pre code */
			for (int j902 = 0; j902 < 4; j902 = j902 + 1) {
				fYec161_tmp[j902] = fYec161_perm[j902];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec161[i] = float(iRec231[i]) + fZec181[i];
			}
			/* Post code */
			for (int j903 = 0; j903 < 4; j903 = j903 + 1) {
				fYec161_perm[j903] = fYec161_tmp[vsize + j903];
			}
			/* Vectorizable loop 277 */
			/* Pre code */
			for (int j916 = 0; j916 < 4; j916 = j916 + 1) {
				fYec164_tmp[j916] = fYec164_perm[j916];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec164[i] = float(iRec235[i]) + fZec179[i];
			}
			/* Post code */
			for (int j917 = 0; j917 < 4; j917 = j917 + 1) {
				fYec164_perm[j917] = fYec164_tmp[vsize + j917];
			}
			/* Vectorizable loop 278 */
			/* Pre code */
			for (int j930 = 0; j930 < 4; j930 = j930 + 1) {
				fYec167_tmp[j930] = fYec167_perm[j930];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec167[i] = float(iRec239[i]) + fZec177[i];
			}
			/* Post code */
			for (int j931 = 0; j931 < 4; j931 = j931 + 1) {
				fYec167_perm[j931] = fYec167_tmp[vsize + j931];
			}
			/* Vectorizable loop 279 */
			/* Pre code */
			for (int j944 = 0; j944 < 4; j944 = j944 + 1) {
				fYec170_tmp[j944] = fYec170_perm[j944];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec170[i] = float(iRec243[i]) + fZec175[i];
			}
			/* Post code */
			for (int j945 = 0; j945 < 4; j945 = j945 + 1) {
				fYec170_perm[j945] = fYec170_tmp[vsize + j945];
			}
			/* Vectorizable loop 280 */
			/* Pre code */
			for (int j958 = 0; j958 < 4; j958 = j958 + 1) {
				fYec173_tmp[j958] = fYec173_perm[j958];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec173[i] = float(iRec247[i]) + fZec173[i];
			}
			/* Post code */
			for (int j959 = 0; j959 < 4; j959 = j959 + 1) {
				fYec173_perm[j959] = fYec173_tmp[vsize + j959];
			}
			/* Vectorizable loop 281 */
			/* Pre code */
			for (int j14 = 0; j14 < 4; j14 = j14 + 1) {
				fYec2_tmp[j14] = fYec2_perm[j14];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec2[i] = float(fZec4[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j15 = 0; j15 < 4; j15 = j15 + 1) {
				fYec2_perm[j15] = fYec2_tmp[vsize + j15];
			}
			/* Vectorizable loop 282 */
			/* Pre code */
			for (int j30 = 0; j30 < 4; j30 = j30 + 1) {
				fYec5_tmp[j30] = fYec5_perm[j30];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec5[i] = float(fZec10[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j31 = 0; j31 < 4; j31 = j31 + 1) {
				fYec5_perm[j31] = fYec5_tmp[vsize + j31];
			}
			/* Vectorizable loop 283 */
			/* Pre code */
			for (int j46 = 0; j46 < 4; j46 = j46 + 1) {
				fYec8_tmp[j46] = fYec8_perm[j46];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec8[i] = float(fZec16[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j47 = 0; j47 < 4; j47 = j47 + 1) {
				fYec8_perm[j47] = fYec8_tmp[vsize + j47];
			}
			/* Vectorizable loop 284 */
			/* Pre code */
			for (int j62 = 0; j62 < 4; j62 = j62 + 1) {
				fYec11_tmp[j62] = fYec11_perm[j62];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec11[i] = float(fZec22[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j63 = 0; j63 < 4; j63 = j63 + 1) {
				fYec11_perm[j63] = fYec11_tmp[vsize + j63];
			}
			/* Recursive loop 285 */
			/* Pre code */
			for (int j80 = 0; j80 < 4; j80 = j80 + 1) {
				fRec29_tmp[j80] = fRec29_perm[j80];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec29[i] = fRec29[i - 1] + fConst7 * (2.0f * fYec14[i - 1] + square_polyblep_precalc(fZec28[i], 0.5f * fYec13[i - 1], 0.5f * fYec13[i - 2], fZec30[i]) - fRec29[i - 1]);
			}
			/* Post code */
			for (int j81 = 0; j81 < 4; j81 = j81 + 1) {
				fRec29_perm[j81] = fRec29_tmp[vsize + j81];
			}
			/* Recursive loop 286 */
			/* Pre code */
			for (int j100 = 0; j100 < 4; j100 = j100 + 1) {
				fRec34_tmp[j100] = fRec34_perm[j100];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec34[i] = fRec34[i - 1] + fConst12 * (2.0f * fYec18[i - 1] + square_polyblep_precalc(fZec35[i], 0.5f * fYec17[i - 1], 0.5f * fYec17[i - 2], fZec37[i]) - fRec34[i - 1]);
			}
			/* Post code */
			for (int j101 = 0; j101 < 4; j101 = j101 + 1) {
				fRec34_perm[j101] = fRec34_tmp[vsize + j101];
			}
			/* Recursive loop 287 */
			/* Pre code */
			for (int j120 = 0; j120 < 4; j120 = j120 + 1) {
				fRec40_tmp[j120] = fRec40_perm[j120];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec40[i] = fRec40[i - 1] + fConst12 * (2.0f * fYec22[i - 1] + square_polyblep_precalc(fZec42[i], 0.5f * fYec21[i - 1], 0.5f * fYec21[i - 2], fZec44[i]) - fRec40[i - 1]);
			}
			/* Post code */
			for (int j121 = 0; j121 < 4; j121 = j121 + 1) {
				fRec40_perm[j121] = fRec40_tmp[vsize + j121];
			}
			/* Recursive loop 288 */
			/* Pre code */
			for (int j140 = 0; j140 < 4; j140 = j140 + 1) {
				fRec46_tmp[j140] = fRec46_perm[j140];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec46[i] = fRec46[i - 1] + fConst12 * (2.0f * fYec26[i - 1] + square_polyblep_precalc(fZec49[i], 0.5f * fYec25[i - 1], 0.5f * fYec25[i - 2], fZec51[i]) - fRec46[i - 1]);
			}
			/* Post code */
			for (int j141 = 0; j141 < 4; j141 = j141 + 1) {
				fRec46_perm[j141] = fRec46_tmp[vsize + j141];
			}
			/* Recursive loop 289 */
			/* Pre code */
			for (int j162 = 0; j162 < 4; j162 = j162 + 1) {
				fRec51_tmp[j162] = fRec51_perm[j162];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec51[i] = fConst5 * (fRec51[i - 1] + (fRec52[i] - fRec52[i - 1]));
			}
			/* Post code */
			for (int j163 = 0; j163 < 4; j163 = j163 + 1) {
				fRec51_perm[j163] = fRec51_tmp[vsize + j163];
			}
			/* Recursive loop 290 */
			/* Pre code */
			for (int j182 = 0; j182 < 4; j182 = j182 + 1) {
				fRec57_tmp[j182] = fRec57_perm[j182];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec57[i] = fConst5 * (fRec57[i - 1] + (fRec58[i] - fRec58[i - 1]));
			}
			/* Post code */
			for (int j183 = 0; j183 < 4; j183 = j183 + 1) {
				fRec57_perm[j183] = fRec57_tmp[vsize + j183];
			}
			/* Recursive loop 291 */
			/* Pre code */
			for (int j202 = 0; j202 < 4; j202 = j202 + 1) {
				fRec63_tmp[j202] = fRec63_perm[j202];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec63[i] = fConst5 * (fRec63[i - 1] + (fRec64[i] - fRec64[i - 1]));
			}
			/* Post code */
			for (int j203 = 0; j203 < 4; j203 = j203 + 1) {
				fRec63_perm[j203] = fRec63_tmp[vsize + j203];
			}
			/* Recursive loop 292 */
			/* Pre code */
			for (int j222 = 0; j222 < 4; j222 = j222 + 1) {
				fRec69_tmp[j222] = fRec69_perm[j222];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec69[i] = fConst5 * (fRec69[i - 1] + (fRec70[i] - fRec70[i - 1]));
			}
			/* Post code */
			for (int j223 = 0; j223 < 4; j223 = j223 + 1) {
				fRec69_perm[j223] = fRec69_tmp[vsize + j223];
			}
			/* Vectorizable loop 293 */
			/* Pre code */
			for (int j274 = 0; j274 < 4; j274 = j274 + 1) {
				fYec53_tmp[j274] = fYec53_perm[j274];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec53[i] = fRec31[i] + -0.5f;
			}
			/* Post code */
			for (int j275 = 0; j275 < 4; j275 = j275 + 1) {
				fYec53_perm[j275] = fYec53_tmp[vsize + j275];
			}
			/* Vectorizable loop 294 */
			/* Pre code */
			for (int j280 = 0; j280 < 4; j280 = j280 + 1) {
				fYec55_tmp[j280] = fYec55_perm[j280];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec55[i] = float(fZec33[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j281 = 0; j281 < 4; j281 = j281 + 1) {
				fYec55_perm[j281] = fYec55_tmp[vsize + j281];
			}
			/* Vectorizable loop 295 */
			/* Pre code */
			for (int j286 = 0; j286 < 4; j286 = j286 + 1) {
				fYec56_tmp[j286] = fYec56_perm[j286];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec56[i] = float(fZec40[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j287 = 0; j287 < 4; j287 = j287 + 1) {
				fYec56_perm[j287] = fYec56_tmp[vsize + j287];
			}
			/* Vectorizable loop 296 */
			/* Pre code */
			for (int j292 = 0; j292 < 4; j292 = j292 + 1) {
				fYec57_tmp[j292] = fYec57_perm[j292];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec57[i] = float(fZec47[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j293 = 0; j293 < 4; j293 = j293 + 1) {
				fYec57_perm[j293] = fYec57_tmp[vsize + j293];
			}
			/* Vectorizable loop 297 */
			/* Pre code */
			for (int j298 = 0; j298 < 4; j298 = j298 + 1) {
				fYec58_tmp[j298] = fYec58_perm[j298];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec58[i] = float(fZec54[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j299 = 0; j299 < 4; j299 = j299 + 1) {
				fYec58_perm[j299] = fYec58_tmp[vsize + j299];
			}
			/* Vectorizable loop 298 */
			/* Pre code */
			for (int j304 = 0; j304 < 4; j304 = j304 + 1) {
				fYec59_tmp[j304] = fYec59_perm[j304];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec59[i] = float(fZec61[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j305 = 0; j305 < 4; j305 = j305 + 1) {
				fYec59_perm[j305] = fYec59_tmp[vsize + j305];
			}
			/* Vectorizable loop 299 */
			/* Pre code */
			for (int j310 = 0; j310 < 4; j310 = j310 + 1) {
				fYec60_tmp[j310] = fYec60_perm[j310];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec60[i] = float(fZec68[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j311 = 0; j311 < 4; j311 = j311 + 1) {
				fYec60_perm[j311] = fYec60_tmp[vsize + j311];
			}
			/* Vectorizable loop 300 */
			/* Pre code */
			for (int j316 = 0; j316 < 4; j316 = j316 + 1) {
				fYec61_tmp[j316] = fYec61_perm[j316];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec61[i] = float(fZec75[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j317 = 0; j317 < 4; j317 = j317 + 1) {
				fYec61_perm[j317] = fYec61_tmp[vsize + j317];
			}
			/* Vectorizable loop 301 */
			/* Pre code */
			for (int j322 = 0; j322 < 4; j322 = j322 + 1) {
				fYec62_tmp[j322] = fYec62_perm[j322];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec62[i] = float(fZec3[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j323 = 0; j323 < 4; j323 = j323 + 1) {
				fYec62_perm[j323] = fYec62_tmp[vsize + j323];
			}
			/* Vectorizable loop 302 */
			/* Pre code */
			for (int j328 = 0; j328 < 4; j328 = j328 + 1) {
				fYec63_tmp[j328] = fYec63_perm[j328];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec63[i] = float(fZec9[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j329 = 0; j329 < 4; j329 = j329 + 1) {
				fYec63_perm[j329] = fYec63_tmp[vsize + j329];
			}
			/* Vectorizable loop 303 */
			/* Pre code */
			for (int j334 = 0; j334 < 4; j334 = j334 + 1) {
				fYec64_tmp[j334] = fYec64_perm[j334];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec64[i] = float(fZec15[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j335 = 0; j335 < 4; j335 = j335 + 1) {
				fYec64_perm[j335] = fYec64_tmp[vsize + j335];
			}
			/* Vectorizable loop 304 */
			/* Pre code */
			for (int j340 = 0; j340 < 4; j340 = j340 + 1) {
				fYec65_tmp[j340] = fYec65_perm[j340];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec65[i] = float(fZec21[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j341 = 0; j341 < 4; j341 = j341 + 1) {
				fYec65_perm[j341] = fYec65_tmp[vsize + j341];
			}
			/* Vectorizable loop 305 */
			/* Pre code */
			for (int j346 = 0; j346 < 4; j346 = j346 + 1) {
				fYec66_tmp[j346] = fYec66_perm[j346];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec66[i] = float(fZec27[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j347 = 0; j347 < 4; j347 = j347 + 1) {
				fYec66_perm[j347] = fYec66_tmp[vsize + j347];
			}
			/* Vectorizable loop 306 */
			/* Pre code */
			for (int j352 = 0; j352 < 4; j352 = j352 + 1) {
				fYec67_tmp[j352] = fYec67_perm[j352];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec67[i] = float(fZec34[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j353 = 0; j353 < 4; j353 = j353 + 1) {
				fYec67_perm[j353] = fYec67_tmp[vsize + j353];
			}
			/* Vectorizable loop 307 */
			/* Pre code */
			for (int j358 = 0; j358 < 4; j358 = j358 + 1) {
				fYec68_tmp[j358] = fYec68_perm[j358];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec68[i] = float(fZec41[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j359 = 0; j359 < 4; j359 = j359 + 1) {
				fYec68_perm[j359] = fYec68_tmp[vsize + j359];
			}
			/* Vectorizable loop 308 */
			/* Pre code */
			for (int j364 = 0; j364 < 4; j364 = j364 + 1) {
				fYec69_tmp[j364] = fYec69_perm[j364];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec69[i] = float(fZec48[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j365 = 0; j365 < 4; j365 = j365 + 1) {
				fYec69_perm[j365] = fYec69_tmp[vsize + j365];
			}
			/* Vectorizable loop 309 */
			/* Pre code */
			for (int j370 = 0; j370 < 4; j370 = j370 + 1) {
				fYec70_tmp[j370] = fYec70_perm[j370];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec70[i] = float(fZec55[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j371 = 0; j371 < 4; j371 = j371 + 1) {
				fYec70_perm[j371] = fYec70_tmp[vsize + j371];
			}
			/* Vectorizable loop 310 */
			/* Pre code */
			for (int j376 = 0; j376 < 4; j376 = j376 + 1) {
				fYec71_tmp[j376] = fYec71_perm[j376];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec71[i] = float(fZec62[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j377 = 0; j377 < 4; j377 = j377 + 1) {
				fYec71_perm[j377] = fYec71_tmp[vsize + j377];
			}
			/* Vectorizable loop 311 */
			/* Pre code */
			for (int j382 = 0; j382 < 4; j382 = j382 + 1) {
				fYec72_tmp[j382] = fYec72_perm[j382];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec72[i] = float(fZec76[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j383 = 0; j383 < 4; j383 = j383 + 1) {
				fYec72_perm[j383] = fYec72_tmp[vsize + j383];
			}
			/* Vectorizable loop 312 */
			/* Pre code */
			for (int j388 = 0; j388 < 4; j388 = j388 + 1) {
				fYec73_tmp[j388] = fYec73_perm[j388];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec73[i] = float(fZec69[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j389 = 0; j389 < 4; j389 = j389 + 1) {
				fYec73_perm[j389] = fYec73_tmp[vsize + j389];
			}
			/* Vectorizable loop 313 */
			/* Pre code */
			for (int j394 = 0; j394 < 4; j394 = j394 + 1) {
				fYec74_tmp[j394] = fYec74_perm[j394];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec74[i] = fRec37[i] + -0.5f;
			}
			/* Post code */
			for (int j395 = 0; j395 < 4; j395 = j395 + 1) {
				fYec74_perm[j395] = fYec74_tmp[vsize + j395];
			}
			/* Vectorizable loop 314 */
			/* Pre code */
			for (int j400 = 0; j400 < 4; j400 = j400 + 1) {
				fYec76_tmp[j400] = fYec76_perm[j400];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec76[i] = fRec43[i] + -0.5f;
			}
			/* Post code */
			for (int j401 = 0; j401 < 4; j401 = j401 + 1) {
				fYec76_perm[j401] = fYec76_tmp[vsize + j401];
			}
			/* Vectorizable loop 315 */
			/* Pre code */
			for (int j406 = 0; j406 < 4; j406 = j406 + 1) {
				fYec78_tmp[j406] = fYec78_perm[j406];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec78[i] = fRec49[i] + -0.5f;
			}
			/* Post code */
			for (int j407 = 0; j407 < 4; j407 = j407 + 1) {
				fYec78_perm[j407] = fYec78_tmp[vsize + j407];
			}
			/* Vectorizable loop 316 */
			/* Pre code */
			for (int j412 = 0; j412 < 4; j412 = j412 + 1) {
				fYec80_tmp[j412] = fYec80_perm[j412];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec80[i] = fRec55[i] + -0.5f;
			}
			/* Post code */
			for (int j413 = 0; j413 < 4; j413 = j413 + 1) {
				fYec80_perm[j413] = fYec80_tmp[vsize + j413];
			}
			/* Vectorizable loop 317 */
			/* Pre code */
			for (int j418 = 0; j418 < 4; j418 = j418 + 1) {
				fYec82_tmp[j418] = fYec82_perm[j418];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec82[i] = fRec61[i] + -0.5f;
			}
			/* Post code */
			for (int j419 = 0; j419 < 4; j419 = j419 + 1) {
				fYec82_perm[j419] = fYec82_tmp[vsize + j419];
			}
			/* Vectorizable loop 318 */
			/* Pre code */
			for (int j424 = 0; j424 < 4; j424 = j424 + 1) {
				fYec84_tmp[j424] = fYec84_perm[j424];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec84[i] = fRec67[i] + -0.5f;
			}
			/* Post code */
			for (int j425 = 0; j425 < 4; j425 = j425 + 1) {
				fYec84_perm[j425] = fYec84_tmp[vsize + j425];
			}
			/* Vectorizable loop 319 */
			/* Pre code */
			for (int j430 = 0; j430 < 4; j430 = j430 + 1) {
				fYec86_tmp[j430] = fYec86_perm[j430];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec86[i] = fRec73[i] + -0.5f;
			}
			/* Post code */
			for (int j431 = 0; j431 < 4; j431 = j431 + 1) {
				fYec86_perm[j431] = fYec86_tmp[vsize + j431];
			}
			/* Vectorizable loop 320 */
			/* Pre code */
			for (int j436 = 0; j436 < 4; j436 = j436 + 1) {
				fYec88_tmp[j436] = fYec88_perm[j436];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec88[i] = fRec10[i] + -0.5f;
			}
			/* Post code */
			for (int j437 = 0; j437 < 4; j437 = j437 + 1) {
				fYec88_perm[j437] = fYec88_tmp[vsize + j437];
			}
			/* Vectorizable loop 321 */
			/* Pre code */
			for (int j442 = 0; j442 < 4; j442 = j442 + 1) {
				fYec90_tmp[j442] = fYec90_perm[j442];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec90[i] = fRec16[i] + -0.5f;
			}
			/* Post code */
			for (int j443 = 0; j443 < 4; j443 = j443 + 1) {
				fYec90_perm[j443] = fYec90_tmp[vsize + j443];
			}
			/* Vectorizable loop 322 */
			/* Pre code */
			for (int j448 = 0; j448 < 4; j448 = j448 + 1) {
				fYec92_tmp[j448] = fYec92_perm[j448];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec92[i] = fRec21[i] + -0.5f;
			}
			/* Post code */
			for (int j449 = 0; j449 < 4; j449 = j449 + 1) {
				fYec92_perm[j449] = fYec92_tmp[vsize + j449];
			}
			/* Vectorizable loop 323 */
			/* Pre code */
			for (int j454 = 0; j454 < 4; j454 = j454 + 1) {
				fYec94_tmp[j454] = fYec94_perm[j454];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec94[i] = fRec26[i] + -0.5f;
			}
			/* Post code */
			for (int j455 = 0; j455 < 4; j455 = j455 + 1) {
				fYec94_perm[j455] = fYec94_tmp[vsize + j455];
			}
			/* Vectorizable loop 324 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec162[i] = fRec75[i] + fRec78[i] + fRec81[i] + fRec84[i] + fRec87[i];
			}
			/* Recursive loop 325 */
			/* Pre code */
			for (int j782 = 0; j782 < 4; j782 = j782 + 1) {
				iRec195_tmp[j782] = iRec195_perm[j782];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec195[i] = (((0.5f * (fYec134[i] - fYec134[i - 1])) < 0.0f) ? 1 - iRec195[i - 1] : iRec195[i - 1]);
			}
			/* Post code */
			for (int j783 = 0; j783 < 4; j783 = j783 + 1) {
				iRec195_perm[j783] = iRec195_tmp[vsize + j783];
			}
			/* Vectorizable loop 326 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec239[i] = 0.5f * fYec134[i];
			}
			/* Recursive loop 327 */
			/* Pre code */
			for (int j800 = 0; j800 < 4; j800 = j800 + 1) {
				iRec200_tmp[j800] = iRec200_perm[j800];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec200[i] = (((0.5f * (fYec138[i] - fYec138[i - 1])) < 0.0f) ? 1 - iRec200[i - 1] : iRec200[i - 1]);
			}
			/* Post code */
			for (int j801 = 0; j801 < 4; j801 = j801 + 1) {
				iRec200_perm[j801] = iRec200_tmp[vsize + j801];
			}
			/* Vectorizable loop 328 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec242[i] = 0.5f * fYec138[i];
			}
			/* Recursive loop 329 */
			/* Pre code */
			for (int j818 = 0; j818 < 4; j818 = j818 + 1) {
				iRec205_tmp[j818] = iRec205_perm[j818];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec205[i] = (((0.5f * (fYec142[i] - fYec142[i - 1])) < 0.0f) ? 1 - iRec205[i - 1] : iRec205[i - 1]);
			}
			/* Post code */
			for (int j819 = 0; j819 < 4; j819 = j819 + 1) {
				iRec205_perm[j819] = iRec205_tmp[vsize + j819];
			}
			/* Vectorizable loop 330 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec245[i] = 0.5f * fYec142[i];
			}
			/* Recursive loop 331 */
			/* Pre code */
			for (int j836 = 0; j836 < 4; j836 = j836 + 1) {
				iRec210_tmp[j836] = iRec210_perm[j836];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec210[i] = (((0.5f * (fYec146[i] - fYec146[i - 1])) < 0.0f) ? 1 - iRec210[i - 1] : iRec210[i - 1]);
			}
			/* Post code */
			for (int j837 = 0; j837 < 4; j837 = j837 + 1) {
				iRec210_perm[j837] = iRec210_tmp[vsize + j837];
			}
			/* Vectorizable loop 332 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec248[i] = 0.5f * fYec146[i];
			}
			/* Recursive loop 333 */
			/* Pre code */
			for (int j854 = 0; j854 < 4; j854 = j854 + 1) {
				iRec215_tmp[j854] = iRec215_perm[j854];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec215[i] = (((0.5f * (fYec150[i] - fYec150[i - 1])) < 0.0f) ? 1 - iRec215[i - 1] : iRec215[i - 1]);
			}
			/* Post code */
			for (int j855 = 0; j855 < 4; j855 = j855 + 1) {
				iRec215_perm[j855] = iRec215_tmp[vsize + j855];
			}
			/* Vectorizable loop 334 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec251[i] = 0.5f * fYec150[i];
			}
			/* Recursive loop 335 */
			/* Pre code */
			for (int j872 = 0; j872 < 4; j872 = j872 + 1) {
				iRec220_tmp[j872] = iRec220_perm[j872];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec220[i] = (((0.5f * (fYec154[i] - fYec154[i - 1])) < 0.0f) ? 1 - iRec220[i - 1] : iRec220[i - 1]);
			}
			/* Post code */
			for (int j873 = 0; j873 < 4; j873 = j873 + 1) {
				iRec220_perm[j873] = iRec220_tmp[vsize + j873];
			}
			/* Vectorizable loop 336 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec254[i] = 0.5f * fYec154[i];
			}
			/* Recursive loop 337 */
			/* Pre code */
			for (int j890 = 0; j890 < 4; j890 = j890 + 1) {
				iRec225_tmp[j890] = iRec225_perm[j890];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec225[i] = (((0.5f * (fYec158[i] - fYec158[i - 1])) < 0.0f) ? 1 - iRec225[i - 1] : iRec225[i - 1]);
			}
			/* Post code */
			for (int j891 = 0; j891 < 4; j891 = j891 + 1) {
				iRec225_perm[j891] = iRec225_tmp[vsize + j891];
			}
			/* Vectorizable loop 338 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec257[i] = 0.5f * fYec158[i];
			}
			/* Recursive loop 339 */
			/* Pre code */
			for (int j904 = 0; j904 < 4; j904 = j904 + 1) {
				iRec230_tmp[j904] = iRec230_perm[j904];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec230[i] = (((0.5f * (fYec161[i] - fYec161[i - 1])) < 0.0f) ? 1 - iRec230[i - 1] : iRec230[i - 1]);
			}
			/* Post code */
			for (int j905 = 0; j905 < 4; j905 = j905 + 1) {
				iRec230_perm[j905] = iRec230_tmp[vsize + j905];
			}
			/* Vectorizable loop 340 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec259[i] = 0.5f * fYec161[i];
			}
			/* Recursive loop 341 */
			/* Pre code */
			for (int j918 = 0; j918 < 4; j918 = j918 + 1) {
				iRec234_tmp[j918] = iRec234_perm[j918];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec234[i] = (((0.5f * (fYec164[i] - fYec164[i - 1])) < 0.0f) ? 1 - iRec234[i - 1] : iRec234[i - 1]);
			}
			/* Post code */
			for (int j919 = 0; j919 < 4; j919 = j919 + 1) {
				iRec234_perm[j919] = iRec234_tmp[vsize + j919];
			}
			/* Vectorizable loop 342 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec261[i] = 0.5f * fYec164[i];
			}
			/* Recursive loop 343 */
			/* Pre code */
			for (int j932 = 0; j932 < 4; j932 = j932 + 1) {
				iRec238_tmp[j932] = iRec238_perm[j932];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec238[i] = (((0.5f * (fYec167[i] - fYec167[i - 1])) < 0.0f) ? 1 - iRec238[i - 1] : iRec238[i - 1]);
			}
			/* Post code */
			for (int j933 = 0; j933 < 4; j933 = j933 + 1) {
				iRec238_perm[j933] = iRec238_tmp[vsize + j933];
			}
			/* Vectorizable loop 344 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec263[i] = 0.5f * fYec167[i];
			}
			/* Recursive loop 345 */
			/* Pre code */
			for (int j946 = 0; j946 < 4; j946 = j946 + 1) {
				iRec242_tmp[j946] = iRec242_perm[j946];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec242[i] = (((0.5f * (fYec170[i] - fYec170[i - 1])) < 0.0f) ? 1 - iRec242[i - 1] : iRec242[i - 1]);
			}
			/* Post code */
			for (int j947 = 0; j947 < 4; j947 = j947 + 1) {
				iRec242_perm[j947] = iRec242_tmp[vsize + j947];
			}
			/* Vectorizable loop 346 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec265[i] = 0.5f * fYec170[i];
			}
			/* Recursive loop 347 */
			/* Pre code */
			for (int j960 = 0; j960 < 4; j960 = j960 + 1) {
				iRec246_tmp[j960] = iRec246_perm[j960];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec246[i] = (((0.5f * (fYec173[i] - fYec173[i - 1])) < 0.0f) ? 1 - iRec246[i - 1] : iRec246[i - 1]);
			}
			/* Post code */
			for (int j961 = 0; j961 < 4; j961 = j961 + 1) {
				iRec246_perm[j961] = iRec246_tmp[vsize + j961];
			}
			/* Vectorizable loop 348 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec267[i] = 0.5f * fYec173[i];
			}
			/* Recursive loop 349 */
			/* Pre code */
			for (int j16 = 0; j16 < 4; j16 = j16 + 1) {
				fRec8_tmp[j16] = fRec8_perm[j16];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec8[i] = fRec8[i - 1] + fConst3 * (2.0f * fYec2[i - 1] + square_polyblep_precalc(fZec4[i], 0.5f * fYec1[i - 1], 0.5f * fYec1[i - 2], fZec6[i]) - fRec8[i - 1]);
			}
			/* Post code */
			for (int j17 = 0; j17 < 4; j17 = j17 + 1) {
				fRec8_perm[j17] = fRec8_tmp[vsize + j17];
			}
			/* Recursive loop 350 */
			/* Pre code */
			for (int j32 = 0; j32 < 4; j32 = j32 + 1) {
				fRec14_tmp[j32] = fRec14_perm[j32];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec14[i] = fRec14[i - 1] + fConst7 * (2.0f * fYec5[i - 1] + square_polyblep_precalc(fZec10[i], 0.5f * fYec4[i - 1], 0.5f * fYec4[i - 2], fZec12[i]) - fRec14[i - 1]);
			}
			/* Post code */
			for (int j33 = 0; j33 < 4; j33 = j33 + 1) {
				fRec14_perm[j33] = fRec14_tmp[vsize + j33];
			}
			/* Recursive loop 351 */
			/* Pre code */
			for (int j48 = 0; j48 < 4; j48 = j48 + 1) {
				fRec19_tmp[j48] = fRec19_perm[j48];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec19[i] = fRec19[i - 1] + fConst7 * (2.0f * fYec8[i - 1] + square_polyblep_precalc(fZec16[i], 0.5f * fYec7[i - 1], 0.5f * fYec7[i - 2], fZec18[i]) - fRec19[i - 1]);
			}
			/* Post code */
			for (int j49 = 0; j49 < 4; j49 = j49 + 1) {
				fRec19_perm[j49] = fRec19_tmp[vsize + j49];
			}
			/* Recursive loop 352 */
			/* Pre code */
			for (int j64 = 0; j64 < 4; j64 = j64 + 1) {
				fRec24_tmp[j64] = fRec24_perm[j64];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec24[i] = fRec24[i - 1] + fConst7 * (2.0f * fYec11[i - 1] + square_polyblep_precalc(fZec22[i], 0.5f * fYec10[i - 1], 0.5f * fYec10[i - 2], fZec24[i]) - fRec24[i - 1]);
			}
			/* Post code */
			for (int j65 = 0; j65 < 4; j65 = j65 + 1) {
				fRec24_perm[j65] = fRec24_tmp[vsize + j65];
			}
			/* Recursive loop 353 */
			/* Pre code */
			for (int j82 = 0; j82 < 4; j82 = j82 + 1) {
				fRec28_tmp[j82] = fRec28_perm[j82];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec28[i] = fConst5 * (fRec28[i - 1] + (fRec29[i] - fRec29[i - 1]));
			}
			/* Post code */
			for (int j83 = 0; j83 < 4; j83 = j83 + 1) {
				fRec28_perm[j83] = fRec28_tmp[vsize + j83];
			}
			/* Recursive loop 354 */
			/* Pre code */
			for (int j102 = 0; j102 < 4; j102 = j102 + 1) {
				fRec33_tmp[j102] = fRec33_perm[j102];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec33[i] = fConst5 * (fRec33[i - 1] + (fRec34[i] - fRec34[i - 1]));
			}
			/* Post code */
			for (int j103 = 0; j103 < 4; j103 = j103 + 1) {
				fRec33_perm[j103] = fRec33_tmp[vsize + j103];
			}
			/* Recursive loop 355 */
			/* Pre code */
			for (int j122 = 0; j122 < 4; j122 = j122 + 1) {
				fRec39_tmp[j122] = fRec39_perm[j122];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec39[i] = fConst5 * (fRec39[i - 1] + (fRec40[i] - fRec40[i - 1]));
			}
			/* Post code */
			for (int j123 = 0; j123 < 4; j123 = j123 + 1) {
				fRec39_perm[j123] = fRec39_tmp[vsize + j123];
			}
			/* Recursive loop 356 */
			/* Pre code */
			for (int j142 = 0; j142 < 4; j142 = j142 + 1) {
				fRec45_tmp[j142] = fRec45_perm[j142];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec45[i] = fConst5 * (fRec45[i - 1] + (fRec46[i] - fRec46[i - 1]));
			}
			/* Post code */
			for (int j143 = 0; j143 < 4; j143 = j143 + 1) {
				fRec45_perm[j143] = fRec45_tmp[vsize + j143];
			}
			/* Vectorizable loop 357 */
			/* Pre code */
			for (int j276 = 0; j276 < 4; j276 = j276 + 1) {
				fYec54_tmp[j276] = fYec54_perm[j276];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec54[i] = fZec30[i] - 2.0f * fYec53[i - 1];
			}
			/* Post code */
			for (int j277 = 0; j277 < 4; j277 = j277 + 1) {
				fYec54_perm[j277] = fYec54_tmp[vsize + j277];
			}
			/* Recursive loop 358 */
			/* Pre code */
			for (int j282 = 0; j282 < 4; j282 = j282 + 1) {
				fRec92_tmp[j282] = fRec92_perm[j282];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec92[i] = fRec92[i - 1] + fConst22 * (2.0f * fYec55[i - 1] + square_polyblep_precalc(fZec33[i], 0.5f * fYec15[i - 1], 0.5f * fYec15[i - 2], fZec37[i]) - fRec92[i - 1]);
			}
			/* Post code */
			for (int j283 = 0; j283 < 4; j283 = j283 + 1) {
				fRec92_perm[j283] = fRec92_tmp[vsize + j283];
			}
			/* Recursive loop 359 */
			/* Pre code */
			for (int j288 = 0; j288 < 4; j288 = j288 + 1) {
				fRec94_tmp[j288] = fRec94_perm[j288];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec94[i] = fRec94[i - 1] + fConst22 * (2.0f * fYec56[i - 1] + square_polyblep_precalc(fZec40[i], 0.5f * fYec19[i - 1], 0.5f * fYec19[i - 2], fZec44[i]) - fRec94[i - 1]);
			}
			/* Post code */
			for (int j289 = 0; j289 < 4; j289 = j289 + 1) {
				fRec94_perm[j289] = fRec94_tmp[vsize + j289];
			}
			/* Recursive loop 360 */
			/* Pre code */
			for (int j294 = 0; j294 < 4; j294 = j294 + 1) {
				fRec96_tmp[j294] = fRec96_perm[j294];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec96[i] = fRec96[i - 1] + fConst22 * (2.0f * fYec57[i - 1] + square_polyblep_precalc(fZec47[i], 0.5f * fYec23[i - 1], 0.5f * fYec23[i - 2], fZec51[i]) - fRec96[i - 1]);
			}
			/* Post code */
			for (int j295 = 0; j295 < 4; j295 = j295 + 1) {
				fRec96_perm[j295] = fRec96_tmp[vsize + j295];
			}
			/* Recursive loop 361 */
			/* Pre code */
			for (int j300 = 0; j300 < 4; j300 = j300 + 1) {
				fRec98_tmp[j300] = fRec98_perm[j300];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec98[i] = fRec98[i - 1] + fConst22 * (2.0f * fYec58[i - 1] + square_polyblep_precalc(fZec54[i], 0.5f * fYec27[i - 1], 0.5f * fYec27[i - 2], fZec58[i]) - fRec98[i - 1]);
			}
			/* Post code */
			for (int j301 = 0; j301 < 4; j301 = j301 + 1) {
				fRec98_perm[j301] = fRec98_tmp[vsize + j301];
			}
			/* Recursive loop 362 */
			/* Pre code */
			for (int j306 = 0; j306 < 4; j306 = j306 + 1) {
				fRec100_tmp[j306] = fRec100_perm[j306];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec100[i] = fRec100[i - 1] + fConst23 * (2.0f * fYec59[i - 1] + square_polyblep_precalc(fZec61[i], 0.5f * fYec31[i - 1], 0.5f * fYec31[i - 2], fZec65[i]) - fRec100[i - 1]);
			}
			/* Post code */
			for (int j307 = 0; j307 < 4; j307 = j307 + 1) {
				fRec100_perm[j307] = fRec100_tmp[vsize + j307];
			}
			/* Recursive loop 363 */
			/* Pre code */
			for (int j312 = 0; j312 < 4; j312 = j312 + 1) {
				fRec102_tmp[j312] = fRec102_perm[j312];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec102[i] = fRec102[i - 1] + fConst23 * (2.0f * fYec60[i - 1] + square_polyblep_precalc(fZec68[i], 0.5f * fYec35[i - 1], 0.5f * fYec35[i - 2], fZec72[i]) - fRec102[i - 1]);
			}
			/* Post code */
			for (int j313 = 0; j313 < 4; j313 = j313 + 1) {
				fRec102_perm[j313] = fRec102_tmp[vsize + j313];
			}
			/* Recursive loop 364 */
			/* Pre code */
			for (int j318 = 0; j318 < 4; j318 = j318 + 1) {
				fRec104_tmp[j318] = fRec104_perm[j318];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec104[i] = fRec104[i - 1] + fConst23 * (2.0f * fYec61[i - 1] + square_polyblep_precalc(fZec75[i], 0.5f * fYec39[i - 1], 0.5f * fYec39[i - 2], fZec79[i]) - fRec104[i - 1]);
			}
			/* Post code */
			for (int j319 = 0; j319 < 4; j319 = j319 + 1) {
				fRec104_perm[j319] = fRec104_tmp[vsize + j319];
			}
			/* Recursive loop 365 */
			/* Pre code */
			for (int j324 = 0; j324 < 4; j324 = j324 + 1) {
				fRec106_tmp[j324] = fRec106_perm[j324];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec106[i] = fRec106[i - 1] + fConst23 * (2.0f * fYec62[i - 1] + square_polyblep_precalc(fZec3[i], 0.5f * fYec0[i - 1], 0.5f * fYec0[i - 2], fZec6[i]) - fRec106[i - 1]);
			}
			/* Post code */
			for (int j325 = 0; j325 < 4; j325 = j325 + 1) {
				fRec106_perm[j325] = fRec106_tmp[vsize + j325];
			}
			/* Recursive loop 366 */
			/* Pre code */
			for (int j330 = 0; j330 < 4; j330 = j330 + 1) {
				fRec108_tmp[j330] = fRec108_perm[j330];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec108[i] = fRec108[i - 1] + fConst24 * (2.0f * fYec63[i - 1] + square_polyblep_precalc(fZec9[i], 0.5f * fYec3[i - 1], 0.5f * fYec3[i - 2], fZec12[i]) - fRec108[i - 1]);
			}
			/* Post code */
			for (int j331 = 0; j331 < 4; j331 = j331 + 1) {
				fRec108_perm[j331] = fRec108_tmp[vsize + j331];
			}
			/* Recursive loop 367 */
			/* Pre code */
			for (int j336 = 0; j336 < 4; j336 = j336 + 1) {
				fRec110_tmp[j336] = fRec110_perm[j336];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec110[i] = fRec110[i - 1] + fConst24 * (2.0f * fYec64[i - 1] + square_polyblep_precalc(fZec15[i], 0.5f * fYec6[i - 1], 0.5f * fYec6[i - 2], fZec18[i]) - fRec110[i - 1]);
			}
			/* Post code */
			for (int j337 = 0; j337 < 4; j337 = j337 + 1) {
				fRec110_perm[j337] = fRec110_tmp[vsize + j337];
			}
			/* Recursive loop 368 */
			/* Pre code */
			for (int j342 = 0; j342 < 4; j342 = j342 + 1) {
				fRec112_tmp[j342] = fRec112_perm[j342];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec112[i] = fRec112[i - 1] + fConst24 * (2.0f * fYec65[i - 1] + square_polyblep_precalc(fZec21[i], 0.5f * fYec9[i - 1], 0.5f * fYec9[i - 2], fZec24[i]) - fRec112[i - 1]);
			}
			/* Post code */
			for (int j343 = 0; j343 < 4; j343 = j343 + 1) {
				fRec112_perm[j343] = fRec112_tmp[vsize + j343];
			}
			/* Recursive loop 369 */
			/* Pre code */
			for (int j348 = 0; j348 < 4; j348 = j348 + 1) {
				fRec114_tmp[j348] = fRec114_perm[j348];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec114[i] = fRec114[i - 1] + fConst24 * (2.0f * fYec66[i - 1] + square_polyblep_precalc(fZec27[i], 0.5f * fYec12[i - 1], 0.5f * fYec12[i - 2], fZec30[i]) - fRec114[i - 1]);
			}
			/* Post code */
			for (int j349 = 0; j349 < 4; j349 = j349 + 1) {
				fRec114_perm[j349] = fRec114_tmp[vsize + j349];
			}
			/* Recursive loop 370 */
			/* Pre code */
			for (int j354 = 0; j354 < 4; j354 = j354 + 1) {
				fRec116_tmp[j354] = fRec116_perm[j354];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec116[i] = fRec116[i - 1] + fConst25 * (2.0f * fYec67[i - 1] + square_polyblep_precalc(fZec34[i], 0.5f * fYec16[i - 1], 0.5f * fYec16[i - 2], fZec37[i]) - fRec116[i - 1]);
			}
			/* Post code */
			for (int j355 = 0; j355 < 4; j355 = j355 + 1) {
				fRec116_perm[j355] = fRec116_tmp[vsize + j355];
			}
			/* Recursive loop 371 */
			/* Pre code */
			for (int j360 = 0; j360 < 4; j360 = j360 + 1) {
				fRec118_tmp[j360] = fRec118_perm[j360];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec118[i] = fRec118[i - 1] + fConst25 * (2.0f * fYec68[i - 1] + square_polyblep_precalc(fZec41[i], 0.5f * fYec20[i - 1], 0.5f * fYec20[i - 2], fZec44[i]) - fRec118[i - 1]);
			}
			/* Post code */
			for (int j361 = 0; j361 < 4; j361 = j361 + 1) {
				fRec118_perm[j361] = fRec118_tmp[vsize + j361];
			}
			/* Recursive loop 372 */
			/* Pre code */
			for (int j366 = 0; j366 < 4; j366 = j366 + 1) {
				fRec120_tmp[j366] = fRec120_perm[j366];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec120[i] = fRec120[i - 1] + fConst25 * (2.0f * fYec69[i - 1] + square_polyblep_precalc(fZec48[i], 0.5f * fYec24[i - 1], 0.5f * fYec24[i - 2], fZec51[i]) - fRec120[i - 1]);
			}
			/* Post code */
			for (int j367 = 0; j367 < 4; j367 = j367 + 1) {
				fRec120_perm[j367] = fRec120_tmp[vsize + j367];
			}
			/* Recursive loop 373 */
			/* Pre code */
			for (int j372 = 0; j372 < 4; j372 = j372 + 1) {
				fRec122_tmp[j372] = fRec122_perm[j372];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec122[i] = fRec122[i - 1] + fConst25 * (2.0f * fYec70[i - 1] + square_polyblep_precalc(fZec55[i], 0.5f * fYec28[i - 1], 0.5f * fYec28[i - 2], fZec58[i]) - fRec122[i - 1]);
			}
			/* Post code */
			for (int j373 = 0; j373 < 4; j373 = j373 + 1) {
				fRec122_perm[j373] = fRec122_tmp[vsize + j373];
			}
			/* Recursive loop 374 */
			/* Pre code */
			for (int j378 = 0; j378 < 4; j378 = j378 + 1) {
				fRec124_tmp[j378] = fRec124_perm[j378];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec124[i] = fRec124[i - 1] + fConst3 * (2.0f * fYec71[i - 1] + square_polyblep_precalc(fZec62[i], 0.5f * fYec32[i - 1], 0.5f * fYec32[i - 2], fZec65[i]) - fRec124[i - 1]);
			}
			/* Post code */
			for (int j379 = 0; j379 < 4; j379 = j379 + 1) {
				fRec124_perm[j379] = fRec124_tmp[vsize + j379];
			}
			/* Recursive loop 375 */
			/* Pre code */
			for (int j384 = 0; j384 < 4; j384 = j384 + 1) {
				fRec126_tmp[j384] = fRec126_perm[j384];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec126[i] = fRec126[i - 1] + fConst3 * (2.0f * fYec72[i - 1] + square_polyblep_precalc(fZec76[i], 0.5f * fYec40[i - 1], 0.5f * fYec40[i - 2], fZec79[i]) - fRec126[i - 1]);
			}
			/* Post code */
			for (int j385 = 0; j385 < 4; j385 = j385 + 1) {
				fRec126_perm[j385] = fRec126_tmp[vsize + j385];
			}
			/* Recursive loop 376 */
			/* Pre code */
			for (int j390 = 0; j390 < 4; j390 = j390 + 1) {
				fRec128_tmp[j390] = fRec128_perm[j390];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec128[i] = fRec128[i - 1] + fConst3 * (2.0f * fYec73[i - 1] + square_polyblep_precalc(fZec69[i], 0.5f * fYec36[i - 1], 0.5f * fYec36[i - 2], fZec72[i]) - fRec128[i - 1]);
			}
			/* Post code */
			for (int j391 = 0; j391 < 4; j391 = j391 + 1) {
				fRec128_perm[j391] = fRec128_tmp[vsize + j391];
			}
			/* Vectorizable loop 377 */
			/* Pre code */
			for (int j396 = 0; j396 < 4; j396 = j396 + 1) {
				fYec75_tmp[j396] = fYec75_perm[j396];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec75[i] = fZec37[i] - 2.0f * fYec74[i - 1];
			}
			/* Post code */
			for (int j397 = 0; j397 < 4; j397 = j397 + 1) {
				fYec75_perm[j397] = fYec75_tmp[vsize + j397];
			}
			/* Vectorizable loop 378 */
			/* Pre code */
			for (int j402 = 0; j402 < 4; j402 = j402 + 1) {
				fYec77_tmp[j402] = fYec77_perm[j402];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec77[i] = fZec44[i] - 2.0f * fYec76[i - 1];
			}
			/* Post code */
			for (int j403 = 0; j403 < 4; j403 = j403 + 1) {
				fYec77_perm[j403] = fYec77_tmp[vsize + j403];
			}
			/* Vectorizable loop 379 */
			/* Pre code */
			for (int j408 = 0; j408 < 4; j408 = j408 + 1) {
				fYec79_tmp[j408] = fYec79_perm[j408];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec79[i] = fZec51[i] - 2.0f * fYec78[i - 1];
			}
			/* Post code */
			for (int j409 = 0; j409 < 4; j409 = j409 + 1) {
				fYec79_perm[j409] = fYec79_tmp[vsize + j409];
			}
			/* Vectorizable loop 380 */
			/* Pre code */
			for (int j414 = 0; j414 < 4; j414 = j414 + 1) {
				fYec81_tmp[j414] = fYec81_perm[j414];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec81[i] = fZec58[i] - 2.0f * fYec80[i - 1];
			}
			/* Post code */
			for (int j415 = 0; j415 < 4; j415 = j415 + 1) {
				fYec81_perm[j415] = fYec81_tmp[vsize + j415];
			}
			/* Vectorizable loop 381 */
			/* Pre code */
			for (int j420 = 0; j420 < 4; j420 = j420 + 1) {
				fYec83_tmp[j420] = fYec83_perm[j420];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec83[i] = fZec65[i] - 2.0f * fYec82[i - 1];
			}
			/* Post code */
			for (int j421 = 0; j421 < 4; j421 = j421 + 1) {
				fYec83_perm[j421] = fYec83_tmp[vsize + j421];
			}
			/* Vectorizable loop 382 */
			/* Pre code */
			for (int j426 = 0; j426 < 4; j426 = j426 + 1) {
				fYec85_tmp[j426] = fYec85_perm[j426];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec85[i] = fZec72[i] - 2.0f * fYec84[i - 1];
			}
			/* Post code */
			for (int j427 = 0; j427 < 4; j427 = j427 + 1) {
				fYec85_perm[j427] = fYec85_tmp[vsize + j427];
			}
			/* Vectorizable loop 383 */
			/* Pre code */
			for (int j432 = 0; j432 < 4; j432 = j432 + 1) {
				fYec87_tmp[j432] = fYec87_perm[j432];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec87[i] = fZec79[i] - 2.0f * fYec86[i - 1];
			}
			/* Post code */
			for (int j433 = 0; j433 < 4; j433 = j433 + 1) {
				fYec87_perm[j433] = fYec87_tmp[vsize + j433];
			}
			/* Vectorizable loop 384 */
			/* Pre code */
			for (int j438 = 0; j438 < 4; j438 = j438 + 1) {
				fYec89_tmp[j438] = fYec89_perm[j438];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec89[i] = fZec6[i] - 2.0f * fYec88[i - 1];
			}
			/* Post code */
			for (int j439 = 0; j439 < 4; j439 = j439 + 1) {
				fYec89_perm[j439] = fYec89_tmp[vsize + j439];
			}
			/* Vectorizable loop 385 */
			/* Pre code */
			for (int j444 = 0; j444 < 4; j444 = j444 + 1) {
				fYec91_tmp[j444] = fYec91_perm[j444];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec91[i] = fZec12[i] - 2.0f * fYec90[i - 1];
			}
			/* Post code */
			for (int j445 = 0; j445 < 4; j445 = j445 + 1) {
				fYec91_perm[j445] = fYec91_tmp[vsize + j445];
			}
			/* Vectorizable loop 386 */
			/* Pre code */
			for (int j450 = 0; j450 < 4; j450 = j450 + 1) {
				fYec93_tmp[j450] = fYec93_perm[j450];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec93[i] = fZec18[i] - 2.0f * fYec92[i - 1];
			}
			/* Post code */
			for (int j451 = 0; j451 < 4; j451 = j451 + 1) {
				fYec93_perm[j451] = fYec93_tmp[vsize + j451];
			}
			/* Vectorizable loop 387 */
			/* Pre code */
			for (int j456 = 0; j456 < 4; j456 = j456 + 1) {
				fYec95_tmp[j456] = fYec95_perm[j456];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec95[i] = fZec24[i] - 2.0f * fYec94[i - 1];
			}
			/* Post code */
			for (int j457 = 0; j457 < 4; j457 = j457 + 1) {
				fYec95_perm[j457] = fYec95_tmp[vsize + j457];
			}
			/* Vectorizable loop 388 */
			/* Pre code */
			for (int j460 = 0; j460 < 4; j460 = j460 + 1) {
				fVec0_tmp[j460] = fVec0_perm[j460];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec0[i] = fSlow18;
			}
			/* Post code */
			for (int j461 = 0; j461 < 4; j461 = j461 + 1) {
				fVec0_perm[j461] = fVec0_tmp[vsize + j461];
			}
			/* Vectorizable loop 389 */
			/* Pre code */
			for (int j462 = 0; j462 < 4; j462 = j462 + 1) {
				fVec1_tmp[j462] = fVec1_perm[j462];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec1[i] = fSlow19;
			}
			/* Post code */
			for (int j463 = 0; j463 < 4; j463 = j463 + 1) {
				fVec1_perm[j463] = fVec1_tmp[vsize + j463];
			}
			/* Vectorizable loop 390 */
			/* Pre code */
			for (int j464 = 0; j464 < 4; j464 = j464 + 1) {
				fVec2_tmp[j464] = fVec2_perm[j464];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec2[i] = fSlow20;
			}
			/* Post code */
			for (int j465 = 0; j465 < 4; j465 = j465 + 1) {
				fVec2_perm[j465] = fVec2_tmp[vsize + j465];
			}
			/* Vectorizable loop 391 */
			/* Pre code */
			for (int j466 = 0; j466 < 4; j466 = j466 + 1) {
				fVec3_tmp[j466] = fVec3_perm[j466];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec3[i] = fSlow21;
			}
			/* Post code */
			for (int j467 = 0; j467 < 4; j467 = j467 + 1) {
				fVec3_perm[j467] = fVec3_tmp[vsize + j467];
			}
			/* Vectorizable loop 392 */
			/* Pre code */
			for (int j468 = 0; j468 < 4; j468 = j468 + 1) {
				fVec4_tmp[j468] = fVec4_perm[j468];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec4[i] = fSlow22;
			}
			/* Post code */
			for (int j469 = 0; j469 < 4; j469 = j469 + 1) {
				fVec4_perm[j469] = fVec4_tmp[vsize + j469];
			}
			/* Vectorizable loop 393 */
			/* Pre code */
			for (int j470 = 0; j470 < 4; j470 = j470 + 1) {
				fVec5_tmp[j470] = fVec5_perm[j470];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec5[i] = fSlow23;
			}
			/* Post code */
			for (int j471 = 0; j471 < 4; j471 = j471 + 1) {
				fVec5_perm[j471] = fVec5_tmp[vsize + j471];
			}
			/* Vectorizable loop 394 */
			/* Pre code */
			for (int j472 = 0; j472 < 4; j472 = j472 + 1) {
				fVec6_tmp[j472] = fVec6_perm[j472];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec6[i] = fSlow24;
			}
			/* Post code */
			for (int j473 = 0; j473 < 4; j473 = j473 + 1) {
				fVec6_perm[j473] = fVec6_tmp[vsize + j473];
			}
			/* Vectorizable loop 395 */
			/* Pre code */
			for (int j474 = 0; j474 < 4; j474 = j474 + 1) {
				fVec7_tmp[j474] = fVec7_perm[j474];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec7[i] = fSlow25;
			}
			/* Post code */
			for (int j475 = 0; j475 < 4; j475 = j475 + 1) {
				fVec7_perm[j475] = fVec7_tmp[vsize + j475];
			}
			/* Vectorizable loop 396 */
			/* Pre code */
			for (int j476 = 0; j476 < 4; j476 = j476 + 1) {
				fVec8_tmp[j476] = fVec8_perm[j476];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec8[i] = fSlow26;
			}
			/* Post code */
			for (int j477 = 0; j477 < 4; j477 = j477 + 1) {
				fVec8_perm[j477] = fVec8_tmp[vsize + j477];
			}
			/* Vectorizable loop 397 */
			/* Pre code */
			for (int j478 = 0; j478 < 4; j478 = j478 + 1) {
				fVec9_tmp[j478] = fVec9_perm[j478];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec9[i] = fSlow27;
			}
			/* Post code */
			for (int j479 = 0; j479 < 4; j479 = j479 + 1) {
				fVec9_perm[j479] = fVec9_tmp[vsize + j479];
			}
			/* Vectorizable loop 398 */
			/* Pre code */
			for (int j480 = 0; j480 < 4; j480 = j480 + 1) {
				fVec10_tmp[j480] = fVec10_perm[j480];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec10[i] = fSlow28;
			}
			/* Post code */
			for (int j481 = 0; j481 < 4; j481 = j481 + 1) {
				fVec10_perm[j481] = fVec10_tmp[vsize + j481];
			}
			/* Vectorizable loop 399 */
			/* Pre code */
			for (int j482 = 0; j482 < 4; j482 = j482 + 1) {
				fVec11_tmp[j482] = fVec11_perm[j482];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec11[i] = fSlow29;
			}
			/* Post code */
			for (int j483 = 0; j483 < 4; j483 = j483 + 1) {
				fVec11_perm[j483] = fVec11_tmp[vsize + j483];
			}
			/* Vectorizable loop 400 */
			/* Pre code */
			for (int j484 = 0; j484 < 4; j484 = j484 + 1) {
				fVec12_tmp[j484] = fVec12_perm[j484];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec12[i] = fSlow30;
			}
			/* Post code */
			for (int j485 = 0; j485 < 4; j485 = j485 + 1) {
				fVec12_perm[j485] = fVec12_tmp[vsize + j485];
			}
			/* Vectorizable loop 401 */
			/* Pre code */
			for (int j510 = 0; j510 < 4; j510 = j510 + 1) {
				fVec25_tmp[j510] = fVec25_perm[j510];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec25[i] = fSlow43;
			}
			/* Post code */
			for (int j511 = 0; j511 < 4; j511 = j511 + 1) {
				fVec25_perm[j511] = fVec25_tmp[vsize + j511];
			}
			/* Vectorizable loop 402 */
			/* Pre code */
			for (int j512 = 0; j512 < 4; j512 = j512 + 1) {
				fVec26_tmp[j512] = fVec26_perm[j512];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec26[i] = fSlow44;
			}
			/* Post code */
			for (int j513 = 0; j513 < 4; j513 = j513 + 1) {
				fVec26_perm[j513] = fVec26_tmp[vsize + j513];
			}
			/* Vectorizable loop 403 */
			/* Pre code */
			for (int j514 = 0; j514 < 4; j514 = j514 + 1) {
				fVec27_tmp[j514] = fVec27_perm[j514];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec27[i] = fSlow45;
			}
			/* Post code */
			for (int j515 = 0; j515 < 4; j515 = j515 + 1) {
				fVec27_perm[j515] = fVec27_tmp[vsize + j515];
			}
			/* Vectorizable loop 404 */
			/* Pre code */
			for (int j516 = 0; j516 < 4; j516 = j516 + 1) {
				fVec28_tmp[j516] = fVec28_perm[j516];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec28[i] = fSlow46;
			}
			/* Post code */
			for (int j517 = 0; j517 < 4; j517 = j517 + 1) {
				fVec28_perm[j517] = fVec28_tmp[vsize + j517];
			}
			/* Vectorizable loop 405 */
			/* Pre code */
			for (int j518 = 0; j518 < 4; j518 = j518 + 1) {
				fVec29_tmp[j518] = fVec29_perm[j518];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec29[i] = fSlow47;
			}
			/* Post code */
			for (int j519 = 0; j519 < 4; j519 = j519 + 1) {
				fVec29_perm[j519] = fVec29_tmp[vsize + j519];
			}
			/* Vectorizable loop 406 */
			/* Pre code */
			for (int j520 = 0; j520 < 4; j520 = j520 + 1) {
				fVec30_tmp[j520] = fVec30_perm[j520];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec30[i] = fSlow48;
			}
			/* Post code */
			for (int j521 = 0; j521 < 4; j521 = j521 + 1) {
				fVec30_perm[j521] = fVec30_tmp[vsize + j521];
			}
			/* Vectorizable loop 407 */
			/* Pre code */
			for (int j522 = 0; j522 < 4; j522 = j522 + 1) {
				fVec31_tmp[j522] = fVec31_perm[j522];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec31[i] = fSlow49;
			}
			/* Post code */
			for (int j523 = 0; j523 < 4; j523 = j523 + 1) {
				fVec31_perm[j523] = fVec31_tmp[vsize + j523];
			}
			/* Vectorizable loop 408 */
			/* Pre code */
			for (int j524 = 0; j524 < 4; j524 = j524 + 1) {
				fVec32_tmp[j524] = fVec32_perm[j524];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec32[i] = fSlow50;
			}
			/* Post code */
			for (int j525 = 0; j525 < 4; j525 = j525 + 1) {
				fVec32_perm[j525] = fVec32_tmp[vsize + j525];
			}
			/* Vectorizable loop 409 */
			/* Pre code */
			for (int j526 = 0; j526 < 4; j526 = j526 + 1) {
				fVec33_tmp[j526] = fVec33_perm[j526];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec33[i] = fSlow51;
			}
			/* Post code */
			for (int j527 = 0; j527 < 4; j527 = j527 + 1) {
				fVec33_perm[j527] = fVec33_tmp[vsize + j527];
			}
			/* Vectorizable loop 410 */
			/* Pre code */
			for (int j528 = 0; j528 < 4; j528 = j528 + 1) {
				fVec34_tmp[j528] = fVec34_perm[j528];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec34[i] = fSlow52;
			}
			/* Post code */
			for (int j529 = 0; j529 < 4; j529 = j529 + 1) {
				fVec34_perm[j529] = fVec34_tmp[vsize + j529];
			}
			/* Vectorizable loop 411 */
			/* Pre code */
			for (int j530 = 0; j530 < 4; j530 = j530 + 1) {
				fVec35_tmp[j530] = fVec35_perm[j530];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec35[i] = fSlow53;
			}
			/* Post code */
			for (int j531 = 0; j531 < 4; j531 = j531 + 1) {
				fVec35_perm[j531] = fVec35_tmp[vsize + j531];
			}
			/* Vectorizable loop 412 */
			/* Pre code */
			for (int j532 = 0; j532 < 4; j532 = j532 + 1) {
				fVec36_tmp[j532] = fVec36_perm[j532];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec36[i] = fSlow54;
			}
			/* Post code */
			for (int j533 = 0; j533 < 4; j533 = j533 + 1) {
				fVec36_perm[j533] = fVec36_tmp[vsize + j533];
			}
			/* Vectorizable loop 413 */
			/* Pre code */
			for (int j534 = 0; j534 < 4; j534 = j534 + 1) {
				fVec37_tmp[j534] = fVec37_perm[j534];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec37[i] = fSlow55;
			}
			/* Post code */
			for (int j535 = 0; j535 < 4; j535 = j535 + 1) {
				fVec37_perm[j535] = fVec37_tmp[vsize + j535];
			}
			/* Vectorizable loop 414 */
			/* Pre code */
			for (int j536 = 0; j536 < 4; j536 = j536 + 1) {
				fVec38_tmp[j536] = fVec38_perm[j536];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec38[i] = fSlow56;
			}
			/* Post code */
			for (int j537 = 0; j537 < 4; j537 = j537 + 1) {
				fVec38_perm[j537] = fVec38_tmp[vsize + j537];
			}
			/* Vectorizable loop 415 */
			/* Pre code */
			for (int j538 = 0; j538 < 4; j538 = j538 + 1) {
				fVec39_tmp[j538] = fVec39_perm[j538];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec39[i] = fSlow57;
			}
			/* Post code */
			for (int j539 = 0; j539 < 4; j539 = j539 + 1) {
				fVec39_perm[j539] = fVec39_tmp[vsize + j539];
			}
			/* Vectorizable loop 416 */
			/* Pre code */
			for (int j540 = 0; j540 < 4; j540 = j540 + 1) {
				fVec40_tmp[j540] = fVec40_perm[j540];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec40[i] = fSlow58;
			}
			/* Post code */
			for (int j541 = 0; j541 < 4; j541 = j541 + 1) {
				fVec40_perm[j541] = fVec40_tmp[vsize + j541];
			}
			/* Vectorizable loop 417 */
			/* Pre code */
			for (int j542 = 0; j542 < 4; j542 = j542 + 1) {
				fVec41_tmp[j542] = fVec41_perm[j542];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec41[i] = fSlow59;
			}
			/* Post code */
			for (int j543 = 0; j543 < 4; j543 = j543 + 1) {
				fVec41_perm[j543] = fVec41_tmp[vsize + j543];
			}
			/* Vectorizable loop 418 */
			/* Pre code */
			for (int j544 = 0; j544 < 4; j544 = j544 + 1) {
				fVec42_tmp[j544] = fVec42_perm[j544];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec42[i] = fSlow60;
			}
			/* Post code */
			for (int j545 = 0; j545 < 4; j545 = j545 + 1) {
				fVec42_perm[j545] = fVec42_tmp[vsize + j545];
			}
			/* Vectorizable loop 419 */
			/* Pre code */
			for (int j546 = 0; j546 < 4; j546 = j546 + 1) {
				fVec43_tmp[j546] = fVec43_perm[j546];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec43[i] = fSlow61;
			}
			/* Post code */
			for (int j547 = 0; j547 < 4; j547 = j547 + 1) {
				fVec43_perm[j547] = fVec43_tmp[vsize + j547];
			}
			/* Vectorizable loop 420 */
			/* Pre code */
			for (int j548 = 0; j548 < 4; j548 = j548 + 1) {
				fVec44_tmp[j548] = fVec44_perm[j548];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec44[i] = fSlow62;
			}
			/* Post code */
			for (int j549 = 0; j549 < 4; j549 = j549 + 1) {
				fVec44_perm[j549] = fVec44_tmp[vsize + j549];
			}
			/* Vectorizable loop 421 */
			/* Pre code */
			for (int j550 = 0; j550 < 4; j550 = j550 + 1) {
				fVec45_tmp[j550] = fVec45_perm[j550];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec45[i] = fSlow63;
			}
			/* Post code */
			for (int j551 = 0; j551 < 4; j551 = j551 + 1) {
				fVec45_perm[j551] = fVec45_tmp[vsize + j551];
			}
			/* Vectorizable loop 422 */
			/* Pre code */
			for (int j552 = 0; j552 < 4; j552 = j552 + 1) {
				fVec46_tmp[j552] = fVec46_perm[j552];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec46[i] = fSlow64;
			}
			/* Post code */
			for (int j553 = 0; j553 < 4; j553 = j553 + 1) {
				fVec46_perm[j553] = fVec46_tmp[vsize + j553];
			}
			/* Vectorizable loop 423 */
			/* Pre code */
			for (int j554 = 0; j554 < 4; j554 = j554 + 1) {
				fVec47_tmp[j554] = fVec47_perm[j554];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec47[i] = fSlow65;
			}
			/* Post code */
			for (int j555 = 0; j555 < 4; j555 = j555 + 1) {
				fVec47_perm[j555] = fVec47_tmp[vsize + j555];
			}
			/* Vectorizable loop 424 */
			/* Pre code */
			for (int j556 = 0; j556 < 4; j556 = j556 + 1) {
				fVec48_tmp[j556] = fVec48_perm[j556];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec48[i] = fSlow66;
			}
			/* Post code */
			for (int j557 = 0; j557 < 4; j557 = j557 + 1) {
				fVec48_perm[j557] = fVec48_tmp[vsize + j557];
			}
			/* Vectorizable loop 425 */
			/* Pre code */
			for (int j558 = 0; j558 < 4; j558 = j558 + 1) {
				fVec49_tmp[j558] = fVec49_perm[j558];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec49[i] = fSlow67;
			}
			/* Post code */
			for (int j559 = 0; j559 < 4; j559 = j559 + 1) {
				fVec49_perm[j559] = fVec49_tmp[vsize + j559];
			}
			/* Vectorizable loop 426 */
			/* Pre code */
			for (int j560 = 0; j560 < 4; j560 = j560 + 1) {
				fVec50_tmp[j560] = fVec50_perm[j560];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec50[i] = fSlow68;
			}
			/* Post code */
			for (int j561 = 0; j561 < 4; j561 = j561 + 1) {
				fVec50_perm[j561] = fVec50_tmp[vsize + j561];
			}
			/* Vectorizable loop 427 */
			/* Pre code */
			for (int j562 = 0; j562 < 4; j562 = j562 + 1) {
				fVec51_tmp[j562] = fVec51_perm[j562];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec51[i] = fSlow69;
			}
			/* Post code */
			for (int j563 = 0; j563 < 4; j563 = j563 + 1) {
				fVec51_perm[j563] = fVec51_tmp[vsize + j563];
			}
			/* Vectorizable loop 428 */
			/* Pre code */
			for (int j564 = 0; j564 < 4; j564 = j564 + 1) {
				fVec52_tmp[j564] = fVec52_perm[j564];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec52[i] = fSlow70;
			}
			/* Post code */
			for (int j565 = 0; j565 < 4; j565 = j565 + 1) {
				fVec52_perm[j565] = fVec52_tmp[vsize + j565];
			}
			/* Vectorizable loop 429 */
			/* Pre code */
			for (int j566 = 0; j566 < 4; j566 = j566 + 1) {
				fVec53_tmp[j566] = fVec53_perm[j566];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec53[i] = fSlow71;
			}
			/* Post code */
			for (int j567 = 0; j567 < 4; j567 = j567 + 1) {
				fVec53_perm[j567] = fVec53_tmp[vsize + j567];
			}
			/* Vectorizable loop 430 */
			/* Pre code */
			for (int j568 = 0; j568 < 4; j568 = j568 + 1) {
				fVec54_tmp[j568] = fVec54_perm[j568];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec54[i] = fSlow72;
			}
			/* Post code */
			for (int j569 = 0; j569 < 4; j569 = j569 + 1) {
				fVec54_perm[j569] = fVec54_tmp[vsize + j569];
			}
			/* Vectorizable loop 431 */
			/* Pre code */
			for (int j570 = 0; j570 < 4; j570 = j570 + 1) {
				fVec55_tmp[j570] = fVec55_perm[j570];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec55[i] = fSlow73;
			}
			/* Post code */
			for (int j571 = 0; j571 < 4; j571 = j571 + 1) {
				fVec55_perm[j571] = fVec55_tmp[vsize + j571];
			}
			/* Vectorizable loop 432 */
			/* Pre code */
			for (int j572 = 0; j572 < 4; j572 = j572 + 1) {
				fVec56_tmp[j572] = fVec56_perm[j572];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec56[i] = fSlow74;
			}
			/* Post code */
			for (int j573 = 0; j573 < 4; j573 = j573 + 1) {
				fVec56_perm[j573] = fVec56_tmp[vsize + j573];
			}
			/* Vectorizable loop 433 */
			/* Pre code */
			for (int j574 = 0; j574 < 4; j574 = j574 + 1) {
				fVec57_tmp[j574] = fVec57_perm[j574];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec57[i] = fSlow75;
			}
			/* Post code */
			for (int j575 = 0; j575 < 4; j575 = j575 + 1) {
				fVec57_perm[j575] = fVec57_tmp[vsize + j575];
			}
			/* Vectorizable loop 434 */
			/* Pre code */
			for (int j576 = 0; j576 < 4; j576 = j576 + 1) {
				fVec58_tmp[j576] = fVec58_perm[j576];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec58[i] = fSlow76;
			}
			/* Post code */
			for (int j577 = 0; j577 < 4; j577 = j577 + 1) {
				fVec58_perm[j577] = fVec58_tmp[vsize + j577];
			}
			/* Vectorizable loop 435 */
			/* Pre code */
			for (int j578 = 0; j578 < 4; j578 = j578 + 1) {
				fVec59_tmp[j578] = fVec59_perm[j578];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec59[i] = fSlow77;
			}
			/* Post code */
			for (int j579 = 0; j579 < 4; j579 = j579 + 1) {
				fVec59_perm[j579] = fVec59_tmp[vsize + j579];
			}
			/* Vectorizable loop 436 */
			/* Pre code */
			for (int j580 = 0; j580 < 4; j580 = j580 + 1) {
				fVec60_tmp[j580] = fVec60_perm[j580];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec60[i] = fSlow78;
			}
			/* Post code */
			for (int j581 = 0; j581 < 4; j581 = j581 + 1) {
				fVec60_perm[j581] = fVec60_tmp[vsize + j581];
			}
			/* Vectorizable loop 437 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec163[i] = fRec51[i] + fRec57[i] + fRec63[i] + fRec69[i] + fZec162[i];
			}
			/* Vectorizable loop 438 */
			/* Pre code */
			for (int j608 = 0; j608 < 4; j608 = j608 + 1) {
				fYec100_tmp[j608] = fYec100_perm[j608];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec100[i] = float(fZec173[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j609 = 0; j609 < 4; j609 = j609 + 1) {
				fYec100_perm[j609] = fYec100_tmp[vsize + j609];
			}
			/* Vectorizable loop 439 */
			/* Pre code */
			for (int j622 = 0; j622 < 4; j622 = j622 + 1) {
				fYec103_tmp[j622] = fYec103_perm[j622];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec103[i] = float(fZec175[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j623 = 0; j623 < 4; j623 = j623 + 1) {
				fYec103_perm[j623] = fYec103_tmp[vsize + j623];
			}
			/* Vectorizable loop 440 */
			/* Pre code */
			for (int j636 = 0; j636 < 4; j636 = j636 + 1) {
				fYec106_tmp[j636] = fYec106_perm[j636];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec106[i] = float(fZec177[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j637 = 0; j637 < 4; j637 = j637 + 1) {
				fYec106_perm[j637] = fYec106_tmp[vsize + j637];
			}
			/* Vectorizable loop 441 */
			/* Pre code */
			for (int j650 = 0; j650 < 4; j650 = j650 + 1) {
				fYec109_tmp[j650] = fYec109_perm[j650];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec109[i] = float(fZec179[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j651 = 0; j651 < 4; j651 = j651 + 1) {
				fYec109_perm[j651] = fYec109_tmp[vsize + j651];
			}
			/* Vectorizable loop 442 */
			/* Pre code */
			for (int j664 = 0; j664 < 4; j664 = j664 + 1) {
				fYec112_tmp[j664] = fYec112_perm[j664];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec112[i] = float(fZec181[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j665 = 0; j665 < 4; j665 = j665 + 1) {
				fYec112_perm[j665] = fYec112_tmp[vsize + j665];
			}
			/* Vectorizable loop 443 */
			/* Pre code */
			for (int j674 = 0; j674 < 4; j674 = j674 + 1) {
				fYec114_tmp[j674] = fYec114_perm[j674];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec114[i] = float(fZec182[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j675 = 0; j675 < 4; j675 = j675 + 1) {
				fYec114_perm[j675] = fYec114_tmp[vsize + j675];
			}
			/* Vectorizable loop 444 */
			/* Pre code */
			for (int j684 = 0; j684 < 4; j684 = j684 + 1) {
				fYec116_tmp[j684] = fYec116_perm[j684];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec116[i] = float(fZec183[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j685 = 0; j685 < 4; j685 = j685 + 1) {
				fYec116_perm[j685] = fYec116_tmp[vsize + j685];
			}
			/* Vectorizable loop 445 */
			/* Pre code */
			for (int j694 = 0; j694 < 4; j694 = j694 + 1) {
				fYec118_tmp[j694] = fYec118_perm[j694];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec118[i] = float(fZec184[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j695 = 0; j695 < 4; j695 = j695 + 1) {
				fYec118_perm[j695] = fYec118_tmp[vsize + j695];
			}
			/* Vectorizable loop 446 */
			/* Pre code */
			for (int j704 = 0; j704 < 4; j704 = j704 + 1) {
				fYec120_tmp[j704] = fYec120_perm[j704];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec120[i] = float(fZec185[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j705 = 0; j705 < 4; j705 = j705 + 1) {
				fYec120_perm[j705] = fYec120_tmp[vsize + j705];
			}
			/* Vectorizable loop 447 */
			/* Pre code */
			for (int j754 = 0; j754 < 4; j754 = j754 + 1) {
				fYec129_tmp[j754] = fYec129_perm[j754];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec129[i] = float(fZec187[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j755 = 0; j755 < 4; j755 = j755 + 1) {
				fYec129_perm[j755] = fYec129_tmp[vsize + j755];
			}
			/* Vectorizable loop 448 */
			/* Pre code */
			for (int j784 = 0; j784 < 4; j784 = j784 + 1) {
				fYec135_tmp[j784] = fYec135_perm[j784];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec135[i] = float(iRec195[i]) + fZec239[i];
			}
			/* Post code */
			for (int j785 = 0; j785 < 4; j785 = j785 + 1) {
				fYec135_perm[j785] = fYec135_tmp[vsize + j785];
			}
			/* Vectorizable loop 449 */
			/* Pre code */
			for (int j802 = 0; j802 < 4; j802 = j802 + 1) {
				fYec139_tmp[j802] = fYec139_perm[j802];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec139[i] = float(iRec200[i]) + fZec242[i];
			}
			/* Post code */
			for (int j803 = 0; j803 < 4; j803 = j803 + 1) {
				fYec139_perm[j803] = fYec139_tmp[vsize + j803];
			}
			/* Vectorizable loop 450 */
			/* Pre code */
			for (int j820 = 0; j820 < 4; j820 = j820 + 1) {
				fYec143_tmp[j820] = fYec143_perm[j820];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec143[i] = float(iRec205[i]) + fZec245[i];
			}
			/* Post code */
			for (int j821 = 0; j821 < 4; j821 = j821 + 1) {
				fYec143_perm[j821] = fYec143_tmp[vsize + j821];
			}
			/* Vectorizable loop 451 */
			/* Pre code */
			for (int j838 = 0; j838 < 4; j838 = j838 + 1) {
				fYec147_tmp[j838] = fYec147_perm[j838];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec147[i] = float(iRec210[i]) + fZec248[i];
			}
			/* Post code */
			for (int j839 = 0; j839 < 4; j839 = j839 + 1) {
				fYec147_perm[j839] = fYec147_tmp[vsize + j839];
			}
			/* Vectorizable loop 452 */
			/* Pre code */
			for (int j856 = 0; j856 < 4; j856 = j856 + 1) {
				fYec151_tmp[j856] = fYec151_perm[j856];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec151[i] = float(iRec215[i]) + fZec251[i];
			}
			/* Post code */
			for (int j857 = 0; j857 < 4; j857 = j857 + 1) {
				fYec151_perm[j857] = fYec151_tmp[vsize + j857];
			}
			/* Vectorizable loop 453 */
			/* Pre code */
			for (int j874 = 0; j874 < 4; j874 = j874 + 1) {
				fYec155_tmp[j874] = fYec155_perm[j874];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec155[i] = float(iRec220[i]) + fZec254[i];
			}
			/* Post code */
			for (int j875 = 0; j875 < 4; j875 = j875 + 1) {
				fYec155_perm[j875] = fYec155_tmp[vsize + j875];
			}
			/* Vectorizable loop 454 */
			/* Pre code */
			for (int j892 = 0; j892 < 4; j892 = j892 + 1) {
				fYec159_tmp[j892] = fYec159_perm[j892];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec159[i] = float(iRec225[i]) + fZec257[i];
			}
			/* Post code */
			for (int j893 = 0; j893 < 4; j893 = j893 + 1) {
				fYec159_perm[j893] = fYec159_tmp[vsize + j893];
			}
			/* Vectorizable loop 455 */
			/* Pre code */
			for (int j906 = 0; j906 < 4; j906 = j906 + 1) {
				fYec162_tmp[j906] = fYec162_perm[j906];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec162[i] = float(iRec230[i]) + fZec259[i];
			}
			/* Post code */
			for (int j907 = 0; j907 < 4; j907 = j907 + 1) {
				fYec162_perm[j907] = fYec162_tmp[vsize + j907];
			}
			/* Vectorizable loop 456 */
			/* Pre code */
			for (int j920 = 0; j920 < 4; j920 = j920 + 1) {
				fYec165_tmp[j920] = fYec165_perm[j920];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec165[i] = float(iRec234[i]) + fZec261[i];
			}
			/* Post code */
			for (int j921 = 0; j921 < 4; j921 = j921 + 1) {
				fYec165_perm[j921] = fYec165_tmp[vsize + j921];
			}
			/* Vectorizable loop 457 */
			/* Pre code */
			for (int j934 = 0; j934 < 4; j934 = j934 + 1) {
				fYec168_tmp[j934] = fYec168_perm[j934];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec168[i] = float(iRec238[i]) + fZec263[i];
			}
			/* Post code */
			for (int j935 = 0; j935 < 4; j935 = j935 + 1) {
				fYec168_perm[j935] = fYec168_tmp[vsize + j935];
			}
			/* Vectorizable loop 458 */
			/* Pre code */
			for (int j948 = 0; j948 < 4; j948 = j948 + 1) {
				fYec171_tmp[j948] = fYec171_perm[j948];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec171[i] = float(iRec242[i]) + fZec265[i];
			}
			/* Post code */
			for (int j949 = 0; j949 < 4; j949 = j949 + 1) {
				fYec171_perm[j949] = fYec171_tmp[vsize + j949];
			}
			/* Vectorizable loop 459 */
			/* Pre code */
			for (int j962 = 0; j962 < 4; j962 = j962 + 1) {
				fYec174_tmp[j962] = fYec174_perm[j962];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec174[i] = float(iRec246[i]) + fZec267[i];
			}
			/* Post code */
			for (int j963 = 0; j963 < 4; j963 = j963 + 1) {
				fYec174_perm[j963] = fYec174_tmp[vsize + j963];
			}
			/* Vectorizable loop 460 */
			/* Pre code */
			for (int j1042 = 0; j1042 < 4; j1042 = j1042 + 1) {
				fYec188_tmp[j1042] = fYec188_perm[j1042];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec188[i] = float(fZec238[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1043 = 0; j1043 < 4; j1043 = j1043 + 1) {
				fYec188_perm[j1043] = fYec188_tmp[vsize + j1043];
			}
			/* Vectorizable loop 461 */
			/* Pre code */
			for (int j1048 = 0; j1048 < 4; j1048 = j1048 + 1) {
				fYec189_tmp[j1048] = fYec189_perm[j1048];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec189[i] = float(fZec241[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1049 = 0; j1049 < 4; j1049 = j1049 + 1) {
				fYec189_perm[j1049] = fYec189_tmp[vsize + j1049];
			}
			/* Vectorizable loop 462 */
			/* Pre code */
			for (int j1054 = 0; j1054 < 4; j1054 = j1054 + 1) {
				fYec190_tmp[j1054] = fYec190_perm[j1054];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec190[i] = float(fZec244[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1055 = 0; j1055 < 4; j1055 = j1055 + 1) {
				fYec190_perm[j1055] = fYec190_tmp[vsize + j1055];
			}
			/* Vectorizable loop 463 */
			/* Pre code */
			for (int j1060 = 0; j1060 < 4; j1060 = j1060 + 1) {
				fYec191_tmp[j1060] = fYec191_perm[j1060];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec191[i] = float(fZec247[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1061 = 0; j1061 < 4; j1061 = j1061 + 1) {
				fYec191_perm[j1061] = fYec191_tmp[vsize + j1061];
			}
			/* Vectorizable loop 464 */
			/* Pre code */
			for (int j1066 = 0; j1066 < 4; j1066 = j1066 + 1) {
				fYec192_tmp[j1066] = fYec192_perm[j1066];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec192[i] = float(fZec250[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1067 = 0; j1067 < 4; j1067 = j1067 + 1) {
				fYec192_perm[j1067] = fYec192_tmp[vsize + j1067];
			}
			/* Vectorizable loop 465 */
			/* Pre code */
			for (int j1072 = 0; j1072 < 4; j1072 = j1072 + 1) {
				fYec193_tmp[j1072] = fYec193_perm[j1072];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec193[i] = float(fZec253[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1073 = 0; j1073 < 4; j1073 = j1073 + 1) {
				fYec193_perm[j1073] = fYec193_tmp[vsize + j1073];
			}
			/* Vectorizable loop 466 */
			/* Pre code */
			for (int j1078 = 0; j1078 < 4; j1078 = j1078 + 1) {
				fYec194_tmp[j1078] = fYec194_perm[j1078];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec194[i] = float(fZec256[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1079 = 0; j1079 < 4; j1079 = j1079 + 1) {
				fYec194_perm[j1079] = fYec194_tmp[vsize + j1079];
			}
			/* Recursive loop 467 */
			/* Pre code */
			for (int j18 = 0; j18 < 4; j18 = j18 + 1) {
				fRec7_tmp[j18] = fRec7_perm[j18];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec7[i] = fConst5 * (fRec7[i - 1] + (fRec8[i] - fRec8[i - 1]));
			}
			/* Post code */
			for (int j19 = 0; j19 < 4; j19 = j19 + 1) {
				fRec7_perm[j19] = fRec7_tmp[vsize + j19];
			}
			/* Recursive loop 468 */
			/* Pre code */
			for (int j34 = 0; j34 < 4; j34 = j34 + 1) {
				fRec13_tmp[j34] = fRec13_perm[j34];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec13[i] = fConst5 * (fRec13[i - 1] + (fRec14[i] - fRec14[i - 1]));
			}
			/* Post code */
			for (int j35 = 0; j35 < 4; j35 = j35 + 1) {
				fRec13_perm[j35] = fRec13_tmp[vsize + j35];
			}
			/* Recursive loop 469 */
			/* Pre code */
			for (int j50 = 0; j50 < 4; j50 = j50 + 1) {
				fRec18_tmp[j50] = fRec18_perm[j50];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec18[i] = fConst5 * (fRec18[i - 1] + (fRec19[i] - fRec19[i - 1]));
			}
			/* Post code */
			for (int j51 = 0; j51 < 4; j51 = j51 + 1) {
				fRec18_perm[j51] = fRec18_tmp[vsize + j51];
			}
			/* Recursive loop 470 */
			/* Pre code */
			for (int j66 = 0; j66 < 4; j66 = j66 + 1) {
				fRec23_tmp[j66] = fRec23_perm[j66];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec23[i] = fConst5 * (fRec23[i - 1] + (fRec24[i] - fRec24[i - 1]));
			}
			/* Post code */
			for (int j67 = 0; j67 < 4; j67 = j67 + 1) {
				fRec23_perm[j67] = fRec23_tmp[vsize + j67];
			}
			/* Recursive loop 471 */
			/* Pre code */
			for (int j278 = 0; j278 < 4; j278 = j278 + 1) {
				fRec90_tmp[j278] = fRec90_perm[j278];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec90[i] = fConst21 * (0.0073745456f * fRec90[i - 1] + 0.014380364f * (fYec54[i] - fYec54[i - 1]));
			}
			/* Post code */
			for (int j279 = 0; j279 < 4; j279 = j279 + 1) {
				fRec90_perm[j279] = fRec90_tmp[vsize + j279];
			}
			/* Recursive loop 472 */
			/* Pre code */
			for (int j284 = 0; j284 < 4; j284 = j284 + 1) {
				fRec91_tmp[j284] = fRec91_perm[j284];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec91[i] = fConst5 * (fRec91[i - 1] + (fRec92[i] - fRec92[i - 1]));
			}
			/* Post code */
			for (int j285 = 0; j285 < 4; j285 = j285 + 1) {
				fRec91_perm[j285] = fRec91_tmp[vsize + j285];
			}
			/* Recursive loop 473 */
			/* Pre code */
			for (int j290 = 0; j290 < 4; j290 = j290 + 1) {
				fRec93_tmp[j290] = fRec93_perm[j290];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec93[i] = fConst5 * (fRec93[i - 1] + (fRec94[i] - fRec94[i - 1]));
			}
			/* Post code */
			for (int j291 = 0; j291 < 4; j291 = j291 + 1) {
				fRec93_perm[j291] = fRec93_tmp[vsize + j291];
			}
			/* Recursive loop 474 */
			/* Pre code */
			for (int j296 = 0; j296 < 4; j296 = j296 + 1) {
				fRec95_tmp[j296] = fRec95_perm[j296];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec95[i] = fConst5 * (fRec95[i - 1] + (fRec96[i] - fRec96[i - 1]));
			}
			/* Post code */
			for (int j297 = 0; j297 < 4; j297 = j297 + 1) {
				fRec95_perm[j297] = fRec95_tmp[vsize + j297];
			}
			/* Recursive loop 475 */
			/* Pre code */
			for (int j302 = 0; j302 < 4; j302 = j302 + 1) {
				fRec97_tmp[j302] = fRec97_perm[j302];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec97[i] = fConst5 * (fRec97[i - 1] + (fRec98[i] - fRec98[i - 1]));
			}
			/* Post code */
			for (int j303 = 0; j303 < 4; j303 = j303 + 1) {
				fRec97_perm[j303] = fRec97_tmp[vsize + j303];
			}
			/* Recursive loop 476 */
			/* Pre code */
			for (int j308 = 0; j308 < 4; j308 = j308 + 1) {
				fRec99_tmp[j308] = fRec99_perm[j308];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec99[i] = fConst5 * (fRec99[i - 1] + (fRec100[i] - fRec100[i - 1]));
			}
			/* Post code */
			for (int j309 = 0; j309 < 4; j309 = j309 + 1) {
				fRec99_perm[j309] = fRec99_tmp[vsize + j309];
			}
			/* Recursive loop 477 */
			/* Pre code */
			for (int j314 = 0; j314 < 4; j314 = j314 + 1) {
				fRec101_tmp[j314] = fRec101_perm[j314];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec101[i] = fConst5 * (fRec101[i - 1] + (fRec102[i] - fRec102[i - 1]));
			}
			/* Post code */
			for (int j315 = 0; j315 < 4; j315 = j315 + 1) {
				fRec101_perm[j315] = fRec101_tmp[vsize + j315];
			}
			/* Recursive loop 478 */
			/* Pre code */
			for (int j320 = 0; j320 < 4; j320 = j320 + 1) {
				fRec103_tmp[j320] = fRec103_perm[j320];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec103[i] = fConst5 * (fRec103[i - 1] + (fRec104[i] - fRec104[i - 1]));
			}
			/* Post code */
			for (int j321 = 0; j321 < 4; j321 = j321 + 1) {
				fRec103_perm[j321] = fRec103_tmp[vsize + j321];
			}
			/* Recursive loop 479 */
			/* Pre code */
			for (int j326 = 0; j326 < 4; j326 = j326 + 1) {
				fRec105_tmp[j326] = fRec105_perm[j326];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec105[i] = fConst5 * (fRec105[i - 1] + (fRec106[i] - fRec106[i - 1]));
			}
			/* Post code */
			for (int j327 = 0; j327 < 4; j327 = j327 + 1) {
				fRec105_perm[j327] = fRec105_tmp[vsize + j327];
			}
			/* Recursive loop 480 */
			/* Pre code */
			for (int j332 = 0; j332 < 4; j332 = j332 + 1) {
				fRec107_tmp[j332] = fRec107_perm[j332];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec107[i] = fConst5 * (fRec107[i - 1] + (fRec108[i] - fRec108[i - 1]));
			}
			/* Post code */
			for (int j333 = 0; j333 < 4; j333 = j333 + 1) {
				fRec107_perm[j333] = fRec107_tmp[vsize + j333];
			}
			/* Recursive loop 481 */
			/* Pre code */
			for (int j338 = 0; j338 < 4; j338 = j338 + 1) {
				fRec109_tmp[j338] = fRec109_perm[j338];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec109[i] = fConst5 * (fRec109[i - 1] + (fRec110[i] - fRec110[i - 1]));
			}
			/* Post code */
			for (int j339 = 0; j339 < 4; j339 = j339 + 1) {
				fRec109_perm[j339] = fRec109_tmp[vsize + j339];
			}
			/* Recursive loop 482 */
			/* Pre code */
			for (int j344 = 0; j344 < 4; j344 = j344 + 1) {
				fRec111_tmp[j344] = fRec111_perm[j344];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec111[i] = fConst5 * (fRec111[i - 1] + (fRec112[i] - fRec112[i - 1]));
			}
			/* Post code */
			for (int j345 = 0; j345 < 4; j345 = j345 + 1) {
				fRec111_perm[j345] = fRec111_tmp[vsize + j345];
			}
			/* Recursive loop 483 */
			/* Pre code */
			for (int j350 = 0; j350 < 4; j350 = j350 + 1) {
				fRec113_tmp[j350] = fRec113_perm[j350];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec113[i] = fConst5 * (fRec113[i - 1] + (fRec114[i] - fRec114[i - 1]));
			}
			/* Post code */
			for (int j351 = 0; j351 < 4; j351 = j351 + 1) {
				fRec113_perm[j351] = fRec113_tmp[vsize + j351];
			}
			/* Recursive loop 484 */
			/* Pre code */
			for (int j356 = 0; j356 < 4; j356 = j356 + 1) {
				fRec115_tmp[j356] = fRec115_perm[j356];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec115[i] = fConst5 * (fRec115[i - 1] + (fRec116[i] - fRec116[i - 1]));
			}
			/* Post code */
			for (int j357 = 0; j357 < 4; j357 = j357 + 1) {
				fRec115_perm[j357] = fRec115_tmp[vsize + j357];
			}
			/* Recursive loop 485 */
			/* Pre code */
			for (int j362 = 0; j362 < 4; j362 = j362 + 1) {
				fRec117_tmp[j362] = fRec117_perm[j362];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec117[i] = fConst5 * (fRec117[i - 1] + (fRec118[i] - fRec118[i - 1]));
			}
			/* Post code */
			for (int j363 = 0; j363 < 4; j363 = j363 + 1) {
				fRec117_perm[j363] = fRec117_tmp[vsize + j363];
			}
			/* Recursive loop 486 */
			/* Pre code */
			for (int j368 = 0; j368 < 4; j368 = j368 + 1) {
				fRec119_tmp[j368] = fRec119_perm[j368];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec119[i] = fConst5 * (fRec119[i - 1] + (fRec120[i] - fRec120[i - 1]));
			}
			/* Post code */
			for (int j369 = 0; j369 < 4; j369 = j369 + 1) {
				fRec119_perm[j369] = fRec119_tmp[vsize + j369];
			}
			/* Recursive loop 487 */
			/* Pre code */
			for (int j374 = 0; j374 < 4; j374 = j374 + 1) {
				fRec121_tmp[j374] = fRec121_perm[j374];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec121[i] = fConst5 * (fRec121[i - 1] + (fRec122[i] - fRec122[i - 1]));
			}
			/* Post code */
			for (int j375 = 0; j375 < 4; j375 = j375 + 1) {
				fRec121_perm[j375] = fRec121_tmp[vsize + j375];
			}
			/* Recursive loop 488 */
			/* Pre code */
			for (int j380 = 0; j380 < 4; j380 = j380 + 1) {
				fRec123_tmp[j380] = fRec123_perm[j380];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec123[i] = fConst5 * (fRec123[i - 1] + (fRec124[i] - fRec124[i - 1]));
			}
			/* Post code */
			for (int j381 = 0; j381 < 4; j381 = j381 + 1) {
				fRec123_perm[j381] = fRec123_tmp[vsize + j381];
			}
			/* Recursive loop 489 */
			/* Pre code */
			for (int j386 = 0; j386 < 4; j386 = j386 + 1) {
				fRec125_tmp[j386] = fRec125_perm[j386];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec125[i] = fConst5 * (fRec125[i - 1] + (fRec126[i] - fRec126[i - 1]));
			}
			/* Post code */
			for (int j387 = 0; j387 < 4; j387 = j387 + 1) {
				fRec125_perm[j387] = fRec125_tmp[vsize + j387];
			}
			/* Recursive loop 490 */
			/* Pre code */
			for (int j392 = 0; j392 < 4; j392 = j392 + 1) {
				fRec127_tmp[j392] = fRec127_perm[j392];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec127[i] = fConst5 * (fRec127[i - 1] + (fRec128[i] - fRec128[i - 1]));
			}
			/* Post code */
			for (int j393 = 0; j393 < 4; j393 = j393 + 1) {
				fRec127_perm[j393] = fRec127_tmp[vsize + j393];
			}
			/* Recursive loop 491 */
			/* Pre code */
			for (int j398 = 0; j398 < 4; j398 = j398 + 1) {
				fRec129_tmp[j398] = fRec129_perm[j398];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec129[i] = fConst21 * (0.0073745456f * fRec129[i - 1] + 0.014380364f * (fYec75[i] - fYec75[i - 1]));
			}
			/* Post code */
			for (int j399 = 0; j399 < 4; j399 = j399 + 1) {
				fRec129_perm[j399] = fRec129_tmp[vsize + j399];
			}
			/* Recursive loop 492 */
			/* Pre code */
			for (int j404 = 0; j404 < 4; j404 = j404 + 1) {
				fRec130_tmp[j404] = fRec130_perm[j404];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec130[i] = fConst21 * (0.0073745456f * fRec130[i - 1] + 0.014380364f * (fYec77[i] - fYec77[i - 1]));
			}
			/* Post code */
			for (int j405 = 0; j405 < 4; j405 = j405 + 1) {
				fRec130_perm[j405] = fRec130_tmp[vsize + j405];
			}
			/* Recursive loop 493 */
			/* Pre code */
			for (int j410 = 0; j410 < 4; j410 = j410 + 1) {
				fRec131_tmp[j410] = fRec131_perm[j410];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec131[i] = fConst21 * (0.0073745456f * fRec131[i - 1] + 0.014380364f * (fYec79[i] - fYec79[i - 1]));
			}
			/* Post code */
			for (int j411 = 0; j411 < 4; j411 = j411 + 1) {
				fRec131_perm[j411] = fRec131_tmp[vsize + j411];
			}
			/* Recursive loop 494 */
			/* Pre code */
			for (int j416 = 0; j416 < 4; j416 = j416 + 1) {
				fRec132_tmp[j416] = fRec132_perm[j416];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec132[i] = fConst21 * (0.0073745456f * fRec132[i - 1] + 0.014380364f * (fYec81[i] - fYec81[i - 1]));
			}
			/* Post code */
			for (int j417 = 0; j417 < 4; j417 = j417 + 1) {
				fRec132_perm[j417] = fRec132_tmp[vsize + j417];
			}
			/* Recursive loop 495 */
			/* Pre code */
			for (int j422 = 0; j422 < 4; j422 = j422 + 1) {
				fRec133_tmp[j422] = fRec133_perm[j422];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec133[i] = fConst21 * (0.0073745456f * fRec133[i - 1] + 0.014380364f * (fYec83[i] - fYec83[i - 1]));
			}
			/* Post code */
			for (int j423 = 0; j423 < 4; j423 = j423 + 1) {
				fRec133_perm[j423] = fRec133_tmp[vsize + j423];
			}
			/* Recursive loop 496 */
			/* Pre code */
			for (int j428 = 0; j428 < 4; j428 = j428 + 1) {
				fRec134_tmp[j428] = fRec134_perm[j428];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec134[i] = fConst21 * (0.0073745456f * fRec134[i - 1] + 0.014380364f * (fYec85[i] - fYec85[i - 1]));
			}
			/* Post code */
			for (int j429 = 0; j429 < 4; j429 = j429 + 1) {
				fRec134_perm[j429] = fRec134_tmp[vsize + j429];
			}
			/* Recursive loop 497 */
			/* Pre code */
			for (int j434 = 0; j434 < 4; j434 = j434 + 1) {
				fRec135_tmp[j434] = fRec135_perm[j434];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec135[i] = fConst21 * (0.0073745456f * fRec135[i - 1] + 0.014380364f * (fYec87[i] - fYec87[i - 1]));
			}
			/* Post code */
			for (int j435 = 0; j435 < 4; j435 = j435 + 1) {
				fRec135_perm[j435] = fRec135_tmp[vsize + j435];
			}
			/* Recursive loop 498 */
			/* Pre code */
			for (int j440 = 0; j440 < 4; j440 = j440 + 1) {
				fRec136_tmp[j440] = fRec136_perm[j440];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec136[i] = fConst21 * (0.0073745456f * fRec136[i - 1] + 0.014380364f * (fYec89[i] - fYec89[i - 1]));
			}
			/* Post code */
			for (int j441 = 0; j441 < 4; j441 = j441 + 1) {
				fRec136_perm[j441] = fRec136_tmp[vsize + j441];
			}
			/* Recursive loop 499 */
			/* Pre code */
			for (int j446 = 0; j446 < 4; j446 = j446 + 1) {
				fRec137_tmp[j446] = fRec137_perm[j446];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec137[i] = fConst21 * (0.0073745456f * fRec137[i - 1] + 0.014380364f * (fYec91[i] - fYec91[i - 1]));
			}
			/* Post code */
			for (int j447 = 0; j447 < 4; j447 = j447 + 1) {
				fRec137_perm[j447] = fRec137_tmp[vsize + j447];
			}
			/* Recursive loop 500 */
			/* Pre code */
			for (int j452 = 0; j452 < 4; j452 = j452 + 1) {
				fRec138_tmp[j452] = fRec138_perm[j452];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec138[i] = fConst21 * (0.0073745456f * fRec138[i - 1] + 0.014380364f * (fYec93[i] - fYec93[i - 1]));
			}
			/* Post code */
			for (int j453 = 0; j453 < 4; j453 = j453 + 1) {
				fRec138_perm[j453] = fRec138_tmp[vsize + j453];
			}
			/* Recursive loop 501 */
			/* Pre code */
			for (int j458 = 0; j458 < 4; j458 = j458 + 1) {
				fRec139_tmp[j458] = fRec139_perm[j458];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec139[i] = fConst21 * (0.0073745456f * fRec139[i - 1] + 0.014380364f * (fYec95[i] - fYec95[i - 1]));
			}
			/* Post code */
			for (int j459 = 0; j459 < 4; j459 = j459 + 1) {
				fRec139_perm[j459] = fRec139_tmp[vsize + j459];
			}
			/* Vectorizable loop 502 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec85[i] = fSlow18 + fVec0[i - 3] + fVec0[i - 1] + fVec0[i - 2];
			}
			/* Vectorizable loop 503 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec87[i] = fSlow19 + fVec1[i - 3] + fVec1[i - 1] + fVec1[i - 2];
			}
			/* Vectorizable loop 504 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec89[i] = fSlow20 + fVec2[i - 3] + fVec2[i - 1] + fVec2[i - 2];
			}
			/* Vectorizable loop 505 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec91[i] = fSlow21 + fVec3[i - 3] + fVec3[i - 1] + fVec3[i - 2];
			}
			/* Vectorizable loop 506 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec93[i] = fSlow22 + fVec4[i - 3] + fVec4[i - 1] + fVec4[i - 2];
			}
			/* Vectorizable loop 507 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec95[i] = fSlow23 + fVec5[i - 3] + fVec5[i - 1] + fVec5[i - 2];
			}
			/* Vectorizable loop 508 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec97[i] = fSlow24 + fVec6[i - 3] + fVec6[i - 1] + fVec6[i - 2];
			}
			/* Vectorizable loop 509 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec99[i] = fSlow25 + fVec7[i - 3] + fVec7[i - 1] + fVec7[i - 2];
			}
			/* Vectorizable loop 510 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec101[i] = fSlow26 + fVec8[i - 3] + fVec8[i - 1] + fVec8[i - 2];
			}
			/* Vectorizable loop 511 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec103[i] = fSlow27 + fVec9[i - 3] + fVec9[i - 1] + fVec9[i - 2];
			}
			/* Vectorizable loop 512 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec105[i] = fSlow28 + fVec10[i - 3] + fVec10[i - 1] + fVec10[i - 2];
			}
			/* Vectorizable loop 513 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec107[i] = fSlow29 + fVec11[i - 3] + fVec11[i - 1] + fVec11[i - 2];
			}
			/* Vectorizable loop 514 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec109[i] = fSlow30 + fVec12[i - 3] + fVec12[i - 1] + fVec12[i - 2];
			}
			/* Vectorizable loop 515 */
			/* Pre code */
			for (int j486 = 0; j486 < 4; j486 = j486 + 1) {
				fVec13_tmp[j486] = fVec13_perm[j486];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec13[i] = fSlow31;
			}
			/* Post code */
			for (int j487 = 0; j487 < 4; j487 = j487 + 1) {
				fVec13_perm[j487] = fVec13_tmp[vsize + j487];
			}
			/* Vectorizable loop 516 */
			/* Pre code */
			for (int j488 = 0; j488 < 4; j488 = j488 + 1) {
				fVec14_tmp[j488] = fVec14_perm[j488];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec14[i] = fSlow32;
			}
			/* Post code */
			for (int j489 = 0; j489 < 4; j489 = j489 + 1) {
				fVec14_perm[j489] = fVec14_tmp[vsize + j489];
			}
			/* Vectorizable loop 517 */
			/* Pre code */
			for (int j490 = 0; j490 < 4; j490 = j490 + 1) {
				fVec15_tmp[j490] = fVec15_perm[j490];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec15[i] = fSlow33;
			}
			/* Post code */
			for (int j491 = 0; j491 < 4; j491 = j491 + 1) {
				fVec15_perm[j491] = fVec15_tmp[vsize + j491];
			}
			/* Vectorizable loop 518 */
			/* Pre code */
			for (int j492 = 0; j492 < 4; j492 = j492 + 1) {
				fVec16_tmp[j492] = fVec16_perm[j492];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec16[i] = fSlow34;
			}
			/* Post code */
			for (int j493 = 0; j493 < 4; j493 = j493 + 1) {
				fVec16_perm[j493] = fVec16_tmp[vsize + j493];
			}
			/* Vectorizable loop 519 */
			/* Pre code */
			for (int j494 = 0; j494 < 4; j494 = j494 + 1) {
				fVec17_tmp[j494] = fVec17_perm[j494];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec17[i] = fSlow35;
			}
			/* Post code */
			for (int j495 = 0; j495 < 4; j495 = j495 + 1) {
				fVec17_perm[j495] = fVec17_tmp[vsize + j495];
			}
			/* Vectorizable loop 520 */
			/* Pre code */
			for (int j496 = 0; j496 < 4; j496 = j496 + 1) {
				fVec18_tmp[j496] = fVec18_perm[j496];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec18[i] = fSlow36;
			}
			/* Post code */
			for (int j497 = 0; j497 < 4; j497 = j497 + 1) {
				fVec18_perm[j497] = fVec18_tmp[vsize + j497];
			}
			/* Vectorizable loop 521 */
			/* Pre code */
			for (int j498 = 0; j498 < 4; j498 = j498 + 1) {
				fVec19_tmp[j498] = fVec19_perm[j498];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec19[i] = fSlow37;
			}
			/* Post code */
			for (int j499 = 0; j499 < 4; j499 = j499 + 1) {
				fVec19_perm[j499] = fVec19_tmp[vsize + j499];
			}
			/* Vectorizable loop 522 */
			/* Pre code */
			for (int j500 = 0; j500 < 4; j500 = j500 + 1) {
				fVec20_tmp[j500] = fVec20_perm[j500];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec20[i] = fSlow38;
			}
			/* Post code */
			for (int j501 = 0; j501 < 4; j501 = j501 + 1) {
				fVec20_perm[j501] = fVec20_tmp[vsize + j501];
			}
			/* Vectorizable loop 523 */
			/* Pre code */
			for (int j502 = 0; j502 < 4; j502 = j502 + 1) {
				fVec21_tmp[j502] = fVec21_perm[j502];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec21[i] = fSlow39;
			}
			/* Post code */
			for (int j503 = 0; j503 < 4; j503 = j503 + 1) {
				fVec21_perm[j503] = fVec21_tmp[vsize + j503];
			}
			/* Vectorizable loop 524 */
			/* Pre code */
			for (int j504 = 0; j504 < 4; j504 = j504 + 1) {
				fVec22_tmp[j504] = fVec22_perm[j504];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec22[i] = fSlow40;
			}
			/* Post code */
			for (int j505 = 0; j505 < 4; j505 = j505 + 1) {
				fVec22_perm[j505] = fVec22_tmp[vsize + j505];
			}
			/* Vectorizable loop 525 */
			/* Pre code */
			for (int j506 = 0; j506 < 4; j506 = j506 + 1) {
				fVec23_tmp[j506] = fVec23_perm[j506];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec23[i] = fSlow41;
			}
			/* Post code */
			for (int j507 = 0; j507 < 4; j507 = j507 + 1) {
				fVec23_perm[j507] = fVec23_tmp[vsize + j507];
			}
			/* Vectorizable loop 526 */
			/* Pre code */
			for (int j508 = 0; j508 < 4; j508 = j508 + 1) {
				fVec24_tmp[j508] = fVec24_perm[j508];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec24[i] = fSlow42;
			}
			/* Post code */
			for (int j509 = 0; j509 < 4; j509 = j509 + 1) {
				fVec24_perm[j509] = fVec24_tmp[vsize + j509];
			}
			/* Vectorizable loop 527 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec123[i] = fSlow43 + fVec25[i - 3] + fVec25[i - 1] + fVec25[i - 2];
			}
			/* Vectorizable loop 528 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec124[i] = fSlow44 + fVec26[i - 3] + fVec26[i - 1] + fVec26[i - 2];
			}
			/* Vectorizable loop 529 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec125[i] = fSlow45 + fVec27[i - 3] + fVec27[i - 1] + fVec27[i - 2];
			}
			/* Vectorizable loop 530 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec126[i] = fSlow46 + fVec28[i - 3] + fVec28[i - 1] + fVec28[i - 2];
			}
			/* Vectorizable loop 531 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec127[i] = fSlow47 + fVec29[i - 3] + fVec29[i - 1] + fVec29[i - 2];
			}
			/* Vectorizable loop 532 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec128[i] = fSlow48 + fVec30[i - 3] + fVec30[i - 1] + fVec30[i - 2];
			}
			/* Vectorizable loop 533 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec129[i] = fSlow49 + fVec31[i - 3] + fVec31[i - 1] + fVec31[i - 2];
			}
			/* Vectorizable loop 534 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec130[i] = fSlow50 + fVec32[i - 3] + fVec32[i - 1] + fVec32[i - 2];
			}
			/* Vectorizable loop 535 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec131[i] = fSlow51 + fVec33[i - 3] + fVec33[i - 1] + fVec33[i - 2];
			}
			/* Vectorizable loop 536 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec132[i] = fSlow52 + fVec34[i - 3] + fVec34[i - 1] + fVec34[i - 2];
			}
			/* Vectorizable loop 537 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec133[i] = fSlow53 + fVec35[i - 3] + fVec35[i - 1] + fVec35[i - 2];
			}
			/* Vectorizable loop 538 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec134[i] = fSlow54 + fVec36[i - 3] + fVec36[i - 1] + fVec36[i - 2];
			}
			/* Vectorizable loop 539 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec135[i] = fSlow55 + fVec37[i - 3] + fVec37[i - 1] + fVec37[i - 2];
			}
			/* Vectorizable loop 540 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec136[i] = fSlow56 + fVec38[i - 3] + fVec38[i - 1] + fVec38[i - 2];
			}
			/* Vectorizable loop 541 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec137[i] = fSlow57 + fVec39[i - 3] + fVec39[i - 1] + fVec39[i - 2];
			}
			/* Vectorizable loop 542 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec138[i] = fSlow58 + fVec40[i - 3] + fVec40[i - 1] + fVec40[i - 2];
			}
			/* Vectorizable loop 543 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec139[i] = fSlow59 + fVec41[i - 3] + fVec41[i - 1] + fVec41[i - 2];
			}
			/* Vectorizable loop 544 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec140[i] = fSlow60 + fVec42[i - 3] + fVec42[i - 1] + fVec42[i - 2];
			}
			/* Vectorizable loop 545 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec141[i] = fSlow61 + fVec43[i - 3] + fVec43[i - 1] + fVec43[i - 2];
			}
			/* Vectorizable loop 546 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec142[i] = fSlow62 + fVec44[i - 3] + fVec44[i - 1] + fVec44[i - 2];
			}
			/* Vectorizable loop 547 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec143[i] = fSlow63 + fVec45[i - 3] + fVec45[i - 1] + fVec45[i - 2];
			}
			/* Vectorizable loop 548 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec144[i] = fSlow64 + fVec46[i - 3] + fVec46[i - 1] + fVec46[i - 2];
			}
			/* Vectorizable loop 549 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec145[i] = fSlow65 + fVec47[i - 3] + fVec47[i - 1] + fVec47[i - 2];
			}
			/* Vectorizable loop 550 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec146[i] = fSlow66 + fVec48[i - 3] + fVec48[i - 1] + fVec48[i - 2];
			}
			/* Vectorizable loop 551 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec147[i] = fSlow67 + fVec49[i - 3] + fVec49[i - 1] + fVec49[i - 2];
			}
			/* Vectorizable loop 552 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec148[i] = fSlow68 + fVec50[i - 3] + fVec50[i - 1] + fVec50[i - 2];
			}
			/* Vectorizable loop 553 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec149[i] = fSlow69 + fVec51[i - 3] + fVec51[i - 1] + fVec51[i - 2];
			}
			/* Vectorizable loop 554 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec150[i] = fSlow70 + fVec52[i - 3] + fVec52[i - 1] + fVec52[i - 2];
			}
			/* Vectorizable loop 555 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec151[i] = fSlow71 + fVec53[i - 3] + fVec53[i - 1] + fVec53[i - 2];
			}
			/* Vectorizable loop 556 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec152[i] = fSlow72 + fVec54[i - 3] + fVec54[i - 1] + fVec54[i - 2];
			}
			/* Vectorizable loop 557 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec153[i] = fSlow73 + fVec55[i - 3] + fVec55[i - 1] + fVec55[i - 2];
			}
			/* Vectorizable loop 558 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec154[i] = fSlow74 + fVec56[i - 3] + fVec56[i - 1] + fVec56[i - 2];
			}
			/* Vectorizable loop 559 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec155[i] = fSlow75 + fVec57[i - 3] + fVec57[i - 1] + fVec57[i - 2];
			}
			/* Vectorizable loop 560 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec156[i] = fSlow76 + fVec58[i - 3] + fVec58[i - 1] + fVec58[i - 2];
			}
			/* Vectorizable loop 561 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec157[i] = fSlow77 + fVec59[i - 3] + fVec59[i - 1] + fVec59[i - 2];
			}
			/* Vectorizable loop 562 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec158[i] = fSlow78 + fVec60[i - 3] + fVec60[i - 1] + fVec60[i - 2];
			}
			/* Vectorizable loop 563 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec164[i] = fRec28[i] + fRec33[i] + fRec39[i] + fRec45[i] + fZec163[i];
			}
			/* Recursive loop 564 */
			/* Pre code */
			for (int j610 = 0; j610 < 4; j610 = j610 + 1) {
				fRec143_tmp[j610] = fRec143_perm[j610];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec143[i] = fRec143[i - 1] + fConst31 * (2.0f * fYec100[i - 1] + square_polyblep_precalc(fZec173[i], 0.5f * fYec99[i - 1], 0.5f * fYec99[i - 2], fZec37[i]) - fRec143[i - 1]);
			}
			/* Post code */
			for (int j611 = 0; j611 < 4; j611 = j611 + 1) {
				fRec143_perm[j611] = fRec143_tmp[vsize + j611];
			}
			/* Recursive loop 565 */
			/* Pre code */
			for (int j624 = 0; j624 < 4; j624 = j624 + 1) {
				fRec147_tmp[j624] = fRec147_perm[j624];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec147[i] = fRec147[i - 1] + fConst31 * (2.0f * fYec103[i - 1] + square_polyblep_precalc(fZec175[i], 0.5f * fYec102[i - 1], 0.5f * fYec102[i - 2], fZec44[i]) - fRec147[i - 1]);
			}
			/* Post code */
			for (int j625 = 0; j625 < 4; j625 = j625 + 1) {
				fRec147_perm[j625] = fRec147_tmp[vsize + j625];
			}
			/* Recursive loop 566 */
			/* Pre code */
			for (int j638 = 0; j638 < 4; j638 = j638 + 1) {
				fRec151_tmp[j638] = fRec151_perm[j638];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec151[i] = fRec151[i - 1] + fConst31 * (2.0f * fYec106[i - 1] + square_polyblep_precalc(fZec177[i], 0.5f * fYec105[i - 1], 0.5f * fYec105[i - 2], fZec51[i]) - fRec151[i - 1]);
			}
			/* Post code */
			for (int j639 = 0; j639 < 4; j639 = j639 + 1) {
				fRec151_perm[j639] = fRec151_tmp[vsize + j639];
			}
			/* Recursive loop 567 */
			/* Pre code */
			for (int j652 = 0; j652 < 4; j652 = j652 + 1) {
				fRec155_tmp[j652] = fRec155_perm[j652];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec155[i] = fRec155[i - 1] + fConst31 * (2.0f * fYec109[i - 1] + square_polyblep_precalc(fZec179[i], 0.5f * fYec108[i - 1], 0.5f * fYec108[i - 2], fZec58[i]) - fRec155[i - 1]);
			}
			/* Post code */
			for (int j653 = 0; j653 < 4; j653 = j653 + 1) {
				fRec155_perm[j653] = fRec155_tmp[vsize + j653];
			}
			/* Recursive loop 568 */
			/* Pre code */
			for (int j666 = 0; j666 < 4; j666 = j666 + 1) {
				fRec159_tmp[j666] = fRec159_perm[j666];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec159[i] = fRec159[i - 1] + fConst33 * (2.0f * fYec112[i - 1] + square_polyblep_precalc(fZec181[i], 0.5f * fYec111[i - 1], 0.5f * fYec111[i - 2], fZec65[i]) - fRec159[i - 1]);
			}
			/* Post code */
			for (int j667 = 0; j667 < 4; j667 = j667 + 1) {
				fRec159_perm[j667] = fRec159_tmp[vsize + j667];
			}
			/* Recursive loop 569 */
			/* Pre code */
			for (int j676 = 0; j676 < 4; j676 = j676 + 1) {
				fRec163_tmp[j676] = fRec163_perm[j676];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec163[i] = fRec163[i - 1] + fConst34 * (2.0f * fYec114[i - 1] + square_polyblep_precalc(fZec182[i], 0.5f * fYec113[i - 1], 0.5f * fYec113[i - 2], fZec12[i]) - fRec163[i - 1]);
			}
			/* Post code */
			for (int j677 = 0; j677 < 4; j677 = j677 + 1) {
				fRec163_perm[j677] = fRec163_tmp[vsize + j677];
			}
			/* Recursive loop 570 */
			/* Pre code */
			for (int j686 = 0; j686 < 4; j686 = j686 + 1) {
				fRec166_tmp[j686] = fRec166_perm[j686];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec166[i] = fRec166[i - 1] + fConst34 * (2.0f * fYec116[i - 1] + square_polyblep_precalc(fZec183[i], 0.5f * fYec115[i - 1], 0.5f * fYec115[i - 2], fZec18[i]) - fRec166[i - 1]);
			}
			/* Post code */
			for (int j687 = 0; j687 < 4; j687 = j687 + 1) {
				fRec166_perm[j687] = fRec166_tmp[vsize + j687];
			}
			/* Recursive loop 571 */
			/* Pre code */
			for (int j696 = 0; j696 < 4; j696 = j696 + 1) {
				fRec169_tmp[j696] = fRec169_perm[j696];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec169[i] = fRec169[i - 1] + fConst34 * (2.0f * fYec118[i - 1] + square_polyblep_precalc(fZec184[i], 0.5f * fYec117[i - 1], 0.5f * fYec117[i - 2], fZec24[i]) - fRec169[i - 1]);
			}
			/* Post code */
			for (int j697 = 0; j697 < 4; j697 = j697 + 1) {
				fRec169_perm[j697] = fRec169_tmp[vsize + j697];
			}
			/* Recursive loop 572 */
			/* Pre code */
			for (int j706 = 0; j706 < 4; j706 = j706 + 1) {
				fRec172_tmp[j706] = fRec172_perm[j706];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec172[i] = fRec172[i - 1] + fConst34 * (2.0f * fYec120[i - 1] + square_polyblep_precalc(fZec185[i], 0.5f * fYec119[i - 1], 0.5f * fYec119[i - 2], fZec30[i]) - fRec172[i - 1]);
			}
			/* Post code */
			for (int j707 = 0; j707 < 4; j707 = j707 + 1) {
				fRec172_perm[j707] = fRec172_tmp[vsize + j707];
			}
			/* Vectorizable loop 573 */
			/* Pre code */
			for (int j710 = 0; j710 < 4; j710 = j710 + 1) {
				fYec121_tmp[j710] = fYec121_perm[j710];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec121[i] = float(fZec172[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j711 = 0; j711 < 4; j711 = j711 + 1) {
				fYec121_perm[j711] = fYec121_tmp[vsize + j711];
			}
			/* Vectorizable loop 574 */
			/* Pre code */
			for (int j716 = 0; j716 < 4; j716 = j716 + 1) {
				fYec122_tmp[j716] = fYec122_perm[j716];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec122[i] = float(fZec174[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j717 = 0; j717 < 4; j717 = j717 + 1) {
				fYec122_perm[j717] = fYec122_tmp[vsize + j717];
			}
			/* Vectorizable loop 575 */
			/* Pre code */
			for (int j722 = 0; j722 < 4; j722 = j722 + 1) {
				fYec123_tmp[j722] = fYec123_perm[j722];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec123[i] = float(fZec176[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j723 = 0; j723 < 4; j723 = j723 + 1) {
				fYec123_perm[j723] = fYec123_tmp[vsize + j723];
			}
			/* Vectorizable loop 576 */
			/* Pre code */
			for (int j728 = 0; j728 < 4; j728 = j728 + 1) {
				fYec124_tmp[j728] = fYec124_perm[j728];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec124[i] = float(fZec178[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j729 = 0; j729 < 4; j729 = j729 + 1) {
				fYec124_perm[j729] = fYec124_tmp[vsize + j729];
			}
			/* Vectorizable loop 577 */
			/* Pre code */
			for (int j734 = 0; j734 < 4; j734 = j734 + 1) {
				fYec125_tmp[j734] = fYec125_perm[j734];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec125[i] = float(fZec180[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j735 = 0; j735 < 4; j735 = j735 + 1) {
				fYec125_perm[j735] = fYec125_tmp[vsize + j735];
			}
			/* Vectorizable loop 578 */
			/* Pre code */
			for (int j744 = 0; j744 < 4; j744 = j744 + 1) {
				fYec127_tmp[j744] = fYec127_perm[j744];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec127[i] = float(fZec186[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j745 = 0; j745 < 4; j745 = j745 + 1) {
				fYec127_perm[j745] = fYec127_tmp[vsize + j745];
			}
			/* Recursive loop 579 */
			/* Pre code */
			for (int j756 = 0; j756 < 4; j756 = j756 + 1) {
				fRec188_tmp[j756] = fRec188_perm[j756];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec188[i] = fRec188[i - 1] + fConst36 * (2.0f * fYec129[i - 1] + square_polyblep_precalc(fZec187[i], 0.5f * fYec128[i - 1], 0.5f * fYec128[i - 2], fZec6[i]) - fRec188[i - 1]);
			}
			/* Post code */
			for (int j757 = 0; j757 < 4; j757 = j757 + 1) {
				fRec188_perm[j757] = fRec188_tmp[vsize + j757];
			}
			/* Vectorizable loop 580 */
			/* Pre code */
			for (int j764 = 0; j764 < 4; j764 = j764 + 1) {
				fYec131_tmp[j764] = fYec131_perm[j764];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec131[i] = float(fZec188[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j765 = 0; j765 < 4; j765 = j765 + 1) {
				fYec131_perm[j765] = fYec131_tmp[vsize + j765];
			}
			/* Vectorizable loop 581 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec240[i] = 0.5f * fYec135[i];
			}
			/* Vectorizable loop 582 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec243[i] = 0.5f * fYec139[i];
			}
			/* Vectorizable loop 583 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec246[i] = 0.5f * fYec143[i];
			}
			/* Vectorizable loop 584 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec249[i] = 0.5f * fYec147[i];
			}
			/* Vectorizable loop 585 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec252[i] = 0.5f * fYec151[i];
			}
			/* Vectorizable loop 586 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec255[i] = 0.5f * fYec155[i];
			}
			/* Vectorizable loop 587 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec258[i] = 0.5f * fYec159[i];
			}
			/* Vectorizable loop 588 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec260[i] = 0.5f * fYec162[i];
			}
			/* Vectorizable loop 589 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec262[i] = 0.5f * fYec165[i];
			}
			/* Vectorizable loop 590 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec264[i] = 0.5f * fYec168[i];
			}
			/* Vectorizable loop 591 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec266[i] = 0.5f * fYec171[i];
			}
			/* Vectorizable loop 592 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec268[i] = 0.5f * fYec174[i];
			}
			/* Recursive loop 593 */
			/* Pre code */
			for (int j1044 = 0; j1044 < 4; j1044 = j1044 + 1) {
				fRec273_tmp[j1044] = fRec273_perm[j1044];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec273[i] = fRec273[i - 1] + fConst42 * (2.0f * fYec188[i - 1] + square_polyblep_precalc(fZec238[i], 0.5f * fYec133[i - 1], 0.5f * fYec133[i - 2], fZec30[i]) - fRec273[i - 1]);
			}
			/* Post code */
			for (int j1045 = 0; j1045 < 4; j1045 = j1045 + 1) {
				fRec273_perm[j1045] = fRec273_tmp[vsize + j1045];
			}
			/* Recursive loop 594 */
			/* Pre code */
			for (int j1050 = 0; j1050 < 4; j1050 = j1050 + 1) {
				fRec275_tmp[j1050] = fRec275_perm[j1050];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec275[i] = fRec275[i - 1] + fConst42 * (2.0f * fYec189[i - 1] + square_polyblep_precalc(fZec241[i], 0.5f * fYec137[i - 1], 0.5f * fYec137[i - 2], fZec24[i]) - fRec275[i - 1]);
			}
			/* Post code */
			for (int j1051 = 0; j1051 < 4; j1051 = j1051 + 1) {
				fRec275_perm[j1051] = fRec275_tmp[vsize + j1051];
			}
			/* Recursive loop 595 */
			/* Pre code */
			for (int j1056 = 0; j1056 < 4; j1056 = j1056 + 1) {
				fRec277_tmp[j1056] = fRec277_perm[j1056];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec277[i] = fRec277[i - 1] + fConst42 * (2.0f * fYec190[i - 1] + square_polyblep_precalc(fZec244[i], 0.5f * fYec141[i - 1], 0.5f * fYec141[i - 2], fZec18[i]) - fRec277[i - 1]);
			}
			/* Post code */
			for (int j1057 = 0; j1057 < 4; j1057 = j1057 + 1) {
				fRec277_perm[j1057] = fRec277_tmp[vsize + j1057];
			}
			/* Recursive loop 596 */
			/* Pre code */
			for (int j1062 = 0; j1062 < 4; j1062 = j1062 + 1) {
				fRec279_tmp[j1062] = fRec279_perm[j1062];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec279[i] = fRec279[i - 1] + fConst42 * (2.0f * fYec191[i - 1] + square_polyblep_precalc(fZec247[i], 0.5f * fYec145[i - 1], 0.5f * fYec145[i - 2], fZec12[i]) - fRec279[i - 1]);
			}
			/* Post code */
			for (int j1063 = 0; j1063 < 4; j1063 = j1063 + 1) {
				fRec279_perm[j1063] = fRec279_tmp[vsize + j1063];
			}
			/* Recursive loop 597 */
			/* Pre code */
			for (int j1068 = 0; j1068 < 4; j1068 = j1068 + 1) {
				fRec281_tmp[j1068] = fRec281_perm[j1068];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec281[i] = fRec281[i - 1] + fConst33 * (2.0f * fYec192[i - 1] + square_polyblep_precalc(fZec250[i], 0.5f * fYec149[i - 1], 0.5f * fYec149[i - 2], fZec6[i]) - fRec281[i - 1]);
			}
			/* Post code */
			for (int j1069 = 0; j1069 < 4; j1069 = j1069 + 1) {
				fRec281_perm[j1069] = fRec281_tmp[vsize + j1069];
			}
			/* Recursive loop 598 */
			/* Pre code */
			for (int j1074 = 0; j1074 < 4; j1074 = j1074 + 1) {
				fRec283_tmp[j1074] = fRec283_perm[j1074];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec283[i] = fRec283[i - 1] + fConst33 * (2.0f * fYec193[i - 1] + square_polyblep_precalc(fZec253[i], 0.5f * fYec153[i - 1], 0.5f * fYec153[i - 2], fZec79[i]) - fRec283[i - 1]);
			}
			/* Post code */
			for (int j1075 = 0; j1075 < 4; j1075 = j1075 + 1) {
				fRec283_perm[j1075] = fRec283_tmp[vsize + j1075];
			}
			/* Recursive loop 599 */
			/* Pre code */
			for (int j1080 = 0; j1080 < 4; j1080 = j1080 + 1) {
				fRec285_tmp[j1080] = fRec285_perm[j1080];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec285[i] = fRec285[i - 1] + fConst33 * (2.0f * fYec194[i - 1] + square_polyblep_precalc(fZec256[i], 0.5f * fYec157[i - 1], 0.5f * fYec157[i - 2], fZec72[i]) - fRec285[i - 1]);
			}
			/* Post code */
			for (int j1081 = 0; j1081 < 4; j1081 = j1081 + 1) {
				fRec285_perm[j1081] = fRec285_tmp[vsize + j1081];
			}
			/* Vectorizable loop 600 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec86[i] = fRec90[i] * fZec85[i];
			}
			/* Vectorizable loop 601 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec88[i] = fRec129[i] * fZec87[i];
			}
			/* Vectorizable loop 602 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec90[i] = fRec130[i] * fZec89[i];
			}
			/* Vectorizable loop 603 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec92[i] = fRec131[i] * fZec91[i];
			}
			/* Vectorizable loop 604 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec94[i] = fRec132[i] * fZec93[i];
			}
			/* Vectorizable loop 605 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec96[i] = fRec133[i] * fZec95[i];
			}
			/* Vectorizable loop 606 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec98[i] = fRec134[i] * fZec97[i];
			}
			/* Vectorizable loop 607 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec100[i] = fRec135[i] * fZec99[i];
			}
			/* Vectorizable loop 608 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec102[i] = fRec136[i] * fZec101[i];
			}
			/* Vectorizable loop 609 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec104[i] = fRec137[i] * fZec103[i];
			}
			/* Vectorizable loop 610 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec106[i] = fRec138[i] * fZec105[i];
			}
			/* Vectorizable loop 611 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec108[i] = fRec139[i] * fZec107[i];
			}
			/* Vectorizable loop 612 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec110[i] = fRec90[i] * fZec109[i];
			}
			/* Vectorizable loop 613 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec111[i] = fSlow31 + fVec13[i - 3] + fVec13[i - 1] + fVec13[i - 2];
			}
			/* Vectorizable loop 614 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec112[i] = fSlow32 + fVec14[i - 3] + fVec14[i - 1] + fVec14[i - 2];
			}
			/* Vectorizable loop 615 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec113[i] = fSlow33 + fVec15[i - 3] + fVec15[i - 1] + fVec15[i - 2];
			}
			/* Vectorizable loop 616 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec114[i] = fSlow34 + fVec16[i - 3] + fVec16[i - 1] + fVec16[i - 2];
			}
			/* Vectorizable loop 617 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec115[i] = fSlow35 + fVec17[i - 3] + fVec17[i - 1] + fVec17[i - 2];
			}
			/* Vectorizable loop 618 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec116[i] = fSlow36 + fVec18[i - 3] + fVec18[i - 1] + fVec18[i - 2];
			}
			/* Vectorizable loop 619 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec117[i] = fSlow37 + fVec19[i - 3] + fVec19[i - 1] + fVec19[i - 2];
			}
			/* Vectorizable loop 620 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec118[i] = fSlow38 + fVec20[i - 3] + fVec20[i - 1] + fVec20[i - 2];
			}
			/* Vectorizable loop 621 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec119[i] = fSlow39 + fVec21[i - 3] + fVec21[i - 1] + fVec21[i - 2];
			}
			/* Vectorizable loop 622 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec120[i] = fSlow40 + fVec22[i - 3] + fVec22[i - 1] + fVec22[i - 2];
			}
			/* Vectorizable loop 623 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec121[i] = fSlow41 + fVec23[i - 3] + fVec23[i - 1] + fVec23[i - 2];
			}
			/* Vectorizable loop 624 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec122[i] = fSlow42 + fVec24[i - 3] + fVec24[i - 1] + fVec24[i - 2];
			}
			/* Vectorizable loop 625 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec159[i] = fSlow80 * (fRec84[i] * fZec158[i] + fRec87[i] * fZec157[i] + fRec81[i] * fZec156[i] + fRec78[i] * fZec155[i] + fRec75[i] * fZec154[i] + fRec69[i] * fZec153[i] + fRec63[i] * fZec152[i] + fRec57[i] * fZec151[i] + fRec51[i] * fZec150[i] + fRec45[i] * fZec149[i] + fRec39[i] * fZec148[i] + fRec33[i] * fZec147[i] + fRec28[i] * fZec146[i] + fRec23[i] * fZec145[i] + fRec18[i] * fZec144[i] + fRec13[i] * fZec143[i] + fRec7[i] * fZec142[i]) + fRec125[i] * fZec141[i] + fRec127[i] * fZec140[i] + fRec123[i] * fZec139[i] + fRec121[i] * fZec138[i] + fRec119[i] * fZec137[i] + fRec117[i] * fZec136[i] + fRec115[i] * fZec135[i] + fRec113[i] * fZec134[i] + fRec111[i] * fZec133[i] + fRec109[i] * fZec132[i] + fRec107[i] * fZec131[i] + fRec105[i] * fZec130[i] + fRec103[i] * fZec129[i] + fRec101[i] * fZec128[i] + fRec99[i] * fZec127[i] + fRec97[i] * fZec126[i] + fRec95[i] * fZec125[i] + fRec93[i] * fZec124[i] + fRec91[i] * fZec123[i];
			}
			/* Vectorizable loop 626 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec161[i] = fRec136[i] + fRec137[i] + fRec138[i] + fRec90[i] + fRec139[i];
			}
			/* Vectorizable loop 627 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec165[i] = fRec7[i] + fRec13[i] + fRec18[i] + fRec23[i] + fZec164[i];
			}
			/* Recursive loop 628 */
			/* Pre code */
			for (int j612 = 0; j612 < 4; j612 = j612 + 1) {
				fRec142_tmp[j612] = fRec142_perm[j612];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec142[i] = fConst32 * (fRec142[i - 1] + (fRec143[i] - fRec143[i - 1]));
			}
			/* Post code */
			for (int j613 = 0; j613 < 4; j613 = j613 + 1) {
				fRec142_perm[j613] = fRec142_tmp[vsize + j613];
			}
			/* Recursive loop 629 */
			/* Pre code */
			for (int j626 = 0; j626 < 4; j626 = j626 + 1) {
				fRec146_tmp[j626] = fRec146_perm[j626];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec146[i] = fConst32 * (fRec146[i - 1] + (fRec147[i] - fRec147[i - 1]));
			}
			/* Post code */
			for (int j627 = 0; j627 < 4; j627 = j627 + 1) {
				fRec146_perm[j627] = fRec146_tmp[vsize + j627];
			}
			/* Recursive loop 630 */
			/* Pre code */
			for (int j640 = 0; j640 < 4; j640 = j640 + 1) {
				fRec150_tmp[j640] = fRec150_perm[j640];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec150[i] = fConst32 * (fRec150[i - 1] + (fRec151[i] - fRec151[i - 1]));
			}
			/* Post code */
			for (int j641 = 0; j641 < 4; j641 = j641 + 1) {
				fRec150_perm[j641] = fRec150_tmp[vsize + j641];
			}
			/* Recursive loop 631 */
			/* Pre code */
			for (int j654 = 0; j654 < 4; j654 = j654 + 1) {
				fRec154_tmp[j654] = fRec154_perm[j654];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec154[i] = fConst32 * (fRec154[i - 1] + (fRec155[i] - fRec155[i - 1]));
			}
			/* Post code */
			for (int j655 = 0; j655 < 4; j655 = j655 + 1) {
				fRec154_perm[j655] = fRec154_tmp[vsize + j655];
			}
			/* Recursive loop 632 */
			/* Pre code */
			for (int j668 = 0; j668 < 4; j668 = j668 + 1) {
				fRec158_tmp[j668] = fRec158_perm[j668];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec158[i] = fConst32 * (fRec158[i - 1] + (fRec159[i] - fRec159[i - 1]));
			}
			/* Post code */
			for (int j669 = 0; j669 < 4; j669 = j669 + 1) {
				fRec158_perm[j669] = fRec158_tmp[vsize + j669];
			}
			/* Recursive loop 633 */
			/* Pre code */
			for (int j678 = 0; j678 < 4; j678 = j678 + 1) {
				fRec162_tmp[j678] = fRec162_perm[j678];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec162[i] = fConst5 * (fRec162[i - 1] + (fRec163[i] - fRec163[i - 1]));
			}
			/* Post code */
			for (int j679 = 0; j679 < 4; j679 = j679 + 1) {
				fRec162_perm[j679] = fRec162_tmp[vsize + j679];
			}
			/* Recursive loop 634 */
			/* Pre code */
			for (int j688 = 0; j688 < 4; j688 = j688 + 1) {
				fRec165_tmp[j688] = fRec165_perm[j688];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec165[i] = fConst5 * (fRec165[i - 1] + (fRec166[i] - fRec166[i - 1]));
			}
			/* Post code */
			for (int j689 = 0; j689 < 4; j689 = j689 + 1) {
				fRec165_perm[j689] = fRec165_tmp[vsize + j689];
			}
			/* Recursive loop 635 */
			/* Pre code */
			for (int j698 = 0; j698 < 4; j698 = j698 + 1) {
				fRec168_tmp[j698] = fRec168_perm[j698];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec168[i] = fConst5 * (fRec168[i - 1] + (fRec169[i] - fRec169[i - 1]));
			}
			/* Post code */
			for (int j699 = 0; j699 < 4; j699 = j699 + 1) {
				fRec168_perm[j699] = fRec168_tmp[vsize + j699];
			}
			/* Recursive loop 636 */
			/* Pre code */
			for (int j708 = 0; j708 < 4; j708 = j708 + 1) {
				fRec171_tmp[j708] = fRec171_perm[j708];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec171[i] = fConst5 * (fRec171[i - 1] + (fRec172[i] - fRec172[i - 1]));
			}
			/* Post code */
			for (int j709 = 0; j709 < 4; j709 = j709 + 1) {
				fRec171_perm[j709] = fRec171_tmp[vsize + j709];
			}
			/* Recursive loop 637 */
			/* Pre code */
			for (int j712 = 0; j712 < 4; j712 = j712 + 1) {
				fRec175_tmp[j712] = fRec175_perm[j712];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec175[i] = fRec175[i - 1] + fConst35 * (2.0f * fYec121[i - 1] + square_polyblep_precalc(fZec172[i], 0.5f * fYec98[i - 1], 0.5f * fYec98[i - 2], fZec37[i]) - fRec175[i - 1]);
			}
			/* Post code */
			for (int j713 = 0; j713 < 4; j713 = j713 + 1) {
				fRec175_perm[j713] = fRec175_tmp[vsize + j713];
			}
			/* Recursive loop 638 */
			/* Pre code */
			for (int j718 = 0; j718 < 4; j718 = j718 + 1) {
				fRec177_tmp[j718] = fRec177_perm[j718];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec177[i] = fRec177[i - 1] + fConst35 * (2.0f * fYec122[i - 1] + square_polyblep_precalc(fZec174[i], 0.5f * fYec101[i - 1], 0.5f * fYec101[i - 2], fZec44[i]) - fRec177[i - 1]);
			}
			/* Post code */
			for (int j719 = 0; j719 < 4; j719 = j719 + 1) {
				fRec177_perm[j719] = fRec177_tmp[vsize + j719];
			}
			/* Recursive loop 639 */
			/* Pre code */
			for (int j724 = 0; j724 < 4; j724 = j724 + 1) {
				fRec179_tmp[j724] = fRec179_perm[j724];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec179[i] = fRec179[i - 1] + fConst35 * (2.0f * fYec123[i - 1] + square_polyblep_precalc(fZec176[i], 0.5f * fYec104[i - 1], 0.5f * fYec104[i - 2], fZec51[i]) - fRec179[i - 1]);
			}
			/* Post code */
			for (int j725 = 0; j725 < 4; j725 = j725 + 1) {
				fRec179_perm[j725] = fRec179_tmp[vsize + j725];
			}
			/* Recursive loop 640 */
			/* Pre code */
			for (int j730 = 0; j730 < 4; j730 = j730 + 1) {
				fRec181_tmp[j730] = fRec181_perm[j730];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec181[i] = fRec181[i - 1] + fConst35 * (2.0f * fYec124[i - 1] + square_polyblep_precalc(fZec178[i], 0.5f * fYec107[i - 1], 0.5f * fYec107[i - 2], fZec58[i]) - fRec181[i - 1]);
			}
			/* Post code */
			for (int j731 = 0; j731 < 4; j731 = j731 + 1) {
				fRec181_perm[j731] = fRec181_tmp[vsize + j731];
			}
			/* Recursive loop 641 */
			/* Pre code */
			for (int j736 = 0; j736 < 4; j736 = j736 + 1) {
				fRec183_tmp[j736] = fRec183_perm[j736];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec183[i] = fRec183[i - 1] + fConst36 * (2.0f * fYec125[i - 1] + square_polyblep_precalc(fZec180[i], 0.5f * fYec110[i - 1], 0.5f * fYec110[i - 2], fZec65[i]) - fRec183[i - 1]);
			}
			/* Post code */
			for (int j737 = 0; j737 < 4; j737 = j737 + 1) {
				fRec183_perm[j737] = fRec183_tmp[vsize + j737];
			}
			/* Recursive loop 642 */
			/* Pre code */
			for (int j746 = 0; j746 < 4; j746 = j746 + 1) {
				fRec185_tmp[j746] = fRec185_perm[j746];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec185[i] = fRec185[i - 1] + fConst36 * (2.0f * fYec127[i - 1] + square_polyblep_precalc(fZec186[i], 0.5f * fYec126[i - 1], 0.5f * fYec126[i - 2], fZec72[i]) - fRec185[i - 1]);
			}
			/* Post code */
			for (int j747 = 0; j747 < 4; j747 = j747 + 1) {
				fRec185_perm[j747] = fRec185_tmp[vsize + j747];
			}
			/* Recursive loop 643 */
			/* Pre code */
			for (int j758 = 0; j758 < 4; j758 = j758 + 1) {
				fRec187_tmp[j758] = fRec187_perm[j758];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec187[i] = fConst5 * (fRec187[i - 1] + (fRec188[i] - fRec188[i - 1]));
			}
			/* Post code */
			for (int j759 = 0; j759 < 4; j759 = j759 + 1) {
				fRec187_perm[j759] = fRec187_tmp[vsize + j759];
			}
			/* Recursive loop 644 */
			/* Pre code */
			for (int j766 = 0; j766 < 4; j766 = j766 + 1) {
				fRec191_tmp[j766] = fRec191_perm[j766];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec191[i] = fRec191[i - 1] + fConst36 * (2.0f * fYec131[i - 1] + square_polyblep_precalc(fZec188[i], 0.5f * fYec130[i - 1], 0.5f * fYec130[i - 2], fZec79[i]) - fRec191[i - 1]);
			}
			/* Post code */
			for (int j767 = 0; j767 < 4; j767 = j767 + 1) {
				fRec191_perm[j767] = fRec191_tmp[vsize + j767];
			}
			/* Vectorizable loop 645 */
			/* Pre code */
			for (int j786 = 0; j786 < 4; j786 = j786 + 1) {
				fYec136_tmp[j786] = fYec136_perm[j786];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec136[i] = float(fZec240[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j787 = 0; j787 < 4; j787 = j787 + 1) {
				fYec136_perm[j787] = fYec136_tmp[vsize + j787];
			}
			/* Vectorizable loop 646 */
			/* Pre code */
			for (int j804 = 0; j804 < 4; j804 = j804 + 1) {
				fYec140_tmp[j804] = fYec140_perm[j804];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec140[i] = float(fZec243[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j805 = 0; j805 < 4; j805 = j805 + 1) {
				fYec140_perm[j805] = fYec140_tmp[vsize + j805];
			}
			/* Vectorizable loop 647 */
			/* Pre code */
			for (int j822 = 0; j822 < 4; j822 = j822 + 1) {
				fYec144_tmp[j822] = fYec144_perm[j822];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec144[i] = float(fZec246[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j823 = 0; j823 < 4; j823 = j823 + 1) {
				fYec144_perm[j823] = fYec144_tmp[vsize + j823];
			}
			/* Vectorizable loop 648 */
			/* Pre code */
			for (int j840 = 0; j840 < 4; j840 = j840 + 1) {
				fYec148_tmp[j840] = fYec148_perm[j840];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec148[i] = float(fZec249[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j841 = 0; j841 < 4; j841 = j841 + 1) {
				fYec148_perm[j841] = fYec148_tmp[vsize + j841];
			}
			/* Vectorizable loop 649 */
			/* Pre code */
			for (int j858 = 0; j858 < 4; j858 = j858 + 1) {
				fYec152_tmp[j858] = fYec152_perm[j858];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec152[i] = float(fZec252[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j859 = 0; j859 < 4; j859 = j859 + 1) {
				fYec152_perm[j859] = fYec152_tmp[vsize + j859];
			}
			/* Vectorizable loop 650 */
			/* Pre code */
			for (int j876 = 0; j876 < 4; j876 = j876 + 1) {
				fYec156_tmp[j876] = fYec156_perm[j876];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec156[i] = float(fZec255[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j877 = 0; j877 < 4; j877 = j877 + 1) {
				fYec156_perm[j877] = fYec156_tmp[vsize + j877];
			}
			/* Vectorizable loop 651 */
			/* Pre code */
			for (int j894 = 0; j894 < 4; j894 = j894 + 1) {
				fYec160_tmp[j894] = fYec160_perm[j894];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec160[i] = float(fZec258[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j895 = 0; j895 < 4; j895 = j895 + 1) {
				fYec160_perm[j895] = fYec160_tmp[vsize + j895];
			}
			/* Vectorizable loop 652 */
			/* Pre code */
			for (int j908 = 0; j908 < 4; j908 = j908 + 1) {
				fYec163_tmp[j908] = fYec163_perm[j908];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec163[i] = float(fZec260[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j909 = 0; j909 < 4; j909 = j909 + 1) {
				fYec163_perm[j909] = fYec163_tmp[vsize + j909];
			}
			/* Vectorizable loop 653 */
			/* Pre code */
			for (int j922 = 0; j922 < 4; j922 = j922 + 1) {
				fYec166_tmp[j922] = fYec166_perm[j922];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec166[i] = float(fZec262[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j923 = 0; j923 < 4; j923 = j923 + 1) {
				fYec166_perm[j923] = fYec166_tmp[vsize + j923];
			}
			/* Vectorizable loop 654 */
			/* Pre code */
			for (int j936 = 0; j936 < 4; j936 = j936 + 1) {
				fYec169_tmp[j936] = fYec169_perm[j936];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec169[i] = float(fZec264[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j937 = 0; j937 < 4; j937 = j937 + 1) {
				fYec169_perm[j937] = fYec169_tmp[vsize + j937];
			}
			/* Vectorizable loop 655 */
			/* Pre code */
			for (int j950 = 0; j950 < 4; j950 = j950 + 1) {
				fYec172_tmp[j950] = fYec172_perm[j950];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec172[i] = float(fZec266[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j951 = 0; j951 < 4; j951 = j951 + 1) {
				fYec172_perm[j951] = fYec172_tmp[vsize + j951];
			}
			/* Vectorizable loop 656 */
			/* Pre code */
			for (int j964 = 0; j964 < 4; j964 = j964 + 1) {
				fYec175_tmp[j964] = fYec175_perm[j964];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec175[i] = float(fZec268[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j965 = 0; j965 < 4; j965 = j965 + 1) {
				fYec175_perm[j965] = fYec175_tmp[vsize + j965];
			}
			/* Vectorizable loop 657 */
			/* Pre code */
			for (int j970 = 0; j970 < 4; j970 = j970 + 1) {
				fYec176_tmp[j970] = fYec176_perm[j970];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec176[i] = float(fZec239[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j971 = 0; j971 < 4; j971 = j971 + 1) {
				fYec176_perm[j971] = fYec176_tmp[vsize + j971];
			}
			/* Vectorizable loop 658 */
			/* Pre code */
			for (int j976 = 0; j976 < 4; j976 = j976 + 1) {
				fYec177_tmp[j976] = fYec177_perm[j976];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec177[i] = float(fZec242[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j977 = 0; j977 < 4; j977 = j977 + 1) {
				fYec177_perm[j977] = fYec177_tmp[vsize + j977];
			}
			/* Vectorizable loop 659 */
			/* Pre code */
			for (int j982 = 0; j982 < 4; j982 = j982 + 1) {
				fYec178_tmp[j982] = fYec178_perm[j982];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec178[i] = float(fZec245[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j983 = 0; j983 < 4; j983 = j983 + 1) {
				fYec178_perm[j983] = fYec178_tmp[vsize + j983];
			}
			/* Vectorizable loop 660 */
			/* Pre code */
			for (int j988 = 0; j988 < 4; j988 = j988 + 1) {
				fYec179_tmp[j988] = fYec179_perm[j988];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec179[i] = float(fZec248[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j989 = 0; j989 < 4; j989 = j989 + 1) {
				fYec179_perm[j989] = fYec179_tmp[vsize + j989];
			}
			/* Vectorizable loop 661 */
			/* Pre code */
			for (int j994 = 0; j994 < 4; j994 = j994 + 1) {
				fYec180_tmp[j994] = fYec180_perm[j994];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec180[i] = float(fZec251[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j995 = 0; j995 < 4; j995 = j995 + 1) {
				fYec180_perm[j995] = fYec180_tmp[vsize + j995];
			}
			/* Vectorizable loop 662 */
			/* Pre code */
			for (int j1000 = 0; j1000 < 4; j1000 = j1000 + 1) {
				fYec181_tmp[j1000] = fYec181_perm[j1000];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec181[i] = float(fZec254[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1001 = 0; j1001 < 4; j1001 = j1001 + 1) {
				fYec181_perm[j1001] = fYec181_tmp[vsize + j1001];
			}
			/* Vectorizable loop 663 */
			/* Pre code */
			for (int j1006 = 0; j1006 < 4; j1006 = j1006 + 1) {
				fYec182_tmp[j1006] = fYec182_perm[j1006];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec182[i] = float(fZec257[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1007 = 0; j1007 < 4; j1007 = j1007 + 1) {
				fYec182_perm[j1007] = fYec182_tmp[vsize + j1007];
			}
			/* Vectorizable loop 664 */
			/* Pre code */
			for (int j1012 = 0; j1012 < 4; j1012 = j1012 + 1) {
				fYec183_tmp[j1012] = fYec183_perm[j1012];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec183[i] = float(fZec259[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1013 = 0; j1013 < 4; j1013 = j1013 + 1) {
				fYec183_perm[j1013] = fYec183_tmp[vsize + j1013];
			}
			/* Vectorizable loop 665 */
			/* Pre code */
			for (int j1018 = 0; j1018 < 4; j1018 = j1018 + 1) {
				fYec184_tmp[j1018] = fYec184_perm[j1018];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec184[i] = float(fZec261[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1019 = 0; j1019 < 4; j1019 = j1019 + 1) {
				fYec184_perm[j1019] = fYec184_tmp[vsize + j1019];
			}
			/* Vectorizable loop 666 */
			/* Pre code */
			for (int j1024 = 0; j1024 < 4; j1024 = j1024 + 1) {
				fYec185_tmp[j1024] = fYec185_perm[j1024];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec185[i] = float(fZec263[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1025 = 0; j1025 < 4; j1025 = j1025 + 1) {
				fYec185_perm[j1025] = fYec185_tmp[vsize + j1025];
			}
			/* Vectorizable loop 667 */
			/* Pre code */
			for (int j1030 = 0; j1030 < 4; j1030 = j1030 + 1) {
				fYec186_tmp[j1030] = fYec186_perm[j1030];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec186[i] = float(fZec265[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1031 = 0; j1031 < 4; j1031 = j1031 + 1) {
				fYec186_perm[j1031] = fYec186_tmp[vsize + j1031];
			}
			/* Vectorizable loop 668 */
			/* Pre code */
			for (int j1036 = 0; j1036 < 4; j1036 = j1036 + 1) {
				fYec187_tmp[j1036] = fYec187_perm[j1036];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec187[i] = float(fZec267[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1037 = 0; j1037 < 4; j1037 = j1037 + 1) {
				fYec187_perm[j1037] = fYec187_tmp[vsize + j1037];
			}
			/* Recursive loop 669 */
			/* Pre code */
			for (int j1046 = 0; j1046 < 4; j1046 = j1046 + 1) {
				fRec272_tmp[j1046] = fRec272_perm[j1046];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec272[i] = fConst32 * (fRec272[i - 1] + (fRec273[i] - fRec273[i - 1]));
			}
			/* Post code */
			for (int j1047 = 0; j1047 < 4; j1047 = j1047 + 1) {
				fRec272_perm[j1047] = fRec272_tmp[vsize + j1047];
			}
			/* Recursive loop 670 */
			/* Pre code */
			for (int j1052 = 0; j1052 < 4; j1052 = j1052 + 1) {
				fRec274_tmp[j1052] = fRec274_perm[j1052];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec274[i] = fConst32 * (fRec274[i - 1] + (fRec275[i] - fRec275[i - 1]));
			}
			/* Post code */
			for (int j1053 = 0; j1053 < 4; j1053 = j1053 + 1) {
				fRec274_perm[j1053] = fRec274_tmp[vsize + j1053];
			}
			/* Recursive loop 671 */
			/* Pre code */
			for (int j1058 = 0; j1058 < 4; j1058 = j1058 + 1) {
				fRec276_tmp[j1058] = fRec276_perm[j1058];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec276[i] = fConst32 * (fRec276[i - 1] + (fRec277[i] - fRec277[i - 1]));
			}
			/* Post code */
			for (int j1059 = 0; j1059 < 4; j1059 = j1059 + 1) {
				fRec276_perm[j1059] = fRec276_tmp[vsize + j1059];
			}
			/* Recursive loop 672 */
			/* Pre code */
			for (int j1064 = 0; j1064 < 4; j1064 = j1064 + 1) {
				fRec278_tmp[j1064] = fRec278_perm[j1064];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec278[i] = fConst32 * (fRec278[i - 1] + (fRec279[i] - fRec279[i - 1]));
			}
			/* Post code */
			for (int j1065 = 0; j1065 < 4; j1065 = j1065 + 1) {
				fRec278_perm[j1065] = fRec278_tmp[vsize + j1065];
			}
			/* Recursive loop 673 */
			/* Pre code */
			for (int j1070 = 0; j1070 < 4; j1070 = j1070 + 1) {
				fRec280_tmp[j1070] = fRec280_perm[j1070];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec280[i] = fConst32 * (fRec280[i - 1] + (fRec281[i] - fRec281[i - 1]));
			}
			/* Post code */
			for (int j1071 = 0; j1071 < 4; j1071 = j1071 + 1) {
				fRec280_perm[j1071] = fRec280_tmp[vsize + j1071];
			}
			/* Recursive loop 674 */
			/* Pre code */
			for (int j1076 = 0; j1076 < 4; j1076 = j1076 + 1) {
				fRec282_tmp[j1076] = fRec282_perm[j1076];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec282[i] = fConst32 * (fRec282[i - 1] + (fRec283[i] - fRec283[i - 1]));
			}
			/* Post code */
			for (int j1077 = 0; j1077 < 4; j1077 = j1077 + 1) {
				fRec282_perm[j1077] = fRec282_tmp[vsize + j1077];
			}
			/* Recursive loop 675 */
			/* Pre code */
			for (int j1082 = 0; j1082 < 4; j1082 = j1082 + 1) {
				fRec284_tmp[j1082] = fRec284_perm[j1082];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec284[i] = fConst32 * (fRec284[i - 1] + (fRec285[i] - fRec285[i - 1]));
			}
			/* Post code */
			for (int j1083 = 0; j1083 < 4; j1083 = j1083 + 1) {
				fRec284_perm[j1083] = fRec284_tmp[vsize + j1083];
			}
			/* Vectorizable loop 676 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec160[i] = 0.25f * (fZec159[i] + fRec90[i] * fZec122[i] + fRec139[i] * fZec121[i] + fRec138[i] * fZec120[i] + fRec137[i] * fZec119[i] + fRec136[i] * fZec118[i] + fRec135[i] * fZec117[i] + fRec134[i] * fZec116[i] + fRec133[i] * fZec115[i] + fRec132[i] * fZec114[i] + fRec131[i] * fZec113[i] + fRec130[i] * fZec112[i] + fRec129[i] * fZec111[i] + fZec110[i] + fZec108[i] + fZec106[i] + fZec104[i] + fZec102[i] + fZec100[i] + fZec98[i] + fZec96[i] + fZec94[i] + fZec92[i] + fZec90[i] + fZec88[i] + fZec86[i]);
			}
			/* Vectorizable loop 677 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec166[i] = fSlow80 * fZec165[i] + fRec90[i] + fRec91[i] + fRec93[i] + fRec95[i] + fRec97[i] + fRec99[i] + fRec101[i] + fRec103[i] + fRec105[i] + fRec107[i] + fRec109[i] + fRec111[i] + fRec113[i] + fRec115[i] + fRec117[i] + fRec119[i] + fRec121[i] + fRec123[i] + fRec125[i] + fRec127[i] + 2.0f * (fRec129[i] + fRec130[i] + fRec131[i] + fRec132[i] + fRec133[i] + fRec134[i] + fRec135[i] + fZec161[i]);
			}
			/* Recursive loop 678 */
			/* Pre code */
			for (int j714 = 0; j714 < 4; j714 = j714 + 1) {
				fRec174_tmp[j714] = fRec174_perm[j714];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec174[i] = fConst5 * (fRec174[i - 1] + (fRec175[i] - fRec175[i - 1]));
			}
			/* Post code */
			for (int j715 = 0; j715 < 4; j715 = j715 + 1) {
				fRec174_perm[j715] = fRec174_tmp[vsize + j715];
			}
			/* Recursive loop 679 */
			/* Pre code */
			for (int j720 = 0; j720 < 4; j720 = j720 + 1) {
				fRec176_tmp[j720] = fRec176_perm[j720];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec176[i] = fConst5 * (fRec176[i - 1] + (fRec177[i] - fRec177[i - 1]));
			}
			/* Post code */
			for (int j721 = 0; j721 < 4; j721 = j721 + 1) {
				fRec176_perm[j721] = fRec176_tmp[vsize + j721];
			}
			/* Recursive loop 680 */
			/* Pre code */
			for (int j726 = 0; j726 < 4; j726 = j726 + 1) {
				fRec178_tmp[j726] = fRec178_perm[j726];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec178[i] = fConst5 * (fRec178[i - 1] + (fRec179[i] - fRec179[i - 1]));
			}
			/* Post code */
			for (int j727 = 0; j727 < 4; j727 = j727 + 1) {
				fRec178_perm[j727] = fRec178_tmp[vsize + j727];
			}
			/* Recursive loop 681 */
			/* Pre code */
			for (int j732 = 0; j732 < 4; j732 = j732 + 1) {
				fRec180_tmp[j732] = fRec180_perm[j732];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec180[i] = fConst5 * (fRec180[i - 1] + (fRec181[i] - fRec181[i - 1]));
			}
			/* Post code */
			for (int j733 = 0; j733 < 4; j733 = j733 + 1) {
				fRec180_perm[j733] = fRec180_tmp[vsize + j733];
			}
			/* Recursive loop 682 */
			/* Pre code */
			for (int j738 = 0; j738 < 4; j738 = j738 + 1) {
				fRec182_tmp[j738] = fRec182_perm[j738];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec182[i] = fConst5 * (fRec182[i - 1] + (fRec183[i] - fRec183[i - 1]));
			}
			/* Post code */
			for (int j739 = 0; j739 < 4; j739 = j739 + 1) {
				fRec182_perm[j739] = fRec182_tmp[vsize + j739];
			}
			/* Recursive loop 683 */
			/* Pre code */
			for (int j748 = 0; j748 < 4; j748 = j748 + 1) {
				fRec184_tmp[j748] = fRec184_perm[j748];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec184[i] = fConst5 * (fRec184[i - 1] + (fRec185[i] - fRec185[i - 1]));
			}
			/* Post code */
			for (int j749 = 0; j749 < 4; j749 = j749 + 1) {
				fRec184_perm[j749] = fRec184_tmp[vsize + j749];
			}
			/* Recursive loop 684 */
			/* Pre code */
			for (int j768 = 0; j768 < 4; j768 = j768 + 1) {
				fRec190_tmp[j768] = fRec190_perm[j768];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec190[i] = fConst5 * (fRec190[i - 1] + (fRec191[i] - fRec191[i - 1]));
			}
			/* Post code */
			for (int j769 = 0; j769 < 4; j769 = j769 + 1) {
				fRec190_perm[j769] = fRec190_tmp[vsize + j769];
			}
			/* Vectorizable loop 685 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec235[i] = fRec113[i] + fRec115[i] + fRec117[i] + fRec119[i] + fRec121[i] + fRec123[i] + fRec127[i] + fRec125[i] + fZec165[i];
			}
			/* Recursive loop 686 */
			/* Pre code */
			for (int j788 = 0; j788 < 4; j788 = j788 + 1) {
				fRec194_tmp[j788] = fRec194_perm[j788];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec194[i] = fRec194[i - 1] + fConst37 * (2.0f * fYec136[i - 1] + square_polyblep_precalc(fZec240[i], 0.5f * fYec135[i - 1], 0.5f * fYec135[i - 2], fZec30[i]) - fRec194[i - 1]);
			}
			/* Post code */
			for (int j789 = 0; j789 < 4; j789 = j789 + 1) {
				fRec194_perm[j789] = fRec194_tmp[vsize + j789];
			}
			/* Recursive loop 687 */
			/* Pre code */
			for (int j806 = 0; j806 < 4; j806 = j806 + 1) {
				fRec199_tmp[j806] = fRec199_perm[j806];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec199[i] = fRec199[i - 1] + fConst37 * (2.0f * fYec140[i - 1] + square_polyblep_precalc(fZec243[i], 0.5f * fYec139[i - 1], 0.5f * fYec139[i - 2], fZec24[i]) - fRec199[i - 1]);
			}
			/* Post code */
			for (int j807 = 0; j807 < 4; j807 = j807 + 1) {
				fRec199_perm[j807] = fRec199_tmp[vsize + j807];
			}
			/* Recursive loop 688 */
			/* Pre code */
			for (int j824 = 0; j824 < 4; j824 = j824 + 1) {
				fRec204_tmp[j824] = fRec204_perm[j824];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec204[i] = fRec204[i - 1] + fConst37 * (2.0f * fYec144[i - 1] + square_polyblep_precalc(fZec246[i], 0.5f * fYec143[i - 1], 0.5f * fYec143[i - 2], fZec18[i]) - fRec204[i - 1]);
			}
			/* Post code */
			for (int j825 = 0; j825 < 4; j825 = j825 + 1) {
				fRec204_perm[j825] = fRec204_tmp[vsize + j825];
			}
			/* Recursive loop 689 */
			/* Pre code */
			for (int j842 = 0; j842 < 4; j842 = j842 + 1) {
				fRec209_tmp[j842] = fRec209_perm[j842];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec209[i] = fRec209[i - 1] + fConst37 * (2.0f * fYec148[i - 1] + square_polyblep_precalc(fZec249[i], 0.5f * fYec147[i - 1], 0.5f * fYec147[i - 2], fZec12[i]) - fRec209[i - 1]);
			}
			/* Post code */
			for (int j843 = 0; j843 < 4; j843 = j843 + 1) {
				fRec209_perm[j843] = fRec209_tmp[vsize + j843];
			}
			/* Recursive loop 690 */
			/* Pre code */
			for (int j860 = 0; j860 < 4; j860 = j860 + 1) {
				fRec214_tmp[j860] = fRec214_perm[j860];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec214[i] = fRec214[i - 1] + fConst37 * (2.0f * fYec152[i - 1] + square_polyblep_precalc(fZec252[i], 0.5f * fYec151[i - 1], 0.5f * fYec151[i - 2], fZec6[i]) - fRec214[i - 1]);
			}
			/* Post code */
			for (int j861 = 0; j861 < 4; j861 = j861 + 1) {
				fRec214_perm[j861] = fRec214_tmp[vsize + j861];
			}
			/* Recursive loop 691 */
			/* Pre code */
			for (int j878 = 0; j878 < 4; j878 = j878 + 1) {
				fRec219_tmp[j878] = fRec219_perm[j878];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec219[i] = fRec219[i - 1] + fConst37 * (2.0f * fYec156[i - 1] + square_polyblep_precalc(fZec255[i], 0.5f * fYec155[i - 1], 0.5f * fYec155[i - 2], fZec79[i]) - fRec219[i - 1]);
			}
			/* Post code */
			for (int j879 = 0; j879 < 4; j879 = j879 + 1) {
				fRec219_perm[j879] = fRec219_tmp[vsize + j879];
			}
			/* Recursive loop 692 */
			/* Pre code */
			for (int j896 = 0; j896 < 4; j896 = j896 + 1) {
				fRec224_tmp[j896] = fRec224_perm[j896];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec224[i] = fRec224[i - 1] + fConst37 * (2.0f * fYec160[i - 1] + square_polyblep_precalc(fZec258[i], 0.5f * fYec159[i - 1], 0.5f * fYec159[i - 2], fZec72[i]) - fRec224[i - 1]);
			}
			/* Post code */
			for (int j897 = 0; j897 < 4; j897 = j897 + 1) {
				fRec224_perm[j897] = fRec224_tmp[vsize + j897];
			}
			/* Recursive loop 693 */
			/* Pre code */
			for (int j910 = 0; j910 < 4; j910 = j910 + 1) {
				fRec229_tmp[j910] = fRec229_perm[j910];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec229[i] = fRec229[i - 1] + fConst37 * (2.0f * fYec163[i - 1] + square_polyblep_precalc(fZec260[i], 0.5f * fYec162[i - 1], 0.5f * fYec162[i - 2], fZec65[i]) - fRec229[i - 1]);
			}
			/* Post code */
			for (int j911 = 0; j911 < 4; j911 = j911 + 1) {
				fRec229_perm[j911] = fRec229_tmp[vsize + j911];
			}
			/* Recursive loop 694 */
			/* Pre code */
			for (int j924 = 0; j924 < 4; j924 = j924 + 1) {
				fRec233_tmp[j924] = fRec233_perm[j924];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec233[i] = fRec233[i - 1] + fConst39 * (2.0f * fYec166[i - 1] + square_polyblep_precalc(fZec262[i], 0.5f * fYec165[i - 1], 0.5f * fYec165[i - 2], fZec58[i]) - fRec233[i - 1]);
			}
			/* Post code */
			for (int j925 = 0; j925 < 4; j925 = j925 + 1) {
				fRec233_perm[j925] = fRec233_tmp[vsize + j925];
			}
			/* Recursive loop 695 */
			/* Pre code */
			for (int j938 = 0; j938 < 4; j938 = j938 + 1) {
				fRec237_tmp[j938] = fRec237_perm[j938];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec237[i] = fRec237[i - 1] + fConst39 * (2.0f * fYec169[i - 1] + square_polyblep_precalc(fZec264[i], 0.5f * fYec168[i - 1], 0.5f * fYec168[i - 2], fZec51[i]) - fRec237[i - 1]);
			}
			/* Post code */
			for (int j939 = 0; j939 < 4; j939 = j939 + 1) {
				fRec237_perm[j939] = fRec237_tmp[vsize + j939];
			}
			/* Recursive loop 696 */
			/* Pre code */
			for (int j952 = 0; j952 < 4; j952 = j952 + 1) {
				fRec241_tmp[j952] = fRec241_perm[j952];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec241[i] = fRec241[i - 1] + fConst39 * (2.0f * fYec172[i - 1] + square_polyblep_precalc(fZec266[i], 0.5f * fYec171[i - 1], 0.5f * fYec171[i - 2], fZec44[i]) - fRec241[i - 1]);
			}
			/* Post code */
			for (int j953 = 0; j953 < 4; j953 = j953 + 1) {
				fRec241_perm[j953] = fRec241_tmp[vsize + j953];
			}
			/* Recursive loop 697 */
			/* Pre code */
			for (int j966 = 0; j966 < 4; j966 = j966 + 1) {
				fRec245_tmp[j966] = fRec245_perm[j966];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec245[i] = fRec245[i - 1] + fConst39 * (2.0f * fYec175[i - 1] + square_polyblep_precalc(fZec268[i], 0.5f * fYec174[i - 1], 0.5f * fYec174[i - 2], fZec37[i]) - fRec245[i - 1]);
			}
			/* Post code */
			for (int j967 = 0; j967 < 4; j967 = j967 + 1) {
				fRec245_perm[j967] = fRec245_tmp[vsize + j967];
			}
			/* Recursive loop 698 */
			/* Pre code */
			for (int j972 = 0; j972 < 4; j972 = j972 + 1) {
				fRec249_tmp[j972] = fRec249_perm[j972];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec249[i] = fRec249[i - 1] + fConst39 * (2.0f * fYec176[i - 1] + square_polyblep_precalc(fZec239[i], 0.5f * fYec134[i - 1], 0.5f * fYec134[i - 2], fZec30[i]) - fRec249[i - 1]);
			}
			/* Post code */
			for (int j973 = 0; j973 < 4; j973 = j973 + 1) {
				fRec249_perm[j973] = fRec249_tmp[vsize + j973];
			}
			/* Recursive loop 699 */
			/* Pre code */
			for (int j978 = 0; j978 < 4; j978 = j978 + 1) {
				fRec251_tmp[j978] = fRec251_perm[j978];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec251[i] = fRec251[i - 1] + fConst39 * (2.0f * fYec177[i - 1] + square_polyblep_precalc(fZec242[i], 0.5f * fYec138[i - 1], 0.5f * fYec138[i - 2], fZec24[i]) - fRec251[i - 1]);
			}
			/* Post code */
			for (int j979 = 0; j979 < 4; j979 = j979 + 1) {
				fRec251_perm[j979] = fRec251_tmp[vsize + j979];
			}
			/* Recursive loop 700 */
			/* Pre code */
			for (int j984 = 0; j984 < 4; j984 = j984 + 1) {
				fRec253_tmp[j984] = fRec253_perm[j984];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec253[i] = fRec253[i - 1] + fConst39 * (2.0f * fYec178[i - 1] + square_polyblep_precalc(fZec245[i], 0.5f * fYec142[i - 1], 0.5f * fYec142[i - 2], fZec18[i]) - fRec253[i - 1]);
			}
			/* Post code */
			for (int j985 = 0; j985 < 4; j985 = j985 + 1) {
				fRec253_perm[j985] = fRec253_tmp[vsize + j985];
			}
			/* Recursive loop 701 */
			/* Pre code */
			for (int j990 = 0; j990 < 4; j990 = j990 + 1) {
				fRec255_tmp[j990] = fRec255_perm[j990];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec255[i] = fRec255[i - 1] + fConst39 * (2.0f * fYec179[i - 1] + square_polyblep_precalc(fZec248[i], 0.5f * fYec146[i - 1], 0.5f * fYec146[i - 2], fZec12[i]) - fRec255[i - 1]);
			}
			/* Post code */
			for (int j991 = 0; j991 < 4; j991 = j991 + 1) {
				fRec255_perm[j991] = fRec255_tmp[vsize + j991];
			}
			/* Recursive loop 702 */
			/* Pre code */
			for (int j996 = 0; j996 < 4; j996 = j996 + 1) {
				fRec257_tmp[j996] = fRec257_perm[j996];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec257[i] = fRec257[i - 1] + fConst41 * (2.0f * fYec180[i - 1] + square_polyblep_precalc(fZec251[i], 0.5f * fYec150[i - 1], 0.5f * fYec150[i - 2], fZec6[i]) - fRec257[i - 1]);
			}
			/* Post code */
			for (int j997 = 0; j997 < 4; j997 = j997 + 1) {
				fRec257_perm[j997] = fRec257_tmp[vsize + j997];
			}
			/* Recursive loop 703 */
			/* Pre code */
			for (int j1002 = 0; j1002 < 4; j1002 = j1002 + 1) {
				fRec259_tmp[j1002] = fRec259_perm[j1002];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec259[i] = fRec259[i - 1] + fConst41 * (2.0f * fYec181[i - 1] + square_polyblep_precalc(fZec254[i], 0.5f * fYec154[i - 1], 0.5f * fYec154[i - 2], fZec79[i]) - fRec259[i - 1]);
			}
			/* Post code */
			for (int j1003 = 0; j1003 < 4; j1003 = j1003 + 1) {
				fRec259_perm[j1003] = fRec259_tmp[vsize + j1003];
			}
			/* Recursive loop 704 */
			/* Pre code */
			for (int j1008 = 0; j1008 < 4; j1008 = j1008 + 1) {
				fRec261_tmp[j1008] = fRec261_perm[j1008];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec261[i] = fRec261[i - 1] + fConst41 * (2.0f * fYec182[i - 1] + square_polyblep_precalc(fZec257[i], 0.5f * fYec158[i - 1], 0.5f * fYec158[i - 2], fZec72[i]) - fRec261[i - 1]);
			}
			/* Post code */
			for (int j1009 = 0; j1009 < 4; j1009 = j1009 + 1) {
				fRec261_perm[j1009] = fRec261_tmp[vsize + j1009];
			}
			/* Recursive loop 705 */
			/* Pre code */
			for (int j1014 = 0; j1014 < 4; j1014 = j1014 + 1) {
				fRec263_tmp[j1014] = fRec263_perm[j1014];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec263[i] = fRec263[i - 1] + fConst41 * (2.0f * fYec183[i - 1] + square_polyblep_precalc(fZec259[i], 0.5f * fYec161[i - 1], 0.5f * fYec161[i - 2], fZec65[i]) - fRec263[i - 1]);
			}
			/* Post code */
			for (int j1015 = 0; j1015 < 4; j1015 = j1015 + 1) {
				fRec263_perm[j1015] = fRec263_tmp[vsize + j1015];
			}
			/* Recursive loop 706 */
			/* Pre code */
			for (int j1020 = 0; j1020 < 4; j1020 = j1020 + 1) {
				fRec265_tmp[j1020] = fRec265_perm[j1020];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec265[i] = fRec265[i - 1] + fConst42 * (2.0f * fYec184[i - 1] + square_polyblep_precalc(fZec261[i], 0.5f * fYec164[i - 1], 0.5f * fYec164[i - 2], fZec58[i]) - fRec265[i - 1]);
			}
			/* Post code */
			for (int j1021 = 0; j1021 < 4; j1021 = j1021 + 1) {
				fRec265_perm[j1021] = fRec265_tmp[vsize + j1021];
			}
			/* Recursive loop 707 */
			/* Pre code */
			for (int j1026 = 0; j1026 < 4; j1026 = j1026 + 1) {
				fRec267_tmp[j1026] = fRec267_perm[j1026];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec267[i] = fRec267[i - 1] + fConst42 * (2.0f * fYec185[i - 1] + square_polyblep_precalc(fZec263[i], 0.5f * fYec167[i - 1], 0.5f * fYec167[i - 2], fZec51[i]) - fRec267[i - 1]);
			}
			/* Post code */
			for (int j1027 = 0; j1027 < 4; j1027 = j1027 + 1) {
				fRec267_perm[j1027] = fRec267_tmp[vsize + j1027];
			}
			/* Recursive loop 708 */
			/* Pre code */
			for (int j1032 = 0; j1032 < 4; j1032 = j1032 + 1) {
				fRec269_tmp[j1032] = fRec269_perm[j1032];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec269[i] = fRec269[i - 1] + fConst42 * (2.0f * fYec186[i - 1] + square_polyblep_precalc(fZec265[i], 0.5f * fYec170[i - 1], 0.5f * fYec170[i - 2], fZec44[i]) - fRec269[i - 1]);
			}
			/* Post code */
			for (int j1033 = 0; j1033 < 4; j1033 = j1033 + 1) {
				fRec269_perm[j1033] = fRec269_tmp[vsize + j1033];
			}
			/* Recursive loop 709 */
			/* Pre code */
			for (int j1038 = 0; j1038 < 4; j1038 = j1038 + 1) {
				fRec271_tmp[j1038] = fRec271_perm[j1038];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec271[i] = fRec271[i - 1] + fConst42 * (2.0f * fYec187[i - 1] + square_polyblep_precalc(fZec267[i], 0.5f * fYec173[i - 1], 0.5f * fYec173[i - 2], fZec37[i]) - fRec271[i - 1]);
			}
			/* Post code */
			for (int j1039 = 0; j1039 < 4; j1039 = j1039 + 1) {
				fRec271_perm[j1039] = fRec271_tmp[vsize + j1039];
			}
			/* Vectorizable loop 710 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec315[i] = fRec272[i] * fZec158[i] + fRec274[i] * fZec157[i] + fRec276[i] * fZec156[i] + fRec278[i] * fZec155[i] + fRec280[i] * fZec154[i] + fRec282[i] * fZec153[i] + fRec284[i] * fZec152[i] + fRec158[i] * fZec151[i] + fRec154[i] * fZec150[i] + fRec150[i] * fZec149[i] + fRec146[i] * fZec148[i] + fRec142[i] * fZec147[i] + fRec171[i] * fZec146[i] + fRec168[i] * fZec145[i] + fRec165[i] * fZec144[i] + fRec162[i] * fZec143[i] + fRec187[i] * fZec142[i];
			}
			/* Vectorizable loop 711 */
			/* Pre code */
			for (int j582 = 0; j582 < 4; j582 = j582 + 1) {
				fYec96_tmp[j582] = fYec96_perm[j582];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec96[i] = fZec166[i] - fZec160[i];
			}
			/* Post code */
			for (int j583 = 0; j583 < 4; j583 = j583 + 1) {
				fYec96_perm[j583] = fYec96_tmp[vsize + j583];
			}
			/* Vectorizable loop 712 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec236[i] = fRec90[i] + fRec91[i] + fRec93[i] + fRec95[i] + fRec97[i] + fRec99[i] + fRec101[i] + fRec103[i] + fRec105[i] + fRec107[i] + fRec109[i] + fRec111[i] + fZec235[i];
			}
			/* Recursive loop 713 */
			/* Pre code */
			for (int j790 = 0; j790 < 4; j790 = j790 + 1) {
				fRec193_tmp[j790] = fRec193_perm[j790];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec193[i] = fConst38 * (fRec193[i - 1] + (fRec194[i] - fRec194[i - 1]));
			}
			/* Post code */
			for (int j791 = 0; j791 < 4; j791 = j791 + 1) {
				fRec193_perm[j791] = fRec193_tmp[vsize + j791];
			}
			/* Recursive loop 714 */
			/* Pre code */
			for (int j808 = 0; j808 < 4; j808 = j808 + 1) {
				fRec198_tmp[j808] = fRec198_perm[j808];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec198[i] = fConst38 * (fRec198[i - 1] + (fRec199[i] - fRec199[i - 1]));
			}
			/* Post code */
			for (int j809 = 0; j809 < 4; j809 = j809 + 1) {
				fRec198_perm[j809] = fRec198_tmp[vsize + j809];
			}
			/* Recursive loop 715 */
			/* Pre code */
			for (int j826 = 0; j826 < 4; j826 = j826 + 1) {
				fRec203_tmp[j826] = fRec203_perm[j826];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec203[i] = fConst38 * (fRec203[i - 1] + (fRec204[i] - fRec204[i - 1]));
			}
			/* Post code */
			for (int j827 = 0; j827 < 4; j827 = j827 + 1) {
				fRec203_perm[j827] = fRec203_tmp[vsize + j827];
			}
			/* Recursive loop 716 */
			/* Pre code */
			for (int j844 = 0; j844 < 4; j844 = j844 + 1) {
				fRec208_tmp[j844] = fRec208_perm[j844];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec208[i] = fConst38 * (fRec208[i - 1] + (fRec209[i] - fRec209[i - 1]));
			}
			/* Post code */
			for (int j845 = 0; j845 < 4; j845 = j845 + 1) {
				fRec208_perm[j845] = fRec208_tmp[vsize + j845];
			}
			/* Recursive loop 717 */
			/* Pre code */
			for (int j862 = 0; j862 < 4; j862 = j862 + 1) {
				fRec213_tmp[j862] = fRec213_perm[j862];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec213[i] = fConst38 * (fRec213[i - 1] + (fRec214[i] - fRec214[i - 1]));
			}
			/* Post code */
			for (int j863 = 0; j863 < 4; j863 = j863 + 1) {
				fRec213_perm[j863] = fRec213_tmp[vsize + j863];
			}
			/* Recursive loop 718 */
			/* Pre code */
			for (int j880 = 0; j880 < 4; j880 = j880 + 1) {
				fRec218_tmp[j880] = fRec218_perm[j880];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec218[i] = fConst38 * (fRec218[i - 1] + (fRec219[i] - fRec219[i - 1]));
			}
			/* Post code */
			for (int j881 = 0; j881 < 4; j881 = j881 + 1) {
				fRec218_perm[j881] = fRec218_tmp[vsize + j881];
			}
			/* Recursive loop 719 */
			/* Pre code */
			for (int j898 = 0; j898 < 4; j898 = j898 + 1) {
				fRec223_tmp[j898] = fRec223_perm[j898];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec223[i] = fConst38 * (fRec223[i - 1] + (fRec224[i] - fRec224[i - 1]));
			}
			/* Post code */
			for (int j899 = 0; j899 < 4; j899 = j899 + 1) {
				fRec223_perm[j899] = fRec223_tmp[vsize + j899];
			}
			/* Recursive loop 720 */
			/* Pre code */
			for (int j912 = 0; j912 < 4; j912 = j912 + 1) {
				fRec228_tmp[j912] = fRec228_perm[j912];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec228[i] = fConst38 * (fRec228[i - 1] + (fRec229[i] - fRec229[i - 1]));
			}
			/* Post code */
			for (int j913 = 0; j913 < 4; j913 = j913 + 1) {
				fRec228_perm[j913] = fRec228_tmp[vsize + j913];
			}
			/* Recursive loop 721 */
			/* Pre code */
			for (int j926 = 0; j926 < 4; j926 = j926 + 1) {
				fRec232_tmp[j926] = fRec232_perm[j926];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec232[i] = fConst38 * (fRec232[i - 1] + (fRec233[i] - fRec233[i - 1]));
			}
			/* Post code */
			for (int j927 = 0; j927 < 4; j927 = j927 + 1) {
				fRec232_perm[j927] = fRec232_tmp[vsize + j927];
			}
			/* Recursive loop 722 */
			/* Pre code */
			for (int j940 = 0; j940 < 4; j940 = j940 + 1) {
				fRec236_tmp[j940] = fRec236_perm[j940];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec236[i] = fConst38 * (fRec236[i - 1] + (fRec237[i] - fRec237[i - 1]));
			}
			/* Post code */
			for (int j941 = 0; j941 < 4; j941 = j941 + 1) {
				fRec236_perm[j941] = fRec236_tmp[vsize + j941];
			}
			/* Recursive loop 723 */
			/* Pre code */
			for (int j954 = 0; j954 < 4; j954 = j954 + 1) {
				fRec240_tmp[j954] = fRec240_perm[j954];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec240[i] = fConst38 * (fRec240[i - 1] + (fRec241[i] - fRec241[i - 1]));
			}
			/* Post code */
			for (int j955 = 0; j955 < 4; j955 = j955 + 1) {
				fRec240_perm[j955] = fRec240_tmp[vsize + j955];
			}
			/* Recursive loop 724 */
			/* Pre code */
			for (int j968 = 0; j968 < 4; j968 = j968 + 1) {
				fRec244_tmp[j968] = fRec244_perm[j968];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec244[i] = fConst38 * (fRec244[i - 1] + (fRec245[i] - fRec245[i - 1]));
			}
			/* Post code */
			for (int j969 = 0; j969 < 4; j969 = j969 + 1) {
				fRec244_perm[j969] = fRec244_tmp[vsize + j969];
			}
			/* Recursive loop 725 */
			/* Pre code */
			for (int j974 = 0; j974 < 4; j974 = j974 + 1) {
				fRec248_tmp[j974] = fRec248_perm[j974];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec248[i] = fConst40 * (fRec248[i - 1] + (fRec249[i] - fRec249[i - 1]));
			}
			/* Post code */
			for (int j975 = 0; j975 < 4; j975 = j975 + 1) {
				fRec248_perm[j975] = fRec248_tmp[vsize + j975];
			}
			/* Recursive loop 726 */
			/* Pre code */
			for (int j980 = 0; j980 < 4; j980 = j980 + 1) {
				fRec250_tmp[j980] = fRec250_perm[j980];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec250[i] = fConst40 * (fRec250[i - 1] + (fRec251[i] - fRec251[i - 1]));
			}
			/* Post code */
			for (int j981 = 0; j981 < 4; j981 = j981 + 1) {
				fRec250_perm[j981] = fRec250_tmp[vsize + j981];
			}
			/* Recursive loop 727 */
			/* Pre code */
			for (int j986 = 0; j986 < 4; j986 = j986 + 1) {
				fRec252_tmp[j986] = fRec252_perm[j986];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec252[i] = fConst40 * (fRec252[i - 1] + (fRec253[i] - fRec253[i - 1]));
			}
			/* Post code */
			for (int j987 = 0; j987 < 4; j987 = j987 + 1) {
				fRec252_perm[j987] = fRec252_tmp[vsize + j987];
			}
			/* Recursive loop 728 */
			/* Pre code */
			for (int j992 = 0; j992 < 4; j992 = j992 + 1) {
				fRec254_tmp[j992] = fRec254_perm[j992];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec254[i] = fConst40 * (fRec254[i - 1] + (fRec255[i] - fRec255[i - 1]));
			}
			/* Post code */
			for (int j993 = 0; j993 < 4; j993 = j993 + 1) {
				fRec254_perm[j993] = fRec254_tmp[vsize + j993];
			}
			/* Recursive loop 729 */
			/* Pre code */
			for (int j998 = 0; j998 < 4; j998 = j998 + 1) {
				fRec256_tmp[j998] = fRec256_perm[j998];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec256[i] = fConst40 * (fRec256[i - 1] + (fRec257[i] - fRec257[i - 1]));
			}
			/* Post code */
			for (int j999 = 0; j999 < 4; j999 = j999 + 1) {
				fRec256_perm[j999] = fRec256_tmp[vsize + j999];
			}
			/* Recursive loop 730 */
			/* Pre code */
			for (int j1004 = 0; j1004 < 4; j1004 = j1004 + 1) {
				fRec258_tmp[j1004] = fRec258_perm[j1004];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec258[i] = fConst40 * (fRec258[i - 1] + (fRec259[i] - fRec259[i - 1]));
			}
			/* Post code */
			for (int j1005 = 0; j1005 < 4; j1005 = j1005 + 1) {
				fRec258_perm[j1005] = fRec258_tmp[vsize + j1005];
			}
			/* Recursive loop 731 */
			/* Pre code */
			for (int j1010 = 0; j1010 < 4; j1010 = j1010 + 1) {
				fRec260_tmp[j1010] = fRec260_perm[j1010];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec260[i] = fConst40 * (fRec260[i - 1] + (fRec261[i] - fRec261[i - 1]));
			}
			/* Post code */
			for (int j1011 = 0; j1011 < 4; j1011 = j1011 + 1) {
				fRec260_perm[j1011] = fRec260_tmp[vsize + j1011];
			}
			/* Recursive loop 732 */
			/* Pre code */
			for (int j1016 = 0; j1016 < 4; j1016 = j1016 + 1) {
				fRec262_tmp[j1016] = fRec262_perm[j1016];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec262[i] = fConst40 * (fRec262[i - 1] + (fRec263[i] - fRec263[i - 1]));
			}
			/* Post code */
			for (int j1017 = 0; j1017 < 4; j1017 = j1017 + 1) {
				fRec262_perm[j1017] = fRec262_tmp[vsize + j1017];
			}
			/* Recursive loop 733 */
			/* Pre code */
			for (int j1022 = 0; j1022 < 4; j1022 = j1022 + 1) {
				fRec264_tmp[j1022] = fRec264_perm[j1022];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec264[i] = fConst40 * (fRec264[i - 1] + (fRec265[i] - fRec265[i - 1]));
			}
			/* Post code */
			for (int j1023 = 0; j1023 < 4; j1023 = j1023 + 1) {
				fRec264_perm[j1023] = fRec264_tmp[vsize + j1023];
			}
			/* Recursive loop 734 */
			/* Pre code */
			for (int j1028 = 0; j1028 < 4; j1028 = j1028 + 1) {
				fRec266_tmp[j1028] = fRec266_perm[j1028];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec266[i] = fConst40 * (fRec266[i - 1] + (fRec267[i] - fRec267[i - 1]));
			}
			/* Post code */
			for (int j1029 = 0; j1029 < 4; j1029 = j1029 + 1) {
				fRec266_perm[j1029] = fRec266_tmp[vsize + j1029];
			}
			/* Recursive loop 735 */
			/* Pre code */
			for (int j1034 = 0; j1034 < 4; j1034 = j1034 + 1) {
				fRec268_tmp[j1034] = fRec268_perm[j1034];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec268[i] = fConst40 * (fRec268[i - 1] + (fRec269[i] - fRec269[i - 1]));
			}
			/* Post code */
			for (int j1035 = 0; j1035 < 4; j1035 = j1035 + 1) {
				fRec268_perm[j1035] = fRec268_tmp[vsize + j1035];
			}
			/* Recursive loop 736 */
			/* Pre code */
			for (int j1040 = 0; j1040 < 4; j1040 = j1040 + 1) {
				fRec270_tmp[j1040] = fRec270_perm[j1040];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec270[i] = fConst40 * (fRec270[i - 1] + (fRec271[i] - fRec271[i - 1]));
			}
			/* Post code */
			for (int j1041 = 0; j1041 < 4; j1041 = j1041 + 1) {
				fRec270_perm[j1041] = fRec270_tmp[vsize + j1041];
			}
			/* Vectorizable loop 737 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec272[i] = fRec91[i] * fZec87[i];
			}
			/* Vectorizable loop 738 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec273[i] = fRec93[i] * fZec89[i];
			}
			/* Vectorizable loop 739 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec274[i] = fRec95[i] * fZec91[i];
			}
			/* Vectorizable loop 740 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec275[i] = fRec97[i] * fZec93[i];
			}
			/* Vectorizable loop 741 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec276[i] = fRec99[i] * fZec95[i];
			}
			/* Vectorizable loop 742 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec277[i] = fRec101[i] * fZec97[i];
			}
			/* Vectorizable loop 743 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec278[i] = fRec103[i] * fZec99[i];
			}
			/* Vectorizable loop 744 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec280[i] = fRec107[i] * fZec103[i];
			}
			/* Vectorizable loop 745 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec279[i] = fRec105[i] * fZec101[i];
			}
			/* Vectorizable loop 746 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec281[i] = fRec109[i] * fZec105[i];
			}
			/* Vectorizable loop 747 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec282[i] = fRec111[i] * fZec107[i];
			}
			/* Vectorizable loop 748 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec283[i] = fRec113[i] * fZec109[i];
			}
			/* Vectorizable loop 749 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec284[i] = fRec115[i] * fZec111[i];
			}
			/* Vectorizable loop 750 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec285[i] = fRec117[i] * fZec112[i];
			}
			/* Vectorizable loop 751 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec287[i] = fRec121[i] * fZec114[i];
			}
			/* Vectorizable loop 752 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec286[i] = fRec119[i] * fZec113[i];
			}
			/* Vectorizable loop 753 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec288[i] = fRec123[i] * fZec115[i];
			}
			/* Vectorizable loop 754 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec289[i] = fRec127[i] * fZec116[i];
			}
			/* Vectorizable loop 755 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec290[i] = fRec125[i] * fZec117[i];
			}
			/* Vectorizable loop 756 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec291[i] = fRec7[i] * fZec118[i];
			}
			/* Vectorizable loop 757 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec292[i] = fRec13[i] * fZec119[i];
			}
			/* Vectorizable loop 758 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec293[i] = fRec18[i] * fZec120[i];
			}
			/* Vectorizable loop 759 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec294[i] = fRec23[i] * fZec121[i];
			}
			/* Vectorizable loop 760 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec295[i] = fRec28[i] * fZec122[i];
			}
			/* Vectorizable loop 761 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec296[i] = fRec33[i] * fZec123[i];
			}
			/* Vectorizable loop 762 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec297[i] = fRec39[i] * fZec124[i];
			}
			/* Vectorizable loop 763 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec298[i] = fRec45[i] * fZec125[i];
			}
			/* Vectorizable loop 764 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec299[i] = fRec51[i] * fZec126[i];
			}
			/* Vectorizable loop 765 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec300[i] = fRec57[i] * fZec127[i];
			}
			/* Vectorizable loop 766 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec301[i] = fRec63[i] * fZec128[i];
			}
			/* Vectorizable loop 767 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec302[i] = fRec69[i] * fZec129[i];
			}
			/* Vectorizable loop 768 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec303[i] = fRec75[i] * fZec130[i];
			}
			/* Vectorizable loop 769 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec304[i] = fRec78[i] * fZec131[i];
			}
			/* Vectorizable loop 770 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec305[i] = fRec81[i] * fZec132[i];
			}
			/* Vectorizable loop 771 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec306[i] = fRec87[i] * fZec133[i];
			}
			/* Vectorizable loop 772 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec307[i] = fRec84[i] * fZec134[i];
			}
			/* Vectorizable loop 773 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec308[i] = fRec174[i] * fZec135[i];
			}
			/* Vectorizable loop 774 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec309[i] = fRec176[i] * fZec136[i];
			}
			/* Vectorizable loop 775 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec310[i] = fRec178[i] * fZec137[i];
			}
			/* Vectorizable loop 776 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec311[i] = fRec180[i] * fZec138[i];
			}
			/* Vectorizable loop 777 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec312[i] = fRec182[i] * fZec139[i];
			}
			/* Vectorizable loop 778 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec313[i] = fRec184[i] * fZec140[i];
			}
			/* Vectorizable loop 779 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec314[i] = fRec190[i] * fZec141[i];
			}
			/* Vectorizable loop 780 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec316[i] = fSlow80 * fZec315[i];
			}
			/* Vectorizable loop 781 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec319[i] = fRec91[i] * fZec111[i];
			}
			/* Vectorizable loop 782 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec320[i] = fRec93[i] * fZec112[i];
			}
			/* Vectorizable loop 783 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec321[i] = fRec95[i] * fZec113[i];
			}
			/* Vectorizable loop 784 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec322[i] = fRec97[i] * fZec114[i];
			}
			/* Vectorizable loop 785 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec323[i] = fRec99[i] * fZec115[i];
			}
			/* Vectorizable loop 786 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec324[i] = fRec101[i] * fZec116[i];
			}
			/* Vectorizable loop 787 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec325[i] = fRec103[i] * fZec117[i];
			}
			/* Vectorizable loop 788 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec326[i] = fRec105[i] * fZec118[i];
			}
			/* Vectorizable loop 789 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec327[i] = fRec107[i] * fZec119[i];
			}
			/* Vectorizable loop 790 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec328[i] = fRec109[i] * fZec120[i];
			}
			/* Vectorizable loop 791 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec329[i] = fRec111[i] * fZec121[i];
			}
			/* Vectorizable loop 792 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec330[i] = fRec113[i] * fZec122[i];
			}
			/* Vectorizable loop 793 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec331[i] = fRec115[i] * fZec123[i];
			}
			/* Vectorizable loop 794 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec332[i] = fRec117[i] * fZec124[i];
			}
			/* Vectorizable loop 795 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec333[i] = fRec119[i] * fZec125[i];
			}
			/* Vectorizable loop 796 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec334[i] = fRec121[i] * fZec126[i];
			}
			/* Vectorizable loop 797 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec335[i] = fRec123[i] * fZec127[i];
			}
			/* Vectorizable loop 798 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec336[i] = fRec127[i] * fZec128[i];
			}
			/* Vectorizable loop 799 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec337[i] = fRec125[i] * fZec129[i];
			}
			/* Vectorizable loop 800 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec338[i] = fRec7[i] * fZec130[i];
			}
			/* Vectorizable loop 801 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec339[i] = fRec13[i] * fZec131[i];
			}
			/* Vectorizable loop 802 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec340[i] = fRec18[i] * fZec132[i];
			}
			/* Vectorizable loop 803 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec341[i] = fRec23[i] * fZec133[i];
			}
			/* Vectorizable loop 804 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec342[i] = fRec28[i] * fZec134[i];
			}
			/* Vectorizable loop 805 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec343[i] = fRec33[i] * fZec135[i];
			}
			/* Vectorizable loop 806 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec344[i] = fRec39[i] * fZec136[i];
			}
			/* Vectorizable loop 807 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec345[i] = fRec45[i] * fZec137[i];
			}
			/* Vectorizable loop 808 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec346[i] = fRec51[i] * fZec138[i];
			}
			/* Vectorizable loop 809 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec347[i] = fRec57[i] * fZec139[i];
			}
			/* Vectorizable loop 810 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec348[i] = fRec63[i] * fZec140[i];
			}
			/* Vectorizable loop 811 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec349[i] = fRec69[i] * fZec141[i];
			}
			/* Vectorizable loop 812 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec350[i] = fSlow80 * (fRec171[i] * fZec158[i] + fRec168[i] * fZec157[i] + fRec165[i] * fZec156[i] + fRec162[i] * fZec155[i] + fRec187[i] * fZec154[i] + fRec190[i] * fZec153[i] + fRec184[i] * fZec152[i] + fRec182[i] * fZec151[i] + fRec180[i] * fZec150[i] + fRec178[i] * fZec149[i] + fRec176[i] * fZec148[i] + fRec174[i] * fZec147[i] + fRec84[i] * fZec146[i] + fRec87[i] * fZec145[i] + fRec81[i] * fZec144[i] + fRec78[i] * fZec143[i] + fRec75[i] * fZec142[i]);
			}
			/* Recursive loop 813 */
			/* Pre code */
			for (int j584 = 0; j584 < 4; j584 = j584 + 1) {
				fRec6_tmp[j584] = fRec6_perm[j584];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec6[i] = fConst26 * (fRec6[i - 1] + (fZec166[i] - (fZec160[i] + fYec96[i - 1])));
			}
			/* Post code */
			for (int j585 = 0; j585 < 4; j585 = j585 + 1) {
				fRec6_perm[j585] = fRec6_tmp[vsize + j585];
			}
			/* Vectorizable loop 814 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec269[i] = fRec193[i] * fZec158[i] + fRec198[i] * fZec157[i] + fRec203[i] * fZec156[i] + fRec208[i] * fZec155[i] + fRec213[i] * fZec154[i] + fRec218[i] * fZec153[i] + fRec223[i] * fZec152[i] + fRec228[i] * fZec151[i] + fRec232[i] * fZec150[i] + fRec236[i] * fZec149[i] + fRec240[i] * fZec148[i] + fRec244[i] * fZec147[i] + fRec248[i] * fZec146[i] + fRec250[i] * fZec145[i] + fRec252[i] * fZec144[i] + fRec254[i] * fZec143[i] + fRec256[i] * fZec142[i];
			}
			/* Vectorizable loop 815 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec317[i] = 0.25f * (fZec86[i] + fZec316[i] + fZec314[i] + fZec313[i] + fZec312[i] + fZec311[i] + fZec310[i] + fZec309[i] + fZec308[i] + fZec307[i] + fZec306[i] + fZec305[i] + fZec304[i] + fZec303[i] + fZec302[i] + fZec301[i] + fZec300[i] + fZec299[i] + fZec298[i] + fZec297[i] + fZec296[i] + fZec295[i] + fZec294[i] + fZec293[i] + fZec292[i] + fZec291[i] + fZec290[i] + fZec289[i] + fZec288[i] + fZec287[i] + fZec286[i] + fZec285[i] + fZec284[i] + fZec283[i] + fZec282[i] + fZec281[i] + fZec280[i] + fZec279[i] + fZec278[i] + fZec277[i] + fZec276[i] + fZec275[i] + fZec274[i] + fZec273[i] + fZec272[i]);
			}
			/* Vectorizable loop 816 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec318[i] = fSlow80 * (fRec284[i] + fRec282[i] + fRec280[i] + fRec278[i] + fRec276[i] + fRec274[i] + fRec272[i] + fRec142[i] + fRec146[i] + fRec150[i] + fRec154[i] + fRec158[i] + fRec162[i] + fRec165[i] + fRec168[i] + fRec187[i] + fRec171[i]) + fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec190[i] + fZec236[i];
			}
			/* Vectorizable loop 817 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec351[i] = 0.25f * (fZec86[i] + fZec88[i] + fZec90[i] + fZec92[i] + fZec94[i] + fZec96[i] + fZec98[i] + fZec100[i] + fZec102[i] + fZec104[i] + fZec106[i] + fZec108[i] + fZec110[i] + fZec350[i] + fZec349[i] + fZec348[i] + fZec347[i] + fZec346[i] + fZec345[i] + fZec344[i] + fZec343[i] + fZec342[i] + fZec341[i] + fZec340[i] + fZec339[i] + fZec338[i] + fZec337[i] + fZec336[i] + fZec335[i] + fZec334[i] + fZec333[i] + fZec332[i] + fZec331[i] + fZec330[i] + fZec329[i] + fZec328[i] + fZec327[i] + fZec326[i] + fZec325[i] + fZec324[i] + fZec323[i] + fZec322[i] + fZec321[i] + fZec320[i] + fZec319[i]);
			}
			/* Vectorizable loop 818 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec352[i] = fSlow80 * (fRec162[i] + fRec165[i] + fRec168[i] + fRec171[i] + fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec190[i] + fRec187[i] + fZec162[i]) + fRec129[i] + fRec130[i] + fRec131[i] + fRec132[i] + fRec133[i] + fRec134[i] + fRec135[i] + fRec136[i] + fRec137[i] + fRec138[i] + fRec139[i] + 2.0f * fRec90[i] + fRec91[i] + fRec93[i] + fRec95[i] + fRec97[i] + fRec99[i] + fRec101[i] + fRec103[i] + fRec105[i] + fRec107[i] + fRec109[i] + fRec111[i] + fRec113[i] + fRec115[i] + fRec117[i] + fRec119[i] + fRec121[i] + fRec123[i] + fRec127[i] + fRec125[i] + fRec7[i] + fRec13[i] + fRec18[i] + fRec23[i] + fRec28[i] + fRec33[i] + fRec39[i] + fRec45[i] + fRec51[i] + fRec57[i] + fRec69[i] + fRec63[i];
			}
			/* Vectorizable loop 819 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec363[i] = fRec248[i] * fZec158[i] + fRec250[i] * fZec157[i] + fRec252[i] * fZec156[i] + fRec254[i] * fZec155[i] + fRec256[i] * fZec154[i] + fRec258[i] * fZec153[i] + fRec260[i] * fZec152[i] + fRec262[i] * fZec151[i] + fRec264[i] * fZec150[i] + fRec266[i] * fZec149[i] + fRec268[i] * fZec148[i] + fRec270[i] * fZec147[i] + fRec272[i] * fZec146[i] + fRec274[i] * fZec145[i] + fRec276[i] * fZec144[i] + fRec278[i] * fZec143[i] + fRec280[i] * fZec142[i];
			}
			/* Recursive loop 820 */
			/* Pre code */
			for (int j586 = 0; j586 < 4; j586 = j586 + 1) {
				iRec140_tmp[j586] = iRec140_perm[j586];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec140[i] = 1103515245 * iRec140[i - 1] + 12345;
			}
			/* Post code */
			for (int j587 = 0; j587 < 4; j587 = j587 + 1) {
				iRec140_perm[j587] = iRec140_tmp[vsize + j587];
			}
			/* Vectorizable loop 821 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec168[i] = 0.002f * fSlow81 * fRec6[i];
			}
			/* Vectorizable loop 822 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec270[i] = 0.41975f * (fSlow80 * fZec269[i] + fRec258[i] * fZec141[i] + fRec260[i] * fZec140[i] + fRec262[i] * fZec139[i] + fRec264[i] * fZec138[i] + fRec266[i] * fZec137[i] + fRec268[i] * fZec136[i] + fRec270[i] * fZec135[i] + fRec272[i] * fZec134[i] + fRec274[i] * fZec133[i] + fRec276[i] * fZec132[i] + fRec278[i] * fZec131[i] + fRec280[i] * fZec130[i] + fRec282[i] * fZec129[i] + fRec284[i] * fZec128[i] + fRec158[i] * fZec127[i] + fRec154[i] * fZec126[i] + fRec150[i] * fZec125[i] + fRec146[i] * fZec124[i] + fRec142[i] * fZec123[i] + fRec171[i] * fZec122[i] + fRec168[i] * fZec121[i] + fRec165[i] * fZec120[i] + fRec162[i] * fZec119[i] + fRec187[i] * fZec118[i] + fRec190[i] * fZec117[i] + fRec184[i] * fZec116[i] + fRec182[i] * fZec115[i] + fRec180[i] * fZec114[i] + fRec178[i] * fZec113[i] + fRec176[i] * fZec112[i] + fRec174[i] * fZec111[i] + fRec84[i] * fZec109[i] + fRec87[i] * fZec107[i] + fRec81[i] * fZec105[i] + fRec78[i] * fZec103[i] + fRec75[i] * fZec101[i] + fRec69[i] * fZec99[i] + fRec63[i] * fZec97[i] + fRec57[i] * fZec95[i] + fRec51[i] * fZec93[i] + fRec45[i] * fZec91[i] + fRec39[i] * fZec89[i] + fRec33[i] * fZec87[i] + fRec28[i] * fZec85[i]);
			}
			/* Vectorizable loop 823 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec271[i] = 1.679f * (fSlow80 * (fRec244[i] + fRec240[i] + fRec236[i] + fRec232[i] + fRec228[i] + fRec223[i] + fRec218[i] + fRec213[i] + fRec208[i] + fRec203[i] + fRec198[i] + fRec193[i] + fRec256[i] + fRec254[i] + fRec252[i] + fRec248[i] + fRec250[i]) + fRec270[i] + fRec268[i] + fRec266[i] + fRec264[i] + fRec262[i] + fRec260[i] + fRec258[i] + fRec284[i] + fRec282[i] + fRec280[i] + fRec278[i] + fRec276[i] + fRec274[i] + fRec272[i] + fRec142[i] + fRec146[i] + fRec150[i] + fRec154[i] + fRec158[i] + fRec162[i] + fRec165[i] + fRec168[i] + fRec171[i] + fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec190[i] + fRec187[i] + fZec164[i]);
			}
			/* Vectorizable loop 824 */
			/* Pre code */
			for (int j1088 = 0; j1088 < 4; j1088 = j1088 + 1) {
				fYec196_tmp[j1088] = fYec196_perm[j1088];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec196[i] = fZec318[i] - fZec317[i];
			}
			/* Post code */
			for (int j1089 = 0; j1089 < 4; j1089 = j1089 + 1) {
				fYec196_perm[j1089] = fYec196_tmp[vsize + j1089];
			}
			/* Vectorizable loop 825 */
			/* Pre code */
			for (int j1092 = 0; j1092 < 4; j1092 = j1092 + 1) {
				fYec197_tmp[j1092] = fYec197_perm[j1092];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec197[i] = fZec352[i] - fZec351[i];
			}
			/* Post code */
			for (int j1093 = 0; j1093 < 4; j1093 = j1093 + 1) {
				fYec197_perm[j1093] = fYec197_tmp[vsize + j1093];
			}
			/* Vectorizable loop 826 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec364[i] = 0.25f * (fSlow80 * fZec363[i] + fRec282[i] * fZec141[i] + fRec284[i] * fZec140[i] + fRec158[i] * fZec139[i] + fRec154[i] * fZec138[i] + fRec150[i] * fZec137[i] + fRec146[i] * fZec136[i] + fRec142[i] * fZec135[i] + fRec171[i] * fZec134[i] + fRec168[i] * fZec133[i] + fRec165[i] * fZec132[i] + fRec162[i] * fZec131[i] + fRec187[i] * fZec130[i] + fRec190[i] * fZec129[i] + fRec184[i] * fZec128[i] + fRec182[i] * fZec127[i] + fRec180[i] * fZec126[i] + fRec178[i] * fZec125[i] + fRec176[i] * fZec124[i] + fRec174[i] * fZec123[i] + fRec84[i] * fZec122[i] + fRec87[i] * fZec121[i] + fRec81[i] * fZec120[i] + fRec78[i] * fZec119[i] + fRec75[i] * fZec118[i] + fRec69[i] * fZec117[i] + fRec63[i] * fZec116[i] + fRec57[i] * fZec115[i] + fRec51[i] * fZec114[i] + fRec45[i] * fZec113[i] + fRec39[i] * fZec112[i] + fRec33[i] * fZec111[i] + fRec28[i] * fZec109[i] + fRec23[i] * fZec107[i] + fRec18[i] * fZec105[i] + fRec13[i] * fZec103[i] + fRec7[i] * fZec101[i] + fRec125[i] * fZec99[i] + fRec127[i] * fZec97[i] + fRec123[i] * fZec95[i] + fRec121[i] * fZec93[i] + fRec119[i] * fZec91[i] + fRec117[i] * fZec89[i] + fRec115[i] * fZec87[i] + fRec113[i] * fZec85[i]);
			}
			/* Vectorizable loop 827 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec365[i] = fSlow80 * (fRec270[i] + fRec268[i] + fRec266[i] + fRec264[i] + fRec262[i] + fRec260[i] + fRec258[i] + fRec256[i] + fRec254[i] + fRec252[i] + fRec250[i] + fRec248[i] + fRec280[i] + fRec278[i] + fRec276[i] + fRec272[i] + fRec274[i]) + fRec284[i] + fRec282[i] + fRec142[i] + fRec146[i] + fRec150[i] + fRec154[i] + fRec158[i] + fRec162[i] + fRec165[i] + fRec168[i] + fRec171[i] + fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec190[i] + fRec187[i] + fZec235[i];
			}
			/* Vectorizable loop 828 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec169[i] = mydsp_faustpower2_f(std::min<float>(1.0f, std::max<float>(-1.0f, fZec168[i] + fZec160[i] + 4.656613e-16f * float(iRec140[i]))));
			}
			/* Vectorizable loop 829 */
			/* Pre code */
			for (int j1084 = 0; j1084 < 4; j1084 = j1084 + 1) {
				fYec195_tmp[j1084] = fYec195_perm[j1084];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec195[i] = fZec271[i] - fZec270[i];
			}
			/* Post code */
			for (int j1085 = 0; j1085 < 4; j1085 = j1085 + 1) {
				fYec195_perm[j1085] = fYec195_tmp[vsize + j1085];
			}
			/* Recursive loop 830 */
			/* Pre code */
			for (int j1090 = 0; j1090 < 4; j1090 = j1090 + 1) {
				fRec287_tmp[j1090] = fRec287_perm[j1090];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec287[i] = fConst26 * (fRec287[i - 1] + (fZec318[i] - (fZec317[i] + fYec196[i - 1])));
			}
			/* Post code */
			for (int j1091 = 0; j1091 < 4; j1091 = j1091 + 1) {
				fRec287_perm[j1091] = fRec287_tmp[vsize + j1091];
			}
			/* Recursive loop 831 */
			/* Pre code */
			for (int j1094 = 0; j1094 < 4; j1094 = j1094 + 1) {
				fRec288_tmp[j1094] = fRec288_perm[j1094];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec288[i] = fConst26 * (fRec288[i - 1] + (fZec352[i] - (fZec351[i] + fYec197[i - 1])));
			}
			/* Post code */
			for (int j1095 = 0; j1095 < 4; j1095 = j1095 + 1) {
				fRec288_perm[j1095] = fRec288_tmp[vsize + j1095];
			}
			/* Vectorizable loop 832 */
			/* Pre code */
			for (int j1100 = 0; j1100 < 4; j1100 = j1100 + 1) {
				fYec199_tmp[j1100] = fYec199_perm[j1100];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec199[i] = fZec365[i] - fZec364[i];
			}
			/* Post code */
			for (int j1101 = 0; j1101 < 4; j1101 = j1101 + 1) {
				fYec199_perm[j1101] = fYec199_tmp[vsize + j1101];
			}
			/* Recursive loop 833 */
			/* Pre code */
			for (int j588 = 0; j588 < 4; j588 = j588 + 1) {
				fRec3_tmp[j588] = fRec3_perm[j588];
			}
			for (int j590 = 0; j590 < 4; j590 = j590 + 1) {
				iRec4_tmp[j590] = iRec4_perm[j590];
			}
			for (int j592 = 0; j592 < 4; j592 = j592 + 1) {
				fRec5_tmp[j592] = fRec5_perm[j592];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iZec167[i] = iRec4[i - 1] < iConst27;
				fRec3[i] = ((iZec167[i]) ? fZec169[i] + fRec3[i - 1] : fZec169[i]);
				iRec4[i] = ((iZec167[i]) ? iRec4[i - 1] + 1 : 1);
				fRec5[i] = ((iZec167[i]) ? fRec5[i - 1] : fRec3[i - 1]);
			}
			/* Post code */
			for (int j589 = 0; j589 < 4; j589 = j589 + 1) {
				fRec3_perm[j589] = fRec3_tmp[vsize + j589];
			}
			for (int j591 = 0; j591 < 4; j591 = j591 + 1) {
				iRec4_perm[j591] = iRec4_tmp[vsize + j591];
			}
			for (int j593 = 0; j593 < 4; j593 = j593 + 1) {
				fRec5_perm[j593] = fRec5_tmp[vsize + j593];
			}
			/* Recursive loop 834 */
			/* Pre code */
			for (int j1086 = 0; j1086 < 4; j1086 = j1086 + 1) {
				fRec286_tmp[j1086] = fRec286_perm[j1086];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec286[i] = fConst26 * (fRec286[i - 1] + (fZec271[i] - (fZec270[i] + fYec195[i - 1])));
			}
			/* Post code */
			for (int j1087 = 0; j1087 < 4; j1087 = j1087 + 1) {
				fRec286_perm[j1087] = fRec286_tmp[vsize + j1087];
			}
			/* Recursive loop 835 */
			/* Pre code */
			for (int j1102 = 0; j1102 < 4; j1102 = j1102 + 1) {
				fRec290_tmp[j1102] = fRec290_perm[j1102];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec290[i] = fConst26 * (fRec290[i - 1] + (fZec365[i] - (fZec364[i] + fYec199[i - 1])));
			}
			/* Post code */
			for (int j1103 = 0; j1103 < 4; j1103 = j1103 + 1) {
				fRec290_perm[j1103] = fRec290_tmp[vsize + j1103];
			}
			/* Vectorizable loop 836 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec366[i] = 0.002f * fSlow81 * fRec288[i];
			}
			/* Vectorizable loop 837 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec368[i] = 0.002f * fSlow81 * fRec287[i];
			}
			/* Vectorizable loop 838 */
			/* Pre code */
			for (int j594 = 0; j594 < 4; j594 = j594 + 1) {
				fYec97_tmp[j594] = fYec97_perm[j594];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec97[i] = std::log10(std::sqrt(fConst28 * fRec5[i]));
			}
			/* Post code */
			for (int j595 = 0; j595 < 4; j595 = j595 + 1) {
				fYec97_perm[j595] = fYec97_tmp[vsize + j595];
			}
			/* Vectorizable loop 839 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec189[i] = fRec133[i] * fZec85[i];
			}
			/* Vectorizable loop 840 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec190[i] = fRec134[i] * fZec87[i];
			}
			/* Vectorizable loop 841 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec192[i] = fRec136[i] * fZec91[i];
			}
			/* Vectorizable loop 842 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec191[i] = fRec135[i] * fZec89[i];
			}
			/* Vectorizable loop 843 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec193[i] = fRec137[i] * fZec93[i];
			}
			/* Vectorizable loop 844 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec194[i] = fRec138[i] * fZec95[i];
			}
			/* Vectorizable loop 845 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec195[i] = fRec139[i] * fZec97[i];
			}
			/* Vectorizable loop 846 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec196[i] = fRec90[i] * fZec99[i];
			}
			/* Vectorizable loop 847 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec197[i] = fRec91[i] * fZec101[i];
			}
			/* Vectorizable loop 848 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec199[i] = fRec95[i] * fZec105[i];
			}
			/* Vectorizable loop 849 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec198[i] = fRec93[i] * fZec103[i];
			}
			/* Vectorizable loop 850 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec200[i] = fRec97[i] * fZec107[i];
			}
			/* Vectorizable loop 851 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec201[i] = fRec99[i] * fZec109[i];
			}
			/* Vectorizable loop 852 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec202[i] = fRec101[i] * fZec111[i];
			}
			/* Vectorizable loop 853 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec203[i] = fRec103[i] * fZec112[i];
			}
			/* Vectorizable loop 854 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec204[i] = fRec105[i] * fZec113[i];
			}
			/* Vectorizable loop 855 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec205[i] = fRec107[i] * fZec114[i];
			}
			/* Vectorizable loop 856 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec206[i] = fRec109[i] * fZec115[i];
			}
			/* Vectorizable loop 857 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec207[i] = fRec111[i] * fZec116[i];
			}
			/* Vectorizable loop 858 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec208[i] = fRec113[i] * fZec117[i];
			}
			/* Vectorizable loop 859 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec209[i] = fRec115[i] * fZec118[i];
			}
			/* Vectorizable loop 860 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec210[i] = fRec117[i] * fZec119[i];
			}
			/* Vectorizable loop 861 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec211[i] = fRec119[i] * fZec120[i];
			}
			/* Vectorizable loop 862 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec212[i] = fRec121[i] * fZec121[i];
			}
			/* Vectorizable loop 863 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec213[i] = fRec123[i] * fZec122[i];
			}
			/* Vectorizable loop 864 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec214[i] = fRec127[i] * fZec123[i];
			}
			/* Vectorizable loop 865 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec215[i] = fRec125[i] * fZec124[i];
			}
			/* Vectorizable loop 866 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec216[i] = fRec7[i] * fZec125[i];
			}
			/* Vectorizable loop 867 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec217[i] = fRec13[i] * fZec126[i];
			}
			/* Vectorizable loop 868 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec218[i] = fRec18[i] * fZec127[i];
			}
			/* Vectorizable loop 869 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec219[i] = fRec23[i] * fZec128[i];
			}
			/* Vectorizable loop 870 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec220[i] = fRec28[i] * fZec129[i];
			}
			/* Vectorizable loop 871 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec221[i] = fRec33[i] * fZec130[i];
			}
			/* Vectorizable loop 872 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec222[i] = fRec39[i] * fZec131[i];
			}
			/* Vectorizable loop 873 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec223[i] = fRec45[i] * fZec132[i];
			}
			/* Vectorizable loop 874 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec224[i] = fRec51[i] * fZec133[i];
			}
			/* Vectorizable loop 875 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec225[i] = fRec57[i] * fZec134[i];
			}
			/* Vectorizable loop 876 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec226[i] = fRec63[i] * fZec135[i];
			}
			/* Vectorizable loop 877 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec227[i] = fRec69[i] * fZec136[i];
			}
			/* Vectorizable loop 878 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec228[i] = fRec75[i] * fZec137[i];
			}
			/* Vectorizable loop 879 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec229[i] = fRec78[i] * fZec138[i];
			}
			/* Vectorizable loop 880 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec230[i] = fRec81[i] * fZec139[i];
			}
			/* Vectorizable loop 881 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec231[i] = fRec87[i] * fZec140[i];
			}
			/* Vectorizable loop 882 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec232[i] = fRec84[i] * fZec141[i];
			}
			/* Vectorizable loop 883 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec233[i] = fSlow80 * (fRec158[i] * fZec158[i] + fRec154[i] * fZec157[i] + fRec150[i] * fZec156[i] + fRec146[i] * fZec155[i] + fRec142[i] * fZec154[i] + fRec171[i] * fZec153[i] + fRec168[i] * fZec152[i] + fRec165[i] * fZec151[i] + fRec162[i] * fZec150[i] + fRec187[i] * fZec149[i] + fRec190[i] * fZec148[i] + fRec184[i] * fZec147[i] + fRec182[i] * fZec146[i] + fRec180[i] * fZec145[i] + fRec178[i] * fZec144[i] + fRec176[i] * fZec143[i] + fRec174[i] * fZec142[i]);
			}
			/* Vectorizable loop 884 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec367[i] = fZec351[i] + fZec366[i];
			}
			/* Vectorizable loop 885 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec369[i] = fZec317[i] + fZec368[i];
			}
			/* Vectorizable loop 886 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec370[i] = fZec364[i] + 0.002f * fSlow81 * fRec290[i];
			}
			/* Vectorizable loop 887 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec371[i] = fZec270[i] + 0.002f * fSlow81 * fRec286[i];
			}
			/* Vectorizable loop 888 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec170[i] = 2e+01f * fYec97[i - 1];
			}
			/* Vectorizable loop 889 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec171[i] = 2e+01f * fYec97[i];
			}
			/* Vectorizable loop 890 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec234[i] = 0.25f * (fZec233[i] + fZec232[i] + fZec231[i] + fZec230[i] + fZec229[i] + fZec228[i] + fZec227[i] + fZec226[i] + fZec225[i] + fZec224[i] + fZec223[i] + fZec222[i] + fZec221[i] + fZec220[i] + fZec219[i] + fZec218[i] + fZec217[i] + fZec216[i] + fZec215[i] + fZec214[i] + fZec213[i] + fZec212[i] + fZec211[i] + fZec210[i] + fZec209[i] + fZec208[i] + fZec207[i] + fZec206[i] + fZec205[i] + fZec204[i] + fZec203[i] + fZec202[i] + fZec201[i] + fZec200[i] + fZec199[i] + fZec198[i] + fZec197[i] + fZec196[i] + fZec195[i] + fZec194[i] + fZec193[i] + fZec192[i] + fZec191[i] + fZec190[i] + fZec189[i]);
			}
			/* Vectorizable loop 891 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec237[i] = fSlow80 * (fRec142[i] + fRec146[i] + fRec150[i] + fRec154[i] + fRec158[i] + fRec162[i] + fRec165[i] + fRec168[i] + fRec171[i] + fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec187[i] + fRec190[i]) + fRec133[i] + fRec134[i] + fRec135[i] + fRec136[i] + fRec137[i] + fRec138[i] + fRec139[i] + fZec236[i];
			}
			/* Vectorizable loop 892 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec353[i] = fRec129[i] * fZec95[i];
			}
			/* Vectorizable loop 893 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec354[i] = fRec130[i] * fZec97[i];
			}
			/* Vectorizable loop 894 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec355[i] = fRec131[i] * fZec99[i];
			}
			/* Vectorizable loop 895 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec357[i] = fRec133[i] * fZec103[i];
			}
			/* Vectorizable loop 896 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec356[i] = fRec132[i] * fZec101[i];
			}
			/* Vectorizable loop 897 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec358[i] = fRec134[i] * fZec105[i];
			}
			/* Vectorizable loop 898 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec359[i] = fRec135[i] * fZec107[i];
			}
			/* Vectorizable loop 899 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec360[i] = fSlow80 * (fRec187[i] * fZec158[i] + fRec190[i] * fZec157[i] + fRec184[i] * fZec156[i] + fRec182[i] * fZec155[i] + fRec180[i] * fZec154[i] + fRec178[i] * fZec153[i] + fRec176[i] * fZec152[i] + fRec174[i] * fZec151[i] + fRec84[i] * fZec150[i] + fRec87[i] * fZec149[i] + fRec81[i] * fZec148[i] + fRec78[i] * fZec147[i] + fRec75[i] * fZec146[i] + fRec69[i] * fZec145[i] + fRec63[i] * fZec144[i] + fRec57[i] * fZec143[i] + fRec51[i] * fZec142[i]) + fRec45[i] * fZec141[i] + fRec39[i] * fZec140[i] + fRec33[i] * fZec139[i] + fRec28[i] * fZec138[i] + fRec23[i] * fZec137[i] + fRec18[i] * fZec136[i] + fRec13[i] * fZec135[i] + fRec7[i] * fZec134[i] + fRec125[i] * fZec133[i] + fRec127[i] * fZec132[i] + fRec123[i] * fZec131[i] + fRec121[i] * fZec130[i] + fRec119[i] * fZec129[i] + fRec117[i] * fZec128[i] + fRec115[i] * fZec127[i] + fRec113[i] * fZec126[i] + fRec111[i] * fZec125[i] + fRec109[i] * fZec124[i] + fRec107[i] * fZec123[i] + fRec105[i] * fZec122[i] + fRec103[i] * fZec121[i] + fRec101[i] * fZec120[i] + fRec99[i] * fZec119[i] + fRec97[i] * fZec118[i] + fRec95[i] * fZec117[i] + fRec93[i] * fZec116[i] + fRec91[i] * fZec115[i];
			}
			/* Vectorizable loop 900 */
			/* Pre code */
			for (int j1104 = 0; j1104 < 4; j1104 = j1104 + 1) {
				fYec200_tmp[j1104] = fYec200_perm[j1104];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec200[i] = fSlow83 * fZec367[i];
			}
			/* Post code */
			for (int j1105 = 0; j1105 < 4; j1105 = j1105 + 1) {
				fYec200_perm[j1105] = fYec200_tmp[vsize + j1105];
			}
			/* Vectorizable loop 901 */
			/* Pre code */
			for (int j1112 = 0; j1112 < 4; j1112 = j1112 + 1) {
				fYec202_tmp[j1112] = fYec202_perm[j1112];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec202[i] = fSlow86 * fZec369[i];
			}
			/* Post code */
			for (int j1113 = 0; j1113 < 4; j1113 = j1113 + 1) {
				fYec202_perm[j1113] = fYec202_tmp[vsize + j1113];
			}
			/* Vectorizable loop 902 */
			/* Pre code */
			for (int j1120 = 0; j1120 < 4; j1120 = j1120 + 1) {
				fYec204_tmp[j1120] = fYec204_perm[j1120];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec204[i] = fSlow89 * fZec370[i];
			}
			/* Post code */
			for (int j1121 = 0; j1121 < 4; j1121 = j1121 + 1) {
				fYec204_perm[j1121] = fYec204_tmp[vsize + j1121];
			}
			/* Vectorizable loop 903 */
			/* Pre code */
			for (int j1128 = 0; j1128 < 4; j1128 = j1128 + 1) {
				fYec206_tmp[j1128] = fYec206_perm[j1128];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec206[i] = fSlow92 * fZec371[i];
			}
			/* Post code */
			for (int j1129 = 0; j1129 < 4; j1129 = j1129 + 1) {
				fYec206_perm[j1129] = fYec206_tmp[vsize + j1129];
			}
			/* Recursive loop 904 */
			/* Pre code */
			for (int j596 = 0; j596 < 4; j596 = j596 + 1) {
				fRec2_tmp[j596] = fRec2_perm[j596];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec2[i] = std::min<float>(1.0f, std::max<float>(0.0f, fRec2[i - 1] + ((fZec171[i] > -25.0f) ? ((fZec170[i] < -25.0f) ? 1.0f : 0.0f) : 0.0f) - ((fZec170[i] > -35.0f) ? ((fZec171[i] < -35.0f) ? 1.0f : 0.0f) : 0.0f)));
			}
			/* Post code */
			for (int j597 = 0; j597 < 4; j597 = j597 + 1) {
				fRec2_perm[j597] = fRec2_tmp[vsize + j597];
			}
			/* Vectorizable loop 905 */
			/* Pre code */
			for (int j770 = 0; j770 < 4; j770 = j770 + 1) {
				fYec132_tmp[j770] = fYec132_perm[j770];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec132[i] = fZec237[i] - fZec234[i];
			}
			/* Post code */
			for (int j771 = 0; j771 < 4; j771 = j771 + 1) {
				fYec132_perm[j771] = fYec132_tmp[vsize + j771];
			}
			/* Vectorizable loop 906 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec361[i] = 0.25f * (fZec360[i] + fRec90[i] * fZec114[i] + fRec139[i] * fZec113[i] + fRec138[i] * fZec112[i] + fRec137[i] * fZec111[i] + fRec136[i] * fZec109[i] + fZec359[i] + fZec358[i] + fZec357[i] + fZec356[i] + fZec355[i] + fZec354[i] + fZec353[i] + fRec90[i] * fZec93[i] + fRec139[i] * fZec91[i] + fRec138[i] * fZec89[i] + fRec137[i] * fZec87[i] + fRec136[i] * fZec85[i]);
			}
			/* Vectorizable loop 907 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec362[i] = fSlow80 * (fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec190[i] + fRec187[i] + fZec163[i]) + 2.0f * fZec161[i] + fRec129[i] + fRec130[i] + fRec131[i] + fRec132[i] + fRec133[i] + fRec134[i] + fRec135[i] + fRec91[i] + fRec93[i] + fRec95[i] + fRec97[i] + fRec99[i] + fRec101[i] + fRec103[i] + fRec105[i] + fRec107[i] + fRec109[i] + fRec111[i] + fRec113[i] + fRec115[i] + fRec117[i] + fRec119[i] + fRec121[i] + fRec123[i] + fRec127[i] + fRec125[i] + fRec7[i] + fRec13[i] + fRec18[i] + fRec23[i] + fRec28[i] + fRec33[i] + fRec45[i] + fRec39[i];
			}
			/* Recursive loop 908 */
			/* Pre code */
			for (int j1106 = 0; j1106 < 4; j1106 = j1106 + 1) {
				fRec292_tmp[j1106] = fRec292_perm[j1106];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec292[i] = fConst43 * (fRec292[i - 1] + (fYec200[i] - fYec200[i - 1]));
			}
			/* Post code */
			for (int j1107 = 0; j1107 < 4; j1107 = j1107 + 1) {
				fRec292_perm[j1107] = fRec292_tmp[vsize + j1107];
			}
			/* Recursive loop 909 */
			/* Pre code */
			for (int j1114 = 0; j1114 < 4; j1114 = j1114 + 1) {
				fRec294_tmp[j1114] = fRec294_perm[j1114];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec294[i] = fConst45 * (fRec294[i - 1] + (fYec202[i] - fYec202[i - 1]));
			}
			/* Post code */
			for (int j1115 = 0; j1115 < 4; j1115 = j1115 + 1) {
				fRec294_perm[j1115] = fRec294_tmp[vsize + j1115];
			}
			/* Recursive loop 910 */
			/* Pre code */
			for (int j1122 = 0; j1122 < 4; j1122 = j1122 + 1) {
				fRec296_tmp[j1122] = fRec296_perm[j1122];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec296[i] = fConst47 * (fRec296[i - 1] + (fYec204[i] - fYec204[i - 1]));
			}
			/* Post code */
			for (int j1123 = 0; j1123 < 4; j1123 = j1123 + 1) {
				fRec296_perm[j1123] = fRec296_tmp[vsize + j1123];
			}
			/* Recursive loop 911 */
			/* Pre code */
			for (int j1130 = 0; j1130 < 4; j1130 = j1130 + 1) {
				fRec298_tmp[j1130] = fRec298_perm[j1130];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec298[i] = fConst49 * (fRec298[i - 1] + (fYec206[i] - fYec206[i - 1]));
			}
			/* Post code */
			for (int j1131 = 0; j1131 < 4; j1131 = j1131 + 1) {
				fRec298_perm[j1131] = fRec298_tmp[vsize + j1131];
			}
			/* Recursive loop 912 */
			/* Pre code */
			for (int j598 = 0; j598 < 4; j598 = j598 + 1) {
				fRec1_tmp[j598] = fRec1_perm[j598];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec1[i] = fConst30 * fRec1[i - 1] + fConst29 * ((fRec2[i] > 0.5f) ? ((fRec2[i - 1] < 0.5f) ? 1.0f : 0.0f) : 0.0f);
			}
			/* Post code */
			for (int j599 = 0; j599 < 4; j599 = j599 + 1) {
				fRec1_perm[j599] = fRec1_tmp[vsize + j599];
			}
			/* Recursive loop 913 */
			/* Pre code */
			for (int j772 = 0; j772 < 4; j772 = j772 + 1) {
				fRec141_tmp[j772] = fRec141_perm[j772];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec141[i] = fConst26 * (fRec141[i - 1] + (fZec237[i] - (fZec234[i] + fYec132[i - 1])));
			}
			/* Post code */
			for (int j773 = 0; j773 < 4; j773 = j773 + 1) {
				fRec141_perm[j773] = fRec141_tmp[vsize + j773];
			}
			/* Vectorizable loop 914 */
			/* Pre code */
			for (int j1096 = 0; j1096 < 4; j1096 = j1096 + 1) {
				fYec198_tmp[j1096] = fYec198_perm[j1096];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec198[i] = fZec362[i] - fZec361[i];
			}
			/* Post code */
			for (int j1097 = 0; j1097 < 4; j1097 = j1097 + 1) {
				fYec198_perm[j1097] = fYec198_tmp[vsize + j1097];
			}
			/* Vectorizable loop 915 */
			/* Pre code */
			for (int j1108 = 0; j1108 < 4; j1108 = j1108 + 1) {
				fYec201_tmp[j1108] = fYec201_perm[j1108];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec201[i] = 0.5416667f * fRec292[i] + fSlow84 * fZec367[i];
			}
			/* Post code */
			for (int j1109 = 0; j1109 < 4; j1109 = j1109 + 1) {
				fYec201_perm[j1109] = fYec201_tmp[vsize + j1109];
			}
			/* Vectorizable loop 916 */
			/* Pre code */
			for (int j1116 = 0; j1116 < 4; j1116 = j1116 + 1) {
				fYec203_tmp[j1116] = fYec203_perm[j1116];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec203[i] = 0.5416667f * fRec294[i] + fSlow87 * fZec369[i];
			}
			/* Post code */
			for (int j1117 = 0; j1117 < 4; j1117 = j1117 + 1) {
				fYec203_perm[j1117] = fYec203_tmp[vsize + j1117];
			}
			/* Vectorizable loop 917 */
			/* Pre code */
			for (int j1124 = 0; j1124 < 4; j1124 = j1124 + 1) {
				fYec205_tmp[j1124] = fYec205_perm[j1124];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec205[i] = 0.5416667f * fRec296[i] + fSlow90 * fZec370[i];
			}
			/* Post code */
			for (int j1125 = 0; j1125 < 4; j1125 = j1125 + 1) {
				fYec205_perm[j1125] = fYec205_tmp[vsize + j1125];
			}
			/* Vectorizable loop 918 */
			/* Pre code */
			for (int j1132 = 0; j1132 < 4; j1132 = j1132 + 1) {
				fYec207_tmp[j1132] = fYec207_perm[j1132];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec207[i] = 0.5416667f * fRec298[i] + fSlow93 * fZec371[i];
			}
			/* Post code */
			for (int j1133 = 0; j1133 < 4; j1133 = j1133 + 1) {
				fYec207_perm[j1133] = fYec207_tmp[vsize + j1133];
			}
			/* Recursive loop 919 */
			/* Pre code */
			for (int j1136 = 0; j1136 < 4; j1136 = j1136 + 1) {
				fRec300_tmp[j1136] = fRec300_perm[j1136];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec300[i] = fRec300[i - 1] + fConst24 * (fYec200[i] - fRec300[i - 1]);
			}
			/* Post code */
			for (int j1137 = 0; j1137 < 4; j1137 = j1137 + 1) {
				fRec300_perm[j1137] = fRec300_tmp[vsize + j1137];
			}
			/* Recursive loop 920 */
			/* Pre code */
			for (int j1140 = 0; j1140 < 4; j1140 = j1140 + 1) {
				fRec302_tmp[j1140] = fRec302_perm[j1140];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec302[i] = fRec302[i - 1] + fConst7 * (fYec202[i] - fRec302[i - 1]);
			}
			/* Post code */
			for (int j1141 = 0; j1141 < 4; j1141 = j1141 + 1) {
				fRec302_perm[j1141] = fRec302_tmp[vsize + j1141];
			}
			/* Recursive loop 921 */
			/* Pre code */
			for (int j1144 = 0; j1144 < 4; j1144 = j1144 + 1) {
				fRec304_tmp[j1144] = fRec304_perm[j1144];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec304[i] = fRec304[i - 1] + fConst20 * (fYec204[i] - fRec304[i - 1]);
			}
			/* Post code */
			for (int j1145 = 0; j1145 < 4; j1145 = j1145 + 1) {
				fRec304_perm[j1145] = fRec304_tmp[vsize + j1145];
			}
			/* Recursive loop 922 */
			/* Pre code */
			for (int j1148 = 0; j1148 < 4; j1148 = j1148 + 1) {
				fRec306_tmp[j1148] = fRec306_perm[j1148];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec306[i] = fRec306[i - 1] + fConst36 * (fYec206[i] - fRec306[i - 1]);
			}
			/* Post code */
			for (int j1149 = 0; j1149 < 4; j1149 = j1149 + 1) {
				fRec306_perm[j1149] = fRec306_tmp[vsize + j1149];
			}
			/* Vectorizable loop 923 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec375[i] = fZec114[i] + fZec93[i];
			}
			/* Vectorizable loop 924 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec376[i] = fZec113[i] + fZec91[i];
			}
			/* Vectorizable loop 925 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec377[i] = fZec112[i] + fZec89[i];
			}
			/* Vectorizable loop 926 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec378[i] = fZec111[i] + fZec87[i];
			}
			/* Recursive loop 927 */
			/* Pre code */
			for (int j0 = 0; j0 < 4; j0 = j0 + 1) {
				fRec0_tmp[j0] = fRec0_perm[j0];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec0[i] = fSlow0 + 0.98f * fRec0[i - 1];
			}
			/* Post code */
			for (int j1 = 0; j1 < 4; j1 = j1 + 1) {
				fRec0_perm[j1] = fRec0_tmp[vsize + j1];
			}
			/* Recursive loop 928 */
			/* Pre code */
			for (int j1098 = 0; j1098 < 4; j1098 = j1098 + 1) {
				fRec289_tmp[j1098] = fRec289_perm[j1098];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec289[i] = fConst26 * (fRec289[i - 1] + (fZec362[i] - (fZec361[i] + fYec198[i - 1])));
			}
			/* Post code */
			for (int j1099 = 0; j1099 < 4; j1099 = j1099 + 1) {
				fRec289_perm[j1099] = fRec289_tmp[vsize + j1099];
			}
			/* Recursive loop 929 */
			/* Pre code */
			for (int j1110 = 0; j1110 < 4; j1110 = j1110 + 1) {
				fRec291_tmp[j1110] = fRec291_perm[j1110];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec291[i] = fConst44 * (fRec291[i - 1] + (fYec201[i] - fYec201[i - 1]));
			}
			/* Post code */
			for (int j1111 = 0; j1111 < 4; j1111 = j1111 + 1) {
				fRec291_perm[j1111] = fRec291_tmp[vsize + j1111];
			}
			/* Recursive loop 930 */
			/* Pre code */
			for (int j1118 = 0; j1118 < 4; j1118 = j1118 + 1) {
				fRec293_tmp[j1118] = fRec293_perm[j1118];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec293[i] = fConst46 * (fRec293[i - 1] + (fYec203[i] - fYec203[i - 1]));
			}
			/* Post code */
			for (int j1119 = 0; j1119 < 4; j1119 = j1119 + 1) {
				fRec293_perm[j1119] = fRec293_tmp[vsize + j1119];
			}
			/* Recursive loop 931 */
			/* Pre code */
			for (int j1126 = 0; j1126 < 4; j1126 = j1126 + 1) {
				fRec295_tmp[j1126] = fRec295_perm[j1126];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec295[i] = fConst48 * (fRec295[i - 1] + (fYec205[i] - fYec205[i - 1]));
			}
			/* Post code */
			for (int j1127 = 0; j1127 < 4; j1127 = j1127 + 1) {
				fRec295_perm[j1127] = fRec295_tmp[vsize + j1127];
			}
			/* Recursive loop 932 */
			/* Pre code */
			for (int j1134 = 0; j1134 < 4; j1134 = j1134 + 1) {
				fRec297_tmp[j1134] = fRec297_perm[j1134];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec297[i] = fConst50 * (fRec297[i - 1] + (fYec207[i] - fYec207[i - 1]));
			}
			/* Post code */
			for (int j1135 = 0; j1135 < 4; j1135 = j1135 + 1) {
				fRec297_perm[j1135] = fRec297_tmp[vsize + j1135];
			}
			/* Recursive loop 933 */
			/* Pre code */
			for (int j1138 = 0; j1138 < 4; j1138 = j1138 + 1) {
				fRec299_tmp[j1138] = fRec299_perm[j1138];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec299[i] = fRec299[i - 1] + fConst24 * (fRec300[i] - fRec299[i - 1]);
			}
			/* Post code */
			for (int j1139 = 0; j1139 < 4; j1139 = j1139 + 1) {
				fRec299_perm[j1139] = fRec299_tmp[vsize + j1139];
			}
			/* Recursive loop 934 */
			/* Pre code */
			for (int j1142 = 0; j1142 < 4; j1142 = j1142 + 1) {
				fRec301_tmp[j1142] = fRec301_perm[j1142];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec301[i] = fRec301[i - 1] + fConst7 * (fRec302[i] - fRec301[i - 1]);
			}
			/* Post code */
			for (int j1143 = 0; j1143 < 4; j1143 = j1143 + 1) {
				fRec301_perm[j1143] = fRec301_tmp[vsize + j1143];
			}
			/* Recursive loop 935 */
			/* Pre code */
			for (int j1146 = 0; j1146 < 4; j1146 = j1146 + 1) {
				fRec303_tmp[j1146] = fRec303_perm[j1146];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec303[i] = fRec303[i - 1] + fConst20 * (fRec304[i] - fRec303[i - 1]);
			}
			/* Post code */
			for (int j1147 = 0; j1147 < 4; j1147 = j1147 + 1) {
				fRec303_perm[j1147] = fRec303_tmp[vsize + j1147];
			}
			/* Recursive loop 936 */
			/* Pre code */
			for (int j1150 = 0; j1150 < 4; j1150 = j1150 + 1) {
				fRec305_tmp[j1150] = fRec305_perm[j1150];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec305[i] = fRec305[i - 1] + fConst36 * (fRec306[i] - fRec305[i - 1]);
			}
			/* Post code */
			for (int j1151 = 0; j1151 < 4; j1151 = j1151 + 1) {
				fRec305_perm[j1151] = fRec305_tmp[vsize + j1151];
			}
			/* Recursive loop 937 */
			/* Pre code */
			for (int j1152 = 0; j1152 < 4; j1152 = j1152 + 1) {
				fRec307_tmp[j1152] = fRec307_perm[j1152];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec307[i] = fRec307[i - 1] + fConst51 * (fSlow79 * (fSlow97 * (0.25f * fZec363[i] + 0.125f * fZec315[i]) + fSlow95 * (0.25f * fZec269[i] + 0.125f * fZec363[i] + 0.0625f * fZec315[i])) - fRec307[i - 1]);
			}
			/* Post code */
			for (int j1153 = 0; j1153 < 4; j1153 = j1153 + 1) {
				fRec307_perm[j1153] = fRec307_tmp[vsize + j1153];
			}
			/* Recursive loop 938 */
			/* Pre code */
			for (int j1154 = 0; j1154 < 4; j1154 = j1154 + 1) {
				fRec308_tmp[j1154] = fRec308_perm[j1154];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec308[i] = fSlow98 + 0.98f * fRec308[i - 1];
			}
			/* Post code */
			for (int j1155 = 0; j1155 < 4; j1155 = j1155 + 1) {
				fRec308_perm[j1155] = fRec308_tmp[vsize + j1155];
			}
			/* Vectorizable loop 939 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec374[i] = 0.002f * fSlow81 * fRec141[i];
			}
			/* Vectorizable loop 940 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec379[i] = 0.25f * (fRec129[i] * fZec378[i] + fRec130[i] * fZec377[i] + fRec131[i] * fZec376[i] + fRec90[i] * (fZec85[i] + fZec122[i] + fZec109[i]) + fRec133[i] * (fZec115[i] + fZec95[i]) + fRec134[i] * (fZec116[i] + fZec97[i]) + fRec135[i] * (fZec117[i] + fZec99[i]) + fRec136[i] * (fZec118[i] + fZec101[i]) + fRec137[i] * (fZec119[i] + fZec103[i]) + fRec138[i] * (fZec120[i] + fZec105[i]) + fRec139[i] * (fZec121[i] + fZec107[i]) + fZec159[i] + fRec132[i] * fZec375[i]);
			}
			/* Vectorizable loop 941 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec380[i] = fZec109[i] + fZec85[i];
			}
			/* Vectorizable loop 942 */
			/* Pre code */
			for (int j1156 = 0; j1156 < 4; j1156 = j1156 + 1) {
				fYec208_tmp[j1156] = fYec208_perm[j1156];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec208[i] = std::min<float>(1.0f, fConst52 * fRec1[i]);
			}
			/* Post code */
			for (int j1157 = 0; j1157 < 4; j1157 = j1157 + 1) {
				fYec208_perm[j1157] = fYec208_tmp[vsize + j1157];
			}
			/* Vectorizable loop 943 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec372[i] = fRec307[i] * (4.5f * fRec308[i] + 0.5f);
			}
			/* Vectorizable loop 944 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec373[i] = fSlow103 * (fSlow101 * (fRec291[i] + fRec293[i] + fRec295[i] + fRec297[i]) + fSlow100 * (fRec299[i] + fRec301[i] + fRec303[i] + fRec305[i]));
			}
			/* Vectorizable loop 945 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec381[i] = fSlow118 * (fSlow117 * (fZec368[i] + 0.25f * (fZec272[i] + fZec273[i] + fZec274[i] + fZec275[i] + fZec276[i] + fZec277[i] + fZec278[i] + fZec279[i] + fZec280[i] + fZec281[i] + fZec282[i] + fZec283[i] + fZec284[i] + fZec285[i] + fZec286[i] + fZec287[i] + fZec288[i] + fZec289[i] + fZec290[i] + fZec291[i] + fZec292[i] + fZec293[i] + fZec294[i] + fZec295[i] + fZec296[i] + fZec297[i] + fZec298[i] + fZec299[i] + fZec300[i] + fZec301[i] + fZec302[i] + fZec303[i] + fZec304[i] + fZec305[i] + fZec306[i] + fZec307[i] + fZec308[i] + fZec309[i] + fZec310[i] + fZec311[i] + fZec312[i] + fZec313[i] + fZec314[i] + fZec86[i] + fZec316[i])) + fSlow115 * (fZec366[i] + 0.25f * (fRec90[i] * fZec380[i] + fZec319[i] + fZec320[i] + fZec321[i] + fZec322[i] + fZec323[i] + fZec324[i] + fZec325[i] + fZec326[i] + fZec327[i] + fZec328[i] + fZec329[i] + fZec330[i] + fZec331[i] + fZec332[i] + fZec333[i] + fZec334[i] + fZec335[i] + fZec336[i] + fZec337[i] + fZec338[i] + fZec339[i] + fZec340[i] + fZec341[i] + fZec342[i] + fZec343[i] + fZec344[i] + fZec345[i] + fZec346[i] + fZec347[i] + fZec348[i] + fZec349[i] + fZec350[i] + fZec88[i] + fZec90[i] + fZec92[i] + fZec94[i] + fZec96[i] + fZec98[i] + fZec100[i] + fZec102[i] + fZec104[i] + fZec108[i] + fZec106[i])) + fSlow113 * (0.002f * fSlow81 * fRec289[i] + 0.25f * (fRec136[i] * fZec380[i] + fRec137[i] * fZec378[i] + fRec138[i] * fZec377[i] + fRec139[i] * fZec376[i] + fRec90[i] * fZec375[i] + fZec353[i] + fZec354[i] + fZec355[i] + fZec356[i] + fZec357[i] + fZec358[i] + fZec360[i] + fZec359[i])) + fSlow111 * (fZec168[i] + fZec379[i]) + fSlow109 * fZec371[i] + fSlow107 * (fZec234[i] + fZec374[i]) + fSlow105 * fZec370[i]);
			}
			/* Vectorizable loop 946 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec382[i] = fSlow120 * std::max<float>(fSlow119, 0.25f * (fYec208[i] + fYec208[i - 2] + fYec208[i - 3] + fYec208[i - 4])) * (fZec374[i] + 0.5f * fZec371[i] + 0.25f * (fZec379[i] + fZec189[i] + fZec190[i] + fZec191[i] + fZec192[i] + fZec193[i] + fZec194[i] + fZec195[i] + fZec196[i] + fZec197[i] + fZec198[i] + fZec199[i] + fZec200[i] + fZec201[i] + fZec202[i] + fZec203[i] + fZec204[i] + fZec205[i] + fZec206[i] + fZec207[i] + fZec208[i] + fZec209[i] + fZec210[i] + fZec211[i] + fZec212[i] + fZec213[i] + fZec214[i] + fZec215[i] + fZec216[i] + fZec217[i] + fZec218[i] + fZec219[i] + fZec220[i] + fZec221[i] + fZec222[i] + fZec223[i] + fZec224[i] + fZec225[i] + fZec226[i] + fZec227[i] + fZec228[i] + fZec229[i] + fZec230[i] + fZec231[i] + fZec232[i] + fZec168[i] + fZec233[i]));
			}
			/* Vectorizable loop 947 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec383[i] = 0.05f * fRec0[i] + 0.001f;
			}
			/* Vectorizable loop 948 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				output0[i] = FAUSTFLOAT(fZec383[i] * (fZec382[i] + fZec381[i] + fZec373[i] + fZec372[i]));
			}
			/* Vectorizable loop 949 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				output1[i] = FAUSTFLOAT(fZec383[i] * (fZec373[i] + fZec381[i] + fZec382[i]));
			}
			/* Vectorizable loop 950 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				output2[i] = FAUSTFLOAT(fZec372[i] * fZec383[i]);
			}
		}
		/* Remaining frames */
		if (vindex < count) {
			FAUSTFLOAT* output0 = &output0_ptr[vindex];
			FAUSTFLOAT* output1 = &output1_ptr[vindex];
			FAUSTFLOAT* output2 = &output2_ptr[vindex];
			int vsize = count - vindex;
			/* Recursive loop 0 */
			/* Pre code */
			for (int j2 = 0; j2 < 4; j2 = j2 + 1) {
				fRec11_tmp[j2] = fRec11_perm[j2];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec11[i] = fSlow1 + ((fRec11[i - 1] > 1.0f) ? fRec11[i - 1] + -1.0f : fRec11[i - 1]);
			}
			/* Post code */
			for (int j3 = 0; j3 < 4; j3 = j3 + 1) {
				fRec11_perm[j3] = fRec11_tmp[vsize + j3];
			}
			/* Vectorizable loop 1 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec0[i] = fSlow3 + fSlow2 * std::sin(6.2831855f * fRec11[i]) + 1.0f;
			}
			/* Recursive loop 2 */
			/* Pre code */
			for (int j4 = 0; j4 < 4; j4 = j4 + 1) {
				fRec10_tmp[j4] = fRec10_perm[j4];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec1[i] = fRec10[i - 1] + fConst2 * fSlow6 * fZec0[i];
				fRec10[i] = ((fZec1[i] > 1.0f) ? fZec1[i] + -1.0f : fZec1[i]);
			}
			/* Post code */
			for (int j5 = 0; j5 < 4; j5 = j5 + 1) {
				fRec10_perm[j5] = fRec10_tmp[vsize + j5];
			}
			/* Recursive loop 3 */
			/* Pre code */
			for (int j20 = 0; j20 < 4; j20 = j20 + 1) {
				fRec16_tmp[j20] = fRec16_perm[j20];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec7[i] = fRec16[i - 1] + fConst6 * fSlow7 * fZec0[i];
				fRec16[i] = ((fZec7[i] > 1.0f) ? fZec7[i] + -1.0f : fZec7[i]);
			}
			/* Post code */
			for (int j21 = 0; j21 < 4; j21 = j21 + 1) {
				fRec16_perm[j21] = fRec16_tmp[vsize + j21];
			}
			/* Recursive loop 4 */
			/* Pre code */
			for (int j36 = 0; j36 < 4; j36 = j36 + 1) {
				fRec21_tmp[j36] = fRec21_perm[j36];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec13[i] = fRec21[i - 1] + fConst8 * fSlow8 * fZec0[i];
				fRec21[i] = ((fZec13[i] > 1.0f) ? fZec13[i] + -1.0f : fZec13[i]);
			}
			/* Post code */
			for (int j37 = 0; j37 < 4; j37 = j37 + 1) {
				fRec21_perm[j37] = fRec21_tmp[vsize + j37];
			}
			/* Recursive loop 5 */
			/* Pre code */
			for (int j52 = 0; j52 < 4; j52 = j52 + 1) {
				fRec26_tmp[j52] = fRec26_perm[j52];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec19[i] = fRec26[i - 1] + fConst9 * fSlow9 * fZec0[i];
				fRec26[i] = ((fZec19[i] > 1.0f) ? fZec19[i] + -1.0f : fZec19[i]);
			}
			/* Post code */
			for (int j53 = 0; j53 < 4; j53 = j53 + 1) {
				fRec26_perm[j53] = fRec26_tmp[vsize + j53];
			}
			/* Recursive loop 6 */
			/* Pre code */
			for (int j68 = 0; j68 < 4; j68 = j68 + 1) {
				fRec31_tmp[j68] = fRec31_perm[j68];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec25[i] = fRec31[i - 1] + fConst10 * fSlow10 * fZec0[i];
				fRec31[i] = ((fZec25[i] > 1.0f) ? fZec25[i] + -1.0f : fZec25[i]);
			}
			/* Post code */
			for (int j69 = 0; j69 < 4; j69 = j69 + 1) {
				fRec31_perm[j69] = fRec31_tmp[vsize + j69];
			}
			/* Recursive loop 7 */
			/* Pre code */
			for (int j84 = 0; j84 < 4; j84 = j84 + 1) {
				fRec37_tmp[j84] = fRec37_perm[j84];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec31[i] = fRec37[i - 1] + fConst11 * fSlow11 * fZec0[i];
				fRec37[i] = ((fZec31[i] > 1.0f) ? fZec31[i] + -1.0f : fZec31[i]);
			}
			/* Post code */
			for (int j85 = 0; j85 < 4; j85 = j85 + 1) {
				fRec37_perm[j85] = fRec37_tmp[vsize + j85];
			}
			/* Recursive loop 8 */
			/* Pre code */
			for (int j104 = 0; j104 < 4; j104 = j104 + 1) {
				fRec43_tmp[j104] = fRec43_perm[j104];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec38[i] = fRec43[i - 1] + fConst13 * fSlow12 * fZec0[i];
				fRec43[i] = ((fZec38[i] > 1.0f) ? fZec38[i] + -1.0f : fZec38[i]);
			}
			/* Post code */
			for (int j105 = 0; j105 < 4; j105 = j105 + 1) {
				fRec43_perm[j105] = fRec43_tmp[vsize + j105];
			}
			/* Recursive loop 9 */
			/* Pre code */
			for (int j124 = 0; j124 < 4; j124 = j124 + 1) {
				fRec49_tmp[j124] = fRec49_perm[j124];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec45[i] = fRec49[i - 1] + fConst14 * fSlow13 * fZec0[i];
				fRec49[i] = ((fZec45[i] > 1.0f) ? fZec45[i] + -1.0f : fZec45[i]);
			}
			/* Post code */
			for (int j125 = 0; j125 < 4; j125 = j125 + 1) {
				fRec49_perm[j125] = fRec49_tmp[vsize + j125];
			}
			/* Recursive loop 10 */
			/* Pre code */
			for (int j144 = 0; j144 < 4; j144 = j144 + 1) {
				fRec55_tmp[j144] = fRec55_perm[j144];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec52[i] = fRec55[i - 1] + fConst15 * fSlow14 * fZec0[i];
				fRec55[i] = ((fZec52[i] > 1.0f) ? fZec52[i] + -1.0f : fZec52[i]);
			}
			/* Post code */
			for (int j145 = 0; j145 < 4; j145 = j145 + 1) {
				fRec55_perm[j145] = fRec55_tmp[vsize + j145];
			}
			/* Recursive loop 11 */
			/* Pre code */
			for (int j164 = 0; j164 < 4; j164 = j164 + 1) {
				fRec61_tmp[j164] = fRec61_perm[j164];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec59[i] = fRec61[i - 1] + fConst16 * fSlow15 * fZec0[i];
				fRec61[i] = ((fZec59[i] > 1.0f) ? fZec59[i] + -1.0f : fZec59[i]);
			}
			/* Post code */
			for (int j165 = 0; j165 < 4; j165 = j165 + 1) {
				fRec61_perm[j165] = fRec61_tmp[vsize + j165];
			}
			/* Recursive loop 12 */
			/* Pre code */
			for (int j184 = 0; j184 < 4; j184 = j184 + 1) {
				fRec67_tmp[j184] = fRec67_perm[j184];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec66[i] = fRec67[i - 1] + fConst18 * fSlow16 * fZec0[i];
				fRec67[i] = ((fZec66[i] > 1.0f) ? fZec66[i] + -1.0f : fZec66[i]);
			}
			/* Post code */
			for (int j185 = 0; j185 < 4; j185 = j185 + 1) {
				fRec67_perm[j185] = fRec67_tmp[vsize + j185];
			}
			/* Recursive loop 13 */
			/* Pre code */
			for (int j204 = 0; j204 < 4; j204 = j204 + 1) {
				fRec73_tmp[j204] = fRec73_perm[j204];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec73[i] = fRec73[i - 1] + fConst19 * fSlow17 * fZec0[i];
				fRec73[i] = ((fZec73[i] > 1.0f) ? fZec73[i] + -1.0f : fZec73[i]);
			}
			/* Post code */
			for (int j205 = 0; j205 < 4; j205 = j205 + 1) {
				fRec73_perm[j205] = fRec73_tmp[vsize + j205];
			}
			/* Vectorizable loop 14 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec2[i] = fRec10[i] - fRec10[i - 1];
			}
			/* Vectorizable loop 15 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec8[i] = fRec16[i] - fRec16[i - 1];
			}
			/* Vectorizable loop 16 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec14[i] = fRec21[i] - fRec21[i - 1];
			}
			/* Vectorizable loop 17 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec20[i] = fRec26[i] - fRec26[i - 1];
			}
			/* Vectorizable loop 18 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec26[i] = fRec31[i] - fRec31[i - 1];
			}
			/* Vectorizable loop 19 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec32[i] = fRec37[i] - fRec37[i - 1];
			}
			/* Vectorizable loop 20 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec39[i] = fRec43[i] - fRec43[i - 1];
			}
			/* Vectorizable loop 21 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec46[i] = fRec49[i] - fRec49[i - 1];
			}
			/* Vectorizable loop 22 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec53[i] = fRec55[i] - fRec55[i - 1];
			}
			/* Vectorizable loop 23 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec60[i] = fRec61[i] - fRec61[i - 1];
			}
			/* Vectorizable loop 24 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec67[i] = fRec67[i] - fRec67[i - 1];
			}
			/* Vectorizable loop 25 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec74[i] = fRec73[i] - fRec73[i - 1];
			}
			/* Recursive loop 26 */
			/* Pre code */
			for (int j6 = 0; j6 < 4; j6 = j6 + 1) {
				iRec12_tmp[j6] = iRec12_perm[j6];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec12[i] = ((fZec2[i] < 0.0f) ? 1 - iRec12[i - 1] : iRec12[i - 1]);
			}
			/* Post code */
			for (int j7 = 0; j7 < 4; j7 = j7 + 1) {
				iRec12_perm[j7] = iRec12_tmp[vsize + j7];
			}
			/* Recursive loop 27 */
			/* Pre code */
			for (int j22 = 0; j22 < 4; j22 = j22 + 1) {
				iRec17_tmp[j22] = iRec17_perm[j22];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec17[i] = ((fZec8[i] < 0.0f) ? 1 - iRec17[i - 1] : iRec17[i - 1]);
			}
			/* Post code */
			for (int j23 = 0; j23 < 4; j23 = j23 + 1) {
				iRec17_perm[j23] = iRec17_tmp[vsize + j23];
			}
			/* Recursive loop 28 */
			/* Pre code */
			for (int j38 = 0; j38 < 4; j38 = j38 + 1) {
				iRec22_tmp[j38] = iRec22_perm[j38];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec22[i] = ((fZec14[i] < 0.0f) ? 1 - iRec22[i - 1] : iRec22[i - 1]);
			}
			/* Post code */
			for (int j39 = 0; j39 < 4; j39 = j39 + 1) {
				iRec22_perm[j39] = iRec22_tmp[vsize + j39];
			}
			/* Recursive loop 29 */
			/* Pre code */
			for (int j54 = 0; j54 < 4; j54 = j54 + 1) {
				iRec27_tmp[j54] = iRec27_perm[j54];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec27[i] = ((fZec20[i] < 0.0f) ? 1 - iRec27[i - 1] : iRec27[i - 1]);
			}
			/* Post code */
			for (int j55 = 0; j55 < 4; j55 = j55 + 1) {
				iRec27_perm[j55] = iRec27_tmp[vsize + j55];
			}
			/* Recursive loop 30 */
			/* Pre code */
			for (int j70 = 0; j70 < 4; j70 = j70 + 1) {
				iRec32_tmp[j70] = iRec32_perm[j70];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec32[i] = ((fZec26[i] < 0.0f) ? 1 - iRec32[i - 1] : iRec32[i - 1]);
			}
			/* Post code */
			for (int j71 = 0; j71 < 4; j71 = j71 + 1) {
				iRec32_perm[j71] = iRec32_tmp[vsize + j71];
			}
			/* Recursive loop 31 */
			/* Pre code */
			for (int j86 = 0; j86 < 4; j86 = j86 + 1) {
				iRec38_tmp[j86] = iRec38_perm[j86];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec38[i] = ((fZec32[i] < 0.0f) ? 1 - iRec38[i - 1] : iRec38[i - 1]);
			}
			/* Post code */
			for (int j87 = 0; j87 < 4; j87 = j87 + 1) {
				iRec38_perm[j87] = iRec38_tmp[vsize + j87];
			}
			/* Recursive loop 32 */
			/* Pre code */
			for (int j106 = 0; j106 < 4; j106 = j106 + 1) {
				iRec44_tmp[j106] = iRec44_perm[j106];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec44[i] = ((fZec39[i] < 0.0f) ? 1 - iRec44[i - 1] : iRec44[i - 1]);
			}
			/* Post code */
			for (int j107 = 0; j107 < 4; j107 = j107 + 1) {
				iRec44_perm[j107] = iRec44_tmp[vsize + j107];
			}
			/* Recursive loop 33 */
			/* Pre code */
			for (int j126 = 0; j126 < 4; j126 = j126 + 1) {
				iRec50_tmp[j126] = iRec50_perm[j126];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec50[i] = ((fZec46[i] < 0.0f) ? 1 - iRec50[i - 1] : iRec50[i - 1]);
			}
			/* Post code */
			for (int j127 = 0; j127 < 4; j127 = j127 + 1) {
				iRec50_perm[j127] = iRec50_tmp[vsize + j127];
			}
			/* Recursive loop 34 */
			/* Pre code */
			for (int j146 = 0; j146 < 4; j146 = j146 + 1) {
				iRec56_tmp[j146] = iRec56_perm[j146];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec56[i] = ((fZec53[i] < 0.0f) ? 1 - iRec56[i - 1] : iRec56[i - 1]);
			}
			/* Post code */
			for (int j147 = 0; j147 < 4; j147 = j147 + 1) {
				iRec56_perm[j147] = iRec56_tmp[vsize + j147];
			}
			/* Recursive loop 35 */
			/* Pre code */
			for (int j166 = 0; j166 < 4; j166 = j166 + 1) {
				iRec62_tmp[j166] = iRec62_perm[j166];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec62[i] = ((fZec60[i] < 0.0f) ? 1 - iRec62[i - 1] : iRec62[i - 1]);
			}
			/* Post code */
			for (int j167 = 0; j167 < 4; j167 = j167 + 1) {
				iRec62_perm[j167] = iRec62_tmp[vsize + j167];
			}
			/* Recursive loop 36 */
			/* Pre code */
			for (int j186 = 0; j186 < 4; j186 = j186 + 1) {
				iRec68_tmp[j186] = iRec68_perm[j186];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec68[i] = ((fZec67[i] < 0.0f) ? 1 - iRec68[i - 1] : iRec68[i - 1]);
			}
			/* Post code */
			for (int j187 = 0; j187 < 4; j187 = j187 + 1) {
				iRec68_perm[j187] = iRec68_tmp[vsize + j187];
			}
			/* Recursive loop 37 */
			/* Pre code */
			for (int j206 = 0; j206 < 4; j206 = j206 + 1) {
				iRec74_tmp[j206] = iRec74_perm[j206];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec74[i] = ((fZec74[i] < 0.0f) ? 1 - iRec74[i - 1] : iRec74[i - 1]);
			}
			/* Post code */
			for (int j207 = 0; j207 < 4; j207 = j207 + 1) {
				iRec74_perm[j207] = iRec74_tmp[vsize + j207];
			}
			/* Vectorizable loop 38 */
			/* Pre code */
			for (int j8 = 0; j8 < 4; j8 = j8 + 1) {
				fYec0_tmp[j8] = fYec0_perm[j8];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec0[i] = fRec10[i] + float(iRec12[i]);
			}
			/* Post code */
			for (int j9 = 0; j9 < 4; j9 = j9 + 1) {
				fYec0_perm[j9] = fYec0_tmp[vsize + j9];
			}
			/* Vectorizable loop 39 */
			/* Pre code */
			for (int j24 = 0; j24 < 4; j24 = j24 + 1) {
				fYec3_tmp[j24] = fYec3_perm[j24];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec3[i] = fRec16[i] + float(iRec17[i]);
			}
			/* Post code */
			for (int j25 = 0; j25 < 4; j25 = j25 + 1) {
				fYec3_perm[j25] = fYec3_tmp[vsize + j25];
			}
			/* Vectorizable loop 40 */
			/* Pre code */
			for (int j40 = 0; j40 < 4; j40 = j40 + 1) {
				fYec6_tmp[j40] = fYec6_perm[j40];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec6[i] = fRec21[i] + float(iRec22[i]);
			}
			/* Post code */
			for (int j41 = 0; j41 < 4; j41 = j41 + 1) {
				fYec6_perm[j41] = fYec6_tmp[vsize + j41];
			}
			/* Vectorizable loop 41 */
			/* Pre code */
			for (int j56 = 0; j56 < 4; j56 = j56 + 1) {
				fYec9_tmp[j56] = fYec9_perm[j56];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec9[i] = fRec26[i] + float(iRec27[i]);
			}
			/* Post code */
			for (int j57 = 0; j57 < 4; j57 = j57 + 1) {
				fYec9_perm[j57] = fYec9_tmp[vsize + j57];
			}
			/* Vectorizable loop 42 */
			/* Pre code */
			for (int j72 = 0; j72 < 4; j72 = j72 + 1) {
				fYec12_tmp[j72] = fYec12_perm[j72];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec12[i] = fRec31[i] + float(iRec32[i]);
			}
			/* Post code */
			for (int j73 = 0; j73 < 4; j73 = j73 + 1) {
				fYec12_perm[j73] = fYec12_tmp[vsize + j73];
			}
			/* Vectorizable loop 43 */
			/* Pre code */
			for (int j88 = 0; j88 < 4; j88 = j88 + 1) {
				fYec15_tmp[j88] = fYec15_perm[j88];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec15[i] = fRec37[i] + float(iRec38[i]);
			}
			/* Post code */
			for (int j89 = 0; j89 < 4; j89 = j89 + 1) {
				fYec15_perm[j89] = fYec15_tmp[vsize + j89];
			}
			/* Vectorizable loop 44 */
			/* Pre code */
			for (int j108 = 0; j108 < 4; j108 = j108 + 1) {
				fYec19_tmp[j108] = fYec19_perm[j108];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec19[i] = fRec43[i] + float(iRec44[i]);
			}
			/* Post code */
			for (int j109 = 0; j109 < 4; j109 = j109 + 1) {
				fYec19_perm[j109] = fYec19_tmp[vsize + j109];
			}
			/* Vectorizable loop 45 */
			/* Pre code */
			for (int j128 = 0; j128 < 4; j128 = j128 + 1) {
				fYec23_tmp[j128] = fYec23_perm[j128];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec23[i] = fRec49[i] + float(iRec50[i]);
			}
			/* Post code */
			for (int j129 = 0; j129 < 4; j129 = j129 + 1) {
				fYec23_perm[j129] = fYec23_tmp[vsize + j129];
			}
			/* Vectorizable loop 46 */
			/* Pre code */
			for (int j148 = 0; j148 < 4; j148 = j148 + 1) {
				fYec27_tmp[j148] = fYec27_perm[j148];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec27[i] = fRec55[i] + float(iRec56[i]);
			}
			/* Post code */
			for (int j149 = 0; j149 < 4; j149 = j149 + 1) {
				fYec27_perm[j149] = fYec27_tmp[vsize + j149];
			}
			/* Vectorizable loop 47 */
			/* Pre code */
			for (int j168 = 0; j168 < 4; j168 = j168 + 1) {
				fYec31_tmp[j168] = fYec31_perm[j168];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec31[i] = fRec61[i] + float(iRec62[i]);
			}
			/* Post code */
			for (int j169 = 0; j169 < 4; j169 = j169 + 1) {
				fYec31_perm[j169] = fYec31_tmp[vsize + j169];
			}
			/* Vectorizable loop 48 */
			/* Pre code */
			for (int j188 = 0; j188 < 4; j188 = j188 + 1) {
				fYec35_tmp[j188] = fYec35_perm[j188];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec35[i] = fRec67[i] + float(iRec68[i]);
			}
			/* Post code */
			for (int j189 = 0; j189 < 4; j189 = j189 + 1) {
				fYec35_perm[j189] = fYec35_tmp[vsize + j189];
			}
			/* Vectorizable loop 49 */
			/* Pre code */
			for (int j208 = 0; j208 < 4; j208 = j208 + 1) {
				fYec39_tmp[j208] = fYec39_perm[j208];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec39[i] = fRec73[i] + float(iRec74[i]);
			}
			/* Post code */
			for (int j209 = 0; j209 < 4; j209 = j209 + 1) {
				fYec39_perm[j209] = fYec39_tmp[vsize + j209];
			}
			/* Recursive loop 50 */
			/* Pre code */
			for (int j10 = 0; j10 < 4; j10 = j10 + 1) {
				iRec9_tmp[j10] = iRec9_perm[j10];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec9[i] = (((0.5f * (fYec0[i] - fYec0[i - 1])) < 0.0f) ? 1 - iRec9[i - 1] : iRec9[i - 1]);
			}
			/* Post code */
			for (int j11 = 0; j11 < 4; j11 = j11 + 1) {
				iRec9_perm[j11] = iRec9_tmp[vsize + j11];
			}
			/* Vectorizable loop 51 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec3[i] = 0.5f * fYec0[i];
			}
			/* Recursive loop 52 */
			/* Pre code */
			for (int j26 = 0; j26 < 4; j26 = j26 + 1) {
				iRec15_tmp[j26] = iRec15_perm[j26];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec15[i] = (((0.5f * (fYec3[i] - fYec3[i - 1])) < 0.0f) ? 1 - iRec15[i - 1] : iRec15[i - 1]);
			}
			/* Post code */
			for (int j27 = 0; j27 < 4; j27 = j27 + 1) {
				iRec15_perm[j27] = iRec15_tmp[vsize + j27];
			}
			/* Vectorizable loop 53 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec9[i] = 0.5f * fYec3[i];
			}
			/* Recursive loop 54 */
			/* Pre code */
			for (int j42 = 0; j42 < 4; j42 = j42 + 1) {
				iRec20_tmp[j42] = iRec20_perm[j42];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec20[i] = (((0.5f * (fYec6[i] - fYec6[i - 1])) < 0.0f) ? 1 - iRec20[i - 1] : iRec20[i - 1]);
			}
			/* Post code */
			for (int j43 = 0; j43 < 4; j43 = j43 + 1) {
				iRec20_perm[j43] = iRec20_tmp[vsize + j43];
			}
			/* Vectorizable loop 55 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec15[i] = 0.5f * fYec6[i];
			}
			/* Recursive loop 56 */
			/* Pre code */
			for (int j58 = 0; j58 < 4; j58 = j58 + 1) {
				iRec25_tmp[j58] = iRec25_perm[j58];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec25[i] = (((0.5f * (fYec9[i] - fYec9[i - 1])) < 0.0f) ? 1 - iRec25[i - 1] : iRec25[i - 1]);
			}
			/* Post code */
			for (int j59 = 0; j59 < 4; j59 = j59 + 1) {
				iRec25_perm[j59] = iRec25_tmp[vsize + j59];
			}
			/* Vectorizable loop 57 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec21[i] = 0.5f * fYec9[i];
			}
			/* Recursive loop 58 */
			/* Pre code */
			for (int j74 = 0; j74 < 4; j74 = j74 + 1) {
				iRec30_tmp[j74] = iRec30_perm[j74];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec30[i] = (((0.5f * (fYec12[i] - fYec12[i - 1])) < 0.0f) ? 1 - iRec30[i - 1] : iRec30[i - 1]);
			}
			/* Post code */
			for (int j75 = 0; j75 < 4; j75 = j75 + 1) {
				iRec30_perm[j75] = iRec30_tmp[vsize + j75];
			}
			/* Vectorizable loop 59 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec27[i] = 0.5f * fYec12[i];
			}
			/* Recursive loop 60 */
			/* Pre code */
			for (int j90 = 0; j90 < 4; j90 = j90 + 1) {
				iRec36_tmp[j90] = iRec36_perm[j90];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec36[i] = (((0.5f * (fYec15[i] - fYec15[i - 1])) < 0.0f) ? 1 - iRec36[i - 1] : iRec36[i - 1]);
			}
			/* Post code */
			for (int j91 = 0; j91 < 4; j91 = j91 + 1) {
				iRec36_perm[j91] = iRec36_tmp[vsize + j91];
			}
			/* Vectorizable loop 61 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec33[i] = 0.5f * fYec15[i];
			}
			/* Recursive loop 62 */
			/* Pre code */
			for (int j110 = 0; j110 < 4; j110 = j110 + 1) {
				iRec42_tmp[j110] = iRec42_perm[j110];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec42[i] = (((0.5f * (fYec19[i] - fYec19[i - 1])) < 0.0f) ? 1 - iRec42[i - 1] : iRec42[i - 1]);
			}
			/* Post code */
			for (int j111 = 0; j111 < 4; j111 = j111 + 1) {
				iRec42_perm[j111] = iRec42_tmp[vsize + j111];
			}
			/* Vectorizable loop 63 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec40[i] = 0.5f * fYec19[i];
			}
			/* Recursive loop 64 */
			/* Pre code */
			for (int j130 = 0; j130 < 4; j130 = j130 + 1) {
				iRec48_tmp[j130] = iRec48_perm[j130];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec48[i] = (((0.5f * (fYec23[i] - fYec23[i - 1])) < 0.0f) ? 1 - iRec48[i - 1] : iRec48[i - 1]);
			}
			/* Post code */
			for (int j131 = 0; j131 < 4; j131 = j131 + 1) {
				iRec48_perm[j131] = iRec48_tmp[vsize + j131];
			}
			/* Vectorizable loop 65 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec47[i] = 0.5f * fYec23[i];
			}
			/* Recursive loop 66 */
			/* Pre code */
			for (int j150 = 0; j150 < 4; j150 = j150 + 1) {
				iRec54_tmp[j150] = iRec54_perm[j150];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec54[i] = (((0.5f * (fYec27[i] - fYec27[i - 1])) < 0.0f) ? 1 - iRec54[i - 1] : iRec54[i - 1]);
			}
			/* Post code */
			for (int j151 = 0; j151 < 4; j151 = j151 + 1) {
				iRec54_perm[j151] = iRec54_tmp[vsize + j151];
			}
			/* Vectorizable loop 67 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec54[i] = 0.5f * fYec27[i];
			}
			/* Recursive loop 68 */
			/* Pre code */
			for (int j170 = 0; j170 < 4; j170 = j170 + 1) {
				iRec60_tmp[j170] = iRec60_perm[j170];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec60[i] = (((0.5f * (fYec31[i] - fYec31[i - 1])) < 0.0f) ? 1 - iRec60[i - 1] : iRec60[i - 1]);
			}
			/* Post code */
			for (int j171 = 0; j171 < 4; j171 = j171 + 1) {
				iRec60_perm[j171] = iRec60_tmp[vsize + j171];
			}
			/* Vectorizable loop 69 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec61[i] = 0.5f * fYec31[i];
			}
			/* Recursive loop 70 */
			/* Pre code */
			for (int j190 = 0; j190 < 4; j190 = j190 + 1) {
				iRec66_tmp[j190] = iRec66_perm[j190];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec66[i] = (((0.5f * (fYec35[i] - fYec35[i - 1])) < 0.0f) ? 1 - iRec66[i - 1] : iRec66[i - 1]);
			}
			/* Post code */
			for (int j191 = 0; j191 < 4; j191 = j191 + 1) {
				iRec66_perm[j191] = iRec66_tmp[vsize + j191];
			}
			/* Vectorizable loop 71 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec68[i] = 0.5f * fYec35[i];
			}
			/* Recursive loop 72 */
			/* Pre code */
			for (int j210 = 0; j210 < 4; j210 = j210 + 1) {
				iRec72_tmp[j210] = iRec72_perm[j210];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec72[i] = (((0.5f * (fYec39[i] - fYec39[i - 1])) < 0.0f) ? 1 - iRec72[i - 1] : iRec72[i - 1]);
			}
			/* Post code */
			for (int j211 = 0; j211 < 4; j211 = j211 + 1) {
				iRec72_perm[j211] = iRec72_tmp[vsize + j211];
			}
			/* Vectorizable loop 73 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec75[i] = 0.5f * fYec39[i];
			}
			/* Vectorizable loop 74 */
			/* Pre code */
			for (int j12 = 0; j12 < 4; j12 = j12 + 1) {
				fYec1_tmp[j12] = fYec1_perm[j12];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec1[i] = float(iRec9[i]) + fZec3[i];
			}
			/* Post code */
			for (int j13 = 0; j13 < 4; j13 = j13 + 1) {
				fYec1_perm[j13] = fYec1_tmp[vsize + j13];
			}
			/* Vectorizable loop 75 */
			/* Pre code */
			for (int j28 = 0; j28 < 4; j28 = j28 + 1) {
				fYec4_tmp[j28] = fYec4_perm[j28];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec4[i] = float(iRec15[i]) + fZec9[i];
			}
			/* Post code */
			for (int j29 = 0; j29 < 4; j29 = j29 + 1) {
				fYec4_perm[j29] = fYec4_tmp[vsize + j29];
			}
			/* Vectorizable loop 76 */
			/* Pre code */
			for (int j44 = 0; j44 < 4; j44 = j44 + 1) {
				fYec7_tmp[j44] = fYec7_perm[j44];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec7[i] = float(iRec20[i]) + fZec15[i];
			}
			/* Post code */
			for (int j45 = 0; j45 < 4; j45 = j45 + 1) {
				fYec7_perm[j45] = fYec7_tmp[vsize + j45];
			}
			/* Vectorizable loop 77 */
			/* Pre code */
			for (int j60 = 0; j60 < 4; j60 = j60 + 1) {
				fYec10_tmp[j60] = fYec10_perm[j60];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec10[i] = float(iRec25[i]) + fZec21[i];
			}
			/* Post code */
			for (int j61 = 0; j61 < 4; j61 = j61 + 1) {
				fYec10_perm[j61] = fYec10_tmp[vsize + j61];
			}
			/* Vectorizable loop 78 */
			/* Pre code */
			for (int j76 = 0; j76 < 4; j76 = j76 + 1) {
				fYec13_tmp[j76] = fYec13_perm[j76];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec13[i] = float(iRec30[i]) + fZec27[i];
			}
			/* Post code */
			for (int j77 = 0; j77 < 4; j77 = j77 + 1) {
				fYec13_perm[j77] = fYec13_tmp[vsize + j77];
			}
			/* Vectorizable loop 79 */
			/* Pre code */
			for (int j92 = 0; j92 < 4; j92 = j92 + 1) {
				fYec16_tmp[j92] = fYec16_perm[j92];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec16[i] = float(iRec36[i]) + fZec33[i];
			}
			/* Post code */
			for (int j93 = 0; j93 < 4; j93 = j93 + 1) {
				fYec16_perm[j93] = fYec16_tmp[vsize + j93];
			}
			/* Vectorizable loop 80 */
			/* Pre code */
			for (int j112 = 0; j112 < 4; j112 = j112 + 1) {
				fYec20_tmp[j112] = fYec20_perm[j112];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec20[i] = float(iRec42[i]) + fZec40[i];
			}
			/* Post code */
			for (int j113 = 0; j113 < 4; j113 = j113 + 1) {
				fYec20_perm[j113] = fYec20_tmp[vsize + j113];
			}
			/* Vectorizable loop 81 */
			/* Pre code */
			for (int j132 = 0; j132 < 4; j132 = j132 + 1) {
				fYec24_tmp[j132] = fYec24_perm[j132];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec24[i] = float(iRec48[i]) + fZec47[i];
			}
			/* Post code */
			for (int j133 = 0; j133 < 4; j133 = j133 + 1) {
				fYec24_perm[j133] = fYec24_tmp[vsize + j133];
			}
			/* Vectorizable loop 82 */
			/* Pre code */
			for (int j152 = 0; j152 < 4; j152 = j152 + 1) {
				fYec28_tmp[j152] = fYec28_perm[j152];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec28[i] = float(iRec54[i]) + fZec54[i];
			}
			/* Post code */
			for (int j153 = 0; j153 < 4; j153 = j153 + 1) {
				fYec28_perm[j153] = fYec28_tmp[vsize + j153];
			}
			/* Vectorizable loop 83 */
			/* Pre code */
			for (int j172 = 0; j172 < 4; j172 = j172 + 1) {
				fYec32_tmp[j172] = fYec32_perm[j172];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec32[i] = float(iRec60[i]) + fZec61[i];
			}
			/* Post code */
			for (int j173 = 0; j173 < 4; j173 = j173 + 1) {
				fYec32_perm[j173] = fYec32_tmp[vsize + j173];
			}
			/* Vectorizable loop 84 */
			/* Pre code */
			for (int j192 = 0; j192 < 4; j192 = j192 + 1) {
				fYec36_tmp[j192] = fYec36_perm[j192];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec36[i] = float(iRec66[i]) + fZec68[i];
			}
			/* Post code */
			for (int j193 = 0; j193 < 4; j193 = j193 + 1) {
				fYec36_perm[j193] = fYec36_tmp[vsize + j193];
			}
			/* Vectorizable loop 85 */
			/* Pre code */
			for (int j212 = 0; j212 < 4; j212 = j212 + 1) {
				fYec40_tmp[j212] = fYec40_perm[j212];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec40[i] = float(iRec72[i]) + fZec75[i];
			}
			/* Post code */
			for (int j213 = 0; j213 < 4; j213 = j213 + 1) {
				fYec40_perm[j213] = fYec40_tmp[vsize + j213];
			}
			/* Vectorizable loop 86 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec4[i] = 0.5f * fYec1[i];
			}
			/* Vectorizable loop 87 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec10[i] = 0.5f * fYec4[i];
			}
			/* Vectorizable loop 88 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec16[i] = 0.5f * fYec7[i];
			}
			/* Vectorizable loop 89 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec22[i] = 0.5f * fYec10[i];
			}
			/* Vectorizable loop 90 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec28[i] = 0.5f * fYec13[i];
			}
			/* Recursive loop 91 */
			/* Pre code */
			for (int j94 = 0; j94 < 4; j94 = j94 + 1) {
				iRec35_tmp[j94] = iRec35_perm[j94];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec35[i] = (((0.5f * (fYec16[i] - fYec16[i - 1])) < 0.0f) ? 1 - iRec35[i - 1] : iRec35[i - 1]);
			}
			/* Post code */
			for (int j95 = 0; j95 < 4; j95 = j95 + 1) {
				iRec35_perm[j95] = iRec35_tmp[vsize + j95];
			}
			/* Vectorizable loop 92 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec34[i] = 0.5f * fYec16[i];
			}
			/* Recursive loop 93 */
			/* Pre code */
			for (int j114 = 0; j114 < 4; j114 = j114 + 1) {
				iRec41_tmp[j114] = iRec41_perm[j114];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec41[i] = (((0.5f * (fYec20[i] - fYec20[i - 1])) < 0.0f) ? 1 - iRec41[i - 1] : iRec41[i - 1]);
			}
			/* Post code */
			for (int j115 = 0; j115 < 4; j115 = j115 + 1) {
				iRec41_perm[j115] = iRec41_tmp[vsize + j115];
			}
			/* Vectorizable loop 94 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec41[i] = 0.5f * fYec20[i];
			}
			/* Recursive loop 95 */
			/* Pre code */
			for (int j134 = 0; j134 < 4; j134 = j134 + 1) {
				iRec47_tmp[j134] = iRec47_perm[j134];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec47[i] = (((0.5f * (fYec24[i] - fYec24[i - 1])) < 0.0f) ? 1 - iRec47[i - 1] : iRec47[i - 1]);
			}
			/* Post code */
			for (int j135 = 0; j135 < 4; j135 = j135 + 1) {
				iRec47_perm[j135] = iRec47_tmp[vsize + j135];
			}
			/* Vectorizable loop 96 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec48[i] = 0.5f * fYec24[i];
			}
			/* Recursive loop 97 */
			/* Pre code */
			for (int j154 = 0; j154 < 4; j154 = j154 + 1) {
				iRec53_tmp[j154] = iRec53_perm[j154];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec53[i] = (((0.5f * (fYec28[i] - fYec28[i - 1])) < 0.0f) ? 1 - iRec53[i - 1] : iRec53[i - 1]);
			}
			/* Post code */
			for (int j155 = 0; j155 < 4; j155 = j155 + 1) {
				iRec53_perm[j155] = iRec53_tmp[vsize + j155];
			}
			/* Vectorizable loop 98 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec55[i] = 0.5f * fYec28[i];
			}
			/* Recursive loop 99 */
			/* Pre code */
			for (int j174 = 0; j174 < 4; j174 = j174 + 1) {
				iRec59_tmp[j174] = iRec59_perm[j174];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec59[i] = (((0.5f * (fYec32[i] - fYec32[i - 1])) < 0.0f) ? 1 - iRec59[i - 1] : iRec59[i - 1]);
			}
			/* Post code */
			for (int j175 = 0; j175 < 4; j175 = j175 + 1) {
				iRec59_perm[j175] = iRec59_tmp[vsize + j175];
			}
			/* Vectorizable loop 100 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec62[i] = 0.5f * fYec32[i];
			}
			/* Recursive loop 101 */
			/* Pre code */
			for (int j194 = 0; j194 < 4; j194 = j194 + 1) {
				iRec65_tmp[j194] = iRec65_perm[j194];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec65[i] = (((0.5f * (fYec36[i] - fYec36[i - 1])) < 0.0f) ? 1 - iRec65[i - 1] : iRec65[i - 1]);
			}
			/* Post code */
			for (int j195 = 0; j195 < 4; j195 = j195 + 1) {
				iRec65_perm[j195] = iRec65_tmp[vsize + j195];
			}
			/* Vectorizable loop 102 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec69[i] = 0.5f * fYec36[i];
			}
			/* Recursive loop 103 */
			/* Pre code */
			for (int j214 = 0; j214 < 4; j214 = j214 + 1) {
				iRec71_tmp[j214] = iRec71_perm[j214];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec71[i] = (((0.5f * (fYec40[i] - fYec40[i - 1])) < 0.0f) ? 1 - iRec71[i - 1] : iRec71[i - 1]);
			}
			/* Post code */
			for (int j215 = 0; j215 < 4; j215 = j215 + 1) {
				iRec71_perm[j215] = iRec71_tmp[vsize + j215];
			}
			/* Vectorizable loop 104 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec76[i] = 0.5f * fYec40[i];
			}
			/* Recursive loop 105 */
			/* Pre code */
			for (int j224 = 0; j224 < 4; j224 = j224 + 1) {
				iRec77_tmp[j224] = iRec77_perm[j224];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec77[i] = (((0.5f * (fYec1[i] - fYec1[i - 1])) < 0.0f) ? 1 - iRec77[i - 1] : iRec77[i - 1]);
			}
			/* Post code */
			for (int j225 = 0; j225 < 4; j225 = j225 + 1) {
				iRec77_perm[j225] = iRec77_tmp[vsize + j225];
			}
			/* Recursive loop 106 */
			/* Pre code */
			for (int j234 = 0; j234 < 4; j234 = j234 + 1) {
				iRec80_tmp[j234] = iRec80_perm[j234];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec80[i] = (((0.5f * (fYec4[i] - fYec4[i - 1])) < 0.0f) ? 1 - iRec80[i - 1] : iRec80[i - 1]);
			}
			/* Post code */
			for (int j235 = 0; j235 < 4; j235 = j235 + 1) {
				iRec80_perm[j235] = iRec80_tmp[vsize + j235];
			}
			/* Recursive loop 107 */
			/* Pre code */
			for (int j244 = 0; j244 < 4; j244 = j244 + 1) {
				iRec83_tmp[j244] = iRec83_perm[j244];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec83[i] = (((0.5f * (fYec7[i] - fYec7[i - 1])) < 0.0f) ? 1 - iRec83[i - 1] : iRec83[i - 1]);
			}
			/* Post code */
			for (int j245 = 0; j245 < 4; j245 = j245 + 1) {
				iRec83_perm[j245] = iRec83_tmp[vsize + j245];
			}
			/* Recursive loop 108 */
			/* Pre code */
			for (int j254 = 0; j254 < 4; j254 = j254 + 1) {
				iRec86_tmp[j254] = iRec86_perm[j254];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec86[i] = (((0.5f * (fYec13[i] - fYec13[i - 1])) < 0.0f) ? 1 - iRec86[i - 1] : iRec86[i - 1]);
			}
			/* Post code */
			for (int j255 = 0; j255 < 4; j255 = j255 + 1) {
				iRec86_perm[j255] = iRec86_tmp[vsize + j255];
			}
			/* Recursive loop 109 */
			/* Pre code */
			for (int j264 = 0; j264 < 4; j264 = j264 + 1) {
				iRec89_tmp[j264] = iRec89_perm[j264];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec89[i] = (((0.5f * (fYec10[i] - fYec10[i - 1])) < 0.0f) ? 1 - iRec89[i - 1] : iRec89[i - 1]);
			}
			/* Post code */
			for (int j265 = 0; j265 < 4; j265 = j265 + 1) {
				iRec89_perm[j265] = iRec89_tmp[vsize + j265];
			}
			/* Vectorizable loop 110 */
			/* Pre code */
			for (int j96 = 0; j96 < 4; j96 = j96 + 1) {
				fYec17_tmp[j96] = fYec17_perm[j96];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec17[i] = float(iRec35[i]) + fZec34[i];
			}
			/* Post code */
			for (int j97 = 0; j97 < 4; j97 = j97 + 1) {
				fYec17_perm[j97] = fYec17_tmp[vsize + j97];
			}
			/* Vectorizable loop 111 */
			/* Pre code */
			for (int j116 = 0; j116 < 4; j116 = j116 + 1) {
				fYec21_tmp[j116] = fYec21_perm[j116];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec21[i] = float(iRec41[i]) + fZec41[i];
			}
			/* Post code */
			for (int j117 = 0; j117 < 4; j117 = j117 + 1) {
				fYec21_perm[j117] = fYec21_tmp[vsize + j117];
			}
			/* Vectorizable loop 112 */
			/* Pre code */
			for (int j136 = 0; j136 < 4; j136 = j136 + 1) {
				fYec25_tmp[j136] = fYec25_perm[j136];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec25[i] = float(iRec47[i]) + fZec48[i];
			}
			/* Post code */
			for (int j137 = 0; j137 < 4; j137 = j137 + 1) {
				fYec25_perm[j137] = fYec25_tmp[vsize + j137];
			}
			/* Vectorizable loop 113 */
			/* Pre code */
			for (int j156 = 0; j156 < 4; j156 = j156 + 1) {
				fYec29_tmp[j156] = fYec29_perm[j156];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec29[i] = float(iRec53[i]) + fZec55[i];
			}
			/* Post code */
			for (int j157 = 0; j157 < 4; j157 = j157 + 1) {
				fYec29_perm[j157] = fYec29_tmp[vsize + j157];
			}
			/* Vectorizable loop 114 */
			/* Pre code */
			for (int j176 = 0; j176 < 4; j176 = j176 + 1) {
				fYec33_tmp[j176] = fYec33_perm[j176];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec33[i] = float(iRec59[i]) + fZec62[i];
			}
			/* Post code */
			for (int j177 = 0; j177 < 4; j177 = j177 + 1) {
				fYec33_perm[j177] = fYec33_tmp[vsize + j177];
			}
			/* Vectorizable loop 115 */
			/* Pre code */
			for (int j196 = 0; j196 < 4; j196 = j196 + 1) {
				fYec37_tmp[j196] = fYec37_perm[j196];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec37[i] = float(iRec65[i]) + fZec69[i];
			}
			/* Post code */
			for (int j197 = 0; j197 < 4; j197 = j197 + 1) {
				fYec37_perm[j197] = fYec37_tmp[vsize + j197];
			}
			/* Vectorizable loop 116 */
			/* Pre code */
			for (int j216 = 0; j216 < 4; j216 = j216 + 1) {
				fYec41_tmp[j216] = fYec41_perm[j216];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec41[i] = float(iRec71[i]) + fZec76[i];
			}
			/* Post code */
			for (int j217 = 0; j217 < 4; j217 = j217 + 1) {
				fYec41_perm[j217] = fYec41_tmp[vsize + j217];
			}
			/* Vectorizable loop 117 */
			/* Pre code */
			for (int j226 = 0; j226 < 4; j226 = j226 + 1) {
				fYec43_tmp[j226] = fYec43_perm[j226];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec43[i] = float(iRec77[i]) + fZec4[i];
			}
			/* Post code */
			for (int j227 = 0; j227 < 4; j227 = j227 + 1) {
				fYec43_perm[j227] = fYec43_tmp[vsize + j227];
			}
			/* Vectorizable loop 118 */
			/* Pre code */
			for (int j236 = 0; j236 < 4; j236 = j236 + 1) {
				fYec45_tmp[j236] = fYec45_perm[j236];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec45[i] = float(iRec80[i]) + fZec10[i];
			}
			/* Post code */
			for (int j237 = 0; j237 < 4; j237 = j237 + 1) {
				fYec45_perm[j237] = fYec45_tmp[vsize + j237];
			}
			/* Vectorizable loop 119 */
			/* Pre code */
			for (int j246 = 0; j246 < 4; j246 = j246 + 1) {
				fYec47_tmp[j246] = fYec47_perm[j246];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec47[i] = float(iRec83[i]) + fZec16[i];
			}
			/* Post code */
			for (int j247 = 0; j247 < 4; j247 = j247 + 1) {
				fYec47_perm[j247] = fYec47_tmp[vsize + j247];
			}
			/* Vectorizable loop 120 */
			/* Pre code */
			for (int j256 = 0; j256 < 4; j256 = j256 + 1) {
				fYec49_tmp[j256] = fYec49_perm[j256];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec49[i] = float(iRec86[i]) + fZec28[i];
			}
			/* Post code */
			for (int j257 = 0; j257 < 4; j257 = j257 + 1) {
				fYec49_perm[j257] = fYec49_tmp[vsize + j257];
			}
			/* Vectorizable loop 121 */
			/* Pre code */
			for (int j266 = 0; j266 < 4; j266 = j266 + 1) {
				fYec51_tmp[j266] = fYec51_perm[j266];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec51[i] = float(iRec89[i]) + fZec22[i];
			}
			/* Post code */
			for (int j267 = 0; j267 < 4; j267 = j267 + 1) {
				fYec51_perm[j267] = fYec51_tmp[vsize + j267];
			}
			/* Vectorizable loop 122 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec35[i] = 0.5f * fYec17[i];
			}
			/* Vectorizable loop 123 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec42[i] = 0.5f * fYec21[i];
			}
			/* Vectorizable loop 124 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec49[i] = 0.5f * fYec25[i];
			}
			/* Vectorizable loop 125 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec56[i] = 0.5f * fYec29[i];
			}
			/* Vectorizable loop 126 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec63[i] = 0.5f * fYec33[i];
			}
			/* Vectorizable loop 127 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec70[i] = 0.5f * fYec37[i];
			}
			/* Vectorizable loop 128 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec77[i] = 0.5f * fYec41[i];
			}
			/* Vectorizable loop 129 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec80[i] = 0.5f * fYec43[i];
			}
			/* Vectorizable loop 130 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec81[i] = 0.5f * fYec45[i];
			}
			/* Vectorizable loop 131 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec82[i] = 0.5f * fYec47[i];
			}
			/* Vectorizable loop 132 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec83[i] = 0.5f * fYec49[i];
			}
			/* Vectorizable loop 133 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec84[i] = 0.5f * fYec51[i];
			}
			/* Recursive loop 134 */
			/* Pre code */
			for (int j600 = 0; j600 < 4; j600 = j600 + 1) {
				iRec145_tmp[j600] = iRec145_perm[j600];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec145[i] = (((0.5f * (fYec17[i] - fYec17[i - 1])) < 0.0f) ? 1 - iRec145[i - 1] : iRec145[i - 1]);
			}
			/* Post code */
			for (int j601 = 0; j601 < 4; j601 = j601 + 1) {
				iRec145_perm[j601] = iRec145_tmp[vsize + j601];
			}
			/* Recursive loop 135 */
			/* Pre code */
			for (int j614 = 0; j614 < 4; j614 = j614 + 1) {
				iRec149_tmp[j614] = iRec149_perm[j614];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec149[i] = (((0.5f * (fYec21[i] - fYec21[i - 1])) < 0.0f) ? 1 - iRec149[i - 1] : iRec149[i - 1]);
			}
			/* Post code */
			for (int j615 = 0; j615 < 4; j615 = j615 + 1) {
				iRec149_perm[j615] = iRec149_tmp[vsize + j615];
			}
			/* Recursive loop 136 */
			/* Pre code */
			for (int j628 = 0; j628 < 4; j628 = j628 + 1) {
				iRec153_tmp[j628] = iRec153_perm[j628];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec153[i] = (((0.5f * (fYec25[i] - fYec25[i - 1])) < 0.0f) ? 1 - iRec153[i - 1] : iRec153[i - 1]);
			}
			/* Post code */
			for (int j629 = 0; j629 < 4; j629 = j629 + 1) {
				iRec153_perm[j629] = iRec153_tmp[vsize + j629];
			}
			/* Recursive loop 137 */
			/* Pre code */
			for (int j642 = 0; j642 < 4; j642 = j642 + 1) {
				iRec157_tmp[j642] = iRec157_perm[j642];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec157[i] = (((0.5f * (fYec29[i] - fYec29[i - 1])) < 0.0f) ? 1 - iRec157[i - 1] : iRec157[i - 1]);
			}
			/* Post code */
			for (int j643 = 0; j643 < 4; j643 = j643 + 1) {
				iRec157_perm[j643] = iRec157_tmp[vsize + j643];
			}
			/* Recursive loop 138 */
			/* Pre code */
			for (int j656 = 0; j656 < 4; j656 = j656 + 1) {
				iRec161_tmp[j656] = iRec161_perm[j656];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec161[i] = (((0.5f * (fYec33[i] - fYec33[i - 1])) < 0.0f) ? 1 - iRec161[i - 1] : iRec161[i - 1]);
			}
			/* Post code */
			for (int j657 = 0; j657 < 4; j657 = j657 + 1) {
				iRec161_perm[j657] = iRec161_tmp[vsize + j657];
			}
			/* Recursive loop 139 */
			/* Pre code */
			for (int j670 = 0; j670 < 4; j670 = j670 + 1) {
				iRec164_tmp[j670] = iRec164_perm[j670];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec164[i] = (((0.5f * (fYec45[i] - fYec45[i - 1])) < 0.0f) ? 1 - iRec164[i - 1] : iRec164[i - 1]);
			}
			/* Post code */
			for (int j671 = 0; j671 < 4; j671 = j671 + 1) {
				iRec164_perm[j671] = iRec164_tmp[vsize + j671];
			}
			/* Recursive loop 140 */
			/* Pre code */
			for (int j680 = 0; j680 < 4; j680 = j680 + 1) {
				iRec167_tmp[j680] = iRec167_perm[j680];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec167[i] = (((0.5f * (fYec47[i] - fYec47[i - 1])) < 0.0f) ? 1 - iRec167[i - 1] : iRec167[i - 1]);
			}
			/* Post code */
			for (int j681 = 0; j681 < 4; j681 = j681 + 1) {
				iRec167_perm[j681] = iRec167_tmp[vsize + j681];
			}
			/* Recursive loop 141 */
			/* Pre code */
			for (int j690 = 0; j690 < 4; j690 = j690 + 1) {
				iRec170_tmp[j690] = iRec170_perm[j690];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec170[i] = (((0.5f * (fYec51[i] - fYec51[i - 1])) < 0.0f) ? 1 - iRec170[i - 1] : iRec170[i - 1]);
			}
			/* Post code */
			for (int j691 = 0; j691 < 4; j691 = j691 + 1) {
				iRec170_perm[j691] = iRec170_tmp[vsize + j691];
			}
			/* Recursive loop 142 */
			/* Pre code */
			for (int j700 = 0; j700 < 4; j700 = j700 + 1) {
				iRec173_tmp[j700] = iRec173_perm[j700];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec173[i] = (((0.5f * (fYec49[i] - fYec49[i - 1])) < 0.0f) ? 1 - iRec173[i - 1] : iRec173[i - 1]);
			}
			/* Post code */
			for (int j701 = 0; j701 < 4; j701 = j701 + 1) {
				iRec173_perm[j701] = iRec173_tmp[vsize + j701];
			}
			/* Recursive loop 143 */
			/* Pre code */
			for (int j740 = 0; j740 < 4; j740 = j740 + 1) {
				iRec186_tmp[j740] = iRec186_perm[j740];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec186[i] = (((0.5f * (fYec37[i] - fYec37[i - 1])) < 0.0f) ? 1 - iRec186[i - 1] : iRec186[i - 1]);
			}
			/* Post code */
			for (int j741 = 0; j741 < 4; j741 = j741 + 1) {
				iRec186_perm[j741] = iRec186_tmp[vsize + j741];
			}
			/* Recursive loop 144 */
			/* Pre code */
			for (int j750 = 0; j750 < 4; j750 = j750 + 1) {
				iRec189_tmp[j750] = iRec189_perm[j750];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec189[i] = (((0.5f * (fYec43[i] - fYec43[i - 1])) < 0.0f) ? 1 - iRec189[i - 1] : iRec189[i - 1]);
			}
			/* Post code */
			for (int j751 = 0; j751 < 4; j751 = j751 + 1) {
				iRec189_perm[j751] = iRec189_tmp[vsize + j751];
			}
			/* Recursive loop 145 */
			/* Pre code */
			for (int j760 = 0; j760 < 4; j760 = j760 + 1) {
				iRec192_tmp[j760] = iRec192_perm[j760];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec192[i] = (((0.5f * (fYec41[i] - fYec41[i - 1])) < 0.0f) ? 1 - iRec192[i - 1] : iRec192[i - 1]);
			}
			/* Post code */
			for (int j761 = 0; j761 < 4; j761 = j761 + 1) {
				iRec192_perm[j761] = iRec192_tmp[vsize + j761];
			}
			/* Vectorizable loop 146 */
			/* Pre code */
			for (int j602 = 0; j602 < 4; j602 = j602 + 1) {
				fYec98_tmp[j602] = fYec98_perm[j602];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec98[i] = float(iRec145[i]) + fZec35[i];
			}
			/* Post code */
			for (int j603 = 0; j603 < 4; j603 = j603 + 1) {
				fYec98_perm[j603] = fYec98_tmp[vsize + j603];
			}
			/* Vectorizable loop 147 */
			/* Pre code */
			for (int j616 = 0; j616 < 4; j616 = j616 + 1) {
				fYec101_tmp[j616] = fYec101_perm[j616];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec101[i] = float(iRec149[i]) + fZec42[i];
			}
			/* Post code */
			for (int j617 = 0; j617 < 4; j617 = j617 + 1) {
				fYec101_perm[j617] = fYec101_tmp[vsize + j617];
			}
			/* Vectorizable loop 148 */
			/* Pre code */
			for (int j630 = 0; j630 < 4; j630 = j630 + 1) {
				fYec104_tmp[j630] = fYec104_perm[j630];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec104[i] = float(iRec153[i]) + fZec49[i];
			}
			/* Post code */
			for (int j631 = 0; j631 < 4; j631 = j631 + 1) {
				fYec104_perm[j631] = fYec104_tmp[vsize + j631];
			}
			/* Vectorizable loop 149 */
			/* Pre code */
			for (int j644 = 0; j644 < 4; j644 = j644 + 1) {
				fYec107_tmp[j644] = fYec107_perm[j644];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec107[i] = float(iRec157[i]) + fZec56[i];
			}
			/* Post code */
			for (int j645 = 0; j645 < 4; j645 = j645 + 1) {
				fYec107_perm[j645] = fYec107_tmp[vsize + j645];
			}
			/* Vectorizable loop 150 */
			/* Pre code */
			for (int j658 = 0; j658 < 4; j658 = j658 + 1) {
				fYec110_tmp[j658] = fYec110_perm[j658];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec110[i] = float(iRec161[i]) + fZec63[i];
			}
			/* Post code */
			for (int j659 = 0; j659 < 4; j659 = j659 + 1) {
				fYec110_perm[j659] = fYec110_tmp[vsize + j659];
			}
			/* Vectorizable loop 151 */
			/* Pre code */
			for (int j672 = 0; j672 < 4; j672 = j672 + 1) {
				fYec113_tmp[j672] = fYec113_perm[j672];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec113[i] = float(iRec164[i]) + fZec81[i];
			}
			/* Post code */
			for (int j673 = 0; j673 < 4; j673 = j673 + 1) {
				fYec113_perm[j673] = fYec113_tmp[vsize + j673];
			}
			/* Vectorizable loop 152 */
			/* Pre code */
			for (int j682 = 0; j682 < 4; j682 = j682 + 1) {
				fYec115_tmp[j682] = fYec115_perm[j682];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec115[i] = float(iRec167[i]) + fZec82[i];
			}
			/* Post code */
			for (int j683 = 0; j683 < 4; j683 = j683 + 1) {
				fYec115_perm[j683] = fYec115_tmp[vsize + j683];
			}
			/* Vectorizable loop 153 */
			/* Pre code */
			for (int j692 = 0; j692 < 4; j692 = j692 + 1) {
				fYec117_tmp[j692] = fYec117_perm[j692];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec117[i] = float(iRec170[i]) + fZec84[i];
			}
			/* Post code */
			for (int j693 = 0; j693 < 4; j693 = j693 + 1) {
				fYec117_perm[j693] = fYec117_tmp[vsize + j693];
			}
			/* Vectorizable loop 154 */
			/* Pre code */
			for (int j702 = 0; j702 < 4; j702 = j702 + 1) {
				fYec119_tmp[j702] = fYec119_perm[j702];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec119[i] = float(iRec173[i]) + fZec83[i];
			}
			/* Post code */
			for (int j703 = 0; j703 < 4; j703 = j703 + 1) {
				fYec119_perm[j703] = fYec119_tmp[vsize + j703];
			}
			/* Vectorizable loop 155 */
			/* Pre code */
			for (int j742 = 0; j742 < 4; j742 = j742 + 1) {
				fYec126_tmp[j742] = fYec126_perm[j742];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec126[i] = float(iRec186[i]) + fZec70[i];
			}
			/* Post code */
			for (int j743 = 0; j743 < 4; j743 = j743 + 1) {
				fYec126_perm[j743] = fYec126_tmp[vsize + j743];
			}
			/* Vectorizable loop 156 */
			/* Pre code */
			for (int j752 = 0; j752 < 4; j752 = j752 + 1) {
				fYec128_tmp[j752] = fYec128_perm[j752];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec128[i] = float(iRec189[i]) + fZec80[i];
			}
			/* Post code */
			for (int j753 = 0; j753 < 4; j753 = j753 + 1) {
				fYec128_perm[j753] = fYec128_tmp[vsize + j753];
			}
			/* Vectorizable loop 157 */
			/* Pre code */
			for (int j762 = 0; j762 < 4; j762 = j762 + 1) {
				fYec130_tmp[j762] = fYec130_perm[j762];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec130[i] = float(iRec192[i]) + fZec77[i];
			}
			/* Post code */
			for (int j763 = 0; j763 < 4; j763 = j763 + 1) {
				fYec130_perm[j763] = fYec130_tmp[vsize + j763];
			}
			/* Vectorizable loop 158 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec5[i] = fRec10[i] + (1.0f - fRec10[i - 1]);
			}
			/* Vectorizable loop 159 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec11[i] = fRec16[i] + (1.0f - fRec16[i - 1]);
			}
			/* Vectorizable loop 160 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec17[i] = fRec21[i] + (1.0f - fRec21[i - 1]);
			}
			/* Vectorizable loop 161 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec23[i] = fRec26[i] + (1.0f - fRec26[i - 1]);
			}
			/* Vectorizable loop 162 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec29[i] = fRec31[i] + (1.0f - fRec31[i - 1]);
			}
			/* Recursive loop 163 */
			/* Pre code */
			for (int j604 = 0; j604 < 4; j604 = j604 + 1) {
				iRec144_tmp[j604] = iRec144_perm[j604];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec144[i] = (((0.5f * (fYec98[i] - fYec98[i - 1])) < 0.0f) ? 1 - iRec144[i - 1] : iRec144[i - 1]);
			}
			/* Post code */
			for (int j605 = 0; j605 < 4; j605 = j605 + 1) {
				iRec144_perm[j605] = iRec144_tmp[vsize + j605];
			}
			/* Vectorizable loop 164 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec172[i] = 0.5f * fYec98[i];
			}
			/* Recursive loop 165 */
			/* Pre code */
			for (int j618 = 0; j618 < 4; j618 = j618 + 1) {
				iRec148_tmp[j618] = iRec148_perm[j618];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec148[i] = (((0.5f * (fYec101[i] - fYec101[i - 1])) < 0.0f) ? 1 - iRec148[i - 1] : iRec148[i - 1]);
			}
			/* Post code */
			for (int j619 = 0; j619 < 4; j619 = j619 + 1) {
				iRec148_perm[j619] = iRec148_tmp[vsize + j619];
			}
			/* Vectorizable loop 166 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec174[i] = 0.5f * fYec101[i];
			}
			/* Recursive loop 167 */
			/* Pre code */
			for (int j632 = 0; j632 < 4; j632 = j632 + 1) {
				iRec152_tmp[j632] = iRec152_perm[j632];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec152[i] = (((0.5f * (fYec104[i] - fYec104[i - 1])) < 0.0f) ? 1 - iRec152[i - 1] : iRec152[i - 1]);
			}
			/* Post code */
			for (int j633 = 0; j633 < 4; j633 = j633 + 1) {
				iRec152_perm[j633] = iRec152_tmp[vsize + j633];
			}
			/* Vectorizable loop 168 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec176[i] = 0.5f * fYec104[i];
			}
			/* Recursive loop 169 */
			/* Pre code */
			for (int j646 = 0; j646 < 4; j646 = j646 + 1) {
				iRec156_tmp[j646] = iRec156_perm[j646];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec156[i] = (((0.5f * (fYec107[i] - fYec107[i - 1])) < 0.0f) ? 1 - iRec156[i - 1] : iRec156[i - 1]);
			}
			/* Post code */
			for (int j647 = 0; j647 < 4; j647 = j647 + 1) {
				iRec156_perm[j647] = iRec156_tmp[vsize + j647];
			}
			/* Vectorizable loop 170 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec178[i] = 0.5f * fYec107[i];
			}
			/* Recursive loop 171 */
			/* Pre code */
			for (int j660 = 0; j660 < 4; j660 = j660 + 1) {
				iRec160_tmp[j660] = iRec160_perm[j660];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec160[i] = (((0.5f * (fYec110[i] - fYec110[i - 1])) < 0.0f) ? 1 - iRec160[i - 1] : iRec160[i - 1]);
			}
			/* Post code */
			for (int j661 = 0; j661 < 4; j661 = j661 + 1) {
				iRec160_perm[j661] = iRec160_tmp[vsize + j661];
			}
			/* Vectorizable loop 172 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec180[i] = 0.5f * fYec110[i];
			}
			/* Vectorizable loop 173 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec182[i] = 0.5f * fYec113[i];
			}
			/* Vectorizable loop 174 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec183[i] = 0.5f * fYec115[i];
			}
			/* Vectorizable loop 175 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec184[i] = 0.5f * fYec117[i];
			}
			/* Vectorizable loop 176 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec185[i] = 0.5f * fYec119[i];
			}
			/* Vectorizable loop 177 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec186[i] = 0.5f * fYec126[i];
			}
			/* Vectorizable loop 178 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec187[i] = 0.5f * fYec128[i];
			}
			/* Vectorizable loop 179 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec188[i] = 0.5f * fYec130[i];
			}
			/* Recursive loop 180 */
			/* Pre code */
			for (int j774 = 0; j774 < 4; j774 = j774 + 1) {
				iRec197_tmp[j774] = iRec197_perm[j774];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec197[i] = (((0.5f * (fYec119[i] - fYec119[i - 1])) < 0.0f) ? 1 - iRec197[i - 1] : iRec197[i - 1]);
			}
			/* Post code */
			for (int j775 = 0; j775 < 4; j775 = j775 + 1) {
				iRec197_perm[j775] = iRec197_tmp[vsize + j775];
			}
			/* Recursive loop 181 */
			/* Pre code */
			for (int j792 = 0; j792 < 4; j792 = j792 + 1) {
				iRec202_tmp[j792] = iRec202_perm[j792];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec202[i] = (((0.5f * (fYec117[i] - fYec117[i - 1])) < 0.0f) ? 1 - iRec202[i - 1] : iRec202[i - 1]);
			}
			/* Post code */
			for (int j793 = 0; j793 < 4; j793 = j793 + 1) {
				iRec202_perm[j793] = iRec202_tmp[vsize + j793];
			}
			/* Recursive loop 182 */
			/* Pre code */
			for (int j810 = 0; j810 < 4; j810 = j810 + 1) {
				iRec207_tmp[j810] = iRec207_perm[j810];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec207[i] = (((0.5f * (fYec115[i] - fYec115[i - 1])) < 0.0f) ? 1 - iRec207[i - 1] : iRec207[i - 1]);
			}
			/* Post code */
			for (int j811 = 0; j811 < 4; j811 = j811 + 1) {
				iRec207_perm[j811] = iRec207_tmp[vsize + j811];
			}
			/* Recursive loop 183 */
			/* Pre code */
			for (int j828 = 0; j828 < 4; j828 = j828 + 1) {
				iRec212_tmp[j828] = iRec212_perm[j828];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec212[i] = (((0.5f * (fYec113[i] - fYec113[i - 1])) < 0.0f) ? 1 - iRec212[i - 1] : iRec212[i - 1]);
			}
			/* Post code */
			for (int j829 = 0; j829 < 4; j829 = j829 + 1) {
				iRec212_perm[j829] = iRec212_tmp[vsize + j829];
			}
			/* Recursive loop 184 */
			/* Pre code */
			for (int j846 = 0; j846 < 4; j846 = j846 + 1) {
				iRec217_tmp[j846] = iRec217_perm[j846];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec217[i] = (((0.5f * (fYec128[i] - fYec128[i - 1])) < 0.0f) ? 1 - iRec217[i - 1] : iRec217[i - 1]);
			}
			/* Post code */
			for (int j847 = 0; j847 < 4; j847 = j847 + 1) {
				iRec217_perm[j847] = iRec217_tmp[vsize + j847];
			}
			/* Recursive loop 185 */
			/* Pre code */
			for (int j864 = 0; j864 < 4; j864 = j864 + 1) {
				iRec222_tmp[j864] = iRec222_perm[j864];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec222[i] = (((0.5f * (fYec130[i] - fYec130[i - 1])) < 0.0f) ? 1 - iRec222[i - 1] : iRec222[i - 1]);
			}
			/* Post code */
			for (int j865 = 0; j865 < 4; j865 = j865 + 1) {
				iRec222_perm[j865] = iRec222_tmp[vsize + j865];
			}
			/* Recursive loop 186 */
			/* Pre code */
			for (int j882 = 0; j882 < 4; j882 = j882 + 1) {
				iRec227_tmp[j882] = iRec227_perm[j882];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec227[i] = (((0.5f * (fYec126[i] - fYec126[i - 1])) < 0.0f) ? 1 - iRec227[i - 1] : iRec227[i - 1]);
			}
			/* Post code */
			for (int j883 = 0; j883 < 4; j883 = j883 + 1) {
				iRec227_perm[j883] = iRec227_tmp[vsize + j883];
			}
			/* Vectorizable loop 187 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec6[i] = saw_polyblep_fast(fRec10[i], fRec10[i - 1], fRec10[i - 2], ((fZec5[i] > 1.0f) ? fZec2[i] : fZec5[i]));
			}
			/* Vectorizable loop 188 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec12[i] = saw_polyblep_fast(fRec16[i], fRec16[i - 1], fRec16[i - 2], ((fZec11[i] > 1.0f) ? fZec8[i] : fZec11[i]));
			}
			/* Vectorizable loop 189 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec18[i] = saw_polyblep_fast(fRec21[i], fRec21[i - 1], fRec21[i - 2], ((fZec17[i] > 1.0f) ? fZec14[i] : fZec17[i]));
			}
			/* Vectorizable loop 190 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec24[i] = saw_polyblep_fast(fRec26[i], fRec26[i - 1], fRec26[i - 2], ((fZec23[i] > 1.0f) ? fZec20[i] : fZec23[i]));
			}
			/* Vectorizable loop 191 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec30[i] = saw_polyblep_fast(fRec31[i], fRec31[i - 1], fRec31[i - 2], ((fZec29[i] > 1.0f) ? fZec26[i] : fZec29[i]));
			}
			/* Vectorizable loop 192 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec57[i] = fRec55[i] + (1.0f - fRec55[i - 1]);
			}
			/* Vectorizable loop 193 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec64[i] = fRec61[i] + (1.0f - fRec61[i - 1]);
			}
			/* Vectorizable loop 194 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec71[i] = fRec67[i] + (1.0f - fRec67[i - 1]);
			}
			/* Vectorizable loop 195 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec78[i] = fRec73[i] + (1.0f - fRec73[i - 1]);
			}
			/* Vectorizable loop 196 */
			/* Pre code */
			for (int j228 = 0; j228 < 4; j228 = j228 + 1) {
				fYec44_tmp[j228] = fYec44_perm[j228];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec44[i] = float(fZec80[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j229 = 0; j229 < 4; j229 = j229 + 1) {
				fYec44_perm[j229] = fYec44_tmp[vsize + j229];
			}
			/* Vectorizable loop 197 */
			/* Pre code */
			for (int j238 = 0; j238 < 4; j238 = j238 + 1) {
				fYec46_tmp[j238] = fYec46_perm[j238];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec46[i] = float(fZec81[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j239 = 0; j239 < 4; j239 = j239 + 1) {
				fYec46_perm[j239] = fYec46_tmp[vsize + j239];
			}
			/* Vectorizable loop 198 */
			/* Pre code */
			for (int j248 = 0; j248 < 4; j248 = j248 + 1) {
				fYec48_tmp[j248] = fYec48_perm[j248];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec48[i] = float(fZec82[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j249 = 0; j249 < 4; j249 = j249 + 1) {
				fYec48_perm[j249] = fYec48_tmp[vsize + j249];
			}
			/* Vectorizable loop 199 */
			/* Pre code */
			for (int j258 = 0; j258 < 4; j258 = j258 + 1) {
				fYec50_tmp[j258] = fYec50_perm[j258];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec50[i] = float(fZec83[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j259 = 0; j259 < 4; j259 = j259 + 1) {
				fYec50_perm[j259] = fYec50_tmp[vsize + j259];
			}
			/* Vectorizable loop 200 */
			/* Pre code */
			for (int j268 = 0; j268 < 4; j268 = j268 + 1) {
				fYec52_tmp[j268] = fYec52_perm[j268];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec52[i] = float(fZec84[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j269 = 0; j269 < 4; j269 = j269 + 1) {
				fYec52_perm[j269] = fYec52_tmp[vsize + j269];
			}
			/* Vectorizable loop 201 */
			/* Pre code */
			for (int j606 = 0; j606 < 4; j606 = j606 + 1) {
				fYec99_tmp[j606] = fYec99_perm[j606];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec99[i] = float(iRec144[i]) + fZec172[i];
			}
			/* Post code */
			for (int j607 = 0; j607 < 4; j607 = j607 + 1) {
				fYec99_perm[j607] = fYec99_tmp[vsize + j607];
			}
			/* Vectorizable loop 202 */
			/* Pre code */
			for (int j620 = 0; j620 < 4; j620 = j620 + 1) {
				fYec102_tmp[j620] = fYec102_perm[j620];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec102[i] = float(iRec148[i]) + fZec174[i];
			}
			/* Post code */
			for (int j621 = 0; j621 < 4; j621 = j621 + 1) {
				fYec102_perm[j621] = fYec102_tmp[vsize + j621];
			}
			/* Vectorizable loop 203 */
			/* Pre code */
			for (int j634 = 0; j634 < 4; j634 = j634 + 1) {
				fYec105_tmp[j634] = fYec105_perm[j634];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec105[i] = float(iRec152[i]) + fZec176[i];
			}
			/* Post code */
			for (int j635 = 0; j635 < 4; j635 = j635 + 1) {
				fYec105_perm[j635] = fYec105_tmp[vsize + j635];
			}
			/* Vectorizable loop 204 */
			/* Pre code */
			for (int j648 = 0; j648 < 4; j648 = j648 + 1) {
				fYec108_tmp[j648] = fYec108_perm[j648];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec108[i] = float(iRec156[i]) + fZec178[i];
			}
			/* Post code */
			for (int j649 = 0; j649 < 4; j649 = j649 + 1) {
				fYec108_perm[j649] = fYec108_tmp[vsize + j649];
			}
			/* Vectorizable loop 205 */
			/* Pre code */
			for (int j662 = 0; j662 < 4; j662 = j662 + 1) {
				fYec111_tmp[j662] = fYec111_perm[j662];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec111[i] = float(iRec160[i]) + fZec180[i];
			}
			/* Post code */
			for (int j663 = 0; j663 < 4; j663 = j663 + 1) {
				fYec111_perm[j663] = fYec111_tmp[vsize + j663];
			}
			/* Vectorizable loop 206 */
			/* Pre code */
			for (int j776 = 0; j776 < 4; j776 = j776 + 1) {
				fYec133_tmp[j776] = fYec133_perm[j776];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec133[i] = float(iRec197[i]) + fZec185[i];
			}
			/* Post code */
			for (int j777 = 0; j777 < 4; j777 = j777 + 1) {
				fYec133_perm[j777] = fYec133_tmp[vsize + j777];
			}
			/* Vectorizable loop 207 */
			/* Pre code */
			for (int j794 = 0; j794 < 4; j794 = j794 + 1) {
				fYec137_tmp[j794] = fYec137_perm[j794];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec137[i] = float(iRec202[i]) + fZec184[i];
			}
			/* Post code */
			for (int j795 = 0; j795 < 4; j795 = j795 + 1) {
				fYec137_perm[j795] = fYec137_tmp[vsize + j795];
			}
			/* Vectorizable loop 208 */
			/* Pre code */
			for (int j812 = 0; j812 < 4; j812 = j812 + 1) {
				fYec141_tmp[j812] = fYec141_perm[j812];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec141[i] = float(iRec207[i]) + fZec183[i];
			}
			/* Post code */
			for (int j813 = 0; j813 < 4; j813 = j813 + 1) {
				fYec141_perm[j813] = fYec141_tmp[vsize + j813];
			}
			/* Vectorizable loop 209 */
			/* Pre code */
			for (int j830 = 0; j830 < 4; j830 = j830 + 1) {
				fYec145_tmp[j830] = fYec145_perm[j830];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec145[i] = float(iRec212[i]) + fZec182[i];
			}
			/* Post code */
			for (int j831 = 0; j831 < 4; j831 = j831 + 1) {
				fYec145_perm[j831] = fYec145_tmp[vsize + j831];
			}
			/* Vectorizable loop 210 */
			/* Pre code */
			for (int j848 = 0; j848 < 4; j848 = j848 + 1) {
				fYec149_tmp[j848] = fYec149_perm[j848];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec149[i] = float(iRec217[i]) + fZec187[i];
			}
			/* Post code */
			for (int j849 = 0; j849 < 4; j849 = j849 + 1) {
				fYec149_perm[j849] = fYec149_tmp[vsize + j849];
			}
			/* Vectorizable loop 211 */
			/* Pre code */
			for (int j866 = 0; j866 < 4; j866 = j866 + 1) {
				fYec153_tmp[j866] = fYec153_perm[j866];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec153[i] = float(iRec222[i]) + fZec188[i];
			}
			/* Post code */
			for (int j867 = 0; j867 < 4; j867 = j867 + 1) {
				fYec153_perm[j867] = fYec153_tmp[vsize + j867];
			}
			/* Vectorizable loop 212 */
			/* Pre code */
			for (int j884 = 0; j884 < 4; j884 = j884 + 1) {
				fYec157_tmp[j884] = fYec157_perm[j884];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec157[i] = float(iRec227[i]) + fZec186[i];
			}
			/* Post code */
			for (int j885 = 0; j885 < 4; j885 = j885 + 1) {
				fYec157_perm[j885] = fYec157_tmp[vsize + j885];
			}
			/* Vectorizable loop 213 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec36[i] = fRec37[i] + (1.0f - fRec37[i - 1]);
			}
			/* Vectorizable loop 214 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec43[i] = fRec43[i] + (1.0f - fRec43[i - 1]);
			}
			/* Vectorizable loop 215 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec50[i] = fRec49[i] + (1.0f - fRec49[i - 1]);
			}
			/* Vectorizable loop 216 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec58[i] = saw_polyblep_fast(fRec55[i], fRec55[i - 1], fRec55[i - 2], ((fZec57[i] > 1.0f) ? fZec53[i] : fZec57[i]));
			}
			/* Vectorizable loop 217 */
			/* Pre code */
			for (int j158 = 0; j158 < 4; j158 = j158 + 1) {
				fYec30_tmp[j158] = fYec30_perm[j158];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec30[i] = float(fZec56[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j159 = 0; j159 < 4; j159 = j159 + 1) {
				fYec30_perm[j159] = fYec30_tmp[vsize + j159];
			}
			/* Vectorizable loop 218 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec65[i] = saw_polyblep_fast(fRec61[i], fRec61[i - 1], fRec61[i - 2], ((fZec64[i] > 1.0f) ? fZec60[i] : fZec64[i]));
			}
			/* Vectorizable loop 219 */
			/* Pre code */
			for (int j178 = 0; j178 < 4; j178 = j178 + 1) {
				fYec34_tmp[j178] = fYec34_perm[j178];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec34[i] = float(fZec63[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j179 = 0; j179 < 4; j179 = j179 + 1) {
				fYec34_perm[j179] = fYec34_tmp[vsize + j179];
			}
			/* Vectorizable loop 220 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec72[i] = saw_polyblep_fast(fRec67[i], fRec67[i - 1], fRec67[i - 2], ((fZec71[i] > 1.0f) ? fZec67[i] : fZec71[i]));
			}
			/* Vectorizable loop 221 */
			/* Pre code */
			for (int j198 = 0; j198 < 4; j198 = j198 + 1) {
				fYec38_tmp[j198] = fYec38_perm[j198];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec38[i] = float(fZec70[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j199 = 0; j199 < 4; j199 = j199 + 1) {
				fYec38_perm[j199] = fYec38_tmp[vsize + j199];
			}
			/* Vectorizable loop 222 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec79[i] = saw_polyblep_fast(fRec73[i], fRec73[i - 1], fRec73[i - 2], ((fZec78[i] > 1.0f) ? fZec74[i] : fZec78[i]));
			}
			/* Vectorizable loop 223 */
			/* Pre code */
			for (int j218 = 0; j218 < 4; j218 = j218 + 1) {
				fYec42_tmp[j218] = fYec42_perm[j218];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec42[i] = float(fZec77[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j219 = 0; j219 < 4; j219 = j219 + 1) {
				fYec42_perm[j219] = fYec42_tmp[vsize + j219];
			}
			/* Recursive loop 224 */
			/* Pre code */
			for (int j230 = 0; j230 < 4; j230 = j230 + 1) {
				fRec76_tmp[j230] = fRec76_perm[j230];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec76[i] = fRec76[i - 1] + fConst17 * (2.0f * fYec44[i - 1] + square_polyblep_precalc(fZec80[i], 0.5f * fYec43[i - 1], 0.5f * fYec43[i - 2], fZec6[i]) - fRec76[i - 1]);
			}
			/* Post code */
			for (int j231 = 0; j231 < 4; j231 = j231 + 1) {
				fRec76_perm[j231] = fRec76_tmp[vsize + j231];
			}
			/* Recursive loop 225 */
			/* Pre code */
			for (int j240 = 0; j240 < 4; j240 = j240 + 1) {
				fRec79_tmp[j240] = fRec79_perm[j240];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec79[i] = fRec79[i - 1] + fConst20 * (2.0f * fYec46[i - 1] + square_polyblep_precalc(fZec81[i], 0.5f * fYec45[i - 1], 0.5f * fYec45[i - 2], fZec12[i]) - fRec79[i - 1]);
			}
			/* Post code */
			for (int j241 = 0; j241 < 4; j241 = j241 + 1) {
				fRec79_perm[j241] = fRec79_tmp[vsize + j241];
			}
			/* Recursive loop 226 */
			/* Pre code */
			for (int j250 = 0; j250 < 4; j250 = j250 + 1) {
				fRec82_tmp[j250] = fRec82_perm[j250];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec82[i] = fRec82[i - 1] + fConst20 * (2.0f * fYec48[i - 1] + square_polyblep_precalc(fZec82[i], 0.5f * fYec47[i - 1], 0.5f * fYec47[i - 2], fZec18[i]) - fRec82[i - 1]);
			}
			/* Post code */
			for (int j251 = 0; j251 < 4; j251 = j251 + 1) {
				fRec82_perm[j251] = fRec82_tmp[vsize + j251];
			}
			/* Recursive loop 227 */
			/* Pre code */
			for (int j260 = 0; j260 < 4; j260 = j260 + 1) {
				fRec85_tmp[j260] = fRec85_perm[j260];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec85[i] = fRec85[i - 1] + fConst20 * (2.0f * fYec50[i - 1] + square_polyblep_precalc(fZec83[i], 0.5f * fYec49[i - 1], 0.5f * fYec49[i - 2], fZec30[i]) - fRec85[i - 1]);
			}
			/* Post code */
			for (int j261 = 0; j261 < 4; j261 = j261 + 1) {
				fRec85_perm[j261] = fRec85_tmp[vsize + j261];
			}
			/* Recursive loop 228 */
			/* Pre code */
			for (int j270 = 0; j270 < 4; j270 = j270 + 1) {
				fRec88_tmp[j270] = fRec88_perm[j270];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec88[i] = fRec88[i - 1] + fConst20 * (2.0f * fYec52[i - 1] + square_polyblep_precalc(fZec84[i], 0.5f * fYec51[i - 1], 0.5f * fYec51[i - 2], fZec24[i]) - fRec88[i - 1]);
			}
			/* Post code */
			for (int j271 = 0; j271 < 4; j271 = j271 + 1) {
				fRec88_perm[j271] = fRec88_tmp[vsize + j271];
			}
			/* Vectorizable loop 229 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec173[i] = 0.5f * fYec99[i];
			}
			/* Vectorizable loop 230 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec175[i] = 0.5f * fYec102[i];
			}
			/* Vectorizable loop 231 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec177[i] = 0.5f * fYec105[i];
			}
			/* Vectorizable loop 232 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec179[i] = 0.5f * fYec108[i];
			}
			/* Vectorizable loop 233 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec181[i] = 0.5f * fYec111[i];
			}
			/* Recursive loop 234 */
			/* Pre code */
			for (int j778 = 0; j778 < 4; j778 = j778 + 1) {
				iRec196_tmp[j778] = iRec196_perm[j778];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec196[i] = (((0.5f * (fYec133[i] - fYec133[i - 1])) < 0.0f) ? 1 - iRec196[i - 1] : iRec196[i - 1]);
			}
			/* Post code */
			for (int j779 = 0; j779 < 4; j779 = j779 + 1) {
				iRec196_perm[j779] = iRec196_tmp[vsize + j779];
			}
			/* Vectorizable loop 235 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec238[i] = 0.5f * fYec133[i];
			}
			/* Recursive loop 236 */
			/* Pre code */
			for (int j796 = 0; j796 < 4; j796 = j796 + 1) {
				iRec201_tmp[j796] = iRec201_perm[j796];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec201[i] = (((0.5f * (fYec137[i] - fYec137[i - 1])) < 0.0f) ? 1 - iRec201[i - 1] : iRec201[i - 1]);
			}
			/* Post code */
			for (int j797 = 0; j797 < 4; j797 = j797 + 1) {
				iRec201_perm[j797] = iRec201_tmp[vsize + j797];
			}
			/* Vectorizable loop 237 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec241[i] = 0.5f * fYec137[i];
			}
			/* Recursive loop 238 */
			/* Pre code */
			for (int j814 = 0; j814 < 4; j814 = j814 + 1) {
				iRec206_tmp[j814] = iRec206_perm[j814];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec206[i] = (((0.5f * (fYec141[i] - fYec141[i - 1])) < 0.0f) ? 1 - iRec206[i - 1] : iRec206[i - 1]);
			}
			/* Post code */
			for (int j815 = 0; j815 < 4; j815 = j815 + 1) {
				iRec206_perm[j815] = iRec206_tmp[vsize + j815];
			}
			/* Vectorizable loop 239 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec244[i] = 0.5f * fYec141[i];
			}
			/* Recursive loop 240 */
			/* Pre code */
			for (int j832 = 0; j832 < 4; j832 = j832 + 1) {
				iRec211_tmp[j832] = iRec211_perm[j832];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec211[i] = (((0.5f * (fYec145[i] - fYec145[i - 1])) < 0.0f) ? 1 - iRec211[i - 1] : iRec211[i - 1]);
			}
			/* Post code */
			for (int j833 = 0; j833 < 4; j833 = j833 + 1) {
				iRec211_perm[j833] = iRec211_tmp[vsize + j833];
			}
			/* Vectorizable loop 241 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec247[i] = 0.5f * fYec145[i];
			}
			/* Recursive loop 242 */
			/* Pre code */
			for (int j850 = 0; j850 < 4; j850 = j850 + 1) {
				iRec216_tmp[j850] = iRec216_perm[j850];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec216[i] = (((0.5f * (fYec149[i] - fYec149[i - 1])) < 0.0f) ? 1 - iRec216[i - 1] : iRec216[i - 1]);
			}
			/* Post code */
			for (int j851 = 0; j851 < 4; j851 = j851 + 1) {
				iRec216_perm[j851] = iRec216_tmp[vsize + j851];
			}
			/* Vectorizable loop 243 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec250[i] = 0.5f * fYec149[i];
			}
			/* Recursive loop 244 */
			/* Pre code */
			for (int j868 = 0; j868 < 4; j868 = j868 + 1) {
				iRec221_tmp[j868] = iRec221_perm[j868];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec221[i] = (((0.5f * (fYec153[i] - fYec153[i - 1])) < 0.0f) ? 1 - iRec221[i - 1] : iRec221[i - 1]);
			}
			/* Post code */
			for (int j869 = 0; j869 < 4; j869 = j869 + 1) {
				iRec221_perm[j869] = iRec221_tmp[vsize + j869];
			}
			/* Vectorizable loop 245 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec253[i] = 0.5f * fYec153[i];
			}
			/* Recursive loop 246 */
			/* Pre code */
			for (int j886 = 0; j886 < 4; j886 = j886 + 1) {
				iRec226_tmp[j886] = iRec226_perm[j886];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec226[i] = (((0.5f * (fYec157[i] - fYec157[i - 1])) < 0.0f) ? 1 - iRec226[i - 1] : iRec226[i - 1]);
			}
			/* Post code */
			for (int j887 = 0; j887 < 4; j887 = j887 + 1) {
				iRec226_perm[j887] = iRec226_tmp[vsize + j887];
			}
			/* Vectorizable loop 247 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec256[i] = 0.5f * fYec157[i];
			}
			/* Recursive loop 248 */
			/* Pre code */
			for (int j900 = 0; j900 < 4; j900 = j900 + 1) {
				iRec231_tmp[j900] = iRec231_perm[j900];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec231[i] = (((0.5f * (fYec111[i] - fYec111[i - 1])) < 0.0f) ? 1 - iRec231[i - 1] : iRec231[i - 1]);
			}
			/* Post code */
			for (int j901 = 0; j901 < 4; j901 = j901 + 1) {
				iRec231_perm[j901] = iRec231_tmp[vsize + j901];
			}
			/* Recursive loop 249 */
			/* Pre code */
			for (int j914 = 0; j914 < 4; j914 = j914 + 1) {
				iRec235_tmp[j914] = iRec235_perm[j914];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec235[i] = (((0.5f * (fYec108[i] - fYec108[i - 1])) < 0.0f) ? 1 - iRec235[i - 1] : iRec235[i - 1]);
			}
			/* Post code */
			for (int j915 = 0; j915 < 4; j915 = j915 + 1) {
				iRec235_perm[j915] = iRec235_tmp[vsize + j915];
			}
			/* Recursive loop 250 */
			/* Pre code */
			for (int j928 = 0; j928 < 4; j928 = j928 + 1) {
				iRec239_tmp[j928] = iRec239_perm[j928];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec239[i] = (((0.5f * (fYec105[i] - fYec105[i - 1])) < 0.0f) ? 1 - iRec239[i - 1] : iRec239[i - 1]);
			}
			/* Post code */
			for (int j929 = 0; j929 < 4; j929 = j929 + 1) {
				iRec239_perm[j929] = iRec239_tmp[vsize + j929];
			}
			/* Recursive loop 251 */
			/* Pre code */
			for (int j942 = 0; j942 < 4; j942 = j942 + 1) {
				iRec243_tmp[j942] = iRec243_perm[j942];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec243[i] = (((0.5f * (fYec102[i] - fYec102[i - 1])) < 0.0f) ? 1 - iRec243[i - 1] : iRec243[i - 1]);
			}
			/* Post code */
			for (int j943 = 0; j943 < 4; j943 = j943 + 1) {
				iRec243_perm[j943] = iRec243_tmp[vsize + j943];
			}
			/* Recursive loop 252 */
			/* Pre code */
			for (int j956 = 0; j956 < 4; j956 = j956 + 1) {
				iRec247_tmp[j956] = iRec247_perm[j956];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec247[i] = (((0.5f * (fYec99[i] - fYec99[i - 1])) < 0.0f) ? 1 - iRec247[i - 1] : iRec247[i - 1]);
			}
			/* Post code */
			for (int j957 = 0; j957 < 4; j957 = j957 + 1) {
				iRec247_perm[j957] = iRec247_tmp[vsize + j957];
			}
			/* Vectorizable loop 253 */
			/* Pre code */
			for (int j78 = 0; j78 < 4; j78 = j78 + 1) {
				fYec14_tmp[j78] = fYec14_perm[j78];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec14[i] = float(fZec28[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j79 = 0; j79 < 4; j79 = j79 + 1) {
				fYec14_perm[j79] = fYec14_tmp[vsize + j79];
			}
			/* Vectorizable loop 254 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec37[i] = saw_polyblep_fast(fRec37[i], fRec37[i - 1], fRec37[i - 2], ((fZec36[i] > 1.0f) ? fZec32[i] : fZec36[i]));
			}
			/* Vectorizable loop 255 */
			/* Pre code */
			for (int j98 = 0; j98 < 4; j98 = j98 + 1) {
				fYec18_tmp[j98] = fYec18_perm[j98];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec18[i] = float(fZec35[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j99 = 0; j99 < 4; j99 = j99 + 1) {
				fYec18_perm[j99] = fYec18_tmp[vsize + j99];
			}
			/* Vectorizable loop 256 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec44[i] = saw_polyblep_fast(fRec43[i], fRec43[i - 1], fRec43[i - 2], ((fZec43[i] > 1.0f) ? fZec39[i] : fZec43[i]));
			}
			/* Vectorizable loop 257 */
			/* Pre code */
			for (int j118 = 0; j118 < 4; j118 = j118 + 1) {
				fYec22_tmp[j118] = fYec22_perm[j118];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec22[i] = float(fZec42[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j119 = 0; j119 < 4; j119 = j119 + 1) {
				fYec22_perm[j119] = fYec22_tmp[vsize + j119];
			}
			/* Vectorizable loop 258 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec51[i] = saw_polyblep_fast(fRec49[i], fRec49[i - 1], fRec49[i - 2], ((fZec50[i] > 1.0f) ? fZec46[i] : fZec50[i]));
			}
			/* Vectorizable loop 259 */
			/* Pre code */
			for (int j138 = 0; j138 < 4; j138 = j138 + 1) {
				fYec26_tmp[j138] = fYec26_perm[j138];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec26[i] = float(fZec49[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j139 = 0; j139 < 4; j139 = j139 + 1) {
				fYec26_perm[j139] = fYec26_tmp[vsize + j139];
			}
			/* Recursive loop 260 */
			/* Pre code */
			for (int j160 = 0; j160 < 4; j160 = j160 + 1) {
				fRec52_tmp[j160] = fRec52_perm[j160];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec52[i] = fRec52[i - 1] + fConst12 * (2.0f * fYec30[i - 1] + square_polyblep_precalc(fZec56[i], 0.5f * fYec29[i - 1], 0.5f * fYec29[i - 2], fZec58[i]) - fRec52[i - 1]);
			}
			/* Post code */
			for (int j161 = 0; j161 < 4; j161 = j161 + 1) {
				fRec52_perm[j161] = fRec52_tmp[vsize + j161];
			}
			/* Recursive loop 261 */
			/* Pre code */
			for (int j180 = 0; j180 < 4; j180 = j180 + 1) {
				fRec58_tmp[j180] = fRec58_perm[j180];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec58[i] = fRec58[i - 1] + fConst17 * (2.0f * fYec34[i - 1] + square_polyblep_precalc(fZec63[i], 0.5f * fYec33[i - 1], 0.5f * fYec33[i - 2], fZec65[i]) - fRec58[i - 1]);
			}
			/* Post code */
			for (int j181 = 0; j181 < 4; j181 = j181 + 1) {
				fRec58_perm[j181] = fRec58_tmp[vsize + j181];
			}
			/* Recursive loop 262 */
			/* Pre code */
			for (int j200 = 0; j200 < 4; j200 = j200 + 1) {
				fRec64_tmp[j200] = fRec64_perm[j200];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec64[i] = fRec64[i - 1] + fConst17 * (2.0f * fYec38[i - 1] + square_polyblep_precalc(fZec70[i], 0.5f * fYec37[i - 1], 0.5f * fYec37[i - 2], fZec72[i]) - fRec64[i - 1]);
			}
			/* Post code */
			for (int j201 = 0; j201 < 4; j201 = j201 + 1) {
				fRec64_perm[j201] = fRec64_tmp[vsize + j201];
			}
			/* Recursive loop 263 */
			/* Pre code */
			for (int j220 = 0; j220 < 4; j220 = j220 + 1) {
				fRec70_tmp[j220] = fRec70_perm[j220];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec70[i] = fRec70[i - 1] + fConst17 * (2.0f * fYec42[i - 1] + square_polyblep_precalc(fZec77[i], 0.5f * fYec41[i - 1], 0.5f * fYec41[i - 2], fZec79[i]) - fRec70[i - 1]);
			}
			/* Post code */
			for (int j221 = 0; j221 < 4; j221 = j221 + 1) {
				fRec70_perm[j221] = fRec70_tmp[vsize + j221];
			}
			/* Recursive loop 264 */
			/* Pre code */
			for (int j232 = 0; j232 < 4; j232 = j232 + 1) {
				fRec75_tmp[j232] = fRec75_perm[j232];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec75[i] = fConst5 * (fRec75[i - 1] + (fRec76[i] - fRec76[i - 1]));
			}
			/* Post code */
			for (int j233 = 0; j233 < 4; j233 = j233 + 1) {
				fRec75_perm[j233] = fRec75_tmp[vsize + j233];
			}
			/* Recursive loop 265 */
			/* Pre code */
			for (int j242 = 0; j242 < 4; j242 = j242 + 1) {
				fRec78_tmp[j242] = fRec78_perm[j242];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec78[i] = fConst5 * (fRec78[i - 1] + (fRec79[i] - fRec79[i - 1]));
			}
			/* Post code */
			for (int j243 = 0; j243 < 4; j243 = j243 + 1) {
				fRec78_perm[j243] = fRec78_tmp[vsize + j243];
			}
			/* Recursive loop 266 */
			/* Pre code */
			for (int j252 = 0; j252 < 4; j252 = j252 + 1) {
				fRec81_tmp[j252] = fRec81_perm[j252];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec81[i] = fConst5 * (fRec81[i - 1] + (fRec82[i] - fRec82[i - 1]));
			}
			/* Post code */
			for (int j253 = 0; j253 < 4; j253 = j253 + 1) {
				fRec81_perm[j253] = fRec81_tmp[vsize + j253];
			}
			/* Recursive loop 267 */
			/* Pre code */
			for (int j262 = 0; j262 < 4; j262 = j262 + 1) {
				fRec84_tmp[j262] = fRec84_perm[j262];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec84[i] = fConst5 * (fRec84[i - 1] + (fRec85[i] - fRec85[i - 1]));
			}
			/* Post code */
			for (int j263 = 0; j263 < 4; j263 = j263 + 1) {
				fRec84_perm[j263] = fRec84_tmp[vsize + j263];
			}
			/* Recursive loop 268 */
			/* Pre code */
			for (int j272 = 0; j272 < 4; j272 = j272 + 1) {
				fRec87_tmp[j272] = fRec87_perm[j272];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec87[i] = fConst5 * (fRec87[i - 1] + (fRec88[i] - fRec88[i - 1]));
			}
			/* Post code */
			for (int j273 = 0; j273 < 4; j273 = j273 + 1) {
				fRec87_perm[j273] = fRec87_tmp[vsize + j273];
			}
			/* Vectorizable loop 269 */
			/* Pre code */
			for (int j780 = 0; j780 < 4; j780 = j780 + 1) {
				fYec134_tmp[j780] = fYec134_perm[j780];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec134[i] = float(iRec196[i]) + fZec238[i];
			}
			/* Post code */
			for (int j781 = 0; j781 < 4; j781 = j781 + 1) {
				fYec134_perm[j781] = fYec134_tmp[vsize + j781];
			}
			/* Vectorizable loop 270 */
			/* Pre code */
			for (int j798 = 0; j798 < 4; j798 = j798 + 1) {
				fYec138_tmp[j798] = fYec138_perm[j798];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec138[i] = float(iRec201[i]) + fZec241[i];
			}
			/* Post code */
			for (int j799 = 0; j799 < 4; j799 = j799 + 1) {
				fYec138_perm[j799] = fYec138_tmp[vsize + j799];
			}
			/* Vectorizable loop 271 */
			/* Pre code */
			for (int j816 = 0; j816 < 4; j816 = j816 + 1) {
				fYec142_tmp[j816] = fYec142_perm[j816];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec142[i] = float(iRec206[i]) + fZec244[i];
			}
			/* Post code */
			for (int j817 = 0; j817 < 4; j817 = j817 + 1) {
				fYec142_perm[j817] = fYec142_tmp[vsize + j817];
			}
			/* Vectorizable loop 272 */
			/* Pre code */
			for (int j834 = 0; j834 < 4; j834 = j834 + 1) {
				fYec146_tmp[j834] = fYec146_perm[j834];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec146[i] = float(iRec211[i]) + fZec247[i];
			}
			/* Post code */
			for (int j835 = 0; j835 < 4; j835 = j835 + 1) {
				fYec146_perm[j835] = fYec146_tmp[vsize + j835];
			}
			/* Vectorizable loop 273 */
			/* Pre code */
			for (int j852 = 0; j852 < 4; j852 = j852 + 1) {
				fYec150_tmp[j852] = fYec150_perm[j852];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec150[i] = float(iRec216[i]) + fZec250[i];
			}
			/* Post code */
			for (int j853 = 0; j853 < 4; j853 = j853 + 1) {
				fYec150_perm[j853] = fYec150_tmp[vsize + j853];
			}
			/* Vectorizable loop 274 */
			/* Pre code */
			for (int j870 = 0; j870 < 4; j870 = j870 + 1) {
				fYec154_tmp[j870] = fYec154_perm[j870];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec154[i] = float(iRec221[i]) + fZec253[i];
			}
			/* Post code */
			for (int j871 = 0; j871 < 4; j871 = j871 + 1) {
				fYec154_perm[j871] = fYec154_tmp[vsize + j871];
			}
			/* Vectorizable loop 275 */
			/* Pre code */
			for (int j888 = 0; j888 < 4; j888 = j888 + 1) {
				fYec158_tmp[j888] = fYec158_perm[j888];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec158[i] = float(iRec226[i]) + fZec256[i];
			}
			/* Post code */
			for (int j889 = 0; j889 < 4; j889 = j889 + 1) {
				fYec158_perm[j889] = fYec158_tmp[vsize + j889];
			}
			/* Vectorizable loop 276 */
			/* Pre code */
			for (int j902 = 0; j902 < 4; j902 = j902 + 1) {
				fYec161_tmp[j902] = fYec161_perm[j902];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec161[i] = float(iRec231[i]) + fZec181[i];
			}
			/* Post code */
			for (int j903 = 0; j903 < 4; j903 = j903 + 1) {
				fYec161_perm[j903] = fYec161_tmp[vsize + j903];
			}
			/* Vectorizable loop 277 */
			/* Pre code */
			for (int j916 = 0; j916 < 4; j916 = j916 + 1) {
				fYec164_tmp[j916] = fYec164_perm[j916];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec164[i] = float(iRec235[i]) + fZec179[i];
			}
			/* Post code */
			for (int j917 = 0; j917 < 4; j917 = j917 + 1) {
				fYec164_perm[j917] = fYec164_tmp[vsize + j917];
			}
			/* Vectorizable loop 278 */
			/* Pre code */
			for (int j930 = 0; j930 < 4; j930 = j930 + 1) {
				fYec167_tmp[j930] = fYec167_perm[j930];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec167[i] = float(iRec239[i]) + fZec177[i];
			}
			/* Post code */
			for (int j931 = 0; j931 < 4; j931 = j931 + 1) {
				fYec167_perm[j931] = fYec167_tmp[vsize + j931];
			}
			/* Vectorizable loop 279 */
			/* Pre code */
			for (int j944 = 0; j944 < 4; j944 = j944 + 1) {
				fYec170_tmp[j944] = fYec170_perm[j944];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec170[i] = float(iRec243[i]) + fZec175[i];
			}
			/* Post code */
			for (int j945 = 0; j945 < 4; j945 = j945 + 1) {
				fYec170_perm[j945] = fYec170_tmp[vsize + j945];
			}
			/* Vectorizable loop 280 */
			/* Pre code */
			for (int j958 = 0; j958 < 4; j958 = j958 + 1) {
				fYec173_tmp[j958] = fYec173_perm[j958];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec173[i] = float(iRec247[i]) + fZec173[i];
			}
			/* Post code */
			for (int j959 = 0; j959 < 4; j959 = j959 + 1) {
				fYec173_perm[j959] = fYec173_tmp[vsize + j959];
			}
			/* Vectorizable loop 281 */
			/* Pre code */
			for (int j14 = 0; j14 < 4; j14 = j14 + 1) {
				fYec2_tmp[j14] = fYec2_perm[j14];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec2[i] = float(fZec4[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j15 = 0; j15 < 4; j15 = j15 + 1) {
				fYec2_perm[j15] = fYec2_tmp[vsize + j15];
			}
			/* Vectorizable loop 282 */
			/* Pre code */
			for (int j30 = 0; j30 < 4; j30 = j30 + 1) {
				fYec5_tmp[j30] = fYec5_perm[j30];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec5[i] = float(fZec10[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j31 = 0; j31 < 4; j31 = j31 + 1) {
				fYec5_perm[j31] = fYec5_tmp[vsize + j31];
			}
			/* Vectorizable loop 283 */
			/* Pre code */
			for (int j46 = 0; j46 < 4; j46 = j46 + 1) {
				fYec8_tmp[j46] = fYec8_perm[j46];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec8[i] = float(fZec16[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j47 = 0; j47 < 4; j47 = j47 + 1) {
				fYec8_perm[j47] = fYec8_tmp[vsize + j47];
			}
			/* Vectorizable loop 284 */
			/* Pre code */
			for (int j62 = 0; j62 < 4; j62 = j62 + 1) {
				fYec11_tmp[j62] = fYec11_perm[j62];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec11[i] = float(fZec22[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j63 = 0; j63 < 4; j63 = j63 + 1) {
				fYec11_perm[j63] = fYec11_tmp[vsize + j63];
			}
			/* Recursive loop 285 */
			/* Pre code */
			for (int j80 = 0; j80 < 4; j80 = j80 + 1) {
				fRec29_tmp[j80] = fRec29_perm[j80];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec29[i] = fRec29[i - 1] + fConst7 * (2.0f * fYec14[i - 1] + square_polyblep_precalc(fZec28[i], 0.5f * fYec13[i - 1], 0.5f * fYec13[i - 2], fZec30[i]) - fRec29[i - 1]);
			}
			/* Post code */
			for (int j81 = 0; j81 < 4; j81 = j81 + 1) {
				fRec29_perm[j81] = fRec29_tmp[vsize + j81];
			}
			/* Recursive loop 286 */
			/* Pre code */
			for (int j100 = 0; j100 < 4; j100 = j100 + 1) {
				fRec34_tmp[j100] = fRec34_perm[j100];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec34[i] = fRec34[i - 1] + fConst12 * (2.0f * fYec18[i - 1] + square_polyblep_precalc(fZec35[i], 0.5f * fYec17[i - 1], 0.5f * fYec17[i - 2], fZec37[i]) - fRec34[i - 1]);
			}
			/* Post code */
			for (int j101 = 0; j101 < 4; j101 = j101 + 1) {
				fRec34_perm[j101] = fRec34_tmp[vsize + j101];
			}
			/* Recursive loop 287 */
			/* Pre code */
			for (int j120 = 0; j120 < 4; j120 = j120 + 1) {
				fRec40_tmp[j120] = fRec40_perm[j120];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec40[i] = fRec40[i - 1] + fConst12 * (2.0f * fYec22[i - 1] + square_polyblep_precalc(fZec42[i], 0.5f * fYec21[i - 1], 0.5f * fYec21[i - 2], fZec44[i]) - fRec40[i - 1]);
			}
			/* Post code */
			for (int j121 = 0; j121 < 4; j121 = j121 + 1) {
				fRec40_perm[j121] = fRec40_tmp[vsize + j121];
			}
			/* Recursive loop 288 */
			/* Pre code */
			for (int j140 = 0; j140 < 4; j140 = j140 + 1) {
				fRec46_tmp[j140] = fRec46_perm[j140];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec46[i] = fRec46[i - 1] + fConst12 * (2.0f * fYec26[i - 1] + square_polyblep_precalc(fZec49[i], 0.5f * fYec25[i - 1], 0.5f * fYec25[i - 2], fZec51[i]) - fRec46[i - 1]);
			}
			/* Post code */
			for (int j141 = 0; j141 < 4; j141 = j141 + 1) {
				fRec46_perm[j141] = fRec46_tmp[vsize + j141];
			}
			/* Recursive loop 289 */
			/* Pre code */
			for (int j162 = 0; j162 < 4; j162 = j162 + 1) {
				fRec51_tmp[j162] = fRec51_perm[j162];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec51[i] = fConst5 * (fRec51[i - 1] + (fRec52[i] - fRec52[i - 1]));
			}
			/* Post code */
			for (int j163 = 0; j163 < 4; j163 = j163 + 1) {
				fRec51_perm[j163] = fRec51_tmp[vsize + j163];
			}
			/* Recursive loop 290 */
			/* Pre code */
			for (int j182 = 0; j182 < 4; j182 = j182 + 1) {
				fRec57_tmp[j182] = fRec57_perm[j182];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec57[i] = fConst5 * (fRec57[i - 1] + (fRec58[i] - fRec58[i - 1]));
			}
			/* Post code */
			for (int j183 = 0; j183 < 4; j183 = j183 + 1) {
				fRec57_perm[j183] = fRec57_tmp[vsize + j183];
			}
			/* Recursive loop 291 */
			/* Pre code */
			for (int j202 = 0; j202 < 4; j202 = j202 + 1) {
				fRec63_tmp[j202] = fRec63_perm[j202];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec63[i] = fConst5 * (fRec63[i - 1] + (fRec64[i] - fRec64[i - 1]));
			}
			/* Post code */
			for (int j203 = 0; j203 < 4; j203 = j203 + 1) {
				fRec63_perm[j203] = fRec63_tmp[vsize + j203];
			}
			/* Recursive loop 292 */
			/* Pre code */
			for (int j222 = 0; j222 < 4; j222 = j222 + 1) {
				fRec69_tmp[j222] = fRec69_perm[j222];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec69[i] = fConst5 * (fRec69[i - 1] + (fRec70[i] - fRec70[i - 1]));
			}
			/* Post code */
			for (int j223 = 0; j223 < 4; j223 = j223 + 1) {
				fRec69_perm[j223] = fRec69_tmp[vsize + j223];
			}
			/* Vectorizable loop 293 */
			/* Pre code */
			for (int j274 = 0; j274 < 4; j274 = j274 + 1) {
				fYec53_tmp[j274] = fYec53_perm[j274];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec53[i] = fRec31[i] + -0.5f;
			}
			/* Post code */
			for (int j275 = 0; j275 < 4; j275 = j275 + 1) {
				fYec53_perm[j275] = fYec53_tmp[vsize + j275];
			}
			/* Vectorizable loop 294 */
			/* Pre code */
			for (int j280 = 0; j280 < 4; j280 = j280 + 1) {
				fYec55_tmp[j280] = fYec55_perm[j280];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec55[i] = float(fZec33[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j281 = 0; j281 < 4; j281 = j281 + 1) {
				fYec55_perm[j281] = fYec55_tmp[vsize + j281];
			}
			/* Vectorizable loop 295 */
			/* Pre code */
			for (int j286 = 0; j286 < 4; j286 = j286 + 1) {
				fYec56_tmp[j286] = fYec56_perm[j286];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec56[i] = float(fZec40[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j287 = 0; j287 < 4; j287 = j287 + 1) {
				fYec56_perm[j287] = fYec56_tmp[vsize + j287];
			}
			/* Vectorizable loop 296 */
			/* Pre code */
			for (int j292 = 0; j292 < 4; j292 = j292 + 1) {
				fYec57_tmp[j292] = fYec57_perm[j292];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec57[i] = float(fZec47[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j293 = 0; j293 < 4; j293 = j293 + 1) {
				fYec57_perm[j293] = fYec57_tmp[vsize + j293];
			}
			/* Vectorizable loop 297 */
			/* Pre code */
			for (int j298 = 0; j298 < 4; j298 = j298 + 1) {
				fYec58_tmp[j298] = fYec58_perm[j298];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec58[i] = float(fZec54[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j299 = 0; j299 < 4; j299 = j299 + 1) {
				fYec58_perm[j299] = fYec58_tmp[vsize + j299];
			}
			/* Vectorizable loop 298 */
			/* Pre code */
			for (int j304 = 0; j304 < 4; j304 = j304 + 1) {
				fYec59_tmp[j304] = fYec59_perm[j304];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec59[i] = float(fZec61[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j305 = 0; j305 < 4; j305 = j305 + 1) {
				fYec59_perm[j305] = fYec59_tmp[vsize + j305];
			}
			/* Vectorizable loop 299 */
			/* Pre code */
			for (int j310 = 0; j310 < 4; j310 = j310 + 1) {
				fYec60_tmp[j310] = fYec60_perm[j310];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec60[i] = float(fZec68[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j311 = 0; j311 < 4; j311 = j311 + 1) {
				fYec60_perm[j311] = fYec60_tmp[vsize + j311];
			}
			/* Vectorizable loop 300 */
			/* Pre code */
			for (int j316 = 0; j316 < 4; j316 = j316 + 1) {
				fYec61_tmp[j316] = fYec61_perm[j316];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec61[i] = float(fZec75[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j317 = 0; j317 < 4; j317 = j317 + 1) {
				fYec61_perm[j317] = fYec61_tmp[vsize + j317];
			}
			/* Vectorizable loop 301 */
			/* Pre code */
			for (int j322 = 0; j322 < 4; j322 = j322 + 1) {
				fYec62_tmp[j322] = fYec62_perm[j322];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec62[i] = float(fZec3[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j323 = 0; j323 < 4; j323 = j323 + 1) {
				fYec62_perm[j323] = fYec62_tmp[vsize + j323];
			}
			/* Vectorizable loop 302 */
			/* Pre code */
			for (int j328 = 0; j328 < 4; j328 = j328 + 1) {
				fYec63_tmp[j328] = fYec63_perm[j328];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec63[i] = float(fZec9[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j329 = 0; j329 < 4; j329 = j329 + 1) {
				fYec63_perm[j329] = fYec63_tmp[vsize + j329];
			}
			/* Vectorizable loop 303 */
			/* Pre code */
			for (int j334 = 0; j334 < 4; j334 = j334 + 1) {
				fYec64_tmp[j334] = fYec64_perm[j334];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec64[i] = float(fZec15[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j335 = 0; j335 < 4; j335 = j335 + 1) {
				fYec64_perm[j335] = fYec64_tmp[vsize + j335];
			}
			/* Vectorizable loop 304 */
			/* Pre code */
			for (int j340 = 0; j340 < 4; j340 = j340 + 1) {
				fYec65_tmp[j340] = fYec65_perm[j340];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec65[i] = float(fZec21[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j341 = 0; j341 < 4; j341 = j341 + 1) {
				fYec65_perm[j341] = fYec65_tmp[vsize + j341];
			}
			/* Vectorizable loop 305 */
			/* Pre code */
			for (int j346 = 0; j346 < 4; j346 = j346 + 1) {
				fYec66_tmp[j346] = fYec66_perm[j346];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec66[i] = float(fZec27[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j347 = 0; j347 < 4; j347 = j347 + 1) {
				fYec66_perm[j347] = fYec66_tmp[vsize + j347];
			}
			/* Vectorizable loop 306 */
			/* Pre code */
			for (int j352 = 0; j352 < 4; j352 = j352 + 1) {
				fYec67_tmp[j352] = fYec67_perm[j352];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec67[i] = float(fZec34[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j353 = 0; j353 < 4; j353 = j353 + 1) {
				fYec67_perm[j353] = fYec67_tmp[vsize + j353];
			}
			/* Vectorizable loop 307 */
			/* Pre code */
			for (int j358 = 0; j358 < 4; j358 = j358 + 1) {
				fYec68_tmp[j358] = fYec68_perm[j358];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec68[i] = float(fZec41[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j359 = 0; j359 < 4; j359 = j359 + 1) {
				fYec68_perm[j359] = fYec68_tmp[vsize + j359];
			}
			/* Vectorizable loop 308 */
			/* Pre code */
			for (int j364 = 0; j364 < 4; j364 = j364 + 1) {
				fYec69_tmp[j364] = fYec69_perm[j364];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec69[i] = float(fZec48[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j365 = 0; j365 < 4; j365 = j365 + 1) {
				fYec69_perm[j365] = fYec69_tmp[vsize + j365];
			}
			/* Vectorizable loop 309 */
			/* Pre code */
			for (int j370 = 0; j370 < 4; j370 = j370 + 1) {
				fYec70_tmp[j370] = fYec70_perm[j370];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec70[i] = float(fZec55[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j371 = 0; j371 < 4; j371 = j371 + 1) {
				fYec70_perm[j371] = fYec70_tmp[vsize + j371];
			}
			/* Vectorizable loop 310 */
			/* Pre code */
			for (int j376 = 0; j376 < 4; j376 = j376 + 1) {
				fYec71_tmp[j376] = fYec71_perm[j376];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec71[i] = float(fZec62[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j377 = 0; j377 < 4; j377 = j377 + 1) {
				fYec71_perm[j377] = fYec71_tmp[vsize + j377];
			}
			/* Vectorizable loop 311 */
			/* Pre code */
			for (int j382 = 0; j382 < 4; j382 = j382 + 1) {
				fYec72_tmp[j382] = fYec72_perm[j382];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec72[i] = float(fZec76[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j383 = 0; j383 < 4; j383 = j383 + 1) {
				fYec72_perm[j383] = fYec72_tmp[vsize + j383];
			}
			/* Vectorizable loop 312 */
			/* Pre code */
			for (int j388 = 0; j388 < 4; j388 = j388 + 1) {
				fYec73_tmp[j388] = fYec73_perm[j388];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec73[i] = float(fZec69[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j389 = 0; j389 < 4; j389 = j389 + 1) {
				fYec73_perm[j389] = fYec73_tmp[vsize + j389];
			}
			/* Vectorizable loop 313 */
			/* Pre code */
			for (int j394 = 0; j394 < 4; j394 = j394 + 1) {
				fYec74_tmp[j394] = fYec74_perm[j394];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec74[i] = fRec37[i] + -0.5f;
			}
			/* Post code */
			for (int j395 = 0; j395 < 4; j395 = j395 + 1) {
				fYec74_perm[j395] = fYec74_tmp[vsize + j395];
			}
			/* Vectorizable loop 314 */
			/* Pre code */
			for (int j400 = 0; j400 < 4; j400 = j400 + 1) {
				fYec76_tmp[j400] = fYec76_perm[j400];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec76[i] = fRec43[i] + -0.5f;
			}
			/* Post code */
			for (int j401 = 0; j401 < 4; j401 = j401 + 1) {
				fYec76_perm[j401] = fYec76_tmp[vsize + j401];
			}
			/* Vectorizable loop 315 */
			/* Pre code */
			for (int j406 = 0; j406 < 4; j406 = j406 + 1) {
				fYec78_tmp[j406] = fYec78_perm[j406];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec78[i] = fRec49[i] + -0.5f;
			}
			/* Post code */
			for (int j407 = 0; j407 < 4; j407 = j407 + 1) {
				fYec78_perm[j407] = fYec78_tmp[vsize + j407];
			}
			/* Vectorizable loop 316 */
			/* Pre code */
			for (int j412 = 0; j412 < 4; j412 = j412 + 1) {
				fYec80_tmp[j412] = fYec80_perm[j412];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec80[i] = fRec55[i] + -0.5f;
			}
			/* Post code */
			for (int j413 = 0; j413 < 4; j413 = j413 + 1) {
				fYec80_perm[j413] = fYec80_tmp[vsize + j413];
			}
			/* Vectorizable loop 317 */
			/* Pre code */
			for (int j418 = 0; j418 < 4; j418 = j418 + 1) {
				fYec82_tmp[j418] = fYec82_perm[j418];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec82[i] = fRec61[i] + -0.5f;
			}
			/* Post code */
			for (int j419 = 0; j419 < 4; j419 = j419 + 1) {
				fYec82_perm[j419] = fYec82_tmp[vsize + j419];
			}
			/* Vectorizable loop 318 */
			/* Pre code */
			for (int j424 = 0; j424 < 4; j424 = j424 + 1) {
				fYec84_tmp[j424] = fYec84_perm[j424];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec84[i] = fRec67[i] + -0.5f;
			}
			/* Post code */
			for (int j425 = 0; j425 < 4; j425 = j425 + 1) {
				fYec84_perm[j425] = fYec84_tmp[vsize + j425];
			}
			/* Vectorizable loop 319 */
			/* Pre code */
			for (int j430 = 0; j430 < 4; j430 = j430 + 1) {
				fYec86_tmp[j430] = fYec86_perm[j430];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec86[i] = fRec73[i] + -0.5f;
			}
			/* Post code */
			for (int j431 = 0; j431 < 4; j431 = j431 + 1) {
				fYec86_perm[j431] = fYec86_tmp[vsize + j431];
			}
			/* Vectorizable loop 320 */
			/* Pre code */
			for (int j436 = 0; j436 < 4; j436 = j436 + 1) {
				fYec88_tmp[j436] = fYec88_perm[j436];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec88[i] = fRec10[i] + -0.5f;
			}
			/* Post code */
			for (int j437 = 0; j437 < 4; j437 = j437 + 1) {
				fYec88_perm[j437] = fYec88_tmp[vsize + j437];
			}
			/* Vectorizable loop 321 */
			/* Pre code */
			for (int j442 = 0; j442 < 4; j442 = j442 + 1) {
				fYec90_tmp[j442] = fYec90_perm[j442];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec90[i] = fRec16[i] + -0.5f;
			}
			/* Post code */
			for (int j443 = 0; j443 < 4; j443 = j443 + 1) {
				fYec90_perm[j443] = fYec90_tmp[vsize + j443];
			}
			/* Vectorizable loop 322 */
			/* Pre code */
			for (int j448 = 0; j448 < 4; j448 = j448 + 1) {
				fYec92_tmp[j448] = fYec92_perm[j448];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec92[i] = fRec21[i] + -0.5f;
			}
			/* Post code */
			for (int j449 = 0; j449 < 4; j449 = j449 + 1) {
				fYec92_perm[j449] = fYec92_tmp[vsize + j449];
			}
			/* Vectorizable loop 323 */
			/* Pre code */
			for (int j454 = 0; j454 < 4; j454 = j454 + 1) {
				fYec94_tmp[j454] = fYec94_perm[j454];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec94[i] = fRec26[i] + -0.5f;
			}
			/* Post code */
			for (int j455 = 0; j455 < 4; j455 = j455 + 1) {
				fYec94_perm[j455] = fYec94_tmp[vsize + j455];
			}
			/* Vectorizable loop 324 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec162[i] = fRec75[i] + fRec78[i] + fRec81[i] + fRec84[i] + fRec87[i];
			}
			/* Recursive loop 325 */
			/* Pre code */
			for (int j782 = 0; j782 < 4; j782 = j782 + 1) {
				iRec195_tmp[j782] = iRec195_perm[j782];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec195[i] = (((0.5f * (fYec134[i] - fYec134[i - 1])) < 0.0f) ? 1 - iRec195[i - 1] : iRec195[i - 1]);
			}
			/* Post code */
			for (int j783 = 0; j783 < 4; j783 = j783 + 1) {
				iRec195_perm[j783] = iRec195_tmp[vsize + j783];
			}
			/* Vectorizable loop 326 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec239[i] = 0.5f * fYec134[i];
			}
			/* Recursive loop 327 */
			/* Pre code */
			for (int j800 = 0; j800 < 4; j800 = j800 + 1) {
				iRec200_tmp[j800] = iRec200_perm[j800];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec200[i] = (((0.5f * (fYec138[i] - fYec138[i - 1])) < 0.0f) ? 1 - iRec200[i - 1] : iRec200[i - 1]);
			}
			/* Post code */
			for (int j801 = 0; j801 < 4; j801 = j801 + 1) {
				iRec200_perm[j801] = iRec200_tmp[vsize + j801];
			}
			/* Vectorizable loop 328 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec242[i] = 0.5f * fYec138[i];
			}
			/* Recursive loop 329 */
			/* Pre code */
			for (int j818 = 0; j818 < 4; j818 = j818 + 1) {
				iRec205_tmp[j818] = iRec205_perm[j818];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec205[i] = (((0.5f * (fYec142[i] - fYec142[i - 1])) < 0.0f) ? 1 - iRec205[i - 1] : iRec205[i - 1]);
			}
			/* Post code */
			for (int j819 = 0; j819 < 4; j819 = j819 + 1) {
				iRec205_perm[j819] = iRec205_tmp[vsize + j819];
			}
			/* Vectorizable loop 330 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec245[i] = 0.5f * fYec142[i];
			}
			/* Recursive loop 331 */
			/* Pre code */
			for (int j836 = 0; j836 < 4; j836 = j836 + 1) {
				iRec210_tmp[j836] = iRec210_perm[j836];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec210[i] = (((0.5f * (fYec146[i] - fYec146[i - 1])) < 0.0f) ? 1 - iRec210[i - 1] : iRec210[i - 1]);
			}
			/* Post code */
			for (int j837 = 0; j837 < 4; j837 = j837 + 1) {
				iRec210_perm[j837] = iRec210_tmp[vsize + j837];
			}
			/* Vectorizable loop 332 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec248[i] = 0.5f * fYec146[i];
			}
			/* Recursive loop 333 */
			/* Pre code */
			for (int j854 = 0; j854 < 4; j854 = j854 + 1) {
				iRec215_tmp[j854] = iRec215_perm[j854];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec215[i] = (((0.5f * (fYec150[i] - fYec150[i - 1])) < 0.0f) ? 1 - iRec215[i - 1] : iRec215[i - 1]);
			}
			/* Post code */
			for (int j855 = 0; j855 < 4; j855 = j855 + 1) {
				iRec215_perm[j855] = iRec215_tmp[vsize + j855];
			}
			/* Vectorizable loop 334 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec251[i] = 0.5f * fYec150[i];
			}
			/* Recursive loop 335 */
			/* Pre code */
			for (int j872 = 0; j872 < 4; j872 = j872 + 1) {
				iRec220_tmp[j872] = iRec220_perm[j872];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec220[i] = (((0.5f * (fYec154[i] - fYec154[i - 1])) < 0.0f) ? 1 - iRec220[i - 1] : iRec220[i - 1]);
			}
			/* Post code */
			for (int j873 = 0; j873 < 4; j873 = j873 + 1) {
				iRec220_perm[j873] = iRec220_tmp[vsize + j873];
			}
			/* Vectorizable loop 336 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec254[i] = 0.5f * fYec154[i];
			}
			/* Recursive loop 337 */
			/* Pre code */
			for (int j890 = 0; j890 < 4; j890 = j890 + 1) {
				iRec225_tmp[j890] = iRec225_perm[j890];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec225[i] = (((0.5f * (fYec158[i] - fYec158[i - 1])) < 0.0f) ? 1 - iRec225[i - 1] : iRec225[i - 1]);
			}
			/* Post code */
			for (int j891 = 0; j891 < 4; j891 = j891 + 1) {
				iRec225_perm[j891] = iRec225_tmp[vsize + j891];
			}
			/* Vectorizable loop 338 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec257[i] = 0.5f * fYec158[i];
			}
			/* Recursive loop 339 */
			/* Pre code */
			for (int j904 = 0; j904 < 4; j904 = j904 + 1) {
				iRec230_tmp[j904] = iRec230_perm[j904];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec230[i] = (((0.5f * (fYec161[i] - fYec161[i - 1])) < 0.0f) ? 1 - iRec230[i - 1] : iRec230[i - 1]);
			}
			/* Post code */
			for (int j905 = 0; j905 < 4; j905 = j905 + 1) {
				iRec230_perm[j905] = iRec230_tmp[vsize + j905];
			}
			/* Vectorizable loop 340 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec259[i] = 0.5f * fYec161[i];
			}
			/* Recursive loop 341 */
			/* Pre code */
			for (int j918 = 0; j918 < 4; j918 = j918 + 1) {
				iRec234_tmp[j918] = iRec234_perm[j918];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec234[i] = (((0.5f * (fYec164[i] - fYec164[i - 1])) < 0.0f) ? 1 - iRec234[i - 1] : iRec234[i - 1]);
			}
			/* Post code */
			for (int j919 = 0; j919 < 4; j919 = j919 + 1) {
				iRec234_perm[j919] = iRec234_tmp[vsize + j919];
			}
			/* Vectorizable loop 342 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec261[i] = 0.5f * fYec164[i];
			}
			/* Recursive loop 343 */
			/* Pre code */
			for (int j932 = 0; j932 < 4; j932 = j932 + 1) {
				iRec238_tmp[j932] = iRec238_perm[j932];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec238[i] = (((0.5f * (fYec167[i] - fYec167[i - 1])) < 0.0f) ? 1 - iRec238[i - 1] : iRec238[i - 1]);
			}
			/* Post code */
			for (int j933 = 0; j933 < 4; j933 = j933 + 1) {
				iRec238_perm[j933] = iRec238_tmp[vsize + j933];
			}
			/* Vectorizable loop 344 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec263[i] = 0.5f * fYec167[i];
			}
			/* Recursive loop 345 */
			/* Pre code */
			for (int j946 = 0; j946 < 4; j946 = j946 + 1) {
				iRec242_tmp[j946] = iRec242_perm[j946];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec242[i] = (((0.5f * (fYec170[i] - fYec170[i - 1])) < 0.0f) ? 1 - iRec242[i - 1] : iRec242[i - 1]);
			}
			/* Post code */
			for (int j947 = 0; j947 < 4; j947 = j947 + 1) {
				iRec242_perm[j947] = iRec242_tmp[vsize + j947];
			}
			/* Vectorizable loop 346 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec265[i] = 0.5f * fYec170[i];
			}
			/* Recursive loop 347 */
			/* Pre code */
			for (int j960 = 0; j960 < 4; j960 = j960 + 1) {
				iRec246_tmp[j960] = iRec246_perm[j960];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec246[i] = (((0.5f * (fYec173[i] - fYec173[i - 1])) < 0.0f) ? 1 - iRec246[i - 1] : iRec246[i - 1]);
			}
			/* Post code */
			for (int j961 = 0; j961 < 4; j961 = j961 + 1) {
				iRec246_perm[j961] = iRec246_tmp[vsize + j961];
			}
			/* Vectorizable loop 348 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec267[i] = 0.5f * fYec173[i];
			}
			/* Recursive loop 349 */
			/* Pre code */
			for (int j16 = 0; j16 < 4; j16 = j16 + 1) {
				fRec8_tmp[j16] = fRec8_perm[j16];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec8[i] = fRec8[i - 1] + fConst3 * (2.0f * fYec2[i - 1] + square_polyblep_precalc(fZec4[i], 0.5f * fYec1[i - 1], 0.5f * fYec1[i - 2], fZec6[i]) - fRec8[i - 1]);
			}
			/* Post code */
			for (int j17 = 0; j17 < 4; j17 = j17 + 1) {
				fRec8_perm[j17] = fRec8_tmp[vsize + j17];
			}
			/* Recursive loop 350 */
			/* Pre code */
			for (int j32 = 0; j32 < 4; j32 = j32 + 1) {
				fRec14_tmp[j32] = fRec14_perm[j32];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec14[i] = fRec14[i - 1] + fConst7 * (2.0f * fYec5[i - 1] + square_polyblep_precalc(fZec10[i], 0.5f * fYec4[i - 1], 0.5f * fYec4[i - 2], fZec12[i]) - fRec14[i - 1]);
			}
			/* Post code */
			for (int j33 = 0; j33 < 4; j33 = j33 + 1) {
				fRec14_perm[j33] = fRec14_tmp[vsize + j33];
			}
			/* Recursive loop 351 */
			/* Pre code */
			for (int j48 = 0; j48 < 4; j48 = j48 + 1) {
				fRec19_tmp[j48] = fRec19_perm[j48];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec19[i] = fRec19[i - 1] + fConst7 * (2.0f * fYec8[i - 1] + square_polyblep_precalc(fZec16[i], 0.5f * fYec7[i - 1], 0.5f * fYec7[i - 2], fZec18[i]) - fRec19[i - 1]);
			}
			/* Post code */
			for (int j49 = 0; j49 < 4; j49 = j49 + 1) {
				fRec19_perm[j49] = fRec19_tmp[vsize + j49];
			}
			/* Recursive loop 352 */
			/* Pre code */
			for (int j64 = 0; j64 < 4; j64 = j64 + 1) {
				fRec24_tmp[j64] = fRec24_perm[j64];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec24[i] = fRec24[i - 1] + fConst7 * (2.0f * fYec11[i - 1] + square_polyblep_precalc(fZec22[i], 0.5f * fYec10[i - 1], 0.5f * fYec10[i - 2], fZec24[i]) - fRec24[i - 1]);
			}
			/* Post code */
			for (int j65 = 0; j65 < 4; j65 = j65 + 1) {
				fRec24_perm[j65] = fRec24_tmp[vsize + j65];
			}
			/* Recursive loop 353 */
			/* Pre code */
			for (int j82 = 0; j82 < 4; j82 = j82 + 1) {
				fRec28_tmp[j82] = fRec28_perm[j82];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec28[i] = fConst5 * (fRec28[i - 1] + (fRec29[i] - fRec29[i - 1]));
			}
			/* Post code */
			for (int j83 = 0; j83 < 4; j83 = j83 + 1) {
				fRec28_perm[j83] = fRec28_tmp[vsize + j83];
			}
			/* Recursive loop 354 */
			/* Pre code */
			for (int j102 = 0; j102 < 4; j102 = j102 + 1) {
				fRec33_tmp[j102] = fRec33_perm[j102];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec33[i] = fConst5 * (fRec33[i - 1] + (fRec34[i] - fRec34[i - 1]));
			}
			/* Post code */
			for (int j103 = 0; j103 < 4; j103 = j103 + 1) {
				fRec33_perm[j103] = fRec33_tmp[vsize + j103];
			}
			/* Recursive loop 355 */
			/* Pre code */
			for (int j122 = 0; j122 < 4; j122 = j122 + 1) {
				fRec39_tmp[j122] = fRec39_perm[j122];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec39[i] = fConst5 * (fRec39[i - 1] + (fRec40[i] - fRec40[i - 1]));
			}
			/* Post code */
			for (int j123 = 0; j123 < 4; j123 = j123 + 1) {
				fRec39_perm[j123] = fRec39_tmp[vsize + j123];
			}
			/* Recursive loop 356 */
			/* Pre code */
			for (int j142 = 0; j142 < 4; j142 = j142 + 1) {
				fRec45_tmp[j142] = fRec45_perm[j142];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec45[i] = fConst5 * (fRec45[i - 1] + (fRec46[i] - fRec46[i - 1]));
			}
			/* Post code */
			for (int j143 = 0; j143 < 4; j143 = j143 + 1) {
				fRec45_perm[j143] = fRec45_tmp[vsize + j143];
			}
			/* Vectorizable loop 357 */
			/* Pre code */
			for (int j276 = 0; j276 < 4; j276 = j276 + 1) {
				fYec54_tmp[j276] = fYec54_perm[j276];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec54[i] = fZec30[i] - 2.0f * fYec53[i - 1];
			}
			/* Post code */
			for (int j277 = 0; j277 < 4; j277 = j277 + 1) {
				fYec54_perm[j277] = fYec54_tmp[vsize + j277];
			}
			/* Recursive loop 358 */
			/* Pre code */
			for (int j282 = 0; j282 < 4; j282 = j282 + 1) {
				fRec92_tmp[j282] = fRec92_perm[j282];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec92[i] = fRec92[i - 1] + fConst22 * (2.0f * fYec55[i - 1] + square_polyblep_precalc(fZec33[i], 0.5f * fYec15[i - 1], 0.5f * fYec15[i - 2], fZec37[i]) - fRec92[i - 1]);
			}
			/* Post code */
			for (int j283 = 0; j283 < 4; j283 = j283 + 1) {
				fRec92_perm[j283] = fRec92_tmp[vsize + j283];
			}
			/* Recursive loop 359 */
			/* Pre code */
			for (int j288 = 0; j288 < 4; j288 = j288 + 1) {
				fRec94_tmp[j288] = fRec94_perm[j288];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec94[i] = fRec94[i - 1] + fConst22 * (2.0f * fYec56[i - 1] + square_polyblep_precalc(fZec40[i], 0.5f * fYec19[i - 1], 0.5f * fYec19[i - 2], fZec44[i]) - fRec94[i - 1]);
			}
			/* Post code */
			for (int j289 = 0; j289 < 4; j289 = j289 + 1) {
				fRec94_perm[j289] = fRec94_tmp[vsize + j289];
			}
			/* Recursive loop 360 */
			/* Pre code */
			for (int j294 = 0; j294 < 4; j294 = j294 + 1) {
				fRec96_tmp[j294] = fRec96_perm[j294];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec96[i] = fRec96[i - 1] + fConst22 * (2.0f * fYec57[i - 1] + square_polyblep_precalc(fZec47[i], 0.5f * fYec23[i - 1], 0.5f * fYec23[i - 2], fZec51[i]) - fRec96[i - 1]);
			}
			/* Post code */
			for (int j295 = 0; j295 < 4; j295 = j295 + 1) {
				fRec96_perm[j295] = fRec96_tmp[vsize + j295];
			}
			/* Recursive loop 361 */
			/* Pre code */
			for (int j300 = 0; j300 < 4; j300 = j300 + 1) {
				fRec98_tmp[j300] = fRec98_perm[j300];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec98[i] = fRec98[i - 1] + fConst22 * (2.0f * fYec58[i - 1] + square_polyblep_precalc(fZec54[i], 0.5f * fYec27[i - 1], 0.5f * fYec27[i - 2], fZec58[i]) - fRec98[i - 1]);
			}
			/* Post code */
			for (int j301 = 0; j301 < 4; j301 = j301 + 1) {
				fRec98_perm[j301] = fRec98_tmp[vsize + j301];
			}
			/* Recursive loop 362 */
			/* Pre code */
			for (int j306 = 0; j306 < 4; j306 = j306 + 1) {
				fRec100_tmp[j306] = fRec100_perm[j306];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec100[i] = fRec100[i - 1] + fConst23 * (2.0f * fYec59[i - 1] + square_polyblep_precalc(fZec61[i], 0.5f * fYec31[i - 1], 0.5f * fYec31[i - 2], fZec65[i]) - fRec100[i - 1]);
			}
			/* Post code */
			for (int j307 = 0; j307 < 4; j307 = j307 + 1) {
				fRec100_perm[j307] = fRec100_tmp[vsize + j307];
			}
			/* Recursive loop 363 */
			/* Pre code */
			for (int j312 = 0; j312 < 4; j312 = j312 + 1) {
				fRec102_tmp[j312] = fRec102_perm[j312];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec102[i] = fRec102[i - 1] + fConst23 * (2.0f * fYec60[i - 1] + square_polyblep_precalc(fZec68[i], 0.5f * fYec35[i - 1], 0.5f * fYec35[i - 2], fZec72[i]) - fRec102[i - 1]);
			}
			/* Post code */
			for (int j313 = 0; j313 < 4; j313 = j313 + 1) {
				fRec102_perm[j313] = fRec102_tmp[vsize + j313];
			}
			/* Recursive loop 364 */
			/* Pre code */
			for (int j318 = 0; j318 < 4; j318 = j318 + 1) {
				fRec104_tmp[j318] = fRec104_perm[j318];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec104[i] = fRec104[i - 1] + fConst23 * (2.0f * fYec61[i - 1] + square_polyblep_precalc(fZec75[i], 0.5f * fYec39[i - 1], 0.5f * fYec39[i - 2], fZec79[i]) - fRec104[i - 1]);
			}
			/* Post code */
			for (int j319 = 0; j319 < 4; j319 = j319 + 1) {
				fRec104_perm[j319] = fRec104_tmp[vsize + j319];
			}
			/* Recursive loop 365 */
			/* Pre code */
			for (int j324 = 0; j324 < 4; j324 = j324 + 1) {
				fRec106_tmp[j324] = fRec106_perm[j324];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec106[i] = fRec106[i - 1] + fConst23 * (2.0f * fYec62[i - 1] + square_polyblep_precalc(fZec3[i], 0.5f * fYec0[i - 1], 0.5f * fYec0[i - 2], fZec6[i]) - fRec106[i - 1]);
			}
			/* Post code */
			for (int j325 = 0; j325 < 4; j325 = j325 + 1) {
				fRec106_perm[j325] = fRec106_tmp[vsize + j325];
			}
			/* Recursive loop 366 */
			/* Pre code */
			for (int j330 = 0; j330 < 4; j330 = j330 + 1) {
				fRec108_tmp[j330] = fRec108_perm[j330];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec108[i] = fRec108[i - 1] + fConst24 * (2.0f * fYec63[i - 1] + square_polyblep_precalc(fZec9[i], 0.5f * fYec3[i - 1], 0.5f * fYec3[i - 2], fZec12[i]) - fRec108[i - 1]);
			}
			/* Post code */
			for (int j331 = 0; j331 < 4; j331 = j331 + 1) {
				fRec108_perm[j331] = fRec108_tmp[vsize + j331];
			}
			/* Recursive loop 367 */
			/* Pre code */
			for (int j336 = 0; j336 < 4; j336 = j336 + 1) {
				fRec110_tmp[j336] = fRec110_perm[j336];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec110[i] = fRec110[i - 1] + fConst24 * (2.0f * fYec64[i - 1] + square_polyblep_precalc(fZec15[i], 0.5f * fYec6[i - 1], 0.5f * fYec6[i - 2], fZec18[i]) - fRec110[i - 1]);
			}
			/* Post code */
			for (int j337 = 0; j337 < 4; j337 = j337 + 1) {
				fRec110_perm[j337] = fRec110_tmp[vsize + j337];
			}
			/* Recursive loop 368 */
			/* Pre code */
			for (int j342 = 0; j342 < 4; j342 = j342 + 1) {
				fRec112_tmp[j342] = fRec112_perm[j342];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec112[i] = fRec112[i - 1] + fConst24 * (2.0f * fYec65[i - 1] + square_polyblep_precalc(fZec21[i], 0.5f * fYec9[i - 1], 0.5f * fYec9[i - 2], fZec24[i]) - fRec112[i - 1]);
			}
			/* Post code */
			for (int j343 = 0; j343 < 4; j343 = j343 + 1) {
				fRec112_perm[j343] = fRec112_tmp[vsize + j343];
			}
			/* Recursive loop 369 */
			/* Pre code */
			for (int j348 = 0; j348 < 4; j348 = j348 + 1) {
				fRec114_tmp[j348] = fRec114_perm[j348];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec114[i] = fRec114[i - 1] + fConst24 * (2.0f * fYec66[i - 1] + square_polyblep_precalc(fZec27[i], 0.5f * fYec12[i - 1], 0.5f * fYec12[i - 2], fZec30[i]) - fRec114[i - 1]);
			}
			/* Post code */
			for (int j349 = 0; j349 < 4; j349 = j349 + 1) {
				fRec114_perm[j349] = fRec114_tmp[vsize + j349];
			}
			/* Recursive loop 370 */
			/* Pre code */
			for (int j354 = 0; j354 < 4; j354 = j354 + 1) {
				fRec116_tmp[j354] = fRec116_perm[j354];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec116[i] = fRec116[i - 1] + fConst25 * (2.0f * fYec67[i - 1] + square_polyblep_precalc(fZec34[i], 0.5f * fYec16[i - 1], 0.5f * fYec16[i - 2], fZec37[i]) - fRec116[i - 1]);
			}
			/* Post code */
			for (int j355 = 0; j355 < 4; j355 = j355 + 1) {
				fRec116_perm[j355] = fRec116_tmp[vsize + j355];
			}
			/* Recursive loop 371 */
			/* Pre code */
			for (int j360 = 0; j360 < 4; j360 = j360 + 1) {
				fRec118_tmp[j360] = fRec118_perm[j360];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec118[i] = fRec118[i - 1] + fConst25 * (2.0f * fYec68[i - 1] + square_polyblep_precalc(fZec41[i], 0.5f * fYec20[i - 1], 0.5f * fYec20[i - 2], fZec44[i]) - fRec118[i - 1]);
			}
			/* Post code */
			for (int j361 = 0; j361 < 4; j361 = j361 + 1) {
				fRec118_perm[j361] = fRec118_tmp[vsize + j361];
			}
			/* Recursive loop 372 */
			/* Pre code */
			for (int j366 = 0; j366 < 4; j366 = j366 + 1) {
				fRec120_tmp[j366] = fRec120_perm[j366];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec120[i] = fRec120[i - 1] + fConst25 * (2.0f * fYec69[i - 1] + square_polyblep_precalc(fZec48[i], 0.5f * fYec24[i - 1], 0.5f * fYec24[i - 2], fZec51[i]) - fRec120[i - 1]);
			}
			/* Post code */
			for (int j367 = 0; j367 < 4; j367 = j367 + 1) {
				fRec120_perm[j367] = fRec120_tmp[vsize + j367];
			}
			/* Recursive loop 373 */
			/* Pre code */
			for (int j372 = 0; j372 < 4; j372 = j372 + 1) {
				fRec122_tmp[j372] = fRec122_perm[j372];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec122[i] = fRec122[i - 1] + fConst25 * (2.0f * fYec70[i - 1] + square_polyblep_precalc(fZec55[i], 0.5f * fYec28[i - 1], 0.5f * fYec28[i - 2], fZec58[i]) - fRec122[i - 1]);
			}
			/* Post code */
			for (int j373 = 0; j373 < 4; j373 = j373 + 1) {
				fRec122_perm[j373] = fRec122_tmp[vsize + j373];
			}
			/* Recursive loop 374 */
			/* Pre code */
			for (int j378 = 0; j378 < 4; j378 = j378 + 1) {
				fRec124_tmp[j378] = fRec124_perm[j378];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec124[i] = fRec124[i - 1] + fConst3 * (2.0f * fYec71[i - 1] + square_polyblep_precalc(fZec62[i], 0.5f * fYec32[i - 1], 0.5f * fYec32[i - 2], fZec65[i]) - fRec124[i - 1]);
			}
			/* Post code */
			for (int j379 = 0; j379 < 4; j379 = j379 + 1) {
				fRec124_perm[j379] = fRec124_tmp[vsize + j379];
			}
			/* Recursive loop 375 */
			/* Pre code */
			for (int j384 = 0; j384 < 4; j384 = j384 + 1) {
				fRec126_tmp[j384] = fRec126_perm[j384];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec126[i] = fRec126[i - 1] + fConst3 * (2.0f * fYec72[i - 1] + square_polyblep_precalc(fZec76[i], 0.5f * fYec40[i - 1], 0.5f * fYec40[i - 2], fZec79[i]) - fRec126[i - 1]);
			}
			/* Post code */
			for (int j385 = 0; j385 < 4; j385 = j385 + 1) {
				fRec126_perm[j385] = fRec126_tmp[vsize + j385];
			}
			/* Recursive loop 376 */
			/* Pre code */
			for (int j390 = 0; j390 < 4; j390 = j390 + 1) {
				fRec128_tmp[j390] = fRec128_perm[j390];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec128[i] = fRec128[i - 1] + fConst3 * (2.0f * fYec73[i - 1] + square_polyblep_precalc(fZec69[i], 0.5f * fYec36[i - 1], 0.5f * fYec36[i - 2], fZec72[i]) - fRec128[i - 1]);
			}
			/* Post code */
			for (int j391 = 0; j391 < 4; j391 = j391 + 1) {
				fRec128_perm[j391] = fRec128_tmp[vsize + j391];
			}
			/* Vectorizable loop 377 */
			/* Pre code */
			for (int j396 = 0; j396 < 4; j396 = j396 + 1) {
				fYec75_tmp[j396] = fYec75_perm[j396];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec75[i] = fZec37[i] - 2.0f * fYec74[i - 1];
			}
			/* Post code */
			for (int j397 = 0; j397 < 4; j397 = j397 + 1) {
				fYec75_perm[j397] = fYec75_tmp[vsize + j397];
			}
			/* Vectorizable loop 378 */
			/* Pre code */
			for (int j402 = 0; j402 < 4; j402 = j402 + 1) {
				fYec77_tmp[j402] = fYec77_perm[j402];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec77[i] = fZec44[i] - 2.0f * fYec76[i - 1];
			}
			/* Post code */
			for (int j403 = 0; j403 < 4; j403 = j403 + 1) {
				fYec77_perm[j403] = fYec77_tmp[vsize + j403];
			}
			/* Vectorizable loop 379 */
			/* Pre code */
			for (int j408 = 0; j408 < 4; j408 = j408 + 1) {
				fYec79_tmp[j408] = fYec79_perm[j408];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec79[i] = fZec51[i] - 2.0f * fYec78[i - 1];
			}
			/* Post code */
			for (int j409 = 0; j409 < 4; j409 = j409 + 1) {
				fYec79_perm[j409] = fYec79_tmp[vsize + j409];
			}
			/* Vectorizable loop 380 */
			/* Pre code */
			for (int j414 = 0; j414 < 4; j414 = j414 + 1) {
				fYec81_tmp[j414] = fYec81_perm[j414];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec81[i] = fZec58[i] - 2.0f * fYec80[i - 1];
			}
			/* Post code */
			for (int j415 = 0; j415 < 4; j415 = j415 + 1) {
				fYec81_perm[j415] = fYec81_tmp[vsize + j415];
			}
			/* Vectorizable loop 381 */
			/* Pre code */
			for (int j420 = 0; j420 < 4; j420 = j420 + 1) {
				fYec83_tmp[j420] = fYec83_perm[j420];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec83[i] = fZec65[i] - 2.0f * fYec82[i - 1];
			}
			/* Post code */
			for (int j421 = 0; j421 < 4; j421 = j421 + 1) {
				fYec83_perm[j421] = fYec83_tmp[vsize + j421];
			}
			/* Vectorizable loop 382 */
			/* Pre code */
			for (int j426 = 0; j426 < 4; j426 = j426 + 1) {
				fYec85_tmp[j426] = fYec85_perm[j426];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec85[i] = fZec72[i] - 2.0f * fYec84[i - 1];
			}
			/* Post code */
			for (int j427 = 0; j427 < 4; j427 = j427 + 1) {
				fYec85_perm[j427] = fYec85_tmp[vsize + j427];
			}
			/* Vectorizable loop 383 */
			/* Pre code */
			for (int j432 = 0; j432 < 4; j432 = j432 + 1) {
				fYec87_tmp[j432] = fYec87_perm[j432];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec87[i] = fZec79[i] - 2.0f * fYec86[i - 1];
			}
			/* Post code */
			for (int j433 = 0; j433 < 4; j433 = j433 + 1) {
				fYec87_perm[j433] = fYec87_tmp[vsize + j433];
			}
			/* Vectorizable loop 384 */
			/* Pre code */
			for (int j438 = 0; j438 < 4; j438 = j438 + 1) {
				fYec89_tmp[j438] = fYec89_perm[j438];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec89[i] = fZec6[i] - 2.0f * fYec88[i - 1];
			}
			/* Post code */
			for (int j439 = 0; j439 < 4; j439 = j439 + 1) {
				fYec89_perm[j439] = fYec89_tmp[vsize + j439];
			}
			/* Vectorizable loop 385 */
			/* Pre code */
			for (int j444 = 0; j444 < 4; j444 = j444 + 1) {
				fYec91_tmp[j444] = fYec91_perm[j444];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec91[i] = fZec12[i] - 2.0f * fYec90[i - 1];
			}
			/* Post code */
			for (int j445 = 0; j445 < 4; j445 = j445 + 1) {
				fYec91_perm[j445] = fYec91_tmp[vsize + j445];
			}
			/* Vectorizable loop 386 */
			/* Pre code */
			for (int j450 = 0; j450 < 4; j450 = j450 + 1) {
				fYec93_tmp[j450] = fYec93_perm[j450];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec93[i] = fZec18[i] - 2.0f * fYec92[i - 1];
			}
			/* Post code */
			for (int j451 = 0; j451 < 4; j451 = j451 + 1) {
				fYec93_perm[j451] = fYec93_tmp[vsize + j451];
			}
			/* Vectorizable loop 387 */
			/* Pre code */
			for (int j456 = 0; j456 < 4; j456 = j456 + 1) {
				fYec95_tmp[j456] = fYec95_perm[j456];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec95[i] = fZec24[i] - 2.0f * fYec94[i - 1];
			}
			/* Post code */
			for (int j457 = 0; j457 < 4; j457 = j457 + 1) {
				fYec95_perm[j457] = fYec95_tmp[vsize + j457];
			}
			/* Vectorizable loop 388 */
			/* Pre code */
			for (int j460 = 0; j460 < 4; j460 = j460 + 1) {
				fVec0_tmp[j460] = fVec0_perm[j460];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec0[i] = fSlow18;
			}
			/* Post code */
			for (int j461 = 0; j461 < 4; j461 = j461 + 1) {
				fVec0_perm[j461] = fVec0_tmp[vsize + j461];
			}
			/* Vectorizable loop 389 */
			/* Pre code */
			for (int j462 = 0; j462 < 4; j462 = j462 + 1) {
				fVec1_tmp[j462] = fVec1_perm[j462];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec1[i] = fSlow19;
			}
			/* Post code */
			for (int j463 = 0; j463 < 4; j463 = j463 + 1) {
				fVec1_perm[j463] = fVec1_tmp[vsize + j463];
			}
			/* Vectorizable loop 390 */
			/* Pre code */
			for (int j464 = 0; j464 < 4; j464 = j464 + 1) {
				fVec2_tmp[j464] = fVec2_perm[j464];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec2[i] = fSlow20;
			}
			/* Post code */
			for (int j465 = 0; j465 < 4; j465 = j465 + 1) {
				fVec2_perm[j465] = fVec2_tmp[vsize + j465];
			}
			/* Vectorizable loop 391 */
			/* Pre code */
			for (int j466 = 0; j466 < 4; j466 = j466 + 1) {
				fVec3_tmp[j466] = fVec3_perm[j466];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec3[i] = fSlow21;
			}
			/* Post code */
			for (int j467 = 0; j467 < 4; j467 = j467 + 1) {
				fVec3_perm[j467] = fVec3_tmp[vsize + j467];
			}
			/* Vectorizable loop 392 */
			/* Pre code */
			for (int j468 = 0; j468 < 4; j468 = j468 + 1) {
				fVec4_tmp[j468] = fVec4_perm[j468];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec4[i] = fSlow22;
			}
			/* Post code */
			for (int j469 = 0; j469 < 4; j469 = j469 + 1) {
				fVec4_perm[j469] = fVec4_tmp[vsize + j469];
			}
			/* Vectorizable loop 393 */
			/* Pre code */
			for (int j470 = 0; j470 < 4; j470 = j470 + 1) {
				fVec5_tmp[j470] = fVec5_perm[j470];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec5[i] = fSlow23;
			}
			/* Post code */
			for (int j471 = 0; j471 < 4; j471 = j471 + 1) {
				fVec5_perm[j471] = fVec5_tmp[vsize + j471];
			}
			/* Vectorizable loop 394 */
			/* Pre code */
			for (int j472 = 0; j472 < 4; j472 = j472 + 1) {
				fVec6_tmp[j472] = fVec6_perm[j472];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec6[i] = fSlow24;
			}
			/* Post code */
			for (int j473 = 0; j473 < 4; j473 = j473 + 1) {
				fVec6_perm[j473] = fVec6_tmp[vsize + j473];
			}
			/* Vectorizable loop 395 */
			/* Pre code */
			for (int j474 = 0; j474 < 4; j474 = j474 + 1) {
				fVec7_tmp[j474] = fVec7_perm[j474];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec7[i] = fSlow25;
			}
			/* Post code */
			for (int j475 = 0; j475 < 4; j475 = j475 + 1) {
				fVec7_perm[j475] = fVec7_tmp[vsize + j475];
			}
			/* Vectorizable loop 396 */
			/* Pre code */
			for (int j476 = 0; j476 < 4; j476 = j476 + 1) {
				fVec8_tmp[j476] = fVec8_perm[j476];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec8[i] = fSlow26;
			}
			/* Post code */
			for (int j477 = 0; j477 < 4; j477 = j477 + 1) {
				fVec8_perm[j477] = fVec8_tmp[vsize + j477];
			}
			/* Vectorizable loop 397 */
			/* Pre code */
			for (int j478 = 0; j478 < 4; j478 = j478 + 1) {
				fVec9_tmp[j478] = fVec9_perm[j478];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec9[i] = fSlow27;
			}
			/* Post code */
			for (int j479 = 0; j479 < 4; j479 = j479 + 1) {
				fVec9_perm[j479] = fVec9_tmp[vsize + j479];
			}
			/* Vectorizable loop 398 */
			/* Pre code */
			for (int j480 = 0; j480 < 4; j480 = j480 + 1) {
				fVec10_tmp[j480] = fVec10_perm[j480];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec10[i] = fSlow28;
			}
			/* Post code */
			for (int j481 = 0; j481 < 4; j481 = j481 + 1) {
				fVec10_perm[j481] = fVec10_tmp[vsize + j481];
			}
			/* Vectorizable loop 399 */
			/* Pre code */
			for (int j482 = 0; j482 < 4; j482 = j482 + 1) {
				fVec11_tmp[j482] = fVec11_perm[j482];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec11[i] = fSlow29;
			}
			/* Post code */
			for (int j483 = 0; j483 < 4; j483 = j483 + 1) {
				fVec11_perm[j483] = fVec11_tmp[vsize + j483];
			}
			/* Vectorizable loop 400 */
			/* Pre code */
			for (int j484 = 0; j484 < 4; j484 = j484 + 1) {
				fVec12_tmp[j484] = fVec12_perm[j484];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec12[i] = fSlow30;
			}
			/* Post code */
			for (int j485 = 0; j485 < 4; j485 = j485 + 1) {
				fVec12_perm[j485] = fVec12_tmp[vsize + j485];
			}
			/* Vectorizable loop 401 */
			/* Pre code */
			for (int j510 = 0; j510 < 4; j510 = j510 + 1) {
				fVec25_tmp[j510] = fVec25_perm[j510];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec25[i] = fSlow43;
			}
			/* Post code */
			for (int j511 = 0; j511 < 4; j511 = j511 + 1) {
				fVec25_perm[j511] = fVec25_tmp[vsize + j511];
			}
			/* Vectorizable loop 402 */
			/* Pre code */
			for (int j512 = 0; j512 < 4; j512 = j512 + 1) {
				fVec26_tmp[j512] = fVec26_perm[j512];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec26[i] = fSlow44;
			}
			/* Post code */
			for (int j513 = 0; j513 < 4; j513 = j513 + 1) {
				fVec26_perm[j513] = fVec26_tmp[vsize + j513];
			}
			/* Vectorizable loop 403 */
			/* Pre code */
			for (int j514 = 0; j514 < 4; j514 = j514 + 1) {
				fVec27_tmp[j514] = fVec27_perm[j514];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec27[i] = fSlow45;
			}
			/* Post code */
			for (int j515 = 0; j515 < 4; j515 = j515 + 1) {
				fVec27_perm[j515] = fVec27_tmp[vsize + j515];
			}
			/* Vectorizable loop 404 */
			/* Pre code */
			for (int j516 = 0; j516 < 4; j516 = j516 + 1) {
				fVec28_tmp[j516] = fVec28_perm[j516];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec28[i] = fSlow46;
			}
			/* Post code */
			for (int j517 = 0; j517 < 4; j517 = j517 + 1) {
				fVec28_perm[j517] = fVec28_tmp[vsize + j517];
			}
			/* Vectorizable loop 405 */
			/* Pre code */
			for (int j518 = 0; j518 < 4; j518 = j518 + 1) {
				fVec29_tmp[j518] = fVec29_perm[j518];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec29[i] = fSlow47;
			}
			/* Post code */
			for (int j519 = 0; j519 < 4; j519 = j519 + 1) {
				fVec29_perm[j519] = fVec29_tmp[vsize + j519];
			}
			/* Vectorizable loop 406 */
			/* Pre code */
			for (int j520 = 0; j520 < 4; j520 = j520 + 1) {
				fVec30_tmp[j520] = fVec30_perm[j520];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec30[i] = fSlow48;
			}
			/* Post code */
			for (int j521 = 0; j521 < 4; j521 = j521 + 1) {
				fVec30_perm[j521] = fVec30_tmp[vsize + j521];
			}
			/* Vectorizable loop 407 */
			/* Pre code */
			for (int j522 = 0; j522 < 4; j522 = j522 + 1) {
				fVec31_tmp[j522] = fVec31_perm[j522];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec31[i] = fSlow49;
			}
			/* Post code */
			for (int j523 = 0; j523 < 4; j523 = j523 + 1) {
				fVec31_perm[j523] = fVec31_tmp[vsize + j523];
			}
			/* Vectorizable loop 408 */
			/* Pre code */
			for (int j524 = 0; j524 < 4; j524 = j524 + 1) {
				fVec32_tmp[j524] = fVec32_perm[j524];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec32[i] = fSlow50;
			}
			/* Post code */
			for (int j525 = 0; j525 < 4; j525 = j525 + 1) {
				fVec32_perm[j525] = fVec32_tmp[vsize + j525];
			}
			/* Vectorizable loop 409 */
			/* Pre code */
			for (int j526 = 0; j526 < 4; j526 = j526 + 1) {
				fVec33_tmp[j526] = fVec33_perm[j526];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec33[i] = fSlow51;
			}
			/* Post code */
			for (int j527 = 0; j527 < 4; j527 = j527 + 1) {
				fVec33_perm[j527] = fVec33_tmp[vsize + j527];
			}
			/* Vectorizable loop 410 */
			/* Pre code */
			for (int j528 = 0; j528 < 4; j528 = j528 + 1) {
				fVec34_tmp[j528] = fVec34_perm[j528];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec34[i] = fSlow52;
			}
			/* Post code */
			for (int j529 = 0; j529 < 4; j529 = j529 + 1) {
				fVec34_perm[j529] = fVec34_tmp[vsize + j529];
			}
			/* Vectorizable loop 411 */
			/* Pre code */
			for (int j530 = 0; j530 < 4; j530 = j530 + 1) {
				fVec35_tmp[j530] = fVec35_perm[j530];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec35[i] = fSlow53;
			}
			/* Post code */
			for (int j531 = 0; j531 < 4; j531 = j531 + 1) {
				fVec35_perm[j531] = fVec35_tmp[vsize + j531];
			}
			/* Vectorizable loop 412 */
			/* Pre code */
			for (int j532 = 0; j532 < 4; j532 = j532 + 1) {
				fVec36_tmp[j532] = fVec36_perm[j532];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec36[i] = fSlow54;
			}
			/* Post code */
			for (int j533 = 0; j533 < 4; j533 = j533 + 1) {
				fVec36_perm[j533] = fVec36_tmp[vsize + j533];
			}
			/* Vectorizable loop 413 */
			/* Pre code */
			for (int j534 = 0; j534 < 4; j534 = j534 + 1) {
				fVec37_tmp[j534] = fVec37_perm[j534];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec37[i] = fSlow55;
			}
			/* Post code */
			for (int j535 = 0; j535 < 4; j535 = j535 + 1) {
				fVec37_perm[j535] = fVec37_tmp[vsize + j535];
			}
			/* Vectorizable loop 414 */
			/* Pre code */
			for (int j536 = 0; j536 < 4; j536 = j536 + 1) {
				fVec38_tmp[j536] = fVec38_perm[j536];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec38[i] = fSlow56;
			}
			/* Post code */
			for (int j537 = 0; j537 < 4; j537 = j537 + 1) {
				fVec38_perm[j537] = fVec38_tmp[vsize + j537];
			}
			/* Vectorizable loop 415 */
			/* Pre code */
			for (int j538 = 0; j538 < 4; j538 = j538 + 1) {
				fVec39_tmp[j538] = fVec39_perm[j538];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec39[i] = fSlow57;
			}
			/* Post code */
			for (int j539 = 0; j539 < 4; j539 = j539 + 1) {
				fVec39_perm[j539] = fVec39_tmp[vsize + j539];
			}
			/* Vectorizable loop 416 */
			/* Pre code */
			for (int j540 = 0; j540 < 4; j540 = j540 + 1) {
				fVec40_tmp[j540] = fVec40_perm[j540];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec40[i] = fSlow58;
			}
			/* Post code */
			for (int j541 = 0; j541 < 4; j541 = j541 + 1) {
				fVec40_perm[j541] = fVec40_tmp[vsize + j541];
			}
			/* Vectorizable loop 417 */
			/* Pre code */
			for (int j542 = 0; j542 < 4; j542 = j542 + 1) {
				fVec41_tmp[j542] = fVec41_perm[j542];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec41[i] = fSlow59;
			}
			/* Post code */
			for (int j543 = 0; j543 < 4; j543 = j543 + 1) {
				fVec41_perm[j543] = fVec41_tmp[vsize + j543];
			}
			/* Vectorizable loop 418 */
			/* Pre code */
			for (int j544 = 0; j544 < 4; j544 = j544 + 1) {
				fVec42_tmp[j544] = fVec42_perm[j544];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec42[i] = fSlow60;
			}
			/* Post code */
			for (int j545 = 0; j545 < 4; j545 = j545 + 1) {
				fVec42_perm[j545] = fVec42_tmp[vsize + j545];
			}
			/* Vectorizable loop 419 */
			/* Pre code */
			for (int j546 = 0; j546 < 4; j546 = j546 + 1) {
				fVec43_tmp[j546] = fVec43_perm[j546];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec43[i] = fSlow61;
			}
			/* Post code */
			for (int j547 = 0; j547 < 4; j547 = j547 + 1) {
				fVec43_perm[j547] = fVec43_tmp[vsize + j547];
			}
			/* Vectorizable loop 420 */
			/* Pre code */
			for (int j548 = 0; j548 < 4; j548 = j548 + 1) {
				fVec44_tmp[j548] = fVec44_perm[j548];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec44[i] = fSlow62;
			}
			/* Post code */
			for (int j549 = 0; j549 < 4; j549 = j549 + 1) {
				fVec44_perm[j549] = fVec44_tmp[vsize + j549];
			}
			/* Vectorizable loop 421 */
			/* Pre code */
			for (int j550 = 0; j550 < 4; j550 = j550 + 1) {
				fVec45_tmp[j550] = fVec45_perm[j550];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec45[i] = fSlow63;
			}
			/* Post code */
			for (int j551 = 0; j551 < 4; j551 = j551 + 1) {
				fVec45_perm[j551] = fVec45_tmp[vsize + j551];
			}
			/* Vectorizable loop 422 */
			/* Pre code */
			for (int j552 = 0; j552 < 4; j552 = j552 + 1) {
				fVec46_tmp[j552] = fVec46_perm[j552];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec46[i] = fSlow64;
			}
			/* Post code */
			for (int j553 = 0; j553 < 4; j553 = j553 + 1) {
				fVec46_perm[j553] = fVec46_tmp[vsize + j553];
			}
			/* Vectorizable loop 423 */
			/* Pre code */
			for (int j554 = 0; j554 < 4; j554 = j554 + 1) {
				fVec47_tmp[j554] = fVec47_perm[j554];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec47[i] = fSlow65;
			}
			/* Post code */
			for (int j555 = 0; j555 < 4; j555 = j555 + 1) {
				fVec47_perm[j555] = fVec47_tmp[vsize + j555];
			}
			/* Vectorizable loop 424 */
			/* Pre code */
			for (int j556 = 0; j556 < 4; j556 = j556 + 1) {
				fVec48_tmp[j556] = fVec48_perm[j556];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec48[i] = fSlow66;
			}
			/* Post code */
			for (int j557 = 0; j557 < 4; j557 = j557 + 1) {
				fVec48_perm[j557] = fVec48_tmp[vsize + j557];
			}
			/* Vectorizable loop 425 */
			/* Pre code */
			for (int j558 = 0; j558 < 4; j558 = j558 + 1) {
				fVec49_tmp[j558] = fVec49_perm[j558];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec49[i] = fSlow67;
			}
			/* Post code */
			for (int j559 = 0; j559 < 4; j559 = j559 + 1) {
				fVec49_perm[j559] = fVec49_tmp[vsize + j559];
			}
			/* Vectorizable loop 426 */
			/* Pre code */
			for (int j560 = 0; j560 < 4; j560 = j560 + 1) {
				fVec50_tmp[j560] = fVec50_perm[j560];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec50[i] = fSlow68;
			}
			/* Post code */
			for (int j561 = 0; j561 < 4; j561 = j561 + 1) {
				fVec50_perm[j561] = fVec50_tmp[vsize + j561];
			}
			/* Vectorizable loop 427 */
			/* Pre code */
			for (int j562 = 0; j562 < 4; j562 = j562 + 1) {
				fVec51_tmp[j562] = fVec51_perm[j562];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec51[i] = fSlow69;
			}
			/* Post code */
			for (int j563 = 0; j563 < 4; j563 = j563 + 1) {
				fVec51_perm[j563] = fVec51_tmp[vsize + j563];
			}
			/* Vectorizable loop 428 */
			/* Pre code */
			for (int j564 = 0; j564 < 4; j564 = j564 + 1) {
				fVec52_tmp[j564] = fVec52_perm[j564];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec52[i] = fSlow70;
			}
			/* Post code */
			for (int j565 = 0; j565 < 4; j565 = j565 + 1) {
				fVec52_perm[j565] = fVec52_tmp[vsize + j565];
			}
			/* Vectorizable loop 429 */
			/* Pre code */
			for (int j566 = 0; j566 < 4; j566 = j566 + 1) {
				fVec53_tmp[j566] = fVec53_perm[j566];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec53[i] = fSlow71;
			}
			/* Post code */
			for (int j567 = 0; j567 < 4; j567 = j567 + 1) {
				fVec53_perm[j567] = fVec53_tmp[vsize + j567];
			}
			/* Vectorizable loop 430 */
			/* Pre code */
			for (int j568 = 0; j568 < 4; j568 = j568 + 1) {
				fVec54_tmp[j568] = fVec54_perm[j568];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec54[i] = fSlow72;
			}
			/* Post code */
			for (int j569 = 0; j569 < 4; j569 = j569 + 1) {
				fVec54_perm[j569] = fVec54_tmp[vsize + j569];
			}
			/* Vectorizable loop 431 */
			/* Pre code */
			for (int j570 = 0; j570 < 4; j570 = j570 + 1) {
				fVec55_tmp[j570] = fVec55_perm[j570];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec55[i] = fSlow73;
			}
			/* Post code */
			for (int j571 = 0; j571 < 4; j571 = j571 + 1) {
				fVec55_perm[j571] = fVec55_tmp[vsize + j571];
			}
			/* Vectorizable loop 432 */
			/* Pre code */
			for (int j572 = 0; j572 < 4; j572 = j572 + 1) {
				fVec56_tmp[j572] = fVec56_perm[j572];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec56[i] = fSlow74;
			}
			/* Post code */
			for (int j573 = 0; j573 < 4; j573 = j573 + 1) {
				fVec56_perm[j573] = fVec56_tmp[vsize + j573];
			}
			/* Vectorizable loop 433 */
			/* Pre code */
			for (int j574 = 0; j574 < 4; j574 = j574 + 1) {
				fVec57_tmp[j574] = fVec57_perm[j574];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec57[i] = fSlow75;
			}
			/* Post code */
			for (int j575 = 0; j575 < 4; j575 = j575 + 1) {
				fVec57_perm[j575] = fVec57_tmp[vsize + j575];
			}
			/* Vectorizable loop 434 */
			/* Pre code */
			for (int j576 = 0; j576 < 4; j576 = j576 + 1) {
				fVec58_tmp[j576] = fVec58_perm[j576];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec58[i] = fSlow76;
			}
			/* Post code */
			for (int j577 = 0; j577 < 4; j577 = j577 + 1) {
				fVec58_perm[j577] = fVec58_tmp[vsize + j577];
			}
			/* Vectorizable loop 435 */
			/* Pre code */
			for (int j578 = 0; j578 < 4; j578 = j578 + 1) {
				fVec59_tmp[j578] = fVec59_perm[j578];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec59[i] = fSlow77;
			}
			/* Post code */
			for (int j579 = 0; j579 < 4; j579 = j579 + 1) {
				fVec59_perm[j579] = fVec59_tmp[vsize + j579];
			}
			/* Vectorizable loop 436 */
			/* Pre code */
			for (int j580 = 0; j580 < 4; j580 = j580 + 1) {
				fVec60_tmp[j580] = fVec60_perm[j580];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec60[i] = fSlow78;
			}
			/* Post code */
			for (int j581 = 0; j581 < 4; j581 = j581 + 1) {
				fVec60_perm[j581] = fVec60_tmp[vsize + j581];
			}
			/* Vectorizable loop 437 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec163[i] = fRec51[i] + fRec57[i] + fRec63[i] + fRec69[i] + fZec162[i];
			}
			/* Vectorizable loop 438 */
			/* Pre code */
			for (int j608 = 0; j608 < 4; j608 = j608 + 1) {
				fYec100_tmp[j608] = fYec100_perm[j608];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec100[i] = float(fZec173[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j609 = 0; j609 < 4; j609 = j609 + 1) {
				fYec100_perm[j609] = fYec100_tmp[vsize + j609];
			}
			/* Vectorizable loop 439 */
			/* Pre code */
			for (int j622 = 0; j622 < 4; j622 = j622 + 1) {
				fYec103_tmp[j622] = fYec103_perm[j622];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec103[i] = float(fZec175[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j623 = 0; j623 < 4; j623 = j623 + 1) {
				fYec103_perm[j623] = fYec103_tmp[vsize + j623];
			}
			/* Vectorizable loop 440 */
			/* Pre code */
			for (int j636 = 0; j636 < 4; j636 = j636 + 1) {
				fYec106_tmp[j636] = fYec106_perm[j636];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec106[i] = float(fZec177[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j637 = 0; j637 < 4; j637 = j637 + 1) {
				fYec106_perm[j637] = fYec106_tmp[vsize + j637];
			}
			/* Vectorizable loop 441 */
			/* Pre code */
			for (int j650 = 0; j650 < 4; j650 = j650 + 1) {
				fYec109_tmp[j650] = fYec109_perm[j650];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec109[i] = float(fZec179[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j651 = 0; j651 < 4; j651 = j651 + 1) {
				fYec109_perm[j651] = fYec109_tmp[vsize + j651];
			}
			/* Vectorizable loop 442 */
			/* Pre code */
			for (int j664 = 0; j664 < 4; j664 = j664 + 1) {
				fYec112_tmp[j664] = fYec112_perm[j664];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec112[i] = float(fZec181[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j665 = 0; j665 < 4; j665 = j665 + 1) {
				fYec112_perm[j665] = fYec112_tmp[vsize + j665];
			}
			/* Vectorizable loop 443 */
			/* Pre code */
			for (int j674 = 0; j674 < 4; j674 = j674 + 1) {
				fYec114_tmp[j674] = fYec114_perm[j674];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec114[i] = float(fZec182[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j675 = 0; j675 < 4; j675 = j675 + 1) {
				fYec114_perm[j675] = fYec114_tmp[vsize + j675];
			}
			/* Vectorizable loop 444 */
			/* Pre code */
			for (int j684 = 0; j684 < 4; j684 = j684 + 1) {
				fYec116_tmp[j684] = fYec116_perm[j684];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec116[i] = float(fZec183[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j685 = 0; j685 < 4; j685 = j685 + 1) {
				fYec116_perm[j685] = fYec116_tmp[vsize + j685];
			}
			/* Vectorizable loop 445 */
			/* Pre code */
			for (int j694 = 0; j694 < 4; j694 = j694 + 1) {
				fYec118_tmp[j694] = fYec118_perm[j694];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec118[i] = float(fZec184[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j695 = 0; j695 < 4; j695 = j695 + 1) {
				fYec118_perm[j695] = fYec118_tmp[vsize + j695];
			}
			/* Vectorizable loop 446 */
			/* Pre code */
			for (int j704 = 0; j704 < 4; j704 = j704 + 1) {
				fYec120_tmp[j704] = fYec120_perm[j704];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec120[i] = float(fZec185[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j705 = 0; j705 < 4; j705 = j705 + 1) {
				fYec120_perm[j705] = fYec120_tmp[vsize + j705];
			}
			/* Vectorizable loop 447 */
			/* Pre code */
			for (int j754 = 0; j754 < 4; j754 = j754 + 1) {
				fYec129_tmp[j754] = fYec129_perm[j754];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec129[i] = float(fZec187[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j755 = 0; j755 < 4; j755 = j755 + 1) {
				fYec129_perm[j755] = fYec129_tmp[vsize + j755];
			}
			/* Vectorizable loop 448 */
			/* Pre code */
			for (int j784 = 0; j784 < 4; j784 = j784 + 1) {
				fYec135_tmp[j784] = fYec135_perm[j784];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec135[i] = float(iRec195[i]) + fZec239[i];
			}
			/* Post code */
			for (int j785 = 0; j785 < 4; j785 = j785 + 1) {
				fYec135_perm[j785] = fYec135_tmp[vsize + j785];
			}
			/* Vectorizable loop 449 */
			/* Pre code */
			for (int j802 = 0; j802 < 4; j802 = j802 + 1) {
				fYec139_tmp[j802] = fYec139_perm[j802];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec139[i] = float(iRec200[i]) + fZec242[i];
			}
			/* Post code */
			for (int j803 = 0; j803 < 4; j803 = j803 + 1) {
				fYec139_perm[j803] = fYec139_tmp[vsize + j803];
			}
			/* Vectorizable loop 450 */
			/* Pre code */
			for (int j820 = 0; j820 < 4; j820 = j820 + 1) {
				fYec143_tmp[j820] = fYec143_perm[j820];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec143[i] = float(iRec205[i]) + fZec245[i];
			}
			/* Post code */
			for (int j821 = 0; j821 < 4; j821 = j821 + 1) {
				fYec143_perm[j821] = fYec143_tmp[vsize + j821];
			}
			/* Vectorizable loop 451 */
			/* Pre code */
			for (int j838 = 0; j838 < 4; j838 = j838 + 1) {
				fYec147_tmp[j838] = fYec147_perm[j838];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec147[i] = float(iRec210[i]) + fZec248[i];
			}
			/* Post code */
			for (int j839 = 0; j839 < 4; j839 = j839 + 1) {
				fYec147_perm[j839] = fYec147_tmp[vsize + j839];
			}
			/* Vectorizable loop 452 */
			/* Pre code */
			for (int j856 = 0; j856 < 4; j856 = j856 + 1) {
				fYec151_tmp[j856] = fYec151_perm[j856];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec151[i] = float(iRec215[i]) + fZec251[i];
			}
			/* Post code */
			for (int j857 = 0; j857 < 4; j857 = j857 + 1) {
				fYec151_perm[j857] = fYec151_tmp[vsize + j857];
			}
			/* Vectorizable loop 453 */
			/* Pre code */
			for (int j874 = 0; j874 < 4; j874 = j874 + 1) {
				fYec155_tmp[j874] = fYec155_perm[j874];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec155[i] = float(iRec220[i]) + fZec254[i];
			}
			/* Post code */
			for (int j875 = 0; j875 < 4; j875 = j875 + 1) {
				fYec155_perm[j875] = fYec155_tmp[vsize + j875];
			}
			/* Vectorizable loop 454 */
			/* Pre code */
			for (int j892 = 0; j892 < 4; j892 = j892 + 1) {
				fYec159_tmp[j892] = fYec159_perm[j892];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec159[i] = float(iRec225[i]) + fZec257[i];
			}
			/* Post code */
			for (int j893 = 0; j893 < 4; j893 = j893 + 1) {
				fYec159_perm[j893] = fYec159_tmp[vsize + j893];
			}
			/* Vectorizable loop 455 */
			/* Pre code */
			for (int j906 = 0; j906 < 4; j906 = j906 + 1) {
				fYec162_tmp[j906] = fYec162_perm[j906];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec162[i] = float(iRec230[i]) + fZec259[i];
			}
			/* Post code */
			for (int j907 = 0; j907 < 4; j907 = j907 + 1) {
				fYec162_perm[j907] = fYec162_tmp[vsize + j907];
			}
			/* Vectorizable loop 456 */
			/* Pre code */
			for (int j920 = 0; j920 < 4; j920 = j920 + 1) {
				fYec165_tmp[j920] = fYec165_perm[j920];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec165[i] = float(iRec234[i]) + fZec261[i];
			}
			/* Post code */
			for (int j921 = 0; j921 < 4; j921 = j921 + 1) {
				fYec165_perm[j921] = fYec165_tmp[vsize + j921];
			}
			/* Vectorizable loop 457 */
			/* Pre code */
			for (int j934 = 0; j934 < 4; j934 = j934 + 1) {
				fYec168_tmp[j934] = fYec168_perm[j934];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec168[i] = float(iRec238[i]) + fZec263[i];
			}
			/* Post code */
			for (int j935 = 0; j935 < 4; j935 = j935 + 1) {
				fYec168_perm[j935] = fYec168_tmp[vsize + j935];
			}
			/* Vectorizable loop 458 */
			/* Pre code */
			for (int j948 = 0; j948 < 4; j948 = j948 + 1) {
				fYec171_tmp[j948] = fYec171_perm[j948];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec171[i] = float(iRec242[i]) + fZec265[i];
			}
			/* Post code */
			for (int j949 = 0; j949 < 4; j949 = j949 + 1) {
				fYec171_perm[j949] = fYec171_tmp[vsize + j949];
			}
			/* Vectorizable loop 459 */
			/* Pre code */
			for (int j962 = 0; j962 < 4; j962 = j962 + 1) {
				fYec174_tmp[j962] = fYec174_perm[j962];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec174[i] = float(iRec246[i]) + fZec267[i];
			}
			/* Post code */
			for (int j963 = 0; j963 < 4; j963 = j963 + 1) {
				fYec174_perm[j963] = fYec174_tmp[vsize + j963];
			}
			/* Vectorizable loop 460 */
			/* Pre code */
			for (int j1042 = 0; j1042 < 4; j1042 = j1042 + 1) {
				fYec188_tmp[j1042] = fYec188_perm[j1042];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec188[i] = float(fZec238[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1043 = 0; j1043 < 4; j1043 = j1043 + 1) {
				fYec188_perm[j1043] = fYec188_tmp[vsize + j1043];
			}
			/* Vectorizable loop 461 */
			/* Pre code */
			for (int j1048 = 0; j1048 < 4; j1048 = j1048 + 1) {
				fYec189_tmp[j1048] = fYec189_perm[j1048];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec189[i] = float(fZec241[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1049 = 0; j1049 < 4; j1049 = j1049 + 1) {
				fYec189_perm[j1049] = fYec189_tmp[vsize + j1049];
			}
			/* Vectorizable loop 462 */
			/* Pre code */
			for (int j1054 = 0; j1054 < 4; j1054 = j1054 + 1) {
				fYec190_tmp[j1054] = fYec190_perm[j1054];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec190[i] = float(fZec244[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1055 = 0; j1055 < 4; j1055 = j1055 + 1) {
				fYec190_perm[j1055] = fYec190_tmp[vsize + j1055];
			}
			/* Vectorizable loop 463 */
			/* Pre code */
			for (int j1060 = 0; j1060 < 4; j1060 = j1060 + 1) {
				fYec191_tmp[j1060] = fYec191_perm[j1060];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec191[i] = float(fZec247[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1061 = 0; j1061 < 4; j1061 = j1061 + 1) {
				fYec191_perm[j1061] = fYec191_tmp[vsize + j1061];
			}
			/* Vectorizable loop 464 */
			/* Pre code */
			for (int j1066 = 0; j1066 < 4; j1066 = j1066 + 1) {
				fYec192_tmp[j1066] = fYec192_perm[j1066];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec192[i] = float(fZec250[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1067 = 0; j1067 < 4; j1067 = j1067 + 1) {
				fYec192_perm[j1067] = fYec192_tmp[vsize + j1067];
			}
			/* Vectorizable loop 465 */
			/* Pre code */
			for (int j1072 = 0; j1072 < 4; j1072 = j1072 + 1) {
				fYec193_tmp[j1072] = fYec193_perm[j1072];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec193[i] = float(fZec253[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1073 = 0; j1073 < 4; j1073 = j1073 + 1) {
				fYec193_perm[j1073] = fYec193_tmp[vsize + j1073];
			}
			/* Vectorizable loop 466 */
			/* Pre code */
			for (int j1078 = 0; j1078 < 4; j1078 = j1078 + 1) {
				fYec194_tmp[j1078] = fYec194_perm[j1078];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec194[i] = float(fZec256[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1079 = 0; j1079 < 4; j1079 = j1079 + 1) {
				fYec194_perm[j1079] = fYec194_tmp[vsize + j1079];
			}
			/* Recursive loop 467 */
			/* Pre code */
			for (int j18 = 0; j18 < 4; j18 = j18 + 1) {
				fRec7_tmp[j18] = fRec7_perm[j18];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec7[i] = fConst5 * (fRec7[i - 1] + (fRec8[i] - fRec8[i - 1]));
			}
			/* Post code */
			for (int j19 = 0; j19 < 4; j19 = j19 + 1) {
				fRec7_perm[j19] = fRec7_tmp[vsize + j19];
			}
			/* Recursive loop 468 */
			/* Pre code */
			for (int j34 = 0; j34 < 4; j34 = j34 + 1) {
				fRec13_tmp[j34] = fRec13_perm[j34];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec13[i] = fConst5 * (fRec13[i - 1] + (fRec14[i] - fRec14[i - 1]));
			}
			/* Post code */
			for (int j35 = 0; j35 < 4; j35 = j35 + 1) {
				fRec13_perm[j35] = fRec13_tmp[vsize + j35];
			}
			/* Recursive loop 469 */
			/* Pre code */
			for (int j50 = 0; j50 < 4; j50 = j50 + 1) {
				fRec18_tmp[j50] = fRec18_perm[j50];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec18[i] = fConst5 * (fRec18[i - 1] + (fRec19[i] - fRec19[i - 1]));
			}
			/* Post code */
			for (int j51 = 0; j51 < 4; j51 = j51 + 1) {
				fRec18_perm[j51] = fRec18_tmp[vsize + j51];
			}
			/* Recursive loop 470 */
			/* Pre code */
			for (int j66 = 0; j66 < 4; j66 = j66 + 1) {
				fRec23_tmp[j66] = fRec23_perm[j66];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec23[i] = fConst5 * (fRec23[i - 1] + (fRec24[i] - fRec24[i - 1]));
			}
			/* Post code */
			for (int j67 = 0; j67 < 4; j67 = j67 + 1) {
				fRec23_perm[j67] = fRec23_tmp[vsize + j67];
			}
			/* Recursive loop 471 */
			/* Pre code */
			for (int j278 = 0; j278 < 4; j278 = j278 + 1) {
				fRec90_tmp[j278] = fRec90_perm[j278];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec90[i] = fConst21 * (0.0073745456f * fRec90[i - 1] + 0.014380364f * (fYec54[i] - fYec54[i - 1]));
			}
			/* Post code */
			for (int j279 = 0; j279 < 4; j279 = j279 + 1) {
				fRec90_perm[j279] = fRec90_tmp[vsize + j279];
			}
			/* Recursive loop 472 */
			/* Pre code */
			for (int j284 = 0; j284 < 4; j284 = j284 + 1) {
				fRec91_tmp[j284] = fRec91_perm[j284];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec91[i] = fConst5 * (fRec91[i - 1] + (fRec92[i] - fRec92[i - 1]));
			}
			/* Post code */
			for (int j285 = 0; j285 < 4; j285 = j285 + 1) {
				fRec91_perm[j285] = fRec91_tmp[vsize + j285];
			}
			/* Recursive loop 473 */
			/* Pre code */
			for (int j290 = 0; j290 < 4; j290 = j290 + 1) {
				fRec93_tmp[j290] = fRec93_perm[j290];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec93[i] = fConst5 * (fRec93[i - 1] + (fRec94[i] - fRec94[i - 1]));
			}
			/* Post code */
			for (int j291 = 0; j291 < 4; j291 = j291 + 1) {
				fRec93_perm[j291] = fRec93_tmp[vsize + j291];
			}
			/* Recursive loop 474 */
			/* Pre code */
			for (int j296 = 0; j296 < 4; j296 = j296 + 1) {
				fRec95_tmp[j296] = fRec95_perm[j296];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec95[i] = fConst5 * (fRec95[i - 1] + (fRec96[i] - fRec96[i - 1]));
			}
			/* Post code */
			for (int j297 = 0; j297 < 4; j297 = j297 + 1) {
				fRec95_perm[j297] = fRec95_tmp[vsize + j297];
			}
			/* Recursive loop 475 */
			/* Pre code */
			for (int j302 = 0; j302 < 4; j302 = j302 + 1) {
				fRec97_tmp[j302] = fRec97_perm[j302];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec97[i] = fConst5 * (fRec97[i - 1] + (fRec98[i] - fRec98[i - 1]));
			}
			/* Post code */
			for (int j303 = 0; j303 < 4; j303 = j303 + 1) {
				fRec97_perm[j303] = fRec97_tmp[vsize + j303];
			}
			/* Recursive loop 476 */
			/* Pre code */
			for (int j308 = 0; j308 < 4; j308 = j308 + 1) {
				fRec99_tmp[j308] = fRec99_perm[j308];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec99[i] = fConst5 * (fRec99[i - 1] + (fRec100[i] - fRec100[i - 1]));
			}
			/* Post code */
			for (int j309 = 0; j309 < 4; j309 = j309 + 1) {
				fRec99_perm[j309] = fRec99_tmp[vsize + j309];
			}
			/* Recursive loop 477 */
			/* Pre code */
			for (int j314 = 0; j314 < 4; j314 = j314 + 1) {
				fRec101_tmp[j314] = fRec101_perm[j314];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec101[i] = fConst5 * (fRec101[i - 1] + (fRec102[i] - fRec102[i - 1]));
			}
			/* Post code */
			for (int j315 = 0; j315 < 4; j315 = j315 + 1) {
				fRec101_perm[j315] = fRec101_tmp[vsize + j315];
			}
			/* Recursive loop 478 */
			/* Pre code */
			for (int j320 = 0; j320 < 4; j320 = j320 + 1) {
				fRec103_tmp[j320] = fRec103_perm[j320];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec103[i] = fConst5 * (fRec103[i - 1] + (fRec104[i] - fRec104[i - 1]));
			}
			/* Post code */
			for (int j321 = 0; j321 < 4; j321 = j321 + 1) {
				fRec103_perm[j321] = fRec103_tmp[vsize + j321];
			}
			/* Recursive loop 479 */
			/* Pre code */
			for (int j326 = 0; j326 < 4; j326 = j326 + 1) {
				fRec105_tmp[j326] = fRec105_perm[j326];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec105[i] = fConst5 * (fRec105[i - 1] + (fRec106[i] - fRec106[i - 1]));
			}
			/* Post code */
			for (int j327 = 0; j327 < 4; j327 = j327 + 1) {
				fRec105_perm[j327] = fRec105_tmp[vsize + j327];
			}
			/* Recursive loop 480 */
			/* Pre code */
			for (int j332 = 0; j332 < 4; j332 = j332 + 1) {
				fRec107_tmp[j332] = fRec107_perm[j332];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec107[i] = fConst5 * (fRec107[i - 1] + (fRec108[i] - fRec108[i - 1]));
			}
			/* Post code */
			for (int j333 = 0; j333 < 4; j333 = j333 + 1) {
				fRec107_perm[j333] = fRec107_tmp[vsize + j333];
			}
			/* Recursive loop 481 */
			/* Pre code */
			for (int j338 = 0; j338 < 4; j338 = j338 + 1) {
				fRec109_tmp[j338] = fRec109_perm[j338];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec109[i] = fConst5 * (fRec109[i - 1] + (fRec110[i] - fRec110[i - 1]));
			}
			/* Post code */
			for (int j339 = 0; j339 < 4; j339 = j339 + 1) {
				fRec109_perm[j339] = fRec109_tmp[vsize + j339];
			}
			/* Recursive loop 482 */
			/* Pre code */
			for (int j344 = 0; j344 < 4; j344 = j344 + 1) {
				fRec111_tmp[j344] = fRec111_perm[j344];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec111[i] = fConst5 * (fRec111[i - 1] + (fRec112[i] - fRec112[i - 1]));
			}
			/* Post code */
			for (int j345 = 0; j345 < 4; j345 = j345 + 1) {
				fRec111_perm[j345] = fRec111_tmp[vsize + j345];
			}
			/* Recursive loop 483 */
			/* Pre code */
			for (int j350 = 0; j350 < 4; j350 = j350 + 1) {
				fRec113_tmp[j350] = fRec113_perm[j350];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec113[i] = fConst5 * (fRec113[i - 1] + (fRec114[i] - fRec114[i - 1]));
			}
			/* Post code */
			for (int j351 = 0; j351 < 4; j351 = j351 + 1) {
				fRec113_perm[j351] = fRec113_tmp[vsize + j351];
			}
			/* Recursive loop 484 */
			/* Pre code */
			for (int j356 = 0; j356 < 4; j356 = j356 + 1) {
				fRec115_tmp[j356] = fRec115_perm[j356];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec115[i] = fConst5 * (fRec115[i - 1] + (fRec116[i] - fRec116[i - 1]));
			}
			/* Post code */
			for (int j357 = 0; j357 < 4; j357 = j357 + 1) {
				fRec115_perm[j357] = fRec115_tmp[vsize + j357];
			}
			/* Recursive loop 485 */
			/* Pre code */
			for (int j362 = 0; j362 < 4; j362 = j362 + 1) {
				fRec117_tmp[j362] = fRec117_perm[j362];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec117[i] = fConst5 * (fRec117[i - 1] + (fRec118[i] - fRec118[i - 1]));
			}
			/* Post code */
			for (int j363 = 0; j363 < 4; j363 = j363 + 1) {
				fRec117_perm[j363] = fRec117_tmp[vsize + j363];
			}
			/* Recursive loop 486 */
			/* Pre code */
			for (int j368 = 0; j368 < 4; j368 = j368 + 1) {
				fRec119_tmp[j368] = fRec119_perm[j368];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec119[i] = fConst5 * (fRec119[i - 1] + (fRec120[i] - fRec120[i - 1]));
			}
			/* Post code */
			for (int j369 = 0; j369 < 4; j369 = j369 + 1) {
				fRec119_perm[j369] = fRec119_tmp[vsize + j369];
			}
			/* Recursive loop 487 */
			/* Pre code */
			for (int j374 = 0; j374 < 4; j374 = j374 + 1) {
				fRec121_tmp[j374] = fRec121_perm[j374];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec121[i] = fConst5 * (fRec121[i - 1] + (fRec122[i] - fRec122[i - 1]));
			}
			/* Post code */
			for (int j375 = 0; j375 < 4; j375 = j375 + 1) {
				fRec121_perm[j375] = fRec121_tmp[vsize + j375];
			}
			/* Recursive loop 488 */
			/* Pre code */
			for (int j380 = 0; j380 < 4; j380 = j380 + 1) {
				fRec123_tmp[j380] = fRec123_perm[j380];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec123[i] = fConst5 * (fRec123[i - 1] + (fRec124[i] - fRec124[i - 1]));
			}
			/* Post code */
			for (int j381 = 0; j381 < 4; j381 = j381 + 1) {
				fRec123_perm[j381] = fRec123_tmp[vsize + j381];
			}
			/* Recursive loop 489 */
			/* Pre code */
			for (int j386 = 0; j386 < 4; j386 = j386 + 1) {
				fRec125_tmp[j386] = fRec125_perm[j386];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec125[i] = fConst5 * (fRec125[i - 1] + (fRec126[i] - fRec126[i - 1]));
			}
			/* Post code */
			for (int j387 = 0; j387 < 4; j387 = j387 + 1) {
				fRec125_perm[j387] = fRec125_tmp[vsize + j387];
			}
			/* Recursive loop 490 */
			/* Pre code */
			for (int j392 = 0; j392 < 4; j392 = j392 + 1) {
				fRec127_tmp[j392] = fRec127_perm[j392];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec127[i] = fConst5 * (fRec127[i - 1] + (fRec128[i] - fRec128[i - 1]));
			}
			/* Post code */
			for (int j393 = 0; j393 < 4; j393 = j393 + 1) {
				fRec127_perm[j393] = fRec127_tmp[vsize + j393];
			}
			/* Recursive loop 491 */
			/* Pre code */
			for (int j398 = 0; j398 < 4; j398 = j398 + 1) {
				fRec129_tmp[j398] = fRec129_perm[j398];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec129[i] = fConst21 * (0.0073745456f * fRec129[i - 1] + 0.014380364f * (fYec75[i] - fYec75[i - 1]));
			}
			/* Post code */
			for (int j399 = 0; j399 < 4; j399 = j399 + 1) {
				fRec129_perm[j399] = fRec129_tmp[vsize + j399];
			}
			/* Recursive loop 492 */
			/* Pre code */
			for (int j404 = 0; j404 < 4; j404 = j404 + 1) {
				fRec130_tmp[j404] = fRec130_perm[j404];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec130[i] = fConst21 * (0.0073745456f * fRec130[i - 1] + 0.014380364f * (fYec77[i] - fYec77[i - 1]));
			}
			/* Post code */
			for (int j405 = 0; j405 < 4; j405 = j405 + 1) {
				fRec130_perm[j405] = fRec130_tmp[vsize + j405];
			}
			/* Recursive loop 493 */
			/* Pre code */
			for (int j410 = 0; j410 < 4; j410 = j410 + 1) {
				fRec131_tmp[j410] = fRec131_perm[j410];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec131[i] = fConst21 * (0.0073745456f * fRec131[i - 1] + 0.014380364f * (fYec79[i] - fYec79[i - 1]));
			}
			/* Post code */
			for (int j411 = 0; j411 < 4; j411 = j411 + 1) {
				fRec131_perm[j411] = fRec131_tmp[vsize + j411];
			}
			/* Recursive loop 494 */
			/* Pre code */
			for (int j416 = 0; j416 < 4; j416 = j416 + 1) {
				fRec132_tmp[j416] = fRec132_perm[j416];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec132[i] = fConst21 * (0.0073745456f * fRec132[i - 1] + 0.014380364f * (fYec81[i] - fYec81[i - 1]));
			}
			/* Post code */
			for (int j417 = 0; j417 < 4; j417 = j417 + 1) {
				fRec132_perm[j417] = fRec132_tmp[vsize + j417];
			}
			/* Recursive loop 495 */
			/* Pre code */
			for (int j422 = 0; j422 < 4; j422 = j422 + 1) {
				fRec133_tmp[j422] = fRec133_perm[j422];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec133[i] = fConst21 * (0.0073745456f * fRec133[i - 1] + 0.014380364f * (fYec83[i] - fYec83[i - 1]));
			}
			/* Post code */
			for (int j423 = 0; j423 < 4; j423 = j423 + 1) {
				fRec133_perm[j423] = fRec133_tmp[vsize + j423];
			}
			/* Recursive loop 496 */
			/* Pre code */
			for (int j428 = 0; j428 < 4; j428 = j428 + 1) {
				fRec134_tmp[j428] = fRec134_perm[j428];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec134[i] = fConst21 * (0.0073745456f * fRec134[i - 1] + 0.014380364f * (fYec85[i] - fYec85[i - 1]));
			}
			/* Post code */
			for (int j429 = 0; j429 < 4; j429 = j429 + 1) {
				fRec134_perm[j429] = fRec134_tmp[vsize + j429];
			}
			/* Recursive loop 497 */
			/* Pre code */
			for (int j434 = 0; j434 < 4; j434 = j434 + 1) {
				fRec135_tmp[j434] = fRec135_perm[j434];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec135[i] = fConst21 * (0.0073745456f * fRec135[i - 1] + 0.014380364f * (fYec87[i] - fYec87[i - 1]));
			}
			/* Post code */
			for (int j435 = 0; j435 < 4; j435 = j435 + 1) {
				fRec135_perm[j435] = fRec135_tmp[vsize + j435];
			}
			/* Recursive loop 498 */
			/* Pre code */
			for (int j440 = 0; j440 < 4; j440 = j440 + 1) {
				fRec136_tmp[j440] = fRec136_perm[j440];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec136[i] = fConst21 * (0.0073745456f * fRec136[i - 1] + 0.014380364f * (fYec89[i] - fYec89[i - 1]));
			}
			/* Post code */
			for (int j441 = 0; j441 < 4; j441 = j441 + 1) {
				fRec136_perm[j441] = fRec136_tmp[vsize + j441];
			}
			/* Recursive loop 499 */
			/* Pre code */
			for (int j446 = 0; j446 < 4; j446 = j446 + 1) {
				fRec137_tmp[j446] = fRec137_perm[j446];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec137[i] = fConst21 * (0.0073745456f * fRec137[i - 1] + 0.014380364f * (fYec91[i] - fYec91[i - 1]));
			}
			/* Post code */
			for (int j447 = 0; j447 < 4; j447 = j447 + 1) {
				fRec137_perm[j447] = fRec137_tmp[vsize + j447];
			}
			/* Recursive loop 500 */
			/* Pre code */
			for (int j452 = 0; j452 < 4; j452 = j452 + 1) {
				fRec138_tmp[j452] = fRec138_perm[j452];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec138[i] = fConst21 * (0.0073745456f * fRec138[i - 1] + 0.014380364f * (fYec93[i] - fYec93[i - 1]));
			}
			/* Post code */
			for (int j453 = 0; j453 < 4; j453 = j453 + 1) {
				fRec138_perm[j453] = fRec138_tmp[vsize + j453];
			}
			/* Recursive loop 501 */
			/* Pre code */
			for (int j458 = 0; j458 < 4; j458 = j458 + 1) {
				fRec139_tmp[j458] = fRec139_perm[j458];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec139[i] = fConst21 * (0.0073745456f * fRec139[i - 1] + 0.014380364f * (fYec95[i] - fYec95[i - 1]));
			}
			/* Post code */
			for (int j459 = 0; j459 < 4; j459 = j459 + 1) {
				fRec139_perm[j459] = fRec139_tmp[vsize + j459];
			}
			/* Vectorizable loop 502 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec85[i] = fSlow18 + fVec0[i - 3] + fVec0[i - 1] + fVec0[i - 2];
			}
			/* Vectorizable loop 503 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec87[i] = fSlow19 + fVec1[i - 3] + fVec1[i - 1] + fVec1[i - 2];
			}
			/* Vectorizable loop 504 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec89[i] = fSlow20 + fVec2[i - 3] + fVec2[i - 1] + fVec2[i - 2];
			}
			/* Vectorizable loop 505 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec91[i] = fSlow21 + fVec3[i - 3] + fVec3[i - 1] + fVec3[i - 2];
			}
			/* Vectorizable loop 506 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec93[i] = fSlow22 + fVec4[i - 3] + fVec4[i - 1] + fVec4[i - 2];
			}
			/* Vectorizable loop 507 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec95[i] = fSlow23 + fVec5[i - 3] + fVec5[i - 1] + fVec5[i - 2];
			}
			/* Vectorizable loop 508 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec97[i] = fSlow24 + fVec6[i - 3] + fVec6[i - 1] + fVec6[i - 2];
			}
			/* Vectorizable loop 509 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec99[i] = fSlow25 + fVec7[i - 3] + fVec7[i - 1] + fVec7[i - 2];
			}
			/* Vectorizable loop 510 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec101[i] = fSlow26 + fVec8[i - 3] + fVec8[i - 1] + fVec8[i - 2];
			}
			/* Vectorizable loop 511 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec103[i] = fSlow27 + fVec9[i - 3] + fVec9[i - 1] + fVec9[i - 2];
			}
			/* Vectorizable loop 512 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec105[i] = fSlow28 + fVec10[i - 3] + fVec10[i - 1] + fVec10[i - 2];
			}
			/* Vectorizable loop 513 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec107[i] = fSlow29 + fVec11[i - 3] + fVec11[i - 1] + fVec11[i - 2];
			}
			/* Vectorizable loop 514 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec109[i] = fSlow30 + fVec12[i - 3] + fVec12[i - 1] + fVec12[i - 2];
			}
			/* Vectorizable loop 515 */
			/* Pre code */
			for (int j486 = 0; j486 < 4; j486 = j486 + 1) {
				fVec13_tmp[j486] = fVec13_perm[j486];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec13[i] = fSlow31;
			}
			/* Post code */
			for (int j487 = 0; j487 < 4; j487 = j487 + 1) {
				fVec13_perm[j487] = fVec13_tmp[vsize + j487];
			}
			/* Vectorizable loop 516 */
			/* Pre code */
			for (int j488 = 0; j488 < 4; j488 = j488 + 1) {
				fVec14_tmp[j488] = fVec14_perm[j488];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec14[i] = fSlow32;
			}
			/* Post code */
			for (int j489 = 0; j489 < 4; j489 = j489 + 1) {
				fVec14_perm[j489] = fVec14_tmp[vsize + j489];
			}
			/* Vectorizable loop 517 */
			/* Pre code */
			for (int j490 = 0; j490 < 4; j490 = j490 + 1) {
				fVec15_tmp[j490] = fVec15_perm[j490];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec15[i] = fSlow33;
			}
			/* Post code */
			for (int j491 = 0; j491 < 4; j491 = j491 + 1) {
				fVec15_perm[j491] = fVec15_tmp[vsize + j491];
			}
			/* Vectorizable loop 518 */
			/* Pre code */
			for (int j492 = 0; j492 < 4; j492 = j492 + 1) {
				fVec16_tmp[j492] = fVec16_perm[j492];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec16[i] = fSlow34;
			}
			/* Post code */
			for (int j493 = 0; j493 < 4; j493 = j493 + 1) {
				fVec16_perm[j493] = fVec16_tmp[vsize + j493];
			}
			/* Vectorizable loop 519 */
			/* Pre code */
			for (int j494 = 0; j494 < 4; j494 = j494 + 1) {
				fVec17_tmp[j494] = fVec17_perm[j494];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec17[i] = fSlow35;
			}
			/* Post code */
			for (int j495 = 0; j495 < 4; j495 = j495 + 1) {
				fVec17_perm[j495] = fVec17_tmp[vsize + j495];
			}
			/* Vectorizable loop 520 */
			/* Pre code */
			for (int j496 = 0; j496 < 4; j496 = j496 + 1) {
				fVec18_tmp[j496] = fVec18_perm[j496];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec18[i] = fSlow36;
			}
			/* Post code */
			for (int j497 = 0; j497 < 4; j497 = j497 + 1) {
				fVec18_perm[j497] = fVec18_tmp[vsize + j497];
			}
			/* Vectorizable loop 521 */
			/* Pre code */
			for (int j498 = 0; j498 < 4; j498 = j498 + 1) {
				fVec19_tmp[j498] = fVec19_perm[j498];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec19[i] = fSlow37;
			}
			/* Post code */
			for (int j499 = 0; j499 < 4; j499 = j499 + 1) {
				fVec19_perm[j499] = fVec19_tmp[vsize + j499];
			}
			/* Vectorizable loop 522 */
			/* Pre code */
			for (int j500 = 0; j500 < 4; j500 = j500 + 1) {
				fVec20_tmp[j500] = fVec20_perm[j500];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec20[i] = fSlow38;
			}
			/* Post code */
			for (int j501 = 0; j501 < 4; j501 = j501 + 1) {
				fVec20_perm[j501] = fVec20_tmp[vsize + j501];
			}
			/* Vectorizable loop 523 */
			/* Pre code */
			for (int j502 = 0; j502 < 4; j502 = j502 + 1) {
				fVec21_tmp[j502] = fVec21_perm[j502];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec21[i] = fSlow39;
			}
			/* Post code */
			for (int j503 = 0; j503 < 4; j503 = j503 + 1) {
				fVec21_perm[j503] = fVec21_tmp[vsize + j503];
			}
			/* Vectorizable loop 524 */
			/* Pre code */
			for (int j504 = 0; j504 < 4; j504 = j504 + 1) {
				fVec22_tmp[j504] = fVec22_perm[j504];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec22[i] = fSlow40;
			}
			/* Post code */
			for (int j505 = 0; j505 < 4; j505 = j505 + 1) {
				fVec22_perm[j505] = fVec22_tmp[vsize + j505];
			}
			/* Vectorizable loop 525 */
			/* Pre code */
			for (int j506 = 0; j506 < 4; j506 = j506 + 1) {
				fVec23_tmp[j506] = fVec23_perm[j506];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec23[i] = fSlow41;
			}
			/* Post code */
			for (int j507 = 0; j507 < 4; j507 = j507 + 1) {
				fVec23_perm[j507] = fVec23_tmp[vsize + j507];
			}
			/* Vectorizable loop 526 */
			/* Pre code */
			for (int j508 = 0; j508 < 4; j508 = j508 + 1) {
				fVec24_tmp[j508] = fVec24_perm[j508];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fVec24[i] = fSlow42;
			}
			/* Post code */
			for (int j509 = 0; j509 < 4; j509 = j509 + 1) {
				fVec24_perm[j509] = fVec24_tmp[vsize + j509];
			}
			/* Vectorizable loop 527 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec123[i] = fSlow43 + fVec25[i - 3] + fVec25[i - 1] + fVec25[i - 2];
			}
			/* Vectorizable loop 528 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec124[i] = fSlow44 + fVec26[i - 3] + fVec26[i - 1] + fVec26[i - 2];
			}
			/* Vectorizable loop 529 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec125[i] = fSlow45 + fVec27[i - 3] + fVec27[i - 1] + fVec27[i - 2];
			}
			/* Vectorizable loop 530 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec126[i] = fSlow46 + fVec28[i - 3] + fVec28[i - 1] + fVec28[i - 2];
			}
			/* Vectorizable loop 531 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec127[i] = fSlow47 + fVec29[i - 3] + fVec29[i - 1] + fVec29[i - 2];
			}
			/* Vectorizable loop 532 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec128[i] = fSlow48 + fVec30[i - 3] + fVec30[i - 1] + fVec30[i - 2];
			}
			/* Vectorizable loop 533 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec129[i] = fSlow49 + fVec31[i - 3] + fVec31[i - 1] + fVec31[i - 2];
			}
			/* Vectorizable loop 534 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec130[i] = fSlow50 + fVec32[i - 3] + fVec32[i - 1] + fVec32[i - 2];
			}
			/* Vectorizable loop 535 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec131[i] = fSlow51 + fVec33[i - 3] + fVec33[i - 1] + fVec33[i - 2];
			}
			/* Vectorizable loop 536 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec132[i] = fSlow52 + fVec34[i - 3] + fVec34[i - 1] + fVec34[i - 2];
			}
			/* Vectorizable loop 537 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec133[i] = fSlow53 + fVec35[i - 3] + fVec35[i - 1] + fVec35[i - 2];
			}
			/* Vectorizable loop 538 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec134[i] = fSlow54 + fVec36[i - 3] + fVec36[i - 1] + fVec36[i - 2];
			}
			/* Vectorizable loop 539 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec135[i] = fSlow55 + fVec37[i - 3] + fVec37[i - 1] + fVec37[i - 2];
			}
			/* Vectorizable loop 540 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec136[i] = fSlow56 + fVec38[i - 3] + fVec38[i - 1] + fVec38[i - 2];
			}
			/* Vectorizable loop 541 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec137[i] = fSlow57 + fVec39[i - 3] + fVec39[i - 1] + fVec39[i - 2];
			}
			/* Vectorizable loop 542 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec138[i] = fSlow58 + fVec40[i - 3] + fVec40[i - 1] + fVec40[i - 2];
			}
			/* Vectorizable loop 543 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec139[i] = fSlow59 + fVec41[i - 3] + fVec41[i - 1] + fVec41[i - 2];
			}
			/* Vectorizable loop 544 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec140[i] = fSlow60 + fVec42[i - 3] + fVec42[i - 1] + fVec42[i - 2];
			}
			/* Vectorizable loop 545 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec141[i] = fSlow61 + fVec43[i - 3] + fVec43[i - 1] + fVec43[i - 2];
			}
			/* Vectorizable loop 546 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec142[i] = fSlow62 + fVec44[i - 3] + fVec44[i - 1] + fVec44[i - 2];
			}
			/* Vectorizable loop 547 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec143[i] = fSlow63 + fVec45[i - 3] + fVec45[i - 1] + fVec45[i - 2];
			}
			/* Vectorizable loop 548 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec144[i] = fSlow64 + fVec46[i - 3] + fVec46[i - 1] + fVec46[i - 2];
			}
			/* Vectorizable loop 549 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec145[i] = fSlow65 + fVec47[i - 3] + fVec47[i - 1] + fVec47[i - 2];
			}
			/* Vectorizable loop 550 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec146[i] = fSlow66 + fVec48[i - 3] + fVec48[i - 1] + fVec48[i - 2];
			}
			/* Vectorizable loop 551 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec147[i] = fSlow67 + fVec49[i - 3] + fVec49[i - 1] + fVec49[i - 2];
			}
			/* Vectorizable loop 552 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec148[i] = fSlow68 + fVec50[i - 3] + fVec50[i - 1] + fVec50[i - 2];
			}
			/* Vectorizable loop 553 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec149[i] = fSlow69 + fVec51[i - 3] + fVec51[i - 1] + fVec51[i - 2];
			}
			/* Vectorizable loop 554 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec150[i] = fSlow70 + fVec52[i - 3] + fVec52[i - 1] + fVec52[i - 2];
			}
			/* Vectorizable loop 555 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec151[i] = fSlow71 + fVec53[i - 3] + fVec53[i - 1] + fVec53[i - 2];
			}
			/* Vectorizable loop 556 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec152[i] = fSlow72 + fVec54[i - 3] + fVec54[i - 1] + fVec54[i - 2];
			}
			/* Vectorizable loop 557 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec153[i] = fSlow73 + fVec55[i - 3] + fVec55[i - 1] + fVec55[i - 2];
			}
			/* Vectorizable loop 558 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec154[i] = fSlow74 + fVec56[i - 3] + fVec56[i - 1] + fVec56[i - 2];
			}
			/* Vectorizable loop 559 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec155[i] = fSlow75 + fVec57[i - 3] + fVec57[i - 1] + fVec57[i - 2];
			}
			/* Vectorizable loop 560 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec156[i] = fSlow76 + fVec58[i - 3] + fVec58[i - 1] + fVec58[i - 2];
			}
			/* Vectorizable loop 561 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec157[i] = fSlow77 + fVec59[i - 3] + fVec59[i - 1] + fVec59[i - 2];
			}
			/* Vectorizable loop 562 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec158[i] = fSlow78 + fVec60[i - 3] + fVec60[i - 1] + fVec60[i - 2];
			}
			/* Vectorizable loop 563 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec164[i] = fRec28[i] + fRec33[i] + fRec39[i] + fRec45[i] + fZec163[i];
			}
			/* Recursive loop 564 */
			/* Pre code */
			for (int j610 = 0; j610 < 4; j610 = j610 + 1) {
				fRec143_tmp[j610] = fRec143_perm[j610];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec143[i] = fRec143[i - 1] + fConst31 * (2.0f * fYec100[i - 1] + square_polyblep_precalc(fZec173[i], 0.5f * fYec99[i - 1], 0.5f * fYec99[i - 2], fZec37[i]) - fRec143[i - 1]);
			}
			/* Post code */
			for (int j611 = 0; j611 < 4; j611 = j611 + 1) {
				fRec143_perm[j611] = fRec143_tmp[vsize + j611];
			}
			/* Recursive loop 565 */
			/* Pre code */
			for (int j624 = 0; j624 < 4; j624 = j624 + 1) {
				fRec147_tmp[j624] = fRec147_perm[j624];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec147[i] = fRec147[i - 1] + fConst31 * (2.0f * fYec103[i - 1] + square_polyblep_precalc(fZec175[i], 0.5f * fYec102[i - 1], 0.5f * fYec102[i - 2], fZec44[i]) - fRec147[i - 1]);
			}
			/* Post code */
			for (int j625 = 0; j625 < 4; j625 = j625 + 1) {
				fRec147_perm[j625] = fRec147_tmp[vsize + j625];
			}
			/* Recursive loop 566 */
			/* Pre code */
			for (int j638 = 0; j638 < 4; j638 = j638 + 1) {
				fRec151_tmp[j638] = fRec151_perm[j638];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec151[i] = fRec151[i - 1] + fConst31 * (2.0f * fYec106[i - 1] + square_polyblep_precalc(fZec177[i], 0.5f * fYec105[i - 1], 0.5f * fYec105[i - 2], fZec51[i]) - fRec151[i - 1]);
			}
			/* Post code */
			for (int j639 = 0; j639 < 4; j639 = j639 + 1) {
				fRec151_perm[j639] = fRec151_tmp[vsize + j639];
			}
			/* Recursive loop 567 */
			/* Pre code */
			for (int j652 = 0; j652 < 4; j652 = j652 + 1) {
				fRec155_tmp[j652] = fRec155_perm[j652];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec155[i] = fRec155[i - 1] + fConst31 * (2.0f * fYec109[i - 1] + square_polyblep_precalc(fZec179[i], 0.5f * fYec108[i - 1], 0.5f * fYec108[i - 2], fZec58[i]) - fRec155[i - 1]);
			}
			/* Post code */
			for (int j653 = 0; j653 < 4; j653 = j653 + 1) {
				fRec155_perm[j653] = fRec155_tmp[vsize + j653];
			}
			/* Recursive loop 568 */
			/* Pre code */
			for (int j666 = 0; j666 < 4; j666 = j666 + 1) {
				fRec159_tmp[j666] = fRec159_perm[j666];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec159[i] = fRec159[i - 1] + fConst33 * (2.0f * fYec112[i - 1] + square_polyblep_precalc(fZec181[i], 0.5f * fYec111[i - 1], 0.5f * fYec111[i - 2], fZec65[i]) - fRec159[i - 1]);
			}
			/* Post code */
			for (int j667 = 0; j667 < 4; j667 = j667 + 1) {
				fRec159_perm[j667] = fRec159_tmp[vsize + j667];
			}
			/* Recursive loop 569 */
			/* Pre code */
			for (int j676 = 0; j676 < 4; j676 = j676 + 1) {
				fRec163_tmp[j676] = fRec163_perm[j676];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec163[i] = fRec163[i - 1] + fConst34 * (2.0f * fYec114[i - 1] + square_polyblep_precalc(fZec182[i], 0.5f * fYec113[i - 1], 0.5f * fYec113[i - 2], fZec12[i]) - fRec163[i - 1]);
			}
			/* Post code */
			for (int j677 = 0; j677 < 4; j677 = j677 + 1) {
				fRec163_perm[j677] = fRec163_tmp[vsize + j677];
			}
			/* Recursive loop 570 */
			/* Pre code */
			for (int j686 = 0; j686 < 4; j686 = j686 + 1) {
				fRec166_tmp[j686] = fRec166_perm[j686];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec166[i] = fRec166[i - 1] + fConst34 * (2.0f * fYec116[i - 1] + square_polyblep_precalc(fZec183[i], 0.5f * fYec115[i - 1], 0.5f * fYec115[i - 2], fZec18[i]) - fRec166[i - 1]);
			}
			/* Post code */
			for (int j687 = 0; j687 < 4; j687 = j687 + 1) {
				fRec166_perm[j687] = fRec166_tmp[vsize + j687];
			}
			/* Recursive loop 571 */
			/* Pre code */
			for (int j696 = 0; j696 < 4; j696 = j696 + 1) {
				fRec169_tmp[j696] = fRec169_perm[j696];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec169[i] = fRec169[i - 1] + fConst34 * (2.0f * fYec118[i - 1] + square_polyblep_precalc(fZec184[i], 0.5f * fYec117[i - 1], 0.5f * fYec117[i - 2], fZec24[i]) - fRec169[i - 1]);
			}
			/* Post code */
			for (int j697 = 0; j697 < 4; j697 = j697 + 1) {
				fRec169_perm[j697] = fRec169_tmp[vsize + j697];
			}
			/* Recursive loop 572 */
			/* Pre code */
			for (int j706 = 0; j706 < 4; j706 = j706 + 1) {
				fRec172_tmp[j706] = fRec172_perm[j706];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec172[i] = fRec172[i - 1] + fConst34 * (2.0f * fYec120[i - 1] + square_polyblep_precalc(fZec185[i], 0.5f * fYec119[i - 1], 0.5f * fYec119[i - 2], fZec30[i]) - fRec172[i - 1]);
			}
			/* Post code */
			for (int j707 = 0; j707 < 4; j707 = j707 + 1) {
				fRec172_perm[j707] = fRec172_tmp[vsize + j707];
			}
			/* Vectorizable loop 573 */
			/* Pre code */
			for (int j710 = 0; j710 < 4; j710 = j710 + 1) {
				fYec121_tmp[j710] = fYec121_perm[j710];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec121[i] = float(fZec172[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j711 = 0; j711 < 4; j711 = j711 + 1) {
				fYec121_perm[j711] = fYec121_tmp[vsize + j711];
			}
			/* Vectorizable loop 574 */
			/* Pre code */
			for (int j716 = 0; j716 < 4; j716 = j716 + 1) {
				fYec122_tmp[j716] = fYec122_perm[j716];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec122[i] = float(fZec174[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j717 = 0; j717 < 4; j717 = j717 + 1) {
				fYec122_perm[j717] = fYec122_tmp[vsize + j717];
			}
			/* Vectorizable loop 575 */
			/* Pre code */
			for (int j722 = 0; j722 < 4; j722 = j722 + 1) {
				fYec123_tmp[j722] = fYec123_perm[j722];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec123[i] = float(fZec176[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j723 = 0; j723 < 4; j723 = j723 + 1) {
				fYec123_perm[j723] = fYec123_tmp[vsize + j723];
			}
			/* Vectorizable loop 576 */
			/* Pre code */
			for (int j728 = 0; j728 < 4; j728 = j728 + 1) {
				fYec124_tmp[j728] = fYec124_perm[j728];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec124[i] = float(fZec178[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j729 = 0; j729 < 4; j729 = j729 + 1) {
				fYec124_perm[j729] = fYec124_tmp[vsize + j729];
			}
			/* Vectorizable loop 577 */
			/* Pre code */
			for (int j734 = 0; j734 < 4; j734 = j734 + 1) {
				fYec125_tmp[j734] = fYec125_perm[j734];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec125[i] = float(fZec180[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j735 = 0; j735 < 4; j735 = j735 + 1) {
				fYec125_perm[j735] = fYec125_tmp[vsize + j735];
			}
			/* Vectorizable loop 578 */
			/* Pre code */
			for (int j744 = 0; j744 < 4; j744 = j744 + 1) {
				fYec127_tmp[j744] = fYec127_perm[j744];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec127[i] = float(fZec186[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j745 = 0; j745 < 4; j745 = j745 + 1) {
				fYec127_perm[j745] = fYec127_tmp[vsize + j745];
			}
			/* Recursive loop 579 */
			/* Pre code */
			for (int j756 = 0; j756 < 4; j756 = j756 + 1) {
				fRec188_tmp[j756] = fRec188_perm[j756];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec188[i] = fRec188[i - 1] + fConst36 * (2.0f * fYec129[i - 1] + square_polyblep_precalc(fZec187[i], 0.5f * fYec128[i - 1], 0.5f * fYec128[i - 2], fZec6[i]) - fRec188[i - 1]);
			}
			/* Post code */
			for (int j757 = 0; j757 < 4; j757 = j757 + 1) {
				fRec188_perm[j757] = fRec188_tmp[vsize + j757];
			}
			/* Vectorizable loop 580 */
			/* Pre code */
			for (int j764 = 0; j764 < 4; j764 = j764 + 1) {
				fYec131_tmp[j764] = fYec131_perm[j764];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec131[i] = float(fZec188[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j765 = 0; j765 < 4; j765 = j765 + 1) {
				fYec131_perm[j765] = fYec131_tmp[vsize + j765];
			}
			/* Vectorizable loop 581 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec240[i] = 0.5f * fYec135[i];
			}
			/* Vectorizable loop 582 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec243[i] = 0.5f * fYec139[i];
			}
			/* Vectorizable loop 583 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec246[i] = 0.5f * fYec143[i];
			}
			/* Vectorizable loop 584 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec249[i] = 0.5f * fYec147[i];
			}
			/* Vectorizable loop 585 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec252[i] = 0.5f * fYec151[i];
			}
			/* Vectorizable loop 586 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec255[i] = 0.5f * fYec155[i];
			}
			/* Vectorizable loop 587 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec258[i] = 0.5f * fYec159[i];
			}
			/* Vectorizable loop 588 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec260[i] = 0.5f * fYec162[i];
			}
			/* Vectorizable loop 589 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec262[i] = 0.5f * fYec165[i];
			}
			/* Vectorizable loop 590 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec264[i] = 0.5f * fYec168[i];
			}
			/* Vectorizable loop 591 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec266[i] = 0.5f * fYec171[i];
			}
			/* Vectorizable loop 592 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec268[i] = 0.5f * fYec174[i];
			}
			/* Recursive loop 593 */
			/* Pre code */
			for (int j1044 = 0; j1044 < 4; j1044 = j1044 + 1) {
				fRec273_tmp[j1044] = fRec273_perm[j1044];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec273[i] = fRec273[i - 1] + fConst42 * (2.0f * fYec188[i - 1] + square_polyblep_precalc(fZec238[i], 0.5f * fYec133[i - 1], 0.5f * fYec133[i - 2], fZec30[i]) - fRec273[i - 1]);
			}
			/* Post code */
			for (int j1045 = 0; j1045 < 4; j1045 = j1045 + 1) {
				fRec273_perm[j1045] = fRec273_tmp[vsize + j1045];
			}
			/* Recursive loop 594 */
			/* Pre code */
			for (int j1050 = 0; j1050 < 4; j1050 = j1050 + 1) {
				fRec275_tmp[j1050] = fRec275_perm[j1050];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec275[i] = fRec275[i - 1] + fConst42 * (2.0f * fYec189[i - 1] + square_polyblep_precalc(fZec241[i], 0.5f * fYec137[i - 1], 0.5f * fYec137[i - 2], fZec24[i]) - fRec275[i - 1]);
			}
			/* Post code */
			for (int j1051 = 0; j1051 < 4; j1051 = j1051 + 1) {
				fRec275_perm[j1051] = fRec275_tmp[vsize + j1051];
			}
			/* Recursive loop 595 */
			/* Pre code */
			for (int j1056 = 0; j1056 < 4; j1056 = j1056 + 1) {
				fRec277_tmp[j1056] = fRec277_perm[j1056];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec277[i] = fRec277[i - 1] + fConst42 * (2.0f * fYec190[i - 1] + square_polyblep_precalc(fZec244[i], 0.5f * fYec141[i - 1], 0.5f * fYec141[i - 2], fZec18[i]) - fRec277[i - 1]);
			}
			/* Post code */
			for (int j1057 = 0; j1057 < 4; j1057 = j1057 + 1) {
				fRec277_perm[j1057] = fRec277_tmp[vsize + j1057];
			}
			/* Recursive loop 596 */
			/* Pre code */
			for (int j1062 = 0; j1062 < 4; j1062 = j1062 + 1) {
				fRec279_tmp[j1062] = fRec279_perm[j1062];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec279[i] = fRec279[i - 1] + fConst42 * (2.0f * fYec191[i - 1] + square_polyblep_precalc(fZec247[i], 0.5f * fYec145[i - 1], 0.5f * fYec145[i - 2], fZec12[i]) - fRec279[i - 1]);
			}
			/* Post code */
			for (int j1063 = 0; j1063 < 4; j1063 = j1063 + 1) {
				fRec279_perm[j1063] = fRec279_tmp[vsize + j1063];
			}
			/* Recursive loop 597 */
			/* Pre code */
			for (int j1068 = 0; j1068 < 4; j1068 = j1068 + 1) {
				fRec281_tmp[j1068] = fRec281_perm[j1068];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec281[i] = fRec281[i - 1] + fConst33 * (2.0f * fYec192[i - 1] + square_polyblep_precalc(fZec250[i], 0.5f * fYec149[i - 1], 0.5f * fYec149[i - 2], fZec6[i]) - fRec281[i - 1]);
			}
			/* Post code */
			for (int j1069 = 0; j1069 < 4; j1069 = j1069 + 1) {
				fRec281_perm[j1069] = fRec281_tmp[vsize + j1069];
			}
			/* Recursive loop 598 */
			/* Pre code */
			for (int j1074 = 0; j1074 < 4; j1074 = j1074 + 1) {
				fRec283_tmp[j1074] = fRec283_perm[j1074];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec283[i] = fRec283[i - 1] + fConst33 * (2.0f * fYec193[i - 1] + square_polyblep_precalc(fZec253[i], 0.5f * fYec153[i - 1], 0.5f * fYec153[i - 2], fZec79[i]) - fRec283[i - 1]);
			}
			/* Post code */
			for (int j1075 = 0; j1075 < 4; j1075 = j1075 + 1) {
				fRec283_perm[j1075] = fRec283_tmp[vsize + j1075];
			}
			/* Recursive loop 599 */
			/* Pre code */
			for (int j1080 = 0; j1080 < 4; j1080 = j1080 + 1) {
				fRec285_tmp[j1080] = fRec285_perm[j1080];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec285[i] = fRec285[i - 1] + fConst33 * (2.0f * fYec194[i - 1] + square_polyblep_precalc(fZec256[i], 0.5f * fYec157[i - 1], 0.5f * fYec157[i - 2], fZec72[i]) - fRec285[i - 1]);
			}
			/* Post code */
			for (int j1081 = 0; j1081 < 4; j1081 = j1081 + 1) {
				fRec285_perm[j1081] = fRec285_tmp[vsize + j1081];
			}
			/* Vectorizable loop 600 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec86[i] = fRec90[i] * fZec85[i];
			}
			/* Vectorizable loop 601 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec88[i] = fRec129[i] * fZec87[i];
			}
			/* Vectorizable loop 602 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec90[i] = fRec130[i] * fZec89[i];
			}
			/* Vectorizable loop 603 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec92[i] = fRec131[i] * fZec91[i];
			}
			/* Vectorizable loop 604 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec94[i] = fRec132[i] * fZec93[i];
			}
			/* Vectorizable loop 605 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec96[i] = fRec133[i] * fZec95[i];
			}
			/* Vectorizable loop 606 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec98[i] = fRec134[i] * fZec97[i];
			}
			/* Vectorizable loop 607 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec100[i] = fRec135[i] * fZec99[i];
			}
			/* Vectorizable loop 608 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec102[i] = fRec136[i] * fZec101[i];
			}
			/* Vectorizable loop 609 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec104[i] = fRec137[i] * fZec103[i];
			}
			/* Vectorizable loop 610 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec106[i] = fRec138[i] * fZec105[i];
			}
			/* Vectorizable loop 611 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec108[i] = fRec139[i] * fZec107[i];
			}
			/* Vectorizable loop 612 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec110[i] = fRec90[i] * fZec109[i];
			}
			/* Vectorizable loop 613 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec111[i] = fSlow31 + fVec13[i - 3] + fVec13[i - 1] + fVec13[i - 2];
			}
			/* Vectorizable loop 614 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec112[i] = fSlow32 + fVec14[i - 3] + fVec14[i - 1] + fVec14[i - 2];
			}
			/* Vectorizable loop 615 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec113[i] = fSlow33 + fVec15[i - 3] + fVec15[i - 1] + fVec15[i - 2];
			}
			/* Vectorizable loop 616 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec114[i] = fSlow34 + fVec16[i - 3] + fVec16[i - 1] + fVec16[i - 2];
			}
			/* Vectorizable loop 617 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec115[i] = fSlow35 + fVec17[i - 3] + fVec17[i - 1] + fVec17[i - 2];
			}
			/* Vectorizable loop 618 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec116[i] = fSlow36 + fVec18[i - 3] + fVec18[i - 1] + fVec18[i - 2];
			}
			/* Vectorizable loop 619 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec117[i] = fSlow37 + fVec19[i - 3] + fVec19[i - 1] + fVec19[i - 2];
			}
			/* Vectorizable loop 620 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec118[i] = fSlow38 + fVec20[i - 3] + fVec20[i - 1] + fVec20[i - 2];
			}
			/* Vectorizable loop 621 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec119[i] = fSlow39 + fVec21[i - 3] + fVec21[i - 1] + fVec21[i - 2];
			}
			/* Vectorizable loop 622 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec120[i] = fSlow40 + fVec22[i - 3] + fVec22[i - 1] + fVec22[i - 2];
			}
			/* Vectorizable loop 623 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec121[i] = fSlow41 + fVec23[i - 3] + fVec23[i - 1] + fVec23[i - 2];
			}
			/* Vectorizable loop 624 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec122[i] = fSlow42 + fVec24[i - 3] + fVec24[i - 1] + fVec24[i - 2];
			}
			/* Vectorizable loop 625 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec159[i] = fSlow80 * (fRec84[i] * fZec158[i] + fRec87[i] * fZec157[i] + fRec81[i] * fZec156[i] + fRec78[i] * fZec155[i] + fRec75[i] * fZec154[i] + fRec69[i] * fZec153[i] + fRec63[i] * fZec152[i] + fRec57[i] * fZec151[i] + fRec51[i] * fZec150[i] + fRec45[i] * fZec149[i] + fRec39[i] * fZec148[i] + fRec33[i] * fZec147[i] + fRec28[i] * fZec146[i] + fRec23[i] * fZec145[i] + fRec18[i] * fZec144[i] + fRec13[i] * fZec143[i] + fRec7[i] * fZec142[i]) + fRec125[i] * fZec141[i] + fRec127[i] * fZec140[i] + fRec123[i] * fZec139[i] + fRec121[i] * fZec138[i] + fRec119[i] * fZec137[i] + fRec117[i] * fZec136[i] + fRec115[i] * fZec135[i] + fRec113[i] * fZec134[i] + fRec111[i] * fZec133[i] + fRec109[i] * fZec132[i] + fRec107[i] * fZec131[i] + fRec105[i] * fZec130[i] + fRec103[i] * fZec129[i] + fRec101[i] * fZec128[i] + fRec99[i] * fZec127[i] + fRec97[i] * fZec126[i] + fRec95[i] * fZec125[i] + fRec93[i] * fZec124[i] + fRec91[i] * fZec123[i];
			}
			/* Vectorizable loop 626 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec161[i] = fRec136[i] + fRec137[i] + fRec138[i] + fRec90[i] + fRec139[i];
			}
			/* Vectorizable loop 627 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec165[i] = fRec7[i] + fRec13[i] + fRec18[i] + fRec23[i] + fZec164[i];
			}
			/* Recursive loop 628 */
			/* Pre code */
			for (int j612 = 0; j612 < 4; j612 = j612 + 1) {
				fRec142_tmp[j612] = fRec142_perm[j612];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec142[i] = fConst32 * (fRec142[i - 1] + (fRec143[i] - fRec143[i - 1]));
			}
			/* Post code */
			for (int j613 = 0; j613 < 4; j613 = j613 + 1) {
				fRec142_perm[j613] = fRec142_tmp[vsize + j613];
			}
			/* Recursive loop 629 */
			/* Pre code */
			for (int j626 = 0; j626 < 4; j626 = j626 + 1) {
				fRec146_tmp[j626] = fRec146_perm[j626];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec146[i] = fConst32 * (fRec146[i - 1] + (fRec147[i] - fRec147[i - 1]));
			}
			/* Post code */
			for (int j627 = 0; j627 < 4; j627 = j627 + 1) {
				fRec146_perm[j627] = fRec146_tmp[vsize + j627];
			}
			/* Recursive loop 630 */
			/* Pre code */
			for (int j640 = 0; j640 < 4; j640 = j640 + 1) {
				fRec150_tmp[j640] = fRec150_perm[j640];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec150[i] = fConst32 * (fRec150[i - 1] + (fRec151[i] - fRec151[i - 1]));
			}
			/* Post code */
			for (int j641 = 0; j641 < 4; j641 = j641 + 1) {
				fRec150_perm[j641] = fRec150_tmp[vsize + j641];
			}
			/* Recursive loop 631 */
			/* Pre code */
			for (int j654 = 0; j654 < 4; j654 = j654 + 1) {
				fRec154_tmp[j654] = fRec154_perm[j654];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec154[i] = fConst32 * (fRec154[i - 1] + (fRec155[i] - fRec155[i - 1]));
			}
			/* Post code */
			for (int j655 = 0; j655 < 4; j655 = j655 + 1) {
				fRec154_perm[j655] = fRec154_tmp[vsize + j655];
			}
			/* Recursive loop 632 */
			/* Pre code */
			for (int j668 = 0; j668 < 4; j668 = j668 + 1) {
				fRec158_tmp[j668] = fRec158_perm[j668];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec158[i] = fConst32 * (fRec158[i - 1] + (fRec159[i] - fRec159[i - 1]));
			}
			/* Post code */
			for (int j669 = 0; j669 < 4; j669 = j669 + 1) {
				fRec158_perm[j669] = fRec158_tmp[vsize + j669];
			}
			/* Recursive loop 633 */
			/* Pre code */
			for (int j678 = 0; j678 < 4; j678 = j678 + 1) {
				fRec162_tmp[j678] = fRec162_perm[j678];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec162[i] = fConst5 * (fRec162[i - 1] + (fRec163[i] - fRec163[i - 1]));
			}
			/* Post code */
			for (int j679 = 0; j679 < 4; j679 = j679 + 1) {
				fRec162_perm[j679] = fRec162_tmp[vsize + j679];
			}
			/* Recursive loop 634 */
			/* Pre code */
			for (int j688 = 0; j688 < 4; j688 = j688 + 1) {
				fRec165_tmp[j688] = fRec165_perm[j688];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec165[i] = fConst5 * (fRec165[i - 1] + (fRec166[i] - fRec166[i - 1]));
			}
			/* Post code */
			for (int j689 = 0; j689 < 4; j689 = j689 + 1) {
				fRec165_perm[j689] = fRec165_tmp[vsize + j689];
			}
			/* Recursive loop 635 */
			/* Pre code */
			for (int j698 = 0; j698 < 4; j698 = j698 + 1) {
				fRec168_tmp[j698] = fRec168_perm[j698];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec168[i] = fConst5 * (fRec168[i - 1] + (fRec169[i] - fRec169[i - 1]));
			}
			/* Post code */
			for (int j699 = 0; j699 < 4; j699 = j699 + 1) {
				fRec168_perm[j699] = fRec168_tmp[vsize + j699];
			}
			/* Recursive loop 636 */
			/* Pre code */
			for (int j708 = 0; j708 < 4; j708 = j708 + 1) {
				fRec171_tmp[j708] = fRec171_perm[j708];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec171[i] = fConst5 * (fRec171[i - 1] + (fRec172[i] - fRec172[i - 1]));
			}
			/* Post code */
			for (int j709 = 0; j709 < 4; j709 = j709 + 1) {
				fRec171_perm[j709] = fRec171_tmp[vsize + j709];
			}
			/* Recursive loop 637 */
			/* Pre code */
			for (int j712 = 0; j712 < 4; j712 = j712 + 1) {
				fRec175_tmp[j712] = fRec175_perm[j712];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec175[i] = fRec175[i - 1] + fConst35 * (2.0f * fYec121[i - 1] + square_polyblep_precalc(fZec172[i], 0.5f * fYec98[i - 1], 0.5f * fYec98[i - 2], fZec37[i]) - fRec175[i - 1]);
			}
			/* Post code */
			for (int j713 = 0; j713 < 4; j713 = j713 + 1) {
				fRec175_perm[j713] = fRec175_tmp[vsize + j713];
			}
			/* Recursive loop 638 */
			/* Pre code */
			for (int j718 = 0; j718 < 4; j718 = j718 + 1) {
				fRec177_tmp[j718] = fRec177_perm[j718];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec177[i] = fRec177[i - 1] + fConst35 * (2.0f * fYec122[i - 1] + square_polyblep_precalc(fZec174[i], 0.5f * fYec101[i - 1], 0.5f * fYec101[i - 2], fZec44[i]) - fRec177[i - 1]);
			}
			/* Post code */
			for (int j719 = 0; j719 < 4; j719 = j719 + 1) {
				fRec177_perm[j719] = fRec177_tmp[vsize + j719];
			}
			/* Recursive loop 639 */
			/* Pre code */
			for (int j724 = 0; j724 < 4; j724 = j724 + 1) {
				fRec179_tmp[j724] = fRec179_perm[j724];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec179[i] = fRec179[i - 1] + fConst35 * (2.0f * fYec123[i - 1] + square_polyblep_precalc(fZec176[i], 0.5f * fYec104[i - 1], 0.5f * fYec104[i - 2], fZec51[i]) - fRec179[i - 1]);
			}
			/* Post code */
			for (int j725 = 0; j725 < 4; j725 = j725 + 1) {
				fRec179_perm[j725] = fRec179_tmp[vsize + j725];
			}
			/* Recursive loop 640 */
			/* Pre code */
			for (int j730 = 0; j730 < 4; j730 = j730 + 1) {
				fRec181_tmp[j730] = fRec181_perm[j730];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec181[i] = fRec181[i - 1] + fConst35 * (2.0f * fYec124[i - 1] + square_polyblep_precalc(fZec178[i], 0.5f * fYec107[i - 1], 0.5f * fYec107[i - 2], fZec58[i]) - fRec181[i - 1]);
			}
			/* Post code */
			for (int j731 = 0; j731 < 4; j731 = j731 + 1) {
				fRec181_perm[j731] = fRec181_tmp[vsize + j731];
			}
			/* Recursive loop 641 */
			/* Pre code */
			for (int j736 = 0; j736 < 4; j736 = j736 + 1) {
				fRec183_tmp[j736] = fRec183_perm[j736];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec183[i] = fRec183[i - 1] + fConst36 * (2.0f * fYec125[i - 1] + square_polyblep_precalc(fZec180[i], 0.5f * fYec110[i - 1], 0.5f * fYec110[i - 2], fZec65[i]) - fRec183[i - 1]);
			}
			/* Post code */
			for (int j737 = 0; j737 < 4; j737 = j737 + 1) {
				fRec183_perm[j737] = fRec183_tmp[vsize + j737];
			}
			/* Recursive loop 642 */
			/* Pre code */
			for (int j746 = 0; j746 < 4; j746 = j746 + 1) {
				fRec185_tmp[j746] = fRec185_perm[j746];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec185[i] = fRec185[i - 1] + fConst36 * (2.0f * fYec127[i - 1] + square_polyblep_precalc(fZec186[i], 0.5f * fYec126[i - 1], 0.5f * fYec126[i - 2], fZec72[i]) - fRec185[i - 1]);
			}
			/* Post code */
			for (int j747 = 0; j747 < 4; j747 = j747 + 1) {
				fRec185_perm[j747] = fRec185_tmp[vsize + j747];
			}
			/* Recursive loop 643 */
			/* Pre code */
			for (int j758 = 0; j758 < 4; j758 = j758 + 1) {
				fRec187_tmp[j758] = fRec187_perm[j758];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec187[i] = fConst5 * (fRec187[i - 1] + (fRec188[i] - fRec188[i - 1]));
			}
			/* Post code */
			for (int j759 = 0; j759 < 4; j759 = j759 + 1) {
				fRec187_perm[j759] = fRec187_tmp[vsize + j759];
			}
			/* Recursive loop 644 */
			/* Pre code */
			for (int j766 = 0; j766 < 4; j766 = j766 + 1) {
				fRec191_tmp[j766] = fRec191_perm[j766];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec191[i] = fRec191[i - 1] + fConst36 * (2.0f * fYec131[i - 1] + square_polyblep_precalc(fZec188[i], 0.5f * fYec130[i - 1], 0.5f * fYec130[i - 2], fZec79[i]) - fRec191[i - 1]);
			}
			/* Post code */
			for (int j767 = 0; j767 < 4; j767 = j767 + 1) {
				fRec191_perm[j767] = fRec191_tmp[vsize + j767];
			}
			/* Vectorizable loop 645 */
			/* Pre code */
			for (int j786 = 0; j786 < 4; j786 = j786 + 1) {
				fYec136_tmp[j786] = fYec136_perm[j786];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec136[i] = float(fZec240[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j787 = 0; j787 < 4; j787 = j787 + 1) {
				fYec136_perm[j787] = fYec136_tmp[vsize + j787];
			}
			/* Vectorizable loop 646 */
			/* Pre code */
			for (int j804 = 0; j804 < 4; j804 = j804 + 1) {
				fYec140_tmp[j804] = fYec140_perm[j804];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec140[i] = float(fZec243[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j805 = 0; j805 < 4; j805 = j805 + 1) {
				fYec140_perm[j805] = fYec140_tmp[vsize + j805];
			}
			/* Vectorizable loop 647 */
			/* Pre code */
			for (int j822 = 0; j822 < 4; j822 = j822 + 1) {
				fYec144_tmp[j822] = fYec144_perm[j822];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec144[i] = float(fZec246[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j823 = 0; j823 < 4; j823 = j823 + 1) {
				fYec144_perm[j823] = fYec144_tmp[vsize + j823];
			}
			/* Vectorizable loop 648 */
			/* Pre code */
			for (int j840 = 0; j840 < 4; j840 = j840 + 1) {
				fYec148_tmp[j840] = fYec148_perm[j840];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec148[i] = float(fZec249[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j841 = 0; j841 < 4; j841 = j841 + 1) {
				fYec148_perm[j841] = fYec148_tmp[vsize + j841];
			}
			/* Vectorizable loop 649 */
			/* Pre code */
			for (int j858 = 0; j858 < 4; j858 = j858 + 1) {
				fYec152_tmp[j858] = fYec152_perm[j858];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec152[i] = float(fZec252[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j859 = 0; j859 < 4; j859 = j859 + 1) {
				fYec152_perm[j859] = fYec152_tmp[vsize + j859];
			}
			/* Vectorizable loop 650 */
			/* Pre code */
			for (int j876 = 0; j876 < 4; j876 = j876 + 1) {
				fYec156_tmp[j876] = fYec156_perm[j876];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec156[i] = float(fZec255[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j877 = 0; j877 < 4; j877 = j877 + 1) {
				fYec156_perm[j877] = fYec156_tmp[vsize + j877];
			}
			/* Vectorizable loop 651 */
			/* Pre code */
			for (int j894 = 0; j894 < 4; j894 = j894 + 1) {
				fYec160_tmp[j894] = fYec160_perm[j894];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec160[i] = float(fZec258[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j895 = 0; j895 < 4; j895 = j895 + 1) {
				fYec160_perm[j895] = fYec160_tmp[vsize + j895];
			}
			/* Vectorizable loop 652 */
			/* Pre code */
			for (int j908 = 0; j908 < 4; j908 = j908 + 1) {
				fYec163_tmp[j908] = fYec163_perm[j908];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec163[i] = float(fZec260[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j909 = 0; j909 < 4; j909 = j909 + 1) {
				fYec163_perm[j909] = fYec163_tmp[vsize + j909];
			}
			/* Vectorizable loop 653 */
			/* Pre code */
			for (int j922 = 0; j922 < 4; j922 = j922 + 1) {
				fYec166_tmp[j922] = fYec166_perm[j922];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec166[i] = float(fZec262[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j923 = 0; j923 < 4; j923 = j923 + 1) {
				fYec166_perm[j923] = fYec166_tmp[vsize + j923];
			}
			/* Vectorizable loop 654 */
			/* Pre code */
			for (int j936 = 0; j936 < 4; j936 = j936 + 1) {
				fYec169_tmp[j936] = fYec169_perm[j936];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec169[i] = float(fZec264[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j937 = 0; j937 < 4; j937 = j937 + 1) {
				fYec169_perm[j937] = fYec169_tmp[vsize + j937];
			}
			/* Vectorizable loop 655 */
			/* Pre code */
			for (int j950 = 0; j950 < 4; j950 = j950 + 1) {
				fYec172_tmp[j950] = fYec172_perm[j950];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec172[i] = float(fZec266[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j951 = 0; j951 < 4; j951 = j951 + 1) {
				fYec172_perm[j951] = fYec172_tmp[vsize + j951];
			}
			/* Vectorizable loop 656 */
			/* Pre code */
			for (int j964 = 0; j964 < 4; j964 = j964 + 1) {
				fYec175_tmp[j964] = fYec175_perm[j964];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec175[i] = float(fZec268[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j965 = 0; j965 < 4; j965 = j965 + 1) {
				fYec175_perm[j965] = fYec175_tmp[vsize + j965];
			}
			/* Vectorizable loop 657 */
			/* Pre code */
			for (int j970 = 0; j970 < 4; j970 = j970 + 1) {
				fYec176_tmp[j970] = fYec176_perm[j970];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec176[i] = float(fZec239[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j971 = 0; j971 < 4; j971 = j971 + 1) {
				fYec176_perm[j971] = fYec176_tmp[vsize + j971];
			}
			/* Vectorizable loop 658 */
			/* Pre code */
			for (int j976 = 0; j976 < 4; j976 = j976 + 1) {
				fYec177_tmp[j976] = fYec177_perm[j976];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec177[i] = float(fZec242[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j977 = 0; j977 < 4; j977 = j977 + 1) {
				fYec177_perm[j977] = fYec177_tmp[vsize + j977];
			}
			/* Vectorizable loop 659 */
			/* Pre code */
			for (int j982 = 0; j982 < 4; j982 = j982 + 1) {
				fYec178_tmp[j982] = fYec178_perm[j982];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec178[i] = float(fZec245[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j983 = 0; j983 < 4; j983 = j983 + 1) {
				fYec178_perm[j983] = fYec178_tmp[vsize + j983];
			}
			/* Vectorizable loop 660 */
			/* Pre code */
			for (int j988 = 0; j988 < 4; j988 = j988 + 1) {
				fYec179_tmp[j988] = fYec179_perm[j988];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec179[i] = float(fZec248[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j989 = 0; j989 < 4; j989 = j989 + 1) {
				fYec179_perm[j989] = fYec179_tmp[vsize + j989];
			}
			/* Vectorizable loop 661 */
			/* Pre code */
			for (int j994 = 0; j994 < 4; j994 = j994 + 1) {
				fYec180_tmp[j994] = fYec180_perm[j994];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec180[i] = float(fZec251[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j995 = 0; j995 < 4; j995 = j995 + 1) {
				fYec180_perm[j995] = fYec180_tmp[vsize + j995];
			}
			/* Vectorizable loop 662 */
			/* Pre code */
			for (int j1000 = 0; j1000 < 4; j1000 = j1000 + 1) {
				fYec181_tmp[j1000] = fYec181_perm[j1000];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec181[i] = float(fZec254[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1001 = 0; j1001 < 4; j1001 = j1001 + 1) {
				fYec181_perm[j1001] = fYec181_tmp[vsize + j1001];
			}
			/* Vectorizable loop 663 */
			/* Pre code */
			for (int j1006 = 0; j1006 < 4; j1006 = j1006 + 1) {
				fYec182_tmp[j1006] = fYec182_perm[j1006];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec182[i] = float(fZec257[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1007 = 0; j1007 < 4; j1007 = j1007 + 1) {
				fYec182_perm[j1007] = fYec182_tmp[vsize + j1007];
			}
			/* Vectorizable loop 664 */
			/* Pre code */
			for (int j1012 = 0; j1012 < 4; j1012 = j1012 + 1) {
				fYec183_tmp[j1012] = fYec183_perm[j1012];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec183[i] = float(fZec259[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1013 = 0; j1013 < 4; j1013 = j1013 + 1) {
				fYec183_perm[j1013] = fYec183_tmp[vsize + j1013];
			}
			/* Vectorizable loop 665 */
			/* Pre code */
			for (int j1018 = 0; j1018 < 4; j1018 = j1018 + 1) {
				fYec184_tmp[j1018] = fYec184_perm[j1018];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec184[i] = float(fZec261[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1019 = 0; j1019 < 4; j1019 = j1019 + 1) {
				fYec184_perm[j1019] = fYec184_tmp[vsize + j1019];
			}
			/* Vectorizable loop 666 */
			/* Pre code */
			for (int j1024 = 0; j1024 < 4; j1024 = j1024 + 1) {
				fYec185_tmp[j1024] = fYec185_perm[j1024];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec185[i] = float(fZec263[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1025 = 0; j1025 < 4; j1025 = j1025 + 1) {
				fYec185_perm[j1025] = fYec185_tmp[vsize + j1025];
			}
			/* Vectorizable loop 667 */
			/* Pre code */
			for (int j1030 = 0; j1030 < 4; j1030 = j1030 + 1) {
				fYec186_tmp[j1030] = fYec186_perm[j1030];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec186[i] = float(fZec265[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1031 = 0; j1031 < 4; j1031 = j1031 + 1) {
				fYec186_perm[j1031] = fYec186_tmp[vsize + j1031];
			}
			/* Vectorizable loop 668 */
			/* Pre code */
			for (int j1036 = 0; j1036 < 4; j1036 = j1036 + 1) {
				fYec187_tmp[j1036] = fYec187_perm[j1036];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec187[i] = float(fZec267[i] < 0.5f) + -0.5f;
			}
			/* Post code */
			for (int j1037 = 0; j1037 < 4; j1037 = j1037 + 1) {
				fYec187_perm[j1037] = fYec187_tmp[vsize + j1037];
			}
			/* Recursive loop 669 */
			/* Pre code */
			for (int j1046 = 0; j1046 < 4; j1046 = j1046 + 1) {
				fRec272_tmp[j1046] = fRec272_perm[j1046];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec272[i] = fConst32 * (fRec272[i - 1] + (fRec273[i] - fRec273[i - 1]));
			}
			/* Post code */
			for (int j1047 = 0; j1047 < 4; j1047 = j1047 + 1) {
				fRec272_perm[j1047] = fRec272_tmp[vsize + j1047];
			}
			/* Recursive loop 670 */
			/* Pre code */
			for (int j1052 = 0; j1052 < 4; j1052 = j1052 + 1) {
				fRec274_tmp[j1052] = fRec274_perm[j1052];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec274[i] = fConst32 * (fRec274[i - 1] + (fRec275[i] - fRec275[i - 1]));
			}
			/* Post code */
			for (int j1053 = 0; j1053 < 4; j1053 = j1053 + 1) {
				fRec274_perm[j1053] = fRec274_tmp[vsize + j1053];
			}
			/* Recursive loop 671 */
			/* Pre code */
			for (int j1058 = 0; j1058 < 4; j1058 = j1058 + 1) {
				fRec276_tmp[j1058] = fRec276_perm[j1058];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec276[i] = fConst32 * (fRec276[i - 1] + (fRec277[i] - fRec277[i - 1]));
			}
			/* Post code */
			for (int j1059 = 0; j1059 < 4; j1059 = j1059 + 1) {
				fRec276_perm[j1059] = fRec276_tmp[vsize + j1059];
			}
			/* Recursive loop 672 */
			/* Pre code */
			for (int j1064 = 0; j1064 < 4; j1064 = j1064 + 1) {
				fRec278_tmp[j1064] = fRec278_perm[j1064];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec278[i] = fConst32 * (fRec278[i - 1] + (fRec279[i] - fRec279[i - 1]));
			}
			/* Post code */
			for (int j1065 = 0; j1065 < 4; j1065 = j1065 + 1) {
				fRec278_perm[j1065] = fRec278_tmp[vsize + j1065];
			}
			/* Recursive loop 673 */
			/* Pre code */
			for (int j1070 = 0; j1070 < 4; j1070 = j1070 + 1) {
				fRec280_tmp[j1070] = fRec280_perm[j1070];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec280[i] = fConst32 * (fRec280[i - 1] + (fRec281[i] - fRec281[i - 1]));
			}
			/* Post code */
			for (int j1071 = 0; j1071 < 4; j1071 = j1071 + 1) {
				fRec280_perm[j1071] = fRec280_tmp[vsize + j1071];
			}
			/* Recursive loop 674 */
			/* Pre code */
			for (int j1076 = 0; j1076 < 4; j1076 = j1076 + 1) {
				fRec282_tmp[j1076] = fRec282_perm[j1076];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec282[i] = fConst32 * (fRec282[i - 1] + (fRec283[i] - fRec283[i - 1]));
			}
			/* Post code */
			for (int j1077 = 0; j1077 < 4; j1077 = j1077 + 1) {
				fRec282_perm[j1077] = fRec282_tmp[vsize + j1077];
			}
			/* Recursive loop 675 */
			/* Pre code */
			for (int j1082 = 0; j1082 < 4; j1082 = j1082 + 1) {
				fRec284_tmp[j1082] = fRec284_perm[j1082];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec284[i] = fConst32 * (fRec284[i - 1] + (fRec285[i] - fRec285[i - 1]));
			}
			/* Post code */
			for (int j1083 = 0; j1083 < 4; j1083 = j1083 + 1) {
				fRec284_perm[j1083] = fRec284_tmp[vsize + j1083];
			}
			/* Vectorizable loop 676 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec160[i] = 0.25f * (fZec159[i] + fRec90[i] * fZec122[i] + fRec139[i] * fZec121[i] + fRec138[i] * fZec120[i] + fRec137[i] * fZec119[i] + fRec136[i] * fZec118[i] + fRec135[i] * fZec117[i] + fRec134[i] * fZec116[i] + fRec133[i] * fZec115[i] + fRec132[i] * fZec114[i] + fRec131[i] * fZec113[i] + fRec130[i] * fZec112[i] + fRec129[i] * fZec111[i] + fZec110[i] + fZec108[i] + fZec106[i] + fZec104[i] + fZec102[i] + fZec100[i] + fZec98[i] + fZec96[i] + fZec94[i] + fZec92[i] + fZec90[i] + fZec88[i] + fZec86[i]);
			}
			/* Vectorizable loop 677 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec166[i] = fSlow80 * fZec165[i] + fRec90[i] + fRec91[i] + fRec93[i] + fRec95[i] + fRec97[i] + fRec99[i] + fRec101[i] + fRec103[i] + fRec105[i] + fRec107[i] + fRec109[i] + fRec111[i] + fRec113[i] + fRec115[i] + fRec117[i] + fRec119[i] + fRec121[i] + fRec123[i] + fRec125[i] + fRec127[i] + 2.0f * (fRec129[i] + fRec130[i] + fRec131[i] + fRec132[i] + fRec133[i] + fRec134[i] + fRec135[i] + fZec161[i]);
			}
			/* Recursive loop 678 */
			/* Pre code */
			for (int j714 = 0; j714 < 4; j714 = j714 + 1) {
				fRec174_tmp[j714] = fRec174_perm[j714];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec174[i] = fConst5 * (fRec174[i - 1] + (fRec175[i] - fRec175[i - 1]));
			}
			/* Post code */
			for (int j715 = 0; j715 < 4; j715 = j715 + 1) {
				fRec174_perm[j715] = fRec174_tmp[vsize + j715];
			}
			/* Recursive loop 679 */
			/* Pre code */
			for (int j720 = 0; j720 < 4; j720 = j720 + 1) {
				fRec176_tmp[j720] = fRec176_perm[j720];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec176[i] = fConst5 * (fRec176[i - 1] + (fRec177[i] - fRec177[i - 1]));
			}
			/* Post code */
			for (int j721 = 0; j721 < 4; j721 = j721 + 1) {
				fRec176_perm[j721] = fRec176_tmp[vsize + j721];
			}
			/* Recursive loop 680 */
			/* Pre code */
			for (int j726 = 0; j726 < 4; j726 = j726 + 1) {
				fRec178_tmp[j726] = fRec178_perm[j726];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec178[i] = fConst5 * (fRec178[i - 1] + (fRec179[i] - fRec179[i - 1]));
			}
			/* Post code */
			for (int j727 = 0; j727 < 4; j727 = j727 + 1) {
				fRec178_perm[j727] = fRec178_tmp[vsize + j727];
			}
			/* Recursive loop 681 */
			/* Pre code */
			for (int j732 = 0; j732 < 4; j732 = j732 + 1) {
				fRec180_tmp[j732] = fRec180_perm[j732];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec180[i] = fConst5 * (fRec180[i - 1] + (fRec181[i] - fRec181[i - 1]));
			}
			/* Post code */
			for (int j733 = 0; j733 < 4; j733 = j733 + 1) {
				fRec180_perm[j733] = fRec180_tmp[vsize + j733];
			}
			/* Recursive loop 682 */
			/* Pre code */
			for (int j738 = 0; j738 < 4; j738 = j738 + 1) {
				fRec182_tmp[j738] = fRec182_perm[j738];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec182[i] = fConst5 * (fRec182[i - 1] + (fRec183[i] - fRec183[i - 1]));
			}
			/* Post code */
			for (int j739 = 0; j739 < 4; j739 = j739 + 1) {
				fRec182_perm[j739] = fRec182_tmp[vsize + j739];
			}
			/* Recursive loop 683 */
			/* Pre code */
			for (int j748 = 0; j748 < 4; j748 = j748 + 1) {
				fRec184_tmp[j748] = fRec184_perm[j748];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec184[i] = fConst5 * (fRec184[i - 1] + (fRec185[i] - fRec185[i - 1]));
			}
			/* Post code */
			for (int j749 = 0; j749 < 4; j749 = j749 + 1) {
				fRec184_perm[j749] = fRec184_tmp[vsize + j749];
			}
			/* Recursive loop 684 */
			/* Pre code */
			for (int j768 = 0; j768 < 4; j768 = j768 + 1) {
				fRec190_tmp[j768] = fRec190_perm[j768];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec190[i] = fConst5 * (fRec190[i - 1] + (fRec191[i] - fRec191[i - 1]));
			}
			/* Post code */
			for (int j769 = 0; j769 < 4; j769 = j769 + 1) {
				fRec190_perm[j769] = fRec190_tmp[vsize + j769];
			}
			/* Vectorizable loop 685 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec235[i] = fRec113[i] + fRec115[i] + fRec117[i] + fRec119[i] + fRec121[i] + fRec123[i] + fRec127[i] + fRec125[i] + fZec165[i];
			}
			/* Recursive loop 686 */
			/* Pre code */
			for (int j788 = 0; j788 < 4; j788 = j788 + 1) {
				fRec194_tmp[j788] = fRec194_perm[j788];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec194[i] = fRec194[i - 1] + fConst37 * (2.0f * fYec136[i - 1] + square_polyblep_precalc(fZec240[i], 0.5f * fYec135[i - 1], 0.5f * fYec135[i - 2], fZec30[i]) - fRec194[i - 1]);
			}
			/* Post code */
			for (int j789 = 0; j789 < 4; j789 = j789 + 1) {
				fRec194_perm[j789] = fRec194_tmp[vsize + j789];
			}
			/* Recursive loop 687 */
			/* Pre code */
			for (int j806 = 0; j806 < 4; j806 = j806 + 1) {
				fRec199_tmp[j806] = fRec199_perm[j806];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec199[i] = fRec199[i - 1] + fConst37 * (2.0f * fYec140[i - 1] + square_polyblep_precalc(fZec243[i], 0.5f * fYec139[i - 1], 0.5f * fYec139[i - 2], fZec24[i]) - fRec199[i - 1]);
			}
			/* Post code */
			for (int j807 = 0; j807 < 4; j807 = j807 + 1) {
				fRec199_perm[j807] = fRec199_tmp[vsize + j807];
			}
			/* Recursive loop 688 */
			/* Pre code */
			for (int j824 = 0; j824 < 4; j824 = j824 + 1) {
				fRec204_tmp[j824] = fRec204_perm[j824];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec204[i] = fRec204[i - 1] + fConst37 * (2.0f * fYec144[i - 1] + square_polyblep_precalc(fZec246[i], 0.5f * fYec143[i - 1], 0.5f * fYec143[i - 2], fZec18[i]) - fRec204[i - 1]);
			}
			/* Post code */
			for (int j825 = 0; j825 < 4; j825 = j825 + 1) {
				fRec204_perm[j825] = fRec204_tmp[vsize + j825];
			}
			/* Recursive loop 689 */
			/* Pre code */
			for (int j842 = 0; j842 < 4; j842 = j842 + 1) {
				fRec209_tmp[j842] = fRec209_perm[j842];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec209[i] = fRec209[i - 1] + fConst37 * (2.0f * fYec148[i - 1] + square_polyblep_precalc(fZec249[i], 0.5f * fYec147[i - 1], 0.5f * fYec147[i - 2], fZec12[i]) - fRec209[i - 1]);
			}
			/* Post code */
			for (int j843 = 0; j843 < 4; j843 = j843 + 1) {
				fRec209_perm[j843] = fRec209_tmp[vsize + j843];
			}
			/* Recursive loop 690 */
			/* Pre code */
			for (int j860 = 0; j860 < 4; j860 = j860 + 1) {
				fRec214_tmp[j860] = fRec214_perm[j860];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec214[i] = fRec214[i - 1] + fConst37 * (2.0f * fYec152[i - 1] + square_polyblep_precalc(fZec252[i], 0.5f * fYec151[i - 1], 0.5f * fYec151[i - 2], fZec6[i]) - fRec214[i - 1]);
			}
			/* Post code */
			for (int j861 = 0; j861 < 4; j861 = j861 + 1) {
				fRec214_perm[j861] = fRec214_tmp[vsize + j861];
			}
			/* Recursive loop 691 */
			/* Pre code */
			for (int j878 = 0; j878 < 4; j878 = j878 + 1) {
				fRec219_tmp[j878] = fRec219_perm[j878];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec219[i] = fRec219[i - 1] + fConst37 * (2.0f * fYec156[i - 1] + square_polyblep_precalc(fZec255[i], 0.5f * fYec155[i - 1], 0.5f * fYec155[i - 2], fZec79[i]) - fRec219[i - 1]);
			}
			/* Post code */
			for (int j879 = 0; j879 < 4; j879 = j879 + 1) {
				fRec219_perm[j879] = fRec219_tmp[vsize + j879];
			}
			/* Recursive loop 692 */
			/* Pre code */
			for (int j896 = 0; j896 < 4; j896 = j896 + 1) {
				fRec224_tmp[j896] = fRec224_perm[j896];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec224[i] = fRec224[i - 1] + fConst37 * (2.0f * fYec160[i - 1] + square_polyblep_precalc(fZec258[i], 0.5f * fYec159[i - 1], 0.5f * fYec159[i - 2], fZec72[i]) - fRec224[i - 1]);
			}
			/* Post code */
			for (int j897 = 0; j897 < 4; j897 = j897 + 1) {
				fRec224_perm[j897] = fRec224_tmp[vsize + j897];
			}
			/* Recursive loop 693 */
			/* Pre code */
			for (int j910 = 0; j910 < 4; j910 = j910 + 1) {
				fRec229_tmp[j910] = fRec229_perm[j910];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec229[i] = fRec229[i - 1] + fConst37 * (2.0f * fYec163[i - 1] + square_polyblep_precalc(fZec260[i], 0.5f * fYec162[i - 1], 0.5f * fYec162[i - 2], fZec65[i]) - fRec229[i - 1]);
			}
			/* Post code */
			for (int j911 = 0; j911 < 4; j911 = j911 + 1) {
				fRec229_perm[j911] = fRec229_tmp[vsize + j911];
			}
			/* Recursive loop 694 */
			/* Pre code */
			for (int j924 = 0; j924 < 4; j924 = j924 + 1) {
				fRec233_tmp[j924] = fRec233_perm[j924];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec233[i] = fRec233[i - 1] + fConst39 * (2.0f * fYec166[i - 1] + square_polyblep_precalc(fZec262[i], 0.5f * fYec165[i - 1], 0.5f * fYec165[i - 2], fZec58[i]) - fRec233[i - 1]);
			}
			/* Post code */
			for (int j925 = 0; j925 < 4; j925 = j925 + 1) {
				fRec233_perm[j925] = fRec233_tmp[vsize + j925];
			}
			/* Recursive loop 695 */
			/* Pre code */
			for (int j938 = 0; j938 < 4; j938 = j938 + 1) {
				fRec237_tmp[j938] = fRec237_perm[j938];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec237[i] = fRec237[i - 1] + fConst39 * (2.0f * fYec169[i - 1] + square_polyblep_precalc(fZec264[i], 0.5f * fYec168[i - 1], 0.5f * fYec168[i - 2], fZec51[i]) - fRec237[i - 1]);
			}
			/* Post code */
			for (int j939 = 0; j939 < 4; j939 = j939 + 1) {
				fRec237_perm[j939] = fRec237_tmp[vsize + j939];
			}
			/* Recursive loop 696 */
			/* Pre code */
			for (int j952 = 0; j952 < 4; j952 = j952 + 1) {
				fRec241_tmp[j952] = fRec241_perm[j952];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec241[i] = fRec241[i - 1] + fConst39 * (2.0f * fYec172[i - 1] + square_polyblep_precalc(fZec266[i], 0.5f * fYec171[i - 1], 0.5f * fYec171[i - 2], fZec44[i]) - fRec241[i - 1]);
			}
			/* Post code */
			for (int j953 = 0; j953 < 4; j953 = j953 + 1) {
				fRec241_perm[j953] = fRec241_tmp[vsize + j953];
			}
			/* Recursive loop 697 */
			/* Pre code */
			for (int j966 = 0; j966 < 4; j966 = j966 + 1) {
				fRec245_tmp[j966] = fRec245_perm[j966];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec245[i] = fRec245[i - 1] + fConst39 * (2.0f * fYec175[i - 1] + square_polyblep_precalc(fZec268[i], 0.5f * fYec174[i - 1], 0.5f * fYec174[i - 2], fZec37[i]) - fRec245[i - 1]);
			}
			/* Post code */
			for (int j967 = 0; j967 < 4; j967 = j967 + 1) {
				fRec245_perm[j967] = fRec245_tmp[vsize + j967];
			}
			/* Recursive loop 698 */
			/* Pre code */
			for (int j972 = 0; j972 < 4; j972 = j972 + 1) {
				fRec249_tmp[j972] = fRec249_perm[j972];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec249[i] = fRec249[i - 1] + fConst39 * (2.0f * fYec176[i - 1] + square_polyblep_precalc(fZec239[i], 0.5f * fYec134[i - 1], 0.5f * fYec134[i - 2], fZec30[i]) - fRec249[i - 1]);
			}
			/* Post code */
			for (int j973 = 0; j973 < 4; j973 = j973 + 1) {
				fRec249_perm[j973] = fRec249_tmp[vsize + j973];
			}
			/* Recursive loop 699 */
			/* Pre code */
			for (int j978 = 0; j978 < 4; j978 = j978 + 1) {
				fRec251_tmp[j978] = fRec251_perm[j978];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec251[i] = fRec251[i - 1] + fConst39 * (2.0f * fYec177[i - 1] + square_polyblep_precalc(fZec242[i], 0.5f * fYec138[i - 1], 0.5f * fYec138[i - 2], fZec24[i]) - fRec251[i - 1]);
			}
			/* Post code */
			for (int j979 = 0; j979 < 4; j979 = j979 + 1) {
				fRec251_perm[j979] = fRec251_tmp[vsize + j979];
			}
			/* Recursive loop 700 */
			/* Pre code */
			for (int j984 = 0; j984 < 4; j984 = j984 + 1) {
				fRec253_tmp[j984] = fRec253_perm[j984];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec253[i] = fRec253[i - 1] + fConst39 * (2.0f * fYec178[i - 1] + square_polyblep_precalc(fZec245[i], 0.5f * fYec142[i - 1], 0.5f * fYec142[i - 2], fZec18[i]) - fRec253[i - 1]);
			}
			/* Post code */
			for (int j985 = 0; j985 < 4; j985 = j985 + 1) {
				fRec253_perm[j985] = fRec253_tmp[vsize + j985];
			}
			/* Recursive loop 701 */
			/* Pre code */
			for (int j990 = 0; j990 < 4; j990 = j990 + 1) {
				fRec255_tmp[j990] = fRec255_perm[j990];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec255[i] = fRec255[i - 1] + fConst39 * (2.0f * fYec179[i - 1] + square_polyblep_precalc(fZec248[i], 0.5f * fYec146[i - 1], 0.5f * fYec146[i - 2], fZec12[i]) - fRec255[i - 1]);
			}
			/* Post code */
			for (int j991 = 0; j991 < 4; j991 = j991 + 1) {
				fRec255_perm[j991] = fRec255_tmp[vsize + j991];
			}
			/* Recursive loop 702 */
			/* Pre code */
			for (int j996 = 0; j996 < 4; j996 = j996 + 1) {
				fRec257_tmp[j996] = fRec257_perm[j996];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec257[i] = fRec257[i - 1] + fConst41 * (2.0f * fYec180[i - 1] + square_polyblep_precalc(fZec251[i], 0.5f * fYec150[i - 1], 0.5f * fYec150[i - 2], fZec6[i]) - fRec257[i - 1]);
			}
			/* Post code */
			for (int j997 = 0; j997 < 4; j997 = j997 + 1) {
				fRec257_perm[j997] = fRec257_tmp[vsize + j997];
			}
			/* Recursive loop 703 */
			/* Pre code */
			for (int j1002 = 0; j1002 < 4; j1002 = j1002 + 1) {
				fRec259_tmp[j1002] = fRec259_perm[j1002];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec259[i] = fRec259[i - 1] + fConst41 * (2.0f * fYec181[i - 1] + square_polyblep_precalc(fZec254[i], 0.5f * fYec154[i - 1], 0.5f * fYec154[i - 2], fZec79[i]) - fRec259[i - 1]);
			}
			/* Post code */
			for (int j1003 = 0; j1003 < 4; j1003 = j1003 + 1) {
				fRec259_perm[j1003] = fRec259_tmp[vsize + j1003];
			}
			/* Recursive loop 704 */
			/* Pre code */
			for (int j1008 = 0; j1008 < 4; j1008 = j1008 + 1) {
				fRec261_tmp[j1008] = fRec261_perm[j1008];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec261[i] = fRec261[i - 1] + fConst41 * (2.0f * fYec182[i - 1] + square_polyblep_precalc(fZec257[i], 0.5f * fYec158[i - 1], 0.5f * fYec158[i - 2], fZec72[i]) - fRec261[i - 1]);
			}
			/* Post code */
			for (int j1009 = 0; j1009 < 4; j1009 = j1009 + 1) {
				fRec261_perm[j1009] = fRec261_tmp[vsize + j1009];
			}
			/* Recursive loop 705 */
			/* Pre code */
			for (int j1014 = 0; j1014 < 4; j1014 = j1014 + 1) {
				fRec263_tmp[j1014] = fRec263_perm[j1014];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec263[i] = fRec263[i - 1] + fConst41 * (2.0f * fYec183[i - 1] + square_polyblep_precalc(fZec259[i], 0.5f * fYec161[i - 1], 0.5f * fYec161[i - 2], fZec65[i]) - fRec263[i - 1]);
			}
			/* Post code */
			for (int j1015 = 0; j1015 < 4; j1015 = j1015 + 1) {
				fRec263_perm[j1015] = fRec263_tmp[vsize + j1015];
			}
			/* Recursive loop 706 */
			/* Pre code */
			for (int j1020 = 0; j1020 < 4; j1020 = j1020 + 1) {
				fRec265_tmp[j1020] = fRec265_perm[j1020];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec265[i] = fRec265[i - 1] + fConst42 * (2.0f * fYec184[i - 1] + square_polyblep_precalc(fZec261[i], 0.5f * fYec164[i - 1], 0.5f * fYec164[i - 2], fZec58[i]) - fRec265[i - 1]);
			}
			/* Post code */
			for (int j1021 = 0; j1021 < 4; j1021 = j1021 + 1) {
				fRec265_perm[j1021] = fRec265_tmp[vsize + j1021];
			}
			/* Recursive loop 707 */
			/* Pre code */
			for (int j1026 = 0; j1026 < 4; j1026 = j1026 + 1) {
				fRec267_tmp[j1026] = fRec267_perm[j1026];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec267[i] = fRec267[i - 1] + fConst42 * (2.0f * fYec185[i - 1] + square_polyblep_precalc(fZec263[i], 0.5f * fYec167[i - 1], 0.5f * fYec167[i - 2], fZec51[i]) - fRec267[i - 1]);
			}
			/* Post code */
			for (int j1027 = 0; j1027 < 4; j1027 = j1027 + 1) {
				fRec267_perm[j1027] = fRec267_tmp[vsize + j1027];
			}
			/* Recursive loop 708 */
			/* Pre code */
			for (int j1032 = 0; j1032 < 4; j1032 = j1032 + 1) {
				fRec269_tmp[j1032] = fRec269_perm[j1032];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec269[i] = fRec269[i - 1] + fConst42 * (2.0f * fYec186[i - 1] + square_polyblep_precalc(fZec265[i], 0.5f * fYec170[i - 1], 0.5f * fYec170[i - 2], fZec44[i]) - fRec269[i - 1]);
			}
			/* Post code */
			for (int j1033 = 0; j1033 < 4; j1033 = j1033 + 1) {
				fRec269_perm[j1033] = fRec269_tmp[vsize + j1033];
			}
			/* Recursive loop 709 */
			/* Pre code */
			for (int j1038 = 0; j1038 < 4; j1038 = j1038 + 1) {
				fRec271_tmp[j1038] = fRec271_perm[j1038];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec271[i] = fRec271[i - 1] + fConst42 * (2.0f * fYec187[i - 1] + square_polyblep_precalc(fZec267[i], 0.5f * fYec173[i - 1], 0.5f * fYec173[i - 2], fZec37[i]) - fRec271[i - 1]);
			}
			/* Post code */
			for (int j1039 = 0; j1039 < 4; j1039 = j1039 + 1) {
				fRec271_perm[j1039] = fRec271_tmp[vsize + j1039];
			}
			/* Vectorizable loop 710 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec315[i] = fRec272[i] * fZec158[i] + fRec274[i] * fZec157[i] + fRec276[i] * fZec156[i] + fRec278[i] * fZec155[i] + fRec280[i] * fZec154[i] + fRec282[i] * fZec153[i] + fRec284[i] * fZec152[i] + fRec158[i] * fZec151[i] + fRec154[i] * fZec150[i] + fRec150[i] * fZec149[i] + fRec146[i] * fZec148[i] + fRec142[i] * fZec147[i] + fRec171[i] * fZec146[i] + fRec168[i] * fZec145[i] + fRec165[i] * fZec144[i] + fRec162[i] * fZec143[i] + fRec187[i] * fZec142[i];
			}
			/* Vectorizable loop 711 */
			/* Pre code */
			for (int j582 = 0; j582 < 4; j582 = j582 + 1) {
				fYec96_tmp[j582] = fYec96_perm[j582];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec96[i] = fZec166[i] - fZec160[i];
			}
			/* Post code */
			for (int j583 = 0; j583 < 4; j583 = j583 + 1) {
				fYec96_perm[j583] = fYec96_tmp[vsize + j583];
			}
			/* Vectorizable loop 712 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec236[i] = fRec90[i] + fRec91[i] + fRec93[i] + fRec95[i] + fRec97[i] + fRec99[i] + fRec101[i] + fRec103[i] + fRec105[i] + fRec107[i] + fRec109[i] + fRec111[i] + fZec235[i];
			}
			/* Recursive loop 713 */
			/* Pre code */
			for (int j790 = 0; j790 < 4; j790 = j790 + 1) {
				fRec193_tmp[j790] = fRec193_perm[j790];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec193[i] = fConst38 * (fRec193[i - 1] + (fRec194[i] - fRec194[i - 1]));
			}
			/* Post code */
			for (int j791 = 0; j791 < 4; j791 = j791 + 1) {
				fRec193_perm[j791] = fRec193_tmp[vsize + j791];
			}
			/* Recursive loop 714 */
			/* Pre code */
			for (int j808 = 0; j808 < 4; j808 = j808 + 1) {
				fRec198_tmp[j808] = fRec198_perm[j808];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec198[i] = fConst38 * (fRec198[i - 1] + (fRec199[i] - fRec199[i - 1]));
			}
			/* Post code */
			for (int j809 = 0; j809 < 4; j809 = j809 + 1) {
				fRec198_perm[j809] = fRec198_tmp[vsize + j809];
			}
			/* Recursive loop 715 */
			/* Pre code */
			for (int j826 = 0; j826 < 4; j826 = j826 + 1) {
				fRec203_tmp[j826] = fRec203_perm[j826];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec203[i] = fConst38 * (fRec203[i - 1] + (fRec204[i] - fRec204[i - 1]));
			}
			/* Post code */
			for (int j827 = 0; j827 < 4; j827 = j827 + 1) {
				fRec203_perm[j827] = fRec203_tmp[vsize + j827];
			}
			/* Recursive loop 716 */
			/* Pre code */
			for (int j844 = 0; j844 < 4; j844 = j844 + 1) {
				fRec208_tmp[j844] = fRec208_perm[j844];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec208[i] = fConst38 * (fRec208[i - 1] + (fRec209[i] - fRec209[i - 1]));
			}
			/* Post code */
			for (int j845 = 0; j845 < 4; j845 = j845 + 1) {
				fRec208_perm[j845] = fRec208_tmp[vsize + j845];
			}
			/* Recursive loop 717 */
			/* Pre code */
			for (int j862 = 0; j862 < 4; j862 = j862 + 1) {
				fRec213_tmp[j862] = fRec213_perm[j862];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec213[i] = fConst38 * (fRec213[i - 1] + (fRec214[i] - fRec214[i - 1]));
			}
			/* Post code */
			for (int j863 = 0; j863 < 4; j863 = j863 + 1) {
				fRec213_perm[j863] = fRec213_tmp[vsize + j863];
			}
			/* Recursive loop 718 */
			/* Pre code */
			for (int j880 = 0; j880 < 4; j880 = j880 + 1) {
				fRec218_tmp[j880] = fRec218_perm[j880];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec218[i] = fConst38 * (fRec218[i - 1] + (fRec219[i] - fRec219[i - 1]));
			}
			/* Post code */
			for (int j881 = 0; j881 < 4; j881 = j881 + 1) {
				fRec218_perm[j881] = fRec218_tmp[vsize + j881];
			}
			/* Recursive loop 719 */
			/* Pre code */
			for (int j898 = 0; j898 < 4; j898 = j898 + 1) {
				fRec223_tmp[j898] = fRec223_perm[j898];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec223[i] = fConst38 * (fRec223[i - 1] + (fRec224[i] - fRec224[i - 1]));
			}
			/* Post code */
			for (int j899 = 0; j899 < 4; j899 = j899 + 1) {
				fRec223_perm[j899] = fRec223_tmp[vsize + j899];
			}
			/* Recursive loop 720 */
			/* Pre code */
			for (int j912 = 0; j912 < 4; j912 = j912 + 1) {
				fRec228_tmp[j912] = fRec228_perm[j912];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec228[i] = fConst38 * (fRec228[i - 1] + (fRec229[i] - fRec229[i - 1]));
			}
			/* Post code */
			for (int j913 = 0; j913 < 4; j913 = j913 + 1) {
				fRec228_perm[j913] = fRec228_tmp[vsize + j913];
			}
			/* Recursive loop 721 */
			/* Pre code */
			for (int j926 = 0; j926 < 4; j926 = j926 + 1) {
				fRec232_tmp[j926] = fRec232_perm[j926];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec232[i] = fConst38 * (fRec232[i - 1] + (fRec233[i] - fRec233[i - 1]));
			}
			/* Post code */
			for (int j927 = 0; j927 < 4; j927 = j927 + 1) {
				fRec232_perm[j927] = fRec232_tmp[vsize + j927];
			}
			/* Recursive loop 722 */
			/* Pre code */
			for (int j940 = 0; j940 < 4; j940 = j940 + 1) {
				fRec236_tmp[j940] = fRec236_perm[j940];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec236[i] = fConst38 * (fRec236[i - 1] + (fRec237[i] - fRec237[i - 1]));
			}
			/* Post code */
			for (int j941 = 0; j941 < 4; j941 = j941 + 1) {
				fRec236_perm[j941] = fRec236_tmp[vsize + j941];
			}
			/* Recursive loop 723 */
			/* Pre code */
			for (int j954 = 0; j954 < 4; j954 = j954 + 1) {
				fRec240_tmp[j954] = fRec240_perm[j954];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec240[i] = fConst38 * (fRec240[i - 1] + (fRec241[i] - fRec241[i - 1]));
			}
			/* Post code */
			for (int j955 = 0; j955 < 4; j955 = j955 + 1) {
				fRec240_perm[j955] = fRec240_tmp[vsize + j955];
			}
			/* Recursive loop 724 */
			/* Pre code */
			for (int j968 = 0; j968 < 4; j968 = j968 + 1) {
				fRec244_tmp[j968] = fRec244_perm[j968];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec244[i] = fConst38 * (fRec244[i - 1] + (fRec245[i] - fRec245[i - 1]));
			}
			/* Post code */
			for (int j969 = 0; j969 < 4; j969 = j969 + 1) {
				fRec244_perm[j969] = fRec244_tmp[vsize + j969];
			}
			/* Recursive loop 725 */
			/* Pre code */
			for (int j974 = 0; j974 < 4; j974 = j974 + 1) {
				fRec248_tmp[j974] = fRec248_perm[j974];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec248[i] = fConst40 * (fRec248[i - 1] + (fRec249[i] - fRec249[i - 1]));
			}
			/* Post code */
			for (int j975 = 0; j975 < 4; j975 = j975 + 1) {
				fRec248_perm[j975] = fRec248_tmp[vsize + j975];
			}
			/* Recursive loop 726 */
			/* Pre code */
			for (int j980 = 0; j980 < 4; j980 = j980 + 1) {
				fRec250_tmp[j980] = fRec250_perm[j980];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec250[i] = fConst40 * (fRec250[i - 1] + (fRec251[i] - fRec251[i - 1]));
			}
			/* Post code */
			for (int j981 = 0; j981 < 4; j981 = j981 + 1) {
				fRec250_perm[j981] = fRec250_tmp[vsize + j981];
			}
			/* Recursive loop 727 */
			/* Pre code */
			for (int j986 = 0; j986 < 4; j986 = j986 + 1) {
				fRec252_tmp[j986] = fRec252_perm[j986];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec252[i] = fConst40 * (fRec252[i - 1] + (fRec253[i] - fRec253[i - 1]));
			}
			/* Post code */
			for (int j987 = 0; j987 < 4; j987 = j987 + 1) {
				fRec252_perm[j987] = fRec252_tmp[vsize + j987];
			}
			/* Recursive loop 728 */
			/* Pre code */
			for (int j992 = 0; j992 < 4; j992 = j992 + 1) {
				fRec254_tmp[j992] = fRec254_perm[j992];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec254[i] = fConst40 * (fRec254[i - 1] + (fRec255[i] - fRec255[i - 1]));
			}
			/* Post code */
			for (int j993 = 0; j993 < 4; j993 = j993 + 1) {
				fRec254_perm[j993] = fRec254_tmp[vsize + j993];
			}
			/* Recursive loop 729 */
			/* Pre code */
			for (int j998 = 0; j998 < 4; j998 = j998 + 1) {
				fRec256_tmp[j998] = fRec256_perm[j998];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec256[i] = fConst40 * (fRec256[i - 1] + (fRec257[i] - fRec257[i - 1]));
			}
			/* Post code */
			for (int j999 = 0; j999 < 4; j999 = j999 + 1) {
				fRec256_perm[j999] = fRec256_tmp[vsize + j999];
			}
			/* Recursive loop 730 */
			/* Pre code */
			for (int j1004 = 0; j1004 < 4; j1004 = j1004 + 1) {
				fRec258_tmp[j1004] = fRec258_perm[j1004];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec258[i] = fConst40 * (fRec258[i - 1] + (fRec259[i] - fRec259[i - 1]));
			}
			/* Post code */
			for (int j1005 = 0; j1005 < 4; j1005 = j1005 + 1) {
				fRec258_perm[j1005] = fRec258_tmp[vsize + j1005];
			}
			/* Recursive loop 731 */
			/* Pre code */
			for (int j1010 = 0; j1010 < 4; j1010 = j1010 + 1) {
				fRec260_tmp[j1010] = fRec260_perm[j1010];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec260[i] = fConst40 * (fRec260[i - 1] + (fRec261[i] - fRec261[i - 1]));
			}
			/* Post code */
			for (int j1011 = 0; j1011 < 4; j1011 = j1011 + 1) {
				fRec260_perm[j1011] = fRec260_tmp[vsize + j1011];
			}
			/* Recursive loop 732 */
			/* Pre code */
			for (int j1016 = 0; j1016 < 4; j1016 = j1016 + 1) {
				fRec262_tmp[j1016] = fRec262_perm[j1016];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec262[i] = fConst40 * (fRec262[i - 1] + (fRec263[i] - fRec263[i - 1]));
			}
			/* Post code */
			for (int j1017 = 0; j1017 < 4; j1017 = j1017 + 1) {
				fRec262_perm[j1017] = fRec262_tmp[vsize + j1017];
			}
			/* Recursive loop 733 */
			/* Pre code */
			for (int j1022 = 0; j1022 < 4; j1022 = j1022 + 1) {
				fRec264_tmp[j1022] = fRec264_perm[j1022];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec264[i] = fConst40 * (fRec264[i - 1] + (fRec265[i] - fRec265[i - 1]));
			}
			/* Post code */
			for (int j1023 = 0; j1023 < 4; j1023 = j1023 + 1) {
				fRec264_perm[j1023] = fRec264_tmp[vsize + j1023];
			}
			/* Recursive loop 734 */
			/* Pre code */
			for (int j1028 = 0; j1028 < 4; j1028 = j1028 + 1) {
				fRec266_tmp[j1028] = fRec266_perm[j1028];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec266[i] = fConst40 * (fRec266[i - 1] + (fRec267[i] - fRec267[i - 1]));
			}
			/* Post code */
			for (int j1029 = 0; j1029 < 4; j1029 = j1029 + 1) {
				fRec266_perm[j1029] = fRec266_tmp[vsize + j1029];
			}
			/* Recursive loop 735 */
			/* Pre code */
			for (int j1034 = 0; j1034 < 4; j1034 = j1034 + 1) {
				fRec268_tmp[j1034] = fRec268_perm[j1034];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec268[i] = fConst40 * (fRec268[i - 1] + (fRec269[i] - fRec269[i - 1]));
			}
			/* Post code */
			for (int j1035 = 0; j1035 < 4; j1035 = j1035 + 1) {
				fRec268_perm[j1035] = fRec268_tmp[vsize + j1035];
			}
			/* Recursive loop 736 */
			/* Pre code */
			for (int j1040 = 0; j1040 < 4; j1040 = j1040 + 1) {
				fRec270_tmp[j1040] = fRec270_perm[j1040];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec270[i] = fConst40 * (fRec270[i - 1] + (fRec271[i] - fRec271[i - 1]));
			}
			/* Post code */
			for (int j1041 = 0; j1041 < 4; j1041 = j1041 + 1) {
				fRec270_perm[j1041] = fRec270_tmp[vsize + j1041];
			}
			/* Vectorizable loop 737 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec272[i] = fRec91[i] * fZec87[i];
			}
			/* Vectorizable loop 738 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec273[i] = fRec93[i] * fZec89[i];
			}
			/* Vectorizable loop 739 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec274[i] = fRec95[i] * fZec91[i];
			}
			/* Vectorizable loop 740 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec275[i] = fRec97[i] * fZec93[i];
			}
			/* Vectorizable loop 741 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec276[i] = fRec99[i] * fZec95[i];
			}
			/* Vectorizable loop 742 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec277[i] = fRec101[i] * fZec97[i];
			}
			/* Vectorizable loop 743 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec278[i] = fRec103[i] * fZec99[i];
			}
			/* Vectorizable loop 744 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec280[i] = fRec107[i] * fZec103[i];
			}
			/* Vectorizable loop 745 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec279[i] = fRec105[i] * fZec101[i];
			}
			/* Vectorizable loop 746 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec281[i] = fRec109[i] * fZec105[i];
			}
			/* Vectorizable loop 747 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec282[i] = fRec111[i] * fZec107[i];
			}
			/* Vectorizable loop 748 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec283[i] = fRec113[i] * fZec109[i];
			}
			/* Vectorizable loop 749 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec284[i] = fRec115[i] * fZec111[i];
			}
			/* Vectorizable loop 750 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec285[i] = fRec117[i] * fZec112[i];
			}
			/* Vectorizable loop 751 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec287[i] = fRec121[i] * fZec114[i];
			}
			/* Vectorizable loop 752 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec286[i] = fRec119[i] * fZec113[i];
			}
			/* Vectorizable loop 753 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec288[i] = fRec123[i] * fZec115[i];
			}
			/* Vectorizable loop 754 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec289[i] = fRec127[i] * fZec116[i];
			}
			/* Vectorizable loop 755 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec290[i] = fRec125[i] * fZec117[i];
			}
			/* Vectorizable loop 756 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec291[i] = fRec7[i] * fZec118[i];
			}
			/* Vectorizable loop 757 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec292[i] = fRec13[i] * fZec119[i];
			}
			/* Vectorizable loop 758 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec293[i] = fRec18[i] * fZec120[i];
			}
			/* Vectorizable loop 759 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec294[i] = fRec23[i] * fZec121[i];
			}
			/* Vectorizable loop 760 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec295[i] = fRec28[i] * fZec122[i];
			}
			/* Vectorizable loop 761 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec296[i] = fRec33[i] * fZec123[i];
			}
			/* Vectorizable loop 762 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec297[i] = fRec39[i] * fZec124[i];
			}
			/* Vectorizable loop 763 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec298[i] = fRec45[i] * fZec125[i];
			}
			/* Vectorizable loop 764 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec299[i] = fRec51[i] * fZec126[i];
			}
			/* Vectorizable loop 765 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec300[i] = fRec57[i] * fZec127[i];
			}
			/* Vectorizable loop 766 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec301[i] = fRec63[i] * fZec128[i];
			}
			/* Vectorizable loop 767 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec302[i] = fRec69[i] * fZec129[i];
			}
			/* Vectorizable loop 768 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec303[i] = fRec75[i] * fZec130[i];
			}
			/* Vectorizable loop 769 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec304[i] = fRec78[i] * fZec131[i];
			}
			/* Vectorizable loop 770 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec305[i] = fRec81[i] * fZec132[i];
			}
			/* Vectorizable loop 771 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec306[i] = fRec87[i] * fZec133[i];
			}
			/* Vectorizable loop 772 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec307[i] = fRec84[i] * fZec134[i];
			}
			/* Vectorizable loop 773 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec308[i] = fRec174[i] * fZec135[i];
			}
			/* Vectorizable loop 774 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec309[i] = fRec176[i] * fZec136[i];
			}
			/* Vectorizable loop 775 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec310[i] = fRec178[i] * fZec137[i];
			}
			/* Vectorizable loop 776 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec311[i] = fRec180[i] * fZec138[i];
			}
			/* Vectorizable loop 777 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec312[i] = fRec182[i] * fZec139[i];
			}
			/* Vectorizable loop 778 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec313[i] = fRec184[i] * fZec140[i];
			}
			/* Vectorizable loop 779 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec314[i] = fRec190[i] * fZec141[i];
			}
			/* Vectorizable loop 780 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec316[i] = fSlow80 * fZec315[i];
			}
			/* Vectorizable loop 781 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec319[i] = fRec91[i] * fZec111[i];
			}
			/* Vectorizable loop 782 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec320[i] = fRec93[i] * fZec112[i];
			}
			/* Vectorizable loop 783 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec321[i] = fRec95[i] * fZec113[i];
			}
			/* Vectorizable loop 784 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec322[i] = fRec97[i] * fZec114[i];
			}
			/* Vectorizable loop 785 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec323[i] = fRec99[i] * fZec115[i];
			}
			/* Vectorizable loop 786 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec324[i] = fRec101[i] * fZec116[i];
			}
			/* Vectorizable loop 787 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec325[i] = fRec103[i] * fZec117[i];
			}
			/* Vectorizable loop 788 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec326[i] = fRec105[i] * fZec118[i];
			}
			/* Vectorizable loop 789 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec327[i] = fRec107[i] * fZec119[i];
			}
			/* Vectorizable loop 790 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec328[i] = fRec109[i] * fZec120[i];
			}
			/* Vectorizable loop 791 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec329[i] = fRec111[i] * fZec121[i];
			}
			/* Vectorizable loop 792 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec330[i] = fRec113[i] * fZec122[i];
			}
			/* Vectorizable loop 793 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec331[i] = fRec115[i] * fZec123[i];
			}
			/* Vectorizable loop 794 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec332[i] = fRec117[i] * fZec124[i];
			}
			/* Vectorizable loop 795 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec333[i] = fRec119[i] * fZec125[i];
			}
			/* Vectorizable loop 796 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec334[i] = fRec121[i] * fZec126[i];
			}
			/* Vectorizable loop 797 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec335[i] = fRec123[i] * fZec127[i];
			}
			/* Vectorizable loop 798 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec336[i] = fRec127[i] * fZec128[i];
			}
			/* Vectorizable loop 799 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec337[i] = fRec125[i] * fZec129[i];
			}
			/* Vectorizable loop 800 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec338[i] = fRec7[i] * fZec130[i];
			}
			/* Vectorizable loop 801 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec339[i] = fRec13[i] * fZec131[i];
			}
			/* Vectorizable loop 802 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec340[i] = fRec18[i] * fZec132[i];
			}
			/* Vectorizable loop 803 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec341[i] = fRec23[i] * fZec133[i];
			}
			/* Vectorizable loop 804 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec342[i] = fRec28[i] * fZec134[i];
			}
			/* Vectorizable loop 805 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec343[i] = fRec33[i] * fZec135[i];
			}
			/* Vectorizable loop 806 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec344[i] = fRec39[i] * fZec136[i];
			}
			/* Vectorizable loop 807 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec345[i] = fRec45[i] * fZec137[i];
			}
			/* Vectorizable loop 808 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec346[i] = fRec51[i] * fZec138[i];
			}
			/* Vectorizable loop 809 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec347[i] = fRec57[i] * fZec139[i];
			}
			/* Vectorizable loop 810 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec348[i] = fRec63[i] * fZec140[i];
			}
			/* Vectorizable loop 811 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec349[i] = fRec69[i] * fZec141[i];
			}
			/* Vectorizable loop 812 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec350[i] = fSlow80 * (fRec171[i] * fZec158[i] + fRec168[i] * fZec157[i] + fRec165[i] * fZec156[i] + fRec162[i] * fZec155[i] + fRec187[i] * fZec154[i] + fRec190[i] * fZec153[i] + fRec184[i] * fZec152[i] + fRec182[i] * fZec151[i] + fRec180[i] * fZec150[i] + fRec178[i] * fZec149[i] + fRec176[i] * fZec148[i] + fRec174[i] * fZec147[i] + fRec84[i] * fZec146[i] + fRec87[i] * fZec145[i] + fRec81[i] * fZec144[i] + fRec78[i] * fZec143[i] + fRec75[i] * fZec142[i]);
			}
			/* Recursive loop 813 */
			/* Pre code */
			for (int j584 = 0; j584 < 4; j584 = j584 + 1) {
				fRec6_tmp[j584] = fRec6_perm[j584];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec6[i] = fConst26 * (fRec6[i - 1] + (fZec166[i] - (fZec160[i] + fYec96[i - 1])));
			}
			/* Post code */
			for (int j585 = 0; j585 < 4; j585 = j585 + 1) {
				fRec6_perm[j585] = fRec6_tmp[vsize + j585];
			}
			/* Vectorizable loop 814 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec269[i] = fRec193[i] * fZec158[i] + fRec198[i] * fZec157[i] + fRec203[i] * fZec156[i] + fRec208[i] * fZec155[i] + fRec213[i] * fZec154[i] + fRec218[i] * fZec153[i] + fRec223[i] * fZec152[i] + fRec228[i] * fZec151[i] + fRec232[i] * fZec150[i] + fRec236[i] * fZec149[i] + fRec240[i] * fZec148[i] + fRec244[i] * fZec147[i] + fRec248[i] * fZec146[i] + fRec250[i] * fZec145[i] + fRec252[i] * fZec144[i] + fRec254[i] * fZec143[i] + fRec256[i] * fZec142[i];
			}
			/* Vectorizable loop 815 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec317[i] = 0.25f * (fZec86[i] + fZec316[i] + fZec314[i] + fZec313[i] + fZec312[i] + fZec311[i] + fZec310[i] + fZec309[i] + fZec308[i] + fZec307[i] + fZec306[i] + fZec305[i] + fZec304[i] + fZec303[i] + fZec302[i] + fZec301[i] + fZec300[i] + fZec299[i] + fZec298[i] + fZec297[i] + fZec296[i] + fZec295[i] + fZec294[i] + fZec293[i] + fZec292[i] + fZec291[i] + fZec290[i] + fZec289[i] + fZec288[i] + fZec287[i] + fZec286[i] + fZec285[i] + fZec284[i] + fZec283[i] + fZec282[i] + fZec281[i] + fZec280[i] + fZec279[i] + fZec278[i] + fZec277[i] + fZec276[i] + fZec275[i] + fZec274[i] + fZec273[i] + fZec272[i]);
			}
			/* Vectorizable loop 816 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec318[i] = fSlow80 * (fRec284[i] + fRec282[i] + fRec280[i] + fRec278[i] + fRec276[i] + fRec274[i] + fRec272[i] + fRec142[i] + fRec146[i] + fRec150[i] + fRec154[i] + fRec158[i] + fRec162[i] + fRec165[i] + fRec168[i] + fRec187[i] + fRec171[i]) + fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec190[i] + fZec236[i];
			}
			/* Vectorizable loop 817 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec351[i] = 0.25f * (fZec86[i] + fZec88[i] + fZec90[i] + fZec92[i] + fZec94[i] + fZec96[i] + fZec98[i] + fZec100[i] + fZec102[i] + fZec104[i] + fZec106[i] + fZec108[i] + fZec110[i] + fZec350[i] + fZec349[i] + fZec348[i] + fZec347[i] + fZec346[i] + fZec345[i] + fZec344[i] + fZec343[i] + fZec342[i] + fZec341[i] + fZec340[i] + fZec339[i] + fZec338[i] + fZec337[i] + fZec336[i] + fZec335[i] + fZec334[i] + fZec333[i] + fZec332[i] + fZec331[i] + fZec330[i] + fZec329[i] + fZec328[i] + fZec327[i] + fZec326[i] + fZec325[i] + fZec324[i] + fZec323[i] + fZec322[i] + fZec321[i] + fZec320[i] + fZec319[i]);
			}
			/* Vectorizable loop 818 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec352[i] = fSlow80 * (fRec162[i] + fRec165[i] + fRec168[i] + fRec171[i] + fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec190[i] + fRec187[i] + fZec162[i]) + fRec129[i] + fRec130[i] + fRec131[i] + fRec132[i] + fRec133[i] + fRec134[i] + fRec135[i] + fRec136[i] + fRec137[i] + fRec138[i] + fRec139[i] + 2.0f * fRec90[i] + fRec91[i] + fRec93[i] + fRec95[i] + fRec97[i] + fRec99[i] + fRec101[i] + fRec103[i] + fRec105[i] + fRec107[i] + fRec109[i] + fRec111[i] + fRec113[i] + fRec115[i] + fRec117[i] + fRec119[i] + fRec121[i] + fRec123[i] + fRec127[i] + fRec125[i] + fRec7[i] + fRec13[i] + fRec18[i] + fRec23[i] + fRec28[i] + fRec33[i] + fRec39[i] + fRec45[i] + fRec51[i] + fRec57[i] + fRec69[i] + fRec63[i];
			}
			/* Vectorizable loop 819 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec363[i] = fRec248[i] * fZec158[i] + fRec250[i] * fZec157[i] + fRec252[i] * fZec156[i] + fRec254[i] * fZec155[i] + fRec256[i] * fZec154[i] + fRec258[i] * fZec153[i] + fRec260[i] * fZec152[i] + fRec262[i] * fZec151[i] + fRec264[i] * fZec150[i] + fRec266[i] * fZec149[i] + fRec268[i] * fZec148[i] + fRec270[i] * fZec147[i] + fRec272[i] * fZec146[i] + fRec274[i] * fZec145[i] + fRec276[i] * fZec144[i] + fRec278[i] * fZec143[i] + fRec280[i] * fZec142[i];
			}
			/* Recursive loop 820 */
			/* Pre code */
			for (int j586 = 0; j586 < 4; j586 = j586 + 1) {
				iRec140_tmp[j586] = iRec140_perm[j586];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iRec140[i] = 1103515245 * iRec140[i - 1] + 12345;
			}
			/* Post code */
			for (int j587 = 0; j587 < 4; j587 = j587 + 1) {
				iRec140_perm[j587] = iRec140_tmp[vsize + j587];
			}
			/* Vectorizable loop 821 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec168[i] = 0.002f * fSlow81 * fRec6[i];
			}
			/* Vectorizable loop 822 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec270[i] = 0.41975f * (fSlow80 * fZec269[i] + fRec258[i] * fZec141[i] + fRec260[i] * fZec140[i] + fRec262[i] * fZec139[i] + fRec264[i] * fZec138[i] + fRec266[i] * fZec137[i] + fRec268[i] * fZec136[i] + fRec270[i] * fZec135[i] + fRec272[i] * fZec134[i] + fRec274[i] * fZec133[i] + fRec276[i] * fZec132[i] + fRec278[i] * fZec131[i] + fRec280[i] * fZec130[i] + fRec282[i] * fZec129[i] + fRec284[i] * fZec128[i] + fRec158[i] * fZec127[i] + fRec154[i] * fZec126[i] + fRec150[i] * fZec125[i] + fRec146[i] * fZec124[i] + fRec142[i] * fZec123[i] + fRec171[i] * fZec122[i] + fRec168[i] * fZec121[i] + fRec165[i] * fZec120[i] + fRec162[i] * fZec119[i] + fRec187[i] * fZec118[i] + fRec190[i] * fZec117[i] + fRec184[i] * fZec116[i] + fRec182[i] * fZec115[i] + fRec180[i] * fZec114[i] + fRec178[i] * fZec113[i] + fRec176[i] * fZec112[i] + fRec174[i] * fZec111[i] + fRec84[i] * fZec109[i] + fRec87[i] * fZec107[i] + fRec81[i] * fZec105[i] + fRec78[i] * fZec103[i] + fRec75[i] * fZec101[i] + fRec69[i] * fZec99[i] + fRec63[i] * fZec97[i] + fRec57[i] * fZec95[i] + fRec51[i] * fZec93[i] + fRec45[i] * fZec91[i] + fRec39[i] * fZec89[i] + fRec33[i] * fZec87[i] + fRec28[i] * fZec85[i]);
			}
			/* Vectorizable loop 823 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec271[i] = 1.679f * (fSlow80 * (fRec244[i] + fRec240[i] + fRec236[i] + fRec232[i] + fRec228[i] + fRec223[i] + fRec218[i] + fRec213[i] + fRec208[i] + fRec203[i] + fRec198[i] + fRec193[i] + fRec256[i] + fRec254[i] + fRec252[i] + fRec248[i] + fRec250[i]) + fRec270[i] + fRec268[i] + fRec266[i] + fRec264[i] + fRec262[i] + fRec260[i] + fRec258[i] + fRec284[i] + fRec282[i] + fRec280[i] + fRec278[i] + fRec276[i] + fRec274[i] + fRec272[i] + fRec142[i] + fRec146[i] + fRec150[i] + fRec154[i] + fRec158[i] + fRec162[i] + fRec165[i] + fRec168[i] + fRec171[i] + fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec190[i] + fRec187[i] + fZec164[i]);
			}
			/* Vectorizable loop 824 */
			/* Pre code */
			for (int j1088 = 0; j1088 < 4; j1088 = j1088 + 1) {
				fYec196_tmp[j1088] = fYec196_perm[j1088];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec196[i] = fZec318[i] - fZec317[i];
			}
			/* Post code */
			for (int j1089 = 0; j1089 < 4; j1089 = j1089 + 1) {
				fYec196_perm[j1089] = fYec196_tmp[vsize + j1089];
			}
			/* Vectorizable loop 825 */
			/* Pre code */
			for (int j1092 = 0; j1092 < 4; j1092 = j1092 + 1) {
				fYec197_tmp[j1092] = fYec197_perm[j1092];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec197[i] = fZec352[i] - fZec351[i];
			}
			/* Post code */
			for (int j1093 = 0; j1093 < 4; j1093 = j1093 + 1) {
				fYec197_perm[j1093] = fYec197_tmp[vsize + j1093];
			}
			/* Vectorizable loop 826 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec364[i] = 0.25f * (fSlow80 * fZec363[i] + fRec282[i] * fZec141[i] + fRec284[i] * fZec140[i] + fRec158[i] * fZec139[i] + fRec154[i] * fZec138[i] + fRec150[i] * fZec137[i] + fRec146[i] * fZec136[i] + fRec142[i] * fZec135[i] + fRec171[i] * fZec134[i] + fRec168[i] * fZec133[i] + fRec165[i] * fZec132[i] + fRec162[i] * fZec131[i] + fRec187[i] * fZec130[i] + fRec190[i] * fZec129[i] + fRec184[i] * fZec128[i] + fRec182[i] * fZec127[i] + fRec180[i] * fZec126[i] + fRec178[i] * fZec125[i] + fRec176[i] * fZec124[i] + fRec174[i] * fZec123[i] + fRec84[i] * fZec122[i] + fRec87[i] * fZec121[i] + fRec81[i] * fZec120[i] + fRec78[i] * fZec119[i] + fRec75[i] * fZec118[i] + fRec69[i] * fZec117[i] + fRec63[i] * fZec116[i] + fRec57[i] * fZec115[i] + fRec51[i] * fZec114[i] + fRec45[i] * fZec113[i] + fRec39[i] * fZec112[i] + fRec33[i] * fZec111[i] + fRec28[i] * fZec109[i] + fRec23[i] * fZec107[i] + fRec18[i] * fZec105[i] + fRec13[i] * fZec103[i] + fRec7[i] * fZec101[i] + fRec125[i] * fZec99[i] + fRec127[i] * fZec97[i] + fRec123[i] * fZec95[i] + fRec121[i] * fZec93[i] + fRec119[i] * fZec91[i] + fRec117[i] * fZec89[i] + fRec115[i] * fZec87[i] + fRec113[i] * fZec85[i]);
			}
			/* Vectorizable loop 827 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec365[i] = fSlow80 * (fRec270[i] + fRec268[i] + fRec266[i] + fRec264[i] + fRec262[i] + fRec260[i] + fRec258[i] + fRec256[i] + fRec254[i] + fRec252[i] + fRec250[i] + fRec248[i] + fRec280[i] + fRec278[i] + fRec276[i] + fRec272[i] + fRec274[i]) + fRec284[i] + fRec282[i] + fRec142[i] + fRec146[i] + fRec150[i] + fRec154[i] + fRec158[i] + fRec162[i] + fRec165[i] + fRec168[i] + fRec171[i] + fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec190[i] + fRec187[i] + fZec235[i];
			}
			/* Vectorizable loop 828 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec169[i] = mydsp_faustpower2_f(std::min<float>(1.0f, std::max<float>(-1.0f, fZec168[i] + fZec160[i] + 4.656613e-16f * float(iRec140[i]))));
			}
			/* Vectorizable loop 829 */
			/* Pre code */
			for (int j1084 = 0; j1084 < 4; j1084 = j1084 + 1) {
				fYec195_tmp[j1084] = fYec195_perm[j1084];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec195[i] = fZec271[i] - fZec270[i];
			}
			/* Post code */
			for (int j1085 = 0; j1085 < 4; j1085 = j1085 + 1) {
				fYec195_perm[j1085] = fYec195_tmp[vsize + j1085];
			}
			/* Recursive loop 830 */
			/* Pre code */
			for (int j1090 = 0; j1090 < 4; j1090 = j1090 + 1) {
				fRec287_tmp[j1090] = fRec287_perm[j1090];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec287[i] = fConst26 * (fRec287[i - 1] + (fZec318[i] - (fZec317[i] + fYec196[i - 1])));
			}
			/* Post code */
			for (int j1091 = 0; j1091 < 4; j1091 = j1091 + 1) {
				fRec287_perm[j1091] = fRec287_tmp[vsize + j1091];
			}
			/* Recursive loop 831 */
			/* Pre code */
			for (int j1094 = 0; j1094 < 4; j1094 = j1094 + 1) {
				fRec288_tmp[j1094] = fRec288_perm[j1094];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec288[i] = fConst26 * (fRec288[i - 1] + (fZec352[i] - (fZec351[i] + fYec197[i - 1])));
			}
			/* Post code */
			for (int j1095 = 0; j1095 < 4; j1095 = j1095 + 1) {
				fRec288_perm[j1095] = fRec288_tmp[vsize + j1095];
			}
			/* Vectorizable loop 832 */
			/* Pre code */
			for (int j1100 = 0; j1100 < 4; j1100 = j1100 + 1) {
				fYec199_tmp[j1100] = fYec199_perm[j1100];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec199[i] = fZec365[i] - fZec364[i];
			}
			/* Post code */
			for (int j1101 = 0; j1101 < 4; j1101 = j1101 + 1) {
				fYec199_perm[j1101] = fYec199_tmp[vsize + j1101];
			}
			/* Recursive loop 833 */
			/* Pre code */
			for (int j588 = 0; j588 < 4; j588 = j588 + 1) {
				fRec3_tmp[j588] = fRec3_perm[j588];
			}
			for (int j590 = 0; j590 < 4; j590 = j590 + 1) {
				iRec4_tmp[j590] = iRec4_perm[j590];
			}
			for (int j592 = 0; j592 < 4; j592 = j592 + 1) {
				fRec5_tmp[j592] = fRec5_perm[j592];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				iZec167[i] = iRec4[i - 1] < iConst27;
				fRec3[i] = ((iZec167[i]) ? fZec169[i] + fRec3[i - 1] : fZec169[i]);
				iRec4[i] = ((iZec167[i]) ? iRec4[i - 1] + 1 : 1);
				fRec5[i] = ((iZec167[i]) ? fRec5[i - 1] : fRec3[i - 1]);
			}
			/* Post code */
			for (int j589 = 0; j589 < 4; j589 = j589 + 1) {
				fRec3_perm[j589] = fRec3_tmp[vsize + j589];
			}
			for (int j591 = 0; j591 < 4; j591 = j591 + 1) {
				iRec4_perm[j591] = iRec4_tmp[vsize + j591];
			}
			for (int j593 = 0; j593 < 4; j593 = j593 + 1) {
				fRec5_perm[j593] = fRec5_tmp[vsize + j593];
			}
			/* Recursive loop 834 */
			/* Pre code */
			for (int j1086 = 0; j1086 < 4; j1086 = j1086 + 1) {
				fRec286_tmp[j1086] = fRec286_perm[j1086];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec286[i] = fConst26 * (fRec286[i - 1] + (fZec271[i] - (fZec270[i] + fYec195[i - 1])));
			}
			/* Post code */
			for (int j1087 = 0; j1087 < 4; j1087 = j1087 + 1) {
				fRec286_perm[j1087] = fRec286_tmp[vsize + j1087];
			}
			/* Recursive loop 835 */
			/* Pre code */
			for (int j1102 = 0; j1102 < 4; j1102 = j1102 + 1) {
				fRec290_tmp[j1102] = fRec290_perm[j1102];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec290[i] = fConst26 * (fRec290[i - 1] + (fZec365[i] - (fZec364[i] + fYec199[i - 1])));
			}
			/* Post code */
			for (int j1103 = 0; j1103 < 4; j1103 = j1103 + 1) {
				fRec290_perm[j1103] = fRec290_tmp[vsize + j1103];
			}
			/* Vectorizable loop 836 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec366[i] = 0.002f * fSlow81 * fRec288[i];
			}
			/* Vectorizable loop 837 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec368[i] = 0.002f * fSlow81 * fRec287[i];
			}
			/* Vectorizable loop 838 */
			/* Pre code */
			for (int j594 = 0; j594 < 4; j594 = j594 + 1) {
				fYec97_tmp[j594] = fYec97_perm[j594];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec97[i] = std::log10(std::sqrt(fConst28 * fRec5[i]));
			}
			/* Post code */
			for (int j595 = 0; j595 < 4; j595 = j595 + 1) {
				fYec97_perm[j595] = fYec97_tmp[vsize + j595];
			}
			/* Vectorizable loop 839 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec189[i] = fRec133[i] * fZec85[i];
			}
			/* Vectorizable loop 840 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec190[i] = fRec134[i] * fZec87[i];
			}
			/* Vectorizable loop 841 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec192[i] = fRec136[i] * fZec91[i];
			}
			/* Vectorizable loop 842 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec191[i] = fRec135[i] * fZec89[i];
			}
			/* Vectorizable loop 843 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec193[i] = fRec137[i] * fZec93[i];
			}
			/* Vectorizable loop 844 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec194[i] = fRec138[i] * fZec95[i];
			}
			/* Vectorizable loop 845 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec195[i] = fRec139[i] * fZec97[i];
			}
			/* Vectorizable loop 846 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec196[i] = fRec90[i] * fZec99[i];
			}
			/* Vectorizable loop 847 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec197[i] = fRec91[i] * fZec101[i];
			}
			/* Vectorizable loop 848 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec199[i] = fRec95[i] * fZec105[i];
			}
			/* Vectorizable loop 849 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec198[i] = fRec93[i] * fZec103[i];
			}
			/* Vectorizable loop 850 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec200[i] = fRec97[i] * fZec107[i];
			}
			/* Vectorizable loop 851 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec201[i] = fRec99[i] * fZec109[i];
			}
			/* Vectorizable loop 852 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec202[i] = fRec101[i] * fZec111[i];
			}
			/* Vectorizable loop 853 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec203[i] = fRec103[i] * fZec112[i];
			}
			/* Vectorizable loop 854 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec204[i] = fRec105[i] * fZec113[i];
			}
			/* Vectorizable loop 855 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec205[i] = fRec107[i] * fZec114[i];
			}
			/* Vectorizable loop 856 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec206[i] = fRec109[i] * fZec115[i];
			}
			/* Vectorizable loop 857 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec207[i] = fRec111[i] * fZec116[i];
			}
			/* Vectorizable loop 858 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec208[i] = fRec113[i] * fZec117[i];
			}
			/* Vectorizable loop 859 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec209[i] = fRec115[i] * fZec118[i];
			}
			/* Vectorizable loop 860 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec210[i] = fRec117[i] * fZec119[i];
			}
			/* Vectorizable loop 861 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec211[i] = fRec119[i] * fZec120[i];
			}
			/* Vectorizable loop 862 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec212[i] = fRec121[i] * fZec121[i];
			}
			/* Vectorizable loop 863 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec213[i] = fRec123[i] * fZec122[i];
			}
			/* Vectorizable loop 864 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec214[i] = fRec127[i] * fZec123[i];
			}
			/* Vectorizable loop 865 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec215[i] = fRec125[i] * fZec124[i];
			}
			/* Vectorizable loop 866 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec216[i] = fRec7[i] * fZec125[i];
			}
			/* Vectorizable loop 867 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec217[i] = fRec13[i] * fZec126[i];
			}
			/* Vectorizable loop 868 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec218[i] = fRec18[i] * fZec127[i];
			}
			/* Vectorizable loop 869 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec219[i] = fRec23[i] * fZec128[i];
			}
			/* Vectorizable loop 870 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec220[i] = fRec28[i] * fZec129[i];
			}
			/* Vectorizable loop 871 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec221[i] = fRec33[i] * fZec130[i];
			}
			/* Vectorizable loop 872 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec222[i] = fRec39[i] * fZec131[i];
			}
			/* Vectorizable loop 873 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec223[i] = fRec45[i] * fZec132[i];
			}
			/* Vectorizable loop 874 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec224[i] = fRec51[i] * fZec133[i];
			}
			/* Vectorizable loop 875 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec225[i] = fRec57[i] * fZec134[i];
			}
			/* Vectorizable loop 876 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec226[i] = fRec63[i] * fZec135[i];
			}
			/* Vectorizable loop 877 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec227[i] = fRec69[i] * fZec136[i];
			}
			/* Vectorizable loop 878 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec228[i] = fRec75[i] * fZec137[i];
			}
			/* Vectorizable loop 879 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec229[i] = fRec78[i] * fZec138[i];
			}
			/* Vectorizable loop 880 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec230[i] = fRec81[i] * fZec139[i];
			}
			/* Vectorizable loop 881 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec231[i] = fRec87[i] * fZec140[i];
			}
			/* Vectorizable loop 882 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec232[i] = fRec84[i] * fZec141[i];
			}
			/* Vectorizable loop 883 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec233[i] = fSlow80 * (fRec158[i] * fZec158[i] + fRec154[i] * fZec157[i] + fRec150[i] * fZec156[i] + fRec146[i] * fZec155[i] + fRec142[i] * fZec154[i] + fRec171[i] * fZec153[i] + fRec168[i] * fZec152[i] + fRec165[i] * fZec151[i] + fRec162[i] * fZec150[i] + fRec187[i] * fZec149[i] + fRec190[i] * fZec148[i] + fRec184[i] * fZec147[i] + fRec182[i] * fZec146[i] + fRec180[i] * fZec145[i] + fRec178[i] * fZec144[i] + fRec176[i] * fZec143[i] + fRec174[i] * fZec142[i]);
			}
			/* Vectorizable loop 884 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec367[i] = fZec351[i] + fZec366[i];
			}
			/* Vectorizable loop 885 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec369[i] = fZec317[i] + fZec368[i];
			}
			/* Vectorizable loop 886 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec370[i] = fZec364[i] + 0.002f * fSlow81 * fRec290[i];
			}
			/* Vectorizable loop 887 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec371[i] = fZec270[i] + 0.002f * fSlow81 * fRec286[i];
			}
			/* Vectorizable loop 888 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec170[i] = 2e+01f * fYec97[i - 1];
			}
			/* Vectorizable loop 889 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec171[i] = 2e+01f * fYec97[i];
			}
			/* Vectorizable loop 890 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec234[i] = 0.25f * (fZec233[i] + fZec232[i] + fZec231[i] + fZec230[i] + fZec229[i] + fZec228[i] + fZec227[i] + fZec226[i] + fZec225[i] + fZec224[i] + fZec223[i] + fZec222[i] + fZec221[i] + fZec220[i] + fZec219[i] + fZec218[i] + fZec217[i] + fZec216[i] + fZec215[i] + fZec214[i] + fZec213[i] + fZec212[i] + fZec211[i] + fZec210[i] + fZec209[i] + fZec208[i] + fZec207[i] + fZec206[i] + fZec205[i] + fZec204[i] + fZec203[i] + fZec202[i] + fZec201[i] + fZec200[i] + fZec199[i] + fZec198[i] + fZec197[i] + fZec196[i] + fZec195[i] + fZec194[i] + fZec193[i] + fZec192[i] + fZec191[i] + fZec190[i] + fZec189[i]);
			}
			/* Vectorizable loop 891 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec237[i] = fSlow80 * (fRec142[i] + fRec146[i] + fRec150[i] + fRec154[i] + fRec158[i] + fRec162[i] + fRec165[i] + fRec168[i] + fRec171[i] + fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec187[i] + fRec190[i]) + fRec133[i] + fRec134[i] + fRec135[i] + fRec136[i] + fRec137[i] + fRec138[i] + fRec139[i] + fZec236[i];
			}
			/* Vectorizable loop 892 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec353[i] = fRec129[i] * fZec95[i];
			}
			/* Vectorizable loop 893 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec354[i] = fRec130[i] * fZec97[i];
			}
			/* Vectorizable loop 894 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec355[i] = fRec131[i] * fZec99[i];
			}
			/* Vectorizable loop 895 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec357[i] = fRec133[i] * fZec103[i];
			}
			/* Vectorizable loop 896 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec356[i] = fRec132[i] * fZec101[i];
			}
			/* Vectorizable loop 897 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec358[i] = fRec134[i] * fZec105[i];
			}
			/* Vectorizable loop 898 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec359[i] = fRec135[i] * fZec107[i];
			}
			/* Vectorizable loop 899 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec360[i] = fSlow80 * (fRec187[i] * fZec158[i] + fRec190[i] * fZec157[i] + fRec184[i] * fZec156[i] + fRec182[i] * fZec155[i] + fRec180[i] * fZec154[i] + fRec178[i] * fZec153[i] + fRec176[i] * fZec152[i] + fRec174[i] * fZec151[i] + fRec84[i] * fZec150[i] + fRec87[i] * fZec149[i] + fRec81[i] * fZec148[i] + fRec78[i] * fZec147[i] + fRec75[i] * fZec146[i] + fRec69[i] * fZec145[i] + fRec63[i] * fZec144[i] + fRec57[i] * fZec143[i] + fRec51[i] * fZec142[i]) + fRec45[i] * fZec141[i] + fRec39[i] * fZec140[i] + fRec33[i] * fZec139[i] + fRec28[i] * fZec138[i] + fRec23[i] * fZec137[i] + fRec18[i] * fZec136[i] + fRec13[i] * fZec135[i] + fRec7[i] * fZec134[i] + fRec125[i] * fZec133[i] + fRec127[i] * fZec132[i] + fRec123[i] * fZec131[i] + fRec121[i] * fZec130[i] + fRec119[i] * fZec129[i] + fRec117[i] * fZec128[i] + fRec115[i] * fZec127[i] + fRec113[i] * fZec126[i] + fRec111[i] * fZec125[i] + fRec109[i] * fZec124[i] + fRec107[i] * fZec123[i] + fRec105[i] * fZec122[i] + fRec103[i] * fZec121[i] + fRec101[i] * fZec120[i] + fRec99[i] * fZec119[i] + fRec97[i] * fZec118[i] + fRec95[i] * fZec117[i] + fRec93[i] * fZec116[i] + fRec91[i] * fZec115[i];
			}
			/* Vectorizable loop 900 */
			/* Pre code */
			for (int j1104 = 0; j1104 < 4; j1104 = j1104 + 1) {
				fYec200_tmp[j1104] = fYec200_perm[j1104];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec200[i] = fSlow83 * fZec367[i];
			}
			/* Post code */
			for (int j1105 = 0; j1105 < 4; j1105 = j1105 + 1) {
				fYec200_perm[j1105] = fYec200_tmp[vsize + j1105];
			}
			/* Vectorizable loop 901 */
			/* Pre code */
			for (int j1112 = 0; j1112 < 4; j1112 = j1112 + 1) {
				fYec202_tmp[j1112] = fYec202_perm[j1112];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec202[i] = fSlow86 * fZec369[i];
			}
			/* Post code */
			for (int j1113 = 0; j1113 < 4; j1113 = j1113 + 1) {
				fYec202_perm[j1113] = fYec202_tmp[vsize + j1113];
			}
			/* Vectorizable loop 902 */
			/* Pre code */
			for (int j1120 = 0; j1120 < 4; j1120 = j1120 + 1) {
				fYec204_tmp[j1120] = fYec204_perm[j1120];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec204[i] = fSlow89 * fZec370[i];
			}
			/* Post code */
			for (int j1121 = 0; j1121 < 4; j1121 = j1121 + 1) {
				fYec204_perm[j1121] = fYec204_tmp[vsize + j1121];
			}
			/* Vectorizable loop 903 */
			/* Pre code */
			for (int j1128 = 0; j1128 < 4; j1128 = j1128 + 1) {
				fYec206_tmp[j1128] = fYec206_perm[j1128];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec206[i] = fSlow92 * fZec371[i];
			}
			/* Post code */
			for (int j1129 = 0; j1129 < 4; j1129 = j1129 + 1) {
				fYec206_perm[j1129] = fYec206_tmp[vsize + j1129];
			}
			/* Recursive loop 904 */
			/* Pre code */
			for (int j596 = 0; j596 < 4; j596 = j596 + 1) {
				fRec2_tmp[j596] = fRec2_perm[j596];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec2[i] = std::min<float>(1.0f, std::max<float>(0.0f, fRec2[i - 1] + ((fZec171[i] > -25.0f) ? ((fZec170[i] < -25.0f) ? 1.0f : 0.0f) : 0.0f) - ((fZec170[i] > -35.0f) ? ((fZec171[i] < -35.0f) ? 1.0f : 0.0f) : 0.0f)));
			}
			/* Post code */
			for (int j597 = 0; j597 < 4; j597 = j597 + 1) {
				fRec2_perm[j597] = fRec2_tmp[vsize + j597];
			}
			/* Vectorizable loop 905 */
			/* Pre code */
			for (int j770 = 0; j770 < 4; j770 = j770 + 1) {
				fYec132_tmp[j770] = fYec132_perm[j770];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec132[i] = fZec237[i] - fZec234[i];
			}
			/* Post code */
			for (int j771 = 0; j771 < 4; j771 = j771 + 1) {
				fYec132_perm[j771] = fYec132_tmp[vsize + j771];
			}
			/* Vectorizable loop 906 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec361[i] = 0.25f * (fZec360[i] + fRec90[i] * fZec114[i] + fRec139[i] * fZec113[i] + fRec138[i] * fZec112[i] + fRec137[i] * fZec111[i] + fRec136[i] * fZec109[i] + fZec359[i] + fZec358[i] + fZec357[i] + fZec356[i] + fZec355[i] + fZec354[i] + fZec353[i] + fRec90[i] * fZec93[i] + fRec139[i] * fZec91[i] + fRec138[i] * fZec89[i] + fRec137[i] * fZec87[i] + fRec136[i] * fZec85[i]);
			}
			/* Vectorizable loop 907 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec362[i] = fSlow80 * (fRec174[i] + fRec176[i] + fRec178[i] + fRec180[i] + fRec182[i] + fRec184[i] + fRec190[i] + fRec187[i] + fZec163[i]) + 2.0f * fZec161[i] + fRec129[i] + fRec130[i] + fRec131[i] + fRec132[i] + fRec133[i] + fRec134[i] + fRec135[i] + fRec91[i] + fRec93[i] + fRec95[i] + fRec97[i] + fRec99[i] + fRec101[i] + fRec103[i] + fRec105[i] + fRec107[i] + fRec109[i] + fRec111[i] + fRec113[i] + fRec115[i] + fRec117[i] + fRec119[i] + fRec121[i] + fRec123[i] + fRec127[i] + fRec125[i] + fRec7[i] + fRec13[i] + fRec18[i] + fRec23[i] + fRec28[i] + fRec33[i] + fRec45[i] + fRec39[i];
			}
			/* Recursive loop 908 */
			/* Pre code */
			for (int j1106 = 0; j1106 < 4; j1106 = j1106 + 1) {
				fRec292_tmp[j1106] = fRec292_perm[j1106];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec292[i] = fConst43 * (fRec292[i - 1] + (fYec200[i] - fYec200[i - 1]));
			}
			/* Post code */
			for (int j1107 = 0; j1107 < 4; j1107 = j1107 + 1) {
				fRec292_perm[j1107] = fRec292_tmp[vsize + j1107];
			}
			/* Recursive loop 909 */
			/* Pre code */
			for (int j1114 = 0; j1114 < 4; j1114 = j1114 + 1) {
				fRec294_tmp[j1114] = fRec294_perm[j1114];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec294[i] = fConst45 * (fRec294[i - 1] + (fYec202[i] - fYec202[i - 1]));
			}
			/* Post code */
			for (int j1115 = 0; j1115 < 4; j1115 = j1115 + 1) {
				fRec294_perm[j1115] = fRec294_tmp[vsize + j1115];
			}
			/* Recursive loop 910 */
			/* Pre code */
			for (int j1122 = 0; j1122 < 4; j1122 = j1122 + 1) {
				fRec296_tmp[j1122] = fRec296_perm[j1122];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec296[i] = fConst47 * (fRec296[i - 1] + (fYec204[i] - fYec204[i - 1]));
			}
			/* Post code */
			for (int j1123 = 0; j1123 < 4; j1123 = j1123 + 1) {
				fRec296_perm[j1123] = fRec296_tmp[vsize + j1123];
			}
			/* Recursive loop 911 */
			/* Pre code */
			for (int j1130 = 0; j1130 < 4; j1130 = j1130 + 1) {
				fRec298_tmp[j1130] = fRec298_perm[j1130];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec298[i] = fConst49 * (fRec298[i - 1] + (fYec206[i] - fYec206[i - 1]));
			}
			/* Post code */
			for (int j1131 = 0; j1131 < 4; j1131 = j1131 + 1) {
				fRec298_perm[j1131] = fRec298_tmp[vsize + j1131];
			}
			/* Recursive loop 912 */
			/* Pre code */
			for (int j598 = 0; j598 < 4; j598 = j598 + 1) {
				fRec1_tmp[j598] = fRec1_perm[j598];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec1[i] = fConst30 * fRec1[i - 1] + fConst29 * ((fRec2[i] > 0.5f) ? ((fRec2[i - 1] < 0.5f) ? 1.0f : 0.0f) : 0.0f);
			}
			/* Post code */
			for (int j599 = 0; j599 < 4; j599 = j599 + 1) {
				fRec1_perm[j599] = fRec1_tmp[vsize + j599];
			}
			/* Recursive loop 913 */
			/* Pre code */
			for (int j772 = 0; j772 < 4; j772 = j772 + 1) {
				fRec141_tmp[j772] = fRec141_perm[j772];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec141[i] = fConst26 * (fRec141[i - 1] + (fZec237[i] - (fZec234[i] + fYec132[i - 1])));
			}
			/* Post code */
			for (int j773 = 0; j773 < 4; j773 = j773 + 1) {
				fRec141_perm[j773] = fRec141_tmp[vsize + j773];
			}
			/* Vectorizable loop 914 */
			/* Pre code */
			for (int j1096 = 0; j1096 < 4; j1096 = j1096 + 1) {
				fYec198_tmp[j1096] = fYec198_perm[j1096];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec198[i] = fZec362[i] - fZec361[i];
			}
			/* Post code */
			for (int j1097 = 0; j1097 < 4; j1097 = j1097 + 1) {
				fYec198_perm[j1097] = fYec198_tmp[vsize + j1097];
			}
			/* Vectorizable loop 915 */
			/* Pre code */
			for (int j1108 = 0; j1108 < 4; j1108 = j1108 + 1) {
				fYec201_tmp[j1108] = fYec201_perm[j1108];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec201[i] = 0.5416667f * fRec292[i] + fSlow84 * fZec367[i];
			}
			/* Post code */
			for (int j1109 = 0; j1109 < 4; j1109 = j1109 + 1) {
				fYec201_perm[j1109] = fYec201_tmp[vsize + j1109];
			}
			/* Vectorizable loop 916 */
			/* Pre code */
			for (int j1116 = 0; j1116 < 4; j1116 = j1116 + 1) {
				fYec203_tmp[j1116] = fYec203_perm[j1116];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec203[i] = 0.5416667f * fRec294[i] + fSlow87 * fZec369[i];
			}
			/* Post code */
			for (int j1117 = 0; j1117 < 4; j1117 = j1117 + 1) {
				fYec203_perm[j1117] = fYec203_tmp[vsize + j1117];
			}
			/* Vectorizable loop 917 */
			/* Pre code */
			for (int j1124 = 0; j1124 < 4; j1124 = j1124 + 1) {
				fYec205_tmp[j1124] = fYec205_perm[j1124];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec205[i] = 0.5416667f * fRec296[i] + fSlow90 * fZec370[i];
			}
			/* Post code */
			for (int j1125 = 0; j1125 < 4; j1125 = j1125 + 1) {
				fYec205_perm[j1125] = fYec205_tmp[vsize + j1125];
			}
			/* Vectorizable loop 918 */
			/* Pre code */
			for (int j1132 = 0; j1132 < 4; j1132 = j1132 + 1) {
				fYec207_tmp[j1132] = fYec207_perm[j1132];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec207[i] = 0.5416667f * fRec298[i] + fSlow93 * fZec371[i];
			}
			/* Post code */
			for (int j1133 = 0; j1133 < 4; j1133 = j1133 + 1) {
				fYec207_perm[j1133] = fYec207_tmp[vsize + j1133];
			}
			/* Recursive loop 919 */
			/* Pre code */
			for (int j1136 = 0; j1136 < 4; j1136 = j1136 + 1) {
				fRec300_tmp[j1136] = fRec300_perm[j1136];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec300[i] = fRec300[i - 1] + fConst24 * (fYec200[i] - fRec300[i - 1]);
			}
			/* Post code */
			for (int j1137 = 0; j1137 < 4; j1137 = j1137 + 1) {
				fRec300_perm[j1137] = fRec300_tmp[vsize + j1137];
			}
			/* Recursive loop 920 */
			/* Pre code */
			for (int j1140 = 0; j1140 < 4; j1140 = j1140 + 1) {
				fRec302_tmp[j1140] = fRec302_perm[j1140];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec302[i] = fRec302[i - 1] + fConst7 * (fYec202[i] - fRec302[i - 1]);
			}
			/* Post code */
			for (int j1141 = 0; j1141 < 4; j1141 = j1141 + 1) {
				fRec302_perm[j1141] = fRec302_tmp[vsize + j1141];
			}
			/* Recursive loop 921 */
			/* Pre code */
			for (int j1144 = 0; j1144 < 4; j1144 = j1144 + 1) {
				fRec304_tmp[j1144] = fRec304_perm[j1144];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec304[i] = fRec304[i - 1] + fConst20 * (fYec204[i] - fRec304[i - 1]);
			}
			/* Post code */
			for (int j1145 = 0; j1145 < 4; j1145 = j1145 + 1) {
				fRec304_perm[j1145] = fRec304_tmp[vsize + j1145];
			}
			/* Recursive loop 922 */
			/* Pre code */
			for (int j1148 = 0; j1148 < 4; j1148 = j1148 + 1) {
				fRec306_tmp[j1148] = fRec306_perm[j1148];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec306[i] = fRec306[i - 1] + fConst36 * (fYec206[i] - fRec306[i - 1]);
			}
			/* Post code */
			for (int j1149 = 0; j1149 < 4; j1149 = j1149 + 1) {
				fRec306_perm[j1149] = fRec306_tmp[vsize + j1149];
			}
			/* Vectorizable loop 923 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec375[i] = fZec114[i] + fZec93[i];
			}
			/* Vectorizable loop 924 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec376[i] = fZec113[i] + fZec91[i];
			}
			/* Vectorizable loop 925 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec377[i] = fZec112[i] + fZec89[i];
			}
			/* Vectorizable loop 926 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec378[i] = fZec111[i] + fZec87[i];
			}
			/* Recursive loop 927 */
			/* Pre code */
			for (int j0 = 0; j0 < 4; j0 = j0 + 1) {
				fRec0_tmp[j0] = fRec0_perm[j0];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec0[i] = fSlow0 + 0.98f * fRec0[i - 1];
			}
			/* Post code */
			for (int j1 = 0; j1 < 4; j1 = j1 + 1) {
				fRec0_perm[j1] = fRec0_tmp[vsize + j1];
			}
			/* Recursive loop 928 */
			/* Pre code */
			for (int j1098 = 0; j1098 < 4; j1098 = j1098 + 1) {
				fRec289_tmp[j1098] = fRec289_perm[j1098];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec289[i] = fConst26 * (fRec289[i - 1] + (fZec362[i] - (fZec361[i] + fYec198[i - 1])));
			}
			/* Post code */
			for (int j1099 = 0; j1099 < 4; j1099 = j1099 + 1) {
				fRec289_perm[j1099] = fRec289_tmp[vsize + j1099];
			}
			/* Recursive loop 929 */
			/* Pre code */
			for (int j1110 = 0; j1110 < 4; j1110 = j1110 + 1) {
				fRec291_tmp[j1110] = fRec291_perm[j1110];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec291[i] = fConst44 * (fRec291[i - 1] + (fYec201[i] - fYec201[i - 1]));
			}
			/* Post code */
			for (int j1111 = 0; j1111 < 4; j1111 = j1111 + 1) {
				fRec291_perm[j1111] = fRec291_tmp[vsize + j1111];
			}
			/* Recursive loop 930 */
			/* Pre code */
			for (int j1118 = 0; j1118 < 4; j1118 = j1118 + 1) {
				fRec293_tmp[j1118] = fRec293_perm[j1118];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec293[i] = fConst46 * (fRec293[i - 1] + (fYec203[i] - fYec203[i - 1]));
			}
			/* Post code */
			for (int j1119 = 0; j1119 < 4; j1119 = j1119 + 1) {
				fRec293_perm[j1119] = fRec293_tmp[vsize + j1119];
			}
			/* Recursive loop 931 */
			/* Pre code */
			for (int j1126 = 0; j1126 < 4; j1126 = j1126 + 1) {
				fRec295_tmp[j1126] = fRec295_perm[j1126];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec295[i] = fConst48 * (fRec295[i - 1] + (fYec205[i] - fYec205[i - 1]));
			}
			/* Post code */
			for (int j1127 = 0; j1127 < 4; j1127 = j1127 + 1) {
				fRec295_perm[j1127] = fRec295_tmp[vsize + j1127];
			}
			/* Recursive loop 932 */
			/* Pre code */
			for (int j1134 = 0; j1134 < 4; j1134 = j1134 + 1) {
				fRec297_tmp[j1134] = fRec297_perm[j1134];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec297[i] = fConst50 * (fRec297[i - 1] + (fYec207[i] - fYec207[i - 1]));
			}
			/* Post code */
			for (int j1135 = 0; j1135 < 4; j1135 = j1135 + 1) {
				fRec297_perm[j1135] = fRec297_tmp[vsize + j1135];
			}
			/* Recursive loop 933 */
			/* Pre code */
			for (int j1138 = 0; j1138 < 4; j1138 = j1138 + 1) {
				fRec299_tmp[j1138] = fRec299_perm[j1138];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec299[i] = fRec299[i - 1] + fConst24 * (fRec300[i] - fRec299[i - 1]);
			}
			/* Post code */
			for (int j1139 = 0; j1139 < 4; j1139 = j1139 + 1) {
				fRec299_perm[j1139] = fRec299_tmp[vsize + j1139];
			}
			/* Recursive loop 934 */
			/* Pre code */
			for (int j1142 = 0; j1142 < 4; j1142 = j1142 + 1) {
				fRec301_tmp[j1142] = fRec301_perm[j1142];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec301[i] = fRec301[i - 1] + fConst7 * (fRec302[i] - fRec301[i - 1]);
			}
			/* Post code */
			for (int j1143 = 0; j1143 < 4; j1143 = j1143 + 1) {
				fRec301_perm[j1143] = fRec301_tmp[vsize + j1143];
			}
			/* Recursive loop 935 */
			/* Pre code */
			for (int j1146 = 0; j1146 < 4; j1146 = j1146 + 1) {
				fRec303_tmp[j1146] = fRec303_perm[j1146];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec303[i] = fRec303[i - 1] + fConst20 * (fRec304[i] - fRec303[i - 1]);
			}
			/* Post code */
			for (int j1147 = 0; j1147 < 4; j1147 = j1147 + 1) {
				fRec303_perm[j1147] = fRec303_tmp[vsize + j1147];
			}
			/* Recursive loop 936 */
			/* Pre code */
			for (int j1150 = 0; j1150 < 4; j1150 = j1150 + 1) {
				fRec305_tmp[j1150] = fRec305_perm[j1150];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec305[i] = fRec305[i - 1] + fConst36 * (fRec306[i] - fRec305[i - 1]);
			}
			/* Post code */
			for (int j1151 = 0; j1151 < 4; j1151 = j1151 + 1) {
				fRec305_perm[j1151] = fRec305_tmp[vsize + j1151];
			}
			/* Recursive loop 937 */
			/* Pre code */
			for (int j1152 = 0; j1152 < 4; j1152 = j1152 + 1) {
				fRec307_tmp[j1152] = fRec307_perm[j1152];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec307[i] = fRec307[i - 1] + fConst51 * (fSlow79 * (fSlow97 * (0.25f * fZec363[i] + 0.125f * fZec315[i]) + fSlow95 * (0.25f * fZec269[i] + 0.125f * fZec363[i] + 0.0625f * fZec315[i])) - fRec307[i - 1]);
			}
			/* Post code */
			for (int j1153 = 0; j1153 < 4; j1153 = j1153 + 1) {
				fRec307_perm[j1153] = fRec307_tmp[vsize + j1153];
			}
			/* Recursive loop 938 */
			/* Pre code */
			for (int j1154 = 0; j1154 < 4; j1154 = j1154 + 1) {
				fRec308_tmp[j1154] = fRec308_perm[j1154];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fRec308[i] = fSlow98 + 0.98f * fRec308[i - 1];
			}
			/* Post code */
			for (int j1155 = 0; j1155 < 4; j1155 = j1155 + 1) {
				fRec308_perm[j1155] = fRec308_tmp[vsize + j1155];
			}
			/* Vectorizable loop 939 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec374[i] = 0.002f * fSlow81 * fRec141[i];
			}
			/* Vectorizable loop 940 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec379[i] = 0.25f * (fRec129[i] * fZec378[i] + fRec130[i] * fZec377[i] + fRec131[i] * fZec376[i] + fRec90[i] * (fZec85[i] + fZec122[i] + fZec109[i]) + fRec133[i] * (fZec115[i] + fZec95[i]) + fRec134[i] * (fZec116[i] + fZec97[i]) + fRec135[i] * (fZec117[i] + fZec99[i]) + fRec136[i] * (fZec118[i] + fZec101[i]) + fRec137[i] * (fZec119[i] + fZec103[i]) + fRec138[i] * (fZec120[i] + fZec105[i]) + fRec139[i] * (fZec121[i] + fZec107[i]) + fZec159[i] + fRec132[i] * fZec375[i]);
			}
			/* Vectorizable loop 941 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec380[i] = fZec109[i] + fZec85[i];
			}
			/* Vectorizable loop 942 */
			/* Pre code */
			for (int j1156 = 0; j1156 < 4; j1156 = j1156 + 1) {
				fYec208_tmp[j1156] = fYec208_perm[j1156];
			}
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fYec208[i] = std::min<float>(1.0f, fConst52 * fRec1[i]);
			}
			/* Post code */
			for (int j1157 = 0; j1157 < 4; j1157 = j1157 + 1) {
				fYec208_perm[j1157] = fYec208_tmp[vsize + j1157];
			}
			/* Vectorizable loop 943 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec372[i] = fRec307[i] * (4.5f * fRec308[i] + 0.5f);
			}
			/* Vectorizable loop 944 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec373[i] = fSlow103 * (fSlow101 * (fRec291[i] + fRec293[i] + fRec295[i] + fRec297[i]) + fSlow100 * (fRec299[i] + fRec301[i] + fRec303[i] + fRec305[i]));
			}
			/* Vectorizable loop 945 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec381[i] = fSlow118 * (fSlow117 * (fZec368[i] + 0.25f * (fZec272[i] + fZec273[i] + fZec274[i] + fZec275[i] + fZec276[i] + fZec277[i] + fZec278[i] + fZec279[i] + fZec280[i] + fZec281[i] + fZec282[i] + fZec283[i] + fZec284[i] + fZec285[i] + fZec286[i] + fZec287[i] + fZec288[i] + fZec289[i] + fZec290[i] + fZec291[i] + fZec292[i] + fZec293[i] + fZec294[i] + fZec295[i] + fZec296[i] + fZec297[i] + fZec298[i] + fZec299[i] + fZec300[i] + fZec301[i] + fZec302[i] + fZec303[i] + fZec304[i] + fZec305[i] + fZec306[i] + fZec307[i] + fZec308[i] + fZec309[i] + fZec310[i] + fZec311[i] + fZec312[i] + fZec313[i] + fZec314[i] + fZec86[i] + fZec316[i])) + fSlow115 * (fZec366[i] + 0.25f * (fRec90[i] * fZec380[i] + fZec319[i] + fZec320[i] + fZec321[i] + fZec322[i] + fZec323[i] + fZec324[i] + fZec325[i] + fZec326[i] + fZec327[i] + fZec328[i] + fZec329[i] + fZec330[i] + fZec331[i] + fZec332[i] + fZec333[i] + fZec334[i] + fZec335[i] + fZec336[i] + fZec337[i] + fZec338[i] + fZec339[i] + fZec340[i] + fZec341[i] + fZec342[i] + fZec343[i] + fZec344[i] + fZec345[i] + fZec346[i] + fZec347[i] + fZec348[i] + fZec349[i] + fZec350[i] + fZec88[i] + fZec90[i] + fZec92[i] + fZec94[i] + fZec96[i] + fZec98[i] + fZec100[i] + fZec102[i] + fZec104[i] + fZec108[i] + fZec106[i])) + fSlow113 * (0.002f * fSlow81 * fRec289[i] + 0.25f * (fRec136[i] * fZec380[i] + fRec137[i] * fZec378[i] + fRec138[i] * fZec377[i] + fRec139[i] * fZec376[i] + fRec90[i] * fZec375[i] + fZec353[i] + fZec354[i] + fZec355[i] + fZec356[i] + fZec357[i] + fZec358[i] + fZec360[i] + fZec359[i])) + fSlow111 * (fZec168[i] + fZec379[i]) + fSlow109 * fZec371[i] + fSlow107 * (fZec234[i] + fZec374[i]) + fSlow105 * fZec370[i]);
			}
			/* Vectorizable loop 946 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec382[i] = fSlow120 * std::max<float>(fSlow119, 0.25f * (fYec208[i] + fYec208[i - 2] + fYec208[i - 3] + fYec208[i - 4])) * (fZec374[i] + 0.5f * fZec371[i] + 0.25f * (fZec379[i] + fZec189[i] + fZec190[i] + fZec191[i] + fZec192[i] + fZec193[i] + fZec194[i] + fZec195[i] + fZec196[i] + fZec197[i] + fZec198[i] + fZec199[i] + fZec200[i] + fZec201[i] + fZec202[i] + fZec203[i] + fZec204[i] + fZec205[i] + fZec206[i] + fZec207[i] + fZec208[i] + fZec209[i] + fZec210[i] + fZec211[i] + fZec212[i] + fZec213[i] + fZec214[i] + fZec215[i] + fZec216[i] + fZec217[i] + fZec218[i] + fZec219[i] + fZec220[i] + fZec221[i] + fZec222[i] + fZec223[i] + fZec224[i] + fZec225[i] + fZec226[i] + fZec227[i] + fZec228[i] + fZec229[i] + fZec230[i] + fZec231[i] + fZec232[i] + fZec168[i] + fZec233[i]));
			}
			/* Vectorizable loop 947 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				fZec383[i] = 0.05f * fRec0[i] + 0.001f;
			}
			/* Vectorizable loop 948 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				output0[i] = FAUSTFLOAT(fZec383[i] * (fZec382[i] + fZec381[i] + fZec373[i] + fZec372[i]));
			}
			/* Vectorizable loop 949 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				output1[i] = FAUSTFLOAT(fZec383[i] * (fZec373[i] + fZec381[i] + fZec382[i]));
			}
			/* Vectorizable loop 950 */
			/* Compute code */
			for (int i = 0; i < vsize; i = i + 1) {
				output2[i] = FAUSTFLOAT(fZec372[i] * fZec383[i]);
			}
		}
	}

};

#endif
