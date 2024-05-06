#include "Zombie.hpp"
#include <new>

Zombie*	newZombie(std::string name)
{
	Zombie* nouvo = new Zombie(name);
	return nouvo;
}
