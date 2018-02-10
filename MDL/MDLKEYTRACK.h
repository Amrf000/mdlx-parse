#ifndef _MDLKEYTRACK_H
#define _MDLKEYTRACK_H
#include <stdint.h>

template<typename T>
class MDLKEYTRACK {
public:
	MDLKEYTRACK( int a2)
	{
		int result; // eax
		uint32_t* a1 = (uint32_t*)this;
		//TSGrowableArray<MDLINTKEY, TSCD<MDLINTKEY>>::TSGrowableArray(a1);
		result = a2;
		*(uint32_t *)(a1 + 16) = a2;
		*(uint32_t *)(a1 + 20) = -1;
	}
	~MDLKEYTRACK()
	{
		//TSFixedArray<MDLFLOATPROPKEYFRAME, TSCD<MDLFLOATPROPKEYFRAME>>::~TSFixedArray(a1);
	}
};
#endif