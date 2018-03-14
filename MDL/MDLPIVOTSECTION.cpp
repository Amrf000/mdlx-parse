#include "MDLPIVOTSECTION.h"

MDLPIVOTSECTION::MDLPIVOTSECTION()
{
}
MDLPIVOTSECTION::MDLPIVOTSECTION(const MDLPIVOTSECTION& that)
{
	memcpy(mdx.Key,that.mdx.Key,4);
	mdx.nbytes = that.mdx.nbytes;
	mdx.pivpts.assign(that.mdx.pivpts.begin(),that.mdx.pivpts.end());
}
MDLPIVOTSECTION::~MDLPIVOTSECTION()
{
}

bool MDLPIVOTSECTION::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
	
	int orest = rest;
	C3Vector pivpt;
	while(orest - rest<mdx.nbytes)
	{
		pivpt.parse(binary,rest);
		mdx.pivpts.push_back(pivpt);
	}
	return true;
}
