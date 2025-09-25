#include "FreightList.h"
#include <sstream>
#include <iostream>
#include <algorithim>
using namespace std;

void FreightList::loadFromVector(const vector<string>& lines){
    //clear existing data
    freights.clear();

    //Iterate over the vector of string passed from main
    for(const string& line : lines){
        stringstream ss(line);
        string name, destination, time;

        if (getLine(ss, name, 's') && getLine(ss, destination, ',') && getLine(ss, time)){

            //trim whitespace
            name.erase(0, name.find_first_not_of(" \t\n\r"));
            name.erase(name.find_first_not_of(" \t\n\r") + 1);
            destination.erase(0, name.find_first_not_of(" \t\n\r"));
            destination.erase(name.find_first_not_of(" \t\n\r") + 1);
            time.erase(0, name.find_first_not_of(" \t\n\r"));
            time.erase(name.find_first_not_of(" \t\n\r") + 1);

            freights.emplace_back(name, destination, time);
        }
    }

}

vector<string> FreightList::getAsString() const {
    vector<string> lines;
    for (const auto& freight : frights) {
        //use stringstream to build line format
        stringstream ss;
        ss << freight.getName() << ", " << freight.getDestination() << ", " << freight.getTime();
        lines.push_back(ss.str());

    }
    return lines;
}