#define BUILD_OBSERVER

#include <main.h>
#include "observer.h"

ConcreteObserver::ConcreteObserver(ConcreteSubject *s):
		_subject(s)
{
	_subject->Attache(const_cast<ConcreteObserver*>(this));
}

ConcreteObserver::~ConcreteObserver()
{
	_subject->Detach(const_cast<ConcreteObserver*>(this));
}

void ConcreteObserver::Update()
{
	_observerState = _subject->GetState();
}

void ConcreteObserver::SetState(State s)
{
	_subject->SetState(s);
}

void ConcreteObserver::PrintState()
{
	cout << "Update compite. State = " << _observerState._state << endl;
}
