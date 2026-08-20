#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j; //should not create a leak
	delete i;

	AAnimal* animals[7];

	// AAnimal abstract; // gives out an error

	for (int i = 0; i < 4; i++){
		std::cout << "Creating cat" << i << ":\n";
		animals[i] = new Cat();
	}
	for (int i = 4; i < 7; i++){
		std::cout << "Creating dog" << i << ":\n";
		animals[i] = new Dog();
	}


	std::cout << PINK << "\nDEEP COPY TEST\n\n" << RESET; //two objs have different brains
	{
		std::cout << "*inside local scope, creating Dog and his copy*\n";
		
		Dog woof1;
		woof1.setIdea(0, "I need to eat my poop");
		std::cout << "woof1's idea: " << woof1.getIdea(0) << "\n";

		Dog woof2 =  woof1;
		std::cout << "\nwoof2's idea: " << woof2.getIdea(0);
		woof2.setIdea(0, "I want chocolat");

		std::cout << "\nwoof1's idea: " << woof1.getIdea(0);
		std::cout << "\nwoof2's idea: " << woof2.getIdea(0);
		std::cout << "\n...sooo different ideas, different brains\n\n";

		std::cout << "*leaving local scope, destroying both objects*:\n";
	}
	std::cout << PINK << "\nASSIGNMENT TEST\n" << RESET;
	{
		std::cout << "*inside local scope, creating Dog and his copy*\n";

		Cat meow1;
		meow1.setIdea(0, "Scratch something");
		std::cout << "\nMeow1's idea: " << meow1.getIdea(0) << "\n";

		Cat meow2;
		meow2.setIdea(0, "Wake up hooman");
		std::cout << "\n";
		std::cout << "Meow2's idea: " << meow2.getIdea(0) << "\n";

		meow2 = meow1;
		std::cout << "Meow2's idea after talking to meow1: " << meow2.getIdea(0) << "\n";
		std::cout << "*leaving local scope, destroying both objects:*\n";
	}


	std::cout << "\nDeleting the whole animals array:\n";
	for (int i = 0; i < 4; i++){
		std::cout << "Deleting cat" << i << ":\n";
		delete animals[i];
	}
	for (int i = 4; i < 7; i++){
		std::cout << "Deleting dog" << i << ":\n";
		delete animals[i];
	}

    return 0;
}
