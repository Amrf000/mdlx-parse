#include "MDLHELPSECTION.h"

MDLHELPSECTION::MDLHELPSECTION ()
{
}
MDLHELPSECTION::MDLHELPSECTION(const MDLHELPSECTION& that)
{
	memcpy(mdx.Key,that.mdx.Key,4);
	mdx.nbytes = that.mdx.nbytes;
	mdx.objs.assign(that.mdx.objs.begin(),that.mdx.objs.end());
}
MDLHELPSECTION::~MDLHELPSECTION()
{
}

bool MDLHELPSECTION::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
	
	int orest = rest;
	MDLGENOBJECT obj;
	while(orest - rest<mdx.nbytes)
	{
		obj.parse(binary,rest);
		mdx.objs.push_back(obj);
	}
	return true;
}
