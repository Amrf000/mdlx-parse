#ifndef _MDLGLOBALSEQSECTION_H
#define _MDLGLOBALSEQSECTION_H
#include <stdint.h>
#include <iostream>
#include <sstream>
#include <vector>

/*
GLBS						// [GlobalSequences]
	long	nbytes;
	long	durations[ndurs];		// ndurs = nbytes/4;
*/
class MDLGLOBALSEQSECTION {
public:
	MDLGLOBALSEQSECTION();
	MDLGLOBALSEQSECTION(const MDLGLOBALSEQSECTION& that);

	bool parsemdl(const std::string& node);
	bool parse(char*& binary,int& rest);

	bool tomdl(std::ostringstream& oss);
	bool tomdx(char* dest, int* len);
public:
	class mdl_
	{
	public:
		char Key[15];//GlobalSequences
		std::vector<int> durations;
		friend std::ostream& operator<<(std::ostream& os, const mdl_& md)
		{
			os  << md.Key[0] <<md.Key[1]<< md.Key[2] <<md.Key[3] << md.Key[4] 
			    << md.Key[5] <<md.Key[6]<< md.Key[7] <<md.Key[8] << md.Key[9]
			    << md.Key[10]<<md.Key[11]<<md.Key[12]<<md.Key[13]<< md.Key[14]
				<<" "<<md.durations.size()<<" {"<< std::endl;
	            for(int i=0;i<md.durations.size();++i)
	            {
		            os<<"	Duration "<<md.durations[i]<<","<< std::endl;
	            }
	            os << "}" <<std::endl;
			return os;
		}
	};
    mdl_ mdl;

	
	class mdx_
	{
	public:
		char Key[4];//GLBS
		int nbytes;
		std::vector<int> durations;
		friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
		{
			os << "Key:" << md.Key[0] <<md.Key[1]<<md.Key[2]<<md.Key[3]<< std::endl
				<< "nbytes:" << md.nbytes << std::endl;
            for(int i=0;i<md.durations.size();++i)
            {
	            os<<md.durations[i]<<" ";
            }
            os << std::endl;
			return os;	
		}
	};
	mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLGLOBALSEQSECTION& md)
	{
		return os << md.mdl << std::endl
		          <<"--------------------------------"<< std::endl
			      << md.mdx << std::endl;
	}
};
#endif
