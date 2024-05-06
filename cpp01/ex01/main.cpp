#include "Zombie.hpp"

int main(void)
{
	Zombie *firstZomb = zombieHorde(6, "Bobert");
	delete[] firstZomb;
	return (0);
}
