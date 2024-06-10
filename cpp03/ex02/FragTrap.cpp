#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("OHOHOH")
{
	hp = 100, ep = 100, ad = 30;
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	hp = 100, ep = 100, ad = 30;
	std::cout << "FragTrap constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &dup)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = dup;
}

FragTrap &FragTrap::operator=(const FragTrap &dup)
{
	if (this != &dup)
	{
		this->_name = dup._name;
		this->hp = dup.hp;
		this->ep = dup.ep;
		this->ad = dup.ad;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Up HIgh!" << std::endl;
}
