#include "MDLMODELSECTION.h"
#include <string.h>

MDLMODELSECTION::MDLMODELSECTION()
{
	memset(&mdl, 0, sizeof(mdl));
	memset(&mdx, 0, sizeof(mdx));
	mdl.Key[0] = 'M';
	mdl.Key[1] = 'o';
	mdl.Key[2] = 'd';
	mdl.Key[3] = 'e';
	mdl.Key[4] = 'l';
	//mdx
	mdx.Key[0] = 'M';
	mdx.Key[1] = 'O';
	mdx.Key[2] = 'D';
	mdx.Key[3] = 'L';
	mdx.nbytes = 372;
	memset(mdx.Name, 0, 340);
	mdx.BlendTime = 150;
}

bool MDLMODELSECTION::parsemdl(const std::string& node)
{
	std::istringstream iss(node);
	std::string line;
	while (std::getline(iss, line))
	{
		std::cout <<"|" << line <<"|"<< std::endl;
	}
	return true;
}

bool MDLMODELSECTION::parse(char*& binary,int& rest)
{
	rest -= 380;
	if(rest>=0)
	{
		memcpy(&mdx, binary, 380);
		memcpy(mdl.Name,mdx.Name,340);
        mdl.bound = mdx.bound;
	    mdl.BlendTime = mdx.BlendTime;
		binary += 380;
		return true;
	}else{
		return false;
	}	
}

bool MDLMODELSECTION::tomdl(std::ostringstream& oss)
{
	oss << "Model \"" << mdl.Name << "\" {" << std::endl
		<< "	NumGeosets " << mdl.NumGeosets << "," << std::endl
		<< "	NumGeosetAnims " << mdl.NumGeosetAnims << "," << std::endl
		<< "	NumHelpers " << mdl.NumHelpers << "," << std::endl
		<< "	NumLights " << mdl.NumLights << "," << std::endl
		<< "	NumBones " << mdl.NumBones << "," << std::endl
		<< "	NumAttachments " << mdl.NumAttachments << "," << std::endl
		<< "	NumParticleEmitters " << mdl.NumParticleEmitters << "," << std::endl
		<< "	NumParticleEmitters2 " << mdl.NumParticleEmitters2 << "," << std::endl
		<< "	NumRibbonEmitters " << mdl.NumRibbonEmitters << "," << std::endl
		<< "	NumEvents " << mdl.NumEvents << ", " << std::endl
		<< "	BlendTime " << mdl.BlendTime << "," << std::endl
		<< "	BoundsRadius " << mdl.bound.BoundsRadius << "," << std::endl
		<< "	MinimumExtent { " << mdl.bound.MinExtx << "," << mdl.bound.MinExty << "," << mdl.bound.MinExtz << " }," << std::endl
		<< "	MaximumExtent { " << mdl.bound.MaxExtx << "," << mdl.bound.MaxExty << "," << mdl.bound.MaxExtz << " }," << std::endl
		<< "}" << std::endl;
	return true;
	    	
}
bool MDLMODELSECTION::tomdx(char* dest, int* len)
{
	*len = 380;
	if(dest)
	  memcpy(dest, &mdx, *len);
	else
		return false;
	return true;
}
