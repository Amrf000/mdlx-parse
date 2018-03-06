#include "MDLTRANSKEYFRAME.h"

MDLTRANSKEYFRAME::MDLTRANSKEYFRAME()
{
	mdx.Frame = 0;
	mdx.x = 0;
	mdx.y = 0;
	mdx.z = 0;
	mdx.InTanx = 0;
	mdx.InTany = 0;
	mdx.InTanz = 0;
	mdx.OutTanx = 0;
	mdx.OutTany = 0;
	mdx.OutTanz = 0;
}

MDLTRANSKEYFRAME::MDLTRANSKEYFRAME(const MDLTRANSKEYFRAME& that)
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

bool MDLTRANSKEYFRAME::parse(char*& binary,int& rest,int LineType)
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
