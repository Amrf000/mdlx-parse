#include "MDLTEXANIMSECTION.h"

MDLTEXANIMSECTION::MDLTEXANIMSECTION()
{
}
MDLTEXANIMSECTION::MDLTEXANIMSECTION(const MDLTEXANIMSECTION& that)
{
	mdx.nbytes = that.mdx.nbytes;
	mdx.txanims.assign(that.mdx.txanims.begin(),that.mdx.txanims.end());
}
MDLTEXANIMSECTION::~MDLTEXANIMSECTION()
{
}

bool MDLTEXANIMSECTION::parse(char*& binary,int& rest)
{
	
	return true;
}
