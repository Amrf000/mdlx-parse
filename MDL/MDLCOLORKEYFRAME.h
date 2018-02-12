#ifndef _MDLCOLORKEYFRAME_H
#define _MDLCOLORKEYFRAME_H
#include <stdint.h>

class MDLCOLORKEYFRAME {
public:
	MDLCOLORKEYFRAME();
	MDLCOLORKEYFRAME(const MDLCOLORKEYFRAME& that);
public:
	long	Frame;
	float	x, y, z;
	float	InTanx, InTany, InTanz;
	float	OutTanx, OutTany, OutTanz;
};
#endif