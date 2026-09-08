/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 17:10:41 by rucosta           #+#    #+#             */
/*   Updated: 2026/09/08 17:17:19 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Harl.hpp"

int main(void)
{
	Harl h1;
	h1.complain("DEBUG");
	h1.complain("INFO");
	h1.complain("WARNING");
	h1.complain("ERROR");

	return 0;
}
