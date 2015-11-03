#include <main.h>

#define BUILD_CONTEXT

#include "context.h"


int main()
{
	Context cnt;

	for (int i = 0; i < 20; i++)
		cnt.Request();

	return 0;
}
