#ifndef _MDLSCALEKEYFRAME_H
#define _MDLSCALEKEYFRAME_H
#include <stdint.h>
#include <iostream>
#include <sstream>

/*
KGSC						// [Scaling]
	int	nunks;
	int	LineType;			(0:don't interp;1:linear;2:hermite;3:bezier)
	int	GlobalSeqId;			// 0xFFFFFFFF if none
	struct {
		int	Frame;
		float	x, y, z;
		if (LineType > 1) {
			float	InTanx, InTany, InTanz;
			float	OutTanx, OutTany, OutTanz;
		}
	} scaling[nunks];
*/
class MDLSCALEKEYFRAME {
public:
	MDLSCALEKEYFRAME();
	MDLSCALEKEYFRAME(const MDLSCALEKEYFRAME& that);
	
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
			float	x, y, z;
			float	InTanx, InTany, InTanz;
			float	OutTanx, OutTany, OutTanz;
			
			int LineType;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Frame:"<<md.Frame<<std::endl
				         <<"x:"<<md.x<<",y:"<<md.y<<",z:"<<md.z<<std::endl;
				    if (md.LineType > 1) {  
						os<<"InTanx:"<<md.InTanx<<",InTany:"<<md.InTany<<",InTanz:"<<md.InTanz<<std::endl
						 <<"OutTanx:"<<md.OutTanx<<",OutTany:"<<md.OutTany<<",OutTanz:"<<md.OutTanz<<std::endl;
					}
				return os;
			}
	};
    mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLSCALEKEYFRAME& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
