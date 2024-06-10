#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "----ANIMAL----" << std::endl;
	const Animal* ani = new Animal();
	std::cout << "----CAT----" << std::endl;
	const Animal* cat = new Cat();
	std::cout << "----DOG----" << std::endl;
	const Animal* dog = new Dog();
	std::cout << "----WRONG ANIMAL----" << std::endl;
	const WrongAnimal* wani = new WrongAnimal();
	std::cout << "----WRONG CAT----" << std::endl;
	const WrongAnimal* wcat = new WrongCat();
	std::cout << "" << std::endl;
	std::cout << "----TYPES----" << std::endl;

	std::cout << ani->getType() << "		animal" << std::endl;
	std::cout << dog->getType() << "		dog" << std::endl;
	std::cout << cat->getType() << "		cat" << std::endl;
	std::cout << wani->getType() << "		wrong animal" << std::endl;
	std::cout << wcat->getType() << "		wrong cat" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "----SOUNDS----" << std::endl;
	std::cout << "cat sound: ";
	cat->makeSound(); //will output the cat sound!
	std::cout << "dog sound: ";
	dog->makeSound();
	std::cout << "animal sound: ";
	ani->makeSound();
	std::cout << "wrong animal sound: ";
	wani->makeSound();
	std::cout << "wrong cat sound: ";
	wcat->makeSound();
	
	delete ani;
	delete cat;
	delete dog;
	delete wani;
	delete wcat;
	return (0);
}
