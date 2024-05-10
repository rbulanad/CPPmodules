#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "DEBUG: Would you kindly hand me the salt, please ?" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: Quickly ! This dish requires a healthy dosage of salt." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: This is pepper you imbecile ! I. need. the. " << RED "SALT !" RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: *violently throws bowl of soup in the air and flips table while standing up, puts hands on chest and tightly grabs shirt*\n" << RED "FUCK !\n" RESET "*rips shirt*" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	tabLVL[4] =
	{
		"uno",
		"dos",
		"tres",
		"quatro"
	};
	void	(Harl::*tabPTR[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (tabLVL[i] == level)
		{
			(this->*tabPTR[i])();
			return ;
		}
	}
	std::cout << "eats soup" << std::endl;
}
