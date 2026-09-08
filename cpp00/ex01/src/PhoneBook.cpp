/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:21:30 by slayer            #+#    #+#             */
/*   Updated: 2026/09/08 21:42:21 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	std::cout << GREEN << "PhoneBook: Default constructor called"
		<< RESET << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << RED << "PhoneBook: Destructor called"
		<< RESET << std::endl;
}

std::string getField(std::string const &prompt)
{
	std::string input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (!input.empty())
			break;
		std::cout << RED << "Error: empty field, try again." << RESET << std::endl;
	}
	return input;
}

void PhoneBook::addContact()
{
	Contact newContact;

	newContact.setFirstName(getField("First name: "));
	newContact.setLastName(getField("Last name: "));
	newContact.setNickname(getField("Nickname: "));
	newContact.setPhoneNumber(getField("Phone number: "));
	newContact.setDarkestSecret(getField("Darkest secret: "));

	list[index % 8] = newContact;
	index++;
}

Contact PhoneBook::searchContact(void)
{
	std::string input;

	while (true)
	{
		std::cout << "index: ";
		std::getline(std::cin, input);
		if (!input.empty())
			break;
		std::cout << RED << "Error: empty field, try again." << RESET << std::endl;
	}
}
