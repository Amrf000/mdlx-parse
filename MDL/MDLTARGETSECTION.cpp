#include "MDLTARGETSECTION.h"

MDLTARGETSECTION::MDLTARGETSECTION()
{
	*(uint32_t *)this = 0;
	*((uint32_t *)this + 1) = 0;
	*((uint32_t *)this + 2) = 0;
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::MDLKEYTRACK((char *)this + 12, 2);
}
MDLTARGETSECTION::MDLTARGETSECTION( const MDLTARGETSECTION *a2)
{
	*(uint32_t *)this = *(uint32_t *)a2;
	*((uint32_t *)this + 1) = *((uint32_t *)a2 + 1);
	*((uint32_t *)this + 2) = *((uint32_t *)a2 + 2);
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::MDLKEYTRACK((char *)this + 12, (char *)a2 + 12);
}
MDLTARGETSECTION::~MDLTARGETSECTION()
{
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::~MDLKEYTRACK((char *)this + 12);
}