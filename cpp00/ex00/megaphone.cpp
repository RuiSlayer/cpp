/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 19:31:24 by slayer            #+#    #+#             */
/*   Updated: 2026/09/29 00:21:42 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int	main(int argc, char **argv)
{
	if(argc != 2)
		return ((std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl) , 1);

	int	i = 0;
	while (argv[1][i])
	{
		std::cout << (char)std::toupper(argv[1][i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
