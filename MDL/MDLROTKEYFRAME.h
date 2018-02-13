#ifndef _MDLROTKEYFRAME_H
#define _MDLROTKEYFRAME_H
#include <stdint.h>
/*
KGRT						// [Rotation]
	long	nunks;
	long	LineType;			(0:don't interp;1:linear;2:hermite;3:bezier)
	long	GlobalSeqId;			// 0xFFFFFFFF if none
	struct {
		long	Frame;
		float	a, b, c, d;
		if (LineType > 1) {
			float	InTana, InTanb, InTanc, InTand;
			float	OutTana, OutTanb, OutTanc, OutTand;
		}
	} rotation[nunks];
*/
class MDLROTKEYFRAME {
public:
	MDLROTKEYFRAME();
public:
	long	Frame;
	float	a, b, c, d;
	float	InTana, InTanb, InTanc, InTand;
	float	OutTana, OutTanb, OutTanc, OutTand;
};
#endif