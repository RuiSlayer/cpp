#include "../inc/WrongAnimal.hpp"


// Default constructor
WrongAnimal::WrongAnimal(void)
{
	std::cout << GREEN << "WrongAnimal: Default constructor called" << RESET << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << GREEN << "WrongAnimal: " << type << " constructor called" << RESET << std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << YELLOW << "WrongAnimal: Copy constructor called" << RESET << std::endl;
}

// Copy assignment operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << YELLOW << "WrongAnimal: Assignment operator called" << RESET << std::endl;

	if (this != &other)
		type = other.type;

	return (*this);
}

// Destructor
WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "WrongAnimal: Destructor called" << RESET << std::endl;
}

void WrongAnimal::makeSound()
{
	std::cout << GREEN << "WrongAnimal sounds" << RESET << std::endl;
}
