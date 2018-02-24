#ifndef _MDLHEADERSECTION_H
#define _MDLHEADERSECTION_H
#include <stdint.h>
/*
VERS						// [Version]
	long	nbytes;
	long	Version; 			// Currently 0x20030000 (800)
*/
class MDLHEADERSECTION{
public:
	MDLHEADERSECTION();
public:
	char a[256];
	char b[256];
};
#endif