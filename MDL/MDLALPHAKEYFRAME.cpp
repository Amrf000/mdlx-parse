#include "MDLALPHAKEYFRAME.h"
#include <string.h>

MDLALPHAKEYFRAME::MDLALPHAKEYFRAME()
{
	/*Frame = 0;
	*(int*)&State = 1065353216;
	InTan = 0;
	OutTan = 0;*/
}

MDLALPHAKEYFRAME::MDLALPHAKEYFRAME(const MDLALPHAKEYFRAME& that)
{
	mdx.Frame = that.mdx.Frame;
	mdx.State = that.mdx.State;
	mdx.InTan = that.mdx.InTan;
	mdx.OutTan = that.mdx.OutTan;
}

bool MDLALPHAKEYFRAME::parse(char*& binary,int& rest,int LineType)
{
	mdx.LineType= LineType;
	int span=(LineType>1)?16:8;
	rest -= span;
	if(rest>=0)
	{
		memcpy(&mdx,binary,span);
		binary += span;
		return true;
	}else{
		return false;
	}
}
