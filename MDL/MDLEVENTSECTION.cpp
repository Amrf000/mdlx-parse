#include "MDLEVENTSECTION.h"

MDLEVENTSECTION::MDLEVENTSECTION()
{
	//MDLGENOBJECT::MDLGENOBJECT(this, 0x400u);
	//MDLEVENTTRACK::MDLEVENTTRACK((MDLEVENTSECTION *)((char *)this + 164));
}
MDLEVENTSECTION::MDLEVENTSECTION( const MDLEVENTSECTION *a2)
{
	//MDLGENOBJECT::MDLGENOBJECT(this, a2);
	//return MDLEVENTTRACK::MDLEVENTTRACK(
	//	(MDLEVENTSECTION *)((char *)this + 164),
	//	(const MDLEVENTSECTION *)((char *)a2 + 164));
}
MDLEVENTSECTION::~MDLEVENTSECTION()
{
	//MDLEVENTTRACK::~MDLEVENTTRACK((MDLEVENTSECTION *)((char *)this + 164));
	//MDLGENOBJECT::~MDLGENOBJECT(this);
}