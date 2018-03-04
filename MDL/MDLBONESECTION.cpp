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
	
	return true;
}
