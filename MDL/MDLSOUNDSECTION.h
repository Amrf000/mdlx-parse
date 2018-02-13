#ifndef _MDLSOUNDSECTION_H
#define _MDLSOUNDSECTION_H
#include <string.h>

class MDLSOUNDSECTION{
public:
	MDLSOUNDSECTION();
	MDLSOUNDSECTION(const MDLSOUNDSECTION& that);
public:
	char path[260];
	float x;
	float y;
	long w;
};
#endif