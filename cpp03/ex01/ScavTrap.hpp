#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	ScavTrap: public ClapTrap
{
	private:
	public:
	ScavTrap(std::string name);
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap &dup);
	ScavTrap &operator=(const ScavTrap &dup);
	void	attack(const std::string& target);
	void	guardGate();
};

#endif
