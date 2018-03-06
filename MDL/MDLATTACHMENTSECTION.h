#ifndef _MDLATTACHMENTSECTION_H
#define _MDLATTACHMENTSECTION_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
#include "MDLKEYTRACK.h"
#include "MDLALPHAKEYFRAME.h"
/*
ATCH						// [Attachment]
	int 	nbytes;
	struct {
		int	nbytesi;
		OBJ
		ASCII	Path			(0x100)
		int	???;			(0)
		int	AttachmentID;
		(KATV)
	} attachments[natts];
*/
class MDLATTACHMENTSECTION 
{
public:
	MDLATTACHMENTSECTION();
	MDLATTACHMENTSECTION(const MDLATTACHMENTSECTION& that);
	~MDLATTACHMENTSECTION();

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
			class attachment
			{
				public:
					attachment()
					{
					}
					attachment(const attachment& that)
					{
						nbytesi = that.nbytesi;
						OBJ = that.OBJ;
						memcpy(Path,that.Path,256);
						spare = that.spare;
						AttachmentID = that.AttachmentID;
						KATV = that.KATV;				
					}
					friend std::ostream& operator<<(std::ostream& os, const attachment& md)
					{
						os<<"nbytesi"<<md.nbytesi<<std::endl
						  <<md.OBJ
						  <<"Path"<<md.Path<<std::endl
						  <<"spare"<<md.spare<<std::endl
						  <<"AttachmentID"<<md.AttachmentID<<std::endl
						  <<md.KATV;
						return os;
					}
					int	nbytesi;
					MDLGENOBJECT OBJ;
					char Path[256];
					int spare;
					int AttachmentID;
					MDLKEYTRACK<MDLALPHAKEYFRAME> KATV;
			};
			mdx_()
			{
			}
			mdx_(const mdx_& that)
			{
				nbytes = that.nbytes;
				attachments.assign(that.attachments.begin(),that.attachments.end());
			}
		    friend std::ostream& operator<<(std::ostream& os, const mdx_& md)
			{
				os<<"nbytes"<<md.nbytes<<std::endl;
				for(int i=0;i<md.attachments.size();++i)
				{
					os<<md.attachments[i];
				}
				return os;
			}
			int nbytes;
			std::vector<attachment> attachments;
			
	};
	mdx_ mdx;
	
	friend std::ostream& operator<<(std::ostream& os, const MDLATTACHMENTSECTION& md)
	{
		return os<<md.mdl<<std::endl
		        <<md.mdx<<std::endl;
	}	
};
#endif
