#include "Weapon.hpp"
#include <string>

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}
const std::string & Weapon::getType() const
{
	return (_type);
}
