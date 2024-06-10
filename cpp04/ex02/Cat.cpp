#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat")
{
	std::cout << "Cat construct" << std::endl;
	_brain = new Brain();
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destruct" << std::endl;
}

Cat::Cat(const Cat &dup): AAnimal(dup)
{
	std::cout << "Cat copy construct" << std::endl;
	_brain = new Brain(*dup._brain);
}

Cat &Cat::operator=(const Cat &dup)
{
	if (this != &dup)
	{
		delete _brain;
		_brain = new Brain(*dup._brain);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "meow miaou" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return _brain;
}
