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

void	Pushing(std::vector<int> &vec, int n)
{
	if (vec.empty()) //if no element yet just pushback
	{
		vec.push_back(n);
		return ;
	}
	std::vector<int>::iterator it;
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

void	Recursive(std::vector<std::pair<int, int> >& bector, std::vector<int> &bigtor, std::vector<int> &smalltor, size_t y = 0)
{
	if (y >= bector.size())
		return ;
	if (bector[y].first > bector[y].second) //checking which is larger in pair
	{
		Pushing(bigtor, bector[y].first);
		Pushing(smalltor, bector[y].second);
	}
	else
	{
		Pushing(bigtor, bector[y].second);
		Pushing(smalltor, bector[y].first);
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
	while (smalltor.size() != 1)
	{
		it = std::lower_bound(bigtor.begin(), bigtor.end() + 1, smalltor.back());
		bigtor.insert(it, smalltor.back());
		smalltor.pop_back();
	}

	///////DISPLAY////////
	std::cout << "/////BIGTOR" << std::endl;
	for (it = bigtor.begin(); it != bigtor.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "/////SMALLTOR" << std::endl;
	for (it = smalltor.begin(); it != smalltor.end(); ++it)
		std::cout << *it << std::endl;
}
/*
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
	while (smalldek.size() != 1)
	{
		it = std::lower_bound(bigdek.begin(), bigdek.end() + 1, smalldek.back());
		bigdek.insert(it, smalldek.back());
		smalldek.pop_back();
	}

	
	///////DISPLAY////////
	std::cout << "/////BIGTOR" << std::endl;
	for (it = bigtor.begin(); it != bigtor.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "/////SMALLTOR" << std::endl;
	for (it = smalltor.begin(); it != smalltor.end(); ++it)
		std::cout << *it << std::endl;
		
}
*/
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (std::cout << RED "Error:args" RESET << std::endl, 1);
	if (Parse(argv))
		return (std::cout << RED "Error:only positive numbers pwease uwu and no '+'" RESET << std::endl, 1);
	Vectoring(argv);
	return (0);
}
