#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <main.h>

class Product
{
public:
	virtual ~Product(){}
	virtual void SameOp() = 0;
};

class ConcreteProduct: public Product
{
public:
	void SameOp()
	{
		cout << "Same Operation" << endl;
	}
};

#endif
