#include "CMdlScanner.h"

int dword_6FF2C2A8[6] = { 10336444, 6738348, 10336456, 10336488, 10336528, 0 };

CMdlScanner::CMdlScanner( int a2, int a3, int a4)
{
	sub_6F66C2D4(a1, a3, a4);
	*(uint32_t *)(a1 + 60) = a2;
}


char *sub_6F66C2D4(int a1, int a2, int a3)
{
	void *v3; // eax@1
	char *result; // eax@4

	*(uint32_t *)a1 = dword_6FF2C2A8;
	*(uint32_t *)(a1 + 8) = a3;
	*(uint32_t *)(a1 + 40) = sub_6F294614(a3 + 1);
	v3 = sub_6F294614(4 * (a3 + 1));
	*(uint32_t *)(a1 + 4) = v3;
	if (!*(uint32_t *)(a1 + 40) || !v3)
	{
		sub_6F66C1AC(a1, "No space for scanner!");
		exit(1);
	}
	*(uint32_t *)(a1 + 12) = 1;
	*(uint32_t *)(a1 + 16) = 0;
	*(uint32_t *)(a1 + 20) = 0;
	*(uint32_t *)(a1 + 24) = 10;
	*(uint32_t *)(a1 + 44) = a2;
	result = (char *)&__sF + 88;
	*(uint32_t *)(a1 + 48) = (char *)&__sF + 88;
	*(uint32_t *)(a1 + 52) = 1;
	*(uint32_t *)(a1 + 56) = 0;
	return result;
}

int sub_6F66C1AC(int a1, char *a2, ...)
{
	va_list va; // [sp+38h] [bp+10h]@1

	va_start(va, a2);
	if (*(uint32_t *)(a1 + 52))
		fprintf((FILE *)&__sF + 2, "%d: ", *(uint32_t *)(a1 + 52));
	vfprintf((FILE *)&__sF + 2, a2, va);
	return fputc(10, (FILE *)&__sF + 2);
}

void *sub_6F294614(size_t a1)
{
	return sub_6F00A3FE(
		a1,
		(int)"/Volumes/F1/usrbuild/xb/build/War3x_B6401/War3/Source/Mac/../../../StormMac/Storm Mac/SOURCE/STORM.CPP",
		46,
		0);
}

int CMdlScanner::mdlerror::buffer[64] =
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};