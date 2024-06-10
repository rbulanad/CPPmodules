#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	Animal
{
	protected:
	std::string	_type;
	public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();
	Animal(const Animal &dup);
	Animal &operator=(const Animal &dup);
	std::string 	getType() const;
	virtual void	makeSound() const;
	virtual Brain	*getBrain() const;
};

#endif
