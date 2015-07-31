#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <string>

class Singleton
{
protected:
	Singleton() { }

private:
	
	std::string singletonData;

public: 
	
	static Singleton* Instance()
	{
		static Singleton* uniqueInstance;
		if (!uniqueInstance)
			uniqueInstance = new Singleton();

		return uniqueInstance;
	}

	void SingletonOperation()
	{
		singletonData = "SingletonData";
	}

	std::string GetSingletonData()
	{
		return singletonData;
	}

};

#endif