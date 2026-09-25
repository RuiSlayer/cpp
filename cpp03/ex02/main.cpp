/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:32:11 by slayer            #+#    #+#             */
/*   Updated: 2026/09/25 17:31:05 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"
#include "inc/ScavTrap.hpp"
#include "inc/FragTrap.hpp"

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

	std::cout << "\n===================================================" << std::endl;
	std::cout << "=== ScavTrap construction/destruction chaining ===" << std::endl;
	std::cout << "===================================================" << std::endl;
	{
		std::cout << "-- constructing ScavTrap: expect ClapTrap ctor, then ScavTrap ctor --" << std::endl;
		ScavTrap grunt("Grunt");
		std::cout << "-- end of scope: expect ScavTrap dtor, then ClapTrap dtor --" << std::endl;
	}

	std::cout << "\n=====================================" << std::endl;
	std::cout << "=== ScavTrap default constructor ===" << std::endl;
	std::cout << "=====================================" << std::endl;
	{
		ScavTrap defaultScav;
		defaultScav.attack("scarecrow");
	}

	std::cout << "\n========================================================" << std::endl;
	std::cout << "=== ScavTrap attack() overriding ClapTrap::attack() ===" << std::endl;
	std::cout << "========================================================" << std::endl;
	{
		ScavTrap scav("Scrappy");
		scav.attack("rival gate"); // should print ScavTrap's own message, damage 20
	}

	std::cout << "\n==================================================" << std::endl;
	std::cout << "=== ScavTrap draining energy through attack() ===" << std::endl;
	std::cout << "==================================================" << std::endl;
	{
		ScavTrap energyTest("Drainer");
		for (int i = 0; i < 51; i++)
			energyTest.attack("wall"); // 50th succeeds, 51st fails (no energy)
	}

	std::cout << "\n=====================================" << std::endl;
	std::cout << "=== ScavTrap draining hit points ===" << std::endl;
	std::cout << "=====================================" << std::endl;
	{
		ScavTrap hpTest("Fragile");
		hpTest.takeDamage(150);   // more than 100 hp, should clamp to 0
		hpTest.attack("anything");   // fails, no hit points
		hpTest.beRepaired(10);       // fails, no hit points
	}

	std::cout << "\n===============================================" << std::endl;
	std::cout << "=== ScavTrap copy constructor / assignment ===" << std::endl;
	std::cout << "===============================================" << std::endl;
	{
		ScavTrap scavOriginal("ScavOriginal");
		scavOriginal.takeDamage(20);
		ScavTrap scavCopy(scavOriginal);
		ScavTrap scavAssigned;
		scavAssigned = scavOriginal;
		scavCopy.attack("copy-target");
		scavAssigned.attack("assigned-target");
	}

	std::cout << "\n===================================================" << std::endl;
	std::cout << "=== FragTrap construction/destruction chaining ===" << std::endl;
	std::cout << "===================================================" << std::endl;
	{
		std::cout << "-- constructing FragTrap: expect ClapTrap ctor, then FragTrap ctor --" << std::endl;
		FragTrap alpha("Alpha");
		std::cout << "-- end of scope: expect FragTrap dtor, then ClapTrap dtor --" << std::endl;
	}
 
	std::cout << "\n=====================================================" << std::endl;
	std::cout << "=== FragTrap default constructor / highFivesGuys ===" << std::endl;
	std::cout << "=====================================================" << std::endl;
	{
		FragTrap defaultFrag;
		defaultFrag.highFivesGuys();
		defaultFrag.attack("dummy"); // inherited ClapTrap::attack, 30 damage
	}
 
	std::cout << "\n====================================================" << std::endl;
	std::cout << "=== FragTrap draining energy (inherited attack) ===" << std::endl;
	std::cout << "====================================================" << std::endl;
	{
		FragTrap energyTest("Boomer");
		for (int i = 0; i < 101; i++)
			energyTest.attack("wall"); // 100th succeeds, 101st fails (no energy)
	}
 
	std::cout << "\n=====================================" << std::endl;
	std::cout << "=== FragTrap draining hit points ===" << std::endl;
	std::cout << "=====================================" << std::endl;
	{
		FragTrap hpTest("Cracked");
		hpTest.takeDamage(150);    // clamps to 0
		hpTest.attack("anything");    // fails (inherited ClapTrap guard)
		hpTest.beRepaired(10);        // fails (inherited ClapTrap guard)
	}
 
	std::cout << "\n===============================================" << std::endl;
	std::cout << "=== FragTrap copy constructor / assignment ===" << std::endl;
	std::cout << "===============================================" << std::endl;
	{
		FragTrap fragOriginal("FragOriginal");
		fragOriginal.takeDamage(20);
		FragTrap fragCopy(fragOriginal);
		FragTrap fragAssigned;
		fragAssigned = fragOriginal;
		fragCopy.attack("copy-target");
		fragAssigned.attack("assigned-target");
	}

	std::cout << "\n==================================================" << std::endl;
	std::cout << "=== End of main, remaining destructors fire =====" << std::endl;
	std::cout << "==================================================" << std::endl;
	return (0);
}

