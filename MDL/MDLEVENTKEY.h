#ifndef _MDLEVENTKEY_H
#define _MDLEVENTKEY_H
#include <stdint.h>
#include <iostream>
#include <sstream>

class MDLEVENTKEY {
public:
	MDLEVENTKEY();
	MDLEVENTKEY(const MDLEVENTKEY& that);
	
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
			int val;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				return os<<"val"<<md.val<<std::endl;
			}
	};
	mdx_ mdx;
	
	friend std::ostream& operator<<(std::ostream& os, const MDLEVENTKEY& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}	
};
#endif
