#include "MDLMATERIALSECTION.h"

MDLMATERIALSECTION::MDLMATERIALSECTION()
{
	PriorityPlane = 0;
	RenderMode = 0;
}
MDLMATERIALSECTION::MDLMATERIALSECTION(const MDLMATERIALSECTION& that):
	LAYS(that.LAYS)
{
	PriorityPlane = that.PriorityPlane;
	RenderMode = that.RenderMode;
}