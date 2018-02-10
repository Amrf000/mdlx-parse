#include "MDLCOLORKEYFRAME.h"

MDLCOLORKEYFRAME::MDLCOLORKEYFRAME()
{
	uint32_t *v1; // ecx
	int result; // eax
	uint32_t *v3; // ecx
	uint32_t *v4; // ecx

	*(uint32_t *)this = 0;
	v1 = (uint32_t *)((char *)this + 4);
	result = 0;
	*v1 = 0;
	v1[1] = 0;
	v1[2] = 0;
	v3 = (uint32_t *)((char *)this + 16);
	*v3 = 0;
	v3[1] = 0;
	v3[2] = 0;
	v4 = (uint32_t *)((char *)this + 28);
	*v4 = 0;
	v4[1] = 0;
	v4[2] = 0;
}
MDLCOLORKEYFRAME::MDLCOLORKEYFRAME(const MDLCOLORKEYFRAME *a2)
{
	uint32_t *v2; // edi
	uint32_t *v3; // edi
	uint32_t *v4; // edi
	int result; // eax

	*(uint32_t *)this = *(uint32_t *)a2;
	v2 = (uint32_t *)((char *)this + 4);
	*v2 = *((uint32_t *)a2 + 1);
	v2[1] = *((uint32_t *)a2 + 2);
	v2[2] = *((uint32_t *)a2 + 3);
	v3 = (uint32_t *)((char *)this + 16);
	*v3 = *((uint32_t *)a2 + 4);
	v3[1] = *((uint32_t *)a2 + 5);
	v3[2] = *((uint32_t *)a2 + 6);
	v4 = (uint32_t *)((char *)this + 28);
	*v4 = *((uint32_t *)a2 + 7);
	v4[1] = *((uint32_t *)a2 + 8);
	result = *((uint32_t *)a2 + 9);
	v4[2] = result;
}