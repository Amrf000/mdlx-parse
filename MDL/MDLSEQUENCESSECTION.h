#ifndef _MDLSEQUENCESSECTION_H
#define _MDLSEQUENCESSECTION_H
#include <stdint.h>
#include <string.h>
#include "CMdlBounds.h"
/*
SEQS						// [Sequences] (v13: +8 bytes?)
	long	nbytes;
	struct {
		ASCII	Name;			(0x50 bytes)
		long	IntStart, IntEnd;
		float	MoveSpeed;
		long	NoLooping;		(0:loop; 1:no loop)
		float	Rarity;
		long	???;			(0)
		float	BoundsRadius;
		float	MinExtx, MinExty, MinExtz;
		float	MaxExtx, MaxExty, MaxExtz;
	} sequences[nseqs];
*/
class MDLSEQUENCESSECTION {
public:
	MDLSEQUENCESSECTION();
	MDLSEQUENCESSECTION(const MDLSEQUENCESSECTION& that);
public:
	long IntStart;
	long IntEnd;
	float	MoveSpeed;
	long	NoLooping;
	float	Rarity;
	long    x;
	CMdlBounds bound;
	uint8_t Name[80];
};
#endif