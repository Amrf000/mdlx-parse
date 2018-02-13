#ifndef _MDLTRANSKEYFRAME_H
#define _MDLTRANSKEYFRAME_H
#include <stdint.h>

class MDLTRANSKEYFRAME {
public:
	MDLTRANSKEYFRAME();
	MDLTRANSKEYFRAME(const MDLTRANSKEYFRAME& that);
public:
	long	Frame;
	float	x, y, z;
	float	InTanx, InTany, InTanz;
	float	OutTanx, OutTany, OutTanz;
};
#endif