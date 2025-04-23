/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:56:13 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 14:56:14 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("A Random WrongAnimal") {std::cout << "Default WrongAnimal Constructor Called." << std::endl;}
WrongAnimal::WrongAnimal(std::string type) {this->_type = type; std::cout << "Parametised WrongAnimal Constructor Called." << std::endl;}
WrongAnimal::WrongAnimal(const WrongAnimal &copy) {*this = copy, std::cout << "WrongAnimal Copy Constructor Called." << std::endl;}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy Assignment Operator Called." << std::endl;
	this->_type = copy.getType();
	return (*this);
}
WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal Destructor Called." << std::endl;}

void WrongAnimal::setType(std::string type) {this->_type = type;}
std::string WrongAnimal::getType(void) const {return (this->_type);}

void WrongAnimal::makeSound() const {std::cout << "  *WRONGANIMAL SOUNDS*" << std::endl;}



