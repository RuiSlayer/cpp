/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 22:28:35 by slayer            #+#    #+#             */
/*   Updated: 2026/09/25 22:48:04 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/WrongAnimal.hpp"
#include "inc/WrongCat.hpp"

int main()
{
	std::cout << "=======================================" << std::endl;
	std::cout << "=== Basic construction / destruction =" << std::endl;
	std::cout << "=======================================" << std::endl;
	{
		Animal genericAnimal;
		Dog basicDog;
		Cat basicCat;

		std::cout << "genericAnimal type: " << std::endl;
		genericAnimal.makeSound();
		basicDog.makeSound();
		basicCat.makeSound();
	}

	std::cout << "\n======================================" << std::endl;
	std::cout << "=== Copy constructor / assignment ===" << std::endl;
	std::cout << "======================================" << std::endl;
	{
		Dog originalDog;
		Dog copiedDog(originalDog);
		copiedDog.makeSound();

		Cat originalCat;
		Cat assignedCat;
		assignedCat = originalCat;
		assignedCat.makeSound();
	}

	std::cout << "\n==================================================" << std::endl;
	std::cout << "=== Polymorphism: Animal* pointing at Dog/Cat ===" << std::endl;
	std::cout << "==================================================" << std::endl;
	{
		unsigned int nAnimals = 4;
		Animal *animals[4];

		animals[0] = new Dog();
		animals[1] = new Cat();
		animals[2] = new Dog();
		animals[3] = new Cat();

		std::cout << "-- calling makeSound() through Animal* --" << std::endl;
		for (unsigned int i = 0; i < nAnimals; i++)
			animals[i]->makeSound(); // should correctly print Dog/Cat sounds, not Animal's

		std::cout << "-- deleting through Animal*: expect Dog/Cat dtor THEN Animal dtor each time --" << std::endl;
		for (unsigned int i = 0; i < nAnimals; i++)
			delete animals[i];
	}

	std::cout << "\n====================================================" << std::endl;
	std::cout << "=== WrongAnimal / WrongCat: broken polymorphism ===" << std::endl;
	std::cout << "====================================================" << std::endl;
	{
		std::cout << "-- direct WrongCat call (should be WrongCat's own sound) --" << std::endl;
		WrongCat directCat;
		directCat.makeSound();

		std::cout << "-- WrongAnimal* pointing at WrongCat (demonstrates the bug) --" << std::endl;
		WrongAnimal *wrongAnimal = new WrongCat();
		wrongAnimal->makeSound(); // BUG: prints WrongAnimal's sound instead of WrongCat's
		delete wrongAnimal;       // also only WrongAnimal's destructor fires, if non-virtual
	}

	std::cout << "\n======================================" << std::endl;
	std::cout << "=== End of main ===" << std::endl;
	std::cout << "======================================" << std::endl;
	return (0);
}
