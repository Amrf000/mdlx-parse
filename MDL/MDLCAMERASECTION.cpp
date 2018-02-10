#include "MDLCAMERASECTION.h"

int sub_1A500(uint8_t *a1, uint8_t *a2, int a3);
MDLCAMERASECTION::MDLCAMERASECTION()
{
	uint32_t *v1; // edx

	*(uint8_t *)this = 0;
	v1 = (uint32_t *)((char *)this + 80);
	*v1 = 0;
	v1[1] = 0;
	v1[2] = 0;
	*((uint32_t *)this + 23) = 0;
	*((uint32_t *)this + 24) = 1148846080;
	*((uint32_t *)this + 25) = 1090519040;
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::MDLKEYTRACK((char *)this + 104, 2);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 128, 2);
	//MDLTARGETSECTION::MDLTARGETSECTION((MDLCAMERASECTION *)((char *)this + 152));
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 188, 2);
}
MDLCAMERASECTION::MDLCAMERASECTION(const MDLCAMERASECTION *a2)
{
	sub_1A500((uint8_t*)this, (uint8_t*)a2, 80);
	*((uint32_t *)this + 20) = *((uint32_t *)a2 + 20);
	*((uint32_t *)this + 21) = *((uint32_t *)a2 + 21);
	*((uint32_t *)this + 22) = *((uint32_t *)a2 + 22);
	*((uint32_t *)this + 23) = *((uint32_t *)a2 + 23);
	*((uint32_t *)this + 24) = *((uint32_t *)a2 + 24);
	*((uint32_t *)this + 25) = *((uint32_t *)a2 + 25);
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::MDLKEYTRACK((char *)this + 104, (char *)a2 + 104);
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::MDLKEYTRACK((char *)this + 128, (char *)a2 + 128);
	//MDLTARGETSECTION::MDLTARGETSECTION(
		//(MDLCAMERASECTION *)((char *)this + 152),
	//	(const MDLCAMERASECTION *)((char *)a2 + 152));
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::MDLKEYTRACK((char *)this + 188, (char *)a2 + 188);
}
MDLCAMERASECTION::~MDLCAMERASECTION()
{
	//MDLKEYTRACK<MDLALPHAKEYFRAME>::~MDLKEYTRACK((char *)this + 188);
	//MDLTARGETSECTION::~MDLTARGETSECTION((MDLCAMERASECTION *)((char *)this + 152));
	//MDLKEYTRACK<MDLFLOATPROPKEYFRAME>::~MDLKEYTRACK((char *)this + 128);
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::~MDLKEYTRACK((char *)this + 104);
}