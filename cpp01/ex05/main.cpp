#include "Harl.hpp"

int	main(void)
{
	Harl	test;

	test.complain("debug");
	test.complain("info");
	test.complain("warning");
	test.complain("error");
	test.complain("huh");
	return (0);
}
