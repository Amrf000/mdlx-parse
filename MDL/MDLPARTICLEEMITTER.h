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
					bool parse(char*& binary,int& rest)
					{
						memcpy(&nbytesi,binary,4);
						binary += 4; rest -= 4;
						memcpy(&nbytesikg,binary,4);
						binary += 4; rest -= 4;
						memcpy(Name,binary,80);
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
						memcpy(&EmissionRate,binary,4);
						binary += 4; rest -= 4;
						memcpy(&Gravity,binary,4);
						binary += 4; rest -= 4;
						memcpy(&Longitude,binary,4);
						binary += 4; rest -= 4;
						memcpy(&Latitidue,binary,4);
						binary += 4; rest -= 4;
						memcpy(ModelPath,binary,256);
						binary += 256; rest -= 256;
						memcpy(&spare,binary,4);
						binary += 4; rest -= 4;
						memcpy(&LifeSpan,binary,4);
						binary += 4; rest -= 4;
						memcpy(&InitVelocity,binary,4);
						binary += 4; rest -= 4;
						KPEV.parse(binary,rest,"KPEV");						
					}	
					particleemitter()
					{
							
					}
					particleemitter(const particleemitter& that)
					{
						nbytesi = that.nbytesi;
						nbytesikg = that.nbytesikg;
						memcpy(Name,that.Name,80);
						ObjectID = that.ObjectID;
						Parent = that.Parent;
						Flags = that.Flags;
						KGTR = that.KGTR;
						KGRT = that.KGRT;
						KGSC = that.KGSC;
						EmissionRate = that.EmissionRate;
						Gravity = that.Gravity;
						Longitude = that.Longitude;
						Latitidue = that.Latitidue;
						memcpy(ModelPath, that.ModelPath,256);
						spare = that.spare;
						LifeSpan = that.LifeSpan;
						InitVelocity = that.InitVelocity;
						KPEV = that.KPEV;	
				    }
					friend std::ostream& operator<<(std::ostream& os, const particleemitter& md)
					{
						return os<<"nbytesi"<<md.nbytesi<<std::endl
						         <<"nbytesikg"<<md.nbytesikg<<std::endl
						         <<"Name"<<md.Name<<std::endl
						         <<"ObjectID"<<md.ObjectID<<std::endl
						         <<"Parent"<<md.Parent<<std::endl
						         <<"Flags"<<md.Flags<<std::endl
						         <<md.KGTR
						         <<md.KGRT
						         <<md.KGSC
						         <<"EmissionRate"<<md.EmissionRate<<std::endl
						         <<"Gravity"<<md.Gravity<<std::endl
								 <<"Longitude"<<md.Longitude<<std::endl
								 <<"Latitidue"<<md.Latitidue<<std::endl
								 <<"ModelPath"<<md.ModelPath<<std::endl
								 <<"spare"<<md.spare<<std::endl
								 <<"LifeSpan"<<md.LifeSpan<<std::endl
								 <<"InitVelocity"<<md.InitVelocity<<std::endl
								 <<md.KPEV;
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
			char Key[4];//PREM
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
	
	friend std::ostream& operator<<(std::ostream& os, const MDLPARTICLEEMITTER& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}	
};
#endif
