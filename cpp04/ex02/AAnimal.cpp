#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default AAnimal construct" << std::endl;
	_type = "?";
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "AAnimal construct" << std::endl;
	_type = type;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destruct" << std::endl;
}

AAnimal::AAnimal(const AAnimal &dup)
{
	*this = dup;
}

AAnimal &AAnimal::operator=(const AAnimal &dup)
{
	if (this != &dup) 
		_type = dup._type;
	return *this;
}

std::string AAnimal::getType() const
{
	return _type;
}

void	AAnimal::makeSound() const
{
	std::cout << "huh?" << std::endl;
}

Brain	*AAnimal::getBrain() const
{
	return (NULL);
}
