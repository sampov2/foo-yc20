/* ------------------------------------------------------------
name: "standalone"
Code generated with Faust 2.72.14 (https://faust.grame.fr)
Compilation options: -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

/* link with : "" */
#include "yc20-precalc.h"
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

static float mydsp_faustpower3_f(float value) {
	return value * value * value;
}
static float mydsp_faustpower2_f(float value) {
	return value * value;
}

class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT fVslider0;
	float fRec0[2];
	FAUSTFLOAT fButton0;
	float fVec0[4];
	FAUSTFLOAT fHslider0;
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fRec6[2];
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	float fConst2;
	float fRec5[2];
	int iRec4[2];
	float fVec1[2];
	int iRec7[2];
	float fVec2[2];
	int iRec8[2];
	float fVec3[2];
	int iRec9[2];
	float fVec4[2];
	float fConst3;
	float fRec3[2];
	float fConst4;
	float fConst5;
	float fRec2[2];
	FAUSTFLOAT fButton1;
	float fVec5[4];
	float fConst6;
	float fRec13[2];
	int iRec12[2];
	float fVec6[2];
	int iRec14[2];
	float fVec7[2];
	int iRec15[2];
	float fVec8[2];
	int iRec16[2];
	float fVec9[2];
	float fConst7;
	float fRec11[2];
	float fRec10[2];
	FAUSTFLOAT fButton2;
	float fVec10[4];
	float fConst8;
	float fRec20[2];
	int iRec19[2];
	float fVec11[2];
	int iRec21[2];
	float fVec12[2];
	int iRec22[2];
	float fVec13[2];
	int iRec23[2];
	float fVec14[2];
	float fRec18[2];
	float fRec17[2];
	FAUSTFLOAT fButton3;
	float fVec15[4];
	float fConst9;
	float fRec27[2];
	int iRec26[2];
	float fVec16[2];
	int iRec28[2];
	float fVec17[2];
	int iRec29[2];
	float fVec18[2];
	int iRec30[2];
	float fVec19[2];
	float fRec25[2];
	float fRec24[2];
	FAUSTFLOAT fButton4;
	float fVec20[4];
	float fConst10;
	float fRec34[2];
	int iRec33[2];
	float fVec21[2];
	int iRec35[2];
	float fVec22[2];
	int iRec36[2];
	float fVec23[2];
	int iRec37[2];
	float fVec24[2];
	float fRec32[2];
	float fRec31[2];
	FAUSTFLOAT fButton5;
	float fVec25[4];
	float fConst11;
	float fRec41[2];
	int iRec40[2];
	float fVec26[2];
	int iRec42[2];
	float fVec27[2];
	int iRec43[2];
	float fVec28[2];
	int iRec44[2];
	float fVec29[2];
	int iRec45[2];
	float fVec30[2];
	float fConst12;
	float fRec39[2];
	float fConst13;
	float fRec38[2];
	FAUSTFLOAT fButton6;
	float fVec31[4];
	float fConst14;
	float fRec49[2];
	int iRec48[2];
	float fVec32[2];
	int iRec50[2];
	float fVec33[2];
	int iRec51[2];
	float fVec34[2];
	int iRec52[2];
	float fVec35[2];
	int iRec53[2];
	float fVec36[2];
	float fRec47[2];
	float fRec46[2];
	FAUSTFLOAT fButton7;
	float fVec37[4];
	float fConst15;
	float fRec57[2];
	int iRec56[2];
	float fVec38[2];
	int iRec58[2];
	float fVec39[2];
	int iRec59[2];
	float fVec40[2];
	int iRec60[2];
	float fVec41[2];
	int iRec61[2];
	float fVec42[2];
	float fRec55[2];
	float fRec54[2];
	FAUSTFLOAT fButton8;
	float fVec43[4];
	float fConst16;
	float fRec65[2];
	int iRec64[2];
	float fVec44[2];
	int iRec66[2];
	float fVec45[2];
	int iRec67[2];
	float fVec46[2];
	int iRec68[2];
	float fVec47[2];
	int iRec69[2];
	float fVec48[2];
	float fRec63[2];
	float fRec62[2];
	FAUSTFLOAT fButton9;
	float fVec49[4];
	float fConst17;
	float fRec73[2];
	int iRec72[2];
	float fVec50[2];
	int iRec74[2];
	float fVec51[2];
	int iRec75[2];
	float fVec52[2];
	int iRec76[2];
	float fVec53[2];
	int iRec77[2];
	float fVec54[2];
	float fConst18;
	float fRec71[2];
	float fRec70[2];
	FAUSTFLOAT fButton10;
	float fVec55[4];
	float fConst19;
	float fRec81[2];
	int iRec80[2];
	float fVec56[2];
	int iRec82[2];
	float fVec57[2];
	int iRec83[2];
	float fVec58[2];
	int iRec84[2];
	float fVec59[2];
	int iRec85[2];
	float fVec60[2];
	float fRec79[2];
	float fRec78[2];
	FAUSTFLOAT fButton11;
	float fVec61[4];
	float fConst20;
	float fRec89[2];
	int iRec88[2];
	float fVec62[2];
	int iRec90[2];
	float fVec63[2];
	int iRec91[2];
	float fVec64[2];
	int iRec92[2];
	float fVec65[2];
	int iRec93[2];
	float fVec66[2];
	float fRec87[2];
	float fRec86[2];
	FAUSTFLOAT fButton12;
	float fVec67[4];
	int iRec96[2];
	float fVec68[2];
	float fRec95[2];
	float fRec94[2];
	FAUSTFLOAT fButton13;
	float fVec69[4];
	int iRec99[2];
	float fVec70[2];
	float fConst21;
	float fRec98[2];
	float fRec97[2];
	FAUSTFLOAT fButton14;
	float fVec71[4];
	int iRec102[2];
	float fVec72[2];
	float fRec101[2];
	float fRec100[2];
	FAUSTFLOAT fButton15;
	float fVec73[4];
	int iRec105[2];
	float fVec74[2];
	float fRec104[2];
	float fRec103[2];
	FAUSTFLOAT fButton16;
	float fVec75[4];
	int iRec108[2];
	float fVec76[2];
	float fRec107[2];
	float fRec106[2];
	int iRec111[2];
	float fVec77[2];
	float fRec110[2];
	float fConst22;
	float fRec109[2];
	int iRec114[2];
	float fVec78[2];
	float fRec113[2];
	float fRec112[2];
	int iRec117[2];
	float fVec79[2];
	float fRec116[2];
	float fRec115[2];
	int iRec120[2];
	float fVec80[2];
	float fRec119[2];
	float fRec118[2];
	int iRec123[2];
	float fVec81[2];
	float fConst23;
	float fRec122[2];
	float fRec121[2];
	int iRec126[2];
	float fVec82[2];
	float fRec125[2];
	float fRec124[2];
	int iRec129[2];
	float fVec83[2];
	float fRec128[2];
	float fRec127[2];
	int iRec132[2];
	float fVec84[2];
	float fRec131[2];
	float fRec130[2];
	int iRec135[2];
	float fVec85[2];
	float fConst24;
	float fRec134[2];
	float fRec133[2];
	int iRec138[2];
	float fVec86[2];
	float fRec137[2];
	float fRec136[2];
	int iRec141[2];
	float fVec87[2];
	float fRec140[2];
	float fRec139[2];
	int iRec144[2];
	float fVec88[2];
	float fRec143[2];
	float fRec142[2];
	int iRec147[2];
	float fRec146[2];
	float fConst25;
	float fRec145[2];
	int iRec150[2];
	float fRec149[2];
	float fRec148[2];
	int iRec153[2];
	float fRec152[2];
	float fRec151[2];
	int iRec156[2];
	float fRec155[2];
	float fRec154[2];
	int iRec159[2];
	float fConst26;
	float fRec158[2];
	float fRec157[2];
	int iRec162[2];
	float fRec161[2];
	float fRec160[2];
	int iRec165[2];
	float fRec164[2];
	float fRec163[2];
	int iRec168[2];
	float fRec167[2];
	float fRec166[2];
	int iRec171[2];
	float fRec170[2];
	float fRec169[2];
	int iRec174[2];
	float fRec173[2];
	float fRec172[2];
	int iRec177[2];
	float fRec176[2];
	float fRec175[2];
	int iRec180[2];
	float fRec179[2];
	float fRec178[2];
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fHslider4;
	float fConst27;
	float fRec1[2];
	FAUSTFLOAT fButton17;
	float fVec89[4];
	float fConst28;
	float fRec185[2];
	float fRec184[2];
	FAUSTFLOAT fButton18;
	float fVec90[4];
	float fConst29;
	float fRec187[2];
	float fRec186[2];
	FAUSTFLOAT fButton19;
	float fVec91[4];
	float fRec189[2];
	float fRec188[2];
	FAUSTFLOAT fButton20;
	float fVec92[4];
	float fRec191[2];
	float fRec190[2];
	FAUSTFLOAT fButton21;
	float fVec93[4];
	float fRec193[2];
	float fRec192[2];
	FAUSTFLOAT fButton22;
	float fVec94[4];
	float fConst30;
	float fRec195[2];
	float fRec194[2];
	FAUSTFLOAT fButton23;
	float fVec95[4];
	float fRec197[2];
	float fRec196[2];
	FAUSTFLOAT fButton24;
	float fVec96[4];
	float fRec199[2];
	float fRec198[2];
	FAUSTFLOAT fButton25;
	float fVec97[4];
	float fRec201[2];
	float fRec200[2];
	FAUSTFLOAT fButton26;
	float fVec98[4];
	float fConst31;
	float fRec203[2];
	float fRec202[2];
	FAUSTFLOAT fButton27;
	float fVec99[4];
	float fRec205[2];
	float fRec204[2];
	FAUSTFLOAT fButton28;
	float fVec100[4];
	float fRec207[2];
	float fRec206[2];
	FAUSTFLOAT fButton29;
	float fVec101[4];
	float fRec209[2];
	float fRec208[2];
	FAUSTFLOAT fButton30;
	float fVec102[4];
	float fConst32;
	float fRec211[2];
	float fRec210[2];
	FAUSTFLOAT fButton31;
	float fVec103[4];
	float fRec213[2];
	float fRec212[2];
	FAUSTFLOAT fButton32;
	float fVec104[4];
	float fRec215[2];
	float fRec214[2];
	FAUSTFLOAT fButton33;
	float fVec105[4];
	float fRec217[2];
	float fRec216[2];
	FAUSTFLOAT fButton34;
	float fVec106[4];
	float fRec219[2];
	float fRec218[2];
	FAUSTFLOAT fButton35;
	float fVec107[4];
	float fRec221[2];
	float fRec220[2];
	FAUSTFLOAT fButton36;
	float fVec108[4];
	float fRec223[2];
	float fRec222[2];
	FAUSTFLOAT fButton37;
	float fVec109[4];
	FAUSTFLOAT fButton38;
	float fVec110[4];
	FAUSTFLOAT fButton39;
	float fVec111[4];
	FAUSTFLOAT fButton40;
	float fVec112[4];
	FAUSTFLOAT fButton41;
	float fVec113[4];
	FAUSTFLOAT fButton42;
	float fVec114[4];
	FAUSTFLOAT fButton43;
	float fVec115[4];
	FAUSTFLOAT fButton44;
	float fVec116[4];
	FAUSTFLOAT fButton45;
	float fVec117[4];
	FAUSTFLOAT fButton46;
	float fVec118[4];
	FAUSTFLOAT fButton47;
	float fVec119[4];
	FAUSTFLOAT fButton48;
	float fVec120[4];
	FAUSTFLOAT fButton49;
	float fVec121[4];
	FAUSTFLOAT fButton50;
	float fVec122[4];
	FAUSTFLOAT fButton51;
	float fVec123[4];
	FAUSTFLOAT fButton52;
	float fVec124[4];
	FAUSTFLOAT fButton53;
	float fVec125[4];
	FAUSTFLOAT fButton54;
	float fVec126[4];
	FAUSTFLOAT fButton55;
	float fVec127[4];
	FAUSTFLOAT fButton56;
	float fVec128[4];
	FAUSTFLOAT fButton57;
	float fVec129[4];
	FAUSTFLOAT fButton58;
	float fVec130[4];
	FAUSTFLOAT fButton59;
	float fVec131[4];
	FAUSTFLOAT fButton60;
	float fVec132[4];
	float fVec133[2];
	float fConst33;
	float fRec183[2];
	FAUSTFLOAT fVslider3;
	float fVec134[2];
	float fRec182[2];
	float fRec181[2];
	float fConst34;
	float fRec228[2];
	float fRec227[2];
	float fConst35;
	float fRec230[2];
	float fRec229[2];
	float fRec232[2];
	float fRec231[2];
	float fRec234[2];
	float fRec233[2];
	float fRec236[2];
	float fRec235[2];
	float fConst36;
	float fRec238[2];
	float fRec237[2];
	float fRec240[2];
	float fRec239[2];
	float fRec242[2];
	float fRec241[2];
	float fRec244[2];
	float fRec243[2];
	float fRec246[2];
	float fRec245[2];
	float fRec248[2];
	float fRec247[2];
	float fRec250[2];
	float fRec249[2];
	float fVec135[2];
	float fRec226[2];
	FAUSTFLOAT fVslider4;
	float fVec136[2];
	float fRec225[2];
	float fRec224[2];
	float fConst37;
	float fRec255[2];
	float fRec254[2];
	float fRec257[2];
	float fRec256[2];
	float fRec259[2];
	float fRec258[2];
	float fRec261[2];
	float fRec260[2];
	float fConst38;
	float fRec263[2];
	float fRec262[2];
	float fRec265[2];
	float fRec264[2];
	float fRec267[2];
	float fRec266[2];
	float fRec269[2];
	float fRec268[2];
	float fRec271[2];
	float fRec270[2];
	float fRec273[2];
	float fRec272[2];
	float fRec275[2];
	float fRec274[2];
	float fVec137[2];
	float fConst39;
	float fRec276[2];
	float fVec138[2];
	float fRec253[2];
	FAUSTFLOAT fVslider5;
	float fVec139[2];
	float fRec252[2];
	float fRec251[2];
	float fVec140[2];
	float fRec280[2];
	float fVec141[2];
	float fRec281[2];
	float fVec142[2];
	float fRec282[2];
	float fVec143[2];
	float fRec283[2];
	float fVec144[2];
	float fRec284[2];
	float fVec145[2];
	float fRec285[2];
	float fVec146[2];
	float fRec286[2];
	float fVec147[2];
	float fRec287[2];
	float fVec148[2];
	float fRec288[2];
	float fVec149[2];
	float fRec289[2];
	float fVec150[2];
	float fRec290[2];
	float fVec151[2];
	float fRec279[2];
	FAUSTFLOAT fVslider6;
	float fVec152[2];
	float fRec278[2];
	float fRec277[2];
	FAUSTFLOAT fVslider7;
	float fConst40;
	float fRec292[2];
	float fVec153[2];
	float fConst41;
	float fRec291[2];
	float fConst42;
	float fRec294[2];
	float fVec154[2];
	float fConst43;
	float fRec293[2];
	float fConst44;
	float fRec296[2];
	float fVec155[2];
	float fConst45;
	float fRec295[2];
	float fConst46;
	float fRec298[2];
	float fVec156[2];
	float fConst47;
	float fRec297[2];
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fVslider8;
	float fVec157[2];
	float fRec299[2];
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVslider10;
	float fVec158[2];
	float fRec300[2];
	FAUSTFLOAT fVslider11;
	float fVec159[2];
	float fRec301[2];
	FAUSTFLOAT fVslider12;
	FAUSTFLOAT fVslider13;
	FAUSTFLOAT fVslider14;
	int iConst48;
	int iRec307[2];
	float fRec304[2];
	int iRec305[2];
	float fRec306[2];
	float fConst49;
	float fVec160[2];
	float fRec303[2];
	float fConst50;
	float fConst51;
	float fRec302[2];
	float fConst52;
	float fVec161[5];
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	float fRec308[2];
	
 public:
	mydsp() {}

	void metadata(Meta* m) { 
		m->declare("compile_options", "-lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("yc20.dsp/copyright", "(c)Sampo Savolainen 2009");
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
		fConst3 = 2564.1025f / fConst0;
		fConst4 = fConst1 + 0.0073745456f;
		fConst5 = 0.0073745456f / fConst4;
		fConst6 = 4978.0317f / fConst0;
		fConst7 = 2127.6597f / fConst0;
		fConst8 = 4698.636f / fConst0;
		fConst9 = 4434.922f / fConst0;
		fConst10 = 4186.0093f / fConst0;
		fConst11 = 7902.133f / fConst0;
		fConst12 = 1785.7142f / fConst0;
		fConst13 = 0.0035964532f / (fConst1 + 0.0035964532f);
		fConst14 = 7458.62f / fConst0;
		fConst15 = 7.04e+03f / fConst0;
		fConst16 = 6644.875f / fConst0;
		fConst17 = 6271.927f / fConst0;
		fConst18 = 1470.5883f / fConst0;
		fConst19 = 5919.9106f / fConst0;
		fConst20 = 5587.652f / fConst0;
		fConst21 = 1219.5122f / fConst0;
		fConst22 = 0.002230664f / (fConst1 + 0.002230664f);
		fConst23 = 1e+03f / fConst0;
		fConst24 = 833.3333f / fConst0;
		fConst25 = 0.0016849851f / (fConst1 + 0.0016849851f);
		fConst26 = 666.6667f / fConst0;
		fConst27 = 3968.254f / fConst0;
		fConst28 = 1e+04f / fConst0;
		fConst29 = 8333.333f / fConst0;
		fConst30 = 5555.5557f / fConst0;
		fConst31 = 4545.4546f / fConst0;
		fConst32 = 3703.7036f / fConst0;
		fConst33 = 0.0001f / (fConst1 + 0.0001f);
		fConst34 = 21276.596f / fConst0;
		fConst35 = 17857.143f / fConst0;
		fConst36 = 12195.122f / fConst0;
		fConst37 = 37037.035f / fConst0;
		fConst38 = 25641.025f / fConst0;
		fConst39 = 1.0f / fConst4;
		fConst40 = 0.000858f / (fConst1 + 0.000858f);
		fConst41 = 0.000429f / (fConst1 + 0.000429f);
		fConst42 = 0.00039f / (fConst1 + 0.00039f);
		fConst43 = 0.000195f / (fConst1 + 0.000195f);
		fConst44 = 0.0001833f / (fConst1 + 0.0001833f);
		fConst45 = 9.165e-05f / (fConst1 + 9.165e-05f);
		fConst46 = 0.0001053f / (fConst1 + 0.0001053f);
		fConst47 = 5.265e-05f / (fConst1 + 5.265e-05f);
		iConst48 = int(0.001f * std::max<float>(2.205e+04f, std::min<float>(1.92e+05f, fConst0)));
		fConst49 = 1.0f / float(iConst48);
		fConst50 = 36.24376f / fConst0;
		fConst51 = 1.0f - fConst50;
		fConst52 = 0.027590958f * fConst0;
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(1.0f);
		fButton0 = FAUSTFLOAT(0.0f);
		fHslider0 = FAUSTFLOAT(0.0f);
		fHslider1 = FAUSTFLOAT(0.0f);
		fHslider2 = FAUSTFLOAT(0.0f);
		fHslider3 = FAUSTFLOAT(0.0f);
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
		fVslider1 = FAUSTFLOAT(1.0f);
		fVslider2 = FAUSTFLOAT(1.0f);
		fHslider4 = FAUSTFLOAT(0.0f);
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
		fVslider3 = FAUSTFLOAT(1.0f);
		fVslider4 = FAUSTFLOAT(1.0f);
		fVslider5 = FAUSTFLOAT(1.0f);
		fVslider6 = FAUSTFLOAT(1.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fHslider5 = FAUSTFLOAT(1.0f);
		fVslider8 = FAUSTFLOAT(1.0f);
		fVslider9 = FAUSTFLOAT(0.5f);
		fVslider10 = FAUSTFLOAT(0.5f);
		fVslider11 = FAUSTFLOAT(0.5f);
		fVslider12 = FAUSTFLOAT(0.0f);
		fVslider13 = FAUSTFLOAT(1.0f);
		fVslider14 = FAUSTFLOAT(1.0f);
		fHslider6 = FAUSTFLOAT(1.0f);
		fHslider7 = FAUSTFLOAT(0.5f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 4; l1 = l1 + 1) {
			fVec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec6[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec5[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			iRec4[l4] = 0;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fVec1[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			iRec7[l6] = 0;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fVec2[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			iRec8[l8] = 0;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fVec3[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			iRec9[l10] = 0;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fVec4[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec3[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec2[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 4; l14 = l14 + 1) {
			fVec5[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec13[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			iRec12[l16] = 0;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fVec6[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			iRec14[l18] = 0;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fVec7[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			iRec15[l20] = 0;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fVec8[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			iRec16[l22] = 0;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fVec9[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec11[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec10[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 4; l26 = l26 + 1) {
			fVec10[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec20[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			iRec19[l28] = 0;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fVec11[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			iRec21[l30] = 0;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fVec12[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			iRec22[l32] = 0;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fVec13[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			iRec23[l34] = 0;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fVec14[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec18[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec17[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 4; l38 = l38 + 1) {
			fVec15[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec27[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			iRec26[l40] = 0;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fVec16[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			iRec28[l42] = 0;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fVec17[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			iRec29[l44] = 0;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fVec18[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			iRec30[l46] = 0;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fVec19[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec25[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec24[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 4; l50 = l50 + 1) {
			fVec20[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec34[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			iRec33[l52] = 0;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fVec21[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			iRec35[l54] = 0;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fVec22[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			iRec36[l56] = 0;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fVec23[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			iRec37[l58] = 0;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fVec24[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec32[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec31[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 4; l62 = l62 + 1) {
			fVec25[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec41[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			iRec40[l64] = 0;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fVec26[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			iRec42[l66] = 0;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fVec27[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			iRec43[l68] = 0;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fVec28[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			iRec44[l70] = 0;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fVec29[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			iRec45[l72] = 0;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fVec30[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec39[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec38[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 4; l76 = l76 + 1) {
			fVec31[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec49[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			iRec48[l78] = 0;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fVec32[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			iRec50[l80] = 0;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fVec33[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			iRec51[l82] = 0;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fVec34[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			iRec52[l84] = 0;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fVec35[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			iRec53[l86] = 0;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fVec36[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec47[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec46[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 4; l90 = l90 + 1) {
			fVec37[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec57[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			iRec56[l92] = 0;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fVec38[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			iRec58[l94] = 0;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fVec39[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			iRec59[l96] = 0;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fVec40[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			iRec60[l98] = 0;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fVec41[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			iRec61[l100] = 0;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fVec42[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec55[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec54[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 4; l104 = l104 + 1) {
			fVec43[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec65[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			iRec64[l106] = 0;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fVec44[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			iRec66[l108] = 0;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fVec45[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			iRec67[l110] = 0;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fVec46[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			iRec68[l112] = 0;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fVec47[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			iRec69[l114] = 0;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fVec48[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec63[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec62[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 4; l118 = l118 + 1) {
			fVec49[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec73[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			iRec72[l120] = 0;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fVec50[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			iRec74[l122] = 0;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fVec51[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			iRec75[l124] = 0;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fVec52[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			iRec76[l126] = 0;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fVec53[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			iRec77[l128] = 0;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fVec54[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec71[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec70[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 4; l132 = l132 + 1) {
			fVec55[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec81[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			iRec80[l134] = 0;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fVec56[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			iRec82[l136] = 0;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fVec57[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			iRec83[l138] = 0;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fVec58[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			iRec84[l140] = 0;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fVec59[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			iRec85[l142] = 0;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fVec60[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec79[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec78[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 4; l146 = l146 + 1) {
			fVec61[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec89[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			iRec88[l148] = 0;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fVec62[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			iRec90[l150] = 0;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fVec63[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			iRec91[l152] = 0;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fVec64[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			iRec92[l154] = 0;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fVec65[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			iRec93[l156] = 0;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fVec66[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec87[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec86[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 4; l160 = l160 + 1) {
			fVec67[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			iRec96[l161] = 0;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fVec68[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec95[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec94[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 4; l165 = l165 + 1) {
			fVec69[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			iRec99[l166] = 0;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fVec70[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec98[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec97[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 4; l170 = l170 + 1) {
			fVec71[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			iRec102[l171] = 0;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fVec72[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec101[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec100[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 4; l175 = l175 + 1) {
			fVec73[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			iRec105[l176] = 0;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fVec74[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec104[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec103[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 4; l180 = l180 + 1) {
			fVec75[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			iRec108[l181] = 0;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fVec76[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec107[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec106[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			iRec111[l185] = 0;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fVec77[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec110[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec109[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			iRec114[l189] = 0;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fVec78[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec113[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec112[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			iRec117[l193] = 0;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fVec79[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec116[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec115[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			iRec120[l197] = 0;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fVec80[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec119[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec118[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			iRec123[l201] = 0;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fVec81[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec122[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec121[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			iRec126[l205] = 0;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fVec82[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec125[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fRec124[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			iRec129[l209] = 0;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fVec83[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec128[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec127[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			iRec132[l213] = 0;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fVec84[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec131[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec130[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			iRec135[l217] = 0;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fVec85[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec134[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec133[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			iRec138[l221] = 0;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fVec86[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec137[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec136[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			iRec141[l225] = 0;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fVec87[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fRec140[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec139[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			iRec144[l229] = 0;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fVec88[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec143[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec142[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			iRec147[l233] = 0;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fRec146[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec145[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			iRec150[l236] = 0;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			fRec149[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fRec148[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			iRec153[l239] = 0;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fRec152[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec151[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			iRec156[l242] = 0;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec155[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec154[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			iRec159[l245] = 0;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec158[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec157[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			iRec162[l248] = 0;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fRec161[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec160[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			iRec165[l251] = 0;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			fRec164[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fRec163[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			iRec168[l254] = 0;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fRec167[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fRec166[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			iRec171[l257] = 0;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fRec170[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fRec169[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			iRec174[l260] = 0;
		}
		for (int l261 = 0; l261 < 2; l261 = l261 + 1) {
			fRec173[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 2; l262 = l262 + 1) {
			fRec172[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2; l263 = l263 + 1) {
			iRec177[l263] = 0;
		}
		for (int l264 = 0; l264 < 2; l264 = l264 + 1) {
			fRec176[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 2; l265 = l265 + 1) {
			fRec175[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
			iRec180[l266] = 0;
		}
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			fRec179[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			fRec178[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec1[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 4; l270 = l270 + 1) {
			fVec89[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec185[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec184[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 4; l273 = l273 + 1) {
			fVec90[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec187[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec186[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 4; l276 = l276 + 1) {
			fVec91[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec189[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fRec188[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 4; l279 = l279 + 1) {
			fVec92[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fRec191[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
			fRec190[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 4; l282 = l282 + 1) {
			fVec93[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
			fRec193[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
			fRec192[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 4; l285 = l285 + 1) {
			fVec94[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fRec195[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
			fRec194[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 4; l288 = l288 + 1) {
			fVec95[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 2; l289 = l289 + 1) {
			fRec197[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 2; l290 = l290 + 1) {
			fRec196[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 4; l291 = l291 + 1) {
			fVec96[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 2; l292 = l292 + 1) {
			fRec199[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 2; l293 = l293 + 1) {
			fRec198[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 4; l294 = l294 + 1) {
			fVec97[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 2; l295 = l295 + 1) {
			fRec201[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 2; l296 = l296 + 1) {
			fRec200[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 4; l297 = l297 + 1) {
			fVec98[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec203[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fRec202[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 4; l300 = l300 + 1) {
			fVec99[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec205[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fRec204[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 4; l303 = l303 + 1) {
			fVec100[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fRec207[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fRec206[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 4; l306 = l306 + 1) {
			fVec101[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fRec209[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fRec208[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 4; l309 = l309 + 1) {
			fVec102[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			fRec211[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			fRec210[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 4; l312 = l312 + 1) {
			fVec103[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 2; l313 = l313 + 1) {
			fRec213[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 2; l314 = l314 + 1) {
			fRec212[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 4; l315 = l315 + 1) {
			fVec104[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 2; l316 = l316 + 1) {
			fRec215[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 2; l317 = l317 + 1) {
			fRec214[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 4; l318 = l318 + 1) {
			fVec105[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 2; l319 = l319 + 1) {
			fRec217[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 2; l320 = l320 + 1) {
			fRec216[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 4; l321 = l321 + 1) {
			fVec106[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 2; l322 = l322 + 1) {
			fRec219[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 2; l323 = l323 + 1) {
			fRec218[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 4; l324 = l324 + 1) {
			fVec107[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fRec221[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 2; l326 = l326 + 1) {
			fRec220[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 4; l327 = l327 + 1) {
			fVec108[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 2; l328 = l328 + 1) {
			fRec223[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 2; l329 = l329 + 1) {
			fRec222[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 4; l330 = l330 + 1) {
			fVec109[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 4; l331 = l331 + 1) {
			fVec110[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 4; l332 = l332 + 1) {
			fVec111[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 4; l333 = l333 + 1) {
			fVec112[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 4; l334 = l334 + 1) {
			fVec113[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 4; l335 = l335 + 1) {
			fVec114[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 4; l336 = l336 + 1) {
			fVec115[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 4; l337 = l337 + 1) {
			fVec116[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 4; l338 = l338 + 1) {
			fVec117[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 4; l339 = l339 + 1) {
			fVec118[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 4; l340 = l340 + 1) {
			fVec119[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 4; l341 = l341 + 1) {
			fVec120[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 4; l342 = l342 + 1) {
			fVec121[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 4; l343 = l343 + 1) {
			fVec122[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 4; l344 = l344 + 1) {
			fVec123[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 4; l345 = l345 + 1) {
			fVec124[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 4; l346 = l346 + 1) {
			fVec125[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 4; l347 = l347 + 1) {
			fVec126[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 4; l348 = l348 + 1) {
			fVec127[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 4; l349 = l349 + 1) {
			fVec128[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 4; l350 = l350 + 1) {
			fVec129[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 4; l351 = l351 + 1) {
			fVec130[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 4; l352 = l352 + 1) {
			fVec131[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 4; l353 = l353 + 1) {
			fVec132[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 2; l354 = l354 + 1) {
			fVec133[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 2; l355 = l355 + 1) {
			fRec183[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 2; l356 = l356 + 1) {
			fVec134[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 2; l357 = l357 + 1) {
			fRec182[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 2; l358 = l358 + 1) {
			fRec181[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 2; l359 = l359 + 1) {
			fRec228[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 2; l360 = l360 + 1) {
			fRec227[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 2; l361 = l361 + 1) {
			fRec230[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec229[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 2; l363 = l363 + 1) {
			fRec232[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2; l364 = l364 + 1) {
			fRec231[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 2; l365 = l365 + 1) {
			fRec234[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 2; l366 = l366 + 1) {
			fRec233[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 2; l367 = l367 + 1) {
			fRec236[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 2; l368 = l368 + 1) {
			fRec235[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 2; l369 = l369 + 1) {
			fRec238[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 2; l370 = l370 + 1) {
			fRec237[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 2; l371 = l371 + 1) {
			fRec240[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 2; l372 = l372 + 1) {
			fRec239[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 2; l373 = l373 + 1) {
			fRec242[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 2; l374 = l374 + 1) {
			fRec241[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 2; l375 = l375 + 1) {
			fRec244[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 2; l376 = l376 + 1) {
			fRec243[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			fRec246[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 2; l378 = l378 + 1) {
			fRec245[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 2; l379 = l379 + 1) {
			fRec248[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fRec247[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 2; l381 = l381 + 1) {
			fRec250[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 2; l382 = l382 + 1) {
			fRec249[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 2; l383 = l383 + 1) {
			fVec135[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 2; l384 = l384 + 1) {
			fRec226[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 2; l385 = l385 + 1) {
			fVec136[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 2; l386 = l386 + 1) {
			fRec225[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 2; l387 = l387 + 1) {
			fRec224[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 2; l388 = l388 + 1) {
			fRec255[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 2; l389 = l389 + 1) {
			fRec254[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 2; l390 = l390 + 1) {
			fRec257[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 2; l391 = l391 + 1) {
			fRec256[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 2; l392 = l392 + 1) {
			fRec259[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 2; l393 = l393 + 1) {
			fRec258[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 2; l394 = l394 + 1) {
			fRec261[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 2; l395 = l395 + 1) {
			fRec260[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 2; l396 = l396 + 1) {
			fRec263[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 2; l397 = l397 + 1) {
			fRec262[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 2; l398 = l398 + 1) {
			fRec265[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 2; l399 = l399 + 1) {
			fRec264[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 2; l400 = l400 + 1) {
			fRec267[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 2; l401 = l401 + 1) {
			fRec266[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 2; l402 = l402 + 1) {
			fRec269[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 2; l403 = l403 + 1) {
			fRec268[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 2; l404 = l404 + 1) {
			fRec271[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 2; l405 = l405 + 1) {
			fRec270[l405] = 0.0f;
		}
		for (int l406 = 0; l406 < 2; l406 = l406 + 1) {
			fRec273[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 2; l407 = l407 + 1) {
			fRec272[l407] = 0.0f;
		}
		for (int l408 = 0; l408 < 2; l408 = l408 + 1) {
			fRec275[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 2; l409 = l409 + 1) {
			fRec274[l409] = 0.0f;
		}
		for (int l410 = 0; l410 < 2; l410 = l410 + 1) {
			fVec137[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 2; l411 = l411 + 1) {
			fRec276[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 2; l412 = l412 + 1) {
			fVec138[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 2; l413 = l413 + 1) {
			fRec253[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 2; l414 = l414 + 1) {
			fVec139[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 2; l415 = l415 + 1) {
			fRec252[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 2; l416 = l416 + 1) {
			fRec251[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 2; l417 = l417 + 1) {
			fVec140[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 2; l418 = l418 + 1) {
			fRec280[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 2; l419 = l419 + 1) {
			fVec141[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 2; l420 = l420 + 1) {
			fRec281[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 2; l421 = l421 + 1) {
			fVec142[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 2; l422 = l422 + 1) {
			fRec282[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 2; l423 = l423 + 1) {
			fVec143[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 2; l424 = l424 + 1) {
			fRec283[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 2; l425 = l425 + 1) {
			fVec144[l425] = 0.0f;
		}
		for (int l426 = 0; l426 < 2; l426 = l426 + 1) {
			fRec284[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 2; l427 = l427 + 1) {
			fVec145[l427] = 0.0f;
		}
		for (int l428 = 0; l428 < 2; l428 = l428 + 1) {
			fRec285[l428] = 0.0f;
		}
		for (int l429 = 0; l429 < 2; l429 = l429 + 1) {
			fVec146[l429] = 0.0f;
		}
		for (int l430 = 0; l430 < 2; l430 = l430 + 1) {
			fRec286[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 2; l431 = l431 + 1) {
			fVec147[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 2; l432 = l432 + 1) {
			fRec287[l432] = 0.0f;
		}
		for (int l433 = 0; l433 < 2; l433 = l433 + 1) {
			fVec148[l433] = 0.0f;
		}
		for (int l434 = 0; l434 < 2; l434 = l434 + 1) {
			fRec288[l434] = 0.0f;
		}
		for (int l435 = 0; l435 < 2; l435 = l435 + 1) {
			fVec149[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 2; l436 = l436 + 1) {
			fRec289[l436] = 0.0f;
		}
		for (int l437 = 0; l437 < 2; l437 = l437 + 1) {
			fVec150[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 2; l438 = l438 + 1) {
			fRec290[l438] = 0.0f;
		}
		for (int l439 = 0; l439 < 2; l439 = l439 + 1) {
			fVec151[l439] = 0.0f;
		}
		for (int l440 = 0; l440 < 2; l440 = l440 + 1) {
			fRec279[l440] = 0.0f;
		}
		for (int l441 = 0; l441 < 2; l441 = l441 + 1) {
			fVec152[l441] = 0.0f;
		}
		for (int l442 = 0; l442 < 2; l442 = l442 + 1) {
			fRec278[l442] = 0.0f;
		}
		for (int l443 = 0; l443 < 2; l443 = l443 + 1) {
			fRec277[l443] = 0.0f;
		}
		for (int l444 = 0; l444 < 2; l444 = l444 + 1) {
			fRec292[l444] = 0.0f;
		}
		for (int l445 = 0; l445 < 2; l445 = l445 + 1) {
			fVec153[l445] = 0.0f;
		}
		for (int l446 = 0; l446 < 2; l446 = l446 + 1) {
			fRec291[l446] = 0.0f;
		}
		for (int l447 = 0; l447 < 2; l447 = l447 + 1) {
			fRec294[l447] = 0.0f;
		}
		for (int l448 = 0; l448 < 2; l448 = l448 + 1) {
			fVec154[l448] = 0.0f;
		}
		for (int l449 = 0; l449 < 2; l449 = l449 + 1) {
			fRec293[l449] = 0.0f;
		}
		for (int l450 = 0; l450 < 2; l450 = l450 + 1) {
			fRec296[l450] = 0.0f;
		}
		for (int l451 = 0; l451 < 2; l451 = l451 + 1) {
			fVec155[l451] = 0.0f;
		}
		for (int l452 = 0; l452 < 2; l452 = l452 + 1) {
			fRec295[l452] = 0.0f;
		}
		for (int l453 = 0; l453 < 2; l453 = l453 + 1) {
			fRec298[l453] = 0.0f;
		}
		for (int l454 = 0; l454 < 2; l454 = l454 + 1) {
			fVec156[l454] = 0.0f;
		}
		for (int l455 = 0; l455 < 2; l455 = l455 + 1) {
			fRec297[l455] = 0.0f;
		}
		for (int l456 = 0; l456 < 2; l456 = l456 + 1) {
			fVec157[l456] = 0.0f;
		}
		for (int l457 = 0; l457 < 2; l457 = l457 + 1) {
			fRec299[l457] = 0.0f;
		}
		for (int l458 = 0; l458 < 2; l458 = l458 + 1) {
			fVec158[l458] = 0.0f;
		}
		for (int l459 = 0; l459 < 2; l459 = l459 + 1) {
			fRec300[l459] = 0.0f;
		}
		for (int l460 = 0; l460 < 2; l460 = l460 + 1) {
			fVec159[l460] = 0.0f;
		}
		for (int l461 = 0; l461 < 2; l461 = l461 + 1) {
			fRec301[l461] = 0.0f;
		}
		for (int l462 = 0; l462 < 2; l462 = l462 + 1) {
			iRec307[l462] = 0;
		}
		for (int l463 = 0; l463 < 2; l463 = l463 + 1) {
			fRec304[l463] = 0.0f;
		}
		for (int l464 = 0; l464 < 2; l464 = l464 + 1) {
			iRec305[l464] = 0;
		}
		for (int l465 = 0; l465 < 2; l465 = l465 + 1) {
			fRec306[l465] = 0.0f;
		}
		for (int l466 = 0; l466 < 2; l466 = l466 + 1) {
			fVec160[l466] = 0.0f;
		}
		for (int l467 = 0; l467 < 2; l467 = l467 + 1) {
			fRec303[l467] = 0.0f;
		}
		for (int l468 = 0; l468 < 2; l468 = l468 + 1) {
			fRec302[l468] = 0.0f;
		}
		for (int l469 = 0; l469 < 5; l469 = l469 + 1) {
			fVec161[l469] = 0.0f;
		}
		for (int l470 = 0; l470 < 2; l470 = l470 + 1) {
			fRec308[l470] = 0.0f;
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
		ui_interface->addButton("A0", &fButton6);
		ui_interface->addButton("A1", &fButton55);
		ui_interface->addButton("A2", &fButton43);
		ui_interface->addButton("A3", &fButton31);
		ui_interface->addButton("A4", &fButton19);
		ui_interface->addButton("C0", &fButton15);
		ui_interface->addButton("C1", &fButton3);
		ui_interface->addButton("C2", &fButton52);
		ui_interface->addButton("C3", &fButton40);
		ui_interface->addButton("C4", &fButton28);
		ui_interface->addButton("D0", &fButton13);
		ui_interface->addButton("D1", &fButton1);
		ui_interface->addButton("D2", &fButton50);
		ui_interface->addButton("D3", &fButton38);
		ui_interface->addButton("D4", &fButton26);
		ui_interface->addButton("F0", &fButton10);
		ui_interface->addButton("F1", &fButton59);
		ui_interface->addButton("F2", &fButton47);
		ui_interface->addButton("F3", &fButton35);
		ui_interface->addButton("F4", &fButton23);
		ui_interface->addButton("G0", &fButton8);
		ui_interface->addButton("G1", &fButton57);
		ui_interface->addButton("G2", &fButton45);
		ui_interface->addButton("G3", &fButton33);
		ui_interface->addButton("G4", &fButton21);
		ui_interface->declare(0, "2", "");
		ui_interface->openVerticalBox("vibrato");
		ui_interface->declare(&fHslider1, "1", "");
		ui_interface->addHorizontalSlider("depth", &fHslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.2f));
		ui_interface->declare(&fHslider0, "2", "");
		ui_interface->addHorizontalSlider("speed", &fHslider0, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.2f));
		ui_interface->closeBox();
		ui_interface->addButton("a0", &fButton7);
		ui_interface->addButton("a1", &fButton56);
		ui_interface->addButton("a2", &fButton44);
		ui_interface->addButton("a3", &fButton32);
		ui_interface->addButton("a4", &fButton20);
		ui_interface->addButton("b0", &fButton5);
		ui_interface->addButton("b1", &fButton54);
		ui_interface->addButton("b2", &fButton42);
		ui_interface->addButton("b3", &fButton30);
		ui_interface->addButton("b4", &fButton18);
		ui_interface->addHorizontalSlider("balance", &fHslider5, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->openHorizontalBox("bass");
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->addVerticalSlider("16' b", &fVslider1, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider2, "2", "");
		ui_interface->addVerticalSlider("8' b", &fVslider2, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fHslider4, "3", "");
		ui_interface->addHorizontalSlider("bass manual", &fHslider4, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider0, "3", "");
		ui_interface->addVerticalSlider("bass volume", &fVslider0, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->closeBox();
		ui_interface->addButton("c0", &fButton16);
		ui_interface->addButton("c1", &fButton4);
		ui_interface->addButton("c2", &fButton53);
		ui_interface->addButton("c3", &fButton41);
		ui_interface->addButton("c4", &fButton29);
		ui_interface->addButton("c5", &fButton17);
		ui_interface->addButton("d0", &fButton14);
		ui_interface->addButton("d1", &fButton2);
		ui_interface->addButton("d2", &fButton51);
		ui_interface->addButton("d3", &fButton39);
		ui_interface->addButton("d4", &fButton27);
		ui_interface->addButton("e0", &fButton12);
		ui_interface->addButton("e1", &fButton0);
		ui_interface->addButton("e2", &fButton49);
		ui_interface->addButton("e3", &fButton37);
		ui_interface->addButton("e4", &fButton25);
		ui_interface->addButton("f0", &fButton11);
		ui_interface->addButton("f1", &fButton60);
		ui_interface->addButton("f2", &fButton48);
		ui_interface->addButton("f3", &fButton36);
		ui_interface->addButton("f4", &fButton24);
		ui_interface->addButton("g0", &fButton9);
		ui_interface->addButton("g1", &fButton58);
		ui_interface->addButton("g2", &fButton46);
		ui_interface->addButton("g3", &fButton34);
		ui_interface->addButton("g4", &fButton22);
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
		ui_interface->declare(&fVslider4, "3", "");
		ui_interface->addVerticalSlider("8' ii", &fVslider4, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider5, "4", "");
		ui_interface->addVerticalSlider("4' ii", &fVslider5, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider6, "5", "");
		ui_interface->addVerticalSlider("2' ii", &fVslider6, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->closeBox();
		ui_interface->addHorizontalSlider("percussive", &fHslider6, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->addHorizontalSlider("pitch", &fHslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(-1.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.05f));
		ui_interface->addHorizontalSlider("realism", &fHslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->addHorizontalSlider("volume", &fHslider7, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		FAUSTFLOAT* output2 = outputs[2];
		float fSlow0 = 0.02f * float(fVslider0);
		float fSlow1 = float(fButton0);
		float fSlow2 = fConst1 * (3.0f * float(fHslider0) + 5.0f);
		float fSlow3 = 0.0149f * float(fHslider1) + 0.0001f;
		float fSlow4 = 0.03f * float(fHslider2);
		float fSlow5 = float(fHslider3);
		int iSlow6 = fSlow5 > 0.16666667f;
		float fSlow7 = ((iSlow6) ? 1.000064f : 1.0f);
		float fSlow8 = float(fButton1);
		float fSlow9 = ((iSlow6) ? 1.001135f : 1.0f);
		float fSlow10 = float(fButton2);
		float fSlow11 = ((iSlow6) ? 0.999484f : 1.0f);
		float fSlow12 = float(fButton3);
		float fSlow13 = ((iSlow6) ? 1.003796f : 1.0f);
		float fSlow14 = float(fButton4);
		float fSlow15 = ((iSlow6) ? 1.001383f : 1.0f);
		float fSlow16 = float(fButton5);
		float fSlow17 = ((iSlow6) ? 1.003118f : 1.0f);
		float fSlow18 = float(fButton6);
		float fSlow19 = ((iSlow6) ? 0.996945f : 1.0f);
		float fSlow20 = float(fButton7);
		float fSlow21 = ((iSlow6) ? 1.002464f : 1.0f);
		float fSlow22 = float(fButton8);
		float fSlow23 = ((iSlow6) ? 1.000562f : 1.0f);
		float fSlow24 = float(fButton9);
		float fSlow25 = ((iSlow6) ? 0.997294f : 1.0f);
		float fSlow26 = float(fButton10);
		float fSlow27 = ((iSlow6) ? 0.997199f : 1.0f);
		float fSlow28 = float(fButton11);
		float fSlow29 = ((iSlow6) ? 0.998889f : 1.0f);
		float fSlow30 = float(fButton12);
		float fSlow31 = float(fButton13);
		float fSlow32 = float(fButton14);
		float fSlow33 = float(fButton15);
		float fSlow34 = float(fButton16);
		float fSlow35 = float(fVslider1);
		float fSlow36 = fSlow35 - 2.81f * (mydsp_faustpower2_f(fSlow35) - mydsp_faustpower3_f(fSlow35));
		float fSlow37 = float(fVslider2);
		float fSlow38 = fSlow37 - 2.81f * (mydsp_faustpower2_f(fSlow37) - mydsp_faustpower3_f(fSlow37));
		float fSlow39 = float(fHslider4);
		float fSlow40 = float(fButton17);
		float fSlow41 = float(fButton18);
		float fSlow42 = float(fButton19);
		float fSlow43 = float(fButton20);
		float fSlow44 = float(fButton21);
		float fSlow45 = float(fButton22);
		float fSlow46 = float(fButton23);
		float fSlow47 = float(fButton24);
		float fSlow48 = float(fButton25);
		float fSlow49 = float(fButton26);
		float fSlow50 = float(fButton27);
		float fSlow51 = float(fButton28);
		float fSlow52 = float(fButton29);
		float fSlow53 = float(fButton30);
		float fSlow54 = float(fButton31);
		float fSlow55 = float(fButton32);
		float fSlow56 = float(fButton33);
		float fSlow57 = float(fButton34);
		float fSlow58 = float(fButton35);
		float fSlow59 = float(fButton36);
		float fSlow60 = float(fButton37);
		float fSlow61 = float(fButton38);
		float fSlow62 = float(fButton39);
		float fSlow63 = float(fButton40);
		float fSlow64 = float(fButton41);
		float fSlow65 = float(fButton42);
		float fSlow66 = float(fButton43);
		float fSlow67 = float(fButton44);
		float fSlow68 = float(fButton45);
		float fSlow69 = float(fButton46);
		float fSlow70 = float(fButton47);
		float fSlow71 = float(fButton48);
		float fSlow72 = float(fButton49);
		float fSlow73 = float(fButton50);
		float fSlow74 = float(fButton51);
		float fSlow75 = float(fButton52);
		float fSlow76 = float(fButton53);
		float fSlow77 = float(fButton54);
		float fSlow78 = float(fButton55);
		float fSlow79 = float(fButton56);
		float fSlow80 = float(fButton57);
		float fSlow81 = float(fButton58);
		float fSlow82 = float(fButton59);
		float fSlow83 = float(fButton60);
		float fSlow84 = 1.0f - fSlow39;
		float fSlow85 = ((fSlow5 >= 0.8333333f) ? 1.0f : 0.0f);
		float fSlow86 = float(fVslider3);
		float fSlow87 = fSlow86 - 2.81f * (mydsp_faustpower2_f(fSlow86) - mydsp_faustpower3_f(fSlow86));
		float fSlow88 = float(fVslider4);
		float fSlow89 = fSlow88 - 2.81f * (mydsp_faustpower2_f(fSlow88) - mydsp_faustpower3_f(fSlow88));
		float fSlow90 = float(fVslider5);
		float fSlow91 = fSlow90 - 2.81f * (mydsp_faustpower2_f(fSlow90) - mydsp_faustpower3_f(fSlow90));
		float fSlow92 = float(fVslider6);
		float fSlow93 = fSlow92 - 2.81f * (mydsp_faustpower2_f(fSlow92) - mydsp_faustpower3_f(fSlow92));
		float fSlow94 = 0.96153843f * float(fVslider7);
		float fSlow95 = 0.6f * (0.9807692f - fSlow94);
		float fSlow96 = 0.45833334f * fSlow87;
		float fSlow97 = 0.45833334f * fSlow89;
		float fSlow98 = 0.45833334f * fSlow91;
		float fSlow99 = 0.45833334f * fSlow93;
		float fSlow100 = fSlow94 + 0.01923077f;
		float fSlow101 = float(fHslider5);
		float fSlow102 = 2.5f * fSlow101;
		float fSlow103 = float(fVslider8);
		float fSlow104 = fSlow103 - 2.81f * (mydsp_faustpower2_f(fSlow103) - mydsp_faustpower3_f(fSlow103));
		float fSlow105 = float(fVslider9);
		float fSlow106 = fSlow105 - 2.81f * (mydsp_faustpower2_f(fSlow105) - mydsp_faustpower3_f(fSlow105));
		float fSlow107 = float(fVslider10);
		float fSlow108 = fSlow107 - 2.81f * (mydsp_faustpower2_f(fSlow107) - mydsp_faustpower3_f(fSlow107));
		float fSlow109 = float(fVslider11);
		float fSlow110 = fSlow109 - 2.81f * (mydsp_faustpower2_f(fSlow109) - mydsp_faustpower3_f(fSlow109));
		float fSlow111 = float(fVslider12);
		float fSlow112 = fSlow111 - 2.81f * (mydsp_faustpower2_f(fSlow111) - mydsp_faustpower3_f(fSlow111));
		float fSlow113 = float(fVslider13);
		float fSlow114 = fSlow113 - 2.81f * (mydsp_faustpower2_f(fSlow113) - mydsp_faustpower3_f(fSlow113));
		float fSlow115 = float(fVslider14);
		float fSlow116 = fSlow115 - 2.81f * (mydsp_faustpower2_f(fSlow115) - mydsp_faustpower3_f(fSlow115));
		float fSlow117 = 1.0f - fSlow101;
		float fSlow118 = ((fSlow5 > 0.5f) ? 0.01357f : 0.0f);
		float fSlow119 = 4.5f * float(fHslider6);
		float fSlow120 = 0.02f * mydsp_faustpower2_f(float(fHslider7));
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec0[0] = fSlow0 + 0.98f * fRec0[1];
			fVec0[0] = fSlow1;
			float fTemp0 = fSlow1 + fVec0[3] + fVec0[1] + fVec0[2];
			fRec6[0] = fSlow2 + ((fRec6[1] > 1.0f) ? fRec6[1] + -1.0f : fRec6[1]);
			float fTemp1 = fSlow4 + fSlow3 * std::sin(6.2831855f * fRec6[0]) + 1.0f;
			float fTemp2 = fRec5[1] + fConst2 * fSlow7 * fTemp1;
			fRec5[0] = ((fTemp2 > 1.0f) ? fTemp2 + -1.0f : fTemp2);
			iRec4[0] = (((fRec5[0] - fRec5[1]) < 0.0f) ? 1 - iRec4[1] : iRec4[1]);
			float fTemp3 = fRec5[0] + float(iRec4[0]);
			fVec1[0] = fTemp3;
			float fTemp4 = 0.5f * fTemp3;
			iRec7[0] = (((0.5f * (fTemp3 - fVec1[1])) < 0.0f) ? 1 - iRec7[1] : iRec7[1]);
			float fTemp5 = float(iRec7[0]) + fTemp4;
			fVec2[0] = fTemp5;
			float fTemp6 = 0.5f * fTemp5;
			iRec8[0] = (((0.5f * (fTemp5 - fVec2[1])) < 0.0f) ? 1 - iRec8[1] : iRec8[1]);
			float fTemp7 = float(iRec8[0]) + fTemp6;
			fVec3[0] = fTemp7;
			float fTemp8 = 0.5f * fTemp7;
			iRec9[0] = (((0.5f * (fTemp7 - fVec3[1])) < 0.0f) ? 1 - iRec9[1] : iRec9[1]);
			float fTemp9 = float(iRec9[0]) + fTemp8;
			fVec4[0] = fTemp9;
			float fTemp10 = 0.5f * fTemp9;
			fRec3[0] = fRec3[1] + fConst3 * (yc20_get_sample(fTemp10, 4, 0) - fRec3[1]);
			fRec2[0] = fConst5 * (fRec2[1] + (fRec3[0] - fRec3[1]));
			fVec5[0] = fSlow8;
			float fTemp11 = fSlow8 + fVec5[3] + fVec5[1] + fVec5[2];
			float fTemp12 = fRec13[1] + fConst6 * fSlow9 * fTemp1;
			fRec13[0] = ((fTemp12 > 1.0f) ? fTemp12 + -1.0f : fTemp12);
			iRec12[0] = (((fRec13[0] - fRec13[1]) < 0.0f) ? 1 - iRec12[1] : iRec12[1]);
			float fTemp13 = fRec13[0] + float(iRec12[0]);
			fVec6[0] = fTemp13;
			float fTemp14 = 0.5f * fTemp13;
			iRec14[0] = (((0.5f * (fTemp13 - fVec6[1])) < 0.0f) ? 1 - iRec14[1] : iRec14[1]);
			float fTemp15 = float(iRec14[0]) + fTemp14;
			fVec7[0] = fTemp15;
			float fTemp16 = 0.5f * fTemp15;
			iRec15[0] = (((0.5f * (fTemp15 - fVec7[1])) < 0.0f) ? 1 - iRec15[1] : iRec15[1]);
			float fTemp17 = float(iRec15[0]) + fTemp16;
			fVec8[0] = fTemp17;
			float fTemp18 = 0.5f * fTemp17;
			iRec16[0] = (((0.5f * (fTemp17 - fVec8[1])) < 0.0f) ? 1 - iRec16[1] : iRec16[1]);
			float fTemp19 = float(iRec16[0]) + fTemp18;
			fVec9[0] = fTemp19;
			float fTemp20 = 0.5f * fTemp19;
			fRec11[0] = fRec11[1] + fConst7 * (yc20_get_sample(fTemp20, 3, 0) - fRec11[1]);
			fRec10[0] = fConst5 * (fRec10[1] + (fRec11[0] - fRec11[1]));
			fVec10[0] = fSlow10;
			float fTemp21 = fSlow10 + fVec10[3] + fVec10[1] + fVec10[2];
			float fTemp22 = fRec20[1] + fConst8 * fSlow11 * fTemp1;
			fRec20[0] = ((fTemp22 > 1.0f) ? fTemp22 + -1.0f : fTemp22);
			iRec19[0] = (((fRec20[0] - fRec20[1]) < 0.0f) ? 1 - iRec19[1] : iRec19[1]);
			float fTemp23 = fRec20[0] + float(iRec19[0]);
			fVec11[0] = fTemp23;
			float fTemp24 = 0.5f * fTemp23;
			iRec21[0] = (((0.5f * (fTemp23 - fVec11[1])) < 0.0f) ? 1 - iRec21[1] : iRec21[1]);
			float fTemp25 = float(iRec21[0]) + fTemp24;
			fVec12[0] = fTemp25;
			float fTemp26 = 0.5f * fTemp25;
			iRec22[0] = (((0.5f * (fTemp25 - fVec12[1])) < 0.0f) ? 1 - iRec22[1] : iRec22[1]);
			float fTemp27 = float(iRec22[0]) + fTemp26;
			fVec13[0] = fTemp27;
			float fTemp28 = 0.5f * fTemp27;
			iRec23[0] = (((0.5f * (fTemp27 - fVec13[1])) < 0.0f) ? 1 - iRec23[1] : iRec23[1]);
			float fTemp29 = float(iRec23[0]) + fTemp28;
			fVec14[0] = fTemp29;
			float fTemp30 = 0.5f * fTemp29;
			fRec18[0] = fRec18[1] + fConst7 * (yc20_get_sample(fTemp30, 2, 0) - fRec18[1]);
			fRec17[0] = fConst5 * (fRec17[1] + (fRec18[0] - fRec18[1]));
			fVec15[0] = fSlow12;
			float fTemp31 = fSlow12 + fVec15[3] + fVec15[1] + fVec15[2];
			float fTemp32 = fRec27[1] + fConst9 * fSlow13 * fTemp1;
			fRec27[0] = ((fTemp32 > 1.0f) ? fTemp32 + -1.0f : fTemp32);
			iRec26[0] = (((fRec27[0] - fRec27[1]) < 0.0f) ? 1 - iRec26[1] : iRec26[1]);
			float fTemp33 = fRec27[0] + float(iRec26[0]);
			fVec16[0] = fTemp33;
			float fTemp34 = 0.5f * fTemp33;
			iRec28[0] = (((0.5f * (fTemp33 - fVec16[1])) < 0.0f) ? 1 - iRec28[1] : iRec28[1]);
			float fTemp35 = float(iRec28[0]) + fTemp34;
			fVec17[0] = fTemp35;
			float fTemp36 = 0.5f * fTemp35;
			iRec29[0] = (((0.5f * (fTemp35 - fVec17[1])) < 0.0f) ? 1 - iRec29[1] : iRec29[1]);
			float fTemp37 = float(iRec29[0]) + fTemp36;
			fVec18[0] = fTemp37;
			float fTemp38 = 0.5f * fTemp37;
			iRec30[0] = (((0.5f * (fTemp37 - fVec18[1])) < 0.0f) ? 1 - iRec30[1] : iRec30[1]);
			float fTemp39 = float(iRec30[0]) + fTemp38;
			fVec19[0] = fTemp39;
			float fTemp40 = 0.5f * fTemp39;
			fRec25[0] = fRec25[1] + fConst7 * (yc20_get_sample(fTemp40, 1, 0) - fRec25[1]);
			fRec24[0] = fConst5 * (fRec24[1] + (fRec25[0] - fRec25[1]));
			fVec20[0] = fSlow14;
			float fTemp41 = fSlow14 + fVec20[3] + fVec20[1] + fVec20[2];
			float fTemp42 = fRec34[1] + fConst10 * fSlow15 * fTemp1;
			fRec34[0] = ((fTemp42 > 1.0f) ? fTemp42 + -1.0f : fTemp42);
			iRec33[0] = (((fRec34[0] - fRec34[1]) < 0.0f) ? 1 - iRec33[1] : iRec33[1]);
			float fTemp43 = fRec34[0] + float(iRec33[0]);
			fVec21[0] = fTemp43;
			float fTemp44 = 0.5f * fTemp43;
			iRec35[0] = (((0.5f * (fTemp43 - fVec21[1])) < 0.0f) ? 1 - iRec35[1] : iRec35[1]);
			float fTemp45 = float(iRec35[0]) + fTemp44;
			fVec22[0] = fTemp45;
			float fTemp46 = 0.5f * fTemp45;
			iRec36[0] = (((0.5f * (fTemp45 - fVec22[1])) < 0.0f) ? 1 - iRec36[1] : iRec36[1]);
			float fTemp47 = float(iRec36[0]) + fTemp46;
			fVec23[0] = fTemp47;
			float fTemp48 = 0.5f * fTemp47;
			iRec37[0] = (((0.5f * (fTemp47 - fVec23[1])) < 0.0f) ? 1 - iRec37[1] : iRec37[1]);
			float fTemp49 = float(iRec37[0]) + fTemp48;
			fVec24[0] = fTemp49;
			float fTemp50 = 0.5f * fTemp49;
			fRec32[0] = fRec32[1] + fConst7 * (yc20_get_sample(fTemp50, 0, 0) - fRec32[1]);
			fRec31[0] = fConst5 * (fRec31[1] + (fRec32[0] - fRec32[1]));
			fVec25[0] = fSlow16;
			float fTemp51 = fSlow16 + fVec25[3] + fVec25[1] + fVec25[2];
			float fTemp52 = fRec41[1] + fConst11 * fSlow17 * fTemp1;
			fRec41[0] = ((fTemp52 > 1.0f) ? fTemp52 + -1.0f : fTemp52);
			iRec40[0] = (((fRec41[0] - fRec41[1]) < 0.0f) ? 1 - iRec40[1] : iRec40[1]);
			float fTemp53 = fRec41[0] + float(iRec40[0]);
			fVec26[0] = fTemp53;
			float fTemp54 = 0.5f * fTemp53;
			iRec42[0] = (((0.5f * (fTemp53 - fVec26[1])) < 0.0f) ? 1 - iRec42[1] : iRec42[1]);
			float fTemp55 = float(iRec42[0]) + fTemp54;
			fVec27[0] = fTemp55;
			float fTemp56 = 0.5f * fTemp55;
			iRec43[0] = (((0.5f * (fTemp55 - fVec27[1])) < 0.0f) ? 1 - iRec43[1] : iRec43[1]);
			float fTemp57 = float(iRec43[0]) + fTemp56;
			fVec28[0] = fTemp57;
			float fTemp58 = 0.5f * fTemp57;
			iRec44[0] = (((0.5f * (fTemp57 - fVec28[1])) < 0.0f) ? 1 - iRec44[1] : iRec44[1]);
			float fTemp59 = float(iRec44[0]) + fTemp58;
			fVec29[0] = fTemp59;
			float fTemp60 = 0.5f * fTemp59;
			iRec45[0] = (((0.5f * (fTemp59 - fVec29[1])) < 0.0f) ? 1 - iRec45[1] : iRec45[1]);
			float fTemp61 = float(iRec45[0]) + fTemp60;
			fVec30[0] = fTemp61;
			float fTemp62 = 0.5f * fTemp61;
			fRec39[0] = fRec39[1] + fConst12 * (yc20_get_sample(fTemp62, 11, 0) - fRec39[1]);
			fRec38[0] = fConst13 * (fRec38[1] + (fRec39[0] - fRec39[1]));
			fVec31[0] = fSlow18;
			float fTemp63 = fSlow18 + fVec31[3] + fVec31[1] + fVec31[2];
			float fTemp64 = fRec49[1] + fConst14 * fSlow19 * fTemp1;
			fRec49[0] = ((fTemp64 > 1.0f) ? fTemp64 + -1.0f : fTemp64);
			iRec48[0] = (((fRec49[0] - fRec49[1]) < 0.0f) ? 1 - iRec48[1] : iRec48[1]);
			float fTemp65 = fRec49[0] + float(iRec48[0]);
			fVec32[0] = fTemp65;
			float fTemp66 = 0.5f * fTemp65;
			iRec50[0] = (((0.5f * (fTemp65 - fVec32[1])) < 0.0f) ? 1 - iRec50[1] : iRec50[1]);
			float fTemp67 = float(iRec50[0]) + fTemp66;
			fVec33[0] = fTemp67;
			float fTemp68 = 0.5f * fTemp67;
			iRec51[0] = (((0.5f * (fTemp67 - fVec33[1])) < 0.0f) ? 1 - iRec51[1] : iRec51[1]);
			float fTemp69 = float(iRec51[0]) + fTemp68;
			fVec34[0] = fTemp69;
			float fTemp70 = 0.5f * fTemp69;
			iRec52[0] = (((0.5f * (fTemp69 - fVec34[1])) < 0.0f) ? 1 - iRec52[1] : iRec52[1]);
			float fTemp71 = float(iRec52[0]) + fTemp70;
			fVec35[0] = fTemp71;
			float fTemp72 = 0.5f * fTemp71;
			iRec53[0] = (((0.5f * (fTemp71 - fVec35[1])) < 0.0f) ? 1 - iRec53[1] : iRec53[1]);
			float fTemp73 = float(iRec53[0]) + fTemp72;
			fVec36[0] = fTemp73;
			float fTemp74 = 0.5f * fTemp73;
			fRec47[0] = fRec47[1] + fConst12 * (yc20_get_sample(fTemp74, 10, 0) - fRec47[1]);
			fRec46[0] = fConst13 * (fRec46[1] + (fRec47[0] - fRec47[1]));
			fVec37[0] = fSlow20;
			float fTemp75 = fSlow20 + fVec37[3] + fVec37[1] + fVec37[2];
			float fTemp76 = fRec57[1] + fConst15 * fSlow21 * fTemp1;
			fRec57[0] = ((fTemp76 > 1.0f) ? fTemp76 + -1.0f : fTemp76);
			iRec56[0] = (((fRec57[0] - fRec57[1]) < 0.0f) ? 1 - iRec56[1] : iRec56[1]);
			float fTemp77 = fRec57[0] + float(iRec56[0]);
			fVec38[0] = fTemp77;
			float fTemp78 = 0.5f * fTemp77;
			iRec58[0] = (((0.5f * (fTemp77 - fVec38[1])) < 0.0f) ? 1 - iRec58[1] : iRec58[1]);
			float fTemp79 = float(iRec58[0]) + fTemp78;
			fVec39[0] = fTemp79;
			float fTemp80 = 0.5f * fTemp79;
			iRec59[0] = (((0.5f * (fTemp79 - fVec39[1])) < 0.0f) ? 1 - iRec59[1] : iRec59[1]);
			float fTemp81 = float(iRec59[0]) + fTemp80;
			fVec40[0] = fTemp81;
			float fTemp82 = 0.5f * fTemp81;
			iRec60[0] = (((0.5f * (fTemp81 - fVec40[1])) < 0.0f) ? 1 - iRec60[1] : iRec60[1]);
			float fTemp83 = float(iRec60[0]) + fTemp82;
			fVec41[0] = fTemp83;
			float fTemp84 = 0.5f * fTemp83;
			iRec61[0] = (((0.5f * (fTemp83 - fVec41[1])) < 0.0f) ? 1 - iRec61[1] : iRec61[1]);
			float fTemp85 = float(iRec61[0]) + fTemp84;
			fVec42[0] = fTemp85;
			float fTemp86 = 0.5f * fTemp85;
			fRec55[0] = fRec55[1] + fConst12 * (yc20_get_sample(fTemp86, 9, 0) - fRec55[1]);
			fRec54[0] = fConst13 * (fRec54[1] + (fRec55[0] - fRec55[1]));
			fVec43[0] = fSlow22;
			float fTemp87 = fSlow22 + fVec43[3] + fVec43[1] + fVec43[2];
			float fTemp88 = fRec65[1] + fConst16 * fSlow23 * fTemp1;
			fRec65[0] = ((fTemp88 > 1.0f) ? fTemp88 + -1.0f : fTemp88);
			iRec64[0] = (((fRec65[0] - fRec65[1]) < 0.0f) ? 1 - iRec64[1] : iRec64[1]);
			float fTemp89 = fRec65[0] + float(iRec64[0]);
			fVec44[0] = fTemp89;
			float fTemp90 = 0.5f * fTemp89;
			iRec66[0] = (((0.5f * (fTemp89 - fVec44[1])) < 0.0f) ? 1 - iRec66[1] : iRec66[1]);
			float fTemp91 = float(iRec66[0]) + fTemp90;
			fVec45[0] = fTemp91;
			float fTemp92 = 0.5f * fTemp91;
			iRec67[0] = (((0.5f * (fTemp91 - fVec45[1])) < 0.0f) ? 1 - iRec67[1] : iRec67[1]);
			float fTemp93 = float(iRec67[0]) + fTemp92;
			fVec46[0] = fTemp93;
			float fTemp94 = 0.5f * fTemp93;
			iRec68[0] = (((0.5f * (fTemp93 - fVec46[1])) < 0.0f) ? 1 - iRec68[1] : iRec68[1]);
			float fTemp95 = float(iRec68[0]) + fTemp94;
			fVec47[0] = fTemp95;
			float fTemp96 = 0.5f * fTemp95;
			iRec69[0] = (((0.5f * (fTemp95 - fVec47[1])) < 0.0f) ? 1 - iRec69[1] : iRec69[1]);
			float fTemp97 = float(iRec69[0]) + fTemp96;
			fVec48[0] = fTemp97;
			float fTemp98 = 0.5f * fTemp97;
			fRec63[0] = fRec63[1] + fConst12 * (yc20_get_sample(fTemp98, 8, 0) - fRec63[1]);
			fRec62[0] = fConst13 * (fRec62[1] + (fRec63[0] - fRec63[1]));
			fVec49[0] = fSlow24;
			float fTemp99 = fSlow24 + fVec49[3] + fVec49[1] + fVec49[2];
			float fTemp100 = fRec73[1] + fConst17 * fSlow25 * fTemp1;
			fRec73[0] = ((fTemp100 > 1.0f) ? fTemp100 + -1.0f : fTemp100);
			iRec72[0] = (((fRec73[0] - fRec73[1]) < 0.0f) ? 1 - iRec72[1] : iRec72[1]);
			float fTemp101 = fRec73[0] + float(iRec72[0]);
			fVec50[0] = fTemp101;
			float fTemp102 = 0.5f * fTemp101;
			iRec74[0] = (((0.5f * (fTemp101 - fVec50[1])) < 0.0f) ? 1 - iRec74[1] : iRec74[1]);
			float fTemp103 = float(iRec74[0]) + fTemp102;
			fVec51[0] = fTemp103;
			float fTemp104 = 0.5f * fTemp103;
			iRec75[0] = (((0.5f * (fTemp103 - fVec51[1])) < 0.0f) ? 1 - iRec75[1] : iRec75[1]);
			float fTemp105 = float(iRec75[0]) + fTemp104;
			fVec52[0] = fTemp105;
			float fTemp106 = 0.5f * fTemp105;
			iRec76[0] = (((0.5f * (fTemp105 - fVec52[1])) < 0.0f) ? 1 - iRec76[1] : iRec76[1]);
			float fTemp107 = float(iRec76[0]) + fTemp106;
			fVec53[0] = fTemp107;
			float fTemp108 = 0.5f * fTemp107;
			iRec77[0] = (((0.5f * (fTemp107 - fVec53[1])) < 0.0f) ? 1 - iRec77[1] : iRec77[1]);
			float fTemp109 = float(iRec77[0]) + fTemp108;
			fVec54[0] = fTemp109;
			float fTemp110 = 0.5f * fTemp109;
			fRec71[0] = fRec71[1] + fConst18 * (yc20_get_sample(fTemp110, 7, 0) - fRec71[1]);
			fRec70[0] = fConst13 * (fRec70[1] + (fRec71[0] - fRec71[1]));
			fVec55[0] = fSlow26;
			float fTemp111 = fSlow26 + fVec55[3] + fVec55[1] + fVec55[2];
			float fTemp112 = fRec81[1] + fConst19 * fSlow27 * fTemp1;
			fRec81[0] = ((fTemp112 > 1.0f) ? fTemp112 + -1.0f : fTemp112);
			iRec80[0] = (((fRec81[0] - fRec81[1]) < 0.0f) ? 1 - iRec80[1] : iRec80[1]);
			float fTemp113 = fRec81[0] + float(iRec80[0]);
			fVec56[0] = fTemp113;
			float fTemp114 = 0.5f * fTemp113;
			iRec82[0] = (((0.5f * (fTemp113 - fVec56[1])) < 0.0f) ? 1 - iRec82[1] : iRec82[1]);
			float fTemp115 = float(iRec82[0]) + fTemp114;
			fVec57[0] = fTemp115;
			float fTemp116 = 0.5f * fTemp115;
			iRec83[0] = (((0.5f * (fTemp115 - fVec57[1])) < 0.0f) ? 1 - iRec83[1] : iRec83[1]);
			float fTemp117 = float(iRec83[0]) + fTemp116;
			fVec58[0] = fTemp117;
			float fTemp118 = 0.5f * fTemp117;
			iRec84[0] = (((0.5f * (fTemp117 - fVec58[1])) < 0.0f) ? 1 - iRec84[1] : iRec84[1]);
			float fTemp119 = float(iRec84[0]) + fTemp118;
			fVec59[0] = fTemp119;
			float fTemp120 = 0.5f * fTemp119;
			iRec85[0] = (((0.5f * (fTemp119 - fVec59[1])) < 0.0f) ? 1 - iRec85[1] : iRec85[1]);
			float fTemp121 = float(iRec85[0]) + fTemp120;
			fVec60[0] = fTemp121;
			float fTemp122 = 0.5f * fTemp121;
			fRec79[0] = fRec79[1] + fConst18 * (yc20_get_sample(fTemp122, 6, 0) - fRec79[1]);
			fRec78[0] = fConst13 * (fRec78[1] + (fRec79[0] - fRec79[1]));
			fVec61[0] = fSlow28;
			float fTemp123 = fSlow28 + fVec61[3] + fVec61[1] + fVec61[2];
			float fTemp124 = fRec89[1] + fConst20 * fSlow29 * fTemp1;
			fRec89[0] = ((fTemp124 > 1.0f) ? fTemp124 + -1.0f : fTemp124);
			iRec88[0] = (((fRec89[0] - fRec89[1]) < 0.0f) ? 1 - iRec88[1] : iRec88[1]);
			float fTemp125 = fRec89[0] + float(iRec88[0]);
			fVec62[0] = fTemp125;
			float fTemp126 = 0.5f * fTemp125;
			iRec90[0] = (((0.5f * (fTemp125 - fVec62[1])) < 0.0f) ? 1 - iRec90[1] : iRec90[1]);
			float fTemp127 = float(iRec90[0]) + fTemp126;
			fVec63[0] = fTemp127;
			float fTemp128 = 0.5f * fTemp127;
			iRec91[0] = (((0.5f * (fTemp127 - fVec63[1])) < 0.0f) ? 1 - iRec91[1] : iRec91[1]);
			float fTemp129 = float(iRec91[0]) + fTemp128;
			fVec64[0] = fTemp129;
			float fTemp130 = 0.5f * fTemp129;
			iRec92[0] = (((0.5f * (fTemp129 - fVec64[1])) < 0.0f) ? 1 - iRec92[1] : iRec92[1]);
			float fTemp131 = float(iRec92[0]) + fTemp130;
			fVec65[0] = fTemp131;
			float fTemp132 = 0.5f * fTemp131;
			iRec93[0] = (((0.5f * (fTemp131 - fVec65[1])) < 0.0f) ? 1 - iRec93[1] : iRec93[1]);
			float fTemp133 = float(iRec93[0]) + fTemp132;
			fVec66[0] = fTemp133;
			float fTemp134 = 0.5f * fTemp133;
			fRec87[0] = fRec87[1] + fConst18 * (yc20_get_sample(fTemp134, 5, 0) - fRec87[1]);
			fRec86[0] = fConst13 * (fRec86[1] + (fRec87[0] - fRec87[1]));
			fVec67[0] = fSlow30;
			float fTemp135 = fSlow30 + fVec67[3] + fVec67[1] + fVec67[2];
			iRec96[0] = (((0.5f * (fTemp9 - fVec4[1])) < 0.0f) ? 1 - iRec96[1] : iRec96[1]);
			float fTemp136 = float(iRec96[0]) + fTemp10;
			fVec68[0] = fTemp136;
			float fTemp137 = 0.5f * fTemp136;
			fRec95[0] = fRec95[1] + fConst18 * (yc20_get_sample(fTemp137, 4, 0) - fRec95[1]);
			fRec94[0] = fConst13 * (fRec94[1] + (fRec95[0] - fRec95[1]));
			fVec69[0] = fSlow31;
			float fTemp138 = fSlow31 + fVec69[3] + fVec69[1] + fVec69[2];
			iRec99[0] = (((0.5f * (fTemp19 - fVec9[1])) < 0.0f) ? 1 - iRec99[1] : iRec99[1]);
			float fTemp139 = float(iRec99[0]) + fTemp20;
			fVec70[0] = fTemp139;
			float fTemp140 = 0.5f * fTemp139;
			fRec98[0] = fRec98[1] + fConst21 * (yc20_get_sample(fTemp140, 3, 0) - fRec98[1]);
			fRec97[0] = fConst13 * (fRec97[1] + (fRec98[0] - fRec98[1]));
			fVec71[0] = fSlow32;
			float fTemp141 = fSlow32 + fVec71[3] + fVec71[1] + fVec71[2];
			iRec102[0] = (((0.5f * (fTemp29 - fVec14[1])) < 0.0f) ? 1 - iRec102[1] : iRec102[1]);
			float fTemp142 = float(iRec102[0]) + fTemp30;
			fVec72[0] = fTemp142;
			float fTemp143 = 0.5f * fTemp142;
			fRec101[0] = fRec101[1] + fConst21 * (yc20_get_sample(fTemp143, 2, 0) - fRec101[1]);
			fRec100[0] = fConst13 * (fRec100[1] + (fRec101[0] - fRec101[1]));
			fVec73[0] = fSlow33;
			float fTemp144 = fSlow33 + fVec73[3] + fVec73[1] + fVec73[2];
			iRec105[0] = (((0.5f * (fTemp39 - fVec19[1])) < 0.0f) ? 1 - iRec105[1] : iRec105[1]);
			float fTemp145 = float(iRec105[0]) + fTemp40;
			fVec74[0] = fTemp145;
			float fTemp146 = 0.5f * fTemp145;
			fRec104[0] = fRec104[1] + fConst21 * (yc20_get_sample(fTemp146, 1, 0) - fRec104[1]);
			fRec103[0] = fConst13 * (fRec103[1] + (fRec104[0] - fRec104[1]));
			fVec75[0] = fSlow34;
			float fTemp147 = fSlow34 + fVec75[3] + fVec75[1] + fVec75[2];
			iRec108[0] = (((0.5f * (fTemp49 - fVec24[1])) < 0.0f) ? 1 - iRec108[1] : iRec108[1]);
			float fTemp148 = float(iRec108[0]) + fTemp50;
			fVec76[0] = fTemp148;
			float fTemp149 = 0.5f * fTemp148;
			fRec107[0] = fRec107[1] + fConst21 * (yc20_get_sample(fTemp149, 0, 0) - fRec107[1]);
			fRec106[0] = fConst13 * (fRec106[1] + (fRec107[0] - fRec107[1]));
			float fTemp150 = fRec106[0] * fTemp147 + fRec103[0] * fTemp144 + fRec100[0] * fTemp141 + fRec97[0] * fTemp138 + fRec94[0] * fTemp135 + fRec86[0] * fTemp123 + fRec78[0] * fTemp111 + fRec70[0] * fTemp99 + fRec62[0] * fTemp87 + fRec54[0] * fTemp75 + fRec46[0] * fTemp63 + fRec38[0] * fTemp51 + fRec31[0] * fTemp41 + fRec24[0] * fTemp31 + fRec17[0] * fTemp21 + fRec10[0] * fTemp11 + fRec2[0] * fTemp0;
			iRec111[0] = (((0.5f * (fTemp61 - fVec30[1])) < 0.0f) ? 1 - iRec111[1] : iRec111[1]);
			float fTemp151 = float(iRec111[0]) + fTemp62;
			fVec77[0] = fTemp151;
			float fTemp152 = 0.5f * fTemp151;
			fRec110[0] = fRec110[1] + fConst21 * (yc20_get_sample(fTemp152, 11, 0) - fRec110[1]);
			fRec109[0] = fConst22 * (fRec109[1] + (fRec110[0] - fRec110[1]));
			iRec114[0] = (((0.5f * (fTemp73 - fVec36[1])) < 0.0f) ? 1 - iRec114[1] : iRec114[1]);
			float fTemp153 = float(iRec114[0]) + fTemp74;
			fVec78[0] = fTemp153;
			float fTemp154 = 0.5f * fTemp153;
			fRec113[0] = fRec113[1] + fConst21 * (yc20_get_sample(fTemp154, 10, 0) - fRec113[1]);
			fRec112[0] = fConst22 * (fRec112[1] + (fRec113[0] - fRec113[1]));
			iRec117[0] = (((0.5f * (fTemp85 - fVec42[1])) < 0.0f) ? 1 - iRec117[1] : iRec117[1]);
			float fTemp155 = float(iRec117[0]) + fTemp86;
			fVec79[0] = fTemp155;
			float fTemp156 = 0.5f * fTemp155;
			fRec116[0] = fRec116[1] + fConst21 * (yc20_get_sample(fTemp156, 9, 0) - fRec116[1]);
			fRec115[0] = fConst22 * (fRec115[1] + (fRec116[0] - fRec116[1]));
			iRec120[0] = (((0.5f * (fTemp97 - fVec48[1])) < 0.0f) ? 1 - iRec120[1] : iRec120[1]);
			float fTemp157 = float(iRec120[0]) + fTemp98;
			fVec80[0] = fTemp157;
			float fTemp158 = 0.5f * fTemp157;
			fRec119[0] = fRec119[1] + fConst21 * (yc20_get_sample(fTemp158, 8, 0) - fRec119[1]);
			fRec118[0] = fConst22 * (fRec118[1] + (fRec119[0] - fRec119[1]));
			iRec123[0] = (((0.5f * (fTemp109 - fVec54[1])) < 0.0f) ? 1 - iRec123[1] : iRec123[1]);
			float fTemp159 = float(iRec123[0]) + fTemp110;
			fVec81[0] = fTemp159;
			float fTemp160 = 0.5f * fTemp159;
			fRec122[0] = fRec122[1] + fConst23 * (yc20_get_sample(fTemp160, 7, 0) - fRec122[1]);
			fRec121[0] = fConst22 * (fRec121[1] + (fRec122[0] - fRec122[1]));
			iRec126[0] = (((0.5f * (fTemp121 - fVec60[1])) < 0.0f) ? 1 - iRec126[1] : iRec126[1]);
			float fTemp161 = float(iRec126[0]) + fTemp122;
			fVec82[0] = fTemp161;
			float fTemp162 = 0.5f * fTemp161;
			fRec125[0] = fRec125[1] + fConst23 * (yc20_get_sample(fTemp162, 6, 0) - fRec125[1]);
			fRec124[0] = fConst22 * (fRec124[1] + (fRec125[0] - fRec125[1]));
			iRec129[0] = (((0.5f * (fTemp133 - fVec66[1])) < 0.0f) ? 1 - iRec129[1] : iRec129[1]);
			float fTemp163 = float(iRec129[0]) + fTemp134;
			fVec83[0] = fTemp163;
			float fTemp164 = 0.5f * fTemp163;
			fRec128[0] = fRec128[1] + fConst23 * (yc20_get_sample(fTemp164, 5, 0) - fRec128[1]);
			fRec127[0] = fConst22 * (fRec127[1] + (fRec128[0] - fRec128[1]));
			iRec132[0] = (((0.5f * (fTemp136 - fVec68[1])) < 0.0f) ? 1 - iRec132[1] : iRec132[1]);
			float fTemp165 = float(iRec132[0]) + fTemp137;
			fVec84[0] = fTemp165;
			float fTemp166 = 0.5f * fTemp165;
			fRec131[0] = fRec131[1] + fConst23 * (yc20_get_sample(fTemp166, 4, 0) - fRec131[1]);
			fRec130[0] = fConst22 * (fRec130[1] + (fRec131[0] - fRec131[1]));
			iRec135[0] = (((0.5f * (fTemp139 - fVec70[1])) < 0.0f) ? 1 - iRec135[1] : iRec135[1]);
			float fTemp167 = float(iRec135[0]) + fTemp140;
			fVec85[0] = fTemp167;
			float fTemp168 = 0.5f * fTemp167;
			fRec134[0] = fRec134[1] + fConst24 * (yc20_get_sample(fTemp168, 3, 0) - fRec134[1]);
			fRec133[0] = fConst22 * (fRec133[1] + (fRec134[0] - fRec134[1]));
			iRec138[0] = (((0.5f * (fTemp142 - fVec72[1])) < 0.0f) ? 1 - iRec138[1] : iRec138[1]);
			float fTemp169 = float(iRec138[0]) + fTemp143;
			fVec86[0] = fTemp169;
			float fTemp170 = 0.5f * fTemp169;
			fRec137[0] = fRec137[1] + fConst24 * (yc20_get_sample(fTemp170, 2, 0) - fRec137[1]);
			fRec136[0] = fConst22 * (fRec136[1] + (fRec137[0] - fRec137[1]));
			iRec141[0] = (((0.5f * (fTemp145 - fVec74[1])) < 0.0f) ? 1 - iRec141[1] : iRec141[1]);
			float fTemp171 = float(iRec141[0]) + fTemp146;
			fVec87[0] = fTemp171;
			float fTemp172 = 0.5f * fTemp171;
			fRec140[0] = fRec140[1] + fConst24 * (yc20_get_sample(fTemp172, 1, 0) - fRec140[1]);
			fRec139[0] = fConst22 * (fRec139[1] + (fRec140[0] - fRec140[1]));
			iRec144[0] = (((0.5f * (fTemp148 - fVec76[1])) < 0.0f) ? 1 - iRec144[1] : iRec144[1]);
			float fTemp173 = float(iRec144[0]) + fTemp149;
			fVec88[0] = fTemp173;
			float fTemp174 = 0.5f * fTemp173;
			fRec143[0] = fRec143[1] + fConst24 * (yc20_get_sample(fTemp174, 0, 0) - fRec143[1]);
			fRec142[0] = fConst22 * (fRec142[1] + (fRec143[0] - fRec143[1]));
			float fTemp175 = fRec142[0] * fTemp147 + fRec139[0] * fTemp144 + fRec136[0] * fTemp141 + fRec133[0] * fTemp138 + fRec130[0] * fTemp135 + fRec127[0] * fTemp123 + fRec124[0] * fTemp111 + fRec121[0] * fTemp99 + fRec118[0] * fTemp87 + fRec115[0] * fTemp75 + fRec112[0] * fTemp63 + fRec109[0] * fTemp51 + fRec106[0] * fTemp41 + fRec103[0] * fTemp31 + fRec100[0] * fTemp21 + fRec97[0] * fTemp11 + fRec94[0] * fTemp0;
			iRec147[0] = (((0.5f * (fTemp151 - fVec77[1])) < 0.0f) ? 1 - iRec147[1] : iRec147[1]);
			fRec146[0] = fRec146[1] + fConst24 * (yc20_get_sample(0.5f * (float(iRec147[0]) + fTemp152), 11, 0) - fRec146[1]);
			fRec145[0] = fConst25 * (fRec145[1] + (fRec146[0] - fRec146[1]));
			iRec150[0] = (((0.5f * (fTemp153 - fVec78[1])) < 0.0f) ? 1 - iRec150[1] : iRec150[1]);
			fRec149[0] = fRec149[1] + fConst24 * (yc20_get_sample(0.5f * (float(iRec150[0]) + fTemp154), 10, 0) - fRec149[1]);
			fRec148[0] = fConst25 * (fRec148[1] + (fRec149[0] - fRec149[1]));
			iRec153[0] = (((0.5f * (fTemp155 - fVec79[1])) < 0.0f) ? 1 - iRec153[1] : iRec153[1]);
			fRec152[0] = fRec152[1] + fConst24 * (yc20_get_sample(0.5f * (float(iRec153[0]) + fTemp156), 9, 0) - fRec152[1]);
			fRec151[0] = fConst25 * (fRec151[1] + (fRec152[0] - fRec152[1]));
			iRec156[0] = (((0.5f * (fTemp157 - fVec80[1])) < 0.0f) ? 1 - iRec156[1] : iRec156[1]);
			fRec155[0] = fRec155[1] + fConst24 * (yc20_get_sample(0.5f * (float(iRec156[0]) + fTemp158), 8, 0) - fRec155[1]);
			fRec154[0] = fConst25 * (fRec154[1] + (fRec155[0] - fRec155[1]));
			iRec159[0] = (((0.5f * (fTemp159 - fVec81[1])) < 0.0f) ? 1 - iRec159[1] : iRec159[1]);
			fRec158[0] = fRec158[1] + fConst26 * (yc20_get_sample(0.5f * (float(iRec159[0]) + fTemp160), 7, 0) - fRec158[1]);
			fRec157[0] = fConst25 * (fRec157[1] + (fRec158[0] - fRec158[1]));
			iRec162[0] = (((0.5f * (fTemp161 - fVec82[1])) < 0.0f) ? 1 - iRec162[1] : iRec162[1]);
			fRec161[0] = fRec161[1] + fConst26 * (yc20_get_sample(0.5f * (float(iRec162[0]) + fTemp162), 6, 0) - fRec161[1]);
			fRec160[0] = fConst25 * (fRec160[1] + (fRec161[0] - fRec161[1]));
			iRec165[0] = (((0.5f * (fTemp163 - fVec83[1])) < 0.0f) ? 1 - iRec165[1] : iRec165[1]);
			fRec164[0] = fRec164[1] + fConst26 * (yc20_get_sample(0.5f * (float(iRec165[0]) + fTemp164), 5, 0) - fRec164[1]);
			fRec163[0] = fConst25 * (fRec163[1] + (fRec164[0] - fRec164[1]));
			iRec168[0] = (((0.5f * (fTemp165 - fVec84[1])) < 0.0f) ? 1 - iRec168[1] : iRec168[1]);
			fRec167[0] = fRec167[1] + fConst26 * (yc20_get_sample(0.5f * (float(iRec168[0]) + fTemp166), 4, 0) - fRec167[1]);
			fRec166[0] = fConst25 * (fRec166[1] + (fRec167[0] - fRec167[1]));
			iRec171[0] = (((0.5f * (fTemp167 - fVec85[1])) < 0.0f) ? 1 - iRec171[1] : iRec171[1]);
			fRec170[0] = fRec170[1] + fConst26 * (yc20_get_sample(0.5f * (float(iRec171[0]) + fTemp168), 3, 0) - fRec170[1]);
			fRec169[0] = fConst25 * (fRec169[1] + (fRec170[0] - fRec170[1]));
			iRec174[0] = (((0.5f * (fTemp169 - fVec86[1])) < 0.0f) ? 1 - iRec174[1] : iRec174[1]);
			fRec173[0] = fRec173[1] + fConst26 * (yc20_get_sample(0.5f * (float(iRec174[0]) + fTemp170), 2, 0) - fRec173[1]);
			fRec172[0] = fConst25 * (fRec172[1] + (fRec173[0] - fRec173[1]));
			iRec177[0] = (((0.5f * (fTemp171 - fVec87[1])) < 0.0f) ? 1 - iRec177[1] : iRec177[1]);
			fRec176[0] = fRec176[1] + fConst26 * (yc20_get_sample(0.5f * (float(iRec177[0]) + fTemp172), 1, 0) - fRec176[1]);
			fRec175[0] = fConst25 * (fRec175[1] + (fRec176[0] - fRec176[1]));
			iRec180[0] = (((0.5f * (fTemp173 - fVec88[1])) < 0.0f) ? 1 - iRec180[1] : iRec180[1]);
			fRec179[0] = fRec179[1] + fConst26 * (yc20_get_sample(0.5f * (float(iRec180[0]) + fTemp174), 0, 0) - fRec179[1]);
			fRec178[0] = fConst25 * (fRec178[1] + (fRec179[0] - fRec179[1]));
			float fTemp176 = fRec178[0] * fTemp147 + fRec175[0] * fTemp144 + fRec172[0] * fTemp141 + fRec169[0] * fTemp138 + fRec166[0] * fTemp135 + fRec163[0] * fTemp123 + fRec160[0] * fTemp111 + fRec157[0] * fTemp99 + fRec154[0] * fTemp87 + fRec151[0] * fTemp75 + fRec148[0] * fTemp63 + fRec145[0] * fTemp51 + fRec142[0] * fTemp41 + fRec139[0] * fTemp31 + fRec136[0] * fTemp21 + fRec133[0] * fTemp11 + fRec130[0] * fTemp0;
			fRec1[0] = fRec1[1] + fConst27 * (fSlow39 * (fSlow38 * (0.25f * fTemp175 + 0.125f * fTemp150) + fSlow36 * (0.25f * fTemp176 + 0.125f * fTemp175 + 0.0625f * fTemp150)) - fRec1[1]);
			float fTemp177 = fRec1[0] * (4.5f * fRec0[0] + 0.5f);
			fVec89[0] = fSlow40;
			float fTemp178 = fSlow40 + fVec89[3] + fVec89[1] + fVec89[2];
			fRec185[0] = fRec185[1] + fConst28 * (yc20_get_sample(fTemp46, 0, 0) - fRec185[1]);
			fRec184[0] = fConst5 * (fRec184[1] + (fRec185[0] - fRec185[1]));
			fVec90[0] = fSlow41;
			float fTemp179 = fSlow41 + fVec90[3] + fVec90[1] + fVec90[2];
			fRec187[0] = fRec187[1] + fConst29 * (yc20_get_sample(fTemp58, 11, 0) - fRec187[1]);
			fRec186[0] = fConst5 * (fRec186[1] + (fRec187[0] - fRec187[1]));
			fVec91[0] = fSlow42;
			float fTemp180 = fSlow42 + fVec91[3] + fVec91[1] + fVec91[2];
			fRec189[0] = fRec189[1] + fConst29 * (yc20_get_sample(fTemp70, 10, 0) - fRec189[1]);
			fRec188[0] = fConst5 * (fRec188[1] + (fRec189[0] - fRec189[1]));
			fVec92[0] = fSlow43;
			float fTemp181 = fSlow43 + fVec92[3] + fVec92[1] + fVec92[2];
			fRec191[0] = fRec191[1] + fConst29 * (yc20_get_sample(fTemp82, 9, 0) - fRec191[1]);
			fRec190[0] = fConst5 * (fRec190[1] + (fRec191[0] - fRec191[1]));
			fVec93[0] = fSlow44;
			float fTemp182 = fSlow44 + fVec93[3] + fVec93[1] + fVec93[2];
			fRec193[0] = fRec193[1] + fConst29 * (yc20_get_sample(fTemp94, 8, 0) - fRec193[1]);
			fRec192[0] = fConst5 * (fRec192[1] + (fRec193[0] - fRec193[1]));
			fVec94[0] = fSlow45;
			float fTemp183 = fSlow45 + fVec94[3] + fVec94[1] + fVec94[2];
			fRec195[0] = fRec195[1] + fConst30 * (yc20_get_sample(fTemp106, 7, 0) - fRec195[1]);
			fRec194[0] = fConst5 * (fRec194[1] + (fRec195[0] - fRec195[1]));
			fVec95[0] = fSlow46;
			float fTemp184 = fSlow46 + fVec95[3] + fVec95[1] + fVec95[2];
			fRec197[0] = fRec197[1] + fConst30 * (yc20_get_sample(fTemp118, 6, 0) - fRec197[1]);
			fRec196[0] = fConst5 * (fRec196[1] + (fRec197[0] - fRec197[1]));
			fVec96[0] = fSlow47;
			float fTemp185 = fSlow47 + fVec96[3] + fVec96[1] + fVec96[2];
			fRec199[0] = fRec199[1] + fConst30 * (yc20_get_sample(fTemp130, 5, 0) - fRec199[1]);
			fRec198[0] = fConst5 * (fRec198[1] + (fRec199[0] - fRec199[1]));
			fVec97[0] = fSlow48;
			float fTemp186 = fSlow48 + fVec97[3] + fVec97[1] + fVec97[2];
			fRec201[0] = fRec201[1] + fConst30 * (yc20_get_sample(fTemp8, 4, 0) - fRec201[1]);
			fRec200[0] = fConst5 * (fRec200[1] + (fRec201[0] - fRec201[1]));
			fVec98[0] = fSlow49;
			float fTemp187 = fSlow49 + fVec98[3] + fVec98[1] + fVec98[2];
			fRec203[0] = fRec203[1] + fConst31 * (yc20_get_sample(fTemp18, 3, 0) - fRec203[1]);
			fRec202[0] = fConst5 * (fRec202[1] + (fRec203[0] - fRec203[1]));
			fVec99[0] = fSlow50;
			float fTemp188 = fSlow50 + fVec99[3] + fVec99[1] + fVec99[2];
			fRec205[0] = fRec205[1] + fConst31 * (yc20_get_sample(fTemp28, 2, 0) - fRec205[1]);
			fRec204[0] = fConst5 * (fRec204[1] + (fRec205[0] - fRec205[1]));
			fVec100[0] = fSlow51;
			float fTemp189 = fSlow51 + fVec100[3] + fVec100[1] + fVec100[2];
			fRec207[0] = fRec207[1] + fConst31 * (yc20_get_sample(fTemp38, 1, 0) - fRec207[1]);
			fRec206[0] = fConst5 * (fRec206[1] + (fRec207[0] - fRec207[1]));
			fVec101[0] = fSlow52;
			float fTemp190 = fSlow52 + fVec101[3] + fVec101[1] + fVec101[2];
			fRec209[0] = fRec209[1] + fConst31 * (yc20_get_sample(fTemp48, 0, 0) - fRec209[1]);
			fRec208[0] = fConst5 * (fRec208[1] + (fRec209[0] - fRec209[1]));
			fVec102[0] = fSlow53;
			float fTemp191 = fSlow53 + fVec102[3] + fVec102[1] + fVec102[2];
			fRec211[0] = fRec211[1] + fConst32 * (yc20_get_sample(fTemp60, 11, 0) - fRec211[1]);
			fRec210[0] = fConst5 * (fRec210[1] + (fRec211[0] - fRec211[1]));
			fVec103[0] = fSlow54;
			float fTemp192 = fSlow54 + fVec103[3] + fVec103[1] + fVec103[2];
			fRec213[0] = fRec213[1] + fConst32 * (yc20_get_sample(fTemp72, 10, 0) - fRec213[1]);
			fRec212[0] = fConst5 * (fRec212[1] + (fRec213[0] - fRec213[1]));
			fVec104[0] = fSlow55;
			float fTemp193 = fSlow55 + fVec104[3] + fVec104[1] + fVec104[2];
			fRec215[0] = fRec215[1] + fConst32 * (yc20_get_sample(fTemp84, 9, 0) - fRec215[1]);
			fRec214[0] = fConst5 * (fRec214[1] + (fRec215[0] - fRec215[1]));
			fVec105[0] = fSlow56;
			float fTemp194 = fSlow56 + fVec105[3] + fVec105[1] + fVec105[2];
			fRec217[0] = fRec217[1] + fConst32 * (yc20_get_sample(fTemp96, 8, 0) - fRec217[1]);
			fRec216[0] = fConst5 * (fRec216[1] + (fRec217[0] - fRec217[1]));
			fVec106[0] = fSlow57;
			float fTemp195 = fSlow57 + fVec106[3] + fVec106[1] + fVec106[2];
			fRec219[0] = fRec219[1] + fConst3 * (yc20_get_sample(fTemp108, 7, 0) - fRec219[1]);
			fRec218[0] = fConst5 * (fRec218[1] + (fRec219[0] - fRec219[1]));
			fVec107[0] = fSlow58;
			float fTemp196 = fSlow58 + fVec107[3] + fVec107[1] + fVec107[2];
			fRec221[0] = fRec221[1] + fConst3 * (yc20_get_sample(fTemp120, 6, 0) - fRec221[1]);
			fRec220[0] = fConst5 * (fRec220[1] + (fRec221[0] - fRec221[1]));
			fVec108[0] = fSlow59;
			float fTemp197 = fSlow59 + fVec108[3] + fVec108[1] + fVec108[2];
			fRec223[0] = fRec223[1] + fConst3 * (yc20_get_sample(fTemp132, 5, 0) - fRec223[1]);
			fRec222[0] = fConst5 * (fRec222[1] + (fRec223[0] - fRec223[1]));
			fVec109[0] = fSlow60;
			float fTemp198 = fSlow60 + fVec109[3] + fVec109[1] + fVec109[2];
			fVec110[0] = fSlow61;
			float fTemp199 = fSlow61 + fVec110[3] + fVec110[1] + fVec110[2];
			fVec111[0] = fSlow62;
			float fTemp200 = fSlow62 + fVec111[3] + fVec111[1] + fVec111[2];
			fVec112[0] = fSlow63;
			float fTemp201 = fSlow63 + fVec112[3] + fVec112[1] + fVec112[2];
			fVec113[0] = fSlow64;
			float fTemp202 = fSlow64 + fVec113[3] + fVec113[1] + fVec113[2];
			fVec114[0] = fSlow65;
			float fTemp203 = fSlow65 + fVec114[3] + fVec114[1] + fVec114[2];
			fVec115[0] = fSlow66;
			float fTemp204 = fSlow66 + fVec115[3] + fVec115[1] + fVec115[2];
			fVec116[0] = fSlow67;
			float fTemp205 = fSlow67 + fVec116[3] + fVec116[1] + fVec116[2];
			fVec117[0] = fSlow68;
			float fTemp206 = fSlow68 + fVec117[3] + fVec117[1] + fVec117[2];
			fVec118[0] = fSlow69;
			float fTemp207 = fSlow69 + fVec118[3] + fVec118[1] + fVec118[2];
			fVec119[0] = fSlow70;
			float fTemp208 = fSlow70 + fVec119[3] + fVec119[1] + fVec119[2];
			fVec120[0] = fSlow71;
			float fTemp209 = fSlow71 + fVec120[3] + fVec120[1] + fVec120[2];
			fVec121[0] = fSlow72;
			float fTemp210 = fSlow72 + fVec121[3] + fVec121[1] + fVec121[2];
			fVec122[0] = fSlow73;
			float fTemp211 = fSlow73 + fVec122[3] + fVec122[1] + fVec122[2];
			fVec123[0] = fSlow74;
			float fTemp212 = fSlow74 + fVec123[3] + fVec123[1] + fVec123[2];
			fVec124[0] = fSlow75;
			float fTemp213 = fSlow75 + fVec124[3] + fVec124[1] + fVec124[2];
			fVec125[0] = fSlow76;
			float fTemp214 = fSlow76 + fVec125[3] + fVec125[1] + fVec125[2];
			fVec126[0] = fSlow77;
			float fTemp215 = fSlow77 + fVec126[3] + fVec126[1] + fVec126[2];
			fVec127[0] = fSlow78;
			float fTemp216 = fSlow78 + fVec127[3] + fVec127[1] + fVec127[2];
			fVec128[0] = fSlow79;
			float fTemp217 = fSlow79 + fVec128[3] + fVec128[1] + fVec128[2];
			fVec129[0] = fSlow80;
			float fTemp218 = fSlow80 + fVec129[3] + fVec129[1] + fVec129[2];
			fVec130[0] = fSlow81;
			float fTemp219 = fSlow81 + fVec130[3] + fVec130[1] + fVec130[2];
			fVec131[0] = fSlow82;
			float fTemp220 = fSlow82 + fVec131[3] + fVec131[1] + fVec131[2];
			fVec132[0] = fSlow83;
			float fTemp221 = fSlow83 + fVec132[3] + fVec132[1] + fVec132[2];
			float fTemp222 = 0.41975f * (fSlow84 * fTemp176 + fRec127[0] * fTemp221 + fRec124[0] * fTemp220 + fRec121[0] * fTemp219 + fRec118[0] * fTemp218 + fRec115[0] * fTemp217 + fRec112[0] * fTemp216 + fRec109[0] * fTemp215 + fRec106[0] * fTemp214 + fRec103[0] * fTemp213 + fRec100[0] * fTemp212 + fRec97[0] * fTemp211 + fRec94[0] * fTemp210 + fRec86[0] * fTemp209 + fRec78[0] * fTemp208 + fRec70[0] * fTemp207 + fRec62[0] * fTemp206 + fRec54[0] * fTemp205 + fRec46[0] * fTemp204 + fRec38[0] * fTemp203 + fRec31[0] * fTemp202 + fRec24[0] * fTemp201 + fRec17[0] * fTemp200 + fRec10[0] * fTemp199 + fRec2[0] * fTemp198 + fRec222[0] * fTemp197 + fRec220[0] * fTemp196 + fRec218[0] * fTemp195 + fRec216[0] * fTemp194 + fRec214[0] * fTemp193 + fRec212[0] * fTemp192 + fRec210[0] * fTemp191 + fRec208[0] * fTemp190 + fRec206[0] * fTemp189 + fRec204[0] * fTemp188 + fRec202[0] * fTemp187 + fRec200[0] * fTemp186 + fRec198[0] * fTemp185 + fRec196[0] * fTemp184 + fRec194[0] * fTemp183 + fRec192[0] * fTemp182 + fRec190[0] * fTemp181 + fRec188[0] * fTemp180 + fRec186[0] * fTemp179 + fRec184[0] * fTemp178);
			float fTemp223 = fRec200[0] + fRec202[0] + fRec204[0] + fRec208[0] + fRec206[0];
			float fTemp224 = fRec192[0] + fRec194[0] + fRec196[0] + fRec198[0] + fTemp223;
			float fTemp225 = fRec184[0] + fRec186[0] + fRec188[0] + fRec190[0] + fTemp224;
			float fTemp226 = 1.679f * (fSlow84 * (fRec145[0] + fRec148[0] + fRec151[0] + fRec154[0] + fRec157[0] + fRec160[0] + fRec163[0] + fRec166[0] + fRec169[0] + fRec172[0] + fRec175[0] + fRec178[0] + fRec130[0] + fRec133[0] + fRec136[0] + fRec142[0] + fRec139[0]) + fRec109[0] + fRec112[0] + fRec115[0] + fRec118[0] + fRec121[0] + fRec124[0] + fRec127[0] + fRec78[0] + fRec86[0] + fRec94[0] + fRec97[0] + fRec100[0] + fRec103[0] + fRec106[0] + fRec38[0] + fRec46[0] + fRec54[0] + fRec62[0] + fRec70[0] + fRec10[0] + fRec17[0] + fRec24[0] + fRec31[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec2[0] + fTemp225);
			fVec133[0] = fTemp226 - fTemp222;
			fRec183[0] = fConst33 * (fRec183[1] + (fTemp226 - (fTemp222 + fVec133[1])));
			float fTemp227 = fTemp222 + 0.002f * fSlow85 * fRec183[0];
			float fTemp228 = fSlow87 * fTemp227;
			fVec134[0] = fTemp228;
			fRec182[0] = fRec182[1] + fConst3 * (fTemp228 - fRec182[1]);
			fRec181[0] = fRec181[1] + fConst3 * (fRec182[0] - fRec181[1]);
			fRec228[0] = fRec228[1] + fConst34 * (yc20_get_sample(fTemp44, 0, 0) - fRec228[1]);
			fRec227[0] = fConst5 * (fRec227[1] + (fRec228[0] - fRec228[1]));
			fRec230[0] = fRec230[1] + fConst35 * (yc20_get_sample(fTemp56, 11, 0) - fRec230[1]);
			fRec229[0] = fConst5 * (fRec229[1] + (fRec230[0] - fRec230[1]));
			fRec232[0] = fRec232[1] + fConst35 * (yc20_get_sample(fTemp68, 10, 0) - fRec232[1]);
			fRec231[0] = fConst5 * (fRec231[1] + (fRec232[0] - fRec232[1]));
			fRec234[0] = fRec234[1] + fConst35 * (yc20_get_sample(fTemp80, 9, 0) - fRec234[1]);
			fRec233[0] = fConst5 * (fRec233[1] + (fRec234[0] - fRec234[1]));
			fRec236[0] = fRec236[1] + fConst35 * (yc20_get_sample(fTemp92, 8, 0) - fRec236[1]);
			fRec235[0] = fConst5 * (fRec235[1] + (fRec236[0] - fRec236[1]));
			fRec238[0] = fRec238[1] + fConst36 * (yc20_get_sample(fTemp104, 7, 0) - fRec238[1]);
			fRec237[0] = fConst5 * (fRec237[1] + (fRec238[0] - fRec238[1]));
			fRec240[0] = fRec240[1] + fConst36 * (yc20_get_sample(fTemp116, 6, 0) - fRec240[1]);
			fRec239[0] = fConst5 * (fRec239[1] + (fRec240[0] - fRec240[1]));
			fRec242[0] = fRec242[1] + fConst36 * (yc20_get_sample(fTemp128, 5, 0) - fRec242[1]);
			fRec241[0] = fConst5 * (fRec241[1] + (fRec242[0] - fRec242[1]));
			fRec244[0] = fRec244[1] + fConst36 * (yc20_get_sample(fTemp6, 4, 0) - fRec244[1]);
			fRec243[0] = fConst5 * (fRec243[1] + (fRec244[0] - fRec244[1]));
			fRec246[0] = fRec246[1] + fConst28 * (yc20_get_sample(fTemp16, 3, 0) - fRec246[1]);
			fRec245[0] = fConst5 * (fRec245[1] + (fRec246[0] - fRec246[1]));
			fRec248[0] = fRec248[1] + fConst28 * (yc20_get_sample(fTemp26, 2, 0) - fRec248[1]);
			fRec247[0] = fConst5 * (fRec247[1] + (fRec248[0] - fRec248[1]));
			fRec250[0] = fRec250[1] + fConst28 * (yc20_get_sample(fTemp36, 1, 0) - fRec250[1]);
			fRec249[0] = fConst5 * (fRec249[1] + (fRec250[0] - fRec250[1]));
			float fTemp229 = 0.25f * (fSlow84 * fTemp175 + fRec86[0] * fTemp221 + fRec78[0] * fTemp220 + fRec70[0] * fTemp219 + fRec62[0] * fTemp218 + fRec54[0] * fTemp217 + fRec46[0] * fTemp216 + fRec38[0] * fTemp215 + fRec31[0] * fTemp214 + fRec24[0] * fTemp213 + fRec17[0] * fTemp212 + fRec10[0] * fTemp211 + fRec2[0] * fTemp210 + fRec222[0] * fTemp209 + fRec220[0] * fTemp208 + fRec218[0] * fTemp207 + fRec216[0] * fTemp206 + fRec214[0] * fTemp205 + fRec212[0] * fTemp204 + fRec210[0] * fTemp203 + fRec208[0] * fTemp202 + fRec206[0] * fTemp201 + fRec204[0] * fTemp200 + fRec202[0] * fTemp199 + fRec200[0] * fTemp198 + fRec198[0] * fTemp197 + fRec196[0] * fTemp196 + fRec194[0] * fTemp195 + fRec192[0] * fTemp194 + fRec190[0] * fTemp193 + fRec188[0] * fTemp192 + fRec186[0] * fTemp191 + fRec184[0] * fTemp190 + fRec249[0] * fTemp189 + fRec247[0] * fTemp188 + fRec245[0] * fTemp187 + fRec243[0] * fTemp186 + fRec241[0] * fTemp185 + fRec239[0] * fTemp184 + fRec237[0] * fTemp183 + fRec235[0] * fTemp182 + fRec233[0] * fTemp181 + fRec231[0] * fTemp180 + fRec229[0] * fTemp179 + fRec227[0] * fTemp178);
			float fTemp230 = fRec243[0] + fRec245[0] + fRec247[0] + fRec249[0] + fTemp225;
			float fTemp231 = fRec227[0] + fRec229[0] + fRec231[0] + fRec233[0] + fRec235[0] + fRec237[0] + fRec239[0] + fRec241[0] + fTemp230;
			float fTemp232 = fSlow84 * (fRec109[0] + fRec112[0] + fRec115[0] + fRec118[0] + fRec121[0] + fRec124[0] + fRec127[0] + fRec130[0] + fRec133[0] + fRec136[0] + fRec139[0] + fRec142[0] + fRec94[0] + fRec97[0] + fRec100[0] + fRec106[0] + fRec103[0]) + fRec78[0] + fRec86[0] + fRec38[0] + fRec46[0] + fRec54[0] + fRec62[0] + fRec70[0] + fRec10[0] + fRec17[0] + fRec24[0] + fRec31[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec2[0] + fTemp231;
			fVec135[0] = fTemp232 - fTemp229;
			fRec226[0] = fConst33 * (fRec226[1] + (fTemp232 - (fTemp229 + fVec135[1])));
			float fTemp233 = fTemp229 + 0.002f * fSlow85 * fRec226[0];
			float fTemp234 = fSlow89 * fTemp233;
			fVec136[0] = fTemp234;
			fRec225[0] = fRec225[1] + fConst31 * (fTemp234 - fRec225[1]);
			fRec224[0] = fRec224[1] + fConst31 * (fRec225[0] - fRec224[1]);
			fRec255[0] = fRec255[1] + fConst37 * (yc20_get_sample(fTemp54, 11, 0) - fRec255[1]);
			fRec254[0] = fConst5 * (fRec254[1] + (fRec255[0] - fRec255[1]));
			float fTemp235 = fRec254[0] * fTemp179;
			fRec257[0] = fRec257[1] + fConst37 * (yc20_get_sample(fTemp66, 10, 0) - fRec257[1]);
			fRec256[0] = fConst5 * (fRec256[1] + (fRec257[0] - fRec257[1]));
			float fTemp236 = fRec256[0] * fTemp180;
			fRec259[0] = fRec259[1] + fConst37 * (yc20_get_sample(fTemp78, 9, 0) - fRec259[1]);
			fRec258[0] = fConst5 * (fRec258[1] + (fRec259[0] - fRec259[1]));
			float fTemp237 = fRec258[0] * fTemp181;
			fRec261[0] = fRec261[1] + fConst37 * (yc20_get_sample(fTemp90, 8, 0) - fRec261[1]);
			fRec260[0] = fConst5 * (fRec260[1] + (fRec261[0] - fRec261[1]));
			float fTemp238 = fRec260[0] * fTemp182;
			fRec263[0] = fRec263[1] + fConst38 * (yc20_get_sample(fTemp102, 7, 0) - fRec263[1]);
			fRec262[0] = fConst5 * (fRec262[1] + (fRec263[0] - fRec263[1]));
			float fTemp239 = fRec262[0] * fTemp183;
			fRec265[0] = fRec265[1] + fConst38 * (yc20_get_sample(fTemp114, 6, 0) - fRec265[1]);
			fRec264[0] = fConst5 * (fRec264[1] + (fRec265[0] - fRec265[1]));
			float fTemp240 = fRec264[0] * fTemp184;
			fRec267[0] = fRec267[1] + fConst38 * (yc20_get_sample(fTemp126, 5, 0) - fRec267[1]);
			fRec266[0] = fConst5 * (fRec266[1] + (fRec267[0] - fRec267[1]));
			float fTemp241 = fRec266[0] * fTemp185;
			fRec269[0] = fRec269[1] + fConst38 * (yc20_get_sample(fTemp4, 4, 0) - fRec269[1]);
			fRec268[0] = fConst5 * (fRec268[1] + (fRec269[0] - fRec269[1]));
			float fTemp242 = fRec268[0] * fTemp186;
			fRec271[0] = fRec271[1] + fConst34 * (yc20_get_sample(fTemp14, 3, 0) - fRec271[1]);
			fRec270[0] = fConst5 * (fRec270[1] + (fRec271[0] - fRec271[1]));
			float fTemp243 = fRec270[0] * fTemp187;
			fRec273[0] = fRec273[1] + fConst34 * (yc20_get_sample(fTemp24, 2, 0) - fRec273[1]);
			fRec272[0] = fConst5 * (fRec272[1] + (fRec273[0] - fRec273[1]));
			float fTemp244 = fRec272[0] * fTemp188;
			fRec275[0] = fRec275[1] + fConst34 * (yc20_get_sample(fTemp34, 1, 0) - fRec275[1]);
			fRec274[0] = fConst5 * (fRec274[1] + (fRec275[0] - fRec275[1]));
			float fTemp245 = fRec274[0] * fTemp189;
			float fTemp246 = fRec227[0] * fTemp190;
			float fTemp247 = fRec229[0] * fTemp191;
			float fTemp248 = fRec231[0] * fTemp192;
			float fTemp249 = fRec233[0] * fTemp193;
			float fTemp250 = fRec235[0] * fTemp194;
			float fTemp251 = fRec237[0] * fTemp195;
			float fTemp252 = fRec239[0] * fTemp196;
			float fTemp253 = fRec241[0] * fTemp197;
			float fTemp254 = fRec243[0] * fTemp198;
			float fTemp255 = fRec245[0] * fTemp199;
			float fTemp256 = fRec247[0] * fTemp200;
			float fTemp257 = fRec249[0] * fTemp201;
			float fTemp258 = fRec184[0] * fTemp202;
			float fTemp259 = fRec186[0] * fTemp203;
			float fTemp260 = fRec188[0] * fTemp204;
			float fTemp261 = fRec190[0] * fTemp205;
			float fTemp262 = fRec192[0] * fTemp206;
			float fTemp263 = fRec194[0] * fTemp207;
			float fTemp264 = fRec196[0] * fTemp208;
			float fTemp265 = fRec198[0] * fTemp209;
			float fTemp266 = fRec200[0] * fTemp210;
			float fTemp267 = fRec202[0] * fTemp211;
			float fTemp268 = fRec204[0] * fTemp212;
			float fTemp269 = fRec206[0] * fTemp213;
			float fTemp270 = fRec208[0] * fTemp214;
			float fTemp271 = fRec210[0] * fTemp215;
			float fTemp272 = fRec212[0] * fTemp216;
			float fTemp273 = fRec214[0] * fTemp217;
			float fTemp274 = fRec216[0] * fTemp218;
			float fTemp275 = fRec218[0] * fTemp219;
			float fTemp276 = fRec220[0] * fTemp220;
			float fTemp277 = fRec222[0] * fTemp221;
			float fTemp278 = fSlow84 * fTemp150;
			float fTemp279 = yc20_get_sample(fRec34[0], 0, 0);
			fVec137[0] = fTemp279;
			fRec276[0] = fConst39 * (0.0073745456f * fRec276[1] + 0.014380364f * (fTemp279 - fVec137[1]));
			float fTemp280 = fRec276[0] * fTemp178;
			float fTemp281 = 0.25f * (fTemp280 + fTemp278 + fTemp277 + fTemp276 + fTemp275 + fTemp274 + fTemp273 + fTemp272 + fTemp271 + fTemp270 + fTemp269 + fTemp268 + fTemp267 + fTemp266 + fTemp265 + fTemp264 + fTemp263 + fTemp262 + fTemp261 + fTemp260 + fTemp259 + fTemp258 + fTemp257 + fTemp256 + fTemp255 + fTemp254 + fTemp253 + fTemp252 + fTemp251 + fTemp250 + fTemp249 + fTemp248 + fTemp247 + fTemp246 + fTemp245 + fTemp244 + fTemp243 + fTemp242 + fTemp241 + fTemp240 + fTemp239 + fTemp238 + fTemp237 + fTemp236 + fTemp235);
			float fTemp282 = fRec276[0] + fRec254[0] + fRec256[0] + fRec258[0] + fRec260[0] + fRec262[0] + fRec264[0] + fRec266[0] + fRec268[0] + fRec270[0] + fRec272[0] + fRec274[0] + fTemp231;
			float fTemp283 = fSlow84 * (fRec78[0] + fRec86[0] + fRec94[0] + fRec97[0] + fRec100[0] + fRec103[0] + fRec106[0] + fRec38[0] + fRec46[0] + fRec54[0] + fRec62[0] + fRec70[0] + fRec10[0] + fRec17[0] + fRec24[0] + fRec2[0] + fRec31[0]) + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fTemp282;
			fVec138[0] = fTemp283 - fTemp281;
			fRec253[0] = fConst33 * (fRec253[1] + (fTemp283 - (fTemp281 + fVec138[1])));
			float fTemp284 = 0.002f * fSlow85 * fRec253[0];
			float fTemp285 = fTemp281 + fTemp284;
			float fTemp286 = fSlow91 * fTemp285;
			fVec139[0] = fTemp286;
			fRec252[0] = fRec252[1] + fConst28 * (fTemp286 - fRec252[1]);
			fRec251[0] = fRec251[1] + fConst28 * (fRec252[0] - fRec251[1]);
			float fTemp287 = fRec254[0] * fTemp191;
			float fTemp288 = fRec256[0] * fTemp192;
			float fTemp289 = fRec258[0] * fTemp193;
			float fTemp290 = fRec260[0] * fTemp194;
			float fTemp291 = fRec262[0] * fTemp195;
			float fTemp292 = fRec264[0] * fTemp196;
			float fTemp293 = fRec266[0] * fTemp197;
			float fTemp294 = fRec268[0] * fTemp198;
			float fTemp295 = fRec270[0] * fTemp199;
			float fTemp296 = fRec272[0] * fTemp200;
			float fTemp297 = fRec274[0] * fTemp201;
			float fTemp298 = fRec227[0] * fTemp202;
			float fTemp299 = fRec229[0] * fTemp203;
			float fTemp300 = fRec231[0] * fTemp204;
			float fTemp301 = fRec233[0] * fTemp205;
			float fTemp302 = fRec235[0] * fTemp206;
			float fTemp303 = fRec237[0] * fTemp207;
			float fTemp304 = fRec239[0] * fTemp208;
			float fTemp305 = fRec241[0] * fTemp209;
			float fTemp306 = fRec243[0] * fTemp210;
			float fTemp307 = fRec245[0] * fTemp211;
			float fTemp308 = fRec247[0] * fTemp212;
			float fTemp309 = fRec249[0] * fTemp213;
			float fTemp310 = fRec184[0] * fTemp214;
			float fTemp311 = fRec186[0] * fTemp215;
			float fTemp312 = fRec188[0] * fTemp216;
			float fTemp313 = fRec190[0] * fTemp217;
			float fTemp314 = fRec192[0] * fTemp218;
			float fTemp315 = fRec194[0] * fTemp219;
			float fTemp316 = fRec196[0] * fTemp220;
			float fTemp317 = fRec198[0] * fTemp221;
			float fTemp318 = fSlow84 * (fRec31[0] * fTemp147 + fRec24[0] * fTemp144 + fRec17[0] * fTemp141 + fRec10[0] * fTemp138 + fRec2[0] * fTemp135 + fRec222[0] * fTemp123 + fRec220[0] * fTemp111 + fRec218[0] * fTemp99 + fRec216[0] * fTemp87 + fRec214[0] * fTemp75 + fRec212[0] * fTemp63 + fRec210[0] * fTemp51 + fRec208[0] * fTemp41 + fRec206[0] * fTemp31 + fRec204[0] * fTemp21 + fRec202[0] * fTemp11 + fRec200[0] * fTemp0);
			float fTemp319 = fRec276[0] * fTemp190;
			float fTemp320 = yc20_get_sample(fRec27[0], 1, 0);
			fVec140[0] = fTemp320;
			fRec280[0] = fConst39 * (0.0073745456f * fRec280[1] + 0.014380364f * (fTemp320 - fVec140[1]));
			float fTemp321 = fRec280[0] * fTemp189;
			float fTemp322 = yc20_get_sample(fRec20[0], 2, 0);
			fVec141[0] = fTemp322;
			fRec281[0] = fConst39 * (0.0073745456f * fRec281[1] + 0.014380364f * (fTemp322 - fVec141[1]));
			float fTemp323 = fRec281[0] * fTemp188;
			float fTemp324 = yc20_get_sample(fRec13[0], 3, 0);
			fVec142[0] = fTemp324;
			fRec282[0] = fConst39 * (0.0073745456f * fRec282[1] + 0.014380364f * (fTemp324 - fVec142[1]));
			float fTemp325 = fRec282[0] * fTemp187;
			float fTemp326 = yc20_get_sample(fRec5[0], 4, 0);
			fVec143[0] = fTemp326;
			fRec283[0] = fConst39 * (0.0073745456f * fRec283[1] + 0.014380364f * (fTemp326 - fVec143[1]));
			float fTemp327 = fRec283[0] * fTemp186;
			float fTemp328 = yc20_get_sample(fRec89[0], 5, 0);
			fVec144[0] = fTemp328;
			fRec284[0] = fConst39 * (0.0073745456f * fRec284[1] + 0.014380364f * (fTemp328 - fVec144[1]));
			float fTemp329 = fRec284[0] * fTemp185;
			float fTemp330 = yc20_get_sample(fRec81[0], 6, 0);
			fVec145[0] = fTemp330;
			fRec285[0] = fConst39 * (0.0073745456f * fRec285[1] + 0.014380364f * (fTemp330 - fVec145[1]));
			float fTemp331 = fRec285[0] * fTemp184;
			float fTemp332 = yc20_get_sample(fRec73[0], 7, 0);
			fVec146[0] = fTemp332;
			fRec286[0] = fConst39 * (0.0073745456f * fRec286[1] + 0.014380364f * (fTemp332 - fVec146[1]));
			float fTemp333 = fRec286[0] * fTemp183;
			float fTemp334 = yc20_get_sample(fRec65[0], 8, 0);
			fVec147[0] = fTemp334;
			fRec287[0] = fConst39 * (0.0073745456f * fRec287[1] + 0.014380364f * (fTemp334 - fVec147[1]));
			float fTemp335 = fRec287[0] * fTemp182;
			float fTemp336 = yc20_get_sample(fRec57[0], 9, 0);
			fVec148[0] = fTemp336;
			fRec288[0] = fConst39 * (0.0073745456f * fRec288[1] + 0.014380364f * (fTemp336 - fVec148[1]));
			float fTemp337 = fRec288[0] * fTemp181;
			float fTemp338 = yc20_get_sample(fRec49[0], 10, 0);
			fVec149[0] = fTemp338;
			fRec289[0] = fConst39 * (0.0073745456f * fRec289[1] + 0.014380364f * (fTemp338 - fVec149[1]));
			float fTemp339 = fRec289[0] * fTemp180;
			float fTemp340 = yc20_get_sample(fRec41[0], 11, 0);
			fVec150[0] = fTemp340;
			fRec290[0] = fConst39 * (0.0073745456f * fRec290[1] + 0.014380364f * (fTemp340 - fVec150[1]));
			float fTemp341 = fRec290[0] * fTemp179;
			float fTemp342 = 0.25f * (fTemp280 + fTemp341 + fTemp339 + fTemp337 + fTemp335 + fTemp333 + fTemp331 + fTemp329 + fTemp327 + fTemp325 + fTemp323 + fTemp321 + fTemp319 + fTemp318 + fTemp317 + fTemp316 + fTemp315 + fTemp314 + fTemp313 + fTemp312 + fTemp311 + fTemp310 + fTemp309 + fTemp308 + fTemp307 + fTemp306 + fTemp305 + fTemp304 + fTemp303 + fTemp302 + fTemp301 + fTemp300 + fTemp299 + fTemp298 + fTemp297 + fTemp296 + fTemp295 + fTemp294 + fTemp293 + fTemp292 + fTemp291 + fTemp290 + fTemp289 + fTemp288 + fTemp287);
			float fTemp343 = fSlow84 * (fRec10[0] + fRec17[0] + fRec24[0] + fRec31[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec2[0] + fTemp223) + fRec290[0] + fRec289[0] + fRec288[0] + fRec287[0] + fRec286[0] + fRec285[0] + fRec284[0] + fRec283[0] + fRec282[0] + fRec281[0] + fRec280[0] + 2.0f * fRec276[0] + fRec254[0] + fRec256[0] + fRec258[0] + fRec260[0] + fRec262[0] + fRec264[0] + fRec266[0] + fRec268[0] + fRec270[0] + fRec272[0] + fRec274[0] + fRec227[0] + fRec229[0] + fRec231[0] + fRec233[0] + fRec235[0] + fRec237[0] + fRec239[0] + fRec241[0] + fRec243[0] + fRec245[0] + fRec247[0] + fRec249[0] + fRec184[0] + fRec186[0] + fRec188[0] + fRec190[0] + fRec192[0] + fRec194[0] + fRec198[0] + fRec196[0];
			fVec151[0] = fTemp343 - fTemp342;
			fRec279[0] = fConst33 * (fRec279[1] + (fTemp343 - (fTemp342 + fVec151[1])));
			float fTemp344 = 0.002f * fSlow85 * fRec279[0];
			float fTemp345 = fTemp342 + fTemp344;
			float fTemp346 = fSlow93 * fTemp345;
			fVec152[0] = fTemp346;
			fRec278[0] = fRec278[1] + fConst34 * (fTemp346 - fRec278[1]);
			fRec277[0] = fRec277[1] + fConst34 * (fRec278[0] - fRec277[1]);
			fRec292[0] = fConst40 * (fRec292[1] + (fTemp228 - fVec134[1]));
			float fTemp347 = 0.5416667f * fRec292[0] + fSlow96 * fTemp227;
			fVec153[0] = fTemp347;
			fRec291[0] = fConst41 * (fRec291[1] + (fTemp347 - fVec153[1]));
			fRec294[0] = fConst42 * (fRec294[1] + (fTemp234 - fVec136[1]));
			float fTemp348 = 0.5416667f * fRec294[0] + fSlow97 * fTemp233;
			fVec154[0] = fTemp348;
			fRec293[0] = fConst43 * (fRec293[1] + (fTemp348 - fVec154[1]));
			fRec296[0] = fConst44 * (fRec296[1] + (fTemp286 - fVec139[1]));
			float fTemp349 = 0.5416667f * fRec296[0] + fSlow98 * fTemp285;
			fVec155[0] = fTemp349;
			fRec295[0] = fConst45 * (fRec295[1] + (fTemp349 - fVec155[1]));
			fRec298[0] = fConst46 * (fRec298[1] + (fTemp346 - fVec152[1]));
			float fTemp350 = 0.5416667f * fRec298[0] + fSlow99 * fTemp345;
			fVec156[0] = fTemp350;
			fRec297[0] = fConst47 * (fRec297[1] + (fTemp350 - fVec156[1]));
			float fTemp351 = fSlow102 * (fSlow100 * (fRec297[0] + fRec295[0] + fRec293[0] + fRec291[0]) + fSlow95 * (fRec277[0] + fRec251[0] + fRec224[0] + fRec181[0]));
			float fTemp352 = fRec286[0] * fTemp178;
			float fTemp353 = fRec285[0] * fTemp179;
			float fTemp354 = fRec284[0] * fTemp180;
			float fTemp355 = fRec283[0] * fTemp181;
			float fTemp356 = fRec282[0] * fTemp182;
			float fTemp357 = fRec281[0] * fTemp183;
			float fTemp358 = fRec280[0] * fTemp184;
			float fTemp359 = fRec276[0] * fTemp185;
			float fTemp360 = fRec254[0] * fTemp186;
			float fTemp361 = fRec256[0] * fTemp187;
			float fTemp362 = fRec258[0] * fTemp188;
			float fTemp363 = fRec260[0] * fTemp189;
			float fTemp364 = fRec262[0] * fTemp190;
			float fTemp365 = fRec264[0] * fTemp191;
			float fTemp366 = fRec266[0] * fTemp192;
			float fTemp367 = fRec268[0] * fTemp193;
			float fTemp368 = fRec270[0] * fTemp194;
			float fTemp369 = fRec272[0] * fTemp195;
			float fTemp370 = fRec274[0] * fTemp196;
			float fTemp371 = fRec227[0] * fTemp197;
			float fTemp372 = fRec229[0] * fTemp198;
			float fTemp373 = fRec231[0] * fTemp199;
			float fTemp374 = fRec233[0] * fTemp200;
			float fTemp375 = fRec235[0] * fTemp201;
			float fTemp376 = fRec237[0] * fTemp202;
			float fTemp377 = fRec239[0] * fTemp203;
			float fTemp378 = fRec241[0] * fTemp204;
			float fTemp379 = fRec243[0] * fTemp205;
			float fTemp380 = fRec245[0] * fTemp206;
			float fTemp381 = fRec247[0] * fTemp207;
			float fTemp382 = fRec249[0] * fTemp208;
			float fTemp383 = fRec184[0] * fTemp209;
			float fTemp384 = fRec186[0] * fTemp210;
			float fTemp385 = fRec188[0] * fTemp211;
			float fTemp386 = fRec190[0] * fTemp212;
			float fTemp387 = fRec192[0] * fTemp213;
			float fTemp388 = fRec194[0] * fTemp214;
			float fTemp389 = fRec196[0] * fTemp215;
			float fTemp390 = fRec198[0] * fTemp216;
			float fTemp391 = fRec200[0] * fTemp217;
			float fTemp392 = fRec202[0] * fTemp218;
			float fTemp393 = fRec204[0] * fTemp219;
			float fTemp394 = fRec206[0] * fTemp220;
			float fTemp395 = fRec208[0] * fTemp221;
			float fTemp396 = fSlow84 * (fRec70[0] * fTemp147 + fRec62[0] * fTemp144 + fRec54[0] * fTemp141 + fRec46[0] * fTemp138 + fRec38[0] * fTemp135 + fRec31[0] * fTemp123 + fRec24[0] * fTemp111 + fRec17[0] * fTemp99 + fRec10[0] * fTemp87 + fRec2[0] * fTemp75 + fRec222[0] * fTemp63 + fRec220[0] * fTemp51 + fRec218[0] * fTemp41 + fRec216[0] * fTemp31 + fRec214[0] * fTemp21 + fRec212[0] * fTemp11 + fRec210[0] * fTemp0);
			float fTemp397 = 0.25f * (fTemp396 + fTemp395 + fTemp394 + fTemp393 + fTemp392 + fTemp391 + fTemp390 + fTemp389 + fTemp388 + fTemp387 + fTemp386 + fTemp385 + fTemp384 + fTemp383 + fTemp382 + fTemp381 + fTemp380 + fTemp379 + fTemp378 + fTemp377 + fTemp376 + fTemp375 + fTemp374 + fTemp373 + fTemp372 + fTemp371 + fTemp370 + fTemp369 + fTemp368 + fTemp367 + fTemp366 + fTemp365 + fTemp364 + fTemp363 + fTemp362 + fTemp361 + fTemp360 + fTemp359 + fTemp358 + fTemp357 + fTemp356 + fTemp355 + fTemp354 + fTemp353 + fTemp352);
			float fTemp398 = fSlow84 * (fRec38[0] + fRec46[0] + fRec54[0] + fRec62[0] + fRec70[0] + fRec10[0] + fRec17[0] + fRec24[0] + fRec31[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec2[0] + fRec222[0]) + fRec286[0] + fRec285[0] + fRec284[0] + fRec283[0] + fRec282[0] + fRec281[0] + fRec280[0] + fTemp282;
			fVec157[0] = fTemp398 - fTemp397;
			fRec299[0] = fConst33 * (fRec299[1] + (fTemp398 - (fTemp397 + fVec157[1])));
			float fTemp399 = 0.002f * fSlow85 * fRec299[0];
			float fTemp400 = fSlow84 * (fRec208[0] * fTemp147 + fRec206[0] * fTemp144 + fRec204[0] * fTemp141 + fRec202[0] * fTemp138 + fRec200[0] * fTemp135 + fRec198[0] * fTemp123 + fRec196[0] * fTemp111 + fRec194[0] * fTemp99 + fRec192[0] * fTemp87 + fRec190[0] * fTemp75 + fRec188[0] * fTemp63 + fRec186[0] * fTemp51 + fRec184[0] * fTemp41 + fRec249[0] * fTemp31 + fRec247[0] * fTemp21 + fRec245[0] * fTemp11 + fRec243[0] * fTemp0) + fRec241[0] * fTemp221 + fRec239[0] * fTemp220 + fRec237[0] * fTemp219 + fRec235[0] * fTemp218 + fRec233[0] * fTemp217 + fRec231[0] * fTemp216 + fRec229[0] * fTemp215 + fRec227[0] * fTemp214 + fRec274[0] * fTemp213 + fRec272[0] * fTemp212 + fRec270[0] * fTemp211 + fRec268[0] * fTemp210 + fRec266[0] * fTemp209 + fRec264[0] * fTemp208 + fRec262[0] * fTemp207 + fRec260[0] * fTemp206 + fRec258[0] * fTemp205 + fRec256[0] * fTemp204 + fRec254[0] * fTemp203;
			float fTemp401 = fTemp194 + fTemp182;
			float fTemp402 = fTemp193 + fTemp181;
			float fTemp403 = fTemp192 + fTemp180;
			float fTemp404 = fTemp191 + fTemp179;
			float fTemp405 = 0.25f * (fRec276[0] * (fTemp178 + fTemp202 + fTemp190) + fRec290[0] * fTemp404 + fRec289[0] * fTemp403 + fRec288[0] * fTemp402 + fRec287[0] * fTemp401 + fRec286[0] * (fTemp195 + fTemp183) + fRec285[0] * (fTemp196 + fTemp184) + fRec284[0] * (fTemp197 + fTemp185) + fRec283[0] * (fTemp198 + fTemp186) + fRec282[0] * (fTemp199 + fTemp187) + fRec281[0] * (fTemp200 + fTemp188) + fTemp400 + fRec280[0] * (fTemp201 + fTemp189));
			float fTemp406 = 0.25f * (fTemp400 + fRec276[0] * fTemp202 + fRec280[0] * fTemp201 + fRec281[0] * fTemp200 + fRec282[0] * fTemp199 + fRec283[0] * fTemp198 + fRec284[0] * fTemp197 + fRec285[0] * fTemp196 + fRec286[0] * fTemp195 + fRec287[0] * fTemp194 + fRec288[0] * fTemp193 + fRec289[0] * fTemp192 + fRec290[0] * fTemp191 + fTemp319 + fTemp321 + fTemp323 + fTemp325 + fTemp327 + fTemp329 + fTemp331 + fTemp333 + fTemp335 + fTemp337 + fTemp339 + fTemp341 + fTemp280);
			float fTemp407 = fRec283[0] + fRec282[0] + fRec281[0] + fRec276[0] + fRec280[0];
			float fTemp408 = fSlow84 * fTemp230 + fRec276[0] + fRec254[0] + fRec256[0] + fRec258[0] + fRec260[0] + fRec262[0] + fRec264[0] + fRec266[0] + fRec268[0] + fRec270[0] + fRec272[0] + fRec274[0] + fRec227[0] + fRec229[0] + fRec231[0] + fRec233[0] + fRec235[0] + fRec237[0] + fRec241[0] + fRec239[0] + 2.0f * (fRec290[0] + fRec289[0] + fRec288[0] + fRec287[0] + fRec286[0] + fRec285[0] + fRec284[0] + fTemp407);
			fVec158[0] = fTemp408 - fTemp406;
			fRec300[0] = fConst33 * (fRec300[1] + (fTemp408 - (fTemp406 + fVec158[1])));
			float fTemp409 = 0.002f * fSlow85 * fRec300[0];
			float fTemp410 = fRec284[0] * fTemp189;
			float fTemp411 = fSlow84 * (fRec2[0] * fTemp147 + fRec222[0] * fTemp144 + fRec220[0] * fTemp141 + fRec218[0] * fTemp138 + fRec216[0] * fTemp135 + fRec214[0] * fTemp123 + fRec212[0] * fTemp111 + fRec210[0] * fTemp99 + fRec208[0] * fTemp87 + fRec206[0] * fTemp75 + fRec204[0] * fTemp63 + fRec202[0] * fTemp51 + fRec200[0] * fTemp41 + fRec198[0] * fTemp31 + fRec196[0] * fTemp21 + fRec194[0] * fTemp11 + fRec192[0] * fTemp0) + fRec190[0] * fTemp221 + fRec188[0] * fTemp220 + fRec186[0] * fTemp219 + fRec184[0] * fTemp218 + fRec249[0] * fTemp217 + fRec247[0] * fTemp216 + fRec245[0] * fTemp215 + fRec243[0] * fTemp214 + fRec241[0] * fTemp213 + fRec239[0] * fTemp212 + fRec237[0] * fTemp211 + fRec235[0] * fTemp210 + fRec233[0] * fTemp209 + fRec231[0] * fTemp208 + fRec229[0] * fTemp207 + fRec227[0] * fTemp206 + fRec274[0] * fTemp205 + fRec272[0] * fTemp204 + fRec270[0] * fTemp203 + fRec268[0] * fTemp202 + fRec266[0] * fTemp201 + fRec264[0] * fTemp200 + fRec262[0] * fTemp199 + fRec260[0] * fTemp198 + fRec258[0] * fTemp197 + fRec256[0] * fTemp196 + fRec254[0] * fTemp195;
			float fTemp412 = fRec285[0] * fTemp188;
			float fTemp413 = fRec286[0] * fTemp187;
			float fTemp414 = fRec287[0] * fTemp186;
			float fTemp415 = fRec288[0] * fTemp185;
			float fTemp416 = fRec289[0] * fTemp184;
			float fTemp417 = fRec290[0] * fTemp183;
			float fTemp418 = fTemp190 + fTemp178;
			float fTemp419 = 0.25f * (fTemp411 + fRec276[0] * fTemp194 + fRec280[0] * fTemp193 + fRec281[0] * fTemp192 + fRec282[0] * fTemp191 + fRec283[0] * fTemp190 + fTemp410 + fTemp412 + fTemp413 + fTemp414 + fTemp415 + fTemp416 + fTemp417 + fRec276[0] * fTemp182 + fRec280[0] * fTemp181 + fRec281[0] * fTemp180 + fRec282[0] * fTemp179 + fRec283[0] * fTemp178);
			float fTemp420 = fSlow84 * (fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec2[0] + fTemp224) + 2.0f * fTemp407 + fRec290[0] + fRec289[0] + fRec288[0] + fRec287[0] + fRec286[0] + fRec285[0] + fRec284[0] + fRec254[0] + fRec256[0] + fRec258[0] + fRec260[0] + fRec262[0] + fRec264[0] + fRec266[0] + fRec268[0] + fRec270[0] + fRec272[0] + fRec274[0] + fRec227[0] + fRec229[0] + fRec231[0] + fRec233[0] + fRec235[0] + fRec237[0] + fRec239[0] + fRec241[0] + fRec243[0] + fRec245[0] + fRec247[0] + fRec249[0] + fRec184[0] + fRec186[0] + fRec190[0] + fRec188[0];
			fVec159[0] = fTemp420 - fTemp419;
			fRec301[0] = fConst33 * (fRec301[1] + (fTemp420 - (fTemp419 + fVec159[1])));
			float fTemp421 = fSlow117 * (fSlow116 * (fTemp284 + 0.25f * (fTemp235 + fTemp236 + fTemp237 + fTemp238 + fTemp239 + fTemp240 + fTemp241 + fTemp242 + fTemp243 + fTemp244 + fTemp245 + fTemp246 + fTemp247 + fTemp248 + fTemp249 + fTemp250 + fTemp251 + fTemp252 + fTemp253 + fTemp254 + fTemp255 + fTemp256 + fTemp257 + fTemp258 + fTemp259 + fTemp260 + fTemp261 + fTemp262 + fTemp263 + fTemp264 + fTemp265 + fTemp266 + fTemp267 + fTemp268 + fTemp269 + fTemp270 + fTemp271 + fTemp272 + fTemp273 + fTemp274 + fTemp275 + fTemp276 + fTemp277 + fTemp280 + fTemp278)) + fSlow114 * (fTemp344 + 0.25f * (fRec276[0] * fTemp418 + fTemp287 + fTemp288 + fTemp289 + fTemp290 + fTemp291 + fTemp292 + fTemp293 + fTemp294 + fTemp295 + fTemp296 + fTemp297 + fTemp298 + fTemp299 + fTemp300 + fTemp301 + fTemp302 + fTemp303 + fTemp304 + fTemp305 + fTemp306 + fTemp307 + fTemp308 + fTemp309 + fTemp310 + fTemp311 + fTemp312 + fTemp313 + fTemp314 + fTemp315 + fTemp316 + fTemp317 + fTemp318 + fTemp341 + fTemp339 + fTemp337 + fTemp335 + fTemp333 + fTemp331 + fTemp329 + fTemp327 + fTemp325 + fTemp321 + fTemp323)) + fSlow112 * (0.002f * fSlow85 * fRec301[0] + 0.25f * (fRec283[0] * fTemp418 + fRec282[0] * fTemp404 + fRec281[0] * fTemp403 + fRec280[0] * fTemp402 + fRec276[0] * fTemp401 + fTemp417 + fTemp416 + fTemp415 + fTemp414 + fTemp413 + fTemp412 + fTemp411 + fTemp410)) + fSlow110 * (fTemp409 + fTemp405) + fSlow108 * fTemp227 + fSlow106 * (fTemp397 + fTemp399) + fSlow104 * fTemp233);
			int iTemp422 = iRec305[1] < iConst48;
			iRec307[0] = 1103515245 * iRec307[1] + 12345;
			float fTemp423 = mydsp_faustpower2_f(std::min<float>(1.0f, std::max<float>(-1.0f, fTemp409 + fTemp406 + 4.656613e-16f * float(iRec307[0]))));
			fRec304[0] = ((iTemp422) ? fTemp423 + fRec304[1] : fTemp423);
			iRec305[0] = ((iTemp422) ? iRec305[1] + 1 : 1);
			fRec306[0] = ((iTemp422) ? fRec306[1] : fRec304[1]);
			float fTemp424 = std::log10(std::sqrt(fConst49 * fRec306[0]));
			fVec160[0] = fTemp424;
			float fTemp425 = 2e+01f * fVec160[1];
			float fTemp426 = 2e+01f * fTemp424;
			fRec303[0] = std::min<float>(1.0f, std::max<float>(0.0f, fRec303[1] + ((fTemp426 > -25.0f) ? ((fTemp425 < -25.0f) ? 1.0f : 0.0f) : 0.0f) - ((fTemp425 > -35.0f) ? ((fTemp426 < -35.0f) ? 1.0f : 0.0f) : 0.0f)));
			fRec302[0] = fConst51 * fRec302[1] + fConst50 * ((fRec303[0] > 0.5f) ? ((fRec303[1] < 0.5f) ? 1.0f : 0.0f) : 0.0f);
			float fTemp427 = std::min<float>(1.0f, fConst52 * fRec302[0]);
			fVec161[0] = fTemp427;
			float fTemp428 = fSlow119 * std::max<float>(fSlow118, 0.25f * (fTemp427 + fVec161[2] + fVec161[3] + fVec161[4])) * (fTemp399 + 0.5f * fTemp227 + 0.25f * (fTemp405 + fTemp352 + fTemp353 + fTemp354 + fTemp355 + fTemp356 + fTemp357 + fTemp358 + fTemp359 + fTemp360 + fTemp361 + fTemp362 + fTemp363 + fTemp364 + fTemp365 + fTemp366 + fTemp367 + fTemp368 + fTemp369 + fTemp370 + fTemp371 + fTemp372 + fTemp373 + fTemp374 + fTemp375 + fTemp376 + fTemp377 + fTemp378 + fTemp379 + fTemp380 + fTemp381 + fTemp382 + fTemp383 + fTemp384 + fTemp385 + fTemp386 + fTemp387 + fTemp388 + fTemp389 + fTemp390 + fTemp391 + fTemp392 + fTemp393 + fTemp394 + fTemp395 + fTemp409 + fTemp396));
			fRec308[0] = fSlow120 + 0.98f * fRec308[1];
			float fTemp429 = 0.05f * fRec308[0] + 0.001f;
			output0[i0] = FAUSTFLOAT(fTemp429 * (fTemp428 + fTemp421 + fTemp351 + fTemp177));
			output1[i0] = FAUSTFLOAT(fTemp429 * (fTemp351 + fTemp421 + fTemp428));
			output2[i0] = FAUSTFLOAT(fTemp177 * fTemp429);
			fRec0[1] = fRec0[0];
			for (int j0 = 3; j0 > 0; j0 = j0 - 1) {
				fVec0[j0] = fVec0[j0 - 1];
			}
			fRec6[1] = fRec6[0];
			fRec5[1] = fRec5[0];
			iRec4[1] = iRec4[0];
			fVec1[1] = fVec1[0];
			iRec7[1] = iRec7[0];
			fVec2[1] = fVec2[0];
			iRec8[1] = iRec8[0];
			fVec3[1] = fVec3[0];
			iRec9[1] = iRec9[0];
			fVec4[1] = fVec4[0];
			fRec3[1] = fRec3[0];
			fRec2[1] = fRec2[0];
			for (int j1 = 3; j1 > 0; j1 = j1 - 1) {
				fVec5[j1] = fVec5[j1 - 1];
			}
			fRec13[1] = fRec13[0];
			iRec12[1] = iRec12[0];
			fVec6[1] = fVec6[0];
			iRec14[1] = iRec14[0];
			fVec7[1] = fVec7[0];
			iRec15[1] = iRec15[0];
			fVec8[1] = fVec8[0];
			iRec16[1] = iRec16[0];
			fVec9[1] = fVec9[0];
			fRec11[1] = fRec11[0];
			fRec10[1] = fRec10[0];
			for (int j2 = 3; j2 > 0; j2 = j2 - 1) {
				fVec10[j2] = fVec10[j2 - 1];
			}
			fRec20[1] = fRec20[0];
			iRec19[1] = iRec19[0];
			fVec11[1] = fVec11[0];
			iRec21[1] = iRec21[0];
			fVec12[1] = fVec12[0];
			iRec22[1] = iRec22[0];
			fVec13[1] = fVec13[0];
			iRec23[1] = iRec23[0];
			fVec14[1] = fVec14[0];
			fRec18[1] = fRec18[0];
			fRec17[1] = fRec17[0];
			for (int j3 = 3; j3 > 0; j3 = j3 - 1) {
				fVec15[j3] = fVec15[j3 - 1];
			}
			fRec27[1] = fRec27[0];
			iRec26[1] = iRec26[0];
			fVec16[1] = fVec16[0];
			iRec28[1] = iRec28[0];
			fVec17[1] = fVec17[0];
			iRec29[1] = iRec29[0];
			fVec18[1] = fVec18[0];
			iRec30[1] = iRec30[0];
			fVec19[1] = fVec19[0];
			fRec25[1] = fRec25[0];
			fRec24[1] = fRec24[0];
			for (int j4 = 3; j4 > 0; j4 = j4 - 1) {
				fVec20[j4] = fVec20[j4 - 1];
			}
			fRec34[1] = fRec34[0];
			iRec33[1] = iRec33[0];
			fVec21[1] = fVec21[0];
			iRec35[1] = iRec35[0];
			fVec22[1] = fVec22[0];
			iRec36[1] = iRec36[0];
			fVec23[1] = fVec23[0];
			iRec37[1] = iRec37[0];
			fVec24[1] = fVec24[0];
			fRec32[1] = fRec32[0];
			fRec31[1] = fRec31[0];
			for (int j5 = 3; j5 > 0; j5 = j5 - 1) {
				fVec25[j5] = fVec25[j5 - 1];
			}
			fRec41[1] = fRec41[0];
			iRec40[1] = iRec40[0];
			fVec26[1] = fVec26[0];
			iRec42[1] = iRec42[0];
			fVec27[1] = fVec27[0];
			iRec43[1] = iRec43[0];
			fVec28[1] = fVec28[0];
			iRec44[1] = iRec44[0];
			fVec29[1] = fVec29[0];
			iRec45[1] = iRec45[0];
			fVec30[1] = fVec30[0];
			fRec39[1] = fRec39[0];
			fRec38[1] = fRec38[0];
			for (int j6 = 3; j6 > 0; j6 = j6 - 1) {
				fVec31[j6] = fVec31[j6 - 1];
			}
			fRec49[1] = fRec49[0];
			iRec48[1] = iRec48[0];
			fVec32[1] = fVec32[0];
			iRec50[1] = iRec50[0];
			fVec33[1] = fVec33[0];
			iRec51[1] = iRec51[0];
			fVec34[1] = fVec34[0];
			iRec52[1] = iRec52[0];
			fVec35[1] = fVec35[0];
			iRec53[1] = iRec53[0];
			fVec36[1] = fVec36[0];
			fRec47[1] = fRec47[0];
			fRec46[1] = fRec46[0];
			for (int j7 = 3; j7 > 0; j7 = j7 - 1) {
				fVec37[j7] = fVec37[j7 - 1];
			}
			fRec57[1] = fRec57[0];
			iRec56[1] = iRec56[0];
			fVec38[1] = fVec38[0];
			iRec58[1] = iRec58[0];
			fVec39[1] = fVec39[0];
			iRec59[1] = iRec59[0];
			fVec40[1] = fVec40[0];
			iRec60[1] = iRec60[0];
			fVec41[1] = fVec41[0];
			iRec61[1] = iRec61[0];
			fVec42[1] = fVec42[0];
			fRec55[1] = fRec55[0];
			fRec54[1] = fRec54[0];
			for (int j8 = 3; j8 > 0; j8 = j8 - 1) {
				fVec43[j8] = fVec43[j8 - 1];
			}
			fRec65[1] = fRec65[0];
			iRec64[1] = iRec64[0];
			fVec44[1] = fVec44[0];
			iRec66[1] = iRec66[0];
			fVec45[1] = fVec45[0];
			iRec67[1] = iRec67[0];
			fVec46[1] = fVec46[0];
			iRec68[1] = iRec68[0];
			fVec47[1] = fVec47[0];
			iRec69[1] = iRec69[0];
			fVec48[1] = fVec48[0];
			fRec63[1] = fRec63[0];
			fRec62[1] = fRec62[0];
			for (int j9 = 3; j9 > 0; j9 = j9 - 1) {
				fVec49[j9] = fVec49[j9 - 1];
			}
			fRec73[1] = fRec73[0];
			iRec72[1] = iRec72[0];
			fVec50[1] = fVec50[0];
			iRec74[1] = iRec74[0];
			fVec51[1] = fVec51[0];
			iRec75[1] = iRec75[0];
			fVec52[1] = fVec52[0];
			iRec76[1] = iRec76[0];
			fVec53[1] = fVec53[0];
			iRec77[1] = iRec77[0];
			fVec54[1] = fVec54[0];
			fRec71[1] = fRec71[0];
			fRec70[1] = fRec70[0];
			for (int j10 = 3; j10 > 0; j10 = j10 - 1) {
				fVec55[j10] = fVec55[j10 - 1];
			}
			fRec81[1] = fRec81[0];
			iRec80[1] = iRec80[0];
			fVec56[1] = fVec56[0];
			iRec82[1] = iRec82[0];
			fVec57[1] = fVec57[0];
			iRec83[1] = iRec83[0];
			fVec58[1] = fVec58[0];
			iRec84[1] = iRec84[0];
			fVec59[1] = fVec59[0];
			iRec85[1] = iRec85[0];
			fVec60[1] = fVec60[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			for (int j11 = 3; j11 > 0; j11 = j11 - 1) {
				fVec61[j11] = fVec61[j11 - 1];
			}
			fRec89[1] = fRec89[0];
			iRec88[1] = iRec88[0];
			fVec62[1] = fVec62[0];
			iRec90[1] = iRec90[0];
			fVec63[1] = fVec63[0];
			iRec91[1] = iRec91[0];
			fVec64[1] = fVec64[0];
			iRec92[1] = iRec92[0];
			fVec65[1] = fVec65[0];
			iRec93[1] = iRec93[0];
			fVec66[1] = fVec66[0];
			fRec87[1] = fRec87[0];
			fRec86[1] = fRec86[0];
			for (int j12 = 3; j12 > 0; j12 = j12 - 1) {
				fVec67[j12] = fVec67[j12 - 1];
			}
			iRec96[1] = iRec96[0];
			fVec68[1] = fVec68[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			for (int j13 = 3; j13 > 0; j13 = j13 - 1) {
				fVec69[j13] = fVec69[j13 - 1];
			}
			iRec99[1] = iRec99[0];
			fVec70[1] = fVec70[0];
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			for (int j14 = 3; j14 > 0; j14 = j14 - 1) {
				fVec71[j14] = fVec71[j14 - 1];
			}
			iRec102[1] = iRec102[0];
			fVec72[1] = fVec72[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			for (int j15 = 3; j15 > 0; j15 = j15 - 1) {
				fVec73[j15] = fVec73[j15 - 1];
			}
			iRec105[1] = iRec105[0];
			fVec74[1] = fVec74[0];
			fRec104[1] = fRec104[0];
			fRec103[1] = fRec103[0];
			for (int j16 = 3; j16 > 0; j16 = j16 - 1) {
				fVec75[j16] = fVec75[j16 - 1];
			}
			iRec108[1] = iRec108[0];
			fVec76[1] = fVec76[0];
			fRec107[1] = fRec107[0];
			fRec106[1] = fRec106[0];
			iRec111[1] = iRec111[0];
			fVec77[1] = fVec77[0];
			fRec110[1] = fRec110[0];
			fRec109[1] = fRec109[0];
			iRec114[1] = iRec114[0];
			fVec78[1] = fVec78[0];
			fRec113[1] = fRec113[0];
			fRec112[1] = fRec112[0];
			iRec117[1] = iRec117[0];
			fVec79[1] = fVec79[0];
			fRec116[1] = fRec116[0];
			fRec115[1] = fRec115[0];
			iRec120[1] = iRec120[0];
			fVec80[1] = fVec80[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			iRec123[1] = iRec123[0];
			fVec81[1] = fVec81[0];
			fRec122[1] = fRec122[0];
			fRec121[1] = fRec121[0];
			iRec126[1] = iRec126[0];
			fVec82[1] = fVec82[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			iRec129[1] = iRec129[0];
			fVec83[1] = fVec83[0];
			fRec128[1] = fRec128[0];
			fRec127[1] = fRec127[0];
			iRec132[1] = iRec132[0];
			fVec84[1] = fVec84[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			iRec135[1] = iRec135[0];
			fVec85[1] = fVec85[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			iRec138[1] = iRec138[0];
			fVec86[1] = fVec86[0];
			fRec137[1] = fRec137[0];
			fRec136[1] = fRec136[0];
			iRec141[1] = iRec141[0];
			fVec87[1] = fVec87[0];
			fRec140[1] = fRec140[0];
			fRec139[1] = fRec139[0];
			iRec144[1] = iRec144[0];
			fVec88[1] = fVec88[0];
			fRec143[1] = fRec143[0];
			fRec142[1] = fRec142[0];
			iRec147[1] = iRec147[0];
			fRec146[1] = fRec146[0];
			fRec145[1] = fRec145[0];
			iRec150[1] = iRec150[0];
			fRec149[1] = fRec149[0];
			fRec148[1] = fRec148[0];
			iRec153[1] = iRec153[0];
			fRec152[1] = fRec152[0];
			fRec151[1] = fRec151[0];
			iRec156[1] = iRec156[0];
			fRec155[1] = fRec155[0];
			fRec154[1] = fRec154[0];
			iRec159[1] = iRec159[0];
			fRec158[1] = fRec158[0];
			fRec157[1] = fRec157[0];
			iRec162[1] = iRec162[0];
			fRec161[1] = fRec161[0];
			fRec160[1] = fRec160[0];
			iRec165[1] = iRec165[0];
			fRec164[1] = fRec164[0];
			fRec163[1] = fRec163[0];
			iRec168[1] = iRec168[0];
			fRec167[1] = fRec167[0];
			fRec166[1] = fRec166[0];
			iRec171[1] = iRec171[0];
			fRec170[1] = fRec170[0];
			fRec169[1] = fRec169[0];
			iRec174[1] = iRec174[0];
			fRec173[1] = fRec173[0];
			fRec172[1] = fRec172[0];
			iRec177[1] = iRec177[0];
			fRec176[1] = fRec176[0];
			fRec175[1] = fRec175[0];
			iRec180[1] = iRec180[0];
			fRec179[1] = fRec179[0];
			fRec178[1] = fRec178[0];
			fRec1[1] = fRec1[0];
			for (int j17 = 3; j17 > 0; j17 = j17 - 1) {
				fVec89[j17] = fVec89[j17 - 1];
			}
			fRec185[1] = fRec185[0];
			fRec184[1] = fRec184[0];
			for (int j18 = 3; j18 > 0; j18 = j18 - 1) {
				fVec90[j18] = fVec90[j18 - 1];
			}
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			for (int j19 = 3; j19 > 0; j19 = j19 - 1) {
				fVec91[j19] = fVec91[j19 - 1];
			}
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			for (int j20 = 3; j20 > 0; j20 = j20 - 1) {
				fVec92[j20] = fVec92[j20 - 1];
			}
			fRec191[1] = fRec191[0];
			fRec190[1] = fRec190[0];
			for (int j21 = 3; j21 > 0; j21 = j21 - 1) {
				fVec93[j21] = fVec93[j21 - 1];
			}
			fRec193[1] = fRec193[0];
			fRec192[1] = fRec192[0];
			for (int j22 = 3; j22 > 0; j22 = j22 - 1) {
				fVec94[j22] = fVec94[j22 - 1];
			}
			fRec195[1] = fRec195[0];
			fRec194[1] = fRec194[0];
			for (int j23 = 3; j23 > 0; j23 = j23 - 1) {
				fVec95[j23] = fVec95[j23 - 1];
			}
			fRec197[1] = fRec197[0];
			fRec196[1] = fRec196[0];
			for (int j24 = 3; j24 > 0; j24 = j24 - 1) {
				fVec96[j24] = fVec96[j24 - 1];
			}
			fRec199[1] = fRec199[0];
			fRec198[1] = fRec198[0];
			for (int j25 = 3; j25 > 0; j25 = j25 - 1) {
				fVec97[j25] = fVec97[j25 - 1];
			}
			fRec201[1] = fRec201[0];
			fRec200[1] = fRec200[0];
			for (int j26 = 3; j26 > 0; j26 = j26 - 1) {
				fVec98[j26] = fVec98[j26 - 1];
			}
			fRec203[1] = fRec203[0];
			fRec202[1] = fRec202[0];
			for (int j27 = 3; j27 > 0; j27 = j27 - 1) {
				fVec99[j27] = fVec99[j27 - 1];
			}
			fRec205[1] = fRec205[0];
			fRec204[1] = fRec204[0];
			for (int j28 = 3; j28 > 0; j28 = j28 - 1) {
				fVec100[j28] = fVec100[j28 - 1];
			}
			fRec207[1] = fRec207[0];
			fRec206[1] = fRec206[0];
			for (int j29 = 3; j29 > 0; j29 = j29 - 1) {
				fVec101[j29] = fVec101[j29 - 1];
			}
			fRec209[1] = fRec209[0];
			fRec208[1] = fRec208[0];
			for (int j30 = 3; j30 > 0; j30 = j30 - 1) {
				fVec102[j30] = fVec102[j30 - 1];
			}
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			for (int j31 = 3; j31 > 0; j31 = j31 - 1) {
				fVec103[j31] = fVec103[j31 - 1];
			}
			fRec213[1] = fRec213[0];
			fRec212[1] = fRec212[0];
			for (int j32 = 3; j32 > 0; j32 = j32 - 1) {
				fVec104[j32] = fVec104[j32 - 1];
			}
			fRec215[1] = fRec215[0];
			fRec214[1] = fRec214[0];
			for (int j33 = 3; j33 > 0; j33 = j33 - 1) {
				fVec105[j33] = fVec105[j33 - 1];
			}
			fRec217[1] = fRec217[0];
			fRec216[1] = fRec216[0];
			for (int j34 = 3; j34 > 0; j34 = j34 - 1) {
				fVec106[j34] = fVec106[j34 - 1];
			}
			fRec219[1] = fRec219[0];
			fRec218[1] = fRec218[0];
			for (int j35 = 3; j35 > 0; j35 = j35 - 1) {
				fVec107[j35] = fVec107[j35 - 1];
			}
			fRec221[1] = fRec221[0];
			fRec220[1] = fRec220[0];
			for (int j36 = 3; j36 > 0; j36 = j36 - 1) {
				fVec108[j36] = fVec108[j36 - 1];
			}
			fRec223[1] = fRec223[0];
			fRec222[1] = fRec222[0];
			for (int j37 = 3; j37 > 0; j37 = j37 - 1) {
				fVec109[j37] = fVec109[j37 - 1];
			}
			for (int j38 = 3; j38 > 0; j38 = j38 - 1) {
				fVec110[j38] = fVec110[j38 - 1];
			}
			for (int j39 = 3; j39 > 0; j39 = j39 - 1) {
				fVec111[j39] = fVec111[j39 - 1];
			}
			for (int j40 = 3; j40 > 0; j40 = j40 - 1) {
				fVec112[j40] = fVec112[j40 - 1];
			}
			for (int j41 = 3; j41 > 0; j41 = j41 - 1) {
				fVec113[j41] = fVec113[j41 - 1];
			}
			for (int j42 = 3; j42 > 0; j42 = j42 - 1) {
				fVec114[j42] = fVec114[j42 - 1];
			}
			for (int j43 = 3; j43 > 0; j43 = j43 - 1) {
				fVec115[j43] = fVec115[j43 - 1];
			}
			for (int j44 = 3; j44 > 0; j44 = j44 - 1) {
				fVec116[j44] = fVec116[j44 - 1];
			}
			for (int j45 = 3; j45 > 0; j45 = j45 - 1) {
				fVec117[j45] = fVec117[j45 - 1];
			}
			for (int j46 = 3; j46 > 0; j46 = j46 - 1) {
				fVec118[j46] = fVec118[j46 - 1];
			}
			for (int j47 = 3; j47 > 0; j47 = j47 - 1) {
				fVec119[j47] = fVec119[j47 - 1];
			}
			for (int j48 = 3; j48 > 0; j48 = j48 - 1) {
				fVec120[j48] = fVec120[j48 - 1];
			}
			for (int j49 = 3; j49 > 0; j49 = j49 - 1) {
				fVec121[j49] = fVec121[j49 - 1];
			}
			for (int j50 = 3; j50 > 0; j50 = j50 - 1) {
				fVec122[j50] = fVec122[j50 - 1];
			}
			for (int j51 = 3; j51 > 0; j51 = j51 - 1) {
				fVec123[j51] = fVec123[j51 - 1];
			}
			for (int j52 = 3; j52 > 0; j52 = j52 - 1) {
				fVec124[j52] = fVec124[j52 - 1];
			}
			for (int j53 = 3; j53 > 0; j53 = j53 - 1) {
				fVec125[j53] = fVec125[j53 - 1];
			}
			for (int j54 = 3; j54 > 0; j54 = j54 - 1) {
				fVec126[j54] = fVec126[j54 - 1];
			}
			for (int j55 = 3; j55 > 0; j55 = j55 - 1) {
				fVec127[j55] = fVec127[j55 - 1];
			}
			for (int j56 = 3; j56 > 0; j56 = j56 - 1) {
				fVec128[j56] = fVec128[j56 - 1];
			}
			for (int j57 = 3; j57 > 0; j57 = j57 - 1) {
				fVec129[j57] = fVec129[j57 - 1];
			}
			for (int j58 = 3; j58 > 0; j58 = j58 - 1) {
				fVec130[j58] = fVec130[j58 - 1];
			}
			for (int j59 = 3; j59 > 0; j59 = j59 - 1) {
				fVec131[j59] = fVec131[j59 - 1];
			}
			for (int j60 = 3; j60 > 0; j60 = j60 - 1) {
				fVec132[j60] = fVec132[j60 - 1];
			}
			fVec133[1] = fVec133[0];
			fRec183[1] = fRec183[0];
			fVec134[1] = fVec134[0];
			fRec182[1] = fRec182[0];
			fRec181[1] = fRec181[0];
			fRec228[1] = fRec228[0];
			fRec227[1] = fRec227[0];
			fRec230[1] = fRec230[0];
			fRec229[1] = fRec229[0];
			fRec232[1] = fRec232[0];
			fRec231[1] = fRec231[0];
			fRec234[1] = fRec234[0];
			fRec233[1] = fRec233[0];
			fRec236[1] = fRec236[0];
			fRec235[1] = fRec235[0];
			fRec238[1] = fRec238[0];
			fRec237[1] = fRec237[0];
			fRec240[1] = fRec240[0];
			fRec239[1] = fRec239[0];
			fRec242[1] = fRec242[0];
			fRec241[1] = fRec241[0];
			fRec244[1] = fRec244[0];
			fRec243[1] = fRec243[0];
			fRec246[1] = fRec246[0];
			fRec245[1] = fRec245[0];
			fRec248[1] = fRec248[0];
			fRec247[1] = fRec247[0];
			fRec250[1] = fRec250[0];
			fRec249[1] = fRec249[0];
			fVec135[1] = fVec135[0];
			fRec226[1] = fRec226[0];
			fVec136[1] = fVec136[0];
			fRec225[1] = fRec225[0];
			fRec224[1] = fRec224[0];
			fRec255[1] = fRec255[0];
			fRec254[1] = fRec254[0];
			fRec257[1] = fRec257[0];
			fRec256[1] = fRec256[0];
			fRec259[1] = fRec259[0];
			fRec258[1] = fRec258[0];
			fRec261[1] = fRec261[0];
			fRec260[1] = fRec260[0];
			fRec263[1] = fRec263[0];
			fRec262[1] = fRec262[0];
			fRec265[1] = fRec265[0];
			fRec264[1] = fRec264[0];
			fRec267[1] = fRec267[0];
			fRec266[1] = fRec266[0];
			fRec269[1] = fRec269[0];
			fRec268[1] = fRec268[0];
			fRec271[1] = fRec271[0];
			fRec270[1] = fRec270[0];
			fRec273[1] = fRec273[0];
			fRec272[1] = fRec272[0];
			fRec275[1] = fRec275[0];
			fRec274[1] = fRec274[0];
			fVec137[1] = fVec137[0];
			fRec276[1] = fRec276[0];
			fVec138[1] = fVec138[0];
			fRec253[1] = fRec253[0];
			fVec139[1] = fVec139[0];
			fRec252[1] = fRec252[0];
			fRec251[1] = fRec251[0];
			fVec140[1] = fVec140[0];
			fRec280[1] = fRec280[0];
			fVec141[1] = fVec141[0];
			fRec281[1] = fRec281[0];
			fVec142[1] = fVec142[0];
			fRec282[1] = fRec282[0];
			fVec143[1] = fVec143[0];
			fRec283[1] = fRec283[0];
			fVec144[1] = fVec144[0];
			fRec284[1] = fRec284[0];
			fVec145[1] = fVec145[0];
			fRec285[1] = fRec285[0];
			fVec146[1] = fVec146[0];
			fRec286[1] = fRec286[0];
			fVec147[1] = fVec147[0];
			fRec287[1] = fRec287[0];
			fVec148[1] = fVec148[0];
			fRec288[1] = fRec288[0];
			fVec149[1] = fVec149[0];
			fRec289[1] = fRec289[0];
			fVec150[1] = fVec150[0];
			fRec290[1] = fRec290[0];
			fVec151[1] = fVec151[0];
			fRec279[1] = fRec279[0];
			fVec152[1] = fVec152[0];
			fRec278[1] = fRec278[0];
			fRec277[1] = fRec277[0];
			fRec292[1] = fRec292[0];
			fVec153[1] = fVec153[0];
			fRec291[1] = fRec291[0];
			fRec294[1] = fRec294[0];
			fVec154[1] = fVec154[0];
			fRec293[1] = fRec293[0];
			fRec296[1] = fRec296[0];
			fVec155[1] = fVec155[0];
			fRec295[1] = fRec295[0];
			fRec298[1] = fRec298[0];
			fVec156[1] = fVec156[0];
			fRec297[1] = fRec297[0];
			fVec157[1] = fVec157[0];
			fRec299[1] = fRec299[0];
			fVec158[1] = fVec158[0];
			fRec300[1] = fRec300[0];
			fVec159[1] = fVec159[0];
			fRec301[1] = fRec301[0];
			iRec307[1] = iRec307[0];
			fRec304[1] = fRec304[0];
			iRec305[1] = iRec305[0];
			fRec306[1] = fRec306[0];
			fVec160[1] = fVec160[0];
			fRec303[1] = fRec303[0];
			fRec302[1] = fRec302[0];
			for (int j61 = 4; j61 > 0; j61 = j61 - 1) {
				fVec161[j61] = fVec161[j61 - 1];
			}
			fRec308[1] = fRec308[0];
		}
	}

};

#endif
