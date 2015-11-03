#include <main.h>

class AbstractClass
{
public:
	virtual ~AbstractClass() {}

	void TemplateMethod()
	{
		PrimitiveOperation1();
		PrimitiveOperation2();
	}
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

class ConcreteClass: public AbstractClass
{
public:
	void PrimitiveOperation1() {}
	void PrimitiveOperation2() {}
};

int main()
{
	AbstractClass *val = new ConcreteClass;
	val->TemplateMethod();

	return 0;
}
