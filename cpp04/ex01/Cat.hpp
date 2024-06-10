#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	private:
	Brain*	_brain;
	public:
	Cat();
	~Cat();
	Cat(const Cat &dup);
	Cat &operator=(const Cat &dup);
	void	makeSound() const;
	Brain	*getBrain() const;
};

#endif
