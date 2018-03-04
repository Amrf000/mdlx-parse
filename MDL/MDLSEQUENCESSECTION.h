#ifndef _MDLSEQUENCESSECTION_H
#define _MDLSEQUENCESSECTION_H
#include <stdint.h>
#include <string.h>
#include "CMdlBounds.h"
#include <ostream>
#include <sstream>
#include <vector>

/*
SEQS						// [Sequences] (v13: +8 bytes?)
	int	nbytes;
	struct {
		ASCII	Name;			(0x50 bytes)
		int	IntStart, IntEnd;
		float	MoveSpeed;
		int	NoLooping;		(0:loop; 1:no loop)
		float	Rarity;
		int	???;			(0)
		float	BoundsRadius;
		float	MinExtx, MinExty, MinExtz;
		float	MaxExtx, MaxExty, MaxExtz;
	} sequences[nseqs];
*/
class MDLSEQUENCESSECTION {
public:
	MDLSEQUENCESSECTION();
	MDLSEQUENCESSECTION(const MDLSEQUENCESSECTION& that);

	bool parsemdl(const std::string& node);
	bool parse(char*& binary,int& rest);

	bool tomdl(std::ostringstream& oss);
	bool tomdx(char* dest, int* len);
public:
	class seq{
		public:
			seq():
				IntStart(0),IntEnd(0),
				MoveSpeed(0.),
				NoLooping(0),
				Rarity(0.),
				spare(0)
			{
				memset(Name,0,80);
			}
			char Name[80];
			int IntStart,IntEnd;
			float	MoveSpeed;
			int	NoLooping;
			float	Rarity;
			int    spare;
			CMdlBounds bound;
			friend std::ostream& operator<<(std::ostream& os, const seq& md)
			{
				return os   << "	Anim \"" << md.Name <<"\" {"<<std::endl
					        << "		Interval { " << md.IntStart <<", "<<md.IntEnd<<" },"<<std::endl
					        << "		MoveSpeed " << md.MoveSpeed <<", "<<std::endl
					        << (md.NoLooping?"		NonLooping,":"		Looping,") <<std::endl
					        << "		Rarity " << md.Rarity <<","<<std::endl
					        << md.bound <<std::endl
							<< "	}" <<std::endl;
			}
	};
	
	//mdl
	class mdl_
	{
		public:
			char Key[12];//Sequences
			std::vector<seq> sequences;
			friend std::ostream& operator<<(std::ostream& os, const  mdl_& md)
		    {
		    	os<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<md.Key[4]<<md.Key[5]
		    	  <<md.Key[6]<<md.Key[7]<<md.Key[8]<<md.Key[9]<<md.Key[10]<<md.Key[11]<<" "<<md.sequences.size()<<" {"<<std::endl;
		    	for(int i = 0; i<md.sequences.size();++i)
		        {
			        os << md.sequences[i];
		        }
		        os<<"}"<<std::endl;
		        return os;
		    }
	};
	mdl_ mdl;
	
	//mdx
	class mdx_
	{
		public:
			char Key[4];//SEQS
			int	nbytes;
		    std::vector<seq> sequences;
		    
			friend std::ostream& operator<<(std::ostream& os, const  mdx_& md)
		    {
			    os << "nbytes:" << md.nbytes <<std::endl;
		        for(int i = 0; i<md.sequences.size();++i)
		        {
			        os << md.sequences[i] 
			           << "---------------------------"<<std::endl;
		        }
			    return os;
		    }
	};
    mdx_ mdx;

    friend std::ostream& operator<<(std::ostream& os, const  MDLSEQUENCESSECTION& md)
    {
	    return os << md.mdx<<std::endl
		          << md.mdl<<std::endl;
    }


};
#endif
