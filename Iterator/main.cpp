#include <main.h>
#include "iterator.h"
#include "iteratorptr.h"

typedef Aggregate<double> MyAggregate;
typedef Iterator<double> MyIterator;
typedef ConcreteAggregate<double> MyConcreteAggregate;

int main()
{
	MyAggregate *ca = new MyConcreteAggregate();

	ca->Add(10.1);
	ca->Add(20.2);
	ca->Add(30.3);
	ca->Add(40.4);

	// Первый пример работы, необходимо самому удалять Iterator
	MyIterator *i = ca->CreateIterator();

	for (i->First();! i->IsDone(); i->Next()){
		cout << i->CurrentItem() << endl;
	}
	delete i;

	// Умный Iterator
	IteratorPtr<double> iterator(ca->CreateIterator());

	ca->Add(50.5);

	for (iterator->First();! iterator->IsDone(); iterator->Next()){
		cout << iterator->CurrentItem() << endl;
	}

	return 0;
}
