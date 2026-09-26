#include "../inc/Brain.hpp"

// Default constructor
Brain::Brain(void)
{
	std::cout << GREEN << "Brain: Default constructor called" << RESET << std::endl;
}

// Copy constructor
Brain::Brain(const Brain &other)
{
	std::cout << YELLOW << "Brain: Copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

// Copy assignment operator
Brain &Brain::operator=(const Brain &other)
{
	std::cout << YELLOW << "Brain: Assignment operator called" << RESET << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}

// Destructor
Brain::~Brain(void)
{
	std::cout << RED << "Brain: Destructor called" << RESET << std::endl;
}

std::string Brain::getIdea(unsigned int index)
{
	return (ideas[index]);
}

void Brain::setIdea(unsigned int index, std::string idea)
{
	if (index >= 100)
	{
		std::cout << RED << "invalid index" << RESET << std::endl;
		return ;
	}
	ideas[index] = idea;
}
