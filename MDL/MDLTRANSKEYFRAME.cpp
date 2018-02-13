#include "MDLTRANSKEYFRAME.h"

MDLTRANSKEYFRAME::MDLTRANSKEYFRAME()
{
	Frame = 0;
	x = 0;
	y = 0;
	z = 0;
	InTanx = 0;
	InTany = 0;
	InTanz = 0;
	OutTanx = 0;
	OutTany = 0;
	OutTanz = 0;
}

MDLTRANSKEYFRAME::MDLTRANSKEYFRAME(const MDLTRANSKEYFRAME& that)
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