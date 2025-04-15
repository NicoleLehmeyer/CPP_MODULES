/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:01:49 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/09 17:01:50 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("name", 100, 100, 30) {std::cout << "FragTrap Default constructor called." << std::endl;}
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {std::cout << "FragTrap Parametised constructor called." << std::endl;}
FragTrap::~FragTrap() {std::cout << "FragTrap Destructor called." << std::endl;}
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {*this = copy; std::cout << "FragTrap Copy constructor called." << std::endl;}
FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap Copy assignment operator called." << std::endl;
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	std::cout << std::endl;
	if (this->getEnergyPoints() >= 1 && this->getHitPoints() >= 1)
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " cannot attack " << target << " due to insufficient energy or hit points." << std::endl;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << std::endl;
	std::cout << "FragTrap " << this->getName() << " requests positive high fives." << std::endl;
}
