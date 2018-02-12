#ifndef _MDLPRIMITIVES_H
#define _MDLPRIMITIVES_H
#include <stdint.h>
#include "MDLPRIMITIVE.h"

class MDLPRIMITIVES {
public:
	MDLPRIMITIVES();
	MDLPRIMITIVES(const MDLPRIMITIVES *a2);
	int ReserveSpace(unsigned int a2, unsigned int a3);
	int SetCount(unsigned int a2, unsigned int a3);
	~MDLPRIMITIVES();
};
#endif