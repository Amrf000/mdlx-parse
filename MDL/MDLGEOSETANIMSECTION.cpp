#include "MDLGEOSETANIMSECTION.h"

MDLGEOSETANIMSECTION::MDLGEOSETANIMSECTION()
{
}
MDLGEOSETANIMSECTION::MDLGEOSETANIMSECTION( const MDLGEOSETANIMSECTION& that)
{
    mdx.nbytes = that.mdx.nbytes;
    mdx.geosanims.assign(that.mdx.geosanims.begin(),that.mdx.geosanims.end());
}
MDLGEOSETANIMSECTION::~MDLGEOSETANIMSECTION()
{
}

bool MDLGEOSETANIMSECTION::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;

	int orest = rest;
	MDLGEOSETANIMSECTION::mdx_::geosanim anim;
	while(orest - rest<mdx.nbytes)
	{
		anim.parse(binary,rest);
		mdx.geosanims.push_back(anim);
	}	
	return true;
}
