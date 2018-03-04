#include "CMdlBounds.h"

CMdlBounds::CMdlBounds():
	BoundsRadius(0),
	MinExtx(0),
	MinExty(0),
	MinExtz(0),
	MaxExtx(0),
	MaxExty(0),
	MaxExtz(0)
{
}

bool CMdlBounds::parse(char*& binary,int& rest)
{
	rest -= sizeof(CMdlBounds);
	if(rest>=0)
	{
		memcpy(&BoundsRadius, binary,sizeof(CMdlBounds));
		binary += sizeof(CMdlBounds);
		return true;
	}else{
		return false;
	}
}
