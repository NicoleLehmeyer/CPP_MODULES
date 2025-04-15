/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:18:07 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/09 15:18:09 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("name", 100, 50, 20) {std::cout << "ScavTrap Default constructor called." << std::endl;}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {std::cout << "ScavTrap Parametised constructor called." << std::endl;}
ScavTrap::~ScavTrap() {std::cout << "ScavTrap Destructor called." << std::endl;}
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {*this = copy; std::cout << "ScavTrap Copy constructor called." << std::endl;}
ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy assignment operator called." << std::endl;
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << std::endl;
	if (this->getEnergyPoints() >= 1 && this->getHitPoints() >= 1)
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " cannot attack " << target << " due to insufficient energy or hit points." << std::endl;
	// When ClapTrap attacks, it causes its target to lose <attack damage> hit points
}
void ScavTrap::guardGate()
{
	std::cout << std::endl;
	std::cout << "ScavTrap " << this->getName() << " is in Gatekeeper mode." << std::endl;
}