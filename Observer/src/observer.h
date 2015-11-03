#ifndef SRC_OBSERVER_H_
#define SRC_OBSERVER_H_

#include "define.h"

#ifdef BUILD_OBSERVER
	#include "subject.h"
#endif

#ifdef BUILD_SUBJECT
	class ConcreteSubject;
#endif

class Observer
{
public:
	virtual ~Observer() {}

	virtual void Update() = 0;
	virtual void SetState(State) = 0;
	virtual void PrintState() = 0;
protected:
	Observer() {}
};

class ConcreteObserver: public Observer
{
public:
	ConcreteObserver(ConcreteSubject *);
	~ConcreteObserver();

	void Update();
	void SetState(State);
	void PrintState();
private:
	ConcreteSubject *_subject;
	State _observerState;
};

#endif /* SRC_OBSERVER_H_ */
