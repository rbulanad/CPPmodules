#include  "Bureaucrat.hpp"

int	main()
{
	try 
	{
		Bureaucrat test(150, "Trevor");


		std::cout << test << std::endl;
		std::cout << "Increasing grade by 50" << std::endl;
		test.incr(50);
		std::cout << test << std::endl;
		std::cout << "Decreasing grade by 100" << std::endl;
		test.decr(100);
		std::cout << test << std::endl;
	}
	catch (std::exception & err) 
	{
		std::cerr << err.what() << std::endl;
	}
	return (0);
}
