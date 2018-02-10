#include "MDLPARTICLE.h"

int sub_1A500(uint8_t *a1, uint8_t *a2, int a3);
MDLPARTICLE::MDLPARTICLE()
{
	int result; // eax

	*(uint8_t *)this = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 260, 2);
	*((uint32_t *)this + 71) = 0;
	//result = MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 288, 2);
	*((uint32_t *)this + 78) = 0;
}
MDLPARTICLE::MDLPARTICLE( const MDLPARTICLE *a2)
{
	int result; // eax

	sub_1A500((uint8_t*)this, (uint8_t*)a2, 260);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 260, (char *)a2 + 260);
	*((uint32_t *)this + 71) = *((uint32_t *)a2 + 71);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 288, (char *)a2 + 288);
	result = *((uint32_t *)a2 + 78);
	*((uint32_t *)this + 78) = result;
}
MDLPARTICLE::~MDLPARTICLE()
{
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 288);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 260);
}