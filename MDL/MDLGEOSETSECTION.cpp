#include "MDLGEOSETSECTION.h"


MDLGEOSETSECTION::MDLGEOSETSECTION()
{
	int result; // eax

	//TSGrowableArray<NTempest::C3Vector, TSCD<NTempest::C3Vector>>::TSGrowableArray(this);
	//TSGrowableArray<NTempest::C3Vector, TSCD<NTempest::C3Vector>>::TSGrowableArray((char *)this + 16);
	//TSGrowableArray<TSGrowableArray<NTempest::C2Vector, TSCD<NTempest::C2Vector>>, TSCD<TSGrowableArray<NTempest::C2Vector, TSCD<NTempest::C2Vector>>>>::TSGrowableArray((char *)this + 32);
	//TSGrowableArray<unsigned char, TSCD<unsigned char>>::TSGrowableArray((char *)this + 48);
	//MDLPRIMITIVES::MDLPRIMITIVES((MDLGEOSETSECTION *)((char *)this + 64));
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::TSGrowableArray((char *)this + 112);
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::TSGrowableArray((char *)this + 128);
	*((uint32_t *)this + 36) = 0;
	//CMdlBounds::CMdlBounds((MDLGEOSETSECTION *)((char *)this + 148));
	//result = TSGrowableArray<CMdlBounds, TSCD<CMdlBounds>>::TSGrowableArray((char *)this + 176);
	*((uint32_t *)this + 48) = 0;
	*((uint32_t *)this + 49) = 0;
}
MDLGEOSETSECTION::MDLGEOSETSECTION(const MDLGEOSETSECTION *a2)
{
	int result; // eax

	//TSGrowableArray<NTempest::C3Vector, TSCD<NTempest::C3Vector>>::TSGrowableArray(this, a2);
	//TSGrowableArray<NTempest::C3Vector, TSCD<NTempest::C3Vector>>::TSGrowableArray((char *)this + 16, (char *)a2 + 16);
	//TSGrowableArray<TSGrowableArray<NTempest::C2Vector, TSCD<NTempest::C2Vector>>, TSCD<TSGrowableArray<NTempest::C2Vector, TSCD<NTempest::C2Vector>>>>::TSGrowableArray(
	//	(char *)this + 32,
	//	(char *)a2 + 32);
	//TSGrowableArray<unsigned char, TSCD<unsigned char>>::TSGrowableArray((char *)this + 48, (char *)a2 + 48);
	//MDLPRIMITIVES::MDLPRIMITIVES((MDLGEOSETSECTION *)((char *)this + 64), (const MDLGEOSETSECTION *)((char *)a2 + 64));
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::TSGrowableArray((char *)this + 112, (char *)a2 + 112);
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::TSGrowableArray((char *)this + 128, (char *)a2 + 128);
	*((uint32_t *)this + 36) = *((uint32_t *)a2 + 36);
	*((uint32_t *)this + 37) = *((uint32_t *)a2 + 37);
	*((uint32_t *)this + 38) = *((uint32_t *)a2 + 38);
	*((uint32_t *)this + 39) = *((uint32_t *)a2 + 39);
	*((uint32_t *)this + 40) = *((uint32_t *)a2 + 40);
	*((uint32_t *)this + 41) = *((uint32_t *)a2 + 41);
	*((uint32_t *)this + 42) = *((uint32_t *)a2 + 42);
	*((uint32_t *)this + 43) = *((uint32_t *)a2 + 43);
	//TSGrowableArray<CMdlBounds, TSCD<CMdlBounds>>::TSGrowableArray((char *)this + 176, (char *)a2 + 176);
	*((uint32_t *)this + 48) = *((uint32_t *)a2 + 48);
	result = *((uint32_t *)a2 + 49);
	*((uint32_t *)this + 49) = result;
}
MDLGEOSETSECTION::~MDLGEOSETSECTION()
{
	//TSFixedArray<CMdlBounds, TSCD<CMdlBounds>>::~TSFixedArray((char *)this + 176);
	//TSFixedArray<unsigned int, TSCD<unsigned int>>::~TSFixedArray((char *)this + 128);
	//TSFixedArray<unsigned int, TSCD<unsigned int>>::~TSFixedArray((char *)this + 112);
	//MDLPRIMITIVES::~MDLPRIMITIVES((MDLGEOSETSECTION *)((char *)this + 64));
	//TSFixedArray<unsigned char, TSCD<unsigned char>>::~TSFixedArray((char *)this + 48);
	//TSFixedArray<TSGrowableArray<NTempest::C2Vector, TSCD<NTempest::C2Vector>>, TSCD<TSGrowableArray<NTempest::C2Vector, TSCD<NTempest::C2Vector>>>>::~TSFixedArray((char *)this + 32);
	//TSFixedArray<NTempest::C3Vector, TSCD<NTempest::C3Vector>>::~TSFixedArray((char *)this + 16);
	//TSFixedArray<NTempest::C3Vector, TSCD<NTempest::C3Vector>>::~TSFixedArray(this);
}