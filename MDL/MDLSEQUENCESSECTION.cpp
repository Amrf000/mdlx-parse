#include "MDLSEQUENCESSECTION.h"

MDLSEQUENCESSECTION::MDLSEQUENCESSECTION()
{

}
MDLSEQUENCESSECTION::MDLSEQUENCESSECTION( const MDLSEQUENCESSECTION& that)
{

}

bool MDLSEQUENCESSECTION::parsemdl(const std::string& node)
{
	return true;
}

bool MDLSEQUENCESSECTION::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key, binary, 4);
	memcpy(&mdx.nbytes, binary + 4, 4);
	rest -= (8+mdx.nbytes);
	if(rest>0)
	{
		int nseqs = mdx.nbytes/sizeof(MDLSEQUENCESSECTION::seq);
		mdx.sequences.resize(nseqs);
		memcpy(&mdx.sequences[0],binary + 8,mdx.nbytes);
		binary += (8+mdx.nbytes);	
		return true;
	}else{
		return false;
	}
}

bool MDLSEQUENCESSECTION::tomdl(std::ostringstream& oss)
{
	return true;
}

bool MDLSEQUENCESSECTION::tomdx(char* dest, int* len)
{
	return true;
}
