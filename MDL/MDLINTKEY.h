#ifndef _MDLINTKEY_H
#define _MDLINTKEY_H
#include <stdint.h>

class MDLINTKEY {
public:
	MDLINTKEY();
	MDLINTKEY(const MDLINTKEY& that);
public:
	long x, y;
};
#endif