#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

int main()
{
	Component *root = new Composite("Root");
	Component *branch1 = new Composite("Branch1");
	Component *branch2 = new Composite("Branch2");
	Component *leaf1 = new Leaf("Leaf1");
	Component *leaf2 = new Leaf("Leaf2");

	root->Add(branch1);
	root->Add(branch2);
	branch1->Add(leaf1);
	branch2->Add(leaf2);
	root->Operation();

	delete root;
	delete branch1;
	delete branch2;
	delete leaf1;
	delete leaf2;
}

