#include "Fixed.hpp"
#include <iostream>

int	main (void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	Fixed c(2);
	Fixed d(0);
	Fixed e(4);
	std::cout << "TESTING 2 and 4" << std::endl;
	std::cout << "+   " << c + d << std::endl;
	std::cout << "-   " << c - d << std::endl;
	std::cout << "*   " << c * d << std::endl;
	std::cout << "/   " << c / d << std::endl;
	if (c < d)
		std::cout << "<" << std::endl;
	if (d > c)
		std::cout << ">" << std::endl;
	if ((d <= e) && (c <= d))
		std::cout << "<=" << std::endl;
	if ((d >= e) && (d >= c))
		std::cout << ">=" << std::endl;
	if (d == e)
		std::cout << "==" << std::endl;
	if (c != d)
		std::cout << "!=" << std::endl;
	std::cout << "before --   " << c << std::endl;
	std::cout << "pre --   " << --c << std::endl;
	std::cout << "post --   " << c-- << std::endl;
	std::cout << "after --   " << c << std::endl;
	std::cout << "before ++   " << e << std::endl;
	std::cout << "pre ++   " << ++e << std::endl;
	std::cout << "post ++   " << e++ << std::endl;
	std::cout << "after ++   " << e << std::endl;

	std::cout << "max   " << Fixed::max(d, c) << std::endl;
	std::cout << "min   " << Fixed::min(d, c) << std::endl;

	return (0);
}
