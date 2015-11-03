#ifndef SRC_SUBJECT_H_
#define SRC_SUBJECT_H_

#include <main.h>
#include "define.h"

const int COUNT_OBSERVER = 10;

#ifdef BUILD_OBSERVER
	class Observer;
#endif

#ifdef BUILD_SUBJECT
	#include "observer.h"
#endif


class Subject
{
public:
	Subject();

	int Attache(Observer *);
	int Detach(Observer *);
	void Notify();
private:
	Observer *_observer[COUNT_OBSERVER];
};

class ConcreteSubject: public Subject
{
public:
	State GetState();
	void SetState(State);
private:
	State subjectState;
};


#endif /* SRC_SUBJECT_H_ */
