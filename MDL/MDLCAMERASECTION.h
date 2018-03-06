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
			int	nbytes;
		    std::vector<camera> cameras;
			friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"nbytes"<<md.nbytes<<std::endl;
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
