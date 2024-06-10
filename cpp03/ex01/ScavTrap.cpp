#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("GEGEHI")
{
	std::cout << "ScavTrap default constructor" << std::endl;
	hp = 100, ep = 50, ad = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hp = 100, ep = 50, ad = 20;
	std::cout << "ScavTrap constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &dup)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = dup;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &dup)
{
	if (this != &dup)
	{
		this->_name = dup._name;
		this->hp = dup.hp;
		this->ep = dup.ep;
		this->ad = dup.ad;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (hp < 1) std::cout << "Scav Not enough HP" << std::endl;
	else if (ep < 1) std::cout << "Scav Not enough energy" << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
		ep--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate Keeper mode." << std::endl;
}
