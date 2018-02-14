#ifndef _MDLPARTICLEEMITTER_H
#define _MDLPARTICLEEMITTER_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
#include "MDLKEYTRACK.h"
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
class MDLPARTICLEEMITTER
{
public:
	MDLPARTICLEEMITTER();
	MDLPARTICLEEMITTER(const MDLPARTICLEEMITTER& that);
	~MDLPARTICLEEMITTER();
public:
	MDLGENOBJECT OBJ;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KGTR;
	float	EmissionRate;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KGRT;
	float	Gravity;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KGSC1;
	float	Longitude;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KGSC2;
	float	Latitidue;
	float	LifeSpan;
	float	InitVelocity;
	MDLPARTICLE PATI;
	MDLKEYTRACK<MDLALPHAKEYFRAME> KPEV;
};
#endif