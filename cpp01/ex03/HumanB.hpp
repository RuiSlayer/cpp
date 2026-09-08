/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:24:06 by rucosta           #+#    #+#             */
/*   Updated: 2026/09/08 14:29:32 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon	*_w1;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon	*w1);
		~HumanB(void);
		void setWeapon(Weapon &w1);
		void attack(void);
};

#endif