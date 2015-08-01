#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
using namespace std;

class Component
{
protected: 
	string name;
public:
	Component(std::string name) { this-> name = name; }
	virtual void Add(Component *component) = 0;
	virtual Component* GetChild(int index) = 0;
	virtual void Operation() = 0;
	virtual void Remove(int index) = 0;
};

#endif