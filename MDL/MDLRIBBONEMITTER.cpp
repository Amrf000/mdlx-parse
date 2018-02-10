#include "MDLRIBBONEMITTER.h"

MDLRIBBONEMITTER::MDLRIBBONEMITTER()
{
	uint32_t *v1; // eax
	int result; // eax

	//MDLGENOBJECT::MDLGENOBJECT(this, 0x4000u);
	*((uint32_t *)this + 41) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 168, 2);
	*((uint32_t *)this + 48) = 0;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 196, 2);
	*((uint32_t *)this + 55) = 1065353216;
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 224, 2);
	v1 = (uint32_t *)((char *)this + 248);
	*v1 = 1065353216;
	v1[1] = 1065353216;
	v1[2] = 1065353216;
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::MDLKEYTRACK((char *)this + 260, 2);
	*((uint32_t *)this + 71) = 0;
	*((uint32_t *)this + 72) = 0;
	*((uint32_t *)this + 73) = 0;
	*((uint32_t *)this + 74) = 0;
	*((uint32_t *)this + 75) = 0;
	*((uint32_t *)this + 76) = 0;
	//MDLINTTRACK::MDLINTTRACK((MDLRIBBONEMITTER *)((char *)this + 308));
	//result = MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 332, 2);
	*((uint32_t *)this + 89) = 0;
}
MDLRIBBONEMITTER::MDLRIBBONEMITTER( const MDLRIBBONEMITTER *a2)
{
	uint32_t *v2; // ecx
	int result; // eax

	//MDLGENOBJECT::MDLGENOBJECT(this, a2);
	*((uint32_t *)this + 41) = *((uint32_t *)a2 + 41);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 168, (char *)a2 + 168);
	*((uint32_t *)this + 48) = *((uint32_t *)a2 + 48);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 196, (char *)a2 + 196);
	*((uint32_t *)this + 55) = *((uint32_t *)a2 + 55);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 224, (char *)a2 + 224);
	v2 = (uint32_t *)((char *)this + 248);
	*v2 = *((uint32_t *)a2 + 62);
	v2[1] = *((uint32_t *)a2 + 63);
	v2[2] = *((uint32_t *)a2 + 64);
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::MDLKEYTRACK((char *)this + 260, (char *)a2 + 260);
	*((uint32_t *)this + 71) = *((uint32_t *)a2 + 71);
	*((uint32_t *)this + 72) = *((uint32_t *)a2 + 72);
	*((uint32_t *)this + 73) = *((uint32_t *)a2 + 73);
	*((uint32_t *)this + 74) = *((uint32_t *)a2 + 74);
	*((uint32_t *)this + 75) = *((uint32_t *)a2 + 75);
	*((uint32_t *)this + 76) = *((uint32_t *)a2 + 76);
	//MDLINTTRACK::MDLINTTRACK((MDLRIBBONEMITTER *)((char *)this + 308), (const MDLRIBBONEMITTER *)((char *)a2 + 308));
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 332, (char *)a2 + 332);
	result = *((uint32_t *)a2 + 89);
	*((uint32_t *)this + 89) = result;
}
MDLRIBBONEMITTER::~MDLRIBBONEMITTER()
{
	/*MDLKEYTRACK<MDLALPHAKEYFRAME>::~MDLKEYTRACK((char *)this + 332);
	MDLINTTRACK::~MDLINTTRACK((MDLRIBBONEMITTER *)((char *)this + 308));
	MDLKEYTRACK<MDLCOLORKEYFRAME>::~MDLKEYTRACK((char *)this + 260);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 224);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 196);
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 168);
	MDLGENOBJECT::~MDLGENOBJECT(this);*/
}