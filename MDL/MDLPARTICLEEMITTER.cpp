#include "MDLPARTICLEEMITTER.h"

MDLPARTICLEEMITTER::MDLPARTICLEEMITTER()
{

}
MDLPARTICLEEMITTER::MDLPARTICLEEMITTER(const MDLPARTICLEEMITTER& that)
{
	mdl = that.mdl;
	mdx = that.mdx;
}
MDLPARTICLEEMITTER::~MDLPARTICLEEMITTER()
{
}

bool MDLPARTICLEEMITTER::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	if(strncmp(mdx.Key,"PREM",4))
	{
		return false;
	} 
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
		
	int orest = rest;
	MDLPARTICLEEMITTER::mdx_::particleemitter pa;
	while(orest - rest<mdx.nbytes)
	{
		pa.parse(binary,rest);
		mdx.particleemitters.push_back(pa);
	}
	return true;
}

