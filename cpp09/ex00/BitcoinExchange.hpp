#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"
# define CYAN	"\e[1;36m"
# define MAG	"\e[1;35m"

# include <iostream>
# include <list>
# include <fstream>
# include <algorithm>

class	BitcoinExchange
{
	private:
	public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &dup);
	BitcoinExchange &operator=(const BitcoinExchange &dup);

	class	OpenError: public std::exception
	{
		public:
			const char*	what() const throw()
			{
				return (RED "Error while opening file." RESET);
			}
	};
	class	InvalidFormat: public std::exception
	{
		public:
			const char*	what() const throw()
			{
				return (RED "Error while opening file." RESET);
			}
	};
};

void	Parse(std::string filename);
void	FillData(std::list<std::string> &datab);

#endif
