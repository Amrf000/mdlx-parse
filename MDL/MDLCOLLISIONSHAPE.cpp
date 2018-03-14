#include "MDLCOLLISIONSHAPE.h"

MDLCOLLISIONSHAPE::MDLCOLLISIONSHAPE()
{
}
MDLCOLLISIONSHAPE::MDLCOLLISIONSHAPE( const MDLCOLLISIONSHAPE& that)
{
	*this = that;
}
MDLCOLLISIONSHAPE& MDLCOLLISIONSHAPE::operator=(const MDLCOLLISIONSHAPE& that)
{
    mdx = that.mdx;
    mdl = that.mdl;
	return *this;
}
MDLCOLLISIONSHAPE::~MDLCOLLISIONSHAPE()
{
	
	
}

bool MDLCOLLISIONSHAPE::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
	
	int orest = rest;
	MDLCOLLISIONSHAPE::mdx_::collision co;
	while(orest - rest<mdx.nbytes)
	{
		co.parse(binary,rest);
		mdx.collisionshape.push_back(co);
	}
	return true;
}
