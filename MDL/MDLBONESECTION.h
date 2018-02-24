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
class MDLBONESECTION  
{
public:
	MDLBONESECTION();
	MDLBONESECTION(const MDLBONESECTION& that);
	~MDLBONESECTION();
public:
	MDLGENOBJECT OBJ;
	uint32_t GeosetID;
	uint32_t GeosetAnimID;
};
#endif