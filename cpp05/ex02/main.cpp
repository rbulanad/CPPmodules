#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	try 
	{
		std::cout << WHIT "///////////////SHRUBBERY TEST\\\\\\\\\\\\\\\\" RESET << std::endl;
		Bureaucrat	test(140, "Trevor");
		AForm		*form = new ShrubberyCreationForm("hoho");

		std::cout << "" << std::endl;
		test.executeForm(*form);
		std::cout << *form << std::endl;
		test.signForm(*form);
		std::cout << *form << std::endl;
		test.executeForm(*form);
		test.incr(10);
		test.executeForm(*form);
		std::cout << "" << std::endl;
		
		delete form;
	}
	catch (std::exception & err) 
	{
		std::cerr << err.what() << std::endl;
	}
	try
	{
		std::cout << WHIT "\n////////////////PRESIDENTIAL TEST\\\\\\\\\\\\\\\\" RESET << std::endl;
		Bureaucrat	test(1, "Jonathan Johnny John Johnson the Third Jr.");
		AForm		*form = new PresidentialPardonForm("Bob");

		std::cout << "" << std::endl;
		test.signForm(*form);
		test.executeForm(*form);
		std::cout << "" << std::endl;

		delete form;
	}
	catch (std::exception & err) 
	{
		std::cerr << err.what() << std::endl;
	}
	try
	{
		std::cout << WHIT "\n////////////////ROBOTOMY TEST\\\\\\\\\\\\\\\\" RESET << std::endl;
		Bureaucrat	test(1, "Truc");
		AForm		*form = new RobotomyRequestForm("Zorp");

		std::cout << "" << std::endl;
		test.signForm(*form);
		test.executeForm(*form);
		std::cout << "" << std::endl;

		delete form;
	}
	catch (std::exception & err) 
	{
		std::cerr << err.what() << std::endl;
	}
	return (0);
}
