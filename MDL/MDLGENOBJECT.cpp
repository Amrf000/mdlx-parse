#include "MDLGENOBJECT.h"

int sub_1A500(uint8_t *a1, uint8_t *a2, int a3);
MDLGENOBJECT::MDLGENOBJECT(unsigned int a2)
{
	*(uint8_t *)this = 0;
	*((uint32_t *)this + 20) = 0;
	*((uint32_t *)this + 21) = -1;
	*((uint32_t *)this + 22) = a2;
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::MDLKEYTRACK((char *)this + 92, 2);
	//MDLKEYTRACK<MDLROTKEYFRAME>::MDLKEYTRACK((char *)this + 116, 2);
	//MDLKEYTRACK<MDLSCALEKEYFRAME>::MDLKEYTRACK((char *)this + 140, 2);
}
MDLGENOBJECT::MDLGENOBJECT( const MDLGENOBJECT *a2)
{
	sub_1A500((uint8_t*)this, (uint8_t*)a2, 80);
	*((uint32_t *)this + 20) = *((uint32_t *)a2 + 20);
	*((uint32_t *)this + 21) = *((uint32_t *)a2 + 21);
	*((uint32_t *)this + 22) = *((uint32_t *)a2 + 22);
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::MDLKEYTRACK((char *)this + 92, (char *)a2 + 92);
	//MDLKEYTRACK<MDLROTKEYFRAME>::MDLKEYTRACK((char *)this + 116, (char *)a2 + 116);
	//MDLKEYTRACK<MDLSCALEKEYFRAME>::MDLKEYTRACK((char *)this + 140, (char *)a2 + 140);
}
MDLGENOBJECT::~MDLGENOBJECT()
{
	//MDLKEYTRACK<MDLSCALEKEYFRAME>::~MDLKEYTRACK((char *)this + 140);
	//MDLKEYTRACK<MDLROTKEYFRAME>::~MDLKEYTRACK((char *)this + 116);
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::~MDLKEYTRACK((char *)this + 92);
}
int MDLGENOBJECT::operator=( int a2)
{
	uint32_t *v2; // edi
	uint32_t *v3; // edi
	uint32_t *v4; // esi
	uint32_t* a1 = (uint32_t*)this;

	sub_1A500((uint8_t *)a1, (uint8_t *)a2, 80);
	*(uint32_t *)(a1 + 80) = *(uint32_t *)(a2 + 80);
	*(uint32_t *)(a1 + 84) = *(uint32_t *)(a2 + 84);
	*(uint32_t *)(a1 + 88) = *(uint32_t *)(a2 + 88);
	v2 = (uint32_t *)(a1 + 92);
	//TSFixedArray<MDLTRANSKEYFRAME, TSCD<MDLTRANSKEYFRAME>>::operator=(a1 + 92, a2 + 92);
	v2[3] = *(uint32_t *)(a2 + 104);
	v2[4] = *(uint32_t *)(a2 + 108);
	v2[5] = *(uint32_t *)(a2 + 112);
	v3 = (uint32_t *)(a1 + 116);
	//TSFixedArray<MDLROTKEYFRAME, TSCD<MDLROTKEYFRAME>>::operator=(a1 + 116, a2 + 116);
	v3[3] = *(uint32_t *)(a2 + 128);
	v3[4] = *(uint32_t *)(a2 + 132);
	v3[5] = *(uint32_t *)(a2 + 136);
	v4 = (uint32_t *)(a1 + 140);
	//TSFixedArray<MDLSCALEKEYFRAME, TSCD<MDLSCALEKEYFRAME>>::operator=(a1 + 140, a2 + 140);
	v4[3] = *(uint32_t *)(a2 + 152);
	v4[4] = *(uint32_t *)(a2 + 156);
	v4[5] = *(uint32_t *)(a2 + 160);
	return (int)a1;
}