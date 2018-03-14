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
						    friend std::ostream& operator<<(std::ostream& os, const color& md)
						    {
						          return os<<md.R<<","<<"G"<<md.G<<"B"<<md.B<<std::endl;
						    }
							bool parse(char*& binary,int& rest)
							{
								memcpy(&R,binary,4*3);
								binary += 3*4; rest -= 3*4;
								return true;
							}	
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
					particleemitter()
					{
						
					}
					particleemitter(const particleemitter& that)
					{
						nbytesi	= that.nbytesi;
						nbytesikg	= that.nbytesikg;
						memcpy(Name,Name,80);
						ObjectID	= that.ObjectID;
						Parent	= that.Parent; 
						Flags	= that.Flags;
						KGTR	= that.KGTR;	
						KGRT	= that.KGRT;		
						KGSC	= that.KGSC;	
						Speed	= that.Speed;
						Variation	= that.Variation;
						Latitidue	= that.Latitidue;
						Gravity	= that.Gravity;
						Lifespan	= that.Lifespan;
						EmissionRate	= that.EmissionRate;
						Length	= that.Length;
						Width	= that.Width;
						FilterMode	= that.FilterMode;
						Rows	= that.Rows;
						Columns	= that.Columns;
						Flag2	= that.Flag2;
						TailLength	= that.TailLength;
						Time	= that.Time;
						colors.assign(that.colors.begin(),that.colors.end());
						Alpha1	= that.Alpha1;A2 = that.A2; A3	= that.A3;
						ScalingX	= that.ScalingX;SY = that.SY;SZ = that.SZ;
						LifeSpanUVAnim1	= that.LifeSpanUVAnim1;L2 = that.L2;L3	= that.L3;
						DecayUVAnim1	= that.DecayUVAnim1;D2 = that.D2;D3 = that.D3;
						TailUVAnim1	= that.TailUVAnim1;T2	= that.T2;T3 = that.T3;
						TailDecayUVAnim1	= that.TailDecayUVAnim1;TD2	= that.TD2;TD3	= that.TD3;
						TextureID	= that.TextureID;
						Squirt	= that.Squirt;
						PriorityPlane	= that.PriorityPlane;
						ReplaceableID	= that.ReplaceableID;
						KP2S	= that.KP2S;
						KP2L	= that.KP2L;
						KP2E	= that.KP2E;
						KP2V	= that.KP2V;
						KP2N	= that.KP2N;
						KP2W	= that.KP2W;						
					}
					bool parse(char*& binary,int& rest)
					{
		                memcpy(&nbytesi,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&nbytesikg,binary,4);
					    binary += 4; rest -= 4;
						memcpy(Name,binary,4);
					    binary += 80; rest -= 80;
						memcpy(&ObjectID,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Parent,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&Flags,binary,4);
					    binary += 4; rest -= 4;
						KGTR.parse(binary,rest,"KGTR");	
						KGRT.parse(binary,rest,"KGRT");		
						KGSC.parse(binary,rest,"KGSC");	
						memcpy(&Speed,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Variation,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Latitidue,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Gravity,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Lifespan,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&EmissionRate,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Length,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Width,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&FilterMode,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Rows,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Columns,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Flag2,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&TailLength,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Time,binary,4);
					    binary += 4; rest -= 4;
					    colors.resize(3);
					    for(int i=0;i<3;++i)
					    {
					    	colors[i].parse(binary,rest);
						}
						memcpy(&Alpha1,binary,1);
					    binary += 1; rest -= 1;
						memcpy(&A2,binary,1);
					    binary += 1; rest -= 1; 
						memcpy(&A3,binary,1);
					    binary += 1; rest -= 1;
						memcpy(&ScalingX,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&SY,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&SZ,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&LifeSpanUVAnim1,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&L2,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&L3,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&DecayUVAnim1,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&D2,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&D3,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&TailUVAnim1,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&T2,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&T3,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&TailDecayUVAnim1,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&TD2,binary,4);
					    binary += 4; rest -= 4; 
						memcpy(&TD3,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&TextureID,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&Squirt,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&PriorityPlane,binary,4);
					    binary += 4; rest -= 4;
						memcpy(&ReplaceableID,binary,4);
					    binary += 4; rest -= 4;
						KP2S.parse(binary,rest,"KP2S");	
						KP2L.parse(binary,rest,"KP2L");	
						KP2E.parse(binary,rest,"KP2E");	
						KP2V.parse(binary,rest,"KP2V");	
						KP2N.parse(binary,rest,"KP2N");	
						KP2W.parse(binary,rest,"KP2W");							
					}
					friend std::ostream& operator<<(std::ostream& os, const particleemitter& md)
					{
						       os<<"nbytesi"<<md.nbytesi<<std::endl
						         <<"nbytesikg"<<md.nbytesikg<<std::endl
						         <<"Name"<<md.Name<<std::endl
						         <<"ObjectID"<<md.ObjectID<<std::endl
						         <<"Parent"<<md.Parent<<std::endl
						         <<"Flags"<<md.Flags<<std::endl
						         <<md.KGTR
						         <<md.KGRT
						         <<md.KGSC
						         <<"Speed"<<md.Speed<<std::endl
						         <<"Variation"<<md.Variation<<std::endl
						         <<"Latitidue"<<md.Latitidue<<std::endl
						         <<"Gravity"<<md.Gravity<<std::endl
								 <<"Lifespan"<<md.Lifespan<<std::endl
								 <<"EmissionRate"<<md.EmissionRate<<std::endl
								 <<"Length"<<md.Length<<std::endl
								 <<"Width"<<md.Width<<std::endl
								 <<"FilterMode"<<md.FilterMode<<std::endl
								 <<"Rows"<<md.Rows<<std::endl
								 <<"Columns"<<md.Columns<<std::endl
								 <<"Flag2"<<md.Flag2<<std::endl
								 <<"TailLength"<<md.TailLength<<std::endl
								 <<"Time"<<md.Time<<std::endl;
								 for(int i=0;i<md.colors.size();++i)
								     os<<md.colors[i];
								 os<<"Alpha1"<<md.Alpha1<<"A2"<<md.A2<<"Alpha1"<<md.A3<<std::endl
								 <<"ScalingX"<<md.ScalingX<<"SY"<<md.SY<<"SZ"<<md.SZ<<std::endl
								 <<"LifeSpanUVAnim1"<<md.LifeSpanUVAnim1<<"L2"<<md.L2<<"L3"<<md.L3<<std::endl
								 <<"DecayUVAnim1"<<md.DecayUVAnim1<<"D2"<<md.D2<<"D3"<<md.D3<<std::endl
								 <<"TailUVAnim1"<<md.TailUVAnim1<<"T2"<<md.T2<<"T3"<<md.T3<<std::endl
								 <<"TailDecayUVAnim1"<<md.TailDecayUVAnim1<<"TD2"<<md.TD2<<"TD3"<<md.TD3<<std::endl
								 <<"TextureID"<<md.TextureID<<std::endl
								 <<"Squirt"<<md.Squirt<<std::endl
								 <<"PriorityPlane"<<md.PriorityPlane<<std::endl
								 <<"ReplaceableID"<<md.ReplaceableID<<std::endl
								 <<md.KP2S
								 <<md.KP2L
								 <<md.KP2E
								 <<md.KP2V
								 <<md.KP2N
								 <<md.KP2W;
						return os;				        
					}
			};
			mdx_()
			{
			}
			mdx_(const mdx_& that)
			{
				memcpy(Key,that.Key,4);
				memcpy(&nbytes,&that.nbytes,4);
				particleemitters.assign(that.particleemitters.begin(),that.particleemitters.end());
			}
		    char Key[4];//PRE2
	        int	nbytes;	
		    std::vector<particleemitter> particleemitters;
			friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				  <<"nbytes"<<md.nbytes<<std::endl;
				for(int i=0;i<md.particleemitters.size();++i)
				{
					os<<md.particleemitters[i];
				}
				return os;
			}	
	};
	mdx_ mdx;
	
	friend std::ostream& operator<<(std::ostream& os, const MDLPARTICLEEMITTER2& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
