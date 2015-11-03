#ifndef ITERATORPTR_H_
#define ITERATORPTR_H_

#include <main.h>
#include "iterator.h"

template <class Item>
class IteratorPtr
{
public:
	IteratorPtr(Iterator<Item> *i): _i(i) {}
	~IteratorPtr()
	{
		cout << "IteratorPtr destroy" << endl;
		delete _i;
	}

	Iterator<Item>* operator->() {return _i;}
	Iterator<Item>* operator*() {return *_i;}
protected:
	// Запрещаем копировать и присваивать,
	// чтобы избежать многократного удаления _i

	IteratorPtr(const IteratorPtr&);
	IteratorPtr& operator=(const IteratorPtr&);
private:
	Iterator<Item> *_i;
};

#endif
