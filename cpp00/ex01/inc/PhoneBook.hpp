/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:21:12 by slayer            #+#    #+#             */
/*   Updated: 2026/09/08 20:39:04 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Colors.h"
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact list[8];
		int index;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact();
		Contact searchContact(void);
};

#endif
