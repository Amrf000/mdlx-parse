#include "MDLPARTICLEEMITTER.h"

MDLPARTICLEEMITTER::MDLPARTICLEEMITTER()
{
	//MDLGENOBJECT::MDLGENOBJECT(this, 0x1000u);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 164, 2);
	*((uint32_t *)this + 47) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 192, 2);
	*((uint32_t *)this + 54) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 220, 2);
	*((uint32_t *)this + 61) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 248, 2);
	*((uint32_t *)this + 68) = 0;
	//MDLPARTICLE::MDLPARTICLE((MDLPARTICLEEMITTER *)((char *)this + 276));
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 592, 2);
}
MDLPARTICLEEMITTER::MDLPARTICLEEMITTER(const MDLPARTICLEEMITTER *a2)
{
	//MDLGENOBJECT::MDLGENOBJECT(this, a2);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 164, (char *)a2 + 164);
	*((uint32_t *)this + 47) = *((uint32_t *)a2 + 47);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 192, (char *)a2 + 192);
	*((uint32_t *)this + 54) = *((uint32_t *)a2 + 54);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 220, (char *)a2 + 220);
	*((uint32_t *)this + 61) = *((uint32_t *)a2 + 61);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 248, (char *)a2 + 248);
	*((uint32_t *)this + 68) = *((uint32_t *)a2 + 68);
	///MDLPARTICLE::MDLPARTICLE((MDLPARTICLEEMITTER *)((char *)this + 276), (const MDLPARTICLEEMITTER *)((char *)a2 + 276));
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 592, (char *)a2 + 592);
}
MDLPARTICLEEMITTER::~MDLPARTICLEEMITTER()
{
	/*MDLKEYTRACK<MDLALPHAKEYFRAME>::~MDLKEYTRACK((char *)this + 592);
	MDLPARTICLE::~MDLPARTICLE((MDLPARTICLEEMITTER *)((char *)this + 276));
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 248);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 220);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 192);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 164);*/
}