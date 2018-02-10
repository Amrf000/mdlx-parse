#ifndef _MDLSOUNDTRACK_H
#define _MDLSOUNDTRACK_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLSOUNDKEYFRAME.h"

class MDLSOUNDTRACK {
public:
	MDLSOUNDTRACK();
	MDLSOUNDTRACK(const MDLSOUNDTRACK *a2);
	~MDLSOUNDTRACK();
};
#endif