#ifndef _MDLTEXANIMSECTION_H
#define _MDLTEXANIMSECTION_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLTRANSKEYFRAME.h"
#include "MDLROTKEYFRAME.h"
#include "MDLSCALEKEYFRAME.h"
/*
TXAN						// [Texture Animations]
	long 	nbytes;
	struct {
		long	nbytesi;
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
					MDLKEYTRACK<MDLROTKEYFRAME>       KTAR;
					MDLKEYTRACK<MDLSCALEKEYFRAME>     KTAS;	
					friend std::ostream& operator<<(std::ostream& os, const txanim& md)
					{
						return os<<"nbytesi:"<<md.nbytesi<<std::endl
						         <<md.KTAT
								 <<md.KTAR
								 <<md.KTAS;
					}
			};	
			int 	nbytes;
			std::vector<txanim> txanims;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"nbytes:"<<md.nbytes<<std::endl;
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
