#ifndef	HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanB
{
	private:
	std::string	_name;
	Weapon		*_arme;

	public:
	HumanB(std::string name);
	~HumanB();
	
	void	setWeapon(Weapon &arme);
	void	attack();
};

#endif
