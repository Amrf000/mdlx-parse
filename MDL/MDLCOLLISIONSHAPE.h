#ifndef _MDLCOLLISIONSHAPE_H
#define _MDLCOLLISIONSHAPE_H
#include <stdint.h>
#include <string.h>
#include "MDLGENOBJECT.h"

class MDLCOLLISIONSHAPE {
public:
	MDLCOLLISIONSHAPE();
	MDLCOLLISIONSHAPE(const MDLCOLLISIONSHAPE *a2);
	uint32_t *operator=(uint32_t *a2);
	~MDLCOLLISIONSHAPE();
};
#endif