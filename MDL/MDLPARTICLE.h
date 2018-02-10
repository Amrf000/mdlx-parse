#ifndef _MDLPARTICLE_H
#define _MDLPARTICLE_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLFLOATPROPKEYFRAME.h"

class MDLPARTICLE {
public:
	MDLPARTICLE();
	MDLPARTICLE(const MDLPARTICLE *a2);
	~MDLPARTICLE();
};
#endif