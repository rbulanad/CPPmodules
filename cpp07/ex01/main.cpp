#include "iter.hpp"
#include <iostream>

int	main()
{
	int	intArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	double	dblArray[10] = {0.1, 1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0};
	
	std::string strArray[5] = {"ah", "oh", "ooh", "iih", "yi"};

	::iter(intArray, 10, &display);
	::iter(dblArray, 10, &display);
	::iter(strArray, 5, &display);

	return (0);
}
