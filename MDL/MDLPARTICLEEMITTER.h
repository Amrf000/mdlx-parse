#ifndef _MDLPARTICLEEMITTER_H
#define _MDLPARTICLEEMITTER_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
#include "MDLPARTICLE.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLFLOATPROPKEYFRAME.h"

class MDLPARTICLEEMITTER {
public:
	MDLPARTICLEEMITTER();
	MDLPARTICLEEMITTER(const MDLPARTICLEEMITTER *a2);
	~MDLPARTICLEEMITTER();
};
#endif