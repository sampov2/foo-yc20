/* ------------------------------------------------------------
name: "plugin"
Code generated with Faust 2.20.2 (https://faust.grame.fr)
Compilation options: -lang cpp -scal -ftz 0
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
#include <math.h>

static float mydsp_faustpower2_f(float value) {
	return (value * value);
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fHslider1;
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst2;
	float fConst3;
	float fConst4;
	float fConst5;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fHslider5;
	float fRec5[2];
	float fRec4[2];
	int iRec6[2];
	float fVec0[2];
	int iRec3[2];
	float fVec1[2];
	int iRec2[2];
	float fVec2[2];
	float fRec1[2];
	float fRec0[2];
	FAUSTFLOAT fButton0;
	float fVec3[4];
	float fConst6;
	float fRec11[2];
	int iRec12[2];
	float fVec4[2];
	int iRec10[2];
	float fVec5[2];
	int iRec9[2];
	float fVec6[2];
	float fRec8[2];
	float fRec7[2];
	FAUSTFLOAT fButton1;
	float fVec7[4];
	float fConst7;
	float fRec17[2];
	int iRec18[2];
	float fVec8[2];
	int iRec16[2];
	float fVec9[2];
	int iRec15[2];
	float fVec10[2];
	float fRec14[2];
	float fRec13[2];
	FAUSTFLOAT fButton2;
	float fVec11[4];
	float fConst8;
	float fRec23[2];
	int iRec24[2];
	float fVec12[2];
	int iRec22[2];
	float fVec13[2];
	int iRec21[2];
	float fVec14[2];
	float fRec20[2];
	float fRec19[2];
	FAUSTFLOAT fButton3;
	float fVec15[4];
	float fConst9;
	float fConst10;
	float fRec29[2];
	int iRec30[2];
	float fVec16[2];
	int iRec28[2];
	float fVec17[2];
	int iRec27[2];
	float fVec18[2];
	float fRec26[2];
	float fRec25[2];
	FAUSTFLOAT fButton4;
	float fVec19[4];
	float fConst11;
	float fRec35[2];
	int iRec36[2];
	float fVec20[2];
	int iRec34[2];
	float fVec21[2];
	int iRec33[2];
	float fVec22[2];
	float fRec32[2];
	float fRec31[2];
	FAUSTFLOAT fButton5;
	float fVec23[4];
	float fConst12;
	float fRec41[2];
	int iRec42[2];
	float fVec24[2];
	int iRec40[2];
	float fVec25[2];
	int iRec39[2];
	float fVec26[2];
	float fRec38[2];
	float fRec37[2];
	FAUSTFLOAT fButton6;
	float fVec27[4];
	float fConst13;
	float fRec47[2];
	int iRec48[2];
	float fVec28[2];
	int iRec46[2];
	float fVec29[2];
	int iRec45[2];
	float fVec30[2];
	float fRec44[2];
	float fRec43[2];
	FAUSTFLOAT fButton7;
	float fVec31[4];
	float fConst14;
	float fConst15;
	float fRec53[2];
	int iRec54[2];
	float fVec32[2];
	int iRec52[2];
	float fVec33[2];
	int iRec51[2];
	float fVec34[2];
	float fRec50[2];
	float fRec49[2];
	FAUSTFLOAT fButton8;
	float fVec35[4];
	float fConst16;
	float fRec59[2];
	int iRec60[2];
	float fVec36[2];
	int iRec58[2];
	float fVec37[2];
	int iRec57[2];
	float fVec38[2];
	float fRec56[2];
	float fRec55[2];
	FAUSTFLOAT fButton9;
	float fVec39[4];
	float fConst17;
	float fRec65[2];
	int iRec66[2];
	float fVec40[2];
	int iRec64[2];
	float fVec41[2];
	int iRec63[2];
	float fVec42[2];
	float fRec62[2];
	float fRec61[2];
	FAUSTFLOAT fButton10;
	float fVec43[4];
	float fConst18;
	float fRec71[2];
	int iRec72[2];
	float fVec44[2];
	int iRec70[2];
	float fVec45[2];
	int iRec69[2];
	float fVec46[2];
	float fRec68[2];
	float fRec67[2];
	FAUSTFLOAT fButton11;
	float fVec47[4];
	float fConst19;
	float fRec74[2];
	float fRec73[2];
	FAUSTFLOAT fButton12;
	float fVec48[4];
	float fRec76[2];
	float fRec75[2];
	FAUSTFLOAT fButton13;
	float fVec49[4];
	float fRec78[2];
	float fRec77[2];
	FAUSTFLOAT fButton14;
	float fVec50[4];
	float fRec80[2];
	float fRec79[2];
	FAUSTFLOAT fButton15;
	float fVec51[4];
	float fConst20;
	float fRec82[2];
	float fRec81[2];
	FAUSTFLOAT fButton16;
	float fVec52[4];
	float fRec84[2];
	float fRec83[2];
	FAUSTFLOAT fButton17;
	float fVec53[4];
	float fRec86[2];
	float fRec85[2];
	FAUSTFLOAT fButton18;
	float fVec54[4];
	float fRec88[2];
	float fRec87[2];
	FAUSTFLOAT fButton19;
	float fVec55[4];
	float fConst21;
	float fRec90[2];
	float fRec89[2];
	FAUSTFLOAT fButton20;
	float fVec56[4];
	float fRec92[2];
	float fRec91[2];
	FAUSTFLOAT fButton21;
	float fVec57[4];
	float fRec94[2];
	float fRec93[2];
	FAUSTFLOAT fButton22;
	float fVec58[4];
	float fRec96[2];
	float fRec95[2];
	FAUSTFLOAT fButton23;
	float fVec59[4];
	float fConst22;
	float fRec98[2];
	float fRec97[2];
	FAUSTFLOAT fButton24;
	float fVec60[4];
	float fRec100[2];
	float fRec99[2];
	FAUSTFLOAT fButton25;
	float fVec61[4];
	float fRec102[2];
	float fRec101[2];
	FAUSTFLOAT fButton26;
	float fVec62[4];
	float fRec104[2];
	float fRec103[2];
	FAUSTFLOAT fButton27;
	float fVec63[4];
	float fConst23;
	float fRec106[2];
	float fRec105[2];
	FAUSTFLOAT fButton28;
	float fVec64[4];
	float fRec108[2];
	float fRec107[2];
	FAUSTFLOAT fButton29;
	float fVec65[4];
	float fRec110[2];
	float fRec109[2];
	FAUSTFLOAT fButton30;
	float fVec66[4];
	float fRec112[2];
	float fRec111[2];
	FAUSTFLOAT fButton31;
	float fVec67[4];
	float fConst24;
	float fRec114[2];
	float fRec113[2];
	FAUSTFLOAT fButton32;
	float fVec68[4];
	float fRec116[2];
	float fRec115[2];
	FAUSTFLOAT fButton33;
	float fVec69[4];
	float fRec118[2];
	float fRec117[2];
	FAUSTFLOAT fButton34;
	float fVec70[4];
	float fRec120[2];
	float fRec119[2];
	FAUSTFLOAT fButton35;
	float fVec71[4];
	float fConst25;
	float fVec72[2];
	float fRec121[2];
	FAUSTFLOAT fButton36;
	float fVec73[4];
	float fVec74[2];
	float fRec122[2];
	FAUSTFLOAT fButton37;
	float fVec75[4];
	float fVec76[2];
	float fRec123[2];
	FAUSTFLOAT fButton38;
	float fVec77[4];
	float fVec78[2];
	float fRec124[2];
	FAUSTFLOAT fButton39;
	float fVec79[4];
	float fVec80[2];
	float fRec125[2];
	FAUSTFLOAT fButton40;
	float fVec81[4];
	float fVec82[2];
	float fRec126[2];
	FAUSTFLOAT fButton41;
	float fVec83[4];
	float fVec84[2];
	float fRec127[2];
	FAUSTFLOAT fButton42;
	float fVec85[4];
	float fVec86[2];
	float fRec128[2];
	FAUSTFLOAT fButton43;
	float fVec87[4];
	float fVec88[2];
	float fRec129[2];
	FAUSTFLOAT fButton44;
	float fVec89[4];
	float fVec90[2];
	float fRec130[2];
	FAUSTFLOAT fButton45;
	float fVec91[4];
	float fVec92[2];
	float fRec131[2];
	FAUSTFLOAT fButton46;
	float fVec93[4];
	float fVec94[2];
	float fRec132[2];
	FAUSTFLOAT fButton47;
	float fVec95[4];
	FAUSTFLOAT fButton48;
	float fVec96[4];
	FAUSTFLOAT fButton49;
	float fVec97[4];
	FAUSTFLOAT fButton50;
	float fVec98[4];
	FAUSTFLOAT fButton51;
	float fVec99[4];
	FAUSTFLOAT fButton52;
	float fVec100[4];
	FAUSTFLOAT fButton53;
	float fVec101[4];
	FAUSTFLOAT fButton54;
	float fVec102[4];
	FAUSTFLOAT fButton55;
	float fVec103[4];
	FAUSTFLOAT fButton56;
	float fVec104[4];
	FAUSTFLOAT fButton57;
	float fVec105[4];
	FAUSTFLOAT fButton58;
	float fVec106[4];
	FAUSTFLOAT fButton59;
	float fVec107[4];
	FAUSTFLOAT fButton60;
	float fVec108[4];
	float fConst26;
	float fVec109[2];
	float fRec133[2];
	FAUSTFLOAT fVslider1;
	float fConst27;
	int iRec136[2];
	float fVec110[2];
	float fRec135[2];
	float fRec134[2];
	int iRec139[2];
	float fVec111[2];
	float fRec138[2];
	float fRec137[2];
	int iRec142[2];
	float fVec112[2];
	float fRec141[2];
	float fRec140[2];
	int iRec145[2];
	float fVec113[2];
	float fRec144[2];
	float fRec143[2];
	float fConst28;
	int iRec148[2];
	float fVec114[2];
	float fRec147[2];
	float fRec146[2];
	int iRec151[2];
	float fVec115[2];
	float fRec150[2];
	float fRec149[2];
	int iRec154[2];
	float fVec116[2];
	float fRec153[2];
	float fRec152[2];
	int iRec157[2];
	float fVec117[2];
	float fRec156[2];
	float fRec155[2];
	float fVec118[2];
	float fRec158[2];
	FAUSTFLOAT fVslider2;
	float fConst29;
	int iRec161[2];
	float fVec119[2];
	float fRec160[2];
	float fRec159[2];
	int iRec164[2];
	float fVec120[2];
	float fRec163[2];
	float fRec162[2];
	int iRec167[2];
	float fVec121[2];
	float fRec166[2];
	float fRec165[2];
	int iRec170[2];
	float fVec122[2];
	float fRec169[2];
	float fRec168[2];
	float fVec123[2];
	float fRec171[2];
	FAUSTFLOAT fVslider3;
	float fConst30;
	float fConst31;
	int iRec174[2];
	float fVec124[2];
	float fRec173[2];
	float fRec172[2];
	float fConst32;
	int iRec177[2];
	float fVec125[2];
	float fRec176[2];
	float fRec175[2];
	int iRec180[2];
	float fVec126[2];
	float fRec179[2];
	float fRec178[2];
	int iRec183[2];
	float fVec127[2];
	float fRec182[2];
	float fRec181[2];
	int iRec186[2];
	float fVec128[2];
	float fRec185[2];
	float fRec184[2];
	float fVec129[2];
	float fRec187[2];
	FAUSTFLOAT fVslider4;
	float fConst33;
	int iRec190[2];
	float fVec130[2];
	float fRec189[2];
	float fRec188[2];
	int iRec193[2];
	float fVec131[2];
	float fRec192[2];
	float fRec191[2];
	int iRec196[2];
	float fVec132[2];
	float fRec195[2];
	float fRec194[2];
	int iRec199[2];
	float fVec133[2];
	float fRec198[2];
	float fRec197[2];
	int iRec202[2];
	float fVec134[2];
	float fRec201[2];
	float fRec200[2];
	int iRec205[2];
	float fVec135[2];
	float fRec204[2];
	float fRec203[2];
	int iRec208[2];
	float fVec136[2];
	float fRec207[2];
	float fRec206[2];
	float fVec137[2];
	float fRec209[2];
	FAUSTFLOAT fVslider5;
	float fConst34;
	float fConst35;
	int iRec212[2];
	float fVec138[2];
	float fRec211[2];
	float fRec210[2];
	int iRec215[2];
	float fVec139[2];
	float fRec214[2];
	float fRec213[2];
	int iRec218[2];
	float fVec140[2];
	float fRec217[2];
	float fRec216[2];
	int iRec221[2];
	float fVec141[2];
	float fRec220[2];
	float fRec219[2];
	float fConst36;
	int iRec224[2];
	float fVec142[2];
	float fRec223[2];
	float fRec222[2];
	int iRec227[2];
	float fVec143[2];
	float fRec226[2];
	float fRec225[2];
	int iRec230[2];
	float fVec144[2];
	float fRec229[2];
	float fRec228[2];
	int iRec233[2];
	float fVec145[2];
	float fRec232[2];
	float fRec231[2];
	int iRec236[2];
	float fVec146[2];
	float fRec235[2];
	float fRec234[2];
	int iRec239[2];
	float fVec147[2];
	float fRec238[2];
	float fRec237[2];
	int iRec242[2];
	float fVec148[2];
	float fRec241[2];
	float fRec240[2];
	int iRec245[2];
	float fVec149[2];
	float fRec244[2];
	float fRec243[2];
	float fVec150[2];
	float fRec246[2];
	FAUSTFLOAT fVslider6;
	float fConst37;
	float fConst38;
	int iRec249[2];
	float fRec248[2];
	float fRec247[2];
	int iRec252[2];
	float fRec251[2];
	float fRec250[2];
	int iRec255[2];
	float fRec254[2];
	float fRec253[2];
	int iRec258[2];
	float fRec257[2];
	float fRec256[2];
	int iRec261[2];
	float fRec260[2];
	float fRec259[2];
	int iRec264[2];
	float fRec263[2];
	float fRec262[2];
	int iRec267[2];
	float fRec266[2];
	float fRec265[2];
	int iRec270[2];
	float fRec269[2];
	float fRec268[2];
	int iRec273[2];
	float fRec272[2];
	float fRec271[2];
	int iRec276[2];
	float fRec275[2];
	float fRec274[2];
	int iRec279[2];
	float fRec278[2];
	float fRec277[2];
	int iRec282[2];
	float fRec281[2];
	float fRec280[2];
	float fVec151[2];
	float fRec283[2];
	FAUSTFLOAT fVslider7;
	float fConst39;
	float fConst40;
	FAUSTFLOAT fVslider8;
	float fVec152[2];
	float fRec285[2];
	float fVec153[2];
	float fRec284[2];
	float fConst41;
	float fConst42;
	FAUSTFLOAT fVslider9;
	float fVec154[2];
	float fRec287[2];
	float fVec155[2];
	float fRec286[2];
	float fConst43;
	float fConst44;
	FAUSTFLOAT fVslider10;
	float fVec156[2];
	float fRec289[2];
	float fVec157[2];
	float fRec288[2];
	float fConst45;
	float fConst46;
	FAUSTFLOAT fVslider11;
	float fVec158[2];
	float fRec291[2];
	float fVec159[2];
	float fRec290[2];
	float fRec293[2];
	float fRec292[2];
	float fRec295[2];
	float fRec294[2];
	float fRec297[2];
	float fRec296[2];
	float fRec299[2];
	float fRec298[2];
	FAUSTFLOAT fHslider6;
	float fConst47;
	float fConst48;
	float fConst49;
	int iConst50;
	float fConst51;
	int iRec305[2];
	float fRec302[2];
	int iRec303[2];
	float fRec304[2];
	float fVec160[2];
	float fRec301[2];
	float fRec300[2];
	float fVec161[5];
	float fConst52;
	FAUSTFLOAT fVslider12;
	FAUSTFLOAT fVslider13;
	float fRec306[2];
	FAUSTFLOAT fVslider14;
	float fRec307[2];
	FAUSTFLOAT fHslider7;
	float fRec308[2];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("filename", "plugin.dsp");
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
		m->declare("name", "plugin");
		m->declare("yc20.dsp/author", "Sampo Savolainen");
		m->declare("yc20.dsp/copyright", "(c)Sampo Savolainen 2009");
		m->declare("yc20.dsp/license", "GPLv3");
		m->declare("yc20.dsp/name", "Foo YC-20 simulation");
	}

	virtual int getNumInputs() {
		return 0;
	}
	virtual int getNumOutputs() {
		return 2;
	}
	virtual int getInputRate(int channel) {
		int rate;
		switch ((channel)) {
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	virtual int getOutputRate(int channel) {
		int rate;
		switch ((channel)) {
			case 0: {
				rate = 1;
				break;
			}
			case 1: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	
	static void classInit(int sample_rate) {
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(192000.0f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = (1.0f / fConst0);
		fConst2 = (fConst1 + 0.00737454556f);
		fConst3 = (0.00737454556f / fConst2);
		fConst4 = (4545.45459f / fConst0);
		fConst5 = (4186.00928f / fConst0);
		fConst6 = (4434.92188f / fConst0);
		fConst7 = (4698.63623f / fConst0);
		fConst8 = (4978.03174f / fConst0);
		fConst9 = (5555.55566f / fConst0);
		fConst10 = (5274.04102f / fConst0);
		fConst11 = (5587.65186f / fConst0);
		fConst12 = (5919.91064f / fConst0);
		fConst13 = (6271.92676f / fConst0);
		fConst14 = (8333.33301f / fConst0);
		fConst15 = (6644.875f / fConst0);
		fConst16 = (7040.0f / fConst0);
		fConst17 = (7458.62012f / fConst0);
		fConst18 = (7902.13281f / fConst0);
		fConst19 = (10000.0f / fConst0);
		fConst20 = (12195.1221f / fConst0);
		fConst21 = (17857.1426f / fConst0);
		fConst22 = (21276.5957f / fConst0);
		fConst23 = (25641.0254f / fConst0);
		fConst24 = (37037.0352f / fConst0);
		fConst25 = (1.0f / fConst2);
		fConst26 = (9.99999975e-05f / (fConst1 + 9.99999975e-05f));
		fConst27 = (2564.10254f / fConst0);
		fConst28 = (3703.70361f / fConst0);
		fConst29 = (2127.65967f / fConst0);
		fConst30 = (0.00359645323f / (fConst1 + 0.00359645323f));
		fConst31 = (1470.58826f / fConst0);
		fConst32 = (1785.71423f / fConst0);
		fConst33 = (1219.51221f / fConst0);
		fConst34 = (0.00223066402f / (fConst1 + 0.00223066402f));
		fConst35 = (833.333313f / fConst0);
		fConst36 = (1000.0f / fConst0);
		fConst37 = (0.00168498512f / (fConst1 + 0.00168498512f));
		fConst38 = (666.666687f / fConst0);
		fConst39 = (5.26500007e-05f / (fConst1 + 5.26500007e-05f));
		fConst40 = (0.000105300001f / (fConst1 + 0.000105300001f));
		fConst41 = (9.16499994e-05f / (fConst1 + 9.16499994e-05f));
		fConst42 = (0.000183299999f / (fConst1 + 0.000183299999f));
		fConst43 = (0.000195000001f / (fConst1 + 0.000195000001f));
		fConst44 = (0.000390000001f / (fConst1 + 0.000390000001f));
		fConst45 = (0.000429000007f / (fConst1 + 0.000429000007f));
		fConst46 = (0.000858000014f / (fConst1 + 0.000858000014f));
		fConst47 = (0.0275909584f * fConst0);
		fConst48 = (36.2437592f / fConst0);
		fConst49 = (1.0f - fConst48);
		iConst50 = int((0.00100000005f * std::max<float>(22050.0f, std::min<float>(192000.0f, fConst0))));
		fConst51 = (1.0f / float(iConst50));
		fConst52 = (3968.25391f / fConst0);
	}
	
	virtual void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(1.0f);
		fVslider0 = FAUSTFLOAT(0.5f);
		fHslider1 = FAUSTFLOAT(0.0f);
		fHslider2 = FAUSTFLOAT(0.0f);
		fHslider3 = FAUSTFLOAT(0.0f);
		fHslider4 = FAUSTFLOAT(0.0f);
		fHslider5 = FAUSTFLOAT(0.0f);
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
		fVslider1 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(1.0f);
		fVslider3 = FAUSTFLOAT(0.5f);
		fVslider4 = FAUSTFLOAT(1.0f);
		fVslider5 = FAUSTFLOAT(1.0f);
		fVslider6 = FAUSTFLOAT(0.5f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fVslider8 = FAUSTFLOAT(1.0f);
		fVslider9 = FAUSTFLOAT(1.0f);
		fVslider10 = FAUSTFLOAT(1.0f);
		fVslider11 = FAUSTFLOAT(1.0f);
		fHslider6 = FAUSTFLOAT(1.0f);
		fVslider12 = FAUSTFLOAT(1.0f);
		fVslider13 = FAUSTFLOAT(1.0f);
		fVslider14 = FAUSTFLOAT(1.0f);
		fHslider7 = FAUSTFLOAT(0.5f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec5[l0] = 0.0f;
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec4[l1] = 0.0f;
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			iRec6[l2] = 0;
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fVec0[l3] = 0.0f;
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			iRec3[l4] = 0;
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fVec1[l5] = 0.0f;
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			iRec2[l6] = 0;
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fVec2[l7] = 0.0f;
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec1[l8] = 0.0f;
		}
		for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			fRec0[l9] = 0.0f;
		}
		for (int l10 = 0; (l10 < 4); l10 = (l10 + 1)) {
			fVec3[l10] = 0.0f;
		}
		for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			fRec11[l11] = 0.0f;
		}
		for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			iRec12[l12] = 0;
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			fVec4[l13] = 0.0f;
		}
		for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			iRec10[l14] = 0;
		}
		for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			fVec5[l15] = 0.0f;
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			iRec9[l16] = 0;
		}
		for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			fVec6[l17] = 0.0f;
		}
		for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			fRec8[l18] = 0.0f;
		}
		for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			fRec7[l19] = 0.0f;
		}
		for (int l20 = 0; (l20 < 4); l20 = (l20 + 1)) {
			fVec7[l20] = 0.0f;
		}
		for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			fRec17[l21] = 0.0f;
		}
		for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			iRec18[l22] = 0;
		}
		for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			fVec8[l23] = 0.0f;
		}
		for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			iRec16[l24] = 0;
		}
		for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			fVec9[l25] = 0.0f;
		}
		for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			iRec15[l26] = 0;
		}
		for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			fVec10[l27] = 0.0f;
		}
		for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			fRec14[l28] = 0.0f;
		}
		for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			fRec13[l29] = 0.0f;
		}
		for (int l30 = 0; (l30 < 4); l30 = (l30 + 1)) {
			fVec11[l30] = 0.0f;
		}
		for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			fRec23[l31] = 0.0f;
		}
		for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			iRec24[l32] = 0;
		}
		for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			fVec12[l33] = 0.0f;
		}
		for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			iRec22[l34] = 0;
		}
		for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			fVec13[l35] = 0.0f;
		}
		for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			iRec21[l36] = 0;
		}
		for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			fVec14[l37] = 0.0f;
		}
		for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			fRec20[l38] = 0.0f;
		}
		for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			fRec19[l39] = 0.0f;
		}
		for (int l40 = 0; (l40 < 4); l40 = (l40 + 1)) {
			fVec15[l40] = 0.0f;
		}
		for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			fRec29[l41] = 0.0f;
		}
		for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			iRec30[l42] = 0;
		}
		for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			fVec16[l43] = 0.0f;
		}
		for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			iRec28[l44] = 0;
		}
		for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			fVec17[l45] = 0.0f;
		}
		for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			iRec27[l46] = 0;
		}
		for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			fVec18[l47] = 0.0f;
		}
		for (int l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			fRec26[l48] = 0.0f;
		}
		for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			fRec25[l49] = 0.0f;
		}
		for (int l50 = 0; (l50 < 4); l50 = (l50 + 1)) {
			fVec19[l50] = 0.0f;
		}
		for (int l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			fRec35[l51] = 0.0f;
		}
		for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			iRec36[l52] = 0;
		}
		for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			fVec20[l53] = 0.0f;
		}
		for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			iRec34[l54] = 0;
		}
		for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) {
			fVec21[l55] = 0.0f;
		}
		for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) {
			iRec33[l56] = 0;
		}
		for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			fVec22[l57] = 0.0f;
		}
		for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			fRec32[l58] = 0.0f;
		}
		for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			fRec31[l59] = 0.0f;
		}
		for (int l60 = 0; (l60 < 4); l60 = (l60 + 1)) {
			fVec23[l60] = 0.0f;
		}
		for (int l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			fRec41[l61] = 0.0f;
		}
		for (int l62 = 0; (l62 < 2); l62 = (l62 + 1)) {
			iRec42[l62] = 0;
		}
		for (int l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			fVec24[l63] = 0.0f;
		}
		for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			iRec40[l64] = 0;
		}
		for (int l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			fVec25[l65] = 0.0f;
		}
		for (int l66 = 0; (l66 < 2); l66 = (l66 + 1)) {
			iRec39[l66] = 0;
		}
		for (int l67 = 0; (l67 < 2); l67 = (l67 + 1)) {
			fVec26[l67] = 0.0f;
		}
		for (int l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			fRec38[l68] = 0.0f;
		}
		for (int l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			fRec37[l69] = 0.0f;
		}
		for (int l70 = 0; (l70 < 4); l70 = (l70 + 1)) {
			fVec27[l70] = 0.0f;
		}
		for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			fRec47[l71] = 0.0f;
		}
		for (int l72 = 0; (l72 < 2); l72 = (l72 + 1)) {
			iRec48[l72] = 0;
		}
		for (int l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			fVec28[l73] = 0.0f;
		}
		for (int l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			iRec46[l74] = 0;
		}
		for (int l75 = 0; (l75 < 2); l75 = (l75 + 1)) {
			fVec29[l75] = 0.0f;
		}
		for (int l76 = 0; (l76 < 2); l76 = (l76 + 1)) {
			iRec45[l76] = 0;
		}
		for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			fVec30[l77] = 0.0f;
		}
		for (int l78 = 0; (l78 < 2); l78 = (l78 + 1)) {
			fRec44[l78] = 0.0f;
		}
		for (int l79 = 0; (l79 < 2); l79 = (l79 + 1)) {
			fRec43[l79] = 0.0f;
		}
		for (int l80 = 0; (l80 < 4); l80 = (l80 + 1)) {
			fVec31[l80] = 0.0f;
		}
		for (int l81 = 0; (l81 < 2); l81 = (l81 + 1)) {
			fRec53[l81] = 0.0f;
		}
		for (int l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			iRec54[l82] = 0;
		}
		for (int l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			fVec32[l83] = 0.0f;
		}
		for (int l84 = 0; (l84 < 2); l84 = (l84 + 1)) {
			iRec52[l84] = 0;
		}
		for (int l85 = 0; (l85 < 2); l85 = (l85 + 1)) {
			fVec33[l85] = 0.0f;
		}
		for (int l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			iRec51[l86] = 0;
		}
		for (int l87 = 0; (l87 < 2); l87 = (l87 + 1)) {
			fVec34[l87] = 0.0f;
		}
		for (int l88 = 0; (l88 < 2); l88 = (l88 + 1)) {
			fRec50[l88] = 0.0f;
		}
		for (int l89 = 0; (l89 < 2); l89 = (l89 + 1)) {
			fRec49[l89] = 0.0f;
		}
		for (int l90 = 0; (l90 < 4); l90 = (l90 + 1)) {
			fVec35[l90] = 0.0f;
		}
		for (int l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			fRec59[l91] = 0.0f;
		}
		for (int l92 = 0; (l92 < 2); l92 = (l92 + 1)) {
			iRec60[l92] = 0;
		}
		for (int l93 = 0; (l93 < 2); l93 = (l93 + 1)) {
			fVec36[l93] = 0.0f;
		}
		for (int l94 = 0; (l94 < 2); l94 = (l94 + 1)) {
			iRec58[l94] = 0;
		}
		for (int l95 = 0; (l95 < 2); l95 = (l95 + 1)) {
			fVec37[l95] = 0.0f;
		}
		for (int l96 = 0; (l96 < 2); l96 = (l96 + 1)) {
			iRec57[l96] = 0;
		}
		for (int l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			fVec38[l97] = 0.0f;
		}
		for (int l98 = 0; (l98 < 2); l98 = (l98 + 1)) {
			fRec56[l98] = 0.0f;
		}
		for (int l99 = 0; (l99 < 2); l99 = (l99 + 1)) {
			fRec55[l99] = 0.0f;
		}
		for (int l100 = 0; (l100 < 4); l100 = (l100 + 1)) {
			fVec39[l100] = 0.0f;
		}
		for (int l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			fRec65[l101] = 0.0f;
		}
		for (int l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			iRec66[l102] = 0;
		}
		for (int l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			fVec40[l103] = 0.0f;
		}
		for (int l104 = 0; (l104 < 2); l104 = (l104 + 1)) {
			iRec64[l104] = 0;
		}
		for (int l105 = 0; (l105 < 2); l105 = (l105 + 1)) {
			fVec41[l105] = 0.0f;
		}
		for (int l106 = 0; (l106 < 2); l106 = (l106 + 1)) {
			iRec63[l106] = 0;
		}
		for (int l107 = 0; (l107 < 2); l107 = (l107 + 1)) {
			fVec42[l107] = 0.0f;
		}
		for (int l108 = 0; (l108 < 2); l108 = (l108 + 1)) {
			fRec62[l108] = 0.0f;
		}
		for (int l109 = 0; (l109 < 2); l109 = (l109 + 1)) {
			fRec61[l109] = 0.0f;
		}
		for (int l110 = 0; (l110 < 4); l110 = (l110 + 1)) {
			fVec43[l110] = 0.0f;
		}
		for (int l111 = 0; (l111 < 2); l111 = (l111 + 1)) {
			fRec71[l111] = 0.0f;
		}
		for (int l112 = 0; (l112 < 2); l112 = (l112 + 1)) {
			iRec72[l112] = 0;
		}
		for (int l113 = 0; (l113 < 2); l113 = (l113 + 1)) {
			fVec44[l113] = 0.0f;
		}
		for (int l114 = 0; (l114 < 2); l114 = (l114 + 1)) {
			iRec70[l114] = 0;
		}
		for (int l115 = 0; (l115 < 2); l115 = (l115 + 1)) {
			fVec45[l115] = 0.0f;
		}
		for (int l116 = 0; (l116 < 2); l116 = (l116 + 1)) {
			iRec69[l116] = 0;
		}
		for (int l117 = 0; (l117 < 2); l117 = (l117 + 1)) {
			fVec46[l117] = 0.0f;
		}
		for (int l118 = 0; (l118 < 2); l118 = (l118 + 1)) {
			fRec68[l118] = 0.0f;
		}
		for (int l119 = 0; (l119 < 2); l119 = (l119 + 1)) {
			fRec67[l119] = 0.0f;
		}
		for (int l120 = 0; (l120 < 4); l120 = (l120 + 1)) {
			fVec47[l120] = 0.0f;
		}
		for (int l121 = 0; (l121 < 2); l121 = (l121 + 1)) {
			fRec74[l121] = 0.0f;
		}
		for (int l122 = 0; (l122 < 2); l122 = (l122 + 1)) {
			fRec73[l122] = 0.0f;
		}
		for (int l123 = 0; (l123 < 4); l123 = (l123 + 1)) {
			fVec48[l123] = 0.0f;
		}
		for (int l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			fRec76[l124] = 0.0f;
		}
		for (int l125 = 0; (l125 < 2); l125 = (l125 + 1)) {
			fRec75[l125] = 0.0f;
		}
		for (int l126 = 0; (l126 < 4); l126 = (l126 + 1)) {
			fVec49[l126] = 0.0f;
		}
		for (int l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			fRec78[l127] = 0.0f;
		}
		for (int l128 = 0; (l128 < 2); l128 = (l128 + 1)) {
			fRec77[l128] = 0.0f;
		}
		for (int l129 = 0; (l129 < 4); l129 = (l129 + 1)) {
			fVec50[l129] = 0.0f;
		}
		for (int l130 = 0; (l130 < 2); l130 = (l130 + 1)) {
			fRec80[l130] = 0.0f;
		}
		for (int l131 = 0; (l131 < 2); l131 = (l131 + 1)) {
			fRec79[l131] = 0.0f;
		}
		for (int l132 = 0; (l132 < 4); l132 = (l132 + 1)) {
			fVec51[l132] = 0.0f;
		}
		for (int l133 = 0; (l133 < 2); l133 = (l133 + 1)) {
			fRec82[l133] = 0.0f;
		}
		for (int l134 = 0; (l134 < 2); l134 = (l134 + 1)) {
			fRec81[l134] = 0.0f;
		}
		for (int l135 = 0; (l135 < 4); l135 = (l135 + 1)) {
			fVec52[l135] = 0.0f;
		}
		for (int l136 = 0; (l136 < 2); l136 = (l136 + 1)) {
			fRec84[l136] = 0.0f;
		}
		for (int l137 = 0; (l137 < 2); l137 = (l137 + 1)) {
			fRec83[l137] = 0.0f;
		}
		for (int l138 = 0; (l138 < 4); l138 = (l138 + 1)) {
			fVec53[l138] = 0.0f;
		}
		for (int l139 = 0; (l139 < 2); l139 = (l139 + 1)) {
			fRec86[l139] = 0.0f;
		}
		for (int l140 = 0; (l140 < 2); l140 = (l140 + 1)) {
			fRec85[l140] = 0.0f;
		}
		for (int l141 = 0; (l141 < 4); l141 = (l141 + 1)) {
			fVec54[l141] = 0.0f;
		}
		for (int l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			fRec88[l142] = 0.0f;
		}
		for (int l143 = 0; (l143 < 2); l143 = (l143 + 1)) {
			fRec87[l143] = 0.0f;
		}
		for (int l144 = 0; (l144 < 4); l144 = (l144 + 1)) {
			fVec55[l144] = 0.0f;
		}
		for (int l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			fRec90[l145] = 0.0f;
		}
		for (int l146 = 0; (l146 < 2); l146 = (l146 + 1)) {
			fRec89[l146] = 0.0f;
		}
		for (int l147 = 0; (l147 < 4); l147 = (l147 + 1)) {
			fVec56[l147] = 0.0f;
		}
		for (int l148 = 0; (l148 < 2); l148 = (l148 + 1)) {
			fRec92[l148] = 0.0f;
		}
		for (int l149 = 0; (l149 < 2); l149 = (l149 + 1)) {
			fRec91[l149] = 0.0f;
		}
		for (int l150 = 0; (l150 < 4); l150 = (l150 + 1)) {
			fVec57[l150] = 0.0f;
		}
		for (int l151 = 0; (l151 < 2); l151 = (l151 + 1)) {
			fRec94[l151] = 0.0f;
		}
		for (int l152 = 0; (l152 < 2); l152 = (l152 + 1)) {
			fRec93[l152] = 0.0f;
		}
		for (int l153 = 0; (l153 < 4); l153 = (l153 + 1)) {
			fVec58[l153] = 0.0f;
		}
		for (int l154 = 0; (l154 < 2); l154 = (l154 + 1)) {
			fRec96[l154] = 0.0f;
		}
		for (int l155 = 0; (l155 < 2); l155 = (l155 + 1)) {
			fRec95[l155] = 0.0f;
		}
		for (int l156 = 0; (l156 < 4); l156 = (l156 + 1)) {
			fVec59[l156] = 0.0f;
		}
		for (int l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			fRec98[l157] = 0.0f;
		}
		for (int l158 = 0; (l158 < 2); l158 = (l158 + 1)) {
			fRec97[l158] = 0.0f;
		}
		for (int l159 = 0; (l159 < 4); l159 = (l159 + 1)) {
			fVec60[l159] = 0.0f;
		}
		for (int l160 = 0; (l160 < 2); l160 = (l160 + 1)) {
			fRec100[l160] = 0.0f;
		}
		for (int l161 = 0; (l161 < 2); l161 = (l161 + 1)) {
			fRec99[l161] = 0.0f;
		}
		for (int l162 = 0; (l162 < 4); l162 = (l162 + 1)) {
			fVec61[l162] = 0.0f;
		}
		for (int l163 = 0; (l163 < 2); l163 = (l163 + 1)) {
			fRec102[l163] = 0.0f;
		}
		for (int l164 = 0; (l164 < 2); l164 = (l164 + 1)) {
			fRec101[l164] = 0.0f;
		}
		for (int l165 = 0; (l165 < 4); l165 = (l165 + 1)) {
			fVec62[l165] = 0.0f;
		}
		for (int l166 = 0; (l166 < 2); l166 = (l166 + 1)) {
			fRec104[l166] = 0.0f;
		}
		for (int l167 = 0; (l167 < 2); l167 = (l167 + 1)) {
			fRec103[l167] = 0.0f;
		}
		for (int l168 = 0; (l168 < 4); l168 = (l168 + 1)) {
			fVec63[l168] = 0.0f;
		}
		for (int l169 = 0; (l169 < 2); l169 = (l169 + 1)) {
			fRec106[l169] = 0.0f;
		}
		for (int l170 = 0; (l170 < 2); l170 = (l170 + 1)) {
			fRec105[l170] = 0.0f;
		}
		for (int l171 = 0; (l171 < 4); l171 = (l171 + 1)) {
			fVec64[l171] = 0.0f;
		}
		for (int l172 = 0; (l172 < 2); l172 = (l172 + 1)) {
			fRec108[l172] = 0.0f;
		}
		for (int l173 = 0; (l173 < 2); l173 = (l173 + 1)) {
			fRec107[l173] = 0.0f;
		}
		for (int l174 = 0; (l174 < 4); l174 = (l174 + 1)) {
			fVec65[l174] = 0.0f;
		}
		for (int l175 = 0; (l175 < 2); l175 = (l175 + 1)) {
			fRec110[l175] = 0.0f;
		}
		for (int l176 = 0; (l176 < 2); l176 = (l176 + 1)) {
			fRec109[l176] = 0.0f;
		}
		for (int l177 = 0; (l177 < 4); l177 = (l177 + 1)) {
			fVec66[l177] = 0.0f;
		}
		for (int l178 = 0; (l178 < 2); l178 = (l178 + 1)) {
			fRec112[l178] = 0.0f;
		}
		for (int l179 = 0; (l179 < 2); l179 = (l179 + 1)) {
			fRec111[l179] = 0.0f;
		}
		for (int l180 = 0; (l180 < 4); l180 = (l180 + 1)) {
			fVec67[l180] = 0.0f;
		}
		for (int l181 = 0; (l181 < 2); l181 = (l181 + 1)) {
			fRec114[l181] = 0.0f;
		}
		for (int l182 = 0; (l182 < 2); l182 = (l182 + 1)) {
			fRec113[l182] = 0.0f;
		}
		for (int l183 = 0; (l183 < 4); l183 = (l183 + 1)) {
			fVec68[l183] = 0.0f;
		}
		for (int l184 = 0; (l184 < 2); l184 = (l184 + 1)) {
			fRec116[l184] = 0.0f;
		}
		for (int l185 = 0; (l185 < 2); l185 = (l185 + 1)) {
			fRec115[l185] = 0.0f;
		}
		for (int l186 = 0; (l186 < 4); l186 = (l186 + 1)) {
			fVec69[l186] = 0.0f;
		}
		for (int l187 = 0; (l187 < 2); l187 = (l187 + 1)) {
			fRec118[l187] = 0.0f;
		}
		for (int l188 = 0; (l188 < 2); l188 = (l188 + 1)) {
			fRec117[l188] = 0.0f;
		}
		for (int l189 = 0; (l189 < 4); l189 = (l189 + 1)) {
			fVec70[l189] = 0.0f;
		}
		for (int l190 = 0; (l190 < 2); l190 = (l190 + 1)) {
			fRec120[l190] = 0.0f;
		}
		for (int l191 = 0; (l191 < 2); l191 = (l191 + 1)) {
			fRec119[l191] = 0.0f;
		}
		for (int l192 = 0; (l192 < 4); l192 = (l192 + 1)) {
			fVec71[l192] = 0.0f;
		}
		for (int l193 = 0; (l193 < 2); l193 = (l193 + 1)) {
			fVec72[l193] = 0.0f;
		}
		for (int l194 = 0; (l194 < 2); l194 = (l194 + 1)) {
			fRec121[l194] = 0.0f;
		}
		for (int l195 = 0; (l195 < 4); l195 = (l195 + 1)) {
			fVec73[l195] = 0.0f;
		}
		for (int l196 = 0; (l196 < 2); l196 = (l196 + 1)) {
			fVec74[l196] = 0.0f;
		}
		for (int l197 = 0; (l197 < 2); l197 = (l197 + 1)) {
			fRec122[l197] = 0.0f;
		}
		for (int l198 = 0; (l198 < 4); l198 = (l198 + 1)) {
			fVec75[l198] = 0.0f;
		}
		for (int l199 = 0; (l199 < 2); l199 = (l199 + 1)) {
			fVec76[l199] = 0.0f;
		}
		for (int l200 = 0; (l200 < 2); l200 = (l200 + 1)) {
			fRec123[l200] = 0.0f;
		}
		for (int l201 = 0; (l201 < 4); l201 = (l201 + 1)) {
			fVec77[l201] = 0.0f;
		}
		for (int l202 = 0; (l202 < 2); l202 = (l202 + 1)) {
			fVec78[l202] = 0.0f;
		}
		for (int l203 = 0; (l203 < 2); l203 = (l203 + 1)) {
			fRec124[l203] = 0.0f;
		}
		for (int l204 = 0; (l204 < 4); l204 = (l204 + 1)) {
			fVec79[l204] = 0.0f;
		}
		for (int l205 = 0; (l205 < 2); l205 = (l205 + 1)) {
			fVec80[l205] = 0.0f;
		}
		for (int l206 = 0; (l206 < 2); l206 = (l206 + 1)) {
			fRec125[l206] = 0.0f;
		}
		for (int l207 = 0; (l207 < 4); l207 = (l207 + 1)) {
			fVec81[l207] = 0.0f;
		}
		for (int l208 = 0; (l208 < 2); l208 = (l208 + 1)) {
			fVec82[l208] = 0.0f;
		}
		for (int l209 = 0; (l209 < 2); l209 = (l209 + 1)) {
			fRec126[l209] = 0.0f;
		}
		for (int l210 = 0; (l210 < 4); l210 = (l210 + 1)) {
			fVec83[l210] = 0.0f;
		}
		for (int l211 = 0; (l211 < 2); l211 = (l211 + 1)) {
			fVec84[l211] = 0.0f;
		}
		for (int l212 = 0; (l212 < 2); l212 = (l212 + 1)) {
			fRec127[l212] = 0.0f;
		}
		for (int l213 = 0; (l213 < 4); l213 = (l213 + 1)) {
			fVec85[l213] = 0.0f;
		}
		for (int l214 = 0; (l214 < 2); l214 = (l214 + 1)) {
			fVec86[l214] = 0.0f;
		}
		for (int l215 = 0; (l215 < 2); l215 = (l215 + 1)) {
			fRec128[l215] = 0.0f;
		}
		for (int l216 = 0; (l216 < 4); l216 = (l216 + 1)) {
			fVec87[l216] = 0.0f;
		}
		for (int l217 = 0; (l217 < 2); l217 = (l217 + 1)) {
			fVec88[l217] = 0.0f;
		}
		for (int l218 = 0; (l218 < 2); l218 = (l218 + 1)) {
			fRec129[l218] = 0.0f;
		}
		for (int l219 = 0; (l219 < 4); l219 = (l219 + 1)) {
			fVec89[l219] = 0.0f;
		}
		for (int l220 = 0; (l220 < 2); l220 = (l220 + 1)) {
			fVec90[l220] = 0.0f;
		}
		for (int l221 = 0; (l221 < 2); l221 = (l221 + 1)) {
			fRec130[l221] = 0.0f;
		}
		for (int l222 = 0; (l222 < 4); l222 = (l222 + 1)) {
			fVec91[l222] = 0.0f;
		}
		for (int l223 = 0; (l223 < 2); l223 = (l223 + 1)) {
			fVec92[l223] = 0.0f;
		}
		for (int l224 = 0; (l224 < 2); l224 = (l224 + 1)) {
			fRec131[l224] = 0.0f;
		}
		for (int l225 = 0; (l225 < 4); l225 = (l225 + 1)) {
			fVec93[l225] = 0.0f;
		}
		for (int l226 = 0; (l226 < 2); l226 = (l226 + 1)) {
			fVec94[l226] = 0.0f;
		}
		for (int l227 = 0; (l227 < 2); l227 = (l227 + 1)) {
			fRec132[l227] = 0.0f;
		}
		for (int l228 = 0; (l228 < 4); l228 = (l228 + 1)) {
			fVec95[l228] = 0.0f;
		}
		for (int l229 = 0; (l229 < 4); l229 = (l229 + 1)) {
			fVec96[l229] = 0.0f;
		}
		for (int l230 = 0; (l230 < 4); l230 = (l230 + 1)) {
			fVec97[l230] = 0.0f;
		}
		for (int l231 = 0; (l231 < 4); l231 = (l231 + 1)) {
			fVec98[l231] = 0.0f;
		}
		for (int l232 = 0; (l232 < 4); l232 = (l232 + 1)) {
			fVec99[l232] = 0.0f;
		}
		for (int l233 = 0; (l233 < 4); l233 = (l233 + 1)) {
			fVec100[l233] = 0.0f;
		}
		for (int l234 = 0; (l234 < 4); l234 = (l234 + 1)) {
			fVec101[l234] = 0.0f;
		}
		for (int l235 = 0; (l235 < 4); l235 = (l235 + 1)) {
			fVec102[l235] = 0.0f;
		}
		for (int l236 = 0; (l236 < 4); l236 = (l236 + 1)) {
			fVec103[l236] = 0.0f;
		}
		for (int l237 = 0; (l237 < 4); l237 = (l237 + 1)) {
			fVec104[l237] = 0.0f;
		}
		for (int l238 = 0; (l238 < 4); l238 = (l238 + 1)) {
			fVec105[l238] = 0.0f;
		}
		for (int l239 = 0; (l239 < 4); l239 = (l239 + 1)) {
			fVec106[l239] = 0.0f;
		}
		for (int l240 = 0; (l240 < 4); l240 = (l240 + 1)) {
			fVec107[l240] = 0.0f;
		}
		for (int l241 = 0; (l241 < 4); l241 = (l241 + 1)) {
			fVec108[l241] = 0.0f;
		}
		for (int l242 = 0; (l242 < 2); l242 = (l242 + 1)) {
			fVec109[l242] = 0.0f;
		}
		for (int l243 = 0; (l243 < 2); l243 = (l243 + 1)) {
			fRec133[l243] = 0.0f;
		}
		for (int l244 = 0; (l244 < 2); l244 = (l244 + 1)) {
			iRec136[l244] = 0;
		}
		for (int l245 = 0; (l245 < 2); l245 = (l245 + 1)) {
			fVec110[l245] = 0.0f;
		}
		for (int l246 = 0; (l246 < 2); l246 = (l246 + 1)) {
			fRec135[l246] = 0.0f;
		}
		for (int l247 = 0; (l247 < 2); l247 = (l247 + 1)) {
			fRec134[l247] = 0.0f;
		}
		for (int l248 = 0; (l248 < 2); l248 = (l248 + 1)) {
			iRec139[l248] = 0;
		}
		for (int l249 = 0; (l249 < 2); l249 = (l249 + 1)) {
			fVec111[l249] = 0.0f;
		}
		for (int l250 = 0; (l250 < 2); l250 = (l250 + 1)) {
			fRec138[l250] = 0.0f;
		}
		for (int l251 = 0; (l251 < 2); l251 = (l251 + 1)) {
			fRec137[l251] = 0.0f;
		}
		for (int l252 = 0; (l252 < 2); l252 = (l252 + 1)) {
			iRec142[l252] = 0;
		}
		for (int l253 = 0; (l253 < 2); l253 = (l253 + 1)) {
			fVec112[l253] = 0.0f;
		}
		for (int l254 = 0; (l254 < 2); l254 = (l254 + 1)) {
			fRec141[l254] = 0.0f;
		}
		for (int l255 = 0; (l255 < 2); l255 = (l255 + 1)) {
			fRec140[l255] = 0.0f;
		}
		for (int l256 = 0; (l256 < 2); l256 = (l256 + 1)) {
			iRec145[l256] = 0;
		}
		for (int l257 = 0; (l257 < 2); l257 = (l257 + 1)) {
			fVec113[l257] = 0.0f;
		}
		for (int l258 = 0; (l258 < 2); l258 = (l258 + 1)) {
			fRec144[l258] = 0.0f;
		}
		for (int l259 = 0; (l259 < 2); l259 = (l259 + 1)) {
			fRec143[l259] = 0.0f;
		}
		for (int l260 = 0; (l260 < 2); l260 = (l260 + 1)) {
			iRec148[l260] = 0;
		}
		for (int l261 = 0; (l261 < 2); l261 = (l261 + 1)) {
			fVec114[l261] = 0.0f;
		}
		for (int l262 = 0; (l262 < 2); l262 = (l262 + 1)) {
			fRec147[l262] = 0.0f;
		}
		for (int l263 = 0; (l263 < 2); l263 = (l263 + 1)) {
			fRec146[l263] = 0.0f;
		}
		for (int l264 = 0; (l264 < 2); l264 = (l264 + 1)) {
			iRec151[l264] = 0;
		}
		for (int l265 = 0; (l265 < 2); l265 = (l265 + 1)) {
			fVec115[l265] = 0.0f;
		}
		for (int l266 = 0; (l266 < 2); l266 = (l266 + 1)) {
			fRec150[l266] = 0.0f;
		}
		for (int l267 = 0; (l267 < 2); l267 = (l267 + 1)) {
			fRec149[l267] = 0.0f;
		}
		for (int l268 = 0; (l268 < 2); l268 = (l268 + 1)) {
			iRec154[l268] = 0;
		}
		for (int l269 = 0; (l269 < 2); l269 = (l269 + 1)) {
			fVec116[l269] = 0.0f;
		}
		for (int l270 = 0; (l270 < 2); l270 = (l270 + 1)) {
			fRec153[l270] = 0.0f;
		}
		for (int l271 = 0; (l271 < 2); l271 = (l271 + 1)) {
			fRec152[l271] = 0.0f;
		}
		for (int l272 = 0; (l272 < 2); l272 = (l272 + 1)) {
			iRec157[l272] = 0;
		}
		for (int l273 = 0; (l273 < 2); l273 = (l273 + 1)) {
			fVec117[l273] = 0.0f;
		}
		for (int l274 = 0; (l274 < 2); l274 = (l274 + 1)) {
			fRec156[l274] = 0.0f;
		}
		for (int l275 = 0; (l275 < 2); l275 = (l275 + 1)) {
			fRec155[l275] = 0.0f;
		}
		for (int l276 = 0; (l276 < 2); l276 = (l276 + 1)) {
			fVec118[l276] = 0.0f;
		}
		for (int l277 = 0; (l277 < 2); l277 = (l277 + 1)) {
			fRec158[l277] = 0.0f;
		}
		for (int l278 = 0; (l278 < 2); l278 = (l278 + 1)) {
			iRec161[l278] = 0;
		}
		for (int l279 = 0; (l279 < 2); l279 = (l279 + 1)) {
			fVec119[l279] = 0.0f;
		}
		for (int l280 = 0; (l280 < 2); l280 = (l280 + 1)) {
			fRec160[l280] = 0.0f;
		}
		for (int l281 = 0; (l281 < 2); l281 = (l281 + 1)) {
			fRec159[l281] = 0.0f;
		}
		for (int l282 = 0; (l282 < 2); l282 = (l282 + 1)) {
			iRec164[l282] = 0;
		}
		for (int l283 = 0; (l283 < 2); l283 = (l283 + 1)) {
			fVec120[l283] = 0.0f;
		}
		for (int l284 = 0; (l284 < 2); l284 = (l284 + 1)) {
			fRec163[l284] = 0.0f;
		}
		for (int l285 = 0; (l285 < 2); l285 = (l285 + 1)) {
			fRec162[l285] = 0.0f;
		}
		for (int l286 = 0; (l286 < 2); l286 = (l286 + 1)) {
			iRec167[l286] = 0;
		}
		for (int l287 = 0; (l287 < 2); l287 = (l287 + 1)) {
			fVec121[l287] = 0.0f;
		}
		for (int l288 = 0; (l288 < 2); l288 = (l288 + 1)) {
			fRec166[l288] = 0.0f;
		}
		for (int l289 = 0; (l289 < 2); l289 = (l289 + 1)) {
			fRec165[l289] = 0.0f;
		}
		for (int l290 = 0; (l290 < 2); l290 = (l290 + 1)) {
			iRec170[l290] = 0;
		}
		for (int l291 = 0; (l291 < 2); l291 = (l291 + 1)) {
			fVec122[l291] = 0.0f;
		}
		for (int l292 = 0; (l292 < 2); l292 = (l292 + 1)) {
			fRec169[l292] = 0.0f;
		}
		for (int l293 = 0; (l293 < 2); l293 = (l293 + 1)) {
			fRec168[l293] = 0.0f;
		}
		for (int l294 = 0; (l294 < 2); l294 = (l294 + 1)) {
			fVec123[l294] = 0.0f;
		}
		for (int l295 = 0; (l295 < 2); l295 = (l295 + 1)) {
			fRec171[l295] = 0.0f;
		}
		for (int l296 = 0; (l296 < 2); l296 = (l296 + 1)) {
			iRec174[l296] = 0;
		}
		for (int l297 = 0; (l297 < 2); l297 = (l297 + 1)) {
			fVec124[l297] = 0.0f;
		}
		for (int l298 = 0; (l298 < 2); l298 = (l298 + 1)) {
			fRec173[l298] = 0.0f;
		}
		for (int l299 = 0; (l299 < 2); l299 = (l299 + 1)) {
			fRec172[l299] = 0.0f;
		}
		for (int l300 = 0; (l300 < 2); l300 = (l300 + 1)) {
			iRec177[l300] = 0;
		}
		for (int l301 = 0; (l301 < 2); l301 = (l301 + 1)) {
			fVec125[l301] = 0.0f;
		}
		for (int l302 = 0; (l302 < 2); l302 = (l302 + 1)) {
			fRec176[l302] = 0.0f;
		}
		for (int l303 = 0; (l303 < 2); l303 = (l303 + 1)) {
			fRec175[l303] = 0.0f;
		}
		for (int l304 = 0; (l304 < 2); l304 = (l304 + 1)) {
			iRec180[l304] = 0;
		}
		for (int l305 = 0; (l305 < 2); l305 = (l305 + 1)) {
			fVec126[l305] = 0.0f;
		}
		for (int l306 = 0; (l306 < 2); l306 = (l306 + 1)) {
			fRec179[l306] = 0.0f;
		}
		for (int l307 = 0; (l307 < 2); l307 = (l307 + 1)) {
			fRec178[l307] = 0.0f;
		}
		for (int l308 = 0; (l308 < 2); l308 = (l308 + 1)) {
			iRec183[l308] = 0;
		}
		for (int l309 = 0; (l309 < 2); l309 = (l309 + 1)) {
			fVec127[l309] = 0.0f;
		}
		for (int l310 = 0; (l310 < 2); l310 = (l310 + 1)) {
			fRec182[l310] = 0.0f;
		}
		for (int l311 = 0; (l311 < 2); l311 = (l311 + 1)) {
			fRec181[l311] = 0.0f;
		}
		for (int l312 = 0; (l312 < 2); l312 = (l312 + 1)) {
			iRec186[l312] = 0;
		}
		for (int l313 = 0; (l313 < 2); l313 = (l313 + 1)) {
			fVec128[l313] = 0.0f;
		}
		for (int l314 = 0; (l314 < 2); l314 = (l314 + 1)) {
			fRec185[l314] = 0.0f;
		}
		for (int l315 = 0; (l315 < 2); l315 = (l315 + 1)) {
			fRec184[l315] = 0.0f;
		}
		for (int l316 = 0; (l316 < 2); l316 = (l316 + 1)) {
			fVec129[l316] = 0.0f;
		}
		for (int l317 = 0; (l317 < 2); l317 = (l317 + 1)) {
			fRec187[l317] = 0.0f;
		}
		for (int l318 = 0; (l318 < 2); l318 = (l318 + 1)) {
			iRec190[l318] = 0;
		}
		for (int l319 = 0; (l319 < 2); l319 = (l319 + 1)) {
			fVec130[l319] = 0.0f;
		}
		for (int l320 = 0; (l320 < 2); l320 = (l320 + 1)) {
			fRec189[l320] = 0.0f;
		}
		for (int l321 = 0; (l321 < 2); l321 = (l321 + 1)) {
			fRec188[l321] = 0.0f;
		}
		for (int l322 = 0; (l322 < 2); l322 = (l322 + 1)) {
			iRec193[l322] = 0;
		}
		for (int l323 = 0; (l323 < 2); l323 = (l323 + 1)) {
			fVec131[l323] = 0.0f;
		}
		for (int l324 = 0; (l324 < 2); l324 = (l324 + 1)) {
			fRec192[l324] = 0.0f;
		}
		for (int l325 = 0; (l325 < 2); l325 = (l325 + 1)) {
			fRec191[l325] = 0.0f;
		}
		for (int l326 = 0; (l326 < 2); l326 = (l326 + 1)) {
			iRec196[l326] = 0;
		}
		for (int l327 = 0; (l327 < 2); l327 = (l327 + 1)) {
			fVec132[l327] = 0.0f;
		}
		for (int l328 = 0; (l328 < 2); l328 = (l328 + 1)) {
			fRec195[l328] = 0.0f;
		}
		for (int l329 = 0; (l329 < 2); l329 = (l329 + 1)) {
			fRec194[l329] = 0.0f;
		}
		for (int l330 = 0; (l330 < 2); l330 = (l330 + 1)) {
			iRec199[l330] = 0;
		}
		for (int l331 = 0; (l331 < 2); l331 = (l331 + 1)) {
			fVec133[l331] = 0.0f;
		}
		for (int l332 = 0; (l332 < 2); l332 = (l332 + 1)) {
			fRec198[l332] = 0.0f;
		}
		for (int l333 = 0; (l333 < 2); l333 = (l333 + 1)) {
			fRec197[l333] = 0.0f;
		}
		for (int l334 = 0; (l334 < 2); l334 = (l334 + 1)) {
			iRec202[l334] = 0;
		}
		for (int l335 = 0; (l335 < 2); l335 = (l335 + 1)) {
			fVec134[l335] = 0.0f;
		}
		for (int l336 = 0; (l336 < 2); l336 = (l336 + 1)) {
			fRec201[l336] = 0.0f;
		}
		for (int l337 = 0; (l337 < 2); l337 = (l337 + 1)) {
			fRec200[l337] = 0.0f;
		}
		for (int l338 = 0; (l338 < 2); l338 = (l338 + 1)) {
			iRec205[l338] = 0;
		}
		for (int l339 = 0; (l339 < 2); l339 = (l339 + 1)) {
			fVec135[l339] = 0.0f;
		}
		for (int l340 = 0; (l340 < 2); l340 = (l340 + 1)) {
			fRec204[l340] = 0.0f;
		}
		for (int l341 = 0; (l341 < 2); l341 = (l341 + 1)) {
			fRec203[l341] = 0.0f;
		}
		for (int l342 = 0; (l342 < 2); l342 = (l342 + 1)) {
			iRec208[l342] = 0;
		}
		for (int l343 = 0; (l343 < 2); l343 = (l343 + 1)) {
			fVec136[l343] = 0.0f;
		}
		for (int l344 = 0; (l344 < 2); l344 = (l344 + 1)) {
			fRec207[l344] = 0.0f;
		}
		for (int l345 = 0; (l345 < 2); l345 = (l345 + 1)) {
			fRec206[l345] = 0.0f;
		}
		for (int l346 = 0; (l346 < 2); l346 = (l346 + 1)) {
			fVec137[l346] = 0.0f;
		}
		for (int l347 = 0; (l347 < 2); l347 = (l347 + 1)) {
			fRec209[l347] = 0.0f;
		}
		for (int l348 = 0; (l348 < 2); l348 = (l348 + 1)) {
			iRec212[l348] = 0;
		}
		for (int l349 = 0; (l349 < 2); l349 = (l349 + 1)) {
			fVec138[l349] = 0.0f;
		}
		for (int l350 = 0; (l350 < 2); l350 = (l350 + 1)) {
			fRec211[l350] = 0.0f;
		}
		for (int l351 = 0; (l351 < 2); l351 = (l351 + 1)) {
			fRec210[l351] = 0.0f;
		}
		for (int l352 = 0; (l352 < 2); l352 = (l352 + 1)) {
			iRec215[l352] = 0;
		}
		for (int l353 = 0; (l353 < 2); l353 = (l353 + 1)) {
			fVec139[l353] = 0.0f;
		}
		for (int l354 = 0; (l354 < 2); l354 = (l354 + 1)) {
			fRec214[l354] = 0.0f;
		}
		for (int l355 = 0; (l355 < 2); l355 = (l355 + 1)) {
			fRec213[l355] = 0.0f;
		}
		for (int l356 = 0; (l356 < 2); l356 = (l356 + 1)) {
			iRec218[l356] = 0;
		}
		for (int l357 = 0; (l357 < 2); l357 = (l357 + 1)) {
			fVec140[l357] = 0.0f;
		}
		for (int l358 = 0; (l358 < 2); l358 = (l358 + 1)) {
			fRec217[l358] = 0.0f;
		}
		for (int l359 = 0; (l359 < 2); l359 = (l359 + 1)) {
			fRec216[l359] = 0.0f;
		}
		for (int l360 = 0; (l360 < 2); l360 = (l360 + 1)) {
			iRec221[l360] = 0;
		}
		for (int l361 = 0; (l361 < 2); l361 = (l361 + 1)) {
			fVec141[l361] = 0.0f;
		}
		for (int l362 = 0; (l362 < 2); l362 = (l362 + 1)) {
			fRec220[l362] = 0.0f;
		}
		for (int l363 = 0; (l363 < 2); l363 = (l363 + 1)) {
			fRec219[l363] = 0.0f;
		}
		for (int l364 = 0; (l364 < 2); l364 = (l364 + 1)) {
			iRec224[l364] = 0;
		}
		for (int l365 = 0; (l365 < 2); l365 = (l365 + 1)) {
			fVec142[l365] = 0.0f;
		}
		for (int l366 = 0; (l366 < 2); l366 = (l366 + 1)) {
			fRec223[l366] = 0.0f;
		}
		for (int l367 = 0; (l367 < 2); l367 = (l367 + 1)) {
			fRec222[l367] = 0.0f;
		}
		for (int l368 = 0; (l368 < 2); l368 = (l368 + 1)) {
			iRec227[l368] = 0;
		}
		for (int l369 = 0; (l369 < 2); l369 = (l369 + 1)) {
			fVec143[l369] = 0.0f;
		}
		for (int l370 = 0; (l370 < 2); l370 = (l370 + 1)) {
			fRec226[l370] = 0.0f;
		}
		for (int l371 = 0; (l371 < 2); l371 = (l371 + 1)) {
			fRec225[l371] = 0.0f;
		}
		for (int l372 = 0; (l372 < 2); l372 = (l372 + 1)) {
			iRec230[l372] = 0;
		}
		for (int l373 = 0; (l373 < 2); l373 = (l373 + 1)) {
			fVec144[l373] = 0.0f;
		}
		for (int l374 = 0; (l374 < 2); l374 = (l374 + 1)) {
			fRec229[l374] = 0.0f;
		}
		for (int l375 = 0; (l375 < 2); l375 = (l375 + 1)) {
			fRec228[l375] = 0.0f;
		}
		for (int l376 = 0; (l376 < 2); l376 = (l376 + 1)) {
			iRec233[l376] = 0;
		}
		for (int l377 = 0; (l377 < 2); l377 = (l377 + 1)) {
			fVec145[l377] = 0.0f;
		}
		for (int l378 = 0; (l378 < 2); l378 = (l378 + 1)) {
			fRec232[l378] = 0.0f;
		}
		for (int l379 = 0; (l379 < 2); l379 = (l379 + 1)) {
			fRec231[l379] = 0.0f;
		}
		for (int l380 = 0; (l380 < 2); l380 = (l380 + 1)) {
			iRec236[l380] = 0;
		}
		for (int l381 = 0; (l381 < 2); l381 = (l381 + 1)) {
			fVec146[l381] = 0.0f;
		}
		for (int l382 = 0; (l382 < 2); l382 = (l382 + 1)) {
			fRec235[l382] = 0.0f;
		}
		for (int l383 = 0; (l383 < 2); l383 = (l383 + 1)) {
			fRec234[l383] = 0.0f;
		}
		for (int l384 = 0; (l384 < 2); l384 = (l384 + 1)) {
			iRec239[l384] = 0;
		}
		for (int l385 = 0; (l385 < 2); l385 = (l385 + 1)) {
			fVec147[l385] = 0.0f;
		}
		for (int l386 = 0; (l386 < 2); l386 = (l386 + 1)) {
			fRec238[l386] = 0.0f;
		}
		for (int l387 = 0; (l387 < 2); l387 = (l387 + 1)) {
			fRec237[l387] = 0.0f;
		}
		for (int l388 = 0; (l388 < 2); l388 = (l388 + 1)) {
			iRec242[l388] = 0;
		}
		for (int l389 = 0; (l389 < 2); l389 = (l389 + 1)) {
			fVec148[l389] = 0.0f;
		}
		for (int l390 = 0; (l390 < 2); l390 = (l390 + 1)) {
			fRec241[l390] = 0.0f;
		}
		for (int l391 = 0; (l391 < 2); l391 = (l391 + 1)) {
			fRec240[l391] = 0.0f;
		}
		for (int l392 = 0; (l392 < 2); l392 = (l392 + 1)) {
			iRec245[l392] = 0;
		}
		for (int l393 = 0; (l393 < 2); l393 = (l393 + 1)) {
			fVec149[l393] = 0.0f;
		}
		for (int l394 = 0; (l394 < 2); l394 = (l394 + 1)) {
			fRec244[l394] = 0.0f;
		}
		for (int l395 = 0; (l395 < 2); l395 = (l395 + 1)) {
			fRec243[l395] = 0.0f;
		}
		for (int l396 = 0; (l396 < 2); l396 = (l396 + 1)) {
			fVec150[l396] = 0.0f;
		}
		for (int l397 = 0; (l397 < 2); l397 = (l397 + 1)) {
			fRec246[l397] = 0.0f;
		}
		for (int l398 = 0; (l398 < 2); l398 = (l398 + 1)) {
			iRec249[l398] = 0;
		}
		for (int l399 = 0; (l399 < 2); l399 = (l399 + 1)) {
			fRec248[l399] = 0.0f;
		}
		for (int l400 = 0; (l400 < 2); l400 = (l400 + 1)) {
			fRec247[l400] = 0.0f;
		}
		for (int l401 = 0; (l401 < 2); l401 = (l401 + 1)) {
			iRec252[l401] = 0;
		}
		for (int l402 = 0; (l402 < 2); l402 = (l402 + 1)) {
			fRec251[l402] = 0.0f;
		}
		for (int l403 = 0; (l403 < 2); l403 = (l403 + 1)) {
			fRec250[l403] = 0.0f;
		}
		for (int l404 = 0; (l404 < 2); l404 = (l404 + 1)) {
			iRec255[l404] = 0;
		}
		for (int l405 = 0; (l405 < 2); l405 = (l405 + 1)) {
			fRec254[l405] = 0.0f;
		}
		for (int l406 = 0; (l406 < 2); l406 = (l406 + 1)) {
			fRec253[l406] = 0.0f;
		}
		for (int l407 = 0; (l407 < 2); l407 = (l407 + 1)) {
			iRec258[l407] = 0;
		}
		for (int l408 = 0; (l408 < 2); l408 = (l408 + 1)) {
			fRec257[l408] = 0.0f;
		}
		for (int l409 = 0; (l409 < 2); l409 = (l409 + 1)) {
			fRec256[l409] = 0.0f;
		}
		for (int l410 = 0; (l410 < 2); l410 = (l410 + 1)) {
			iRec261[l410] = 0;
		}
		for (int l411 = 0; (l411 < 2); l411 = (l411 + 1)) {
			fRec260[l411] = 0.0f;
		}
		for (int l412 = 0; (l412 < 2); l412 = (l412 + 1)) {
			fRec259[l412] = 0.0f;
		}
		for (int l413 = 0; (l413 < 2); l413 = (l413 + 1)) {
			iRec264[l413] = 0;
		}
		for (int l414 = 0; (l414 < 2); l414 = (l414 + 1)) {
			fRec263[l414] = 0.0f;
		}
		for (int l415 = 0; (l415 < 2); l415 = (l415 + 1)) {
			fRec262[l415] = 0.0f;
		}
		for (int l416 = 0; (l416 < 2); l416 = (l416 + 1)) {
			iRec267[l416] = 0;
		}
		for (int l417 = 0; (l417 < 2); l417 = (l417 + 1)) {
			fRec266[l417] = 0.0f;
		}
		for (int l418 = 0; (l418 < 2); l418 = (l418 + 1)) {
			fRec265[l418] = 0.0f;
		}
		for (int l419 = 0; (l419 < 2); l419 = (l419 + 1)) {
			iRec270[l419] = 0;
		}
		for (int l420 = 0; (l420 < 2); l420 = (l420 + 1)) {
			fRec269[l420] = 0.0f;
		}
		for (int l421 = 0; (l421 < 2); l421 = (l421 + 1)) {
			fRec268[l421] = 0.0f;
		}
		for (int l422 = 0; (l422 < 2); l422 = (l422 + 1)) {
			iRec273[l422] = 0;
		}
		for (int l423 = 0; (l423 < 2); l423 = (l423 + 1)) {
			fRec272[l423] = 0.0f;
		}
		for (int l424 = 0; (l424 < 2); l424 = (l424 + 1)) {
			fRec271[l424] = 0.0f;
		}
		for (int l425 = 0; (l425 < 2); l425 = (l425 + 1)) {
			iRec276[l425] = 0;
		}
		for (int l426 = 0; (l426 < 2); l426 = (l426 + 1)) {
			fRec275[l426] = 0.0f;
		}
		for (int l427 = 0; (l427 < 2); l427 = (l427 + 1)) {
			fRec274[l427] = 0.0f;
		}
		for (int l428 = 0; (l428 < 2); l428 = (l428 + 1)) {
			iRec279[l428] = 0;
		}
		for (int l429 = 0; (l429 < 2); l429 = (l429 + 1)) {
			fRec278[l429] = 0.0f;
		}
		for (int l430 = 0; (l430 < 2); l430 = (l430 + 1)) {
			fRec277[l430] = 0.0f;
		}
		for (int l431 = 0; (l431 < 2); l431 = (l431 + 1)) {
			iRec282[l431] = 0;
		}
		for (int l432 = 0; (l432 < 2); l432 = (l432 + 1)) {
			fRec281[l432] = 0.0f;
		}
		for (int l433 = 0; (l433 < 2); l433 = (l433 + 1)) {
			fRec280[l433] = 0.0f;
		}
		for (int l434 = 0; (l434 < 2); l434 = (l434 + 1)) {
			fVec151[l434] = 0.0f;
		}
		for (int l435 = 0; (l435 < 2); l435 = (l435 + 1)) {
			fRec283[l435] = 0.0f;
		}
		for (int l436 = 0; (l436 < 2); l436 = (l436 + 1)) {
			fVec152[l436] = 0.0f;
		}
		for (int l437 = 0; (l437 < 2); l437 = (l437 + 1)) {
			fRec285[l437] = 0.0f;
		}
		for (int l438 = 0; (l438 < 2); l438 = (l438 + 1)) {
			fVec153[l438] = 0.0f;
		}
		for (int l439 = 0; (l439 < 2); l439 = (l439 + 1)) {
			fRec284[l439] = 0.0f;
		}
		for (int l440 = 0; (l440 < 2); l440 = (l440 + 1)) {
			fVec154[l440] = 0.0f;
		}
		for (int l441 = 0; (l441 < 2); l441 = (l441 + 1)) {
			fRec287[l441] = 0.0f;
		}
		for (int l442 = 0; (l442 < 2); l442 = (l442 + 1)) {
			fVec155[l442] = 0.0f;
		}
		for (int l443 = 0; (l443 < 2); l443 = (l443 + 1)) {
			fRec286[l443] = 0.0f;
		}
		for (int l444 = 0; (l444 < 2); l444 = (l444 + 1)) {
			fVec156[l444] = 0.0f;
		}
		for (int l445 = 0; (l445 < 2); l445 = (l445 + 1)) {
			fRec289[l445] = 0.0f;
		}
		for (int l446 = 0; (l446 < 2); l446 = (l446 + 1)) {
			fVec157[l446] = 0.0f;
		}
		for (int l447 = 0; (l447 < 2); l447 = (l447 + 1)) {
			fRec288[l447] = 0.0f;
		}
		for (int l448 = 0; (l448 < 2); l448 = (l448 + 1)) {
			fVec158[l448] = 0.0f;
		}
		for (int l449 = 0; (l449 < 2); l449 = (l449 + 1)) {
			fRec291[l449] = 0.0f;
		}
		for (int l450 = 0; (l450 < 2); l450 = (l450 + 1)) {
			fVec159[l450] = 0.0f;
		}
		for (int l451 = 0; (l451 < 2); l451 = (l451 + 1)) {
			fRec290[l451] = 0.0f;
		}
		for (int l452 = 0; (l452 < 2); l452 = (l452 + 1)) {
			fRec293[l452] = 0.0f;
		}
		for (int l453 = 0; (l453 < 2); l453 = (l453 + 1)) {
			fRec292[l453] = 0.0f;
		}
		for (int l454 = 0; (l454 < 2); l454 = (l454 + 1)) {
			fRec295[l454] = 0.0f;
		}
		for (int l455 = 0; (l455 < 2); l455 = (l455 + 1)) {
			fRec294[l455] = 0.0f;
		}
		for (int l456 = 0; (l456 < 2); l456 = (l456 + 1)) {
			fRec297[l456] = 0.0f;
		}
		for (int l457 = 0; (l457 < 2); l457 = (l457 + 1)) {
			fRec296[l457] = 0.0f;
		}
		for (int l458 = 0; (l458 < 2); l458 = (l458 + 1)) {
			fRec299[l458] = 0.0f;
		}
		for (int l459 = 0; (l459 < 2); l459 = (l459 + 1)) {
			fRec298[l459] = 0.0f;
		}
		for (int l460 = 0; (l460 < 2); l460 = (l460 + 1)) {
			iRec305[l460] = 0;
		}
		for (int l461 = 0; (l461 < 2); l461 = (l461 + 1)) {
			fRec302[l461] = 0.0f;
		}
		for (int l462 = 0; (l462 < 2); l462 = (l462 + 1)) {
			iRec303[l462] = 0;
		}
		for (int l463 = 0; (l463 < 2); l463 = (l463 + 1)) {
			fRec304[l463] = 0.0f;
		}
		for (int l464 = 0; (l464 < 2); l464 = (l464 + 1)) {
			fVec160[l464] = 0.0f;
		}
		for (int l465 = 0; (l465 < 2); l465 = (l465 + 1)) {
			fRec301[l465] = 0.0f;
		}
		for (int l466 = 0; (l466 < 2); l466 = (l466 + 1)) {
			fRec300[l466] = 0.0f;
		}
		for (int l467 = 0; (l467 < 5); l467 = (l467 + 1)) {
			fVec161[l467] = 0.0f;
		}
		for (int l468 = 0; (l468 < 2); l468 = (l468 + 1)) {
			fRec306[l468] = 0.0f;
		}
		for (int l469 = 0; (l469 < 2); l469 = (l469 + 1)) {
			fRec307[l469] = 0.0f;
		}
		for (int l470 = 0; (l470 < 2); l470 = (l470 + 1)) {
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
		ui_interface->openVerticalBox("plugin");
		ui_interface->addButton("A0", &fButton10);
		ui_interface->addButton("A1", &fButton22);
		ui_interface->addButton("A2", &fButton34);
		ui_interface->addButton("A3", &fButton46);
		ui_interface->addButton("A4", &fButton58);
		ui_interface->addButton("C0", &fButton1);
		ui_interface->addButton("C1", &fButton13);
		ui_interface->addButton("C2", &fButton25);
		ui_interface->addButton("C3", &fButton37);
		ui_interface->addButton("C4", &fButton49);
		ui_interface->addButton("D0", &fButton3);
		ui_interface->addButton("D1", &fButton15);
		ui_interface->addButton("D2", &fButton27);
		ui_interface->addButton("D3", &fButton39);
		ui_interface->addButton("D4", &fButton51);
		ui_interface->addButton("F0", &fButton6);
		ui_interface->addButton("F1", &fButton18);
		ui_interface->addButton("F2", &fButton30);
		ui_interface->addButton("F3", &fButton42);
		ui_interface->addButton("F4", &fButton54);
		ui_interface->addButton("G0", &fButton8);
		ui_interface->addButton("G1", &fButton20);
		ui_interface->addButton("G2", &fButton32);
		ui_interface->addButton("G3", &fButton44);
		ui_interface->addButton("G4", &fButton56);
		ui_interface->declare(0, "2", "");
		ui_interface->openVerticalBox("vibrato");
		ui_interface->declare(&fHslider4, "1", "");
		ui_interface->addHorizontalSlider("depth", &fHslider4, 0.0f, 0.0f, 1.0f, 0.200000003f);
		ui_interface->declare(&fHslider5, "2", "");
		ui_interface->addHorizontalSlider("speed", &fHslider5, 0.0f, 0.0f, 1.0f, 0.200000003f);
		ui_interface->closeBox();
		ui_interface->addButton("a0", &fButton9);
		ui_interface->addButton("a1", &fButton21);
		ui_interface->addButton("a2", &fButton33);
		ui_interface->addButton("a3", &fButton45);
		ui_interface->addButton("a4", &fButton57);
		ui_interface->addButton("b0", &fButton11);
		ui_interface->addButton("b1", &fButton23);
		ui_interface->addButton("b2", &fButton35);
		ui_interface->addButton("b3", &fButton47);
		ui_interface->addButton("b4", &fButton59);
		ui_interface->addHorizontalSlider("balance", &fHslider0, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->openHorizontalBox("bass");
		ui_interface->declare(&fVslider13, "1", "");
		ui_interface->addVerticalSlider("16' b", &fVslider13, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider12, "2", "");
		ui_interface->addVerticalSlider("8' b", &fVslider12, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fHslider1, "3", "");
		ui_interface->addHorizontalSlider("bass manual", &fHslider1, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fVslider14, "3", "");
		ui_interface->addVerticalSlider("bass volume", &fVslider14, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->closeBox();
		ui_interface->addButton("c0", &fButton0);
		ui_interface->addButton("c1", &fButton12);
		ui_interface->addButton("c2", &fButton24);
		ui_interface->addButton("c3", &fButton36);
		ui_interface->addButton("c4", &fButton48);
		ui_interface->addButton("c5", &fButton60);
		ui_interface->addButton("d0", &fButton2);
		ui_interface->addButton("d1", &fButton14);
		ui_interface->addButton("d2", &fButton26);
		ui_interface->addButton("d3", &fButton38);
		ui_interface->addButton("d4", &fButton50);
		ui_interface->addButton("e0", &fButton4);
		ui_interface->addButton("e1", &fButton16);
		ui_interface->addButton("e2", &fButton28);
		ui_interface->addButton("e3", &fButton40);
		ui_interface->addButton("e4", &fButton52);
		ui_interface->addButton("f0", &fButton5);
		ui_interface->addButton("f1", &fButton17);
		ui_interface->addButton("f2", &fButton29);
		ui_interface->addButton("f3", &fButton41);
		ui_interface->addButton("f4", &fButton53);
		ui_interface->addButton("g0", &fButton7);
		ui_interface->addButton("g1", &fButton19);
		ui_interface->addButton("g2", &fButton31);
		ui_interface->addButton("g3", &fButton43);
		ui_interface->addButton("g4", &fButton55);
		ui_interface->openHorizontalBox("i");
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->addVerticalSlider("16' i", &fVslider6, 0.5f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider5, "2", "");
		ui_interface->addVerticalSlider("8' i", &fVslider5, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider4, "3", "");
		ui_interface->addVerticalSlider("4' i", &fVslider4, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider3, "4", "");
		ui_interface->addVerticalSlider("2 2/3' i", &fVslider3, 0.5f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider2, "5", "");
		ui_interface->addVerticalSlider("2' i", &fVslider2, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider1, "6", "");
		ui_interface->addVerticalSlider("1 3/5' i", &fVslider1, 0.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider0, "7", "");
		ui_interface->addVerticalSlider("1' i", &fVslider0, 0.5f, 0.0f, 1.0f, 0.25f);
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("ii");
		ui_interface->declare(&fVslider7, "1", "");
		ui_interface->addVerticalSlider("bright", &fVslider7, 0.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider11, "2", "");
		ui_interface->addVerticalSlider("16' ii", &fVslider11, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider10, "3", "");
		ui_interface->addVerticalSlider("8' ii", &fVslider10, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider9, "4", "");
		ui_interface->addVerticalSlider("4' ii", &fVslider9, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider8, "5", "");
		ui_interface->addVerticalSlider("2' ii", &fVslider8, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->closeBox();
		ui_interface->addHorizontalSlider("percussive", &fHslider6, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->addHorizontalSlider("pitch", &fHslider3, 0.0f, -1.0f, 1.0f, 0.0500000007f);
		ui_interface->addHorizontalSlider("realism", &fHslider2, 0.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->addHorizontalSlider("volume", &fHslider7, 0.5f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = float(fHslider0);
		float fSlow1 = (1.0f - fSlow0);
		float fSlow2 = float(fVslider0);
		float fSlow3 = (fSlow2 * (1.0f - (2.80999994f * (fSlow2 * (1.0f - fSlow2)))));
		float fSlow4 = float(fHslider1);
		float fSlow5 = (1.0f - fSlow4);
		float fSlow6 = float(fHslider2);
		int iSlow7 = (fSlow6 > 0.166666672f);
		float fSlow8 = (iSlow7 ? 1.00138295f : 1.0f);
		float fSlow9 = (0.0299999993f * float(fHslider3));
		float fSlow10 = ((0.0148999998f * float(fHslider4)) + 9.99999975e-05f);
		float fSlow11 = (fConst1 * ((3.0f * float(fHslider5)) + 5.0f));
		float fSlow12 = float(fButton0);
		float fSlow13 = (iSlow7 ? 1.00379598f : 1.0f);
		float fSlow14 = float(fButton1);
		float fSlow15 = (iSlow7 ? 0.999484003f : 1.0f);
		float fSlow16 = float(fButton2);
		float fSlow17 = (iSlow7 ? 1.00113499f : 1.0f);
		float fSlow18 = float(fButton3);
		float fSlow19 = (iSlow7 ? 1.00006402f : 1.0f);
		float fSlow20 = float(fButton4);
		float fSlow21 = (iSlow7 ? 0.998889029f : 1.0f);
		float fSlow22 = float(fButton5);
		float fSlow23 = (iSlow7 ? 0.997198999f : 1.0f);
		float fSlow24 = float(fButton6);
		float fSlow25 = (iSlow7 ? 0.997294009f : 1.0f);
		float fSlow26 = float(fButton7);
		float fSlow27 = (iSlow7 ? 1.00056195f : 1.0f);
		float fSlow28 = float(fButton8);
		float fSlow29 = (iSlow7 ? 1.00246406f : 1.0f);
		float fSlow30 = float(fButton9);
		float fSlow31 = (iSlow7 ? 0.996945024f : 1.0f);
		float fSlow32 = float(fButton10);
		float fSlow33 = (iSlow7 ? 1.00311804f : 1.0f);
		float fSlow34 = float(fButton11);
		float fSlow35 = float(fButton12);
		float fSlow36 = float(fButton13);
		float fSlow37 = float(fButton14);
		float fSlow38 = float(fButton15);
		float fSlow39 = float(fButton16);
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
		float fSlow84 = ((fSlow6 >= 0.833333313f) ? 1.0f : 0.0f);
		float fSlow85 = float(fVslider1);
		float fSlow86 = (fSlow85 * (1.0f - (2.80999994f * (fSlow85 * (1.0f - fSlow85)))));
		float fSlow87 = float(fVslider2);
		float fSlow88 = (fSlow87 * (1.0f - (2.80999994f * (fSlow87 * (1.0f - fSlow87)))));
		float fSlow89 = float(fVslider3);
		float fSlow90 = (fSlow89 * (1.0f - (2.80999994f * (fSlow89 * (1.0f - fSlow89)))));
		float fSlow91 = float(fVslider4);
		float fSlow92 = (fSlow91 * (1.0f - (2.80999994f * (fSlow91 * (1.0f - fSlow91)))));
		float fSlow93 = float(fVslider5);
		float fSlow94 = (fSlow93 * (1.0f - (2.80999994f * (fSlow93 * (1.0f - fSlow93)))));
		float fSlow95 = float(fVslider6);
		float fSlow96 = (fSlow95 * (1.0f - (2.80999994f * (fSlow95 * (1.0f - fSlow95)))));
		float fSlow97 = (2.5f * fSlow0);
		float fSlow98 = (0.961538434f * float(fVslider7));
		float fSlow99 = (fSlow98 + 0.0192307699f);
		float fSlow100 = float(fVslider8);
		float fSlow101 = (fSlow100 * (1.0f - (2.80999994f * (fSlow100 * (1.0f - fSlow100)))));
		float fSlow102 = (0.458333343f * fSlow101);
		float fSlow103 = float(fVslider9);
		float fSlow104 = (fSlow103 * (1.0f - (2.80999994f * (fSlow103 * (1.0f - fSlow103)))));
		float fSlow105 = (0.458333343f * fSlow104);
		float fSlow106 = float(fVslider10);
		float fSlow107 = (fSlow106 * (1.0f - (2.80999994f * (fSlow106 * (1.0f - fSlow106)))));
		float fSlow108 = (0.458333343f * fSlow107);
		float fSlow109 = float(fVslider11);
		float fSlow110 = (fSlow109 * (1.0f - (2.80999994f * (fSlow109 * (1.0f - fSlow109)))));
		float fSlow111 = (0.458333343f * fSlow110);
		float fSlow112 = (0.600000024f * (0.980769217f - fSlow98));
		float fSlow113 = (4.5f * float(fHslider6));
		float fSlow114 = ((fSlow6 > 0.5f) ? 0.0135700004f : 0.0f);
		float fSlow115 = float(fVslider12);
		float fSlow116 = (fSlow115 * (1.0f - (2.80999994f * (fSlow115 * (1.0f - fSlow115)))));
		float fSlow117 = float(fVslider13);
		float fSlow118 = (fSlow117 * (1.0f - (2.80999994f * (fSlow117 * (1.0f - fSlow117)))));
		float fSlow119 = (0.0199999996f * float(fVslider14));
		float fSlow120 = (0.0199999996f * mydsp_faustpower2_f(float(fHslider7)));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec5[0] = (fSlow11 + ((fRec5[1] > 1.0f) ? (fRec5[1] + -1.0f) : fRec5[1]));
			float fTemp0 = (fSlow9 + ((fSlow10 * std::sin((6.28318548f * fRec5[0]))) + 1.0f));
			float fTemp1 = (fRec4[1] + (fConst5 * (fSlow8 * fTemp0)));
			fRec4[0] = ((fTemp1 > 1.0f) ? (fTemp1 + -1.0f) : fTemp1);
			iRec6[0] = (((fRec4[0] - fRec4[1]) < 0.0f) ? (1 - iRec6[1]) : iRec6[1]);
			float fTemp2 = (fRec4[0] + float(iRec6[0]));
			fVec0[0] = fTemp2;
			iRec3[0] = (((0.5f * (fTemp2 - fVec0[1])) < 0.0f) ? (1 - iRec3[1]) : iRec3[1]);
			float fTemp3 = (0.5f * fTemp2);
			float fTemp4 = (float(iRec3[0]) + fTemp3);
			fVec1[0] = fTemp4;
			iRec2[0] = (((0.5f * (fTemp4 - fVec1[1])) < 0.0f) ? (1 - iRec2[1]) : iRec2[1]);
			float fTemp5 = (0.5f * fTemp4);
			float fTemp6 = (float(iRec2[0]) + fTemp5);
			fVec2[0] = fTemp6;
			float fTemp7 = (0.5f * fTemp6);
			fRec1[0] = (fRec1[1] + (fConst4 * (float(yc20_get_sample(float(fTemp7), 0, 0)) - fRec1[1])));
			fRec0[0] = (fConst3 * (fRec0[1] + (fRec1[0] - fRec1[1])));
			fVec3[0] = fSlow12;
			float fTemp8 = (fSlow12 + (fVec3[3] + (fVec3[1] + fVec3[2])));
			float fTemp9 = (fRec11[1] + (fConst6 * (fSlow13 * fTemp0)));
			fRec11[0] = ((fTemp9 > 1.0f) ? (fTemp9 + -1.0f) : fTemp9);
			iRec12[0] = (((fRec11[0] - fRec11[1]) < 0.0f) ? (1 - iRec12[1]) : iRec12[1]);
			float fTemp10 = (fRec11[0] + float(iRec12[0]));
			fVec4[0] = fTemp10;
			iRec10[0] = (((0.5f * (fTemp10 - fVec4[1])) < 0.0f) ? (1 - iRec10[1]) : iRec10[1]);
			float fTemp11 = (0.5f * fTemp10);
			float fTemp12 = (float(iRec10[0]) + fTemp11);
			fVec5[0] = fTemp12;
			iRec9[0] = (((0.5f * (fTemp12 - fVec5[1])) < 0.0f) ? (1 - iRec9[1]) : iRec9[1]);
			float fTemp13 = (0.5f * fTemp12);
			float fTemp14 = (float(iRec9[0]) + fTemp13);
			fVec6[0] = fTemp14;
			float fTemp15 = (0.5f * fTemp14);
			fRec8[0] = (fRec8[1] + (fConst4 * (float(yc20_get_sample(float(fTemp15), 1, 0)) - fRec8[1])));
			fRec7[0] = (fConst3 * (fRec7[1] + (fRec8[0] - fRec8[1])));
			fVec7[0] = fSlow14;
			float fTemp16 = (fSlow14 + (fVec7[3] + (fVec7[1] + fVec7[2])));
			float fTemp17 = (fRec17[1] + (fConst7 * (fSlow15 * fTemp0)));
			fRec17[0] = ((fTemp17 > 1.0f) ? (fTemp17 + -1.0f) : fTemp17);
			iRec18[0] = (((fRec17[0] - fRec17[1]) < 0.0f) ? (1 - iRec18[1]) : iRec18[1]);
			float fTemp18 = (fRec17[0] + float(iRec18[0]));
			fVec8[0] = fTemp18;
			iRec16[0] = (((0.5f * (fTemp18 - fVec8[1])) < 0.0f) ? (1 - iRec16[1]) : iRec16[1]);
			float fTemp19 = (0.5f * fTemp18);
			float fTemp20 = (float(iRec16[0]) + fTemp19);
			fVec9[0] = fTemp20;
			iRec15[0] = (((0.5f * (fTemp20 - fVec9[1])) < 0.0f) ? (1 - iRec15[1]) : iRec15[1]);
			float fTemp21 = (0.5f * fTemp20);
			float fTemp22 = (float(iRec15[0]) + fTemp21);
			fVec10[0] = fTemp22;
			float fTemp23 = (0.5f * fTemp22);
			fRec14[0] = (fRec14[1] + (fConst4 * (float(yc20_get_sample(float(fTemp23), 2, 0)) - fRec14[1])));
			fRec13[0] = (fConst3 * (fRec13[1] + (fRec14[0] - fRec14[1])));
			fVec11[0] = fSlow16;
			float fTemp24 = (fSlow16 + (fVec11[3] + (fVec11[1] + fVec11[2])));
			float fTemp25 = (fRec23[1] + (fConst8 * (fSlow17 * fTemp0)));
			fRec23[0] = ((fTemp25 > 1.0f) ? (fTemp25 + -1.0f) : fTemp25);
			iRec24[0] = (((fRec23[0] - fRec23[1]) < 0.0f) ? (1 - iRec24[1]) : iRec24[1]);
			float fTemp26 = (fRec23[0] + float(iRec24[0]));
			fVec12[0] = fTemp26;
			iRec22[0] = (((0.5f * (fTemp26 - fVec12[1])) < 0.0f) ? (1 - iRec22[1]) : iRec22[1]);
			float fTemp27 = (0.5f * fTemp26);
			float fTemp28 = (float(iRec22[0]) + fTemp27);
			fVec13[0] = fTemp28;
			iRec21[0] = (((0.5f * (fTemp28 - fVec13[1])) < 0.0f) ? (1 - iRec21[1]) : iRec21[1]);
			float fTemp29 = (0.5f * fTemp28);
			float fTemp30 = (float(iRec21[0]) + fTemp29);
			fVec14[0] = fTemp30;
			float fTemp31 = (0.5f * fTemp30);
			fRec20[0] = (fRec20[1] + (fConst4 * (float(yc20_get_sample(float(fTemp31), 3, 0)) - fRec20[1])));
			fRec19[0] = (fConst3 * (fRec19[1] + (fRec20[0] - fRec20[1])));
			fVec15[0] = fSlow18;
			float fTemp32 = (fSlow18 + (fVec15[3] + (fVec15[1] + fVec15[2])));
			float fTemp33 = (fRec29[1] + (fConst10 * (fSlow19 * fTemp0)));
			fRec29[0] = ((fTemp33 > 1.0f) ? (fTemp33 + -1.0f) : fTemp33);
			iRec30[0] = (((fRec29[0] - fRec29[1]) < 0.0f) ? (1 - iRec30[1]) : iRec30[1]);
			float fTemp34 = (fRec29[0] + float(iRec30[0]));
			fVec16[0] = fTemp34;
			iRec28[0] = (((0.5f * (fTemp34 - fVec16[1])) < 0.0f) ? (1 - iRec28[1]) : iRec28[1]);
			float fTemp35 = (0.5f * fTemp34);
			float fTemp36 = (float(iRec28[0]) + fTemp35);
			fVec17[0] = fTemp36;
			iRec27[0] = (((0.5f * (fTemp36 - fVec17[1])) < 0.0f) ? (1 - iRec27[1]) : iRec27[1]);
			float fTemp37 = (0.5f * fTemp36);
			float fTemp38 = (float(iRec27[0]) + fTemp37);
			fVec18[0] = fTemp38;
			float fTemp39 = (0.5f * fTemp38);
			fRec26[0] = (fRec26[1] + (fConst9 * (float(yc20_get_sample(float(fTemp39), 4, 0)) - fRec26[1])));
			fRec25[0] = (fConst3 * (fRec25[1] + (fRec26[0] - fRec26[1])));
			fVec19[0] = fSlow20;
			float fTemp40 = (fSlow20 + (fVec19[3] + (fVec19[1] + fVec19[2])));
			float fTemp41 = (fRec35[1] + (fConst11 * (fSlow21 * fTemp0)));
			fRec35[0] = ((fTemp41 > 1.0f) ? (fTemp41 + -1.0f) : fTemp41);
			iRec36[0] = (((fRec35[0] - fRec35[1]) < 0.0f) ? (1 - iRec36[1]) : iRec36[1]);
			float fTemp42 = (fRec35[0] + float(iRec36[0]));
			fVec20[0] = fTemp42;
			iRec34[0] = (((0.5f * (fTemp42 - fVec20[1])) < 0.0f) ? (1 - iRec34[1]) : iRec34[1]);
			float fTemp43 = (0.5f * fTemp42);
			float fTemp44 = (float(iRec34[0]) + fTemp43);
			fVec21[0] = fTemp44;
			iRec33[0] = (((0.5f * (fTemp44 - fVec21[1])) < 0.0f) ? (1 - iRec33[1]) : iRec33[1]);
			float fTemp45 = (0.5f * fTemp44);
			float fTemp46 = (float(iRec33[0]) + fTemp45);
			fVec22[0] = fTemp46;
			float fTemp47 = (0.5f * fTemp46);
			fRec32[0] = (fRec32[1] + (fConst9 * (float(yc20_get_sample(float(fTemp47), 5, 0)) - fRec32[1])));
			fRec31[0] = (fConst3 * (fRec31[1] + (fRec32[0] - fRec32[1])));
			fVec23[0] = fSlow22;
			float fTemp48 = (fSlow22 + (fVec23[3] + (fVec23[1] + fVec23[2])));
			float fTemp49 = (fRec41[1] + (fConst12 * (fSlow23 * fTemp0)));
			fRec41[0] = ((fTemp49 > 1.0f) ? (fTemp49 + -1.0f) : fTemp49);
			iRec42[0] = (((fRec41[0] - fRec41[1]) < 0.0f) ? (1 - iRec42[1]) : iRec42[1]);
			float fTemp50 = (fRec41[0] + float(iRec42[0]));
			fVec24[0] = fTemp50;
			iRec40[0] = (((0.5f * (fTemp50 - fVec24[1])) < 0.0f) ? (1 - iRec40[1]) : iRec40[1]);
			float fTemp51 = (0.5f * fTemp50);
			float fTemp52 = (float(iRec40[0]) + fTemp51);
			fVec25[0] = fTemp52;
			iRec39[0] = (((0.5f * (fTemp52 - fVec25[1])) < 0.0f) ? (1 - iRec39[1]) : iRec39[1]);
			float fTemp53 = (0.5f * fTemp52);
			float fTemp54 = (float(iRec39[0]) + fTemp53);
			fVec26[0] = fTemp54;
			float fTemp55 = (0.5f * fTemp54);
			fRec38[0] = (fRec38[1] + (fConst9 * (float(yc20_get_sample(float(fTemp55), 6, 0)) - fRec38[1])));
			fRec37[0] = (fConst3 * (fRec37[1] + (fRec38[0] - fRec38[1])));
			fVec27[0] = fSlow24;
			float fTemp56 = (fSlow24 + (fVec27[3] + (fVec27[1] + fVec27[2])));
			float fTemp57 = (fRec47[1] + (fConst13 * (fSlow25 * fTemp0)));
			fRec47[0] = ((fTemp57 > 1.0f) ? (fTemp57 + -1.0f) : fTemp57);
			iRec48[0] = (((fRec47[0] - fRec47[1]) < 0.0f) ? (1 - iRec48[1]) : iRec48[1]);
			float fTemp58 = (fRec47[0] + float(iRec48[0]));
			fVec28[0] = fTemp58;
			iRec46[0] = (((0.5f * (fTemp58 - fVec28[1])) < 0.0f) ? (1 - iRec46[1]) : iRec46[1]);
			float fTemp59 = (0.5f * fTemp58);
			float fTemp60 = (float(iRec46[0]) + fTemp59);
			fVec29[0] = fTemp60;
			iRec45[0] = (((0.5f * (fTemp60 - fVec29[1])) < 0.0f) ? (1 - iRec45[1]) : iRec45[1]);
			float fTemp61 = (0.5f * fTemp60);
			float fTemp62 = (float(iRec45[0]) + fTemp61);
			fVec30[0] = fTemp62;
			float fTemp63 = (0.5f * fTemp62);
			fRec44[0] = (fRec44[1] + (fConst9 * (float(yc20_get_sample(float(fTemp63), 7, 0)) - fRec44[1])));
			fRec43[0] = (fConst3 * (fRec43[1] + (fRec44[0] - fRec44[1])));
			fVec31[0] = fSlow26;
			float fTemp64 = (fSlow26 + (fVec31[3] + (fVec31[1] + fVec31[2])));
			float fTemp65 = (fRec53[1] + (fConst15 * (fSlow27 * fTemp0)));
			fRec53[0] = ((fTemp65 > 1.0f) ? (fTemp65 + -1.0f) : fTemp65);
			iRec54[0] = (((fRec53[0] - fRec53[1]) < 0.0f) ? (1 - iRec54[1]) : iRec54[1]);
			float fTemp66 = (fRec53[0] + float(iRec54[0]));
			fVec32[0] = fTemp66;
			iRec52[0] = (((0.5f * (fTemp66 - fVec32[1])) < 0.0f) ? (1 - iRec52[1]) : iRec52[1]);
			float fTemp67 = (0.5f * fTemp66);
			float fTemp68 = (float(iRec52[0]) + fTemp67);
			fVec33[0] = fTemp68;
			iRec51[0] = (((0.5f * (fTemp68 - fVec33[1])) < 0.0f) ? (1 - iRec51[1]) : iRec51[1]);
			float fTemp69 = (0.5f * fTemp68);
			float fTemp70 = (float(iRec51[0]) + fTemp69);
			fVec34[0] = fTemp70;
			float fTemp71 = (0.5f * fTemp70);
			fRec50[0] = (fRec50[1] + (fConst14 * (float(yc20_get_sample(float(fTemp71), 8, 0)) - fRec50[1])));
			fRec49[0] = (fConst3 * (fRec49[1] + (fRec50[0] - fRec50[1])));
			fVec35[0] = fSlow28;
			float fTemp72 = (fSlow28 + (fVec35[3] + (fVec35[1] + fVec35[2])));
			float fTemp73 = (fRec59[1] + (fConst16 * (fSlow29 * fTemp0)));
			fRec59[0] = ((fTemp73 > 1.0f) ? (fTemp73 + -1.0f) : fTemp73);
			iRec60[0] = (((fRec59[0] - fRec59[1]) < 0.0f) ? (1 - iRec60[1]) : iRec60[1]);
			float fTemp74 = (fRec59[0] + float(iRec60[0]));
			fVec36[0] = fTemp74;
			iRec58[0] = (((0.5f * (fTemp74 - fVec36[1])) < 0.0f) ? (1 - iRec58[1]) : iRec58[1]);
			float fTemp75 = (0.5f * fTemp74);
			float fTemp76 = (float(iRec58[0]) + fTemp75);
			fVec37[0] = fTemp76;
			iRec57[0] = (((0.5f * (fTemp76 - fVec37[1])) < 0.0f) ? (1 - iRec57[1]) : iRec57[1]);
			float fTemp77 = (0.5f * fTemp76);
			float fTemp78 = (float(iRec57[0]) + fTemp77);
			fVec38[0] = fTemp78;
			float fTemp79 = (0.5f * fTemp78);
			fRec56[0] = (fRec56[1] + (fConst14 * (float(yc20_get_sample(float(fTemp79), 9, 0)) - fRec56[1])));
			fRec55[0] = (fConst3 * (fRec55[1] + (fRec56[0] - fRec56[1])));
			fVec39[0] = fSlow30;
			float fTemp80 = (fSlow30 + (fVec39[3] + (fVec39[1] + fVec39[2])));
			float fTemp81 = (fRec65[1] + (fConst17 * (fSlow31 * fTemp0)));
			fRec65[0] = ((fTemp81 > 1.0f) ? (fTemp81 + -1.0f) : fTemp81);
			iRec66[0] = (((fRec65[0] - fRec65[1]) < 0.0f) ? (1 - iRec66[1]) : iRec66[1]);
			float fTemp82 = (fRec65[0] + float(iRec66[0]));
			fVec40[0] = fTemp82;
			iRec64[0] = (((0.5f * (fTemp82 - fVec40[1])) < 0.0f) ? (1 - iRec64[1]) : iRec64[1]);
			float fTemp83 = (0.5f * fTemp82);
			float fTemp84 = (float(iRec64[0]) + fTemp83);
			fVec41[0] = fTemp84;
			iRec63[0] = (((0.5f * (fTemp84 - fVec41[1])) < 0.0f) ? (1 - iRec63[1]) : iRec63[1]);
			float fTemp85 = (0.5f * fTemp84);
			float fTemp86 = (float(iRec63[0]) + fTemp85);
			fVec42[0] = fTemp86;
			float fTemp87 = (0.5f * fTemp86);
			fRec62[0] = (fRec62[1] + (fConst14 * (float(yc20_get_sample(float(fTemp87), 10, 0)) - fRec62[1])));
			fRec61[0] = (fConst3 * (fRec61[1] + (fRec62[0] - fRec62[1])));
			fVec43[0] = fSlow32;
			float fTemp88 = (fSlow32 + (fVec43[3] + (fVec43[1] + fVec43[2])));
			float fTemp89 = (fRec71[1] + (fConst18 * (fSlow33 * fTemp0)));
			fRec71[0] = ((fTemp89 > 1.0f) ? (fTemp89 + -1.0f) : fTemp89);
			iRec72[0] = (((fRec71[0] - fRec71[1]) < 0.0f) ? (1 - iRec72[1]) : iRec72[1]);
			float fTemp90 = (fRec71[0] + float(iRec72[0]));
			fVec44[0] = fTemp90;
			iRec70[0] = (((0.5f * (fTemp90 - fVec44[1])) < 0.0f) ? (1 - iRec70[1]) : iRec70[1]);
			float fTemp91 = (0.5f * fTemp90);
			float fTemp92 = (float(iRec70[0]) + fTemp91);
			fVec45[0] = fTemp92;
			iRec69[0] = (((0.5f * (fTemp92 - fVec45[1])) < 0.0f) ? (1 - iRec69[1]) : iRec69[1]);
			float fTemp93 = (0.5f * fTemp92);
			float fTemp94 = (float(iRec69[0]) + fTemp93);
			fVec46[0] = fTemp94;
			float fTemp95 = (0.5f * fTemp94);
			fRec68[0] = (fRec68[1] + (fConst14 * (float(yc20_get_sample(float(fTemp95), 11, 0)) - fRec68[1])));
			fRec67[0] = (fConst3 * (fRec67[1] + (fRec68[0] - fRec68[1])));
			fVec47[0] = fSlow34;
			float fTemp96 = (fSlow34 + (fVec47[3] + (fVec47[1] + fVec47[2])));
			fRec74[0] = (fRec74[1] + (fConst19 * (float(yc20_get_sample(float(fTemp5), 0, 0)) - fRec74[1])));
			fRec73[0] = (fConst3 * (fRec73[1] + (fRec74[0] - fRec74[1])));
			fVec48[0] = fSlow35;
			float fTemp97 = (fSlow35 + (fVec48[3] + (fVec48[1] + fVec48[2])));
			fRec76[0] = (fRec76[1] + (fConst19 * (float(yc20_get_sample(float(fTemp13), 1, 0)) - fRec76[1])));
			fRec75[0] = (fConst3 * (fRec75[1] + (fRec76[0] - fRec76[1])));
			fVec49[0] = fSlow36;
			float fTemp98 = (fSlow36 + (fVec49[3] + (fVec49[1] + fVec49[2])));
			fRec78[0] = (fRec78[1] + (fConst19 * (float(yc20_get_sample(float(fTemp21), 2, 0)) - fRec78[1])));
			fRec77[0] = (fConst3 * (fRec77[1] + (fRec78[0] - fRec78[1])));
			fVec50[0] = fSlow37;
			float fTemp99 = (fSlow37 + (fVec50[3] + (fVec50[1] + fVec50[2])));
			fRec80[0] = (fRec80[1] + (fConst19 * (float(yc20_get_sample(float(fTemp29), 3, 0)) - fRec80[1])));
			fRec79[0] = (fConst3 * (fRec79[1] + (fRec80[0] - fRec80[1])));
			fVec51[0] = fSlow38;
			float fTemp100 = (fSlow38 + (fVec51[3] + (fVec51[1] + fVec51[2])));
			fRec82[0] = (fRec82[1] + (fConst20 * (float(yc20_get_sample(float(fTemp37), 4, 0)) - fRec82[1])));
			fRec81[0] = (fConst3 * (fRec81[1] + (fRec82[0] - fRec82[1])));
			fVec52[0] = fSlow39;
			float fTemp101 = (fSlow39 + (fVec52[3] + (fVec52[1] + fVec52[2])));
			fRec84[0] = (fRec84[1] + (fConst20 * (float(yc20_get_sample(float(fTemp45), 5, 0)) - fRec84[1])));
			fRec83[0] = (fConst3 * (fRec83[1] + (fRec84[0] - fRec84[1])));
			fVec53[0] = fSlow40;
			float fTemp102 = (fSlow40 + (fVec53[3] + (fVec53[1] + fVec53[2])));
			fRec86[0] = (fRec86[1] + (fConst20 * (float(yc20_get_sample(float(fTemp53), 6, 0)) - fRec86[1])));
			fRec85[0] = (fConst3 * (fRec85[1] + (fRec86[0] - fRec86[1])));
			fVec54[0] = fSlow41;
			float fTemp103 = (fSlow41 + (fVec54[3] + (fVec54[1] + fVec54[2])));
			fRec88[0] = (fRec88[1] + (fConst20 * (float(yc20_get_sample(float(fTemp61), 7, 0)) - fRec88[1])));
			fRec87[0] = (fConst3 * (fRec87[1] + (fRec88[0] - fRec88[1])));
			fVec55[0] = fSlow42;
			float fTemp104 = (fSlow42 + (fVec55[3] + (fVec55[1] + fVec55[2])));
			fRec90[0] = (fRec90[1] + (fConst21 * (float(yc20_get_sample(float(fTemp69), 8, 0)) - fRec90[1])));
			fRec89[0] = (fConst3 * (fRec89[1] + (fRec90[0] - fRec90[1])));
			fVec56[0] = fSlow43;
			float fTemp105 = (fSlow43 + (fVec56[3] + (fVec56[1] + fVec56[2])));
			fRec92[0] = (fRec92[1] + (fConst21 * (float(yc20_get_sample(float(fTemp77), 9, 0)) - fRec92[1])));
			fRec91[0] = (fConst3 * (fRec91[1] + (fRec92[0] - fRec92[1])));
			fVec57[0] = fSlow44;
			float fTemp106 = (fSlow44 + (fVec57[3] + (fVec57[1] + fVec57[2])));
			fRec94[0] = (fRec94[1] + (fConst21 * (float(yc20_get_sample(float(fTemp85), 10, 0)) - fRec94[1])));
			fRec93[0] = (fConst3 * (fRec93[1] + (fRec94[0] - fRec94[1])));
			fVec58[0] = fSlow45;
			float fTemp107 = (fSlow45 + (fVec58[3] + (fVec58[1] + fVec58[2])));
			fRec96[0] = (fRec96[1] + (fConst21 * (float(yc20_get_sample(float(fTemp93), 11, 0)) - fRec96[1])));
			fRec95[0] = (fConst3 * (fRec95[1] + (fRec96[0] - fRec96[1])));
			fVec59[0] = fSlow46;
			float fTemp108 = (fSlow46 + (fVec59[3] + (fVec59[1] + fVec59[2])));
			fRec98[0] = (fRec98[1] + (fConst22 * (float(yc20_get_sample(float(fTemp3), 0, 0)) - fRec98[1])));
			fRec97[0] = (fConst3 * (fRec97[1] + (fRec98[0] - fRec98[1])));
			fVec60[0] = fSlow47;
			float fTemp109 = (fSlow47 + (fVec60[3] + (fVec60[1] + fVec60[2])));
			fRec100[0] = (fRec100[1] + (fConst22 * (float(yc20_get_sample(float(fTemp11), 1, 0)) - fRec100[1])));
			fRec99[0] = (fConst3 * (fRec99[1] + (fRec100[0] - fRec100[1])));
			fVec61[0] = fSlow48;
			float fTemp110 = (fSlow48 + (fVec61[3] + (fVec61[1] + fVec61[2])));
			fRec102[0] = (fRec102[1] + (fConst22 * (float(yc20_get_sample(float(fTemp19), 2, 0)) - fRec102[1])));
			fRec101[0] = (fConst3 * (fRec101[1] + (fRec102[0] - fRec102[1])));
			fVec62[0] = fSlow49;
			float fTemp111 = (fSlow49 + (fVec62[3] + (fVec62[1] + fVec62[2])));
			fRec104[0] = (fRec104[1] + (fConst22 * (float(yc20_get_sample(float(fTemp27), 3, 0)) - fRec104[1])));
			fRec103[0] = (fConst3 * (fRec103[1] + (fRec104[0] - fRec104[1])));
			fVec63[0] = fSlow50;
			float fTemp112 = (fSlow50 + (fVec63[3] + (fVec63[1] + fVec63[2])));
			fRec106[0] = (fRec106[1] + (fConst23 * (float(yc20_get_sample(float(fTemp35), 4, 0)) - fRec106[1])));
			fRec105[0] = (fConst3 * (fRec105[1] + (fRec106[0] - fRec106[1])));
			fVec64[0] = fSlow51;
			float fTemp113 = (fSlow51 + (fVec64[3] + (fVec64[1] + fVec64[2])));
			fRec108[0] = (fRec108[1] + (fConst23 * (float(yc20_get_sample(float(fTemp43), 5, 0)) - fRec108[1])));
			fRec107[0] = (fConst3 * (fRec107[1] + (fRec108[0] - fRec108[1])));
			fVec65[0] = fSlow52;
			float fTemp114 = (fSlow52 + (fVec65[3] + (fVec65[1] + fVec65[2])));
			fRec110[0] = (fRec110[1] + (fConst23 * (float(yc20_get_sample(float(fTemp51), 6, 0)) - fRec110[1])));
			fRec109[0] = (fConst3 * (fRec109[1] + (fRec110[0] - fRec110[1])));
			fVec66[0] = fSlow53;
			float fTemp115 = (fSlow53 + (fVec66[3] + (fVec66[1] + fVec66[2])));
			fRec112[0] = (fRec112[1] + (fConst23 * (float(yc20_get_sample(float(fTemp59), 7, 0)) - fRec112[1])));
			fRec111[0] = (fConst3 * (fRec111[1] + (fRec112[0] - fRec112[1])));
			fVec67[0] = fSlow54;
			float fTemp116 = (fSlow54 + (fVec67[3] + (fVec67[1] + fVec67[2])));
			fRec114[0] = (fRec114[1] + (fConst24 * (float(yc20_get_sample(float(fTemp67), 8, 0)) - fRec114[1])));
			fRec113[0] = (fConst3 * (fRec113[1] + (fRec114[0] - fRec114[1])));
			fVec68[0] = fSlow55;
			float fTemp117 = (fSlow55 + (fVec68[3] + (fVec68[1] + fVec68[2])));
			fRec116[0] = (fRec116[1] + (fConst24 * (float(yc20_get_sample(float(fTemp75), 9, 0)) - fRec116[1])));
			fRec115[0] = (fConst3 * (fRec115[1] + (fRec116[0] - fRec116[1])));
			fVec69[0] = fSlow56;
			float fTemp118 = (fSlow56 + (fVec69[3] + (fVec69[1] + fVec69[2])));
			fRec118[0] = (fRec118[1] + (fConst24 * (float(yc20_get_sample(float(fTemp83), 10, 0)) - fRec118[1])));
			fRec117[0] = (fConst3 * (fRec117[1] + (fRec118[0] - fRec118[1])));
			fVec70[0] = fSlow57;
			float fTemp119 = (fSlow57 + (fVec70[3] + (fVec70[1] + fVec70[2])));
			fRec120[0] = (fRec120[1] + (fConst24 * (float(yc20_get_sample(float(fTemp91), 11, 0)) - fRec120[1])));
			fRec119[0] = (fConst3 * (fRec119[1] + (fRec120[0] - fRec120[1])));
			fVec71[0] = fSlow58;
			float fTemp120 = (fSlow58 + (fVec71[3] + (fVec71[1] + fVec71[2])));
			float fTemp121 = float(yc20_get_sample(float(fRec4[0]), 0, 0));
			fVec72[0] = fTemp121;
			fRec121[0] = (fConst25 * ((0.00737454556f * fRec121[1]) + (0.0143803637f * (fTemp121 - fVec72[1]))));
			fVec73[0] = fSlow59;
			float fTemp122 = (fSlow59 + (fVec73[3] + (fVec73[1] + fVec73[2])));
			float fTemp123 = float(yc20_get_sample(float(fRec11[0]), 1, 0));
			fVec74[0] = fTemp123;
			fRec122[0] = (fConst25 * ((0.00737454556f * fRec122[1]) + (0.0143803637f * (fTemp123 - fVec74[1]))));
			fVec75[0] = fSlow60;
			float fTemp124 = (fSlow60 + (fVec75[3] + (fVec75[1] + fVec75[2])));
			float fTemp125 = float(yc20_get_sample(float(fRec17[0]), 2, 0));
			fVec76[0] = fTemp125;
			fRec123[0] = (fConst25 * ((0.00737454556f * fRec123[1]) + (0.0143803637f * (fTemp125 - fVec76[1]))));
			fVec77[0] = fSlow61;
			float fTemp126 = (fSlow61 + (fVec77[3] + (fVec77[1] + fVec77[2])));
			float fTemp127 = float(yc20_get_sample(float(fRec23[0]), 3, 0));
			fVec78[0] = fTemp127;
			fRec124[0] = (fConst25 * ((0.00737454556f * fRec124[1]) + (0.0143803637f * (fTemp127 - fVec78[1]))));
			fVec79[0] = fSlow62;
			float fTemp128 = (fSlow62 + (fVec79[3] + (fVec79[1] + fVec79[2])));
			float fTemp129 = float(yc20_get_sample(float(fRec29[0]), 4, 0));
			fVec80[0] = fTemp129;
			fRec125[0] = (fConst25 * ((0.00737454556f * fRec125[1]) + (0.0143803637f * (fTemp129 - fVec80[1]))));
			fVec81[0] = fSlow63;
			float fTemp130 = (fSlow63 + (fVec81[3] + (fVec81[1] + fVec81[2])));
			float fTemp131 = float(yc20_get_sample(float(fRec35[0]), 5, 0));
			fVec82[0] = fTemp131;
			fRec126[0] = (fConst25 * ((0.00737454556f * fRec126[1]) + (0.0143803637f * (fTemp131 - fVec82[1]))));
			fVec83[0] = fSlow64;
			float fTemp132 = (fSlow64 + (fVec83[3] + (fVec83[1] + fVec83[2])));
			float fTemp133 = float(yc20_get_sample(float(fRec41[0]), 6, 0));
			fVec84[0] = fTemp133;
			fRec127[0] = (fConst25 * ((0.00737454556f * fRec127[1]) + (0.0143803637f * (fTemp133 - fVec84[1]))));
			fVec85[0] = fSlow65;
			float fTemp134 = (fSlow65 + (fVec85[3] + (fVec85[1] + fVec85[2])));
			float fTemp135 = float(yc20_get_sample(float(fRec47[0]), 7, 0));
			fVec86[0] = fTemp135;
			fRec128[0] = (fConst25 * ((0.00737454556f * fRec128[1]) + (0.0143803637f * (fTemp135 - fVec86[1]))));
			fVec87[0] = fSlow66;
			float fTemp136 = (fSlow66 + (fVec87[3] + (fVec87[1] + fVec87[2])));
			float fTemp137 = float(yc20_get_sample(float(fRec53[0]), 8, 0));
			fVec88[0] = fTemp137;
			fRec129[0] = (fConst25 * ((0.00737454556f * fRec129[1]) + (0.0143803637f * (fTemp137 - fVec88[1]))));
			fVec89[0] = fSlow67;
			float fTemp138 = (fSlow67 + (fVec89[3] + (fVec89[1] + fVec89[2])));
			float fTemp139 = float(yc20_get_sample(float(fRec59[0]), 9, 0));
			fVec90[0] = fTemp139;
			fRec130[0] = (fConst25 * ((0.00737454556f * fRec130[1]) + (0.0143803637f * (fTemp139 - fVec90[1]))));
			fVec91[0] = fSlow68;
			float fTemp140 = (fSlow68 + (fVec91[3] + (fVec91[1] + fVec91[2])));
			float fTemp141 = float(yc20_get_sample(float(fRec65[0]), 10, 0));
			fVec92[0] = fTemp141;
			fRec131[0] = (fConst25 * ((0.00737454556f * fRec131[1]) + (0.0143803637f * (fTemp141 - fVec92[1]))));
			fVec93[0] = fSlow69;
			float fTemp142 = (fSlow69 + (fVec93[3] + (fVec93[1] + fVec93[2])));
			float fTemp143 = float(yc20_get_sample(float(fRec71[0]), 11, 0));
			fVec94[0] = fTemp143;
			fRec132[0] = (fConst25 * ((0.00737454556f * fRec132[1]) + (0.0143803637f * (fTemp143 - fVec94[1]))));
			fVec95[0] = fSlow70;
			float fTemp144 = (fSlow70 + (fVec95[3] + (fVec95[1] + fVec95[2])));
			fVec96[0] = fSlow71;
			float fTemp145 = (fSlow71 + (fVec96[3] + (fVec96[1] + fVec96[2])));
			float fTemp146 = (fRec121[0] * fTemp145);
			fVec97[0] = fSlow72;
			float fTemp147 = (fSlow72 + (fVec97[3] + (fVec97[1] + fVec97[2])));
			float fTemp148 = (fRec122[0] * fTemp147);
			fVec98[0] = fSlow73;
			float fTemp149 = (fSlow73 + (fVec98[3] + (fVec98[1] + fVec98[2])));
			float fTemp150 = (fRec123[0] * fTemp149);
			fVec99[0] = fSlow74;
			float fTemp151 = (fSlow74 + (fVec99[3] + (fVec99[1] + fVec99[2])));
			float fTemp152 = (fRec124[0] * fTemp151);
			fVec100[0] = fSlow75;
			float fTemp153 = (fSlow75 + (fVec100[3] + (fVec100[1] + fVec100[2])));
			float fTemp154 = (fRec125[0] * fTemp153);
			fVec101[0] = fSlow76;
			float fTemp155 = (fSlow76 + (fVec101[3] + (fVec101[1] + fVec101[2])));
			float fTemp156 = (fRec126[0] * fTemp155);
			fVec102[0] = fSlow77;
			float fTemp157 = (fSlow77 + (fVec102[3] + (fVec102[1] + fVec102[2])));
			float fTemp158 = (fRec127[0] * fTemp157);
			fVec103[0] = fSlow78;
			float fTemp159 = (fSlow78 + (fVec103[3] + (fVec103[1] + fVec103[2])));
			float fTemp160 = (fRec128[0] * fTemp159);
			fVec104[0] = fSlow79;
			float fTemp161 = (fSlow79 + (fVec104[3] + (fVec104[1] + fVec104[2])));
			float fTemp162 = (fRec129[0] * fTemp161);
			fVec105[0] = fSlow80;
			float fTemp163 = (fSlow80 + (fVec105[3] + (fVec105[1] + fVec105[2])));
			float fTemp164 = (fRec130[0] * fTemp163);
			fVec106[0] = fSlow81;
			float fTemp165 = (fSlow81 + (fVec106[3] + (fVec106[1] + fVec106[2])));
			float fTemp166 = (fRec131[0] * fTemp165);
			fVec107[0] = fSlow82;
			float fTemp167 = (fSlow82 + (fVec107[3] + (fVec107[1] + fVec107[2])));
			float fTemp168 = (fRec132[0] * fTemp167);
			fVec108[0] = fSlow83;
			float fTemp169 = (fSlow83 + (fVec108[3] + (fVec108[1] + fVec108[2])));
			float fTemp170 = (fRec121[0] * fTemp169);
			float fTemp171 = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow5 * (((((((((((((((((fRec0[0] * fTemp8) + (fRec7[0] * fTemp16)) + (fRec13[0] * fTemp24)) + (fRec19[0] * fTemp32)) + (fRec25[0] * fTemp40)) + (fRec31[0] * fTemp48)) + (fRec37[0] * fTemp56)) + (fRec43[0] * fTemp64)) + (fRec49[0] * fTemp72)) + (fRec55[0] * fTemp80)) + (fRec61[0] * fTemp88)) + (fRec67[0] * fTemp96)) + (fRec73[0] * fTemp97)) + (fRec75[0] * fTemp98)) + (fRec77[0] * fTemp99)) + (fRec79[0] * fTemp100)) + (fRec81[0] * fTemp101))) + (fRec83[0] * fTemp102)) + (fRec85[0] * fTemp103)) + (fRec87[0] * fTemp104)) + (fRec89[0] * fTemp105)) + (fRec91[0] * fTemp106)) + (fRec93[0] * fTemp107)) + (fRec95[0] * fTemp108)) + (fRec97[0] * fTemp109)) + (fRec99[0] * fTemp110)) + (fRec101[0] * fTemp111)) + (fRec103[0] * fTemp112)) + (fRec105[0] * fTemp113)) + (fRec107[0] * fTemp114)) + (fRec109[0] * fTemp115)) + (fRec111[0] * fTemp116)) + (fRec113[0] * fTemp117)) + (fRec115[0] * fTemp118)) + (fRec117[0] * fTemp119)) + (fRec119[0] * fTemp120)) + (fRec121[0] * fTemp122)) + (fRec122[0] * fTemp124)) + (fRec123[0] * fTemp126)) + (fRec124[0] * fTemp128)) + (fRec125[0] * fTemp130)) + (fRec126[0] * fTemp132)) + (fRec127[0] * fTemp134)) + (fRec128[0] * fTemp136)) + (fRec129[0] * fTemp138)) + (fRec130[0] * fTemp140)) + (fRec131[0] * fTemp142)) + (fRec132[0] * fTemp144)) + fTemp146) + fTemp148) + fTemp150) + fTemp152) + fTemp154) + fTemp156) + fTemp158) + fTemp160) + fTemp162) + fTemp164) + fTemp166) + fTemp168) + fTemp170));
			float fTemp172 = (fRec25[0] + (fRec19[0] + (fRec13[0] + (fRec0[0] + fRec7[0]))));
			float fTemp173 = (fRec49[0] + (fRec43[0] + (fRec37[0] + (fRec31[0] + fTemp172))));
			float fTemp174 = (fRec73[0] + (fRec67[0] + (fRec61[0] + (fRec55[0] + fTemp173))));
			float fTemp175 = (fRec81[0] + (fRec79[0] + (fRec77[0] + (fRec75[0] + fTemp174))));
			float fTemp176 = (fRec125[0] + (fRec124[0] + (fRec123[0] + (fRec121[0] + fRec122[0]))));
			float fTemp177 = (((fSlow5 * fTemp175) + (fRec121[0] + (fRec119[0] + (fRec117[0] + (fRec115[0] + (fRec113[0] + (fRec111[0] + (fRec109[0] + (fRec107[0] + (fRec105[0] + (fRec103[0] + (fRec101[0] + (fRec99[0] + (fRec97[0] + (fRec95[0] + (fRec93[0] + (fRec91[0] + (fRec89[0] + (fRec87[0] + (fRec83[0] + fRec85[0])))))))))))))))))))) + (2.0f * (fRec132[0] + (fRec131[0] + (fRec130[0] + (fRec129[0] + (fRec128[0] + (fRec127[0] + (fRec126[0] + fTemp176)))))))));
			fVec109[0] = (fTemp177 - fTemp171);
			fRec133[0] = (fConst26 * (fRec133[1] + (fTemp177 - (fTemp171 + fVec109[1]))));
			float fTemp178 = (0.00200000009f * (fSlow84 * fRec133[0]));
			float fTemp179 = (fTemp171 + fTemp178);
			iRec136[0] = (((0.5f * (fTemp38 - fVec18[1])) < 0.0f) ? (1 - iRec136[1]) : iRec136[1]);
			float fTemp180 = (float(iRec136[0]) + fTemp39);
			fVec110[0] = fTemp180;
			float fTemp181 = (0.5f * fTemp180);
			fRec135[0] = (fRec135[1] + (fConst27 * (float(yc20_get_sample(float(fTemp181), 4, 0)) - fRec135[1])));
			fRec134[0] = (fConst3 * (fRec134[1] + (fRec135[0] - fRec135[1])));
			iRec139[0] = (((0.5f * (fTemp46 - fVec22[1])) < 0.0f) ? (1 - iRec139[1]) : iRec139[1]);
			float fTemp182 = (float(iRec139[0]) + fTemp47);
			fVec111[0] = fTemp182;
			float fTemp183 = (0.5f * fTemp182);
			fRec138[0] = (fRec138[1] + (fConst27 * (float(yc20_get_sample(float(fTemp183), 5, 0)) - fRec138[1])));
			fRec137[0] = (fConst3 * (fRec137[1] + (fRec138[0] - fRec138[1])));
			iRec142[0] = (((0.5f * (fTemp54 - fVec26[1])) < 0.0f) ? (1 - iRec142[1]) : iRec142[1]);
			float fTemp184 = (float(iRec142[0]) + fTemp55);
			fVec112[0] = fTemp184;
			float fTemp185 = (0.5f * fTemp184);
			fRec141[0] = (fRec141[1] + (fConst27 * (float(yc20_get_sample(float(fTemp185), 6, 0)) - fRec141[1])));
			fRec140[0] = (fConst3 * (fRec140[1] + (fRec141[0] - fRec141[1])));
			iRec145[0] = (((0.5f * (fTemp62 - fVec30[1])) < 0.0f) ? (1 - iRec145[1]) : iRec145[1]);
			float fTemp186 = (float(iRec145[0]) + fTemp63);
			fVec113[0] = fTemp186;
			float fTemp187 = (0.5f * fTemp186);
			fRec144[0] = (fRec144[1] + (fConst27 * (float(yc20_get_sample(float(fTemp187), 7, 0)) - fRec144[1])));
			fRec143[0] = (fConst3 * (fRec143[1] + (fRec144[0] - fRec144[1])));
			iRec148[0] = (((0.5f * (fTemp70 - fVec34[1])) < 0.0f) ? (1 - iRec148[1]) : iRec148[1]);
			float fTemp188 = (float(iRec148[0]) + fTemp71);
			fVec114[0] = fTemp188;
			float fTemp189 = (0.5f * fTemp188);
			fRec147[0] = (fRec147[1] + (fConst28 * (float(yc20_get_sample(float(fTemp189), 8, 0)) - fRec147[1])));
			fRec146[0] = (fConst3 * (fRec146[1] + (fRec147[0] - fRec147[1])));
			iRec151[0] = (((0.5f * (fTemp78 - fVec38[1])) < 0.0f) ? (1 - iRec151[1]) : iRec151[1]);
			float fTemp190 = (float(iRec151[0]) + fTemp79);
			fVec115[0] = fTemp190;
			float fTemp191 = (0.5f * fTemp190);
			fRec150[0] = (fRec150[1] + (fConst28 * (float(yc20_get_sample(float(fTemp191), 9, 0)) - fRec150[1])));
			fRec149[0] = (fConst3 * (fRec149[1] + (fRec150[0] - fRec150[1])));
			iRec154[0] = (((0.5f * (fTemp86 - fVec42[1])) < 0.0f) ? (1 - iRec154[1]) : iRec154[1]);
			float fTemp192 = (float(iRec154[0]) + fTemp87);
			fVec116[0] = fTemp192;
			float fTemp193 = (0.5f * fTemp192);
			fRec153[0] = (fRec153[1] + (fConst28 * (float(yc20_get_sample(float(fTemp193), 10, 0)) - fRec153[1])));
			fRec152[0] = (fConst3 * (fRec152[1] + (fRec153[0] - fRec153[1])));
			iRec157[0] = (((0.5f * (fTemp94 - fVec46[1])) < 0.0f) ? (1 - iRec157[1]) : iRec157[1]);
			float fTemp194 = (float(iRec157[0]) + fTemp95);
			fVec117[0] = fTemp194;
			float fTemp195 = (0.5f * fTemp194);
			fRec156[0] = (fRec156[1] + (fConst28 * (float(yc20_get_sample(float(fTemp195), 11, 0)) - fRec156[1])));
			fRec155[0] = (fConst3 * (fRec155[1] + (fRec156[0] - fRec156[1])));
			float fTemp196 = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow5 * (((((((((((((((((fRec134[0] * fTemp8) + (fRec137[0] * fTemp16)) + (fRec140[0] * fTemp24)) + (fRec143[0] * fTemp32)) + (fRec146[0] * fTemp40)) + (fRec149[0] * fTemp48)) + (fRec152[0] * fTemp56)) + (fRec155[0] * fTemp64)) + (fRec0[0] * fTemp72)) + (fRec7[0] * fTemp80)) + (fRec13[0] * fTemp88)) + (fRec19[0] * fTemp96)) + (fRec25[0] * fTemp97)) + (fRec31[0] * fTemp98)) + (fRec37[0] * fTemp99)) + (fRec43[0] * fTemp100)) + (fRec49[0] * fTemp101))) + (fRec55[0] * fTemp102)) + (fRec61[0] * fTemp103)) + (fRec67[0] * fTemp104)) + (fRec73[0] * fTemp105)) + (fRec75[0] * fTemp106)) + (fRec77[0] * fTemp107)) + (fRec79[0] * fTemp108)) + (fRec81[0] * fTemp109)) + (fRec83[0] * fTemp110)) + (fRec85[0] * fTemp111)) + (fRec87[0] * fTemp112)) + (fRec89[0] * fTemp113)) + (fRec91[0] * fTemp114)) + (fRec93[0] * fTemp115)) + (fRec95[0] * fTemp116)) + (fRec97[0] * fTemp117)) + (fRec99[0] * fTemp118)) + (fRec101[0] * fTemp119)) + (fRec103[0] * fTemp120)) + (fRec105[0] * fTemp122)) + (fRec107[0] * fTemp124)) + (fRec109[0] * fTemp126)) + (fRec111[0] * fTemp128)) + (fRec113[0] * fTemp130)) + (fRec115[0] * fTemp132)) + (fRec117[0] * fTemp134)) + (fRec119[0] * fTemp136)) + (fRec121[0] * fTemp138)) + (fRec122[0] * fTemp140)) + (fRec123[0] * fTemp142)) + (fRec124[0] * fTemp144)) + (fRec125[0] * fTemp145)) + (fRec126[0] * fTemp147)) + (fRec127[0] * fTemp149)) + (fRec128[0] * fTemp151)) + (fRec129[0] * fTemp153)) + (fRec130[0] * fTemp155)) + (fRec131[0] * fTemp157)) + (fRec132[0] * fTemp159)) + (fRec121[0] * fTemp161)) + (fRec122[0] * fTemp163)) + (fRec123[0] * fTemp165)) + (fRec124[0] * fTemp167)) + (fRec125[0] * fTemp169)));
			float fTemp197 = ((fSlow5 * (fRec155[0] + (fRec152[0] + (fRec149[0] + (fRec146[0] + (fRec143[0] + (fRec140[0] + (fRec137[0] + (fRec134[0] + fTemp173))))))))) + ((2.0f * fTemp176) + (fRec132[0] + (fRec131[0] + (fRec130[0] + (fRec129[0] + (fRec128[0] + (fRec127[0] + (fRec126[0] + (fRec119[0] + (fRec117[0] + (fRec115[0] + (fRec113[0] + (fRec111[0] + (fRec109[0] + (fRec107[0] + (fRec105[0] + (fRec103[0] + (fRec101[0] + (fRec99[0] + (fRec97[0] + (fRec95[0] + (fRec93[0] + (fRec91[0] + (fRec89[0] + (fRec87[0] + (fRec85[0] + (fRec83[0] + (fRec81[0] + (fRec79[0] + (fRec77[0] + (fRec75[0] + (fRec73[0] + (fRec67[0] + (fRec55[0] + fRec61[0])))))))))))))))))))))))))))))))))));
			fVec118[0] = (fTemp197 - fTemp196);
			fRec158[0] = (fConst26 * (fRec158[1] + (fTemp197 - (fTemp196 + fVec118[1]))));
			iRec161[0] = (((0.5f * (fTemp6 - fVec2[1])) < 0.0f) ? (1 - iRec161[1]) : iRec161[1]);
			float fTemp198 = (float(iRec161[0]) + fTemp7);
			fVec119[0] = fTemp198;
			float fTemp199 = (0.5f * fTemp198);
			fRec160[0] = (fRec160[1] + (fConst29 * (float(yc20_get_sample(float(fTemp199), 0, 0)) - fRec160[1])));
			fRec159[0] = (fConst3 * (fRec159[1] + (fRec160[0] - fRec160[1])));
			iRec164[0] = (((0.5f * (fTemp14 - fVec6[1])) < 0.0f) ? (1 - iRec164[1]) : iRec164[1]);
			float fTemp200 = (float(iRec164[0]) + fTemp15);
			fVec120[0] = fTemp200;
			float fTemp201 = (0.5f * fTemp200);
			fRec163[0] = (fRec163[1] + (fConst29 * (float(yc20_get_sample(float(fTemp201), 1, 0)) - fRec163[1])));
			fRec162[0] = (fConst3 * (fRec162[1] + (fRec163[0] - fRec163[1])));
			iRec167[0] = (((0.5f * (fTemp22 - fVec10[1])) < 0.0f) ? (1 - iRec167[1]) : iRec167[1]);
			float fTemp202 = (float(iRec167[0]) + fTemp23);
			fVec121[0] = fTemp202;
			float fTemp203 = (0.5f * fTemp202);
			fRec166[0] = (fRec166[1] + (fConst29 * (float(yc20_get_sample(float(fTemp203), 2, 0)) - fRec166[1])));
			fRec165[0] = (fConst3 * (fRec165[1] + (fRec166[0] - fRec166[1])));
			iRec170[0] = (((0.5f * (fTemp30 - fVec14[1])) < 0.0f) ? (1 - iRec170[1]) : iRec170[1]);
			float fTemp204 = (float(iRec170[0]) + fTemp31);
			fVec122[0] = fTemp204;
			float fTemp205 = (0.5f * fTemp204);
			fRec169[0] = (fRec169[1] + (fConst29 * (float(yc20_get_sample(float(fTemp205), 3, 0)) - fRec169[1])));
			fRec168[0] = (fConst3 * (fRec168[1] + (fRec169[0] - fRec169[1])));
			float fTemp206 = (0.25f * (fTemp170 + (fTemp168 + (fTemp166 + (fTemp164 + (fTemp162 + (fTemp160 + (fTemp158 + (fTemp156 + (fTemp154 + (fTemp152 + (fTemp150 + (fTemp148 + (fTemp146 + ((((((((((((((((((((((((((((((((fSlow5 * (((((((((((((((((fRec159[0] * fTemp8) + (fRec162[0] * fTemp16)) + (fRec165[0] * fTemp24)) + (fRec168[0] * fTemp32)) + (fRec134[0] * fTemp40)) + (fRec137[0] * fTemp48)) + (fRec140[0] * fTemp56)) + (fRec143[0] * fTemp64)) + (fRec146[0] * fTemp72)) + (fRec149[0] * fTemp80)) + (fRec152[0] * fTemp88)) + (fRec155[0] * fTemp96)) + (fRec0[0] * fTemp97)) + (fRec7[0] * fTemp98)) + (fRec13[0] * fTemp99)) + (fRec19[0] * fTemp100)) + (fRec25[0] * fTemp101))) + (fRec31[0] * fTemp102)) + (fRec37[0] * fTemp103)) + (fRec43[0] * fTemp104)) + (fRec49[0] * fTemp105)) + (fRec55[0] * fTemp106)) + (fRec61[0] * fTemp107)) + (fRec67[0] * fTemp108)) + (fRec73[0] * fTemp109)) + (fRec75[0] * fTemp110)) + (fRec77[0] * fTemp111)) + (fRec79[0] * fTemp112)) + (fRec81[0] * fTemp113)) + (fRec83[0] * fTemp114)) + (fRec85[0] * fTemp115)) + (fRec87[0] * fTemp116)) + (fRec89[0] * fTemp117)) + (fRec91[0] * fTemp118)) + (fRec93[0] * fTemp119)) + (fRec95[0] * fTemp120)) + (fRec97[0] * fTemp122)) + (fRec99[0] * fTemp124)) + (fRec101[0] * fTemp126)) + (fRec103[0] * fTemp128)) + (fRec105[0] * fTemp130)) + (fRec107[0] * fTemp132)) + (fRec109[0] * fTemp134)) + (fRec111[0] * fTemp136)) + (fRec113[0] * fTemp138)) + (fRec115[0] * fTemp140)) + (fRec117[0] * fTemp142)) + (fRec119[0] * fTemp144))))))))))))))));
			float fTemp207 = ((fSlow5 * (fRec168[0] + (fRec165[0] + (fRec162[0] + (fRec159[0] + (fRec155[0] + (fRec152[0] + (fRec149[0] + (fRec146[0] + (fRec143[0] + (fRec140[0] + (fRec137[0] + (fRec134[0] + fTemp172))))))))))))) + (fRec132[0] + (fRec131[0] + (fRec130[0] + (fRec129[0] + (fRec128[0] + (fRec127[0] + (fRec126[0] + (fRec125[0] + (fRec124[0] + (fRec123[0] + (fRec122[0] + ((2.0f * fRec121[0]) + (fRec119[0] + (fRec117[0] + (fRec115[0] + (fRec113[0] + (fRec111[0] + (fRec109[0] + (fRec107[0] + (fRec105[0] + (fRec103[0] + (fRec101[0] + (fRec99[0] + (fRec97[0] + (fRec95[0] + (fRec93[0] + (fRec91[0] + (fRec89[0] + (fRec87[0] + (fRec85[0] + (fRec83[0] + (fRec81[0] + (fRec79[0] + (fRec77[0] + (fRec75[0] + (fRec73[0] + (fRec67[0] + (fRec61[0] + (fRec55[0] + (fRec49[0] + (fRec43[0] + (fRec31[0] + fRec37[0])))))))))))))))))))))))))))))))))))))))))));
			fVec123[0] = (fTemp207 - fTemp206);
			fRec171[0] = (fConst26 * (fRec171[1] + (fTemp207 - (fTemp206 + fVec123[1]))));
			float fTemp208 = (fTemp206 + (0.00200000009f * (fSlow84 * fRec171[0])));
			iRec174[0] = (((0.5f * (fTemp186 - fVec113[1])) < 0.0f) ? (1 - iRec174[1]) : iRec174[1]);
			float fTemp209 = (float(iRec174[0]) + fTemp187);
			fVec124[0] = fTemp209;
			float fTemp210 = (0.5f * fTemp209);
			fRec173[0] = (fRec173[1] + (fConst31 * (float(yc20_get_sample(float(fTemp210), 7, 0)) - fRec173[1])));
			fRec172[0] = (fConst30 * (fRec172[1] + (fRec173[0] - fRec173[1])));
			iRec177[0] = (((0.5f * (fTemp188 - fVec114[1])) < 0.0f) ? (1 - iRec177[1]) : iRec177[1]);
			float fTemp211 = (float(iRec177[0]) + fTemp189);
			fVec125[0] = fTemp211;
			float fTemp212 = (0.5f * fTemp211);
			fRec176[0] = (fRec176[1] + (fConst32 * (float(yc20_get_sample(float(fTemp212), 8, 0)) - fRec176[1])));
			fRec175[0] = (fConst30 * (fRec175[1] + (fRec176[0] - fRec176[1])));
			iRec180[0] = (((0.5f * (fTemp190 - fVec115[1])) < 0.0f) ? (1 - iRec180[1]) : iRec180[1]);
			float fTemp213 = (float(iRec180[0]) + fTemp191);
			fVec126[0] = fTemp213;
			float fTemp214 = (0.5f * fTemp213);
			fRec179[0] = (fRec179[1] + (fConst32 * (float(yc20_get_sample(float(fTemp214), 9, 0)) - fRec179[1])));
			fRec178[0] = (fConst30 * (fRec178[1] + (fRec179[0] - fRec179[1])));
			iRec183[0] = (((0.5f * (fTemp192 - fVec116[1])) < 0.0f) ? (1 - iRec183[1]) : iRec183[1]);
			float fTemp215 = (float(iRec183[0]) + fTemp193);
			fVec127[0] = fTemp215;
			float fTemp216 = (0.5f * fTemp215);
			fRec182[0] = (fRec182[1] + (fConst32 * (float(yc20_get_sample(float(fTemp216), 10, 0)) - fRec182[1])));
			fRec181[0] = (fConst30 * (fRec181[1] + (fRec182[0] - fRec182[1])));
			iRec186[0] = (((0.5f * (fTemp194 - fVec117[1])) < 0.0f) ? (1 - iRec186[1]) : iRec186[1]);
			float fTemp217 = (float(iRec186[0]) + fTemp195);
			fVec128[0] = fTemp217;
			float fTemp218 = (0.5f * fTemp217);
			fRec185[0] = (fRec185[1] + (fConst32 * (float(yc20_get_sample(float(fTemp218), 11, 0)) - fRec185[1])));
			fRec184[0] = (fConst30 * (fRec184[1] + (fRec185[0] - fRec185[1])));
			float fTemp219 = (((((((((((((((((((((((((((((((((((((((((((((fSlow5 * (((((((((((((((((fRec172[0] * fTemp8) + (fRec175[0] * fTemp16)) + (fRec178[0] * fTemp24)) + (fRec181[0] * fTemp32)) + (fRec184[0] * fTemp40)) + (fRec159[0] * fTemp48)) + (fRec162[0] * fTemp56)) + (fRec165[0] * fTemp64)) + (fRec168[0] * fTemp72)) + (fRec134[0] * fTemp80)) + (fRec137[0] * fTemp88)) + (fRec140[0] * fTemp96)) + (fRec143[0] * fTemp97)) + (fRec146[0] * fTemp98)) + (fRec149[0] * fTemp99)) + (fRec152[0] * fTemp100)) + (fRec155[0] * fTemp101))) + (fRec0[0] * fTemp102)) + (fRec7[0] * fTemp103)) + (fRec13[0] * fTemp104)) + (fRec19[0] * fTemp105)) + (fRec25[0] * fTemp106)) + (fRec31[0] * fTemp107)) + (fRec37[0] * fTemp108)) + (fRec43[0] * fTemp109)) + (fRec49[0] * fTemp110)) + (fRec55[0] * fTemp111)) + (fRec61[0] * fTemp112)) + (fRec67[0] * fTemp113)) + (fRec73[0] * fTemp114)) + (fRec75[0] * fTemp115)) + (fRec77[0] * fTemp116)) + (fRec79[0] * fTemp117)) + (fRec81[0] * fTemp118)) + (fRec83[0] * fTemp119)) + (fRec85[0] * fTemp120)) + (fRec87[0] * fTemp122)) + (fRec89[0] * fTemp124)) + (fRec91[0] * fTemp126)) + (fRec93[0] * fTemp128)) + (fRec95[0] * fTemp130)) + (fRec97[0] * fTemp132)) + (fRec99[0] * fTemp134)) + (fRec101[0] * fTemp136)) + (fRec103[0] * fTemp138)) + (fRec105[0] * fTemp140)) + (fRec107[0] * fTemp142)) + (fRec109[0] * fTemp144)) + (fRec111[0] * fTemp145)) + (fRec113[0] * fTemp147)) + (fRec115[0] * fTemp149)) + (fRec117[0] * fTemp151)) + (fRec119[0] * fTemp153)) + (fRec121[0] * fTemp155)) + (fRec122[0] * fTemp157)) + (fRec123[0] * fTemp159)) + (fRec124[0] * fTemp161)) + (fRec125[0] * fTemp163)) + (fRec126[0] * fTemp165)) + (fRec127[0] * fTemp167)) + (fRec128[0] * fTemp169));
			float fTemp220 = (0.25f * fTemp219);
			float fTemp221 = (fRec97[0] + (fRec95[0] + (fRec93[0] + (fRec91[0] + (fRec89[0] + (fRec87[0] + (fRec85[0] + (fRec83[0] + fTemp175))))))));
			float fTemp222 = (fRec121[0] + (fRec119[0] + (fRec117[0] + (fRec115[0] + (fRec113[0] + (fRec111[0] + (fRec109[0] + (fRec107[0] + (fRec105[0] + (fRec103[0] + (fRec101[0] + (fRec99[0] + fTemp221))))))))))));
			float fTemp223 = ((fSlow5 * (fRec184[0] + (fRec181[0] + (fRec178[0] + (fRec175[0] + (fRec172[0] + (fRec168[0] + (fRec165[0] + (fRec162[0] + (fRec159[0] + (fRec155[0] + (fRec152[0] + (fRec149[0] + (fRec146[0] + (fRec143[0] + (fRec140[0] + (fRec134[0] + fRec137[0]))))))))))))))))) + (fRec128[0] + (fRec127[0] + (fRec126[0] + (fRec125[0] + (fRec124[0] + (fRec123[0] + (fRec122[0] + fTemp222))))))));
			fVec129[0] = (fTemp223 - fTemp220);
			fRec187[0] = (fConst26 * (fRec187[1] + (fTemp223 - (fTemp220 + fVec129[1]))));
			float fTemp224 = (0.00200000009f * (fSlow84 * fRec187[0]));
			iRec190[0] = (((0.5f * (fTemp198 - fVec119[1])) < 0.0f) ? (1 - iRec190[1]) : iRec190[1]);
			float fTemp225 = (float(iRec190[0]) + fTemp199);
			fVec130[0] = fTemp225;
			float fTemp226 = (0.5f * fTemp225);
			fRec189[0] = (fRec189[1] + (fConst33 * (float(yc20_get_sample(float(fTemp226), 0, 0)) - fRec189[1])));
			fRec188[0] = (fConst30 * (fRec188[1] + (fRec189[0] - fRec189[1])));
			iRec193[0] = (((0.5f * (fTemp200 - fVec120[1])) < 0.0f) ? (1 - iRec193[1]) : iRec193[1]);
			float fTemp227 = (float(iRec193[0]) + fTemp201);
			fVec131[0] = fTemp227;
			float fTemp228 = (0.5f * fTemp227);
			fRec192[0] = (fRec192[1] + (fConst33 * (float(yc20_get_sample(float(fTemp228), 1, 0)) - fRec192[1])));
			fRec191[0] = (fConst30 * (fRec191[1] + (fRec192[0] - fRec192[1])));
			iRec196[0] = (((0.5f * (fTemp202 - fVec121[1])) < 0.0f) ? (1 - iRec196[1]) : iRec196[1]);
			float fTemp229 = (float(iRec196[0]) + fTemp203);
			fVec132[0] = fTemp229;
			float fTemp230 = (0.5f * fTemp229);
			fRec195[0] = (fRec195[1] + (fConst33 * (float(yc20_get_sample(float(fTemp230), 2, 0)) - fRec195[1])));
			fRec194[0] = (fConst30 * (fRec194[1] + (fRec195[0] - fRec195[1])));
			iRec199[0] = (((0.5f * (fTemp204 - fVec122[1])) < 0.0f) ? (1 - iRec199[1]) : iRec199[1]);
			float fTemp231 = (float(iRec199[0]) + fTemp205);
			fVec133[0] = fTemp231;
			float fTemp232 = (0.5f * fTemp231);
			fRec198[0] = (fRec198[1] + (fConst33 * (float(yc20_get_sample(float(fTemp232), 3, 0)) - fRec198[1])));
			fRec197[0] = (fConst30 * (fRec197[1] + (fRec198[0] - fRec198[1])));
			iRec202[0] = (((0.5f * (fTemp180 - fVec110[1])) < 0.0f) ? (1 - iRec202[1]) : iRec202[1]);
			float fTemp233 = (float(iRec202[0]) + fTemp181);
			fVec134[0] = fTemp233;
			float fTemp234 = (0.5f * fTemp233);
			fRec201[0] = (fRec201[1] + (fConst31 * (float(yc20_get_sample(float(fTemp234), 4, 0)) - fRec201[1])));
			fRec200[0] = (fConst30 * (fRec200[1] + (fRec201[0] - fRec201[1])));
			iRec205[0] = (((0.5f * (fTemp182 - fVec111[1])) < 0.0f) ? (1 - iRec205[1]) : iRec205[1]);
			float fTemp235 = (float(iRec205[0]) + fTemp183);
			fVec135[0] = fTemp235;
			float fTemp236 = (0.5f * fTemp235);
			fRec204[0] = (fRec204[1] + (fConst31 * (float(yc20_get_sample(float(fTemp236), 5, 0)) - fRec204[1])));
			fRec203[0] = (fConst30 * (fRec203[1] + (fRec204[0] - fRec204[1])));
			iRec208[0] = (((0.5f * (fTemp184 - fVec112[1])) < 0.0f) ? (1 - iRec208[1]) : iRec208[1]);
			float fTemp237 = (float(iRec208[0]) + fTemp185);
			fVec136[0] = fTemp237;
			float fTemp238 = (0.5f * fTemp237);
			fRec207[0] = (fRec207[1] + (fConst31 * (float(yc20_get_sample(float(fTemp238), 6, 0)) - fRec207[1])));
			fRec206[0] = (fConst30 * (fRec206[1] + (fRec207[0] - fRec207[1])));
			float fTemp239 = (((((((((((((((((fRec188[0] * fTemp8) + (fRec191[0] * fTemp16)) + (fRec194[0] * fTemp24)) + (fRec197[0] * fTemp32)) + (fRec200[0] * fTemp40)) + (fRec203[0] * fTemp48)) + (fRec206[0] * fTemp56)) + (fRec172[0] * fTemp64)) + (fRec175[0] * fTemp72)) + (fRec178[0] * fTemp80)) + (fRec181[0] * fTemp88)) + (fRec184[0] * fTemp96)) + (fRec159[0] * fTemp97)) + (fRec162[0] * fTemp98)) + (fRec165[0] * fTemp99)) + (fRec168[0] * fTemp100)) + (fRec134[0] * fTemp101));
			float fTemp240 = (0.25f * (fTemp170 + ((((((((((((((((((((((((((((((((((((((((((((fSlow5 * fTemp239) + (fRec137[0] * fTemp102)) + (fRec140[0] * fTemp103)) + (fRec143[0] * fTemp104)) + (fRec146[0] * fTemp105)) + (fRec149[0] * fTemp106)) + (fRec152[0] * fTemp107)) + (fRec155[0] * fTemp108)) + (fRec0[0] * fTemp109)) + (fRec7[0] * fTemp110)) + (fRec13[0] * fTemp111)) + (fRec19[0] * fTemp112)) + (fRec25[0] * fTemp113)) + (fRec31[0] * fTemp114)) + (fRec37[0] * fTemp115)) + (fRec43[0] * fTemp116)) + (fRec49[0] * fTemp117)) + (fRec55[0] * fTemp118)) + (fRec61[0] * fTemp119)) + (fRec67[0] * fTemp120)) + (fRec73[0] * fTemp122)) + (fRec75[0] * fTemp124)) + (fRec77[0] * fTemp126)) + (fRec79[0] * fTemp128)) + (fRec81[0] * fTemp130)) + (fRec83[0] * fTemp132)) + (fRec85[0] * fTemp134)) + (fRec87[0] * fTemp136)) + (fRec89[0] * fTemp138)) + (fRec91[0] * fTemp140)) + (fRec93[0] * fTemp142)) + (fRec95[0] * fTemp144)) + (fRec97[0] * fTemp145)) + (fRec99[0] * fTemp147)) + (fRec101[0] * fTemp149)) + (fRec103[0] * fTemp151)) + (fRec105[0] * fTemp153)) + (fRec107[0] * fTemp155)) + (fRec109[0] * fTemp157)) + (fRec111[0] * fTemp159)) + (fRec113[0] * fTemp161)) + (fRec115[0] * fTemp163)) + (fRec117[0] * fTemp165)) + (fRec119[0] * fTemp167))));
			float fTemp241 = ((fSlow5 * (fRec206[0] + (fRec203[0] + (fRec200[0] + (fRec197[0] + (fRec194[0] + (fRec191[0] + (fRec188[0] + (fRec184[0] + (fRec181[0] + (fRec178[0] + (fRec175[0] + (fRec172[0] + (fRec168[0] + (fRec165[0] + (fRec162[0] + (fRec134[0] + fRec159[0]))))))))))))))))) + (fRec155[0] + (fRec152[0] + (fRec149[0] + (fRec146[0] + (fRec143[0] + (fRec140[0] + (fRec137[0] + fTemp222))))))));
			fVec137[0] = (fTemp241 - fTemp240);
			fRec209[0] = (fConst26 * (fRec209[1] + (fTemp241 - (fTemp240 + fVec137[1]))));
			float fTemp242 = (fTemp240 + (0.00200000009f * (fSlow84 * fRec209[0])));
			iRec212[0] = (((0.5f * (fTemp225 - fVec130[1])) < 0.0f) ? (1 - iRec212[1]) : iRec212[1]);
			float fTemp243 = (float(iRec212[0]) + fTemp226);
			fVec138[0] = fTemp243;
			float fTemp244 = (0.5f * fTemp243);
			fRec211[0] = (fRec211[1] + (fConst35 * (float(yc20_get_sample(float(fTemp244), 0, 0)) - fRec211[1])));
			fRec210[0] = (fConst34 * (fRec210[1] + (fRec211[0] - fRec211[1])));
			iRec215[0] = (((0.5f * (fTemp227 - fVec131[1])) < 0.0f) ? (1 - iRec215[1]) : iRec215[1]);
			float fTemp245 = (float(iRec215[0]) + fTemp228);
			fVec139[0] = fTemp245;
			float fTemp246 = (0.5f * fTemp245);
			fRec214[0] = (fRec214[1] + (fConst35 * (float(yc20_get_sample(float(fTemp246), 1, 0)) - fRec214[1])));
			fRec213[0] = (fConst34 * (fRec213[1] + (fRec214[0] - fRec214[1])));
			iRec218[0] = (((0.5f * (fTemp229 - fVec132[1])) < 0.0f) ? (1 - iRec218[1]) : iRec218[1]);
			float fTemp247 = (float(iRec218[0]) + fTemp230);
			fVec140[0] = fTemp247;
			float fTemp248 = (0.5f * fTemp247);
			fRec217[0] = (fRec217[1] + (fConst35 * (float(yc20_get_sample(float(fTemp248), 2, 0)) - fRec217[1])));
			fRec216[0] = (fConst34 * (fRec216[1] + (fRec217[0] - fRec217[1])));
			iRec221[0] = (((0.5f * (fTemp231 - fVec133[1])) < 0.0f) ? (1 - iRec221[1]) : iRec221[1]);
			float fTemp249 = (float(iRec221[0]) + fTemp232);
			fVec141[0] = fTemp249;
			float fTemp250 = (0.5f * fTemp249);
			fRec220[0] = (fRec220[1] + (fConst35 * (float(yc20_get_sample(float(fTemp250), 3, 0)) - fRec220[1])));
			fRec219[0] = (fConst34 * (fRec219[1] + (fRec220[0] - fRec220[1])));
			iRec224[0] = (((0.5f * (fTemp233 - fVec134[1])) < 0.0f) ? (1 - iRec224[1]) : iRec224[1]);
			float fTemp251 = (float(iRec224[0]) + fTemp234);
			fVec142[0] = fTemp251;
			float fTemp252 = (0.5f * fTemp251);
			fRec223[0] = (fRec223[1] + (fConst36 * (float(yc20_get_sample(float(fTemp252), 4, 0)) - fRec223[1])));
			fRec222[0] = (fConst34 * (fRec222[1] + (fRec223[0] - fRec223[1])));
			iRec227[0] = (((0.5f * (fTemp235 - fVec135[1])) < 0.0f) ? (1 - iRec227[1]) : iRec227[1]);
			float fTemp253 = (float(iRec227[0]) + fTemp236);
			fVec143[0] = fTemp253;
			float fTemp254 = (0.5f * fTemp253);
			fRec226[0] = (fRec226[1] + (fConst36 * (float(yc20_get_sample(float(fTemp254), 5, 0)) - fRec226[1])));
			fRec225[0] = (fConst34 * (fRec225[1] + (fRec226[0] - fRec226[1])));
			iRec230[0] = (((0.5f * (fTemp237 - fVec136[1])) < 0.0f) ? (1 - iRec230[1]) : iRec230[1]);
			float fTemp255 = (float(iRec230[0]) + fTemp238);
			fVec144[0] = fTemp255;
			float fTemp256 = (0.5f * fTemp255);
			fRec229[0] = (fRec229[1] + (fConst36 * (float(yc20_get_sample(float(fTemp256), 6, 0)) - fRec229[1])));
			fRec228[0] = (fConst34 * (fRec228[1] + (fRec229[0] - fRec229[1])));
			iRec233[0] = (((0.5f * (fTemp209 - fVec124[1])) < 0.0f) ? (1 - iRec233[1]) : iRec233[1]);
			float fTemp257 = (float(iRec233[0]) + fTemp210);
			fVec145[0] = fTemp257;
			float fTemp258 = (0.5f * fTemp257);
			fRec232[0] = (fRec232[1] + (fConst36 * (float(yc20_get_sample(float(fTemp258), 7, 0)) - fRec232[1])));
			fRec231[0] = (fConst34 * (fRec231[1] + (fRec232[0] - fRec232[1])));
			iRec236[0] = (((0.5f * (fTemp211 - fVec125[1])) < 0.0f) ? (1 - iRec236[1]) : iRec236[1]);
			float fTemp259 = (float(iRec236[0]) + fTemp212);
			fVec146[0] = fTemp259;
			float fTemp260 = (0.5f * fTemp259);
			fRec235[0] = (fRec235[1] + (fConst33 * (float(yc20_get_sample(float(fTemp260), 8, 0)) - fRec235[1])));
			fRec234[0] = (fConst34 * (fRec234[1] + (fRec235[0] - fRec235[1])));
			iRec239[0] = (((0.5f * (fTemp213 - fVec126[1])) < 0.0f) ? (1 - iRec239[1]) : iRec239[1]);
			float fTemp261 = (float(iRec239[0]) + fTemp214);
			fVec147[0] = fTemp261;
			float fTemp262 = (0.5f * fTemp261);
			fRec238[0] = (fRec238[1] + (fConst33 * (float(yc20_get_sample(float(fTemp262), 9, 0)) - fRec238[1])));
			fRec237[0] = (fConst34 * (fRec237[1] + (fRec238[0] - fRec238[1])));
			iRec242[0] = (((0.5f * (fTemp215 - fVec127[1])) < 0.0f) ? (1 - iRec242[1]) : iRec242[1]);
			float fTemp263 = (float(iRec242[0]) + fTemp216);
			fVec148[0] = fTemp263;
			float fTemp264 = (0.5f * fTemp263);
			fRec241[0] = (fRec241[1] + (fConst33 * (float(yc20_get_sample(float(fTemp264), 10, 0)) - fRec241[1])));
			fRec240[0] = (fConst34 * (fRec240[1] + (fRec241[0] - fRec241[1])));
			iRec245[0] = (((0.5f * (fTemp217 - fVec128[1])) < 0.0f) ? (1 - iRec245[1]) : iRec245[1]);
			float fTemp265 = (float(iRec245[0]) + fTemp218);
			fVec149[0] = fTemp265;
			float fTemp266 = (0.5f * fTemp265);
			fRec244[0] = (fRec244[1] + (fConst33 * (float(yc20_get_sample(float(fTemp266), 11, 0)) - fRec244[1])));
			fRec243[0] = (fConst34 * (fRec243[1] + (fRec244[0] - fRec244[1])));
			float fTemp267 = (((((((((((((((((fRec210[0] * fTemp8) + (fRec213[0] * fTemp16)) + (fRec216[0] * fTemp24)) + (fRec219[0] * fTemp32)) + (fRec222[0] * fTemp40)) + (fRec225[0] * fTemp48)) + (fRec228[0] * fTemp56)) + (fRec231[0] * fTemp64)) + (fRec234[0] * fTemp72)) + (fRec237[0] * fTemp80)) + (fRec240[0] * fTemp88)) + (fRec243[0] * fTemp96)) + (fRec188[0] * fTemp97)) + (fRec191[0] * fTemp98)) + (fRec194[0] * fTemp99)) + (fRec197[0] * fTemp100)) + (fRec200[0] * fTemp101));
			float fTemp268 = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow5 * fTemp267) + (fRec203[0] * fTemp102)) + (fRec206[0] * fTemp103)) + (fRec172[0] * fTemp104)) + (fRec175[0] * fTemp105)) + (fRec178[0] * fTemp106)) + (fRec181[0] * fTemp107)) + (fRec184[0] * fTemp108)) + (fRec159[0] * fTemp109)) + (fRec162[0] * fTemp110)) + (fRec165[0] * fTemp111)) + (fRec168[0] * fTemp112)) + (fRec134[0] * fTemp113)) + (fRec137[0] * fTemp114)) + (fRec140[0] * fTemp115)) + (fRec143[0] * fTemp116)) + (fRec146[0] * fTemp117)) + (fRec149[0] * fTemp118)) + (fRec152[0] * fTemp119)) + (fRec155[0] * fTemp120)) + (fRec0[0] * fTemp122)) + (fRec7[0] * fTemp124)) + (fRec13[0] * fTemp126)) + (fRec19[0] * fTemp128)) + (fRec25[0] * fTemp130)) + (fRec31[0] * fTemp132)) + (fRec37[0] * fTemp134)) + (fRec43[0] * fTemp136)) + (fRec49[0] * fTemp138)) + (fRec55[0] * fTemp140)) + (fRec61[0] * fTemp142)) + (fRec67[0] * fTemp144)) + (fRec73[0] * fTemp145)) + (fRec75[0] * fTemp147)) + (fRec77[0] * fTemp149)) + (fRec79[0] * fTemp151)) + (fRec81[0] * fTemp153)) + (fRec83[0] * fTemp155)) + (fRec85[0] * fTemp157)) + (fRec87[0] * fTemp159)) + (fRec89[0] * fTemp161)) + (fRec91[0] * fTemp163)) + (fRec93[0] * fTemp165)) + (fRec95[0] * fTemp167)) + (fRec97[0] * fTemp169)));
			float fTemp269 = ((fSlow5 * (fRec243[0] + (fRec240[0] + (fRec237[0] + (fRec234[0] + (fRec231[0] + (fRec228[0] + (fRec225[0] + (fRec222[0] + (fRec219[0] + (fRec216[0] + (fRec213[0] + (fRec210[0] + (fRec200[0] + (fRec197[0] + (fRec194[0] + (fRec188[0] + fRec191[0]))))))))))))))))) + (fRec206[0] + (fRec203[0] + (fRec184[0] + (fRec181[0] + (fRec178[0] + (fRec175[0] + (fRec172[0] + (fRec168[0] + (fRec165[0] + (fRec162[0] + (fRec159[0] + (fRec155[0] + (fRec152[0] + (fRec149[0] + (fRec146[0] + (fRec143[0] + (fRec140[0] + (fRec137[0] + (fRec134[0] + fTemp221))))))))))))))))))));
			fVec150[0] = (fTemp269 - fTemp268);
			fRec246[0] = (fConst26 * (fRec246[1] + (fTemp269 - (fTemp268 + fVec150[1]))));
			float fTemp270 = (fTemp268 + (0.00200000009f * (fSlow84 * fRec246[0])));
			iRec249[0] = (((0.5f * (fTemp243 - fVec138[1])) < 0.0f) ? (1 - iRec249[1]) : iRec249[1]);
			fRec248[0] = (fRec248[1] + (fConst38 * (float(yc20_get_sample(float((0.5f * (float(iRec249[0]) + fTemp244))), 0, 0)) - fRec248[1])));
			fRec247[0] = (fConst37 * (fRec247[1] + (fRec248[0] - fRec248[1])));
			iRec252[0] = (((0.5f * (fTemp245 - fVec139[1])) < 0.0f) ? (1 - iRec252[1]) : iRec252[1]);
			fRec251[0] = (fRec251[1] + (fConst38 * (float(yc20_get_sample(float((0.5f * (float(iRec252[0]) + fTemp246))), 1, 0)) - fRec251[1])));
			fRec250[0] = (fConst37 * (fRec250[1] + (fRec251[0] - fRec251[1])));
			iRec255[0] = (((0.5f * (fTemp247 - fVec140[1])) < 0.0f) ? (1 - iRec255[1]) : iRec255[1]);
			fRec254[0] = (fRec254[1] + (fConst38 * (float(yc20_get_sample(float((0.5f * (float(iRec255[0]) + fTemp248))), 2, 0)) - fRec254[1])));
			fRec253[0] = (fConst37 * (fRec253[1] + (fRec254[0] - fRec254[1])));
			iRec258[0] = (((0.5f * (fTemp249 - fVec141[1])) < 0.0f) ? (1 - iRec258[1]) : iRec258[1]);
			fRec257[0] = (fRec257[1] + (fConst38 * (float(yc20_get_sample(float((0.5f * (float(iRec258[0]) + fTemp250))), 3, 0)) - fRec257[1])));
			fRec256[0] = (fConst37 * (fRec256[1] + (fRec257[0] - fRec257[1])));
			iRec261[0] = (((0.5f * (fTemp251 - fVec142[1])) < 0.0f) ? (1 - iRec261[1]) : iRec261[1]);
			fRec260[0] = (fRec260[1] + (fConst38 * (float(yc20_get_sample(float((0.5f * (float(iRec261[0]) + fTemp252))), 4, 0)) - fRec260[1])));
			fRec259[0] = (fConst37 * (fRec259[1] + (fRec260[0] - fRec260[1])));
			iRec264[0] = (((0.5f * (fTemp253 - fVec143[1])) < 0.0f) ? (1 - iRec264[1]) : iRec264[1]);
			fRec263[0] = (fRec263[1] + (fConst38 * (float(yc20_get_sample(float((0.5f * (float(iRec264[0]) + fTemp254))), 5, 0)) - fRec263[1])));
			fRec262[0] = (fConst37 * (fRec262[1] + (fRec263[0] - fRec263[1])));
			iRec267[0] = (((0.5f * (fTemp255 - fVec144[1])) < 0.0f) ? (1 - iRec267[1]) : iRec267[1]);
			fRec266[0] = (fRec266[1] + (fConst38 * (float(yc20_get_sample(float((0.5f * (float(iRec267[0]) + fTemp256))), 6, 0)) - fRec266[1])));
			fRec265[0] = (fConst37 * (fRec265[1] + (fRec266[0] - fRec266[1])));
			iRec270[0] = (((0.5f * (fTemp257 - fVec145[1])) < 0.0f) ? (1 - iRec270[1]) : iRec270[1]);
			fRec269[0] = (fRec269[1] + (fConst38 * (float(yc20_get_sample(float((0.5f * (float(iRec270[0]) + fTemp258))), 7, 0)) - fRec269[1])));
			fRec268[0] = (fConst37 * (fRec268[1] + (fRec269[0] - fRec269[1])));
			iRec273[0] = (((0.5f * (fTemp259 - fVec146[1])) < 0.0f) ? (1 - iRec273[1]) : iRec273[1]);
			fRec272[0] = (fRec272[1] + (fConst35 * (float(yc20_get_sample(float((0.5f * (float(iRec273[0]) + fTemp260))), 8, 0)) - fRec272[1])));
			fRec271[0] = (fConst37 * (fRec271[1] + (fRec272[0] - fRec272[1])));
			iRec276[0] = (((0.5f * (fTemp261 - fVec147[1])) < 0.0f) ? (1 - iRec276[1]) : iRec276[1]);
			fRec275[0] = (fRec275[1] + (fConst35 * (float(yc20_get_sample(float((0.5f * (float(iRec276[0]) + fTemp262))), 9, 0)) - fRec275[1])));
			fRec274[0] = (fConst37 * (fRec274[1] + (fRec275[0] - fRec275[1])));
			iRec279[0] = (((0.5f * (fTemp263 - fVec148[1])) < 0.0f) ? (1 - iRec279[1]) : iRec279[1]);
			fRec278[0] = (fRec278[1] + (fConst35 * (float(yc20_get_sample(float((0.5f * (float(iRec279[0]) + fTemp264))), 10, 0)) - fRec278[1])));
			fRec277[0] = (fConst37 * (fRec277[1] + (fRec278[0] - fRec278[1])));
			iRec282[0] = (((0.5f * (fTemp265 - fVec149[1])) < 0.0f) ? (1 - iRec282[1]) : iRec282[1]);
			fRec281[0] = (fRec281[1] + (fConst35 * (float(yc20_get_sample(float((0.5f * (float(iRec282[0]) + fTemp266))), 11, 0)) - fRec281[1])));
			fRec280[0] = (fConst37 * (fRec280[1] + (fRec281[0] - fRec281[1])));
			float fTemp271 = (((((((((((((((((fRec247[0] * fTemp8) + (fRec250[0] * fTemp16)) + (fRec253[0] * fTemp24)) + (fRec256[0] * fTemp32)) + (fRec259[0] * fTemp40)) + (fRec262[0] * fTemp48)) + (fRec265[0] * fTemp56)) + (fRec268[0] * fTemp64)) + (fRec271[0] * fTemp72)) + (fRec274[0] * fTemp80)) + (fRec277[0] * fTemp88)) + (fRec280[0] * fTemp96)) + (fRec210[0] * fTemp97)) + (fRec213[0] * fTemp98)) + (fRec216[0] * fTemp99)) + (fRec219[0] * fTemp100)) + (fRec222[0] * fTemp101));
			float fTemp272 = (0.419750005f * (((((((((((((((((((((((((((((((((((((((((((((fSlow5 * fTemp271) + (fRec225[0] * fTemp102)) + (fRec228[0] * fTemp103)) + (fRec231[0] * fTemp104)) + (fRec234[0] * fTemp105)) + (fRec237[0] * fTemp106)) + (fRec240[0] * fTemp107)) + (fRec243[0] * fTemp108)) + (fRec188[0] * fTemp109)) + (fRec191[0] * fTemp110)) + (fRec194[0] * fTemp111)) + (fRec197[0] * fTemp112)) + (fRec200[0] * fTemp113)) + (fRec203[0] * fTemp114)) + (fRec206[0] * fTemp115)) + (fRec172[0] * fTemp116)) + (fRec175[0] * fTemp117)) + (fRec178[0] * fTemp118)) + (fRec181[0] * fTemp119)) + (fRec184[0] * fTemp120)) + (fRec159[0] * fTemp122)) + (fRec162[0] * fTemp124)) + (fRec165[0] * fTemp126)) + (fRec168[0] * fTemp128)) + (fRec134[0] * fTemp130)) + (fRec137[0] * fTemp132)) + (fRec140[0] * fTemp134)) + (fRec143[0] * fTemp136)) + (fRec146[0] * fTemp138)) + (fRec149[0] * fTemp140)) + (fRec152[0] * fTemp142)) + (fRec155[0] * fTemp144)) + (fRec0[0] * fTemp145)) + (fRec7[0] * fTemp147)) + (fRec13[0] * fTemp149)) + (fRec19[0] * fTemp151)) + (fRec25[0] * fTemp153)) + (fRec31[0] * fTemp155)) + (fRec37[0] * fTemp157)) + (fRec43[0] * fTemp159)) + (fRec49[0] * fTemp161)) + (fRec55[0] * fTemp163)) + (fRec61[0] * fTemp165)) + (fRec67[0] * fTemp167)) + (fRec73[0] * fTemp169)));
			float fTemp273 = (1.67900002f * ((fSlow5 * (fRec280[0] + (fRec277[0] + (fRec274[0] + (fRec271[0] + (fRec268[0] + (fRec265[0] + (fRec262[0] + (fRec259[0] + (fRec256[0] + (fRec253[0] + (fRec250[0] + (fRec247[0] + (fRec222[0] + (fRec219[0] + (fRec216[0] + (fRec210[0] + fRec213[0]))))))))))))))))) + (fRec243[0] + (fRec240[0] + (fRec237[0] + (fRec234[0] + (fRec231[0] + (fRec228[0] + (fRec225[0] + (fRec206[0] + (fRec203[0] + (fRec200[0] + (fRec197[0] + (fRec194[0] + (fRec191[0] + (fRec188[0] + (fRec184[0] + (fRec181[0] + (fRec178[0] + (fRec175[0] + (fRec172[0] + (fRec168[0] + (fRec165[0] + (fRec162[0] + (fRec159[0] + (fRec155[0] + (fRec152[0] + (fRec149[0] + (fRec146[0] + (fRec143[0] + (fRec140[0] + (fRec137[0] + (fRec134[0] + fTemp174)))))))))))))))))))))))))))))))));
			fVec151[0] = (fTemp273 - fTemp272);
			fRec283[0] = (fConst26 * (fRec283[1] + (fTemp273 - (fTemp272 + fVec151[1]))));
			float fTemp274 = (fTemp272 + (0.00200000009f * (fSlow84 * fRec283[0])));
			float fTemp275 = (fSlow101 * fTemp208);
			fVec152[0] = fTemp275;
			fRec285[0] = (fConst40 * (fRec285[1] + (fTemp275 - fVec152[1])));
			float fTemp276 = ((0.541666687f * fRec285[0]) + (fSlow102 * fTemp208));
			fVec153[0] = fTemp276;
			fRec284[0] = (fConst39 * (fRec284[1] + (fTemp276 - fVec153[1])));
			float fTemp277 = (fSlow104 * fTemp242);
			fVec154[0] = fTemp277;
			fRec287[0] = (fConst42 * (fRec287[1] + (fTemp277 - fVec154[1])));
			float fTemp278 = ((0.541666687f * fRec287[0]) + (fSlow105 * fTemp242));
			fVec155[0] = fTemp278;
			fRec286[0] = (fConst41 * (fRec286[1] + (fTemp278 - fVec155[1])));
			float fTemp279 = (fSlow107 * fTemp270);
			fVec156[0] = fTemp279;
			fRec289[0] = (fConst44 * (fRec289[1] + (fTemp279 - fVec156[1])));
			float fTemp280 = ((0.541666687f * fRec289[0]) + (fSlow108 * fTemp270));
			fVec157[0] = fTemp280;
			fRec288[0] = (fConst43 * (fRec288[1] + (fTemp280 - fVec157[1])));
			float fTemp281 = (fSlow110 * fTemp274);
			fVec158[0] = fTemp281;
			fRec291[0] = (fConst46 * (fRec291[1] + (fTemp281 - fVec158[1])));
			float fTemp282 = ((0.541666687f * fRec291[0]) + (fSlow111 * fTemp274));
			fVec159[0] = fTemp282;
			fRec290[0] = (fConst45 * (fRec290[1] + (fTemp282 - fVec159[1])));
			fRec293[0] = (fRec293[1] + (fConst22 * (fTemp275 - fRec293[1])));
			fRec292[0] = (fRec292[1] + (fConst22 * (fRec293[0] - fRec292[1])));
			fRec295[0] = (fRec295[1] + (fConst19 * (fTemp277 - fRec295[1])));
			fRec294[0] = (fRec294[1] + (fConst19 * (fRec295[0] - fRec294[1])));
			fRec297[0] = (fRec297[1] + (fConst4 * (fTemp279 - fRec297[1])));
			fRec296[0] = (fRec296[1] + (fConst4 * (fRec297[0] - fRec296[1])));
			fRec299[0] = (fRec299[1] + (fConst27 * (fTemp281 - fRec299[1])));
			fRec298[0] = (fRec298[1] + (fConst27 * (fRec299[0] - fRec298[1])));
			int iTemp283 = (iRec303[1] < iConst50);
			iRec305[0] = ((1103515245 * iRec305[1]) + 12345);
			float fTemp284 = mydsp_faustpower2_f(std::min<float>(1.0f, std::max<float>(-1.0f, (fTemp178 + (fTemp171 + (4.65661286e-16f * float(iRec305[0])))))));
			fRec302[0] = (iTemp283 ? (fTemp284 + fRec302[1]) : fTemp284);
			iRec303[0] = (iTemp283 ? (iRec303[1] + 1) : 1);
			fRec304[0] = (iTemp283 ? fRec304[1] : fRec302[1]);
			float fTemp285 = std::log10(std::sqrt((fConst51 * fRec304[0])));
			fVec160[0] = fTemp285;
			float fTemp286 = (20.0f * fTemp285);
			float fTemp287 = (20.0f * fVec160[1]);
			fRec301[0] = std::min<float>(1.0f, std::max<float>(0.0f, ((fRec301[1] + ((fTemp286 > -25.0f) ? ((fTemp287 < -25.0f) ? 1.0f : 0.0f) : 0.0f)) - ((fTemp287 > -35.0f) ? ((fTemp286 < -35.0f) ? 1.0f : 0.0f) : 0.0f))));
			fRec300[0] = ((fConst49 * fRec300[1]) + (fConst48 * ((fRec301[0] > 0.5f) ? ((fRec301[1] < 0.5f) ? 1.0f : 0.0f) : 0.0f)));
			float fTemp288 = std::min<float>(1.0f, (fConst47 * fRec300[0]));
			fVec161[0] = fTemp288;
			fRec306[0] = (fRec306[1] + (fConst52 * ((fSlow4 * ((fSlow116 * ((0.25f * fTemp267) + (0.125f * fTemp239))) + (fSlow118 * (((0.25f * fTemp271) + (0.125f * fTemp267)) + (0.0625f * fTemp239))))) - fRec306[1])));
			fRec307[0] = (fSlow119 + (0.980000019f * fRec307[1]));
			fRec308[0] = (fSlow120 + (0.980000019f * fRec308[1]));
			float fTemp289 = (((((fSlow1 * (((((((fSlow3 * fTemp179) + (fSlow86 * (fTemp196 + (0.00200000009f * (fSlow84 * fRec158[0]))))) + (fSlow88 * fTemp208)) + (fSlow90 * (fTemp220 + fTemp224))) + (fSlow92 * fTemp242)) + (fSlow94 * fTemp270)) + (fSlow96 * fTemp274))) + (fSlow97 * ((fSlow99 * (((fRec284[0] + fRec286[0]) + fRec288[0]) + fRec290[0])) + (fSlow112 * (((fRec292[0] + fRec294[0]) + fRec296[0]) + fRec298[0]))))) + (fSlow113 * (((0.25f * (fTemp179 + fTemp219)) + (fTemp224 + (0.5f * fTemp274))) * std::max<float>(fSlow114, (0.25f * (((fTemp288 + fVec161[2]) + fVec161[3]) + fVec161[4])))))) + (fRec306[0] * ((4.5f * fRec307[0]) + 0.5f))) * ((0.0500000007f * fRec308[0]) + 0.00100000005f));
			output0[i] = FAUSTFLOAT(fTemp289);
			output1[i] = FAUSTFLOAT(fTemp289);
			fRec5[1] = fRec5[0];
			fRec4[1] = fRec4[0];
			iRec6[1] = iRec6[0];
			fVec0[1] = fVec0[0];
			iRec3[1] = iRec3[0];
			fVec1[1] = fVec1[0];
			iRec2[1] = iRec2[0];
			fVec2[1] = fVec2[0];
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fVec3[j0] = fVec3[(j0 - 1)];
			}
			fRec11[1] = fRec11[0];
			iRec12[1] = iRec12[0];
			fVec4[1] = fVec4[0];
			iRec10[1] = iRec10[0];
			fVec5[1] = fVec5[0];
			iRec9[1] = iRec9[0];
			fVec6[1] = fVec6[0];
			fRec8[1] = fRec8[0];
			fRec7[1] = fRec7[0];
			for (int j1 = 3; (j1 > 0); j1 = (j1 - 1)) {
				fVec7[j1] = fVec7[(j1 - 1)];
			}
			fRec17[1] = fRec17[0];
			iRec18[1] = iRec18[0];
			fVec8[1] = fVec8[0];
			iRec16[1] = iRec16[0];
			fVec9[1] = fVec9[0];
			iRec15[1] = iRec15[0];
			fVec10[1] = fVec10[0];
			fRec14[1] = fRec14[0];
			fRec13[1] = fRec13[0];
			for (int j2 = 3; (j2 > 0); j2 = (j2 - 1)) {
				fVec11[j2] = fVec11[(j2 - 1)];
			}
			fRec23[1] = fRec23[0];
			iRec24[1] = iRec24[0];
			fVec12[1] = fVec12[0];
			iRec22[1] = iRec22[0];
			fVec13[1] = fVec13[0];
			iRec21[1] = iRec21[0];
			fVec14[1] = fVec14[0];
			fRec20[1] = fRec20[0];
			fRec19[1] = fRec19[0];
			for (int j3 = 3; (j3 > 0); j3 = (j3 - 1)) {
				fVec15[j3] = fVec15[(j3 - 1)];
			}
			fRec29[1] = fRec29[0];
			iRec30[1] = iRec30[0];
			fVec16[1] = fVec16[0];
			iRec28[1] = iRec28[0];
			fVec17[1] = fVec17[0];
			iRec27[1] = iRec27[0];
			fVec18[1] = fVec18[0];
			fRec26[1] = fRec26[0];
			fRec25[1] = fRec25[0];
			for (int j4 = 3; (j4 > 0); j4 = (j4 - 1)) {
				fVec19[j4] = fVec19[(j4 - 1)];
			}
			fRec35[1] = fRec35[0];
			iRec36[1] = iRec36[0];
			fVec20[1] = fVec20[0];
			iRec34[1] = iRec34[0];
			fVec21[1] = fVec21[0];
			iRec33[1] = iRec33[0];
			fVec22[1] = fVec22[0];
			fRec32[1] = fRec32[0];
			fRec31[1] = fRec31[0];
			for (int j5 = 3; (j5 > 0); j5 = (j5 - 1)) {
				fVec23[j5] = fVec23[(j5 - 1)];
			}
			fRec41[1] = fRec41[0];
			iRec42[1] = iRec42[0];
			fVec24[1] = fVec24[0];
			iRec40[1] = iRec40[0];
			fVec25[1] = fVec25[0];
			iRec39[1] = iRec39[0];
			fVec26[1] = fVec26[0];
			fRec38[1] = fRec38[0];
			fRec37[1] = fRec37[0];
			for (int j6 = 3; (j6 > 0); j6 = (j6 - 1)) {
				fVec27[j6] = fVec27[(j6 - 1)];
			}
			fRec47[1] = fRec47[0];
			iRec48[1] = iRec48[0];
			fVec28[1] = fVec28[0];
			iRec46[1] = iRec46[0];
			fVec29[1] = fVec29[0];
			iRec45[1] = iRec45[0];
			fVec30[1] = fVec30[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			for (int j7 = 3; (j7 > 0); j7 = (j7 - 1)) {
				fVec31[j7] = fVec31[(j7 - 1)];
			}
			fRec53[1] = fRec53[0];
			iRec54[1] = iRec54[0];
			fVec32[1] = fVec32[0];
			iRec52[1] = iRec52[0];
			fVec33[1] = fVec33[0];
			iRec51[1] = iRec51[0];
			fVec34[1] = fVec34[0];
			fRec50[1] = fRec50[0];
			fRec49[1] = fRec49[0];
			for (int j8 = 3; (j8 > 0); j8 = (j8 - 1)) {
				fVec35[j8] = fVec35[(j8 - 1)];
			}
			fRec59[1] = fRec59[0];
			iRec60[1] = iRec60[0];
			fVec36[1] = fVec36[0];
			iRec58[1] = iRec58[0];
			fVec37[1] = fVec37[0];
			iRec57[1] = iRec57[0];
			fVec38[1] = fVec38[0];
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			for (int j9 = 3; (j9 > 0); j9 = (j9 - 1)) {
				fVec39[j9] = fVec39[(j9 - 1)];
			}
			fRec65[1] = fRec65[0];
			iRec66[1] = iRec66[0];
			fVec40[1] = fVec40[0];
			iRec64[1] = iRec64[0];
			fVec41[1] = fVec41[0];
			iRec63[1] = iRec63[0];
			fVec42[1] = fVec42[0];
			fRec62[1] = fRec62[0];
			fRec61[1] = fRec61[0];
			for (int j10 = 3; (j10 > 0); j10 = (j10 - 1)) {
				fVec43[j10] = fVec43[(j10 - 1)];
			}
			fRec71[1] = fRec71[0];
			iRec72[1] = iRec72[0];
			fVec44[1] = fVec44[0];
			iRec70[1] = iRec70[0];
			fVec45[1] = fVec45[0];
			iRec69[1] = iRec69[0];
			fVec46[1] = fVec46[0];
			fRec68[1] = fRec68[0];
			fRec67[1] = fRec67[0];
			for (int j11 = 3; (j11 > 0); j11 = (j11 - 1)) {
				fVec47[j11] = fVec47[(j11 - 1)];
			}
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			for (int j12 = 3; (j12 > 0); j12 = (j12 - 1)) {
				fVec48[j12] = fVec48[(j12 - 1)];
			}
			fRec76[1] = fRec76[0];
			fRec75[1] = fRec75[0];
			for (int j13 = 3; (j13 > 0); j13 = (j13 - 1)) {
				fVec49[j13] = fVec49[(j13 - 1)];
			}
			fRec78[1] = fRec78[0];
			fRec77[1] = fRec77[0];
			for (int j14 = 3; (j14 > 0); j14 = (j14 - 1)) {
				fVec50[j14] = fVec50[(j14 - 1)];
			}
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			for (int j15 = 3; (j15 > 0); j15 = (j15 - 1)) {
				fVec51[j15] = fVec51[(j15 - 1)];
			}
			fRec82[1] = fRec82[0];
			fRec81[1] = fRec81[0];
			for (int j16 = 3; (j16 > 0); j16 = (j16 - 1)) {
				fVec52[j16] = fVec52[(j16 - 1)];
			}
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			for (int j17 = 3; (j17 > 0); j17 = (j17 - 1)) {
				fVec53[j17] = fVec53[(j17 - 1)];
			}
			fRec86[1] = fRec86[0];
			fRec85[1] = fRec85[0];
			for (int j18 = 3; (j18 > 0); j18 = (j18 - 1)) {
				fVec54[j18] = fVec54[(j18 - 1)];
			}
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			for (int j19 = 3; (j19 > 0); j19 = (j19 - 1)) {
				fVec55[j19] = fVec55[(j19 - 1)];
			}
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			for (int j20 = 3; (j20 > 0); j20 = (j20 - 1)) {
				fVec56[j20] = fVec56[(j20 - 1)];
			}
			fRec92[1] = fRec92[0];
			fRec91[1] = fRec91[0];
			for (int j21 = 3; (j21 > 0); j21 = (j21 - 1)) {
				fVec57[j21] = fVec57[(j21 - 1)];
			}
			fRec94[1] = fRec94[0];
			fRec93[1] = fRec93[0];
			for (int j22 = 3; (j22 > 0); j22 = (j22 - 1)) {
				fVec58[j22] = fVec58[(j22 - 1)];
			}
			fRec96[1] = fRec96[0];
			fRec95[1] = fRec95[0];
			for (int j23 = 3; (j23 > 0); j23 = (j23 - 1)) {
				fVec59[j23] = fVec59[(j23 - 1)];
			}
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			for (int j24 = 3; (j24 > 0); j24 = (j24 - 1)) {
				fVec60[j24] = fVec60[(j24 - 1)];
			}
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			for (int j25 = 3; (j25 > 0); j25 = (j25 - 1)) {
				fVec61[j25] = fVec61[(j25 - 1)];
			}
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			for (int j26 = 3; (j26 > 0); j26 = (j26 - 1)) {
				fVec62[j26] = fVec62[(j26 - 1)];
			}
			fRec104[1] = fRec104[0];
			fRec103[1] = fRec103[0];
			for (int j27 = 3; (j27 > 0); j27 = (j27 - 1)) {
				fVec63[j27] = fVec63[(j27 - 1)];
			}
			fRec106[1] = fRec106[0];
			fRec105[1] = fRec105[0];
			for (int j28 = 3; (j28 > 0); j28 = (j28 - 1)) {
				fVec64[j28] = fVec64[(j28 - 1)];
			}
			fRec108[1] = fRec108[0];
			fRec107[1] = fRec107[0];
			for (int j29 = 3; (j29 > 0); j29 = (j29 - 1)) {
				fVec65[j29] = fVec65[(j29 - 1)];
			}
			fRec110[1] = fRec110[0];
			fRec109[1] = fRec109[0];
			for (int j30 = 3; (j30 > 0); j30 = (j30 - 1)) {
				fVec66[j30] = fVec66[(j30 - 1)];
			}
			fRec112[1] = fRec112[0];
			fRec111[1] = fRec111[0];
			for (int j31 = 3; (j31 > 0); j31 = (j31 - 1)) {
				fVec67[j31] = fVec67[(j31 - 1)];
			}
			fRec114[1] = fRec114[0];
			fRec113[1] = fRec113[0];
			for (int j32 = 3; (j32 > 0); j32 = (j32 - 1)) {
				fVec68[j32] = fVec68[(j32 - 1)];
			}
			fRec116[1] = fRec116[0];
			fRec115[1] = fRec115[0];
			for (int j33 = 3; (j33 > 0); j33 = (j33 - 1)) {
				fVec69[j33] = fVec69[(j33 - 1)];
			}
			fRec118[1] = fRec118[0];
			fRec117[1] = fRec117[0];
			for (int j34 = 3; (j34 > 0); j34 = (j34 - 1)) {
				fVec70[j34] = fVec70[(j34 - 1)];
			}
			fRec120[1] = fRec120[0];
			fRec119[1] = fRec119[0];
			for (int j35 = 3; (j35 > 0); j35 = (j35 - 1)) {
				fVec71[j35] = fVec71[(j35 - 1)];
			}
			fVec72[1] = fVec72[0];
			fRec121[1] = fRec121[0];
			for (int j36 = 3; (j36 > 0); j36 = (j36 - 1)) {
				fVec73[j36] = fVec73[(j36 - 1)];
			}
			fVec74[1] = fVec74[0];
			fRec122[1] = fRec122[0];
			for (int j37 = 3; (j37 > 0); j37 = (j37 - 1)) {
				fVec75[j37] = fVec75[(j37 - 1)];
			}
			fVec76[1] = fVec76[0];
			fRec123[1] = fRec123[0];
			for (int j38 = 3; (j38 > 0); j38 = (j38 - 1)) {
				fVec77[j38] = fVec77[(j38 - 1)];
			}
			fVec78[1] = fVec78[0];
			fRec124[1] = fRec124[0];
			for (int j39 = 3; (j39 > 0); j39 = (j39 - 1)) {
				fVec79[j39] = fVec79[(j39 - 1)];
			}
			fVec80[1] = fVec80[0];
			fRec125[1] = fRec125[0];
			for (int j40 = 3; (j40 > 0); j40 = (j40 - 1)) {
				fVec81[j40] = fVec81[(j40 - 1)];
			}
			fVec82[1] = fVec82[0];
			fRec126[1] = fRec126[0];
			for (int j41 = 3; (j41 > 0); j41 = (j41 - 1)) {
				fVec83[j41] = fVec83[(j41 - 1)];
			}
			fVec84[1] = fVec84[0];
			fRec127[1] = fRec127[0];
			for (int j42 = 3; (j42 > 0); j42 = (j42 - 1)) {
				fVec85[j42] = fVec85[(j42 - 1)];
			}
			fVec86[1] = fVec86[0];
			fRec128[1] = fRec128[0];
			for (int j43 = 3; (j43 > 0); j43 = (j43 - 1)) {
				fVec87[j43] = fVec87[(j43 - 1)];
			}
			fVec88[1] = fVec88[0];
			fRec129[1] = fRec129[0];
			for (int j44 = 3; (j44 > 0); j44 = (j44 - 1)) {
				fVec89[j44] = fVec89[(j44 - 1)];
			}
			fVec90[1] = fVec90[0];
			fRec130[1] = fRec130[0];
			for (int j45 = 3; (j45 > 0); j45 = (j45 - 1)) {
				fVec91[j45] = fVec91[(j45 - 1)];
			}
			fVec92[1] = fVec92[0];
			fRec131[1] = fRec131[0];
			for (int j46 = 3; (j46 > 0); j46 = (j46 - 1)) {
				fVec93[j46] = fVec93[(j46 - 1)];
			}
			fVec94[1] = fVec94[0];
			fRec132[1] = fRec132[0];
			for (int j47 = 3; (j47 > 0); j47 = (j47 - 1)) {
				fVec95[j47] = fVec95[(j47 - 1)];
			}
			for (int j48 = 3; (j48 > 0); j48 = (j48 - 1)) {
				fVec96[j48] = fVec96[(j48 - 1)];
			}
			for (int j49 = 3; (j49 > 0); j49 = (j49 - 1)) {
				fVec97[j49] = fVec97[(j49 - 1)];
			}
			for (int j50 = 3; (j50 > 0); j50 = (j50 - 1)) {
				fVec98[j50] = fVec98[(j50 - 1)];
			}
			for (int j51 = 3; (j51 > 0); j51 = (j51 - 1)) {
				fVec99[j51] = fVec99[(j51 - 1)];
			}
			for (int j52 = 3; (j52 > 0); j52 = (j52 - 1)) {
				fVec100[j52] = fVec100[(j52 - 1)];
			}
			for (int j53 = 3; (j53 > 0); j53 = (j53 - 1)) {
				fVec101[j53] = fVec101[(j53 - 1)];
			}
			for (int j54 = 3; (j54 > 0); j54 = (j54 - 1)) {
				fVec102[j54] = fVec102[(j54 - 1)];
			}
			for (int j55 = 3; (j55 > 0); j55 = (j55 - 1)) {
				fVec103[j55] = fVec103[(j55 - 1)];
			}
			for (int j56 = 3; (j56 > 0); j56 = (j56 - 1)) {
				fVec104[j56] = fVec104[(j56 - 1)];
			}
			for (int j57 = 3; (j57 > 0); j57 = (j57 - 1)) {
				fVec105[j57] = fVec105[(j57 - 1)];
			}
			for (int j58 = 3; (j58 > 0); j58 = (j58 - 1)) {
				fVec106[j58] = fVec106[(j58 - 1)];
			}
			for (int j59 = 3; (j59 > 0); j59 = (j59 - 1)) {
				fVec107[j59] = fVec107[(j59 - 1)];
			}
			for (int j60 = 3; (j60 > 0); j60 = (j60 - 1)) {
				fVec108[j60] = fVec108[(j60 - 1)];
			}
			fVec109[1] = fVec109[0];
			fRec133[1] = fRec133[0];
			iRec136[1] = iRec136[0];
			fVec110[1] = fVec110[0];
			fRec135[1] = fRec135[0];
			fRec134[1] = fRec134[0];
			iRec139[1] = iRec139[0];
			fVec111[1] = fVec111[0];
			fRec138[1] = fRec138[0];
			fRec137[1] = fRec137[0];
			iRec142[1] = iRec142[0];
			fVec112[1] = fVec112[0];
			fRec141[1] = fRec141[0];
			fRec140[1] = fRec140[0];
			iRec145[1] = iRec145[0];
			fVec113[1] = fVec113[0];
			fRec144[1] = fRec144[0];
			fRec143[1] = fRec143[0];
			iRec148[1] = iRec148[0];
			fVec114[1] = fVec114[0];
			fRec147[1] = fRec147[0];
			fRec146[1] = fRec146[0];
			iRec151[1] = iRec151[0];
			fVec115[1] = fVec115[0];
			fRec150[1] = fRec150[0];
			fRec149[1] = fRec149[0];
			iRec154[1] = iRec154[0];
			fVec116[1] = fVec116[0];
			fRec153[1] = fRec153[0];
			fRec152[1] = fRec152[0];
			iRec157[1] = iRec157[0];
			fVec117[1] = fVec117[0];
			fRec156[1] = fRec156[0];
			fRec155[1] = fRec155[0];
			fVec118[1] = fVec118[0];
			fRec158[1] = fRec158[0];
			iRec161[1] = iRec161[0];
			fVec119[1] = fVec119[0];
			fRec160[1] = fRec160[0];
			fRec159[1] = fRec159[0];
			iRec164[1] = iRec164[0];
			fVec120[1] = fVec120[0];
			fRec163[1] = fRec163[0];
			fRec162[1] = fRec162[0];
			iRec167[1] = iRec167[0];
			fVec121[1] = fVec121[0];
			fRec166[1] = fRec166[0];
			fRec165[1] = fRec165[0];
			iRec170[1] = iRec170[0];
			fVec122[1] = fVec122[0];
			fRec169[1] = fRec169[0];
			fRec168[1] = fRec168[0];
			fVec123[1] = fVec123[0];
			fRec171[1] = fRec171[0];
			iRec174[1] = iRec174[0];
			fVec124[1] = fVec124[0];
			fRec173[1] = fRec173[0];
			fRec172[1] = fRec172[0];
			iRec177[1] = iRec177[0];
			fVec125[1] = fVec125[0];
			fRec176[1] = fRec176[0];
			fRec175[1] = fRec175[0];
			iRec180[1] = iRec180[0];
			fVec126[1] = fVec126[0];
			fRec179[1] = fRec179[0];
			fRec178[1] = fRec178[0];
			iRec183[1] = iRec183[0];
			fVec127[1] = fVec127[0];
			fRec182[1] = fRec182[0];
			fRec181[1] = fRec181[0];
			iRec186[1] = iRec186[0];
			fVec128[1] = fVec128[0];
			fRec185[1] = fRec185[0];
			fRec184[1] = fRec184[0];
			fVec129[1] = fVec129[0];
			fRec187[1] = fRec187[0];
			iRec190[1] = iRec190[0];
			fVec130[1] = fVec130[0];
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			iRec193[1] = iRec193[0];
			fVec131[1] = fVec131[0];
			fRec192[1] = fRec192[0];
			fRec191[1] = fRec191[0];
			iRec196[1] = iRec196[0];
			fVec132[1] = fVec132[0];
			fRec195[1] = fRec195[0];
			fRec194[1] = fRec194[0];
			iRec199[1] = iRec199[0];
			fVec133[1] = fVec133[0];
			fRec198[1] = fRec198[0];
			fRec197[1] = fRec197[0];
			iRec202[1] = iRec202[0];
			fVec134[1] = fVec134[0];
			fRec201[1] = fRec201[0];
			fRec200[1] = fRec200[0];
			iRec205[1] = iRec205[0];
			fVec135[1] = fVec135[0];
			fRec204[1] = fRec204[0];
			fRec203[1] = fRec203[0];
			iRec208[1] = iRec208[0];
			fVec136[1] = fVec136[0];
			fRec207[1] = fRec207[0];
			fRec206[1] = fRec206[0];
			fVec137[1] = fVec137[0];
			fRec209[1] = fRec209[0];
			iRec212[1] = iRec212[0];
			fVec138[1] = fVec138[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			iRec215[1] = iRec215[0];
			fVec139[1] = fVec139[0];
			fRec214[1] = fRec214[0];
			fRec213[1] = fRec213[0];
			iRec218[1] = iRec218[0];
			fVec140[1] = fVec140[0];
			fRec217[1] = fRec217[0];
			fRec216[1] = fRec216[0];
			iRec221[1] = iRec221[0];
			fVec141[1] = fVec141[0];
			fRec220[1] = fRec220[0];
			fRec219[1] = fRec219[0];
			iRec224[1] = iRec224[0];
			fVec142[1] = fVec142[0];
			fRec223[1] = fRec223[0];
			fRec222[1] = fRec222[0];
			iRec227[1] = iRec227[0];
			fVec143[1] = fVec143[0];
			fRec226[1] = fRec226[0];
			fRec225[1] = fRec225[0];
			iRec230[1] = iRec230[0];
			fVec144[1] = fVec144[0];
			fRec229[1] = fRec229[0];
			fRec228[1] = fRec228[0];
			iRec233[1] = iRec233[0];
			fVec145[1] = fVec145[0];
			fRec232[1] = fRec232[0];
			fRec231[1] = fRec231[0];
			iRec236[1] = iRec236[0];
			fVec146[1] = fVec146[0];
			fRec235[1] = fRec235[0];
			fRec234[1] = fRec234[0];
			iRec239[1] = iRec239[0];
			fVec147[1] = fVec147[0];
			fRec238[1] = fRec238[0];
			fRec237[1] = fRec237[0];
			iRec242[1] = iRec242[0];
			fVec148[1] = fVec148[0];
			fRec241[1] = fRec241[0];
			fRec240[1] = fRec240[0];
			iRec245[1] = iRec245[0];
			fVec149[1] = fVec149[0];
			fRec244[1] = fRec244[0];
			fRec243[1] = fRec243[0];
			fVec150[1] = fVec150[0];
			fRec246[1] = fRec246[0];
			iRec249[1] = iRec249[0];
			fRec248[1] = fRec248[0];
			fRec247[1] = fRec247[0];
			iRec252[1] = iRec252[0];
			fRec251[1] = fRec251[0];
			fRec250[1] = fRec250[0];
			iRec255[1] = iRec255[0];
			fRec254[1] = fRec254[0];
			fRec253[1] = fRec253[0];
			iRec258[1] = iRec258[0];
			fRec257[1] = fRec257[0];
			fRec256[1] = fRec256[0];
			iRec261[1] = iRec261[0];
			fRec260[1] = fRec260[0];
			fRec259[1] = fRec259[0];
			iRec264[1] = iRec264[0];
			fRec263[1] = fRec263[0];
			fRec262[1] = fRec262[0];
			iRec267[1] = iRec267[0];
			fRec266[1] = fRec266[0];
			fRec265[1] = fRec265[0];
			iRec270[1] = iRec270[0];
			fRec269[1] = fRec269[0];
			fRec268[1] = fRec268[0];
			iRec273[1] = iRec273[0];
			fRec272[1] = fRec272[0];
			fRec271[1] = fRec271[0];
			iRec276[1] = iRec276[0];
			fRec275[1] = fRec275[0];
			fRec274[1] = fRec274[0];
			iRec279[1] = iRec279[0];
			fRec278[1] = fRec278[0];
			fRec277[1] = fRec277[0];
			iRec282[1] = iRec282[0];
			fRec281[1] = fRec281[0];
			fRec280[1] = fRec280[0];
			fVec151[1] = fVec151[0];
			fRec283[1] = fRec283[0];
			fVec152[1] = fVec152[0];
			fRec285[1] = fRec285[0];
			fVec153[1] = fVec153[0];
			fRec284[1] = fRec284[0];
			fVec154[1] = fVec154[0];
			fRec287[1] = fRec287[0];
			fVec155[1] = fVec155[0];
			fRec286[1] = fRec286[0];
			fVec156[1] = fVec156[0];
			fRec289[1] = fRec289[0];
			fVec157[1] = fVec157[0];
			fRec288[1] = fRec288[0];
			fVec158[1] = fVec158[0];
			fRec291[1] = fRec291[0];
			fVec159[1] = fVec159[0];
			fRec290[1] = fRec290[0];
			fRec293[1] = fRec293[0];
			fRec292[1] = fRec292[0];
			fRec295[1] = fRec295[0];
			fRec294[1] = fRec294[0];
			fRec297[1] = fRec297[0];
			fRec296[1] = fRec296[0];
			fRec299[1] = fRec299[0];
			fRec298[1] = fRec298[0];
			iRec305[1] = iRec305[0];
			fRec302[1] = fRec302[0];
			iRec303[1] = iRec303[0];
			fRec304[1] = fRec304[0];
			fVec160[1] = fVec160[0];
			fRec301[1] = fRec301[0];
			fRec300[1] = fRec300[0];
			for (int j61 = 4; (j61 > 0); j61 = (j61 - 1)) {
				fVec161[j61] = fVec161[(j61 - 1)];
			}
			fRec306[1] = fRec306[0];
			fRec307[1] = fRec307[0];
			fRec308[1] = fRec308[0];
		}
	}

};

#endif
