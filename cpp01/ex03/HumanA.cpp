#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &arme) : _arme(arme)
{
	_name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their weapon " << _arme.getType() << std::endl;
}
