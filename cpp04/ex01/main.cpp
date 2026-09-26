#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/Brain.hpp"

int main()
{
	std::cout << "===============================================" << std::endl;
	std::cout << "=== Array of 10 Animal*, half Dog half Cat ===" << std::endl;
	std::cout << "===============================================" << std::endl;
	{
		Animal *animals[10];

		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

		std::cout << "-- calling makeSound() through Animal* --" << std::endl;
		for (int i = 0; i < 10; i++)
			animals[i]->makeSound();

		std::cout << "-- deleting every Animal, directly as Animal* --" << std::endl;
		for (int i = 0; i < 10; i++)
			delete animals[i];
	}

	std::cout << "\n=============================" << std::endl;
	std::cout << "=== Deep copy proof: Dog ===" << std::endl;
	std::cout << "=============================" << std::endl;
	{
		Dog original;
		original.setBrainIdea(0, "Build a robot");

		std::cout << "original idea[0] before copy: " << original.getBrainIdea(0) << std::endl;

		Dog copy(original);
		std::cout << "copy idea[0] right after copy: " << copy.getBrainIdea(0) << std::endl;

		copy.setBrainIdea(0, "Take over the world");

		std::cout << "-- after modifying the COPY's idea[0] --" << std::endl;
		std::cout << "original idea[0]: " << original.getBrainIdea(0) << std::endl;
		std::cout << "copy idea[0]:     " << copy.getBrainIdea(0) << std::endl;
		std::cout << "(if these two lines differ, the copy is deep; if they match, it's shallow)" << std::endl;
	}

	std::cout << "\n============================================" << std::endl;
	std::cout << "=== Deep copy proof: Cat (via operator=) ==" << std::endl;
	std::cout << "============================================" << std::endl;
	{
		Cat catOriginal;
		catOriginal.setBrainIdea(1, "Knock things off tables");

		Cat catAssigned;
		catAssigned = catOriginal;

		catAssigned.setBrainIdea(1, "Sleep 20 hours a day");

		std::cout << "catOriginal idea[1]: " << catOriginal.getBrainIdea(1) << std::endl;
		std::cout << "catAssigned idea[1]: " << catAssigned.getBrainIdea(1) << std::endl;
		std::cout << "(again, these should differ for a correct deep operator=)" << std::endl;
	}

	std::cout << "\n====================" << std::endl;
	std::cout << "=== End of main ===" << std::endl;
	std::cout << "====================" << std::endl;
	return (0);
}