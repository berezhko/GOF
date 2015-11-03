#include <main.h>
#include "adapter.h"

int main()
{
	Target *targ = new Adapter;
	targ->Request();

	return 0;
}
