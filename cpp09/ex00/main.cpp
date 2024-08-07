#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "stu pedasso" << std::endl;
		return (1);
	}
	BitcoinExchange haha;
	std::map<std::string, float> datab; //init database list
	try {
		haha.InputParse(argv[1]);
		haha.FillData(datab);
	}
	catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}
	/*for(std::map<std::string, float>::iterator it=datab.begin(); it!=datab.end(); ++it)
	{
		std::cout << "FIRST = " << it->first << std::endl;
		std::cout << "SECOND = " << it->second << std::endl;
	}*/
	return (0);
}
