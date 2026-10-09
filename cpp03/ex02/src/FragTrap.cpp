#include "../inc/FragTrap.hpp"

// Default constructor
FragTrap::FragTrap(void)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	type = "FragTrap: ";
	std::cout << "FragTrap: Default constructor called" << std::endl;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	type = "FragTrap: ";
	std::cout << "FragTrap: " << name << " constructor called" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap::ClapTrap(other)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
}


// Copy assignment operator
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap: Assignment operator called" << std::endl;

	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return (*this);
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap requests a positive high-five!" << std::endl;
}
