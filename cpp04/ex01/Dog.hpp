#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	private:
	Brain*	_brain;
	public:
	Dog();
	~Dog();
	Dog(const Dog &dup);
	Dog &operator=(const Dog &dup);
	void	makeSound() const;
	Brain	*getBrain() const;
};

#endif
