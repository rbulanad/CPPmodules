#ifndef HARL_HPP
#define HARL_HPP

#define RED	"\e[1;31m"
#define RESET	"\e[0m"

#include <string>
#include <iostream>

class	Harl
{
	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	public:
	Harl();
	~Harl();

	void	complain(std::string level);
};

#endif
