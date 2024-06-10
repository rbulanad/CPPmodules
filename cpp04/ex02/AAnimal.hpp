#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	AAnimal
{
	protected:
	std::string	_type;
	public:
	AAnimal();
	AAnimal(std::string type);
	virtual ~AAnimal();
	AAnimal(const AAnimal &dup);
	AAnimal &operator=(const AAnimal &dup);
	std::string 	getType() const;
	virtual void	makeSound() const = 0;
	virtual Brain	*getBrain() const;
};

#endif
