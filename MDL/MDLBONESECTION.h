#ifndef _MDLBONESECTION_H
#define _MDLBONESECTION_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
/*
BONE						// [Bone]
	long	nbytes;
	struct {
		OBJ
		long 	GeosetID;
		long 	GeosetAnimID;
	} bones[nbons];
*/
class MDLBONESECTION {
public:
	MDLBONESECTION();
	MDLBONESECTION(const MDLBONESECTION *a2);
	~MDLBONESECTION();
};
#endif