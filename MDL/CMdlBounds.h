#ifndef _CMDLBOUNDS_H
#define _CMDLBOUNDS_H
#include <iostream>
#include <stdint.h>

class CMdlBounds{
public:
	CMdlBounds();
	bool parse(char*& binary,int& rest);
			
public:
	float	BoundsRadius;
	float	MinExtx, MinExty, MinExtz;
	float	MaxExtx, MaxExty, MaxExtz;

	friend std::ostream& operator<<(std::ostream& os,const CMdlBounds& md)
	{
		return os << "		BoundsRadius " <<md.BoundsRadius <<","<< std::endl
			      << "		MinimumExtent { " << md.MinExtx << ", " << md.MinExty << ", " << md.MinExtz << " }," << std::endl
			      << "		MaximumExtent { " << md.MaxExtx << ", " << md.MaxExty << ", " << md.MaxExtz << " }," << std::endl;
	}
};
#endif
