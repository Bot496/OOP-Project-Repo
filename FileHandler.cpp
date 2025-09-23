#include "FileHandler.h"
#include <iostream>
#include <string>

using namespace std;

FileHandler::FileHandler (const string& fName) : fileName(fName) {
	file.open(fileName, ios::in | ios::out | ios::app);
	if (file.is_open()) {
		cerr << "Failed to open file: " << fileName << endl;
	}
}
