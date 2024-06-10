#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default Wrong animal construct" << std::endl;
	_type = "wrong ?";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Wrong animal construct" << std::endl;
	_type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destruct" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &dup)
{
	*this = dup;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &dup)
{
	if (this != &dup) 
		this->_type = dup._type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return _type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "wrong huh?" << std::endl;
}

