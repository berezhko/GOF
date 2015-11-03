#define BUILD_CONTEXT

#include "context.h"


Context::Context()
{
	_state = ConcreteStateA::Instance();
	_oldstate = ConcreteStateA::Instance();
}

void Context::Request()
{
	_state->Handle(const_cast<Context*>(this));
}

void Context::ChangeState(State *s)
{
	_oldstate = _state;
	_state = s;
}

State* Context::GetOldState()
{
	return _oldstate;
}
