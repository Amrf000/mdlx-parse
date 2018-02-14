#include "MDLMATERIALSECTION.h"

MDLMATERIALSECTION::MDLMATERIALSECTION()
{
	//result = TSStaticDynamicArray<MDLTEXLAYER, 2>::TSStaticDynamicArray(this);
	PriorityPlane = 0;
	RenderMode = 0;
}
MDLMATERIALSECTION::MDLMATERIALSECTION(const MDLMATERIALSECTION& that):
	LAYS(that.LAYS)
{
	PriorityPlane = that.PriorityPlane;
	RenderMode = that.RenderMode;
}