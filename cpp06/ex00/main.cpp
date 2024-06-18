#include <iostream>
#include "ScalarConverter.hpp"

int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
	}
	else if (argc > 2)
		std::cout << "Too many arguments" << std::endl;
	else
		std::cout << "Need one argument" << std::endl;

	return (0);
}
