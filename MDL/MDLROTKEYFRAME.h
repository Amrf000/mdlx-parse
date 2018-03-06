#ifndef _MDLROTKEYFRAME_H
#define _MDLROTKEYFRAME_H
#include <stdint.h>
#include <iostream>
#include <sstream>

/*
KGRT						// [Rotation]
	long	nunks;
	long	LineType;			(0:don't interp;1:linear;2:hermite;3:bezier)
	long	GlobalSeqId;			// 0xFFFFFFFF if none
	struct {
		long	Frame;
		float	a, b, c, d;
		if (LineType > 1) {
			float	InTana, InTanb, InTanc, InTand;
			float	OutTana, OutTanb, OutTanc, OutTand;
		}
	} rotation[nunks];
*/
class MDLROTKEYFRAME {
public:
	MDLROTKEYFRAME();
	MDLROTKEYFRAME(const MDLROTKEYFRAME& that);
	
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
			float	a, b, c, d;
			float	InTana, InTanb, InTanc, InTand;
			float	OutTana, OutTanb, OutTanc, OutTand;
			
			int LineType;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os  <<"Frame:"<<md.Frame<<std::endl
				    <<"a:"<<md.a<<",b:"<<md.b<<",c:"<<md.c<<",d:"<<md.d<<std::endl;
				    if (md.LineType > 1) {    
						os <<"InTanx:"<<md.InTana<<",InTany:"<<md.InTanb<<",InTanz:"<<md.InTanc<<",InTand:"<<md.InTand<<std::endl
						   <<"OutTanx:"<<md.OutTana<<",OutTany:"<<md.OutTanb<<",OutTanz:"<<md.OutTanc<<",OutTand:"<<md.OutTand<<std::endl;
				    }
				return os;
			}
	};
    mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLROTKEYFRAME& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
