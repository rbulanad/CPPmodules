#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog: public Animal
{
	private:
	public:
	Dog();
	~Dog();
	Dog(const Dog &dup);
	Dog &operator=(const Dog &dup);
	void	makeSound() const;
};

#endif
