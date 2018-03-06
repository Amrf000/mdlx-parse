#include "MDLGEOSETSECTION.h"


MDLGEOSETSECTION::MDLGEOSETSECTION()
{
}
MDLGEOSETSECTION::MDLGEOSETSECTION(const MDLGEOSETSECTION& that)
{
	mdx = that.mdx;
	mdl = that.mdl;
}
MDLGEOSETSECTION::~MDLGEOSETSECTION()
{
	
	
}

bool MDLGEOSETSECTION::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
	
	int orest = rest;
	MDLGEOSETSECTION::mdx_::geoset geos;
	while(orest - rest<mdx.nbytes)
	{
		geos.parse(binary,rest);
		mdx.geosets.push_back(geos);
	}	
	return true;
}




