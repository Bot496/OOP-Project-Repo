#pragma once
#include "System.h"
class Cargo :
    protected System
{
public:
    Cargo(std::string dest, int time, std::string id)
        :System (dest, time, id) {
    }
};

