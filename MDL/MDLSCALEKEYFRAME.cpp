#include "MDLSCALEKEYFRAME.h"

MDLSCALEKEYFRAME::MDLSCALEKEYFRAME()
{
}

MDLSCALEKEYFRAME::MDLSCALEKEYFRAME(const MDLSCALEKEYFRAME& that)
{
	mdx.Frame = that.mdx.Frame;
	mdx.x = that.mdx.x;
	mdx.y = that.mdx.y;
	mdx.z = that.mdx.z;
	mdx.InTanx = that.mdx.InTanx;
	mdx.InTany = that.mdx.InTany;
	mdx.InTanz = that.mdx.InTanz;
	mdx.OutTanx = that.mdx.OutTanx;
	mdx.OutTany = that.mdx.OutTany;
	mdx.OutTanz = that.mdx.OutTanz;
}

bool MDLSCALEKEYFRAME::parse(char*& binary,int& rest,int LineType)
{
	mdx.LineType= LineType;
	int span=(LineType>1)?40:16;
	rest -= span;
	if(rest>=0)
	{
		memcpy(&mdx,binary,span);
		binary += span;
		return true;
	}else{
		return false;
	}
	return false;
}
