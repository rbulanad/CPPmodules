#include "Zombie.hpp"

int main(void)
{
	Zombie *test = newZombie("Robert");

	randomChump("Bobert");
	test->announce();
	delete(test);
	return 0;
}
