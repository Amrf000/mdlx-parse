#ifndef _MDLHELPSECTION_H
#define _MDLHELPSECTION_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
/*
HELP						// [Helper]
	long	nbytes;
	OBJ[nhlprs]
*/
class MDLHELPSECTION 
{
public:
	MDLHELPSECTION();
	MDLHELPSECTION(const MDLHELPSECTION& that);
	~MDLHELPSECTION();
	
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
			char Key[4];//HELP
			int	nbytes;
			std::vector<MDLGENOBJECT> objs;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				  <<"nbytes"<<md.nbytes<<std::endl;
				for(int i=0;i<md.objs.size();++i)
				{
					os<<md.objs[i];
				}
				return os;
			}
	};
	mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLHELPSECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
