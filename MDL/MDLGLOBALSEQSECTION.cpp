#include "MDLGLOBALSEQSECTION.h"
#include <string.h>

MDLGLOBALSEQSECTION::MDLGLOBALSEQSECTION()
{
	memcpy(mdl.Key, "GlobalSequences", 15);
	memcpy(mdx.Key, "GLBS", 4);
}

MDLGLOBALSEQSECTION::MDLGLOBALSEQSECTION(const MDLGLOBALSEQSECTION& that)
{
}

bool MDLGLOBALSEQSECTION::parsemdl(const std::string& node)
{
	return true;
}

bool MDLGLOBALSEQSECTION::parse(char*& binary,int& rest)
{	
	memcpy(mdx.Key, binary, 4);
	memcpy(&mdx.nbytes, binary + 4, 4);
	rest -= (8+mdx.nbytes);
	if(rest>=0)
	{
		int nseqs = mdx.nbytes/sizeof(int);
	    mdx.durations.resize(nseqs);
		memcpy(&mdx.durations[0],binary + 8,mdx.nbytes);
		mdl.durations = mdx.durations;
		binary += (8+mdx.nbytes);
		return true;
	}else{
		return false;
	}	
}

bool MDLGLOBALSEQSECTION::tomdl(std::ostringstream& oss)
{
	return true;
}

bool MDLGLOBALSEQSECTION::tomdx(char* dest, int* len)
{
	return true;
}
