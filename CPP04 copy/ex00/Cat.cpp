/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:29:58 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 11:30:01 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {std::cout << "CAT Constructor Called." << std::endl;}
Cat::Cat(const Cat &copy) : Animal(copy) {*this = copy, std::cout << "CAT Copy Constructor Called." << std::endl;}
Cat& Cat::operator=(const Cat &copy)
{
	std::cout << "CAT Copy Assignment Operator Called." << std::endl;
	this->_type = copy.getType();
	return (*this);
}
Cat::~Cat() {std::cout << "CAT Destructor Called." << std::endl;}

void Cat::makeSound() const {std::cout << this->getType() << ":              Meow meow meow meow" << std::endl;}

