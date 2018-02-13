#include "MDLSOUNDSECTION.h"

MDLSOUNDSECTION::MDLSOUNDSECTION()
{
	path[0] = 0;
	x = 1176256512;
	y = 1065353216;
	w = 0;
}

MDLSOUNDSECTION::MDLSOUNDSECTION(const MDLSOUNDSECTION& that)
{
	memcpy(path, that.path, 260);
	x = that.x;
	y = that.y;
	w = that.w;
}
