#include "MDLSOUNDEMITTERSECTION.h"

MDLSOUNDEMITTERSECTION::MDLSOUNDEMITTERSECTION():
	OBJ(0)
{
}
MDLSOUNDEMITTERSECTION::MDLSOUNDEMITTERSECTION( const MDLSOUNDEMITTERSECTION& that):
	OBJ(that.OBJ),
	SOUNDS(that.SOUNDS)
{
}
MDLSOUNDEMITTERSECTION::~MDLSOUNDEMITTERSECTION()
{
}