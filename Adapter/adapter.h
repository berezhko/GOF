#ifndef ADAPTER_H_
#define ADAPTER_H_

#include <main.h>


class Target
{
public:
	virtual ~Target(){}
	virtual void Request() = 0;
};


class Adaptee
{
public:
	void SpecificRequest()
	{
		cout << "Specific Request" << endl;
	}
};


class Adapter: public Target
{
public:
	void Request()
	{
		adaptee->SpecificRequest();
	}
private:
	Adaptee *adaptee;
};


#endif
