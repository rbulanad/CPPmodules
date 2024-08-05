#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &dup)
{
	*this = dup;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &dup)
{
	if (this != &dup) {}
	return *this;
}

void	Parse(std::string file)
{
	std::ifstream input;
	std::string line;

	input.open(file.c_str());
	if (input.is_open())
	{
		std::getline(input, line); //skip first line
		while (std::getline(input, line))
		{
			if (line.find('|') == std::npos::string)
				throw (BitcoinExchange::InvalidFormat());
		}
		input.close();
	}
	else
		throw (BitcoinExchange::OpenError());
}

void	FillData(std::list<std::string> &datab)
{
	std::ifstream file;
	std::string line;

	file.open("data.csv");
	if (file.is_open())
	{
		while (std::getline(file, line)) //fill database
			datab.push_back(line);
		file.close();
	}
	else
		throw (BitcoinExchange::OpenError());
}
