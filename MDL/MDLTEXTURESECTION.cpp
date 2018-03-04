#include "MDLTEXTURESECTION.h"

MDLTEXTURESECTION::MDLTEXTURESECTION()
{
}

MDLTEXTURESECTION::MDLTEXTURESECTION(const MDLTEXTURESECTION& that)
{
	mdx.nbytes = that.mdx.nbytes;
	mdx.textures.assign(that.mdx.textures.begin(),that.mdx.textures.end());
}
