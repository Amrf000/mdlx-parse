#ifndef _MDLSOUNDKEYFRAME_H
#define _MDLSOUNDKEYFRAME_H
#include <stdint.h>

class MDLSOUNDKEYFRAME {
public:
	MDLSOUNDKEYFRAME();
	MDLSOUNDKEYFRAME(const MDLSOUNDKEYFRAME& that);
public:
	long x, y;
};
#endif