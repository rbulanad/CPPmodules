#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "stu pedasso" << std::endl;
		return (1);
	}
	std::list<std::string> datab; //init database list
	try {
		Parse(argv[1]);
		FillData(datab);
	}
	catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}
	return (0);
}
