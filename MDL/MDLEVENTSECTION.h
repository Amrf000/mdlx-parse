#ifndef _MDLEVENTSECTION_H
#define _MDLEVENTSECTION_H
#include <stdint.h>
#include "MDLGENOBJECT.h"
#include "MDLEVENTTRACK.h"
/*
EVTS						// [EventObject]
	long	nbytes;
	struct {
		OBJ
		ASCII 	"KEVT"			// Actually a separate object
		long	ntrks;			// usually (1)
		0xFFFFFFFF
		long 	frames[ntrks];
	} events[nevts];
*/
class MDLEVENTSECTION{
public:
	MDLEVENTSECTION();
	MDLEVENTSECTION(const MDLEVENTSECTION *a2);
	~MDLEVENTSECTION();
};
#endif