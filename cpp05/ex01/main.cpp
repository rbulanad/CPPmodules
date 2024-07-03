#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try 
	{
		Bureaucrat	test(5, "Trevor");
		Bureaucrat	test2(5, "Rock");
		Form		form("pop", 10, 5);
		std::cout << "" << std::endl;


		std::cout << test << std::endl;
		std::cout << "Decreasing grade by 100" << std::endl;
		test.decr(100);
		std::cout << test << std::endl;
		std::cout << "Increasing grade by 10" << std::endl;
		test.incr(10);
		std::cout << test << std::endl;

		std::cout << form << std::endl;
		test.signForm(form);
		std::cout << test2 << std::endl;
		test2.signForm(form);
		std::cout << form << std::endl;
		test.incr(90);
		std::cout << "Increasing grade by 90" << std::endl;
		std::cout << test << std::endl;
		std::cout << "Trying to sign form" << std::endl;
		test.signForm(form);
	}
	catch (std::exception & err) 
	{
		std::cerr << err.what() << std::endl;
	}
	return (0);
}
