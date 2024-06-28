#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << GREEN "Scalar Construct" RESET << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << YELO "Scalar Destruct" RESET << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &dup)
{
	std::cout << GREEN "Scalar Copy Construct" RESET << std::endl;
	*this = dup;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &dup)
{
	if (this != &dup) {}
	return *this;
}

int	ScalarConverter::ft_stoi(std::string & literal)
{
	int i;
    std::istringstream(literal) >> i;
    return (i);
}

long	ScalarConverter::ft_stol(std::string & literal)
{
	long l;
    std::istringstream(literal) >> l;
    return (l);
}

float	ScalarConverter::ft_stof(std::string & literal)
{
	float f;
	std::istringstream(literal) >> f;
	return (f);
}

double	ScalarConverter::ft_stod(std::string & literal)
{
	double d;
	std::istringstream(literal) >> d;
	return (d);
}
void	ScalarConverter::convert(std::string literal)
{
	printer(literal);
}

void	ScalarConverter::printer(std::string literal)
{
	int imin = -std::numeric_limits<int>::max() - 1;
	int	imax = std::numeric_limits<int>::max();

	float fmin = -std::numeric_limits<float>::max() - 1;
	float fmax = std::numeric_limits<float>::max();

	double dmin = -std::numeric_limits<double>::max() - 1;
	double dmax = std::numeric_limits<double>::max();
	
	int		INT = ft_stoi(literal);
	long 	LONG =  ft_stol(literal);
	float	FLOAT = ft_stof(literal);
	double	DOUBLE = ft_stod(literal);

	if (isPseudo(literal))
	{
		int i = literal.length() - 1;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (literal[i] != 'f')
		{
			std::cout << "float: " << literal << 'f' << std::endl;
			std::cout << "double: " << literal << std::endl;
		}
		else
		{
			if (literal[i - 1] == 'f' || literal == "nanf")
			{
				std::cout << "float: " << literal << std::endl;
				std::cout << "double: " << literal.erase(i) << std::endl;
			}
			else
			{
				std::cout << "float: " << literal << 'f' << std::endl;
				std::cout << "double: " << literal << std::endl;
			}
		}
	}
	else if (isChar(literal))
	{
		if (literal[0] < 0 || literal[0] > 127)
			std::cout << "char: impossible" << std::endl;
		else if(isprint(literal[0]))
			std::cout << "char: " << literal << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
	}
	else if (isInt(literal)) //INT
	{
		if (INT < 0 || INT > 255)
			std::cout << "char: impossible" << std::endl;
		else if(isprint(INT))
			std::cout << "char: " << static_cast<char>(INT) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (LONG < imin || LONG > imax)	
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << INT << std::endl;
		if (FLOAT <= fmin || FLOAT >= fmax)
			std::cout << "float: impossible" << std::endl;
		else
			std::cout << "float: " << static_cast<float >(INT) << ".0f" << std::endl;
		if (DOUBLE <= dmin || DOUBLE >= dmax)
			std::cout << "double: impossible" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(INT) << ".0" << std::endl;	
	}
	else if (isFloat(literal)) //FLOAT
	{
		if (INT < 0 || INT > 255)
			std::cout << "char: impossible" << std::endl;
		else if(isprint(INT))
			std::cout << "char: " << static_cast<char>(FLOAT) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (LONG < imin || LONG > imax)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(FLOAT) << std::endl;
		if (FLOAT <= fmin || FLOAT >= fmax)
		{
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
		else
		{
			if (FLOAT == static_cast<int>(FLOAT))
				std::cout << "float: " << FLOAT << ".0f" << std::endl;
			else
				std::cout << "float: " << FLOAT << 'f' << std::endl;
			if (FLOAT == static_cast<int>(FLOAT))
				std::cout << "double: " << static_cast<double>(FLOAT) << ".0" << std::endl;
			else
				std::cout << "double: " << static_cast<double>(FLOAT) << std::endl;
		}
	}
	else if (isDouble(literal)) //DOUBLE
	{
		if (INT < 0 || INT > 255)
			std::cout << "char: impossible" << std::endl;
		else if(isprint(INT))
			std::cout << "char: " << static_cast<char>(DOUBLE) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (LONG < imin || LONG > imax)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(DOUBLE) << std::endl;
		if (FLOAT <= fmin || FLOAT >= fmax)
			std::cout << "float: impossible" << std::endl;
		else
		{
			if (DOUBLE == static_cast<int>(DOUBLE))
				std::cout << "float: " << static_cast<float>(DOUBLE) << ".0f" << std::endl;
			else
				std::cout << "float: " << static_cast<float>(DOUBLE) << 'f' << std::endl;
		}
		if (DOUBLE <= dmin || DOUBLE >= dmax)
			std::cout << "double: impossible" << std::endl;
		else
		{
			if (DOUBLE == static_cast<int>(DOUBLE))
				std::cout << "double: " << DOUBLE << ".0" << std::endl;
			else
				std::cout << "double: " << DOUBLE << std::endl;
		}
	}
	else
		std::cout << RED "Wrong argument" RESET << std::endl;
}

bool		ScalarConverter::isPseudo(std::string literal)
{
	if (literal == "-inf" || literal == "+inf" || literal == "-inff" || literal == "+inff" || literal == "nan" || literal == "nanf")
		return (true);
	return (false);
}

bool		ScalarConverter::isInt(std::string literal)
{
	int i = 0;
	if (literal.length() == 0)
		return (false);
	if (literal[0] == '-' || literal[0] == '+')
	{
		i++;
		if (!literal[i])
			return (false);
	}
	for (; literal[i]; i++)
	{
		if (!(isdigit(literal[i])))
			return (false);
	}
	return (true);
}

bool		ScalarConverter::isFloat(std::string literal)
{
	int i = 0;
	int	y = literal.length() - 1;
	if (literal[y] != 'f' || !isdigit(literal[y - 1]))
		return (false);
	if (literal[0] == '-' || literal[0] == '+')
	{
		i++;
		if (literal[i] == 'f')
			return (false);
	}
	int	dot = 0;
	for (; literal[i] != 'f'; i++)
	{
		if (!(isdigit(literal[i])))
		{
			if (literal[i] == '.' && dot == 0)
				dot++;
			else
				return (false);
		}
	}
	return (dot == 1);
}

bool		ScalarConverter::isDouble(std::string literal)
{
	int i = 0;
	int	y = literal.length() - 1;
	if (literal[y] == '.')
		return (false);
	if (literal[0] == '-' || literal[0] == '+')
		i++;	
	int	dot = 0;
	for (; literal[i]; i++)
	{
		if (!(isdigit(literal[i])))
		{
			if (literal[i] == '.' && dot == 0)
				dot++;
			else
				return (false);
		}
	}
	return (dot == 1);
}

bool	ScalarConverter::isChar(std::string literal)
{
	if (isInt(literal) || literal.length() > 1)
		return (false);
	if	(isprint(literal[0]))
		return (true);
	return (false);
}
