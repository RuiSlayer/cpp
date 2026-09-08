/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:30:54 by rucosta           #+#    #+#             */
/*   Updated: 2026/09/08 14:30:20 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_w1 = NULL;
}

HumanB::HumanB(std::string name, Weapon	*w1)
{
	this->_name = name;
	this->_w1 = w1;
}
HumanB::~HumanB(void)
{
	std::cout << "HumanB " << _name << " has been destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &w1)
{
	this->_w1 = &w1;
}

void HumanB::attack(void)
{
	if (_w1)
		std::cout << _name << " attacks with their " << _w1->getType() << std::endl;
	else
		std::cout << _name << " has no weapon" << std::endl;
}
