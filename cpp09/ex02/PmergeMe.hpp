#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"
# define MAG	"\e[1;35m"

# include <cstdlib>
# include <iostream>
# include <vector>
# include <utility>

class	PmergeMe
{
	private:
	public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe &dup);
	PmergeMe &operator=(const PmergeMe &dup);
};

#endif
