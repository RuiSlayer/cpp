/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:21:12 by slayer            #+#    #+#             */
/*   Updated: 2026/09/16 19:41:44 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstdlib>
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
		void addContact(void);
		Contact getContact(int index);
		void searchContact(void);
};

#endif
