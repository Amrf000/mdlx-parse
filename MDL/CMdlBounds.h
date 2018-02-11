#ifndef _CMDLBOUNDS_H
#define _CMDLBOUNDS_H
#include <stdint.h>

class CMdlBounds{
public:
	CMdlBounds();
public:
	float	BoundsRadius;
	float	MinExtx, MinExty, MinExtz;
	float	MaxExtx, MaxExty, MaxExtz;
};
#endif