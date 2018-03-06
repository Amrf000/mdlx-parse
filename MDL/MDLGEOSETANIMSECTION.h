#ifndef _MDLGEOSETANIMSECTION_H
#define _MDLGEOSETANIMSECTION_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLCOLORKEYFRAME.h"
/*
GEOA						// [GeosetAnim]
	int	nbytes;
	struct {
		int	nbytesi;
		float	staticAlpha;		(1.0:use KGAO)
		int	ColorAnimation;		(0:none;1:DropShadow;2:Color;3:Both)
		float	ColorR, ColorG, ColorB; (default:1)
		int	GeosetID;
		(KGAO)
		(KGAC)
	} geosanims[ngsan];
*/
class MDLGEOSETANIMSECTION
{
public:
	MDLGEOSETANIMSECTION();
	MDLGEOSETANIMSECTION(const MDLGEOSETANIMSECTION& that);
	~MDLGEOSETANIMSECTION();
	
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
			class geosanim
			{
				public:
					geosanim(){
					}
					geosanim(const geosanim& that)
					{
						nbytesi = that.nbytesi;
						staticAlpha = that.staticAlpha;
						ColorAnimation = that.ColorAnimation;
						ColorR = that.ColorR; ColorG = that.ColorG; ColorB = that.ColorB;
						GeosetID = that.GeosetID;
						KGAO = that.KGAO;
						KGAC = that.KGAC;
					}
					int	nbytesi;
					float	staticAlpha;
					int	ColorAnimation;
					float	ColorR, ColorG, ColorB;
					int	GeosetID;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KGAO;
					MDLKEYTRACK<MDLCOLORKEYFRAME> KGAC;
					bool parse(char*& binary,int& rest)
					{
						memcpy(&nbytesi,binary,4);
						binary += 4; rest -= 4;	
						memcpy(&staticAlpha,binary,4);
						binary += 4; rest -= 4;							
						memcpy(&ColorAnimation,binary,4);
						binary += 4; rest -= 4;	
						memcpy(&ColorR,binary,4);
						binary += 4; rest -= 4;	
						memcpy(&ColorG,binary,4);
						binary += 4; rest -= 4;											
						memcpy(&ColorB,binary,4);
						binary += 4; rest -= 4;	
						memcpy(&GeosetID,binary,4);
						binary += 4; rest -= 4;																			
						KGAO.parse(binary,rest,"KGAO");
						KGAC.parse(binary,rest,"KGAC");
					}
					friend std::ostream& operator<<(std::ostream& os, const geosanim& md)
					{
						return os<<"nbytesi"<<md.nbytesi<<std::endl
						         <<"staticAlpha"<<md.staticAlpha<<std::endl
						         <<"ColorAnimation"<<md.ColorAnimation<<std::endl
						         <<"ColorR"<<md.ColorR<<"ColorG"<<md.ColorG<<"ColorB"<<md.ColorB<<std::endl
						         <<"GeosetID"<<md.GeosetID<<std::endl
						         <<md.KGAO
						         <<md.KGAC;    
					}
			};
			char Key[4];//GEOA
			int	nbytes;
			std::vector<geosanim> geosanims;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Key:"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				  <<"nbytes:"<<md.nbytes<<std::endl;
				for(int i=0;i<md.geosanims.size();++i)
				{
					os<<md.geosanims[i];
				}
				return os;
			}		
	};
	mdx_ mdx;
	
	friend std::ostream& operator<<(std::ostream& os, const MDLGEOSETANIMSECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
