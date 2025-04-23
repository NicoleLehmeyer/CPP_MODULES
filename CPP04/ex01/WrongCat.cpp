/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:56:03 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 14:56:05 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {std::cout << "WRONG CAT Constructor Called." << std::endl;}
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {*this = copy, std::cout << "WRONG CAT Copy Constructor Called." << std::endl;}
WrongCat& WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WRONG CAT Copy Assignment Operator Called." << std::endl;
	this->_type = copy.getType();
	return (*this);
}
WrongCat::~WrongCat() {std::cout << "WRONG CAT Destructor Called." << std::endl;}

void WrongCat::makeSound() const {std::cout << "  *WRONGCAT SOUNDS*" << std::endl;}


