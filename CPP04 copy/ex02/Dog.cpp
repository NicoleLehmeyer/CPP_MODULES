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

Dog::Dog() : AbstractAnimal("Dog") {_dogBrain = new Brain(); std::cout << "DOG Constructor Called." << std::endl;}
Dog::Dog(const Dog &copy) : AbstractAnimal(copy) {_dogBrain = new Brain(*copy._dogBrain); std::cout << "DOG Copy Constructor Called." << std::endl;}
Dog& Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		std::cout << "DOG Copy Assignment Operator Called." << std::endl;
		AbstractAnimal::operator=(copy);
		this->_type = copy.getType();
		if (_dogBrain)
		{
			delete _dogBrain;
		}
		_dogBrain = new Brain(*copy._dogBrain);
	}
	return (*this);
}
Dog::~Dog() {delete _dogBrain; std::cout << "DOG Destructor Called." << std::endl;}

void Dog::makeSound() const {std::cout << this->getType() << ": WOOF WOOF" << std::endl;}

const std::string Dog::getIdea(size_t i) const
{
	return (this->_dogBrain->getIdea(i));
}

void Dog::setIdea(size_t i, std::string idea)
{
	this->_dogBrain->setIdea(i, idea);
}

