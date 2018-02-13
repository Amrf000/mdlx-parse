#ifndef _MDLCOORD3FKEYFRAME_H
#define _MDLCOORD3FKEYFRAME_H
#include <stdint.h>

class MDLCOORD3FKEYFRAME {
public:
	MDLCOORD3FKEYFRAME(float x, float y, float z);
public:
	long	Frame;
	float	x, y, z;
	float	InTanx, InTany, InTanz;
	float	OutTanx, OutTany, OutTanz;
};
#endif