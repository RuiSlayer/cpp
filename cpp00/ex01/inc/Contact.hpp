/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:21:06 by slayer            #+#    #+#             */
/*   Updated: 2026/09/08 21:01:09 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include "Colors.h"

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
	public:
		Contact(void);
		~Contact(void);
		void setFirstName(std::string const &data);
		void setLastName(std::string const &data);
		void setNickname(std::string const &data);
		void setPhoneNumber(std::string const &data);
		void setDarkestSecret(std::string const &data);
};

#endif
