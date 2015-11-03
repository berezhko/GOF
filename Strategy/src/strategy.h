#ifndef SRC_STRATEGY_H_
#define SRC_STRATEGY_H_

#include <main.h>

class Strategy
{
public:
	virtual ~Strategy() {}
	virtual long Algorithm(int) = 0;
};

class Context
{
public:
	Context(Strategy *s): _stratery(s) {}
	long ContextInterface(int i)
	{
		return _stratery->Algorithm(i);
	}
private:
	Context(): _stratery(NULL) {}
	Strategy *_stratery;
};

class ConcreteStrategyA: public Strategy
{
public:
	long Algorithm(int i)
	{
		return i*i;
	}
};

class ConcreteStrategyB: public Strategy
{
public:
	long Algorithm(int i)
	{
		long sum = 0;

		for (int j = 0; j < i; j++)
			sum += i;
		return sum;
	}
};

#endif /* SRC_STRATEGY_H_ */
