#pragma once
#include <string>

class System
{
protected:
	std::string dest;
	int time;
	std::string id;
public:
	System(std::string dest, int time, std::string id) {
		setDest(dest);
		setTime(time);
		setId(id);
	}

	void setDest(std::string);
	void setTime(int);
	void setId(std::string);

	std::string getDest() const;
	int getTime() const;
	std::string getId() const;

	virtual ~System() = default;
};

