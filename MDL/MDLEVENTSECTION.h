#ifndef _MDLEVENTSECTION_H
#define _MDLEVENTSECTION_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
#include "MDLEVENTTRACK.h"
/*
EVTS						// [EventObject]
	int	nbytes;
	struct {
		OBJ
		ASCII 	"KEVT"			// Actually a separate object
		int	ntrks;			// usually (1)
		0xFFFFFFFF
		int 	frames[ntrks];
	} events[nevts];
*/
class MDLEVENTSECTION
{
public:
	MDLEVENTSECTION();
	MDLEVENTSECTION(const MDLEVENTSECTION& that);
	~MDLEVENTSECTION();
	
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
		    class event
			{
				public:
					MDLGENOBJECT OBJ;
					char Key[4];// 	"KEVT"
					int	ntrks;// usually (1)
					int spare;//0xFFFFFFFF
					std::vector<int> frames;
					event()
					{
					}
					event(const event& that)
					{
						OBJ = that.OBJ;
						memcpy(Key,that.Key,4);
						ntrks = that.ntrks;
						spare = that.spare;
						frames.assign(that.frames.begin(),that.frames.end());
					}
					bool parse(char*& binary,int& rest)
					{
						OBJ.parse(binary,rest);
						memcpy(Key,binary,4);
						binary += 4; rest -= 4;
						memcpy(&ntrks,binary,4);
						binary += 4; rest -= 4;
						memcpy(&spare,binary,4);
						binary += 4; rest -= 4;
						frames.resize(1);
						memcpy(&frames[0],binary,4);
						binary += 4; rest -= 4;											
					}
					friend std::ostream& operator<<(std::ostream& os, const event& md)
					{
						os  <<md.OBJ
						    <<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						    <<"ntrks"<<md.ntrks<<std::endl
						    <<"spare"<<md.spare<<std::endl;
						for(int i=0;i<md.frames.size();++i)
						{
						    os<<md.frames[i]<<" ";	
						}        
					    return  os;
					}
					
			};
			mdx_()
			{
				
			}
			mdx_(const mdx_& that)
			{
				memcpy(Key,that.Key,4);
				nbytes = that.nbytes;
				events.assign(that.events.begin(),that.events.end());
			}
			char Key[4];//EVTS
			int nbytes;
			std::vector<event> events;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				  <<"nbytes"<<md.nbytes<<std::endl;
				for(int i=0;i<md.events.size();++i)
				{
					os<<md.events[i];
				}
				return os;
			}
	};
	mdx_ mdx;
	
	friend std::ostream& operator<<(std::ostream& os, const MDLEVENTSECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
