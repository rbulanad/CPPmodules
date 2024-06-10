#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain construct" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destruct" << std::endl;
}

Brain::Brain(const Brain &dup)
{
	*this = dup;
}

Brain &Brain::operator=(const Brain &dup)
{
	if (this != &dup)
	{
		for(int i = 0; i < 100; i++)
			ideas[i] = dup.ideas[i];
	}
	return *this;
}

std::string	*Brain::getIdeas()
{
	return ideas;
}
