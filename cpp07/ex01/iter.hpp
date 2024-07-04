#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T>
void	display(T oh)
{
	std::cout << oh << std::endl;
}

template <typename T>
void	iter(T *addr, int len, void (*func)(T&))
{
	for (int i = 0; i < len; i++)
		func(addr[i]);
}

#endif
