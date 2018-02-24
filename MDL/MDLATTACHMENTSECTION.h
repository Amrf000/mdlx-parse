#ifndef _MDLATTACHMENTSECTION_H
#define _MDLATTACHMENTSECTION_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
#include "MDLKEYTRACK.h"
#include "MDLALPHAKEYFRAME.h"
/*
ATCH						// [Attachment]
	long 	nbytes;
	struct {
		long	nbytesi;
		OBJ
		ASCII	Path			(0x100)
		long	???;			(0)
		long	AttachmentID;
		(KATV)
	} attachments[natts];
*/
class MDLATTACHMENTSECTION 
{
public:
	MDLATTACHMENTSECTION();
	MDLATTACHMENTSECTION(const MDLATTACHMENTSECTION& that);
	~MDLATTACHMENTSECTION();
public:
	MDLGENOBJECT OBJ;
	uint8_t Path[260];
	MDLKEYTRACK<MDLALPHAKEYFRAME> KATV;
	uint32_t AttachmentID;
};
#endif