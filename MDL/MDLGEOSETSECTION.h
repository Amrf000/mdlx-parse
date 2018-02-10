#ifndef _MDLGEOSETSECTION_H
#define _MDLGEOSETSECTION_H
#include <stdint.h>
#include "../Base/TSGrowableArray.h"
#include "../Tempest/tempest.h"
#include "MDLPRIMITIVES.h"
/*
GEOS						// [Geoset]
	long	nbytes;
	struct {
		long	nbytes;
		VRTX
		NRMS
		PTYP
		PCNT
		PVTX
		GNDX
		MTGC
		MATS
		long	MaterialID;
		long	SelectionGroup;
		long	Selectable		(0:none;4:Unselectable)
		float	BoundsRadius;
		float	MinExtx, MinExty, MinExtz;
		float	MaxExtx, MaxExty, MaxExtz;
		long 	nanim;
		struct {
			float	BoundsRadius;
			float	MinExtx, MinExty, MinExtz;
			float	MaxExtx, MaxExty, MaxExtz;
		} ganimations[nganim];
		UVAS
		UVBS
	} geosets[ngeos];
*/
class MDLGEOSETSECTION {
public:
	MDLGEOSETSECTION();
	MDLGEOSETSECTION(const MDLGEOSETSECTION *a2);
	~MDLGEOSETSECTION();
};
#endif