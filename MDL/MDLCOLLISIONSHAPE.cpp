#include "MDLCOLLISIONSHAPE.h"

MDLCOLLISIONSHAPE::MDLCOLLISIONSHAPE()
{
	int result; // eax

	//MDLGENOBJECT::MDLGENOBJECT(this, 0x2000u);
	*((uint32_t *)this + 41) = 0;
	result = 0;
	memset((char *)this + 168, 0, 0x18u);
}
MDLCOLLISIONSHAPE::MDLCOLLISIONSHAPE( const MDLCOLLISIONSHAPE *a2)
{
	//MDLGENOBJECT::MDLGENOBJECT(this, 0);
	//MDLCOLLISIONSHAPE::operator=(this, a2);
}
uint32_t *MDLCOLLISIONSHAPE::operator=(uint32_t *a2)
{
	signed int v2; // eax
	int v3; // edx
	uint32_t* a1 = (uint32_t*)this;

	v2 = a2[41];
	a1[41] = v2;
	if (v2 == 1)
	{
		a1[42] = a2[42];
		a1[43] = a2[43];
		a1[44] = a2[44];
		a1[45] = a2[45];
		a1[46] = a2[46];
	}
	else if (v2 > 1)
	{
		if (v2 == 2)
		{
			a1[42] = a2[42];
			a1[43] = a2[43];
			a1[44] = a2[44];
			a1[45] = a2[45];
		}
		else if (v2 == 3)
		{
			v3 = a2[43];
			a1[42] = a2[42];
			a1[43] = v3;
		}
	}
	else if (!v2)
	{
		a1[42] = a2[42];
		a1[43] = a2[43];
		a1[44] = a2[44];
		a1[45] = a2[45];
		a1[46] = a2[46];
		a1[47] = a2[47];
	}
	//MDLGENOBJECT::operator=(a1, a2);
	return a1;
}
MDLCOLLISIONSHAPE::~MDLCOLLISIONSHAPE()
{
	//MDLGENOBJECT::~MDLGENOBJECT(this);
}