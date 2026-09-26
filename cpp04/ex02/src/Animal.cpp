/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 21:44:53 by slayer            #+#    #+#             */
/*   Updated: 2026/09/25 21:44:54 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Default constructor
Animal::Animal(void)
{
	std::cout << GREEN << "Animal: Default constructor called" << RESET << std::endl;
}
Animal::Animal(std::string type) : type(type)
{
	std::cout << GREEN << "Animal: " << type << " constructor called" << RESET << std::endl;
}

// Copy constructor
Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << YELLOW << "Animal: Copy constructor called" << RESET << std::endl;
}

// Copy assignment operator
Animal &Animal::operator=(const Animal &other)
{
	std::cout << YELLOW << "Animal: Assignment operator called" << RESET << std::endl;

	if (this != &other)
		type = other.type;

	return (*this);
}

// Destructor
Animal::~Animal(void)
{
	std::cout << RED << "Animal: Destructor called" << RESET << std::endl;
}

void Animal::makeSound()
{
	std::cout << GREEN << "Animal sounds" << RESET << std::endl;
}
