/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:30:46 by rucosta           #+#    #+#             */
/*   Updated: 2026/09/08 14:54:49 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w1) : _name(name), _w1(w1) {}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << _name << " has been destroyed" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _w1.getType() << std::endl;
}
