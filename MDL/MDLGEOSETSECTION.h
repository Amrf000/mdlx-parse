#ifndef _MDLGEOSETSECTION_H
#define _MDLGEOSETSECTION_H
#include <stdint.h>
#include "../Base/TSGrowableArray.h"
#include "../Tempest/tempest.h"
#include "MDLPRIMITIVES.h"

class MDLGEOSETSECTION {
public:
	MDLGEOSETSECTION();
	MDLGEOSETSECTION(const MDLGEOSETSECTION *a2);
	~MDLGEOSETSECTION();
};
#endif