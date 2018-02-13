#include "MDLTEXLAYER.h"

MDLTEXLAYER::MDLTEXLAYER():KMTF(2)
{
	FilterMode = 0;
	Shading = 0;
	TextureID = 0;
	TVertexAnimId = -1;
	CoordId = 0;
	*(long*)&Alpha = 1065353216;
}
MDLTEXLAYER::MDLTEXLAYER( const MDLTEXLAYER& that):KMTA(that.KMTA), KMTF(that.KMTF)
{
	FilterMode = that.FilterMode;
	Shading = that.Shading;
	TextureID = that.TextureID;
	TVertexAnimId = that.TVertexAnimId;
	CoordId = that.CoordId;
	Alpha = that.Alpha;
}
MDLTEXLAYER::~MDLTEXLAYER()
{
}