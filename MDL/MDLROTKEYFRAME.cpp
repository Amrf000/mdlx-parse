#include "MDLROTKEYFRAME.h"

MDLROTKEYFRAME::MDLROTKEYFRAME()
{
	uint32_t *v1; // edx
	int result; // eax
	uint32_t *v3; // edx
	uint32_t *v4; // edx

	*(uint32_t *)this = 0;
	v1 = (uint32_t *)((char *)this + 4);
	result = 0;
	*v1 = 0;
	v1[1] = 0;
	v1[2] = 0;
	v1[3] = 1065353216;
	v3 = (uint32_t *)((char *)this + 20);
	*v3 = 0;
	v3[1] = 0;
	v3[2] = 0;
	v3[3] = 1065353216;
	v4 = (uint32_t *)((char *)this + 36);
	*v4 = 0;
	v4[1] = 0;
	v4[2] = 0;
	v4[3] = 1065353216;
}