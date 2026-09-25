/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:32:11 by slayer            #+#    #+#             */
/*   Updated: 2026/09/25 16:19:08 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"

int main()
{
	std::cout << "=================================" << std::endl;
	std::cout << "=== ClapTrap basic behaviour ===" << std::endl;
	std::cout << "=================================" << std::endl;
	{
		ClapTrap zzz("Zzz-42");
		zzz.attack("training dummy");
		zzz.takeDamage(3);
		zzz.beRepaired(2);
	}
 
	std::cout << "\n=================================" << std::endl;
	std::cout << "=== ClapTrap draining energy ===" << std::endl;
	std::cout << "=================================" << std::endl;
	{
		ClapTrap bob("Bob");
		for (int i = 0; i < 11; i++)
			bob.attack("wall"); // 10th succeeds, 11th fails (no energy left)
	}
 
	std::cout << "\n=====================================" << std::endl;
	std::cout << "=== ClapTrap draining hit points ===" << std::endl;
	std::cout << "=====================================" << std::endl;
	{
		ClapTrap tom("Tom");
		tom.takeDamage(15); // brings hp to 0
		tom.attack("someone");   // fails, no hit points
		tom.beRepaired(5);       // fails, no hit points
		tom.takeDamage(5);       // fails, already at 0
	}
 
	std::cout << "\n===================================" << std::endl;
	std::cout << "=== ClapTrap copy / assignment ===" << std::endl;
	std::cout << "===================================" << std::endl;
	{
		ClapTrap original("Original");
		original.takeDamage(4);
		ClapTrap copy(original);
		ClapTrap assigned;
		assigned = original;
		copy.attack("copy-target");
		assigned.attack("assigned-target");
	}

	std::cout << "\n===========================================" << std::endl;
	std::cout << "=== End of main, destructors will fire ===" << std::endl;
	std::cout << "===========================================" << std::endl;
	return (0);
}
