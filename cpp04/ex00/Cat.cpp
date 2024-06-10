#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Default Cat construct" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destruct" << std::endl;
}

Cat::Cat(const Cat &dup)
{
	*this = dup;
}

Cat &Cat::operator=(const Cat &dup)
{
	if (this != &dup) {}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "meow miaou" << std::endl;
}
