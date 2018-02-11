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
class MDLLIGHTSECTION:public MDLGENOBJECT
{
public:
	MDLLIGHTSECTION();
	MDLLIGHTSECTION(const MDLLIGHTSECTION *a2);
	~MDLLIGHTSECTION();
public:
	long	Type;
	MDLKEYTRACK<MDLATTENKEYFRAME>
	MDLKEYTRACK<MDLATTENKEYFRAME> 
    float	AttStart, AttEnd;
	float	ColR, ColG, ColB;
	float	Intensity;
	float	AmbColR, AmbColG, AmbColB;
	float	AmbIntensity;
    MDLKEYTRACK<MDLCOLORKEYFRAME>
    MDLKEYTRACK<MDLINTENSITYKEYFRAME>
    MDLKEYTRACK<MDLCOLORKEYFRAME>
	MDLKEYTRACK<MDLINTENSITYKEYFRAME>
	MDLKEYTRACK<MDLALPHAKEYFRAME>
};
#endif