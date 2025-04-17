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

Cat::Cat() : AbstractAnimal("Cat") {_catBrain = new Brain(); std::cout << "CAT Constructor Called." << std::endl;}
Cat::Cat(const Cat &copy) : AbstractAnimal(copy) {std::cout << "CAT Copy Constructor Called." << std::endl;}
Cat& Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		std::cout << "CAT Copy Assignment Operator Called." << std::endl;
		AbstractAnimal::operator=(copy);
		this->_type = copy.getType();
		if (_catBrain)
		{
			delete _catBrain;
		}
		_catBrain = new Brain(*copy._catBrain);
	}
	return (*this);
}

Cat::~Cat() {delete _catBrain; std::cout << "CAT Destructor Called." << std::endl;}

void Cat::makeSound() const {std::cout << this->getType() << ": Meow meow meow meow" << std::endl;}

const std::string Cat::getIdea(size_t i) const
{
	return (this->_catBrain->getIdea(i));
}

void Cat::setIdea(size_t i, std::string idea)
{
	this->_catBrain->setIdea(i, idea);
}