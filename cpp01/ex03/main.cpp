#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);

	bob.attack();
	club.setType("some other type of club");
	bob.attack();


	Weapon clubb = Weapon("crude spiked club");
	
	HumanB jim("Jim");
	jim.attack(); //no weapon atk
	jim.setWeapon(clubb);
	jim.attack();
	clubb.setType("some other type of club");
	jim.attack();


	return (0);
}
