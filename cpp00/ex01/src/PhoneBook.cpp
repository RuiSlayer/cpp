/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:21:30 by slayer            #+#    #+#             */
/*   Updated: 2026/09/28 22:26:46 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook(void) : index(0)
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
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl << "EOF received, exiting." << std::endl;
			std::exit(0);
		}
		if (!input.empty())
			break;
		std::cout << RED << "Error: empty field, try again." << RESET << std::endl;
	}
	return input;
}

void PhoneBook::addContact(void)
{
	std::string firstName_tmp;
	std::string lastName_tmp;
	std::string nickname_tmp;
	std::string phoneNumber_tmp;
	std::string darkestSecret_tmp;

	firstName_tmp = getField("First name: ");
	lastName_tmp = getField("Last name: ");
	nickname_tmp = getField("Nickname: ");
	phoneNumber_tmp = getField("Phone number: ");
	darkestSecret_tmp = getField("Darkest secret: ");

	Contact newContact(firstName_tmp, lastName_tmp, nickname_tmp, phoneNumber_tmp, darkestSecret_tmp);

	list[index % 8] = newContact;
	index++;
}

Contact PhoneBook::getContact(int index)
{
	return (this->list[index]);
}

static int isValidIndex(std::string input, int &tmpIndex)
{
	bool isValid = true;

	if (input.empty())
		{
			std::cout << RED << "Error: empty field, try again." << RESET << std::endl;
			return (0);
		}
		for (size_t i = 0; i < input.length(); i++)
		{
			if (!std::isdigit(static_cast<unsigned char>(input[i])))
			{
				isValid = false;
				break;
			}
		}
		if (!isValid)
		{
			std::cout << RED << "Error: index must be a number." << RESET << std::endl;
			return (0);
		}
		tmpIndex = std::atoi(input.c_str());
		if (tmpIndex < 0 || tmpIndex > 7)
		{
			std::cout << RED << "Error: index must be between 0 and 7." << RESET << std::endl;
			return (0);
		}
		return(1);
}

void PhoneBook::searchContact(void)
{
	std::string input;
	Contact c;
	int tmpIndex;
	while (true)
	{
		std::cout << "index: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl << "EOF received, exiting." << std::endl;
			std::exit(0);
		}
		if (isValidIndex(input, tmpIndex))
			break;
	}
	c = getContact(tmpIndex);
	c.displayContact(input);
}
