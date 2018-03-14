#ifndef _MDLCAMERASECTION_H
#define _MDLCAMERASECTION_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLTARGETSECTION.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLTRANSKEYFRAME.h"
#include "MDLCOLORKEYFRAME.h"
/*
CAMS						// [Camera]
	int 	nbytes;
	struct {
		int 	nbytesi;
		ASCII 	Name; 			(0x50)
		float	PosX, PosY, PosZ;
		float	FieldOfView;
		float	FarClip;
		float	NearClip;
		struct	{ 			// Target
			float	x, y, z;
			(KCTR)
		}
		(KCRL)
		(KTTR)
		(BKCT) ?????????????????????????????????????????????????????????????????
	} cameras[ncams];
*/
class MDLCAMERASECTION 
{
public:
	MDLCAMERASECTION();
	MDLCAMERASECTION(const MDLCAMERASECTION& that);
	~MDLCAMERASECTION();
	
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
			class camera
			{
				public:
					camera()
					{
						
					}
					camera(const camera& that)
					{
						nbytesi = that.nbytesi;
						memcpy(Name,that.Name,80);
						PosX = that.PosX,PosY = that.PosY,PosZ = that.PosZ;
						FieldOfView = that.FieldOfView;
						FarClip = that.FarClip;
						NearClip = that.NearClip;
						Target = that.Target;
						KCRL = that.KCRL;
						KTTR = that.KTTR;
						BKCT = that.BKCT;
					}
					int nbytesi;
					char Name[80];
					float	PosX, PosY, PosZ;
					float	FieldOfView;
					float	FarClip;
					float	NearClip;
					MDLTARGETSECTION Target;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KCRL;
					MDLKEYTRACK<MDLCOLORKEYFRAME> KTTR;
					MDLKEYTRACK<MDLALPHAKEYFRAME> BKCT;
					bool parse(char*& binary,int& rest)
					{
						memcpy(&nbytesi,binary,4);
						binary += 4; rest -= 4;
						memcpy(Name,binary,80);
						binary += 80; rest -= 80;
						memcpy(&PosX,binary,4);
						binary += 4; rest -= 4;
						memcpy(&PosY,binary,4);
						binary += 4; rest -= 4;						
						memcpy(&PosZ,binary,4);
						binary += 4; rest -= 4;	
						memcpy(&FieldOfView,binary,4);
						binary += 4; rest -= 4;							
						memcpy(&FarClip,binary,4);
						binary += 4; rest -= 4;	
						memcpy(&NearClip,binary,4);
						binary += 4; rest -= 4;																			
						Target.parse(binary,rest);
						KCRL.parse(binary,rest,"KCRL");
						KTTR.parse(binary,rest,"KTTR");
						BKCT.parse(binary,rest,"BKCT");						
					}
					friend std::ostream& operator<<(std::ostream& os, const camera& md)
					{
						return os<<"nbytesi"<<md.nbytesi<<std::endl
						   <<"Name"<<md.Name<<std::endl
						   <<"PosX"<<md.PosX<<"PosY"<<md.PosY<<"PosZ"<<md.PosZ<<std::endl
						   <<"FieldOfView"<<md.FieldOfView<<std::endl
						   <<"FarClip"<<md.FarClip<<std::endl
						   <<md.Target
						   <<md.KCRL
						   <<md.BKCT;
					}
			};
			char Key[4];//CAMS
			int	nbytes;
		    std::vector<camera> cameras;
		    mdx_()
		    {
		    	
			}
			mdx_(const mdx_& that)
			{
				memcpy(Key,that.Key,4);
				memcpy(&nbytes,&that.nbytes,4);
				cameras.assign(that.cameras.begin(),that.cameras.end());
			}
			friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				  <<"nbytes"<<md.nbytes<<std::endl;
				for(int i=0;i<md.cameras.size();++i)
				{
					os<<md.cameras[i];
				}
				return os;
			}
	};
    mdx_ mdx;
    
	friend std::ostream& operator<<(std::ostream& os, const MDLCAMERASECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
