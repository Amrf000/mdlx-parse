#ifndef _MDLTEXANIMSECTION_H
#define _MDLTEXANIMSECTION_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLTRANSKEYFRAME.h"
#include "MDLROTKEYFRAME.h"
#include "MDLSCALEKEYFRAME.h"
/*
TXAN						// [Texture Animations]
	long 	nbytes;
	struct {
		long	nbytesi;
		(KTAT)				// Might be optional
		(KTAR)
		(KTAS)
	} txanims[nanims];
*/
class MDLTEXANIMSECTION {
public:
	MDLTEXANIMSECTION();
	MDLTEXANIMSECTION(const MDLTEXANIMSECTION *a2);
	~MDLTEXANIMSECTION();
};
#endif