#include "MDLINTKEY.h"

MDLINTKEY::MDLINTKEY()
{
/*	x = 0;
	y = 0;*/
}

MDLINTKEY::MDLINTKEY(const MDLINTKEY& that)
{
	mdx.Frame = that.mdx.Frame;
	mdx.State = that.mdx.State;
}

bool MDLINTKEY::parse(char*& binary,int& rest,int LineType)
{
	rest -= 8;
	if(rest>0)
	{
		memcpy(&mdx,binary,8);
		binary += 8; 
		return true;
	}else{
		return false;
	}
}
