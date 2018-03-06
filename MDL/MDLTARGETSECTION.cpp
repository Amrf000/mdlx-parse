#include "MDLTARGETSECTION.h"

MDLTARGETSECTION::MDLTARGETSECTION()
{
}

MDLTARGETSECTION::MDLTARGETSECTION( const MDLTARGETSECTION& that)
{
	mdx = that.mdx;
	mdl = that.mdl;
}

MDLTARGETSECTION::~MDLTARGETSECTION()
{
}

bool MDLTARGETSECTION::parse(char*& binary,int& rest)
{
	return true;	
}
