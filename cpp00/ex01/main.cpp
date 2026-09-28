/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:20:44 by slayer            #+#    #+#             */
/*   Updated: 2026/09/28 22:16:01 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/PhoneBook.hpp"

int main(void)
{
	std::string expression;
	PhoneBook ContactList;

	signal(SIGINT, SIG_IGN);

	while (1)
	{
		std::cout << "command: ";
		if (!std::getline(std::cin, expression))
		{
			std::cout << std::endl << "EOF received, exiting." << std::endl;
			break;
		}
		if (expression == "EXIT")
			break;
		else if (expression == "ADD")
			ContactList.addContact();
		else if (expression == "SEARCH")
			ContactList.searchContact();
		else
		{
			std::cout << "command not found!" << std::endl;
			std::cout << "Enter one of the following command: ADD | SEARCH | EXIT " << std::endl;
		}
	}
	return (0);
}
