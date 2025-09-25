#pragma once
#include "System.h"
class Cargo :
    protected System
{
public:
    Cargo(std::string dest, string time, std::string id)
        :System (dest, time, id) {
    }
};

