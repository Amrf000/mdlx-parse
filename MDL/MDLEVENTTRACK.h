#ifndef _MDLEVENTTRACK_H
#define _MDLEVENTTRACK_H
#include <stdint.h>
#include "MDLKEYTRACK.h"
#include "MDLEVENTKEY.h"

class MDLEVENTTRACK
{
public:
	MDLEVENTTRACK();
	MDLEVENTTRACK(const MDLEVENTTRACK& that);
	~MDLEVENTTRACK();
public:
	MDLKEYTRACK<MDLEVENTKEY> val;
};

#endif