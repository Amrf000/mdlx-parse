#ifndef _MDLMODELSECTION_H
#define _MDLMODELSECTION_H
#include <stdint.h>
#include "CMdlBounds.h"
/*
MODL						// [Model] (extra byte before blendTIme (0))
	long	nbytes;
	ASCII	Name;				(0x150 bytes)
	long	???;				(0)
	float	BoundsRadius;
	float	MinExtx, MinExty, MinExtz;
	float	MaxExtx, MaxExty, MaxExtz;
	long	BlendTime;
*/
class MDLMODELSECTION{
public:
	MDLMODELSECTION();
public:
	char Name[340];
	CMdlBounds bound;
	long BlendTime;
};
#endif