#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Default Dog construct" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destruct" << std::endl;
}

Dog::Dog(const Dog &dup)
{
	*this = dup;
}

Dog &Dog::operator=(const Dog &dup)
{
	if (this != &dup) {}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "AAHR WGAH" << std::endl;
}
