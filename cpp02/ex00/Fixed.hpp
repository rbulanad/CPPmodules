#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed
{
	private:

	int	data;
	int const static bits;

	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &dup);
	Fixed &operator=(const Fixed &dup);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
