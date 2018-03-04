#include "MDLMATERIALSECTION.h"
#include <string.h>

MDLMATERIALSECTION::MDLMATERIALSECTION()
{
}
MDLMATERIALSECTION::MDLMATERIALSECTION(const MDLMATERIALSECTION& that)
{
}

bool MDLMATERIALSECTION::parsemdl(const std::string& node)
{
	return true;
}

bool MDLMATERIALSECTION::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key, binary, 4);
	binary += 4; rest -= 4;
	if(rest<0){
		return false;
	}
	memcpy(&mdx.nbytes, binary, 4);
	binary += 4; rest -= 4;
	if(rest<0){
		return false;
	}
    material mat;
    int orest = rest;
    while(rest>0 && orest-rest<mdx.nbytes)
    {
	    memcpy(&mat.nbytesi, binary, 4);
	    binary += 4; rest -= 4;
	    if(rest<0 || orest-rest>=mdx.nbytes){
		    return false;
	    }
	    memcpy(&mat.PriorityPlane, binary, 4);
        binary += 4; rest -= 4;
	    if(rest<0 || orest-rest>=mdx.nbytes){
		    return false;
	    }
	    memcpy(&mat.RenderMode, binary, 4);
	    binary += 4; rest -= 4;
	    if(rest<0 || orest-rest>=mdx.nbytes){
		    return false;
	    }
	    mat.lays.parse(binary,rest);
	    if(rest<0 || orest-rest>=mdx.nbytes){
		    return false;
	    }
	    mdx.lays.push_back(mat);
    }
	return true;
}

bool MDLMATERIALSECTION::tomdl(std::ostringstream& oss)
{
	return true;
}

bool MDLMATERIALSECTION::tomdx(char* dest, int* len)
{
	return true;
}
