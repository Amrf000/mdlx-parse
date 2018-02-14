#include "MDLPRIMITIVES.h"

MDLPRIMITIVES::MDLPRIMITIVES()
{
}
MDLPRIMITIVES::MDLPRIMITIVES(const MDLPRIMITIVES& that):
	PTYP(that.PTYP),
	PCNT(that.PCNT),
	PVTX(that.PVTX)
{
}
int MDLPRIMITIVES::ReserveSpace(unsigned int a2, unsigned int a3)
{
	PTYP.reserve(a2);//, 0
	PCNT.reserve(a2);//, 0
	PVTX.reserve(a3);//, 0
	return 0;
}
int MDLPRIMITIVES::SetCount( unsigned int a2, unsigned int a3)
{
	PTYP.resize(a2);
	PCNT.resize(a2);
	PVTX.resize(a3);
	return 0;
}
MDLPRIMITIVES::~MDLPRIMITIVES()
{
}