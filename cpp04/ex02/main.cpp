/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:28:46 by slayer            #+#    #+#             */
/*   Updated: 2026/09/26 16:33:23 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/WrongAnimal.hpp"
#include "inc/WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "===============================" << std::endl;
	std::cout << "=== Animal is now abstract ===" << std::endl;
	std::cout << "===============================" << std::endl;

	std::cout << "The following line would NOT compile if uncommented:" << std::endl;
	std::cout << "    Animal a; // error: cannot declare variable 'a' to be of abstract type 'Animal'" << std::endl;
	// Animal a; // <- uncomment to see the compiler reject it

	std::cout << "\n============================================" << std::endl;
	std::cout << "=== Dog/Cat are still fully instantiable ==" << std::endl;
	std::cout << "============================================" << std::endl;
	{
		Dog d;
		Cat c;
		d.makeSound();
		c.makeSound();
	}

	std::cout << "\n================================================" << std::endl;
	std::cout << "=== Polymorphism through Animal* still works ==" << std::endl;
	std::cout << "================================================" << std::endl;
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

	std::cout << "\n===================================" << std::endl;
	std::cout << "=== Deep copy still works (Dog) ==" << std::endl;
	std::cout << "===================================" << std::endl;
	{
		Dog original;
		original.setBrainIdea(0, "Build a robot");
		Dog copy(original);
		copy.setBrainIdea(0, "Take over the world");
		std::cout << "original idea[0]: " << original.getBrainIdea(0) << std::endl;
		std::cout << "copy idea[0]:     " << copy.getBrainIdea(0) << std::endl;
	}

	std::cout << "\n========================================================" << std::endl;
	std::cout << "=== WrongAnimal/WrongCat unaffected by this exercise ==" << std::endl;
	std::cout << "========================================================" << std::endl;
	{
		std::cout << "-- WrongAnimal is NOT abstract: this still compiles and runs --" << std::endl;
		WrongAnimal wrongAnimalDirect; // still legal: WrongAnimal was never touched
		wrongAnimalDirect.makeSound();

		std::cout << "-- broken dispatch through WrongAnimal* still reproduces the bug --" << std::endl;
		WrongAnimal *wrongAnimal = new WrongCat();
		wrongAnimal->makeSound(); // still prints WrongAnimal's sound, not WrongCat's
		delete wrongAnimal;
	}

	std::cout << "\n===================" << std::endl;
	std::cout << "=== End of main ===" << std::endl;
	std::cout << "===================" << std::endl;
	return (0);
}
