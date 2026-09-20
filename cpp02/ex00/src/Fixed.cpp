/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 21:55:29 by slayer            #+#    #+#             */
/*   Updated: 2026/09/20 22:49:40 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int Fixed::fractionalBits;

// Default constructor
Fixed::Fixed(void)
{
	std::cout << "Fixed: Default constructor called" << std::endl;

	fixedPoint = 0;
}

// Copy constructor
Fixed::Fixed(const Fixed &other):fixedPoint(other.fixedPoint)
{
	std::cout << "Fixed: Copy constructor called" << std::endl;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Fixed: Assignment operator called" << std::endl;

	if (this != &other)
	{
		fixedPoint = other.fixedPoint;
	}
	return (*this);
}

// Destructor
Fixed::~Fixed(void)
{
	std::cout << "Fixed: Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	fixedPoint = raw;
}
