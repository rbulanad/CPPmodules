#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	data = 0;
}

Fixed::Fixed(const Fixed &dup)
{
	std::cout << "Copy constructor called" << std::endl;
	data = dup.getRawBits();
}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

Fixed &Fixed::operator=(const Fixed &dup)
{
	if (this != &dup)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		data = dup.getRawBits();
	}
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return data;
}
	
void	Fixed::setRawBits(int const raw)
{
	data = raw;
}
