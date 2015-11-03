#include <main.h>
#include "creator.h"

int main()
{
	Creator* creator = new ConcreteCreator();
	creator->AnOperation();

	return 0;
}
