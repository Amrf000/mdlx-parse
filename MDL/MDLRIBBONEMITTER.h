#ifndef _MDLRIBBONEMITTER_H
#define _MDLRIBBONEMITTER_H
#include <stdint.h>
#include "MDLINTTRACK.h"
#include "MDLGENOBJECT.h"
#include "MDLCOLORKEYFRAME.h"
#include "MDLALPHAKEYFRAME.h"
/*
RIBB
	int	nbytes;
	struct {
		int	nbytesi;
		int	nbytesikg;		// inclusive bytecount including KGXXs
		ASCII	Name;			(0x50 bytes)
		int	ObjectID;
		int	Parent; 		(0xFFFFFFFF if none)
		int	Flags;			(0x00400000)
		(KGTR)
		(KGRT)
		(KGSC)
		float	HeightAbove;
		float	HeightBelow;
		float	Alpha;
		float	ColorR, ColorG, ColorB;
		float	LifeSpan;
		int	???;			(0)
		int	EmissionRate;
		int	Rows;
		int	Columns;
		int	MaterialID;
		float	Gravity;
		(KRVS)
		(KRHA)
		(KRHB)
	} ribbs[nribbs];
*/
class MDLRIBBONEMITTER
{
public:
	MDLRIBBONEMITTER();
	MDLRIBBONEMITTER(const MDLRIBBONEMITTER& that);
	~MDLRIBBONEMITTER();
	
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
		    class ribb
			{
		    	public:
					int	nbytesi;
					int	nbytesikg;
					char	Name[80];	
					int	ObjectID;
					int	Parent; 
					int	Flags;	
					MDLKEYTRACK<MDLCOLORKEYFRAME> KGTR;
					MDLKEYTRACK<MDLROTKEYFRAME> KGRT;
					MDLKEYTRACK<MDLCOLORKEYFRAME> KGSC;
					float	HeightAbove;
					float	HeightBelow;
					float	Alpha;
					float	ColorR, ColorG, ColorB;
					float	LifeSpan;
					int	spare;
					int	EmissionRate;
					int	Rows;
					int	Columns;
					int	MaterialID;
					float	Gravity;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KRVS;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KRHA;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KRHB;
			};
			int nbytes;
	        std::vector<ribb> ribbs;
	};
	mdx_ mdx;	
};
#endif
