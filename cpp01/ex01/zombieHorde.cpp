#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie *test = new Zombie[N];
	int i = 0;
	while (i < N)
		test[i++].setName(name);
	
	return (test);
}
