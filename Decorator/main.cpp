#include <main.h>
#include "component.h"
#include "decorator.h"

int main()
{
	Component *comp = new ConcreteComponent();
	comp->Operation();
	delete comp;

	comp = new Decorator(new ConcreteComponent);
	for (int i = 0; i < 10; i++){
		if (i % 2)
			comp = new ConcreteDecoratorA(comp, i);
		else
			comp = new ConcreteDecoratorB(comp, i);
	}
	comp->Operation();
	delete comp;

	comp = new ConcreteDecoratorA(new ConcreteComponent, 5);
	comp->Operation();
	delete comp;

	return 0;
}
