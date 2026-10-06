/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 21:55:29 by slayer            #+#    #+#             */
/*   Updated: 2026/10/06 23:00:40 by slayer           ###   ########.fr       */
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

// Comparison operators
bool Fixed::operator>(const Fixed &other) const
{
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->toFloat() != other.toFloat());
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() * other.getRawBits()) >> fractionalBits);
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() << fractionalBits) / other.getRawBits());
	return (result);
}

// Increment/decrement operators
Fixed &Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++(*this);
	return (temp);
}

Fixed &Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--(*this);
	return (temp);
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a > b)
		return (b);
	return (a);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a > b)
		return (b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if(a < b)
		return (b);
	return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a < b)
		return (b);
	return (a);
}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}
