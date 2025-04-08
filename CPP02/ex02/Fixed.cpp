/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:31:32 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/31 15:31:33 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// DEFAULT CONSTRUCTOR, instantiating a case with _raw = 0
Fixed::Fixed() : _raw(0) {}

// DESTRUCTOR
Fixed::~Fixed() {}

// COPY CONSTRUCTOR
Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

// INT CONSTRUCTOR
Fixed::Fixed(const int inty) : _raw(inty << _fractionalBits) {} // inty * 256

// FLOAT CONSTRUCTOR
Fixed::Fixed(const float floaty) : _raw(roundf(floaty * (1 << _fractionalBits))) {} // floaty * 256, rounded

// OVERLOADED ASSIGNMENT OPERATOR
Fixed& Fixed::operator=(const Fixed &copy)
{
	this->_raw = copy.getRawBits();
	return (*this);
}

// CONVERT TO FLOAT
float Fixed::toFloat(void) const
{
	return ((float)this->_raw / (1 << this->_fractionalBits));
}

// CONVERT TO INT
int Fixed::toInt(void) const
{
	return (this->_raw >> this->_fractionalBits);
}

// GETTER
int Fixed::getRawBits(void) const
{
	return (this->_raw);
}

// SETTER
void Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

// OVERLOADED '<<' OPERATOR, 
std::ostream& operator<<(std::ostream& output, const Fixed& fixNumber)
{
	output << fixNumber.toFloat();
	return (output);
}

// *********************************************
// COMPARISON OPERATORS: ==, !=, <, <=, >, >=
// *********************************************
bool Fixed::operator==(const Fixed &b)
{
	if (this->_raw == b.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &b)
{
	if (this->_raw != b.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &b)
{
	if (this->_raw < b.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &b)
{
	if (this->_raw <= b.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed &b)
{
	if (this->_raw > b.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &b)
{
	if (this->_raw >= b.getRawBits())
		return (true);
	return (false);
}

// ***********************************
// ARITHMETIC OPERATORS: +, -, *, /
// ***********************************
Fixed Fixed::operator+(const Fixed &b) const
{
	return (Fixed(this->toFloat() + b.toFloat()));
}

Fixed Fixed::operator-(const Fixed &b) const
{
	return (Fixed(this->toFloat() - b.toFloat()));
}

Fixed Fixed::operator*(const Fixed &b) const
{
	return (Fixed(this->toFloat() * b.toFloat()));
}

Fixed Fixed::operator/(const Fixed &b) const
{
	return (Fixed(this->toFloat() / b.toFloat()));
}

// ***************************************************************
// INCREMENT & DECREMENT (PREFIX & POSTFIX) : i++, ++i, i--, --i
// ***************************************************************

Fixed& Fixed::operator++()
{
	this->_raw++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_raw++;
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->_raw--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_raw--;
	return (temp);
}

// *************
// MIN & MAX
// *************

Fixed& Fixed::min(Fixed &a,Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}