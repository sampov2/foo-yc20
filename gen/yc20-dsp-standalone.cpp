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
	float fRec5[3];
	int iRec4[2];
	float fVec1[3];
	int iRec7[2];
	float fVec2[3];
	int iRec8[2];
	float fVec3[3];
	int iRec9[2];
	float fVec4[3];
	float fVec5[2];
	float fConst3;
	float fRec3[2];
	float fConst4;
	float fConst5;
	float fRec2[2];
	FAUSTFLOAT fButton1;
	float fVec6[4];
	float fConst6;
	float fRec13[3];
	int iRec12[2];
	float fVec7[3];
	int iRec14[2];
	float fVec8[3];
	int iRec15[2];
	float fVec9[3];
	int iRec16[2];
	float fVec10[3];
	float fVec11[2];
	float fConst7;
	float fRec11[2];
	float fRec10[2];
	FAUSTFLOAT fButton2;
	float fVec12[4];
	float fConst8;
	float fRec20[3];
	int iRec19[2];
	float fVec13[3];
	int iRec21[2];
	float fVec14[3];
	int iRec22[2];
	float fVec15[3];
	int iRec23[2];
	float fVec16[3];
	float fVec17[2];
	float fRec18[2];
	float fRec17[2];
	FAUSTFLOAT fButton3;
	float fVec18[4];
	float fConst9;
	float fRec27[3];
	int iRec26[2];
	float fVec19[3];
	int iRec28[2];
	float fVec20[3];
	int iRec29[2];
	float fVec21[3];
	int iRec30[2];
	float fVec22[3];
	float fVec23[2];
	float fRec25[2];
	float fRec24[2];
	FAUSTFLOAT fButton4;
	float fVec24[4];
	float fConst10;
	float fRec34[3];
	int iRec33[2];
	float fVec25[3];
	int iRec35[2];
	float fVec26[3];
	int iRec36[2];
	float fVec27[3];
	int iRec37[2];
	float fVec28[3];
	float fVec29[2];
	float fRec32[2];
	float fRec31[2];
	FAUSTFLOAT fButton5;
	float fVec30[4];
	float fConst11;
	float fRec41[3];
	int iRec40[2];
	float fVec31[3];
	int iRec42[2];
	float fVec32[3];
	int iRec43[2];
	float fVec33[3];
	int iRec44[2];
	float fVec34[3];
	int iRec45[2];
	float fVec35[3];
	float fVec36[2];
	float fConst12;
	float fRec39[2];
	float fConst13;
	float fRec38[2];
	FAUSTFLOAT fButton6;
	float fVec37[4];
	float fConst14;
	float fRec49[3];
	int iRec48[2];
	float fVec38[3];
	int iRec50[2];
	float fVec39[3];
	int iRec51[2];
	float fVec40[3];
	int iRec52[2];
	float fVec41[3];
	int iRec53[2];
	float fVec42[3];
	float fVec43[2];
	float fRec47[2];
	float fRec46[2];
	FAUSTFLOAT fButton7;
	float fVec44[4];
	float fConst15;
	float fRec57[3];
	int iRec56[2];
	float fVec45[3];
	int iRec58[2];
	float fVec46[3];
	int iRec59[2];
	float fVec47[3];
	int iRec60[2];
	float fVec48[3];
	int iRec61[2];
	float fVec49[3];
	float fVec50[2];
	float fRec55[2];
	float fRec54[2];
	FAUSTFLOAT fButton8;
	float fVec51[4];
	float fConst16;
	float fRec65[3];
	int iRec64[2];
	float fVec52[3];
	int iRec66[2];
	float fVec53[3];
	int iRec67[2];
	float fVec54[3];
	int iRec68[2];
	float fVec55[3];
	int iRec69[2];
	float fVec56[3];
	float fVec57[2];
	float fRec63[2];
	float fRec62[2];
	FAUSTFLOAT fButton9;
	float fVec58[4];
	float fConst17;
	float fRec73[3];
	int iRec72[2];
	float fVec59[3];
	int iRec74[2];
	float fVec60[3];
	int iRec75[2];
	float fVec61[3];
	int iRec76[2];
	float fVec62[3];
	int iRec77[2];
	float fVec63[3];
	float fVec64[2];
	float fConst18;
	float fRec71[2];
	float fRec70[2];
	FAUSTFLOAT fButton10;
	float fVec65[4];
	float fConst19;
	float fRec81[3];
	int iRec80[2];
	float fVec66[3];
	int iRec82[2];
	float fVec67[3];
	int iRec83[2];
	float fVec68[3];
	int iRec84[2];
	float fVec69[3];
	int iRec85[2];
	float fVec70[3];
	float fVec71[2];
	float fRec79[2];
	float fRec78[2];
	FAUSTFLOAT fButton11;
	float fVec72[4];
	float fConst20;
	float fRec89[3];
	int iRec88[2];
	float fVec73[3];
	int iRec90[2];
	float fVec74[3];
	int iRec91[2];
	float fVec75[3];
	int iRec92[2];
	float fVec76[3];
	int iRec93[2];
	float fVec77[3];
	float fVec78[2];
	float fRec87[2];
	float fRec86[2];
	FAUSTFLOAT fButton12;
	float fVec79[4];
	int iRec96[2];
	float fVec80[3];
	float fVec81[2];
	float fRec95[2];
	float fRec94[2];
	FAUSTFLOAT fButton13;
	float fVec82[4];
	int iRec99[2];
	float fVec83[3];
	float fVec84[2];
	float fConst21;
	float fRec98[2];
	float fRec97[2];
	FAUSTFLOAT fButton14;
	float fVec85[4];
	int iRec102[2];
	float fVec86[3];
	float fVec87[2];
	float fRec101[2];
	float fRec100[2];
	FAUSTFLOAT fButton15;
	float fVec88[4];
	int iRec105[2];
	float fVec89[3];
	float fVec90[2];
	float fRec104[2];
	float fRec103[2];
	FAUSTFLOAT fButton16;
	float fVec91[4];
	int iRec108[2];
	float fVec92[3];
	float fVec93[2];
	float fRec107[2];
	float fRec106[2];
	int iRec111[2];
	float fVec94[3];
	float fVec95[2];
	float fRec110[2];
	float fConst22;
	float fRec109[2];
	int iRec114[2];
	float fVec96[3];
	float fVec97[2];
	float fRec113[2];
	float fRec112[2];
	int iRec117[2];
	float fVec98[3];
	float fVec99[2];
	float fRec116[2];
	float fRec115[2];
	int iRec120[2];
	float fVec100[3];
	float fVec101[2];
	float fRec119[2];
	float fRec118[2];
	int iRec123[2];
	float fVec102[3];
	float fVec103[2];
	float fConst23;
	float fRec122[2];
	float fRec121[2];
	int iRec126[2];
	float fVec104[3];
	float fVec105[2];
	float fRec125[2];
	float fRec124[2];
	int iRec129[2];
	float fVec106[3];
	float fVec107[2];
	float fRec128[2];
	float fRec127[2];
	int iRec132[2];
	float fVec108[3];
	float fVec109[2];
	float fRec131[2];
	float fRec130[2];
	int iRec135[2];
	float fVec110[3];
	float fVec111[2];
	float fConst24;
	float fRec134[2];
	float fRec133[2];
	int iRec138[2];
	float fVec112[3];
	float fVec113[2];
	float fRec137[2];
	float fRec136[2];
	int iRec141[2];
	float fVec114[3];
	float fVec115[2];
	float fRec140[2];
	float fRec139[2];
	int iRec144[2];
	float fVec116[3];
	float fVec117[2];
	float fRec143[2];
	float fRec142[2];
	int iRec147[2];
	float fVec118[3];
	float fVec119[2];
	float fRec146[2];
	float fConst25;
	float fRec145[2];
	int iRec150[2];
	float fVec120[3];
	float fVec121[2];
	float fRec149[2];
	float fRec148[2];
	int iRec153[2];
	float fVec122[3];
	float fVec123[2];
	float fRec152[2];
	float fRec151[2];
	int iRec156[2];
	float fVec124[3];
	float fVec125[2];
	float fRec155[2];
	float fRec154[2];
	int iRec159[2];
	float fVec126[3];
	float fVec127[2];
	float fConst26;
	float fRec158[2];
	float fRec157[2];
	int iRec162[2];
	float fVec128[3];
	float fVec129[2];
	float fRec161[2];
	float fRec160[2];
	int iRec165[2];
	float fVec130[3];
	float fVec131[2];
	float fRec164[2];
	float fRec163[2];
	int iRec168[2];
	float fVec132[3];
	float fVec133[2];
	float fRec167[2];
	float fRec166[2];
	int iRec171[2];
	float fVec134[3];
	float fVec135[2];
	float fRec170[2];
	float fRec169[2];
	int iRec174[2];
	float fVec136[3];
	float fVec137[2];
	float fRec173[2];
	float fRec172[2];
	int iRec177[2];
	float fVec138[3];
	float fVec139[2];
	float fRec176[2];
	float fRec175[2];
	int iRec180[2];
	float fVec140[3];
	float fVec141[2];
	float fRec179[2];
	float fRec178[2];
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fHslider4;
	float fConst27;
	float fRec1[2];
	FAUSTFLOAT fButton17;
	float fVec142[4];
	float fVec143[2];
	float fConst28;
	float fRec185[2];
	float fRec184[2];
	FAUSTFLOAT fButton18;
	float fVec144[4];
	float fVec145[2];
	float fConst29;
	float fRec187[2];
	float fRec186[2];
	FAUSTFLOAT fButton19;
	float fVec146[4];
	float fVec147[2];
	float fRec189[2];
	float fRec188[2];
	FAUSTFLOAT fButton20;
	float fVec148[4];
	float fVec149[2];
	float fRec191[2];
	float fRec190[2];
	FAUSTFLOAT fButton21;
	float fVec150[4];
	float fVec151[2];
	float fRec193[2];
	float fRec192[2];
	FAUSTFLOAT fButton22;
	float fVec152[4];
	float fVec153[2];
	float fConst30;
	float fRec195[2];
	float fRec194[2];
	FAUSTFLOAT fButton23;
	float fVec154[4];
	float fVec155[2];
	float fRec197[2];
	float fRec196[2];
	FAUSTFLOAT fButton24;
	float fVec156[4];
	float fVec157[2];
	float fRec199[2];
	float fRec198[2];
	FAUSTFLOAT fButton25;
	float fVec158[4];
	float fVec159[2];
	float fRec201[2];
	float fRec200[2];
	FAUSTFLOAT fButton26;
	float fVec160[4];
	float fVec161[2];
	float fConst31;
	float fRec203[2];
	float fRec202[2];
	FAUSTFLOAT fButton27;
	float fVec162[4];
	float fVec163[2];
	float fRec205[2];
	float fRec204[2];
	FAUSTFLOAT fButton28;
	float fVec164[4];
	float fVec165[2];
	float fRec207[2];
	float fRec206[2];
	FAUSTFLOAT fButton29;
	float fVec166[4];
	float fVec167[2];
	float fRec209[2];
	float fRec208[2];
	FAUSTFLOAT fButton30;
	float fVec168[4];
	float fVec169[2];
	float fConst32;
	float fRec211[2];
	float fRec210[2];
	FAUSTFLOAT fButton31;
	float fVec170[4];
	float fVec171[2];
	float fRec213[2];
	float fRec212[2];
	FAUSTFLOAT fButton32;
	float fVec172[4];
	float fVec173[2];
	float fRec215[2];
	float fRec214[2];
	FAUSTFLOAT fButton33;
	float fVec174[4];
	float fVec175[2];
	float fRec217[2];
	float fRec216[2];
	FAUSTFLOAT fButton34;
	float fVec176[4];
	float fVec177[2];
	float fRec219[2];
	float fRec218[2];
	FAUSTFLOAT fButton35;
	float fVec178[4];
	float fVec179[2];
	float fRec221[2];
	float fRec220[2];
	FAUSTFLOAT fButton36;
	float fVec180[4];
	float fVec181[2];
	float fRec223[2];
	float fRec222[2];
	FAUSTFLOAT fButton37;
	float fVec182[4];
	FAUSTFLOAT fButton38;
	float fVec183[4];
	FAUSTFLOAT fButton39;
	float fVec184[4];
	FAUSTFLOAT fButton40;
	float fVec185[4];
	FAUSTFLOAT fButton41;
	float fVec186[4];
	FAUSTFLOAT fButton42;
	float fVec187[4];
	FAUSTFLOAT fButton43;
	float fVec188[4];
	FAUSTFLOAT fButton44;
	float fVec189[4];
	FAUSTFLOAT fButton45;
	float fVec190[4];
	FAUSTFLOAT fButton46;
	float fVec191[4];
	FAUSTFLOAT fButton47;
	float fVec192[4];
	FAUSTFLOAT fButton48;
	float fVec193[4];
	FAUSTFLOAT fButton49;
	float fVec194[4];
	FAUSTFLOAT fButton50;
	float fVec195[4];
	FAUSTFLOAT fButton51;
	float fVec196[4];
	FAUSTFLOAT fButton52;
	float fVec197[4];
	FAUSTFLOAT fButton53;
	float fVec198[4];
	FAUSTFLOAT fButton54;
	float fVec199[4];
	FAUSTFLOAT fButton55;
	float fVec200[4];
	FAUSTFLOAT fButton56;
	float fVec201[4];
	FAUSTFLOAT fButton57;
	float fVec202[4];
	FAUSTFLOAT fButton58;
	float fVec203[4];
	FAUSTFLOAT fButton59;
	float fVec204[4];
	FAUSTFLOAT fButton60;
	float fVec205[4];
	float fVec206[2];
	float fConst33;
	float fRec183[2];
	FAUSTFLOAT fVslider3;
	float fVec207[2];
	float fRec182[2];
	float fRec181[2];
	float fVec208[2];
	float fConst34;
	float fRec228[2];
	float fRec227[2];
	float fVec209[2];
	float fConst35;
	float fRec230[2];
	float fRec229[2];
	float fVec210[2];
	float fRec232[2];
	float fRec231[2];
	float fVec211[2];
	float fRec234[2];
	float fRec233[2];
	float fVec212[2];
	float fRec236[2];
	float fRec235[2];
	float fVec213[2];
	float fConst36;
	float fRec238[2];
	float fRec237[2];
	float fVec214[2];
	float fRec240[2];
	float fRec239[2];
	float fVec215[2];
	float fRec242[2];
	float fRec241[2];
	float fVec216[2];
	float fRec244[2];
	float fRec243[2];
	float fVec217[2];
	float fRec246[2];
	float fRec245[2];
	float fVec218[2];
	float fRec248[2];
	float fRec247[2];
	float fVec219[2];
	float fRec250[2];
	float fRec249[2];
	float fVec220[2];
	float fRec226[2];
	FAUSTFLOAT fVslider4;
	float fVec221[2];
	float fRec225[2];
	float fRec224[2];
	float fVec222[2];
	float fConst37;
	float fRec255[2];
	float fRec254[2];
	float fVec223[2];
	float fRec257[2];
	float fRec256[2];
	float fVec224[2];
	float fRec259[2];
	float fRec258[2];
	float fVec225[2];
	float fRec261[2];
	float fRec260[2];
	float fVec226[2];
	float fConst38;
	float fRec263[2];
	float fRec262[2];
	float fVec227[2];
	float fRec265[2];
	float fRec264[2];
	float fVec228[2];
	float fRec267[2];
	float fRec266[2];
	float fVec229[2];
	float fRec269[2];
	float fRec268[2];
	float fVec230[2];
	float fRec271[2];
	float fRec270[2];
	float fVec231[2];
	float fRec273[2];
	float fRec272[2];
	float fVec232[2];
	float fRec275[2];
	float fRec274[2];
	float fVec233[2];
	float fVec234[2];
	float fConst39;
	float fRec276[2];
	float fVec235[2];
	float fRec253[2];
	FAUSTFLOAT fVslider5;
	float fVec236[2];
	float fRec252[2];
	float fRec251[2];
	float fVec237[2];
	float fVec238[2];
	float fRec280[2];
	float fVec239[2];
	float fVec240[2];
	float fRec281[2];
	float fVec241[2];
	float fVec242[2];
	float fRec282[2];
	float fVec243[2];
	float fVec244[2];
	float fRec283[2];
	float fVec245[2];
	float fVec246[2];
	float fRec284[2];
	float fVec247[2];
	float fVec248[2];
	float fRec285[2];
	float fVec249[2];
	float fVec250[2];
	float fRec286[2];
	float fVec251[2];
	float fVec252[2];
	float fRec287[2];
	float fVec253[2];
	float fVec254[2];
	float fRec288[2];
	float fVec255[2];
	float fVec256[2];
	float fRec289[2];
	float fVec257[2];
	float fVec258[2];
	float fRec290[2];
	float fVec259[2];
	float fRec279[2];
	FAUSTFLOAT fVslider6;
	float fVec260[2];
	float fRec278[2];
	float fRec277[2];
	FAUSTFLOAT fVslider7;
	float fConst40;
	float fRec292[2];
	float fVec261[2];
	float fConst41;
	float fRec291[2];
	float fConst42;
	float fRec294[2];
	float fVec262[2];
	float fConst43;
	float fRec293[2];
	float fConst44;
	float fRec296[2];
	float fVec263[2];
	float fConst45;
	float fRec295[2];
	float fConst46;
	float fRec298[2];
	float fVec264[2];
	float fConst47;
	float fRec297[2];
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fVslider8;
	float fVec265[2];
	float fRec299[2];
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVslider10;
	float fVec266[2];
	float fRec300[2];
	FAUSTFLOAT fVslider11;
	float fVec267[2];
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
	float fVec268[2];
	float fRec303[2];
	float fConst50;
	float fConst51;
	float fRec302[2];
	float fConst52;
	float fVec269[5];
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
		for (int l3 = 0; l3 < 3; l3 = l3 + 1) {
			fRec5[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			iRec4[l4] = 0;
		}
		for (int l5 = 0; l5 < 3; l5 = l5 + 1) {
			fVec1[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			iRec7[l6] = 0;
		}
		for (int l7 = 0; l7 < 3; l7 = l7 + 1) {
			fVec2[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			iRec8[l8] = 0;
		}
		for (int l9 = 0; l9 < 3; l9 = l9 + 1) {
			fVec3[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			iRec9[l10] = 0;
		}
		for (int l11 = 0; l11 < 3; l11 = l11 + 1) {
			fVec4[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fVec5[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec3[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec2[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 4; l15 = l15 + 1) {
			fVec6[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 3; l16 = l16 + 1) {
			fRec13[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			iRec12[l17] = 0;
		}
		for (int l18 = 0; l18 < 3; l18 = l18 + 1) {
			fVec7[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			iRec14[l19] = 0;
		}
		for (int l20 = 0; l20 < 3; l20 = l20 + 1) {
			fVec8[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			iRec15[l21] = 0;
		}
		for (int l22 = 0; l22 < 3; l22 = l22 + 1) {
			fVec9[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			iRec16[l23] = 0;
		}
		for (int l24 = 0; l24 < 3; l24 = l24 + 1) {
			fVec10[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fVec11[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec11[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec10[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 4; l28 = l28 + 1) {
			fVec12[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 3; l29 = l29 + 1) {
			fRec20[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			iRec19[l30] = 0;
		}
		for (int l31 = 0; l31 < 3; l31 = l31 + 1) {
			fVec13[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			iRec21[l32] = 0;
		}
		for (int l33 = 0; l33 < 3; l33 = l33 + 1) {
			fVec14[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			iRec22[l34] = 0;
		}
		for (int l35 = 0; l35 < 3; l35 = l35 + 1) {
			fVec15[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			iRec23[l36] = 0;
		}
		for (int l37 = 0; l37 < 3; l37 = l37 + 1) {
			fVec16[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fVec17[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec18[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec17[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 4; l41 = l41 + 1) {
			fVec18[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 3; l42 = l42 + 1) {
			fRec27[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			iRec26[l43] = 0;
		}
		for (int l44 = 0; l44 < 3; l44 = l44 + 1) {
			fVec19[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			iRec28[l45] = 0;
		}
		for (int l46 = 0; l46 < 3; l46 = l46 + 1) {
			fVec20[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			iRec29[l47] = 0;
		}
		for (int l48 = 0; l48 < 3; l48 = l48 + 1) {
			fVec21[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			iRec30[l49] = 0;
		}
		for (int l50 = 0; l50 < 3; l50 = l50 + 1) {
			fVec22[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fVec23[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec25[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec24[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 4; l54 = l54 + 1) {
			fVec24[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 3; l55 = l55 + 1) {
			fRec34[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			iRec33[l56] = 0;
		}
		for (int l57 = 0; l57 < 3; l57 = l57 + 1) {
			fVec25[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			iRec35[l58] = 0;
		}
		for (int l59 = 0; l59 < 3; l59 = l59 + 1) {
			fVec26[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			iRec36[l60] = 0;
		}
		for (int l61 = 0; l61 < 3; l61 = l61 + 1) {
			fVec27[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			iRec37[l62] = 0;
		}
		for (int l63 = 0; l63 < 3; l63 = l63 + 1) {
			fVec28[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fVec29[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec32[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec31[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 4; l67 = l67 + 1) {
			fVec30[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 3; l68 = l68 + 1) {
			fRec41[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			iRec40[l69] = 0;
		}
		for (int l70 = 0; l70 < 3; l70 = l70 + 1) {
			fVec31[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			iRec42[l71] = 0;
		}
		for (int l72 = 0; l72 < 3; l72 = l72 + 1) {
			fVec32[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			iRec43[l73] = 0;
		}
		for (int l74 = 0; l74 < 3; l74 = l74 + 1) {
			fVec33[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			iRec44[l75] = 0;
		}
		for (int l76 = 0; l76 < 3; l76 = l76 + 1) {
			fVec34[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			iRec45[l77] = 0;
		}
		for (int l78 = 0; l78 < 3; l78 = l78 + 1) {
			fVec35[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fVec36[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec39[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec38[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 4; l82 = l82 + 1) {
			fVec37[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 3; l83 = l83 + 1) {
			fRec49[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			iRec48[l84] = 0;
		}
		for (int l85 = 0; l85 < 3; l85 = l85 + 1) {
			fVec38[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			iRec50[l86] = 0;
		}
		for (int l87 = 0; l87 < 3; l87 = l87 + 1) {
			fVec39[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			iRec51[l88] = 0;
		}
		for (int l89 = 0; l89 < 3; l89 = l89 + 1) {
			fVec40[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			iRec52[l90] = 0;
		}
		for (int l91 = 0; l91 < 3; l91 = l91 + 1) {
			fVec41[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			iRec53[l92] = 0;
		}
		for (int l93 = 0; l93 < 3; l93 = l93 + 1) {
			fVec42[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fVec43[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec47[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec46[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 4; l97 = l97 + 1) {
			fVec44[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 3; l98 = l98 + 1) {
			fRec57[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			iRec56[l99] = 0;
		}
		for (int l100 = 0; l100 < 3; l100 = l100 + 1) {
			fVec45[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			iRec58[l101] = 0;
		}
		for (int l102 = 0; l102 < 3; l102 = l102 + 1) {
			fVec46[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			iRec59[l103] = 0;
		}
		for (int l104 = 0; l104 < 3; l104 = l104 + 1) {
			fVec47[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			iRec60[l105] = 0;
		}
		for (int l106 = 0; l106 < 3; l106 = l106 + 1) {
			fVec48[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			iRec61[l107] = 0;
		}
		for (int l108 = 0; l108 < 3; l108 = l108 + 1) {
			fVec49[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fVec50[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec55[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec54[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 4; l112 = l112 + 1) {
			fVec51[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 3; l113 = l113 + 1) {
			fRec65[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			iRec64[l114] = 0;
		}
		for (int l115 = 0; l115 < 3; l115 = l115 + 1) {
			fVec52[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			iRec66[l116] = 0;
		}
		for (int l117 = 0; l117 < 3; l117 = l117 + 1) {
			fVec53[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			iRec67[l118] = 0;
		}
		for (int l119 = 0; l119 < 3; l119 = l119 + 1) {
			fVec54[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			iRec68[l120] = 0;
		}
		for (int l121 = 0; l121 < 3; l121 = l121 + 1) {
			fVec55[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			iRec69[l122] = 0;
		}
		for (int l123 = 0; l123 < 3; l123 = l123 + 1) {
			fVec56[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fVec57[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec63[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec62[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 4; l127 = l127 + 1) {
			fVec58[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 3; l128 = l128 + 1) {
			fRec73[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			iRec72[l129] = 0;
		}
		for (int l130 = 0; l130 < 3; l130 = l130 + 1) {
			fVec59[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			iRec74[l131] = 0;
		}
		for (int l132 = 0; l132 < 3; l132 = l132 + 1) {
			fVec60[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			iRec75[l133] = 0;
		}
		for (int l134 = 0; l134 < 3; l134 = l134 + 1) {
			fVec61[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			iRec76[l135] = 0;
		}
		for (int l136 = 0; l136 < 3; l136 = l136 + 1) {
			fVec62[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			iRec77[l137] = 0;
		}
		for (int l138 = 0; l138 < 3; l138 = l138 + 1) {
			fVec63[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fVec64[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec71[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec70[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 4; l142 = l142 + 1) {
			fVec65[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 3; l143 = l143 + 1) {
			fRec81[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			iRec80[l144] = 0;
		}
		for (int l145 = 0; l145 < 3; l145 = l145 + 1) {
			fVec66[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			iRec82[l146] = 0;
		}
		for (int l147 = 0; l147 < 3; l147 = l147 + 1) {
			fVec67[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			iRec83[l148] = 0;
		}
		for (int l149 = 0; l149 < 3; l149 = l149 + 1) {
			fVec68[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			iRec84[l150] = 0;
		}
		for (int l151 = 0; l151 < 3; l151 = l151 + 1) {
			fVec69[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			iRec85[l152] = 0;
		}
		for (int l153 = 0; l153 < 3; l153 = l153 + 1) {
			fVec70[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fVec71[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec79[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec78[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 4; l157 = l157 + 1) {
			fVec72[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 3; l158 = l158 + 1) {
			fRec89[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			iRec88[l159] = 0;
		}
		for (int l160 = 0; l160 < 3; l160 = l160 + 1) {
			fVec73[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			iRec90[l161] = 0;
		}
		for (int l162 = 0; l162 < 3; l162 = l162 + 1) {
			fVec74[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			iRec91[l163] = 0;
		}
		for (int l164 = 0; l164 < 3; l164 = l164 + 1) {
			fVec75[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			iRec92[l165] = 0;
		}
		for (int l166 = 0; l166 < 3; l166 = l166 + 1) {
			fVec76[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			iRec93[l167] = 0;
		}
		for (int l168 = 0; l168 < 3; l168 = l168 + 1) {
			fVec77[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fVec78[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec87[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec86[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 4; l172 = l172 + 1) {
			fVec79[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			iRec96[l173] = 0;
		}
		for (int l174 = 0; l174 < 3; l174 = l174 + 1) {
			fVec80[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fVec81[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec95[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec94[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 4; l178 = l178 + 1) {
			fVec82[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			iRec99[l179] = 0;
		}
		for (int l180 = 0; l180 < 3; l180 = l180 + 1) {
			fVec83[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fVec84[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec98[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec97[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 4; l184 = l184 + 1) {
			fVec85[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			iRec102[l185] = 0;
		}
		for (int l186 = 0; l186 < 3; l186 = l186 + 1) {
			fVec86[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fVec87[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec101[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec100[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 4; l190 = l190 + 1) {
			fVec88[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			iRec105[l191] = 0;
		}
		for (int l192 = 0; l192 < 3; l192 = l192 + 1) {
			fVec89[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fVec90[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec104[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec103[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 4; l196 = l196 + 1) {
			fVec91[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			iRec108[l197] = 0;
		}
		for (int l198 = 0; l198 < 3; l198 = l198 + 1) {
			fVec92[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fVec93[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec107[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec106[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			iRec111[l202] = 0;
		}
		for (int l203 = 0; l203 < 3; l203 = l203 + 1) {
			fVec94[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fVec95[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec110[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec109[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			iRec114[l207] = 0;
		}
		for (int l208 = 0; l208 < 3; l208 = l208 + 1) {
			fVec96[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fVec97[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fRec113[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec112[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			iRec117[l212] = 0;
		}
		for (int l213 = 0; l213 < 3; l213 = l213 + 1) {
			fVec98[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fVec99[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec116[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec115[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			iRec120[l217] = 0;
		}
		for (int l218 = 0; l218 < 3; l218 = l218 + 1) {
			fVec100[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fVec101[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec119[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec118[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			iRec123[l222] = 0;
		}
		for (int l223 = 0; l223 < 3; l223 = l223 + 1) {
			fVec102[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fVec103[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec122[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fRec121[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			iRec126[l227] = 0;
		}
		for (int l228 = 0; l228 < 3; l228 = l228 + 1) {
			fVec104[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fVec105[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec125[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec124[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			iRec129[l232] = 0;
		}
		for (int l233 = 0; l233 < 3; l233 = l233 + 1) {
			fVec106[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fVec107[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec128[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec127[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			iRec132[l237] = 0;
		}
		for (int l238 = 0; l238 < 3; l238 = l238 + 1) {
			fVec108[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fVec109[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fRec131[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec130[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			iRec135[l242] = 0;
		}
		for (int l243 = 0; l243 < 3; l243 = l243 + 1) {
			fVec110[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fVec111[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec134[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec133[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			iRec138[l247] = 0;
		}
		for (int l248 = 0; l248 < 3; l248 = l248 + 1) {
			fVec112[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fVec113[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec137[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec136[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			iRec141[l252] = 0;
		}
		for (int l253 = 0; l253 < 3; l253 = l253 + 1) {
			fVec114[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			fVec115[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fRec140[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fRec139[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			iRec144[l257] = 0;
		}
		for (int l258 = 0; l258 < 3; l258 = l258 + 1) {
			fVec116[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fVec117[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec143[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2; l261 = l261 + 1) {
			fRec142[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 2; l262 = l262 + 1) {
			iRec147[l262] = 0;
		}
		for (int l263 = 0; l263 < 3; l263 = l263 + 1) {
			fVec118[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 2; l264 = l264 + 1) {
			fVec119[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 2; l265 = l265 + 1) {
			fRec146[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
			fRec145[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			iRec150[l267] = 0;
		}
		for (int l268 = 0; l268 < 3; l268 = l268 + 1) {
			fVec120[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fVec121[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec149[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec148[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			iRec153[l272] = 0;
		}
		for (int l273 = 0; l273 < 3; l273 = l273 + 1) {
			fVec122[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fVec123[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec152[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec151[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			iRec156[l277] = 0;
		}
		for (int l278 = 0; l278 < 3; l278 = l278 + 1) {
			fVec124[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fVec125[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fRec155[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
			fRec154[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 2; l282 = l282 + 1) {
			iRec159[l282] = 0;
		}
		for (int l283 = 0; l283 < 3; l283 = l283 + 1) {
			fVec126[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
			fVec127[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fRec158[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fRec157[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
			iRec162[l287] = 0;
		}
		for (int l288 = 0; l288 < 3; l288 = l288 + 1) {
			fVec128[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 2; l289 = l289 + 1) {
			fVec129[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 2; l290 = l290 + 1) {
			fRec161[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
			fRec160[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 2; l292 = l292 + 1) {
			iRec165[l292] = 0;
		}
		for (int l293 = 0; l293 < 3; l293 = l293 + 1) {
			fVec130[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 2; l294 = l294 + 1) {
			fVec131[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 2; l295 = l295 + 1) {
			fRec164[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 2; l296 = l296 + 1) {
			fRec163[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			iRec168[l297] = 0;
		}
		for (int l298 = 0; l298 < 3; l298 = l298 + 1) {
			fVec132[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fVec133[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fRec167[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec166[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			iRec171[l302] = 0;
		}
		for (int l303 = 0; l303 < 3; l303 = l303 + 1) {
			fVec134[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fVec135[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fRec170[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fRec169[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			iRec174[l307] = 0;
		}
		for (int l308 = 0; l308 < 3; l308 = l308 + 1) {
			fVec136[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fVec137[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			fRec173[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			fRec172[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
			iRec177[l312] = 0;
		}
		for (int l313 = 0; l313 < 3; l313 = l313 + 1) {
			fVec138[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 2; l314 = l314 + 1) {
			fVec139[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 2; l315 = l315 + 1) {
			fRec176[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 2; l316 = l316 + 1) {
			fRec175[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 2; l317 = l317 + 1) {
			iRec180[l317] = 0;
		}
		for (int l318 = 0; l318 < 3; l318 = l318 + 1) {
			fVec140[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 2; l319 = l319 + 1) {
			fVec141[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 2; l320 = l320 + 1) {
			fRec179[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 2; l321 = l321 + 1) {
			fRec178[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 2; l322 = l322 + 1) {
			fRec1[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 4; l323 = l323 + 1) {
			fVec142[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 2; l324 = l324 + 1) {
			fVec143[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fRec185[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 2; l326 = l326 + 1) {
			fRec184[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 4; l327 = l327 + 1) {
			fVec144[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 2; l328 = l328 + 1) {
			fVec145[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 2; l329 = l329 + 1) {
			fRec187[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 2; l330 = l330 + 1) {
			fRec186[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 4; l331 = l331 + 1) {
			fVec146[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 2; l332 = l332 + 1) {
			fVec147[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 2; l333 = l333 + 1) {
			fRec189[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 2; l334 = l334 + 1) {
			fRec188[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 4; l335 = l335 + 1) {
			fVec148[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 2; l336 = l336 + 1) {
			fVec149[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 2; l337 = l337 + 1) {
			fRec191[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 2; l338 = l338 + 1) {
			fRec190[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 4; l339 = l339 + 1) {
			fVec150[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 2; l340 = l340 + 1) {
			fVec151[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 2; l341 = l341 + 1) {
			fRec193[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 2; l342 = l342 + 1) {
			fRec192[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 4; l343 = l343 + 1) {
			fVec152[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 2; l344 = l344 + 1) {
			fVec153[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 2; l345 = l345 + 1) {
			fRec195[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 2; l346 = l346 + 1) {
			fRec194[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 4; l347 = l347 + 1) {
			fVec154[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 2; l348 = l348 + 1) {
			fVec155[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fRec197[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec196[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 4; l351 = l351 + 1) {
			fVec156[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 2; l352 = l352 + 1) {
			fVec157[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 2; l353 = l353 + 1) {
			fRec199[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 2; l354 = l354 + 1) {
			fRec198[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 4; l355 = l355 + 1) {
			fVec158[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 2; l356 = l356 + 1) {
			fVec159[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 2; l357 = l357 + 1) {
			fRec201[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 2; l358 = l358 + 1) {
			fRec200[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 4; l359 = l359 + 1) {
			fVec160[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 2; l360 = l360 + 1) {
			fVec161[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 2; l361 = l361 + 1) {
			fRec203[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec202[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 4; l363 = l363 + 1) {
			fVec162[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2; l364 = l364 + 1) {
			fVec163[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 2; l365 = l365 + 1) {
			fRec205[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 2; l366 = l366 + 1) {
			fRec204[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 4; l367 = l367 + 1) {
			fVec164[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 2; l368 = l368 + 1) {
			fVec165[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 2; l369 = l369 + 1) {
			fRec207[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 2; l370 = l370 + 1) {
			fRec206[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 4; l371 = l371 + 1) {
			fVec166[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 2; l372 = l372 + 1) {
			fVec167[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 2; l373 = l373 + 1) {
			fRec209[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 2; l374 = l374 + 1) {
			fRec208[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 4; l375 = l375 + 1) {
			fVec168[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 2; l376 = l376 + 1) {
			fVec169[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			fRec211[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 2; l378 = l378 + 1) {
			fRec210[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 4; l379 = l379 + 1) {
			fVec170[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fVec171[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 2; l381 = l381 + 1) {
			fRec213[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 2; l382 = l382 + 1) {
			fRec212[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 4; l383 = l383 + 1) {
			fVec172[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 2; l384 = l384 + 1) {
			fVec173[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 2; l385 = l385 + 1) {
			fRec215[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 2; l386 = l386 + 1) {
			fRec214[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 4; l387 = l387 + 1) {
			fVec174[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 2; l388 = l388 + 1) {
			fVec175[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 2; l389 = l389 + 1) {
			fRec217[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 2; l390 = l390 + 1) {
			fRec216[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 4; l391 = l391 + 1) {
			fVec176[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 2; l392 = l392 + 1) {
			fVec177[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 2; l393 = l393 + 1) {
			fRec219[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 2; l394 = l394 + 1) {
			fRec218[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 4; l395 = l395 + 1) {
			fVec178[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 2; l396 = l396 + 1) {
			fVec179[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 2; l397 = l397 + 1) {
			fRec221[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 2; l398 = l398 + 1) {
			fRec220[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 4; l399 = l399 + 1) {
			fVec180[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 2; l400 = l400 + 1) {
			fVec181[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 2; l401 = l401 + 1) {
			fRec223[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 2; l402 = l402 + 1) {
			fRec222[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 4; l403 = l403 + 1) {
			fVec182[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 4; l404 = l404 + 1) {
			fVec183[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 4; l405 = l405 + 1) {
			fVec184[l405] = 0.0f;
		}
		for (int l406 = 0; l406 < 4; l406 = l406 + 1) {
			fVec185[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 4; l407 = l407 + 1) {
			fVec186[l407] = 0.0f;
		}
		for (int l408 = 0; l408 < 4; l408 = l408 + 1) {
			fVec187[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 4; l409 = l409 + 1) {
			fVec188[l409] = 0.0f;
		}
		for (int l410 = 0; l410 < 4; l410 = l410 + 1) {
			fVec189[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 4; l411 = l411 + 1) {
			fVec190[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 4; l412 = l412 + 1) {
			fVec191[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 4; l413 = l413 + 1) {
			fVec192[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 4; l414 = l414 + 1) {
			fVec193[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 4; l415 = l415 + 1) {
			fVec194[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 4; l416 = l416 + 1) {
			fVec195[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 4; l417 = l417 + 1) {
			fVec196[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 4; l418 = l418 + 1) {
			fVec197[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 4; l419 = l419 + 1) {
			fVec198[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 4; l420 = l420 + 1) {
			fVec199[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 4; l421 = l421 + 1) {
			fVec200[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 4; l422 = l422 + 1) {
			fVec201[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 4; l423 = l423 + 1) {
			fVec202[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 4; l424 = l424 + 1) {
			fVec203[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 4; l425 = l425 + 1) {
			fVec204[l425] = 0.0f;
		}
		for (int l426 = 0; l426 < 4; l426 = l426 + 1) {
			fVec205[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 2; l427 = l427 + 1) {
			fVec206[l427] = 0.0f;
		}
		for (int l428 = 0; l428 < 2; l428 = l428 + 1) {
			fRec183[l428] = 0.0f;
		}
		for (int l429 = 0; l429 < 2; l429 = l429 + 1) {
			fVec207[l429] = 0.0f;
		}
		for (int l430 = 0; l430 < 2; l430 = l430 + 1) {
			fRec182[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 2; l431 = l431 + 1) {
			fRec181[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 2; l432 = l432 + 1) {
			fVec208[l432] = 0.0f;
		}
		for (int l433 = 0; l433 < 2; l433 = l433 + 1) {
			fRec228[l433] = 0.0f;
		}
		for (int l434 = 0; l434 < 2; l434 = l434 + 1) {
			fRec227[l434] = 0.0f;
		}
		for (int l435 = 0; l435 < 2; l435 = l435 + 1) {
			fVec209[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 2; l436 = l436 + 1) {
			fRec230[l436] = 0.0f;
		}
		for (int l437 = 0; l437 < 2; l437 = l437 + 1) {
			fRec229[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 2; l438 = l438 + 1) {
			fVec210[l438] = 0.0f;
		}
		for (int l439 = 0; l439 < 2; l439 = l439 + 1) {
			fRec232[l439] = 0.0f;
		}
		for (int l440 = 0; l440 < 2; l440 = l440 + 1) {
			fRec231[l440] = 0.0f;
		}
		for (int l441 = 0; l441 < 2; l441 = l441 + 1) {
			fVec211[l441] = 0.0f;
		}
		for (int l442 = 0; l442 < 2; l442 = l442 + 1) {
			fRec234[l442] = 0.0f;
		}
		for (int l443 = 0; l443 < 2; l443 = l443 + 1) {
			fRec233[l443] = 0.0f;
		}
		for (int l444 = 0; l444 < 2; l444 = l444 + 1) {
			fVec212[l444] = 0.0f;
		}
		for (int l445 = 0; l445 < 2; l445 = l445 + 1) {
			fRec236[l445] = 0.0f;
		}
		for (int l446 = 0; l446 < 2; l446 = l446 + 1) {
			fRec235[l446] = 0.0f;
		}
		for (int l447 = 0; l447 < 2; l447 = l447 + 1) {
			fVec213[l447] = 0.0f;
		}
		for (int l448 = 0; l448 < 2; l448 = l448 + 1) {
			fRec238[l448] = 0.0f;
		}
		for (int l449 = 0; l449 < 2; l449 = l449 + 1) {
			fRec237[l449] = 0.0f;
		}
		for (int l450 = 0; l450 < 2; l450 = l450 + 1) {
			fVec214[l450] = 0.0f;
		}
		for (int l451 = 0; l451 < 2; l451 = l451 + 1) {
			fRec240[l451] = 0.0f;
		}
		for (int l452 = 0; l452 < 2; l452 = l452 + 1) {
			fRec239[l452] = 0.0f;
		}
		for (int l453 = 0; l453 < 2; l453 = l453 + 1) {
			fVec215[l453] = 0.0f;
		}
		for (int l454 = 0; l454 < 2; l454 = l454 + 1) {
			fRec242[l454] = 0.0f;
		}
		for (int l455 = 0; l455 < 2; l455 = l455 + 1) {
			fRec241[l455] = 0.0f;
		}
		for (int l456 = 0; l456 < 2; l456 = l456 + 1) {
			fVec216[l456] = 0.0f;
		}
		for (int l457 = 0; l457 < 2; l457 = l457 + 1) {
			fRec244[l457] = 0.0f;
		}
		for (int l458 = 0; l458 < 2; l458 = l458 + 1) {
			fRec243[l458] = 0.0f;
		}
		for (int l459 = 0; l459 < 2; l459 = l459 + 1) {
			fVec217[l459] = 0.0f;
		}
		for (int l460 = 0; l460 < 2; l460 = l460 + 1) {
			fRec246[l460] = 0.0f;
		}
		for (int l461 = 0; l461 < 2; l461 = l461 + 1) {
			fRec245[l461] = 0.0f;
		}
		for (int l462 = 0; l462 < 2; l462 = l462 + 1) {
			fVec218[l462] = 0.0f;
		}
		for (int l463 = 0; l463 < 2; l463 = l463 + 1) {
			fRec248[l463] = 0.0f;
		}
		for (int l464 = 0; l464 < 2; l464 = l464 + 1) {
			fRec247[l464] = 0.0f;
		}
		for (int l465 = 0; l465 < 2; l465 = l465 + 1) {
			fVec219[l465] = 0.0f;
		}
		for (int l466 = 0; l466 < 2; l466 = l466 + 1) {
			fRec250[l466] = 0.0f;
		}
		for (int l467 = 0; l467 < 2; l467 = l467 + 1) {
			fRec249[l467] = 0.0f;
		}
		for (int l468 = 0; l468 < 2; l468 = l468 + 1) {
			fVec220[l468] = 0.0f;
		}
		for (int l469 = 0; l469 < 2; l469 = l469 + 1) {
			fRec226[l469] = 0.0f;
		}
		for (int l470 = 0; l470 < 2; l470 = l470 + 1) {
			fVec221[l470] = 0.0f;
		}
		for (int l471 = 0; l471 < 2; l471 = l471 + 1) {
			fRec225[l471] = 0.0f;
		}
		for (int l472 = 0; l472 < 2; l472 = l472 + 1) {
			fRec224[l472] = 0.0f;
		}
		for (int l473 = 0; l473 < 2; l473 = l473 + 1) {
			fVec222[l473] = 0.0f;
		}
		for (int l474 = 0; l474 < 2; l474 = l474 + 1) {
			fRec255[l474] = 0.0f;
		}
		for (int l475 = 0; l475 < 2; l475 = l475 + 1) {
			fRec254[l475] = 0.0f;
		}
		for (int l476 = 0; l476 < 2; l476 = l476 + 1) {
			fVec223[l476] = 0.0f;
		}
		for (int l477 = 0; l477 < 2; l477 = l477 + 1) {
			fRec257[l477] = 0.0f;
		}
		for (int l478 = 0; l478 < 2; l478 = l478 + 1) {
			fRec256[l478] = 0.0f;
		}
		for (int l479 = 0; l479 < 2; l479 = l479 + 1) {
			fVec224[l479] = 0.0f;
		}
		for (int l480 = 0; l480 < 2; l480 = l480 + 1) {
			fRec259[l480] = 0.0f;
		}
		for (int l481 = 0; l481 < 2; l481 = l481 + 1) {
			fRec258[l481] = 0.0f;
		}
		for (int l482 = 0; l482 < 2; l482 = l482 + 1) {
			fVec225[l482] = 0.0f;
		}
		for (int l483 = 0; l483 < 2; l483 = l483 + 1) {
			fRec261[l483] = 0.0f;
		}
		for (int l484 = 0; l484 < 2; l484 = l484 + 1) {
			fRec260[l484] = 0.0f;
		}
		for (int l485 = 0; l485 < 2; l485 = l485 + 1) {
			fVec226[l485] = 0.0f;
		}
		for (int l486 = 0; l486 < 2; l486 = l486 + 1) {
			fRec263[l486] = 0.0f;
		}
		for (int l487 = 0; l487 < 2; l487 = l487 + 1) {
			fRec262[l487] = 0.0f;
		}
		for (int l488 = 0; l488 < 2; l488 = l488 + 1) {
			fVec227[l488] = 0.0f;
		}
		for (int l489 = 0; l489 < 2; l489 = l489 + 1) {
			fRec265[l489] = 0.0f;
		}
		for (int l490 = 0; l490 < 2; l490 = l490 + 1) {
			fRec264[l490] = 0.0f;
		}
		for (int l491 = 0; l491 < 2; l491 = l491 + 1) {
			fVec228[l491] = 0.0f;
		}
		for (int l492 = 0; l492 < 2; l492 = l492 + 1) {
			fRec267[l492] = 0.0f;
		}
		for (int l493 = 0; l493 < 2; l493 = l493 + 1) {
			fRec266[l493] = 0.0f;
		}
		for (int l494 = 0; l494 < 2; l494 = l494 + 1) {
			fVec229[l494] = 0.0f;
		}
		for (int l495 = 0; l495 < 2; l495 = l495 + 1) {
			fRec269[l495] = 0.0f;
		}
		for (int l496 = 0; l496 < 2; l496 = l496 + 1) {
			fRec268[l496] = 0.0f;
		}
		for (int l497 = 0; l497 < 2; l497 = l497 + 1) {
			fVec230[l497] = 0.0f;
		}
		for (int l498 = 0; l498 < 2; l498 = l498 + 1) {
			fRec271[l498] = 0.0f;
		}
		for (int l499 = 0; l499 < 2; l499 = l499 + 1) {
			fRec270[l499] = 0.0f;
		}
		for (int l500 = 0; l500 < 2; l500 = l500 + 1) {
			fVec231[l500] = 0.0f;
		}
		for (int l501 = 0; l501 < 2; l501 = l501 + 1) {
			fRec273[l501] = 0.0f;
		}
		for (int l502 = 0; l502 < 2; l502 = l502 + 1) {
			fRec272[l502] = 0.0f;
		}
		for (int l503 = 0; l503 < 2; l503 = l503 + 1) {
			fVec232[l503] = 0.0f;
		}
		for (int l504 = 0; l504 < 2; l504 = l504 + 1) {
			fRec275[l504] = 0.0f;
		}
		for (int l505 = 0; l505 < 2; l505 = l505 + 1) {
			fRec274[l505] = 0.0f;
		}
		for (int l506 = 0; l506 < 2; l506 = l506 + 1) {
			fVec233[l506] = 0.0f;
		}
		for (int l507 = 0; l507 < 2; l507 = l507 + 1) {
			fVec234[l507] = 0.0f;
		}
		for (int l508 = 0; l508 < 2; l508 = l508 + 1) {
			fRec276[l508] = 0.0f;
		}
		for (int l509 = 0; l509 < 2; l509 = l509 + 1) {
			fVec235[l509] = 0.0f;
		}
		for (int l510 = 0; l510 < 2; l510 = l510 + 1) {
			fRec253[l510] = 0.0f;
		}
		for (int l511 = 0; l511 < 2; l511 = l511 + 1) {
			fVec236[l511] = 0.0f;
		}
		for (int l512 = 0; l512 < 2; l512 = l512 + 1) {
			fRec252[l512] = 0.0f;
		}
		for (int l513 = 0; l513 < 2; l513 = l513 + 1) {
			fRec251[l513] = 0.0f;
		}
		for (int l514 = 0; l514 < 2; l514 = l514 + 1) {
			fVec237[l514] = 0.0f;
		}
		for (int l515 = 0; l515 < 2; l515 = l515 + 1) {
			fVec238[l515] = 0.0f;
		}
		for (int l516 = 0; l516 < 2; l516 = l516 + 1) {
			fRec280[l516] = 0.0f;
		}
		for (int l517 = 0; l517 < 2; l517 = l517 + 1) {
			fVec239[l517] = 0.0f;
		}
		for (int l518 = 0; l518 < 2; l518 = l518 + 1) {
			fVec240[l518] = 0.0f;
		}
		for (int l519 = 0; l519 < 2; l519 = l519 + 1) {
			fRec281[l519] = 0.0f;
		}
		for (int l520 = 0; l520 < 2; l520 = l520 + 1) {
			fVec241[l520] = 0.0f;
		}
		for (int l521 = 0; l521 < 2; l521 = l521 + 1) {
			fVec242[l521] = 0.0f;
		}
		for (int l522 = 0; l522 < 2; l522 = l522 + 1) {
			fRec282[l522] = 0.0f;
		}
		for (int l523 = 0; l523 < 2; l523 = l523 + 1) {
			fVec243[l523] = 0.0f;
		}
		for (int l524 = 0; l524 < 2; l524 = l524 + 1) {
			fVec244[l524] = 0.0f;
		}
		for (int l525 = 0; l525 < 2; l525 = l525 + 1) {
			fRec283[l525] = 0.0f;
		}
		for (int l526 = 0; l526 < 2; l526 = l526 + 1) {
			fVec245[l526] = 0.0f;
		}
		for (int l527 = 0; l527 < 2; l527 = l527 + 1) {
			fVec246[l527] = 0.0f;
		}
		for (int l528 = 0; l528 < 2; l528 = l528 + 1) {
			fRec284[l528] = 0.0f;
		}
		for (int l529 = 0; l529 < 2; l529 = l529 + 1) {
			fVec247[l529] = 0.0f;
		}
		for (int l530 = 0; l530 < 2; l530 = l530 + 1) {
			fVec248[l530] = 0.0f;
		}
		for (int l531 = 0; l531 < 2; l531 = l531 + 1) {
			fRec285[l531] = 0.0f;
		}
		for (int l532 = 0; l532 < 2; l532 = l532 + 1) {
			fVec249[l532] = 0.0f;
		}
		for (int l533 = 0; l533 < 2; l533 = l533 + 1) {
			fVec250[l533] = 0.0f;
		}
		for (int l534 = 0; l534 < 2; l534 = l534 + 1) {
			fRec286[l534] = 0.0f;
		}
		for (int l535 = 0; l535 < 2; l535 = l535 + 1) {
			fVec251[l535] = 0.0f;
		}
		for (int l536 = 0; l536 < 2; l536 = l536 + 1) {
			fVec252[l536] = 0.0f;
		}
		for (int l537 = 0; l537 < 2; l537 = l537 + 1) {
			fRec287[l537] = 0.0f;
		}
		for (int l538 = 0; l538 < 2; l538 = l538 + 1) {
			fVec253[l538] = 0.0f;
		}
		for (int l539 = 0; l539 < 2; l539 = l539 + 1) {
			fVec254[l539] = 0.0f;
		}
		for (int l540 = 0; l540 < 2; l540 = l540 + 1) {
			fRec288[l540] = 0.0f;
		}
		for (int l541 = 0; l541 < 2; l541 = l541 + 1) {
			fVec255[l541] = 0.0f;
		}
		for (int l542 = 0; l542 < 2; l542 = l542 + 1) {
			fVec256[l542] = 0.0f;
		}
		for (int l543 = 0; l543 < 2; l543 = l543 + 1) {
			fRec289[l543] = 0.0f;
		}
		for (int l544 = 0; l544 < 2; l544 = l544 + 1) {
			fVec257[l544] = 0.0f;
		}
		for (int l545 = 0; l545 < 2; l545 = l545 + 1) {
			fVec258[l545] = 0.0f;
		}
		for (int l546 = 0; l546 < 2; l546 = l546 + 1) {
			fRec290[l546] = 0.0f;
		}
		for (int l547 = 0; l547 < 2; l547 = l547 + 1) {
			fVec259[l547] = 0.0f;
		}
		for (int l548 = 0; l548 < 2; l548 = l548 + 1) {
			fRec279[l548] = 0.0f;
		}
		for (int l549 = 0; l549 < 2; l549 = l549 + 1) {
			fVec260[l549] = 0.0f;
		}
		for (int l550 = 0; l550 < 2; l550 = l550 + 1) {
			fRec278[l550] = 0.0f;
		}
		for (int l551 = 0; l551 < 2; l551 = l551 + 1) {
			fRec277[l551] = 0.0f;
		}
		for (int l552 = 0; l552 < 2; l552 = l552 + 1) {
			fRec292[l552] = 0.0f;
		}
		for (int l553 = 0; l553 < 2; l553 = l553 + 1) {
			fVec261[l553] = 0.0f;
		}
		for (int l554 = 0; l554 < 2; l554 = l554 + 1) {
			fRec291[l554] = 0.0f;
		}
		for (int l555 = 0; l555 < 2; l555 = l555 + 1) {
			fRec294[l555] = 0.0f;
		}
		for (int l556 = 0; l556 < 2; l556 = l556 + 1) {
			fVec262[l556] = 0.0f;
		}
		for (int l557 = 0; l557 < 2; l557 = l557 + 1) {
			fRec293[l557] = 0.0f;
		}
		for (int l558 = 0; l558 < 2; l558 = l558 + 1) {
			fRec296[l558] = 0.0f;
		}
		for (int l559 = 0; l559 < 2; l559 = l559 + 1) {
			fVec263[l559] = 0.0f;
		}
		for (int l560 = 0; l560 < 2; l560 = l560 + 1) {
			fRec295[l560] = 0.0f;
		}
		for (int l561 = 0; l561 < 2; l561 = l561 + 1) {
			fRec298[l561] = 0.0f;
		}
		for (int l562 = 0; l562 < 2; l562 = l562 + 1) {
			fVec264[l562] = 0.0f;
		}
		for (int l563 = 0; l563 < 2; l563 = l563 + 1) {
			fRec297[l563] = 0.0f;
		}
		for (int l564 = 0; l564 < 2; l564 = l564 + 1) {
			fVec265[l564] = 0.0f;
		}
		for (int l565 = 0; l565 < 2; l565 = l565 + 1) {
			fRec299[l565] = 0.0f;
		}
		for (int l566 = 0; l566 < 2; l566 = l566 + 1) {
			fVec266[l566] = 0.0f;
		}
		for (int l567 = 0; l567 < 2; l567 = l567 + 1) {
			fRec300[l567] = 0.0f;
		}
		for (int l568 = 0; l568 < 2; l568 = l568 + 1) {
			fVec267[l568] = 0.0f;
		}
		for (int l569 = 0; l569 < 2; l569 = l569 + 1) {
			fRec301[l569] = 0.0f;
		}
		for (int l570 = 0; l570 < 2; l570 = l570 + 1) {
			iRec307[l570] = 0;
		}
		for (int l571 = 0; l571 < 2; l571 = l571 + 1) {
			fRec304[l571] = 0.0f;
		}
		for (int l572 = 0; l572 < 2; l572 = l572 + 1) {
			iRec305[l572] = 0;
		}
		for (int l573 = 0; l573 < 2; l573 = l573 + 1) {
			fRec306[l573] = 0.0f;
		}
		for (int l574 = 0; l574 < 2; l574 = l574 + 1) {
			fVec268[l574] = 0.0f;
		}
		for (int l575 = 0; l575 < 2; l575 = l575 + 1) {
			fRec303[l575] = 0.0f;
		}
		for (int l576 = 0; l576 < 2; l576 = l576 + 1) {
			fRec302[l576] = 0.0f;
		}
		for (int l577 = 0; l577 < 5; l577 = l577 + 1) {
			fVec269[l577] = 0.0f;
		}
		for (int l578 = 0; l578 < 2; l578 = l578 + 1) {
			fRec308[l578] = 0.0f;
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
			float fTemp3 = fRec5[0] - fRec5[1];
			iRec4[0] = ((fTemp3 < 0.0f) ? 1 - iRec4[1] : iRec4[1]);
			float fTemp4 = fRec5[0] + float(iRec4[0]);
			fVec1[0] = fTemp4;
			float fTemp5 = 0.5f * fTemp4;
			iRec7[0] = (((0.5f * (fTemp4 - fVec1[1])) < 0.0f) ? 1 - iRec7[1] : iRec7[1]);
			float fTemp6 = float(iRec7[0]) + fTemp5;
			fVec2[0] = fTemp6;
			float fTemp7 = 0.5f * fTemp6;
			iRec8[0] = (((0.5f * (fTemp6 - fVec2[1])) < 0.0f) ? 1 - iRec8[1] : iRec8[1]);
			float fTemp8 = float(iRec8[0]) + fTemp7;
			fVec3[0] = fTemp8;
			float fTemp9 = 0.5f * fTemp8;
			iRec9[0] = (((0.5f * (fTemp8 - fVec3[1])) < 0.0f) ? 1 - iRec9[1] : iRec9[1]);
			float fTemp10 = float(iRec9[0]) + fTemp9;
			fVec4[0] = fTemp10;
			float fTemp11 = 0.5f * fTemp10;
			float fTemp12 = fRec5[0] + (1.0f - fRec5[1]);
			float fTemp13 = saw_polyblep_fast(fRec5[0], fRec5[1], fRec5[2], ((fTemp12 > 1.0f) ? fTemp3 : fTemp12));
			fVec5[0] = float(fTemp11 < 0.5f) + -0.5f;
			fRec3[0] = fRec3[1] + fConst3 * (2.0f * fVec5[1] + square_polyblep_precalc(fTemp11, 0.5f * fVec4[1], 0.5f * fVec4[2], fTemp13) - fRec3[1]);
			fRec2[0] = fConst5 * (fRec2[1] + (fRec3[0] - fRec3[1]));
			fVec6[0] = fSlow8;
			float fTemp14 = fSlow8 + fVec6[3] + fVec6[1] + fVec6[2];
			float fTemp15 = fRec13[1] + fConst6 * fSlow9 * fTemp1;
			fRec13[0] = ((fTemp15 > 1.0f) ? fTemp15 + -1.0f : fTemp15);
			float fTemp16 = fRec13[0] - fRec13[1];
			iRec12[0] = ((fTemp16 < 0.0f) ? 1 - iRec12[1] : iRec12[1]);
			float fTemp17 = fRec13[0] + float(iRec12[0]);
			fVec7[0] = fTemp17;
			float fTemp18 = 0.5f * fTemp17;
			iRec14[0] = (((0.5f * (fTemp17 - fVec7[1])) < 0.0f) ? 1 - iRec14[1] : iRec14[1]);
			float fTemp19 = float(iRec14[0]) + fTemp18;
			fVec8[0] = fTemp19;
			float fTemp20 = 0.5f * fTemp19;
			iRec15[0] = (((0.5f * (fTemp19 - fVec8[1])) < 0.0f) ? 1 - iRec15[1] : iRec15[1]);
			float fTemp21 = float(iRec15[0]) + fTemp20;
			fVec9[0] = fTemp21;
			float fTemp22 = 0.5f * fTemp21;
			iRec16[0] = (((0.5f * (fTemp21 - fVec9[1])) < 0.0f) ? 1 - iRec16[1] : iRec16[1]);
			float fTemp23 = float(iRec16[0]) + fTemp22;
			fVec10[0] = fTemp23;
			float fTemp24 = 0.5f * fTemp23;
			float fTemp25 = fRec13[0] + (1.0f - fRec13[1]);
			float fTemp26 = saw_polyblep_fast(fRec13[0], fRec13[1], fRec13[2], ((fTemp25 > 1.0f) ? fTemp16 : fTemp25));
			fVec11[0] = float(fTemp24 < 0.5f) + -0.5f;
			fRec11[0] = fRec11[1] + fConst7 * (2.0f * fVec11[1] + square_polyblep_precalc(fTemp24, 0.5f * fVec10[1], 0.5f * fVec10[2], fTemp26) - fRec11[1]);
			fRec10[0] = fConst5 * (fRec10[1] + (fRec11[0] - fRec11[1]));
			fVec12[0] = fSlow10;
			float fTemp27 = fSlow10 + fVec12[3] + fVec12[1] + fVec12[2];
			float fTemp28 = fRec20[1] + fConst8 * fSlow11 * fTemp1;
			fRec20[0] = ((fTemp28 > 1.0f) ? fTemp28 + -1.0f : fTemp28);
			float fTemp29 = fRec20[0] - fRec20[1];
			iRec19[0] = ((fTemp29 < 0.0f) ? 1 - iRec19[1] : iRec19[1]);
			float fTemp30 = fRec20[0] + float(iRec19[0]);
			fVec13[0] = fTemp30;
			float fTemp31 = 0.5f * fTemp30;
			iRec21[0] = (((0.5f * (fTemp30 - fVec13[1])) < 0.0f) ? 1 - iRec21[1] : iRec21[1]);
			float fTemp32 = float(iRec21[0]) + fTemp31;
			fVec14[0] = fTemp32;
			float fTemp33 = 0.5f * fTemp32;
			iRec22[0] = (((0.5f * (fTemp32 - fVec14[1])) < 0.0f) ? 1 - iRec22[1] : iRec22[1]);
			float fTemp34 = float(iRec22[0]) + fTemp33;
			fVec15[0] = fTemp34;
			float fTemp35 = 0.5f * fTemp34;
			iRec23[0] = (((0.5f * (fTemp34 - fVec15[1])) < 0.0f) ? 1 - iRec23[1] : iRec23[1]);
			float fTemp36 = float(iRec23[0]) + fTemp35;
			fVec16[0] = fTemp36;
			float fTemp37 = 0.5f * fTemp36;
			float fTemp38 = fRec20[0] + (1.0f - fRec20[1]);
			float fTemp39 = saw_polyblep_fast(fRec20[0], fRec20[1], fRec20[2], ((fTemp38 > 1.0f) ? fTemp29 : fTemp38));
			fVec17[0] = float(fTemp37 < 0.5f) + -0.5f;
			fRec18[0] = fRec18[1] + fConst7 * (2.0f * fVec17[1] + square_polyblep_precalc(fTemp37, 0.5f * fVec16[1], 0.5f * fVec16[2], fTemp39) - fRec18[1]);
			fRec17[0] = fConst5 * (fRec17[1] + (fRec18[0] - fRec18[1]));
			fVec18[0] = fSlow12;
			float fTemp40 = fSlow12 + fVec18[3] + fVec18[1] + fVec18[2];
			float fTemp41 = fRec27[1] + fConst9 * fSlow13 * fTemp1;
			fRec27[0] = ((fTemp41 > 1.0f) ? fTemp41 + -1.0f : fTemp41);
			float fTemp42 = fRec27[0] - fRec27[1];
			iRec26[0] = ((fTemp42 < 0.0f) ? 1 - iRec26[1] : iRec26[1]);
			float fTemp43 = fRec27[0] + float(iRec26[0]);
			fVec19[0] = fTemp43;
			float fTemp44 = 0.5f * fTemp43;
			iRec28[0] = (((0.5f * (fTemp43 - fVec19[1])) < 0.0f) ? 1 - iRec28[1] : iRec28[1]);
			float fTemp45 = float(iRec28[0]) + fTemp44;
			fVec20[0] = fTemp45;
			float fTemp46 = 0.5f * fTemp45;
			iRec29[0] = (((0.5f * (fTemp45 - fVec20[1])) < 0.0f) ? 1 - iRec29[1] : iRec29[1]);
			float fTemp47 = float(iRec29[0]) + fTemp46;
			fVec21[0] = fTemp47;
			float fTemp48 = 0.5f * fTemp47;
			iRec30[0] = (((0.5f * (fTemp47 - fVec21[1])) < 0.0f) ? 1 - iRec30[1] : iRec30[1]);
			float fTemp49 = float(iRec30[0]) + fTemp48;
			fVec22[0] = fTemp49;
			float fTemp50 = 0.5f * fTemp49;
			float fTemp51 = fRec27[0] + (1.0f - fRec27[1]);
			float fTemp52 = saw_polyblep_fast(fRec27[0], fRec27[1], fRec27[2], ((fTemp51 > 1.0f) ? fTemp42 : fTemp51));
			fVec23[0] = float(fTemp50 < 0.5f) + -0.5f;
			fRec25[0] = fRec25[1] + fConst7 * (2.0f * fVec23[1] + square_polyblep_precalc(fTemp50, 0.5f * fVec22[1], 0.5f * fVec22[2], fTemp52) - fRec25[1]);
			fRec24[0] = fConst5 * (fRec24[1] + (fRec25[0] - fRec25[1]));
			fVec24[0] = fSlow14;
			float fTemp53 = fSlow14 + fVec24[3] + fVec24[1] + fVec24[2];
			float fTemp54 = fRec34[1] + fConst10 * fSlow15 * fTemp1;
			fRec34[0] = ((fTemp54 > 1.0f) ? fTemp54 + -1.0f : fTemp54);
			float fTemp55 = fRec34[0] - fRec34[1];
			iRec33[0] = ((fTemp55 < 0.0f) ? 1 - iRec33[1] : iRec33[1]);
			float fTemp56 = fRec34[0] + float(iRec33[0]);
			fVec25[0] = fTemp56;
			float fTemp57 = 0.5f * fTemp56;
			iRec35[0] = (((0.5f * (fTemp56 - fVec25[1])) < 0.0f) ? 1 - iRec35[1] : iRec35[1]);
			float fTemp58 = float(iRec35[0]) + fTemp57;
			fVec26[0] = fTemp58;
			float fTemp59 = 0.5f * fTemp58;
			iRec36[0] = (((0.5f * (fTemp58 - fVec26[1])) < 0.0f) ? 1 - iRec36[1] : iRec36[1]);
			float fTemp60 = float(iRec36[0]) + fTemp59;
			fVec27[0] = fTemp60;
			float fTemp61 = 0.5f * fTemp60;
			iRec37[0] = (((0.5f * (fTemp60 - fVec27[1])) < 0.0f) ? 1 - iRec37[1] : iRec37[1]);
			float fTemp62 = float(iRec37[0]) + fTemp61;
			fVec28[0] = fTemp62;
			float fTemp63 = 0.5f * fTemp62;
			float fTemp64 = fRec34[0] + (1.0f - fRec34[1]);
			float fTemp65 = saw_polyblep_fast(fRec34[0], fRec34[1], fRec34[2], ((fTemp64 > 1.0f) ? fTemp55 : fTemp64));
			fVec29[0] = float(fTemp63 < 0.5f) + -0.5f;
			fRec32[0] = fRec32[1] + fConst7 * (2.0f * fVec29[1] + square_polyblep_precalc(fTemp63, 0.5f * fVec28[1], 0.5f * fVec28[2], fTemp65) - fRec32[1]);
			fRec31[0] = fConst5 * (fRec31[1] + (fRec32[0] - fRec32[1]));
			fVec30[0] = fSlow16;
			float fTemp66 = fSlow16 + fVec30[3] + fVec30[1] + fVec30[2];
			float fTemp67 = fRec41[1] + fConst11 * fSlow17 * fTemp1;
			fRec41[0] = ((fTemp67 > 1.0f) ? fTemp67 + -1.0f : fTemp67);
			float fTemp68 = fRec41[0] - fRec41[1];
			iRec40[0] = ((fTemp68 < 0.0f) ? 1 - iRec40[1] : iRec40[1]);
			float fTemp69 = fRec41[0] + float(iRec40[0]);
			fVec31[0] = fTemp69;
			float fTemp70 = 0.5f * fTemp69;
			iRec42[0] = (((0.5f * (fTemp69 - fVec31[1])) < 0.0f) ? 1 - iRec42[1] : iRec42[1]);
			float fTemp71 = float(iRec42[0]) + fTemp70;
			fVec32[0] = fTemp71;
			float fTemp72 = 0.5f * fTemp71;
			iRec43[0] = (((0.5f * (fTemp71 - fVec32[1])) < 0.0f) ? 1 - iRec43[1] : iRec43[1]);
			float fTemp73 = float(iRec43[0]) + fTemp72;
			fVec33[0] = fTemp73;
			float fTemp74 = 0.5f * fTemp73;
			iRec44[0] = (((0.5f * (fTemp73 - fVec33[1])) < 0.0f) ? 1 - iRec44[1] : iRec44[1]);
			float fTemp75 = float(iRec44[0]) + fTemp74;
			fVec34[0] = fTemp75;
			float fTemp76 = 0.5f * fTemp75;
			iRec45[0] = (((0.5f * (fTemp75 - fVec34[1])) < 0.0f) ? 1 - iRec45[1] : iRec45[1]);
			float fTemp77 = float(iRec45[0]) + fTemp76;
			fVec35[0] = fTemp77;
			float fTemp78 = 0.5f * fTemp77;
			float fTemp79 = fRec41[0] + (1.0f - fRec41[1]);
			float fTemp80 = saw_polyblep_fast(fRec41[0], fRec41[1], fRec41[2], ((fTemp79 > 1.0f) ? fTemp68 : fTemp79));
			fVec36[0] = float(fTemp78 < 0.5f) + -0.5f;
			fRec39[0] = fRec39[1] + fConst12 * (2.0f * fVec36[1] + square_polyblep_precalc(fTemp78, 0.5f * fVec35[1], 0.5f * fVec35[2], fTemp80) - fRec39[1]);
			fRec38[0] = fConst13 * (fRec38[1] + (fRec39[0] - fRec39[1]));
			fVec37[0] = fSlow18;
			float fTemp81 = fSlow18 + fVec37[3] + fVec37[1] + fVec37[2];
			float fTemp82 = fRec49[1] + fConst14 * fSlow19 * fTemp1;
			fRec49[0] = ((fTemp82 > 1.0f) ? fTemp82 + -1.0f : fTemp82);
			float fTemp83 = fRec49[0] - fRec49[1];
			iRec48[0] = ((fTemp83 < 0.0f) ? 1 - iRec48[1] : iRec48[1]);
			float fTemp84 = fRec49[0] + float(iRec48[0]);
			fVec38[0] = fTemp84;
			float fTemp85 = 0.5f * fTemp84;
			iRec50[0] = (((0.5f * (fTemp84 - fVec38[1])) < 0.0f) ? 1 - iRec50[1] : iRec50[1]);
			float fTemp86 = float(iRec50[0]) + fTemp85;
			fVec39[0] = fTemp86;
			float fTemp87 = 0.5f * fTemp86;
			iRec51[0] = (((0.5f * (fTemp86 - fVec39[1])) < 0.0f) ? 1 - iRec51[1] : iRec51[1]);
			float fTemp88 = float(iRec51[0]) + fTemp87;
			fVec40[0] = fTemp88;
			float fTemp89 = 0.5f * fTemp88;
			iRec52[0] = (((0.5f * (fTemp88 - fVec40[1])) < 0.0f) ? 1 - iRec52[1] : iRec52[1]);
			float fTemp90 = float(iRec52[0]) + fTemp89;
			fVec41[0] = fTemp90;
			float fTemp91 = 0.5f * fTemp90;
			iRec53[0] = (((0.5f * (fTemp90 - fVec41[1])) < 0.0f) ? 1 - iRec53[1] : iRec53[1]);
			float fTemp92 = float(iRec53[0]) + fTemp91;
			fVec42[0] = fTemp92;
			float fTemp93 = 0.5f * fTemp92;
			float fTemp94 = fRec49[0] + (1.0f - fRec49[1]);
			float fTemp95 = saw_polyblep_fast(fRec49[0], fRec49[1], fRec49[2], ((fTemp94 > 1.0f) ? fTemp83 : fTemp94));
			fVec43[0] = float(fTemp93 < 0.5f) + -0.5f;
			fRec47[0] = fRec47[1] + fConst12 * (2.0f * fVec43[1] + square_polyblep_precalc(fTemp93, 0.5f * fVec42[1], 0.5f * fVec42[2], fTemp95) - fRec47[1]);
			fRec46[0] = fConst13 * (fRec46[1] + (fRec47[0] - fRec47[1]));
			fVec44[0] = fSlow20;
			float fTemp96 = fSlow20 + fVec44[3] + fVec44[1] + fVec44[2];
			float fTemp97 = fRec57[1] + fConst15 * fSlow21 * fTemp1;
			fRec57[0] = ((fTemp97 > 1.0f) ? fTemp97 + -1.0f : fTemp97);
			float fTemp98 = fRec57[0] - fRec57[1];
			iRec56[0] = ((fTemp98 < 0.0f) ? 1 - iRec56[1] : iRec56[1]);
			float fTemp99 = fRec57[0] + float(iRec56[0]);
			fVec45[0] = fTemp99;
			float fTemp100 = 0.5f * fTemp99;
			iRec58[0] = (((0.5f * (fTemp99 - fVec45[1])) < 0.0f) ? 1 - iRec58[1] : iRec58[1]);
			float fTemp101 = float(iRec58[0]) + fTemp100;
			fVec46[0] = fTemp101;
			float fTemp102 = 0.5f * fTemp101;
			iRec59[0] = (((0.5f * (fTemp101 - fVec46[1])) < 0.0f) ? 1 - iRec59[1] : iRec59[1]);
			float fTemp103 = float(iRec59[0]) + fTemp102;
			fVec47[0] = fTemp103;
			float fTemp104 = 0.5f * fTemp103;
			iRec60[0] = (((0.5f * (fTemp103 - fVec47[1])) < 0.0f) ? 1 - iRec60[1] : iRec60[1]);
			float fTemp105 = float(iRec60[0]) + fTemp104;
			fVec48[0] = fTemp105;
			float fTemp106 = 0.5f * fTemp105;
			iRec61[0] = (((0.5f * (fTemp105 - fVec48[1])) < 0.0f) ? 1 - iRec61[1] : iRec61[1]);
			float fTemp107 = float(iRec61[0]) + fTemp106;
			fVec49[0] = fTemp107;
			float fTemp108 = 0.5f * fTemp107;
			float fTemp109 = fRec57[0] + (1.0f - fRec57[1]);
			float fTemp110 = saw_polyblep_fast(fRec57[0], fRec57[1], fRec57[2], ((fTemp109 > 1.0f) ? fTemp98 : fTemp109));
			fVec50[0] = float(fTemp108 < 0.5f) + -0.5f;
			fRec55[0] = fRec55[1] + fConst12 * (2.0f * fVec50[1] + square_polyblep_precalc(fTemp108, 0.5f * fVec49[1], 0.5f * fVec49[2], fTemp110) - fRec55[1]);
			fRec54[0] = fConst13 * (fRec54[1] + (fRec55[0] - fRec55[1]));
			fVec51[0] = fSlow22;
			float fTemp111 = fSlow22 + fVec51[3] + fVec51[1] + fVec51[2];
			float fTemp112 = fRec65[1] + fConst16 * fSlow23 * fTemp1;
			fRec65[0] = ((fTemp112 > 1.0f) ? fTemp112 + -1.0f : fTemp112);
			float fTemp113 = fRec65[0] - fRec65[1];
			iRec64[0] = ((fTemp113 < 0.0f) ? 1 - iRec64[1] : iRec64[1]);
			float fTemp114 = fRec65[0] + float(iRec64[0]);
			fVec52[0] = fTemp114;
			float fTemp115 = 0.5f * fTemp114;
			iRec66[0] = (((0.5f * (fTemp114 - fVec52[1])) < 0.0f) ? 1 - iRec66[1] : iRec66[1]);
			float fTemp116 = float(iRec66[0]) + fTemp115;
			fVec53[0] = fTemp116;
			float fTemp117 = 0.5f * fTemp116;
			iRec67[0] = (((0.5f * (fTemp116 - fVec53[1])) < 0.0f) ? 1 - iRec67[1] : iRec67[1]);
			float fTemp118 = float(iRec67[0]) + fTemp117;
			fVec54[0] = fTemp118;
			float fTemp119 = 0.5f * fTemp118;
			iRec68[0] = (((0.5f * (fTemp118 - fVec54[1])) < 0.0f) ? 1 - iRec68[1] : iRec68[1]);
			float fTemp120 = float(iRec68[0]) + fTemp119;
			fVec55[0] = fTemp120;
			float fTemp121 = 0.5f * fTemp120;
			iRec69[0] = (((0.5f * (fTemp120 - fVec55[1])) < 0.0f) ? 1 - iRec69[1] : iRec69[1]);
			float fTemp122 = float(iRec69[0]) + fTemp121;
			fVec56[0] = fTemp122;
			float fTemp123 = 0.5f * fTemp122;
			float fTemp124 = fRec65[0] + (1.0f - fRec65[1]);
			float fTemp125 = saw_polyblep_fast(fRec65[0], fRec65[1], fRec65[2], ((fTemp124 > 1.0f) ? fTemp113 : fTemp124));
			fVec57[0] = float(fTemp123 < 0.5f) + -0.5f;
			fRec63[0] = fRec63[1] + fConst12 * (2.0f * fVec57[1] + square_polyblep_precalc(fTemp123, 0.5f * fVec56[1], 0.5f * fVec56[2], fTemp125) - fRec63[1]);
			fRec62[0] = fConst13 * (fRec62[1] + (fRec63[0] - fRec63[1]));
			fVec58[0] = fSlow24;
			float fTemp126 = fSlow24 + fVec58[3] + fVec58[1] + fVec58[2];
			float fTemp127 = fRec73[1] + fConst17 * fSlow25 * fTemp1;
			fRec73[0] = ((fTemp127 > 1.0f) ? fTemp127 + -1.0f : fTemp127);
			float fTemp128 = fRec73[0] - fRec73[1];
			iRec72[0] = ((fTemp128 < 0.0f) ? 1 - iRec72[1] : iRec72[1]);
			float fTemp129 = fRec73[0] + float(iRec72[0]);
			fVec59[0] = fTemp129;
			float fTemp130 = 0.5f * fTemp129;
			iRec74[0] = (((0.5f * (fTemp129 - fVec59[1])) < 0.0f) ? 1 - iRec74[1] : iRec74[1]);
			float fTemp131 = float(iRec74[0]) + fTemp130;
			fVec60[0] = fTemp131;
			float fTemp132 = 0.5f * fTemp131;
			iRec75[0] = (((0.5f * (fTemp131 - fVec60[1])) < 0.0f) ? 1 - iRec75[1] : iRec75[1]);
			float fTemp133 = float(iRec75[0]) + fTemp132;
			fVec61[0] = fTemp133;
			float fTemp134 = 0.5f * fTemp133;
			iRec76[0] = (((0.5f * (fTemp133 - fVec61[1])) < 0.0f) ? 1 - iRec76[1] : iRec76[1]);
			float fTemp135 = float(iRec76[0]) + fTemp134;
			fVec62[0] = fTemp135;
			float fTemp136 = 0.5f * fTemp135;
			iRec77[0] = (((0.5f * (fTemp135 - fVec62[1])) < 0.0f) ? 1 - iRec77[1] : iRec77[1]);
			float fTemp137 = float(iRec77[0]) + fTemp136;
			fVec63[0] = fTemp137;
			float fTemp138 = 0.5f * fTemp137;
			float fTemp139 = fRec73[0] + (1.0f - fRec73[1]);
			float fTemp140 = saw_polyblep_fast(fRec73[0], fRec73[1], fRec73[2], ((fTemp139 > 1.0f) ? fTemp128 : fTemp139));
			fVec64[0] = float(fTemp138 < 0.5f) + -0.5f;
			fRec71[0] = fRec71[1] + fConst18 * (2.0f * fVec64[1] + square_polyblep_precalc(fTemp138, 0.5f * fVec63[1], 0.5f * fVec63[2], fTemp140) - fRec71[1]);
			fRec70[0] = fConst13 * (fRec70[1] + (fRec71[0] - fRec71[1]));
			fVec65[0] = fSlow26;
			float fTemp141 = fSlow26 + fVec65[3] + fVec65[1] + fVec65[2];
			float fTemp142 = fRec81[1] + fConst19 * fSlow27 * fTemp1;
			fRec81[0] = ((fTemp142 > 1.0f) ? fTemp142 + -1.0f : fTemp142);
			float fTemp143 = fRec81[0] - fRec81[1];
			iRec80[0] = ((fTemp143 < 0.0f) ? 1 - iRec80[1] : iRec80[1]);
			float fTemp144 = fRec81[0] + float(iRec80[0]);
			fVec66[0] = fTemp144;
			float fTemp145 = 0.5f * fTemp144;
			iRec82[0] = (((0.5f * (fTemp144 - fVec66[1])) < 0.0f) ? 1 - iRec82[1] : iRec82[1]);
			float fTemp146 = float(iRec82[0]) + fTemp145;
			fVec67[0] = fTemp146;
			float fTemp147 = 0.5f * fTemp146;
			iRec83[0] = (((0.5f * (fTemp146 - fVec67[1])) < 0.0f) ? 1 - iRec83[1] : iRec83[1]);
			float fTemp148 = float(iRec83[0]) + fTemp147;
			fVec68[0] = fTemp148;
			float fTemp149 = 0.5f * fTemp148;
			iRec84[0] = (((0.5f * (fTemp148 - fVec68[1])) < 0.0f) ? 1 - iRec84[1] : iRec84[1]);
			float fTemp150 = float(iRec84[0]) + fTemp149;
			fVec69[0] = fTemp150;
			float fTemp151 = 0.5f * fTemp150;
			iRec85[0] = (((0.5f * (fTemp150 - fVec69[1])) < 0.0f) ? 1 - iRec85[1] : iRec85[1]);
			float fTemp152 = float(iRec85[0]) + fTemp151;
			fVec70[0] = fTemp152;
			float fTemp153 = 0.5f * fTemp152;
			float fTemp154 = fRec81[0] + (1.0f - fRec81[1]);
			float fTemp155 = saw_polyblep_fast(fRec81[0], fRec81[1], fRec81[2], ((fTemp154 > 1.0f) ? fTemp143 : fTemp154));
			fVec71[0] = float(fTemp153 < 0.5f) + -0.5f;
			fRec79[0] = fRec79[1] + fConst18 * (2.0f * fVec71[1] + square_polyblep_precalc(fTemp153, 0.5f * fVec70[1], 0.5f * fVec70[2], fTemp155) - fRec79[1]);
			fRec78[0] = fConst13 * (fRec78[1] + (fRec79[0] - fRec79[1]));
			fVec72[0] = fSlow28;
			float fTemp156 = fSlow28 + fVec72[3] + fVec72[1] + fVec72[2];
			float fTemp157 = fRec89[1] + fConst20 * fSlow29 * fTemp1;
			fRec89[0] = ((fTemp157 > 1.0f) ? fTemp157 + -1.0f : fTemp157);
			float fTemp158 = fRec89[0] - fRec89[1];
			iRec88[0] = ((fTemp158 < 0.0f) ? 1 - iRec88[1] : iRec88[1]);
			float fTemp159 = fRec89[0] + float(iRec88[0]);
			fVec73[0] = fTemp159;
			float fTemp160 = 0.5f * fTemp159;
			iRec90[0] = (((0.5f * (fTemp159 - fVec73[1])) < 0.0f) ? 1 - iRec90[1] : iRec90[1]);
			float fTemp161 = float(iRec90[0]) + fTemp160;
			fVec74[0] = fTemp161;
			float fTemp162 = 0.5f * fTemp161;
			iRec91[0] = (((0.5f * (fTemp161 - fVec74[1])) < 0.0f) ? 1 - iRec91[1] : iRec91[1]);
			float fTemp163 = float(iRec91[0]) + fTemp162;
			fVec75[0] = fTemp163;
			float fTemp164 = 0.5f * fTemp163;
			iRec92[0] = (((0.5f * (fTemp163 - fVec75[1])) < 0.0f) ? 1 - iRec92[1] : iRec92[1]);
			float fTemp165 = float(iRec92[0]) + fTemp164;
			fVec76[0] = fTemp165;
			float fTemp166 = 0.5f * fTemp165;
			iRec93[0] = (((0.5f * (fTemp165 - fVec76[1])) < 0.0f) ? 1 - iRec93[1] : iRec93[1]);
			float fTemp167 = float(iRec93[0]) + fTemp166;
			fVec77[0] = fTemp167;
			float fTemp168 = 0.5f * fTemp167;
			float fTemp169 = fRec89[0] + (1.0f - fRec89[1]);
			float fTemp170 = saw_polyblep_fast(fRec89[0], fRec89[1], fRec89[2], ((fTemp169 > 1.0f) ? fTemp158 : fTemp169));
			fVec78[0] = float(fTemp168 < 0.5f) + -0.5f;
			fRec87[0] = fRec87[1] + fConst18 * (2.0f * fVec78[1] + square_polyblep_precalc(fTemp168, 0.5f * fVec77[1], 0.5f * fVec77[2], fTemp170) - fRec87[1]);
			fRec86[0] = fConst13 * (fRec86[1] + (fRec87[0] - fRec87[1]));
			fVec79[0] = fSlow30;
			float fTemp171 = fSlow30 + fVec79[3] + fVec79[1] + fVec79[2];
			iRec96[0] = (((0.5f * (fTemp10 - fVec4[1])) < 0.0f) ? 1 - iRec96[1] : iRec96[1]);
			float fTemp172 = float(iRec96[0]) + fTemp11;
			fVec80[0] = fTemp172;
			float fTemp173 = 0.5f * fTemp172;
			fVec81[0] = float(fTemp173 < 0.5f) + -0.5f;
			fRec95[0] = fRec95[1] + fConst18 * (2.0f * fVec81[1] + square_polyblep_precalc(fTemp173, 0.5f * fVec80[1], 0.5f * fVec80[2], fTemp13) - fRec95[1]);
			fRec94[0] = fConst13 * (fRec94[1] + (fRec95[0] - fRec95[1]));
			fVec82[0] = fSlow31;
			float fTemp174 = fSlow31 + fVec82[3] + fVec82[1] + fVec82[2];
			iRec99[0] = (((0.5f * (fTemp23 - fVec10[1])) < 0.0f) ? 1 - iRec99[1] : iRec99[1]);
			float fTemp175 = float(iRec99[0]) + fTemp24;
			fVec83[0] = fTemp175;
			float fTemp176 = 0.5f * fTemp175;
			fVec84[0] = float(fTemp176 < 0.5f) + -0.5f;
			fRec98[0] = fRec98[1] + fConst21 * (2.0f * fVec84[1] + square_polyblep_precalc(fTemp176, 0.5f * fVec83[1], 0.5f * fVec83[2], fTemp26) - fRec98[1]);
			fRec97[0] = fConst13 * (fRec97[1] + (fRec98[0] - fRec98[1]));
			fVec85[0] = fSlow32;
			float fTemp177 = fSlow32 + fVec85[3] + fVec85[1] + fVec85[2];
			iRec102[0] = (((0.5f * (fTemp36 - fVec16[1])) < 0.0f) ? 1 - iRec102[1] : iRec102[1]);
			float fTemp178 = float(iRec102[0]) + fTemp37;
			fVec86[0] = fTemp178;
			float fTemp179 = 0.5f * fTemp178;
			fVec87[0] = float(fTemp179 < 0.5f) + -0.5f;
			fRec101[0] = fRec101[1] + fConst21 * (2.0f * fVec87[1] + square_polyblep_precalc(fTemp179, 0.5f * fVec86[1], 0.5f * fVec86[2], fTemp39) - fRec101[1]);
			fRec100[0] = fConst13 * (fRec100[1] + (fRec101[0] - fRec101[1]));
			fVec88[0] = fSlow33;
			float fTemp180 = fSlow33 + fVec88[3] + fVec88[1] + fVec88[2];
			iRec105[0] = (((0.5f * (fTemp49 - fVec22[1])) < 0.0f) ? 1 - iRec105[1] : iRec105[1]);
			float fTemp181 = float(iRec105[0]) + fTemp50;
			fVec89[0] = fTemp181;
			float fTemp182 = 0.5f * fTemp181;
			fVec90[0] = float(fTemp182 < 0.5f) + -0.5f;
			fRec104[0] = fRec104[1] + fConst21 * (2.0f * fVec90[1] + square_polyblep_precalc(fTemp182, 0.5f * fVec89[1], 0.5f * fVec89[2], fTemp52) - fRec104[1]);
			fRec103[0] = fConst13 * (fRec103[1] + (fRec104[0] - fRec104[1]));
			fVec91[0] = fSlow34;
			float fTemp183 = fSlow34 + fVec91[3] + fVec91[1] + fVec91[2];
			iRec108[0] = (((0.5f * (fTemp62 - fVec28[1])) < 0.0f) ? 1 - iRec108[1] : iRec108[1]);
			float fTemp184 = float(iRec108[0]) + fTemp63;
			fVec92[0] = fTemp184;
			float fTemp185 = 0.5f * fTemp184;
			fVec93[0] = float(fTemp185 < 0.5f) + -0.5f;
			fRec107[0] = fRec107[1] + fConst21 * (2.0f * fVec93[1] + square_polyblep_precalc(fTemp185, 0.5f * fVec92[1], 0.5f * fVec92[2], fTemp65) - fRec107[1]);
			fRec106[0] = fConst13 * (fRec106[1] + (fRec107[0] - fRec107[1]));
			float fTemp186 = fRec106[0] * fTemp183 + fRec103[0] * fTemp180 + fRec100[0] * fTemp177 + fRec97[0] * fTemp174 + fRec94[0] * fTemp171 + fRec86[0] * fTemp156 + fRec78[0] * fTemp141 + fRec70[0] * fTemp126 + fRec62[0] * fTemp111 + fRec54[0] * fTemp96 + fRec46[0] * fTemp81 + fRec38[0] * fTemp66 + fRec31[0] * fTemp53 + fRec24[0] * fTemp40 + fRec17[0] * fTemp27 + fRec10[0] * fTemp14 + fRec2[0] * fTemp0;
			iRec111[0] = (((0.5f * (fTemp77 - fVec35[1])) < 0.0f) ? 1 - iRec111[1] : iRec111[1]);
			float fTemp187 = float(iRec111[0]) + fTemp78;
			fVec94[0] = fTemp187;
			float fTemp188 = 0.5f * fTemp187;
			fVec95[0] = float(fTemp188 < 0.5f) + -0.5f;
			fRec110[0] = fRec110[1] + fConst21 * (2.0f * fVec95[1] + square_polyblep_precalc(fTemp188, 0.5f * fVec94[1], 0.5f * fVec94[2], fTemp80) - fRec110[1]);
			fRec109[0] = fConst22 * (fRec109[1] + (fRec110[0] - fRec110[1]));
			iRec114[0] = (((0.5f * (fTemp92 - fVec42[1])) < 0.0f) ? 1 - iRec114[1] : iRec114[1]);
			float fTemp189 = float(iRec114[0]) + fTemp93;
			fVec96[0] = fTemp189;
			float fTemp190 = 0.5f * fTemp189;
			fVec97[0] = float(fTemp190 < 0.5f) + -0.5f;
			fRec113[0] = fRec113[1] + fConst21 * (2.0f * fVec97[1] + square_polyblep_precalc(fTemp190, 0.5f * fVec96[1], 0.5f * fVec96[2], fTemp95) - fRec113[1]);
			fRec112[0] = fConst22 * (fRec112[1] + (fRec113[0] - fRec113[1]));
			iRec117[0] = (((0.5f * (fTemp107 - fVec49[1])) < 0.0f) ? 1 - iRec117[1] : iRec117[1]);
			float fTemp191 = float(iRec117[0]) + fTemp108;
			fVec98[0] = fTemp191;
			float fTemp192 = 0.5f * fTemp191;
			fVec99[0] = float(fTemp192 < 0.5f) + -0.5f;
			fRec116[0] = fRec116[1] + fConst21 * (2.0f * fVec99[1] + square_polyblep_precalc(fTemp192, 0.5f * fVec98[1], 0.5f * fVec98[2], fTemp110) - fRec116[1]);
			fRec115[0] = fConst22 * (fRec115[1] + (fRec116[0] - fRec116[1]));
			iRec120[0] = (((0.5f * (fTemp122 - fVec56[1])) < 0.0f) ? 1 - iRec120[1] : iRec120[1]);
			float fTemp193 = float(iRec120[0]) + fTemp123;
			fVec100[0] = fTemp193;
			float fTemp194 = 0.5f * fTemp193;
			fVec101[0] = float(fTemp194 < 0.5f) + -0.5f;
			fRec119[0] = fRec119[1] + fConst21 * (2.0f * fVec101[1] + square_polyblep_precalc(fTemp194, 0.5f * fVec100[1], 0.5f * fVec100[2], fTemp125) - fRec119[1]);
			fRec118[0] = fConst22 * (fRec118[1] + (fRec119[0] - fRec119[1]));
			iRec123[0] = (((0.5f * (fTemp137 - fVec63[1])) < 0.0f) ? 1 - iRec123[1] : iRec123[1]);
			float fTemp195 = float(iRec123[0]) + fTemp138;
			fVec102[0] = fTemp195;
			float fTemp196 = 0.5f * fTemp195;
			fVec103[0] = float(fTemp196 < 0.5f) + -0.5f;
			fRec122[0] = fRec122[1] + fConst23 * (2.0f * fVec103[1] + square_polyblep_precalc(fTemp196, 0.5f * fVec102[1], 0.5f * fVec102[2], fTemp140) - fRec122[1]);
			fRec121[0] = fConst22 * (fRec121[1] + (fRec122[0] - fRec122[1]));
			iRec126[0] = (((0.5f * (fTemp152 - fVec70[1])) < 0.0f) ? 1 - iRec126[1] : iRec126[1]);
			float fTemp197 = float(iRec126[0]) + fTemp153;
			fVec104[0] = fTemp197;
			float fTemp198 = 0.5f * fTemp197;
			fVec105[0] = float(fTemp198 < 0.5f) + -0.5f;
			fRec125[0] = fRec125[1] + fConst23 * (2.0f * fVec105[1] + square_polyblep_precalc(fTemp198, 0.5f * fVec104[1], 0.5f * fVec104[2], fTemp155) - fRec125[1]);
			fRec124[0] = fConst22 * (fRec124[1] + (fRec125[0] - fRec125[1]));
			iRec129[0] = (((0.5f * (fTemp167 - fVec77[1])) < 0.0f) ? 1 - iRec129[1] : iRec129[1]);
			float fTemp199 = float(iRec129[0]) + fTemp168;
			fVec106[0] = fTemp199;
			float fTemp200 = 0.5f * fTemp199;
			fVec107[0] = float(fTemp200 < 0.5f) + -0.5f;
			fRec128[0] = fRec128[1] + fConst23 * (2.0f * fVec107[1] + square_polyblep_precalc(fTemp200, 0.5f * fVec106[1], 0.5f * fVec106[2], fTemp170) - fRec128[1]);
			fRec127[0] = fConst22 * (fRec127[1] + (fRec128[0] - fRec128[1]));
			iRec132[0] = (((0.5f * (fTemp172 - fVec80[1])) < 0.0f) ? 1 - iRec132[1] : iRec132[1]);
			float fTemp201 = float(iRec132[0]) + fTemp173;
			fVec108[0] = fTemp201;
			float fTemp202 = 0.5f * fTemp201;
			fVec109[0] = float(fTemp202 < 0.5f) + -0.5f;
			fRec131[0] = fRec131[1] + fConst23 * (2.0f * fVec109[1] + square_polyblep_precalc(fTemp202, 0.5f * fVec108[1], 0.5f * fVec108[2], fTemp13) - fRec131[1]);
			fRec130[0] = fConst22 * (fRec130[1] + (fRec131[0] - fRec131[1]));
			iRec135[0] = (((0.5f * (fTemp175 - fVec83[1])) < 0.0f) ? 1 - iRec135[1] : iRec135[1]);
			float fTemp203 = float(iRec135[0]) + fTemp176;
			fVec110[0] = fTemp203;
			float fTemp204 = 0.5f * fTemp203;
			fVec111[0] = float(fTemp204 < 0.5f) + -0.5f;
			fRec134[0] = fRec134[1] + fConst24 * (2.0f * fVec111[1] + square_polyblep_precalc(fTemp204, 0.5f * fVec110[1], 0.5f * fVec110[2], fTemp26) - fRec134[1]);
			fRec133[0] = fConst22 * (fRec133[1] + (fRec134[0] - fRec134[1]));
			iRec138[0] = (((0.5f * (fTemp178 - fVec86[1])) < 0.0f) ? 1 - iRec138[1] : iRec138[1]);
			float fTemp205 = float(iRec138[0]) + fTemp179;
			fVec112[0] = fTemp205;
			float fTemp206 = 0.5f * fTemp205;
			fVec113[0] = float(fTemp206 < 0.5f) + -0.5f;
			fRec137[0] = fRec137[1] + fConst24 * (2.0f * fVec113[1] + square_polyblep_precalc(fTemp206, 0.5f * fVec112[1], 0.5f * fVec112[2], fTemp39) - fRec137[1]);
			fRec136[0] = fConst22 * (fRec136[1] + (fRec137[0] - fRec137[1]));
			iRec141[0] = (((0.5f * (fTemp181 - fVec89[1])) < 0.0f) ? 1 - iRec141[1] : iRec141[1]);
			float fTemp207 = float(iRec141[0]) + fTemp182;
			fVec114[0] = fTemp207;
			float fTemp208 = 0.5f * fTemp207;
			fVec115[0] = float(fTemp208 < 0.5f) + -0.5f;
			fRec140[0] = fRec140[1] + fConst24 * (2.0f * fVec115[1] + square_polyblep_precalc(fTemp208, 0.5f * fVec114[1], 0.5f * fVec114[2], fTemp52) - fRec140[1]);
			fRec139[0] = fConst22 * (fRec139[1] + (fRec140[0] - fRec140[1]));
			iRec144[0] = (((0.5f * (fTemp184 - fVec92[1])) < 0.0f) ? 1 - iRec144[1] : iRec144[1]);
			float fTemp209 = float(iRec144[0]) + fTemp185;
			fVec116[0] = fTemp209;
			float fTemp210 = 0.5f * fTemp209;
			fVec117[0] = float(fTemp210 < 0.5f) + -0.5f;
			fRec143[0] = fRec143[1] + fConst24 * (2.0f * fVec117[1] + square_polyblep_precalc(fTemp210, 0.5f * fVec116[1], 0.5f * fVec116[2], fTemp65) - fRec143[1]);
			fRec142[0] = fConst22 * (fRec142[1] + (fRec143[0] - fRec143[1]));
			float fTemp211 = fRec142[0] * fTemp183 + fRec139[0] * fTemp180 + fRec136[0] * fTemp177 + fRec133[0] * fTemp174 + fRec130[0] * fTemp171 + fRec127[0] * fTemp156 + fRec124[0] * fTemp141 + fRec121[0] * fTemp126 + fRec118[0] * fTemp111 + fRec115[0] * fTemp96 + fRec112[0] * fTemp81 + fRec109[0] * fTemp66 + fRec106[0] * fTemp53 + fRec103[0] * fTemp40 + fRec100[0] * fTemp27 + fRec97[0] * fTemp14 + fRec94[0] * fTemp0;
			iRec147[0] = (((0.5f * (fTemp187 - fVec94[1])) < 0.0f) ? 1 - iRec147[1] : iRec147[1]);
			float fTemp212 = float(iRec147[0]) + fTemp188;
			fVec118[0] = fTemp212;
			float fTemp213 = 0.5f * fTemp212;
			fVec119[0] = float(fTemp213 < 0.5f) + -0.5f;
			fRec146[0] = fRec146[1] + fConst24 * (2.0f * fVec119[1] + square_polyblep_precalc(fTemp213, 0.5f * fVec118[1], 0.5f * fVec118[2], fTemp80) - fRec146[1]);
			fRec145[0] = fConst25 * (fRec145[1] + (fRec146[0] - fRec146[1]));
			iRec150[0] = (((0.5f * (fTemp189 - fVec96[1])) < 0.0f) ? 1 - iRec150[1] : iRec150[1]);
			float fTemp214 = float(iRec150[0]) + fTemp190;
			fVec120[0] = fTemp214;
			float fTemp215 = 0.5f * fTemp214;
			fVec121[0] = float(fTemp215 < 0.5f) + -0.5f;
			fRec149[0] = fRec149[1] + fConst24 * (2.0f * fVec121[1] + square_polyblep_precalc(fTemp215, 0.5f * fVec120[1], 0.5f * fVec120[2], fTemp95) - fRec149[1]);
			fRec148[0] = fConst25 * (fRec148[1] + (fRec149[0] - fRec149[1]));
			iRec153[0] = (((0.5f * (fTemp191 - fVec98[1])) < 0.0f) ? 1 - iRec153[1] : iRec153[1]);
			float fTemp216 = float(iRec153[0]) + fTemp192;
			fVec122[0] = fTemp216;
			float fTemp217 = 0.5f * fTemp216;
			fVec123[0] = float(fTemp217 < 0.5f) + -0.5f;
			fRec152[0] = fRec152[1] + fConst24 * (2.0f * fVec123[1] + square_polyblep_precalc(fTemp217, 0.5f * fVec122[1], 0.5f * fVec122[2], fTemp110) - fRec152[1]);
			fRec151[0] = fConst25 * (fRec151[1] + (fRec152[0] - fRec152[1]));
			iRec156[0] = (((0.5f * (fTemp193 - fVec100[1])) < 0.0f) ? 1 - iRec156[1] : iRec156[1]);
			float fTemp218 = float(iRec156[0]) + fTemp194;
			fVec124[0] = fTemp218;
			float fTemp219 = 0.5f * fTemp218;
			fVec125[0] = float(fTemp219 < 0.5f) + -0.5f;
			fRec155[0] = fRec155[1] + fConst24 * (2.0f * fVec125[1] + square_polyblep_precalc(fTemp219, 0.5f * fVec124[1], 0.5f * fVec124[2], fTemp125) - fRec155[1]);
			fRec154[0] = fConst25 * (fRec154[1] + (fRec155[0] - fRec155[1]));
			iRec159[0] = (((0.5f * (fTemp195 - fVec102[1])) < 0.0f) ? 1 - iRec159[1] : iRec159[1]);
			float fTemp220 = float(iRec159[0]) + fTemp196;
			fVec126[0] = fTemp220;
			float fTemp221 = 0.5f * fTemp220;
			fVec127[0] = float(fTemp221 < 0.5f) + -0.5f;
			fRec158[0] = fRec158[1] + fConst26 * (2.0f * fVec127[1] + square_polyblep_precalc(fTemp221, 0.5f * fVec126[1], 0.5f * fVec126[2], fTemp140) - fRec158[1]);
			fRec157[0] = fConst25 * (fRec157[1] + (fRec158[0] - fRec158[1]));
			iRec162[0] = (((0.5f * (fTemp197 - fVec104[1])) < 0.0f) ? 1 - iRec162[1] : iRec162[1]);
			float fTemp222 = float(iRec162[0]) + fTemp198;
			fVec128[0] = fTemp222;
			float fTemp223 = 0.5f * fTemp222;
			fVec129[0] = float(fTemp223 < 0.5f) + -0.5f;
			fRec161[0] = fRec161[1] + fConst26 * (2.0f * fVec129[1] + square_polyblep_precalc(fTemp223, 0.5f * fVec128[1], 0.5f * fVec128[2], fTemp155) - fRec161[1]);
			fRec160[0] = fConst25 * (fRec160[1] + (fRec161[0] - fRec161[1]));
			iRec165[0] = (((0.5f * (fTemp199 - fVec106[1])) < 0.0f) ? 1 - iRec165[1] : iRec165[1]);
			float fTemp224 = float(iRec165[0]) + fTemp200;
			fVec130[0] = fTemp224;
			float fTemp225 = 0.5f * fTemp224;
			fVec131[0] = float(fTemp225 < 0.5f) + -0.5f;
			fRec164[0] = fRec164[1] + fConst26 * (2.0f * fVec131[1] + square_polyblep_precalc(fTemp225, 0.5f * fVec130[1], 0.5f * fVec130[2], fTemp170) - fRec164[1]);
			fRec163[0] = fConst25 * (fRec163[1] + (fRec164[0] - fRec164[1]));
			iRec168[0] = (((0.5f * (fTemp201 - fVec108[1])) < 0.0f) ? 1 - iRec168[1] : iRec168[1]);
			float fTemp226 = float(iRec168[0]) + fTemp202;
			fVec132[0] = fTemp226;
			float fTemp227 = 0.5f * fTemp226;
			fVec133[0] = float(fTemp227 < 0.5f) + -0.5f;
			fRec167[0] = fRec167[1] + fConst26 * (2.0f * fVec133[1] + square_polyblep_precalc(fTemp227, 0.5f * fVec132[1], 0.5f * fVec132[2], fTemp13) - fRec167[1]);
			fRec166[0] = fConst25 * (fRec166[1] + (fRec167[0] - fRec167[1]));
			iRec171[0] = (((0.5f * (fTemp203 - fVec110[1])) < 0.0f) ? 1 - iRec171[1] : iRec171[1]);
			float fTemp228 = float(iRec171[0]) + fTemp204;
			fVec134[0] = fTemp228;
			float fTemp229 = 0.5f * fTemp228;
			fVec135[0] = float(fTemp229 < 0.5f) + -0.5f;
			fRec170[0] = fRec170[1] + fConst26 * (2.0f * fVec135[1] + square_polyblep_precalc(fTemp229, 0.5f * fVec134[1], 0.5f * fVec134[2], fTemp26) - fRec170[1]);
			fRec169[0] = fConst25 * (fRec169[1] + (fRec170[0] - fRec170[1]));
			iRec174[0] = (((0.5f * (fTemp205 - fVec112[1])) < 0.0f) ? 1 - iRec174[1] : iRec174[1]);
			float fTemp230 = float(iRec174[0]) + fTemp206;
			fVec136[0] = fTemp230;
			float fTemp231 = 0.5f * fTemp230;
			fVec137[0] = float(fTemp231 < 0.5f) + -0.5f;
			fRec173[0] = fRec173[1] + fConst26 * (2.0f * fVec137[1] + square_polyblep_precalc(fTemp231, 0.5f * fVec136[1], 0.5f * fVec136[2], fTemp39) - fRec173[1]);
			fRec172[0] = fConst25 * (fRec172[1] + (fRec173[0] - fRec173[1]));
			iRec177[0] = (((0.5f * (fTemp207 - fVec114[1])) < 0.0f) ? 1 - iRec177[1] : iRec177[1]);
			float fTemp232 = float(iRec177[0]) + fTemp208;
			fVec138[0] = fTemp232;
			float fTemp233 = 0.5f * fTemp232;
			fVec139[0] = float(fTemp233 < 0.5f) + -0.5f;
			fRec176[0] = fRec176[1] + fConst26 * (2.0f * fVec139[1] + square_polyblep_precalc(fTemp233, 0.5f * fVec138[1], 0.5f * fVec138[2], fTemp52) - fRec176[1]);
			fRec175[0] = fConst25 * (fRec175[1] + (fRec176[0] - fRec176[1]));
			iRec180[0] = (((0.5f * (fTemp209 - fVec116[1])) < 0.0f) ? 1 - iRec180[1] : iRec180[1]);
			float fTemp234 = float(iRec180[0]) + fTemp210;
			fVec140[0] = fTemp234;
			float fTemp235 = 0.5f * fTemp234;
			fVec141[0] = float(fTemp235 < 0.5f) + -0.5f;
			fRec179[0] = fRec179[1] + fConst26 * (2.0f * fVec141[1] + square_polyblep_precalc(fTemp235, 0.5f * fVec140[1], 0.5f * fVec140[2], fTemp65) - fRec179[1]);
			fRec178[0] = fConst25 * (fRec178[1] + (fRec179[0] - fRec179[1]));
			float fTemp236 = fRec178[0] * fTemp183 + fRec175[0] * fTemp180 + fRec172[0] * fTemp177 + fRec169[0] * fTemp174 + fRec166[0] * fTemp171 + fRec163[0] * fTemp156 + fRec160[0] * fTemp141 + fRec157[0] * fTemp126 + fRec154[0] * fTemp111 + fRec151[0] * fTemp96 + fRec148[0] * fTemp81 + fRec145[0] * fTemp66 + fRec142[0] * fTemp53 + fRec139[0] * fTemp40 + fRec136[0] * fTemp27 + fRec133[0] * fTemp14 + fRec130[0] * fTemp0;
			fRec1[0] = fRec1[1] + fConst27 * (fSlow39 * (fSlow38 * (0.25f * fTemp211 + 0.125f * fTemp186) + fSlow36 * (0.25f * fTemp236 + 0.125f * fTemp211 + 0.0625f * fTemp186)) - fRec1[1]);
			float fTemp237 = fRec1[0] * (4.5f * fRec0[0] + 0.5f);
			fVec142[0] = fSlow40;
			float fTemp238 = fSlow40 + fVec142[3] + fVec142[1] + fVec142[2];
			fVec143[0] = float(fTemp59 < 0.5f) + -0.5f;
			fRec185[0] = fRec185[1] + fConst28 * (2.0f * fVec143[1] + square_polyblep_precalc(fTemp59, 0.5f * fVec26[1], 0.5f * fVec26[2], fTemp65) - fRec185[1]);
			fRec184[0] = fConst5 * (fRec184[1] + (fRec185[0] - fRec185[1]));
			fVec144[0] = fSlow41;
			float fTemp239 = fSlow41 + fVec144[3] + fVec144[1] + fVec144[2];
			fVec145[0] = float(fTemp74 < 0.5f) + -0.5f;
			fRec187[0] = fRec187[1] + fConst29 * (2.0f * fVec145[1] + square_polyblep_precalc(fTemp74, 0.5f * fVec33[1], 0.5f * fVec33[2], fTemp80) - fRec187[1]);
			fRec186[0] = fConst5 * (fRec186[1] + (fRec187[0] - fRec187[1]));
			fVec146[0] = fSlow42;
			float fTemp240 = fSlow42 + fVec146[3] + fVec146[1] + fVec146[2];
			fVec147[0] = float(fTemp89 < 0.5f) + -0.5f;
			fRec189[0] = fRec189[1] + fConst29 * (2.0f * fVec147[1] + square_polyblep_precalc(fTemp89, 0.5f * fVec40[1], 0.5f * fVec40[2], fTemp95) - fRec189[1]);
			fRec188[0] = fConst5 * (fRec188[1] + (fRec189[0] - fRec189[1]));
			fVec148[0] = fSlow43;
			float fTemp241 = fSlow43 + fVec148[3] + fVec148[1] + fVec148[2];
			fVec149[0] = float(fTemp104 < 0.5f) + -0.5f;
			fRec191[0] = fRec191[1] + fConst29 * (2.0f * fVec149[1] + square_polyblep_precalc(fTemp104, 0.5f * fVec47[1], 0.5f * fVec47[2], fTemp110) - fRec191[1]);
			fRec190[0] = fConst5 * (fRec190[1] + (fRec191[0] - fRec191[1]));
			fVec150[0] = fSlow44;
			float fTemp242 = fSlow44 + fVec150[3] + fVec150[1] + fVec150[2];
			fVec151[0] = float(fTemp119 < 0.5f) + -0.5f;
			fRec193[0] = fRec193[1] + fConst29 * (2.0f * fVec151[1] + square_polyblep_precalc(fTemp119, 0.5f * fVec54[1], 0.5f * fVec54[2], fTemp125) - fRec193[1]);
			fRec192[0] = fConst5 * (fRec192[1] + (fRec193[0] - fRec193[1]));
			fVec152[0] = fSlow45;
			float fTemp243 = fSlow45 + fVec152[3] + fVec152[1] + fVec152[2];
			fVec153[0] = float(fTemp134 < 0.5f) + -0.5f;
			fRec195[0] = fRec195[1] + fConst30 * (2.0f * fVec153[1] + square_polyblep_precalc(fTemp134, 0.5f * fVec61[1], 0.5f * fVec61[2], fTemp140) - fRec195[1]);
			fRec194[0] = fConst5 * (fRec194[1] + (fRec195[0] - fRec195[1]));
			fVec154[0] = fSlow46;
			float fTemp244 = fSlow46 + fVec154[3] + fVec154[1] + fVec154[2];
			fVec155[0] = float(fTemp149 < 0.5f) + -0.5f;
			fRec197[0] = fRec197[1] + fConst30 * (2.0f * fVec155[1] + square_polyblep_precalc(fTemp149, 0.5f * fVec68[1], 0.5f * fVec68[2], fTemp155) - fRec197[1]);
			fRec196[0] = fConst5 * (fRec196[1] + (fRec197[0] - fRec197[1]));
			fVec156[0] = fSlow47;
			float fTemp245 = fSlow47 + fVec156[3] + fVec156[1] + fVec156[2];
			fVec157[0] = float(fTemp164 < 0.5f) + -0.5f;
			fRec199[0] = fRec199[1] + fConst30 * (2.0f * fVec157[1] + square_polyblep_precalc(fTemp164, 0.5f * fVec75[1], 0.5f * fVec75[2], fTemp170) - fRec199[1]);
			fRec198[0] = fConst5 * (fRec198[1] + (fRec199[0] - fRec199[1]));
			fVec158[0] = fSlow48;
			float fTemp246 = fSlow48 + fVec158[3] + fVec158[1] + fVec158[2];
			fVec159[0] = float(fTemp9 < 0.5f) + -0.5f;
			fRec201[0] = fRec201[1] + fConst30 * (2.0f * fVec159[1] + square_polyblep_precalc(fTemp9, 0.5f * fVec3[1], 0.5f * fVec3[2], fTemp13) - fRec201[1]);
			fRec200[0] = fConst5 * (fRec200[1] + (fRec201[0] - fRec201[1]));
			fVec160[0] = fSlow49;
			float fTemp247 = fSlow49 + fVec160[3] + fVec160[1] + fVec160[2];
			fVec161[0] = float(fTemp22 < 0.5f) + -0.5f;
			fRec203[0] = fRec203[1] + fConst31 * (2.0f * fVec161[1] + square_polyblep_precalc(fTemp22, 0.5f * fVec9[1], 0.5f * fVec9[2], fTemp26) - fRec203[1]);
			fRec202[0] = fConst5 * (fRec202[1] + (fRec203[0] - fRec203[1]));
			fVec162[0] = fSlow50;
			float fTemp248 = fSlow50 + fVec162[3] + fVec162[1] + fVec162[2];
			fVec163[0] = float(fTemp35 < 0.5f) + -0.5f;
			fRec205[0] = fRec205[1] + fConst31 * (2.0f * fVec163[1] + square_polyblep_precalc(fTemp35, 0.5f * fVec15[1], 0.5f * fVec15[2], fTemp39) - fRec205[1]);
			fRec204[0] = fConst5 * (fRec204[1] + (fRec205[0] - fRec205[1]));
			fVec164[0] = fSlow51;
			float fTemp249 = fSlow51 + fVec164[3] + fVec164[1] + fVec164[2];
			fVec165[0] = float(fTemp48 < 0.5f) + -0.5f;
			fRec207[0] = fRec207[1] + fConst31 * (2.0f * fVec165[1] + square_polyblep_precalc(fTemp48, 0.5f * fVec21[1], 0.5f * fVec21[2], fTemp52) - fRec207[1]);
			fRec206[0] = fConst5 * (fRec206[1] + (fRec207[0] - fRec207[1]));
			fVec166[0] = fSlow52;
			float fTemp250 = fSlow52 + fVec166[3] + fVec166[1] + fVec166[2];
			fVec167[0] = float(fTemp61 < 0.5f) + -0.5f;
			fRec209[0] = fRec209[1] + fConst31 * (2.0f * fVec167[1] + square_polyblep_precalc(fTemp61, 0.5f * fVec27[1], 0.5f * fVec27[2], fTemp65) - fRec209[1]);
			fRec208[0] = fConst5 * (fRec208[1] + (fRec209[0] - fRec209[1]));
			fVec168[0] = fSlow53;
			float fTemp251 = fSlow53 + fVec168[3] + fVec168[1] + fVec168[2];
			fVec169[0] = float(fTemp76 < 0.5f) + -0.5f;
			fRec211[0] = fRec211[1] + fConst32 * (2.0f * fVec169[1] + square_polyblep_precalc(fTemp76, 0.5f * fVec34[1], 0.5f * fVec34[2], fTemp80) - fRec211[1]);
			fRec210[0] = fConst5 * (fRec210[1] + (fRec211[0] - fRec211[1]));
			fVec170[0] = fSlow54;
			float fTemp252 = fSlow54 + fVec170[3] + fVec170[1] + fVec170[2];
			fVec171[0] = float(fTemp91 < 0.5f) + -0.5f;
			fRec213[0] = fRec213[1] + fConst32 * (2.0f * fVec171[1] + square_polyblep_precalc(fTemp91, 0.5f * fVec41[1], 0.5f * fVec41[2], fTemp95) - fRec213[1]);
			fRec212[0] = fConst5 * (fRec212[1] + (fRec213[0] - fRec213[1]));
			fVec172[0] = fSlow55;
			float fTemp253 = fSlow55 + fVec172[3] + fVec172[1] + fVec172[2];
			fVec173[0] = float(fTemp106 < 0.5f) + -0.5f;
			fRec215[0] = fRec215[1] + fConst32 * (2.0f * fVec173[1] + square_polyblep_precalc(fTemp106, 0.5f * fVec48[1], 0.5f * fVec48[2], fTemp110) - fRec215[1]);
			fRec214[0] = fConst5 * (fRec214[1] + (fRec215[0] - fRec215[1]));
			fVec174[0] = fSlow56;
			float fTemp254 = fSlow56 + fVec174[3] + fVec174[1] + fVec174[2];
			fVec175[0] = float(fTemp121 < 0.5f) + -0.5f;
			fRec217[0] = fRec217[1] + fConst32 * (2.0f * fVec175[1] + square_polyblep_precalc(fTemp121, 0.5f * fVec55[1], 0.5f * fVec55[2], fTemp125) - fRec217[1]);
			fRec216[0] = fConst5 * (fRec216[1] + (fRec217[0] - fRec217[1]));
			fVec176[0] = fSlow57;
			float fTemp255 = fSlow57 + fVec176[3] + fVec176[1] + fVec176[2];
			fVec177[0] = float(fTemp136 < 0.5f) + -0.5f;
			fRec219[0] = fRec219[1] + fConst3 * (2.0f * fVec177[1] + square_polyblep_precalc(fTemp136, 0.5f * fVec62[1], 0.5f * fVec62[2], fTemp140) - fRec219[1]);
			fRec218[0] = fConst5 * (fRec218[1] + (fRec219[0] - fRec219[1]));
			fVec178[0] = fSlow58;
			float fTemp256 = fSlow58 + fVec178[3] + fVec178[1] + fVec178[2];
			fVec179[0] = float(fTemp151 < 0.5f) + -0.5f;
			fRec221[0] = fRec221[1] + fConst3 * (2.0f * fVec179[1] + square_polyblep_precalc(fTemp151, 0.5f * fVec69[1], 0.5f * fVec69[2], fTemp155) - fRec221[1]);
			fRec220[0] = fConst5 * (fRec220[1] + (fRec221[0] - fRec221[1]));
			fVec180[0] = fSlow59;
			float fTemp257 = fSlow59 + fVec180[3] + fVec180[1] + fVec180[2];
			fVec181[0] = float(fTemp166 < 0.5f) + -0.5f;
			fRec223[0] = fRec223[1] + fConst3 * (2.0f * fVec181[1] + square_polyblep_precalc(fTemp166, 0.5f * fVec76[1], 0.5f * fVec76[2], fTemp170) - fRec223[1]);
			fRec222[0] = fConst5 * (fRec222[1] + (fRec223[0] - fRec223[1]));
			fVec182[0] = fSlow60;
			float fTemp258 = fSlow60 + fVec182[3] + fVec182[1] + fVec182[2];
			fVec183[0] = fSlow61;
			float fTemp259 = fSlow61 + fVec183[3] + fVec183[1] + fVec183[2];
			fVec184[0] = fSlow62;
			float fTemp260 = fSlow62 + fVec184[3] + fVec184[1] + fVec184[2];
			fVec185[0] = fSlow63;
			float fTemp261 = fSlow63 + fVec185[3] + fVec185[1] + fVec185[2];
			fVec186[0] = fSlow64;
			float fTemp262 = fSlow64 + fVec186[3] + fVec186[1] + fVec186[2];
			fVec187[0] = fSlow65;
			float fTemp263 = fSlow65 + fVec187[3] + fVec187[1] + fVec187[2];
			fVec188[0] = fSlow66;
			float fTemp264 = fSlow66 + fVec188[3] + fVec188[1] + fVec188[2];
			fVec189[0] = fSlow67;
			float fTemp265 = fSlow67 + fVec189[3] + fVec189[1] + fVec189[2];
			fVec190[0] = fSlow68;
			float fTemp266 = fSlow68 + fVec190[3] + fVec190[1] + fVec190[2];
			fVec191[0] = fSlow69;
			float fTemp267 = fSlow69 + fVec191[3] + fVec191[1] + fVec191[2];
			fVec192[0] = fSlow70;
			float fTemp268 = fSlow70 + fVec192[3] + fVec192[1] + fVec192[2];
			fVec193[0] = fSlow71;
			float fTemp269 = fSlow71 + fVec193[3] + fVec193[1] + fVec193[2];
			fVec194[0] = fSlow72;
			float fTemp270 = fSlow72 + fVec194[3] + fVec194[1] + fVec194[2];
			fVec195[0] = fSlow73;
			float fTemp271 = fSlow73 + fVec195[3] + fVec195[1] + fVec195[2];
			fVec196[0] = fSlow74;
			float fTemp272 = fSlow74 + fVec196[3] + fVec196[1] + fVec196[2];
			fVec197[0] = fSlow75;
			float fTemp273 = fSlow75 + fVec197[3] + fVec197[1] + fVec197[2];
			fVec198[0] = fSlow76;
			float fTemp274 = fSlow76 + fVec198[3] + fVec198[1] + fVec198[2];
			fVec199[0] = fSlow77;
			float fTemp275 = fSlow77 + fVec199[3] + fVec199[1] + fVec199[2];
			fVec200[0] = fSlow78;
			float fTemp276 = fSlow78 + fVec200[3] + fVec200[1] + fVec200[2];
			fVec201[0] = fSlow79;
			float fTemp277 = fSlow79 + fVec201[3] + fVec201[1] + fVec201[2];
			fVec202[0] = fSlow80;
			float fTemp278 = fSlow80 + fVec202[3] + fVec202[1] + fVec202[2];
			fVec203[0] = fSlow81;
			float fTemp279 = fSlow81 + fVec203[3] + fVec203[1] + fVec203[2];
			fVec204[0] = fSlow82;
			float fTemp280 = fSlow82 + fVec204[3] + fVec204[1] + fVec204[2];
			fVec205[0] = fSlow83;
			float fTemp281 = fSlow83 + fVec205[3] + fVec205[1] + fVec205[2];
			float fTemp282 = 0.41975f * (fSlow84 * fTemp236 + fRec127[0] * fTemp281 + fRec124[0] * fTemp280 + fRec121[0] * fTemp279 + fRec118[0] * fTemp278 + fRec115[0] * fTemp277 + fRec112[0] * fTemp276 + fRec109[0] * fTemp275 + fRec106[0] * fTemp274 + fRec103[0] * fTemp273 + fRec100[0] * fTemp272 + fRec97[0] * fTemp271 + fRec94[0] * fTemp270 + fRec86[0] * fTemp269 + fRec78[0] * fTemp268 + fRec70[0] * fTemp267 + fRec62[0] * fTemp266 + fRec54[0] * fTemp265 + fRec46[0] * fTemp264 + fRec38[0] * fTemp263 + fRec31[0] * fTemp262 + fRec24[0] * fTemp261 + fRec17[0] * fTemp260 + fRec10[0] * fTemp259 + fRec2[0] * fTemp258 + fRec222[0] * fTemp257 + fRec220[0] * fTemp256 + fRec218[0] * fTemp255 + fRec216[0] * fTemp254 + fRec214[0] * fTemp253 + fRec212[0] * fTemp252 + fRec210[0] * fTemp251 + fRec208[0] * fTemp250 + fRec206[0] * fTemp249 + fRec204[0] * fTemp248 + fRec202[0] * fTemp247 + fRec200[0] * fTemp246 + fRec198[0] * fTemp245 + fRec196[0] * fTemp244 + fRec194[0] * fTemp243 + fRec192[0] * fTemp242 + fRec190[0] * fTemp241 + fRec188[0] * fTemp240 + fRec186[0] * fTemp239 + fRec184[0] * fTemp238);
			float fTemp283 = fRec200[0] + fRec202[0] + fRec204[0] + fRec208[0] + fRec206[0];
			float fTemp284 = fRec192[0] + fRec194[0] + fRec196[0] + fRec198[0] + fTemp283;
			float fTemp285 = fRec184[0] + fRec186[0] + fRec188[0] + fRec190[0] + fTemp284;
			float fTemp286 = 1.679f * (fSlow84 * (fRec145[0] + fRec148[0] + fRec151[0] + fRec154[0] + fRec157[0] + fRec160[0] + fRec163[0] + fRec166[0] + fRec169[0] + fRec172[0] + fRec175[0] + fRec178[0] + fRec130[0] + fRec133[0] + fRec136[0] + fRec142[0] + fRec139[0]) + fRec109[0] + fRec112[0] + fRec115[0] + fRec118[0] + fRec121[0] + fRec124[0] + fRec127[0] + fRec78[0] + fRec86[0] + fRec94[0] + fRec97[0] + fRec100[0] + fRec103[0] + fRec106[0] + fRec38[0] + fRec46[0] + fRec54[0] + fRec62[0] + fRec70[0] + fRec10[0] + fRec17[0] + fRec24[0] + fRec31[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec2[0] + fTemp285);
			fVec206[0] = fTemp286 - fTemp282;
			fRec183[0] = fConst33 * (fRec183[1] + (fTemp286 - (fTemp282 + fVec206[1])));
			float fTemp287 = fTemp282 + 0.002f * fSlow85 * fRec183[0];
			float fTemp288 = fSlow87 * fTemp287;
			fVec207[0] = fTemp288;
			fRec182[0] = fRec182[1] + fConst3 * (fTemp288 - fRec182[1]);
			fRec181[0] = fRec181[1] + fConst3 * (fRec182[0] - fRec181[1]);
			fVec208[0] = float(fTemp57 < 0.5f) + -0.5f;
			fRec228[0] = fRec228[1] + fConst34 * (2.0f * fVec208[1] + square_polyblep_precalc(fTemp57, 0.5f * fVec25[1], 0.5f * fVec25[2], fTemp65) - fRec228[1]);
			fRec227[0] = fConst5 * (fRec227[1] + (fRec228[0] - fRec228[1]));
			fVec209[0] = float(fTemp72 < 0.5f) + -0.5f;
			fRec230[0] = fRec230[1] + fConst35 * (2.0f * fVec209[1] + square_polyblep_precalc(fTemp72, 0.5f * fVec32[1], 0.5f * fVec32[2], fTemp80) - fRec230[1]);
			fRec229[0] = fConst5 * (fRec229[1] + (fRec230[0] - fRec230[1]));
			fVec210[0] = float(fTemp87 < 0.5f) + -0.5f;
			fRec232[0] = fRec232[1] + fConst35 * (2.0f * fVec210[1] + square_polyblep_precalc(fTemp87, 0.5f * fVec39[1], 0.5f * fVec39[2], fTemp95) - fRec232[1]);
			fRec231[0] = fConst5 * (fRec231[1] + (fRec232[0] - fRec232[1]));
			fVec211[0] = float(fTemp102 < 0.5f) + -0.5f;
			fRec234[0] = fRec234[1] + fConst35 * (2.0f * fVec211[1] + square_polyblep_precalc(fTemp102, 0.5f * fVec46[1], 0.5f * fVec46[2], fTemp110) - fRec234[1]);
			fRec233[0] = fConst5 * (fRec233[1] + (fRec234[0] - fRec234[1]));
			fVec212[0] = float(fTemp117 < 0.5f) + -0.5f;
			fRec236[0] = fRec236[1] + fConst35 * (2.0f * fVec212[1] + square_polyblep_precalc(fTemp117, 0.5f * fVec53[1], 0.5f * fVec53[2], fTemp125) - fRec236[1]);
			fRec235[0] = fConst5 * (fRec235[1] + (fRec236[0] - fRec236[1]));
			fVec213[0] = float(fTemp132 < 0.5f) + -0.5f;
			fRec238[0] = fRec238[1] + fConst36 * (2.0f * fVec213[1] + square_polyblep_precalc(fTemp132, 0.5f * fVec60[1], 0.5f * fVec60[2], fTemp140) - fRec238[1]);
			fRec237[0] = fConst5 * (fRec237[1] + (fRec238[0] - fRec238[1]));
			fVec214[0] = float(fTemp147 < 0.5f) + -0.5f;
			fRec240[0] = fRec240[1] + fConst36 * (2.0f * fVec214[1] + square_polyblep_precalc(fTemp147, 0.5f * fVec67[1], 0.5f * fVec67[2], fTemp155) - fRec240[1]);
			fRec239[0] = fConst5 * (fRec239[1] + (fRec240[0] - fRec240[1]));
			fVec215[0] = float(fTemp162 < 0.5f) + -0.5f;
			fRec242[0] = fRec242[1] + fConst36 * (2.0f * fVec215[1] + square_polyblep_precalc(fTemp162, 0.5f * fVec74[1], 0.5f * fVec74[2], fTemp170) - fRec242[1]);
			fRec241[0] = fConst5 * (fRec241[1] + (fRec242[0] - fRec242[1]));
			fVec216[0] = float(fTemp7 < 0.5f) + -0.5f;
			fRec244[0] = fRec244[1] + fConst36 * (2.0f * fVec216[1] + square_polyblep_precalc(fTemp7, 0.5f * fVec2[1], 0.5f * fVec2[2], fTemp13) - fRec244[1]);
			fRec243[0] = fConst5 * (fRec243[1] + (fRec244[0] - fRec244[1]));
			fVec217[0] = float(fTemp20 < 0.5f) + -0.5f;
			fRec246[0] = fRec246[1] + fConst28 * (2.0f * fVec217[1] + square_polyblep_precalc(fTemp20, 0.5f * fVec8[1], 0.5f * fVec8[2], fTemp26) - fRec246[1]);
			fRec245[0] = fConst5 * (fRec245[1] + (fRec246[0] - fRec246[1]));
			fVec218[0] = float(fTemp33 < 0.5f) + -0.5f;
			fRec248[0] = fRec248[1] + fConst28 * (2.0f * fVec218[1] + square_polyblep_precalc(fTemp33, 0.5f * fVec14[1], 0.5f * fVec14[2], fTemp39) - fRec248[1]);
			fRec247[0] = fConst5 * (fRec247[1] + (fRec248[0] - fRec248[1]));
			fVec219[0] = float(fTemp46 < 0.5f) + -0.5f;
			fRec250[0] = fRec250[1] + fConst28 * (2.0f * fVec219[1] + square_polyblep_precalc(fTemp46, 0.5f * fVec20[1], 0.5f * fVec20[2], fTemp52) - fRec250[1]);
			fRec249[0] = fConst5 * (fRec249[1] + (fRec250[0] - fRec250[1]));
			float fTemp289 = 0.25f * (fSlow84 * fTemp211 + fRec86[0] * fTemp281 + fRec78[0] * fTemp280 + fRec70[0] * fTemp279 + fRec62[0] * fTemp278 + fRec54[0] * fTemp277 + fRec46[0] * fTemp276 + fRec38[0] * fTemp275 + fRec31[0] * fTemp274 + fRec24[0] * fTemp273 + fRec17[0] * fTemp272 + fRec10[0] * fTemp271 + fRec2[0] * fTemp270 + fRec222[0] * fTemp269 + fRec220[0] * fTemp268 + fRec218[0] * fTemp267 + fRec216[0] * fTemp266 + fRec214[0] * fTemp265 + fRec212[0] * fTemp264 + fRec210[0] * fTemp263 + fRec208[0] * fTemp262 + fRec206[0] * fTemp261 + fRec204[0] * fTemp260 + fRec202[0] * fTemp259 + fRec200[0] * fTemp258 + fRec198[0] * fTemp257 + fRec196[0] * fTemp256 + fRec194[0] * fTemp255 + fRec192[0] * fTemp254 + fRec190[0] * fTemp253 + fRec188[0] * fTemp252 + fRec186[0] * fTemp251 + fRec184[0] * fTemp250 + fRec249[0] * fTemp249 + fRec247[0] * fTemp248 + fRec245[0] * fTemp247 + fRec243[0] * fTemp246 + fRec241[0] * fTemp245 + fRec239[0] * fTemp244 + fRec237[0] * fTemp243 + fRec235[0] * fTemp242 + fRec233[0] * fTemp241 + fRec231[0] * fTemp240 + fRec229[0] * fTemp239 + fRec227[0] * fTemp238);
			float fTemp290 = fRec243[0] + fRec245[0] + fRec247[0] + fRec249[0] + fTemp285;
			float fTemp291 = fRec227[0] + fRec229[0] + fRec231[0] + fRec233[0] + fRec235[0] + fRec237[0] + fRec239[0] + fRec241[0] + fTemp290;
			float fTemp292 = fSlow84 * (fRec109[0] + fRec112[0] + fRec115[0] + fRec118[0] + fRec121[0] + fRec124[0] + fRec127[0] + fRec130[0] + fRec133[0] + fRec136[0] + fRec139[0] + fRec142[0] + fRec94[0] + fRec97[0] + fRec100[0] + fRec106[0] + fRec103[0]) + fRec78[0] + fRec86[0] + fRec38[0] + fRec46[0] + fRec54[0] + fRec62[0] + fRec70[0] + fRec10[0] + fRec17[0] + fRec24[0] + fRec31[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec2[0] + fTemp291;
			fVec220[0] = fTemp292 - fTemp289;
			fRec226[0] = fConst33 * (fRec226[1] + (fTemp292 - (fTemp289 + fVec220[1])));
			float fTemp293 = fTemp289 + 0.002f * fSlow85 * fRec226[0];
			float fTemp294 = fSlow89 * fTemp293;
			fVec221[0] = fTemp294;
			fRec225[0] = fRec225[1] + fConst31 * (fTemp294 - fRec225[1]);
			fRec224[0] = fRec224[1] + fConst31 * (fRec225[0] - fRec224[1]);
			fVec222[0] = float(fTemp70 < 0.5f) + -0.5f;
			fRec255[0] = fRec255[1] + fConst37 * (2.0f * fVec222[1] + square_polyblep_precalc(fTemp70, 0.5f * fVec31[1], 0.5f * fVec31[2], fTemp80) - fRec255[1]);
			fRec254[0] = fConst5 * (fRec254[1] + (fRec255[0] - fRec255[1]));
			float fTemp295 = fRec254[0] * fTemp239;
			fVec223[0] = float(fTemp85 < 0.5f) + -0.5f;
			fRec257[0] = fRec257[1] + fConst37 * (2.0f * fVec223[1] + square_polyblep_precalc(fTemp85, 0.5f * fVec38[1], 0.5f * fVec38[2], fTemp95) - fRec257[1]);
			fRec256[0] = fConst5 * (fRec256[1] + (fRec257[0] - fRec257[1]));
			float fTemp296 = fRec256[0] * fTemp240;
			fVec224[0] = float(fTemp100 < 0.5f) + -0.5f;
			fRec259[0] = fRec259[1] + fConst37 * (2.0f * fVec224[1] + square_polyblep_precalc(fTemp100, 0.5f * fVec45[1], 0.5f * fVec45[2], fTemp110) - fRec259[1]);
			fRec258[0] = fConst5 * (fRec258[1] + (fRec259[0] - fRec259[1]));
			float fTemp297 = fRec258[0] * fTemp241;
			fVec225[0] = float(fTemp115 < 0.5f) + -0.5f;
			fRec261[0] = fRec261[1] + fConst37 * (2.0f * fVec225[1] + square_polyblep_precalc(fTemp115, 0.5f * fVec52[1], 0.5f * fVec52[2], fTemp125) - fRec261[1]);
			fRec260[0] = fConst5 * (fRec260[1] + (fRec261[0] - fRec261[1]));
			float fTemp298 = fRec260[0] * fTemp242;
			fVec226[0] = float(fTemp130 < 0.5f) + -0.5f;
			fRec263[0] = fRec263[1] + fConst38 * (2.0f * fVec226[1] + square_polyblep_precalc(fTemp130, 0.5f * fVec59[1], 0.5f * fVec59[2], fTemp140) - fRec263[1]);
			fRec262[0] = fConst5 * (fRec262[1] + (fRec263[0] - fRec263[1]));
			float fTemp299 = fRec262[0] * fTemp243;
			fVec227[0] = float(fTemp145 < 0.5f) + -0.5f;
			fRec265[0] = fRec265[1] + fConst38 * (2.0f * fVec227[1] + square_polyblep_precalc(fTemp145, 0.5f * fVec66[1], 0.5f * fVec66[2], fTemp155) - fRec265[1]);
			fRec264[0] = fConst5 * (fRec264[1] + (fRec265[0] - fRec265[1]));
			float fTemp300 = fRec264[0] * fTemp244;
			fVec228[0] = float(fTemp160 < 0.5f) + -0.5f;
			fRec267[0] = fRec267[1] + fConst38 * (2.0f * fVec228[1] + square_polyblep_precalc(fTemp160, 0.5f * fVec73[1], 0.5f * fVec73[2], fTemp170) - fRec267[1]);
			fRec266[0] = fConst5 * (fRec266[1] + (fRec267[0] - fRec267[1]));
			float fTemp301 = fRec266[0] * fTemp245;
			fVec229[0] = float(fTemp5 < 0.5f) + -0.5f;
			fRec269[0] = fRec269[1] + fConst38 * (2.0f * fVec229[1] + square_polyblep_precalc(fTemp5, 0.5f * fVec1[1], 0.5f * fVec1[2], fTemp13) - fRec269[1]);
			fRec268[0] = fConst5 * (fRec268[1] + (fRec269[0] - fRec269[1]));
			float fTemp302 = fRec268[0] * fTemp246;
			fVec230[0] = float(fTemp18 < 0.5f) + -0.5f;
			fRec271[0] = fRec271[1] + fConst34 * (2.0f * fVec230[1] + square_polyblep_precalc(fTemp18, 0.5f * fVec7[1], 0.5f * fVec7[2], fTemp26) - fRec271[1]);
			fRec270[0] = fConst5 * (fRec270[1] + (fRec271[0] - fRec271[1]));
			float fTemp303 = fRec270[0] * fTemp247;
			fVec231[0] = float(fTemp31 < 0.5f) + -0.5f;
			fRec273[0] = fRec273[1] + fConst34 * (2.0f * fVec231[1] + square_polyblep_precalc(fTemp31, 0.5f * fVec13[1], 0.5f * fVec13[2], fTemp39) - fRec273[1]);
			fRec272[0] = fConst5 * (fRec272[1] + (fRec273[0] - fRec273[1]));
			float fTemp304 = fRec272[0] * fTemp248;
			fVec232[0] = float(fTemp44 < 0.5f) + -0.5f;
			fRec275[0] = fRec275[1] + fConst34 * (2.0f * fVec232[1] + square_polyblep_precalc(fTemp44, 0.5f * fVec19[1], 0.5f * fVec19[2], fTemp52) - fRec275[1]);
			fRec274[0] = fConst5 * (fRec274[1] + (fRec275[0] - fRec275[1]));
			float fTemp305 = fRec274[0] * fTemp249;
			float fTemp306 = fRec227[0] * fTemp250;
			float fTemp307 = fRec229[0] * fTemp251;
			float fTemp308 = fRec231[0] * fTemp252;
			float fTemp309 = fRec233[0] * fTemp253;
			float fTemp310 = fRec235[0] * fTemp254;
			float fTemp311 = fRec237[0] * fTemp255;
			float fTemp312 = fRec239[0] * fTemp256;
			float fTemp313 = fRec241[0] * fTemp257;
			float fTemp314 = fRec243[0] * fTemp258;
			float fTemp315 = fRec245[0] * fTemp259;
			float fTemp316 = fRec247[0] * fTemp260;
			float fTemp317 = fRec249[0] * fTemp261;
			float fTemp318 = fRec184[0] * fTemp262;
			float fTemp319 = fRec186[0] * fTemp263;
			float fTemp320 = fRec188[0] * fTemp264;
			float fTemp321 = fRec190[0] * fTemp265;
			float fTemp322 = fRec192[0] * fTemp266;
			float fTemp323 = fRec194[0] * fTemp267;
			float fTemp324 = fRec196[0] * fTemp268;
			float fTemp325 = fRec198[0] * fTemp269;
			float fTemp326 = fRec200[0] * fTemp270;
			float fTemp327 = fRec202[0] * fTemp271;
			float fTemp328 = fRec204[0] * fTemp272;
			float fTemp329 = fRec206[0] * fTemp273;
			float fTemp330 = fRec208[0] * fTemp274;
			float fTemp331 = fRec210[0] * fTemp275;
			float fTemp332 = fRec212[0] * fTemp276;
			float fTemp333 = fRec214[0] * fTemp277;
			float fTemp334 = fRec216[0] * fTemp278;
			float fTemp335 = fRec218[0] * fTemp279;
			float fTemp336 = fRec220[0] * fTemp280;
			float fTemp337 = fRec222[0] * fTemp281;
			float fTemp338 = fSlow84 * fTemp186;
			fVec233[0] = fRec34[0] + -0.5f;
			float fTemp339 = fTemp65 - 2.0f * fVec233[1];
			fVec234[0] = fTemp339;
			fRec276[0] = fConst39 * (0.0073745456f * fRec276[1] + 0.014380364f * (fTemp339 - fVec234[1]));
			float fTemp340 = fRec276[0] * fTemp238;
			float fTemp341 = 0.25f * (fTemp340 + fTemp338 + fTemp337 + fTemp336 + fTemp335 + fTemp334 + fTemp333 + fTemp332 + fTemp331 + fTemp330 + fTemp329 + fTemp328 + fTemp327 + fTemp326 + fTemp325 + fTemp324 + fTemp323 + fTemp322 + fTemp321 + fTemp320 + fTemp319 + fTemp318 + fTemp317 + fTemp316 + fTemp315 + fTemp314 + fTemp313 + fTemp312 + fTemp311 + fTemp310 + fTemp309 + fTemp308 + fTemp307 + fTemp306 + fTemp305 + fTemp304 + fTemp303 + fTemp302 + fTemp301 + fTemp300 + fTemp299 + fTemp298 + fTemp297 + fTemp296 + fTemp295);
			float fTemp342 = fRec276[0] + fRec254[0] + fRec256[0] + fRec258[0] + fRec260[0] + fRec262[0] + fRec264[0] + fRec266[0] + fRec268[0] + fRec270[0] + fRec272[0] + fRec274[0] + fTemp291;
			float fTemp343 = fSlow84 * (fRec78[0] + fRec86[0] + fRec94[0] + fRec97[0] + fRec100[0] + fRec103[0] + fRec106[0] + fRec38[0] + fRec46[0] + fRec54[0] + fRec62[0] + fRec70[0] + fRec10[0] + fRec17[0] + fRec24[0] + fRec2[0] + fRec31[0]) + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fTemp342;
			fVec235[0] = fTemp343 - fTemp341;
			fRec253[0] = fConst33 * (fRec253[1] + (fTemp343 - (fTemp341 + fVec235[1])));
			float fTemp344 = 0.002f * fSlow85 * fRec253[0];
			float fTemp345 = fTemp341 + fTemp344;
			float fTemp346 = fSlow91 * fTemp345;
			fVec236[0] = fTemp346;
			fRec252[0] = fRec252[1] + fConst28 * (fTemp346 - fRec252[1]);
			fRec251[0] = fRec251[1] + fConst28 * (fRec252[0] - fRec251[1]);
			float fTemp347 = fRec254[0] * fTemp251;
			float fTemp348 = fRec256[0] * fTemp252;
			float fTemp349 = fRec258[0] * fTemp253;
			float fTemp350 = fRec260[0] * fTemp254;
			float fTemp351 = fRec262[0] * fTemp255;
			float fTemp352 = fRec264[0] * fTemp256;
			float fTemp353 = fRec266[0] * fTemp257;
			float fTemp354 = fRec268[0] * fTemp258;
			float fTemp355 = fRec270[0] * fTemp259;
			float fTemp356 = fRec272[0] * fTemp260;
			float fTemp357 = fRec274[0] * fTemp261;
			float fTemp358 = fRec227[0] * fTemp262;
			float fTemp359 = fRec229[0] * fTemp263;
			float fTemp360 = fRec231[0] * fTemp264;
			float fTemp361 = fRec233[0] * fTemp265;
			float fTemp362 = fRec235[0] * fTemp266;
			float fTemp363 = fRec237[0] * fTemp267;
			float fTemp364 = fRec239[0] * fTemp268;
			float fTemp365 = fRec241[0] * fTemp269;
			float fTemp366 = fRec243[0] * fTemp270;
			float fTemp367 = fRec245[0] * fTemp271;
			float fTemp368 = fRec247[0] * fTemp272;
			float fTemp369 = fRec249[0] * fTemp273;
			float fTemp370 = fRec184[0] * fTemp274;
			float fTemp371 = fRec186[0] * fTemp275;
			float fTemp372 = fRec188[0] * fTemp276;
			float fTemp373 = fRec190[0] * fTemp277;
			float fTemp374 = fRec192[0] * fTemp278;
			float fTemp375 = fRec194[0] * fTemp279;
			float fTemp376 = fRec196[0] * fTemp280;
			float fTemp377 = fRec198[0] * fTemp281;
			float fTemp378 = fSlow84 * (fRec31[0] * fTemp183 + fRec24[0] * fTemp180 + fRec17[0] * fTemp177 + fRec10[0] * fTemp174 + fRec2[0] * fTemp171 + fRec222[0] * fTemp156 + fRec220[0] * fTemp141 + fRec218[0] * fTemp126 + fRec216[0] * fTemp111 + fRec214[0] * fTemp96 + fRec212[0] * fTemp81 + fRec210[0] * fTemp66 + fRec208[0] * fTemp53 + fRec206[0] * fTemp40 + fRec204[0] * fTemp27 + fRec202[0] * fTemp14 + fRec200[0] * fTemp0);
			float fTemp379 = fRec276[0] * fTemp250;
			fVec237[0] = fRec27[0] + -0.5f;
			float fTemp380 = fTemp52 - 2.0f * fVec237[1];
			fVec238[0] = fTemp380;
			fRec280[0] = fConst39 * (0.0073745456f * fRec280[1] + 0.014380364f * (fTemp380 - fVec238[1]));
			float fTemp381 = fRec280[0] * fTemp249;
			fVec239[0] = fRec20[0] + -0.5f;
			float fTemp382 = fTemp39 - 2.0f * fVec239[1];
			fVec240[0] = fTemp382;
			fRec281[0] = fConst39 * (0.0073745456f * fRec281[1] + 0.014380364f * (fTemp382 - fVec240[1]));
			float fTemp383 = fRec281[0] * fTemp248;
			fVec241[0] = fRec13[0] + -0.5f;
			float fTemp384 = fTemp26 - 2.0f * fVec241[1];
			fVec242[0] = fTemp384;
			fRec282[0] = fConst39 * (0.0073745456f * fRec282[1] + 0.014380364f * (fTemp384 - fVec242[1]));
			float fTemp385 = fRec282[0] * fTemp247;
			fVec243[0] = fRec5[0] + -0.5f;
			float fTemp386 = fTemp13 - 2.0f * fVec243[1];
			fVec244[0] = fTemp386;
			fRec283[0] = fConst39 * (0.0073745456f * fRec283[1] + 0.014380364f * (fTemp386 - fVec244[1]));
			float fTemp387 = fRec283[0] * fTemp246;
			fVec245[0] = fRec89[0] + -0.5f;
			float fTemp388 = fTemp170 - 2.0f * fVec245[1];
			fVec246[0] = fTemp388;
			fRec284[0] = fConst39 * (0.0073745456f * fRec284[1] + 0.014380364f * (fTemp388 - fVec246[1]));
			float fTemp389 = fRec284[0] * fTemp245;
			fVec247[0] = fRec81[0] + -0.5f;
			float fTemp390 = fTemp155 - 2.0f * fVec247[1];
			fVec248[0] = fTemp390;
			fRec285[0] = fConst39 * (0.0073745456f * fRec285[1] + 0.014380364f * (fTemp390 - fVec248[1]));
			float fTemp391 = fRec285[0] * fTemp244;
			fVec249[0] = fRec73[0] + -0.5f;
			float fTemp392 = fTemp140 - 2.0f * fVec249[1];
			fVec250[0] = fTemp392;
			fRec286[0] = fConst39 * (0.0073745456f * fRec286[1] + 0.014380364f * (fTemp392 - fVec250[1]));
			float fTemp393 = fRec286[0] * fTemp243;
			fVec251[0] = fRec65[0] + -0.5f;
			float fTemp394 = fTemp125 - 2.0f * fVec251[1];
			fVec252[0] = fTemp394;
			fRec287[0] = fConst39 * (0.0073745456f * fRec287[1] + 0.014380364f * (fTemp394 - fVec252[1]));
			float fTemp395 = fRec287[0] * fTemp242;
			fVec253[0] = fRec57[0] + -0.5f;
			float fTemp396 = fTemp110 - 2.0f * fVec253[1];
			fVec254[0] = fTemp396;
			fRec288[0] = fConst39 * (0.0073745456f * fRec288[1] + 0.014380364f * (fTemp396 - fVec254[1]));
			float fTemp397 = fRec288[0] * fTemp241;
			fVec255[0] = fRec49[0] + -0.5f;
			float fTemp398 = fTemp95 - 2.0f * fVec255[1];
			fVec256[0] = fTemp398;
			fRec289[0] = fConst39 * (0.0073745456f * fRec289[1] + 0.014380364f * (fTemp398 - fVec256[1]));
			float fTemp399 = fRec289[0] * fTemp240;
			fVec257[0] = fRec41[0] + -0.5f;
			float fTemp400 = fTemp80 - 2.0f * fVec257[1];
			fVec258[0] = fTemp400;
			fRec290[0] = fConst39 * (0.0073745456f * fRec290[1] + 0.014380364f * (fTemp400 - fVec258[1]));
			float fTemp401 = fRec290[0] * fTemp239;
			float fTemp402 = 0.25f * (fTemp340 + fTemp401 + fTemp399 + fTemp397 + fTemp395 + fTemp393 + fTemp391 + fTemp389 + fTemp387 + fTemp385 + fTemp383 + fTemp381 + fTemp379 + fTemp378 + fTemp377 + fTemp376 + fTemp375 + fTemp374 + fTemp373 + fTemp372 + fTemp371 + fTemp370 + fTemp369 + fTemp368 + fTemp367 + fTemp366 + fTemp365 + fTemp364 + fTemp363 + fTemp362 + fTemp361 + fTemp360 + fTemp359 + fTemp358 + fTemp357 + fTemp356 + fTemp355 + fTemp354 + fTemp353 + fTemp352 + fTemp351 + fTemp350 + fTemp349 + fTemp348 + fTemp347);
			float fTemp403 = fSlow84 * (fRec10[0] + fRec17[0] + fRec24[0] + fRec31[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec2[0] + fTemp283) + fRec290[0] + fRec289[0] + fRec288[0] + fRec287[0] + fRec286[0] + fRec285[0] + fRec284[0] + fRec283[0] + fRec282[0] + fRec281[0] + fRec280[0] + 2.0f * fRec276[0] + fRec254[0] + fRec256[0] + fRec258[0] + fRec260[0] + fRec262[0] + fRec264[0] + fRec266[0] + fRec268[0] + fRec270[0] + fRec272[0] + fRec274[0] + fRec227[0] + fRec229[0] + fRec231[0] + fRec233[0] + fRec235[0] + fRec237[0] + fRec239[0] + fRec241[0] + fRec243[0] + fRec245[0] + fRec247[0] + fRec249[0] + fRec184[0] + fRec186[0] + fRec188[0] + fRec190[0] + fRec192[0] + fRec194[0] + fRec198[0] + fRec196[0];
			fVec259[0] = fTemp403 - fTemp402;
			fRec279[0] = fConst33 * (fRec279[1] + (fTemp403 - (fTemp402 + fVec259[1])));
			float fTemp404 = 0.002f * fSlow85 * fRec279[0];
			float fTemp405 = fTemp402 + fTemp404;
			float fTemp406 = fSlow93 * fTemp405;
			fVec260[0] = fTemp406;
			fRec278[0] = fRec278[1] + fConst34 * (fTemp406 - fRec278[1]);
			fRec277[0] = fRec277[1] + fConst34 * (fRec278[0] - fRec277[1]);
			fRec292[0] = fConst40 * (fRec292[1] + (fTemp288 - fVec207[1]));
			float fTemp407 = 0.5416667f * fRec292[0] + fSlow96 * fTemp287;
			fVec261[0] = fTemp407;
			fRec291[0] = fConst41 * (fRec291[1] + (fTemp407 - fVec261[1]));
			fRec294[0] = fConst42 * (fRec294[1] + (fTemp294 - fVec221[1]));
			float fTemp408 = 0.5416667f * fRec294[0] + fSlow97 * fTemp293;
			fVec262[0] = fTemp408;
			fRec293[0] = fConst43 * (fRec293[1] + (fTemp408 - fVec262[1]));
			fRec296[0] = fConst44 * (fRec296[1] + (fTemp346 - fVec236[1]));
			float fTemp409 = 0.5416667f * fRec296[0] + fSlow98 * fTemp345;
			fVec263[0] = fTemp409;
			fRec295[0] = fConst45 * (fRec295[1] + (fTemp409 - fVec263[1]));
			fRec298[0] = fConst46 * (fRec298[1] + (fTemp406 - fVec260[1]));
			float fTemp410 = 0.5416667f * fRec298[0] + fSlow99 * fTemp405;
			fVec264[0] = fTemp410;
			fRec297[0] = fConst47 * (fRec297[1] + (fTemp410 - fVec264[1]));
			float fTemp411 = fSlow102 * (fSlow100 * (fRec297[0] + fRec295[0] + fRec293[0] + fRec291[0]) + fSlow95 * (fRec277[0] + fRec251[0] + fRec224[0] + fRec181[0]));
			float fTemp412 = fRec286[0] * fTemp238;
			float fTemp413 = fRec285[0] * fTemp239;
			float fTemp414 = fRec284[0] * fTemp240;
			float fTemp415 = fRec283[0] * fTemp241;
			float fTemp416 = fRec282[0] * fTemp242;
			float fTemp417 = fRec281[0] * fTemp243;
			float fTemp418 = fRec280[0] * fTemp244;
			float fTemp419 = fRec276[0] * fTemp245;
			float fTemp420 = fRec254[0] * fTemp246;
			float fTemp421 = fRec256[0] * fTemp247;
			float fTemp422 = fRec258[0] * fTemp248;
			float fTemp423 = fRec260[0] * fTemp249;
			float fTemp424 = fRec262[0] * fTemp250;
			float fTemp425 = fRec264[0] * fTemp251;
			float fTemp426 = fRec266[0] * fTemp252;
			float fTemp427 = fRec268[0] * fTemp253;
			float fTemp428 = fRec270[0] * fTemp254;
			float fTemp429 = fRec272[0] * fTemp255;
			float fTemp430 = fRec274[0] * fTemp256;
			float fTemp431 = fRec227[0] * fTemp257;
			float fTemp432 = fRec229[0] * fTemp258;
			float fTemp433 = fRec231[0] * fTemp259;
			float fTemp434 = fRec233[0] * fTemp260;
			float fTemp435 = fRec235[0] * fTemp261;
			float fTemp436 = fRec237[0] * fTemp262;
			float fTemp437 = fRec239[0] * fTemp263;
			float fTemp438 = fRec241[0] * fTemp264;
			float fTemp439 = fRec243[0] * fTemp265;
			float fTemp440 = fRec245[0] * fTemp266;
			float fTemp441 = fRec247[0] * fTemp267;
			float fTemp442 = fRec249[0] * fTemp268;
			float fTemp443 = fRec184[0] * fTemp269;
			float fTemp444 = fRec186[0] * fTemp270;
			float fTemp445 = fRec188[0] * fTemp271;
			float fTemp446 = fRec190[0] * fTemp272;
			float fTemp447 = fRec192[0] * fTemp273;
			float fTemp448 = fRec194[0] * fTemp274;
			float fTemp449 = fRec196[0] * fTemp275;
			float fTemp450 = fRec198[0] * fTemp276;
			float fTemp451 = fRec200[0] * fTemp277;
			float fTemp452 = fRec202[0] * fTemp278;
			float fTemp453 = fRec204[0] * fTemp279;
			float fTemp454 = fRec206[0] * fTemp280;
			float fTemp455 = fRec208[0] * fTemp281;
			float fTemp456 = fSlow84 * (fRec70[0] * fTemp183 + fRec62[0] * fTemp180 + fRec54[0] * fTemp177 + fRec46[0] * fTemp174 + fRec38[0] * fTemp171 + fRec31[0] * fTemp156 + fRec24[0] * fTemp141 + fRec17[0] * fTemp126 + fRec10[0] * fTemp111 + fRec2[0] * fTemp96 + fRec222[0] * fTemp81 + fRec220[0] * fTemp66 + fRec218[0] * fTemp53 + fRec216[0] * fTemp40 + fRec214[0] * fTemp27 + fRec212[0] * fTemp14 + fRec210[0] * fTemp0);
			float fTemp457 = 0.25f * (fTemp456 + fTemp455 + fTemp454 + fTemp453 + fTemp452 + fTemp451 + fTemp450 + fTemp449 + fTemp448 + fTemp447 + fTemp446 + fTemp445 + fTemp444 + fTemp443 + fTemp442 + fTemp441 + fTemp440 + fTemp439 + fTemp438 + fTemp437 + fTemp436 + fTemp435 + fTemp434 + fTemp433 + fTemp432 + fTemp431 + fTemp430 + fTemp429 + fTemp428 + fTemp427 + fTemp426 + fTemp425 + fTemp424 + fTemp423 + fTemp422 + fTemp421 + fTemp420 + fTemp419 + fTemp418 + fTemp417 + fTemp416 + fTemp415 + fTemp414 + fTemp413 + fTemp412);
			float fTemp458 = fSlow84 * (fRec38[0] + fRec46[0] + fRec54[0] + fRec62[0] + fRec70[0] + fRec10[0] + fRec17[0] + fRec24[0] + fRec31[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec2[0] + fRec222[0]) + fRec286[0] + fRec285[0] + fRec284[0] + fRec283[0] + fRec282[0] + fRec281[0] + fRec280[0] + fTemp342;
			fVec265[0] = fTemp458 - fTemp457;
			fRec299[0] = fConst33 * (fRec299[1] + (fTemp458 - (fTemp457 + fVec265[1])));
			float fTemp459 = 0.002f * fSlow85 * fRec299[0];
			float fTemp460 = fSlow84 * (fRec208[0] * fTemp183 + fRec206[0] * fTemp180 + fRec204[0] * fTemp177 + fRec202[0] * fTemp174 + fRec200[0] * fTemp171 + fRec198[0] * fTemp156 + fRec196[0] * fTemp141 + fRec194[0] * fTemp126 + fRec192[0] * fTemp111 + fRec190[0] * fTemp96 + fRec188[0] * fTemp81 + fRec186[0] * fTemp66 + fRec184[0] * fTemp53 + fRec249[0] * fTemp40 + fRec247[0] * fTemp27 + fRec245[0] * fTemp14 + fRec243[0] * fTemp0) + fRec241[0] * fTemp281 + fRec239[0] * fTemp280 + fRec237[0] * fTemp279 + fRec235[0] * fTemp278 + fRec233[0] * fTemp277 + fRec231[0] * fTemp276 + fRec229[0] * fTemp275 + fRec227[0] * fTemp274 + fRec274[0] * fTemp273 + fRec272[0] * fTemp272 + fRec270[0] * fTemp271 + fRec268[0] * fTemp270 + fRec266[0] * fTemp269 + fRec264[0] * fTemp268 + fRec262[0] * fTemp267 + fRec260[0] * fTemp266 + fRec258[0] * fTemp265 + fRec256[0] * fTemp264 + fRec254[0] * fTemp263;
			float fTemp461 = fTemp254 + fTemp242;
			float fTemp462 = fTemp253 + fTemp241;
			float fTemp463 = fTemp252 + fTemp240;
			float fTemp464 = fTemp251 + fTemp239;
			float fTemp465 = 0.25f * (fRec276[0] * (fTemp238 + fTemp262 + fTemp250) + fRec290[0] * fTemp464 + fRec289[0] * fTemp463 + fRec288[0] * fTemp462 + fRec287[0] * fTemp461 + fRec286[0] * (fTemp255 + fTemp243) + fRec285[0] * (fTemp256 + fTemp244) + fRec284[0] * (fTemp257 + fTemp245) + fRec283[0] * (fTemp258 + fTemp246) + fRec282[0] * (fTemp259 + fTemp247) + fRec281[0] * (fTemp260 + fTemp248) + fTemp460 + fRec280[0] * (fTemp261 + fTemp249));
			float fTemp466 = 0.25f * (fTemp460 + fRec276[0] * fTemp262 + fRec280[0] * fTemp261 + fRec281[0] * fTemp260 + fRec282[0] * fTemp259 + fRec283[0] * fTemp258 + fRec284[0] * fTemp257 + fRec285[0] * fTemp256 + fRec286[0] * fTemp255 + fRec287[0] * fTemp254 + fRec288[0] * fTemp253 + fRec289[0] * fTemp252 + fRec290[0] * fTemp251 + fTemp379 + fTemp381 + fTemp383 + fTemp385 + fTemp387 + fTemp389 + fTemp391 + fTemp393 + fTemp395 + fTemp397 + fTemp399 + fTemp401 + fTemp340);
			float fTemp467 = fRec283[0] + fRec282[0] + fRec281[0] + fRec276[0] + fRec280[0];
			float fTemp468 = fSlow84 * fTemp290 + fRec276[0] + fRec254[0] + fRec256[0] + fRec258[0] + fRec260[0] + fRec262[0] + fRec264[0] + fRec266[0] + fRec268[0] + fRec270[0] + fRec272[0] + fRec274[0] + fRec227[0] + fRec229[0] + fRec231[0] + fRec233[0] + fRec235[0] + fRec237[0] + fRec241[0] + fRec239[0] + 2.0f * (fRec290[0] + fRec289[0] + fRec288[0] + fRec287[0] + fRec286[0] + fRec285[0] + fRec284[0] + fTemp467);
			fVec266[0] = fTemp468 - fTemp466;
			fRec300[0] = fConst33 * (fRec300[1] + (fTemp468 - (fTemp466 + fVec266[1])));
			float fTemp469 = 0.002f * fSlow85 * fRec300[0];
			float fTemp470 = fRec284[0] * fTemp249;
			float fTemp471 = fSlow84 * (fRec2[0] * fTemp183 + fRec222[0] * fTemp180 + fRec220[0] * fTemp177 + fRec218[0] * fTemp174 + fRec216[0] * fTemp171 + fRec214[0] * fTemp156 + fRec212[0] * fTemp141 + fRec210[0] * fTemp126 + fRec208[0] * fTemp111 + fRec206[0] * fTemp96 + fRec204[0] * fTemp81 + fRec202[0] * fTemp66 + fRec200[0] * fTemp53 + fRec198[0] * fTemp40 + fRec196[0] * fTemp27 + fRec194[0] * fTemp14 + fRec192[0] * fTemp0) + fRec190[0] * fTemp281 + fRec188[0] * fTemp280 + fRec186[0] * fTemp279 + fRec184[0] * fTemp278 + fRec249[0] * fTemp277 + fRec247[0] * fTemp276 + fRec245[0] * fTemp275 + fRec243[0] * fTemp274 + fRec241[0] * fTemp273 + fRec239[0] * fTemp272 + fRec237[0] * fTemp271 + fRec235[0] * fTemp270 + fRec233[0] * fTemp269 + fRec231[0] * fTemp268 + fRec229[0] * fTemp267 + fRec227[0] * fTemp266 + fRec274[0] * fTemp265 + fRec272[0] * fTemp264 + fRec270[0] * fTemp263 + fRec268[0] * fTemp262 + fRec266[0] * fTemp261 + fRec264[0] * fTemp260 + fRec262[0] * fTemp259 + fRec260[0] * fTemp258 + fRec258[0] * fTemp257 + fRec256[0] * fTemp256 + fRec254[0] * fTemp255;
			float fTemp472 = fRec285[0] * fTemp248;
			float fTemp473 = fRec286[0] * fTemp247;
			float fTemp474 = fRec287[0] * fTemp246;
			float fTemp475 = fRec288[0] * fTemp245;
			float fTemp476 = fRec289[0] * fTemp244;
			float fTemp477 = fRec290[0] * fTemp243;
			float fTemp478 = fTemp250 + fTemp238;
			float fTemp479 = 0.25f * (fTemp471 + fRec276[0] * fTemp254 + fRec280[0] * fTemp253 + fRec281[0] * fTemp252 + fRec282[0] * fTemp251 + fRec283[0] * fTemp250 + fTemp470 + fTemp472 + fTemp473 + fTemp474 + fTemp475 + fTemp476 + fTemp477 + fRec276[0] * fTemp242 + fRec280[0] * fTemp241 + fRec281[0] * fTemp240 + fRec282[0] * fTemp239 + fRec283[0] * fTemp238);
			float fTemp480 = fSlow84 * (fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec2[0] + fTemp284) + 2.0f * fTemp467 + fRec290[0] + fRec289[0] + fRec288[0] + fRec287[0] + fRec286[0] + fRec285[0] + fRec284[0] + fRec254[0] + fRec256[0] + fRec258[0] + fRec260[0] + fRec262[0] + fRec264[0] + fRec266[0] + fRec268[0] + fRec270[0] + fRec272[0] + fRec274[0] + fRec227[0] + fRec229[0] + fRec231[0] + fRec233[0] + fRec235[0] + fRec237[0] + fRec239[0] + fRec241[0] + fRec243[0] + fRec245[0] + fRec247[0] + fRec249[0] + fRec184[0] + fRec186[0] + fRec190[0] + fRec188[0];
			fVec267[0] = fTemp480 - fTemp479;
			fRec301[0] = fConst33 * (fRec301[1] + (fTemp480 - (fTemp479 + fVec267[1])));
			float fTemp481 = fSlow117 * (fSlow116 * (fTemp344 + 0.25f * (fTemp295 + fTemp296 + fTemp297 + fTemp298 + fTemp299 + fTemp300 + fTemp301 + fTemp302 + fTemp303 + fTemp304 + fTemp305 + fTemp306 + fTemp307 + fTemp308 + fTemp309 + fTemp310 + fTemp311 + fTemp312 + fTemp313 + fTemp314 + fTemp315 + fTemp316 + fTemp317 + fTemp318 + fTemp319 + fTemp320 + fTemp321 + fTemp322 + fTemp323 + fTemp324 + fTemp325 + fTemp326 + fTemp327 + fTemp328 + fTemp329 + fTemp330 + fTemp331 + fTemp332 + fTemp333 + fTemp334 + fTemp335 + fTemp336 + fTemp337 + fTemp340 + fTemp338)) + fSlow114 * (fTemp404 + 0.25f * (fRec276[0] * fTemp478 + fTemp347 + fTemp348 + fTemp349 + fTemp350 + fTemp351 + fTemp352 + fTemp353 + fTemp354 + fTemp355 + fTemp356 + fTemp357 + fTemp358 + fTemp359 + fTemp360 + fTemp361 + fTemp362 + fTemp363 + fTemp364 + fTemp365 + fTemp366 + fTemp367 + fTemp368 + fTemp369 + fTemp370 + fTemp371 + fTemp372 + fTemp373 + fTemp374 + fTemp375 + fTemp376 + fTemp377 + fTemp378 + fTemp401 + fTemp399 + fTemp397 + fTemp395 + fTemp393 + fTemp391 + fTemp389 + fTemp387 + fTemp385 + fTemp381 + fTemp383)) + fSlow112 * (0.002f * fSlow85 * fRec301[0] + 0.25f * (fRec283[0] * fTemp478 + fRec282[0] * fTemp464 + fRec281[0] * fTemp463 + fRec276[0] * fTemp461 + fRec280[0] * fTemp462 + fTemp477 + fTemp476 + fTemp475 + fTemp474 + fTemp473 + fTemp472 + fTemp471 + fTemp470)) + fSlow110 * (fTemp469 + fTemp465) + fSlow108 * fTemp287 + fSlow106 * (fTemp457 + fTemp459) + fSlow104 * fTemp293);
			int iTemp482 = iRec305[1] < iConst48;
			iRec307[0] = 1103515245 * iRec307[1] + 12345;
			float fTemp483 = mydsp_faustpower2_f(std::min<float>(1.0f, std::max<float>(-1.0f, fTemp469 + fTemp466 + 4.656613e-16f * float(iRec307[0]))));
			fRec304[0] = ((iTemp482) ? fTemp483 + fRec304[1] : fTemp483);
			iRec305[0] = ((iTemp482) ? iRec305[1] + 1 : 1);
			fRec306[0] = ((iTemp482) ? fRec306[1] : fRec304[1]);
			float fTemp484 = std::log10(std::sqrt(fConst49 * fRec306[0]));
			fVec268[0] = fTemp484;
			float fTemp485 = 2e+01f * fVec268[1];
			float fTemp486 = 2e+01f * fTemp484;
			fRec303[0] = std::min<float>(1.0f, std::max<float>(0.0f, fRec303[1] + ((fTemp486 > -25.0f) ? ((fTemp485 < -25.0f) ? 1.0f : 0.0f) : 0.0f) - ((fTemp485 > -35.0f) ? ((fTemp486 < -35.0f) ? 1.0f : 0.0f) : 0.0f)));
			fRec302[0] = fConst51 * fRec302[1] + fConst50 * ((fRec303[0] > 0.5f) ? ((fRec303[1] < 0.5f) ? 1.0f : 0.0f) : 0.0f);
			float fTemp487 = std::min<float>(1.0f, fConst52 * fRec302[0]);
			fVec269[0] = fTemp487;
			float fTemp488 = fSlow119 * std::max<float>(fSlow118, 0.25f * (fTemp487 + fVec269[2] + fVec269[3] + fVec269[4])) * (fTemp459 + 0.5f * fTemp287 + 0.25f * (fTemp465 + fTemp412 + fTemp413 + fTemp414 + fTemp415 + fTemp416 + fTemp417 + fTemp418 + fTemp419 + fTemp420 + fTemp421 + fTemp422 + fTemp423 + fTemp424 + fTemp425 + fTemp426 + fTemp427 + fTemp428 + fTemp429 + fTemp430 + fTemp431 + fTemp432 + fTemp433 + fTemp434 + fTemp435 + fTemp436 + fTemp437 + fTemp438 + fTemp439 + fTemp440 + fTemp441 + fTemp442 + fTemp443 + fTemp444 + fTemp445 + fTemp446 + fTemp447 + fTemp448 + fTemp449 + fTemp450 + fTemp451 + fTemp452 + fTemp453 + fTemp454 + fTemp455 + fTemp469 + fTemp456));
			fRec308[0] = fSlow120 + 0.98f * fRec308[1];
			float fTemp489 = 0.05f * fRec308[0] + 0.001f;
			output0[i0] = FAUSTFLOAT(fTemp489 * (fTemp488 + fTemp481 + fTemp411 + fTemp237));
			output1[i0] = FAUSTFLOAT(fTemp489 * (fTemp411 + fTemp481 + fTemp488));
			output2[i0] = FAUSTFLOAT(fTemp237 * fTemp489);
			fRec0[1] = fRec0[0];
			for (int j0 = 3; j0 > 0; j0 = j0 - 1) {
				fVec0[j0] = fVec0[j0 - 1];
			}
			fRec6[1] = fRec6[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			iRec4[1] = iRec4[0];
			fVec1[2] = fVec1[1];
			fVec1[1] = fVec1[0];
			iRec7[1] = iRec7[0];
			fVec2[2] = fVec2[1];
			fVec2[1] = fVec2[0];
			iRec8[1] = iRec8[0];
			fVec3[2] = fVec3[1];
			fVec3[1] = fVec3[0];
			iRec9[1] = iRec9[0];
			fVec4[2] = fVec4[1];
			fVec4[1] = fVec4[0];
			fVec5[1] = fVec5[0];
			fRec3[1] = fRec3[0];
			fRec2[1] = fRec2[0];
			for (int j1 = 3; j1 > 0; j1 = j1 - 1) {
				fVec6[j1] = fVec6[j1 - 1];
			}
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			iRec12[1] = iRec12[0];
			fVec7[2] = fVec7[1];
			fVec7[1] = fVec7[0];
			iRec14[1] = iRec14[0];
			fVec8[2] = fVec8[1];
			fVec8[1] = fVec8[0];
			iRec15[1] = iRec15[0];
			fVec9[2] = fVec9[1];
			fVec9[1] = fVec9[0];
			iRec16[1] = iRec16[0];
			fVec10[2] = fVec10[1];
			fVec10[1] = fVec10[0];
			fVec11[1] = fVec11[0];
			fRec11[1] = fRec11[0];
			fRec10[1] = fRec10[0];
			for (int j2 = 3; j2 > 0; j2 = j2 - 1) {
				fVec12[j2] = fVec12[j2 - 1];
			}
			fRec20[2] = fRec20[1];
			fRec20[1] = fRec20[0];
			iRec19[1] = iRec19[0];
			fVec13[2] = fVec13[1];
			fVec13[1] = fVec13[0];
			iRec21[1] = iRec21[0];
			fVec14[2] = fVec14[1];
			fVec14[1] = fVec14[0];
			iRec22[1] = iRec22[0];
			fVec15[2] = fVec15[1];
			fVec15[1] = fVec15[0];
			iRec23[1] = iRec23[0];
			fVec16[2] = fVec16[1];
			fVec16[1] = fVec16[0];
			fVec17[1] = fVec17[0];
			fRec18[1] = fRec18[0];
			fRec17[1] = fRec17[0];
			for (int j3 = 3; j3 > 0; j3 = j3 - 1) {
				fVec18[j3] = fVec18[j3 - 1];
			}
			fRec27[2] = fRec27[1];
			fRec27[1] = fRec27[0];
			iRec26[1] = iRec26[0];
			fVec19[2] = fVec19[1];
			fVec19[1] = fVec19[0];
			iRec28[1] = iRec28[0];
			fVec20[2] = fVec20[1];
			fVec20[1] = fVec20[0];
			iRec29[1] = iRec29[0];
			fVec21[2] = fVec21[1];
			fVec21[1] = fVec21[0];
			iRec30[1] = iRec30[0];
			fVec22[2] = fVec22[1];
			fVec22[1] = fVec22[0];
			fVec23[1] = fVec23[0];
			fRec25[1] = fRec25[0];
			fRec24[1] = fRec24[0];
			for (int j4 = 3; j4 > 0; j4 = j4 - 1) {
				fVec24[j4] = fVec24[j4 - 1];
			}
			fRec34[2] = fRec34[1];
			fRec34[1] = fRec34[0];
			iRec33[1] = iRec33[0];
			fVec25[2] = fVec25[1];
			fVec25[1] = fVec25[0];
			iRec35[1] = iRec35[0];
			fVec26[2] = fVec26[1];
			fVec26[1] = fVec26[0];
			iRec36[1] = iRec36[0];
			fVec27[2] = fVec27[1];
			fVec27[1] = fVec27[0];
			iRec37[1] = iRec37[0];
			fVec28[2] = fVec28[1];
			fVec28[1] = fVec28[0];
			fVec29[1] = fVec29[0];
			fRec32[1] = fRec32[0];
			fRec31[1] = fRec31[0];
			for (int j5 = 3; j5 > 0; j5 = j5 - 1) {
				fVec30[j5] = fVec30[j5 - 1];
			}
			fRec41[2] = fRec41[1];
			fRec41[1] = fRec41[0];
			iRec40[1] = iRec40[0];
			fVec31[2] = fVec31[1];
			fVec31[1] = fVec31[0];
			iRec42[1] = iRec42[0];
			fVec32[2] = fVec32[1];
			fVec32[1] = fVec32[0];
			iRec43[1] = iRec43[0];
			fVec33[2] = fVec33[1];
			fVec33[1] = fVec33[0];
			iRec44[1] = iRec44[0];
			fVec34[2] = fVec34[1];
			fVec34[1] = fVec34[0];
			iRec45[1] = iRec45[0];
			fVec35[2] = fVec35[1];
			fVec35[1] = fVec35[0];
			fVec36[1] = fVec36[0];
			fRec39[1] = fRec39[0];
			fRec38[1] = fRec38[0];
			for (int j6 = 3; j6 > 0; j6 = j6 - 1) {
				fVec37[j6] = fVec37[j6 - 1];
			}
			fRec49[2] = fRec49[1];
			fRec49[1] = fRec49[0];
			iRec48[1] = iRec48[0];
			fVec38[2] = fVec38[1];
			fVec38[1] = fVec38[0];
			iRec50[1] = iRec50[0];
			fVec39[2] = fVec39[1];
			fVec39[1] = fVec39[0];
			iRec51[1] = iRec51[0];
			fVec40[2] = fVec40[1];
			fVec40[1] = fVec40[0];
			iRec52[1] = iRec52[0];
			fVec41[2] = fVec41[1];
			fVec41[1] = fVec41[0];
			iRec53[1] = iRec53[0];
			fVec42[2] = fVec42[1];
			fVec42[1] = fVec42[0];
			fVec43[1] = fVec43[0];
			fRec47[1] = fRec47[0];
			fRec46[1] = fRec46[0];
			for (int j7 = 3; j7 > 0; j7 = j7 - 1) {
				fVec44[j7] = fVec44[j7 - 1];
			}
			fRec57[2] = fRec57[1];
			fRec57[1] = fRec57[0];
			iRec56[1] = iRec56[0];
			fVec45[2] = fVec45[1];
			fVec45[1] = fVec45[0];
			iRec58[1] = iRec58[0];
			fVec46[2] = fVec46[1];
			fVec46[1] = fVec46[0];
			iRec59[1] = iRec59[0];
			fVec47[2] = fVec47[1];
			fVec47[1] = fVec47[0];
			iRec60[1] = iRec60[0];
			fVec48[2] = fVec48[1];
			fVec48[1] = fVec48[0];
			iRec61[1] = iRec61[0];
			fVec49[2] = fVec49[1];
			fVec49[1] = fVec49[0];
			fVec50[1] = fVec50[0];
			fRec55[1] = fRec55[0];
			fRec54[1] = fRec54[0];
			for (int j8 = 3; j8 > 0; j8 = j8 - 1) {
				fVec51[j8] = fVec51[j8 - 1];
			}
			fRec65[2] = fRec65[1];
			fRec65[1] = fRec65[0];
			iRec64[1] = iRec64[0];
			fVec52[2] = fVec52[1];
			fVec52[1] = fVec52[0];
			iRec66[1] = iRec66[0];
			fVec53[2] = fVec53[1];
			fVec53[1] = fVec53[0];
			iRec67[1] = iRec67[0];
			fVec54[2] = fVec54[1];
			fVec54[1] = fVec54[0];
			iRec68[1] = iRec68[0];
			fVec55[2] = fVec55[1];
			fVec55[1] = fVec55[0];
			iRec69[1] = iRec69[0];
			fVec56[2] = fVec56[1];
			fVec56[1] = fVec56[0];
			fVec57[1] = fVec57[0];
			fRec63[1] = fRec63[0];
			fRec62[1] = fRec62[0];
			for (int j9 = 3; j9 > 0; j9 = j9 - 1) {
				fVec58[j9] = fVec58[j9 - 1];
			}
			fRec73[2] = fRec73[1];
			fRec73[1] = fRec73[0];
			iRec72[1] = iRec72[0];
			fVec59[2] = fVec59[1];
			fVec59[1] = fVec59[0];
			iRec74[1] = iRec74[0];
			fVec60[2] = fVec60[1];
			fVec60[1] = fVec60[0];
			iRec75[1] = iRec75[0];
			fVec61[2] = fVec61[1];
			fVec61[1] = fVec61[0];
			iRec76[1] = iRec76[0];
			fVec62[2] = fVec62[1];
			fVec62[1] = fVec62[0];
			iRec77[1] = iRec77[0];
			fVec63[2] = fVec63[1];
			fVec63[1] = fVec63[0];
			fVec64[1] = fVec64[0];
			fRec71[1] = fRec71[0];
			fRec70[1] = fRec70[0];
			for (int j10 = 3; j10 > 0; j10 = j10 - 1) {
				fVec65[j10] = fVec65[j10 - 1];
			}
			fRec81[2] = fRec81[1];
			fRec81[1] = fRec81[0];
			iRec80[1] = iRec80[0];
			fVec66[2] = fVec66[1];
			fVec66[1] = fVec66[0];
			iRec82[1] = iRec82[0];
			fVec67[2] = fVec67[1];
			fVec67[1] = fVec67[0];
			iRec83[1] = iRec83[0];
			fVec68[2] = fVec68[1];
			fVec68[1] = fVec68[0];
			iRec84[1] = iRec84[0];
			fVec69[2] = fVec69[1];
			fVec69[1] = fVec69[0];
			iRec85[1] = iRec85[0];
			fVec70[2] = fVec70[1];
			fVec70[1] = fVec70[0];
			fVec71[1] = fVec71[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			for (int j11 = 3; j11 > 0; j11 = j11 - 1) {
				fVec72[j11] = fVec72[j11 - 1];
			}
			fRec89[2] = fRec89[1];
			fRec89[1] = fRec89[0];
			iRec88[1] = iRec88[0];
			fVec73[2] = fVec73[1];
			fVec73[1] = fVec73[0];
			iRec90[1] = iRec90[0];
			fVec74[2] = fVec74[1];
			fVec74[1] = fVec74[0];
			iRec91[1] = iRec91[0];
			fVec75[2] = fVec75[1];
			fVec75[1] = fVec75[0];
			iRec92[1] = iRec92[0];
			fVec76[2] = fVec76[1];
			fVec76[1] = fVec76[0];
			iRec93[1] = iRec93[0];
			fVec77[2] = fVec77[1];
			fVec77[1] = fVec77[0];
			fVec78[1] = fVec78[0];
			fRec87[1] = fRec87[0];
			fRec86[1] = fRec86[0];
			for (int j12 = 3; j12 > 0; j12 = j12 - 1) {
				fVec79[j12] = fVec79[j12 - 1];
			}
			iRec96[1] = iRec96[0];
			fVec80[2] = fVec80[1];
			fVec80[1] = fVec80[0];
			fVec81[1] = fVec81[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			for (int j13 = 3; j13 > 0; j13 = j13 - 1) {
				fVec82[j13] = fVec82[j13 - 1];
			}
			iRec99[1] = iRec99[0];
			fVec83[2] = fVec83[1];
			fVec83[1] = fVec83[0];
			fVec84[1] = fVec84[0];
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			for (int j14 = 3; j14 > 0; j14 = j14 - 1) {
				fVec85[j14] = fVec85[j14 - 1];
			}
			iRec102[1] = iRec102[0];
			fVec86[2] = fVec86[1];
			fVec86[1] = fVec86[0];
			fVec87[1] = fVec87[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			for (int j15 = 3; j15 > 0; j15 = j15 - 1) {
				fVec88[j15] = fVec88[j15 - 1];
			}
			iRec105[1] = iRec105[0];
			fVec89[2] = fVec89[1];
			fVec89[1] = fVec89[0];
			fVec90[1] = fVec90[0];
			fRec104[1] = fRec104[0];
			fRec103[1] = fRec103[0];
			for (int j16 = 3; j16 > 0; j16 = j16 - 1) {
				fVec91[j16] = fVec91[j16 - 1];
			}
			iRec108[1] = iRec108[0];
			fVec92[2] = fVec92[1];
			fVec92[1] = fVec92[0];
			fVec93[1] = fVec93[0];
			fRec107[1] = fRec107[0];
			fRec106[1] = fRec106[0];
			iRec111[1] = iRec111[0];
			fVec94[2] = fVec94[1];
			fVec94[1] = fVec94[0];
			fVec95[1] = fVec95[0];
			fRec110[1] = fRec110[0];
			fRec109[1] = fRec109[0];
			iRec114[1] = iRec114[0];
			fVec96[2] = fVec96[1];
			fVec96[1] = fVec96[0];
			fVec97[1] = fVec97[0];
			fRec113[1] = fRec113[0];
			fRec112[1] = fRec112[0];
			iRec117[1] = iRec117[0];
			fVec98[2] = fVec98[1];
			fVec98[1] = fVec98[0];
			fVec99[1] = fVec99[0];
			fRec116[1] = fRec116[0];
			fRec115[1] = fRec115[0];
			iRec120[1] = iRec120[0];
			fVec100[2] = fVec100[1];
			fVec100[1] = fVec100[0];
			fVec101[1] = fVec101[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			iRec123[1] = iRec123[0];
			fVec102[2] = fVec102[1];
			fVec102[1] = fVec102[0];
			fVec103[1] = fVec103[0];
			fRec122[1] = fRec122[0];
			fRec121[1] = fRec121[0];
			iRec126[1] = iRec126[0];
			fVec104[2] = fVec104[1];
			fVec104[1] = fVec104[0];
			fVec105[1] = fVec105[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			iRec129[1] = iRec129[0];
			fVec106[2] = fVec106[1];
			fVec106[1] = fVec106[0];
			fVec107[1] = fVec107[0];
			fRec128[1] = fRec128[0];
			fRec127[1] = fRec127[0];
			iRec132[1] = iRec132[0];
			fVec108[2] = fVec108[1];
			fVec108[1] = fVec108[0];
			fVec109[1] = fVec109[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			iRec135[1] = iRec135[0];
			fVec110[2] = fVec110[1];
			fVec110[1] = fVec110[0];
			fVec111[1] = fVec111[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			iRec138[1] = iRec138[0];
			fVec112[2] = fVec112[1];
			fVec112[1] = fVec112[0];
			fVec113[1] = fVec113[0];
			fRec137[1] = fRec137[0];
			fRec136[1] = fRec136[0];
			iRec141[1] = iRec141[0];
			fVec114[2] = fVec114[1];
			fVec114[1] = fVec114[0];
			fVec115[1] = fVec115[0];
			fRec140[1] = fRec140[0];
			fRec139[1] = fRec139[0];
			iRec144[1] = iRec144[0];
			fVec116[2] = fVec116[1];
			fVec116[1] = fVec116[0];
			fVec117[1] = fVec117[0];
			fRec143[1] = fRec143[0];
			fRec142[1] = fRec142[0];
			iRec147[1] = iRec147[0];
			fVec118[2] = fVec118[1];
			fVec118[1] = fVec118[0];
			fVec119[1] = fVec119[0];
			fRec146[1] = fRec146[0];
			fRec145[1] = fRec145[0];
			iRec150[1] = iRec150[0];
			fVec120[2] = fVec120[1];
			fVec120[1] = fVec120[0];
			fVec121[1] = fVec121[0];
			fRec149[1] = fRec149[0];
			fRec148[1] = fRec148[0];
			iRec153[1] = iRec153[0];
			fVec122[2] = fVec122[1];
			fVec122[1] = fVec122[0];
			fVec123[1] = fVec123[0];
			fRec152[1] = fRec152[0];
			fRec151[1] = fRec151[0];
			iRec156[1] = iRec156[0];
			fVec124[2] = fVec124[1];
			fVec124[1] = fVec124[0];
			fVec125[1] = fVec125[0];
			fRec155[1] = fRec155[0];
			fRec154[1] = fRec154[0];
			iRec159[1] = iRec159[0];
			fVec126[2] = fVec126[1];
			fVec126[1] = fVec126[0];
			fVec127[1] = fVec127[0];
			fRec158[1] = fRec158[0];
			fRec157[1] = fRec157[0];
			iRec162[1] = iRec162[0];
			fVec128[2] = fVec128[1];
			fVec128[1] = fVec128[0];
			fVec129[1] = fVec129[0];
			fRec161[1] = fRec161[0];
			fRec160[1] = fRec160[0];
			iRec165[1] = iRec165[0];
			fVec130[2] = fVec130[1];
			fVec130[1] = fVec130[0];
			fVec131[1] = fVec131[0];
			fRec164[1] = fRec164[0];
			fRec163[1] = fRec163[0];
			iRec168[1] = iRec168[0];
			fVec132[2] = fVec132[1];
			fVec132[1] = fVec132[0];
			fVec133[1] = fVec133[0];
			fRec167[1] = fRec167[0];
			fRec166[1] = fRec166[0];
			iRec171[1] = iRec171[0];
			fVec134[2] = fVec134[1];
			fVec134[1] = fVec134[0];
			fVec135[1] = fVec135[0];
			fRec170[1] = fRec170[0];
			fRec169[1] = fRec169[0];
			iRec174[1] = iRec174[0];
			fVec136[2] = fVec136[1];
			fVec136[1] = fVec136[0];
			fVec137[1] = fVec137[0];
			fRec173[1] = fRec173[0];
			fRec172[1] = fRec172[0];
			iRec177[1] = iRec177[0];
			fVec138[2] = fVec138[1];
			fVec138[1] = fVec138[0];
			fVec139[1] = fVec139[0];
			fRec176[1] = fRec176[0];
			fRec175[1] = fRec175[0];
			iRec180[1] = iRec180[0];
			fVec140[2] = fVec140[1];
			fVec140[1] = fVec140[0];
			fVec141[1] = fVec141[0];
			fRec179[1] = fRec179[0];
			fRec178[1] = fRec178[0];
			fRec1[1] = fRec1[0];
			for (int j17 = 3; j17 > 0; j17 = j17 - 1) {
				fVec142[j17] = fVec142[j17 - 1];
			}
			fVec143[1] = fVec143[0];
			fRec185[1] = fRec185[0];
			fRec184[1] = fRec184[0];
			for (int j18 = 3; j18 > 0; j18 = j18 - 1) {
				fVec144[j18] = fVec144[j18 - 1];
			}
			fVec145[1] = fVec145[0];
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			for (int j19 = 3; j19 > 0; j19 = j19 - 1) {
				fVec146[j19] = fVec146[j19 - 1];
			}
			fVec147[1] = fVec147[0];
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			for (int j20 = 3; j20 > 0; j20 = j20 - 1) {
				fVec148[j20] = fVec148[j20 - 1];
			}
			fVec149[1] = fVec149[0];
			fRec191[1] = fRec191[0];
			fRec190[1] = fRec190[0];
			for (int j21 = 3; j21 > 0; j21 = j21 - 1) {
				fVec150[j21] = fVec150[j21 - 1];
			}
			fVec151[1] = fVec151[0];
			fRec193[1] = fRec193[0];
			fRec192[1] = fRec192[0];
			for (int j22 = 3; j22 > 0; j22 = j22 - 1) {
				fVec152[j22] = fVec152[j22 - 1];
			}
			fVec153[1] = fVec153[0];
			fRec195[1] = fRec195[0];
			fRec194[1] = fRec194[0];
			for (int j23 = 3; j23 > 0; j23 = j23 - 1) {
				fVec154[j23] = fVec154[j23 - 1];
			}
			fVec155[1] = fVec155[0];
			fRec197[1] = fRec197[0];
			fRec196[1] = fRec196[0];
			for (int j24 = 3; j24 > 0; j24 = j24 - 1) {
				fVec156[j24] = fVec156[j24 - 1];
			}
			fVec157[1] = fVec157[0];
			fRec199[1] = fRec199[0];
			fRec198[1] = fRec198[0];
			for (int j25 = 3; j25 > 0; j25 = j25 - 1) {
				fVec158[j25] = fVec158[j25 - 1];
			}
			fVec159[1] = fVec159[0];
			fRec201[1] = fRec201[0];
			fRec200[1] = fRec200[0];
			for (int j26 = 3; j26 > 0; j26 = j26 - 1) {
				fVec160[j26] = fVec160[j26 - 1];
			}
			fVec161[1] = fVec161[0];
			fRec203[1] = fRec203[0];
			fRec202[1] = fRec202[0];
			for (int j27 = 3; j27 > 0; j27 = j27 - 1) {
				fVec162[j27] = fVec162[j27 - 1];
			}
			fVec163[1] = fVec163[0];
			fRec205[1] = fRec205[0];
			fRec204[1] = fRec204[0];
			for (int j28 = 3; j28 > 0; j28 = j28 - 1) {
				fVec164[j28] = fVec164[j28 - 1];
			}
			fVec165[1] = fVec165[0];
			fRec207[1] = fRec207[0];
			fRec206[1] = fRec206[0];
			for (int j29 = 3; j29 > 0; j29 = j29 - 1) {
				fVec166[j29] = fVec166[j29 - 1];
			}
			fVec167[1] = fVec167[0];
			fRec209[1] = fRec209[0];
			fRec208[1] = fRec208[0];
			for (int j30 = 3; j30 > 0; j30 = j30 - 1) {
				fVec168[j30] = fVec168[j30 - 1];
			}
			fVec169[1] = fVec169[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			for (int j31 = 3; j31 > 0; j31 = j31 - 1) {
				fVec170[j31] = fVec170[j31 - 1];
			}
			fVec171[1] = fVec171[0];
			fRec213[1] = fRec213[0];
			fRec212[1] = fRec212[0];
			for (int j32 = 3; j32 > 0; j32 = j32 - 1) {
				fVec172[j32] = fVec172[j32 - 1];
			}
			fVec173[1] = fVec173[0];
			fRec215[1] = fRec215[0];
			fRec214[1] = fRec214[0];
			for (int j33 = 3; j33 > 0; j33 = j33 - 1) {
				fVec174[j33] = fVec174[j33 - 1];
			}
			fVec175[1] = fVec175[0];
			fRec217[1] = fRec217[0];
			fRec216[1] = fRec216[0];
			for (int j34 = 3; j34 > 0; j34 = j34 - 1) {
				fVec176[j34] = fVec176[j34 - 1];
			}
			fVec177[1] = fVec177[0];
			fRec219[1] = fRec219[0];
			fRec218[1] = fRec218[0];
			for (int j35 = 3; j35 > 0; j35 = j35 - 1) {
				fVec178[j35] = fVec178[j35 - 1];
			}
			fVec179[1] = fVec179[0];
			fRec221[1] = fRec221[0];
			fRec220[1] = fRec220[0];
			for (int j36 = 3; j36 > 0; j36 = j36 - 1) {
				fVec180[j36] = fVec180[j36 - 1];
			}
			fVec181[1] = fVec181[0];
			fRec223[1] = fRec223[0];
			fRec222[1] = fRec222[0];
			for (int j37 = 3; j37 > 0; j37 = j37 - 1) {
				fVec182[j37] = fVec182[j37 - 1];
			}
			for (int j38 = 3; j38 > 0; j38 = j38 - 1) {
				fVec183[j38] = fVec183[j38 - 1];
			}
			for (int j39 = 3; j39 > 0; j39 = j39 - 1) {
				fVec184[j39] = fVec184[j39 - 1];
			}
			for (int j40 = 3; j40 > 0; j40 = j40 - 1) {
				fVec185[j40] = fVec185[j40 - 1];
			}
			for (int j41 = 3; j41 > 0; j41 = j41 - 1) {
				fVec186[j41] = fVec186[j41 - 1];
			}
			for (int j42 = 3; j42 > 0; j42 = j42 - 1) {
				fVec187[j42] = fVec187[j42 - 1];
			}
			for (int j43 = 3; j43 > 0; j43 = j43 - 1) {
				fVec188[j43] = fVec188[j43 - 1];
			}
			for (int j44 = 3; j44 > 0; j44 = j44 - 1) {
				fVec189[j44] = fVec189[j44 - 1];
			}
			for (int j45 = 3; j45 > 0; j45 = j45 - 1) {
				fVec190[j45] = fVec190[j45 - 1];
			}
			for (int j46 = 3; j46 > 0; j46 = j46 - 1) {
				fVec191[j46] = fVec191[j46 - 1];
			}
			for (int j47 = 3; j47 > 0; j47 = j47 - 1) {
				fVec192[j47] = fVec192[j47 - 1];
			}
			for (int j48 = 3; j48 > 0; j48 = j48 - 1) {
				fVec193[j48] = fVec193[j48 - 1];
			}
			for (int j49 = 3; j49 > 0; j49 = j49 - 1) {
				fVec194[j49] = fVec194[j49 - 1];
			}
			for (int j50 = 3; j50 > 0; j50 = j50 - 1) {
				fVec195[j50] = fVec195[j50 - 1];
			}
			for (int j51 = 3; j51 > 0; j51 = j51 - 1) {
				fVec196[j51] = fVec196[j51 - 1];
			}
			for (int j52 = 3; j52 > 0; j52 = j52 - 1) {
				fVec197[j52] = fVec197[j52 - 1];
			}
			for (int j53 = 3; j53 > 0; j53 = j53 - 1) {
				fVec198[j53] = fVec198[j53 - 1];
			}
			for (int j54 = 3; j54 > 0; j54 = j54 - 1) {
				fVec199[j54] = fVec199[j54 - 1];
			}
			for (int j55 = 3; j55 > 0; j55 = j55 - 1) {
				fVec200[j55] = fVec200[j55 - 1];
			}
			for (int j56 = 3; j56 > 0; j56 = j56 - 1) {
				fVec201[j56] = fVec201[j56 - 1];
			}
			for (int j57 = 3; j57 > 0; j57 = j57 - 1) {
				fVec202[j57] = fVec202[j57 - 1];
			}
			for (int j58 = 3; j58 > 0; j58 = j58 - 1) {
				fVec203[j58] = fVec203[j58 - 1];
			}
			for (int j59 = 3; j59 > 0; j59 = j59 - 1) {
				fVec204[j59] = fVec204[j59 - 1];
			}
			for (int j60 = 3; j60 > 0; j60 = j60 - 1) {
				fVec205[j60] = fVec205[j60 - 1];
			}
			fVec206[1] = fVec206[0];
			fRec183[1] = fRec183[0];
			fVec207[1] = fVec207[0];
			fRec182[1] = fRec182[0];
			fRec181[1] = fRec181[0];
			fVec208[1] = fVec208[0];
			fRec228[1] = fRec228[0];
			fRec227[1] = fRec227[0];
			fVec209[1] = fVec209[0];
			fRec230[1] = fRec230[0];
			fRec229[1] = fRec229[0];
			fVec210[1] = fVec210[0];
			fRec232[1] = fRec232[0];
			fRec231[1] = fRec231[0];
			fVec211[1] = fVec211[0];
			fRec234[1] = fRec234[0];
			fRec233[1] = fRec233[0];
			fVec212[1] = fVec212[0];
			fRec236[1] = fRec236[0];
			fRec235[1] = fRec235[0];
			fVec213[1] = fVec213[0];
			fRec238[1] = fRec238[0];
			fRec237[1] = fRec237[0];
			fVec214[1] = fVec214[0];
			fRec240[1] = fRec240[0];
			fRec239[1] = fRec239[0];
			fVec215[1] = fVec215[0];
			fRec242[1] = fRec242[0];
			fRec241[1] = fRec241[0];
			fVec216[1] = fVec216[0];
			fRec244[1] = fRec244[0];
			fRec243[1] = fRec243[0];
			fVec217[1] = fVec217[0];
			fRec246[1] = fRec246[0];
			fRec245[1] = fRec245[0];
			fVec218[1] = fVec218[0];
			fRec248[1] = fRec248[0];
			fRec247[1] = fRec247[0];
			fVec219[1] = fVec219[0];
			fRec250[1] = fRec250[0];
			fRec249[1] = fRec249[0];
			fVec220[1] = fVec220[0];
			fRec226[1] = fRec226[0];
			fVec221[1] = fVec221[0];
			fRec225[1] = fRec225[0];
			fRec224[1] = fRec224[0];
			fVec222[1] = fVec222[0];
			fRec255[1] = fRec255[0];
			fRec254[1] = fRec254[0];
			fVec223[1] = fVec223[0];
			fRec257[1] = fRec257[0];
			fRec256[1] = fRec256[0];
			fVec224[1] = fVec224[0];
			fRec259[1] = fRec259[0];
			fRec258[1] = fRec258[0];
			fVec225[1] = fVec225[0];
			fRec261[1] = fRec261[0];
			fRec260[1] = fRec260[0];
			fVec226[1] = fVec226[0];
			fRec263[1] = fRec263[0];
			fRec262[1] = fRec262[0];
			fVec227[1] = fVec227[0];
			fRec265[1] = fRec265[0];
			fRec264[1] = fRec264[0];
			fVec228[1] = fVec228[0];
			fRec267[1] = fRec267[0];
			fRec266[1] = fRec266[0];
			fVec229[1] = fVec229[0];
			fRec269[1] = fRec269[0];
			fRec268[1] = fRec268[0];
			fVec230[1] = fVec230[0];
			fRec271[1] = fRec271[0];
			fRec270[1] = fRec270[0];
			fVec231[1] = fVec231[0];
			fRec273[1] = fRec273[0];
			fRec272[1] = fRec272[0];
			fVec232[1] = fVec232[0];
			fRec275[1] = fRec275[0];
			fRec274[1] = fRec274[0];
			fVec233[1] = fVec233[0];
			fVec234[1] = fVec234[0];
			fRec276[1] = fRec276[0];
			fVec235[1] = fVec235[0];
			fRec253[1] = fRec253[0];
			fVec236[1] = fVec236[0];
			fRec252[1] = fRec252[0];
			fRec251[1] = fRec251[0];
			fVec237[1] = fVec237[0];
			fVec238[1] = fVec238[0];
			fRec280[1] = fRec280[0];
			fVec239[1] = fVec239[0];
			fVec240[1] = fVec240[0];
			fRec281[1] = fRec281[0];
			fVec241[1] = fVec241[0];
			fVec242[1] = fVec242[0];
			fRec282[1] = fRec282[0];
			fVec243[1] = fVec243[0];
			fVec244[1] = fVec244[0];
			fRec283[1] = fRec283[0];
			fVec245[1] = fVec245[0];
			fVec246[1] = fVec246[0];
			fRec284[1] = fRec284[0];
			fVec247[1] = fVec247[0];
			fVec248[1] = fVec248[0];
			fRec285[1] = fRec285[0];
			fVec249[1] = fVec249[0];
			fVec250[1] = fVec250[0];
			fRec286[1] = fRec286[0];
			fVec251[1] = fVec251[0];
			fVec252[1] = fVec252[0];
			fRec287[1] = fRec287[0];
			fVec253[1] = fVec253[0];
			fVec254[1] = fVec254[0];
			fRec288[1] = fRec288[0];
			fVec255[1] = fVec255[0];
			fVec256[1] = fVec256[0];
			fRec289[1] = fRec289[0];
			fVec257[1] = fVec257[0];
			fVec258[1] = fVec258[0];
			fRec290[1] = fRec290[0];
			fVec259[1] = fVec259[0];
			fRec279[1] = fRec279[0];
			fVec260[1] = fVec260[0];
			fRec278[1] = fRec278[0];
			fRec277[1] = fRec277[0];
			fRec292[1] = fRec292[0];
			fVec261[1] = fVec261[0];
			fRec291[1] = fRec291[0];
			fRec294[1] = fRec294[0];
			fVec262[1] = fVec262[0];
			fRec293[1] = fRec293[0];
			fRec296[1] = fRec296[0];
			fVec263[1] = fVec263[0];
			fRec295[1] = fRec295[0];
			fRec298[1] = fRec298[0];
			fVec264[1] = fVec264[0];
			fRec297[1] = fRec297[0];
			fVec265[1] = fVec265[0];
			fRec299[1] = fRec299[0];
			fVec266[1] = fVec266[0];
			fRec300[1] = fRec300[0];
			fVec267[1] = fVec267[0];
			fRec301[1] = fRec301[0];
			iRec307[1] = iRec307[0];
			fRec304[1] = fRec304[0];
			iRec305[1] = iRec305[0];
			fRec306[1] = fRec306[0];
			fVec268[1] = fVec268[0];
			fRec303[1] = fRec303[0];
			fRec302[1] = fRec302[0];
			for (int j61 = 4; j61 > 0; j61 = j61 - 1) {
				fVec269[j61] = fVec269[j61 - 1];
			}
			fRec308[1] = fRec308[0];
		}
	}

};

#endif
