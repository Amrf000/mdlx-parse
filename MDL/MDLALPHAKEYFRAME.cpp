#include "MDLALPHAKEYFRAME.h"

MDLALPHAKEYFRAME::MDLALPHAKEYFRAME()
{
	Frame = 0;
	*(int*)&State = 1065353216;
	InTan = 0;
	OutTan = 0;
}

MDLALPHAKEYFRAME::MDLALPHAKEYFRAME(const MDLALPHAKEYFRAME& that)
{
	Frame = that.Frame;
	State = that.State;
	InTan = that.InTan;
	OutTan = that.OutTan;
}