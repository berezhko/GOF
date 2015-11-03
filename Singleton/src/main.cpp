#include <main.h>


class Singleton
{
public:
	static Singleton* Instance();
	void Operation()
	{
		cout << "Singleton Operation" << endl;
	}
protected:
	Singleton() {}
private:
	static Singleton *_instance;
};

Singleton* Singleton::_instance = NULL;

Singleton* Singleton::Instance()
{
	if (_instance == NULL)
		_instance = new Singleton;
	return _instance;
}


int main()
{
	Singleton *s = Singleton::Instance();
	s->Operation();

	return 0;
}
