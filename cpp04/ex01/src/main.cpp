#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"

int main()
{
	std::cout << PINK << "\n --------Animal test-------- \n\n" << RESET;

	std::cout << "The animal:\n";
	const Animal* meta = new Animal();
	std::cout << "The cat:\n";
	const Animal* cat = new Cat();
	std::cout << "The dog:\n";
	const Animal* dog = new Dog();

	std::cout << '\n';
	std::cout << meta->getType() << " \n";
	std::cout << cat->getType() << " \n";
	std::cout << dog->getType() << " \n\n";
	
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	
	std::cout << "\nDestroying the animal:\n";
	delete meta;
	std::cout << "\nDestroying the dog:\n";
	delete dog;
	std::cout << "\nDestroying the cat:\n";
	delete cat;
	
	std::cout << PINK << "\n --------WrongAnimal test-------- \n\n" << RESET;
	
	const WrongAnimal* metaW = new WrongAnimal();
	std::cout << "Constructing the wrong cat:\n";
	const WrongAnimal* kitty = new WrongCat();
	
	std::cout << '\n';
	std::cout << metaW->getType() << " \n";
	std::cout << kitty->getType() << " \n\n";
	metaW->makeSound();
	kitty->makeSound();
	
	std::cout << "\nDestroying the wrong animal:\n";
	delete metaW;
	std::cout << "Destroying the wrong cat:\n";
	delete kitty;
	
	std::cout << PINK << "\n --------Copy constructors/assignment operator tests-------- \n\n" << RESET;

	std::cout << "For cats:\n";
	Cat	fluffy;
	Cat	furs(fluffy);
	Cat	bells;
	fluffy = bells;
	std::cout << "For dogs:\n";
	Dog	hatiko;
	Dog	barks;
	Dog	beethoven(hatiko);
	hatiko = barks;


    return 0;
}
