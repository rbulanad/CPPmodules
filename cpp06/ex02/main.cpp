#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base* generate(void)
{
	int	i = std::rand() % 3;

	switch(i)
	{
		case 0:
			std::cout << "Instantiated A" << std::endl;
			return new A();
		case 1:
			std::cout << "Instantiated B" << std::endl;
			return new B();
		case 2:
			std::cout << "Instantiated C" << std::endl;
			return new C();
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "The object is of type A" << std::endl;
		(void)a;
		return ;
	} catch (std::exception &e) {}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "The object is of type B" << std::endl;
		(void)b;
		return ;
	} catch (std::exception &e) {}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "The object is of type C" << std::endl;
		(void)c;
		return ;
	} catch (std::exception &e) {}
	std::cout << "caca" << std::endl;

}

int	main()
{
	std::srand(time(NULL));

	Base *test = generate();
	identify(test);
	identify(*test);

	delete test;
	return (0);
}
