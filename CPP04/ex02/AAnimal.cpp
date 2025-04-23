/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:29:23 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 11:29:24 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("A Random AAnimal") {std::cout << "Default AAnimal Constructor Called." << std::endl;}
AAnimal::AAnimal(std::string type) {this->_type = type; std::cout << "Parametised AAnimal Constructor Called." << std::endl;}
AAnimal::AAnimal(const AAnimal &copy) {*this = copy, std::cout << "AAnimal Copy Constructor Called." << std::endl;}
AAnimal& AAnimal::operator=(const AAnimal &copy)
{
	std::cout << "AAnimal Copy Assignment Operator Called." << std::endl;
	this->_type = copy.getType();
	return (*this);
}
AAnimal::~AAnimal() {std::cout << "AAnimal Destructor Called." << std::endl;}

void AAnimal::setType(std::string type) {this->_type = type;}
std::string AAnimal::getType(void) const {return (this->_type);}