#ifndef _MDLPRIMITIVES_H
#define _MDLPRIMITIVES_H
#include <stdint.h>
#include <vector>
#include "MDLPRIMITIVE.h"
/*
--PTYP						// Not sure of the function of these.
long	nptyps;				//   PTYP seems to be a way to indicate the type
long	primType[nptyps];		//   of primitive (4) for each group indicated
--PCNT						//   in PCNT. And each value in PCNT is how
long	npcnts;				//   many verts in a face (3).
long	primCount[npcnts];
--PVTX						// [Faces]
long	ntris;
short	triangles[ntris];
*/
class MDLPRIMITIVES {
public:
	MDLPRIMITIVES();
	MDLPRIMITIVES(const MDLPRIMITIVES& that);
	int ReserveSpace(unsigned int a2, unsigned int a3);
	int SetCount(unsigned int a2, unsigned int a3);
	~MDLPRIMITIVES();
public:
	std::vector<MDLPRIMITIVE>  PTYP;
	std::vector<unsigned int>  PCNT;
	std::vector<unsigned short> PVTX;
};
#endif