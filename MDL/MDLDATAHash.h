#ifndef _MDLDATAHash_H
#define _MDLDATAHash_H
#include <stdint.h>
//#include "../Base/TSHashObject.h"
#include "MDLDATA.h"
//#include "../Base/Status.h"
//#include "../Base/HASHKEY_STRI.h"

class MDLDATAHash {
public:
	MDLDATAHash();
	~MDLDATAHash();
public:
	MDLDATA data;
};
#endif