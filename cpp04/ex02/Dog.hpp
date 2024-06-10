#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog: public AAnimal
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
