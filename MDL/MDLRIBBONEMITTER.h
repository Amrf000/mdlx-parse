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
				ribb()
				{
					
				}
				ribb(const ribb& that)
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
					HeightAbove = that.HeightAbove;
					HeightBelow = that.HeightBelow;
					Alpha = that.Alpha;
					ColorR = that.ColorR; ColorG = that.ColorG; ColorB = that.ColorB;
					LifeSpan = that.LifeSpan;
					spare = that.spare;
					EmissionRate = that.EmissionRate;
					Rows = that.Rows;
					Columns = that.Columns;
					MaterialID = that.MaterialID;
					Gravity = that.Gravity;
					KRVS = that.KRVS;
					KRHA = that.KRHA;
					KRHB = that.KRHB;
				}
				friend std::ostream& operator<<(std::ostream& os, const ribb& md)
				{
				 return os <<"nbytesi"<< md.nbytesi << std::endl
					<<"nbytesikg"<< md.nbytesikg << std::endl
					<<"Name"<< md.Name << std::endl	
					<<"ObjectID"<< md.ObjectID << std::endl
					<<"Parent"<< md.Parent << std::endl
					<<"Flags"<< md.Flags << std::endl	
					<<md.KGTR
					<<md.KGRT
					<<md.KGSC
					<<"HeightAbove"<< md.HeightAbove << std::endl
					<<"HeightBelow"<< md.HeightBelow << std::endl
					<<"Alpha"<< md.Alpha << std::endl
					<<"ColorR"<< md.ColorR <<"ColorG"<< md.ColorG << "ColorB"<< md.ColorB << std::endl
					<<"LifeSpan"<< md.LifeSpan << std::endl
					<<"spare"<< md.spare << std::endl
					<<"EmissionRate"<< md.EmissionRate << std::endl
					<<"Rows "<< md.Rows << std::endl
					<<"Columns"<< md.Columns << std::endl
					<<"MaterialID"<< md.MaterialID << std::endl
					<<"Gravity"<< md.Gravity << std::endl
					<<md.KRVS
					<<md.KRHA
					<<md.KRHB;					
				}
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
					memcpy(&HeightAbove,binary,4);
					binary += 4; rest -= 4;
					memcpy(&HeightBelow,binary,4);
					binary += 4; rest -= 4;
					memcpy(&Alpha,binary,4);
					binary += 4; rest -= 4;
					memcpy(&ColorR,binary,4);
					binary += 4; rest -= 4;
					memcpy(&ColorG,binary,4);
					binary += 4; rest -= 4;
					memcpy(&ColorB,binary,4);
					binary += 4; rest -= 4;
					memcpy(&LifeSpan,binary,4);
					binary += 4; rest -= 4;
					memcpy(&spare,binary,4);
					binary += 4; rest -= 4;
					memcpy(&EmissionRate,binary,4);
					binary += 4; rest -= 4;
					memcpy(&Rows,binary,4);
					binary += 4; rest -= 4;
					memcpy(&Columns,binary,4);
					binary += 4; rest -= 4;
					memcpy(&MaterialID,binary,4);
					binary += 4; rest -= 4;
					memcpy(&Gravity,binary,4);
					binary += 4; rest -= 4;
					KRVS.parse(binary,rest,"KRVS");
					KRHA.parse(binary,rest,"KRHA");
					KRHB.parse(binary,rest,"KRHB");					
				}
			};
			char Key[4];//RIBB
			int nbytes;
	        std::vector<ribb> ribbs;
	        mdx_()
	        {
	        	
			}
			mdx_(const mdx_& that)
			{
				memcpy(Key,that.Key,4);
				memcpy(&nbytes,&that.nbytes,4);
				ribbs.assign(that.ribbs.begin(),that.ribbs.end());
			}
			friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				  <<"nbytes"<<md.nbytes<<std::endl;
				for(int i=0;i<md.ribbs.size();++i)
				{
					os<<md.ribbs[i];
				}
				return os;
			}
	};
	mdx_ mdx;
	
	friend std::ostream& operator<<(std::ostream& os, const MDLRIBBONEMITTER& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}	
};
#endif
