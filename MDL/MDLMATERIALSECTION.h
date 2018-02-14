#ifndef _MDLMATERIALSECTION_H
#define _MDLMATERIALSECTION_H
#include <stdint.h>
#include "MDLTEXLAYER.h"
/*
MTLS						// [Materials]
	long	nbytes;
	struct {
		long	nbytesi;
		long	PriorityPlane;
		long	RenderMode;		(+1:ConstantColor;+16:SortPrimsFarZ;+32:FullResolution)
		LAYS
	} materials[nmtls];
*/
class MDLMATERIALSECTION {
public:
	MDLMATERIALSECTION();
	MDLMATERIALSECTION(const MDLMATERIALSECTION& that);
public:
	std::vector<MDLTEXLAYER> LAYS;
	long	PriorityPlane;
	long	RenderMode;
};
#endif