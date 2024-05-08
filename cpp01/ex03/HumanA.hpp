#ifndef	HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class	HumanA
{
	private:
	std::string	_name;
	Weapon		&_arme;

	public:
	HumanA(std::string name, Weapon &arme);
	~HumanA();
	
	void	attack();
};

#endif
