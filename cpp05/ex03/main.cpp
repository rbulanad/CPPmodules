#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		Bureaucrat	Jason(1 ,"Jasn");
		Intern	intern;
		AForm*	form;

		try {
			form = intern.makeForm("RobotomyRequestForm", "default");
			std::cout << "Intern created Robotomy form" << std::endl;
			Jason.signForm(*form);
			Jason.executeForm(*form);
			delete form;
		}
		catch (std::exception & err) {
			std::cerr << err.what() << std::endl;
		}
		return (0);
	}
	if (argc == 3)
	{
		Bureaucrat Jason(1, "Json");
		Intern intern;
		AForm *form;

		try {
			form = intern.makeForm(argv[1], argv[2]);
			std::cout << "Intern created " << form->getName() << std::endl;
			Jason.signForm(*form);
			Jason.executeForm(*form);
			delete form;
		}
		catch (std::exception & err) {
			std::cerr << err.what() << std::endl;
		}
		return (0);
	}
	std::cout << "Enter a valid form name and a target pweaze -><-" << std::endl;
	return (0);
}
