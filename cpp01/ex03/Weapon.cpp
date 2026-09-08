/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:27:28 by rucosta           #+#    #+#             */
/*   Updated: 2026/09/08 14:13:35 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}
Weapon::~Weapon(void)
{
	std::cout << _type << " has been destroyed" << std::endl;
}

std::string Weapon::getType(void)
{
	return (_type);
}
void Weapon::setType(std::string type)
{
	this->_type = type;
}
