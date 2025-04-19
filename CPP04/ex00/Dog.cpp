/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:29:51 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 11:29:52 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {std::cout << "DOG Constructor Called." << std::endl;}
Dog::Dog(const Dog &copy) : Animal(copy) {*this = copy, std::cout << "DOG Copy Constructor Called." << std::endl;}
Dog& Dog::operator=(const Dog &copy)
{
	std::cout << "DOG Copy Assignment Operator Called." << std::endl;
	this->_type = copy.getType();
	return (*this);
}
Dog::~Dog() {std::cout << "DOG Destructor Called." << std::endl;}

void Dog::makeSound() const {std::cout << this->getType() << ":              WOOF WOOF" << std::endl;}


