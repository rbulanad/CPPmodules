#include "ScavTrap.hpp"

int	main()
{
	ClapTrap Clap("Jimm");
	ScavTrap Scav("Boby");
	std::cout << "--------" << std::endl;

	Clap.attack("Theweeknd");
	Scav.attack("JAson Derulo");
	std::cout << "--------" << std::endl;
	Scav.takeDamage(2);
	Scav.beRepaired(2);
	Scav.guardGate();
	std::cout << "--------" << std::endl;

	return (0);
}
