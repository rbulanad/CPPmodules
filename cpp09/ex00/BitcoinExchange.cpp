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
	if (this != &dup) {
		this->_first = dup._first;
		this->_second = dup._second;
		}
	return *this;
}

void	BitcoinExchange::setFirst(std::string s)
{
	_first = s;
}

void	BitcoinExchange::setSecond(float f)
{
	_second = f;
}

std::string BitcoinExchange::getFirst()
{
	return _first;
}


float BitcoinExchange::getSecond()
{
	return _second;
}

void	BitcoinExchange::InputParse(std::string file)
{
	std::ifstream input;
	std::string line;

	input.open(file.c_str());
	if (input.is_open())
	{
		std::getline(input, line); //skip first line
		while (std::getline(input, line))
		{
			//std::cout << line << std::endl;
			SubParse(line);
		}
		input.close();
	}
	else
		throw (BitcoinExchange::OpenError());
}

void	BitcoinExchange::SubParse(std::string line) //Need to mark lines as unprocessable if error is found
{
	size_t pipe = line.find('|'); 
	if (pipe == std::string::npos) //check for pipe presence
	{
		std::cout << RED "Error: Invalid line format" RESET << std::endl;
		return ;
	}
	if (line.size() < 13) //check for minimal line length
	{
		std::cout << RED "Error: Invalid line format" RESET << std::endl;
		return ;
	}
	if (line[pipe - 1] != ' ') //check for space before pipe
	{
		std::cout << RED "Error: Invalid line format" RESET << std::endl;
		return ;
	}
	if (line[pipe + 1] != ' ') //check for space after pipe
	{
		std::cout << RED "Error: Invalid line format" RESET << std::endl;
		return ;
	}
	std::string sousstr = line.substr(pipe + 2, line.size()); //isolate value for more parsing boiiiiiiii
	int i = 0;
	if (sousstr[0] == '-') //check for negatives
	{
		std::cout << RED "Error: value between 0 and 1000 only" RESET << std::endl;
		return ;
	}
	if (sousstr[0] == '+') //skip '+' if present
		i++;
	int	dot = 0;
	for (; sousstr[i]; i++) //check value is made of only digits and '.' 
	{
		if (!(isdigit(sousstr[i])))
		{
			if (sousstr[i] == '.' && dot == 0) //check for dot and dot amount
				dot++;
			else
			{
				std::cout << RED "Error: Invalid value format" RESET << std::endl;
				return ;
			}
		}
	}
	if (ft_stof(sousstr) > 1000)
	{
		std::cout << RED "Error: value between 0 and 1000 only" RESET << std::endl;
		return ;
	}
}

void	BitcoinExchange::FillData(std::map<std::string, float> &datab)
{
	std::ifstream file;
	std::string line;
(void)datab;
	file.open("data.csv");
	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			std::cout << line << std::endl;
			DataParse(line); //PARSE DATA.CSV
			datab[BitcoinExchange::getFirst()] = BitcoinExchange::getSecond();
		}
		std::cout << BitcoinExchange::getFirst() << std::endl;
		std::cout << BitcoinExchange::getSecond() << std::endl;
		file.close();
	}
	else
		throw (BitcoinExchange::OpenError());
}

void	BitcoinExchange::DataParse(std::string line)
{
	size_t comma = line.find(','); 
	if (comma == std::string::npos) //check for comma presence
	{
		std::cout << RED "Error: Invalid line format" RESET << std::endl;
		return ;
	}
	if (line.size() < 11) //check for minimal line length
	{
		std::cout << RED "Error: Invalid line format" RESET << std::endl;
		return ;
	}
	std::string sousstr = line.substr(comma + 1, line.size()); //isolate exrate for more parsing boiiiiiiii
	int i = 0;
	if (sousstr[0] == '-') //check for negatives
	{
		std::cout << RED "Error: Positive exchange rate only" RESET << std::endl;
		return ;
	}
	if (sousstr[0] == '+') //skip '+' if present
		i++;
	int	dot = 0;
	for (; sousstr[i]; i++) //check exrate is made of only digits and '.' 
	{
		if (!(isdigit(sousstr[i])))
		{
			if (sousstr[i] == '.' && dot == 0) //check for dot and dot amount
				dot++;
			else
			{
				std::cout << RED "Error: Invalid exchange rate format" RESET << std::endl;
				return ;
			}
		}
	}
	BitcoinExchange::setFirst(line.substr(0, comma));
	BitcoinExchange::setSecond(ft_stof(sousstr));
}

int ft_stoi(std::string & s)
{
    int i;
    std::istringstream(s) >> i;
    return i;
}

float ft_stof(std::string & s)
{
    float f;
    std::istringstream(s) >> f;
    return f;
}
