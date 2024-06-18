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
	int imin = std::numeric_limits<int>::min();
	int	imax = std::numeric_limits<int>::max();

	float fmin = std::numeric_limits<float>::min();
	float fmax = std::numeric_limits<float>::max();

	double dmin = std::numeric_limits<double>::min();
	double dmax = std::numeric_limits<double>::max();
	
	int		INT = ft_stoi(literal);
	long 	LONG =  ft_stol(literal);
	float	FLOAT = ft_stof(literal);
	double	DOUBLE = ft_stod(literal);

	std::cout << "fmin =" << fmin << "\nfmax= "<< fmax << std::endl;
	std::cout << "dmin =" << dmin << "\ndmax= "<< dmax << std::endl;

	if (isInt(literal)) //INT
	{
		if (INT < 0 || INT > 255)									//////////
			std::cout << "char: impossible" << std::endl;					//
		else if(isprint(INT))												//
			std::cout << "char: " << static_cast<char>(INT) << std::endl;	// CHAR
		else																//
			std::cout << "char: Non displayable" << std::endl;		//////////
		if (LONG < imin || LONG > imax)					//////////
			std::cout << "int: impossible" << std::endl;		//
		else													// INT
			std::cout << "int: " << INT << std::endl;	//////////
		if (LONG <= fmin || LONG >= fmax)											//////////
			std::cout << "float: impossible" << std::endl;									//
		else																				//FLOAT
			std::cout << "float: " << static_cast<float >(LONG) << ".0f" << std::endl;////////
		std::cout << "double: " << static_cast<double>(INT) << ".0" << std::endl;	
	}
	if (isFloat(literal)) //FLOAT
	{
		if (INT < 0 || INT > 255)									//////////
			std::cout << "char: impossible" << std::endl;					//
		else if(isprint(INT))												//
			std::cout << "char: " << static_cast<char>(FLOAT) << std::endl;	// CHAR
		else																//
			std::cout << "char: Non displayable" << std::endl;		//////////
		if (LONG < imin || LONG > imax)									//////////
			std::cout << "int: impossible" << std::endl;						//
		else																	// INT
			std::cout << "int: " << static_cast<int>(FLOAT) << std::endl;	//////
		if (LONG <= fmin || LONG >= fmax)								//////////
			std::cout << "float: impossible" << std::endl;						//
		else																	//FLOAT
			std::cout << "float: " << FLOAT << "f" << std::endl;		//////////
		std::cout << "double: " << std::setprecision(9) << static_cast<double>(FLOAT) << std::endl;
	}
	if (isDouble(literal)) //DOUBLE
	{
		if (INT < 0 || INT > 255)										//////////
			std::cout << "char: impossible" << std::endl;						//
		else if(isprint(INT))													//
			std::cout << "char: " << static_cast<char>(DOUBLE) << std::endl;	// CHAR
		else																	//
			std::cout << "char: Non displayable" << std::endl;			//////////
		if (LONG < imin || LONG > imax)										//////////
			std::cout << "int: impossible" << std::endl;							//
		else																		// INT
			std::cout << "int: " << static_cast<int>(DOUBLE) << std::endl;	//////////
		if (LONG <= fmin || LONG >= fmax)											//////////
			std::cout << "float: impossible" << std::endl;									//
		else																				//FLOAT
			std::cout << "float: " << static_cast<float>(DOUBLE) << "f" << std::endl;	//////
		if (DOUBLE < dmin || DOUBLE > dmax)
			std::cout << "double: impossible" << std::endl;
		else
			std::cout << "double: "<< std::setprecision(9) << DOUBLE << std::endl;
	}
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
