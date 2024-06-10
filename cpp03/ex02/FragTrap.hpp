#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	FragTrap: public ClapTrap
{
	private:
	std::string	_name;
	int			hp;
	int			ep;
	int			ad;
	public:
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &dup);
	FragTrap &operator=(const FragTrap &dup);
	void	highFivesGuys(void);
};

#endif
