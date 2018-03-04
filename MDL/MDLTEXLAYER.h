#ifndef _MDLTEXLAYER_H
#define _MDLTEXLAYER_H
#include <stdint.h>
#include "MDLALPHAKEYFRAME.h"
#include "MDLINTKEY.h"
#include "MDLKEYTRACK.h"
/*
LAYS						// [Layer} (ID may have been removed, extra bytes...)
	long	nlays;
	struct {
		long	nbytesi;
		long	FilterMode;	(0:none;1:transparent;2:blend;3:additive;4:addalpha;5:modulate)
		long	Shading;		//+1:unshaded;+2:SphereEnvMap;+16:twosided;
		long	TextureID;              //  +32:unfogged;+64:NoDepthTest;+128:NoDepthSet)
		long 	TVertexAnimId;		// 0xFFFFFFFF if none
		long	CoordId;
		float	Alpha;			(0(transparent)->1(opaque))
		(KMTA)
		(KMTF)				// state is long not float
	} layers[nlays];
*/
class MDLTEXLAYER {
public:
	MDLTEXLAYER();
	MDLTEXLAYER(const MDLTEXLAYER& that);
	~MDLTEXLAYER();
	
	bool parse(char*& binary,int& rest);
public:
	class mdl_
	{
		public:
			char Key[5];//Layer
			mdl_(){
				memcpy(Key,"Layer",5);
			}
			
		friend std::ostream& operator<<(std::ostream& os, const mdl_& md)
		{
			return os<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<md.Key[4]<<std::endl;
		}
	};
	mdl_ mdl;
	
	class mdx_
	{
	public:
		class layer
		{
			public:
				layer()
				{
				}
				layer(const layer& that)
				{
					nbytesi = that.nbytesi;
					FilterMode = that.FilterMode;
					Shading = that.Shading;
					TextureID = that.TextureID; 
					TVertexAnimId = that.TVertexAnimId;
					CoordId = that.CoordId;
					Alpha = that.Alpha;
					KMTA = that.KMTA;
					KMTF = that.KMTF;
				}
				int	nbytesi;
				int	FilterMode;
				int	Shading;
				int	TextureID; 
				int TVertexAnimId;
				int	CoordId;
				float	Alpha;
				MDLKEYTRACK<MDLALPHAKEYFRAME>  KMTA;//Alpha
				MDLKEYTRACK<MDLINTKEY>  KMTF;//TextureID
				friend std::ostream& operator<<(std::ostream& os, const layer& md)
				{
					return os<<"nbytesi:"<<md.nbytesi<<std::endl
					  <<"FilterMode:"<<md.FilterMode<<std::endl
					  <<"Shading:"<<md.Shading<<std::endl
					  <<"TextureID:"<<md.TextureID<<std::endl
					  <<"TVertexAnimId:"<<md.TVertexAnimId<<std::endl
					  <<"CoordId:"<<md.CoordId<<std::endl
					  <<"Alpha:"<<md.Alpha<<std::endl
					  <<md.KMTA
					  <<md.KMTF;
				}
				bool parse(char*& binary,int& rest)
				{
					int orest = rest;
					memcpy(&nbytesi, binary, 4);
	                binary += 4; rest -= 4;
			        if(rest<0 || orest-rest>=nbytesi)
			        {
			        	return false;	
					}
					memcpy(&FilterMode, binary, 4);
	                binary += 4; rest -= 4;
	                if(rest<0 || orest-rest>=nbytesi)
				    {
				    	return false;
					}
					memcpy(&Shading, binary, 4);
	                binary += 4; rest -= 4;  
	                if(rest<0 || orest-rest>=nbytesi)
				    {
				    	return false;
					}             
					memcpy(&TextureID, binary, 4);
	                binary += 4; rest -= 4;
	                if(rest<0 || orest-rest>=nbytesi)
				    {
				    	return false;
					}
					memcpy(&TVertexAnimId, binary, 4);
	                binary += 4; rest -= 4;
	                if(rest<0 || orest-rest>=nbytesi)
				    {
				    	return false;
					}
					memcpy(&CoordId, binary, 4);
	                binary += 4; rest -= 4;
	                if(rest<0 || orest-rest>=nbytesi)
				    {
				    	return false;
					} 
					memcpy(&Alpha, binary, 4);
	                binary += 4; rest -= 4;
	                if(rest<0 || orest-rest>=nbytesi)
				    {
				    	return false;
					}
					KMTA.parse(binary,rest);
	                if(rest<0 || orest-rest>=nbytesi)
				    {
				    	return false;
					}
					KMTF.parse(binary,rest);
	                if(rest<0 || orest-rest>=nbytesi)
				    {
				    	return false;
					}				                
					return true;
				}
		};
		char Key[4];//LAYS
		int	nlays;
		std::vector<layer> layers;
		friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
		{
			os<<"Key:"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
			  <<"nlays:"<<md.nlays<<std::endl;
			for(int i=0;i<md.layers.size();++i)
			{
				os<<md.layers[i];
			}
			return os;
		}
	};
	mdx_ mdx;

    friend std::ostream& operator<<(std::ostream& os, const MDLTEXLAYER& md)
    {
    	return os<<md.mdl<<std::endl
    	         <<"----------------------"<<std::endl
		         <<md.mdx<<std::endl;
	}
};
#endif
