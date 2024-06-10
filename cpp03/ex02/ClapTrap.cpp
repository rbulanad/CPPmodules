#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	hp = 10, ep = 10, ad = 0;
	std::cout << "ClapTrap Constructor" << std::endl;
}

ClapTrap::ClapTrap()
{
	_name = "JEHOGIFJ";
	std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &dup)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = dup;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &dup)
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

void ClapTrap::attack(const std::string &target)
{
	if (hp < 1) std::cout << "Not enough HP" << std::endl;
	else if (ep < 1) std::cout << "Not enough energy" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
		ep--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	if ((hp - amount) < 0) hp = 0;
	else hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp < 1) std::cout << "Not enough HP" << std::endl;
	else if (ep < 1) std::cout << "Not enough energy" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " repairs itself and gains " << amount << " HP back!" << std::endl;
		ep--;
		hp += amount;
	}
}
