#include "MDLSCALEKEYFRAME.h"

MDLSCALEKEYFRAME::MDLSCALEKEYFRAME()
{
	Frame = 0;
	x = 0.0;
	y = 0.0;
	z = 0.0;
	InTanx = 0.0;
	InTany = 0.0;
	InTanz = 0.0;
	OutTanx = 1.0;
	OutTany = 1.0;
	OutTanz = 1.0;
}

MDLSCALEKEYFRAME::MDLSCALEKEYFRAME(const MDLSCALEKEYFRAME& that)
{
	Frame = that.Frame;
	x = that.x;
	y = that.y;
	z = that.z;
	InTanx = that.InTanx;
	InTany = that.InTany;
	InTanz = that.InTanz;
	OutTanx = that.OutTanx;
	OutTany = that.OutTany;
	OutTanz = that.OutTanz;
}