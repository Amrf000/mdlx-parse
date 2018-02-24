#include "MDLATTENKEYFRAME.h"

MDLATTENKEYFRAME::MDLATTENKEYFRAME()
{
	x = 0;
	y = 0;
	z = 0;
	w = 0;
}

MDLATTENKEYFRAME::MDLATTENKEYFRAME(const MDLATTENKEYFRAME& that)
{
	x = that.x;
	y = that.y;
	z = that.z;
	w = that.w;
}