#ifndef ITERATOR_H
#define ITERATOR_H

#include <main.h>

template <class Item>
class Aggregate;

template <class Item>
class Iterator
{
public:
	virtual ~Iterator() {}

	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() = 0;
	virtual Item CurrentItem() = 0;
protected:
	Iterator(){}
};

template <class Item>
class ConcreteIterator: public Iterator<Item>
{
public:
	ConcreteIterator(const Aggregate<Item> * a): aggreg(a), index(0)
	{

	}
	void First()
	{
		index = 0;
	}
	void Next()
	{
		index++;
	}
	bool IsDone()
	{
		return index >= aggreg->Count();
	}
	Item CurrentItem()
	{
		return aggreg->Get(index);
	}

private:
	const Aggregate<Item> *aggreg;
	int index;
};

template <class Item>
class Aggregate
{
public:
	virtual ~Aggregate() {}

	virtual void Add(Item) = 0;
	virtual void Remove() = 0;
	virtual int Count() const = 0;
	virtual Item Get(int) const = 0;
	virtual Iterator<Item>* CreateIterator() const = 0;
};

template <class Item>
class ConcreteAggregate: public Aggregate<Item>
{
public:
	ConcreteAggregate(): index(0) {}

	void Add(Item p)
	{
		param[index++] = p;
	}
	void Remove()
	{
		index--;
	}
	int Count() const
	{
		return index;
	}
	Item Get(int i) const
	{
		return param[i];
	}
	Iterator<Item>* CreateIterator() const
	{
		return new ConcreteIterator<Item>(this);
	}
private:
	Item param[10];
	int index;
};

#endif
