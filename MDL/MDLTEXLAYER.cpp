#include "MDLTEXLAYER.h"

MDLTEXLAYER::MDLTEXLAYER()
{
	int result; // eax

	*(uint32_t *)this = 0;
	*((uint32_t *)this + 1) = 0;
	*((uint32_t *)this + 2) = 0;
	//MDLFLIPBOOKTRACK::MDLFLIPBOOKTRACK((MDLTEXLAYER *)((char *)this + 12));
	*((uint32_t *)this + 9) = -1;
	*((uint32_t *)this + 10) = 0;
	//result = MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 44, 2);
	*((uint32_t *)this + 17) = 1065353216;
}
MDLTEXLAYER::MDLTEXLAYER( const MDLTEXLAYER *a2)
{
	int result; // eax

	*(uint32_t *)this = *(uint32_t *)a2;
	*((uint32_t *)this + 1) = *((uint32_t *)a2 + 1);
	*((uint32_t *)this + 2) = *((uint32_t *)a2 + 2);
	//MDLFLIPBOOKTRACK::MDLFLIPBOOKTRACK((MDLTEXLAYER *)((char *)this + 12), (const MDLTEXLAYER *)((char *)a2 + 12));
	*((uint32_t *)this + 9) = *((uint32_t *)a2 + 9);
	*((uint32_t *)this + 10) = *((uint32_t *)a2 + 10);
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 44, (char *)a2 + 44);
	result = *((uint32_t *)a2 + 17);
	*((uint32_t *)this + 17) = result;
}
MDLTEXLAYER::~MDLTEXLAYER()
{
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::~MDLKEYTRACK((char *)this + 44);
	//MDLFLIPBOOKTRACK::~MDLFLIPBOOKTRACK((MDLTEXLAYER *)((char *)this + 12));
}