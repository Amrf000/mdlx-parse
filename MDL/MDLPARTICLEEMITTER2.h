#ifndef _MDLPARTICLEEMITTER2_H
#define _MDLPARTICLEEMITTER2_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLCOLORKEYFRAME.h"

/*
PRE2						// [ParticleEmitter2]
	int	nbytes;
	struct {
		int	nbytesi;
		int	nbytesikg;		// inclusive bytecount including KGXXs
		ASCII	Name;			(0x50 bytes)
		int	ObjectID;
		int	Parent; 		(0xFFFFFFFF if none)
		int	Flags;	    (bit20)	// +bit26(DontInherit Rotation)
		(KGTR)				// +bit23(Unshaded)	+bit10(Unfogged)
		(KGRT)				// +bit12(XYQuad)	+bit9(LineEmitter)
		(KGSC)				// +bit11(ModelSpace)	+bit8(SortPrimsFarZ)
		float	Speed;
		float	Variation;
		float	Latitidue;
		float	Gravity;
		float	Lifespan;
		float	EmissionRate;
		float	Length;
		float	Width;
		int	FilterMode; 		(0:Blend;1:Additive;2:Modulate;4:AlphaKey)
		int	Rows;
		int 	Columns;
		int	Flag2;			(0:Head;1:Tail;2:Both)
		float	TailLength;
		float	Time;
		struct {			// SegmentColor usually 3 segments
			float	R, G, B; 	// Inverse order from MDL
		} color[numsegments]
		byte	Alpha1, A2, A3;
		float	ScalingX, SY, SZ;
		int	LifeSpanUVAnim1, L2, L3;
		int	DecayUVAnim1, D2, D3;
		int	TailUVAnim1, T2, T3;
		int	TailDecayUVAnim1, TD2, TD3;
		int	TextureID;
		int	Squirt; 		(1:Squirt)
		int	PriorityPlane;
		int	ReplaceableID;
		(KP2S)
		(KP2L)
		(KP2E)
		(KP2V)
		(KP2N)
		(KP2W)
	} particleemitters[npre2s];
*/
class MDLPARTICLEEMITTER2
{
public:
	MDLPARTICLEEMITTER2();
	MDLPARTICLEEMITTER2(const MDLPARTICLEEMITTER2& that);
	~MDLPARTICLEEMITTER2();
	
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
			class  particleemitter
			{
				public:
					class color
					{
					    public:
					    	float	R, G, B;	
					};
					int	nbytesi;
					int	nbytesikg;
					char	Name[80];
					int	ObjectID;
					int	Parent; 
					int	Flags;
					MDLKEYTRACK<MDLCOLORKEYFRAME> KGTR;	
					MDLKEYTRACK<MDLROTKEYFRAME> KGRT;		
					MDLKEYTRACK<MDLCOLORKEYFRAME> KGSC;	
					float	Speed;
					float	Variation;
					float	Latitidue;
					float	Gravity;
					float	Lifespan;
					float	EmissionRate;
					float	Length;
					float	Width;
					int	FilterMode;
					int	Rows;
					int 	Columns;
					int	Flag2;
					float	TailLength;
					float	Time;
					std::vector<color> colors;
					unsigned char	Alpha1, A2, A3;
					float	ScalingX, SY, SZ;
					int	LifeSpanUVAnim1, L2, L3;
					int	DecayUVAnim1, D2, D3;
					int	TailUVAnim1, T2, T3;
					int	TailDecayUVAnim1, TD2, TD3;
					int	TextureID;
					int	Squirt;
					int	PriorityPlane;
					int	ReplaceableID;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KP2S;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KP2L;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KP2E;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KP2V;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KP2N;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KP2W;
			};
	       int	nbytes;	
		   std::vector<particleemitter> particleemitters;	
	};
};
#endif
