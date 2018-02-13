#ifndef _MDLTEXTURESECTION_H
#define _MDLTEXTURESECTION_H
#include <stdint.h>
#include <string.h>
/*
TEXS						// [Textures] (same as v800)
	long	nbytes;
	struct {
		long	ReplaceableID;
		ASCII	TexturePath;		(0x100 bytes)
		long	???;			(0)
		long	Wrapping;		(1:WrapWidth;2:WrapHeight;3:Both)
	} textures[ntexs];
*/
class MDLTEXTURESECTION {
public:
	MDLTEXTURESECTION();
	MDLTEXTURESECTION(const MDLTEXTURESECTION& that);
public:
	long	ReplaceableID;
	char    TexturePath[260];
	long	Wrapping;
};
#endif