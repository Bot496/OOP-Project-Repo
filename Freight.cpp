#include "Freight.h"
#include <iostream>
#include <string>

using namespace std;

void System::setDest(string d) {
	dest = d;
}

void System::setTime(int t) {
	time = t;
}

void System::setId(string num) {
	id = num;
}

string System::getDest() const {
	return dest;
}

int System::getTime() const {
	return time;
}

string System::getId() const {
	return id;
}

