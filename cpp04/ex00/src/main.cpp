#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"

int main()
{
	std::cout << PINK << "\n --------Animal test-------- \n\n" << RESET;

	const Animal* meta = new Animal();
	std::cout << "The cat:\n";
	const Animal* cat = new Cat();
	std::cout << "The dog:\n";
	const Animal* dog = new Dog();

	std::cout << meta->getType() << " \n";
	std::cout << cat->getType() << " \n";
	std::cout << dog->getType() << " \n";

	meta->makeSound();
	cat->makeSound();
	dog->makeSound();

	delete meta;
	delete dog;
	delete cat;

	std::cout << PINK << "\n --------WrongAnimal test-------- \n\n" << RESET;

	const WrongAnimal* metaW = new WrongAnimal();
	std::cout << "Constructing the wrong cat:\n";
	const WrongAnimal* kitty = new WrongCat();
	
	std::cout << metaW->getType() << " \n";
	std::cout << kitty->getType() << " \n";
	metaW->makeSound();
	kitty->makeSound();

	delete metaW;
	std::cout << "Destroying the wrong cat:\n";
	delete kitty;

    return 0;
}
