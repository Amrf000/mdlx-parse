#include "MDLCOORD3FKEYFRAME.h"

MDLCOORD3FKEYFRAME::MDLCOORD3FKEYFRAME( float x_, float y_, float z_)
{
	Frame = 0;
    x = x_;
    y = y_;
    z = z_;
	InTanx = 0;
	InTany = 0;
	InTanz = 0;
	OutTanx = 0;
	OutTany = 0;
	OutTanz = 0;
}