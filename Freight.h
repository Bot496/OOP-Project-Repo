#pragma once
#include "TimeDest.h"
class Freight :
    protected TimeDest
{
    Freight(std::string ID, std::string Dest, int time) 
		: TimeDest(time, Dest, ID) {
	}
};

