#ifndef _MDLSCALEKEYFRAME_H
#define _MDLSCALEKEYFRAME_H
#include <stdint.h>
/*
KGSC						// [Scaling]
	long	nunks;
	long	LineType;			(0:don't interp;1:linear;2:hermite;3:bezier)
	long	GlobalSeqId;			// 0xFFFFFFFF if none
	struct {
		long	Frame;
		float	x, y, z;
		if (LineType > 1) {
			float	InTanx, InTany, InTanz;
			float	OutTanx, OutTany, OutTanz;
		}
	} scaling[nunks];
*/
class MDLSCALEKEYFRAME {
public:
	MDLSCALEKEYFRAME();
	MDLSCALEKEYFRAME(const MDLSCALEKEYFRAME& that);
public:
	long	Frame;
	float	x, y, z;
	float	InTanx, InTany, InTanz;
	float	OutTanx, OutTany, OutTanz;
};
#endif