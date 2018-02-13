#ifndef _MDLRIBBONEMITTER_H
#define _MDLRIBBONEMITTER_H
#include <stdint.h>
#include "MDLINTTRACK.h"
#include "MDLGENOBJECT.h"
#include "MDLCOLORKEYFRAME.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLFLOATPROPKEYFRAME.h"
/*
RIBB
	long	nbytes;
	struct {
		long	nbytesi;
		long	nbytesikg;		// inclusive bytecount including KGXXs
		ASCII	Name;			(0x50 bytes)
		long	ObjectID;
		long	Parent; 		(0xFFFFFFFF if none)
		long	Flags;			(0x00400000)
		(KGTR)
		(KGRT)
		(KGSC)
		float	HeightAbove;
		float	HeightBelow;
		float	Alpha;
		float	ColorR, ColorG, ColorB;
		float	LifeSpan;
		long	???;			(0)
		long	EmissionRate;
		long	Rows;
		long	Columns;
		long	MaterialID;
		float	Gravity;
		(KRVS)
		(KRHA)
		(KRHB)
	} ribbs[nribbs];
*/
class MDLRIBBONEMITTER
{
public:
	MDLRIBBONEMITTER();
	MDLRIBBONEMITTER(const MDLRIBBONEMITTER& that);
	~MDLRIBBONEMITTER();
public:
	MDLGENOBJECT OBJ;
	float	HeightAbove;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KGTR;
	float	HeightBelow;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KGRT;
	float	Alpha;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KGSC;
	float	ColorR, ColorG, ColorB;
	MDLKEYTRACK<MDLCOLORKEYFRAME>  KRVS;
	float	LifeSpan;
	long    Rsv ;//			(0)
	long	EmissionRate;
	long	Rows;
	long	Columns;
	long	MaterialID;
	MDLINTTRACK KRHB;
	MDLKEYTRACK<MDLALPHAKEYFRAME> KRHA;
	float	Gravity;	
};
#endif