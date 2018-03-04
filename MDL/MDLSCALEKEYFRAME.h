#ifndef _MDLSCALEKEYFRAME_H
#define _MDLSCALEKEYFRAME_H
#include <stdint.h>
#include <iostream>
#include <sstream>

/*
KGSC						// [Scaling]
	long	nunks;
	long	LineType;			(0:don't interp;1:linear;2:hermite;3:bezier)
	long	GlobalSeqId;			// 0xFFFFFFFF if none
	struct {
		long	Frame;
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
			long	Frame;
			float	x, y, z;
			float	InTanx, InTany, InTanz;
			float	OutTanx, OutTany, OutTanz;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				return os<<"Frame:"<<md.Frame<<std::endl
				         <<"x:"<<md.x<<",y:"<<md.y<<",z:"<<md.z<<std::endl
						 <<"InTanx:"<<md.InTanx<<",InTany:"<<md.InTany<<",InTanz:"<<md.InTanz<<std::endl
						 <<"OutTanx:"<<md.OutTanx<<",OutTany:"<<md.OutTany<<",OutTanz:"<<md.OutTanz<<std::endl;
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
