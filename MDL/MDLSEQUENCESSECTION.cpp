#include "MDLSEQUENCESSECTION.h"

MDLSEQUENCESSECTION::MDLSEQUENCESSECTION():
	IntStart(0),
	IntEnd(0),
	MoveSpeed(0),
	NoLooping(0),
	Rarity(0),
	x(0)
{
	Name[0] = 0;
}
MDLSEQUENCESSECTION::MDLSEQUENCESSECTION( const MDLSEQUENCESSECTION& that)
{
	IntStart = that.IntStart;
	IntEnd = that.IntEnd;
	MoveSpeed = that.MoveSpeed;
	NoLooping = that.NoLooping;
	Rarity = that.Rarity;
	x = that.x;
	bound.BoundsRadius = that.bound.BoundsRadius;
	bound.MaxExtx = that.bound.MaxExtx;
	bound.MaxExty = that.bound.MaxExty;
	bound.MaxExtz = that.bound.MaxExtz;
	bound.MinExtx = that.bound.MinExtx;
	bound.MinExty = that.bound.MinExty;
	bound.MinExtz = that.bound.MinExtz;
	//*((uint32_t *)this + 12) = *((uint32_t *)a2 + 12);
	//*((uint32_t *)this + 13) = *((uint32_t *)a2 + 13);
	//*((uint32_t *)this + 14) = *((uint32_t *)a2 + 14);
	memcpy(Name, that.Name, 80);
}