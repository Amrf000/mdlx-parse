#ifndef _MDLMATERIALSECTION_H
#define _MDLMATERIALSECTION_H
#include <stdint.h>
#include <string.h>
#include "MDLTEXLAYER.h"
/*
MTLS						// [Materials]
	long	nbytes;
	struct {
		long	nbytesi;
		long	PriorityPlane;
		long	RenderMode;		(+1:ConstantColor;+16:SortPrimsFarZ;+32:FullResolution)
		LAYS
	} materials[nmtls];
*/
class MDLMATERIALSECTION {
public:
	MDLMATERIALSECTION();
	MDLMATERIALSECTION(const MDLMATERIALSECTION& that);

	bool parsemdl(const std::string& node);
	bool parse(char*& binary,int& rest);

	bool tomdl(std::ostringstream& oss);
	bool tomdx(char* dest, int* len);
public:
	class material
	{
	public:
		int    nbytesi;
		int	PriorityPlane;
		int	RenderMode;
		MDLTEXLAYER lays;
		friend std::ostream& operator<<(std::ostream& os, const material& md)
		{
			os<<"nbytesi:"<<md.nbytesi<<std::endl
				<<"PriorityPlane:"<<md.PriorityPlane<<std::endl
				<<"RenderMode:"<<md.RenderMode<<std::endl
				<<md.lays<<std::endl;
			return os;
		}
    };

    class mdl_
    {
	public:
		mdl_(){
			memcpy(Key,"Material",8);
		}
		char Key[8];//Material
		std::vector<material> lays;
		friend std::ostream& operator<<(std::ostream& os, const mdl_& md)
		{
			os<<"Key:"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]
			          <<md.Key[4]<<md.Key[5]<<md.Key[6]<<md.Key[7]<<std::endl;
            for(int i=0;i<md.lays.size();++i)
            {
	            os<<md.lays[i]<<std::endl;
            }
			return os;
		}
    };
    mdl_ mdl;

    class mdx_
    {
	public:
		char Key[4];//MTLS
		int nbytes;
		std::vector<material> lays;
		friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
		{
			os<<"Key:"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
			  <<"nbytes:"<<md.nbytes<<std::endl;
			for(int i=0;i<md.lays.size();++i)
            {
	            os<<md.lays[i]<<std::endl;
            }
            return os;
		}
    };
    mdx_ mdx;

    friend std::ostream& operator<<(std::ostream& os, const MDLMATERIALSECTION& md)
	{
		return os<<md.mdl<<std::endl
		<<"----------------------------"<<std::endl
		<<md.mdx<<std::endl;
	}
};
#endif
