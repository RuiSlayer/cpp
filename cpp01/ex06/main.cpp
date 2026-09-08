/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 17:10:41 by rucosta           #+#    #+#             */
/*   Updated: 2026/09/08 17:43:38 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return(std::cout << "shoud be passed one argument for the message to be displayed!!!" << std::endl, 1);
	Harl h1;
	h1.complain(argv[1]);
	return 0;
}
