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
	
	return true;
}
