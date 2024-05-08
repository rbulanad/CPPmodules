#ifndef	HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

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
