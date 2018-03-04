#ifndef _MDLGENOBJECT_H
#define _MDLGENOBJECT_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLALPHAKEYFRAME.h"
#include "MDLROTKEYFRAME.h"
#include "MDLSCALEKEYFRAME.h"
/*
OBJ
	long	nbytesi;
	ASCII	Name;				(0x50 bytes)
	long	ObjectID;
	long	Parent;				(0:default;0xFFFFFFFF:none)
	long	Type;				// HELP:0;BONE:256;LITE:512;EVTS:1024;ATCH:2048;CLID:8192;
	(KGTR)					//   +1(DontInherit Translation) +16(BillboardedLockX)
	(KGRT)					//   +2(DontInherit Scaling)	 +32(BillboardedLockY)
	(KGSC)					//   +4(DontInherit Rotation)	 +64(BillboardedLockZ)
	(KATV)					//   +8(Billboarded)		 +128(CameraAnchored)
*/
class MDLGENOBJECT {
public:
	MDLGENOBJECT();
	MDLGENOBJECT(unsigned int a2);
	MDLGENOBJECT(const MDLGENOBJECT& that);
	~MDLGENOBJECT();
	MDLGENOBJECT& operator=(const MDLGENOBJECT& that);
	
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
			int	nbytesi;
		    char Name[80];
			int	ObjectID;
			int	Parent;
			int	Type;
		    MDLKEYTRACK<MDLSCALEKEYFRAME> KGTR;
		    MDLKEYTRACK<MDLROTKEYFRAME> KGRT;
		    MDLKEYTRACK<MDLSCALEKEYFRAME> KGSC;
		    MDLKEYTRACK<MDLALPHAKEYFRAME> KATV;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
		    {
		    	return os<<"nbytesi"<<md.nbytesi<<std::endl
		    	         <<"Name"<<md.Name<<std::endl
		    	         <<"ObjectID"<<md.ObjectID<<std::endl
		    	         <<"Parent"<<md.Parent<<std::endl
		    	         <<"Type"<<md.Type<<std::endl
		    	         <<md.KGTR
		    	         <<md.KGRT
		    	         <<md.KGSC
		    	         <<md.KATV;
			}
	};
	mdx_ mdx;

	friend std::ostream& operator<<(std::ostream& os, const MDLGENOBJECT& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
	
};
#endif
