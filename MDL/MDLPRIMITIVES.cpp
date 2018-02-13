#include "MDLPRIMITIVES.h"

MDLPRIMITIVES::MDLPRIMITIVES()
{
}
MDLPRIMITIVES::MDLPRIMITIVES(const MDLPRIMITIVES& that)
{
	//TSStaticDynamicArray<MDLPRIMITIVE, 1>::TSStaticDynamicArray(this, a2);
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::TSGrowableArray((char *)this + 16, (char *)a2 + 16);
	//TSGrowableArray<unsigned short, TSCD<unsigned short>>::TSGrowableArray((char *)this + 32, (char *)a2 + 32);
}
int MDLPRIMITIVES::ReserveSpace(unsigned int a2, unsigned int a3)
{
	//TSStaticDynamicArray<MDLPRIMITIVE, 1>::Reserve(this, a2, 0);
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::Reserve((char *)this + 16, a2, 0);
	//return TSGrowableArray<unsigned short, TSCD<unsigned short>>::Reserve((char *)this + 32, a3, 0);
	return 0;
}
int MDLPRIMITIVES::SetCount( unsigned int a2, unsigned int a3)
{
	//TSStaticDynamicArray<MDLPRIMITIVE, 1>::SetCount(this, a2);
	//TSGrowableArray<unsigned int, TSCD<unsigned int>>::SetCount((char *)this + 16, a2);
	//return TSGrowableArray<unsigned short, TSCD<unsigned short>>::SetCount((char *)this + 32, a3);
	return 0;
}
MDLPRIMITIVES::~MDLPRIMITIVES()
{
}