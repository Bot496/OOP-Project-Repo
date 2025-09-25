#pragma once
#include <fstream>
#include <string>
#include <vector>
#include "Freight.h"
#include "cargo.h"

class FileHandler
{
private:
	std::string fileName;
	std::vector<std::string> line;
	std::fstream myFile;

public:
	FileHandler() = default;

	bool openFile(const std::string& classType);
	void closeFile(const std::string& classType);

	vector <std::string> readFile(std::string& classType);
	void writeLine(std::string& classType, const std::string& line);
};

