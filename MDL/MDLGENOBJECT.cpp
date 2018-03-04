#include "MDLGENOBJECT.h"

MDLGENOBJECT::MDLGENOBJECT()
{
	
}
MDLGENOBJECT::MDLGENOBJECT(unsigned int Type_)
{
}
MDLGENOBJECT::MDLGENOBJECT( const MDLGENOBJECT& that)
{
	mdx.nbytesi = that.mdx.nbytesi;
	memcpy(mdx.Name,that.mdx.Name,80);
	mdx.ObjectID = that.mdx.ObjectID;
	mdx.Parent = that.mdx.Parent;
	mdx.Type = that.mdx.Type;
	mdx.KGTR = that.mdx.KGTR;
	mdx.KGRT = that.mdx.KGRT;
	mdx.KGSC = that.mdx.KGSC;
	mdx.KATV = that.mdx.KATV;
}
MDLGENOBJECT::~MDLGENOBJECT()
{
}
MDLGENOBJECT& MDLGENOBJECT::operator=(const MDLGENOBJECT& that)
{
	mdx.nbytesi = that.mdx.nbytesi;
	memcpy(mdx.Name,that.mdx.Name,80);
	mdx.ObjectID = that.mdx.ObjectID;
	mdx.Parent = that.mdx.Parent;
	mdx.Type = that.mdx.Type;
	mdx.KGTR = that.mdx.KGTR;
	mdx.KGRT = that.mdx.KGRT;
	mdx.KGSC = that.mdx.KGSC;
	mdx.KATV = that.mdx.KATV;
	return *this;
}

bool MDLGENOBJECT::parse(char*& binary,int& rest)
{
	return false;
}
