/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:29:23 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 11:29:24 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("A Random Animal") {std::cout << "Default Animal Constructor Called." << std::endl;}
Animal::Animal(std::string type) {this->_type = type; std::cout << "Parametised Animal Constructor Called." << std::endl;}
Animal::Animal(const Animal &copy) {*this = copy, std::cout << "Animal Copy Constructor Called." << std::endl;}
Animal& Animal::operator=(const Animal &copy)
{
	std::cout << "Animal Copy Assignment Operator Called." << std::endl;
	this->_type = copy.getType();
	return (*this);
}
Animal::~Animal() {std::cout << "Animal Destructor Called." << std::endl;}

void Animal::setType(std::string type) {this->_type = type;}
std::string Animal::getType(void) const {return (this->_type);}

void Animal::makeSound() const {std::cout << getType() << ":  *ANIMAL SOUNDS*" << std::endl;}
