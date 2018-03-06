#include "MDLTEXTURESECTION.h"

MDLTEXTURESECTION::MDLTEXTURESECTION()
{
}

MDLTEXTURESECTION::MDLTEXTURESECTION(const MDLTEXTURESECTION& that)
{
	mdx.nbytes = that.mdx.nbytes;
	mdx.textures.assign(that.mdx.textures.begin(),that.mdx.textures.end());
}

bool MDLTEXTURESECTION::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	binary +=4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary +=4; rest -= 4;
	int size = mdx.nbytes/sizeof(MDLTEXTURESECTION::mdx_::texture);
	mdx.textures.resize(size);
	for(int i=0;i<mdx.textures.size();++i)
	{
		mdx.textures[i].parse(binary,rest);
	}
	return false;
}
