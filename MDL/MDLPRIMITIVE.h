#ifndef _MDLPRIMITIVE_H
#define _MDLPRIMITIVE_H
#include <stdint.h>
/*
PIVT						// [PivotPoints]
	long	nbytes;
	struct {
		float 	x,y,z
	} pivpts[npvps];
*/
class MDLPRIMITIVE {
public:
	MDLPRIMITIVE();
	MDLPRIMITIVE(const MDLPRIMITIVE& that);
public:
	long val;
};
#endif