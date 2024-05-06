#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *test = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		test[i].setName(name);
		test[i++].announce();
	}
	
	return (test);
}
