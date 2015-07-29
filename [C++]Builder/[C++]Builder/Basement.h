#ifndef BASEMENT_H
#define BASEMENT_H

#include "Parts.h"

class Basement : public Parts
{
public:
	Basement() { setName("Basement"); } 

protected:
	std::string name;

	void setName(std::string name)
	{
		this->name = name;
	}
	std::string getName()
	{
		return name;
	}
};

#endif