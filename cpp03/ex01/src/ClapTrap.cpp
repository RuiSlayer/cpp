/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:36:46 by slayer            #+#    #+#             */
/*   Updated: 2026/09/24 17:48:24 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(void) : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Claptrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Claptrap: name constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hitPoints(other.hitPoints),
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
		std::cout << "ClapTrap " << name << " cannot attack, it has no hit points left!" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack, it has no energy points left!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " cannot take damage, it has no hit points left!" << std::endl;
		return ;
	}
	if (amount >= hitPoints)
		hitPoints = 0;
	else
		hitPoints -= amount;

	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " cannot be repaired, it has no hit points left!" << std::endl;
		return ;
	}
	if(energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " cannot repair, it has no energy points left!" << std::endl;
		return;
	}

	hitPoints += amount;
	energyPoints--;

	std::cout << "ClapTrap " << name << " repaires " << amount << " hit points!" << std::endl;
}
