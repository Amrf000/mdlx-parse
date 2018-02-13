#include "MDLTEXTURESECTION.h"

MDLTEXTURESECTION::MDLTEXTURESECTION()
{
	ReplaceableID = 0;
	TexturePath[0] = 0;
	Wrapping = 0;
}

MDLTEXTURESECTION::MDLTEXTURESECTION(const MDLTEXTURESECTION& that)
{
	ReplaceableID = that.ReplaceableID;
	memcpy(TexturePath,that.TexturePath,sizeof(TexturePath));
	Wrapping = that.Wrapping;
}