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
	return true;
}
