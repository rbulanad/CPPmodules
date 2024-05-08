#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "warning" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "error" << std::endl;
}

void	Harl::complain(std::string level)
{
	(void)level;

	void	(Harl::*deb)() = &Harl::debug;

	void	(Harl::*inf)() = &Harl::info;

	void	(Harl::*war)() = &Harl::warning;

	void	(Harl::*err)() = &Harl::error;

	std::cout << "level = " << getFunc(deb) << std::endl;
	std::cout << "level = " << inf << std::endl;
	std::cout << "level = " << war << std::endl;
	std::cout << "level = " << err << std::endl;
}
