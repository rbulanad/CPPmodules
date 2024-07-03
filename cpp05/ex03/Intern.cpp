#include "Intern.hpp"

Intern::Intern()
{
	std::cout << GREEN "Intern Construct" RESET << std::endl;
	_tab[0] = new ShrubberyCreationForm();
	_tab[1] = new RobotomyRequestForm();
	_tab[2] = new PresidentialPardonForm();
}

Intern::~Intern()
{
	std::cout << YELO "Intern Destruct" RESET << std::endl;
	delete _tab[0];
	delete _tab[1];
	delete _tab[2];
}

Intern::Intern(const Intern &dup)
{
	std::cout << YELO "Intern Copy Construct" RESET << std::endl;
	*this = dup;
}

Intern &Intern::operator=(const Intern &dup)
{
	if (this != &dup) {
		for (int i = 0; i < 3; i++)
			this->_tab[i] = dup._tab[i];
	}
	return *this;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (_tab[i]->getName() == name)
		{
			_tab[i]->setTarget(target);
			return _tab[i]->clown();
		}
	}
	throw(Intern::InvalidName());
	return (NULL);
}
