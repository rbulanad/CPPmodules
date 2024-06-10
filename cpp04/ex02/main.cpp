#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <cstdlib>

int	main()
{
	
	std::cout << "///////////////////////////" << std::endl;
	const AAnimal* cat = new Cat();
	const AAnimal* dog = new Dog();
	const AAnimal* tab[4];

	std::cout << "--------------TAB----------" << std::endl;

	for(int i = 0; i < 4; i++)
		(i < 2) ? tab[i] = new Dog() : tab[i] = new Cat();

	std::cout << "--------TAB DELETE---------" << std::endl;
	
	for(int i = 0; i < 4; i++)
		delete tab[i];

	std::cout << "---------------------------" << std::endl;

	delete cat;
	delete dog;
	
	std::cout << "-----------ADDDRREESS------" << std::endl;

	Cat* catA = new Cat();
	Cat* catB = new Cat();

	catA->getBrain()->getIdeas()[0] = "CatA's idea";
	catB->getBrain()->getIdeas()[0] = "CatB's idea";

	std::cout << "CatA's idea [0]: " << std::endl 
		<< " - content: " << catA->getBrain()->getIdeas()[0] << std::endl
		<< " - addr: " << &catA->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "CatB's idea [0]: " << std::endl 
		<< " - content: " << catB->getBrain()->getIdeas()[0] << std::endl
		<< " - addr: " << &catB->getBrain()->getIdeas()[0] << std::endl;
	
	std::cout << "CatA's ideas should be CatB's ideas" << std::endl;
	*catA = *catB;

	std::cout << "CatA's idea [0]: " << std::endl 
		<< " - content: " << catA->getBrain()->getIdeas()[0] << std::endl
		<< " - addr: " << &catA->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "CatB's idea [0]: " << std::endl 
		<< " - content: " << catB->getBrain()->getIdeas()[0] << std::endl
		<< " - addr: " << &catB->getBrain()->getIdeas()[0] << std::endl;

	std::cout << "Editing CatB's idea [0]" << std::endl;
	catB->getBrain()->getIdeas()[0] = "New CatB's idea";

	std::cout << "CatA's idea [0]: " << std::endl 
		<< " - content: " << catA->getBrain()->getIdeas()[0] << std::endl
		<< " - addr: " << &catA->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "CatB's idea [0]: " << std::endl 
		<< " - content: " << catB->getBrain()->getIdeas()[0] << std::endl
		<< " - addr: " << &catB->getBrain()->getIdeas()[0] << std::endl;
	
	delete catA;
	delete catB;
	return (0);
}
