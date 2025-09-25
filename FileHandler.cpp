#include "FileHandler.h"
#include <iostream>
#include <string>

using namespace std;

fstream myFile;

bool FileHandler::openFile(std::string& classType) {
	std::string fileName;

	if (classType == "Cargo") {
		fileName = "Cargo.txt";
	}
	else if (classType == "Freight") {
		fileName = "Freight.txt";
	}
	else if (classType == "Schedule") {
		fileName = "Schedule.txt";
	}
	else {
		return false; // Invalid class type
	}

	myFile.open(fileName, std::ios::in | std::ios::out | std::ios::app);
	if (!myFile.is_open()) {
		std::cerr << "Error opening file: " << fileName << std::endl;
		return false;
	}

	std::cout << "File opened successfully: " << fileName << std::endl;
	return true;
}
