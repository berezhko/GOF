#ifndef FACTORY_H_
#define FACTORY_H_

#include "product.h"

class AbstractFactory
{
public:
	virtual ~AbstractFactory(){}

	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;
protected:
	AbstractProductA *pa;
	AbstractProductB *pb;
};

class ConcreteFactory1: public AbstractFactory
{
public:
	ConcreteFactory1()
	{
		//pa = CreateProductA();
		//pb = CreateProductB();
	}
	ProductA1 * CreateProductA()
	{
		return new ProductA1;
	}
	ProductB1 * CreateProductB()
	{
		return new ProductB1;
	}
};

class ConcreteFactory2: public AbstractFactory
{
public:
	ConcreteFactory2()
	{
		//pa = CreateProductA();
		//pb = CreateProductB();
	}
	ProductA2 * CreateProductA()
	{
		return new ProductA2;
	}
	ProductB2 * CreateProductB()
	{
		return new ProductB2;
	}
};

#endif
