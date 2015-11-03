#define BUILD_STATE

#include "state.h"


State *ConcreteStateA::_instance = NULL;
State *ConcreteStateB::_instance = NULL;
State *ConcreteStateC::_instance = NULL;
State *ConcreteStateD::_instance = NULL;


State* ConcreteStateA::Instance()
{
	if (_instance == NULL)
		_instance = new ConcreteStateA;
	return _instance;
}


State* ConcreteStateB::Instance()
{
	if (_instance == NULL)
		_instance = new ConcreteStateB;
	return _instance;
}


State* ConcreteStateC::Instance()
{
	if (_instance == NULL)
		_instance = new ConcreteStateC;
	return _instance;
}


State* ConcreteStateD::Instance()
{
	if (_instance == NULL)
		_instance = new ConcreteStateD;
	return _instance;
}


void State::ChangeState(Context *t, State *s)
{
	t->ChangeState(s);
}

State* State::GetOldState(Context *t)
{
	return t->GetOldState();
}


void ConcreteStateA::Handle(Context *t)
{
	State *oldstate = GetOldState(t);

	cout << "State A" << endl;
	if (oldstate == ConcreteStateD::Instance())
		ChangeState(t, ConcreteStateC::Instance());
	else
		ChangeState(t, ConcreteStateB::Instance());

}


void ConcreteStateB::Handle(Context *t)
{
	cout << "State B" << endl;

	ChangeState(t, ConcreteStateD::Instance());
}


void ConcreteStateC::Handle(Context *t)
{
	cout << "State C" << endl;

	ChangeState(t, ConcreteStateA::Instance());
}


void ConcreteStateD::Handle(Context *t)
{
	static unsigned char state;

	cout << "State D" << endl;
	if (state++ % 2)
		ChangeState(t, ConcreteStateA::Instance());
	else
		ChangeState(t, ConcreteStateC::Instance());
}
