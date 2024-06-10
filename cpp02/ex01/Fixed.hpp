#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:

	int	data;
	static const int bits = 8;

	public:
	Fixed();
	~Fixed();
	Fixed(const int i);
	Fixed(const float y);
	Fixed(const Fixed &dup);
	Fixed &operator=(const Fixed &dup);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);
#endif
