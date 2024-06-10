#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat: public Animal
{
	private:
	public:
	Cat();
	~Cat();
	Cat(const Cat &dup);
	Cat &operator=(const Cat &dup);
	void	makeSound() const;
};

#endif
