#include "MDLHEADERSECTION.h"
#include <string.h>

MDLHEADERSECTION::MDLHEADERSECTION()
{
	memcpy(mdl.Key,"Version",7);
	mdl.Version = 0;
	memcpy(mdx.Key,"MDLX",4);
	memcpy(mdx.Vers,"VERS",4);
	mdx.Version = 0;
}

bool MDLHEADERSECTION::parsemdl(const std::string& node)
{

	return true;
}

bool MDLHEADERSECTION::parse(char*& binary,int& rest)
{
	rest -= 16;
	if(rest>=0)
	{
		memcpy(&mdx, binary, 16);
		mdl.Version = mdx.Version;
		binary += 16;
		return true;
	}else{
		return false;
	}	
}

bool MDLHEADERSECTION::tomdl(std::ostringstream& oss)
{
	return true;
}

bool MDLHEADERSECTION::tomdx(char* dest, int* len)
{
	return true;
}
