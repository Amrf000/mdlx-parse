#include "MDLCOLORKEYFRAME.h"

MDLCOLORKEYFRAME::MDLCOLORKEYFRAME()
{
}
MDLCOLORKEYFRAME::MDLCOLORKEYFRAME(const MDLCOLORKEYFRAME& that)
{
	mdx.Frame = that.mdx.Frame;
	mdx.x = that.mdx.x;
	mdx.y = that.mdx.y;
	mdx.z = that.mdx.z;
	mdx.InTanx = that.mdx.InTanx;
	mdx.InTany = that.mdx.InTany;
	mdx.InTanz = that.mdx.InTanz;
	mdx.OutTanx = that.mdx.OutTanx;
	mdx.OutTany = that.mdx.OutTany;
	mdx.OutTanz = that.mdx.OutTanz;
}

bool MDLCOLORKEYFRAME::parse(char*& binary,int& rest)
{
	return false;
}
