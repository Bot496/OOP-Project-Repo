#pragma once
#include <string>

class TimeDest
{
private:
	int time;
	std::string dest;
	std::string id;
public:
	TimeDest(int t, std::string d, std::string i) {
		setTime(t);
		setDest(d);
		setId(i);
	}
	~TimeDest();

	int getTime() const;
	std::string getDest() const;
	std::string getId() const;

	void setTime(int t);
	void setDest(std::string d);
	void setId(std::string i);
};
	