#ifndef _MDLGLOBALSEQSECTION_H
#define _MDLGLOBALSEQSECTION_H
#include <stdint.h>
/*
GLBS						// [GlobalSequences]
	long	nbytes;
	long	durations[ndurs];		// ndurs = nbytes/4;
*/
class MDLGLOBALSEQSECTION {
public:
	MDLGLOBALSEQSECTION();
public:
	long	nbytes;
	long	durations[ndurs];
};
#endif