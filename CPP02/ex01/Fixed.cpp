/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:30:31 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/31 15:30:32 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// DEFAULT CONSTRUCTOR, instantiating a case with _raw = 0
Fixed::Fixed() : _raw(0)
{
	std::cout << "Default constructor called." << std::endl;
}

// DESTRUCTOR
Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;	
}

// COPY CONSTRUCTOR
Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

// INT CONSTRUCTOR
Fixed::Fixed(const int inty) : _raw(inty << _fractionalBits) // inty * 256
{
	std::cout << "Int constructor called." << std::endl;
}

// FLOAT CONSTRUCTOR
Fixed::Fixed(const float floaty) : _raw(roundf(floaty * (1 << _fractionalBits))) // floaty * 256, rounded
{
	std::cout << "Float constructor called." << std::endl;
}

// OVERLOADED ASSIGNMENT OPERATOR
Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called." << std::endl;
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
	std::cout << "getRawBits member function called." << std::endl;
	return (this->_raw);
}

// SETTER
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	this->_raw = raw;
}

// OVERLOADED '<<' OPERATOR, 
std::ostream& operator<<(std::ostream& output, const Fixed& fixNumber)
{
	output << fixNumber.toFloat();
	return (output);
}
