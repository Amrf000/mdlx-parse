#ifndef _MDLMODELSECTION_H
#define _MDLMODELSECTION_H
#include <stdint.h>
#include "CMdlBounds.h"
/*
MODL						// [Model] (extra byte before blendTIme (0))
	long	nbytes;
	ASCII	Name;				(0x150 bytes)
	long	???;				(0)
	float	BoundsRadius;
	float	MinExtx, MinExty, MinExtz;
	float	MaxExtx, MaxExty, MaxExtz;
	long	BlendTime;
*/
class MDLMODELSECTION{
public:
	MDLMODELSECTION();
public:
	uint8_t Name[340];
	uint8_t m_20;
	uint32_t m_85;
	uint32_t m_86;
	uint32_t m_87;
	uint32_t m_88;
	uint32_t m_89;
	uint32_t m_90;
	uint32_t m_91;
	uint32_t m_92;
	uint32_t m_93;
	uint32_t m_94;
	uint32_t m_95;
	CMdlBounds m_96;
	uint32_t BlendTime;
};
#endif