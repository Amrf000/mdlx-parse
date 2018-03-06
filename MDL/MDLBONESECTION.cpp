#include "MDLBONESECTION.h"

MDLBONESECTION::MDLBONESECTION()
{
}
MDLBONESECTION::MDLBONESECTION(const MDLBONESECTION& that)
{
	mdx.nbytes = that.mdx.nbytes;
	mdx.bones.assign(that.mdx.bones.begin(),that.mdx.bones.end());
}
MDLBONESECTION::~MDLBONESECTION()
{
}

bool MDLBONESECTION::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
	
	int orest = rest;
	MDLBONESECTION::mdx_::bone bon;
	while(orest - rest<mdx.nbytes)
	{
		bon.parse(binary,rest);
		mdx.bones.push_back(bon);
	}
	return true;
}
