#include "MDLCOLLISIONSHAPE.h"

MDLCOLLISIONSHAPE::MDLCOLLISIONSHAPE():
	OBJ(0x2000u)
{
	shape = 0;
	x = 0;
	y = 0;
	z = 0;
	memset(&un, 0, 12);//0x18u
}
MDLCOLLISIONSHAPE::MDLCOLLISIONSHAPE( const MDLCOLLISIONSHAPE& that):
	OBJ(that.OBJ)
{
	*this = that;
}
MDLCOLLISIONSHAPE& MDLCOLLISIONSHAPE::operator=(const MDLCOLLISIONSHAPE& that)
{
	shape = that.shape;
	if (that.shape == 1)
	{
		x = that.x;
		y = that.y;
		z = that.z;
		un.st2.x2 = that.un.st2.x2;
		un.st2.y2 = that.un.st2.y2;
	}
	else if (that.shape > 1)
	{
		if (that.shape == 2)
		{
			x = that.x;
			y = that.y;
			z = that.z;
			un.BoundsRadius = that.un.BoundsRadius;
		}
		else if (that.shape == 3)
		{
			x = that.x;
			y = that.y;
		}
	}
	else if (!that.shape)
	{
		x = that.x;
		y = that.y;
		z = that.z;
		un.st3.x3 = that.un.st3.x3;
		un.st3.y3 = that.un.st3.y3;
		un.st3.z3 = that.un.st3.z3;
	}
	OBJ = that.OBJ;
	return *this;
}
MDLCOLLISIONSHAPE::~MDLCOLLISIONSHAPE()
{
}