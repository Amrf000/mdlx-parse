#ifndef _MDLGEOSETSECTION_H
#define _MDLGEOSETSECTION_H
#include <stdint.h>
#include <vector>
#include "CMdlBounds.h"

class C2Vector
{
	public:
		float x,y;
		friend std::ostream& operator<<(std::ostream& os, const C2Vector& md)
		{
			return os<<"x"<<md.x<<",y"<<md.y<<std::endl;
		}
};
class C3Vector
{
	public:
		float x,y,z;
		friend std::ostream& operator<<(std::ostream& os, const C3Vector& md)
		{
			return os<<"x"<<md.x<<",y"<<md.y<<",z"<<md.z<<std::endl;
		}
};
/*
GEOS						// [Geoset]
	long	nbytes;
	struct {
		long	nbytes;
		VRTX
		NRMS
		PTYP
		PCNT
		PVTX
		GNDX
		MTGC
		MATS
		long	MaterialID;
		long	SelectionGroup;
		long	Selectable		(0:none;4:Unselectable)
		float	BoundsRadius;
		float	MinExtx, MinExty, MinExtz;
		float	MaxExtx, MaxExty, MaxExtz;
		long 	nanim;
		struct {
			float	BoundsRadius;
			float	MinExtx, MinExty, MinExtz;
			float	MaxExtx, MaxExty, MaxExtz;
		} ganimations[nganim];
		UVAS
		UVBS
	} geosets[ngeos];
*/
class MDLGEOSETSECTION {
public:
	MDLGEOSETSECTION();
	MDLGEOSETSECTION(const MDLGEOSETSECTION& a2);
	~MDLGEOSETSECTION();
	
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
			class VRTX
			{
				public:
					VRTX()
					{
					}
					VRTX(const VRTX& that)
					{
						nvrts = that.nvrts;
						vertices.assign(that.vertices.begin(),that.vertices.end());
					}
					int	nvrts;
					std::vector<C3Vector> vertices;
					friend std::ostream& operator<<(std::ostream& os, const VRTX& md)
					{
						os<<"nvrts"<<md.nvrts<<std::endl;
						for(int i=0;i<md.vertices.size();++i)
						{
							os<<md.vertices[i];
						}
						return os;
					}
			};
			class NRMS
			{
				public:
					NRMS()
					{
					}
					NRMS(const NRMS& that)
					{
						nnrms = that.nnrms;
						normals.assign(that.normals.begin(),that.normals.end());
					}
					int	nnrms;
					std::vector<C3Vector> normals;	
					friend std::ostream& operator<<(std::ostream& os, const NRMS& md)
					{
						os<<"nnrms"<<md.nnrms<<std::endl;
						for(int i=0;i<md.normals.size();++i)
						{
							os<<md.normals[i];
						}
						return os;
					}			
			};
			class PTYP
			{
				public:
					PTYP()
					{
					}
					PTYP(const PTYP& that)
					{
						nptyps = that.nptyps;
						primType.assign(that.primType.begin(),that.primType.end());
					}
					int	nptyps;
					std::vector<int> primType;	
					friend std::ostream& operator<<(std::ostream& os, const PTYP& md)
					{
						os<<"nptyps"<<md.nptyps<<std::endl;
						for(int i=0;i<md.primType.size();++i)
						{
							os<<md.primType[i];
						}
						return os;
					}
			};
			class PCNT
			{
				public:
					PCNT()
					{
					}
					PCNT(const PCNT& that)
					{
						npcnts = that.npcnts;
						primCount.assign(that.primCount.begin(),that.primCount.end());
					}
					int	npcnts;				//   many verts in a face (3).
					std::vector<int> primCount;
					friend std::ostream& operator<<(std::ostream& os, const PCNT& md)
					{
						os<<"npcnts"<<md.npcnts<<std::endl;
						for(int i=0;i<md.primCount.size();++i)
						{
							os<<md.primCount[i];
						}
						return os;
					}
			};
			class PVTX
			{
				public:
					PVTX()
					{
					}
					PVTX(const PVTX& that)
					{
						ntris = that.ntris;
						triangles.assign(that.triangles.begin(),that.triangles.end());
					}
					int	ntris;
					std::vector<short>	triangles;
					friend std::ostream& operator<<(std::ostream& os, const PVTX& md)
					{
						os<<"ntris"<<md.ntris<<std::endl;
						for(int i=0;i<md.triangles.size();++i)
						{
							os<<md.triangles[i];
						}
						return os;
					}
			};
			class GNDX
			{
				public:
					GNDX()
					{
					}
					GNDX(const GNDX& that)
					{
						nvgrps = that.nvgrps;
						vertexGroups.assign(that.vertexGroups.begin(),that.vertexGroups.end());
					}
					int	nvgrps;
					std::vector<unsigned char>	vertexGroups;
					friend std::ostream& operator<<(std::ostream& os, const GNDX& md)
					{
						os<<"nvgrps"<<md.nvgrps<<std::endl;
						for(int i=0;i<md.vertexGroups.size();++i)
						{
							os<<md.vertexGroups[i];
						}
						return os;
					}
			};
			class MTGC
			{
				public:
					MTGC()
					{
					}
					MTGC(const MTGC& that)
					{
						nmtrcs = that.nmtrcs;
						groupCount.assign(that.groupCount.begin(),that.groupCount.end());
					}
					int	nmtrcs;
					std::vector<int> groupCount;
					friend std::ostream& operator<<(std::ostream& os, const MTGC& md)
					{
						os<<"nmtrcs"<<md.nmtrcs<<std::endl;
						for(int i=0;i<md.groupCount.size();++i)
						{
							os<<md.groupCount[i];
						}
						return os;
					}	
			};
			class MATS
			{
				public:
					MATS()
					{
					}
					MATS(const MATS& that)
					{
						nmats = that.nmats;
						matrices.assign(that.matrices.begin(),that.matrices.end());
					}
					int	nmats;
					std::vector<int> matrices;
					friend std::ostream& operator<<(std::ostream& os, const MATS& md)
					{
						os<<"nmats"<<md.nmats<<std::endl;
						for(int i=0;i<md.matrices.size();++i)
						{
							os<<md.matrices[i];
						}
						return os;
					}
			};
			class UVBS
			{
				public:
					UVBS()
					{
					}
					UVBS(const UVBS& that)
					{
						nvrts = that.nvrts;
						vertices.assign(that.vertices.begin(),that.vertices.end());
					}
					int	nvrts;
					std::vector<C2Vector> vertices;
					friend std::ostream& operator<<(std::ostream& os, const UVBS& md)
					{
						os<<"nvrts"<<md.nvrts<<std::endl;
						for(int i=0;i<md.vertices.size();++i)
						{
							os<<md.vertices[i];
						}
						return os;
					}
			};
			class UVAS
			{
				public:
					UVAS()
					{
					}
					UVAS(const UVAS& that)
					{
						ntvrts = that.ntvrts;
						uvbs.assign(that.uvbs.begin(),that.uvbs.end());
					}
					int	ntvrts;
					std::vector<UVBS> uvbs;
					friend std::ostream& operator<<(std::ostream& os, const UVAS& md)
					{
						os<<"ntvrts"<<md.ntvrts<<std::endl;
						for(int i=0;i<md.uvbs.size();++i)
						{
							os<<md.uvbs[i];
						}
						return os;
					}
			};

			
			class geoset
			{
				public:
					geoset()
					{
					}
					geoset(const geoset& that)
					{
						nbytes = that.nbytes;
						vrtx = that.vrtx;
						nrms = that.nrms;
						ptyp = that.ptyp;
						pcnt = that.pcnt;
						pvtx = that.pvtx;
						gndx = that.gndx;
						mtgc = that.mtgc;
						mats = that.mats;
						MaterialID = that.MaterialID;
						SelectionGroup = that.SelectionGroup;
						Selectable = that.Selectable;
						BoundsRadius = that.BoundsRadius;
						MinExtx = that.MinExtx; MinExty = that.MinExty; MinExtz = that.MinExtz;
						MaxExtx = that.MaxExtx; MaxExty = that.MaxExty; MaxExtz = that.MaxExtz;
						nanim = that.nanim;
						ganimations.assign(that.ganimations.begin(),that.ganimations.end());
						uvas = that.uvas;
						uvbs = that.uvbs;
						
					}
					int	nbytes;
			        VRTX vrtx;
					NRMS nrms;
					PTYP ptyp;
					PCNT pcnt;
					PVTX pvtx;
					GNDX gndx;
					MTGC mtgc;
					MATS mats;
					int	MaterialID;
					int	SelectionGroup;
					int	Selectable;
					int	BoundsRadius;
					int	MinExtx, MinExty, MinExtz;
					int	MaxExtx, MaxExty, MaxExtz;
					int	nanim;
					std::vector<CMdlBounds> ganimations;
					UVAS uvas;
					UVBS uvbs;
					friend std::ostream& operator<<(std::ostream& os, const geoset& md)
					{
						os<<"nbytes"<<md.nbytes<<std::endl
				          <<md.vrtx
						  <<md.nrms
						  <<md.ptyp
						  <<md.pcnt
						  <<md.pvtx
						  <<md.gndx
						  <<md.mtgc
						  <<md.mats
						  <<"MaterialID"<<md.MaterialID<<std::endl
						  <<"SelectionGroup"<<md.SelectionGroup<<std::endl
						  <<"Selectable"<<md.Selectable<<std::endl
						  <<"BoundsRadius"<<md.BoundsRadius<<std::endl
						  <<"MinExtx"<<md.MinExtx<<"MinExty"<<md.MinExty<<"MinExtz"<<md.MinExtz<<std::endl
						  <<"MaxExtx"<<md.MaxExtx<<"MaxExty"<<md.MaxExty<<"MaxExtz"<<md.MaxExtz<<std::endl
						  <<"nanim"<<md.nanim<<std::endl;
						for(int i=0;i<md.ganimations.size();++i)
						{
							os<<md.ganimations[i];
						}
					     os<<md.uvas
					       <<md.uvbs;
					    return os;
					}
			};
		    int	nbytes;
			std::vector<geoset> geosets;
			friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"nbytes"<<md.nbytes<<std::endl;
				for(int i=0;i<md.geosets.size();++i)
				{
					os<<md.geosets[i];
				}
				return os;
			}	
	};
	mdx_ mdx;
	friend std::ostream& operator<<(std::ostream& os, const MDLGEOSETSECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}
};
#endif
