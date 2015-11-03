#define BUILD_SUBJECT

#include "subject.h"

Subject::Subject()
{
	for (int i = 0; i < COUNT_OBSERVER; i++)
		_observer[i] = NULL;
}

int Subject::Attache(Observer *obs)
{
	for (int i = 0; i < COUNT_OBSERVER; i++)
		if (_observer[i] == NULL){
			_observer[i] = obs;
			return 0;
		}
	return 1;
}

int Subject::Detach(Observer *obs)
{
	for (int i = 0; i < COUNT_OBSERVER; i++)
		if (_observer[i] == obs){
			_observer[i] = NULL;
			return 0;
		}
	return 1;
}

void Subject::Notify()
{
	for (int i = 0; i < COUNT_OBSERVER; i++)
		if (_observer[i] != NULL)
			_observer[i]->Update();
}


State ConcreteSubject::GetState()
{
	return subjectState;
}

void ConcreteSubject::SetState(State s)
{
	subjectState = s;
	Notify();
}
