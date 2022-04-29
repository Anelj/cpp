#include <iostream>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int r = rand();

	if (r % 3 == 0)
	{
		std::cout << "The instance of A is returned\n";
		return new A();
	}
	if (r % 3 == 1)
	{
		std::cout << "The instance of B is returned\n";
		return new B();
	}
	std::cout << "The instance of C is returned\n";
	return new C();
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type of pointer is A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "Type of pointer is B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "Type of pointer is C\n";
	else
		std::cout << "Type of pointer is Base or unknown\n";
}

void identify(Base& p)
{
	try
	{
		p = dynamic_cast<A &>(p);
		std::cout << "Type of reference is A\n";
	}
	catch (std::exception &e)
	{
		try
		{
			p = dynamic_cast<B &>(p);
			std::cout << "Type of reference is B\n";
		}
		catch (std::exception &e)
		{
			try
			{
				p = dynamic_cast<C &>(p);
				std::cout << "Type of reference is C\n";
			}
			catch (std::exception &e)
			{
				std::cout << "Type of reference is Base or unknown\n";
			}
		}
	}
}

int main()
{
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
	p = generate();
	identify(p);
	identify(*p);
	delete p;
	p = generate();
	identify(p);
	identify(*p);
	delete p;
	p = generate();
	identify(p);
	identify(*p);
	delete p;
	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return 0;
}
