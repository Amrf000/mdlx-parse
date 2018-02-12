#include "MDLGEOSETANIMSECTION.h"

MDLGEOSETANIMSECTION::MDLGEOSETANIMSECTION()
	:KGAO1(2),KGAO2(2),KGAC(2)
{
	staticAlpha = 1065353216;
	ColorAnimation = 0;
	ColorR = 1065353216;
	ColorG = 1065353216;
	ColorB = 1065353216;
	GeosetID = 0;
}
MDLGEOSETANIMSECTION::MDLGEOSETANIMSECTION( const MDLGEOSETANIMSECTION& that)
	:KGAO1(that.KGAO1),KGAO2(that.KGAO2),KGAC(that.KGAC)
{
	staticAlpha = that.staticAlpha;
	ColorAnimation = that.ColorAnimation;
	ColorR = that.ColorR;
	ColorG = that.ColorG;
	ColorB = that.ColorB;
	GeosetID = that.GeosetID;
}
MDLGEOSETANIMSECTION::~MDLGEOSETANIMSECTION()
{
}