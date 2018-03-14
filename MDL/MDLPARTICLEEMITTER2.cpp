#include "MDLPARTICLEEMITTER2.h"

MDLPARTICLEEMITTER2::MDLPARTICLEEMITTER2()
{
}
MDLPARTICLEEMITTER2::MDLPARTICLEEMITTER2( const MDLPARTICLEEMITTER2& that)
{
	mdl = that.mdl;
	mdx = that.mdx;
}
MDLPARTICLEEMITTER2::~MDLPARTICLEEMITTER2()
{
}
bool MDLPARTICLEEMITTER2::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	if(strncmp(mdx.Key,"PRE2",4))
	{
		return false;
	} 
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
		
	int orest = rest;
	MDLPARTICLEEMITTER2::mdx_::particleemitter pa;
	while(orest - rest<mdx.nbytes)
	{
		pa.parse(binary,rest);
		mdx.particleemitters.push_back(pa);
	}
	return true;
}

