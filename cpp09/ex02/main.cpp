#include "PmergeMe.hpp"

int	Parse(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		for (int y = 0; argv[i][y]; y++)
		{
			if (!isdigit(argv[i][y]))
				return (1);
		}
	}
	return (0);
}

template <typename Cont>
void	Pushing(Cont &vec, int n)
{
	if (vec.empty()) //if no element yet just pushback
	{
		vec.push_back(n);
		return ;
	}
	typename Cont::iterator it;
	for (it = vec.begin(); it != vec.end(); it++)
	{
		if (n < *it) //check for good position to insert new number
		{
			vec.insert(it, n);
			return ;
		}
	}
	vec.push_back(n);
}

template <typename Cont>
void	Pushing2(Cont &vec, int n)
{
	if (vec.empty()) //if no element yet just pushback
	{
		vec.push_back(n);
		return ;
	}
	typename Cont::iterator it;
	vec.push_back(n);
}


template <typename pair, typename cont>
void	Recursive(pair& bector, cont &bigtor, cont &smalltor, size_t y = 0)
{
	if (y >= bector.size())
		return ;
	if (bector[y].first > bector[y].second) //checking which is larger in pair
	{
		Pushing(bigtor, bector[y].first);
		Pushing2(smalltor, bector[y].second);
	}
	else
	{
		Pushing(bigtor, bector[y].second);
		Pushing2(smalltor, bector[y].first);
	}
	Recursive(bector, bigtor, smalltor, y + 1);

}

void	Vectoring(char **argv)
{
	std::vector<std::pair<int, int> > bector; //works like map
	int i = 1;
	while (argv[i])
	{
		if (!argv[i + 1])
		{
			bector.push_back(std::make_pair(atoi(argv[i]), -1)); //incase of uneven amount of nums
			break ;
		}
		bector.push_back(std::make_pair(atoi(argv[i]), atoi(argv[i+1])));
		i += 2;
	}
	std::vector<int> bigtor;
	std::vector<int> smalltor;
	Recursive(bector, bigtor, smalltor);  //iterate to sort biggest nums of each pair into another vector
	std::vector<int>::iterator it;
	while (!smalltor.empty())
	{
		it = std::lower_bound(bigtor.begin(), bigtor.end(), smalltor.back());
		if (smalltor.back() != -1)
			bigtor.insert(it, smalltor.back());
		smalltor.pop_back();
	}

	std::cout << "After: ";
	for (it = bigtor.begin(); it != bigtor.end(); ++it)
		std::cout << *it << " ";
	std::cout << "" << std::endl;
}

void	Dequeing(char **argv)
{
	std::deque<std::pair<int, int> > dek; //works like map
	int i = 1;
	while (argv[i])
	{
		if (!argv[i + 1])
		{
			dek.push_back(std::make_pair(atoi(argv[i]), -1)); //incase of uneven amount of nums
			break ;
		}
		dek.push_back(std::make_pair(atoi(argv[i]), atoi(argv[i+1])));
		i += 2;
	}
	std::deque<int> bigdek;
	std::deque<int> smalldek;
	Recursive(dek, bigdek, smalldek);  //iterate to sort biggest nums of each pair into another vector
	std::deque<int>::iterator it;
	while (!smalldek.empty())
	{
		it = std::lower_bound(bigdek.begin(), bigdek.end() + 1, smalldek.back());
		if (smalldek.back() != -1)
			bigdek.insert(it, smalldek.back());
		smalldek.pop_back();
	}
}

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (std::cout << RED "Error:args" RESET << std::endl, 1);
	if (Parse(argv))
		return (std::cout << RED "Error:only positive numbers pwease uwu and no '+'" RESET << std::endl, 1);

	std::cout << "Before: ";
	for (int i = 1; argv[i]; i++)
		std::cout << argv[i] << " ";
	std::cout << "" << std::endl;

	clock_t start = std::clock();
	Vectoring(argv);
	clock_t end = std::clock();

	double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << time << " us." << std::endl;

	start = std::clock();
	Dequeing(argv);
	end = std::clock();

	time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << time << " us." << std::endl;
	return (0);
}
