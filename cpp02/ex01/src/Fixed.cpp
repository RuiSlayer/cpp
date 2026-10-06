/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 21:55:29 by slayer            #+#    #+#             */
/*   Updated: 2026/10/06 22:58:53 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int Fixed::fractionalBits;

// Default constructor
Fixed::Fixed(void) : fixedPoint(0)
{
	std::cout << "Fixed: Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &other):fixedPoint(other.fixedPoint)
{
	std::cout << "Fixed: Copy constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Fixed: int constructor called" << std::endl;
	fixedPoint = n << fractionalBits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Fixed: float constructor called" << std::endl;
	fixedPoint = roundf(n * (1 << fractionalBits));
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

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(fixedPoint) / (1 << fractionalBits));
}
int Fixed::toInt( void ) const
{
	return (fixedPoint >> fractionalBits);
}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}
