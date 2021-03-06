#ifndef _MDLGEOSETSECTION_H
#define _MDLGEOSETSECTION_H
#include <stdint.h>
#include <string.h>
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
		bool parse(char*& binary,int& rest)
		{
			memcpy(&x,binary,4);
			binary += 4; rest -= 4;
			memcpy(&y,binary,4);
			binary += 4; rest -= 4;
			return true;
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
		bool parse(char*& binary,int& rest)
		{
			memcpy(&x,binary,4);
			binary += 4; rest -= 4;
			memcpy(&y,binary,4);
			binary += 4; rest -= 4;
			memcpy(&z,binary,4);
			binary += 4; rest -= 4;			
			return true;	
		}
};
/*
GEOS						// [Geoset]
	int	nbytes;
	struct {
		int	nbytes;
		VRTX
		NRMS
		PTYP
		PCNT
		PVTX
		GNDX
		MTGC
		MATS
		int	MaterialID;
		int	SelectionGroup;
		int	Selectable		(0:none;4:Unselectable)
		float	BoundsRadius;
		float	MinExtx, MinExty, MinExtz;
		float	MaxExtx, MaxExty, MaxExtz;
		int 	nanim;
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
					char Key[4];//VRTX
					int	nvrts;
					std::vector<C3Vector> vertices;
					friend std::ostream& operator<<(std::ostream& os, const VRTX& md)
					{
						os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						  <<"nvrts"<<md.nvrts<<std::endl;
						for(int i=0;i<md.vertices.size();++i)
						{
							os<<md.vertices[i];
						}
						return os;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(Key,binary,4);
						if(strncmp(Key,"VRTX",4))
						{
							return false;
						}
						binary += 4; rest -= 4;
						memcpy(&nvrts,binary,4);
						binary += 4; rest -= 4;
						vertices.resize(nvrts);
						for(int i=0;i<vertices.size();++i)
						{
							vertices[i].parse(binary,rest);
						}
						return true;
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
					char Key[4];
					int	nnrms;
					std::vector<C3Vector> normals;	
					friend std::ostream& operator<<(std::ostream& os, const NRMS& md)
					{
						os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						  <<"nnrms"<<md.nnrms<<std::endl;
						for(int i=0;i<md.normals.size();++i)
						{
							os<<md.normals[i];
						}
						return os;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(Key,binary,4);
						if(strncmp(Key,"NRMS",4))
						{
							return false;
						}
						binary += 4; rest -= 4;
						memcpy(&nnrms,binary,4);
						binary += 4; rest -= 4;
						normals.resize(nnrms);
						for(int i=0;i<normals.size();++i)
						{
							normals[i].parse(binary,rest);
						}
						return true;
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
					char Key[4];
					int	nptyps;
					std::vector<int> primType;	
					friend std::ostream& operator<<(std::ostream& os, const PTYP& md)
					{
						os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						  <<"nptyps"<<md.nptyps<<std::endl;
						for(int i=0;i<md.primType.size();++i)
						{
							os<<md.primType[i];
						}
						return os;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(Key,binary,4);
						if(strncmp(Key,"PTYP",4))
						{
							return false;
						}
						binary += 4; rest -= 4;
						memcpy(&nptyps,binary,4);
						binary += 4; rest -= 4;
						primType.resize(nptyps);
						if(nptyps>0)
						{
							memcpy(&primType[0],binary,nptyps*sizeof(int));
							binary += nptyps*sizeof(int); rest -= nptyps*sizeof(int);	
						}
						return true;
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
					char Key[4];
					int	npcnts;				//   many verts in a face (3).
					std::vector<int> primCount;
					friend std::ostream& operator<<(std::ostream& os, const PCNT& md)
					{
						os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						  <<"npcnts"<<md.npcnts<<std::endl;
						for(int i=0;i<md.primCount.size();++i)
						{
							os<<md.primCount[i];
						}
						return os;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(Key,binary,4);
						if(strncmp(Key,"PCNT",4))
						{
							return false;
						}
						binary += 4; rest -= 4;
						memcpy(&npcnts,binary,4);
						binary += 4; rest -= 4;
						primCount.resize(npcnts);
						if(npcnts>0)
						{
							memcpy(&primCount[0],binary,npcnts*sizeof(int));
							binary += npcnts*sizeof(int); rest -= npcnts*sizeof(int);	
						}
						return true;
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
					char Key[4];
					int	ntris;
					std::vector<short>	triangles;
					friend std::ostream& operator<<(std::ostream& os, const PVTX& md)
					{
						os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						  <<"ntris"<<md.ntris<<std::endl;
						for(int i=0;i<md.triangles.size();++i)
						{
							os<<md.triangles[i];
						}
						return os;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(Key,binary,4);
						if(strncmp(Key,"PVTX",4))
						{
							return false;
						}
						binary += 4; rest -= 4;
						memcpy(&ntris,binary,4);
						binary += 4; rest -= 4;
						triangles.resize(ntris);
						if(ntris>0)
						{
							memcpy(&triangles[0],binary,ntris*sizeof(short));
							binary += ntris*sizeof(short); rest -= ntris*sizeof(short);	
						}
						return true;
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
					char Key[4];
					int	nvgrps;
					std::vector<unsigned char>	vertexGroups;
					friend std::ostream& operator<<(std::ostream& os, const GNDX& md)
					{
						os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						  <<"nvgrps"<<md.nvgrps<<std::endl;
						for(int i=0;i<md.vertexGroups.size();++i)
						{
							os<<md.vertexGroups[i];
						}
						return os;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(Key,binary,4);
						if(strncmp(Key,"GNDX",4))
						{
							return false;
						}
						binary += 4; rest -= 4;
						memcpy(&nvgrps,binary,4);
						binary += 4; rest -= 4;
						vertexGroups.resize(nvgrps);
						if(nvgrps>0)
						{
							memcpy(&vertexGroups[0],binary,nvgrps*sizeof(unsigned char));
							binary += nvgrps*sizeof(unsigned char); rest -= nvgrps*sizeof(unsigned char);	
						}
						return true;
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
					char Key[4];
					int	nmtrcs;
					std::vector<int> groupCount;
					friend std::ostream& operator<<(std::ostream& os, const MTGC& md)
					{
						os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						  <<"nmtrcs"<<md.nmtrcs<<std::endl;
						for(int i=0;i<md.groupCount.size();++i)
						{
							os<<md.groupCount[i];
						}
						return os;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(Key,binary,4);
						if(strncmp(Key,"MTGC",4))
						{
							return false;
						}
						binary += 4; rest -= 4;
						memcpy(&nmtrcs,binary,4);
						binary += 4; rest -= 4;
						groupCount.resize(nmtrcs);
						if(nmtrcs>0)
						{
							memcpy(&groupCount[0],binary,nmtrcs*sizeof(int));
							binary += nmtrcs*sizeof(int); rest -= nmtrcs*sizeof(int);	
						}
						return true;
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
					char Key[4];
					int	nmats;
					std::vector<int> matrices;
					friend std::ostream& operator<<(std::ostream& os, const MATS& md)
					{
						os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						  <<"nmats"<<md.nmats<<std::endl;
						for(int i=0;i<md.matrices.size();++i)
						{
							os<<md.matrices[i];
						}
						return os;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(Key,binary,4);
						if(strncmp(Key,"MATS",4))
						{
							return false;
						}
						binary += 4; rest -= 4;
						memcpy(&nmats,binary,4);
						binary += 4; rest -= 4;
						matrices.resize(nmats);
						if(nmats>0)
						{
							memcpy(&matrices[0],binary,nmats*sizeof(int));
							binary += nmats*sizeof(int); rest -= nmats*sizeof(int);	
						}
						return true;
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
					char Key[4];
					int	nvrts;
					std::vector<C2Vector> vertices;
					friend std::ostream& operator<<(std::ostream& os, const UVBS& md)
					{
						os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						  <<"nvrts"<<md.nvrts<<std::endl;
						for(int i=0;i<md.vertices.size();++i)
						{
							os<<md.vertices[i];
						}
						return os;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(Key,binary,4);
						if(strncmp(Key,"UVBS",4))
						{
							return false;
						}
						binary += 4; rest -= 4;
						memcpy(&nvrts,binary,4);
						binary += 4; rest -= 4;
						vertices.resize(nvrts);
						for(int i=0;i<vertices.size();++i)
						{
							vertices[i].parse(binary,rest);
						}
						return true;
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
					char Key[4];
					int	ntvrts;
					std::vector<UVBS> uvbs;
					friend std::ostream& operator<<(std::ostream& os, const UVAS& md)
					{
						os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
						  <<"ntvrts"<<md.ntvrts<<std::endl;
						for(int i=0;i<md.uvbs.size();++i)
						{
							os<<md.uvbs[i];
						}
						return os;
					}
					bool parse(char*& binary,int& rest)
					{
						memcpy(Key,binary,4);
						if(strncmp(Key,"UVAS",4))
						{
							return false;
						}
						binary += 4; rest -= 4;
						memcpy(&ntvrts,binary,4);
						binary += 4; rest -= 4;
						uvbs.resize(ntvrts);
						for(int i=0;i<uvbs.size();++i)
						{
							uvbs[i].parse(binary,rest);
						}
						return true;
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
					bool parse(char*& binary,int& rest)
					{
						memcpy(&nbytes,binary,4);
						binary += 4; rest -= 4;
						vrtx.parse(binary,rest);
						nrms.parse(binary,rest);
						ptyp.parse(binary,rest);
						pcnt.parse(binary,rest);
						pvtx.parse(binary,rest);
						gndx.parse(binary,rest);
						mtgc.parse(binary,rest);
						mats.parse(binary,rest);
						memcpy(&MaterialID,binary,4);
						binary += 4; rest -= 4;
						memcpy(&SelectionGroup,binary,4);
						binary += 4; rest -= 4;
						memcpy(&Selectable,binary,4);
						binary += 4; rest -= 4;
						memcpy(&BoundsRadius,binary,4);
						binary += 4; rest -= 4;
						memcpy(&MinExtx,binary,4);
						binary += 4; rest -= 4;
						memcpy(&MinExty,binary,4);
						binary += 4; rest -= 4;
						memcpy(&MinExtz,binary,4);
						binary += 4; rest -= 4;
						memcpy(&MaxExtx,binary,4);
						binary += 4; rest -= 4;
						memcpy(&MaxExty,binary,4);
						binary += 4; rest -= 4;
						memcpy(&MaxExtz,binary,4);
						binary += 4; rest -= 4;
						memcpy(&nanim,binary,4);
						binary += 4; rest -= 4;
						ganimations.resize(nanim);
						for(int i=0;i<ganimations.size();++i)
						{
							ganimations[i].parse(binary,rest);
						}
						uvas.parse(binary,rest);
						uvbs.parse(binary,rest);						
					}
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
			char Key[4];//GEOS
		    int	nbytes;
			std::vector<geoset> geosets;
			friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"Key"<<md.Key[0]<<md.Key[1]<<md.Key[2]<<md.Key[3]<<std::endl
				   <<"nbytes"<<md.nbytes<<std::endl;
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
