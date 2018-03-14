#include "MDLRIBBONEMITTER.h"

MDLRIBBONEMITTER::MDLRIBBONEMITTER()
{

}
MDLRIBBONEMITTER::MDLRIBBONEMITTER( const MDLRIBBONEMITTER& that)
{
	mdl = that.mdl;
    mdx = that.mdx;
}
MDLRIBBONEMITTER::~MDLRIBBONEMITTER()
{
}

bool MDLRIBBONEMITTER::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	if(strncmp(mdx.Key,"RIBB",4))
	{
		return false;
	}
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
		
	int orest = rest;
	MDLRIBBONEMITTER::mdx_::ribb rb;
	while(orest - rest<mdx.nbytes)
	{
		rb.parse(binary,rest);
		mdx.ribbs.push_back(rb);
	}
	return true;
}
