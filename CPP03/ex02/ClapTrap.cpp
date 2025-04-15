/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:04:31 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/08 19:04:33 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Name"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {std::cout << "ClapTrap Default constructor called." << std::endl;}
ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {this->_name = name; std::cout << "ClapTrap Parametised constructor called." << std::endl;}
ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
{
	this->_name = name;
	this->_hitPoints = hitPoints;
	this->_energyPoints = energyPoints;
	this->_attackDamage = attackDamage;
}
ClapTrap::~ClapTrap() {std::cout << "ClapTrap Destructor called." << std::endl;}
ClapTrap::ClapTrap(const ClapTrap &copy) {*this = copy; std::cout << "ClapTrap Copy constructor called." << std::endl;}
ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	return (*this);
}

std::string ClapTrap::getName(void) const {return (this->_name);}
int ClapTrap::getHitPoints(void) const {return (this->_hitPoints);}
int ClapTrap::getEnergyPoints(void) const {return (this->_energyPoints);}
int ClapTrap::getAttackDamage(void) const {return (this->_attackDamage);}

void ClapTrap::setName(std::string name) {this->_name = name;}
void ClapTrap::setHitPoints(int const hitPoints) {this->_hitPoints = hitPoints;}
void ClapTrap::setEnergyPoints(int const energyPoints) {this->_energyPoints = energyPoints;}
void ClapTrap::setAttackDamage(int const attackDamage) {this->_attackDamage = attackDamage;}


void ClapTrap::attack(const std::string &target)
{
	std::cout << std::endl;
	if (this->getEnergyPoints() >= 1 && this->getHitPoints() >= 1)
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	else
		std::cout << "ClapTrap " << this->getName() << " cannot attack " << target << " due to insufficient energy or hit points." << std::endl;
	// When ClapTrap attacks, it causes its target to lose <attack damage> hit points
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << std::endl;
	std::cout << this->getName() << " Hit Points before takeDamage(" << amount << "):   " << this->getHitPoints() << std::endl;
	this->setHitPoints(getHitPoints() - amount);
	std::cout << this->getName() << " Hit Points after takeDamage(" << amount << "):   " << this->getHitPoints() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << std::endl;
	std::cout << this->getName() << " Energy Points before beRepaired(" << amount << "):   " << this->getEnergyPoints() << std::endl;
	this->setEnergyPoints(getEnergyPoints() - amount);
	std::cout << this->getName() << " Energy Points after beRepaired(" << amount << "):   " << this->getEnergyPoints() << std::endl;
}

