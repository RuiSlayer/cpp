/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:32:11 by slayer            #+#    #+#             */
/*   Updated: 2026/09/24 18:02:17 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"

int main()
{
	std::cout << "=== Basic behaviour ===" << std::endl;
	ClapTrap zzz("Zzz-42");
	zzz.attack("training dummy");
	zzz.takeDamage(3);
	zzz.beRepaired(2);

	std::cout << "\n=== Draining energy ===" << std::endl;
	ClapTrap bob("Bob");
	for (int i = 0; i < 11; i++)
		bob.attack("wall"); // 10th succeeds, 11th should fail (no energy)

	std::cout << "\n=== Draining hit points ===" << std::endl;
	ClapTrap tom("Tom");
	tom.takeDamage(15); // brings hp to 0
	tom.attack("someone"); // should fail, no hit points
	tom.beRepaired(5);     // should fail, no hit points
	tom.takeDamage(5);     // should fail, already at 0

	std::cout << "\n=== Copy constructor / assignment ===" << std::endl;
	ClapTrap original("Original");
	original.takeDamage(4);
	ClapTrap copy(original);
	ClapTrap assigned;
	assigned = original;
	copy.attack("copy-target");
	assigned.attack("assigned-target");

	std::cout << "\n=== End of main, destructors will fire ===" << std::endl;
	return (0);
}
