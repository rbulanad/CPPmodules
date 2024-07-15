#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <algorithm>
# include <iostream>

#define BRED	"\033[1;31m"
#define BGRN	"\033[1;32m"
#define BWHT	"\033[1;37m"
#define CRESET	"\033[0m"

template <typename T>
int easyfind(T &container, int y)
{
	if (std::find(container.begin(), container.end(), y) == container.end())
	{
		std::cout << BRED "couldn't find shit sir" CRESET << std::endl;
		return (1);
	}
	std::cout << BGRN "found it !" CRESET << std::endl;
	return (0);
}

#endif
