#ifndef _MDLGEOSETSECTION_H
#define _MDLGEOSETSECTION_H
#include <stdint.h>
#include <vector>
#include "MDLPRIMITIVES.h"
#include "CMdlBounds.h"

class C2Vector;
class C3Vector;
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
	MDLGEOSETSECTION(const MDLGEOSETSECTION& a2);
	~MDLGEOSETSECTION();
public:
	std::vector<C3Vector> VRTX;
	std::vector<C3Vector> NRMS;
	std::vector<std::vector<C2Vector> > UVBS;
	std::vector<unsigned char> GNDX;
	MDLPRIMITIVES PRIM;
	std::vector<unsigned int> MTGC;
	std::vector<unsigned int> MATS;
	long	MaterialID;
	CMdlBounds bound;
	std::vector<CMdlBounds> bounds;
	long	SelectionGroup;
	long	Selectable;//		(0:none;4:Unselectable)
};
#endif