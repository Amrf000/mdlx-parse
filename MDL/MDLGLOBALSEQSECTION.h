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
	MDLGLOBALSEQSECTION(const MDLGLOBALSEQSECTION& that);
public:
	long	durations;
};
#endif