/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:24:35 by rucosta           #+#    #+#             */
/*   Updated: 2026/09/07 14:42:41 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	randomChump("kiko");
	Zombie *rui = newZombie("rui");
	rui->announce();
	delete rui;
	Zombie leo("leo");
	leo.announce();

	return (0);
}