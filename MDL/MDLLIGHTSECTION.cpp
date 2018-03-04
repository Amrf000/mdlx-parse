#include "MDLLIGHTSECTION.h"

MDLLIGHTSECTION::MDLLIGHTSECTION()
{
}
MDLLIGHTSECTION::MDLLIGHTSECTION( const MDLLIGHTSECTION& that)
{
    mdx.nbytes = that.mdx.nbytes;
	for(int i=0;i<that.mdx.lights.size();++i)
	{
		mdx.lights[i] = that.mdx.lights[i];
	}
}
MDLLIGHTSECTION::~MDLLIGHTSECTION()
{
	
	
	
}

bool MDLLIGHTSECTION::parse(char*& binary,int& rest)
{
	
	return true;
}


