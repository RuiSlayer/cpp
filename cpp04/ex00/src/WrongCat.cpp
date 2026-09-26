#include "../inc/WrongCat.hpp"


// Default constructor
WrongCat::WrongCat(void)
{
	std::cout << GREEN << "WrongCat: Default constructor called" << RESET << std::endl;
	type = "WrongCat";
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal::WrongAnimal(other)
{
	std::cout << YELLOW << "WrongCat: Copy constructor called" << RESET << std::endl;
}

// Copy assignment operator
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << YELLOW << "WrongCat: Assignment operator called" << RESET << std::endl;

	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

// Destructor
WrongCat::~WrongCat(void)
{
	std::cout << RED << "WrongCat: Destructor called" << RESET << std::endl;
}

void WrongCat::makeSound()
{
	std::cout << "... ?!? ..." << std::endl;
}
