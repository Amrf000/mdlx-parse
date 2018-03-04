#ifndef _MDLBONESECTION_H
#define _MDLBONESECTION_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
/*
BONE						// [Bone]
	long	nbytes;
	struct {
		OBJ
		long 	GeosetID;
		long 	GeosetAnimID;
	} bones[nbons];
*/
class MDLBONESECTION  
{
public:
	MDLBONESECTION();
	MDLBONESECTION(const MDLBONESECTION& that);
	~MDLBONESECTION();
	
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
			class bone{
			    public:
					bone()
					{
						
					}
					bone(const bone& that)
					{
						OBJ = that.OBJ;
						GeosetID = that.GeosetID;
						GeosetAnimID = that.GeosetAnimID;
					}
			        MDLGENOBJECT OBJ;
					int 	GeosetID;
					int 	GeosetAnimID;
					friend std::ostream& operator<<(std::ostream& os, const bone& md)
					{
						return os<<md.OBJ
						         <<"GeosetID"<<md.GeosetID<<std::endl
						         <<"GeosetAnimID"<<md.GeosetAnimID<<std::endl;
					}
			};
			int	nbytes;
			std::vector<bone> bones;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"nbytes"<<md.nbytes<<std::endl;
				for(int i=0;i<md.bones.size();++i)
				{
					os<<md.bones[i];
				}
				return os;
			}
	};
	mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLBONESECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
