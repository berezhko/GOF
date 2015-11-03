#include <main.h>
#include "composite.h"

int main()
{
	Composite *root = new Composite;
	Composite *c1 = new Composite;
	Composite *c2 = new Composite;
	Composite *c3 = new Composite;
	Leaf *l = new Leaf;

	root->Add(l);
	root->Add(c1);
	c1->Add(l);
	c1->Add(c2);
	c1->Add(l);
	c1->Add(c3);
	c1->Add(l);
	c2->Add(l);
	c2->Add(l);
	c2->Add(l);
	c3->Add(l);

	root->Operation();

	return 0;
}
