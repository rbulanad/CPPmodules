#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	protected:
	std::string	_name;
	int			hp;
	int			ep;
	int			ad;
	public:
	ClapTrap(std::string name);
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap &dup);
	ClapTrap &operator=(const ClapTrap &dup);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
