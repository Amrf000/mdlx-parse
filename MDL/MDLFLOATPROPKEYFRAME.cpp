#include "MDLFLOATPROPKEYFRAME.h"

MDLFLOATPROPKEYFRAME::MDLFLOATPROPKEYFRAME()
{
	x = 0;
	y = 0;
	z = 0;
	w = 0;
}

MDLFLOATPROPKEYFRAME::MDLFLOATPROPKEYFRAME(const MDLFLOATPROPKEYFRAME& that)
{
	x = that.x;
	y = that.y;
	z = that.z;
	w = that.w;
}