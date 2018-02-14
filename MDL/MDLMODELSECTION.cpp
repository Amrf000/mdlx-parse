#include "MDLMODELSECTION.h"

MDLMODELSECTION::MDLMODELSECTION()
{
	Name[0] = 0;
	bound.BoundsRadius = 0;
	bound.MaxExtx = 0;
	bound.MaxExty = 0;
	bound.MaxExtz = 0;
	bound.MinExtx = 0;
	bound.MinExty = 0;
	bound.MinExtz = 0;
	BlendTime = 150;
}