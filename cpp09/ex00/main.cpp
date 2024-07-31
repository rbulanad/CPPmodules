#include "BitcoinExchange.hpp"
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "stu pedasso" << std::endl;
		return (1);
	}
	parse(argv[1]);
	std::ifstream file;
	file.open("data.csv");
	std::string line;
	std::list<std::string> db;
	if (file.is_open())
	{
		while (std::getline(file, line))
			db.push_back(line);
		file.close();
	}
	else
	{
		std::cout << "Incorrect file, stoopid" << std::endl;
		return (1);
	}
	return (0);
}
