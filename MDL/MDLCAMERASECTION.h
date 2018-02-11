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
class MDLCAMERASECTION 
{
public:
	MDLCAMERASECTION();
	MDLCAMERASECTION(const MDLCAMERASECTION *a2);
	~MDLCAMERASECTION();
public:
    uint8_t Name[80];
	uint32_t PosX;
	uint32_t PosY;
	uint32_t PosZ;
	uint32_t FieldOfView;
	uint32_t FarClip;
	uint32_t NearClip;
	MDLKEYTRACK<MDLTRANSKEYFRAME> 
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME>
	MDLTARGETSECTION                     Target;
	MDLKEYTRACK<MDLALPHAKEYFRAME> 
};
#endif