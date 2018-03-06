#ifndef _MDLPARTICLEEMITTER_H
#define _MDLPARTICLEEMITTER_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
#include "MDLKEYTRACK.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLCOLORKEYFRAME.h"
/*
PREM						// [ParticleEmitter]
	int	nbytes;
	struct {
		int	nbytesi;
		int	nbytesikg;		// inclusive bytecount including KGXXs
		ASCII	Name;			(0x50 bytes)
		int	ObjectID;
		int	Parent; 		(0xFFFFFFFF if none)
		int	Flags;	    (bit20)	// +bit23(EmitterUsesMDL) +bit8(EmitterUsesTGA)
		(KGTR)
		(KGRT)
		(KGSC)
		float	EmissionRate;
		float	Gravity;
		float	Longitude;
		float	Latitidue;
		ASCII	ModelPath;		(0x100 bytes)
		int	???;			(0)
		float	LifeSpan;
		float	InitVelocity;
		(KPEV)
	} particleemitters[nprems];
*/
class MDLPARTICLEEMITTER
{
public:
	MDLPARTICLEEMITTER();
	MDLPARTICLEEMITTER(const MDLPARTICLEEMITTER& that);
	~MDLPARTICLEEMITTER();
	
	bool parse(char*& binary,int& rest);
public:
	class mdl_
	{
	    public:
		    friend std::ostream& operator<<(std::ostream& os, const mdl_& md)
			{
				return os;
			}	
	};
	mdl_ mdl;
	
	class mdx_
	{
		public:
			class particleemitter
			{
				public:
					int nbytesi;
					int	nbytesikg;
					char Name[80];
					int	ObjectID;
					int Parent;
					int	Flags;
					MDLKEYTRACK<MDLCOLORKEYFRAME> KGTR;
					MDLKEYTRACK<MDLROTKEYFRAME> KGRT;
					MDLKEYTRACK<MDLCOLORKEYFRAME> KGSC;
					float	EmissionRate;
					float	Gravity;
					float	Longitude;
					float	Latitidue;
					char	ModelPath[256];
					int	spare;
					float	LifeSpan;
					float	InitVelocity;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KPEV;					
			};
			int	nbytes;
			std::vector<particleemitter> particleemitters;
	};
	mdx_ mdx;
	
};
#endif
