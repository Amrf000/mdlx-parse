#ifndef _MDLTARGETSECTION_H
#define _MDLTARGETSECTION_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLCOLORKEYFRAME.h"

/*
struct { 			// Target
	float	x, y, z;
	(KCTR)
}
*/
class MDLTARGETSECTION {
public:
	MDLTARGETSECTION();
	MDLTARGETSECTION(const MDLTARGETSECTION& that);
	~MDLTARGETSECTION();
	
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
			float x, y, z;
			MDLKEYTRACK<MDLCOLORKEYFRAME>  KCTR;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				return os<<"x"<<md.x<<"y"<<md.y<<"z"<<md.z<<std::endl
				         <<md.KCTR;
			}		
	};
	mdx_ mdx;
	
	friend std::ostream& operator<<(std::ostream& os, const MDLTARGETSECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}	
};
#endif
