#include <iostream>
#include "Singleton.h"




int main()
{
	Singleton* singleton1 = Singleton::Instance();
	Singleton* singleton2 = Singleton::Instance();

	std::cout << singleton1 << std::endl;
	std::cout << singleton2 << std::endl;

	delete singleton1;
}