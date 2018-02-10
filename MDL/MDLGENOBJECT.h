#ifndef _MDLGENOBJECT_H
#define _MDLGENOBJECT_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLTRANSKEYFRAME.h"
#include "MDLROTKEYFRAME.h"
#include "MDLSCALEKEYFRAME.h"

class MDLGENOBJECT {
public:
	MDLGENOBJECT(unsigned int a2);
	MDLGENOBJECT(const MDLGENOBJECT *a2);
	~MDLGENOBJECT();
	int operator=(int a2);
};
#endif