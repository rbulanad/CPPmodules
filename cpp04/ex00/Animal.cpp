#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal construct" << std::endl;
	_type = "?";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal construct" << std::endl;
	_type = type;
}

Animal::~Animal()
{
	std::cout << "Animal destruct" << std::endl;
}

Animal::Animal(const Animal &dup)
{
	*this = dup;
}

Animal &Animal::operator=(const Animal &dup)
{
	if (this != &dup) 
		this->_type = dup._type;
	return *this;
}

std::string Animal::getType() const
{
	return _type;
}

void	Animal::makeSound() const
{
	std::cout << "huh?" << std::endl;
}

