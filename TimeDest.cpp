#include "TimeDest.h"
#include <string>

using namespace std;

void TimeDest::setTime(int t) {
	time = t;
}

void TimeDest::setDest(string d) {
	dest = d;
}

void TimeDest::setId(string ID) {
	id = ID;
}

int TimeDest::getTime() const {
	return time;
}

string TimeDest::getDest() const {
	return dest;
}

string TimeDest::getId() const {
	return id;
}
