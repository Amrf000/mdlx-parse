#ifndef _MDLSEQUENCESSECTION_H
#define _MDLSEQUENCESSECTION_H
#include <stdint.h>
#include "CMdlBounds.h"

class MDLSEQUENCESSECTION {
public:
	MDLSEQUENCESSECTION();
	MDLSEQUENCESSECTION(const MDLSEQUENCESSECTION *a2);
public:
	uint32_t m_0;
	uint32_t m_1;
	uint32_t m_2;
	uint32_t m_3;
	uint32_t m_4;
	uint32_t m_5;
	CMdlBounds m_8;
	uint8_t m_15;
};
#endif