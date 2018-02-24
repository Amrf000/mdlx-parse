#ifndef _MDLCOLLISIONSHAPE_H
#define _MDLCOLLISIONSHAPE_H
#include <stdint.h>
#include <string.h>
#include "MDLGENOBJECT.h"
/*
CLID						// [CollisionShape] (now has VRTX and NRMS)
	long	nbytes;
	struct {
		OBJ
		long	Shape;			(0:box;2:sphere)
		float 	x, y, z;
		if (Shape == 0)
			float	x2, y2, z2;
		else
			float	BoundsRadius
	} collisionshape[nclds];
*/
class MDLCOLLISIONSHAPE
{
public:
	MDLCOLLISIONSHAPE();
	MDLCOLLISIONSHAPE(const MDLCOLLISIONSHAPE& that);
	MDLCOLLISIONSHAPE& operator=(const MDLCOLLISIONSHAPE& that);
	~MDLCOLLISIONSHAPE();
public:
	MDLGENOBJECT OBJ;
	uint32_t shape;
    float 	x, y, z;
	union {
		struct {
			float	x3, y3, z3;
		}st3;
		struct {
			float	x2, y2;
		}st2;
		float	BoundsRadius;
	}un;
};
#endif