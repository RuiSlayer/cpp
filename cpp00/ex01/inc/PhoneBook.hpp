/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:21:12 by slayer            #+#    #+#             */
/*   Updated: 2026/09/16 22:36:38 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

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
