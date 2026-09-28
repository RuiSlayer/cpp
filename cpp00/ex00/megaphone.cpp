/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 19:31:24 by slayer            #+#    #+#             */
/*   Updated: 2026/09/28 22:57:46 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int	ft_toupper(int c)
{
	if (!(c >= 'a' && c <= 'z'))
	{
		return (c);
	}
	c -= 32;
	return (c);
}

int	main(int argc, char **argv)
{
	if(argc != 2)
		return ((std::cout << "An argument have to be passed to the program!" << std::endl) , 1);

	int	i = 0;
	while (argv[1][i])
	{
		argv[1][i] = ft_toupper(argv[1][i]);
		i++;
	}

	std::cout <<  argv[1] << std::endl;

	return (0);
}
