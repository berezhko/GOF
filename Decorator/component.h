#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <main.h>


class Component
{
public:
	virtual ~Component(){}
	virtual void Operation() = 0;
};


class ConcreteComponent: public Component
{
public:
	void Operation()
	{
		cout << "Hello from Concrete Component" << endl;
	}
};

#endif
