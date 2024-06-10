#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat: public AAnimal
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
