#include "MDLMATERIALSECTION.h"

MDLMATERIALSECTION::MDLMATERIALSECTION()
{
	int result; // eax

	//result = TSStaticDynamicArray<MDLTEXLAYER, 2>::TSStaticDynamicArray(this);
	*((uint32_t *)this + 39) = 0;
	*((uint32_t *)this + 40) = 0;
}
MDLMATERIALSECTION::MDLMATERIALSECTION(const MDLMATERIALSECTION *a2)
{
	int result; // eax

	//TSStaticDynamicArray<MDLTEXLAYER, 2>::TSStaticDynamicArray(this, a2);
	*((uint32_t *)this + 39) = *((uint32_t *)a2 + 39);
	result = *((uint32_t *)a2 + 40);
	*((uint32_t *)this + 40) = result;
}