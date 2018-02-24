#include "MDLCAMERASECTION.h"

MDLCAMERASECTION::MDLCAMERASECTION():
	KCRL(2),
	KTTR(2),
	BKCT(2)
{
	Name[0] = 0;
	PosX = 0;
	PosY = 0;
	PosZ = 0;
	FieldOfView = 0;
	FarClip = 1148846080;
	NearClip = 1090519040;
}
MDLCAMERASECTION::MDLCAMERASECTION(const MDLCAMERASECTION& that):
	KCRL(that.KCRL),
	KTTR(that.KTTR),
	Target(that.Target),
	BKCT(that.BKCT)
{
	memcpy(Name, that.Name, 80);
	PosX = PosX;
	PosY = PosY;
	PosZ = PosZ;
	FieldOfView = FieldOfView;
	FarClip = FarClip;
	NearClip = NearClip;
}
MDLCAMERASECTION::~MDLCAMERASECTION()
{
}