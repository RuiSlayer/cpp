/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 19:31:24 by slayer            #+#    #+#             */
/*   Updated: 2026/09/08 19:38:11 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include<iostream>

int	main(int argc, char **argv)
{
	if(argc != 2)
		return ((std::cout << "An argument have to be passed to the program!" << std::endl) , 1);

	std::string s1 = argv[1];
	std::transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	std::cout << s1 << std::endl;

	return (0);
}