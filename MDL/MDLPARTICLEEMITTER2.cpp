#include "MDLPARTICLEEMITTER2.h"

MDLPARTICLEEMITTER2::MDLPARTICLEEMITTER2():
	OBJ(0x1000u),
	KGTR(2),
	KGRT(2),
	KGSC(2),
	KP2S(2),
	KP2L(2),
	KP2E(2),
	KP2V(2),
	KP2N(2)
{
		Speed = 0;
        Variation = 0;
		Latitidue = 0;
		Gravity = 0;
		Lifespan = 0;
		EmissionRate = 0;
		Length = 0;
		Width = 0;
		FilterMode = 0;
		Rows = 1;
		Columns = 1;
		Flag2 = 0;
		TailLength = 0;
		Time = 1056964608;
	R1 = 1132396544;
	G1 = 1132396544;
	B1 = 1132396544;
	R2 = 1132396544;
	G2 = 1132396544;
	B2 = 1132396544;
	R3 = 1132396544;
	G3 = 1132396544;
	B3 = 1132396544;
	Alpha1 = 0;
	A2 = 0;
	A3 = 0;
	ScalingX = 1065353216;
	SY = 1065353216;
	SZ = 1065353216;
	LifeSpanUVAnim1 = 0;
	L2 = 0;
	L3 = 0;
	DecayUVAnim1 = 0;
	D2 = 0;
	D3 = 0;
	TailUVAnim1 = 0;
	T2 = 0;
	T3 = 0;
	TailDecayUVAnim1 = 0;
	TD2 = 0;
	TD3 = 0;
	TextureID = 0;
	Squirt = 0;
	PriorityPlane = 0;
	ReplaceableID = 0;
}
MDLPARTICLEEMITTER2::MDLPARTICLEEMITTER2( const MDLPARTICLEEMITTER2& that):
	OBJ(that.OBJ),
	KGTR(that.KGTR),
	KGRT(that.KGRT),
	KGSC(that.KGSC),
	KP2S(that.KP2S),
	KP2L(that.KP2L),
	KP2E(that.KP2E),
	KP2V(that.KP2V),
	KP2N(that.KP2N)
{
	//MDLGENOBJECT::MDLGENOBJECT(this, a2);
	Speed = Speed;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 168, (char *)a2 + 168);
	Variation = Variation;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 196, (char *)a2 + 196);
	Latitidue = Latitidue;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 224, (char *)a2 + 224);
	Gravity = Gravity;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 252, (char *)a2 + 252);
	Lifespan = Lifespan;
	EmissionRate = EmissionRate;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 284, (char *)a2 + 284);
	Length = Length;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 312, (char *)a2 + 312);
	Width = Width;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 340, (char *)a2 + 340);
	FilterMode = FilterMode;
	Rows = Rows;
	Columns = Columns;
	Flag2 = Flag2;
	TailLength = TailLength;
	Time = Time;
	R1 = R1;
	G1 = G1;
	B1 = B1;
	R2 = R2;
	G2 = G2;
	B2 = B2;
	R3 = R3;
	G3 = G3;
	B3 = B3;
	Alpha1 = Alpha1;
	A2 = A2;
	A3 = A3;
	ScalingX = ScalingX;
	SY = SY;
	SZ = SZ;
	LifeSpanUVAnim1 = LifeSpanUVAnim1;
	L2 = L2;
	L3 = L3;
	DecayUVAnim1 = DecayUVAnim1;
	D2 = D2;
	D3 = D3;
	TailUVAnim1 = TailUVAnim1;
	T2 = T2;
	T3 = T3;
	TailDecayUVAnim1 = TailDecayUVAnim1;
	TD2 = TD2;
	TD3 = TD3;
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 488, (char *)a2 + 488);
	TextureID = TextureID;
	Squirt = Squirt;
	PriorityPlane = PriorityPlane;
	ReplaceableID = ReplaceableID;
}
MDLPARTICLEEMITTER2::~MDLPARTICLEEMITTER2()
{
}