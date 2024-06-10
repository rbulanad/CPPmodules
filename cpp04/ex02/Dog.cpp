#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
	std::cout << "Dog construct" << std::endl;
	_brain = new Brain();
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destruct" << std::endl;
}

Dog::Dog(const Dog &dup): AAnimal(dup)
{
	std::cout << "Dog copy construc" << std::endl;
	_brain = new Brain(*dup._brain);
}

Dog &Dog::operator=(const Dog &dup)
{
	if (this != &dup) 
	{
		delete _brain;
		_brain = new Brain(*dup._brain);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "AAHR WGAH" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return _brain;
}
