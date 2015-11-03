#ifndef SRC_STATE_H_
#define SRC_STATE_H_

#include <main.h>

#ifdef BUILD_STATE
	#include "context.h"
#endif

#ifdef BUILD_CONTEXT
	class Context;
#endif


class State
{
public:
	virtual ~State() {}

	virtual void Handle(Context *t) = 0;
	void ChangeState(Context *t, State *s);
	State* GetOldState(Context *t);
};


class ConcreteStateA: public State
{
public:
	static State* Instance();
	void Handle(Context *t);
protected:
	ConcreteStateA() {}
private:
	static State *_instance;
};


class ConcreteStateB: public State
{
public:
	static State* Instance();
	void Handle(Context *t);
protected:
	ConcreteStateB() {}
private:
	static State *_instance;
};


class ConcreteStateC: public State
{
public:
	static State* Instance();
	void Handle(Context *t);
protected:
	ConcreteStateC() {}
private:
	static State *_instance;
};


class ConcreteStateD: public State
{
public:
	static State* Instance();
	void Handle(Context *t);
protected:
	ConcreteStateD() {}
private:
	static State *_instance;
};

#endif /* SRC_STATE_H_ */

