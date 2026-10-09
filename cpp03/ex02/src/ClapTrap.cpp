#include "../inc/ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(void) : name("Default"), type("ClapTrap: "), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Claptrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), type("ClapTrap: "), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Claptrap: " << name << " constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), type(other.type), hitPoints(other.hitPoints),
		energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "Claptrap: Copy constructor called" << std::endl;
}

// Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Claptrap: Assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		type = other.type;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "Claptrap: Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
	{
		std::cout << type <<  name << " cannot attack, it has no hit points left!" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << type << name << " cannot attack, it has no energy points left!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << type << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << type << name << " cannot take damage, it has no hit points left!" << std::endl;
		return ;
	}
	if (amount >= hitPoints)
		hitPoints = 0;
	else
		hitPoints -= amount;

	std::cout << type << name << " takes " << amount << " points of damage!" << " HP left: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << type << name << " cannot be repaired, it has no hit points left!" << std::endl;
		return ;
	}
	if(energyPoints == 0)
	{
		std::cout << type << name << " cannot repair, it has no energy points left!" << std::endl;
		return;
	}

	hitPoints += amount;
	energyPoints--;

	std::cout << type << name << " repaires " << amount << " hit points!" << " EP left: " << energyPoints << std::endl;
}
