#include "RPN.hpp"

int	main(int argc, char** argv)
{
	if (argc < 2 || argc > 2)
	{
		std::cerr << RED "Error: argc." RESET << std::endl;
		return (1);
	}
	try {
		Parse(argv[1]);
		Calcul(argv[1]);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}
	return (0);
}
