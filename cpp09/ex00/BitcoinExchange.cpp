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

void	parse(std::string filename)
{

}
