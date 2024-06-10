#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Wrong Cat")
{
	std::cout << "Default Wrong cat construct" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destruct" << std::endl;
}

WrongCat::WrongCat(const WrongCat &dup)
{
	*this = dup;
}

WrongCat &WrongCat::operator=(const WrongCat &dup)
{
	if (this != &dup) {}
	return *this;
}

std::string WrongCat::getType() const
{
	return _type;
}

void	WrongCat::makeSound() const
{
	std::cout << "meow miaou" << std::endl;
}
