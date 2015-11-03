#ifndef COMPOSITE_H_
#define COMPOSITE_H_

#include <main.h>


class Component
{
public:
	virtual ~Component(){}

	virtual void Operation() = 0;
	virtual void Add(Component *){}
	virtual void Remove(int){}
	virtual Component * GetChild(int){ return NULL;}
};


class Composite: public Component
{
public:
	Composite(): index(0) {}
	~Composite () {	}

	void Operation()
	{
		Component * tmp;

		cout << "Composite live" << endl;

		for (int i = 0; i < index; i++){
			tmp = GetChild(i);
			tmp->Operation();
		}
	}
	void Add(Component *c)
	{
		g[index++] = c;
	}
	void Remove(int n)
	{
		index--;
	}
	Component * GetChild(int n)
	{
		return g[n];
	}
protected:
	Component *g[10];
	int index;
};


class Leaf: public Component
{
public:
	void Operation()
	{
		cout << "Leaf live" << endl;
	}
};

#endif
