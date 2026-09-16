/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:20:44 by slayer            #+#    #+#             */
/*   Updated: 2026/09/16 18:31:17 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/PhoneBook.hpp"

int main(void)
{
	std::string expression;
	PhoneBook ContactList;

	while (1)
	{
		std::cout << "comand: ";
		std::getline(std::cin, expression);
		if (expression == "EXIT")
		{
			return (0);
		}
		else if (expression == "ADD")
		{
			ContactList.addContact();
		}
		else if (expression == "SEARCH")
		{
			ContactList.searchContact();
		}
		else
		{
			std::cout << "command not found!" << std::endl;
			std::cout << "Enter one of the following command: ADD | SEARCH | EXIT " << std::endl;
		}
	}

	return (0);
}

