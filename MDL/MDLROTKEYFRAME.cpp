#include "MDLROTKEYFRAME.h"

MDLROTKEYFRAME::MDLROTKEYFRAME()
{
}

MDLROTKEYFRAME::MDLROTKEYFRAME(const MDLROTKEYFRAME& that)
{
	mdx.Frame = that.mdx.Frame;
	mdx.a = that.mdx.a; mdx.b = that.mdx.b; mdx.c = that.mdx.c;
	mdx.InTana = that.mdx.InTana; mdx.InTanb = that.mdx.InTanb; mdx.InTanc = that.mdx.InTanc; mdx.InTand = that.mdx.InTand;
	mdx.OutTana = that.mdx.OutTana; mdx.OutTanb = that.mdx.OutTanb; mdx.OutTanc = that.mdx.OutTanc; mdx.OutTand = that.mdx.OutTand;
			
	mdx.LineType = that.mdx.LineType;	
}

bool MDLROTKEYFRAME::parse(char*& binary,int& rest,int LineType)
{
	mdx.LineType= LineType;
	int span=(LineType>1)?52:20;
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
