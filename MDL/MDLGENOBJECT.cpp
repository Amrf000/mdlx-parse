#include "MDLGENOBJECT.h"

MDLGENOBJECT::MDLGENOBJECT(unsigned int Type_):
	KGTR(2),
	KGRT(2),
	KGSC(2)
{
	Name[0] = 0;
	ObjectID = 0;
	Parent = -1;
	Type = Type_;
}
MDLGENOBJECT::MDLGENOBJECT( const MDLGENOBJECT& that):
	KGTR(that.KGTR),
	KGRT(that.KGRT),
	KGSC(that.KGSC)
{
	memcpy(Name, that.Name, 80);
	ObjectID = that.ObjectID;
	Parent = that.Parent;
	Type = that.Type;
}
MDLGENOBJECT::~MDLGENOBJECT()
{
}
MDLGENOBJECT& MDLGENOBJECT::operator=(const MDLGENOBJECT& that)
{
	memcpy(Name, that.Name, 80);
	ObjectID = that.ObjectID;
	Parent = that.Parent;
	Type = that.Type;
	//TSFixedArray<MDLTRANSKEYFRAME, TSCD<MDLTRANSKEYFRAME>>::operator=(a1 + 92, a2 + 92);
	v2[3] = *(uint32_t *)(a2 + 104);
	v2[4] = *(uint32_t *)(a2 + 108);
	v2[5] = *(uint32_t *)(a2 + 112);
	v3 = (uint32_t *)(a1 + 116);
	//TSFixedArray<MDLROTKEYFRAME, TSCD<MDLROTKEYFRAME>>::operator=(a1 + 116, a2 + 116);
	v3[3] = *(uint32_t *)(a2 + 128);
	v3[4] = *(uint32_t *)(a2 + 132);
	v3[5] = *(uint32_t *)(a2 + 136);
	v4 = (uint32_t *)(a1 + 140);
	//TSFixedArray<MDLSCALEKEYFRAME, TSCD<MDLSCALEKEYFRAME>>::operator=(a1 + 140, a2 + 140);
	v4[3] = *(uint32_t *)(a2 + 152);
	v4[4] = *(uint32_t *)(a2 + 156);
	v4[5] = *(uint32_t *)(a2 + 160);
	return *this;
}