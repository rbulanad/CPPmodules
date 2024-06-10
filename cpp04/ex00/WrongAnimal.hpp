#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:
	std::string	_type;
	public:
	WrongAnimal();
	WrongAnimal(std::string type);
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &dup);
	WrongAnimal &operator=(const WrongAnimal &dup);
	std::string 	getType() const;
	void	makeSound() const;
};

#endif
