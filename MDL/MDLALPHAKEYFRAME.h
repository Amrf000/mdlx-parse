#ifndef _MDLALPHAKEYFRAME_H
#define _MDLALPHAKEYFRAME_H
#include <stdint.h>
/*
KMTA						// [Alpha]
	long	nunks;
	long	LineType;			(0:don't interp;1:linear;2:hermite;3:bezier)
	long	GlobalSeqId;			// 0xFFFFFFFF if none
	struct {
		long	Frame;
		float	State;			(0 or 1)
		if (LineType > 1) {
			float	InTan;
			float	OutTan;
		}
	} alpha[nunks];
*/
class MDLALPHAKEYFRAME {
public:
	MDLALPHAKEYFRAME();
	MDLALPHAKEYFRAME(const MDLALPHAKEYFRAME& that);
public:
	long	Frame;
	float	State;
	float	InTan;
	float	OutTan;
};
#endif