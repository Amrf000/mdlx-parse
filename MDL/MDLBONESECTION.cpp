#include "MDLBONESECTION.h"

MDLBONESECTION::MDLBONESECTION()
{
	int result; // eax

	//result = MDLGENOBJECT::MDLGENOBJECT(this, 0x100u);
	*((uint32_t *)this + 41) = 0;
	*((uint32_t *)this + 42) = 0;
}
MDLBONESECTION::MDLBONESECTION(const MDLBONESECTION *a2)
{
	int result; // eax

	//MDLGENOBJECT::MDLGENOBJECT(this, a2);
	*((uint32_t *)this + 41) = *((uint32_t *)a2 + 41);
	result = *((uint32_t *)a2 + 42);
	*((uint32_t *)this + 42) = result;
}
MDLBONESECTION::~MDLBONESECTION()
{
	//MDLGENOBJECT::~MDLGENOBJECT(this);
}
