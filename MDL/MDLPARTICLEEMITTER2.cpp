#include "MDLPARTICLEEMITTER2.h"

MDLPARTICLEEMITTER2::MDLPARTICLEEMITTER2()
{
	uint32_t *v1; // edx
	uint32_t *v2; // edx
	uint32_t *v3; // edx
	int result; // eax

	//MDLGENOBJECT::MDLGENOBJECT(this, 0x1000u);
	*((uint32_t *)this + 41) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 168, 2);
	*((uint32_t *)this + 48) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 196, 2);
	*((uint32_t *)this + 55) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 224, 2);
	*((uint32_t *)this + 62) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 252, 2);
	*((uint32_t *)this + 69) = 0;
	*((uint32_t *)this + 70) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 284, 2);
	*((uint32_t *)this + 77) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 312, 2);
	*((uint32_t *)this + 84) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 340, 2);
	*((uint32_t *)this + 91) = 0;
	*((uint32_t *)this + 92) = 1;
	*((uint32_t *)this + 93) = 1;
	*((uint32_t *)this + 94) = 0;
	*((uint32_t *)this + 95) = 0;
	*((uint32_t *)this + 96) = 1056964608;
	v1 = (uint32_t *)((char *)this + 388);
	*v1 = 1132396544;
	v1[1] = 1132396544;
	v1[2] = 1132396544;
	v2 = (uint32_t *)((char *)this + 400);
	*v2 = 1132396544;
	v2[1] = 1132396544;
	v2[2] = 1132396544;
	v3 = (uint32_t *)((char *)this + 412);
	*v3 = 1132396544;
	v3[1] = 1132396544;
	v3[2] = 1132396544;
	*((uint8_t *)this + 424) = 0;
	*((uint8_t *)this + 425) = 0;
	*((uint8_t *)this + 426) = 0;
	*((uint32_t *)this + 107) = 1065353216;
	*((uint32_t *)this + 108) = 1065353216;
	*((uint32_t *)this + 109) = 1065353216;
	*((uint32_t *)this + 110) = 0;
	*((uint32_t *)this + 111) = 0;
	*((uint32_t *)this + 112) = 0;
	*((uint32_t *)this + 113) = 0;
	*((uint32_t *)this + 114) = 0;
	*((uint32_t *)this + 115) = 0;
	*((uint32_t *)this + 116) = 0;
	*((uint32_t *)this + 117) = 0;
	*((uint32_t *)this + 118) = 0;
	*((uint32_t *)this + 119) = 0;
	*((uint32_t *)this + 120) = 0;
	*((uint32_t *)this + 121) = 0;
	//result = MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 488, 2);
	*((uint32_t *)this + 128) = 0;
	*((uint32_t *)this + 129) = 0;
	*((uint32_t *)this + 130) = 0;
	*((uint32_t *)this + 131) = 0;
}
MDLPARTICLEEMITTER2::MDLPARTICLEEMITTER2( const MDLPARTICLEEMITTER2 *a2)
{
	uint32_t *v2; // ecx
	uint32_t *v3; // ecx
	uint32_t *v4; // ecx
	int result; // eax

	//MDLGENOBJECT::MDLGENOBJECT(this, a2);
	*((uint32_t *)this + 41) = *((uint32_t *)a2 + 41);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 168, (char *)a2 + 168);
	*((uint32_t *)this + 48) = *((uint32_t *)a2 + 48);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 196, (char *)a2 + 196);
	*((uint32_t *)this + 55) = *((uint32_t *)a2 + 55);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 224, (char *)a2 + 224);
	*((uint32_t *)this + 62) = *((uint32_t *)a2 + 62);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 252, (char *)a2 + 252);
	*((uint32_t *)this + 69) = *((uint32_t *)a2 + 69);
	*((uint32_t *)this + 70) = *((uint32_t *)a2 + 70);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 284, (char *)a2 + 284);
	*((uint32_t *)this + 77) = *((uint32_t *)a2 + 77);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 312, (char *)a2 + 312);
	*((uint32_t *)this + 84) = *((uint32_t *)a2 + 84);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 340, (char *)a2 + 340);
	*((uint32_t *)this + 91) = *((uint32_t *)a2 + 91);
	*((uint32_t *)this + 92) = *((uint32_t *)a2 + 92);
	*((uint32_t *)this + 93) = *((uint32_t *)a2 + 93);
	*((uint32_t *)this + 94) = *((uint32_t *)a2 + 94);
	*((uint32_t *)this + 95) = *((uint32_t *)a2 + 95);
	*((uint32_t *)this + 96) = *((uint32_t *)a2 + 96);
	v2 = (uint32_t *)((char *)this + 388);
	*v2 = *((uint32_t *)a2 + 97);
	v2[1] = *((uint32_t *)a2 + 98);
	v2[2] = *((uint32_t *)a2 + 99);
	v3 = (uint32_t *)((char *)this + 400);
	*v3 = *((uint32_t *)a2 + 100);
	v3[1] = *((uint32_t *)a2 + 101);
	v3[2] = *((uint32_t *)a2 + 102);
	v4 = (uint32_t *)((char *)this + 412);
	*v4 = *((uint32_t *)a2 + 103);
	v4[1] = *((uint32_t *)a2 + 104);
	v4[2] = *((uint32_t *)a2 + 105);
	*((uint8_t *)this + 424) = *((uint8_t *)a2 + 424);
	*((uint8_t *)this + 425) = *((uint8_t *)a2 + 425);
	*((uint8_t *)this + 426) = *((uint8_t *)a2 + 426);
	*((uint32_t *)this + 107) = *((uint32_t *)a2 + 107);
	*((uint32_t *)this + 108) = *((uint32_t *)a2 + 108);
	*((uint32_t *)this + 109) = *((uint32_t *)a2 + 109);
	*((uint32_t *)this + 110) = *((uint32_t *)a2 + 110);
	*((uint32_t *)this + 111) = *((uint32_t *)a2 + 111);
	*((uint32_t *)this + 112) = *((uint32_t *)a2 + 112);
	*((uint32_t *)this + 113) = *((uint32_t *)a2 + 113);
	*((uint32_t *)this + 114) = *((uint32_t *)a2 + 114);
	*((uint32_t *)this + 115) = *((uint32_t *)a2 + 115);
	*((uint32_t *)this + 116) = *((uint32_t *)a2 + 116);
	*((uint32_t *)this + 117) = *((uint32_t *)a2 + 117);
	*((uint32_t *)this + 118) = *((uint32_t *)a2 + 118);
	*((uint32_t *)this + 119) = *((uint32_t *)a2 + 119);
	*((uint32_t *)this + 120) = *((uint32_t *)a2 + 120);
	*((uint32_t *)this + 121) = *((uint32_t *)a2 + 121);
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 488, (char *)a2 + 488);
	*((uint32_t *)this + 128) = *((uint32_t *)a2 + 128);
	*((uint32_t *)this + 129) = *((uint32_t *)a2 + 129);
	*((uint32_t *)this + 130) = *((uint32_t *)a2 + 130);
	result = *((uint32_t *)a2 + 131);
	*((uint32_t *)this + 131) = result;
}
MDLPARTICLEEMITTER2::~MDLPARTICLEEMITTER2()
{
	/*MDLKEYTRACK<MDLALPHAKEYFRAME>::~MDLKEYTRACK((char *)this + 488);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 340);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 312);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 284);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 252);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 224);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 196);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 168);
	MDLGENOBJECT::~MDLGENOBJECT(this);*/
}