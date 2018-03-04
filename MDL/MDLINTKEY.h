#ifndef _MDLINTKEY_H
#define _MDLINTKEY_H
#include <stdint.h>
#include <iostream>
#include <sstream>

class MDLINTKEY {
public:
	MDLINTKEY();
	MDLINTKEY(const MDLINTKEY& that);
	
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
			int	State;
    	friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
    	{
    		return os<<"Frame"<<md.Frame<<std::endl
    		         <<"State"<<md.State<<std::endl;	
		}
	};
	mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLINTKEY& md)
	{
		return os<<md.mdl<<std::endl
		         <<md.mdx<<std::endl;
	}
	
};
#endif
