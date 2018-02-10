#ifndef _MDLGEOSETANIMSECTION_H
#define _MDLGEOSETANIMSECTION_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLCOLORKEYFRAME.h"
/*
GEOA						// [GeosetAnim]
	long	nbytes;
	struct {
		long	nbytesi;
		float	staticAlpha;		(1.0:use KGAO)
		long	ColorAnimation;		(0:none;1:DropShadow;2:Color;3:Both)
		float	ColorR, ColorG, ColorB; (default:1)
		long	GeosetID;
		(KGAO)
		(KGAC)
	} geosanims[ngsan];
*/
class MDLGEOSETANIMSECTION {
public:
	MDLGEOSETANIMSECTION();
	MDLGEOSETANIMSECTION(const MDLGEOSETANIMSECTION *a2);
	~MDLGEOSETANIMSECTION();
};
#endif