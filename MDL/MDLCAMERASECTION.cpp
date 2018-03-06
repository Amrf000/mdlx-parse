#include "MDLCAMERASECTION.h"

MDLCAMERASECTION::MDLCAMERASECTION()
{
}
MDLCAMERASECTION::MDLCAMERASECTION(const MDLCAMERASECTION& that)
{
	 mdl = that.mdl;
     mdx = that.mdx;
}
MDLCAMERASECTION::~MDLCAMERASECTION()
{
}

bool MDLCAMERASECTION::parse(char*& binary,int& rest)
{
	return true;
}

