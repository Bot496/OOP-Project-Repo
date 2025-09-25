#pragma once
#include "Freight.h"
#include <vector>
#include <string>
class FreightList : protected Freight 
{
private: 
    std::vector<Freight> freights;

public:
    //File operation
    bool loadFromVector(const std::vector<std::string>& lines);
    //returns 
a to main    std::vector<std::string> getAsString() const;
t    std::vector<std::string> getAsString() const;

    //Add, remove and edit functions in txt file
    void addFreight(const Freight& freight);
    bool editFreight(const std::string& freightName, const std::string& newDestination, const std::string& newTime);
    bool removeFreight(const std::string& freightName);

    //Display freight in the list
    void displayAll() const;



};

