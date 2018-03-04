#ifndef _MDLKEYTRACK_H
#define _MDLKEYTRACK_H
#include <stdint.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <sstream>

template<typename T>
class MDLKEYTRACK {
public:
	MDLKEYTRACK()
	{
	}
	MDLKEYTRACK( int LineType_)
	{
	}
	MDLKEYTRACK(const MDLKEYTRACK& that)
	{
		memcpy(mdx.Key,that.mdx.Key,4);
		mdx.nunks = that.mdx.nunks;
		mdx.LineType = that.mdx.LineType;
		mdx.GlobalSeqId = that.mdx.GlobalSeqId;
		mdx.tunks.assgin(that.mdx.tunks.begin(),that.mdx.tunks.end());
	}

    bool parse(char*& binary,int& rest)
    {
    	memcpy(mdx.Key,binary, 4);
    	if('K' != mdx.Key[0])
    	{
    		return false;
		}
    	binary += 4; rest -= 4;
    	if(rest<0)
    	{
    		return false;
		}
    	memcpy(&mdx.nunks, binary, 4);
    	binary += 4; rest -= 4;
    	if(rest<0)
    	{
    		return false;
		}
    	memcpy(&mdx.LineType, binary, 4);
    	binary += 4; rest -= 4;
    	if(rest<0)
    	{
    		return false;
		}
    	memcpy(&mdx.GlobalSeqId, binary, 4);
    	binary += 4; rest -= 4;
    	if(rest<0)
    	{
    		return false;
		}
    	mdx.tunks.resize(mdx.nunks);
    	for(int i=0;i<mdx.nunks;++i)
    	{
    		mdx.tunks[i].parse(binary,rest,mdx.LineType);
		    if(rest<0)
		    {
		    	return false;
			}
		}
    	
		return true;
	}
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
	    	char Key[4];
			int	nunks;
			int	LineType;
			int GlobalSeqId;
			std::vector<T> tunks;
			friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				if(md.Key[0]!='K')
				{
					return os;
				}
				os<<"Key:"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				  <<"nunks:"<<md.nunks<<std::endl
				  <<"LineType:"<<md.LineType<<std::endl
				  <<"GlobalSeqId:"<<md.GlobalSeqId<<std::endl;
				for(int i=0;i<md.tunks.size();++i)
				{
					os<<md.tunks[i];
				} 
				return os;
			}
	};
    mdx_ mdx;
    
    friend std::ostream& operator<<(std::ostream& os, const MDLKEYTRACK& md)
    {
    	return os<<md.mdl<<std::endl
		         <<md.mdx<<std::endl;
	}
};
#endif
