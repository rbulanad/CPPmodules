#include "MutantStack.hpp"
#include <list>

# define BWHT	"\033[1;37m"
# define CRESET	"\033[0m"

void	mutantTest()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void	listTest()
{
	std::list<int> leest;

	leest.push_back(5);
	leest.push_back(17);

	std::cout << leest.back() << std::endl;

	leest.pop_back();

	std::cout << leest.size() << std::endl;

	leest.push_back(3);
	leest.push_back(5);
	leest.push_back(737);
	leest.push_back(0);

	std::list<int>::iterator it = leest.begin();
	std::list<int>::iterator ite = leest.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

int main()
{
	std::cout << BWHT "\n>>> SUBJECT TESTS\n" CRESET << std::endl;
	mutantTest();
	std::cout << BWHT "\n>>> LIST TESTS\n" CRESET << std::endl;
	listTest();
}
