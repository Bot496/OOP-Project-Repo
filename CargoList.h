#pragma once
#include <vector>
#include <string>
#include "Cargo.h"

class CargoList :
    protected Cargo
{
    private:
    vector <Cargo> cargo;

    public:
    cargoList() {}

    void loadFromFile(std::string dest, std::string time, std::string id)

    void saveToFile(std::string dest, std::string time, std::string id)

    void addCargo(std::string dest, std::string time, std::string id)

    void editCargo(std::string dest, std::string time, std::string id)

    void deleteCargo(std::string dest, std::int time, std::string id)
};

