#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	private:
	public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &dup);
	WrongCat &operator=(const WrongCat &dup);
	std::string getType() const;
	void	makeSound() const;
};

#endif
