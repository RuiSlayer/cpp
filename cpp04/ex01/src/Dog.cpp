/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 21:53:50 by slayer            #+#    #+#             */
/*   Updated: 2026/09/26 14:43:47 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Default constructor
Dog::Dog(void)
{
	std::cout << GREEN << "Dog: Default constructor called" << RESET << std::endl;
	type = "Dog";
	brain = new Brain();
}

// Copy constructor
Dog::Dog(const Dog &other)  : Animal::Animal(other)
{
	std::cout << YELLOW << "Dog: Copy constructor called" << RESET << std::endl;
	brain = new Brain(*other.brain);
}

// Copy assignment operator
Dog &Dog::operator=(const Dog &other)
{
	std::cout << YELLOW << "Dog: Assignment operator called" << RESET << std::endl;

	if (this != &other)
	{
		type = other.type;
		*brain = *other.brain;
	}
	return (*this);
}

// Destructor
Dog::~Dog(void)
{
	std::cout << RED << "Dog: Destructor called" << RESET << std::endl;
	delete brain;
}

void Dog::setBrainIdea(unsigned int index, std::string idea)
{
	brain->setIdea(index, idea);
}

std::string Dog::getBrainIdea(unsigned int index) const
{
	return (brain->getIdea(index));
}

void Dog::makeSound()
{
	std::cout << "Woof Woof Woof" << std::endl;
}
