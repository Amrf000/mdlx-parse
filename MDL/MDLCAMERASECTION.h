#ifndef _MDLCAMERASECTION_H
#define _MDLCAMERASECTION_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLTARGETSECTION.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLTRANSKEYFRAME.h"
#include "MDLFLOATPROPKEYFRAME.h"

class MDLCAMERASECTION {
public:
	MDLCAMERASECTION();
	MDLCAMERASECTION(const MDLCAMERASECTION *a2);
	~MDLCAMERASECTION();
};
#endif