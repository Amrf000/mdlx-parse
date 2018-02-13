#include "MDLEVENTKEY.h"

MDLEVENTKEY::MDLEVENTKEY()
{
	val = 0;
}

MDLEVENTKEY::MDLEVENTKEY(const MDLEVENTKEY& that) 
{
	val = that.val;
}