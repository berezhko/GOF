#ifndef CREATOR_H_
#define CREATOR_H_

#include <main.h>
#include "product.h"

class Creator
{
public:
	virtual ~Creator()
	{
		if (product != NULL){
			delete product;
		}
	}
	virtual Product * FactoryMethod() = 0;

	void AnOperation()
	{
		product = FactoryMethod();

		if (product != NULL){
			product->SameOp();
		}
	}
private:
	Product *product;
};

class ConcreteCreator: public Creator
{
public:
	Product * FactoryMethod()
	{
		return new ConcreteProduct;
	}
};


#endif
