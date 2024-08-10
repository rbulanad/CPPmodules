#include "BitcoinExchange.hpp"
#include <iomanip>

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
		haha.FillData(datab);
		haha.InputParse(argv[1], datab);
	}
	catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}
	/*for(std::map<std::string, float>::iterator it=datab.begin(); it!=datab.end(); ++it)
	{
		std::cout << it->first << std::setprecision(7) << "," << it->second << std::setprecision(7) << std::endl;
	}*/
	return (0);
}
