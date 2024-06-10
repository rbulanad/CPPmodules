#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain
{
	private:
	std::string	ideas[100];
	public:
	Brain();
	~Brain();
	Brain(const Brain &dup);
	Brain &operator=(const Brain &dup);
	std::string	*getIdeas();
};

#endif
