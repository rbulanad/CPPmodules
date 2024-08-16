#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"
# define CYAN	"\e[1;36m"
# define MAG	"\e[1;35m"

# include <iostream>
# include <map>
# include <fstream>
# include <sstream>
# include <algorithm>

class	BitcoinExchange
{
	private:
	std::string	_first;
	float		_second;
	public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &dup);
	BitcoinExchange &operator=(const BitcoinExchange &dup);

	//functions

	void		setFirst(std::string s);
	void		setSecond(float f);
	std::string getFirst();
	float 		getSecond();
	void		FillData(std::map <std::string, float> &datab);
	void		InputParse(std::string filename, std::map <std::string, float> &datab);
	void		SubParse(std::string line, std::map <std::string, float> &datab);
	void		DataParse(std::string line);

	//exceptions
	class	OpenError: public std::exception
	{
		public:
			const char*	what() const throw()
			{
				return (RED "Error while opening file." RESET);
			}
	};
	class	EmptyFile: public std::exception
	{
		public:
			const char*	what() const throw()
			{
				return (RED "File is empty." RESET);
			}
	};
};

int		ft_stoi(std::string & s);
float	ft_stof(std::string & s);

#endif
