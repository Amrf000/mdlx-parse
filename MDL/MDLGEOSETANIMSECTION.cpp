#include "MDLGEOSETANIMSECTION.h"

MDLGEOSETANIMSECTION::MDLGEOSETANIMSECTION()
{
	uint32_t *result; // eax

	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK(this, 2);
	*((uint32_t *)this + 6) = 1065353216;
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 28, 2);
	*((uint32_t *)this + 13) = 0;
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::MDLKEYTRACK((char *)this + 56, 2);
	result = (uint32_t *)((char *)this + 80);
	*result = 1065353216;
	result[1] = 1065353216;
	result[2] = 1065353216;
	*((uint32_t *)this + 23) = 0;
}
MDLGEOSETANIMSECTION::MDLGEOSETANIMSECTION( const MDLGEOSETANIMSECTION *a2)
{
	uint32_t *v2; // ecx
	int result; // eax

	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK(this, a2);
	*((uint32_t *)this + 6) = *((uint32_t *)a2 + 6);
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 28, (char *)a2 + 28);
	*((uint32_t *)this + 13) = *((uint32_t *)a2 + 13);
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::MDLKEYTRACK((char *)this + 56, (char *)a2 + 56);
	v2 = (uint32_t *)((char *)this + 80);
	*v2 = *((uint32_t *)a2 + 20);
	v2[1] = *((uint32_t *)a2 + 21);
	v2[2] = *((uint32_t *)a2 + 22);
	result = *((uint32_t *)a2 + 23);
	*((uint32_t *)this + 23) = result;
}
MDLGEOSETANIMSECTION::~MDLGEOSETANIMSECTION()
{
	//MDLKEYTRACK<MDLCOLORKEYFRAME>::~MDLKEYTRACK((char *)this + 56);
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::~MDLKEYTRACK((char *)this + 28);
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::~MDLKEYTRACK(this);
}