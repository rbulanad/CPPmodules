#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <list>

class	BitcoinExchange
{
	private:
	public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &dup);
	BitcoinExchange &operator=(const BitcoinExchange &dup);
};

void	parse(std::string filename);

#endif
