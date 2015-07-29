#include "ConcreteCreator.h"
#include "ConcreteProduct.h"
#include "Creator.h"
#include "Product.h"

int main()
{
	Creator *creator = NULL;
	Product *product = NULL;

	creator = new MeatCreator();
	product = creator->FactoryMethod();

	creator->AnOperation();

	delete creator;
	delete product;

	return 0;
}

