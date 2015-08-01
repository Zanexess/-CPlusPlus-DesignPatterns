#ifndef LEAF_H
#define LEAF_H

#include "Component.h"
#include <iostream>
#include <string>

using namespace std;

class Leaf: public Component
{
public:
	Leaf(std::string name) : Component(name) { } 
	void Add(Component *component)
	{
		
	}
	Component* GetChild(int index)
	{
		return NULL;
	}
	void Operation()
	{
		cout << name << endl;
	}
	void Remove(int index)
	{
		
	}
};

#endif