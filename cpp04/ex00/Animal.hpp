#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

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
};

#endif
