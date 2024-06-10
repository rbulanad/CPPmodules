#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	_target = "huh";
	std::cout << GREEN "Shrubbery Construct" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
	std::cout << GREEN "Shrubbery Target Construct" RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << YELO "Shrubbery Destruct" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &dup)
{
	*this = dup;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &dup)
{
	if (this != &dup) 
	{
		_target = dup._target;
	}
	return *this;
}

void	PresidentialPardonForm::doStuff() const
{
	std::cout << _target << " has been pardoned by " << WHIT "Zaphod Beeblebrox" RESET << "." << std::endl;
}
