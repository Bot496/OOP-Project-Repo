#pragma once
#include "System.h"

class Freight :
    protected System
{
public:
    Freight (std::string dest, std::string time, std::string id)
        :System (dest, time, id) {
    }

};

