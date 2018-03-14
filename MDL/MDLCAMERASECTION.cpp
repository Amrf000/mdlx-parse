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
	memcpy(mdx.Key,binary,4);
	if(strncmp(mdx.Key,"CAMS",4))
	{
		return false;
	}
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
		
	int orest = rest;
	MDLCAMERASECTION::mdx_::camera came;
	while(orest - rest<mdx.nbytes)
	{
		came.parse(binary,rest);
		mdx.cameras.push_back(came);
	}
	return true;
}

