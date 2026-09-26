#include "../inc/Cat.hpp"

// Default constructor
Cat::Cat(void)
{
	std::cout << GREEN << "Cat: Default constructor called" << RESET << std::endl;
	type = "Cat";
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal::Animal(other)
{
	std::cout << YELLOW << "Cat: Copy constructor called" << RESET << std::endl;
}

// Copy assignment operator
Cat &Cat::operator=(const Cat &other)
{
	std::cout << YELLOW << "Cat: Assignment operator called" << RESET << std::endl;

	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

// Destructor
Cat::~Cat(void)
{
	std::cout << RED << "Cat: Destructor called" << RESET << std::endl;
}

void Cat::makeSound()
{
	std::cout << "miau miau miau" << std::endl;
}
