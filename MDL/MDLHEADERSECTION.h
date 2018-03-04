#ifndef _MDLHEADERSECTION_H
#define _MDLHEADERSECTION_H
#include <stdint.h>
#include <iostream>
#include <sstream>
/*
VERS						// [Version]
	long	nbytes;
	long	Version; 			// Currently 0x20030000 (800)
*/
class MDLHEADERSECTION{
public:
	MDLHEADERSECTION();
	bool parsemdl(const std::string& node);
	bool parse(char*& binary,int& rest);

	bool tomdl(std::ostringstream& oss);
	bool tomdx(char* dest, int* len);
public:
    //mdl
	class mdl_
	{
		public:
			char Key[7];//Version
			int	Version;
		friend std::ostream& operator<<(std::ostream& os, const mdl_& md)
		{
			return os<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<md.Key[4]<<md.Key[5]<<md.Key[6]<<" {"<<std::endl
			         <<"	FormatVersion "<<md.Version<<","<<std::endl
					 <<"}"<<std::endl;
		}
	};
    mdl_ mdl;
	//mdx
	class mdx_
	{
		public:
			char Key[4];//MDLX
			char Vers[4];//VERS
			int nbytes;
			int	Version;
		friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
		{
			return os<<"Key:"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
			         <<"vers:"<<md.Vers[0]<<md.Vers[1]<<md.Vers[2]<<md.Vers[3]<<std::endl
			         <<"nbytes:"<<md.nbytes<<std::endl
			        <<"Version:"<<md.Version<<std::endl;
		}
	};
    mdx_ mdx;
    friend std::ostream& operator<<(std::ostream& os, const MDLHEADERSECTION& md)
	{
		return os<<md.mdl<<std::endl
		<<"----------------------------"<<std::endl
		<<md.mdx<<std::endl;
	}
};
#endif
