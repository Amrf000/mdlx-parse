#ifndef _MDLPARTICLEEMITTER_H
#define _MDLPARTICLEEMITTER_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
#include "MDLPARTICLE.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLFLOATPROPKEYFRAME.h"
/*
PREM						// [ParticleEmitter]
	long	nbytes;
	struct {
		long	nbytesi;
		long	nbytesikg;		// inclusive bytecount including KGXXs
		ASCII	Name;			(0x50 bytes)
		long	ObjectID;
		long	Parent; 		(0xFFFFFFFF if none)
		long	Flags;	    (bit20)	// +bit23(EmitterUsesMDL) +bit8(EmitterUsesTGA)
		(KGTR)
		(KGRT)
		(KGSC)
		float	EmissionRate;
		float	Gravity;
		float	Longitude;
		float	Latitidue;
		ASCII	ModelPath;		(0x100 bytes)
		long	???;			(0)
		float	LifeSpan;
		float	InitVelocity;
		(KPEV)
	} particleemitters[nprems];
*/
class MDLPARTICLEEMITTER:public MDLGENOBJECT
{
public:
	MDLPARTICLEEMITTER();
	MDLPARTICLEEMITTER(const MDLPARTICLEEMITTER *a2);
	~MDLPARTICLEEMITTER();
public:
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>

	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>

	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>

	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>

	float	EmissionRate;
	float	Gravity;
	float	Longitude;
	float	Latitidue;
	float	LifeSpan;
	float	InitVelocity;
	MDLPARTICLE
    MDLKEYTRACK<MDLALPHAKEYFRAME>
};
#endif