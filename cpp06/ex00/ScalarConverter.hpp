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

	public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &dup);
	ScalarConverter &operator=(const ScalarConverter &dup);

	//funcs
	static void		convert(std::string literal);
	static void		printer(std::string literal);
	static bool		isPseudo(std::string literal);
	static bool		isInt(std::string literal);
	static bool		isFloat(std::string literal);
	static bool		isDouble(std::string literal);
	static bool		isChar(std::string literal);
	static int		ft_stoi(std::string & literal);
	static long		ft_stol(std::string & literal);
	static float	ft_stof(std::string & literal);
	static double	ft_stod(std::string & literal);
};

#endif
