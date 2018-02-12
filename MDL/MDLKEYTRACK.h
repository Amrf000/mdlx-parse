#ifndef _MDLKEYTRACK_H
#define _MDLKEYTRACK_H
#include <stdint.h>
#include <vector>

template<typename T>
class MDLKEYTRACK {
public:
	MDLKEYTRACK( int LineType_):
		LineType(LineType_),
		GlobalSeqId(-1)
	{
	}
	MDLKEYTRACK(const MDLKEYTRACK& that):
		tunk(that.tunk),
		LineType(that.LineType),
		GlobalSeqId(that.GlobalSeqId)
	{
	}
	~MDLKEYTRACK()
	{
	}
public:
	std::vector<T> tunk;
	long	LineType;
	long    GlobalSeqId;
};
#endif