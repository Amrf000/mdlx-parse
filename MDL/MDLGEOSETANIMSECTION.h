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

/*
KMTA						// [Alpha]
	long	nunks;
	long	LineType;			(0:don't interp;1:linear;2:hermite;3:bezier)
	long	GlobalSeqId;			// 0xFFFFFFFF if none
	struct {
		long	Frame;
		float	State;			(0 or 1)
		if (LineType > 1) {
			float	InTan;
			float	OutTan;
		}
	} alpha[nunks];
*/
class MDLGEOSETANIMSECTION
{
public:
	MDLGEOSETANIMSECTION();
	MDLGEOSETANIMSECTION(const MDLGEOSETANIMSECTION& that);
	~MDLGEOSETANIMSECTION();
public:
	MDLKEYTRACK<MDLALPHAKEYFRAME> KGAO1;
	float	staticAlpha;
	MDLKEYTRACK<MDLALPHAKEYFRAME> KGAO2;
	uint32_t	ColorAnimation;
	MDLKEYTRACK<MDLCOLORKEYFRAME> KGAC;
	float	ColorR, ColorG, ColorB;
	uint32_t	GeosetID;
};
#endif