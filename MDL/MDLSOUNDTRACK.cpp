#include "MDLSOUNDTRACK.h"

MDLSOUNDTRACK::MDLSOUNDTRACK():
	val(4)
{
}
MDLSOUNDTRACK::MDLSOUNDTRACK( const MDLSOUNDTRACK& that):
	val(that.val)
{
}
MDLSOUNDTRACK::~MDLSOUNDTRACK()
{
}