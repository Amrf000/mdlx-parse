#ifndef _MDLGENOBJECT_H
#define _MDLGENOBJECT_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLTRANSKEYFRAME.h"
#include "MDLROTKEYFRAME.h"
#include "MDLSCALEKEYFRAME.h"
/*
OBJ
	long	nbytesi;
	ASCII	Name;				(0x50 bytes)
	long	ObjectID;
	long	Parent;				(0:default;0xFFFFFFFF:none)
	long	Type;				// HELP:0;BONE:256;LITE:512;EVTS:1024;ATCH:2048;CLID:8192;
	(KGTR)					//   +1(DontInherit Translation) +16(BillboardedLockX)
	(KGRT)					//   +2(DontInherit Scaling)	 +32(BillboardedLockY)
	(KGSC)					//   +4(DontInherit Rotation)	 +64(BillboardedLockZ)
	(KATV)					//   +8(Billboarded)		 +128(CameraAnchored)
*/
class MDLGENOBJECT {
public:
	MDLGENOBJECT(unsigned int a2);
	MDLGENOBJECT(const MDLGENOBJECT& that);
	~MDLGENOBJECT();
	int operator=(int a2);
public:
	uint8_t Name[80];
	long	ObjectID;
	long	Parent;
	long	Type;
	MDLKEYTRACK<MDLTRANSKEYFRAME>
	MDLKEYTRACK<MDLROTKEYFRAME>
	MDLKEYTRACK<MDLSCALEKEYFRAME>
};
#endif