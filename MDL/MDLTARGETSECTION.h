#ifndef _MDLTARGETSECTION_H
#define _MDLTARGETSECTION_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLTRANSKEYFRAME.h"
/*
struct { 			// Target
	float	x, y, z;
	(KCTR)
}
*/
class MDLTARGETSECTION {
public:
	MDLTARGETSECTION();
	MDLTARGETSECTION(const MDLTARGETSECTION& that);
	~MDLTARGETSECTION();
public:
	float x, y, z;
	MDLKEYTRACK<MDLTRANSKEYFRAME>  KCTR;
};
#endif