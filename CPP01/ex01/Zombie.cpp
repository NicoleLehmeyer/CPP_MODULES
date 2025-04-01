/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:14:55 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:14:56 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie& Zombie::operator=(const Zombie& other)
{
    this->_name = other._name;
    return (*this);
}

Zombie::~Zombie() {}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiiinnnzzzZ..." << std::endl;
}

/*
Zombie::Zombie() {
    std::cout << "Zombie default constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
    std::cout << "Zombie string constructor called" << std::endl;
    this->_name = name;
}

Zombie& Zombie::operator=(const Zombie& other) {
    std::cout << "Zombie copy assignment operator called" << std::endl;
    this->_name = other._name;
    return (*this);
}

Zombie::~Zombie()
{
    std::cout <<"Zombie " << _name << " deconstructed." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiiinnnzzzZ..." << std::endl;
}
*/

