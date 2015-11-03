#include <main.h>

#define BUILD_SUBJECT

#include "subject.h"

const int COUNT_OBS = 7;

void printstate(Observer *obs[COUNT_OBS])
{
	for (int i = 0; i < COUNT_OBS; i++){
		if (obs[i] == NULL)
			continue;
		cout << "obs" << i << " ";
		obs[i]->PrintState();
	}
}

int main()
{
	ConcreteSubject *cs = new ConcreteSubject;
	Observer *obs[COUNT_OBS];
	State s;

	for (int i = 0; i < COUNT_OBS; i++)
		obs[i] = new ConcreteObserver(cs);

	s._state = 1;
	cs->SetState(s);
	printstate(obs);

	cs->Detach(obs[5]);

	s._state = 4;
	cs->SetState(s);
	printstate(obs);

	cs->Attache(obs[5]);

	s._state = 2;
	cs->SetState(s);
	printstate(obs);

	return 0;
}
