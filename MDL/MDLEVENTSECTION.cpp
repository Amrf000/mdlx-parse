#include "MDLEVENTSECTION.h"

MDLEVENTSECTION::MDLEVENTSECTION()
{
}

MDLEVENTSECTION::MDLEVENTSECTION(const MDLEVENTSECTION& that)
{
}

MDLEVENTSECTION::~MDLEVENTSECTION()
{
}

bool MDLEVENTSECTION::parse(char*& binary,int& rest)
{
	memcpy(mdx.Key,binary,4);
	binary += 4; rest -= 4;
	memcpy(&mdx.nbytes,binary,4);
	binary += 4; rest -= 4;
	
	int orest = rest;
	MDLEVENTSECTION::mdx_::event ev;
	while(orest - rest<mdx.nbytes)
	{
		ev.parse(binary,rest);
		mdx.events.push_back(ev);
	}
	return true;
}
