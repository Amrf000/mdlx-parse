#include "MDLHEADERSECTION.h"

MDLHEADERSECTION::MDLHEADERSECTION()
{
	*(uint8_t *)this = 0;
	*((uint8_t *)this + 257) = 0;
}