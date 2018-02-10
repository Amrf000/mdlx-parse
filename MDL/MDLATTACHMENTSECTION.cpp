#include "MDLATTACHMENTSECTION.h"

int sub_1A500(uint8_t *a1, uint8_t *a2, int a3);
MDLATTACHMENTSECTION::MDLATTACHMENTSECTION()
{
	int result; // eax

	//MDLGENOBJECT::MDLGENOBJECT(this, 0x800u);
	*((uint8_t *)this + 164) = 0;
	//result = MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 424, 2);
	*((uint32_t *)this + 112) = 0;
}
MDLATTACHMENTSECTION::MDLATTACHMENTSECTION( const MDLATTACHMENTSECTION *a2)
{
	int result; // eax

	//MDLGENOBJECT::MDLGENOBJECT(this, a2);
	sub_1A500((uint8_t *)this + 164, (uint8_t *)a2 + 164, 260);
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 424, (char *)a2 + 424);
	result = *((uint32_t *)a2 + 112);
	*((uint32_t *)this + 112) = result;
}
MDLATTACHMENTSECTION::~MDLATTACHMENTSECTION()
{
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::~MDLKEYTRACK((char *)this + 424);
	//MDLGENOBJECT::~MDLGENOBJECT(this);
}