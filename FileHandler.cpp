#include "FileHandler.h"
#include <iostream>
#include <string>

using namespace std;

fstream myFile;

bool FileHandler::openFile(const std::string& classType) {
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
		std::cerr << "Invalid class type: " << classType << std::endl;
		return false;
	}

	myFile.open(fileName, std::ios::in | std::ios::out | std::ios::app);
	if (!myFile.is_open()) {
		std::cerr << "Error opening file: " << fileName << std::endl;
		return false;
	}
}

void FileHandler::closeFile(const std::string& classType) {
	std::string fileName = classType;
	ofstream file(fileName);
	file.close();
}

vector<std::string> FileHandler::readFile(std::string& classType) {
	std::string fileName=classType;
	std::ifstream file(fileName);
	vector<std::string> lines;
	std::string line;
	while (getline(file, line)) {
		lines.push_back(line);
	}
	return lines;
}

void  FileHandler::writeLine(std::string& classType, const std::string& line) {
	std::ofstream(fileName, std::ios::app);
	std::string fileName = classType;
	std::ofstream file(fileName);
	file << line << "\n";
}



