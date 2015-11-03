#ifndef SRC_CONTEXT_H_
#define SRC_CONTEXT_H_

#include <main.h>

#ifdef BUILD_STATE
	class State;
#endif

#ifdef BUILD_CONTEXT
	#include "state.h"
#endif


class Context
{
public:
	Context();
	void Request();
protected:
	friend class State;
	void ChangeState(State *s);
	State* GetOldState();
private:
	State *_oldstate;
	State *_state;
};

#endif /* SRC_CONTEXT_H_ */
