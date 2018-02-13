#include "MDLRIBBONEMITTER.h"

MDLRIBBONEMITTER::MDLRIBBONEMITTER():
	OBJ(0x4000u),
	KGTR(2),
	KGRT(2),
	KGSC(2),
	KRVS(2),
	KRHA(2)
{
	//MDLGENOBJECT::MDLGENOBJECT(this, 0x4000u);
	HeightAbove = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 168, 2);
	HeightBelow = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 196, 2);
	Alpha = 1065353216;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 224, 2);
	ColorR = 1065353216;
	ColorG = 1065353216;
	ColorB = 1065353216;
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::MDLKEYTRACK((char *)this + 260, 2);
	LifeSpan = 0;
	Rsv = 0;
	EmissionRate = 0;
	Rows = 0;
	Columns = 0;
	MaterialID = 0;
	//MDLINTTRACK::MDLINTTRACK((MDLRIBBONEMITTER *)((char *)this + 308));
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 332, 2);
	Gravity = 0;
}
MDLRIBBONEMITTER::MDLRIBBONEMITTER( const MDLRIBBONEMITTER& that):
	OBJ(that.OBJ),
	KGTR(that.KGTR),
	KGRT(that.KGRT),
	KGSC(that.KGSC),
	KRVS(that.KRVS),
	KRHA(that.KRHA),
	KRHB(that.KRHB)
{
	//MDLGENOBJECT::MDLGENOBJECT(this, a2);
	HeightAbove = that.HeightAbove;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 168, (char *)a2 + 168);
	HeightBelow = that.HeightBelow;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 196, (char *)a2 + 196);
	Alpha = that.Alpha;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 224, (char *)a2 + 224);
	ColorR = that.ColorR;
	ColorG = that.ColorG;
	ColorB = that.ColorB;
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::MDLKEYTRACK((char *)this + 260, (char *)a2 + 260);
	LifeSpan = that.LifeSpan;
	Rsv = that.Rsv;
	EmissionRate = that.EmissionRate;
	Rows = that.Rows;
	Columns = that.Columns;
	MaterialID = that.MaterialID;
	//MDLINTTRACK::MDLINTTRACK((MDLRIBBONEMITTER *)((char *)this + 308), (const MDLRIBBONEMITTER *)((char *)a2 + 308));
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 332, (char *)a2 + 332);
	Gravity = that.Gravity;
}
MDLRIBBONEMITTER::~MDLRIBBONEMITTER()
{
}