/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractAnimal.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:29:23 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 11:29:24 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AbstractAnimal.hpp"

AbstractAnimal::AbstractAnimal() : _type("A Random AbstractAnimal") {std::cout << "Default AbstractAnimal Constructor Called." << std::endl;}
AbstractAnimal::AbstractAnimal(std::string type) {this->_type = type; std::cout << "Parametised AbstractAnimal Constructor Called." << std::endl;}
AbstractAnimal::AbstractAnimal(const AbstractAnimal &copy) {*this = copy, std::cout << "AbstractAnimal Copy Constructor Called." << std::endl;}
AbstractAnimal& AbstractAnimal::operator=(const AbstractAnimal &copy)
{
	std::cout << "AbstractAnimal Copy Assignment Operator Called." << std::endl;
	this->_type = copy.getType();
	return (*this);
}
AbstractAnimal::~AbstractAnimal() {std::cout << "AbstractAnimal Destructor Called." << std::endl;}

void AbstractAnimal::setType(std::string type) {this->_type = type;}
std::string AbstractAnimal::getType(void) const {return (this->_type);}