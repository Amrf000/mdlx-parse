#include "MDLLIGHTSECTION.h"

MDLLIGHTSECTION::MDLLIGHTSECTION()
{
	uint32_t *v1; // eax
	uint32_t *v2; // eax

	//MDLGENOBJECT::MDLGENOBJECT(this, 0x200u);
	*((uint32_t *)this + 41) = 0;
	//MDLKEYTRACK<MDLATTENKEYFRAME>::MDLKEYTRACK((char *)this + 168, 2);
	*((uint32_t *)this + 48) = 0;
	//MDLKEYTRACK<MDLATTENKEYFRAME>::MDLKEYTRACK((char *)this + 196, 2);
	*((uint32_t *)this + 55) = 0;
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::MDLKEYTRACK((char *)this + 224, 2);
	v1 = (uint32_t *)((char *)this + 248);
	*v1 = 1065353216;
	v1[1] = 1065353216;
	v1[2] = 1065353216;
	//MDLKEYTRACK<MDLINTENSITYKEYFRAME>::MDLKEYTRACK((char *)this + 260, 2);
	*((uint32_t *)this + 71) = 0;
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::MDLKEYTRACK((char *)this + 288, 2);
	v2 = (uint32_t *)((char *)this + 312);
	*v2 = 1065353216;
	v2[1] = 1065353216;
	v2[2] = 1065353216;
	//MDLKEYTRACK<MDLINTENSITYKEYFRAME>::MDLKEYTRACK((char *)this + 324, 2);
	*((uint32_t *)this + 87) = 0;
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 352, 2);
}
MDLLIGHTSECTION::MDLLIGHTSECTION( const MDLLIGHTSECTION *a2)
{
	uint32_t *v2; // ecx
	uint32_t *v3; // ecx

	//MDLGENOBJECT::MDLGENOBJECT(this, a2);
	*((uint32_t *)this + 41) = *((uint32_t *)a2 + 41);
	//MDLKEYTRACK<MDLATTENKEYFRAME>::MDLKEYTRACK((char *)this + 168, (char *)a2 + 168);
	*((uint32_t *)this + 48) = *((uint32_t *)a2 + 48);
	//MDLKEYTRACK<MDLATTENKEYFRAME>::MDLKEYTRACK((char *)this + 196, (char *)a2 + 196);
	*((uint32_t *)this + 55) = *((uint32_t *)a2 + 55);
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::MDLKEYTRACK((char *)this + 224, (char *)a2 + 224);
	v2 = (uint32_t *)((char *)this + 248);
	*v2 = *((uint32_t *)a2 + 62);
	v2[1] = *((uint32_t *)a2 + 63);
	v2[2] = *((uint32_t *)a2 + 64);
	//MDLKEYTRACK<MDLINTENSITYKEYFRAME>::MDLKEYTRACK((char *)this + 260, (char *)a2 + 260);
	*((uint32_t *)this + 71) = *((uint32_t *)a2 + 71);
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::MDLKEYTRACK((char *)this + 288, (char *)a2 + 288);
	v3 = (uint32_t *)((char *)this + 312);
	*v3 = *((uint32_t *)a2 + 78);
	v3[1] = *((uint32_t *)a2 + 79);
	v3[2] = *((uint32_t *)a2 + 80);
	//MDLKEYTRACK<MDLINTENSITYKEYFRAME>::MDLKEYTRACK((char *)this + 324, (char *)a2 + 324);
	*((uint32_t *)this + 87) = *((uint32_t *)a2 + 87);
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 352, (char *)a2 + 352);
}
MDLLIGHTSECTION::~MDLLIGHTSECTION()
{
	/*MDLKEYTRACK<MDLALPHAKEYFRAME>::~MDLKEYTRACK((char *)this + 352);
	MDLKEYTRACK<MDLINTENSITYKEYFRAME>::~MDLKEYTRACK((char *)this + 324);
	MDLKEYTRACK<MDLCOLORKEYFRAME>::~MDLKEYTRACK((char *)this + 288);
	MDLKEYTRACK<MDLINTENSITYKEYFRAME>::~MDLKEYTRACK((char *)this + 260);
	MDLKEYTRACK<MDLCOLORKEYFRAME>::~MDLKEYTRACK((char *)this + 224);
	MDLKEYTRACK<MDLATTENKEYFRAME>::~MDLKEYTRACK((char *)this + 196);
	MDLKEYTRACK<MDLATTENKEYFRAME>::~MDLKEYTRACK((char *)this + 168);
	MDLGENOBJECT::~MDLGENOBJECT(this);*/
}