/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:21:06 by slayer            #+#    #+#             */
/*   Updated: 2026/09/16 22:37:09 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include "Colors.h"
# include <csignal>
# include <cstdlib>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickname,
				std::string phoneNumber, std::string darkestSecret);
		~Contact(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickname(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);
		void setFirstName(std::string const &data);
		void setLastName(std::string const &data);
		void setNickname(std::string const &data);
		void setPhoneNumber(std::string const &data);
		void setDarkestSecret(std::string const &data);
		void displayContact(std::string index);
};

#endif
