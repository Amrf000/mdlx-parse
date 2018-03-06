#ifndef _MDLLIGHTSECTION_H
#define _MDLLIGHTSECTION_H
#include <stdint.h>
#include "MDLALPHAKEYFRAME.h"
#include "MDLGENOBJECT.h"
#include "MDLCOLORKEYFRAME.h"
/*
LITE						// [Light]
	int	nbytes;
	struct {
		int	nbytesi;
		OBJ
		int	Type			(0:Omnidirectional;1:Directional;2:Ambient)
		float	AttStart, AttEnd;
		float	ColR, ColG, ColB;
		float	Intensity;
		float	AmbColR, AmbColG, AmbColB;
		float	AmbIntensity;
		(KLAI)
		(KLAV)
		(KLAC)
		(KLBC)
		(KLBI)
	} lights[nlits];
*/
class MDLLIGHTSECTION
{
public:
	MDLLIGHTSECTION();
	MDLLIGHTSECTION(const MDLLIGHTSECTION& that);
	~MDLLIGHTSECTION();

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
			class light 
			{
				public:
					light()
					{
						
					}
					light(const light& that)
					{
						nbytesi = that.nbytesi;
						OBJ = that.OBJ;
						Type = that.Type;
						AttStart = that.AttStart, AttEnd = that.AttEnd;
						ColR = that.ColR; ColG = that.ColG; ColB = that.ColB;
						Intensity = that.Intensity;
						AmbColR = that.AmbColR; AmbColG = that.AmbColG; AmbColB = that.AmbColB;
						AmbIntensity = that.AmbIntensity;
						KLAI = that.KLAI;
						KLAV = that.KLAV;
						KLAC = that.KLAC;
						KLBC = that.KLBC;
						KLBI = that.KLBI;
					}
					int	nbytesi;
					MDLGENOBJECT OBJ;
					int	Type;
					float	AttStart, AttEnd;
					float	ColR, ColG, ColB;
					float	Intensity;
					float	AmbColR, AmbColG, AmbColB;
					float	AmbIntensity;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KLAI;//Intensity
					MDLKEYTRACK<MDLALPHAKEYFRAME> KLAV;//Visibility
					MDLKEYTRACK<MDLCOLORKEYFRAME> KLAC;//Color
					MDLKEYTRACK<MDLCOLORKEYFRAME> KLBC;//AmbColor
					MDLKEYTRACK<MDLALPHAKEYFRAME> KLBI;//AmbIntensity
					friend std::ostream& operator<<(std::ostream& os, const light& md)
					{
						return os<<"nbytesi:"<<md.nbytesi<<std::endl
						         <<md.OBJ
						         <<"Type"<<md.AmbColB<<std::endl
								 <<"AttStart"<<md.AttStart<<"AttEnd"<<md.AttEnd<<std::endl
								 <<"ColR"<<md.ColR<<"ColG"<<md.ColG<<"ColB"<<md.ColB<<std::endl
								 <<"Intensity"<<md.Intensity<<std::endl
								 <<"AmbColR"<<md.AmbColR<<"AmbColG"<<md.AmbColG<<"AmbColB"<<md.AmbColB<<std::endl
								 <<"AmbIntensity"<<md.AmbIntensity<<std::endl
								 <<md.KLAI
								 <<md.KLAV
								 <<md.KLAC
								 <<md.KLBC
								 <<md.KLBI;
					}
			};
			int	nbytes;			
		    std::vector<light> lights;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"nbytes:"<<md.nbytes<<std::endl;
				for(int i=0;i<md.lights.size();++i)
				{
					os<<md.lights[i];
				}
				return os;
			}
	};
    mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLLIGHTSECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
