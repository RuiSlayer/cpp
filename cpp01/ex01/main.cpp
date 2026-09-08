/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:24:35 by rucosta           #+#    #+#             */
/*   Updated: 2026/09/07 17:28:15 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	N = 10;
	std::string name = "rui";

	Zombie* horde = zombieHorde( N, name);

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;

	return (0);
}
