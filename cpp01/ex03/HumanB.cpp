#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &arme)
{
	_arme = &arme;
}
void	HumanB::attack()
{
	if (!_arme)
		std::cout << _name << " attacks with their bare fists... impressive" << std::endl;
	else
		std::cout << _name << " attacks with their weapon " << _arme->getType() << std::endl;
}
