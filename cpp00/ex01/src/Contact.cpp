/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:21:20 by slayer            #+#    #+#             */
/*   Updated: 2026/09/14 17:11:20 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact(void)
{
	std::cout << YELLOW << "Contact: Default constructor called"
		<< RESET << std::endl;
}

Contact::Contact::~Contact(void)
{
	std::cout << RED << "Contact: Destructor called"
		<< RESET << std::endl;
}

std::string Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string Contact::getLastName(void)
{
	return (this->_lastName);
}
std::string Contact::getNickname(void)
{
	return (this->_nickname);
}
std::string Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);
}
std::string Contact::getDarkestSecret(void)
{
	return (this->_darkestSecret);
}

void Contact::setFirstName(std::string const &data)
{
	this->_firstName = data;
}

void Contact::setLastName(std::string const &data)
{
	this->_lastName = data;
}
void Contact::setNickname(std::string const &data)
{
	this->_nickname = data;
}
void Contact::setPhoneNumber(std::string const &data)
{
	this->_phoneNumber = data;
}
void Contact::setDarkestSecret(std::string const &data)
{
	this->_darkestSecret = data;
}

void Contact::displayContact(void)
{
	
}
