/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:36:55 by slayer            #+#    #+#             */
/*   Updated: 2026/09/24 18:01:23 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(void)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap: name constructor called" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap::ClapTrap(other)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

// Copy assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap: Assignment operator called" << std::endl;

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
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack, it has no hit points left!" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack, it has no energy points left!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
