/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:33:43 by slayer            #+#    #+#             */
/*   Updated: 2026/09/26 16:33:44 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Default constructor
Cat::Cat(void)
{
	std::cout << GREEN << "Cat: Default constructor called" << RESET << std::endl;
	type = "Cat";
	brain = new Brain();
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal::Animal(other)
{
	std::cout << YELLOW << "Cat: Copy constructor called" << RESET << std::endl;
	brain = new Brain(*other.brain);
}

// Copy assignment operator
Cat &Cat::operator=(const Cat &other)
{
	std::cout << YELLOW << "Cat: Assignment operator called" << RESET << std::endl;

	if (this != &other)
	{
		type = other.type;
		*brain = *other.brain;
	}
	return (*this);
}

// Destructor
Cat::~Cat(void)
{
	std::cout << RED << "Cat: Destructor called" << RESET << std::endl;
	delete brain;
}

void Cat::setBrainIdea(unsigned int index, std::string idea)
{
	brain->setIdea(index, idea);
}

std::string Cat::getBrainIdea(unsigned int index) const
{
	return (brain->getIdea(index));
}

void Cat::makeSound()
{
	std::cout << "miau miau miau" << std::endl;
}
