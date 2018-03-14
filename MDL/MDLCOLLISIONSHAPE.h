#ifndef _MDLCOLLISIONSHAPE_H
#define _MDLCOLLISIONSHAPE_H
#include <stdint.h>
#include <string.h>
#include "MDLGENOBJECT.h"
/*
CLID						// [CollisionShape] (now has VRTX and NRMS)
	int	nbytes;
	struct {
		OBJ
		int	Shape;			(0:box;2:sphere)
		float 	x, y, z;
		if (Shape == 0)
			float	x2, y2, z2;
		else
			float	BoundsRadius
	} collisionshape[nclds];
*/
class MDLCOLLISIONSHAPE
{
public:
	MDLCOLLISIONSHAPE();
	MDLCOLLISIONSHAPE(const MDLCOLLISIONSHAPE& that);
	MDLCOLLISIONSHAPE& operator=(const MDLCOLLISIONSHAPE& that);
	~MDLCOLLISIONSHAPE();
	
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
			class collision
			{
				public:
					collision()
					{
						
					}
					collision(const collision& that)
					{
						shape = that.shape;
						if (that.shape == 1)
						{
							x = that.x;
							y = that.y;
							z = that.z;
							un.st2.x2 = that.un.st2.x2;
							un.st2.y2 = that.un.st2.y2;
						}
						else if (that.shape > 1)
						{
							if (that.shape == 2)
							{
								x = that.x;
								y = that.y;
								z = that.z;
								un.BoundsRadius = that.un.BoundsRadius;
							}
							else if (that.shape == 3)
							{
								x = that.x;
								y = that.y;
							}
						}
						else if (!that.shape)
						{
							x = that.x;
							y = that.y;
							z = that.z;
							un.st3.x3 = that.un.st3.x3;
							un.st3.y3 = that.un.st3.y3;
							un.st3.z3 = that.un.st3.z3;
						}
						OBJ = that.OBJ;
					}
					friend std::ostream& operator<<(std::ostream& os, const collision& md)
					{
						return os<<md.OBJ
						         <<"shape"<<md.shape<<std::endl
						         <<"x"<<md.x<<"y"<<md.y<<"z"<<md.z<<std::endl
						         <<"x3"<<md.un.st3.x3<<"y3"<<md.un.st3.y3<<"z3"<<md.un.st3.z3<<std::endl;
						
					}
					MDLGENOBJECT OBJ;
					int shape;
					float 	x, y, z;
					union {
						struct {
							float	x3, y3, z3;
						}st3;
						struct {
							float	x2, y2;
						}st2;
						float	BoundsRadius;
					}un;
					bool parse(char*& binary,int& rest)
					{
						OBJ.parse(binary,rest);
						memcpy(&shape,binary,4);
						binary += 4; rest -= 4;						
						memcpy(&x,binary,4*3);
						binary += 4*3; rest -= 4*3;
						memcpy(&un,binary,4*3);
						binary += 4*3; rest -= 4*3;							
					}
					
			};
			mdx_(){
			}
			mdx_(const mdx_& that)
			{
				memcpy(Key,that.Key,4);
				nbytes = that.nbytes;
				collisionshape.assign(that.collisionshape.begin(),that.collisionshape.end());
			}
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os <<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				   <<"nbytes"<<md.nbytes<<std::endl;
				for(int i=0;i<md.collisionshape.size();++i)
				{
					os<<md.collisionshape[i];
				}
				return os;
			}
			char Key[4];//CLID
			int	nbytes;
			std::vector<collision> collisionshape;
	};
    mdx_ mdx;
    
	friend std::ostream& operator<<(std::ostream& os, const MDLCOLLISIONSHAPE& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
