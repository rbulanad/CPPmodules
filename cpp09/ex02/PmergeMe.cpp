#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &dup)
{
	*this = dup;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &dup)
{
	if (this != &dup) {}
	return *this;
}

