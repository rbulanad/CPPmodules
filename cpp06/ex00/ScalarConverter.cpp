#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << GREEN "Scalar Construct" RESET << std::endl;
	_isInt = false;
	_isFloat = false;
	_isDouble = false;
	_isChar = false;
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
	isInt(literal);
	isFloat(literal);
	isDouble(literal);
	isChar(literal);
	printer(literal);
}

void	ScalarConverter::printer(std::string literal)
{
	int imin = std::numeric_limits<int>::min();
	int	imax = std::numeric_limits<int>::max();

	float fmin = std::numeric_limits<float>::min();
	float fmax = std::numeric_limits<float>::max();

	double dmin = std::numeric_limits<double>::min();
	double dmax = std::numeric_limits<double>::max();
	
	if (_isInt) //INT
	{
		int		INT = ft_stoi(literal);
		long 	LONG =  std::atol(literal.c_str());
		std::cout << "fmin =" << fmin << "\nfmax= "<< fmax << std::endl;
		std::cout << "dmin =" << dmin << "\ndmax= "<< dmax << std::endl;
		if (INT < 0 || INT > 255)									//////////
			std::cout << "char: impossible" << std::endl;					//
		else if(isprint(INT))												//
			std::cout << "char: " << static_cast<char>(INT) << std::endl;	// CHAR
		else																//
			std::cout << "char: Non displayable" << std::endl;		//////////
		if (LONG < imin || LONG > imax)					//////////
			std::cout << "int: impossible" << std::endl;		//
		else													// INT
			std::cout << "int: " << INT << std::endl;	/////////
		if (LONG <= fmin || LONG >= fmax)
			std::cout << "float: impossible" << std::endl;
		else
			std::cout << "float: " << static_cast<float >(LONG) << ".0f" << std::endl;
		//std::cout << "double: " << static_cast<double>(INT) << ".0" << std::endl;	
	}
	if (_isFloat) //FLOAT
	{
		float	FLOAT = ft_stof(literal);
		if (isprint(FLOAT))
			std::cout << "char: " << static_cast<char>(FLOAT) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(FLOAT) << std::endl;
		std::cout << "float: " << FLOAT << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(FLOAT) << std::endl;
	}
	if (_isDouble) //DOUBLE
	{
		double	DOUBLE = ft_stod(literal);
		if (isprint(DOUBLE))
			std::cout << "char: " << static_cast<char>(DOUBLE) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(DOUBLE) << std::endl;
		std::cout << "float: " << static_cast<float>(DOUBLE) << "f" << std::endl;
		std::cout << "double: " << std::setprecision(8) << DOUBLE << std::endl;
	}
}

void		ScalarConverter::isInt(std::string literal)
{
	int i = 0;
	if (literal.length() == 0)
		return ;
	if (literal[0] == '-' || literal[0] == '+')
	{
		i++;
		if (!literal[i])
		{
			_isInt = false;
			return ;
		}
	}
	for (; literal[i]; i++)
	{
		if (!(isdigit(literal[i])))
		{
			_isInt = false;
			return ;
		}
	}
	_isInt = true;
}

void		ScalarConverter::isFloat(std::string literal)
{
	int i = 0;
	int	y = literal.length() - 1;
	if (literal[y] != 'f' || !isdigit(literal[y - 1]))
	{
		_isFloat = false;
		return ;
	}
	if (literal[0] == '-' || literal[0] == '+')
	{
		i++;
		if (literal[i] == 'f')
		{
			_isFloat = false;
			return ;
		}
	}
	int	dot = 0;
	for (; literal[i] != 'f'; i++)
	{
		if (!(isdigit(literal[i])))
		{
			if (literal[i] == '.' && dot == 0)
				dot++;
			else
			{
				_isFloat = false;
				return ;
			}
		}
	}
	_isFloat = (dot == 1);
}

void		ScalarConverter::isDouble(std::string literal)
{
	int i = 0;
	int	y = literal.length() - 1;
	if (literal[y] == '.')
	{
		_isDouble = false;
		return ;
	}
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
			{
				_isDouble = false;
				return ;
			}
		}
	}
	_isDouble = (dot == 1);
}

void	ScalarConverter::isChar(std::string literal)
{
	if (_isInt || literal.length() > 1)
		return ;
	if	(isprint(literal[0]))
		_isChar = true;
}
