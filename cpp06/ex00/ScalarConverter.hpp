#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <cctype>
# include <cstdlib>
# include <iomanip>
# include <limits>

# define RESET	"\e[0m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"
# define RED	"\e[1;31m"

class	ScalarConverter
{
	private:
	bool	_isInt;
	bool	_isFloat;
	bool	_isDouble;
	bool	_isChar;
	public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &dup);
	ScalarConverter &operator=(const ScalarConverter &dup);

	//funcs
	void		convert(std::string literal);
	void		printer(std::string literal);
	void		isInt(std::string literal);
	void		isFloat(std::string literal);
	void		isDouble(std::string literal);
	void		isChar(std::string literal);
	int			ft_stoi(std::string & literal);
	float		ft_stof(std::string & literal);
	double		ft_stod(std::string & literal);

	//exceptions
	class	Syntax : public std::exception
	{
		public:
		const char*	what() const throw()
		{
			return (RED "IMPOSSIBLE" RESET);
		}
	};
};

#endif
