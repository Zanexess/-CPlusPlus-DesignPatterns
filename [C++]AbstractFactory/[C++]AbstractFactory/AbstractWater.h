#ifndef ABSTRACTWATER_H
#define ABSTRACTWATER_H

#include <string>

class AbstractWater
{
protected:
	std::string name;

public:
	std::string getName()
	{
		return name;
	}

	virtual ~AbstractWater() {} 
};

#endif