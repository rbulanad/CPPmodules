#include "Zombie.hpp"

int main(void)
{
	int	N = 5;
	Zombie *firstZomb = zombieHorde(N, "Bobert");
	for (int y = 0; y < N; y++)
		firstZomb[y].announce();
	delete[] firstZomb;
	return (0);
}
