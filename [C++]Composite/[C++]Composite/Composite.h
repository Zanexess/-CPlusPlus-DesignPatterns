#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "Component.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Composite: public Component
{
	vector<Component*> vectorOfComponents;
public:
	Composite(std::string name) : Component(name) { } 
	void Add(Component *component)
	{
		vectorOfComponents.push_back(component);
	}
	Component* GetChild(int index)
	{
		Component *temp;
		temp = vectorOfComponents.at(index);
		return temp;
	}
	void Operation()
	{
		cout << name << endl;
		for (int i = 0; i < vectorOfComponents.capacity(); ++i)
		{
			vectorOfComponents.at(i)->Operation();
		}
	}
	void Remove(int index)
	{
		vectorOfComponents.erase(vectorOfComponents.begin() + index);
	}
};

#endif