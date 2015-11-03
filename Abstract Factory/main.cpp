#include "main.h"
#include "factory.h"


int main()
{
	int numfact;
	AbstractFactory *fact;
	AbstractProductA *pa;
	AbstractProductB *pb;

	cout << "Input number factory" << endl;
	cin >> numfact;

	switch(numfact){
	case 1:
		fact = new ConcreteFactory1;
		break;
	case 2:
		fact = new ConcreteFactory2;
		break;
	default:
		return 1;
	}

	pa = fact->CreateProductA();
	pb = fact->CreateProductB();

	pa->print();
	pb->print();

	delete pa;
	delete pb;
	delete fact;

	return 0;
}


