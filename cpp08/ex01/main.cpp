#include "Span.hpp"
#include <iostream>

void	testSubject(void)
{
	std::cout << BWHT "\n>>> RUNNING SUBJECT TESTS\n" CRESET << std::endl;
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	testExceptions(void)
{
	std::cout << BWHT "\n>>> RUNNING EXCEPTIONS TESTS\n" CRESET << std::endl;
	/* Overfilling the span */
	std::cout << BWHT << "-------" << std::endl;
	std::cout << BWHT "[!] Overfilling the span." CRESET << std::endl;
	try {
		Span	sp = Span(2);

		sp.addNumber(1);
		std::cout << "added 1" << std::endl;
		sp.addNumber(2);
		std::cout << "added 2" << std::endl;
		sp.addNumber(3);
		std::cout << "added 3" << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	/* Getting shortest span without enough values */
	std::cout << BWHT << "-------" << std::endl;
	std::cout << BWHT "[!] Requesting shortest span without enough values." CRESET << std::endl;
	try {
		Span	sp = Span(1);

		sp.addNumber(1);
		std::cout << "added 1" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	/* Getting longest span without enough values */
	std::cout << BWHT << "-------" << std::endl;
	std::cout << BWHT "[!] Requesting longest span without enough values." CRESET << std::endl;
	try {
		Span	sp = Span(1);

		sp.addNumber(1);
		std::cout << "added 1" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << BWHT << "-------" << CRESET << std::endl;
	std::cout << BWHT "[!] Exceptions tests are done." CRESET << std::endl;
}

void	testRandomFill(void)
{
	std::cout << BWHT "\n>>> RUNNING RANDOM-FILL TESTS\n" CRESET << std::endl;
	/* Randomly filling span, getting shortest and longest */
	try {
		Span	sp = Span(10000);

		sp.randomFill(10000);
		std::cout << "added a shitload of numbers (10 000)" << std::endl;
		std::cout << "Shortest span: " BCYN << sp.shortestSpan() << CRESET << std::endl;
		std::cout << "Longest span: " BCYN << sp.longestSpan() << CRESET << std::endl;
	} catch (std::exception &exception) {
		std::cout << BRED "[Span] " CRESET "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
}

int	main()
{
	testSubject();
	testExceptions();
	testRandomFill();

	return 0;
}
