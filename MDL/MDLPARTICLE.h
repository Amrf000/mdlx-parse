#ifndef _MDLPARTICLE_H
#define _MDLPARTICLE_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLFLOATPROPKEYFRAME.h"
/*
Particle {
static LifeSpan <float>,
static InitVelocity <float>,
Path <string_path>,
}
*/
class MDLPARTICLE {
public:
	MDLPARTICLE();
	MDLPARTICLE(const MDLPARTICLE& that);
	~MDLPARTICLE();
public:
	char Path[260];
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> val1;
	float LifeSpan;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> val2;
	float InitVelocity;
	
};
#endif