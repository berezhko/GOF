#include <main.h>
#include "strategy.h"

int main()
{
	Context *a1 = new Context(new ConcreteStrategyA);
	Context *a2 = new Context(new ConcreteStrategyB);

	cout << a1->ContextInterface(2000000000) << endl;
	cout << a2->ContextInterface(2000000000) << endl;

	return 0;
}
