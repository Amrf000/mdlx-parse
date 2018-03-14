#ifndef _MDLPIVOTSECTION_H
#define _MDLPIVOTSECTION_H
#include <stdint.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include <vector>
#include "MDLGEOSETSECTION.h"

/*
PIVT						// [PivotPoints]
	long	nbytes;
	struct {
		float 	x,y,z
	} pivpts[npvps];
*/

class C3Vector;

class MDLPIVOTSECTION 
{
public:
	MDLPIVOTSECTION();
	MDLPIVOTSECTION(const MDLPIVOTSECTION& that);
	~MDLPIVOTSECTION();
	
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
			char Key[4];//PIVT
			int	nbytes;
			std::vector<C3Vector> pivpts;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				  <<"nbytes"<<md.nbytes<<std::endl;
				for(int i=0;i<md.pivpts.size();++i)
				{
					os<<md.pivpts[i];
				}
				return os;
			}
	};
	mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLPIVOTSECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
