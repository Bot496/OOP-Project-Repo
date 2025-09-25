#include <iostream>
#include <string>
#include "FileHandler.h"
#include "Cargo.h"
#include "Freight.h"
#include "Schedule.h"

using namespace std;

int main() {
	FileHandler fileHandler;
	string classType;
	cout << "Enter class type (Cargo, Freight, Schedule): ";
	cin >> classType;
	if (fileHandler.openFile(classType)) {
		// File opened successfully, proceed with further operations
		// For example, you can read/write data related to the specified class type
	} else {
		cout << "Failed to open file for class type: " << classType << endl;
	}
	return 0;
}