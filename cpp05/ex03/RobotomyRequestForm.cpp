#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	_target = "huh";
	std::cout << GREEN "Shrubbery Construct" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	_target = target;
	std::cout << GREEN "Shrubbery Target Construct" RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << YELO "Shrubbery Destruct" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &dup)
{
	*this = dup;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &dup)
{
	if (this != &dup) 
	{
		_target = dup._target;
	}
	return *this;
}

void	RobotomyRequestForm::doStuff() const
{
	std::cout << BLUE "*some drilling noises*" RESET << std::endl;

	std::srand(std::time(0));
	int random = std::rand() % 2;
	if (random == 1)
		std::cout << _target << " has been robotomized succesfully." << std::endl;
	else
		std::cout << "Robotomy has failed." << std::endl;
}

AForm*	RobotomyRequestForm::clown()
{
	return (new RobotomyRequestForm(*this));
}

void		RobotomyRequestForm::setTarget(std::string target)
{
	_target = target;
}
