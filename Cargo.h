#pragma once
#include "TimeDest.h"
class Cargo :
    protected TimeDest
{
	Cargo(std::string ID, std::string Dest, int time)
		: TimeDest(time, Dest, ID) {
	}
};

