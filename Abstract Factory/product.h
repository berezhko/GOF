#ifndef PRODUCT_H_
#define PRODUCT_H_

#include "main.h"

class AbstractProductA
{
public:
	virtual ~AbstractProductA(){}
	AbstractProductA()
	{
		//cout << "ProductA created" << endl;
	}
	virtual void print() = 0;
};

class ProductA1: public AbstractProductA
{
public:
	ProductA1()
	{
		cout << "ProductA1 created" << endl;
	}
	void print()
	{
		cout << "ProductA1 live" << endl;
	}
};

class ProductA2: public AbstractProductA
{
public:
	ProductA2()
	{
		cout << "ProductA2 created" << endl;
	}
	void print()
	{
		cout << "ProductA2 live" << endl;
	}
};

class AbstractProductB
{
public:
	virtual ~AbstractProductB(){}
	AbstractProductB()
	{
		//cout << "ProductB created" << endl;
	}
	virtual void print() = 0;
};

class ProductB1: public AbstractProductB
{
public:
	ProductB1()
	{
		cout << "ProductB1 created" << endl;
	}
	void print()
	{
		cout << "ProductB1 live" << endl;
	}
};

class ProductB2: public AbstractProductB
{
public:
	ProductB2()
	{
		cout << "ProductB2 created" << endl;
	}
	void print()
	{
		cout << "ProductB2 live" << endl;
	}
};

#endif
