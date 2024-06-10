#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	data = 0;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	data = i << bits;
}

Fixed::Fixed(const float y)
{
	std::cout << "Float constructor called" << std::endl;
	data = roundf((y * (1 << bits)));
}


Fixed::Fixed(const Fixed &dup)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = dup;
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
	return data;
}
	
void	Fixed::setRawBits(int const raw)
{
	data = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(data) / static_cast<float>(1 << bits));
}

int		Fixed::toInt(void) const
{
	return (data >> bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
	out << c.toFloat();
	return out;
}
