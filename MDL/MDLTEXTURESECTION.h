#ifndef _MDLTEXTURESECTION_H
#define _MDLTEXTURESECTION_H
#include <stdint.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include <vector>
/*
TEXS						// [Textures] (same as v800)
	long	nbytes;
	struct {
		long	ReplaceableID;
		ASCII	TexturePath;		(0x100 bytes)
		long	???;			(0)
		long	Wrapping;		(1:WrapWidth;2:WrapHeight;3:Both)
	} textures[ntexs];
*/
class MDLTEXTURESECTION {
public:
	MDLTEXTURESECTION();
	MDLTEXTURESECTION(const MDLTEXTURESECTION& that);
	
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
			class texture
			{
				public:
					texture(){
					}
					texture(const texture& that)
					{
						ReplaceableID = that.ReplaceableID;
						memcpy(TexturePath,that.TexturePath,256);
						spare = that.spare;
						Wrapping = that.Wrapping;
					}
					int	ReplaceableID;
					char TexturePath[256];
					int spare;
					int	Wrapping;
					friend std::ostream& operator<<(std::ostream& os, const texture& md)
					{
						return os<<"ReplaceableID:"<<md.ReplaceableID<<std::endl
						         <<"TexturePath:"<<md.TexturePath<<std::endl
								 <<"Wrapping:"<<md.Wrapping<<std::endl;
					}
			};
			int	nbytes;
			std::vector<texture> textures;
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"nbytes:"<<md.nbytes<<std::endl;
				for(int i=0;i<md.textures.size();++i)
				{
					os<<md.textures[i];
				}
				return os;
			}
	};
	mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLTEXTURESECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
