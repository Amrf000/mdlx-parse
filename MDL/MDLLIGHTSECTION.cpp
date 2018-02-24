#include "MDLLIGHTSECTION.h"

MDLLIGHTSECTION::MDLLIGHTSECTION():
	OBJ(0x200u),
	KLAI1(2),
	KLAI2(2),
	KLAC(2),
	KLBC1(2),
	KLBI(2),
	KLBC2(2),
	KLAV(2)
{
	Type = 0;
	AttStart = 0;
	AttEnd = 0;
	ColR = 1065353216;
	ColG = 1065353216;
	ColB = 1065353216;
	Intensity = 0;
	AmbColR = 1065353216;
	AmbColG = 1065353216;
	AmbColB = 1065353216;
	AmbIntensity = 0;
}
MDLLIGHTSECTION::MDLLIGHTSECTION( const MDLLIGHTSECTION& that):
	OBJ(that.OBJ),
	KLAI1(that.KLAI1),
	KLAI2(that.KLAI2),
	KLAC(that.KLAC),
	KLBC1(that.KLBC1),
	KLBI(that.KLBI),
	KLBC2(that.KLBC2),
	KLAV(that.KLAV)
{
	Type = that.Type;
	AttStart = that.AttStart;
	AttEnd = that.AttEnd;
	ColR = that.ColR;
	ColG = that.ColG;
	ColB = that.ColB;
	Intensity = that.Intensity;
	AmbColR = that.AmbColR;
	AmbColG = that.AmbColG;
	AmbColB = that.AmbColB;
	AmbIntensity = that.AmbIntensity;
}
MDLLIGHTSECTION::~MDLLIGHTSECTION()
{
}