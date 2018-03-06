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
	memcpy(mdx.Key,binary,4);
	if(strncmp(mdx.Key,"TXAN",4))
	{
		return false;
	}
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
	int orest = rest;
	MDLTEXANIMSECTION::mdx_::txanim anim;
	while(orest - rest<mdx.nbytes)
	{
		anim.parse(binary,rest);
		mdx.txanims.push_back(anim);
	}	
	return true;
}
