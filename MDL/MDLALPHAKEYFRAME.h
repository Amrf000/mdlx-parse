#ifndef _MDLALPHAKEYFRAME_H
#define _MDLALPHAKEYFRAME_H
#include <stdint.h>
#include <iostream>
#include <sstream>
/*
KMTA						// [Alpha]
	long	nunks;
	long	LineType;			(0:don't interp;1:linear;2:hermite;3:bezier)
	long	GlobalSeqId;			// 0xFFFFFFFF if none
	struct {
		long	Frame;
		float	State;			(0 or 1)
		if (LineType > 1) {
			float	InTan;
			float	OutTan;
		}
	} alpha[nunks];
*/
class MDLALPHAKEYFRAME {
public:
	MDLALPHAKEYFRAME();
	MDLALPHAKEYFRAME(const MDLALPHAKEYFRAME& that);
	
	bool parse(char*& binary,int& rest,int LineType);
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
			int	Frame;
			float	State;
			
			float	InTan;
			float	OutTan;
			
			int	LineType;
			friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Frame:"<<md.Frame<<std::endl
				  <<"State:"<<md.State<<std::endl;
				if(md.LineType>1){
				    os<<"InTan:"<<md.InTan<<std::endl
				    <<"OutTan:"<<md.OutTan<<std::endl;
				}
				return os;
			}
	};
	mdx_ mdx;
	
	friend std::ostream& operator<<(std::ostream& os, const MDLALPHAKEYFRAME& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
