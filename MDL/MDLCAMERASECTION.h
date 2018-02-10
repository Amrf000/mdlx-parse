#ifndef _MDLCAMERASECTION_H
#define _MDLCAMERASECTION_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLTARGETSECTION.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLTRANSKEYFRAME.h"
#include "MDLFLOATPROPKEYFRAME.h"
/*
CAMS						// [Camera]
	long 	nbytes;
	struct {
		long 	nbytesi;
		ASCII 	Name; 			(0x50)
		float	PosX, PosY, PosZ;
		float	FieldOfView;
		float	FarClip;
		float	NearClip;
		struct	{ 			// Target
			float	x, y, z;
			(KCTR)
		}
		(KCRL)
		(KTTR)
		(BKCT) ?????????????????????????????????????????????????????????????????
	} cameras[ncams];
*/
class MDLCAMERASECTION {
public:
	MDLCAMERASECTION();
	MDLCAMERASECTION(const MDLCAMERASECTION *a2);
	~MDLCAMERASECTION();
};
#endif