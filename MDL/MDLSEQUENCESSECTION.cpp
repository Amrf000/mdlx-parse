#include "MDLSEQUENCESSECTION.h"

int sub_1A500(uint8_t *a1, uint8_t *a2, int a3);
MDLSEQUENCESSECTION::MDLSEQUENCESSECTION():
	m_0(0),
	m_1(0),
	m_2(0),
	m_3(0),
	m_4(0),
	m_5(0),
	m_15(0)
{
}
MDLSEQUENCESSECTION::MDLSEQUENCESSECTION( const MDLSEQUENCESSECTION *a2)
{
	int v2; // edx

	m_0 = *(uint32_t *)a2;
	m_1 = *((uint32_t *)a2 + 1);
	m_2 = *((uint32_t *)a2 + 2);
	m_3 = *((uint32_t *)a2 + 3);
	m_4 = *((uint32_t *)a2 + 4);
	m_5 = *((uint32_t *)a2 + 5);
	v2 = *((uint32_t *)a2 + 7);
	*((uint32_t *)this + 6) = *((uint32_t *)a2 + 6);
	*((uint32_t *)this + 7) = v2;
	*((uint32_t *)this + 8) = *((uint32_t *)a2 + 8);
	*((uint32_t *)this + 9) = *((uint32_t *)a2 + 9);
	*((uint32_t *)this + 10) = *((uint32_t *)a2 + 10);
	*((uint32_t *)this + 11) = *((uint32_t *)a2 + 11);
	*((uint32_t *)this + 12) = *((uint32_t *)a2 + 12);
	*((uint32_t *)this + 13) = *((uint32_t *)a2 + 13);
	*((uint32_t *)this + 14) = *((uint32_t *)a2 + 14);
	sub_1A500((uint8_t *)this + 60, (uint8_t *)a2 + 60, 80);
}