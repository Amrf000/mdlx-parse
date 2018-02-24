#ifndef _MDLATTENKEYFRAME_H
#define _MDLATTENKEYFRAME_H
#include <stdint.h>

class MDLATTENKEYFRAME {
public:
	MDLATTENKEYFRAME();
	MDLATTENKEYFRAME(const MDLATTENKEYFRAME& that);
public:
	float x, y, z, w;
};
#endif