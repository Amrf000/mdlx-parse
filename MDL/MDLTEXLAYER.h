#ifndef _MDLTEXLAYER_H
#define _MDLTEXLAYER_H
#include <stdint.h>
#include "MDLFLIPBOOKTRACK.h"
#include "MDLALPHAKEYFRAME.h"
/*
LAYS						// [Layer} (ID may have been removed, extra bytes...)
	long	nlays;
	struct {
		long	nbytesi;
		long	FilterMode;	(0:none;1:transparent;2:blend;3:additive;4:addalpha;5:modulate)
		long	Shading;		//+1:unshaded;+2:SphereEnvMap;+16:twosided;
		long	TextureID;              //  +32:unfogged;+64:NoDepthTest;+128:NoDepthSet)
		long 	TVertexAnimId;		// 0xFFFFFFFF if none
		long	CoordId;
		float	Alpha;			(0(transparent)->1(opaque))
		(KMTA)
		(KMTF)				// state is long not float
	} layers[nlays];
*/
class MDLTEXLAYER {
public:
	MDLTEXLAYER();
	MDLTEXLAYER(const MDLTEXLAYER *a2);
	~MDLTEXLAYER();
public:
	long	nlays;
	long	FilterMode;
    long	Shading;
	long	TextureID; 
	MDLFLIPBOOKTRACK  KMTA;
    long 	TVertexAnimId;
	long	CoordId;
	MDLKEYTRACK<MDLALPHAKEYFRAME>  KMTF;
	float	Alpha;
};
#endif