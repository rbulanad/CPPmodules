#include "easyfind.hpp"
#include <vector>
#include <list>

int	main()
{
std::cout << BWHT "////VECTOR TEST\\\\\\\\" CRESET << std::endl;
std::vector<int> test;
	std::cout << "Vector of INTs created [1, 2, 3]." << std::endl;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	std::cout << "Trying to find '3'" << std::endl;
	easyfind(test, 3);
	std::cout << "Deleting '3'" << std::endl;
	test.pop_back();
	std::cout << "Trying to find '3' again " << std::endl;
	easyfind(test, 3);

	std::cout << "" << std::endl;

	std::cout << BWHT "////LIST TEST\\\\\\\\" CRESET << std::endl;
	std::list<int> test2;
	std::cout << "List of INTs created [1, 2, 3]" << std::endl;
	test2.push_back(1);
	test2.push_back(2);
	test2.push_back(3);
	std::cout << "Trying to find '3'" << std::endl;
	easyfind(test2, 3);
	std::cout << "Deleting '3'" << std::endl;
	test2.pop_back();
	std::cout << "Trying to find '3' again " << std::endl;
	easyfind(test2, 3);

	return (0);
}
