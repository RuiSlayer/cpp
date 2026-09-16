/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:21:20 by slayer            #+#    #+#             */
/*   Updated: 2026/09/16 19:39:12 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact(void)
{
	std::cout << YELLOW << "Contact: Default constructor called"
		<< RESET << std::endl;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname,
				std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;

	std::cout << YELLOW << "Contact: fields constructor called"
		<< RESET << std::endl;
}

Contact::Contact::~Contact(void)
{
	std::cout << RED << "Contact: Destructor called"
		<< RESET << std::endl;
}

std::string Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string Contact::getLastName(void)
{
	return (this->lastName);
}
std::string Contact::getNickname(void)
{
	return (this->nickname);
}
std::string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}
std::string Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

void Contact::setFirstName(std::string const &data)
{
	this->firstName = data;
}

void Contact::setLastName(std::string const &data)
{
	this->lastName = data;
}
void Contact::setNickname(std::string const &data)
{
	this->nickname = data;
}
void Contact::setPhoneNumber(std::string const &data)
{
	this->phoneNumber = data;
}
void Contact::setDarkestSecret(std::string const &data)
{
	this->darkestSecret = data;
}

std::string	truncate(std::string field)
{
	std::string newField;
	std::string spacing;

	if(field.length() == 10)
		return (field);
	if(field.length() < 10)
	{
		spacing.assign(10 - field.length(), ' ');
		return (newField = spacing + field);
	}
	newField = field.substr(0, 9);
	newField += '.';
	return(newField);
}

void Contact::displayContact(std::string index)
{
	std::cout << truncate("index") << "|" << truncate("first name") << "|" << truncate("last name") << "|"<< truncate("nickname") << std::endl;
	std::cout << truncate(index) << "|" << truncate(getFirstName()) << "|" << truncate(getLastName()) << "|" << truncate(getNickname()) << std::endl;
}
