#include "Abstraction.h"
#include "RefinedAbstraction.h"
#include "Implementator.h"
#include "ConcreteImplementator1.h"
#include "ConcreteImplementator2.h"

int main()
{
	Abstraction *abs;
	abs = new RefinedAbstraction(new ConcreteImplementator1);
	abs->Operation();

	abs = new RefinedAbstraction(new ConcreteImplementator2);
	abs->Operation();

	delete abs;
}

