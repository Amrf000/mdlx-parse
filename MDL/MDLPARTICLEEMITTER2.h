#ifndef _MDLPARTICLEEMITTER2_H
#define _MDLPARTICLEEMITTER2_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLFLOATPROPKEYFRAME.h"
/*
PRE2						// [ParticleEmitter2]
	long	nbytes;
	struct {
		long	nbytesi;
		long	nbytesikg;		// inclusive bytecount including KGXXs
		ASCII	Name;			(0x50 bytes)
		long	ObjectID;
		long	Parent; 		(0xFFFFFFFF if none)
		long	Flags;	    (bit20)	// +bit26(DontInherit Rotation)
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
		long	FilterMode; 		(0:Blend;1:Additive;2:Modulate;4:AlphaKey)
		long	Rows;
		long 	Columns;
		long	Flag2;			(0:Head;1:Tail;2:Both)
		float	TailLength;
		float	Time;
		struct {			// SegmentColor usually 3 segments
			float	R, G, B; 	// Inverse order from MDL
		} color[numsegments]
		byte	Alpha1, A2, A3;
		float	ScalingX, SY, SZ;
		long	LifeSpanUVAnim1, L2, L3;
		long	DecayUVAnim1, D2, D3;
		long	TailUVAnim1, T2, T3;
		long	TailDecayUVAnim1, TD2, TD3;
		long	TextureID;
		long	Squirt; 		(1:Squirt)
		long	PriorityPlane;
		long	ReplaceableID;
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
public:
	MDLGENOBJECT OBJ;
	float	Speed;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KGTR;
	float	Variation;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KGRT;
	float	Latitidue;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KGSC;
	float	Gravity;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KP2S;
	float	Lifespan;
	float	EmissionRate;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KP2L;
	float	Length;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KP2E;
	float	Width;
	MDLKEYTRACK<MDLFLOATPROPKEYFRAME> KP2V;
	long	FilterMode; //		(0:Blend;1:Additive;2:Modulate;4:AlphaKey)
	long	Rows;
	long 	Columns;
	long	Flag2;	//		(0:Head;1:Tail;2:Both)
	float	TailLength;
	float	Time;
	MDLKEYTRACK<MDLALPHAKEYFRAME> KP2N;
	float	R1, G1, B1;
	float	R2, G2, B2;
	float	R3, G3, B3;
	char	Alpha1, A2, A3;
	float	ScalingX, SY, SZ;
	long	LifeSpanUVAnim1, L2, L3;
	long	DecayUVAnim1, D2, D3;
	long	TailUVAnim1, T2, T3;
	long	TailDecayUVAnim1, TD2, TD3;
	long	TextureID;
	long	Squirt;// 		(1:Squirt)
	long	PriorityPlane;
	long	ReplaceableID;
};
#endif