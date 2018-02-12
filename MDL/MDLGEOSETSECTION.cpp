#include "MDLGEOSETSECTION.h"


MDLGEOSETSECTION::MDLGEOSETSECTION()
{
	//TSGrowableArray<NTempest::C3Vector, TSCD<NTempest::C3Vector>>::TSGrowableArray(this);
	//TSGrowableArray<NTempest::C3Vector, TSCD<NTempest::C3Vector>>::TSGrowableArray((char *)this + 16);
	//TSGrowableArray<TSGrowableArray<NTempest::C2Vector, TSCD<NTempest::C2Vector>>, TSCD<TSGrowableArray<NTempest::C2Vector, TSCD<NTempest::C2Vector>>>>::TSGrowableArray((char *)this + 32);
	//TSGrowableArray<unsigned char, TSCD<unsigned char>>::TSGrowableArray((char *)this + 48);
	//MDLPRIMITIVES::MDLPRIMITIVES((MDLGEOSETSECTION *)((char *)this + 64));
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::TSGrowableArray((char *)this + 112);
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::TSGrowableArray((char *)this + 128);
	MaterialID = 0;
	//CMdlBounds::CMdlBounds((MDLGEOSETSECTION *)((char *)this + 148));
	//result = TSGrowableArray<CMdlBounds, TSCD<CMdlBounds>>::TSGrowableArray((char *)this + 176);
	SelectionGroup = 0;
	Selectable = 0;
}
MDLGEOSETSECTION::MDLGEOSETSECTION(const MDLGEOSETSECTION& that)
{
	//TSGrowableArray<NTempest::C3Vector, TSCD<NTempest::C3Vector>>::TSGrowableArray(this, a2);
	//TSGrowableArray<NTempest::C3Vector, TSCD<NTempest::C3Vector>>::TSGrowableArray((char *)this + 16, (char *)a2 + 16);
	//TSGrowableArray<TSGrowableArray<NTempest::C2Vector, TSCD<NTempest::C2Vector>>, TSCD<TSGrowableArray<NTempest::C2Vector, TSCD<NTempest::C2Vector>>>>::TSGrowableArray(
	//	(char *)this + 32,
	//	(char *)a2 + 32);
	//TSGrowableArray<unsigned char, TSCD<unsigned char>>::TSGrowableArray((char *)this + 48, (char *)a2 + 48);
	//MDLPRIMITIVES::MDLPRIMITIVES((MDLGEOSETSECTION *)((char *)this + 64), (const MDLGEOSETSECTION *)((char *)a2 + 64));
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::TSGrowableArray((char *)this + 112, (char *)a2 + 112);
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::TSGrowableArray((char *)this + 128, (char *)a2 + 128);
	MaterialID = that.MaterialID;
	bound.BoundsRadius = that.bound.BoundsRadius;
	bound.MaxExtx = that.bound.MaxExtx;
	bound.MaxExty = that.bound.MaxExty;
	bound.MaxExtz = that.bound.MaxExtz;
	bound.MinExtx = that.bound.MinExtx;
	bound.MinExty = that.bound.MinExty;
	bound.MinExtz = that.bound.MinExtz;
	//TSGrowableArray<CMdlBounds, TSCD<CMdlBounds>>::TSGrowableArray((char *)this + 176, (char *)a2 + 176);
	SelectionGroup = that.SelectionGroup;
	Selectable = that.Selectable;
}
MDLGEOSETSECTION::~MDLGEOSETSECTION()
{
}