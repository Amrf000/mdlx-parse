#include "MDLPARTICLE.h"

MDLPARTICLE::MDLPARTICLE():
	val1(2),
	val2(2)
{
	Path[0] = 0;
	LifeSpan = 0;
	InitVelocity = 0;
}
MDLPARTICLE::MDLPARTICLE( const MDLPARTICLE& that):
	val1(that.val1),
	val2(that.val2)
{
	memcpy(Path, that.Path, 260);
	LifeSpan = that.LifeSpan;
	InitVelocity = that.InitVelocity;
}
MDLPARTICLE::~MDLPARTICLE()
{
}