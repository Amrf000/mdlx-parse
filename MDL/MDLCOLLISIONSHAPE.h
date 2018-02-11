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
class MDLCOLLISIONSHAPE:public MDLGENOBJECT
{
public:
	MDLCOLLISIONSHAPE();
	MDLCOLLISIONSHAPE(const MDLCOLLISIONSHAPE *a2);
	uint32_t *operator=(uint32_t *a2);
	~MDLCOLLISIONSHAPE();
public:
	uint32_t shape;
    float 	x, y, z;
	float	x2, y2, z2;
	float	BoundsRadius
};
#endif