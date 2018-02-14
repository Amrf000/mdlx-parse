#include "MDLPARTICLEEMITTER.h"

MDLPARTICLEEMITTER::MDLPARTICLEEMITTER():
	OBJ(0x1000u),
	KGTR(2),
	KGRT(2),
	KGSC1(2),
	KGSC2(2),
	KPEV(2)
{
	EmissionRate = 0;
	Gravity = 0;
	Longitude = 0;
	Latitidue = 0;
}
MDLPARTICLEEMITTER::MDLPARTICLEEMITTER(const MDLPARTICLEEMITTER& that):
	OBJ(that.OBJ),
	KGTR(2),
	KGRT(2),
	KGSC1(2),
	KGSC2(2),
	PATI(that.PATI),
	KPEV(2)
{
	EmissionRate = that.EmissionRate;
	Gravity = that.Gravity;
	Longitude = that.Longitude;
	Latitidue = that.Latitidue;
}
MDLPARTICLEEMITTER::~MDLPARTICLEEMITTER()
{
}