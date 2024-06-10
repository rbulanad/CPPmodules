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
	Fixed	&operator = (const Fixed &dup);
	Fixed	&operator ++ ();
	Fixed	&operator -- ();
	Fixed	operator ++ (int);
	Fixed	operator -- (int);
	Fixed	operator + (const Fixed &one);
	Fixed	operator - (const Fixed &one);
	Fixed	operator * (const Fixed &one);
	Fixed	operator / (const Fixed &one);
	bool	operator < (const Fixed &dup);
	bool	operator > (const Fixed &dup);
	bool	operator <= (const Fixed &dup);
	bool	operator >= (const Fixed &dup);
	bool	operator == (const Fixed &dup);
	bool	operator != (const Fixed &dup);
	static Fixed	max(Fixed &one, Fixed &two);
	static Fixed	max(const Fixed &one, const Fixed &two);
	static Fixed	min(Fixed &one, Fixed &two);
	static Fixed	min(const Fixed &one, const Fixed &two);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);
#endif
