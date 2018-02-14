#include "MDLINTENSITYKEYFRAME.h"

MDLINTENSITYKEYFRAME::MDLINTENSITYKEYFRAME()
{
	x = 0;
	y = 0;
	z = 0;
	w = 0;
}

MDLINTENSITYKEYFRAME::MDLINTENSITYKEYFRAME(const MDLINTENSITYKEYFRAME& that)
{
	x = that.x;
	y = that.y;
	z = that.z;
	w = that.w;
}