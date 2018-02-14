#include "MDLINTKEY.h"

MDLINTKEY::MDLINTKEY()
{
	x = 0;
	y = 0;
}

MDLINTKEY::MDLINTKEY(const MDLINTKEY& that)
{
	x = that.x;
	y = that.y;
}