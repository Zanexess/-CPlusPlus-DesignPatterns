#ifndef HOUSE_H
#define HOUSE_H

#include <vector>
#include <iterator>
#include "Parts.h"
#include <iostream>

class House 
{
private:
	std::vector<Parts*> listOfParts;
	std::string name;

public:

	House() {  }
	House(std::string name) { this->name = name; } 

	void Add(Parts *part)
	{
		listOfParts.push_back(part);
		
	}

	void info()
	{
		for (int i = 0; i < listOfParts.size(); ++i)
		{
			std::cout << listOfParts[i]->getName() << std::endl;
		}
	}

};

#endif