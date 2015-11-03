#ifndef DECORATOR_H_
#define DECORATOR_H_

#include <main.h>
#include "component.h"


class Decorator: public Component
{
public:
	Decorator(Component *comp): component(comp) {}
	virtual ~Decorator(){}
	void Operation()
	{
		component->Operation();
	}
protected:
	Component *component;
};


class ConcreteDecoratorA: public Decorator
{
public:
	ConcreteDecoratorA(Component *comp, int st):
		Decorator(comp), addedState(st)	{	}
	ConcreteDecoratorA(Component *comp):
		Decorator(comp), addedState(0)	{	}
	void Operation()
	{
		addedBehavior();
		Decorator::Operation();
	}
	void addedBehavior()
	{
		cout << "ConcreteDecoratorA, state = "
				<< addedState << endl;
	}
private:
	int addedState;
};


class ConcreteDecoratorB: public Decorator
{
public:
	ConcreteDecoratorB(Component *comp, int st):
		Decorator(comp), addedState(st)	{	}
	ConcreteDecoratorB(Component *comp):
		Decorator(comp), addedState(0)	{	}
	void Operation()
	{
		addedBehavior();
		Decorator::Operation();
	}
	void addedBehavior()
	{
		cout << "ConcreteDecoratorB, state = "
				<< addedState << endl;
	}
private:
	int addedState;
};


#endif
