#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"

int main()
{
	std::cout << PINK << "\n --------Animal test-------- \n" << RESET;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " \n";
	std::cout << i->getType() << " \n";
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << PINK << "\n --------WrongAnimal test-------- \n" << RESET;



    return 0;
}
