#ifndef _MDLMODELSECTION_H
#define _MDLMODELSECTION_H
#include <stdint.h>
#include "CMdlBounds.h"
#include <iostream>
#include <sstream>
/*
MODL						// [Model] (extra byte before blendTIme (0))
	int	nbytes;
	ASCII	Name;				(0x150 bytes)
	int	???;				(0)
	float	BoundsRadius;
	float	MinExtx, MinExty, MinExtz;
	float	MaxExtx, MaxExty, MaxExtz;
	int	BlendTime;
*/
class MDLMODELSECTION {
public:
	MDLMODELSECTION();

	bool parsemdl(const std::string& node);
	bool parse(char*& binary,int& rest);

	bool tomdl(std::ostringstream& oss);
	bool tomdx(char* dest, int* len);
public:
	//mdl
	class mdl_
	{
	public:
		char Key[5];//"Model"
		char Name[340];
		int NumGeosets;
		int NumGeosetAnims;
		int NumHelpers;
		int NumLights;
		int NumBones;
		int NumAttachments;
		int NumParticleEmitters;
		int NumParticleEmitters2;
		int NumRibbonEmitters;
		int NumEvents;
		CMdlBounds bound;
		int BlendTime;
		friend std::ostream& operator<<(std::ostream& os, const mdl_& md)
		{
			return os << md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<md.Key[4]<<" \"" << md.Name<<"\" {"<< std::endl
				<< "	NumGeosets " << md.NumGeosets << ","<<std::endl
				<< "	NumGeosetAnims " << md.NumGeosetAnims<< "," << std::endl
				<< "	NumHelpers " << md.NumHelpers<< "," << std::endl
				<< "	NumLights " << md.NumLights<< "," << std::endl
				<< "	NumBones " << md.NumBones<< "," << std::endl
				<< "	NumAttachments " << md.NumAttachments<< "," << std::endl
				<< "	NumParticleEmitters " << md.NumParticleEmitters<< "," << std::endl
				<< "	NumParticleEmitters2 " << md.NumParticleEmitters2<< "," << std::endl
				<< "	NumRibbonEmitters " << md.NumRibbonEmitters<< "," << std::endl
				<< "	NumEvents " << md.NumEvents<< "," << std::endl
				<< md.bound << std::endl
				<< "	BlendTime " << md.BlendTime<< "," << std::endl
				<<"}"<< std::endl;
		}
	};
	mdl_ mdl;
	//mdx
	class mdx_
	{
	public:
		char Key[4];//"MODL"
		int nbytes;//后面的长度--372
		char Name[340];//0~339
		CMdlBounds bound;//340-7*4-367
		int BlendTime;//368~371
		friend std::ostream& operator<<(std::ostream& os,const mdx_& md)
		{
			return os << "Key:" << md.Key[0] <<md.Key[1]<<md.Key[2]<<md.Key[3]<< std::endl
				<< "nbytes:" << md.nbytes << std::endl
				<< "Name:" << md.Name << std::endl
				<< md.bound << std::endl
				<< "BlendTime:" << md.BlendTime << std::endl;

		}
	};
	mdx_ mdx;

	friend std::ostream& operator<<(std::ostream& os, const MDLMODELSECTION& md)
	{
		return os << md.mdl << std::endl
		          <<"--------------------------------"<<sizeof(int)<< std::endl
			      << md.mdx << std::endl;
	}
};
#endif
