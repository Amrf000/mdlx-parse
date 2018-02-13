#ifndef _MDLLIGHTSECTION_H
#define _MDLLIGHTSECTION_H
#include <stdint.h>
#include "MDLALPHAKEYFRAME.h"
#include "MDLGENOBJECT.h"
#include "MDLATTENKEYFRAME.h"
#include "MDLCOLORKEYFRAME.h"
#include "MDLINTENSITYKEYFRAME.h"
/*
LITE						// [Light]
	long	nbytes;
	struct {
		long	nbytesi;
		OBJ
		long	Type			(0:Omnidirectional;1:Directional;2:Ambient)
		float	AttStart, AttEnd;
		float	ColR, ColG, ColB;
		float	Intensity;
		float	AmbColR, AmbColG, AmbColB;
		float	AmbIntensity;
		(KLAI)
		(KLAV)
		(KLAC)
		(KLBC)
		(KLBI)
	} lights[nlits];
*/
class MDLLIGHTSECTION
{
public:
	MDLLIGHTSECTION();
	MDLLIGHTSECTION(const MDLLIGHTSECTION& that);
	~MDLLIGHTSECTION();
public:
	MDLGENOBJECT OBJ;
	long	Type;
	MDLKEYTRACK<MDLATTENKEYFRAME>
	float	AttStart;
	MDLKEYTRACK<MDLATTENKEYFRAME> 
    float	AttEnd;
    MDLKEYTRACK<MDLCOLORKEYFRAME>
	float	ColR, ColG, ColB;
    MDLKEYTRACK<MDLINTENSITYKEYFRAME>
	float	Intensity;
    MDLKEYTRACK<MDLCOLORKEYFRAME>
	float	AmbColR, AmbColG, AmbColB;
	MDLKEYTRACK<MDLINTENSITYKEYFRAME>
	float	AmbIntensity;
	MDLKEYTRACK<MDLALPHAKEYFRAME>
};
#endif