#include "ClapTrap.hpp"

int	main()
{
	ClapTrap bozo("Bozo");
	std::cout << "------" << std::endl;
	bozo.attack("50cent");
	bozo.takeDamage(9);
	bozo.beRepaired(1);
	bozo.attack("50cent");
	bozo.takeDamage(9);
	std::cout << "Trying to attack:" << std::endl;
	bozo.attack("50cent");
	std::cout << "Trying to repair self:" << std::endl;
	bozo.beRepaired(1);
	std::cout << "------" << std::endl;

	return (0);
}
