#ifndef _MDLTEXANIMSECTION_H
#define _MDLTEXANIMSECTION_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLTRANSKEYFRAME.h"
#include "MDLCOLORKEYFRAME.h"
#include "MDLSCALEKEYFRAME.h"
/*
TXAN						// [Texture Animations]
	int 	nbytes;
	struct {
		int	nbytesi;
		(KTAT)				// Might be optional
		(KTAR)
		(KTAS)
	} txanims[nanims];
*/
class MDLTEXANIMSECTION {
public:
	MDLTEXANIMSECTION();
	MDLTEXANIMSECTION(const MDLTEXANIMSECTION& that);
	~MDLTEXANIMSECTION();
	
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
			class txanim
			{
				public:
					txanim()
					{
						
					}
					txanim(const txanim& that)
					{
						nbytesi = that.nbytesi;
						KTAT = that.KTAT;
						KTAR = that.KTAR;
						KTAS = that.KTAS;
					}
					int	nbytesi;
				    MDLKEYTRACK<MDLTRANSKEYFRAME>     KTAT;
					MDLKEYTRACK<MDLCOLORKEYFRAME>       KTAR;
					MDLKEYTRACK<MDLSCALEKEYFRAME>     KTAS;	
					friend std::ostream& operator<<(std::ostream& os, const txanim& md)
					{
						return os<<"nbytesi:"<<md.nbytesi<<std::endl
						         <<md.KTAT
								 <<md.KTAR
								 <<md.KTAS;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(&nbytesi,binary,4);
						binary += 4; rest -= 4;
						KTAT.parse(binary,rest,"KTAT");
						KTAR.parse(binary,rest,"KTAR");
						KTAS.parse(binary,rest,"KTAS");
						return true;
					}
			};
			mdx_()
			{
				
			}
			mdx_(const mdx_& that)
			{
				memcpy(Key,that.Key,4);
				nbytes = that.nbytes;
				txanims.assign(that.txanims.begin(),that.txanims.end());
			}
			char Key[4];//TXAN
			int 	nbytes;
			std::vector<txanim> txanims;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				  <<"nbytes:"<<md.nbytes<<std::endl;
				for(int i=0;i<md.txanims.size();++i)
				{
					os<<md.txanims[i];
				}
				return os;
			}
	};
	mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLTEXANIMSECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
