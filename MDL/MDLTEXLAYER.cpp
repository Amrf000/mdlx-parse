#include "MDLTEXLAYER.h"
#include <string.h>

MDLTEXLAYER::MDLTEXLAYER()//:KMTF(2)
{
/*	FilterMode = 0;
	Shading = 0;
	TextureID = 0;
	TVertexAnimId = -1;
	CoordId = 0;
	*(int*)&Alpha = 1065353216;*/
}
MDLTEXLAYER::MDLTEXLAYER( const MDLTEXLAYER& that)//:KMTA(that.KMTA), KMTF(that.KMTF)
{
	memcpy(mdl.Key,that.mdl.Key,5);
	memcpy(mdx.Key,that.mdx.Key,4);
	mdx.nlays = that.mdx.nlays;
	mdx.layers.assign(that.mdx.layers.begin(),that.mdx.layers.end());
/*	FilterMode = that.FilterMode;
	Shading = that.Shading;
	TextureID = that.TextureID;
	TVertexAnimId = that.TVertexAnimId;
	CoordId = that.CoordId;
	Alpha = that.Alpha;*/
}
MDLTEXLAYER::~MDLTEXLAYER()
{
}


bool MDLTEXLAYER::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key, binary, 4);
	binary += 4; rest -= 4;
	if(rest<0){
		return false;
	}
	memcpy(&mdx.nlays, binary, 4);
	binary += 4; rest -= 4; 
	if(rest<0){
		return false;
	}
	if(mdx.nlays>10)
	{
		return false;
	}
	mdx.layers.resize(mdx.nlays);
	for(int i=0;i<mdx.nlays;++i)
	{
		mdx.layers[i].parse(binary,rest);
	    if(rest<0){
		    return false;
      	}
	}
	return true;
}

