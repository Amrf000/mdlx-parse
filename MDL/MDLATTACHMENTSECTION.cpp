#include "MDLATTACHMENTSECTION.h"

MDLATTACHMENTSECTION::MDLATTACHMENTSECTION()
{
}
MDLATTACHMENTSECTION::MDLATTACHMENTSECTION( const MDLATTACHMENTSECTION& that)
{
	mdx = that.mdx;
	mdl = that.mdl;
}
MDLATTACHMENTSECTION::~MDLATTACHMENTSECTION()
{
}

bool MDLATTACHMENTSECTION::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;	
	
	int orest = rest;
	MDLATTACHMENTSECTION::mdx_::attachment atta;
	while(orest - rest<mdx.nbytes)
	{
		atta.parse(binary,rest);
		mdx.attachments.push_back(atta);
	}	
	return true;
}
