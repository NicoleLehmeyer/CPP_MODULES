#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>

static Base *generate(void)
{
	srand(time(0));
	switch (rand() % 3)
	{
		case 0:
			return (new A());
			break;
		case 1:
			return (new B());
			break;
		case 2:
			return (new C());
			break;
		default:
			std::cout << "*ERROR: Generation error" << std::endl;
			return (NULL);
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Object type: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Object type: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Object type: C" << std::endl;
	else
		std::cout << "ERROR: identify(Base *p)" << std::endl;
	// Prints type of object pointed to by p A/B/C
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Object pointed to by &p: A" << std::endl;
	}
	catch (...) {};
	
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "Object pointed to by &p: B" << std::endl;
	}
	catch (...) {};

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "Object pointed to by &p: C" << std::endl;
	}
	catch (...) {};
	// Prints type of object pointed to by p A/B/C. Can't use a pointer inside this function
}

int main (void)
{
	Base *instance = generate();
	identify(instance);
	identify(*instance);
	delete (instance);

	return(0);
}